// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1407c76d0 FUN_1407c76d0 body=186 status=ok
// SIG undefined FUN_1407c76d0(void)

undefined4 * FUN_1407c76d0(longlong param_1,undefined4 *param_2)

{
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *param_2 = 0xffffffff;
  param_2[1] = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  param_2[8] = 0;
  if (0x7fffffff < (uint)param_2[9]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  if (*(undefined2 **)(param_2 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_2 + 6) = 0;
  }
  param_2[2] = 0;
  *param_2 = *(undefined4 *)(param_1 + 0xb0);
  param_2[1] = *(undefined4 *)(param_1 + 0xb4);
  param_2[2] = *(undefined4 *)(param_1 + 0xb8);
  local_38 = *(undefined8 *)(param_1 + 0xc0);
  FString::FString(local_30,param_1 + 200);
  FSoftObjectPath::operator=(param_2 + 4,&local_38);
  return param_2;
}



// FUNCTION 1407c7790 FUN_1407c7790 body=273 status=ok
// SIG undefined FUN_1407c7790(void)

int * FUN_1407c7790(longlong param_1,int *param_2,longlong param_3)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    if (param_3 == *(longlong *)(param_1 + 0x280)) {
      *param_2 = *(int *)(param_1 + 0x288);
      return param_2;
    }
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 600)) {
      piVar6 = (int *)(*(longlong *)(param_1 + 0x250) + 0xd0);
      lVar7 = 0;
      do {
        plVar3 = *(longlong **)(piVar6 + -0x18);
        plVar4 = plVar3 + (longlong)piVar6[-0x16] * 0x15;
        for (; plVar3 != plVar4; plVar3 = plVar3 + 0x15) {
          if (*plVar3 == param_3) {
            bVar1 = true;
            goto LAB_1407c782a;
          }
        }
        bVar1 = false;
LAB_1407c782a:
        plVar4 = *(longlong **)(piVar6 + -2);
        plVar3 = plVar4 + *piVar6;
        for (; plVar4 != plVar3; plVar4 = plVar4 + 1) {
          if (*plVar4 == param_3) {
            bVar2 = true;
            goto LAB_1407c7850;
          }
        }
        bVar2 = false;
LAB_1407c7850:
        if ((bVar1) || (bVar2)) {
          *param_2 = iVar5;
          return param_2;
        }
        iVar5 = iVar5 + 1;
        lVar7 = lVar7 + 1;
        piVar6 = piVar6 + 0x50;
      } while (lVar7 < *(int *)(param_1 + 600));
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1407c78b0 FUN_1407c78b0 body=56 status=ok
// SIG undefined FUN_1407c78b0(void)

longlong FUN_1407c78b0(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0xa8) == '\0') {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if (lVar1 == 0) {
    FUN_1407d5c20();
    lVar1 = *(longlong *)(param_1 + 0xa0);
  }
  return lVar1;
}



// FUNCTION 1407c78f0 FUN_1407c78f0 body=55 status=ok
// SIG undefined FUN_1407c78f0(void)

longlong FUN_1407c78f0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x70);
  plVar2 = plVar1 + (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x78) * 0x15;
  while( true ) {
    if (plVar1 == plVar2) {
      return 0;
    }
    if ((*plVar1 != 0) && (*(int *)((longlong)plVar1 + 0x14) == param_2)) break;
    plVar1 = plVar1 + 0x15;
  }
  return *plVar1;
}



// FUNCTION 1407c7930 FUN_1407c7930 body=55 status=ok
// SIG undefined FUN_1407c7930(void)

undefined8 * FUN_1407c7930(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = FUN_1407cb650();
  if (lVar1 != 0) {
    FUN_1407c7970(lVar1,param_2,1);
  }
  return param_2;
}



// FUNCTION 1407c7970 FUN_1407c7970 body=386 status=ok
// SIG undefined FUN_1407c7970(void)

void FUN_1407c7970(longlong param_1,longlong *param_2,char param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar5;
  
  if ((param_3 == '\0') || (*(longlong *)(param_1 + 0x38) == 0)) {
    plVar6 = *(longlong **)(param_1 + 0x70);
    plVar7 = plVar6 + (longlong)*(int *)(param_1 + 0x78) * 0x15;
    for (; plVar6 != plVar7; plVar6 = plVar6 + 0x15) {
      if ((*plVar6 != 0) && ((param_4 != '\0' || ((char)plVar6[3] == '\0')))) {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = *plVar6;
      }
    }
    return;
  }
  uVar5 = 0;
  uVar4 = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x980);
    uVar8 = uVar5;
    if (lVar1 != 0) {
      uVar8 = *(ulonglong *)(lVar1 + 0x590);
    }
    uVar4 = uVar5;
    uVar5 = uVar8;
    if (uVar8 != 0) {
      while (((iVar2 = (int)uVar4, -1 < iVar2 && (iVar2 < *(int *)(uVar8 + 0x6f8))) &&
             (*(longlong *)(*(longlong *)(uVar8 + 0x6f0) + 0x18 + (longlong)iVar2 * 0x28) == 0))) {
        uVar4 = (ulonglong)(iVar2 + 1);
      }
    }
  }
  do {
    iVar2 = (int)uVar4;
    if (iVar2 == -1) {
      return;
    }
    if (uVar5 == 0) {
      return;
    }
    if (iVar2 < 0) {
      return;
    }
    if (*(int *)(uVar5 + 0x6f8) <= iVar2) {
      return;
    }
    if (*(longlong *)(*(longlong *)(uVar5 + 0x6f0) + 0x18 + (longlong)iVar2 * 0x28) == 0) {
      return;
    }
    lVar1 = FUN_1407cb650();
    if (lVar1 != 0) {
      FUN_1407c7970(lVar1,param_2,0,param_4);
    }
    do {
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      if (((int)uVar3 < 0) || (*(int *)(uVar5 + 0x6f8) <= (int)uVar3)) break;
    } while (*(longlong *)(*(longlong *)(uVar5 + 0x6f0) + 0x18 + (longlong)(int)uVar3 * 0x28) == 0);
  } while( true );
}



// FUNCTION 1407c7b00 FUN_1407c7b00 body=71 status=ok
// SIG undefined FUN_1407c7b00(void)

void FUN_1407c7b00(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1407cb650();
  if (lVar1 != 0) {
    FUN_1407c7970(lVar1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 1407c7b50 FUN_1407c7b50 body=504 status=ok
// SIG undefined FUN_1407c7b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1407c7b50(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [8];
  longlong local_190 [16];
  longlong *local_110;
  int local_108;
  undefined1 local_100 [192];
  undefined1 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 200) = 0;
  (**(code **)(*param_1 + 0x2b0))(param_1,local_190);
  plVar8 = local_190;
  if (local_110 != (longlong *)0x0) {
    plVar8 = local_110;
  }
  plVar1 = plVar8 + local_108;
  for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
    plVar4 = (longlong *)*plVar8;
    if (plVar4 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar4 + 0x338))(plVar4,local_100);
      iVar5 = *(int *)(uVar2 + 200);
      if (iVar5 != 0) {
        iVar7 = *(int *)(param_2 + 200);
        if (*(int *)(param_2 + 0xcc) < iVar7 + iVar5) {
          TArray<FMovieSceneEntityAndAnimTypeID,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo
                    (param_2);
          iVar7 = *(int *)(param_2 + 200);
        }
        lVar6 = *(longlong *)(param_2 + 0xc0);
        if (*(longlong *)(param_2 + 0xc0) == 0) {
          lVar6 = param_2;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar6 + (longlong)iVar7 * 0x18),
                   (void *)((ulonglong)(*(ulonglong *)(uVar2 + 0xc0) != 0) - 1 & uVar2 |
                           *(ulonglong *)(uVar2 + 0xc0)),(longlong)iVar5 * 0x18);
        *(undefined4 *)(uVar2 + 200) = 0;
        *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + iVar5;
      }
      puVar3 = local_100;
      if (local_40 != (undefined1 *)0x0) {
        puVar3 = local_40;
      }
      if (local_38 != 0) {
        plVar4 = (longlong *)(puVar3 + 8);
        iVar5 = local_38;
        do {
          if (*plVar4 != 0) {
            FMemory::Free();
          }
          plVar4 = plVar4 + 3;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (local_40 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  FUN_1407bab10(param_2,local_198);
  if (local_110 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1407c7d50 FUN_1407c7d50 body=90 status=ok
// SIG undefined FUN_1407c7d50(void)

undefined8 * FUN_1407c7d50(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  param_2[0x10] = 0;
  param_2[0x11] = 1;
  TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_2,0);
  puVar1 = (undefined8 *)param_2[0x10];
  if ((undefined8 *)param_2[0x10] == (undefined8 *)0x0) {
    puVar1 = param_2;
  }
  *puVar1 = param_1;
  return param_2;
}



// FUNCTION 1407c7db0 FUN_1407c7db0 body=406 status=ok
// SIG undefined FUN_1407c7db0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * FUN_1407c7db0(longlong param_1,void *param_2)

{
  int iVar1;
  undefined1 *_Src;
  longlong lVar2;
  undefined1 auStack_168 [32];
  undefined1 local_148 [128];
  longlong local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  ulonglong local_28;
  
  iVar1 = DAT_14685c4d4;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if (DAT_14685c4d4 < 0xb) {
    local_c8 = 0;
    local_c0 = 0;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      DAT_14685c4d4 = DAT_14685c4d4 + 1;
      _Src = (undefined1 *)FUN_1407c80f0(*(undefined8 *)(param_1 + 0x98),local_b8);
      if (local_148 != _Src) {
        if (*(longlong *)(_Src + 0x80) == 0) {
          _guard_xfg_dispatch_icall_nop(local_148,_Src,0x80);
        }
        if (local_c8 != 0) {
          FMemory::Free();
        }
        local_c8 = *(longlong *)(_Src + 0x80);
        *(undefined8 *)(_Src + 0x80) = 0;
        local_c0 = *(undefined8 *)(_Src + 0x88);
        *(undefined8 *)(_Src + 0x88) = 0;
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
    }
    lVar2 = local_c8;
    DAT_14685c4d4 = iVar1;
    *(undefined8 *)((longlong)param_2 + 0x80) = 0;
    if (local_c8 == 0) {
      _guard_xfg_dispatch_icall_nop(param_2,local_148,0x80);
    }
    if (*(longlong *)((longlong)param_2 + 0x80) != 0) {
      FMemory::Free();
      lVar2 = local_c8;
    }
    *(longlong *)((longlong)param_2 + 0x80) = lVar2;
    *(undefined4 *)((longlong)param_2 + 0x88) = (undefined4)local_c0;
    *(undefined4 *)((longlong)param_2 + 0x8c) = local_c0._4_4_;
  }
  else {
    *(undefined8 *)((longlong)param_2 + 0x80) = 0;
    *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  }
  return param_2;
}



// FUNCTION 1407c7f50 FUN_1407c7f50 body=410 status=ok
// SIG undefined FUN_1407c7f50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * FUN_1407c7f50(longlong param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 *_Src;
  undefined1 auStack_168 [32];
  undefined1 local_148 [128];
  longlong local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  lVar2 = FUN_1407cad30(param_1 + 0x98);
  iVar1 = DAT_14685c4d8;
  if (DAT_14685c4d8 < 0xb) {
    local_c8 = 0;
    local_c0 = 0;
    if (lVar2 != 0) {
      DAT_14685c4d8 = DAT_14685c4d8 + 1;
      _Src = (undefined1 *)FUN_1407c80f0(lVar2,local_b8);
      if (local_148 != _Src) {
        if (*(longlong *)(_Src + 0x80) == 0) {
          _guard_xfg_dispatch_icall_nop(local_148,_Src,0x80);
        }
        if (local_c8 != 0) {
          FMemory::Free();
        }
        local_c8 = *(longlong *)(_Src + 0x80);
        *(undefined8 *)(_Src + 0x80) = 0;
        local_c0 = *(undefined8 *)(_Src + 0x88);
        *(undefined8 *)(_Src + 0x88) = 0;
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
    }
    lVar2 = local_c8;
    DAT_14685c4d8 = iVar1;
    *(undefined8 *)((longlong)param_2 + 0x80) = 0;
    if (local_c8 == 0) {
      _guard_xfg_dispatch_icall_nop(param_2,local_148,0x80);
    }
    if (*(longlong *)((longlong)param_2 + 0x80) != 0) {
      FMemory::Free();
      lVar2 = local_c8;
    }
    *(longlong *)((longlong)param_2 + 0x80) = lVar2;
    *(undefined4 *)((longlong)param_2 + 0x88) = (undefined4)local_c0;
    *(undefined4 *)((longlong)param_2 + 0x8c) = local_c0._4_4_;
  }
  else {
    *(undefined8 *)((longlong)param_2 + 0x80) = 0;
    *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  }
  return param_2;
}



// FUNCTION 1407c80f0 FUN_1407c80f0 body=317 status=ok
// SIG undefined FUN_1407c80f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1407c80f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *_Src;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  undefined1 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  plVar6 = *(longlong **)(param_1 + 0x30);
  plVar4 = plVar6 + (longlong)*(int *)(param_1 + 0x38) * 0x25;
  for (; plVar6 != plVar4; plVar6 = plVar6 + 0x25) {
    plVar1 = (longlong *)*plVar6;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2b0))(plVar1,local_b8);
      iVar2 = local_30;
      lVar5 = (longlong)local_30;
      if (local_30 != 0) {
        iVar7 = *(int *)(param_2 + 0x88);
        if (*(int *)(param_2 + 0x8c) < iVar7 + local_30) {
          FUN_1407418a0(param_2);
          iVar7 = *(int *)(param_2 + 0x88);
        }
        _Src = local_b8;
        if (local_38 != (undefined1 *)0x0) {
          _Src = local_38;
        }
        lVar3 = *(longlong *)(param_2 + 0x80);
        if (*(longlong *)(param_2 + 0x80) == 0) {
          lVar3 = param_2;
        }
        _guard_xfg_dispatch_icall_nop((void *)(lVar3 + (longlong)iVar7 * 8),_Src,lVar5 << 3);
        *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + iVar2;
      }
      if (local_38 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return param_2;
}



// FUNCTION 1407c8230 FUN_1407c8230 body=577 status=ok
// SIG undefined FUN_1407c8230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * FUN_1407c8230(longlong param_1,void *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [128];
  undefined1 *local_178;
  undefined8 local_170;
  longlong local_168 [16];
  longlong *local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [128];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  plVar4 = *(longlong **)(param_1 + 0x8f8);
  uVar5 = 0;
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)((longlong)param_2 + 0x80) = 0;
    *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  }
  else {
    local_178 = (undefined1 *)0x0;
    local_170 = 0;
    local_e8 = (longlong *)0x0;
    local_e0 = 0;
    (**(code **)(*plVar4 + 0x2f8))(plVar4,local_168);
    plVar4 = local_168;
    if (local_e8 != (longlong *)0x0) {
      plVar4 = local_e8;
    }
    uVar6 = (longlong)(int)local_e0 & 0x1fffffffffffffff;
    if (plVar4 + (int)local_e0 < plVar4) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      do {
        if (*plVar4 != 0) {
          uVar2 = FUN_1407c80f0(*plVar4,local_d8);
          iVar1 = *(int *)(uVar2 + 0x88);
          if (iVar1 != 0) {
            if (local_170._4_4_ < (int)local_170 + iVar1) {
              FUN_1407418a0(local_1f8);
            }
            puVar3 = local_1f8;
            if (local_178 != (undefined1 *)0x0) {
              puVar3 = local_178;
            }
            _guard_xfg_dispatch_icall_nop
                      (puVar3 + (longlong)(int)local_170 * 8,
                       (void *)((ulonglong)(*(ulonglong *)(uVar2 + 0x80) != 0) - 1 & uVar2 |
                               *(ulonglong *)(uVar2 + 0x80)),(longlong)iVar1 << 3);
            *(undefined4 *)(uVar2 + 0x88) = 0;
            local_170 = CONCAT44(local_170._4_4_,(int)local_170 + iVar1);
          }
          if (local_58 != 0) {
            FMemory::Free();
          }
        }
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar6);
    }
    plVar4 = local_e8;
    puVar3 = local_178;
    *(undefined8 *)((longlong)param_2 + 0x80) = 0;
    if (local_178 == (undefined1 *)0x0) {
      _guard_xfg_dispatch_icall_nop(param_2,local_1f8,0x80);
    }
    if (*(longlong *)((longlong)param_2 + 0x80) != 0) {
      FMemory::Free();
      puVar3 = local_178;
      plVar4 = local_e8;
    }
    *(undefined1 **)((longlong)param_2 + 0x80) = puVar3;
    *(int *)((longlong)param_2 + 0x88) = (int)local_170;
    *(int *)((longlong)param_2 + 0x8c) = local_170._4_4_;
    local_170 = 0;
    local_178 = (undefined1 *)0x0;
    if ((plVar4 != (longlong *)0x0) && (FMemory::Free(plVar4), local_178 != (undefined1 *)0x0)) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 1407c8480 FUN_1407c8480 body=103 status=ok
// SIG undefined FUN_1407c8480(void)

void FUN_1407c8480(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar2 = (**(code **)(*param_1 + 0x328))();
  iVar1 = *(int *)(param_2 + 0x88);
  iVar3 = iVar1 + 1;
  *(int *)(param_2 + 0x88) = iVar3;
  if (*(int *)(param_2 + 0x8c) < iVar3) {
    TArray<FName,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_2);
  }
  lVar4 = *(longlong *)(param_2 + 0x80);
  if (*(longlong *)(param_2 + 0x80) == 0) {
    lVar4 = param_2;
  }
  *(undefined8 *)(lVar4 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 1407c84f0 FUN_1407c84f0 body=141 status=ok
// SIG undefined FUN_1407c84f0(void)

void FUN_1407c84f0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0x30);
  puVar4 = puVar5 + (longlong)*(int *)(param_1 + 0x38) * 0x12;
  for (; puVar5 != puVar4; puVar5 = puVar5 + 0x12) {
    iVar1 = *(int *)(param_2 + 0x88);
    iVar2 = iVar1 + 1;
    *(int *)(param_2 + 0x88) = iVar2;
    if (*(int *)(param_2 + 0x8c) < iVar2) {
      TArray<FName,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_2);
    }
    lVar3 = *(longlong *)(param_2 + 0x80);
    if (*(longlong *)(param_2 + 0x80) == 0) {
      lVar3 = param_2;
    }
    *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = *puVar5;
  }
  return;
}



// FUNCTION 1407c8580 FUN_1407c8580 body=83 status=ok
// SIG undefined FUN_1407c8580(void)

void FUN_1407c8580(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x30);
  plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x38) * 7;
  for (; plVar2 != plVar3; plVar2 = plVar2 + 7) {
    plVar1 = (longlong *)*plVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2f8))(plVar1,param_2);
    }
  }
  return;
}



// FUNCTION 1407c85f0 FUN_1407c85f0 body=1345 status=ok
// SIG undefined FUN_1407c85f0(void)

undefined8 FUN_1407c85f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_res18;
  longlong local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  plVar4 = *(longlong **)(param_1 + 0x900);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x8f8);
  }
  if (plVar4 == (longlong *)0x0) {
    if ((param_2 != (longlong *)0x0) && ((wchar_t *)*param_2 != L"No Spawner Style")) {
      iVar6 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0x11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x11);
        iVar6 = (int)param_2[1];
      }
      *(int *)(param_2 + 1) = iVar6 + 0x11;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 0x11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"No Spawner Style",0x11);
      return 1;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x2c0))(plVar4,&local_res18);
    iVar6 = 0;
    if (local_res18 != 0) {
      if (param_2 == (longlong *)0x0) {
        return 1;
      }
      puVar3 = (undefined8 *)FName::ToString(&local_res18,local_38);
      if (*(int *)(puVar3 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*puVar3;
      }
      FString::PrintfImpl(&local_48,L"SpawnerDefinition: %ls",puVar8);
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
      if (local_38[0] == 0) {
        return 1;
      }
      FMemory::Free();
      return 1;
    }
    cVar1 = *(char *)(param_1 + 0x968);
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        lVar9 = *(longlong *)(param_1 + 0x958);
        lVar10 = (longlong)*(int *)(param_1 + 0x960) * 0x30 + lVar9;
        lVar5 = lVar9;
        if (lVar9 != lVar10) {
          do {
            if (*(int *)(lVar5 + 0x20) == 0) {
              if (param_2 == (longlong *)0x0) {
                return 1;
              }
              if ((wchar_t *)*param_2 == L"Has a Spawn Point Group without any Spawn Points") {
                return 1;
              }
              *(undefined4 *)(param_2 + 1) = 0;
              if (*(int *)((longlong)param_2 + 0xc) != 0x31) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x31);
                iVar6 = (int)param_2[1];
              }
              *(int *)(param_2 + 1) = iVar6 + 0x31;
              if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 0x31) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
              }
              builtin_wcsncpy((wchar_t *)*param_2,
                              L"Has a Spawn Point Group without any Spawn Points",0x31);
              return 1;
            }
            lVar5 = lVar5 + 0x30;
          } while (lVar5 != lVar10);
          for (; lVar9 != lVar10; lVar9 = lVar9 + 0x30) {
            plVar7 = *(longlong **)(lVar9 + 0x18);
            plVar4 = plVar7 + *(int *)(lVar9 + 0x20);
            for (; plVar7 != plVar4; plVar7 = plVar7 + 1) {
              if ((*plVar7 == 0) ||
                 (iVar2 = (**(code **)(*(longlong *)(*plVar7 + 0x458) + 0x18))(), iVar2 == 0)) {
                if (param_2 == (longlong *)0x0) {
                  return 1;
                }
                if ((wchar_t *)*param_2 == L"Has a Spawn Point Group with a null Spawn Point") {
                  return 1;
                }
                *(undefined4 *)(param_2 + 1) = 0;
                if (*(int *)((longlong)param_2 + 0xc) != 0x30) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x30);
                  iVar6 = (int)param_2[1];
                }
                *(int *)(param_2 + 1) = iVar6 + 0x30;
                if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 0x30) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
                }
                builtin_wcsncpy((wchar_t *)*param_2,
                                L"Has a Spawn Point Group with a null Spawn Point",0x30);
                return 1;
              }
            }
          }
        }
        if (*(int *)(param_1 + 0x960) != 0) {
          return 0;
        }
        if (param_2 == (longlong *)0x0) {
          return 1;
        }
        if ((wchar_t *)*param_2 == L"Spawn Point Groups is empty") {
          return 1;
        }
        *(undefined4 *)(param_2 + 1) = 0;
        if (*(int *)((longlong)param_2 + 0xc) != 0x1c) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x1c);
          iVar6 = (int)param_2[1];
        }
        *(int *)(param_2 + 1) = iVar6 + 0x1c;
        if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 0x1c) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
        }
        builtin_wcsncpy((wchar_t *)*param_2,L"Spawn Point Groups is empty",0x1c);
        return 1;
      }
      if (cVar1 != '\x03') {
        return 0;
      }
    }
    plVar7 = *(longlong **)(param_1 + 0x940);
    plVar4 = plVar7 + *(int *)(param_1 + 0x948);
    for (; plVar7 != plVar4; plVar7 = plVar7 + 1) {
      if ((*plVar7 == 0) ||
         (iVar2 = (**(code **)(*(longlong *)(*plVar7 + 0x458) + 0x18))(), iVar2 == 0)) {
        if (param_2 == (longlong *)0x0) {
          return 1;
        }
        if ((wchar_t *)*param_2 == L"Has a null Spawn Point") {
          return 1;
        }
        *(undefined4 *)(param_2 + 1) = 0;
        if (*(int *)((longlong)param_2 + 0xc) != 0x17) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x17);
          iVar6 = (int)param_2[1];
        }
        *(int *)(param_2 + 1) = iVar6 + 0x17;
        if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 0x17) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
        }
        builtin_wcsncpy((wchar_t *)*param_2,L"Has a null Spawn Point",0x17);
        return 1;
      }
    }
    if (*(int *)(param_1 + 0x948) != 0) {
      return 0;
    }
    if ((param_2 != (longlong *)0x0) && ((wchar_t *)*param_2 != L"Has no Spawn Points")) {
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0x14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x14);
        iVar6 = (int)param_2[1];
      }
      *(int *)(param_2 + 1) = iVar6 + 0x14;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 0x14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"Has no Spawn Points",0x14);
    }
  }
  return 1;
}



// FUNCTION 1407c8b40 GetChildren body=8 status=ok
// SIG undefined GetChildren(void)

longlong SMenuAnchor::GetChildren(longlong param_1)

{
  return param_1 + 0x490;
}



// FUNCTION 1407c8b50 FUN_1407c8b50 body=66 status=ok
// SIG undefined FUN_1407c8b50(void)

undefined8 FUN_1407c8b50(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x128))) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (*(longlong *)(param_1 + 0x120) == 0) {
      lVar2 = param_1 + 0x60;
    }
    uVar1 = FWeakObjectPtr::Get(lVar2 + ((longlong)param_2 * 3 + 1) * 8);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1407c8ba0 FUN_1407c8ba0 body=461 status=ok
// SIG undefined FUN_1407c8ba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1407c8ba0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 *_Src;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 auStack_188 [32];
  longlong local_168 [16];
  longlong *local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  *param_1 = 0;
  param_1[1] = 0;
  plVar8 = (longlong *)*param_2;
  plVar1 = plVar8 + (int)param_2[1];
  for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
    lVar6 = *plVar8;
    if ((lVar6 != 0) &&
       ((plVar4 = *(longlong **)(lVar6 + 0x900), plVar4 != (longlong *)0x0 ||
        (plVar4 = *(longlong **)(lVar6 + 0x8f8), plVar4 != (longlong *)0x0)))) {
      local_e8 = (longlong *)0x0;
      local_e0 = 0;
      (**(code **)(*plVar4 + 0x2f8))(plVar4,local_168);
      plVar4 = local_168;
      if (local_e8 != (longlong *)0x0) {
        plVar4 = local_e8;
      }
      uVar7 = (longlong)(int)local_e0 & 0x1fffffffffffffff;
      if (plVar4 + (int)local_e0 < plVar4) {
        uVar7 = 0;
      }
      uVar5 = 0;
      if (uVar7 != 0) {
        do {
          if (*plVar4 != 0) {
            FUN_1407c80f0(*plVar4,local_d8);
            iVar2 = local_50;
            lVar6 = (longlong)local_50;
            if (local_50 != 0) {
              iVar3 = (int)param_1[1];
              if (*(int *)((longlong)param_1 + 0xc) < iVar3 + local_50) {
                TArray<void_*,FDefaultAllocator>::ResizeTo(param_1);
                iVar3 = (int)param_1[1];
              }
              _Src = local_d8;
              if (local_58 != (undefined1 *)0x0) {
                _Src = local_58;
              }
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*param_1 + (longlong)iVar3 * 8),_Src,lVar6 << 3);
              *(int *)(param_1 + 1) = (int)param_1[1] + iVar2;
            }
            if (local_58 != (undefined1 *)0x0) {
              FMemory::Free();
            }
          }
          plVar4 = plVar4 + 1;
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar7);
      }
      if (local_e8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  return param_1;
}



// FUNCTION 1407c8d70 FUN_1407c8d70 body=147 status=ok
// SIG undefined FUN_1407c8d70(void)

undefined8 * FUN_1407c8d70(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_14685c4b0) {
      _Init_thread_header(&DAT_14685c4b0);
      if (DAT_14685c4b0 == -1) {
        FName::FName(&DAT_14685c4a8,L"No Spawn Factory",1);
        _Init_thread_footer(&DAT_14685c4b0);
      }
    }
    *param_2 = DAT_14685c4a8;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1407c8e10 FUN_1407c8e10 body=147 status=ok
// SIG undefined FUN_1407c8e10(void)

undefined8 * FUN_1407c8e10(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x250) == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_14685c4c0) {
      _Init_thread_header(&DAT_14685c4c0);
      if (DAT_14685c4c0 == -1) {
        FName::FName(&DAT_14685c4b8,L"No Spawn Factory",1);
        _Init_thread_footer(&DAT_14685c4c0);
      }
    }
    *param_2 = DAT_14685c4b8;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1407c8eb0 FUN_1407c8eb0 body=144 status=ok
// SIG undefined FUN_1407c8eb0(void)

undefined8 * FUN_1407c8eb0(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x38) == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_14685c4d0) {
      _Init_thread_header(&DAT_14685c4d0);
      if (DAT_14685c4d0 == -1) {
        FName::FName(&DAT_14685c4c8,L"No Spawn Factory",1);
        _Init_thread_footer(&DAT_14685c4d0);
      }
    }
    *param_2 = DAT_14685c4c8;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1407c8f40 FUN_1407c8f40 body=144 status=ok
// SIG undefined FUN_1407c8f40(void)

undefined8 * FUN_1407c8f40(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x30) == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_14685c440) {
      _Init_thread_header(&DAT_14685c440);
      if (DAT_14685c440 == -1) {
        FName::FName(&DAT_14685c438,L"NoSpawnOptions",1);
        _Init_thread_footer(&DAT_14685c440);
      }
    }
    *param_2 = DAT_14685c438;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1407c8fd0 FUN_1407c8fd0 body=317 status=ok
// SIG undefined FUN_1407c8fd0(void)

undefined8 * FUN_1407c8fd0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_14685c450) &&
       (_Init_thread_header(&DAT_14685c450), DAT_14685c450 == -1)) {
      FName::FName(&DAT_14685c448,L"NoBunches",1);
      _Init_thread_footer(&DAT_14685c450);
    }
    *param_2 = DAT_14685c448;
    return param_2;
  }
  plVar1 = *(longlong **)(param_1 + 0x30);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x38) * 0x12;
  while( true ) {
    if (plVar1 == plVar2) {
      *param_2 = 0;
      return param_2;
    }
    if (*plVar1 == 0) break;
    plVar1 = plVar1 + 0x12;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14685c460) && (_Init_thread_header(&DAT_14685c460), DAT_14685c460 == -1))
  {
    FName::FName(&DAT_14685c458,L"HasInvalidBunch",1);
    _Init_thread_footer(&DAT_14685c460);
  }
  *param_2 = DAT_14685c458;
  return param_2;
}



// FUNCTION 1407c9110 FUN_1407c9110 body=144 status=ok
// SIG undefined FUN_1407c9110(void)

undefined8 * FUN_1407c9110(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x30) == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_14685c470) {
      _Init_thread_header(&DAT_14685c470);
      if (DAT_14685c470 == -1) {
        FName::FName(&DAT_14685c468,L"NoSpawnOptions",1);
        _Init_thread_footer(&DAT_14685c470);
      }
    }
    *param_2 = DAT_14685c468;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1407c91a0 FUN_1407c91a0 body=360 status=ok
// SIG undefined FUN_1407c91a0(void)

undefined8 * FUN_1407c91a0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res18 [16];
  
  if (*(int *)(param_1 + 0x38) == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_14685c480) &&
       (_Init_thread_header(&DAT_14685c480), DAT_14685c480 == -1)) {
      FName::FName(&DAT_14685c478,L"NoWaves",1);
      _Init_thread_footer(&DAT_14685c480);
    }
    *param_2 = DAT_14685c478;
    return param_2;
  }
  plVar2 = *(longlong **)(param_1 + 0x30);
  plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x38) * 7;
  while( true ) {
    if (plVar2 == plVar3) {
      *param_2 = 0;
      return param_2;
    }
    plVar1 = (longlong *)*plVar2;
    if ((plVar1 == (longlong *)0x0) ||
       (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x2c0))(plVar1,local_res18), *plVar1 != 0))
    break;
    plVar2 = plVar2 + 7;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14685c490) && (_Init_thread_header(&DAT_14685c490), DAT_14685c490 == -1))
  {
    FName::FName(&DAT_14685c488,L"HasInvalidWave",1);
    _Init_thread_footer(&DAT_14685c490);
  }
  *param_2 = DAT_14685c488;
  return param_2;
}



// FUNCTION 1407c9310 FUN_1407c9310 body=151 status=ok
// SIG undefined FUN_1407c9310(void)

undefined8 * FUN_1407c9310(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x328))();
  if (lVar1 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_14685c4a0) {
      _Init_thread_header(&DAT_14685c4a0);
      if (DAT_14685c4a0 == -1) {
        FName::FName(&DAT_14685c498,L"NoSpawnOptions",1);
        _Init_thread_footer(&DAT_14685c4a0);
      }
    }
    *param_2 = DAT_14685c498;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1407c93d0 FUN_1407c93d0 body=40 status=ok
// SIG undefined FUN_1407c93d0(void)

undefined8 FUN_1407c93d0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0x128)) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (*(longlong *)(param_1 + 0x120) == 0) {
      lVar2 = param_1 + 0x60;
    }
    uVar1 = FWeakObjectPtr::Get(lVar2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1407c9400 FUN_1407c9400 body=175 status=ok
// SIG undefined FUN_1407c9400(void)

undefined8 FUN_1407c9400(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 local_38 [48];
  
  if (*(int *)(param_1 + 0x6f8) == 0) {
    puVar5 = (undefined8 *)FUN_1407bc910(local_38,*(undefined8 *)(param_1 + 0x118));
    iVar2 = *(int *)(param_1 + 0x6f8);
    lVar6 = (longlong)iVar2;
    *(int *)(param_1 + 0x6f8) = iVar2 + 1;
    if (*(int *)(param_1 + 0x6fc) < iVar2 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x6f0,iVar2);
    }
    uVar4 = puVar5[1];
    lVar3 = *(longlong *)(param_1 + 0x6f0);
    puVar1 = (undefined8 *)(lVar3 + lVar6 * 0x28);
    *puVar1 = *puVar5;
    puVar1[1] = uVar4;
    uVar4 = puVar5[3];
    puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar6 * 0x28);
    *puVar1 = puVar5[2];
    puVar1[1] = uVar4;
    *(undefined8 *)(lVar3 + 0x20 + lVar6 * 0x28) = puVar5[4];
    return *(undefined8 *)(param_1 + 0x6f0);
  }
  return *(undefined8 *)(param_1 + 0x6f0);
}



// FUNCTION 1407c94b0 GetNonDefaultPhysicsVolumeCount body=7 status=ok
// SIG undefined GetNonDefaultPhysicsVolumeCount(void)

undefined4 UWorld::GetNonDefaultPhysicsVolumeCount(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1c0);
}



// FUNCTION 1407c94c0 FUN_1407c94c0 body=1401 status=ok
// SIG undefined FUN_1407c94c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1407c94c0(longlong *param_1,void *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_9f8 [32];
  char local_9d8 [4];
  undefined4 local_9d4;
  int local_9d0;
  undefined8 local_9c8;
  void *local_9c0;
  longlong local_9b8;
  longlong *local_9b0;
  longlong local_9a8;
  longlong *local_9a0;
  longlong *local_998;
  char *pcStack_990;
  undefined8 local_988;
  longlong lStack_980;
  undefined1 *local_978 [2];
  longlong local_968 [4];
  longlong *local_948;
  int local_938;
  undefined1 local_928 [80];
  undefined8 local_8d8;
  undefined4 local_8d0;
  undefined1 local_8cc [4];
  undefined1 local_8c8 [16];
  longlong local_8b8 [4];
  longlong *local_898;
  int local_888;
  longlong *local_878;
  undefined1 local_868 [2048];
  undefined1 *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_9f8;
  local_9c0 = param_2;
  local_9b8 = param_3;
  _guard_xfg_dispatch_icall_nop(param_2,0,0xa8);
  uVar4 = 0;
  local_9d8[0] = '\0';
  if ((longlong *)*param_1 != (longlong *)0x0) {
    uVar4 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  }
  pcStack_990 = local_9d8;
  local_9a8 = param_1[10];
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  local_948 = (longlong *)0x0;
  local_938 = 0;
  local_9c8 = uVar4;
  local_9a0 = param_1;
  local_998 = param_1;
  local_988 = uVar4;
  lStack_980 = param_3;
  puVar5 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_143ff7760;
    puVar5[1] = local_998;
    puVar5[2] = pcStack_990;
    puVar5[3] = local_988;
    puVar5[4] = lStack_980;
  }
  local_978[0] = &LAB_1407c3040;
  _guard_xfg_dispatch_icall_nop(local_8cc,0,100);
  local_8d0 = 0x3f800000;
  local_8d8 = uVar4;
  lVar6 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_928,local_978);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar6,local_8c8,0x50);
  if (*(int *)(lVar6 + 0x40) != 0) {
    plVar9 = *(longlong **)(lVar6 + 0x30);
    if (*(longlong **)(lVar6 + 0x30) == (longlong *)0x0) {
      plVar9 = (longlong *)(lVar6 + 0x10);
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (*(longlong *)(lVar6 + 0x30) != 0) {
    FMemory::Free();
  }
  local_878 = &local_9a8;
  if (local_938 != 0) {
    plVar9 = local_968;
    if (local_948 != (longlong *)0x0) {
      plVar9 = local_948;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_948 != (longlong *)0x0) {
    FMemory::Free();
  }
  (**(code **)(*(longlong *)param_1[9] + 0x2e0))((longlong *)param_1[9],local_868,&local_8d8);
  plVar9 = (longlong *)param_1[8];
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x8f0))(plVar9,local_868);
  }
  do {
    if ((int)local_60 < 1) {
LAB_1407c98e9:
      lVar6 = *(longlong *)((longlong)param_2 + 0x50);
      if ((lVar6 == 0) && (local_9d8[0] != '\0')) {
        *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)(*param_1 + 0x230);
      }
      if (local_888 != 0) {
        plVar9 = local_8b8;
        if (local_898 != (longlong *)0x0) {
          plVar9 = local_898;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_898 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_68 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      return lVar6 != 0;
    }
    uVar14 = 0;
    local_9d4 = 0;
    iVar2 = FUN_1407d9c40(local_868,uVar4,&local_9d4,0xbf800000);
    puVar10 = local_868;
    if (local_68 != (undefined1 *)0x0) {
      puVar10 = local_68;
    }
    puVar5 = (undefined8 *)(puVar10 + (longlong)iVar2 * 0x20);
    local_9d0 = FUN_1407cb200(param_1,*puVar5,local_9b8);
    if ((local_9d0 != -1) &&
       ((param_1[8] == 0 ||
        (cVar1 = FUN_1407cd500(param_1 + 0x10,param_1[8] + 0x908,*puVar5), cVar1 == '\0')))) {
      uVar13 = 0;
      if (param_1[8] != 0) {
        lVar6 = *(longlong *)(param_1[8] + 0x980);
        uVar15 = uVar14;
        if (lVar6 != 0) {
          uVar15 = *(ulonglong *)(lVar6 + 0x590);
        }
        uVar13 = uVar14;
        uVar14 = uVar15;
        if (uVar15 != 0) {
          while (((iVar11 = (int)uVar13, -1 < iVar11 && (iVar11 < *(int *)(uVar15 + 0x6f8))) &&
                 (*(longlong *)(*(longlong *)(uVar15 + 0x6f0) + 0x18 + (longlong)iVar11 * 0x28) == 0
                 ))) {
            uVar13 = (ulonglong)(iVar11 + 1);
          }
        }
      }
LAB_1407c97b0:
      param_2 = local_9c0;
      iVar11 = (int)uVar13;
      if (((iVar11 == -1) || (uVar14 == 0)) ||
         ((iVar11 < 0 ||
          ((*(int *)(uVar14 + 0x6f8) <= iVar11 ||
           (lVar6 = *(longlong *)(*(longlong *)(uVar14 + 0x6f0) + 0x18 + (longlong)iVar11 * 0x28),
           lVar6 == 0)))))) {
        plVar9 = (longlong *)*puVar5;
        *(longlong **)((longlong)local_9c0 + 0x50) = plVar9;
        *(undefined1 *)((longlong)local_9c0 + 8) = 0;
        uVar3 = (**(code **)(*plVar9 + 0x288))(plVar9,0);
        *(undefined4 *)((longlong)param_2 + 0x68) = uVar3;
        puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x290))(plVar9,&local_9b8);
        *(undefined8 *)((longlong)param_2 + 0x34) = *puVar8;
        *(undefined4 *)((longlong)param_2 + 0x3c) = *(undefined4 *)(puVar8 + 1);
        local_9b8 = param_1[10];
        local_9b0 = param_1;
        uVar3 = (**(code **)(*(longlong *)param_1[9] + 0x2c8))((longlong *)param_1[9],&local_9b8);
        *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
        *(int *)((longlong)param_2 + 0x10) = local_9d0;
        uVar3 = *(undefined4 *)((longlong)param_1 + 100);
        *(undefined4 *)((longlong)param_2 + 0x6c) = local_9d4;
        *(undefined4 *)((longlong)param_2 + 0x14) = uVar3;
        *(undefined8 *)((longlong)param_2 + 0x98) = puVar5[3];
        *(int *)((longlong)param_2 + 0x7c) = (int)param_1[5];
        *(undefined2 *)((longlong)param_2 + 0x80) = *(undefined2 *)((longlong)param_1 + 0x2c);
        *(undefined1 *)((longlong)param_2 + 0x82) = *(undefined1 *)((longlong)param_1 + 0x2e);
        goto LAB_1407c98e9;
      }
      if ((((lVar6 == param_1[8]) || (*(char *)(lVar6 + 0x918) == '\0')) ||
          (lVar7 = FUN_1407cb650(lVar6), lVar7 == 0)) ||
         (cVar1 = FUN_1407cd500(lVar7 + 0x80,lVar6 + 0x908,*puVar5), uVar4 = local_9c8,
         cVar1 == '\0')) {
        do {
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          if (((int)uVar12 < 0) || (*(int *)(uVar14 + 0x6f8) <= (int)uVar12)) break;
        } while (*(longlong *)(*(longlong *)(uVar14 + 0x6f0) + 0x18 + (longlong)(int)uVar12 * 0x28)
                 == 0);
        goto LAB_1407c97b0;
      }
    }
    iVar11 = ((int)local_60 - iVar2) + -1;
    if (iVar11 != 0) {
      puVar10 = local_868;
      if (local_68 != (undefined1 *)0x0) {
        puVar10 = local_68;
      }
      _guard_xfg_dispatch_icall_nop
                (puVar10 + (longlong)iVar2 * 0x20,puVar10 + (longlong)(iVar2 + 1) * 0x20,
                 (longlong)iVar11 << 5);
    }
    local_60 = CONCAT44(local_60._4_4_,(int)local_60 + -1);
    FUN_1407d9290(local_868);
    param_2 = local_9c0;
  } while( true );
}



// FUNCTION 1407c9a40 FUN_1407c9a40 body=58 status=ok
// SIG undefined FUN_1407c9a40(void)

int FUN_1407c9a40(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x588) != 0) && (lVar1 = FUN_1407cb650(), lVar1 != 0)) {
    if (param_2 == '\0') {
      return *(int *)(lVar1 + 0x60);
    }
    return *(int *)(lVar1 + 0x60) + *(int *)(lVar1 + 0x68);
  }
  return 0;
}



// FUNCTION 1407c9a80 FUN_1407c9a80 body=268 status=ok
// SIG undefined FUN_1407c9a80(void)

int FUN_1407c9a80(longlong param_1,char param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar1 = 0;
  if (param_3 == '\0') {
    if (param_2 == '\0') {
      return *(int *)(param_1 + 0x60);
    }
    return *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  }
  iVar3 = 0;
  iVar4 = 0;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar6 = 0;
    iVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x980);
    lVar6 = 0;
    if (lVar2 != 0) {
      lVar6 = *(longlong *)(lVar2 + 0x590);
    }
    iVar4 = iVar3;
    iVar5 = iVar1;
    if (lVar6 != 0) {
      while (((iVar4 = iVar3, iVar5 = iVar1, -1 < iVar3 && (iVar3 < *(int *)(lVar6 + 0x6f8))) &&
             (iVar5 = 0,
             *(longlong *)(*(longlong *)(lVar6 + 0x6f0) + 0x18 + (longlong)iVar3 * 0x28) == 0))) {
        iVar3 = iVar3 + 1;
      }
    }
  }
  do {
    if (iVar4 == -1) {
      return iVar5;
    }
    if (lVar6 == 0) {
      return iVar5;
    }
    if (iVar4 < 0) {
      return iVar5;
    }
    if (*(int *)(lVar6 + 0x6f8) <= iVar4) {
      return iVar5;
    }
    if (*(longlong *)(*(longlong *)(lVar6 + 0x6f0) + 0x18 + (longlong)iVar4 * 0x28) == 0) {
      return iVar5;
    }
    lVar2 = FUN_1407cb650();
    iVar1 = 0;
    if (lVar2 != 0) {
      iVar1 = FUN_1407c9a80(lVar2,param_2,0);
    }
    iVar5 = iVar5 + iVar1;
    do {
      iVar4 = iVar4 + 1;
      if ((iVar4 < 0) || (*(int *)(lVar6 + 0x6f8) <= iVar4)) break;
    } while (*(longlong *)(*(longlong *)(lVar6 + 0x6f0) + 0x18 + (longlong)iVar4 * 0x28) == 0);
  } while( true );
}



// FUNCTION 1407c9b90 FUN_1407c9b90 body=64 status=ok
// SIG undefined FUN_1407c9b90(void)

void FUN_1407c9b90(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1407cb650();
  if (lVar1 != 0) {
    FUN_1407c9a80(lVar1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1407c9bd0 FUN_1407c9bd0 body=217 status=ok
// SIG undefined FUN_1407c9bd0(void)

int FUN_1407c9bd0(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = 0;
  if ((param_3 == '\0') || (*(longlong *)(param_1 + 0x38) == 0)) {
    if (param_2 != (longlong *)0x0) {
      lVar5 = *(longlong *)(param_1 + 0x70);
      lVar4 = (longlong)*(int *)(param_1 + 0x78) * 0xa8 + lVar5;
      for (; lVar5 != lVar4; lVar5 = lVar5 + 0xa8) {
        cVar1 = (**(code **)(*param_2 + 0x2a8))(param_2,*(undefined8 *)(lVar5 + 0x50));
        if (cVar1 != '\0') {
          iVar6 = iVar6 + 1;
        }
      }
    }
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x590);
    lVar4 = *(longlong *)(lVar5 + 0x6f0);
    lVar5 = lVar4 + (longlong)*(int *)(lVar5 + 0x6f8) * 0x28;
    iVar6 = 0;
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0x28) {
      if ((*(longlong *)(lVar4 + 0x18) != 0) && (lVar3 = FUN_1407cb650(), lVar3 != 0)) {
        iVar2 = FUN_1407c9bd0(lVar3,param_2,0);
        iVar6 = iVar6 + iVar2;
      }
    }
  }
  return iVar6;
}



// FUNCTION 1407c9cb0 FUN_1407c9cb0 body=337 status=ok
// SIG undefined FUN_1407c9cb0(void)

int FUN_1407c9cb0(longlong param_1,char param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = 0;
  iVar1 = 0;
  if (param_3 != '\0') {
    iVar4 = 0;
    iVar5 = 0;
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar7 = 0;
      iVar9 = iVar8;
      iVar6 = 0;
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x980);
      lVar7 = 0;
      if (lVar3 != 0) {
        lVar7 = *(longlong *)(lVar3 + 0x590);
      }
      iVar5 = iVar4;
      iVar9 = 0;
      iVar6 = iVar1;
      if (lVar7 != 0) {
        while (((iVar5 = iVar4, iVar9 = iVar8, iVar6 = iVar1, -1 < iVar4 &&
                (iVar4 < *(int *)(lVar7 + 0x6f8))) &&
               (iVar6 = 0,
               *(longlong *)(*(longlong *)(lVar7 + 0x6f0) + 0x18 + (longlong)iVar4 * 0x28) == 0))) {
          iVar4 = iVar4 + 1;
        }
      }
    }
    do {
      if (((iVar5 == -1) || (lVar7 == 0)) ||
         ((iVar5 < 0 ||
          ((*(int *)(lVar7 + 0x6f8) <= iVar5 ||
           (lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x6f0) + 0x18 + (longlong)iVar5 * 0x28),
           lVar3 == 0)))))) goto LAB_1407c9de2;
      lVar2 = FUN_1407cb650(lVar3);
      iVar1 = 0;
      if ((lVar2 != 0) && (iVar1 = *(int *)(lVar2 + 100), param_2 != '\0')) {
        iVar1 = iVar1 + *(int *)(lVar2 + 0x68);
      }
      iVar9 = iVar9 + iVar1;
      lVar3 = FUN_1407cb650(lVar3);
      iVar1 = 0;
      if ((lVar3 != 0) && (iVar1 = *(int *)(lVar3 + 0x60), param_2 != '\0')) {
        iVar1 = iVar1 + *(int *)(lVar3 + 0x68);
      }
      iVar6 = iVar6 + iVar1;
      do {
        iVar5 = iVar5 + 1;
        if ((iVar5 < 0) || (*(int *)(lVar7 + 0x6f8) <= iVar5)) break;
      } while (*(longlong *)(*(longlong *)(lVar7 + 0x6f0) + 0x18 + (longlong)iVar5 * 0x28) == 0);
    } while( true );
  }
  iVar9 = *(int *)(param_1 + 100);
  iVar6 = *(int *)(param_1 + 0x60);
  if (param_2 != '\0') {
    iVar9 = iVar9 + *(int *)(param_1 + 0x68);
    iVar6 = iVar6 + *(int *)(param_1 + 0x68);
  }
LAB_1407c9de2:
  return iVar9 - iVar6;
}



// FUNCTION 1407c9e10 FUN_1407c9e10 body=64 status=ok
// SIG undefined FUN_1407c9e10(void)

void FUN_1407c9e10(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1407cb650();
  if (lVar1 != 0) {
    FUN_1407c9cb0(lVar1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1407c9e50 FUN_1407c9e50 body=268 status=ok
// SIG undefined FUN_1407c9e50(void)

ulonglong FUN_1407c9e50(undefined8 param_1,char param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar2 = FUN_1407cb650();
  uVar5 = 0;
  if (lVar2 != 0) {
    if (param_3 != '\0') {
      uVar4 = 0;
      uVar6 = 0;
      uVar7 = uVar5;
      if (*(longlong *)(lVar2 + 0x40) != 0) {
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x40) + 0x980);
        if (lVar2 != 0) {
          uVar7 = *(ulonglong *)(lVar2 + 0x590);
        }
        uVar4 = uVar5;
        uVar6 = uVar5;
        if (uVar7 != 0) {
          while (((iVar1 = (int)uVar4, uVar6 = uVar5, -1 < iVar1 &&
                  (iVar1 < *(int *)(uVar7 + 0x6f8))) &&
                 (uVar6 = 0,
                 *(longlong *)(*(longlong *)(uVar7 + 0x6f0) + 0x18 + (longlong)iVar1 * 0x28) == 0)))
          {
            uVar4 = (ulonglong)(iVar1 + 1);
          }
        }
      }
      do {
        iVar1 = (int)uVar4;
        if (iVar1 == -1) {
          return uVar6;
        }
        if (uVar7 == 0) {
          return uVar6;
        }
        if (iVar1 < 0) {
          return uVar6;
        }
        if (*(int *)(uVar7 + 0x6f8) <= iVar1) {
          return uVar6;
        }
        lVar2 = *(longlong *)(*(longlong *)(uVar7 + 0x6f0) + 0x18 + (longlong)iVar1 * 0x28);
        if (lVar2 == 0) {
          return uVar6;
        }
        iVar1 = FUN_1407c9e50(lVar2,param_2,0);
        uVar6 = (ulonglong)(uint)((int)uVar6 + iVar1);
        do {
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
          if (((int)uVar3 < 0) || (*(int *)(uVar7 + 0x6f8) <= (int)uVar3)) break;
        } while (*(longlong *)(*(longlong *)(uVar7 + 0x6f0) + 0x18 + (longlong)(int)uVar3 * 0x28) ==
                 0);
      } while( true );
    }
    uVar5 = (ulonglong)*(uint *)(lVar2 + 100);
    if (param_2 != '\0') {
      uVar5 = (ulonglong)(*(uint *)(lVar2 + 100) + *(int *)(lVar2 + 0x68));
    }
  }
  return uVar5;
}



// FUNCTION 1407c9f60 FUN_1407c9f60 body=27 status=ok
// SIG undefined FUN_1407c9f60(void)

undefined4 FUN_1407c9f60(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1407cb650();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x6c);
  }
  return 0;
}



// FUNCTION 1407c9fd0 FUN_1407c9fd0 body=135 status=ok
// SIG undefined FUN_1407c9fd0(void)

int FUN_1407c9fd0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 local_28;
  longlong local_20;
  
  lVar1 = *param_2;
  iVar4 = 0;
  iVar5 = 0;
  if (-1 < *(int *)(lVar1 + 0x18)) {
    lVar6 = 0;
    do {
      local_28 = *(undefined8 *)(lVar6 + *(longlong *)(*param_2 + 0x10));
      local_20 = param_2[1];
      plVar2 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x30));
      iVar3 = (**(code **)(*plVar2 + 0x2a0))(plVar2,&local_28);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x38;
      iVar4 = iVar4 + iVar3;
    } while (iVar5 <= *(int *)(lVar1 + 0x18));
  }
  return iVar4;
}



// FUNCTION 1407ca060 FUN_1407ca060 body=178 status=ok
// SIG undefined FUN_1407ca060(void)

longlong FUN_1407ca060(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_38 [24];
  longlong local_20;
  
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 200) = 0;
  lVar3 = (**(code **)(*param_1 + 0x310))(param_1,local_38);
  iVar2 = *(int *)(param_2 + 200);
  *(int *)(param_2 + 200) = iVar2 + 1;
  if (*(int *)(param_2 + 0xcc) < iVar2 + 1) {
    TArray<FCompactPose,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_2,iVar2);
  }
  lVar1 = (longlong)iVar2 * 3 + 1;
  lVar4 = *(longlong *)(param_2 + 0xc0);
  if (*(longlong *)(param_2 + 0xc0) == 0) {
    lVar4 = param_2;
  }
  *(undefined8 *)(lVar4 + -8 + lVar1 * 8) = *(undefined8 *)(lVar3 + 0x10);
  FString::FString(lVar4 + lVar1 * 8,lVar3 + 0x18);
  if (local_20 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1407ca120 FUN_1407ca120 body=319 status=ok
// SIG undefined FUN_1407ca120(void)

longlong FUN_1407ca120(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 local_48 [24];
  longlong local_30;
  
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 200) = 0;
  lVar2 = (**(code **)(*param_1 + 0x310))(param_1,local_48);
  iVar1 = *(int *)(param_2 + 200);
  *(int *)(param_2 + 200) = iVar1 + 1;
  if (*(int *)(param_2 + 0xcc) < iVar1 + 1) {
    TArray<FCompactPose,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_2,iVar1);
  }
  lVar6 = *(longlong *)(param_2 + 0xc0);
  if (*(longlong *)(param_2 + 0xc0) == 0) {
    lVar6 = param_2;
  }
  *(undefined8 *)(lVar6 + (longlong)iVar1 * 0x18) = *(undefined8 *)(lVar2 + 0x10);
  FString::FString(lVar6 + ((longlong)iVar1 * 3 + 1) * 8,lVar2 + 0x18);
  if (local_30 != 0) {
    FMemory::Free();
  }
  iVar1 = (int)param_1[0x3a];
  if (iVar1 != 0) {
    iVar4 = *(int *)(param_2 + 200);
    if (*(int *)(param_2 + 0xcc) < iVar4 + iVar1) {
      TArray<FMovieSceneEntityAndAnimTypeID,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo
                (param_2);
      iVar4 = *(int *)(param_2 + 200);
    }
    puVar3 = (undefined8 *)param_1[0x39];
    lVar2 = *(longlong *)(param_2 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      lVar2 = param_2;
    }
    puVar5 = (undefined8 *)(lVar2 + (longlong)iVar4 * 0x18);
    iVar4 = iVar1;
    do {
      *puVar5 = *puVar3;
      FString::FString(puVar5 + 1,puVar3 + 1);
      puVar5 = puVar5 + 3;
      puVar3 = puVar3 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + iVar1;
  }
  return param_2;
}



// FUNCTION 1407ca260 GetHittestGrid body=8 status=ok
// SIG undefined GetHittestGrid(void)

undefined8 SWindow::GetHittestGrid(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x938);
}



// FUNCTION 1407ca270 FUN_1407ca270 body=341 status=ok
// SIG undefined FUN_1407ca270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1407ca270(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined1 auStack_908 [32];
  code *local_8e8 [6];
  undefined8 local_8b8;
  undefined4 local_8a8;
  undefined1 local_898 [32];
  longlong local_878 [4];
  longlong *local_858;
  int local_848;
  undefined1 local_828 [2048];
  undefined1 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_908;
  uVar2 = 0;
  local_28 = (undefined1 *)0x0;
  local_20 = 0;
  local_8b8 = 0;
  local_8a8 = 0;
  local_8e8[0] = FUN_1407c3030;
  FUN_1407bbee0(local_898,param_2,local_8e8,0);
  FUN_1407c6bc0(param_1,local_828,local_898);
  iVar1 = FUN_1407d9c40(local_828,param_2,0,0xbf800000);
  if ((-1 < iVar1) && (iVar1 < (int)local_20)) {
    puVar3 = local_828;
    if (local_28 != (undefined1 *)0x0) {
      puVar3 = local_28;
    }
    plVar4 = *(longlong **)(puVar3 + (longlong)iVar1 * 0x20);
    if (plVar4 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar4 + 0x2b8))(plVar4,param_2);
    }
  }
  if (local_848 != 0) {
    plVar4 = local_878;
    if (local_858 != (longlong *)0x0) {
      plVar4 = local_858;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_858 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_28 != (undefined1 *)0x0) {
    FMemory::Free(local_28);
  }
  return uVar2;
}



// FUNCTION 1407ca3d0 FUN_1407ca3d0 body=394 status=ok
// SIG undefined FUN_1407ca3d0(void)

longlong * FUN_1407ca3d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 200);
  lVar5 = (longlong)iVar2;
  plVar3 = *(longlong **)(param_1 + 0xc0);
  if (*(longlong **)(param_1 + 0xc0) == (longlong *)0x0) {
    plVar3 = plVar1;
  }
  plVar4 = plVar3 + lVar5 * 5;
  if (plVar3 != plVar4) {
    do {
      if (*(longlong *)(*plVar3 + 0x28) == *(longlong *)(param_2 + 0x28)) goto LAB_1407ca4d5;
      plVar3 = plVar3 + 5;
    } while (plVar3 != plVar4);
  }
  *(int *)(param_1 + 200) = iVar2 + 1;
  if (*(int *)(param_1 + 0xcc) < iVar2 + 1) {
    TArray<`anonymous_namespace'::FKerningOnlyTextSequenceEntry,TInlineAllocator<4,FDefaultAllocator>_>
    ::ResizeGrow(plVar1,iVar2);
  }
  plVar3 = *(longlong **)(param_1 + 0xc0);
  if (*(longlong **)(param_1 + 0xc0) == (longlong *)0x0) {
    plVar3 = plVar1;
  }
  plVar4 = plVar3 + lVar5 * 5 + 1;
  plVar3[lVar5 * 5] = param_2;
  plVar3[lVar5 * 5 + 3] = 0;
  plVar3[lVar5 * 5 + 4] = 0;
  *(int *)(plVar4 + 3) = (int)plVar4[3] + 1;
  if (*(int *)((longlong)plVar4 + 0x1c) < (int)plVar4[3]) {
    TArray<FSlateCachedClipState,TInlineAllocator<1,TSizedDefaultAllocator<32>_>_>::ResizeGrow
              (plVar4,0);
  }
  plVar3 = (longlong *)plVar4[2];
  if ((longlong *)plVar4[2] == (longlong *)0x0) {
    plVar3 = plVar4;
  }
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3 = *(longlong **)(param_1 + 0xc0);
  if (*(longlong **)(param_1 + 0xc0) == (longlong *)0x0) {
    plVar3 = plVar1;
  }
  plVar3 = plVar3 + lVar5 * 5;
LAB_1407ca4d5:
  plVar1 = plVar3 + 1;
  if ((int)plVar3[4] == 0) {
    iVar2 = (int)plVar3[4];
    *(int *)(plVar3 + 4) = iVar2 + 1;
    if (*(int *)((longlong)plVar3 + 0x24) < iVar2 + 1) {
      TArray<FSlateCachedClipState,TInlineAllocator<1,TSizedDefaultAllocator<32>_>_>::ResizeGrow
                (plVar1,iVar2);
    }
    plVar4 = (longlong *)plVar3[3];
    if ((longlong *)plVar3[3] == (longlong *)0x0) {
      plVar4 = plVar1;
    }
    plVar4[(longlong)iVar2 * 2] = 0;
    plVar4[(longlong)iVar2 * 2 + 1] = 0;
    plVar4 = (longlong *)plVar3[3];
    if ((longlong *)plVar3[3] == (longlong *)0x0) {
      plVar4 = plVar1;
    }
  }
  else {
    plVar4 = (longlong *)plVar3[3];
    if ((longlong *)plVar3[3] == (longlong *)0x0) {
      plVar4 = plVar1;
    }
  }
  return plVar4 + (longlong)((int)plVar3[4] + -1) * 2;
}



// FUNCTION 1407ca560 GetScaledAxis body=105 status=ok
// SIG undefined GetScaledAxis(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FMatrix::GetScaledAxis(undefined4 *param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = DAT_1468b5d98;
  if (param_3 == 1) {
    *(undefined4 *)param_2 = *param_1;
    *(undefined4 *)((longlong)param_2 + 4) = param_1[1];
    *(undefined4 *)(param_2 + 1) = param_1[2];
    return param_2;
  }
  if (param_3 != 2) {
    if (param_3 != 3) {
      *param_2 = _DAT_1468b5d90;
      *(undefined4 *)(param_2 + 1) = uVar1;
      return param_2;
    }
    *(undefined4 *)param_2 = param_1[8];
    *(undefined4 *)((longlong)param_2 + 4) = param_1[9];
    *(undefined4 *)(param_2 + 1) = param_1[10];
    return param_2;
  }
  *(undefined4 *)param_2 = param_1[4];
  *(undefined4 *)((longlong)param_2 + 4) = param_1[5];
  *(undefined4 *)(param_2 + 1) = param_1[6];
  return param_2;
}



// FUNCTION 1407ca5d0 FUN_1407ca5d0 body=1184 status=ok
// SIG undefined FUN_1407ca5d0(void)

/* WARNING: Type propagation algorithm not settling */

longlong FUN_1407ca5d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong local_res8;
  undefined2 *local_50;
  int local_48;
  
  if (*(longlong *)(param_1 + 0x98) == 0) {
    return 0;
  }
  local_res8 = param_1;
  lVar6 = FUN_1407e02a0();
  lVar16 = *(longlong *)(param_1 + 0x98);
  while( true ) {
    if (lVar16 == 0) {
      return 0;
    }
    if (lVar16 == lVar6) break;
    lVar16 = *(longlong *)(lVar16 + 0x30);
  }
  if (*(longlong *)(param_1 + 0x98) == 0) {
    return 0;
  }
  lVar16 = *(longlong *)(param_1 + 0x228);
  lVar6 = (longlong)*(int *)(param_1 + 0x230) * 0xc0 + lVar16;
joined_r0x0001407ca663:
  if (lVar16 == lVar6) {
    plVar12 = *(longlong **)(param_1 + 0x238);
    plVar15 = plVar12 + *(int *)(param_1 + 0x240);
    for (; plVar12 != plVar15; plVar12 = plVar12 + 1) {
      lVar6 = *plVar12;
      if (lVar6 != 0) {
        lVar16 = *(longlong *)(lVar6 + 0x30);
        lVar6 = (longlong)*(int *)(lVar6 + 0x38) * 0xc0 + lVar16;
        for (; lVar16 != lVar6; lVar16 = lVar16 + 0xc0) {
          if ((DAT_14685c0c0 == '\0') || (*(char *)(lVar16 + 0xa0) != '\0')) {
            lVar10 = *(longlong *)(param_2 + 0x10);
            FString::FString(&local_50,param_2 + 0x18);
            iVar2 = local_48;
            puVar11 = local_50;
            plVar1 = *(longlong **)(lVar16 + 0x90);
            iVar5 = *(int *)(lVar16 + 0x98);
            for (plVar13 = plVar1; plVar13 != plVar1 + (longlong)iVar5 * 3; plVar13 = plVar13 + 3) {
              if (*plVar13 == lVar10) {
                puVar9 = &DAT_143f3eda8;
                if (iVar2 != 0) {
                  puVar9 = puVar11;
                }
                if ((int)plVar13[2] == 0) {
                  puVar8 = &DAT_143f3eda8;
                }
                else {
                  puVar8 = (undefined2 *)plVar13[1];
                }
                iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
                if (iVar4 == 0) {
                  lVar10 = ((longlong)plVar13 - (longlong)plVar1) / 6 +
                           ((longlong)plVar13 - (longlong)plVar1 >> 0x3f);
                  uVar14 = (lVar10 >> 2) - (lVar10 >> 0x3f);
                  if (puVar11 != (undefined2 *)0x0) {
                    FMemory::Free(puVar11);
                  }
                  if ((int)uVar14 == -1) goto LAB_1407ca8b7;
                  goto LAB_1407ca858;
                }
              }
            }
            if (puVar11 != (undefined2 *)0x0) {
              FMemory::Free(puVar11);
            }
          }
LAB_1407ca8b7:
        }
      }
      param_1 = local_res8;
    }
    if ((*(char *)(param_1 + 0xa0) == '\0') ||
       (piVar7 = (int *)TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                        ::FindId(param_1 + 0x30,&local_res8,param_3), *piVar7 == -1)) {
      if (*(char *)(param_1 + 0xa1) == '\0') {
        return 0;
      }
      lVar16 = *(longlong *)(param_1 + 0x88);
      lVar6 = (longlong)*(int *)(param_1 + 0x90) * 0x20 + lVar16;
      do {
        if (lVar16 == lVar6) {
          return 0;
        }
        plVar15 = *(longlong **)(lVar16 + 0x10);
        plVar12 = plVar15 + (longlong)*(int *)(lVar16 + 0x18) * 4;
        for (; plVar15 != plVar12; plVar15 = plVar15 + 4) {
          if ((DAT_14685c0c0 == '\0') || ((char)plVar15[3] != '\0')) {
            plVar13 = (longlong *)*plVar15;
            plVar1 = plVar13 + (longlong)(int)plVar15[1] * 3;
            for (; plVar13 != plVar1; plVar13 = plVar13 + 3) {
              if (*plVar13 == *(longlong *)(param_2 + 0x10)) {
                if (*(int *)(param_2 + 0x20) == 0) {
                  puVar11 = &DAT_143f3eda8;
                }
                else {
                  puVar11 = *(undefined2 **)(param_2 + 0x18);
                }
                if ((int)plVar13[2] == 0) {
                  puVar9 = &DAT_143f3eda8;
                }
                else {
                  puVar9 = (undefined2 *)plVar13[1];
                }
                iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar11);
                if (iVar5 == 0) goto LAB_1407caa38;
              }
            }
          }
        }
        lVar16 = lVar16 + 0x20;
      } while( true );
    }
LAB_1407caa38:
    plVar15 = *(longlong **)(param_1 + 0x98);
LAB_1407caa3f:
    if (plVar15 == (longlong *)0x0) {
      return 0;
    }
    if (plVar15[0x1f] != 0) {
      return plVar15[0x1f];
    }
    (**(code **)(*plVar15 + 0x368))(plVar15);
    return plVar15[0x1f];
  }
  if ((DAT_14685c0c0 == '\0') || (*(char *)(lVar16 + 0xa0) != '\0')) {
    lVar10 = *(longlong *)(param_2 + 0x10);
    FString::FString(&local_50,param_2 + 0x18);
    iVar2 = local_48;
    puVar11 = local_50;
    plVar15 = *(longlong **)(lVar16 + 0x90);
    iVar5 = *(int *)(lVar16 + 0x98);
    plVar12 = plVar15;
joined_r0x0001407ca6c5:
    if (plVar12 == plVar15 + (longlong)iVar5 * 3) goto LAB_1407ca715;
    if (*plVar12 != lVar10) {
LAB_1407ca704:
      plVar12 = plVar12 + 3;
      goto joined_r0x0001407ca6c5;
    }
    puVar9 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar9 = puVar11;
    }
    if ((int)plVar12[2] == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)plVar12[1];
    }
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
    if (iVar4 != 0) goto LAB_1407ca704;
    lVar10 = ((longlong)plVar12 - (longlong)plVar15) / 6 +
             ((longlong)plVar12 - (longlong)plVar15 >> 0x3f);
    uVar14 = (lVar10 >> 2) - (lVar10 >> 0x3f);
    if (puVar11 != (undefined2 *)0x0) {
      FMemory::Free(puVar11);
    }
    if ((int)uVar14 == -1) goto LAB_1407ca722;
LAB_1407ca858:
    lVar6 = local_res8;
    cVar3 = FUN_1407cdbd0(lVar16,uVar14 & 0xffffffff,local_res8);
    if (cVar3 == '\0') {
      return 0;
    }
    plVar15 = *(longlong **)(lVar6 + 0x98);
    goto LAB_1407caa3f;
  }
  goto LAB_1407ca722;
LAB_1407ca715:
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
LAB_1407ca722:
  lVar16 = lVar16 + 0xc0;
  param_1 = local_res8;
  goto joined_r0x0001407ca663;
}



// FUNCTION 1407caa70 FUN_1407caa70 body=132 status=ok
// SIG undefined FUN_1407caa70(void)

undefined8 * FUN_1407caa70(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 0xc);
  fVar3 = *(float *)(param_3 + 8);
  *(undefined1 *)(param_2 + 3) = 1;
  *param_2 = CONCAT44(fVar3 - 1.0,fVar1 - 1.0);
  *(float *)(param_2 + 1) = fVar2 - 1.0;
  *(ulonglong *)((longlong)param_2 + 0xc) = CONCAT44(fVar3 + 1.0,fVar1 + 1.0);
  *(float *)((longlong)param_2 + 0x14) = fVar2 + 1.0;
  return param_2;
}



// FUNCTION 1407cab00 FUN_1407cab00 body=266 status=ok
// SIG undefined FUN_1407cab00(void)

undefined8 * FUN_1407cab00(longlong param_1,undefined8 *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 local_58;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  
  local_50 = *(float *)(param_1 + 0xec) - *(float *)(param_1 + 0xe0);
  local_58 = 0;
  FRotator::RotateVector(param_3 + 0x10,&local_48,&local_58);
  local_48 = local_48 + *(float *)(param_3 + 4);
  local_40 = local_40 + *(float *)(param_3 + 0xc);
  local_44 = local_44 + *(float *)(param_3 + 8);
  fVar1 = *(float *)(param_1 + 0xe4);
  fVar2 = *(float *)(param_1 + 0xec);
  fVar3 = *(float *)(param_1 + 0xe8);
  *(undefined1 *)(param_2 + 3) = 1;
  *param_2 = CONCAT44(local_44 - fVar3,local_48 - fVar1);
  *(float *)(param_2 + 1) = local_40 - fVar2;
  *(ulonglong *)((longlong)param_2 + 0xc) = CONCAT44(fVar3 + local_44,fVar1 + local_48);
  *(float *)((longlong)param_2 + 0x14) = fVar2 + local_40;
  return param_2;
}



// FUNCTION 1407cac10 FUN_1407cac10 body=8 status=ok
// SIG undefined FUN_1407cac10(void)

longlong FUN_1407cac10(longlong param_1)

{
  return param_1 + 0x8e9;
}



// FUNCTION 1407cac20 FUN_1407cac20 body=131 status=ok
// SIG undefined FUN_1407cac20(void)

undefined4 * FUN_1407cac20(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 local_38 [48];
  
  if (*(char *)(param_1 + 0x8e8) != '\x02') {
    uVar1 = *(undefined4 *)(param_1 + 0x224);
    uVar2 = *(undefined4 *)(param_1 + 0x228);
    *param_2 = *(undefined4 *)(param_1 + 0x220);
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    return param_2;
  }
  lVar3 = FUN_1407cb7a0(param_1,local_38);
  uVar1 = *(undefined4 *)(lVar3 + 0x14);
  uVar2 = *(undefined4 *)(lVar3 + 0x18);
  *param_2 = *(undefined4 *)(lVar3 + 0x10);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return param_2;
}



// FUNCTION 1407cacd0 FUN_1407cacd0 body=48 status=ok
// SIG undefined FUN_1407cacd0(void)

void FUN_1407cacd0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1407cad30(param_1 + 0x98);
  if (lVar1 != 0) {
    FUN_1407ca270(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1407cad00 FUN_1407cad00 body=28 status=ok
// SIG undefined FUN_1407cad00(void)

undefined8 FUN_1407cad00(longlong param_1,int param_2)

{
  if (0 < *(int *)(param_1 + 0x38)) {
    return *(undefined8 *)((longlong)param_2 * 0x128 + *(longlong *)(param_1 + 0x30));
  }
  return 0;
}



// FUNCTION 1407cad20 GetNumVariantSets body=4 status=ok
// SIG undefined GetNumVariantSets(void)

undefined4 ULevelVariantSets::GetNumVariantSets(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// FUNCTION 1407cad30 FUN_1407cad30 body=179 status=ok
// SIG undefined FUN_1407cad30(void)

longlong FUN_1407cad30(undefined8 *param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_38 [16];
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  plVar2 = (longlong *)FString::FString(local_38,param_1 + 1);
  local_28 = *param_1;
  local_20 = *plVar2;
  *plVar2 = 0;
  local_18 = (undefined4)plVar2[1];
  local_14 = *(undefined4 *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  lVar3 = FUN_141796df0(&local_28);
  if (lVar3 != 0) {
    lVar4 = FUN_1407e4b30();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1407cadcb;
  }
  lVar3 = 0;
LAB_1407cadcb:
  if (local_20 != 0) {
    FMemory::Free();
  }
  return lVar3;
}



// FUNCTION 1407cadf0 FUN_1407cadf0 body=174 status=ok
// SIG undefined FUN_1407cadf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1407cadf0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [16];
  undefined8 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar1 = *(longlong **)(param_1 + 0x8f8);
  if (plVar1 != (longlong *)0x0) {
    uVar3 = 0;
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    (**(code **)(*plVar1 + 0x2f8))(plVar1,local_a8);
    if (0 < (int)local_20) {
      puVar2 = local_a8;
      if (local_28 != (undefined8 *)0x0) {
        puVar2 = local_28;
      }
      uVar3 = *puVar2;
    }
    if (local_28 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    return uVar3;
  }
  return 0;
}



// FUNCTION 1407caeb0 GetSocket body=5 status=ok
// SIG undefined GetSocket(void)

undefined8 FBackChannelConnection::GetSocket(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// FUNCTION 1407caec0 FUN_1407caec0 body=122 status=ok
// SIG undefined FUN_1407caec0(void)

longlong FUN_1407caec0(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_142c6d3b0(param_1,&DAT_14685c1b8,3);
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(lVar2 + 0x18);
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
    if (bVar1) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1407caf40 FUN_1407caf40 body=8 status=ok
// SIG undefined FUN_1407caf40(void)

undefined8 FUN_1407caf40(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x598);
}



// FUNCTION 1407caf50 FUN_1407caf50 body=58 status=ok
// SIG undefined FUN_1407caf50(void)

void FUN_1407caf50(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  iVar1 = *(int *)(param_2 + 0x10);
  if ((((lVar2 != 0) && (-1 < iVar1)) && (iVar1 < *(int *)(lVar2 + 0x978))) &&
     (*(longlong *)(*(longlong *)(lVar2 + 0x970) + (longlong)iVar1 * 8) != 0)) {
    return;
  }
  FWeakObjectPtr::Get(param_2 + 0xa0);
  return;
}



// FUNCTION 1407caf90 FUN_1407caf90 body=39 status=ok
// SIG undefined FUN_1407caf90(void)

undefined8 FUN_1407caf90(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (((lVar1 != 0) && (-1 < param_2)) && (param_2 < *(int *)(lVar1 + 0x978))) {
    return *(undefined8 *)(*(longlong *)(lVar1 + 0x970) + (longlong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 1407cafc0 FUN_1407cafc0 body=159 status=ok
// SIG undefined FUN_1407cafc0(void)

void FUN_1407cafc0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x70);
  *(undefined4 *)(param_2 + 0x88) = 0;
  if (*(int *)(param_2 + 0x8c) < iVar1) {
    FUN_1407418a0(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_2 + 0x88);
    if (*(int *)(param_2 + 0x8c) < iVar2 + iVar1) {
      FUN_1407418a0(param_2);
      iVar2 = *(int *)(param_2 + 0x88);
    }
    lVar3 = *(longlong *)(param_2 + 0x80);
    if (*(longlong *)(param_2 + 0x80) == 0) {
      lVar3 = param_2;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(lVar3 + (longlong)iVar2 * 8),*(void **)(param_1 + 0x68),(longlong)iVar1 << 3
              );
    *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + iVar1;
  }
  return;
}



// FUNCTION 1407cb060 FUN_1407cb060 body=142 status=ok
// SIG undefined FUN_1407cb060(void)

void FUN_1407cb060(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_2 + 0x8c);
  iVar2 = 0;
  *(undefined4 *)(param_2 + 0x88) = 0;
  if (iVar1 < 1) {
    FUN_1407418a0(param_2,1);
    iVar1 = *(int *)(param_2 + 0x8c);
    iVar2 = *(int *)(param_2 + 0x88);
  }
  *(int *)(param_2 + 0x88) = iVar2 + 1;
  if (iVar1 < iVar2 + 1) {
    TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_2,iVar2);
  }
  lVar3 = *(longlong *)(param_2 + 0x80);
  if (*(longlong *)(param_2 + 0x80) == 0) {
    lVar3 = param_2;
  }
  *(undefined8 *)(lVar3 + (longlong)iVar2 * 8) = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1407cb0f0 FUN_1407cb0f0 body=101 status=ok
// SIG undefined FUN_1407cb0f0(void)

void FUN_1407cb0f0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_2 + 0x88);
  iVar2 = iVar1 + 1;
  *(int *)(param_2 + 0x88) = iVar2;
  if (*(int *)(param_2 + 0x8c) < iVar2) {
    TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_2);
  }
  lVar3 = *(longlong *)(param_2 + 0x80);
  if (*(longlong *)(param_2 + 0x80) == 0) {
    lVar3 = param_2;
  }
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = *(undefined8 *)(param_1 + 0x140);
  return;
}



// FUNCTION 1407cb160 FUN_1407cb160 body=8 status=ok
// SIG undefined FUN_1407cb160(void)

longlong FUN_1407cb160(longlong param_1)

{
  return param_1 + 0x970;
}



// FUNCTION 1407cb200 FUN_1407cb200 body=889 status=ok
// SIG undefined FUN_1407cb200(void)

ulonglong FUN_1407cb200(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  int local_res10;
  int local_118;
  int local_114;
  longlong local_110;
  undefined8 local_108;
  undefined1 local_100 [8];
  undefined8 local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined8 *local_e0;
  int *local_d8;
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined1 local_c0 [40];
  undefined1 local_98 [80];
  longlong *local_48;
  
  if (param_2 != (longlong *)0x0) {
    iVar12 = *(int *)(param_1 + 0x12);
    if ((-1 < iVar12) && (iVar12 < *(int *)(param_1 + 0x14))) {
      piVar2 = (int *)(param_1[0x13] + (longlong)iVar12 * 0x18);
      local_res10 = 0;
      iVar12 = piVar2[4];
      if (0 < iVar12) {
        while( true ) {
          iVar3 = *piVar2;
          if ((iVar3 < 0) || (iVar12 <= iVar3)) break;
          uVar14 = (ulonglong)*(int *)(*(longlong *)(piVar2 + 2) + (longlong)iVar3 * 4);
          iVar12 = *(int *)(param_1 + 0x12);
          if ((-1 < iVar12) && (iVar12 < *(int *)(param_1 + 0x14))) {
            piVar11 = (int *)(param_1[0x13] + (longlong)iVar12 * 0x18);
            iVar12 = *(int *)(param_1[0x13] + 0x10 + (longlong)iVar12 * 0x18);
            if (iVar12 < 1) {
              iVar12 = 0;
            }
            else {
              iVar12 = (*piVar11 + 1) % iVar12;
            }
            *piVar11 = iVar12;
            if (iVar12 == 0) {
              FUN_1407d7a10(param_1,*(undefined4 *)(param_1 + 0x12));
            }
          }
          lVar7 = 0;
          lVar4 = *(longlong *)(*(longlong *)(param_1[8] + 0x970) + uVar14 * 8);
          if (lVar4 != 0) {
            uVar6 = *(uint *)(lVar4 + 0xc);
            if ((int)uVar6 < (int)DAT_1469e91c4) {
              uVar13 = uVar6 & 0xffff;
              if ((int)uVar6 < 0) {
                uVar6 = uVar6 + 0xffff;
                uVar13 = uVar13 - 0x10000;
              }
              lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                      (longlong)(int)uVar13 * 0x18;
            }
            if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) {
              FUN_1407bbfc0(local_98,lVar4);
              (**(code **)(*param_2 + 0x298))(param_2,local_c0,local_98);
              if ((*(char *)(lVar4 + 0x8c8) != '\0') && (*(char *)(lVar4 + 0x951) == '\0')) {
                plVar8 = (longlong *)(**(code **)(*param_2 + 0x2c8))(param_2,local_d0);
                local_110 = *plVar8;
                if (local_110 != 0) {
                  lVar9 = FUN_1428dfc70();
                  for (lVar7 = local_110; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
                    if (lVar7 == lVar9) {
                      FWeakObjectPtr::operator=(&local_108);
                      lVar7 = lVar4 + 0x728;
                      local_f8 = local_108;
                      FUN_1407c60e0(lVar7,&local_114);
                      piVar11 = (int *)0x0;
                      if (local_114 != -1) {
                        lVar9 = *(longlong *)(lVar4 + 0x868);
                        if (*(longlong *)(lVar4 + 0x868) == 0) {
                          lVar9 = lVar7;
                        }
                        piVar11 = (int *)(lVar9 + (longlong)local_114 * 0x14);
                      }
                      piVar10 = piVar11 + 2;
                      if (piVar11 == (int *)0x0) {
                        piVar10 = (int *)0x0;
                      }
                      if (piVar10 == (int *)0x0) {
                        local_e8 = &local_110;
                        local_f0 = lVar4;
                        local_118 = FUN_1407bebb0(&local_f0);
                        local_e0 = &local_108;
                        local_d8 = &local_118;
                        FUN_1407b9a30(lVar7,local_100,&local_e0);
                        iVar12 = local_118;
                      }
                      else {
                        iVar12 = *piVar10;
                      }
                      if ((iVar12 == 0) &&
                         (cVar5 = FUN_1407cd640(*param_1,local_c0,local_c8), cVar5 == '\0')) {
                        if (local_48 != (longlong *)0x0) {
                          LOCK();
                          plVar8 = local_48 + 1;
                          lVar7 = *plVar8;
                          *(int *)plVar8 = (int)*plVar8 + -1;
                          UNLOCK();
                          if ((int)lVar7 == 1) {
                            (**(code **)*local_48)(local_48);
                            LOCK();
                            piVar2 = (int *)((longlong)local_48 + 0xc);
                            iVar12 = *piVar2;
                            *piVar2 = *piVar2 + -1;
                            UNLOCK();
                            if (iVar12 == 1) {
                              (**(code **)(*local_48 + 8))(local_48,1);
                            }
                          }
                        }
                        goto LAB_1407cb535;
                      }
                      break;
                    }
                  }
                }
              }
              plVar8 = local_48;
              if (local_48 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_48 + 1;
                lVar7 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*local_48)(local_48);
                  LOCK();
                  piVar11 = (int *)((longlong)plVar8 + 0xc);
                  iVar12 = *piVar11;
                  *piVar11 = *piVar11 + -1;
                  UNLOCK();
                  if (iVar12 == 1) {
                    (**(code **)(*plVar8 + 8))(plVar8,1);
                  }
                }
              }
            }
          }
          iVar12 = piVar2[4];
          local_res10 = local_res10 + 1;
          if (iVar12 <= local_res10) break;
        }
      }
      uVar14 = 0xffffffff;
LAB_1407cb535:
      return uVar14 & 0xffffffff;
    }
  }
  return 0xffffffff;
}



// FUNCTION 1407cb580 FUN_1407cb580 body=8 status=ok
// SIG undefined FUN_1407cb580(void)

longlong FUN_1407cb580(longlong param_1)

{
  return param_1 + 0x940;
}



// FUNCTION 1407cb590 FUN_1407cb590 body=33 status=ok
// SIG undefined FUN_1407cb590(void)

undefined8 * FUN_1407cb590(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x488) != 0) {
    *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x8e0);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1407cb5c0 FUN_1407cb5c0 body=8 status=ok
// SIG undefined FUN_1407cb5c0(void)

undefined8 FUN_1407cb5c0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x980);
}



// FUNCTION 1407cb5d0 GetAttachedActor body=8 status=ok
// SIG undefined GetAttachedActor(void)

undefined8 UCableComponent::GetAttachedActor(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x588);
}



// FUNCTION 1407cb5e0 GetSamples body=5 status=ok
// SIG undefined GetSamples(void)

undefined8 FWmfMediaPlayer::GetSamples(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// FUNCTION 1407cb5f0 FUN_1407cb5f0 body=40 status=ok
// SIG undefined FUN_1407cb5f0(void)

undefined8 FUN_1407cb5f0(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_2;
  if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 600))) &&
     (lVar2 = (longlong)iVar1 * 0x140 + *(longlong *)(param_1 + 0x250), lVar2 != 0)) {
    return *(undefined8 *)(lVar2 + 0x40);
  }
  return 0;
}



// FUNCTION 1407cb620 FUN_1407cb620 body=34 status=ok
// SIG undefined FUN_1407cb620(void)

longlong FUN_1407cb620(longlong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 600))) {
    return (longlong)iVar1 * 0x140 + *(longlong *)(param_1 + 0x250);
  }
  return 0;
}



// FUNCTION 1407cb650 FUN_1407cb650 body=146 status=ok
// SIG undefined FUN_1407cb650(void)

longlong FUN_1407cb650(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [8];
  
  if (*(longlong **)(param_1 + 0x118) == (longlong *)0x0) {
    return 0;
  }
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x148))();
  if (lVar2 != 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14625a720,local_res8,lVar2);
    if ((local_res8[0] != -1) &&
       (lVar2 = DAT_14625a720 + (longlong)local_res8[0] * 0x18, lVar2 != 0)) {
      lVar2 = *(longlong *)(lVar2 + 8);
      goto LAB_1407cb6ad;
    }
  }
  lVar2 = 0;
LAB_1407cb6ad:
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x930);
    if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 600))) {
      return (longlong)iVar1 * 0x140 + *(longlong *)(lVar2 + 0x250);
    }
  }
  return 0;
}



// FUNCTION 1407cb6f0 FUN_1407cb6f0 body=12 status=ok
// SIG undefined FUN_1407cb6f0(void)

undefined4 * FUN_1407cb6f0(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x930);
  return param_2;
}



// FUNCTION 1407cb700 FUN_1407cb700 body=8 status=ok
// SIG undefined FUN_1407cb700(void)

undefined8 FUN_1407cb700(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x590);
}



// FUNCTION 1407cb710 FUN_1407cb710 body=20 status=ok
// SIG undefined FUN_1407cb710(void)

longlong FUN_1407cb710(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x900);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x8f8);
  }
  return lVar1;
}



// FUNCTION 1407cb730 FUN_1407cb730 body=8 status=ok
// SIG undefined FUN_1407cb730(void)

undefined8 FUN_1407cb730(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x5a0);
}



// FUNCTION 1407cb740 FUN_1407cb740 body=89 status=ok
// SIG undefined FUN_1407cb740(void)

undefined8 FUN_1407cb740(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    uVar2 = FUN_1407e5ab0();
    cVar1 = UClass::ImplementsInterface(param_2,uVar2);
    if (cVar1 != '\0') {
      lVar3 = FUN_1407c9400(param_1);
      if (*(longlong *)(lVar3 + 0x20) != 0) {
        uVar2 = FUN_1407ce820(*(longlong *)(lVar3 + 0x20),param_2);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 1407cb7a0 FUN_1407cb7a0 body=1388 status=ok
// SIG undefined FUN_1407cb7a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1407cb7a0(longlong param_1,float *param_2)

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
  
  fVar2 = fRam000000014685c1ac;
  fVar6 = fRam000000014685c1a8;
  fVar5 = fRam000000014685c1a4;
  fVar4 = _DAT_14685c1a0;
  fVar3 = fRam000000014685c0dc;
  fVar47 = fRam000000014685c0d8;
  fVar46 = fRam000000014685c0d4;
  fVar45 = _DAT_14685c0d0;
  auVar8 = *(undefined1 (*) [16])(param_1 + 0x230);
  fVar19 = auVar8._0_4_;
  fVar21 = auVar8._4_4_;
  fVar29 = auVar8._8_4_;
  fVar31 = auVar8._12_4_;
  auVar9 = *(undefined1 (*) [16])(param_1 + 0x940);
  fVar20 = auVar9._0_4_;
  fVar22 = auVar9._4_4_;
  fVar30 = auVar9._8_4_;
  fVar32 = auVar9._12_4_;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = fVar3;
  fVar10 = (float)((uint)fVar46 & uRam000000014685c0e4);
  fVar11 = (float)((uint)fVar47 & uRam000000014685c0e8);
  fVar12 = (float)((uint)fVar3 & uRam000000014685c0ec);
  param_2[8] = (float)((uint)fVar45 & _DAT_14685c0e0);
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
    fVar4 = *(float *)(param_1 + 0x920);
    fVar5 = *(float *)(param_1 + 0x924);
    fVar6 = *(float *)(param_1 + 0x928);
    fVar2 = *(float *)(param_1 + 0x92c);
    fVar26 = *(float *)(param_1 + 0x930) * fVar19;
    fVar28 = *(float *)(param_1 + 0x934) * fVar21;
    fVar33 = *(float *)(param_1 + 0x938) * fVar29;
    fVar34 = *(float *)(param_1 + 0x93c) * fVar31;
    fVar23 = fVar2 * fVar45 * _DAT_14685c160;
    fVar17 = fVar6 * fVar45 * fRam000000014685c164;
    fVar27 = fVar5 * fVar45 * fRam000000014685c168;
    fVar18 = fVar4 * fVar45 * fRam000000014685c16c;
    fVar14 = fVar46 * fVar6 * _DAT_14685c150;
    fVar16 = fVar46 * fVar2 * fRam000000014685c154;
    fVar24 = fVar46 * fVar4 * fRam000000014685c158;
    fVar25 = fVar46 * fVar5 * fRam000000014685c15c;
    fVar10 = fVar47 * fVar5 * _DAT_14685c140;
    fVar11 = fVar47 * fVar4 * fRam000000014685c144;
    fVar12 = fVar47 * fVar2 * fRam000000014685c148;
    fVar13 = fVar47 * fVar6 * fRam000000014685c14c;
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
                    _DAT_14685c0e0);
    fVar25 = (float)((uint)((fVar46 - (fVar11 * fVar25 + fVar27)) * fVar21) & uRam000000014685c0e4);
    fVar17 = (float)((uint)((fVar47 - (fVar10 * fVar23 + fVar27)) * fVar29) & uRam000000014685c0e8);
    fVar18 = (float)((uint)((fVar3 - (fVar27 + fVar27)) * fVar31) & uRam000000014685c0ec);
    fVar2 = *(float *)(param_1 + 0x920);
    fVar10 = *(float *)(param_1 + 0x924);
    fVar11 = *(float *)(param_1 + 0x928);
    fVar12 = *(float *)(param_1 + 0x92c);
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
                    _DAT_14685c0e0);
    fVar23 = (float)((uint)((fVar46 - (fVar11 * fVar26 + fVar28)) * fVar22) & uRam000000014685c0e4);
    fVar27 = (float)((uint)((fVar47 - (fVar10 * fVar27 + fVar28)) * fVar30) & uRam000000014685c0e8);
    fVar26 = (float)((uint)((fVar3 - (fVar28 + fVar28)) * fVar32) & uRam000000014685c0ec);
    fVar2 = *(float *)(param_1 + 0x930);
    fVar10 = *(float *)(param_1 + 0x934);
    fVar11 = *(float *)(param_1 + 0x938);
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
    fVar45 = (float)(-(uint)(fVar4 <= fVar20 * fVar19) & (_DAT_14685c190 ^ (uint)fVar45) ^
                    _DAT_14685c190);
    fVar46 = (float)(-(uint)(fVar5 <= fVar22 * fVar21) & (uRam000000014685c194 ^ (uint)fVar46) ^
                    uRam000000014685c194);
    fVar47 = (float)(-(uint)(fVar6 <= fVar30 * fVar29) & (uRam000000014685c198 ^ (uint)fVar47) ^
                    uRam000000014685c198);
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
    fVar3 = fRam000000014685c18c;
    fVar47 = fRam000000014685c188;
    fVar46 = fRam000000014685c184;
    fVar45 = _DAT_14685c180;
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
                            local_e8) ^ _DAT_14685c170) & -(uint)(1e-08 <= fVar29) ^ _DAT_14685c170)
    ;
    fVar20 = (float)(((uint)(((fVar46 - fVar20 * fVar20 * fVar30 * fVar46) * fVar20 + fVar20) *
                            fStack_e4) ^ uRam000000014685c174) & -(uint)(1e-08 <= fVar30) ^
                    uRam000000014685c174);
    fVar21 = (float)(((uint)(((fVar47 - fVar21 * fVar21 * fVar31 * fVar47) * fVar21 + fVar21) *
                            fStack_e0) ^ uRam000000014685c178) & -(uint)(1e-08 <= fVar31) ^
                    uRam000000014685c178);
    fVar22 = (float)(((uint)(((fVar3 - fVar22 * fVar22 * fVar32 * fVar3) * fVar22 + fVar22) *
                            fStack_dc) ^ uRam000000014685c17c) & -(uint)(1e-08 <= fVar32) ^
                    uRam000000014685c17c);
    auVar8._12_4_ = 0;
    *(undefined1 (*) [16])(param_2 + 4) = auVar8;
    *param_2 = fVar19;
    param_2[1] = fVar20;
    param_2[2] = fVar21;
    param_2[3] = fVar22;
  }
  return param_2;
}



// FUNCTION 1407cbd10 FUN_1407cbd10 body=525 status=ok
// SIG undefined FUN_1407cbd10(void)

undefined4 * FUN_1407cbd10(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int iVar7;
  
  *param_2 = *param_1;
  param_2[2] = param_1[2];
  *(undefined8 *)(param_2 + 3) = *(undefined8 *)(param_1 + 3);
  param_2[5] = param_1[5];
  *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_1 + 6);
  param_2[8] = param_1[8];
  *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(param_2 + 0xe) = *(undefined8 *)(param_1 + 0xe);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(param_1 + 0x12);
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_1 + 0x14);
  lVar6 = *(longlong *)(param_1 + 0x16);
  *(longlong *)(param_2 + 0x16) = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  puVar1 = param_2 + 0x18;
  *(undefined8 *)(param_2 + 0x48) = 0;
  iVar7 = param_1[0x4a];
  puVar5 = *(undefined4 **)(param_1 + 0x48);
  param_2[0x4a] = iVar7;
  uVar3 = 0;
  if (iVar7 == 0) {
    param_2[0x4b] = 0;
  }
  else {
    TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
    ResizeForCopy(puVar1,iVar7,0);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = param_1 + 0x18;
    }
    puVar4 = *(undefined4 **)(param_2 + 0x48);
    if (*(undefined4 **)(param_2 + 0x48) == (undefined4 *)0x0) {
      puVar4 = puVar1;
    }
    lVar6 = (longlong)puVar5 - (longlong)puVar4;
    puVar4 = puVar4 + 1;
    do {
      uVar2 = *puVar5;
      puVar5 = puVar5 + 6;
      puVar4[-1] = uVar2;
      *puVar4 = *(undefined4 *)((longlong)puVar4 + lVar6);
      puVar4[1] = *(undefined4 *)((longlong)puVar4 + lVar6 + 4);
      puVar4[2] = *(undefined4 *)((longlong)puVar4 + lVar6 + 8);
      puVar4[3] = *(undefined4 *)((longlong)puVar4 + lVar6 + 0xc);
      *(undefined2 *)(puVar4 + 4) = *(undefined2 *)((longlong)puVar4 + lVar6 + 0x10);
      *(undefined1 *)((longlong)puVar4 + 0x12) = *(undefined1 *)((longlong)puVar4 + lVar6 + 0x12);
      puVar4 = puVar4 + 6;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    uVar3 = param_2[0x4b];
  }
  param_2[0x4a] = 0;
  if (0x7fffffff < uVar3) {
    TArray<FMovieSceneEntityAndAnimTypeID,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo
              (puVar1,0);
  }
  puVar5 = *(undefined4 **)(param_1 + 0x48);
  if (*(undefined4 **)(param_1 + 0x48) == (undefined4 *)0x0) {
    puVar5 = param_1 + 0x18;
  }
  iVar7 = param_2[0x4a];
  lVar6 = (longlong)iVar7;
  puVar5 = puVar5 + (longlong)param_3 * 6;
  param_2[0x4a] = iVar7 + 1;
  if ((int)param_2[0x4b] < iVar7 + 1) {
    TArray<FCompactPose,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(puVar1,iVar7);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x48);
  if (*(undefined4 **)(param_2 + 0x48) == (undefined4 *)0x0) {
    puVar4 = puVar1;
  }
  puVar4[lVar6 * 6] = *puVar5;
  puVar4[lVar6 * 6 + 1] = puVar5[1];
  puVar4[lVar6 * 6 + 2] = puVar5[2];
  puVar4[lVar6 * 6 + 3] = puVar5[3];
  puVar4[lVar6 * 6 + 4] = puVar5[4];
  *(undefined2 *)(puVar4 + lVar6 * 6 + 5) = *(undefined2 *)(puVar5 + 5);
  *(undefined1 *)((longlong)puVar4 + lVar6 * 0x18 + 0x16) = *(undefined1 *)((longlong)puVar5 + 0x16)
  ;
  return param_2;
}



// FUNCTION 1407cbf40 FUN_1407cbf40 body=103 status=ok
// SIG undefined FUN_1407cbf40(void)

void FUN_1407cbf40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 local_res8 [32];
  
  if (param_1[0xc] == 0) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1,local_res8);
    plVar1 = (longlong *)*plVar1;
    if (plVar1 == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = plVar1[0x1f];
      if (lVar2 == 0) {
        (**(code **)(*plVar1 + 0x368))(plVar1);
        FUN_142df3580(plVar1[0x1f]);
        return;
      }
    }
    FUN_142df3580(lVar2);
  }
  return;
}



// FUNCTION 1407cbfb0 FUN_1407cbfb0 body=124 status=ok
// SIG undefined FUN_1407cbfb0(void)

ulonglong FUN_1407cbfb0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x98);
  if (lVar2 == 0) {
    return 0;
  }
  uVar3 = 0;
  uVar5 = uVar3;
  uVar6 = uVar3;
  if (0 < *(int *)(lVar2 + 0x38)) {
    do {
      if (((0 < *(int *)(lVar2 + 0x38)) &&
          (plVar1 = *(longlong **)(uVar6 + *(longlong *)(lVar2 + 0x30)), plVar1 != (longlong *)0x0))
         && (uVar3 = (**(code **)(*plVar1 + 0x2e0))(), uVar3 != 0)) {
        return uVar3;
      }
      lVar2 = *(longlong *)(param_1 + 0x98);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar6 + 0x128;
    } while ((int)uVar4 < *(int *)(lVar2 + 0x38));
  }
  return uVar3;
}



// FUNCTION 1407cc030 FUN_1407cc030 body=124 status=ok
// SIG undefined FUN_1407cc030(void)

ulonglong FUN_1407cc030(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar3 = FUN_1407cad30(param_1 + 0x98);
  if (lVar3 == 0) {
    return 0;
  }
  iVar2 = *(int *)(lVar3 + 0x38);
  uVar4 = 0;
  uVar5 = uVar4;
  uVar7 = uVar4;
  if (0 < iVar2) {
    do {
      if (((0 < iVar2) &&
          (plVar1 = *(longlong **)(uVar5 + *(longlong *)(lVar3 + 0x30)), plVar1 != (longlong *)0x0))
         && (uVar4 = (**(code **)(*plVar1 + 0x2e0))(), uVar4 != 0)) {
        return uVar4;
      }
      iVar2 = *(int *)(lVar3 + 0x38);
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 0x128;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < iVar2);
  }
  return uVar4;
}



// FUNCTION 1407cc0f0 FUN_1407cc0f0 body=30 status=ok
// SIG undefined FUN_1407cc0f0(void)

bool FUN_1407cc0f0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  lVar1 = FUN_1407b9e50(param_1,local_res10);
  return lVar1 != 0;
}



// FUNCTION 1407cc110 FUN_1407cc110 body=1376 status=ok
// SIG undefined FUN_1407cc110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407cc110(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_358 [36];
  int local_334;
  int local_330;
  int local_32c;
  longlong local_328;
  longlong local_320;
  longlong local_318;
  undefined8 local_310;
  longlong local_308;
  undefined1 local_300 [8];
  undefined1 local_2f8 [80];
  longlong *local_2a8;
  longlong local_2a0 [16];
  longlong *local_220;
  undefined8 local_218;
  undefined1 local_208 [12];
  undefined4 local_1fc;
  undefined4 local_1f4;
  longlong local_1b0;
  int local_1a0;
  char local_18c;
  longlong *local_178;
  longlong local_158 [16];
  longlong *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [128];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  local_334 = 0;
  if (0 < *(int *)(param_1 + 600)) {
    local_328 = 0;
    local_320 = param_1;
    do {
      lVar15 = *(longlong *)(param_1 + 0x250) + local_328;
      plVar8 = *(longlong **)(lVar15 + 0x48);
      if (plVar8 != (longlong *)0x0) {
        local_d8 = (longlong *)0x0;
        local_d0 = 0;
        local_318 = lVar15;
        (**(code **)(*plVar8 + 0x2f8))(plVar8,local_158);
        local_220 = (longlong *)0x0;
        plVar8 = local_158;
        if (local_d8 != (longlong *)0x0) {
          plVar8 = local_d8;
        }
        local_218 = 0;
        uVar14 = 0;
        uVar13 = (longlong)(int)local_d0 & 0x1fffffffffffffff;
        if (plVar8 + (int)local_d0 < plVar8) {
          uVar13 = uVar14;
        }
        if (uVar13 != 0) {
          do {
            if (*plVar8 != 0) {
              uVar4 = FUN_1407c80f0(*plVar8,local_c8);
              iVar2 = *(int *)(uVar4 + 0x88);
              if (iVar2 != 0) {
                if (local_218._4_4_ < (int)local_218 + iVar2) {
                  FUN_1407418a0(local_2a0);
                }
                plVar10 = local_2a0;
                if (local_220 != (longlong *)0x0) {
                  plVar10 = local_220;
                }
                _guard_xfg_dispatch_icall_nop
                          (plVar10 + (int)local_218,
                           (void *)((ulonglong)(*(ulonglong *)(uVar4 + 0x80) != 0) - 1 & uVar4 |
                                   *(ulonglong *)(uVar4 + 0x80)),(longlong)iVar2 << 3);
                *(undefined4 *)(uVar4 + 0x88) = 0;
                local_218 = CONCAT44(local_218._4_4_,(int)local_218 + iVar2);
              }
              if (local_48 != 0) {
                FMemory::Free();
              }
            }
            plVar8 = plVar8 + 1;
            uVar14 = uVar14 + 1;
            param_1 = local_320;
            lVar15 = local_318;
          } while (uVar14 != uVar13);
        }
        plVar8 = local_2a0;
        if (local_220 != (longlong *)0x0) {
          plVar8 = local_220;
        }
        plVar10 = plVar8 + (int)local_218;
        bVar16 = false;
        for (; plVar8 != plVar10; plVar8 = plVar8 + 1) {
          plVar5 = (longlong *)*plVar8;
          if (plVar5 != (longlong *)0x0) {
            plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2c8))(plVar5,local_300);
            if (*plVar5 != 0) {
              lVar6 = FUN_1428dfc70();
              lVar12 = *plVar5;
              for (lVar11 = lVar12; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)) {
                if (lVar11 == lVar6) goto LAB_1407cc321;
              }
            }
            lVar12 = 0;
LAB_1407cc321:
            if (param_2 != 0) {
              lVar6 = FUN_1428dfc70();
              lVar11 = param_2;
              do {
                lVar7 = param_2;
                if (lVar11 == lVar6) goto LAB_1407cc345;
                lVar11 = *(longlong *)(lVar11 + 0x30);
              } while (lVar11 != 0);
            }
            lVar7 = 0;
LAB_1407cc345:
            if (lVar12 == lVar7) {
              bVar16 = true;
              break;
            }
          }
        }
        if (local_220 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_d8 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (bVar16) {
          if ((*(int *)(param_1 + 0x44) != -1) && (*(int *)(param_1 + 0x44) == local_334)) {
            do {
              lVar12 = *(longlong *)(param_1 + 0x168);
              if (*(longlong *)(param_1 + 0x168) == 0) {
                lVar12 = param_1 + 0xa8;
              }
              plVar8 = (longlong *)FWeakObjectPtr::Get(lVar12 + 8);
              bVar16 = plVar8 == (longlong *)0x0;
              if (plVar8 != (longlong *)0x0) {
                (**(code **)(*plVar8 + 0x278))(plVar8,param_1 + 0x48);
                bVar16 = *(int *)(param_1 + 0x48) == 0x7fffffff;
              }
              if (bVar16) {
                FUN_1407c63e0(param_1);
              }
            } while (*(int *)(param_1 + 0x44) != -1);
          }
          iVar2 = local_334;
          plVar8 = *(longlong **)(lVar15 + 0x38);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x6f8))(plVar8);
          }
          if (plVar8[0xb1] != 0) {
            *(undefined1 *)(plVar8[0xb1] + 0x8c8) = 1;
          }
          FUN_1407de040(lVar15);
          if (*(char *)(lVar15 + 8) != '\0') {
            if (*(char *)(lVar15 + 9) == '\0') goto LAB_1407cc60b;
            if ((((*(longlong **)(lVar15 + 0x40) != (longlong *)0x0) &&
                 (*(longlong *)(lVar15 + 0x48) != 0)) && (*(int *)(lVar15 + 0xa0) != 0)) &&
               ((*(char *)(lVar15 + 0x5c) == '\0' &&
                (cVar3 = (**(code **)(**(longlong **)(lVar15 + 0x40) + 0x8e8))(), cVar3 != '\0'))))
            {
              local_310 = *(undefined8 *)(lVar15 + 0x50);
              local_308 = lVar15;
              cVar3 = (**(code **)(**(longlong **)(lVar15 + 0x48) + 0x290))();
              if (cVar3 != '\0') {
                _guard_xfg_dispatch_icall_nop(local_208,0,0xa8);
                local_1f4 = 0xffffffff;
                local_1fc = 0xffffffff;
                cVar3 = FUN_1407c94c0(lVar15,local_208,0);
                if (cVar3 != '\0') {
                  if (((local_18c == '\0') && (local_1a0 != 0)) &&
                     (*(int *)(param_1 + 0x1c0) < local_1a0 + *(int *)(param_1 + 0x23c))) {
                    bVar16 = false;
                  }
                  else {
                    bVar16 = true;
                  }
                  if (bVar16) {
                    local_330 = iVar2;
                    uVar9 = FUN_1407bc120(local_2f8,lVar15,local_208);
                    FUN_1407dc070(param_1,&local_330,local_208,uVar9);
                    plVar8 = local_2a8;
                    if (local_2a8 != (longlong *)0x0) {
                      LOCK();
                      plVar10 = local_2a8 + 1;
                      lVar15 = *plVar10;
                      *(int *)plVar10 = (int)*plVar10 + -1;
                      UNLOCK();
                      if ((int)lVar15 == 1) {
                        (**(code **)*local_2a8)(local_2a8);
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
                    FUN_1407c69d0(param_1);
                  }
                }
                plVar8 = local_178;
                if (local_178 != (longlong *)0x0) {
                  LOCK();
                  plVar10 = local_178 + 1;
                  lVar15 = *plVar10;
                  *(int *)plVar10 = (int)*plVar10 + -1;
                  UNLOCK();
                  if ((int)lVar15 == 1) {
                    (**(code **)*local_178)(local_178);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar8 + 0xc);
                    iVar2 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar2 == 1) {
                      (**(code **)(*local_178 + 8))(local_178,1);
                    }
                  }
                }
                if (local_1b0 != 0) {
                  FMemory::Free();
                }
                goto LAB_1407cc60b;
              }
            }
          }
          if ((*(char *)(lVar15 + 9) != '\0') && (*(char *)(lVar15 + 0x5c) != '\0')) {
            local_32c = iVar2;
            FUN_1407d9890(param_1,&local_32c);
            FUN_1407c69d0(param_1);
          }
        }
      }
LAB_1407cc60b:
      local_334 = local_334 + 1;
      local_328 = local_328 + 0x140;
    } while (local_334 < *(int *)(param_1 + 600));
  }
  return;
}



// FUNCTION 1407cc680 FUN_1407cc680 body=403 status=ok
// SIG undefined FUN_1407cc680(void)

void FUN_1407cc680(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar7;
  float fVar8;
  undefined8 local_res8;
  undefined8 local_res10;
  int iStack_54;
  int iStack_4c;
  ulonglong uVar6;
  
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  uVar6 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar3 < 0) && (iVar3 != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,0);
    iVar3 = *(int *)((longlong)param_1 + 0xc);
  }
  iVar4 = (int)param_2[1];
  if (iVar3 < iVar4) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,iVar4);
    iVar4 = (int)param_2[1];
  }
  uVar7 = uVar6;
  if (0 < iVar4) {
    do {
      lVar2 = *param_2;
      if (*(char *)(uVar7 + 0x150 + lVar2) == '\0') {
        iStack_54 = 0;
      }
      else {
        local_res8 = 0xffffffffffffffff;
        fVar8 = (float)FUN_142de77e0(lVar2 + 0xd0 + uVar7,param_3,0,&local_res8);
        iStack_54 = (int)ROUND(fVar8 * 2.0 + 0.5) >> 1;
      }
      if (*(char *)(uVar7 + 200 + lVar2) == '\0') {
        iStack_4c = 0;
      }
      else {
        local_res10 = 0xffffffffffffffff;
        fVar8 = (float)FUN_142de77e0(lVar2 + 0x48 + uVar7,param_3,0,&local_res10);
        iStack_4c = (int)ROUND(fVar8 * 2.0 + 0.5) >> 1;
      }
      iVar3 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar3);
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar3 * 0x10);
      *puVar1 = 0;
      puVar1[1] = iStack_54;
      puVar1[2] = 0;
      puVar1[3] = iStack_4c;
      uVar7 = uVar7 + 0x158;
    } while ((int)uVar5 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1407cc820 FUN_1407cc820 body=467 status=ok
// SIG undefined FUN_1407cc820(void)

void FUN_1407cc820(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  
  if ((*(longlong *)(param_1 + 0x218) != 0) && (lVar4 = FUN_1405ec200(param_1 + 0x1e8), lVar4 != 0))
  {
    lVar5 = FUN_1407e0cf0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar1 = (longlong *)(param_1 + 0x220);
      *(undefined4 *)(param_1 + 0x228) = 0;
      if (*(int *)(param_1 + 0x22c) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
      }
      lVar5 = *(longlong *)(lVar4 + 0x30);
      lVar4 = (longlong)*(int *)(lVar4 + 0x38) * 0x60 + lVar5;
      for (; lVar5 != lVar4; lVar5 = lVar5 + 0x60) {
        fVar9 = (float)FUN_142c98860(lVar5 + 0x28,*(undefined8 *)(param_1 + 0x218));
        if ((fVar9 != 0.0) && (lVar6 = FUN_1405ec200(lVar5), lVar6 != 0)) {
          lVar7 = FUN_1407e0340();
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
            TSet<TTuple<__int64_*,FString>,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>,FDefaultSetAllocator>
            ::Empty(param_1 + 0x2e0,0);
            lVar7 = *(longlong *)(param_1 + 0x250);
            lVar8 = (longlong)*(int *)(param_1 + 600) * 0x140 + lVar7;
            for (; lVar7 != lVar8; lVar7 = lVar7 + 0x140) {
              TSet<TTuple<__int64_*,FString>,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>,FDefaultSetAllocator>
              ::Empty(lVar7 + 0xf0,0);
            }
            iVar2 = *(int *)(param_1 + 0x228);
            *(int *)(param_1 + 0x228) = iVar2 + 1;
            if (*(int *)(param_1 + 0x22c) < iVar2 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
            }
            *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar6;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1407cca00 FUN_1407cca00 body=370 status=ok
// SIG undefined FUN_1407cca00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407cca00(longlong param_1,char param_2)

{
  undefined1 auStack_138 [32];
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined4 local_e0;
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if ((param_2 != '\0') || (*(char *)(param_1 + 0x5d8) == '\0')) {
    local_58 = 0;
    local_50 = 0;
    FUN_1407ba460(param_1,local_d8,0);
    if ((DAT_1468c2186 == '\0') && (DAT_1468c2187 == '\0')) {
      FUN_14222da00(param_1,1,&local_118,&local_108);
      fStack_e4 = local_110 + local_100;
      fStack_ec = local_118 + local_108;
      local_100 = local_110 - local_100;
      local_e0 = CONCAT31(local_e0._1_3_,1);
      fStack_e8 = local_114 + local_104;
      *(float *)(param_1 + 0x5c0) = local_118 - local_108;
      *(float *)(param_1 + 0x5c4) = local_114 - local_104;
      *(float *)(param_1 + 0x5c8) = local_100;
      *(float *)(param_1 + 0x5cc) = fStack_ec;
      *(ulonglong *)(param_1 + 0x5d0) = CONCAT44(fStack_e4,fStack_e8);
      *(undefined4 *)(param_1 + 0x5d8) = local_e0;
      local_110 = fStack_e4;
      fStack_f0 = local_100;
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1407ccb80 FUN_1407ccb80 body=182 status=ok
// SIG undefined FUN_1407ccb80(void)

void FUN_1407ccb80(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_18 [2];
  
  plVar1 = (longlong *)(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    if (*(int *)(param_1 + 0xec) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
    }
  }
  else {
    plVar2 = (longlong *)FUN_1407c8ba0(local_18);
    if (plVar1 != plVar2) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *plVar2;
      *plVar2 = 0;
      *(int *)(param_1 + 0xe8) = (int)plVar2[1];
      *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)((longlong)plVar2 + 0xc);
      plVar2[1] = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  if ((*(int *)(param_1 + 0xb8) < 0) || (*(int *)(param_1 + 0xe8) <= *(int *)(param_1 + 0xb8))) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 1407ccc40 FUN_1407ccc40 body=485 status=ok
// SIG undefined FUN_1407ccc40(void)

void FUN_1407ccc40(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 local_res18 [8];
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  
  local_60 = *param_2;
  local_68 = param_1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x6f8,&local_68);
  FUN_1407d15b0(param_1,&local_78,*param_2,0);
  if (local_78 == 0) {
    local_50 = *param_2;
    local_58 = param_1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x718,&local_58);
  }
  else {
    *(undefined1 *)(param_1 + 0x951) = 1;
    FWeakObjectPtr::operator=(&local_res8,param_1);
    FWeakObjectPtr::operator=(&local_res10,*param_2);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    local_48 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_GetPoolName_1440e0178;
      *(undefined4 *)(plVar3 + 1) = local_res8;
      *(undefined4 *)((longlong)plVar3 + 0xc) = local_resc;
      *(undefined4 *)(plVar3 + 2) = local_res10;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_res14;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_1440e01c0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(local_78 + 0x58,1);
      (**(code **)(*plVar3 + 0x20))(plVar3,local_res18);
      iVar2 = *(int *)(local_78 + 0x60);
      *(int *)(local_78 + 0x60) = iVar2 + 1;
      if (*(int *)(local_78 + 100) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_78 + 0x58,iVar2);
      }
      puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(local_78 + 0x58));
      *puVar5 = plVar3;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_70 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (*(char *)(param_1 + 0x970) != '\0') {
    FUN_1407c1500(param_1,*param_2);
  }
  return;
}



// FUNCTION 1407cce30 InitializeModule body=105 status=ok
// SIG undefined InitializeModule(void)

undefined8 * FStaticallyLinkedModuleRegistrant<FVoiceModule>::InitializeModule(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = IModuleInterface::vftable;
    FGCObject::FGCObject(puVar1 + 1);
    *puVar1 = &PTR__scalar_deleting_destructor__1440da540;
    puVar1[1] = &PTR_LAB_1440da580;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1407ccea0 FUN_1407ccea0 body=406 status=ok
// SIG undefined FUN_1407ccea0(void)

void FUN_1407ccea0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined1 local_res20 [8];
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  undefined8 local_40;
  longlong *local_38;
  
  FUN_1407d15b0(param_1,&local_58,*param_2,0);
  if (local_58 == 0) {
    local_40 = *param_2;
    local_48 = param_1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x718,&local_48);
  }
  else {
    *(undefined1 *)(param_1 + 0x951) = 1;
    FWeakObjectPtr::operator=(&local_res10,param_1);
    FWeakObjectPtr::operator=(&local_res18,*param_2);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    local_38 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_GetPoolName_1440e0178;
      *(undefined4 *)(plVar3 + 1) = local_res10;
      *(undefined4 *)((longlong)plVar3 + 0xc) = local_res14;
      *(undefined4 *)(plVar3 + 2) = local_res18;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_res1c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_1440e01c0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(local_58 + 0x58,1);
      (**(code **)(*plVar3 + 0x20))(plVar3,local_res20);
      iVar2 = *(int *)(local_58 + 0x60);
      *(int *)(local_58 + 0x60) = iVar2 + 1;
      if (*(int *)(local_58 + 100) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_58 + 0x58,iVar2);
      }
      puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(local_58 + 0x58));
      *puVar5 = plVar3;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 1407cd040 IsBound body=64 status=ok
// SIG undefined IsBound(void)

bool TScriptDelegate<FWeakObjectPtr>::IsBound(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = FWeakObjectPtr::Get();
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 8));
      return lVar1 != 0;
    }
  }
  return false;
}



// FUNCTION 1407cd080 FUN_1407cd080 body=49 status=ok
// SIG undefined FUN_1407cd080(void)

undefined1 FUN_1407cd080(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    return 1;
  }
  if ((*(longlong *)(param_1 + 0x40) != 0) &&
     (cVar1 = FUN_1407c3030(*(longlong *)(param_1 + 0x40) + 0x6f0), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1407cd0c0 FUN_1407cd0c0 body=64 status=ok
// SIG undefined FUN_1407cd0c0(void)

ulonglong FUN_1407cd0c0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_140583fc0();
  if (((((char)uVar1 != '\0') && (uVar1 = *(ulonglong *)(param_1 + 0xd8), uVar1 != 0)) &&
      (*(char *)(uVar1 + 0x8c8) != '\0')) && (*(char *)(uVar1 + 0x951) == '\0')) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1407cd100 FUN_1407cd100 body=24 status=ok
// SIG undefined FUN_1407cd100(void)

undefined1 FUN_1407cd100(longlong param_1)

{
  if ((*(char *)(param_1 + 0x8c8) != '\0') && (*(char *)(param_1 + 0x951) == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1407cd120 FUN_1407cd120 body=98 status=ok
// SIG undefined FUN_1407cd120(void)

ulonglong FUN_1407cd120(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  
  plVar2 = *(longlong **)(param_2 + 0xf8);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = UPawnAction::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(plVar2[2] + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(plVar2[2] + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001407cd173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar2 + 0x308))(plVar2);
      return uVar4;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1407cd1b0 FUN_1407cd1b0 body=48 status=ok
// SIG undefined FUN_1407cd1b0(void)

void FUN_1407cd1b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1407cad30(param_1 + 0x98);
  if (lVar1 != 0) {
    FUN_1407cd1e0(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1407cd1e0 FUN_1407cd1e0 body=120 status=ok
// SIG undefined FUN_1407cd1e0(void)

undefined8 FUN_1407cd1e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x38) * 0x25;
  while( true ) {
    if (plVar3 == plVar4) {
      return 0;
    }
    plVar1 = (longlong *)*plVar3;
    if ((plVar1 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2), cVar2 != '\0')) break;
    plVar3 = plVar3 + 0x25;
  }
  return 1;
}



// FUNCTION 1407cd260 FUN_1407cd260 body=10 status=ok
// SIG undefined FUN_1407cd260(void)

bool FUN_1407cd260(int *param_1)

{
  return *param_1 == 0x7fffffff;
}



// FUNCTION 1407cd2c0 FUN_1407cd2c0 body=178 status=ok
// SIG undefined FUN_1407cd2c0(void)

ulonglong FUN_1407cd2c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_18;
  longlong local_10;
  
  if (*(int *)*param_2 < *(int *)(param_1 + 0x38) + -1) {
    return (ulonglong)*param_2 & 0xffffffffffffff00;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar4 = 0;
    do {
      local_18 = *(undefined8 *)(lVar4 + *(longlong *)(*param_2 + 0x10));
      local_10 = param_2[1];
      plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x30));
      cVar2 = (**(code **)(*plVar1 + 0x298))(plVar1,&local_18);
      if (cVar2 == '\0') {
        return 0;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x38;
    } while (iVar3 < *(int *)(param_1 + 0x38));
  }
  return 1;
}



// FUNCTION 1407cd390 FUN_1407cd390 body=47 status=ok
// SIG undefined FUN_1407cd390(void)

undefined1 FUN_1407cd390(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x588) != 0) {
    lVar2 = FUN_1407cb650();
    if (lVar2 != 0) {
      uVar1 = FUN_1407cd3c0(lVar2,0);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 1407cd3c0 FUN_1407cd3c0 body=263 status=ok
// SIG undefined FUN_1407cd3c0(void)

undefined1 FUN_1407cd3c0(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar7;
  ulonglong uVar6;
  
  if (param_2 == '\0') {
    return *(undefined1 *)(param_1 + 0x5c);
  }
  uVar6 = 0;
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x980);
    uVar7 = uVar6;
    if (lVar2 != 0) {
      uVar7 = *(ulonglong *)(lVar2 + 0x590);
    }
    uVar5 = uVar6;
    uVar6 = uVar7;
    if (uVar7 != 0) {
      while (((iVar3 = (int)uVar5, -1 < iVar3 && (iVar3 < *(int *)(uVar7 + 0x6f8))) &&
             (*(longlong *)(*(longlong *)(uVar7 + 0x6f0) + 0x18 + (longlong)iVar3 * 0x28) == 0))) {
        uVar5 = (ulonglong)(iVar3 + 1);
      }
    }
  }
  do {
    iVar3 = (int)uVar5;
    if (((iVar3 == -1) || (uVar6 == 0)) ||
       ((iVar3 < 0 ||
        ((*(int *)(uVar6 + 0x6f8) <= iVar3 ||
         (*(longlong *)(*(longlong *)(uVar6 + 0x6f0) + 0x18 + (longlong)iVar3 * 0x28) == 0)))))) {
      return 1;
    }
    lVar2 = FUN_1407cb650();
    if ((lVar2 == 0) || (cVar1 = FUN_1407cd3c0(lVar2,0), cVar1 == '\0')) {
      return 0;
    }
    do {
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      if (((int)uVar4 < 0) || (*(int *)(uVar6 + 0x6f8) <= (int)uVar4)) break;
    } while (*(longlong *)(*(longlong *)(uVar6 + 0x6f0) + 0x18 + (longlong)(int)uVar4 * 0x28) == 0);
  } while( true );
}



// FUNCTION 1407cd4d0 ToggleCharacterSummary body=33 status=ok
// SIG undefined ToggleCharacterSummary(void)

void AIndianaPlayerController::ToggleCharacterSummary(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1407cb650();
  if (lVar1 != 0) {
    FUN_1407cd3c0(lVar1,0);
    return;
  }
  return;
}



// FUNCTION 1407cd500 FUN_1407cd500 body=318 status=ok
// SIG undefined FUN_1407cd500(void)

ulonglong FUN_1407cd500(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint7 uVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  
  plVar5 = param_1;
  if ((param_3 != (longlong *)0x0) && (iVar10 = 0, 0 < (int)param_2[1])) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      piVar8 = (int *)(*param_1 + lVar13);
      lVar9 = *param_2 + lVar12;
      plVar5 = (longlong *)(**(code **)(*param_3 + 0x2d8))(param_3);
      plVar11 = (longlong *)*plVar5;
      plVar1 = plVar11 + (int)plVar5[1];
      if (plVar11 != plVar1) {
        plVar3 = *(longlong **)(lVar9 + 0x20);
        do {
          if (plVar3 != plVar3 + *(int *)(lVar9 + 0x28)) {
            plVar5 = plVar3;
            do {
              if (*plVar5 == *plVar11) goto LAB_1407cd61b;
              plVar5 = plVar5 + 1;
            } while (plVar5 != plVar3 + *(int *)(lVar9 + 0x28));
          }
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar1);
      }
      uVar6 = (**(code **)(*param_3 + 0x2d8))(param_3);
      plVar5 = (longlong *)FUN_1407cebc0(lVar9,uVar6);
      if ((char)plVar5 != '\0') {
        if ((piVar8[1] < 1) || (*piVar8 < piVar8[1])) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        iVar2 = piVar8[3];
        uVar7 = (uint7)(uint3)((uint)iVar2 >> 8);
        if ((iVar2 < 1) || (piVar8[2] < iVar2)) {
          plVar5 = (longlong *)((ulonglong)uVar7 << 8);
        }
        else {
          plVar5 = (longlong *)CONCAT71(uVar7,1);
        }
        if ((bVar4) || ((char)plVar5 != '\0')) {
LAB_1407cd61b:
          return CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
        }
      }
      iVar10 = iVar10 + 1;
      lVar13 = lVar13 + 0x10;
      lVar12 = lVar12 + 0x158;
    } while (iVar10 < (int)param_2[1]);
  }
  return (ulonglong)plVar5 & 0xffffffffffffff00;
}



// FUNCTION 1407cd640 FUN_1407cd640 body=667 status=ok
// SIG undefined FUN_1407cd640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1407cd640(longlong param_1,float *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  longlong *plVar6;
  float *pfVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  undefined4 local_60;
  
  uVar2 = DAT_14685c0c2;
  DAT_14685c0c2 = 1;
  lVar10 = *(longlong *)(param_1 + 0x250);
  lVar11 = (longlong)*(int *)(param_1 + 600) * 0x140 + lVar10;
  for (; lVar10 != lVar11; lVar10 = lVar10 + 0x140) {
    plVar6 = *(longlong **)(lVar10 + 0x70);
    plVar9 = plVar6 + (longlong)*(int *)(lVar10 + 0x78) * 0x15;
    if (plVar6 != plVar9) {
      pfVar7 = (float *)((longlong)plVar6 + 0x3c);
      do {
        if ((*(char *)(pfVar7 + -0xd) == '\x01') &&
           (((*(longlong *)(pfVar7 + 5) == 0 ||
             (*(char *)(*(longlong *)(pfVar7 + 5) + 0x28) != '\0')) &&
            (plVar8 = (longlong *)*plVar6, plVar8 != (longlong *)0x0)))) {
          lVar1 = plVar8[0x2d];
          if (lVar1 == 0) {
            local_68 = _DAT_1468b5d90;
            puVar4 = &local_68;
            local_60 = DAT_1468b5d98;
          }
          else {
            puVar4 = (undefined8 *)&local_88;
            local_88 = *(undefined4 *)(lVar1 + 0x220);
            local_80 = *(undefined4 *)(lVar1 + 0x228);
            uStack_84 = *(undefined4 *)(lVar1 + 0x224);
          }
          local_78 = *puVar4;
          local_70 = *(float *)(puVar4 + 1);
          pfVar5 = (float *)(ulonglong)(uint)local_70;
          fVar15 = (float)((ulonglong)local_78 >> 0x20);
          uVar3 = local_78;
          fVar12 = (float)local_78 + pfVar7[-2];
          fVar14 = (float)local_78 - pfVar7[-2];
          fVar13 = fVar15 - pfVar7[-1];
          local_78 = uVar3;
          if ((((*param_2 <= fVar12) && (fVar14 < param_2[3] || fVar14 == param_2[3])) &&
              ((param_2[1] <= fVar15 + pfVar7[-1] &&
               ((fVar13 < param_2[4] || fVar13 == param_2[4] && (param_2[2] <= local_70 + *pfVar7)))
               ))) && (local_70 - *pfVar7 < param_2[5] || local_70 - *pfVar7 == param_2[5]))
          goto LAB_1407cd8d4;
        }
        plVar6 = plVar6 + 0x15;
        pfVar7 = pfVar7 + 0x2a;
      } while (plVar6 != plVar9);
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x30);
  pfVar5 = (float *)(longlong)*(int *)(param_1 + 0x38);
  plVar6 = plVar9 + (longlong)pfVar5;
  do {
    if (plVar9 == plVar6) {
      DAT_14685c0c2 = uVar2;
      return (ulonglong)pfVar5 & 0xffffffffffffff00;
    }
    plVar8 = (longlong *)*plVar9;
    if ((plVar8 != (longlong *)0x0) &&
       (pfVar5 = (float *)(**(code **)(*plVar8 + 0x580))(plVar8), (char)pfVar5 != '\0')) {
      lVar10 = plVar8[0x2d];
      pfVar5 = (float *)(lVar10 + 0x1d0);
      fVar13 = *pfVar5 - *(float *)(lVar10 + 0x1dc);
      fVar12 = *(float *)(lVar10 + 0x1d4) - *(float *)(lVar10 + 0x1e0);
      fVar15 = *(float *)(lVar10 + 0x1d8) - *(float *)(lVar10 + 0x1e4);
      if ((*param_2 <= *(float *)(lVar10 + 0x1dc) + *pfVar5) &&
         ((((fVar13 < param_2[3] || fVar13 == param_2[3] &&
            (param_2[1] <= *(float *)(lVar10 + 0x1e0) + *(float *)(lVar10 + 0x1d4))) &&
           (fVar12 < param_2[4] || fVar12 == param_2[4])) &&
          ((param_2[2] <= *(float *)(lVar10 + 0x1e4) + *(float *)(lVar10 + 0x1d8) &&
           (fVar15 < param_2[5] || fVar15 == param_2[5])))))) {
LAB_1407cd8d4:
        *param_3 = (longlong)plVar8;
        DAT_14685c0c2 = uVar2;
        return CONCAT71((int7)((ulonglong)pfVar5 >> 8),1);
      }
    }
    plVar9 = plVar9 + 1;
  } while( true );
}



// FUNCTION 1407cd8e0 FUN_1407cd8e0 body=30 status=ok
// SIG undefined FUN_1407cd8e0(void)

bool FUN_1407cd8e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  plVar2 = (longlong *)FUN_1407c9400();
  return *plVar2 == lVar1;
}



// FUNCTION 1407cd900 FUN_1407cd900 body=80 status=ok
// SIG undefined FUN_1407cd900(void)

undefined8 FUN_1407cd900(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0x94) & 2) == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
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
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1407cd950 FUN_1407cd950 body=117 status=ok
// SIG undefined FUN_1407cd950(void)

undefined8 FUN_1407cd950(longlong param_1)

{
  char cVar1;
  undefined8 local_18;
  longlong local_10;
  
  if ((((*(char *)(param_1 + 8) != '\0') && (*(char *)(param_1 + 9) != '\0')) &&
      (*(longlong **)(param_1 + 0x40) != (longlong *)0x0)) &&
     (((*(longlong *)(param_1 + 0x48) != 0 && (*(int *)(param_1 + 0xa0) != 0)) &&
      (*(char *)(param_1 + 0x5c) == '\0')))) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x8e8))();
    if (cVar1 != '\0') {
      local_18 = *(undefined8 *)(param_1 + 0x50);
      local_10 = param_1;
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x290))
                        (*(longlong **)(param_1 + 0x48),&local_18);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1407cd9e0 FUN_1407cd9e0 body=30 status=ok
// SIG undefined FUN_1407cd9e0(void)

bool FUN_1407cd9e0(longlong param_1)

{
  FUN_1407c3470();
  return *(int *)(param_1 + 0x928) == 0;
}



// FUNCTION 1407cda80 FUN_1407cda80 body=261 status=ok
// SIG undefined FUN_1407cda80(void)

ulonglong FUN_1407cda80(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  
  piVar2 = (int *)*param_2;
  plVar7 = *(longlong **)(param_2[1] + 0x30);
  if (plVar7 != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(*plVar7 + 0x668))(plVar7);
    if (plVar5 != (longlong *)0x0) {
      plVar7 = plVar5;
    }
    if (plVar7 != (longlong *)0x0) {
      uVar6 = UDamageableInterface::GetPrivateStaticClass();
      plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar7,uVar6);
      if (plVar7 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar7 + 0x18))(plVar7);
        goto LAB_1407cdae9;
      }
    }
  }
  cVar4 = '\0';
LAB_1407cdae9:
  *(char *)(piVar2 + 10) = cVar4;
  if (((((float)piVar2[8] == 0.0) || (*(float *)(param_1 + 0x1c0) <= 0.0)) ||
      (plVar7 = (longlong *)param_2[1],
      *(float *)(param_1 + 0x1c0) <= *(float *)(*plVar7 + 0x230) - (float)piVar2[8])) &&
     ((((float)piVar2[9] == 0.0 || (*(float *)(param_1 + 0x1c4) <= 0.0)) ||
      (plVar7 = (longlong *)param_2[1],
      *(float *)(param_1 + 0x1c4) <= *(float *)(*plVar7 + 0x230) - (float)piVar2[9])))) {
    uVar8 = piVar2[4];
    uVar1 = piVar2[3];
    uVar3 = uVar8;
    if ((int)uVar8 <= (int)uVar1) {
      uVar3 = uVar1;
    }
    plVar7 = (longlong *)(ulonglong)uVar3;
    if (piVar2[7] < (int)uVar3) {
      if (cVar4 == '\0') {
        uVar8 = uVar1;
      }
      if (*piVar2 < (int)uVar8) {
        return CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
      }
    }
  }
  return (ulonglong)plVar7 & 0xffffffffffffff00;
}



// FUNCTION 1407cdbd0 FUN_1407cdbd0 body=582 status=ok
// SIG undefined FUN_1407cdbd0(void)

bool FUN_1407cdbd0(longlong param_1,uint param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  undefined8 local_res8;
  undefined1 local_58;
  undefined7 uStack_57;
  ulonglong uStack_50;
  ulonglong auStack_48 [6];
  
  if (*(char *)(param_1 + 0xa1) == '\0') {
    local_res8 = 0xffffffffffffffff;
    fVar8 = (float)FUN_142de77e0(param_1 + 0x10,0,0,&local_res8);
    iVar3 = (int)ROUND(fVar8 * 2.0 + 0.5) >> 1;
    if (iVar3 < 1) {
      if (param_3 == 0) {
        fVar8 = 0.0;
      }
      else {
        local_res8 = 0xffffffffffffffff;
        fVar8 = (float)FUN_142de77e0(param_3 + 0x1a8,0,0,&local_res8);
        fVar8 = (float)((int)ROUND(fVar8 * 2.0 + 0.5) >> 1);
      }
    }
    else {
      fVar8 = (float)iVar3;
    }
    iVar3 = *(int *)(param_1 + 0x98);
    uVar4 = (uint)fVar8;
    local_58 = 0;
    uStack_50 = 0;
    auStack_48[0] = 0;
    if (((int)uVar4 < iVar3) && (0 < (int)uVar4)) {
      uVar6 = 0;
      uVar7 = (ulonglong)uVar4;
LAB_1407cdce2:
      local_58 = 1;
      iVar5 = rand();
      uVar4 = (int)((float)iVar5 * 3.051851e-05 * (float)iVar3) + uVar6;
      do {
        uVar6 = uVar4 - iVar3;
        if ((int)uVar4 < iVar3) {
          uVar6 = uVar4;
        }
        if ((int)uVar6 < 0x81) {
          if ((int)uVar6 < 0x41) {
            uVar1 = uStack_50 >> ((ulonglong)uVar6 & 0x3f);
          }
          else {
            uVar1 = auStack_48[0] >> ((ulonglong)(uVar6 - 0x40) & 0x3f);
          }
          if ((uVar1 & 1) == 0) goto LAB_1407cdd48;
        }
        uVar4 = uVar6 + 1;
      } while( true );
    }
LAB_1407cdd86:
    *(ulonglong *)(param_1 + 0xa8) = CONCAT71(uStack_57,local_58);
    *(ulonglong *)(param_1 + 0xb0) = uStack_50;
    *(undefined1 *)(param_1 + 0xa1) = 1;
    *(ulonglong *)(param_1 + 0xb8) = auStack_48[0];
  }
  if ((*(char *)(param_1 + 0xa8) != '\0') && ((int)param_2 < 0x81)) {
    if ((int)param_2 < 0x41) {
      return (*(ulonglong *)(param_1 + 0xb0) >> ((ulonglong)param_2 & 0x3f) & 1) != 0;
    }
    return (*(ulonglong *)(param_1 + 0xb8) >> ((ulonglong)(param_2 - 0x40 & 0xff) & 0x3f) & 1) != 0;
  }
  return true;
LAB_1407cdd48:
  uVar4 = uVar6 - 0x40;
  puVar2 = auStack_48;
  if ((int)uVar6 < 0x41) {
    uVar4 = uVar6;
    puVar2 = &uStack_50;
  }
  *puVar2 = *puVar2 | 1L << ((longlong)(int)uVar4 & 0x3fU);
  uVar7 = uVar7 - 1;
  if (uVar7 == 0) goto LAB_1407cdd86;
  goto LAB_1407cdce2;
}



// FUNCTION 1407cde20 FUN_1407cde20 body=21 status=ok
// SIG undefined FUN_1407cde20(void)

undefined1 FUN_1407cde20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x588) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x588) + 0x888);
  }
  return 0;
}



// FUNCTION 1407cde40 FUN_1407cde40 body=169 status=ok
// SIG undefined FUN_1407cde40(void)

undefined8 FUN_1407cde40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  lVar2 = param_1;
  while( true ) {
    if (lVar2 == 0) {
      uVar6 = FUN_14175bd60(param_1);
      return uVar6;
    }
    lVar4 = UDataAsset::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar4 + 0x90);
    uVar5 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
       (uVar5 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
       *(longlong *)(uVar5 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
      uVar5 = uVar5 & 0xffffffffffffff00;
      bVar3 = false;
    }
    else {
      uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
      bVar3 = true;
    }
    if (bVar3) break;
    lVar4 = FUN_1428dfc70();
    iVar1 = *(int *)(lVar4 + 0x90);
    uVar5 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
       (uVar5 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
       *(longlong *)(uVar5 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
      uVar5 = uVar5 & 0xffffffffffffff00;
      bVar3 = false;
    }
    else {
      uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
      bVar3 = true;
    }
    if (bVar3) break;
    lVar2 = *(longlong *)(lVar2 + 0x20);
  }
  return CONCAT71((int7)(uVar5 >> 8),1);
}



// FUNCTION 1407cdef0 FUN_1407cdef0 body=116 status=ok
// SIG undefined FUN_1407cdef0(void)

undefined8 FUN_1407cdef0(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + -0x1c);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar3 = iVar1 + uVar5;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar4 = 0;
  }
  if (((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) && ((*(uint *)(param_1 + -0x20) & 0x18000) == 0)) {
    cVar2 = UObjectBaseUtility::IsTemplate(param_1 + -0x28,0x30);
    if (cVar2 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1407cdf70 FUN_1407cdf70 body=156 status=ok
// SIG undefined FUN_1407cdf70(void)

bool FUN_1407cdf70(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x588) != 0) {
    cVar1 = FUN_1407c85f0();
    return cVar1 == '\0';
  }
  if ((param_2 != (longlong *)0x0) && ((wchar_t *)*param_2 != L"No Spawner Component")) {
    iVar2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0x15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x15);
      iVar2 = (int)param_2[1];
    }
    *(int *)(param_2 + 1) = iVar2 + 0x15;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 0x15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    builtin_wcsncpy((wchar_t *)*param_2,L"No Spawner Component",0x15);
  }
  return false;
}



// FUNCTION 1407ce010 FUN_1407ce010 body=92 status=ok
// SIG undefined FUN_1407ce010(void)

ulonglong FUN_1407ce010(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  lVar2 = *param_1;
  uVar3 = FUN_142190080(lVar2);
  if ((char)uVar3 != '\0') {
    uVar3 = 0;
    if (*(longlong *)(lVar2 + 0x28) == 0xd3) {
LAB_1407ce05c:
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
    uVar1 = *(uint *)(lVar2 + 0x88);
    uVar3 = (ulonglong)uVar1;
    if ((uVar1 != 0) && (uVar3 = (ulonglong)(uVar1 - 1), uVar1 - 1 != 0)) {
      uVar1 = *(uint *)(lVar2 + 0x98);
      uVar3 = (ulonglong)uVar1;
      iVar4 = uVar1 - 1;
      if (uVar1 == 0) {
        iVar4 = 0;
      }
      if (iVar4 != 0) goto LAB_1407ce05c;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1407ce070 FUN_1407ce070 body=7 status=ok
// SIG undefined FUN_1407ce070(void)

bool FUN_1407ce070(int *param_1)

{
  return *param_1 != -1;
}



// FUNCTION 1407ce080 FUN_1407ce080 body=185 status=ok
// SIG undefined FUN_1407ce080(void)

undefined8 FUN_1407ce080(longlong *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (lVar4 != 0) {
    cVar1 = FUN_14254a160(lVar4);
    if ((cVar1 == '\0') && ((*(byte *)(lVar4 + 0x830) & 0x80) == 0)) {
      iVar3 = FUN_1428cf800(lVar4);
      if (iVar3 != 3) {
        cVar1 = FUN_1428cdc10(lVar4);
        if (cVar1 != '\0') {
          cVar1 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
          if ((cVar1 == '\0') && (lVar4 = *(longlong *)(lVar4 + 0x148), lVar4 != 0)) {
            lVar5 = ARemnantQuest::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((bVar2) && (*(longlong *)(lVar4 + 0x520) == DAT_146af3988)) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1407ce140 FUN_1407ce140 body=300 status=ok
// SIG undefined FUN_1407ce140(void)

undefined8 FUN_1407ce140(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  uint uStackX_c;
  
  iVar4 = *(int *)(param_1 + 0xc);
  plVar9 = (longlong *)0x0;
  plVar5 = plVar9;
  if (iVar4 < (int)DAT_1469e91c4) {
    uVar7 = iVar4 >> 0x1f & 0xffff;
    uVar3 = iVar4 + uVar7;
    plVar5 = (longlong *)
             (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
             (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18);
  }
  if ((*(uint *)(plVar5 + 1) >> 0x1d & 1) != 0) {
    return 0;
  }
  FUN_142c6c710(param_1);
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar5 = *(longlong **)(param_1 + 0x40);
      plVar8 = plVar9;
      if (plVar5 == (longlong *)0x0) {
LAB_1407ce1fd:
        plVar9 = (longlong *)0x1;
      }
      else {
        LOCK();
        iVar4 = (int)plVar5[1];
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(plVar5 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (!bVar10) {
          LOCK();
          bVar10 = iVar4 == (int)plVar5[1];
          if (bVar10) {
            *(int *)(plVar5 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar10) {
            if (plVar5 != (longlong *)0x0) {
              plVar8 = *(longlong **)(param_1 + 0x38);
            }
            goto LAB_1407ce1fd;
          }
          LOCK();
          iVar4 = (int)plVar5[1];
          bVar10 = iVar4 == 0;
          if (bVar10) {
            *(int *)(plVar5 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
        plVar5 = plVar9;
        plVar9 = (longlong *)0x1;
      }
      goto LAB_1407ce20f;
    }
  }
  plVar5 = (longlong *)((ulonglong)uStackX_c << 0x20);
  plVar8 = (longlong *)0x0;
LAB_1407ce20f:
  if ((plVar9 != (longlong *)0x0) && (plVar5 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar5 + 1;
    lVar2 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  uVar6 = FUN_1407caec0(plVar8);
  return uVar6;
}



// FUNCTION 1407ce270 FUN_1407ce270 body=96 status=ok
// SIG undefined FUN_1407ce270(void)

void FUN_1407ce270(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x6f0);
    lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0x6f8) * 0x28;
    for (; lVar3 != lVar1; lVar3 = lVar3 + 0x28) {
      plVar2 = *(longlong **)(lVar3 + 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x708))(plVar2,param_2);
      }
    }
  }
  return;
}



// FUNCTION 1407ce2d0 FUN_1407ce2d0 body=666 status=ok
// SIG undefined FUN_1407ce2d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407ce2d0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined1 local_150;
  undefined1 local_148;
  longlong *local_140;
  undefined8 *local_138;
  int local_130;
  undefined4 local_12c;
  longlong local_128 [3];
  undefined4 local_110;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined8 local_f8 [24];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  FUN_1407c7b50(param_1,local_f8);
  if (0 < local_30) {
    *(undefined1 *)(param_1 + 0x68) = 1;
    local_128[0] = 0;
    local_128[1] = 0x1f;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128,0);
    FGenericPlatformString::Memcpy(local_128[0],L"RequestAsyncLoad ArrayDelegate",0x3e);
    local_128[2] = 0;
    local_110 = 0;
    puVar2 = (undefined8 *)operator_new(0x28,local_128 + 2);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(puVar2 + 1,param_1);
      puVar2[2] = &LAB_1407beee8;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[4] = uVar3;
      *puVar2 = &PTR_FUN_143f4d1b8;
    }
    iVar7 = local_30;
    puVar2 = local_38;
    local_138 = (undefined8 *)0x0;
    local_130 = local_30;
    if (local_30 == 0) {
      local_12c = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_138,local_30,0);
      puVar5 = local_f8;
      puVar8 = local_138;
      if (puVar2 != (undefined8 *)0x0) {
        puVar5 = puVar2;
      }
      do {
        *puVar8 = *puVar5;
        FString::FString(puVar8 + 1,puVar5 + 1);
        iVar7 = iVar7 + -1;
        puVar5 = puVar5 + 3;
        puVar8 = puVar8 + 3;
      } while (iVar7 != 0);
    }
    lVar4 = FUN_1422ca050();
    local_140 = local_128;
    local_148 = 0;
    local_150 = 0;
    local_158 = 1;
    puVar2 = (undefined8 *)FUN_142840b00(lVar4 + 0x178,local_108,&local_138,local_128 + 2);
    if ((undefined8 *)(param_1 + 0x70) != puVar2) {
      *(undefined8 *)(param_1 + 0x70) = *puVar2;
      *puVar2 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x78,puVar2 + 1);
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_100 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
    if (local_130 != 0) {
      plVar6 = local_138 + 1;
      iVar7 = local_130;
      do {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (local_138 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    if (local_128[0] != 0) {
      FMemory::Free();
    }
  }
  puVar2 = local_f8;
  if (local_38 != (undefined8 *)0x0) {
    puVar2 = local_38;
  }
  if (local_30 != 0) {
    plVar6 = puVar2 + 1;
    iVar7 = local_30;
    do {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407ce570 FUN_1407ce570 body=119 status=ok
// SIG undefined FUN_1407ce570(void)

void FUN_1407ce570(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  lVar3 = (longlong)*(int *)(param_1 + 0x78) * 0xa8 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0xa8) {
    if (*(longlong *)(lVar2 + 0x50) == 0) {
      if (*(int *)(lVar2 + 0x60) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = *(undefined2 **)(lVar2 + 0x58);
      }
      uVar1 = UPawnAction::GetPrivateStaticClass();
      uVar1 = StaticFindObjectChecked(uVar1,0xffffffffffffffff,puVar4);
      *(undefined8 *)(lVar2 + 0x50) = uVar1;
    }
  }
  return;
}



// FUNCTION 1407ce5f0 FUN_1407ce5f0 body=559 status=ok
// SIG undefined FUN_1407ce5f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407ce5f0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined8 *local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  undefined1 local_108 [8];
  longlong *local_100;
  undefined8 local_f8 [24];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  FUN_1407c7b50(param_1,local_f8);
  if (0 < local_30) {
    local_118[0] = 0;
    local_118[1] = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_118,0);
    FGenericPlatformString::Memcpy(local_118[0],L"RequestSyncLoad Array",0x2c);
    iVar6 = local_30;
    puVar5 = local_38;
    local_128 = (undefined8 *)0x0;
    local_120 = local_30;
    if (local_30 == 0) {
      local_11c = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_128,local_30,0);
      puVar4 = local_f8;
      puVar7 = local_128;
      if (puVar5 != (undefined8 *)0x0) {
        puVar4 = puVar5;
      }
      do {
        *puVar7 = *puVar4;
        FString::FString(puVar7 + 1,puVar4 + 1);
        iVar6 = iVar6 + -1;
        puVar4 = puVar4 + 3;
        puVar7 = puVar7 + 3;
      } while (iVar6 != 0);
    }
    lVar2 = FUN_1422ca050();
    local_138 = local_118;
    plVar3 = (longlong *)FStreamableManager::RequestSyncLoad(lVar2 + 0x178,local_108,&local_128,1);
    if (param_1 + 0xe != plVar3) {
      param_1[0xe] = *plVar3;
      *plVar3 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xf,plVar3 + 1);
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_100 + 1;
      lVar2 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
    if (local_120 != 0) {
      plVar3 = local_128 + 1;
      iVar6 = local_120;
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 3;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (local_128 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    if (local_118[0] != 0) {
      FMemory::Free();
    }
    (**(code **)(*param_1 + 0x318))(param_1);
  }
  puVar5 = local_f8;
  if (local_38 != (undefined8 *)0x0) {
    puVar5 = local_38;
  }
  if (local_30 != 0) {
    plVar3 = puVar5 + 1;
    iVar6 = local_30;
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407ce820 FUN_1407ce820 body=300 status=ok
// SIG undefined FUN_1407ce820(void)

undefined8 FUN_1407ce820(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  plVar1 = (longlong *)(param_1 + 0x748);
  plVar7 = (longlong *)*plVar1;
  plVar4 = plVar7;
  do {
    if (plVar4 == plVar7 + *(int *)(param_1 + 0x750)) {
LAB_1407ce866:
      if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar5 = FUN_1423407b0(param_1), lVar5 == 0)) {
        return 0;
      }
      uVar6 = FUN_14247f5b0(DAT_146b17150 + 0xcf8,param_2);
      iVar3 = *(int *)(param_1 + 0x750);
      *(int *)(param_1 + 0x750) = iVar3 + 1;
      if (*(int *)(param_1 + 0x754) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
      }
      lVar5 = (longlong)iVar3 * 8;
      *(undefined8 *)(lVar5 + *plVar1) = uVar6;
      lVar2 = *(longlong *)(lVar5 + *plVar1);
      if (lVar2 == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        uVar6 = FUN_1407e5ab0();
        plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar6);
      }
      (**(code **)(*plVar7 + 0x10))(plVar7,param_1);
      return *(undefined8 *)(lVar5 + *plVar1);
    }
    if (*(longlong *)(*plVar4 + 0x10) == param_2) {
      iVar3 = (int)((longlong)plVar4 - (longlong)plVar7 >> 3);
      if (iVar3 != -1) {
        return *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8);
      }
      goto LAB_1407ce866;
    }
    plVar4 = plVar4 + 1;
  } while( true );
}



// FUNCTION 1407ce950 FUN_1407ce950 body=612 status=ok
// SIG undefined FUN_1407ce950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1407ce950(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  if (0 < (int)param_2[0x501]) {
    plVar7 = (longlong *)param_2[0x500];
    if ((longlong *)param_2[0x500] == (longlong *)0x0) {
      plVar7 = param_2;
    }
    lVar3 = *(longlong *)(plVar7[2] + 0x180);
    lVar4 = *(longlong *)(param_1[2] + 0x180);
    if ((((lVar4 != 0) && (lVar3 != 0)) && (iVar6 = FUN_142de8c20(lVar4,lVar3), iVar6 == 0)) &&
       (iVar6 = FUN_142de8c20(lVar3,lVar4), iVar6 == 0)) {
      plVar7 = (longlong *)param_2[0x500];
      if ((longlong *)param_2[0x500] == (longlong *)0x0) {
        plVar7 = param_2;
      }
      plVar1 = plVar7 + (longlong)(int)param_2[0x501] * 5;
      for (; plVar7 != plVar1; plVar7 = plVar7 + 5) {
        lVar3 = param_1[4];
        plVar9 = *(longlong **)(lVar3 + 0x700);
        plVar2 = plVar9 + *(int *)(lVar3 + 0x708);
        if (plVar9 != plVar2) {
          do {
            if (*plVar9 == *plVar7) {
              return 1;
            }
            plVar9 = plVar9 + 1;
          } while (plVar9 != plVar2);
        }
        lVar4 = plVar7[4];
        plVar9 = *(longlong **)(lVar4 + 0x700);
        plVar2 = plVar9 + *(int *)(lVar4 + 0x708);
        if (plVar9 != plVar2) {
          do {
            if (*plVar9 == *param_1) {
              return 1;
            }
            plVar9 = plVar9 + 1;
          } while (plVar9 != plVar2);
        }
        if ((*(char *)(lVar3 + 0x710) != '\0') && (*(char *)(lVar4 + 0x710) != '\0')) {
          lVar3 = *(longlong *)(*plVar7 + 0x168);
          if (lVar3 == 0) {
            local_38 = DAT_1468b5d98;
            puVar8 = &local_40;
            local_40 = _DAT_1468b5d90;
          }
          else {
            puVar8 = (undefined8 *)&local_58;
            local_58 = *(undefined4 *)(lVar3 + 0x220);
            local_50 = *(undefined4 *)(lVar3 + 0x228);
            uStack_54 = *(undefined4 *)(lVar3 + 0x224);
          }
          local_34 = *puVar8;
          local_2c = *(undefined4 *)(puVar8 + 1);
          cVar5 = FUN_1407dfea0(param_1[3],&local_34);
          if (cVar5 != '\0') {
            return 1;
          }
          lVar3 = *(longlong *)(*param_1 + 0x168);
          if (lVar3 == 0) {
            local_20 = DAT_1468b5d98;
            puVar8 = &local_28;
            local_28 = _DAT_1468b5d90;
          }
          else {
            puVar8 = (undefined8 *)&local_4c;
            local_4c = *(undefined4 *)(lVar3 + 0x220);
            local_44 = *(undefined4 *)(lVar3 + 0x228);
            uStack_48 = *(undefined4 *)(lVar3 + 0x224);
          }
          local_1c = *puVar8;
          local_14 = *(undefined4 *)(puVar8 + 1);
          cVar5 = FUN_1407dfea0(plVar7[3],&local_1c);
          if (cVar5 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1407cebc0 FUN_1407cebc0 body=158 status=ok
// SIG undefined FUN_1407cebc0(void)

ulonglong FUN_1407cebc0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  
  plVar4 = (longlong *)*param_1;
  bVar5 = (*(byte *)(param_1 + 8) & 0xfd) != 0;
  plVar3 = (longlong *)(longlong)(int)param_1[1];
  plVar1 = plVar4 + (longlong)plVar3;
  if (plVar4 != plVar1) {
    plVar2 = (longlong *)*param_2;
    do {
      plVar3 = plVar2;
      if (plVar2 != plVar2 + (int)param_2[1]) {
        do {
          if (*plVar3 == *plVar4) {
            if (bVar5) goto LAB_1407cec24;
            bVar5 = true;
            goto LAB_1407cec42;
          }
          plVar3 = plVar3 + 1;
        } while (plVar3 != plVar2 + (int)param_2[1]);
      }
      if (bVar5) {
        bVar5 = false;
        break;
      }
LAB_1407cec24:
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
LAB_1407cec42:
  if (1 < (byte)(*(byte *)(param_1 + 8) - 2)) {
    return (ulonglong)bVar5;
  }
  return CONCAT71((int7)((ulonglong)plVar3 >> 8),bVar5 == false);
}



// FUNCTION 1407cec60 FUN_1407cec60 body=471 status=ok
// SIG undefined FUN_1407cec60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407cec60(longlong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  longlong lVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  if ((param_2 != (longlong *)0x0) &&
     (local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8, *(char *)(param_1 + 0x8e8) == '\x02')) {
    uVar2 = FUN_142a07000();
    lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
    if (lVar3 != 0) {
      pfVar4 = (float *)FUN_14238d0c0(lVar3,local_78);
      auVar7 = *(undefined1 (*) [16])(pfVar4 + 8);
      fVar10 = auVar7._0_4_;
      fVar11 = auVar7._4_4_;
      fVar12 = auVar7._8_4_;
      auVar1._4_4_ = -(uint)(fRam000000014685c124 < (float)((uint)fVar11 & uRam000000014685c0f4));
      auVar1._0_4_ = -(uint)(_DAT_14685c120 < (float)((uint)fVar10 & _DAT_14685c0f0));
      auVar1._8_4_ = -(uint)(fRam000000014685c128 < (float)((uint)fVar12 & uRam000000014685c0f8));
      auVar1._12_4_ = -(uint)(fRam000000014685c12c < (float)(auVar7._12_4_ & uRam000000014685c0fc));
      iVar5 = movmskps((int)lVar3,auVar1);
      local_80 = fRam00000001468b5b88;
      if (iVar5 != 0) {
        fVar13 = *pfVar4 * _DAT_14685c130;
        fVar14 = pfVar4[1] * fRam000000014685c134;
        auVar7 = rcpps(in_XMM1,auVar7);
        fVar6 = auVar7._0_4_;
        fVar8 = auVar7._4_4_;
        fVar9 = auVar7._8_4_;
        fVar6 = (fVar6 + fVar6) - fVar6 * fVar6 * fVar10;
        fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar11;
        fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar12;
        fVar6 = (fVar6 + fVar6) - fVar6 * fVar6 * fVar10;
        fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar11;
        fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar12;
        fVar6 = (float)(((uint)fVar6 &
                         -(uint)((float)((uint)fVar10 & _DAT_14685c0f0) <= _DAT_14685c120) ^
                        (uint)fVar6) & _DAT_14685c0e0) * pfVar4[4];
        fVar8 = (float)(((uint)fVar8 &
                         -(uint)((float)((uint)fVar11 & uRam000000014685c0f4) <=
                                fRam000000014685c124) ^ (uint)fVar8) & uRam000000014685c0e4) *
                pfVar4[5];
        fVar9 = (float)(((uint)fVar9 &
                         -(uint)((float)((uint)fVar12 & uRam000000014685c0f8) <=
                                fRam000000014685c128) ^ (uint)fVar9) & uRam000000014685c0e8) *
                pfVar4[6];
        fVar10 = fVar9 * fVar14 - fVar8 * pfVar4[2] * fRam000000014685c138;
        fVar11 = fVar6 * pfVar4[2] * fRam000000014685c138 - fVar9 * fVar13;
        fVar12 = fVar8 * fVar13 - fVar6 * fVar14;
        local_80 = (float)((uint)(0.0 - (((fVar11 + fVar11) * fVar13 - (fVar10 + fVar10) * fVar14) +
                                        pfVar4[3] * fRam000000014685c13c * (fVar12 + fVar12) + fVar9
                                        )) & uRam000000014685c0e8);
      }
      lVar3 = FUN_1407cb7a0(param_1,local_78);
      local_98 = 0;
      local_88 = *(undefined4 *)(lVar3 + 0x10);
      local_84 = *(undefined4 *)(lVar3 + 0x14);
      local_80 = local_80 + *(float *)(lVar3 + 0x18);
      FUN_14223c850(param_2,&local_88,0,0);
    }
  }
  return;
}



// FUNCTION 1407cee40 FUN_1407cee40 body=654 status=ok
// SIG undefined FUN_1407cee40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407cee40(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined1 local_res8 [8];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint local_90;
  undefined4 local_88;
  undefined1 local_84 [76];
  longlong *local_38;
  undefined1 local_30 [40];
  
  cVar6 = (**(code **)(*param_1 + 0x30))();
  if (cVar6 != '\0') {
    param_1[0x12] = 0;
    uStack_a0 = DAT_1468b5d98;
    uStack_9c = (undefined4)_DAT_1468b5d90;
    uStack_98 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
    uStack_94 = DAT_1468b5d98;
    local_90 = local_90 & 0xffffff00;
    auVar3._8_4_ = DAT_1468b5d98;
    auVar3._0_8_ = _DAT_1468b5d90;
    auVar3._12_4_ = uStack_9c;
    *(undefined1 (*) [16])(param_1 + 0x13) = auVar3;
    param_1[0x15] = CONCAT44(uStack_a0,uStack_98);
    *(uint *)(param_1 + 0x16) = local_90;
    if (param_2 == '\0') {
      plVar2 = param_1 + 0x17;
      *(int *)plVar2 = (int)*plVar2 + -1;
      if ((int)*plVar2 < 0) {
        iVar7 = (int)param_1[0x1d] + -1;
        if (iVar7 < 1) {
          iVar7 = 0;
        }
        *(int *)(param_1 + 0x17) = iVar7;
      }
    }
    else if ((param_2 == '\x01') &&
            (iVar7 = (int)param_1[0x17] + 1, *(int *)(param_1 + 0x17) = iVar7,
            (int)param_1[0x1d] <= iVar7)) {
      *(undefined4 *)(param_1 + 0x17) = 0;
    }
    iVar7 = (int)param_1[0x17];
    if (((-1 < iVar7) && (iVar7 < (int)param_1[0x1d])) &&
       (plVar2 = *(longlong **)(param_1[0x1c] + (longlong)iVar7 * 8), plVar2 != (longlong *)0x0)) {
      local_a8 = uStack_9c;
      uStack_a4 = uStack_98;
      (**(code **)(*plVar2 + 0x328))(plVar2);
      (**(code **)(*plVar2 + 0x2e8))(plVar2);
      plVar8 = (longlong *)(**(code **)(*plVar2 + 0x2c8))(plVar2,local_res8);
      param_1[0x12] = *plVar8;
      _guard_xfg_dispatch_icall_nop(local_84,0,0x54);
      local_88 = 0xffffffff;
      puVar9 = (undefined4 *)(**(code **)(*plVar2 + 0x298))(plVar2,local_30,&local_88);
      uVar12 = puVar9[1];
      uVar4 = puVar9[2];
      uVar5 = puVar9[3];
      *(undefined4 *)(param_1 + 0x13) = *puVar9;
      *(undefined4 *)((longlong)param_1 + 0x9c) = uVar12;
      *(undefined4 *)(param_1 + 0x14) = uVar4;
      *(undefined4 *)((longlong)param_1 + 0xa4) = uVar5;
      param_1[0x15] = *(longlong *)(puVar9 + 4);
      *(undefined4 *)(param_1 + 0x16) = puVar9[6];
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_38 + 1;
        lVar11 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar1 = (int *)((longlong)local_38 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_38 + 8))(local_38,1);
          }
        }
      }
    }
    param_1[0x18] = 0;
    local_90 = (uint)param_1[0x16];
    local_a8 = (undefined4)param_1[0x13];
    uStack_a4 = *(undefined4 *)((longlong)param_1 + 0x9c);
    uStack_a0 = (undefined4)param_1[0x14];
    uStack_9c = *(undefined4 *)((longlong)param_1 + 0xa4);
    uStack_98 = (undefined4)param_1[0x15];
    uStack_94 = (undefined4)((ulonglong)param_1[0x15] >> 0x20);
    uVar10 = (**(code **)(*param_1 + 0x20))(param_1);
    lVar11 = FUN_142ddc3a0(param_1 + 2,param_1[0x12],&local_a8,uVar10);
    if (((lVar11 != 0) && ((char)param_1[0x1a] == '\0')) &&
       (((*(char *)((longlong)param_1 + 0xd2) == '\0' &&
         (*(char *)((longlong)param_1 + 0xd1) == '\0')) ||
        (cVar6 = FUN_1407c1690(param_1), cVar6 == '\0')))) {
      *(undefined4 *)(param_1 + 0x19) = 0;
      if (*(char *)((longlong)param_1 + 0xb4) == '\0') {
        uVar12 = 0x7f7fffff;
      }
      else {
        uVar12 = 0x40a00000;
      }
      *(undefined4 *)((longlong)param_1 + 0xcc) = uVar12;
      (**(code **)(*param_1 + 0x38))(param_1);
    }
  }
  return;
}



// FUNCTION 1407cf0d0 FUN_1407cf0d0 body=108 status=ok
// SIG undefined FUN_1407cf0d0(void)

undefined8 * FUN_1407cf0d0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  while( true ) {
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar1 = *(uint *)(param_1[2] + 0xc);
    if ((int)uVar1 < (int)DAT_1469e91c4) {
      uVar2 = uVar1 & 0xffff;
      if ((int)uVar1 < 0) {
        uVar1 = uVar1 + 0xffff;
        uVar2 = uVar2 - 0x10000;
      }
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
              (longlong)(int)uVar2 * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) & 0x30000000) == 0) break;
    param_1 = (undefined8 *)*param_1;
  }
  return param_1;
}



// FUNCTION 1407cf140 FUN_1407cf140 body=452 status=ok
// SIG undefined FUN_1407cf140(void)

void FUN_1407cf140(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  UAnimNotify::Notify();
  plVar8 = (longlong *)0x0;
  if (param_2 != 0) {
    plVar8 = *(longlong **)(param_2 + 0x118);
  }
  if (plVar8 != (longlong *)0x0) {
    uVar4 = FUN_142e27720();
    lVar5 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar4);
    if (((char)plVar8[0x25] == '\x03') && (lVar5 != 0)) {
      FUN_142c6e640(lVar5,&local_28,param_3);
      if ((local_28 != 0) && (lVar5 = *(longlong *)(local_28 + 0x10), lVar5 != 0)) {
        lVar6 = UEnvQueryTest_Random::StaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          if (*(char *)(param_1 + 0x38) == '\0') {
            lVar5 = *(longlong *)(lVar5 + 0x1a8);
          }
          else {
            lVar5 = *(longlong *)(lVar5 + 0x1b0);
          }
          if (lVar5 != 0) {
            lVar7 = FUN_142e20fc0();
            lVar6 = lVar5;
            do {
              if (lVar6 == lVar7) {
                if ((local_28 != 0) &&
                   (plVar8 = (longlong *)FUN_1407caec0(), plVar8 != (longlong *)0x0)) {
                  uVar4 = FUN_142e27720();
                  lVar6 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar4);
                  if ((lVar6 != 0) &&
                     (FUN_142c7bae0(lVar6,local_18,lVar5), local_10 != (longlong *)0x0)) {
                    LOCK();
                    plVar8 = local_10 + 1;
                    lVar5 = *plVar8;
                    *(int *)plVar8 = (int)*plVar8 + -1;
                    UNLOCK();
                    if ((int)lVar5 == 1) {
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
                break;
              }
              lVar6 = *(longlong *)(lVar6 + 0x30);
            } while (lVar6 != 0);
          }
        }
      }
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_20 + 1;
        lVar5 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
    }
  }
  return;
}



// FUNCTION 1407cf310 FUN_1407cf310 body=785 status=ok
// SIG undefined FUN_1407cf310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407cf310(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 local_3c;
  float local_34;
  longlong local_30;
  longlong *aplStack_28 [2];
  
  *(undefined1 *)(param_2 + 1) = 1;
  *(undefined1 *)(param_2 + 0xf) = 1;
  uVar11 = 0;
  local_30 = 0;
  aplStack_28[0] = (longlong *)0x0;
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(*param_1 + 0x230);
  if (param_2 + 0x11 != &local_30) {
    param_2[0x11] = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0x12,aplStack_28);
    plVar3 = aplStack_28[0];
    if (aplStack_28[0] != (longlong *)0x0) {
      LOCK();
      plVar1 = aplStack_28[0] + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*aplStack_28[0])(aplStack_28[0]);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*aplStack_28[0] + 8))(aplStack_28[0],1);
        }
      }
    }
  }
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    if ((char)param_2[3] == '\0') {
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
      *(int *)((longlong)param_1 + 100) = *(int *)((longlong)param_1 + 100) + 1;
      lVar5 = 0;
      if (param_1[8] != 0) {
        FUN_1407bfde0(param_1 + 0x10,param_1[8] + 0x908,param_2[10]);
        lVar5 = param_1[8];
      }
      uVar10 = 0;
      uVar12 = uVar11;
      if (lVar5 != 0) {
        if (*(longlong *)(lVar5 + 0x980) != 0) {
          uVar12 = *(ulonglong *)(*(longlong *)(lVar5 + 0x980) + 0x590);
        }
        uVar10 = uVar11;
        if (uVar12 != 0) {
          while (((iVar9 = (int)uVar10, -1 < iVar9 && (iVar9 < *(int *)(uVar12 + 0x6f8))) &&
                 (*(longlong *)(*(longlong *)(uVar12 + 0x6f0) + 0x18 + (longlong)iVar9 * 0x28) == 0)
                 )) {
            uVar10 = (ulonglong)(iVar9 + 1);
          }
        }
      }
      do {
        iVar9 = (int)uVar10;
        if (((iVar9 == -1) || (uVar12 == 0)) ||
           ((iVar9 < 0 ||
            ((*(int *)(uVar12 + 0x6f8) <= iVar9 ||
             (lVar5 = *(longlong *)(*(longlong *)(uVar12 + 0x6f0) + 0x18 + (longlong)iVar9 * 0x28),
             lVar5 == 0)))))) goto LAB_1407cf51f;
        if ((lVar5 != param_1[8]) &&
           ((*(char *)(lVar5 + 0x918) != '\0' && (lVar6 = FUN_1407cb650(lVar5), lVar6 != 0)))) {
          FUN_1407bfde0(lVar6 + 0x80,lVar5 + 0x908,param_2[10]);
        }
        do {
          uVar4 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar4;
          if (((int)uVar4 < 0) || (*(int *)(uVar12 + 0x6f8) <= (int)uVar4)) break;
        } while (*(longlong *)(*(longlong *)(uVar12 + 0x6f0) + 0x18 + (longlong)(int)uVar4 * 0x28)
                 == 0);
      } while( true );
    }
    *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x14) = 0xffffffff;
    lVar5 = param_1[7];
    if (lVar5 != 0) {
      FUN_1407c27c0(lVar5 + 0x538,lVar5,param_2);
    }
  }
  else {
    *(int *)((longlong)param_1 + 0x6c) = *(int *)((longlong)param_1 + 0x6c) + -1;
  }
LAB_1407cf51f:
  lVar5 = *param_2;
  if (lVar5 != 0) {
    lVar6 = *(longlong *)(lVar5 + 0x168);
    if (lVar6 == 0) {
      local_34 = (float)DAT_1468b5d98;
      puVar7 = &local_3c;
      local_3c = _DAT_1468b5d90;
    }
    else {
      puVar7 = (undefined8 *)&local_48;
      local_48 = *(undefined4 *)(lVar6 + 0x220);
      local_40 = *(undefined4 *)(lVar6 + 0x228);
      uStack_44 = *(undefined4 *)(lVar6 + 0x224);
    }
    local_34 = *(float *)(puVar7 + 1) - *(float *)((longlong)param_2 + 0x24);
    param_2[8] = CONCAT44((float)((ulonglong)*puVar7 >> 0x20) - *(float *)(param_2 + 4),
                          (float)*puVar7 - *(float *)((longlong)param_2 + 0x1c));
    *(float *)(param_2 + 9) = local_34;
    iVar9 = *(int *)(lVar5 + 0xc);
    if (iVar9 < (int)DAT_1469e91c4) {
      uVar8 = iVar9 >> 0x1f & 0xffff;
      uVar4 = iVar9 + uVar8;
      uVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
               (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    if (((*(uint *)(uVar11 + 8) >> 0x1d & 1) == 0) && (param_2[10] != 0)) {
      return;
    }
  }
  FUN_1407d70b0(param_1,param_2);
  return;
}



// FUNCTION 1407cf630 FUN_1407cf630 body=96 status=ok
// SIG undefined FUN_1407cf630(void)

void FUN_1407cf630(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int local_res10 [6];
  
  if (param_2 != 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14625a720,local_res10,param_2);
    if ((local_res10[0] != -1) &&
       (lVar1 = DAT_14625a720 + (longlong)local_res10[0] * 0x18, lVar1 != 0)) {
      lVar1 = *(longlong *)(lVar1 + 8);
      goto LAB_1407cf678;
    }
  }
  lVar1 = 0;
LAB_1407cf678:
  if (lVar1 != 0) {
    FUN_1407cf690(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1407cf690 FUN_1407cf690 body=191 status=ok
// SIG undefined FUN_1407cf690(void)

void FUN_1407cf690(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int local_res8 [2];
  
  uVar5 = 0;
  if (param_2 != 0) {
    lVar3 = UObjectBaseUtility::GetOutermost(param_2);
    if (lVar3 != 0) {
      uVar6 = *(ulonglong *)(lVar3 + 0x18);
      goto LAB_1407cf6bf;
    }
  }
  local_res8[1] = 0;
  uVar6 = uVar5;
LAB_1407cf6bf:
  iVar1 = *(int *)(param_1 + 600);
  if (0 < iVar1) {
    pcVar4 = (char *)(*(longlong *)(param_1 + 0x250) + 0x14);
    uVar8 = uVar5;
    do {
      iVar7 = (int)uVar8;
      if ((*(ulonglong *)(pcVar4 + 4) == uVar6) && (*pcVar4 == '\x01')) goto LAB_1407cf700;
      uVar8 = (ulonglong)(iVar7 + 1);
      uVar5 = uVar5 + 1;
      pcVar4 = pcVar4 + 0x140;
    } while ((longlong)uVar5 < (longlong)iVar1);
  }
  iVar7 = -1;
LAB_1407cf700:
  local_res8[0] = iVar7;
  if ((-1 < iVar7) && (iVar7 < iVar1)) {
    cVar2 = FUN_1407ce080(param_1);
    if (cVar2 != '\0') {
      lVar3 = (longlong)iVar7 * 0x140 + *(longlong *)(param_1 + 0x250);
      FUN_1407ce570(lVar3);
      *(undefined1 *)(lVar3 + 9) = 1;
      FUN_1407d9890(param_1,local_res8);
    }
  }
  return;
}



// FUNCTION 1407cf750 FUN_1407cf750 body=103 status=ok
// SIG undefined FUN_1407cf750(void)

void FUN_1407cf750(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int local_res10 [6];
  
  if ((*(uint *)(param_2 + 0x830) & 0x400) == 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14625a720,local_res10,param_2);
    if ((local_res10[0] == -1) ||
       (lVar1 = DAT_14625a720 + (longlong)local_res10[0] * 0x18, lVar1 == 0)) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 8);
    }
    if (lVar1 != 0) {
      FUN_1407cf7c0(lVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1407cf7c0 FUN_1407cf7c0 body=541 status=ok
// SIG undefined FUN_1407cf7c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407cf7c0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  longlong local_120 [3];
  int local_108;
  longlong *local_100;
  longlong local_f8;
  char local_f0;
  ulonglong local_48;
  ulonglong uVar5;
  
  uVar1 = DAT_14685c0c2;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  uVar9 = 0;
  DAT_14685c0c2 = 1;
  local_128 = uVar9;
  if ((param_2 != 0) && (lVar2 = UObjectBaseUtility::GetOutermost(param_2), lVar2 != 0)) {
    local_128 = *(ulonglong *)(lVar2 + 0x18);
  }
  FUN_1407c69d0(param_1);
  lVar2 = *(longlong *)(param_1 + 0x250);
  lVar11 = (longlong)*(int *)(param_1 + 600) * 0x140 + lVar2;
  for (; lVar2 != lVar11; lVar2 = lVar2 + 0x140) {
    if (*(ulonglong *)(lVar2 + 0x18) == local_128) {
      uVar5 = uVar9;
      uVar7 = uVar9;
      if (0 < *(int *)(lVar2 + 0x78)) {
        do {
          iVar4 = (int)uVar5;
          plVar6 = (longlong *)(lVar2 + 0x70);
          local_108 = iVar4;
          local_100 = plVar6;
          FUN_1407bc410(&local_f8,(longlong)iVar4 * 0xa8 + *plVar6);
          if ((local_f0 == '\x01') && (local_f8 != 0)) {
            *(undefined1 *)(uVar7 + 0x1a + *plVar6) = 1;
            FUN_1407dc430(lVar2,&local_f8);
          }
          FUN_1407be530((longlong)local_108 * 0xa8 + *local_100,&local_f8);
          FUN_1407be070(&local_f8);
          uVar5 = (ulonglong)(iVar4 + 1U);
          uVar7 = uVar7 + 0xa8;
        } while ((int)(iVar4 + 1U) < *(int *)(lVar2 + 0x78));
      }
      lVar8 = *(longlong *)(lVar2 + 0x70);
      lVar10 = (longlong)*(int *)(lVar2 + 0x78) * 0xa8 + lVar8;
      if (lVar8 != lVar10) {
        plVar6 = (longlong *)(lVar8 + 0x58);
        do {
          if (plVar6[-1] != 0) {
            plVar3 = (longlong *)UObjectBaseUtility::GetPathName(plVar6[-1],local_120,0);
            if (plVar6 != plVar3) {
              if (*plVar6 != 0) {
                FMemory::Free();
              }
              *plVar6 = *plVar3;
              *plVar3 = 0;
              *(int *)(plVar6 + 1) = (int)plVar3[1];
              *(undefined4 *)((longlong)plVar6 + 0xc) = *(undefined4 *)((longlong)plVar3 + 0xc);
              plVar3[1] = 0;
            }
            if (local_120[0] != 0) {
              FMemory::Free();
            }
            plVar6[-1] = 0;
          }
          lVar8 = lVar8 + 0xa8;
          plVar6 = plVar6 + 0x15;
        } while (lVar8 != lVar10);
      }
      *(undefined1 *)(lVar2 + 9) = 0;
    }
  }
  DAT_14685c0c2 = uVar1;
  return;
}



// FUNCTION 1407cf9e0 FUN_1407cf9e0 body=91 status=ok
// SIG undefined FUN_1407cf9e0(void)

void FUN_1407cf9e0(longlong param_1)

{
  longlong lVar1;
  int local_res8 [8];
  
  if (param_1 != 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14625a720,local_res8,param_1);
    if ((local_res8[0] == -1) ||
       (lVar1 = DAT_14625a720 + (longlong)local_res8[0] * 0x18, lVar1 == 0)) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 8);
    }
    if (lVar1 != 0) {
      FUN_1407cf690(lVar1,*(undefined8 *)(param_1 + 0x30));
    }
  }
  return;
}



// FUNCTION 1407cfa40 FUN_1407cfa40 body=164 status=ok
// SIG undefined FUN_1407cfa40(void)

void FUN_1407cfa40(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_18;
  longlong local_10;
  
  uVar1 = DAT_14685c0c2;
  DAT_14685c0c2 = 1;
  lVar3 = *(longlong *)(param_1 + 0x250);
  lVar4 = (longlong)*(int *)(param_1 + 600) * 0x140 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x140) {
    if ((*(longlong **)(lVar3 + 0x48) != (longlong *)0x0) &&
       (cVar2 = (**(code **)(**(longlong **)(lVar3 + 0x48) + 0x308))(), cVar2 != '\0')) {
      local_18 = *(undefined8 *)(lVar3 + 0x50);
      local_10 = lVar3;
      (**(code **)(**(longlong **)(lVar3 + 0x48) + 0x310))
                (*(longlong **)(lVar3 + 0x48),&local_18,param_2);
    }
  }
  DAT_14685c0c2 = uVar1;
  return;
}



// FUNCTION 1407cfaf0 FUN_1407cfaf0 body=164 status=ok
// SIG undefined FUN_1407cfaf0(void)

void FUN_1407cfaf0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_18;
  longlong local_10;
  
  uVar1 = DAT_14685c0c2;
  DAT_14685c0c2 = 1;
  lVar3 = *(longlong *)(param_1 + 0x250);
  lVar4 = (longlong)*(int *)(param_1 + 600) * 0x140 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x140) {
    if ((*(longlong **)(lVar3 + 0x48) != (longlong *)0x0) &&
       (cVar2 = (**(code **)(**(longlong **)(lVar3 + 0x48) + 0x308))(), cVar2 != '\0')) {
      local_18 = *(undefined8 *)(lVar3 + 0x50);
      local_10 = lVar3;
      (**(code **)(**(longlong **)(lVar3 + 0x48) + 0x318))
                (*(longlong **)(lVar3 + 0x48),&local_18,param_2);
    }
  }
  DAT_14685c0c2 = uVar1;
  return;
}



// FUNCTION 1407cfba0 FUN_1407cfba0 body=405 status=ok
// SIG undefined FUN_1407cfba0(void)

void FUN_1407cfba0(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1407d7010(param_1 + 0x80,*(longlong *)(param_1 + 0x40) + 0x908,param_2[10]);
    lVar1 = *(longlong *)(param_1 + 0x40);
  }
  iVar3 = 0;
  iVar4 = 0;
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(longlong *)(lVar1 + 0x980) != 0) {
      lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x980) + 0x590);
    }
    iVar4 = iVar3;
    if (lVar5 != 0) {
      while (((iVar4 = iVar3, -1 < iVar3 && (iVar3 < *(int *)(lVar5 + 0x6f8))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x6f0) + 0x18 + (longlong)iVar3 * 0x28) == 0))) {
        iVar3 = iVar3 + 1;
      }
    }
  }
  do {
    if (((iVar4 == -1) || (lVar5 == 0)) ||
       ((iVar4 < 0 ||
        ((*(int *)(lVar5 + 0x6f8) <= iVar4 ||
         (lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0x6f0) + 0x18 + (longlong)iVar4 * 0x28),
         lVar1 == 0)))))) {
      FUN_1407dd180(param_1,param_2,param_3);
      iVar4 = *(int *)(param_1 + 0xd0);
      *(int *)(param_1 + 0xd0) = iVar4 + 1;
      if (*(int *)(param_1 + 0xd4) < iVar4 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 200,iVar4);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 200) + (longlong)iVar4 * 8) = *param_2;
      if (param_3 != '\0') {
        *param_2 = 0;
      }
      FUN_1407c36b0(param_1);
      return;
    }
    if ((lVar1 != *(longlong *)(param_1 + 0x40)) &&
       ((*(char *)(lVar1 + 0x918) != '\0' && (lVar2 = FUN_1407cb650(lVar1), lVar2 != 0)))) {
      FUN_1407d7010(lVar2 + 0x80,lVar1 + 0x908,param_2[10]);
    }
    do {
      iVar4 = iVar4 + 1;
      if ((iVar4 < 0) || (*(int *)(lVar5 + 0x6f8) <= iVar4)) break;
    } while (*(longlong *)(*(longlong *)(lVar5 + 0x6f0) + 0x18 + (longlong)iVar4 * 0x28) == 0);
  } while( true );
}



// FUNCTION 1407cfd40 FUN_1407cfd40 body=213 status=ok
// SIG undefined FUN_1407cfd40(void)

void FUN_1407cfd40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (((DAT_1468c2187 == '\0') && (DAT_1468c2186 == '\0')) && (param_2 != 0)) {
    lVar1 = FWeakObjectPtr::Get(param_2 + 0x138);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x118) != param_1)) {
      FUN_1407cca00(param_1,0);
      FUN_142695cf0(param_2,&local_28);
      if ((((local_28 < *(float *)(param_1 + 0x5cc) || local_28 == *(float *)(param_1 + 0x5cc)) &&
           ((*(float *)(param_1 + 0x5c0) <= local_1c &&
            (local_24 < *(float *)(param_1 + 0x5d0) || local_24 == *(float *)(param_1 + 0x5d0)))))
          && (*(float *)(param_1 + 0x5c4) <= local_18)) &&
         ((local_20 < *(float *)(param_1 + 0x5d4) || local_20 == *(float *)(param_1 + 0x5d4) &&
          (*(float *)(param_1 + 0x5c8) <= local_14)))) {
        FUN_1407c1790(param_1);
      }
    }
  }
  return;
}



// FUNCTION 1407cfe20 FUN_1407cfe20 body=27 status=ok
// SIG undefined FUN_1407cfe20(void)

void FUN_1407cfe20(undefined8 param_1)

{
  FUN_142343790();
  FUN_1407de4d0(param_1);
  return;
}



// FUNCTION 1407cfe40 FUN_1407cfe40 body=27 status=ok
// SIG undefined FUN_1407cfe40(void)

void FUN_1407cfe40(undefined8 param_1)

{
  FUN_142393140();
  FUN_1407de4d0(param_1);
  return;
}



// FUNCTION 1407cfe70 FUN_1407cfe70 body=188 status=ok
// SIG undefined FUN_1407cfe70(void)

void FUN_1407cfe70(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  *(undefined1 *)(param_1 + 0xd) = 0;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1,local_res8);
  if (*plVar1 != 0) {
    plVar2 = (longlong *)FUN_1428dfc70();
    plVar1 = (longlong *)*plVar1;
    for (plVar5 = plVar1; plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[6]) {
      if (plVar5 == plVar2) {
        if (plVar1 != (longlong *)0x0) {
          FUN_1417510e0(plVar1);
          plVar5 = (longlong *)plVar1[0x1f];
          if (plVar5 == (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x368))(plVar1);
            plVar5 = (longlong *)plVar1[0x1f];
          }
          uVar4 = UThrobber::GetPrivateStaticClass();
          lVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar4);
          goto LAB_1407cfeb8;
        }
        break;
      }
    }
  }
  lVar3 = 0;
LAB_1407cfeb8:
  param_1[0xb] = lVar3;
  param_1[0xc] = 0;
  lVar3 = (**(code **)(*param_1 + 0x2e0))(param_1);
  param_1[0xc] = lVar3;
  return;
}



// FUNCTION 1407cff30 FUN_1407cff30 body=3662 status=ok
// SIG undefined FUN_1407cff30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407cff30(undefined8 param_1,longlong *param_2)

{
  void *_Dst;
  void *pvVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong **pplVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  longlong *local_res10;
  longlong *local_res20;
  longlong *local_198;
  int local_190;
  int local_18c;
  longlong *local_188;
  longlong *local_180 [4];
  longlong *local_160;
  int iStack_158;
  int iStack_154;
  longlong *local_150;
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined **local_e8 [18];
  undefined8 local_58;
  longlong **local_50;
  undefined8 local_48;
  
  plVar12 = (longlong *)*param_2;
  if ((int)plVar12[0x11] < 1) {
    return;
  }
  plVar6 = (longlong *)plVar12[0x10];
  if ((longlong *)plVar12[0x10] == (longlong *)0x0) {
    plVar6 = plVar12;
  }
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  if ((short)plVar6[3] == 0x28) {
    lVar8 = *plVar6;
    if (lVar8 != 0) {
      lVar4 = UObject::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1407cfff9;
    }
    lVar8 = 0;
  }
  else {
    if ((short)plVar6[3] != 0x27) {
      return;
    }
    local_160 = (longlong *)*plVar6;
    iStack_158 = (int)plVar6[1];
    iStack_154 = *(undefined4 *)((longlong)plVar6 + 0xc);
    lVar8 = FHardwareCursor::GetHandle(&local_160);
  }
LAB_1407cfff9:
  if (lVar8 == 0) {
    return;
  }
  if ((DAT_14685c3a0 == '\0') && (puVar5 = (undefined8 *)FUN_1407c72b0(), puVar5 != &DAT_14685c350))
  {
    DAT_14685c350 = *puVar5;
    uRam000000014685c358 = puVar5[1];
    _DAT_14685c360 = puVar5[2];
    uRam000000014685c368 = puVar5[3];
    _DAT_14685c370 = puVar5[4];
    uRam000000014685c378 = puVar5[5];
    DAT_14685c380 = (longlong *)puVar5[6];
    DAT_14685c388 = (longlong *)puVar5[7];
    DAT_14685c390._0_4_ = *(undefined4 *)(puVar5 + 8);
    DAT_14685c390._4_4_ = *(undefined4 *)((longlong)puVar5 + 0x44);
    DAT_14685c398._0_4_ = *(undefined4 *)(puVar5 + 9);
    DAT_14685c398._4_4_ = *(undefined4 *)((longlong)puVar5 + 0x4c);
    DAT_14685c3a0 = '\x01';
  }
  lVar4 = FUN_1428dfc70();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  lVar4 = lVar8;
  if (!bVar2) {
    lVar4 = 0;
  }
  lVar4 = FUN_1407c7450(lVar4);
  if (lVar4 == 0) {
    return;
  }
  lVar13 = *(longlong *)(lVar4 + 0x250);
  lVar4 = (longlong)*(int *)(lVar4 + 600) * 0x140 + lVar13;
  do {
    if (lVar13 == lVar4) {
      return;
    }
    plVar12 = *(longlong **)(lVar13 + 0x70);
    plVar6 = plVar12 + (longlong)*(int *)(lVar13 + 0x78) * 0x15;
    for (; plVar12 != plVar6; plVar12 = plVar12 + 0x15) {
      if (*plVar12 == lVar8) {
        plVar6 = (longlong *)FUN_1407ca3d0(param_2[2],*(undefined8 *)(*param_2 + 0x90));
        FString::PrintfImpl(&local_140,&DAT_1440da628,*(undefined4 *)((longlong)plVar12 + 0x14));
        FString::PrintfImpl(&local_150,&DAT_1440da628,(int)plVar12[2]);
        local_100 = *(undefined8 *)(lVar13 + 0x20);
        local_108 = *(undefined8 *)(lVar13 + 0x18);
        puVar5 = (undefined8 *)FName::ToString(&local_108);
        local_198 = (longlong *)*puVar5;
        iVar15 = *(int *)(puVar5 + 1);
        *puVar5 = 0;
        local_190 = *(int *)(puVar5 + 1);
        local_18c = *(int *)((longlong)puVar5 + 0xc);
        puVar5[1] = 0;
        iVar16 = local_190;
        if (local_18c < (int)((2 - (uint)(iVar15 != 0)) + local_190)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_198);
          iVar16 = local_190;
        }
        local_190 = (2 - (uint)(iVar16 != 0)) + iVar16;
        if (local_18c < local_190) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,iVar16);
        }
        iVar7 = local_18c;
        iVar15 = local_190;
        plVar14 = local_198;
        lVar8 = (longlong)iVar16 - (ulonglong)(iVar16 != 0);
        *(undefined2 *)((longlong)local_198 + lVar8 * 2) = 0x2e;
        *(undefined2 *)((longlong)local_198 + lVar8 * 2 + 2) = 0;
        puVar5 = (undefined8 *)FName::ToString(&local_100,&local_188);
        iVar16 = 1;
        if (iVar15 < 2) {
          local_res10 = (longlong *)*puVar5;
          *puVar5 = 0;
          local_190 = *(int *)(puVar5 + 1);
          puVar5[1] = 0;
          iVar16 = *(int *)((longlong)puVar5 + 0xc);
          local_res20 = plVar14;
        }
        else {
          iVar17 = *(int *)(puVar5 + 1) + -1;
          if (*(int *)(puVar5 + 1) == 0) {
            iVar17 = 0;
          }
          if ((iVar15 != 0) || (iVar17 == 0)) {
            iVar16 = 0;
          }
          iVar16 = iVar16 + iVar17 + iVar15;
          local_res20 = (longlong *)0x0;
          local_198 = plVar14;
          local_18c = iVar7;
          if (iVar7 < iVar16) {
            local_190 = iVar15;
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_198,iVar16);
            iVar15 = local_190;
          }
          pvVar1 = (void *)*puVar5;
          iVar16 = local_18c;
          local_res10 = local_198;
          local_190 = iVar15;
          if (iVar17 != 0) {
            local_190 = iVar17 + (uint)(iVar15 == 0) + iVar15;
            if (local_18c < local_190) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,iVar15,0);
            }
            iVar16 = local_18c;
            iVar7 = local_190;
            local_res10 = local_198;
            _Dst = (void *)((longlong)local_198 + ((longlong)iVar15 - (ulonglong)(iVar15 != 0)) * 2)
            ;
            _guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar17 * 2);
            *(undefined2 *)((longlong)_Dst + (longlong)iVar17 * 2) = 0;
            local_190 = iVar7;
          }
        }
        iVar7 = (2 - (uint)(local_190 != 0)) + local_190;
        local_198 = local_res10;
        local_18c = iVar16;
        iVar15 = local_190;
        if (iVar16 < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_198,iVar7);
          iVar15 = local_190;
        }
        local_190 = (2 - (uint)(iVar15 != 0)) + iVar15;
        local_res10 = local_198;
        if (local_18c < local_190) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,iVar15);
          local_res10 = local_198;
        }
        plVar14 = local_150;
        local_198 = local_res10;
        lVar8 = (longlong)iVar15 - (ulonglong)(iVar15 != 0);
        *(undefined2 *)((longlong)local_res10 + lVar8 * 2) = 0x2e;
        *(undefined2 *)((longlong)local_res10 + lVar8 * 2 + 2) = 0;
        iVar15 = (int)local_148;
        if (local_190 < 2) {
          iVar17 = local_148._4_4_;
          local_150 = (longlong *)0x0;
          local_148 = 0;
        }
        else {
          iVar16 = 0;
          if ((int)local_148 != 0) {
            iVar16 = (int)local_148 + -1;
          }
          if ((local_190 != 0) || (iVar15 = 1, iVar16 == 0)) {
            iVar15 = 0;
          }
          local_res10 = (longlong *)0x0;
          iVar7 = local_190;
          if (local_18c < iVar16 + local_190 + iVar15) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_198);
            iVar7 = local_190;
          }
          plVar10 = local_150;
          plVar14 = local_198;
          iVar17 = local_18c;
          iVar15 = iVar7;
          if (iVar16 != 0) {
            local_190 = iVar16 + (uint)(iVar7 == 0) + iVar7;
            if (local_18c < local_190) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,iVar7,local_198,0);
            }
            iVar17 = local_18c;
            iVar15 = local_190;
            plVar14 = local_198;
            pvVar1 = (void *)((longlong)local_198 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2)
            ;
            _guard_xfg_dispatch_icall_nop(pvVar1,plVar10,(longlong)iVar16 * 2);
            *(undefined2 *)((longlong)pvVar1 + (longlong)iVar16 * 2) = 0;
          }
        }
        local_198 = plVar14;
        local_18c = iVar17;
        if (iVar17 < (int)((2 - (uint)(iVar15 != 0)) + iVar15)) {
          local_190 = iVar15;
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_198);
          iVar15 = local_190;
        }
        local_190 = (2 - (uint)(iVar15 != 0)) + iVar15;
        if (local_18c < local_190) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,iVar15);
        }
        iVar16 = 0;
        lVar8 = (longlong)iVar15 - (ulonglong)(iVar15 != 0);
        *(undefined2 *)((longlong)local_198 + lVar8 * 2) = 0x2e;
        *(undefined2 *)((longlong)local_198 + lVar8 * 2 + 2) = 0;
        if (local_190 < 2) {
          local_160 = local_140;
          iStack_158 = (int)local_138;
          iStack_154 = local_138._4_4_;
          local_138 = 0;
          local_140 = (longlong *)0x0;
          plVar10 = local_198;
        }
        else {
          if ((int)local_138 != 0) {
            iVar16 = (int)local_138 + -1;
          }
          if ((local_190 != 0) || (iVar15 = 1, iVar16 == 0)) {
            iVar15 = 0;
          }
          local_130 = local_198;
          local_128._0_4_ = local_190;
          local_128._4_4_ = local_18c;
          if (local_18c < iVar16 + iVar15 + local_190) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_130);
          }
          iVar15 = (int)local_128;
          local_198 = local_140;
          plVar14 = local_130;
          iVar17 = local_128._4_4_;
          iVar7 = (int)local_128;
          if (iVar16 != 0) {
            lVar8 = (longlong)(int)local_128;
            local_128._0_4_ = iVar16 + (uint)((int)local_128 == 0) + (int)local_128;
            if (local_128._4_4_ < (int)local_128) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_130,iVar15);
            }
            iVar17 = local_128._4_4_;
            iVar7 = (int)local_128;
            plVar14 = local_130;
            pvVar1 = (void *)((longlong)local_130 + (lVar8 - (ulonglong)(iVar15 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,local_198,(longlong)iVar16 * 2);
            *(undefined2 *)((longlong)pvVar1 + (longlong)iVar16 * 2) = 0;
          }
          plVar10 = (longlong *)0x0;
          local_160 = plVar14;
          iStack_158 = iVar7;
          iStack_154 = iVar17;
        }
        if (*DAT_14685c380 == 0) {
LAB_1407d0745:
          bVar2 = false;
        }
        else {
          lVar8 = DAT_14685c380[1];
          cVar3 = FUN_142190080(lVar8);
          if (cVar3 == '\0') {
LAB_1407d0734:
            bVar2 = false;
          }
          else {
            if (*(longlong *)(lVar8 + 0x28) != 0xd3) {
              if ((((*(int *)(lVar8 + 0x88) == 0) || (*(int *)(lVar8 + 0x88) == 1)) ||
                  (*(int *)(lVar8 + 0x98) == 0)) || (*(int *)(lVar8 + 0x98) == 1)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) goto LAB_1407d0734;
            }
            bVar2 = true;
          }
          if (!bVar2) goto LAB_1407d0745;
          bVar2 = true;
        }
        if (!bVar2) goto LAB_1407d07ef;
        plVar11 = (longlong *)*plVar6;
        plVar14 = plVar11 + (longlong)(int)plVar6[1] * 5;
        if (plVar11 == plVar14) goto LAB_1407d0798;
        goto LAB_1407d0767;
      }
    }
    lVar13 = lVar13 + 0x140;
  } while( true );
  while (plVar11 = plVar11 + 5, plVar11 != plVar14) {
LAB_1407d0767:
    if ((*(longlong *)*plVar11 == *DAT_14685c380) &&
       (*(longlong *)(((longlong *)*plVar11)[1] + 0x28) == *(longlong *)(DAT_14685c380[1] + 0x28)))
    {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      FUN_14217e740(&local_130);
      FUN_142194380(&local_130,0x18,1,0,0);
      FArchive::FArchive(local_e8);
      local_58 = 0;
      local_e8[0] = &PTR_FUN_143f4a100;
      local_50 = &local_130;
      local_48 = 0;
      FArchive::SetIsSaving(local_e8,1);
      FArchive::SetIsPersistent(local_e8,1);
      FUN_14158ce90(local_e8,&local_160);
      FArchive::~FArchive(local_e8);
      FUN_14217f450(plVar11 + 1,&local_130);
      pplVar9 = &local_130;
      goto LAB_1407d07ea;
    }
  }
LAB_1407d0798:
  local_130 = DAT_14685c380;
  FViewMatrices::FViewMatrices(&local_128,&local_160);
  iVar15 = (int)plVar6[1];
  *(int *)(plVar6 + 1) = iVar15 + 1;
  if (*(int *)((longlong)plVar6 + 0xc) < iVar15 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar6,iVar15);
  }
  lVar8 = *plVar6;
  *(longlong **)(lVar8 + (longlong)iVar15 * 0x28) = local_130;
  FUN_14217e5b0(lVar8 + (longlong)iVar15 * 0x28 + 8,&local_128);
  pplVar9 = (longlong **)&local_128;
LAB_1407d07ea:
  FUN_14217f430(pplVar9);
LAB_1407d07ef:
  if (local_160 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (plVar10 != (longlong *)0x0) {
    FMemory::Free(plVar10);
  }
  if (local_res10 != (longlong *)0x0) {
    FMemory::Free(local_res10);
  }
  if (local_res20 != (longlong *)0x0) {
    FMemory::Free(local_res20);
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  if (local_188 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_150 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_140 != (longlong *)0x0) {
    FMemory::Free();
  }
  fVar18 = *(float *)((longlong)plVar12 + 0x6c) * 100.0;
  if (*DAT_14685c388 == 0) {
LAB_1407d09c2:
    bVar2 = false;
  }
  else {
    lVar8 = DAT_14685c388[1];
    cVar3 = FUN_142190080(lVar8);
    if (cVar3 == '\0') {
LAB_1407d09b1:
      bVar2 = false;
    }
    else {
      if (*(longlong *)(lVar8 + 0x28) != 0xd3) {
        if (((*(int *)(lVar8 + 0x88) == 0) || (*(int *)(lVar8 + 0x88) == 1)) ||
           ((*(int *)(lVar8 + 0x98) == 0 || (*(int *)(lVar8 + 0x98) == 1)))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_1407d09b1;
      }
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1407d09c2;
    bVar2 = true;
  }
  if (bVar2) {
    plVar10 = (longlong *)*plVar6;
    plVar14 = plVar10 + (longlong)(int)plVar6[1] * 5;
    if (plVar10 != plVar14) {
      do {
        if ((*(longlong *)*plVar10 == *DAT_14685c388) &&
           (*(longlong *)(((longlong *)*plVar10)[1] + 0x28) ==
            *(longlong *)(DAT_14685c388[1] + 0x28))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          FUN_14217e740(&local_188);
          FUN_142194380(&local_188,10,0,0,1);
          local_188 = (longlong *)CONCAT44(local_188._4_4_,fVar18);
          FUN_14217f450(plVar10 + 1,&local_188);
          pplVar9 = &local_188;
          goto LAB_1407d0a8b;
        }
        plVar10 = plVar10 + 5;
      } while (plVar10 != plVar14);
    }
    local_188 = DAT_14685c388;
    FUN_14217e740(local_180);
    FUN_142194380(local_180,10,0,0,1);
    iVar15 = (int)plVar6[1];
    *(int *)(plVar6 + 1) = iVar15 + 1;
    local_180[0]._0_4_ = fVar18;
    if (*(int *)((longlong)plVar6 + 0xc) < iVar15 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar6,iVar15);
    }
    lVar8 = *plVar6;
    *(longlong **)(lVar8 + (longlong)iVar15 * 0x28) = local_188;
    FUN_14217e5b0(lVar8 + (longlong)iVar15 * 0x28 + 8,local_180);
    pplVar9 = local_180;
LAB_1407d0a8b:
    FUN_14217f430(pplVar9);
  }
  plVar14 = (longlong *)CONCAT44(DAT_14685c390._4_4_,(undefined4)DAT_14685c390);
  if (*plVar14 == 0) {
LAB_1407d0b09:
    bVar2 = false;
  }
  else {
    cVar3 = FUN_1407ce010(plVar14 + 1);
    plVar14 = (longlong *)CONCAT44(DAT_14685c390._4_4_,(undefined4)DAT_14685c390);
    if (cVar3 == '\0') goto LAB_1407d0b09;
    bVar2 = true;
  }
  if (bVar2) {
    plVar11 = (longlong *)*plVar6;
    plVar10 = plVar11 + (longlong)(int)plVar6[1] * 5;
    if (plVar11 != plVar10) {
      do {
        if ((*(longlong *)*plVar11 == *plVar14) &&
           (*(longlong *)(((longlong *)*plVar11)[1] + 0x28) == *(longlong *)(plVar14[1] + 0x28))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          FUN_14217e740(&local_188);
          FUN_142194380(&local_188,0xe,0,1,0);
          local_188 = (longlong *)CONCAT44(local_188._4_4_,*(undefined4 *)((longlong)plVar12 + 0xc))
          ;
          FUN_14217f450(plVar11 + 1,&local_188);
          pplVar9 = &local_188;
          goto LAB_1407d0bd4;
        }
        plVar11 = plVar11 + 5;
      } while (plVar11 != plVar10);
    }
    local_188 = plVar14;
    FUN_14217e740(local_180);
    FUN_142194380(local_180,0xe,0,1,0);
    local_180[0]._0_4_ = *(float *)((longlong)plVar12 + 0xc);
    iVar15 = (int)plVar6[1];
    *(int *)(plVar6 + 1) = iVar15 + 1;
    if (*(int *)((longlong)plVar6 + 0xc) < iVar15 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar6,iVar15);
    }
    lVar8 = *plVar6;
    *(longlong **)(lVar8 + (longlong)iVar15 * 0x28) = local_188;
    FUN_14217e5b0(lVar8 + (longlong)iVar15 * 0x28 + 8,local_180);
    pplVar9 = local_180;
LAB_1407d0bd4:
    FUN_14217f430(pplVar9);
  }
  plVar14 = (longlong *)CONCAT44(DAT_14685c398._4_4_,(undefined4)DAT_14685c398);
  if (*plVar14 != 0) {
    cVar3 = FUN_1407ce010(plVar14 + 1);
    plVar14 = (longlong *)CONCAT44(DAT_14685c398._4_4_,(undefined4)DAT_14685c398);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_1407d0c51;
    }
  }
  bVar2 = false;
LAB_1407d0c51:
  if (bVar2) {
    plVar11 = (longlong *)*plVar6;
    plVar10 = plVar11 + (longlong)(int)plVar6[1] * 5;
    if (plVar11 != plVar10) {
      do {
        if ((*(longlong *)*plVar11 == *plVar14) &&
           (*(longlong *)(((longlong *)*plVar11)[1] + 0x28) == *(longlong *)(plVar14[1] + 0x28))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          FUN_14217e740(&local_188);
          FUN_142194380(&local_188,0x21,0,0,0);
          local_188 = *(longlong **)((longlong)plVar12 + 0x1c);
          local_180[0]._0_4_ = *(float *)((longlong)plVar12 + 0x24);
          FUN_14217f450(plVar11 + 1,&local_188);
          pplVar9 = &local_188;
          goto LAB_1407d0cf8;
        }
        plVar11 = plVar11 + 5;
      } while (plVar11 != plVar10);
    }
    local_188 = plVar14;
    FUN_1407b8d80(local_180,(longlong)plVar12 + 0x1c);
    iVar15 = (int)plVar6[1];
    *(int *)(plVar6 + 1) = iVar15 + 1;
    if (*(int *)((longlong)plVar6 + 0xc) < iVar15 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar6,iVar15);
    }
    lVar8 = *plVar6;
    *(longlong **)(lVar8 + (longlong)iVar15 * 0x28) = local_188;
    FUN_14217e5b0(lVar8 + (longlong)iVar15 * 0x28 + 8,local_180);
    pplVar9 = local_180;
LAB_1407d0cf8:
    FUN_14217f430(pplVar9);
  }
  return;
}



// FUNCTION 1407d0d80 FUN_1407d0d80 body=570 status=ok
// SIG undefined FUN_1407d0d80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407d0d80(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_110;
  longlong *local_108;
  int local_f8;
  longlong *local_f0;
  longlong local_e8;
  char local_e0;
  ulonglong local_38;
  
  if (param_1 != 0) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14625a720,&local_118,param_1);
    if (((int)local_118 == -1) ||
       (lVar5 = DAT_14625a720 + (longlong)(int)local_118 * 0x18, lVar5 == 0)) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(longlong *)(lVar5 + 8);
    }
    if (lVar5 != 0) {
      local_110 = lVar5;
      plVar2 = (longlong *)UDynamicEntryBox::GetAllEntries(param_1);
      uVar1 = DAT_14685c0c2;
      plVar7 = (longlong *)*plVar2;
      local_108 = plVar7 + (int)plVar2[1];
      DAT_14685c0c2 = uVar1;
      if (plVar7 != local_108) {
        do {
          DAT_14685c0c2 = 1;
          if ((*plVar7 == 0) || (lVar3 = UObjectBaseUtility::GetOutermost(), lVar3 == 0)) {
            local_118 = 0;
            lVar3 = 0;
          }
          else {
            lVar3 = *(longlong *)(lVar3 + 0x18);
          }
          lVar4 = *(longlong *)(lVar5 + 0x250);
          lVar8 = (longlong)*(int *)(lVar5 + 600) * 0x140 + lVar4;
          for (; lVar4 != lVar8; lVar4 = lVar4 + 0x140) {
            if ((*(longlong *)(lVar4 + 0x18) == lVar3) && (iVar6 = 0, 0 < *(int *)(lVar4 + 0x78))) {
              lVar5 = 0;
              do {
                plVar2 = (longlong *)(lVar4 + 0x70);
                local_f8 = iVar6;
                local_f0 = plVar2;
                FUN_1407bc410(&local_e8,(longlong)iVar6 * 0xa8 + *plVar2);
                if ((local_e0 == '\x01') && (local_e8 != 0)) {
                  *(undefined1 *)(*plVar2 + 0x1a + lVar5) = 1;
                  FUN_1407dc430(lVar4,&local_e8);
                }
                FUN_1407be530((longlong)local_f8 * 0xa8 + *local_f0,&local_e8);
                FUN_1407be070(&local_e8);
                iVar6 = iVar6 + 1;
                lVar5 = lVar5 + 0xa8;
              } while (iVar6 < *(int *)(lVar4 + 0x78));
            }
            lVar5 = local_110;
          }
          plVar7 = plVar7 + 1;
          DAT_14685c0c2 = uVar1;
        } while (plVar7 != local_108);
      }
    }
  }
  return;
}



// FUNCTION 1407d0fc0 FUN_1407d0fc0 body=27 status=ok
// SIG undefined FUN_1407d0fc0(void)

void FUN_1407d0fc0(undefined8 param_1)

{
  FUN_1407d64a0();
  FUN_142dd4a20(param_1);
  return;
}



// FUNCTION 1407d1020 FUN_1407d1020 body=51 status=ok
// SIG undefined FUN_1407d1020(void)

void FUN_1407d1020(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    FUN_142543860(lVar1,param_1,0,1);
    return;
  }
  return;
}



// FUNCTION 1407d1060 FUN_1407d1060 body=602 status=ok
// SIG undefined FUN_1407d1060(void)

void FUN_1407d1060(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int local_res8 [2];
  undefined1 local_res20 [8];
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong **local_30;
  
  lVar5 = DAT_146b17150;
  if ((param_1 != 0) && (DAT_146b17150 != 0)) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14625a720,local_res8,param_1);
    plVar9 = (longlong *)0x0;
    local_58 = plVar9;
    if ((local_res8[0] != -1) &&
       (lVar2 = DAT_14625a720 + (longlong)local_res8[0] * 0x18, lVar2 != 0)) {
      local_58 = *(longlong **)(lVar2 + 8);
    }
    lVar5 = FUN_1428761d0(lVar5,param_1);
    plVar10 = (longlong *)(lVar5 + 8);
    if (lVar5 == 0) {
      plVar10 = plVar9;
    }
    bVar4 = false;
    if (((local_58 != (longlong *)0x0) && (plVar10 != (longlong *)0x0)) && ((char)*plVar10 != '\0'))
    {
      puVar6 = (ulonglong *)UDynamicEntryBox::GetAllEntries(param_1);
      puVar7 = (undefined8 *)*puVar6;
      plVar8 = (longlong *)((longlong)(int)puVar6[1] & 0x1fffffffffffffff);
      if (puVar7 + (int)puVar6[1] < puVar7) {
        plVar8 = plVar9;
      }
      if (plVar8 != (longlong *)0x0) {
        do {
          FUN_1407cf7c0(local_58,*puVar7);
          puVar7 = puVar7 + 1;
          plVar9 = (longlong *)((longlong)plVar9 + 1);
        } while (plVar9 != plVar8);
      }
      local_50 = plVar10[0x14];
      FUN_1407dad70(local_58,0);
      local_38 = &local_50;
      local_30 = &local_58;
      FUN_1405c0510(&DAT_14625a720,local_res20,&local_38,0);
      (**(code **)(*local_58 + 0x138))(local_58,0,*(undefined8 *)(local_50 + 0x30),0);
      bVar4 = true;
    }
    TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Remove(&DAT_14625a720,param_1);
    if (bVar4) {
      for (puVar7 = (undefined8 *)FUN_1407cf0d0(DAT_14685c2f0); puVar7 != (undefined8 *)0x0;
          puVar7 = (undefined8 *)FUN_1407cf0d0(*puVar7)) {
        lVar5 = puVar7[2];
        plVar9 = (longlong *)(lVar5 + 0x70);
        if (*plVar9 != 0) {
          FUN_14283ef20();
          local_48 = 0;
          plStack_40 = (longlong *)0x0;
          if (plVar9 != &local_48) {
            *plVar9 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(lVar5 + 0x78,&plStack_40);
            plVar9 = plStack_40;
            if (plStack_40 != (longlong *)0x0) {
              LOCK();
              plVar10 = plStack_40 + 1;
              lVar5 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plStack_40)(plStack_40);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plStack_40 + 8))(plStack_40,1);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1407d12c0 FUN_1407d12c0 body=553 status=ok
// SIG undefined FUN_1407d12c0(void)

void FUN_1407d12c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong local_res8 [2];
  undefined8 local_res18;
  longlong local_res20;
  longlong *local_48;
  longlong *local_40;
  longlong local_38 [2];
  
  if ((((param_1 != 0) && (local_res8[0] = param_1, cVar2 = UWorld::IsGameWorld(), cVar2 != '\0'))
      && (cVar2 = FUN_1428cfb10(local_res8[0]), cVar2 == '\0')) &&
     (iVar3 = FUN_1428cf800(local_res8[0]), lVar7 = local_res8[0], iVar3 != 3)) {
    lVar9 = 0;
    if (local_res8[0] != 0) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(&DAT_14625a720,&local_res18,local_res8[0]);
      if (((int)local_res18 != -1) &&
         (lVar1 = DAT_14625a720 + (longlong)(int)local_res18 * 0x18, lVar1 != 0)) {
        lVar9 = *(longlong *)(lVar1 + 8);
      }
    }
    local_res20 = lVar9;
    if (lVar9 == 0) {
      plVar4 = (longlong *)FUN_1407e52a0();
      lVar7 = plVar4[0x1f];
      if (lVar7 == 0) {
        (**(code **)(*plVar4 + 0x368))(plVar4);
        lVar7 = plVar4[0x1f];
      }
      puVar5 = (undefined8 *)FSoftObjectPath::ToString(lVar7 + 0x1a8,local_38);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar5;
      }
      uVar6 = FUN_1407e52a0();
      lVar7 = FUN_141799830(uVar6,0,puVar10,0,0,0);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if (lVar7 != 0) {
        lVar8 = FUN_1407e52a0();
        lVar1 = local_res8[0];
        lVar9 = lVar7;
        do {
          if (lVar9 == lVar8) {
            local_res18 = 0;
            local_48 = (longlong *)0x0;
            FUN_1417846f0(local_res8[0],
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                         );
            local_res20 = FUN_1417985e0(lVar7,lVar1,0,0,0,0,0,0,0);
            local_48 = local_res8;
            local_40 = &local_res20;
            FUN_1405c0510(&DAT_14625a720,&local_res18,&local_48,0);
            FUN_1407dad70(local_res20,local_res8[0]);
            FUN_1407cc820(local_res20);
            return;
          }
          lVar9 = *(longlong *)(lVar9 + 0x30);
        } while (lVar9 != 0);
      }
    }
    else {
      FUN_1407dad70(lVar9,lVar7);
      FUN_1407cc820(local_res20);
      FUN_1407cf690(local_res20,*(undefined8 *)(local_res8[0] + 0x30));
    }
  }
  return;
}



// FUNCTION 1407d14f0 FUN_1407d14f0 body=95 status=ok
// SIG undefined FUN_1407d14f0(void)

void FUN_1407d14f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x588);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = plVar1[0x120];
    if (lVar2 == 0) {
      lVar2 = plVar1[0x11f];
    }
    if (param_2 != lVar2) {
      FUN_1407ddd80(plVar1);
      plVar1[0x120] = param_2;
      (**(code **)(*plVar1 + 0x900))(plVar1);
      FUN_1407ddb90(plVar1);
    }
  }
  return;
}



// FUNCTION 1407d1550 FUN_1407d1550 body=83 status=ok
// SIG undefined FUN_1407d1550(void)

void FUN_1407d1550(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[0x120];
  if (lVar1 == 0) {
    lVar1 = param_1[0x11f];
  }
  if (param_2 != lVar1) {
    FUN_1407ddd80();
    param_1[0x120] = param_2;
    (**(code **)(*param_1 + 0x900))(param_1);
    FUN_1407ddb90(param_1);
  }
  return;
}



// FUNCTION 1407d15b0 FUN_1407d15b0 body=14450 status=ok
// SIG undefined FUN_1407d15b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1407d15b0(longlong param_1,undefined8 *param_2,longlong *param_3,float *param_4)

{
  int *piVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool bVar15;
  char cVar16;
  undefined4 uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  float *pfVar24;
  undefined1 (*pauVar25) [12];
  undefined4 *puVar26;
  ulonglong *puVar27;
  undefined8 uVar28;
  int iVar29;
  longlong *plVar30;
  undefined8 *puVar31;
  longlong *plVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar53;
  float fVar54;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar55;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  undefined4 uVar60;
  undefined1 in_XMM2 [16];
  undefined1 auVar56 [16];
  float fVar61;
  undefined4 uVar62;
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
  float fVar81;
  undefined1 auStack_1048 [32];
  ulonglong local_1028;
  longlong *local_1020;
  undefined1 local_1018 [8];
  float local_1010;
  float local_100c;
  float local_1008;
  undefined8 local_ff8;
  undefined8 uStack_ff0;
  longlong local_fe8;
  int local_fe0;
  longlong *local_fd8;
  undefined8 local_fc8;
  undefined8 uStack_fc0;
  undefined1 local_fb8 [8];
  undefined8 uStack_fb0;
  float local_fa8;
  float fStack_fa4;
  float fStack_fa0;
  float fStack_f9c;
  float local_f98;
  float fStack_f94;
  float fStack_f90;
  float fStack_f8c;
  undefined4 local_f88;
  undefined4 local_f80;
  undefined4 local_f78;
  undefined4 local_f70;
  float local_f68 [2];
  undefined4 local_f60;
  undefined4 local_f58;
  float local_f48;
  float fStack_f44;
  float fStack_f40;
  float fStack_f3c;
  float local_f38;
  float fStack_f34;
  float fStack_f30;
  float fStack_f2c;
  float local_f28;
  float fStack_f24;
  float fStack_f20;
  float fStack_f1c;
  float local_f18;
  float fStack_f14;
  float fStack_f10;
  float fStack_f0c;
  float local_f08;
  float fStack_f04;
  float fStack_f00;
  float fStack_efc;
  float local_ef8;
  float fStack_ef4;
  float fStack_ef0;
  float fStack_eec;
  float local_ee8;
  float fStack_ee4;
  float fStack_ee0;
  float fStack_edc;
  float local_ed8;
  float fStack_ed4;
  float fStack_ed0;
  float fStack_ecc;
  float local_ec8;
  float fStack_ec4;
  float fStack_ec0;
  float fStack_ebc;
  float local_eb8;
  float fStack_eb4;
  float fStack_eb0;
  float fStack_eac;
  float local_ea8;
  float fStack_ea4;
  float fStack_ea0;
  float fStack_e9c;
  float local_e98;
  float fStack_e94;
  float fStack_e90;
  float fStack_e8c;
  float local_e88;
  float fStack_e84;
  float fStack_e80;
  float fStack_e7c;
  float local_e78;
  float fStack_e74;
  float fStack_e70;
  float fStack_e6c;
  float local_e68;
  float fStack_e64;
  float fStack_e60;
  float fStack_e5c;
  float local_e58;
  float fStack_e54;
  float fStack_e50;
  float fStack_e4c;
  float local_e48;
  float fStack_e44;
  float fStack_e40;
  float fStack_e3c;
  float local_e38;
  float fStack_e34;
  float fStack_e30;
  float fStack_e2c;
  float local_e28;
  float fStack_e24;
  float fStack_e20;
  float fStack_e1c;
  float local_e18;
  float fStack_e14;
  float fStack_e10;
  float fStack_e0c;
  ulonglong local_e08;
  undefined4 local_e00;
  float local_df8;
  float fStack_df4;
  float fStack_df0;
  float fStack_dec;
  float local_de8;
  float fStack_de4;
  float fStack_de0;
  float fStack_ddc;
  float local_dd8;
  float fStack_dd4;
  float fStack_dd0;
  float fStack_dcc;
  float local_dc8;
  float fStack_dc4;
  float fStack_dc0;
  float fStack_dbc;
  undefined8 *local_db8;
  undefined8 local_db0;
  float local_da8;
  float fStack_da4;
  float fStack_da0;
  float fStack_d9c;
  float local_d98;
  float fStack_d94;
  float fStack_d90;
  float fStack_d8c;
  float local_d88;
  float fStack_d84;
  float fStack_d80;
  float fStack_d7c;
  float local_d78;
  float fStack_d74;
  float fStack_d70;
  float fStack_d6c;
  float local_d68;
  float local_d64;
  float local_d60;
  longlong local_d58 [2];
  undefined4 local_d48;
  undefined4 local_d44;
  float local_d40;
  float local_d38;
  float local_d34;
  float local_d30;
  float local_d28;
  float local_d24;
  float local_d20;
  float local_d1c;
  float local_d18;
  float local_d14;
  float local_d10;
  float local_d0c;
  float local_d08;
  float local_d00;
  float local_cfc;
  float local_cf8;
  float local_cf0;
  float local_cec;
  float local_ce8;
  float local_ce4;
  float local_ce0;
  float local_cdc;
  float local_cd8;
  float local_cd4;
  float local_cd0;
  float local_cc8;
  float local_cc4;
  float local_cc0;
  float local_cb8;
  float local_cb4;
  float local_cb0;
  float local_cac;
  float local_ca8;
  float local_ca4;
  float local_ca0;
  float local_c9c;
  float local_c98;
  float local_c94;
  float local_c90;
  float local_c8c;
  undefined4 local_c88;
  undefined4 local_c84;
  undefined4 local_c80;
  float local_c7c;
  float local_c78;
  float local_c74;
  float local_c70;
  float local_c6c;
  float local_c68;
  float local_c60;
  float local_c5c;
  float local_c58;
  float local_c54;
  float local_c50;
  float local_c4c;
  float local_c48;
  float local_c44;
  float local_c40;
  float local_c3c;
  float local_c38;
  float local_c34;
  float local_c30;
  float local_c2c;
  float local_c28;
  float local_c24;
  float local_c20;
  float local_c1c;
  float local_c18;
  float local_c14;
  float local_c10;
  ulonglong local_c0c;
  undefined4 local_c04;
  ulonglong local_c00;
  undefined4 local_bf8;
  ulonglong local_bf4;
  undefined4 local_bec;
  undefined1 local_be8 [4];
  float local_be4;
  float local_be0;
  float local_bdc;
  float local_bd8;
  float local_bd4;
  float local_bd0;
  float local_bc8;
  float local_bc4;
  float local_bc0;
  float local_bb8;
  float local_bb4;
  float local_bb0;
  float *local_ba8;
  longlong local_ba0;
  float local_b98;
  float local_b94;
  float local_b90;
  float local_b88;
  float local_b84;
  float local_b80;
  float local_b7c;
  float local_b78;
  float local_b74;
  float local_b70;
  float local_b6c;
  float local_b68;
  float local_b60;
  float local_b5c;
  float local_b58;
  float local_b54;
  float local_b50;
  float local_b4c;
  float local_b48;
  float local_b44;
  float local_b40;
  longlong *local_b38 [2];
  float local_b28;
  float fStack_b24;
  float fStack_b20;
  float fStack_b1c;
  undefined8 local_b18;
  undefined8 uStack_b10;
  float local_b08;
  float fStack_b04;
  float fStack_b00;
  float fStack_afc;
  float local_af8;
  float fStack_af4;
  float fStack_af0;
  float fStack_aec;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  float local_ad8;
  float fStack_ad4;
  float fStack_ad0;
  float fStack_acc;
  float local_ac8;
  float fStack_ac4;
  float fStack_ac0;
  float fStack_abc;
  float local_ab8;
  float fStack_ab4;
  float fStack_ab0;
  float fStack_aac;
  undefined8 local_aa8;
  float local_a98;
  float fStack_a94;
  float fStack_a90;
  float fStack_a8c;
  undefined8 local_a88;
  undefined8 local_a80;
  undefined1 local_a78 [8];
  longlong *local_a70;
  float local_a68;
  float fStack_a64;
  float fStack_a60;
  float fStack_a5c;
  float local_a58;
  float fStack_a54;
  float fStack_a50;
  float fStack_a4c;
  float local_a48;
  float fStack_a44;
  float fStack_a40;
  float fStack_a3c;
  float local_a38;
  float fStack_a34;
  float fStack_a30;
  float fStack_a2c;
  float local_a28;
  float fStack_a24;
  float fStack_a20;
  float fStack_a1c;
  undefined1 local_a18 [32];
  longlong local_9f8;
  int local_9f0;
  int local_9ec;
  undefined1 local_948 [12];
  undefined1 local_93c [12];
  undefined1 local_930 [12];
  undefined1 local_924 [12];
  undefined1 local_918 [12];
  undefined1 local_90c [12];
  undefined1 local_900 [12];
  undefined1 local_8f4 [12];
  float local_8e8;
  float fStack_8e4;
  float fStack_8e0;
  float fStack_8dc;
  float local_8d8;
  float fStack_8d4;
  float fStack_8d0;
  float fStack_8cc;
  float local_8c8;
  float fStack_8c4;
  float fStack_8c0;
  float fStack_8bc;
  float local_8b8;
  float fStack_8b4;
  float fStack_8b0;
  float fStack_8ac;
  float local_8a8;
  float fStack_8a4;
  float fStack_8a0;
  float fStack_89c;
  float local_898;
  float fStack_894;
  float fStack_890;
  float fStack_88c;
  float local_888;
  float fStack_884;
  float fStack_880;
  float fStack_87c;
  float local_878;
  float fStack_874;
  float fStack_870;
  float fStack_86c;
  float local_868;
  float fStack_864;
  float fStack_860;
  float fStack_85c;
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
  undefined1 local_818 [16];
  undefined1 local_808 [16];
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
  float local_748;
  float fStack_744;
  float fStack_740;
  float fStack_73c;
  float local_738;
  float fStack_734;
  float fStack_730;
  float fStack_72c;
  float local_728;
  float fStack_724;
  float fStack_720;
  float fStack_71c;
  float local_718;
  float fStack_714;
  float fStack_710;
  float fStack_70c;
  float local_708;
  float fStack_704;
  float fStack_700;
  float fStack_6fc;
  float local_6f8;
  float fStack_6f4;
  float fStack_6f0;
  float fStack_6ec;
  float local_6e8;
  float fStack_6e4;
  float fStack_6e0;
  float fStack_6dc;
  float local_6d8;
  float fStack_6d4;
  float fStack_6d0;
  float fStack_6cc;
  float local_6c8;
  float fStack_6c4;
  float fStack_6c0;
  float fStack_6bc;
  float local_6b8;
  float fStack_6b4;
  float fStack_6b0;
  float fStack_6ac;
  float local_6a8;
  float fStack_6a4;
  float fStack_6a0;
  float fStack_69c;
  float local_698;
  float fStack_694;
  float fStack_690;
  float fStack_68c;
  float local_688;
  float fStack_684;
  float fStack_680;
  float fStack_67c;
  float local_678;
  float fStack_674;
  float fStack_670;
  float fStack_66c;
  float local_668;
  float fStack_664;
  float fStack_660;
  float fStack_65c;
  float local_658;
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  float local_648;
  float fStack_644;
  float fStack_640;
  float fStack_63c;
  float local_638;
  float fStack_634;
  float fStack_630;
  float fStack_62c;
  float local_628;
  float fStack_624;
  float fStack_620;
  float fStack_61c;
  float local_618;
  float fStack_614;
  float fStack_610;
  float fStack_60c;
  float local_608;
  float fStack_604;
  float fStack_600;
  float fStack_5fc;
  float local_5f8;
  float fStack_5f4;
  float fStack_5f0;
  float fStack_5ec;
  float local_5e8;
  float fStack_5e4;
  float fStack_5e0;
  float fStack_5dc;
  float local_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float local_5c8;
  float fStack_5c4;
  float fStack_5c0;
  float fStack_5bc;
  float local_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float local_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  float local_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float local_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  float local_578;
  float fStack_574;
  float fStack_570;
  float fStack_56c;
  float local_568;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  float local_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  float local_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  undefined1 local_538 [48];
  undefined1 local_508 [48];
  undefined1 local_4d8 [48];
  undefined1 local_4a8 [48];
  byte local_478 [28];
  float local_45c;
  undefined1 local_3e8 [56];
  undefined1 local_3b0 [56];
  undefined1 local_378 [208];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined1 local_238 [8];
  float fStack_230;
  float fStack_22c;
  undefined1 local_228 [8];
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined1 local_208 [8];
  float fStack_200;
  float fStack_1fc;
  undefined1 local_1f8 [8];
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined1 local_1d8 [8];
  float fStack_1d0;
  float fStack_1cc;
  undefined1 local_1c8 [8];
  float fStack_1c0;
  float fStack_1bc;
  undefined1 local_1b8 [48];
  undefined1 local_188 [48];
  undefined1 local_158 [48];
  undefined1 local_128 [48];
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_1048;
  plVar22 = (longlong *)0x0;
  local_ba8 = param_4;
  if ((param_3 != (longlong *)0x0) && (local_fe8 = 0, *(longlong *)(param_1 + 0x8e0) != 0)) {
    local_a88 = FUN_142e27720();
    lVar18 = (**(code **)(*param_3 + 0x628))(param_3,local_a88);
    local_ba0 = lVar18;
    if (lVar18 != 0) {
      FUN_142c62180(local_a18);
      FUN_142c70760(lVar18,&local_fe8,*(undefined8 *)(param_1 + 0x8e0),local_a18);
      if (local_fe8 != 0) {
        lVar19 = FUN_142e20fc0();
        for (lVar21 = local_fe8; lVar21 != 0; lVar21 = *(longlong *)(lVar21 + 0x30)) {
          if (lVar21 == lVar19) {
            local_aa8 = FUN_142a07000();
            plVar20 = (longlong *)(**(code **)(*param_3 + 0x628))(param_3,local_aa8);
            FUN_142c858a0(lVar18,local_b38,local_fe8,local_a18);
            local_fd8 = local_b38[0];
            plVar32 = plVar22;
            if (local_b38[0] == (longlong *)0x0) goto LAB_1407d1751;
            lVar18 = local_b38[0][1];
            lVar21 = FUN_142e219b0();
            goto joined_r0x0001407d171d;
          }
        }
      }
      FUN_1407cec60(param_1,param_3);
      *param_2 = 0;
      param_2[1] = 0;
      FUN_142c63c50(local_a18);
      return param_2;
    }
  }
  FUN_1407cec60(param_1,param_3);
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
joined_r0x0001407d171d:
  if (lVar18 == 0) goto LAB_1407d1732;
  if (lVar18 == lVar21) {
    bVar15 = true;
    goto LAB_1407d1734;
  }
  lVar18 = *(longlong *)(lVar18 + 0x30);
  goto joined_r0x0001407d171d;
LAB_1407d1732:
  bVar15 = false;
LAB_1407d1734:
  if (bVar15) {
    plVar32 = local_fd8;
  }
  if (plVar32 != (longlong *)0x0) {
    plVar22 = (longlong *)FUN_142c6f8e0(plVar32,1);
  }
LAB_1407d1751:
  if (((plVar20 == (longlong *)0x0) || (plVar32 == (longlong *)0x0)) || (plVar22 == (longlong *)0x0)
     ) {
    FUN_1407cec60(param_1,param_3);
    goto LAB_1407d4cd1;
  }
  lVar18 = plVar32[2];
  local_fd8 = (longlong *)lVar18;
  if (lVar18 != 0) {
    lVar21 = UEnvQueryTest_Random::StaticClass();
    if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar21 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) + (longlong)*(int *)(lVar21 + 0x90) * 8
         ) != lVar21 + 0x88)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (bVar15) {
      puVar23 = (undefined8 *)
                FUN_142c625b0(local_3e8,&DAT_14685c1b8,*(undefined8 *)(param_1 + 0x118));
      iVar29 = local_9f0;
      local_fe0 = local_9f0;
      local_9f0 = local_9f0 + 1;
      if (local_9ec < local_9f0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_9f8,iVar29);
      }
      uVar28 = puVar23[1];
      local_1018[0] = 0;
      puVar31 = (undefined8 *)((longlong)local_fe0 * 0x38 + local_9f8);
      *puVar31 = *puVar23;
      puVar31[1] = uVar28;
      uVar28 = puVar23[3];
      puVar31[2] = puVar23[2];
      puVar31[3] = uVar28;
      uVar28 = puVar23[5];
      puVar31[4] = puVar23[4];
      puVar31[5] = uVar28;
      puVar31[6] = puVar23[6];
      lVar18 = FUN_1407b9e50(plVar22,local_1018);
      if (lVar18 == 0) {
        plVar30 = *(longlong **)(param_1 + 0x118);
        local_a80 = FUN_142e27720();
        lVar18 = (**(code **)(*plVar30 + 0x628))(plVar30,local_a80);
        if ((lVar18 != 0) &&
           (FUN_142c7bae0(lVar18,local_a78,*(undefined8 *)((longlong)local_fd8 + 0x1a8)),
           local_a70 != (longlong *)0x0)) {
          LOCK();
          plVar30 = local_a70 + 1;
          lVar18 = *plVar30;
          *(int *)plVar30 = (int)*plVar30 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*local_a70)(local_a70);
            LOCK();
            piVar1 = (int *)((longlong)local_a70 + 0xc);
            iVar29 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar29 == 1) {
              (**(code **)(*local_a70 + 8))(local_a70,1);
            }
          }
        }
      }
    }
  }
  plVar30 = plVar20;
  pfVar24 = (float *)FUN_14238d0c0(plVar20,local_188);
  auVar56 = *(undefined1 (*) [16])(pfVar24 + 8);
  fVar66 = auVar56._0_4_;
  fVar69 = auVar56._4_4_;
  fVar71 = auVar56._8_4_;
  fVar72 = auVar56._12_4_;
  auVar39._4_4_ = -(uint)(fRam000000014685c124 < (float)((uint)fVar69 & uRam000000014685c0f4));
  auVar39._0_4_ = -(uint)(_DAT_14685c120 < (float)((uint)fVar66 & _DAT_14685c0f0));
  auVar39._8_4_ = -(uint)(fRam000000014685c128 < (float)((uint)fVar71 & uRam000000014685c0f8));
  auVar39._12_4_ = -(uint)(fRam000000014685c12c < (float)((uint)fVar72 & uRam000000014685c0fc));
  iVar29 = movmskps((int)plVar30,auVar39);
  if (iVar29 == 0) {
    local_fc8 = _DAT_1468b5b70;
    uStack_fc0 = uRam00000001468b5b78;
    local_fa8 = (float)_DAT_1468b5b90;
    fStack_fa4 = (float)((ulonglong)_DAT_1468b5b90 >> 0x20);
    fStack_fa0 = (float)uRam00000001468b5b98;
    fStack_f9c = (float)((ulonglong)uRam00000001468b5b98 >> 0x20);
    uStack_fb0 = uRam00000001468b5b88;
    local_fb8 = (undefined1  [8])_DAT_1468b5b80;
  }
  else {
    fVar73 = *pfVar24 * _DAT_14685c130;
    fVar74 = pfVar24[1] * fRam000000014685c134;
    fVar75 = pfVar24[2] * fRam000000014685c138;
    fVar76 = pfVar24[3] * fRam000000014685c13c;
    auVar56 = rcpps(in_XMM2,auVar56);
    fVar55 = auVar56._0_4_;
    fVar57 = auVar56._4_4_;
    fVar59 = auVar56._8_4_;
    fVar61 = auVar56._12_4_;
    fVar55 = (fVar55 + fVar55) - fVar66 * fVar55 * fVar55;
    fVar57 = (fVar57 + fVar57) - fVar69 * fVar57 * fVar57;
    fVar59 = (fVar59 + fVar59) - fVar71 * fVar59 * fVar59;
    fVar61 = (fVar61 + fVar61) - fVar72 * fVar61 * fVar61;
    local_fc8 = CONCAT44(fVar74,fVar73);
    uStack_fc0 = CONCAT44(fVar76,fVar75);
    fVar55 = (fVar55 + fVar55) - fVar66 * fVar55 * fVar55;
    fVar57 = (fVar57 + fVar57) - fVar69 * fVar57 * fVar57;
    fVar59 = (fVar59 + fVar59) - fVar71 * fVar59 * fVar59;
    fVar61 = (fVar61 + fVar61) - fVar72 * fVar61 * fVar61;
    local_fa8 = (float)(((uint)fVar55 &
                         -(uint)((float)((uint)fVar66 & _DAT_14685c0f0) <= _DAT_14685c120) ^
                        (uint)fVar55) & _DAT_14685c0e0);
    fStack_fa4 = (float)(((uint)fVar57 &
                          -(uint)((float)((uint)fVar69 & uRam000000014685c0f4) <=
                                 fRam000000014685c124) ^ (uint)fVar57) & uRam000000014685c0e4);
    fStack_fa0 = (float)(((uint)fVar59 &
                          -(uint)((float)((uint)fVar71 & uRam000000014685c0f8) <=
                                 fRam000000014685c128) ^ (uint)fVar59) & uRam000000014685c0e8);
    fStack_f9c = (float)(((uint)fVar61 &
                          -(uint)((float)((uint)fVar72 & uRam000000014685c0fc) <=
                                 fRam000000014685c12c) ^ (uint)fVar61) & uRam000000014685c0ec);
    fVar66 = pfVar24[4] * local_fa8;
    fVar69 = pfVar24[5] * fStack_fa4;
    fVar71 = pfVar24[6] * fStack_fa0;
    fVar72 = pfVar24[7] * fStack_f9c;
    fVar55 = fVar71 * fVar74 - fVar69 * fVar75;
    fVar57 = fVar66 * fVar75 - fVar71 * fVar73;
    fVar59 = fVar69 * fVar73 - fVar66 * fVar74;
    fVar61 = fVar72 * fVar76 - fVar72 * fVar76;
    fVar55 = fVar55 + fVar55;
    fVar57 = fVar57 + fVar57;
    fVar59 = fVar59 + fVar59;
    fVar61 = fVar61 + fVar61;
    local_fb8._4_4_ =
         (uint)(0.0 - ((fVar55 * fVar75 - fVar59 * fVar73) + fVar57 * fVar76 + fVar69)) &
         uRam000000014685c0e4;
    local_fb8._0_4_ =
         (uint)(0.0 - ((fVar59 * fVar74 - fVar57 * fVar75) + fVar55 * fVar76 + fVar66)) &
         _DAT_14685c0e0;
    uStack_fb0._0_4_ =
         (float)((uint)(0.0 - ((fVar57 * fVar73 - fVar55 * fVar74) + fVar59 * fVar76 + fVar71)) &
                uRam000000014685c0e8);
    uStack_fb0._4_4_ =
         (float)((uint)(0.0 - ((fVar61 * fVar76 - fVar61 * fVar76) + fVar61 * fVar76 + fVar72)) &
                uRam000000014685c0ec);
  }
  plVar30 = (longlong *)plVar32[2];
  local_1018[0] = 0;
  if (plVar30 == (longlong *)0x0) {
LAB_1407d1a7c:
    plVar30 = (longlong *)0x0;
    local_fd8 = (longlong *)0x0;
  }
  else {
    local_fd8 = plVar30;
    lVar18 = UThrobber::GetPrivateStaticClass();
    if ((*(int *)(plVar30[2] + 0x90) < *(int *)(lVar18 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar30[2] + 0x88) + (longlong)*(int *)(lVar18 + 0x90) * 8) !=
        lVar18 + 0x88)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (!bVar15) goto LAB_1407d1a7c;
  }
  if (*(char *)((longlong)plVar30 + 0x17e) == '\0') {
    lVar18 = FUN_142e5c1e0();
    if ((*(int *)(plVar20[2] + 0x90) < *(int *)(lVar18 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar20[2] + 0x88) + (longlong)*(int *)(lVar18 + 0x90) * 8) !=
        lVar18 + 0x88)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (bVar15) {
      local_1018[0] = (undefined1)plVar20[0x1e6];
      FUN_142c97c50(plVar20,0);
      local_b7c = local_fa8;
      local_b78 = fStack_fa4;
      local_b74 = fStack_fa0;
      if (1e-08 < ABS(local_fa8)) {
        fVar66 = 1.0 / local_fa8;
      }
      else {
        fVar66 = 0.0;
      }
      if (1e-08 < ABS(fStack_fa4)) {
        fVar69 = 1.0 / fStack_fa4;
      }
      else {
        fVar69 = 0.0;
      }
      if (1e-08 < ABS(fStack_fa0)) {
        fVar71 = 1.0 / fStack_fa0;
      }
      else {
        fVar71 = 0.0;
      }
      uVar17 = FRotator::Quaternion(&DAT_1468b5da0,&local_a68);
      fVar57 = fRam000000014685c0d8;
      fVar55 = fRam000000014685c0d4;
      fVar72 = _DAT_14685c0d0;
      auVar8._4_4_ = fStack_fa4;
      auVar8._0_4_ = local_fa8;
      auVar8._8_4_ = fStack_fa0;
      auVar8._12_4_ = fStack_f9c;
      auVar56._4_4_ = fVar69;
      auVar56._0_4_ = fVar66;
      auVar56._8_4_ = fVar71;
      auVar56._12_4_ = 0;
      auVar56 = minps(auVar8,auVar56);
      local_828 = local_a68;
      fStack_824 = fStack_a64;
      fStack_820 = fStack_a60;
      fStack_81c = fStack_a5c;
      auVar33._4_4_ = -(uint)(auVar56._4_4_ < fRam000000014685c1a4);
      auVar33._0_4_ = -(uint)(auVar56._0_4_ < _DAT_14685c1a0);
      auVar33._8_4_ = -(uint)(auVar56._8_4_ < fRam000000014685c1a8);
      auVar33._12_4_ = -(uint)(auVar56._12_4_ < fRam000000014685c1ac);
      iVar29 = movmskps(uVar17,auVar33);
      local_818._4_4_ = DAT_1468b5d94;
      local_818._0_4_ = DAT_1468b5d90;
      local_818._8_4_ = DAT_1468b5d98;
      local_818._12_4_ = 0;
      local_808._4_4_ = fVar69;
      local_808._0_4_ = fVar66;
      local_808._8_4_ = fVar71;
      local_808._12_4_ = 0;
      if (iVar29 == 0) {
        fVar57 = local_a68 * local_fc8._4_4_;
        fVar59 = local_a68 * (float)local_fc8;
        fVar72 = fStack_a64 * (float)local_fc8;
        fVar55 = fStack_a64 * local_fc8._4_4_;
        local_fa8 = local_fa8 * fVar66;
        fStack_fa4 = fStack_fa4 * fVar69;
        fStack_fa0 = fStack_fa0 * fVar71;
        fStack_f9c = fStack_f9c * 0.0;
        fVar66 = fVar66 * (float)local_fb8._0_4_;
        fVar69 = fVar69 * (float)local_fb8._4_4_;
        fVar71 = fVar71 * (float)uStack_fb0;
        uStack_fb0._4_4_ = uStack_fb0._4_4_ * 0.0;
        local_fc8 = CONCAT44(local_fc8._4_4_ * fStack_a5c +
                             local_a68 * (float)uStack_fc0 * fRam000000014685c164 +
                             fStack_a64 * uStack_fc0._4_4_ * fRam000000014685c154 +
                             fStack_a60 * (float)local_fc8 * fRam000000014685c144,
                             (float)local_fc8 * fStack_a5c +
                             local_a68 * uStack_fc0._4_4_ * _DAT_14685c160 +
                             fStack_a64 * (float)uStack_fc0 * _DAT_14685c150 +
                             fStack_a60 * local_fc8._4_4_ * _DAT_14685c140);
        uStack_fc0 = CONCAT44(uStack_fc0._4_4_ * fStack_a5c + fVar59 * fRam000000014685c16c +
                              fVar55 * fRam000000014685c15c +
                              fStack_a60 * (float)uStack_fc0 * fRam000000014685c14c,
                              (float)uStack_fc0 * fStack_a5c + fVar57 * fRam000000014685c168 +
                              fVar72 * fRam000000014685c158 +
                              fStack_a60 * uStack_fc0._4_4_ * fRam000000014685c148);
        fVar72 = fVar71 * fStack_a64 - fVar69 * fStack_a60;
        fVar55 = fVar66 * fStack_a60 - fVar71 * local_a68;
        fVar57 = fVar69 * local_a68 - fVar66 * fStack_a64;
        fVar59 = uStack_fb0._4_4_ * fStack_a5c - uStack_fb0._4_4_ * fStack_a5c;
        fVar72 = fVar72 + fVar72;
        fVar55 = fVar55 + fVar55;
        fVar57 = fVar57 + fVar57;
        fVar59 = fVar59 + fVar59;
        local_fb8._4_4_ =
             DAT_1468b5d94 +
             (fVar72 * fStack_a60 - fVar57 * local_a68) + fVar69 + fVar55 * fStack_a5c;
        local_fb8._0_4_ =
             DAT_1468b5d90 +
             (fVar57 * fStack_a64 - fVar55 * fStack_a60) + fVar66 + fVar72 * fStack_a5c;
        uStack_fb0._0_4_ =
             DAT_1468b5d98 +
             (fVar55 * local_a68 - fVar72 * fStack_a64) + fVar71 + fVar57 * fStack_a5c;
        uStack_fb0._4_4_ =
             (fVar59 * fStack_a5c - fVar59 * fStack_a5c) + uStack_fb0._4_4_ + fVar59 * fStack_a5c +
             0.0;
      }
      else {
        fVar61 = fStack_a64 + fStack_a64;
        fVar73 = fStack_a60 + fStack_a60;
        fVar74 = fVar66 * local_fa8;
        fVar75 = fVar69 * fStack_fa4;
        fVar76 = fVar71 * fStack_fa0;
        fVar77 = fStack_f9c * 0.0;
        fVar59 = local_a68 * (local_a68 + local_a68);
        local_7f8 = (float)((uint)(fVar66 * (_DAT_14685c0d0 -
                                            (fStack_a60 * fVar73 + fStack_a64 * fVar61))) &
                           _DAT_14685c0e0);
        fStack_7e4 = (float)((uint)(fVar69 * (fRam000000014685c0d4 - (fStack_a60 * fVar73 + fVar59))
                                   ) & uRam000000014685c0e4);
        fStack_7d0 = (float)((uint)(fVar71 * (fRam000000014685c0d8 - (fStack_a64 * fVar61 + fVar59))
                                   ) & uRam000000014685c0e8);
        fStack_7ec = (float)((uint)((fRam000000014685c0dc - (fVar59 + fVar59)) * 0.0) &
                            uRam000000014685c0ec);
        fVar59 = (local_a68 + local_a68) * fStack_a5c;
        fStack_7f4 = fVar66 * (fVar73 * fStack_a5c + fVar61 * local_a68);
        fStack_7e0 = fVar69 * (fVar59 + fVar73 * fStack_a64);
        local_7d8 = fVar71 * (fVar61 * fStack_a5c + fVar73 * local_a68);
        local_7e8 = (fVar61 * local_a68 - fVar73 * fStack_a5c) * fVar69;
        fStack_7d4 = (fVar73 * fStack_a64 - fVar59) * fVar71;
        fStack_7f0 = (fVar73 * local_a68 - fVar61 * fStack_a5c) * fVar66;
        fVar69 = local_fc8._4_4_ + local_fc8._4_4_;
        fVar71 = (float)uStack_fc0 + (float)uStack_fc0;
        fVar66 = (float)local_fc8 * ((float)local_fc8 + (float)local_fc8);
        local_7c8 = DAT_1468b5d90;
        fStack_7c4 = DAT_1468b5d94;
        fStack_7c0 = DAT_1468b5d98;
        fStack_7bc = fRam000000014685c0dc;
        local_7b8 = (float)((uint)(local_fa8 *
                                  (_DAT_14685c0d0 -
                                  ((float)uStack_fc0 * fVar71 + local_fc8._4_4_ * fVar69))) &
                           _DAT_14685c0e0);
        fStack_7a4 = (float)((uint)(fStack_fa4 *
                                   (fRam000000014685c0d4 - ((float)uStack_fc0 * fVar71 + fVar66))) &
                            uRam000000014685c0e4);
        fStack_790 = (float)((uint)(fStack_fa0 *
                                   (fRam000000014685c0d8 - (local_fc8._4_4_ * fVar69 + fVar66))) &
                            uRam000000014685c0e8);
        fStack_7ac = (float)((uint)(fStack_f9c * (fRam000000014685c0dc - (fVar66 + fVar66))) &
                            uRam000000014685c0ec);
        fVar66 = ((float)local_fc8 + (float)local_fc8) * uStack_fc0._4_4_;
        fStack_7b4 = local_fa8 * (fVar71 * uStack_fc0._4_4_ + fVar69 * (float)local_fc8);
        fStack_7a0 = fStack_fa4 * (fVar66 + fVar71 * local_fc8._4_4_);
        local_798 = fStack_fa0 * (fVar69 * uStack_fc0._4_4_ + fVar71 * (float)local_fc8);
        local_7a8 = (fVar69 * (float)local_fc8 - fVar71 * uStack_fc0._4_4_) * fStack_fa4;
        fStack_794 = (fVar71 * local_fc8._4_4_ - fVar66) * fStack_fa0;
        fStack_7b0 = (fVar71 * (float)local_fc8 - fVar69 * uStack_fc0._4_4_) * local_fa8;
        local_788 = (float)local_fb8._0_4_;
        fStack_784 = (float)local_fb8._4_4_;
        fStack_780 = (float)uStack_fb0;
        fStack_77c = fRam000000014685c0dc;
        local_f48 = local_7b8 * local_7f8 + fStack_7b4 * local_7e8 + fStack_7b0 * local_7d8 +
                    fStack_7ac * DAT_1468b5d90;
        fStack_f44 = local_7b8 * fStack_7f4 + fStack_7b4 * fStack_7e4 + fStack_7b0 * fStack_7d4 +
                     fStack_7ac * DAT_1468b5d94;
        fStack_f40 = local_7b8 * fStack_7f0 + fStack_7b4 * fStack_7e0 + fStack_7b0 * fStack_7d0 +
                     fStack_7ac * DAT_1468b5d98;
        fStack_f3c = local_7b8 * fStack_7ec + fStack_7b4 * fStack_7ec + fStack_7b0 * fStack_7ec +
                     fStack_7ac * fRam000000014685c0dc;
        local_f38 = local_7a8 * local_7f8 + fStack_7a4 * local_7e8 + fStack_7a0 * local_7d8 +
                    fStack_7ac * DAT_1468b5d90;
        fStack_f34 = local_7a8 * fStack_7f4 + fStack_7a4 * fStack_7e4 + fStack_7a0 * fStack_7d4 +
                     fStack_7ac * DAT_1468b5d94;
        fStack_f30 = local_7a8 * fStack_7f0 + fStack_7a4 * fStack_7e0 + fStack_7a0 * fStack_7d0 +
                     fStack_7ac * DAT_1468b5d98;
        fStack_f2c = local_7a8 * fStack_7ec + fStack_7a4 * fStack_7ec + fStack_7a0 * fStack_7ec +
                     fStack_7ac * fRam000000014685c0dc;
        local_f28 = local_798 * local_7f8 + fStack_794 * local_7e8 + fStack_790 * local_7d8 +
                    fStack_7ac * DAT_1468b5d90;
        fStack_f24 = local_798 * fStack_7f4 + fStack_794 * fStack_7e4 + fStack_790 * fStack_7d4 +
                     fStack_7ac * DAT_1468b5d94;
        fStack_f20 = local_798 * fStack_7f0 + fStack_794 * fStack_7e0 + fStack_790 * fStack_7d0 +
                     fStack_7ac * DAT_1468b5d98;
        fStack_f1c = local_798 * fStack_7ec + fStack_794 * fStack_7ec + fStack_790 * fStack_7ec +
                     fStack_7ac * fRam000000014685c0dc;
        local_f18 = fRam000000014685c0dc * DAT_1468b5d90 +
                    (float)local_fb8._0_4_ * local_7f8 + (float)local_fb8._4_4_ * local_7e8 +
                    (float)uStack_fb0 * local_7d8;
        fStack_f14 = fRam000000014685c0dc * DAT_1468b5d94 +
                     (float)local_fb8._0_4_ * fStack_7f4 + (float)local_fb8._4_4_ * fStack_7e4 +
                     (float)uStack_fb0 * fStack_7d4;
        fStack_f10 = fRam000000014685c0dc * DAT_1468b5d98 +
                     (float)local_fb8._0_4_ * fStack_7f0 + (float)local_fb8._4_4_ * fStack_7e0 +
                     (float)uStack_fb0 * fStack_7d0;
        fStack_f0c = fRam000000014685c0dc * fRam000000014685c0dc +
                     (float)local_fb8._0_4_ * fStack_7ec + (float)local_fb8._4_4_ * fStack_7ec +
                     (float)uStack_fb0 * fStack_7ec;
        fStack_7dc = fStack_7ec;
        fStack_7cc = fStack_7ec;
        fStack_79c = fStack_7ac;
        fStack_78c = fStack_7ac;
        FMatrix::RemoveScaling(&local_f48);
        local_b60 = local_f48;
        local_b58 = fStack_f40;
        local_b70 = (float)((_DAT_14685c190 ^ (uint)fVar72) & -(uint)(_DAT_14685c1a0 <= fVar74) ^
                           _DAT_14685c190);
        local_b6c = (float)((uRam000000014685c194 ^ (uint)fVar55) &
                            -(uint)(fRam000000014685c1a4 <= fVar75) ^ uRam000000014685c194);
        local_b68 = (float)((uRam000000014685c198 ^ (uint)fVar57) &
                            -(uint)(fRam000000014685c1a8 <= fVar76) ^ uRam000000014685c198);
        local_b5c = fStack_f44;
        fStack_f40 = fStack_f40 * local_b70;
        fStack_f44 = fStack_f44 * local_b70;
        local_f48 = local_f48 * local_b70;
        local_b54 = local_f38;
        local_b50 = fStack_f34;
        local_b4c = fStack_f30;
        fStack_f30 = fStack_f30 * local_b6c;
        fStack_f34 = fStack_f34 * local_b6c;
        local_f38 = local_f38 * local_b6c;
        local_b48 = local_f28;
        local_b44 = fStack_f24;
        local_b40 = fStack_f20;
        fStack_f20 = fStack_f20 * local_b68;
        fStack_f24 = fStack_f24 * local_b68;
        local_f28 = local_f28 * local_b68;
        FQuat::FQuat(&local_f98,&local_f48);
        local_fe0 = 0x322bcc77;
        auVar46._0_4_ = local_f98 * local_f98 + fStack_f90 * fStack_f90;
        auVar46._4_4_ = fStack_f94 * fStack_f94 + fStack_f8c * fStack_f8c;
        auVar46._8_4_ = fStack_f90 * fStack_f90 + local_f98 * local_f98;
        auVar46._12_4_ = fStack_f8c * fStack_f8c + fStack_f94 * fStack_f94;
        auVar34._0_4_ = auVar46._4_4_ + auVar46._0_4_;
        auVar34._4_4_ = auVar46._8_4_ + auVar46._4_4_;
        auVar34._8_4_ = auVar46._12_4_ + auVar46._8_4_;
        auVar34._12_4_ = auVar46._0_4_ + auVar46._12_4_;
        auVar56 = rsqrtps(auVar46,auVar34);
        fVar66 = auVar56._0_4_;
        fVar69 = auVar56._4_4_;
        fVar71 = auVar56._8_4_;
        fVar72 = auVar56._12_4_;
        fVar66 = (_DAT_14685c180 - fVar66 * fVar66 * auVar34._0_4_ * _DAT_14685c180) * fVar66 +
                 fVar66;
        fVar69 = (fRam000000014685c184 - fVar69 * fVar69 * auVar34._4_4_ * fRam000000014685c184) *
                 fVar69 + fVar69;
        fVar71 = (fRam000000014685c188 - fVar71 * fVar71 * auVar34._8_4_ * fRam000000014685c188) *
                 fVar71 + fVar71;
        fVar72 = (fRam000000014685c18c - fVar72 * fVar72 * auVar34._12_4_ * fRam000000014685c18c) *
                 fVar72 + fVar72;
        local_fb8._4_4_ = fStack_f14;
        local_fb8._0_4_ = local_f18;
        uStack_fb0._0_4_ = fStack_f10;
        local_fc8 = CONCAT44(((uint)(fStack_f94 *
                                    ((fRam000000014685c184 -
                                     fVar69 * fVar69 * auVar34._4_4_ * fRam000000014685c184) *
                                     fVar69 + fVar69)) ^ uRam000000014685c174) &
                             -(uint)(1e-08 <= auVar34._4_4_) ^ uRam000000014685c174,
                             ((uint)(local_f98 *
                                    ((_DAT_14685c180 -
                                     fVar66 * fVar66 * auVar34._0_4_ * _DAT_14685c180) * fVar66 +
                                    fVar66)) ^ _DAT_14685c170) & -(uint)(1e-08 <= auVar34._0_4_) ^
                             _DAT_14685c170);
        uStack_fc0 = CONCAT44(((uint)(fStack_f8c *
                                     ((fRam000000014685c18c -
                                      fVar72 * fVar72 * auVar34._12_4_ * fRam000000014685c18c) *
                                      fVar72 + fVar72)) ^ uRam000000014685c17c) &
                              -(uint)(1e-08 <= auVar34._12_4_) ^ uRam000000014685c17c,
                              ((uint)(fStack_f90 *
                                     ((fRam000000014685c188 -
                                      fVar71 * fVar71 * auVar34._8_4_ * fRam000000014685c188) *
                                      fVar71 + fVar71)) ^ uRam000000014685c178) &
                              -(uint)(1e-08 <= auVar34._8_4_) ^ uRam000000014685c178);
        uStack_fb0._4_4_ = 0.0;
        local_fa8 = fVar74;
        fStack_fa4 = fVar75;
        fStack_fa0 = fVar76;
        fStack_f9c = fVar77;
      }
    }
  }
  fVar66 = (float)uStack_fb0;
  local_d44 = local_fb8._4_4_;
  uVar17 = 0;
  local_d48 = local_fb8._0_4_;
  local_288 = (float)((uint)_DAT_14685c0d0 & _DAT_14685c0e0);
  fStack_284 = (float)((uint)fRam000000014685c0d4 & uRam000000014685c0e4);
  fStack_280 = (float)((uint)fRam000000014685c0d8 & uRam000000014685c0e8);
  fStack_27c = (float)((uint)fRam000000014685c0dc & uRam000000014685c0ec);
  local_278 = 0;
  uStack_270 = (ulonglong)(uint)fRam000000014685c0dc << 0x20;
  local_2a8 = 0;
  uStack_2a0 = (ulonglong)(uint)fRam000000014685c0dc << 0x20;
  local_d40 = (float)uStack_fb0;
  local_268 = 0;
  uStack_260 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_258 = local_288;
  fStack_254 = fStack_284;
  fStack_250 = fStack_280;
  fStack_24c = fStack_27c;
  cVar16 = FUN_1407baa60(0);
  plVar30 = plVar22;
  if (cVar16 == '\0') {
    plVar30 = (longlong *)0x0;
    cVar16 = FUN_1407baa10(plVar22);
    if (((cVar16 != '\0') && (0 < (int)plVar22[0x30])) && (0 < *(int *)(plVar22[0x2f] + 0x10))) {
      local_db8 = (undefined8 *)0x0;
      local_db0 = 0;
      FUN_142250530(plVar22[0x2f] + 8,&local_db8);
      if (0 < (int)local_db0) {
        plVar30 = (longlong *)*local_db8;
        uVar17 = *(undefined4 *)(local_db8 + 1);
      }
      if (local_db8 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      if (plVar30 != (longlong *)0x0) goto LAB_1407d222c;
    }
  }
  else {
LAB_1407d222c:
    puVar23 = (undefined8 *)FUN_142291ab0(plVar30,local_1b8);
    local_1028 = local_1028 & 0xffffffffffffff00;
    local_278 = *puVar23;
    uStack_270 = puVar23[1];
    local_268 = puVar23[2];
    uStack_260 = puVar23[3];
    local_258 = (float)puVar23[4];
    fStack_254 = (float)((ulonglong)puVar23[4] >> 0x20);
    fStack_250 = (float)puVar23[5];
    fStack_24c = (float)((ulonglong)puVar23[5] >> 0x20);
    FUN_1422950d0(plVar30,&local_2a8,0,uVar17);
  }
  if ((*(char *)(param_1 + 0x8e8) == '\0') || (cVar16 = FUN_142ca37d0(plVar22), cVar16 == '\0')) {
    uVar17 = (**(code **)(*plVar22 + 0x2e8))(plVar22);
    fVar71 = fRam000000014685c1a8;
    fVar69 = fRam000000014685c1a4;
    fVar66 = _DAT_14685c1a0;
    if ((char)uVar17 != '\0') {
      auVar11._4_4_ = fStack_fa4;
      auVar11._0_4_ = local_fa8;
      auVar11._8_4_ = fStack_fa0;
      auVar11._12_4_ = fStack_f9c;
      auVar13._4_4_ = fStack_284;
      auVar13._0_4_ = local_288;
      auVar13._8_4_ = fStack_280;
      auVar13._12_4_ = fStack_27c;
      local_b28 = 0.0;
      fStack_b24 = 0.0;
      fStack_b20 = 0.0;
      fStack_b1c = fRam000000014685c0dc;
      auVar56 = minps(auVar11,auVar13);
      local_b18 = 0;
      uStack_b10 = 0;
      auVar43._4_4_ = -(uint)(auVar56._4_4_ < fRam000000014685c1a4);
      auVar43._0_4_ = -(uint)(auVar56._0_4_ < _DAT_14685c1a0);
      auVar43._8_4_ = -(uint)(auVar56._8_4_ < fRam000000014685c1a8);
      auVar43._12_4_ = -(uint)(auVar56._12_4_ < fRam000000014685c1ac);
      iVar29 = movmskps(uVar17,auVar43);
      local_b08 = (float)((uint)_DAT_14685c0d0 & _DAT_14685c0e0);
      fStack_b04 = (float)((uint)fRam000000014685c0d4 & uRam000000014685c0e4);
      fStack_b00 = (float)((uint)fRam000000014685c0d8 & uRam000000014685c0e8);
      fStack_afc = (float)((uint)fRam000000014685c0dc & uRam000000014685c0ec);
      if (iVar29 == 0) {
        fVar66 = (float)local_fb8._0_4_ * local_288;
        fVar69 = (float)local_fb8._4_4_ * fStack_284;
        fVar59 = (float)uStack_fb0 * fStack_280;
        fVar61 = uStack_fb0._4_4_ * fStack_27c;
        local_f98 = local_fa8 * local_288;
        fStack_f94 = fStack_fa4 * fStack_284;
        fStack_f90 = fStack_fa0 * fStack_280;
        fStack_f8c = fStack_f9c * fStack_27c;
        local_b28 = uStack_fc0._4_4_ * (float)local_2a8 * _DAT_14685c160 +
                    (float)local_fc8 * uStack_2a0._4_4_ +
                    (float)uStack_fc0 * local_2a8._4_4_ * _DAT_14685c150 +
                    local_fc8._4_4_ * (float)uStack_2a0 * _DAT_14685c140;
        fStack_b24 = (float)uStack_fc0 * (float)local_2a8 * fRam000000014685c164 +
                     local_fc8._4_4_ * uStack_2a0._4_4_ +
                     uStack_fc0._4_4_ * local_2a8._4_4_ * fRam000000014685c154 +
                     (float)local_fc8 * (float)uStack_2a0 * fRam000000014685c144;
        fStack_b20 = local_fc8._4_4_ * (float)local_2a8 * fRam000000014685c168 +
                     (float)uStack_fc0 * uStack_2a0._4_4_ +
                     (float)local_fc8 * local_2a8._4_4_ * fRam000000014685c158 +
                     uStack_fc0._4_4_ * (float)uStack_2a0 * fRam000000014685c148;
        fStack_b1c = (float)local_fc8 * (float)local_2a8 * fRam000000014685c16c +
                     uStack_fc0._4_4_ * uStack_2a0._4_4_ +
                     local_fc8._4_4_ * local_2a8._4_4_ * fRam000000014685c15c +
                     (float)uStack_fc0 * (float)uStack_2a0 * fRam000000014685c14c;
        fVar71 = fVar59 * local_2a8._4_4_ - fVar69 * (float)uStack_2a0;
        fVar72 = fVar66 * (float)uStack_2a0 - fVar59 * (float)local_2a8;
        fVar55 = fVar69 * (float)local_2a8 - fVar66 * local_2a8._4_4_;
        fVar57 = fVar61 * uStack_2a0._4_4_ - fVar61 * uStack_2a0._4_4_;
        fVar71 = fVar71 + fVar71;
        fVar72 = fVar72 + fVar72;
        fVar55 = fVar55 + fVar55;
        fVar57 = fVar57 + fVar57;
        fVar66 = (fVar55 * local_2a8._4_4_ - fVar72 * (float)uStack_2a0) +
                 uStack_2a0._4_4_ * fVar71 + fVar66 + (float)local_298;
        fVar69 = (fVar71 * (float)uStack_2a0 - fVar55 * (float)local_2a8) +
                 uStack_2a0._4_4_ * fVar72 + fVar69 + local_298._4_4_;
        fVar71 = (fVar72 * (float)local_2a8 - fVar71 * local_2a8._4_4_) +
                 uStack_2a0._4_4_ * fVar55 + fVar59 + (float)uStack_290;
        fVar72 = (fVar57 * uStack_2a0._4_4_ - fVar57 * uStack_2a0._4_4_) +
                 uStack_2a0._4_4_ * fVar57 + fVar61 + uStack_290._4_4_;
        uVar17 = 0;
      }
      else {
        fVar72 = local_2a8._4_4_ + local_2a8._4_4_;
        fVar55 = (float)uStack_2a0 + (float)uStack_2a0;
        fVar61 = local_fa8 * local_288;
        fVar73 = fStack_fa4 * fStack_284;
        fVar74 = fStack_fa0 * fStack_280;
        fStack_f8c = fStack_f9c * fStack_27c;
        fVar59 = ((float)local_2a8 + (float)local_2a8) * (float)local_2a8;
        fVar57 = uStack_2a0._4_4_ * ((float)local_2a8 + (float)local_2a8);
        fStack_634 = (uStack_2a0._4_4_ * fVar55 + (float)local_2a8 * fVar72) * local_288;
        fStack_620 = (fVar57 + local_2a8._4_4_ * fVar55) * fStack_284;
        local_618 = (uStack_2a0._4_4_ * fVar72 + (float)local_2a8 * fVar55) * fStack_280;
        local_628 = fStack_284 * ((float)local_2a8 * fVar72 - uStack_2a0._4_4_ * fVar55);
        fStack_614 = fStack_280 * (local_2a8._4_4_ * fVar55 - fVar57);
        fStack_630 = local_288 * ((float)local_2a8 * fVar55 - uStack_2a0._4_4_ * fVar72);
        local_638 = (float)((uint)((_DAT_14685c0d0 -
                                   (fVar55 * (float)uStack_2a0 + fVar72 * local_2a8._4_4_)) *
                                  local_288) & _DAT_14685c0e0);
        fStack_624 = (float)((uint)((fRam000000014685c0d4 - (fVar55 * (float)uStack_2a0 + fVar59)) *
                                   fStack_284) & uRam000000014685c0e4);
        fStack_610 = (float)((uint)((fRam000000014685c0d8 - (fVar72 * local_2a8._4_4_ + fVar59)) *
                                   fStack_280) & uRam000000014685c0e8);
        fStack_62c = (float)((uint)((fRam000000014685c0dc - (fVar59 + fVar59)) * fStack_27c) &
                            uRam000000014685c0ec);
        fVar72 = local_fc8._4_4_ + local_fc8._4_4_;
        fVar55 = (float)uStack_fc0 + (float)uStack_fc0;
        fVar59 = (float)local_fc8 * ((float)local_fc8 + (float)local_fc8);
        fVar57 = uStack_fc0._4_4_ * ((float)local_fc8 + (float)local_fc8);
        local_608 = (float)local_298;
        fStack_604 = local_298._4_4_;
        fStack_600 = (float)uStack_290;
        fStack_5fc = fRam000000014685c0dc;
        fStack_5f4 = (uStack_fc0._4_4_ * fVar55 + (float)local_fc8 * fVar72) * local_fa8;
        fStack_5e0 = (fVar57 + local_fc8._4_4_ * fVar55) * fStack_fa4;
        local_5d8 = (uStack_fc0._4_4_ * fVar72 + (float)local_fc8 * fVar55) * fStack_fa0;
        local_5e8 = fStack_fa4 * ((float)local_fc8 * fVar72 - uStack_fc0._4_4_ * fVar55);
        fStack_5d4 = fStack_fa0 * (local_fc8._4_4_ * fVar55 - fVar57);
        fStack_5f0 = local_fa8 * ((float)local_fc8 * fVar55 - uStack_fc0._4_4_ * fVar72);
        local_5f8 = (float)((uint)((_DAT_14685c0d0 -
                                   ((float)uStack_fc0 * fVar55 + local_fc8._4_4_ * fVar72)) *
                                  local_fa8) & _DAT_14685c0e0);
        fStack_5e4 = (float)((uint)((fRam000000014685c0d4 - ((float)uStack_fc0 * fVar55 + fVar59)) *
                                   fStack_fa4) & uRam000000014685c0e4);
        fStack_5d0 = (float)((uint)((fRam000000014685c0d8 - (local_fc8._4_4_ * fVar72 + fVar59)) *
                                   fStack_fa0) & uRam000000014685c0e8);
        fStack_5ec = (float)((uint)((fRam000000014685c0dc - (fVar59 + fVar59)) * fStack_f9c) &
                            uRam000000014685c0ec);
        local_5c8 = (float)local_fb8._0_4_;
        fStack_5c4 = (float)local_fb8._4_4_;
        fStack_5c0 = (float)uStack_fb0;
        fStack_5bc = fRam000000014685c0dc;
        local_de8 = fStack_5e4 * local_628 + local_5e8 * local_638 + fStack_5e0 * local_618 +
                    fStack_5ec * (float)local_298;
        fStack_de4 = fStack_5e4 * fStack_624 + local_5e8 * fStack_634 + fStack_5e0 * fStack_614 +
                     fStack_5ec * local_298._4_4_;
        fStack_de0 = fStack_5e4 * fStack_620 + local_5e8 * fStack_630 + fStack_5e0 * fStack_610 +
                     fStack_5ec * (float)uStack_290;
        fStack_ddc = fStack_5e4 * fStack_62c + local_5e8 * fStack_62c + fStack_5e0 * fStack_62c +
                     fStack_5ec * fRam000000014685c0dc;
        local_dd8 = fStack_5d4 * local_628 + local_5d8 * local_638 + fStack_5d0 * local_618 +
                    fStack_5ec * (float)local_298;
        fStack_dd4 = fStack_5d4 * fStack_624 + local_5d8 * fStack_634 + fStack_5d0 * fStack_614 +
                     fStack_5ec * local_298._4_4_;
        fStack_dd0 = fStack_5d4 * fStack_620 + local_5d8 * fStack_630 + fStack_5d0 * fStack_610 +
                     fStack_5ec * (float)uStack_290;
        fStack_dcc = fStack_5d4 * fStack_62c + local_5d8 * fStack_62c + fStack_5d0 * fStack_62c +
                     fStack_5ec * fRam000000014685c0dc;
        local_dc8 = (float)local_fb8._4_4_ * local_628 + (float)local_fb8._0_4_ * local_638 +
                    (float)uStack_fb0 * local_618 + fRam000000014685c0dc * (float)local_298;
        fStack_dc4 = (float)local_fb8._4_4_ * fStack_624 + (float)local_fb8._0_4_ * fStack_634 +
                     (float)uStack_fb0 * fStack_614 + fRam000000014685c0dc * local_298._4_4_;
        fStack_dc0 = (float)local_fb8._4_4_ * fStack_620 + (float)local_fb8._0_4_ * fStack_630 +
                     (float)uStack_fb0 * fStack_610 + fRam000000014685c0dc * (float)uStack_290;
        fStack_dbc = (float)local_fb8._4_4_ * fStack_62c + (float)local_fb8._0_4_ * fStack_62c +
                     (float)uStack_fb0 * fStack_62c + fRam000000014685c0dc * fRam000000014685c0dc;
        local_df8 = fStack_5f4 * local_628 + local_5f8 * local_638 + fStack_5f0 * local_618 +
                    fStack_5ec * (float)local_298;
        fStack_df4 = fStack_5f4 * fStack_624 + local_5f8 * fStack_634 + fStack_5f0 * fStack_614 +
                     fStack_5ec * local_298._4_4_;
        fStack_df0 = fStack_5f4 * fStack_620 + local_5f8 * fStack_630 + fStack_5f0 * fStack_610 +
                     fStack_5ec * (float)uStack_290;
        fStack_dec = fStack_5f4 * fStack_62c + local_5f8 * fStack_62c + fStack_5f0 * fStack_62c +
                     fStack_5ec * fRam000000014685c0dc;
        local_f98 = fVar61;
        fStack_f94 = fVar73;
        fStack_f90 = fVar74;
        fStack_61c = fStack_62c;
        fStack_60c = fStack_62c;
        fStack_5dc = fStack_5ec;
        fStack_5cc = fStack_5ec;
        FMatrix::RemoveScaling(&local_df8);
        fVar66 = (float)(-(uint)(fVar66 <= fVar61) & (_DAT_14685c190 ^ (uint)_DAT_14685c0d0) ^
                        _DAT_14685c190);
        fVar69 = (float)(-(uint)(fVar69 <= fVar73) &
                         (uRam000000014685c194 ^ (uint)fRam000000014685c0d4) ^ uRam000000014685c194)
        ;
        fVar71 = (float)(-(uint)(fVar71 <= fVar74) &
                         (uRam000000014685c198 ^ (uint)fRam000000014685c0d8) ^ uRam000000014685c198)
        ;
        local_b98 = fVar66;
        local_b94 = fVar69;
        local_b90 = fVar71;
        pfVar24 = (float *)FMatrix::GetScaledAxis(&local_df8,local_8f4,1);
        local_df8 = fVar66 * *pfVar24;
        fStack_df4 = fVar66 * pfVar24[1];
        fStack_df0 = fVar66 * pfVar24[2];
        local_be0 = fStack_de4;
        local_bdc = fStack_de0;
        local_be4 = local_de8;
        fStack_de4 = fStack_de4 * fVar69;
        fStack_de0 = fStack_de0 * fVar69;
        local_de8 = local_de8 * fVar69;
        local_bd4 = fStack_dd4;
        local_bd0 = fStack_dd0;
        local_bd8 = local_dd8;
        fStack_dd4 = fStack_dd4 * fVar71;
        fStack_dd0 = fStack_dd0 * fVar71;
        local_dd8 = local_dd8 * fVar71;
        uVar17 = FQuat::FQuat(&local_ac8,&local_df8);
        local_f60 = 0x322bcc77;
        auVar51._0_4_ = local_ac8 * local_ac8 + fStack_ac0 * fStack_ac0;
        auVar51._4_4_ = fStack_ac4 * fStack_ac4 + fStack_abc * fStack_abc;
        auVar51._8_4_ = fStack_ac0 * fStack_ac0 + local_ac8 * local_ac8;
        auVar51._12_4_ = fStack_abc * fStack_abc + fStack_ac4 * fStack_ac4;
        fVar57 = auVar51._4_4_ + auVar51._0_4_;
        fVar59 = auVar51._8_4_ + auVar51._4_4_;
        fVar61 = auVar51._12_4_ + auVar51._8_4_;
        fVar73 = auVar51._0_4_ + auVar51._12_4_;
        auVar6._4_4_ = fVar59;
        auVar6._0_4_ = fVar57;
        auVar6._8_4_ = fVar61;
        auVar6._12_4_ = fVar73;
        auVar56 = rsqrtps(auVar51,auVar6);
        fVar66 = auVar56._0_4_;
        fVar69 = auVar56._4_4_;
        fVar71 = auVar56._8_4_;
        fVar55 = auVar56._12_4_;
        fVar66 = (_DAT_14685c180 - fVar66 * fVar66 * fVar57 * _DAT_14685c180) * fVar66 + fVar66;
        fVar69 = (fRam000000014685c184 - fVar69 * fVar69 * fVar59 * fRam000000014685c184) * fVar69 +
                 fVar69;
        fVar71 = (fRam000000014685c188 - fVar71 * fVar71 * fVar61 * fRam000000014685c188) * fVar71 +
                 fVar71;
        fVar55 = (fRam000000014685c18c - fVar55 * fVar55 * fVar73 * fRam000000014685c18c) * fVar55 +
                 fVar55;
        fVar72 = 0.0;
        local_b28 = (float)(((uint)(((_DAT_14685c180 - fVar66 * fVar66 * fVar57 * _DAT_14685c180) *
                                     fVar66 + fVar66) * local_ac8) ^ _DAT_14685c170) &
                            -(uint)(1e-08 <= fVar57) ^ _DAT_14685c170);
        fStack_b24 = (float)(((uint)(((fRam000000014685c184 -
                                      fVar69 * fVar69 * fVar59 * fRam000000014685c184) * fVar69 +
                                     fVar69) * fStack_ac4) ^ uRam000000014685c174) &
                             -(uint)(1e-08 <= fVar59) ^ uRam000000014685c174);
        fStack_b20 = (float)(((uint)(((fRam000000014685c188 -
                                      fVar71 * fVar71 * fVar61 * fRam000000014685c188) * fVar71 +
                                     fVar71) * fStack_ac0) ^ uRam000000014685c178) &
                             -(uint)(1e-08 <= fVar61) ^ uRam000000014685c178);
        fStack_b1c = (float)(((uint)(((fRam000000014685c18c -
                                      fVar55 * fVar55 * fVar73 * fRam000000014685c18c) * fVar55 +
                                     fVar55) * fStack_abc) ^ uRam000000014685c17c) &
                             -(uint)(1e-08 <= fVar73) ^ uRam000000014685c17c);
        fVar66 = local_dc8;
        fVar69 = fStack_dc4;
        fVar71 = fStack_dc0;
      }
      fVar70 = fRam000000014685c1a8;
      fVar77 = fRam000000014685c1a4;
      fVar76 = _DAT_14685c1a0;
      fVar75 = fRam000000014685c0d8;
      fVar74 = fRam000000014685c0d4;
      fVar73 = _DAT_14685c0d0;
      auVar44._4_4_ = fStack_f94;
      auVar44._0_4_ = local_f98;
      auVar44._8_4_ = fStack_f90;
      auVar44._12_4_ = fStack_f8c;
      local_b18 = CONCAT44(fVar69,fVar66);
      uStack_b10 = CONCAT44(fVar72,fVar71);
      auVar56 = *(undefined1 (*) [16])(param_1 + 0x230);
      fVar55 = auVar56._0_4_;
      fVar57 = auVar56._4_4_;
      fVar59 = auVar56._8_4_;
      fVar61 = auVar56._12_4_;
      auVar56 = minps(auVar44,auVar56);
      auVar45._4_4_ = -(uint)(auVar56._4_4_ < fRam000000014685c1a4);
      auVar45._0_4_ = -(uint)(auVar56._0_4_ < _DAT_14685c1a0);
      auVar45._8_4_ = -(uint)(auVar56._8_4_ < fRam000000014685c1a8);
      auVar45._12_4_ = -(uint)(auVar56._12_4_ < fRam000000014685c1ac);
      iVar29 = movmskps(uVar17,auVar45);
      local_b08 = local_f98;
      fStack_b04 = fStack_f94;
      fStack_b00 = fStack_f90;
      fStack_afc = fStack_f8c;
      if (iVar29 == 0) {
        fVar73 = *(float *)(param_1 + 0x210);
        fVar74 = *(float *)(param_1 + 0x214);
        fVar75 = *(float *)(param_1 + 0x218);
        fVar76 = *(float *)(param_1 + 0x21c);
        fVar66 = fVar55 * fVar66;
        fVar69 = fVar57 * fVar69;
        fVar71 = fVar59 * fVar71;
        fVar72 = fVar61 * fVar72;
        local_228._4_4_ = fVar57 * fStack_f94;
        local_228._0_4_ = fVar55 * local_f98;
        fStack_220 = fVar59 * fStack_f90;
        fStack_21c = fVar61 * fStack_f8c;
        local_248 = fVar73 * fStack_b1c * _DAT_14685c160 + fVar76 * local_b28 +
                    fVar74 * fStack_b20 * _DAT_14685c150 + fVar75 * fStack_b24 * _DAT_14685c140;
        fStack_244 = fVar73 * fStack_b20 * fRam000000014685c164 + fVar76 * fStack_b24 +
                     fVar74 * fStack_b1c * fRam000000014685c154 +
                     fVar75 * local_b28 * fRam000000014685c144;
        fStack_240 = fVar73 * fStack_b24 * fRam000000014685c168 + fVar76 * fStack_b20 +
                     fVar74 * local_b28 * fRam000000014685c158 +
                     fVar75 * fStack_b1c * fRam000000014685c148;
        fStack_23c = fVar73 * local_b28 * fRam000000014685c16c + fVar76 * fStack_b1c +
                     fVar74 * fStack_b24 * fRam000000014685c15c +
                     fVar75 * fStack_b20 * fRam000000014685c14c;
        fVar55 = fVar71 * fVar74 - fVar69 * fVar75;
        fVar57 = fVar66 * fVar75 - fVar71 * fVar73;
        fVar59 = fVar69 * fVar73 - fVar66 * fVar74;
        fVar61 = fVar72 * fVar76 - fVar72 * fVar76;
        fVar55 = fVar55 + fVar55;
        fVar57 = fVar57 + fVar57;
        fVar59 = fVar59 + fVar59;
        fVar61 = fVar61 + fVar61;
        local_238._4_4_ =
             (fVar55 * fVar75 - fVar59 * fVar73) + fVar57 * fVar76 + fVar69 +
             *(float *)(param_1 + 0x224);
        local_238._0_4_ =
             (fVar59 * fVar74 - fVar57 * fVar75) + fVar55 * fVar76 + fVar66 +
             *(float *)(param_1 + 0x220);
        fStack_230 = (fVar57 * fVar73 - fVar55 * fVar74) + fVar59 * fVar76 + fVar71 +
                     *(float *)(param_1 + 0x228);
        fStack_22c = (fVar61 * fVar76 - fVar61 * fVar76) + fVar61 * fVar76 + fVar72 +
                     *(float *)(param_1 + 0x22c);
      }
      else {
        fVar72 = *(float *)(param_1 + 0x210);
        fVar53 = *(float *)(param_1 + 0x214);
        fVar54 = *(float *)(param_1 + 0x218);
        fVar63 = *(float *)(param_1 + 0x21c);
        fVar67 = fVar53 + fVar53;
        fVar78 = fVar54 + fVar54;
        fVar81 = fVar55 * local_f98;
        fVar64 = fVar57 * fStack_f94;
        fVar65 = fVar59 * fStack_f90;
        fVar68 = fVar61 * fStack_f8c;
        fVar80 = fVar72 * (fVar72 + fVar72);
        fVar79 = fVar63 * (fVar72 + fVar72);
        fStack_5b4 = (fVar63 * fVar78 + fVar72 * fVar67) * fVar55;
        fStack_5a0 = (fVar79 + fVar53 * fVar78) * fVar57;
        local_598 = (fVar63 * fVar67 + fVar72 * fVar78) * fVar59;
        local_5a8 = fVar57 * (fVar72 * fVar67 - fVar63 * fVar78);
        fStack_594 = fVar59 * (fVar53 * fVar78 - fVar79);
        fStack_5b0 = fVar55 * (fVar72 * fVar78 - fVar63 * fVar67);
        fVar72 = fStack_b24 + fStack_b24;
        fVar63 = fStack_b20 + fStack_b20;
        local_5b8 = (float)((uint)((_DAT_14685c0d0 - (fVar54 * fVar78 + fVar53 * fVar67)) * fVar55)
                           & _DAT_14685c0e0);
        fStack_5a4 = (float)((uint)((fRam000000014685c0d4 - (fVar54 * fVar78 + fVar80)) * fVar57) &
                            uRam000000014685c0e4);
        fStack_590 = (float)((uint)((fRam000000014685c0d8 - (fVar53 * fVar67 + fVar80)) * fVar59) &
                            uRam000000014685c0e8);
        fStack_5ac = (float)((uint)((fRam000000014685c0dc - (fVar80 + fVar80)) * fVar61) &
                            uRam000000014685c0ec);
        fVar57 = (local_b28 + local_b28) * local_b28;
        local_588 = *(float *)(param_1 + 0x220);
        fStack_584 = *(float *)(param_1 + 0x224);
        fStack_580 = *(float *)(param_1 + 0x228);
        fVar55 = (local_b28 + local_b28) * fStack_b1c;
        fStack_57c = fRam000000014685c0dc;
        fStack_574 = (fVar63 * fStack_b1c + fVar72 * local_b28) * local_f98;
        fStack_560 = (fVar55 + fVar63 * fStack_b24) * fStack_f94;
        local_558 = (fVar72 * fStack_b1c + fVar63 * local_b28) * fStack_f90;
        local_568 = fStack_f94 * (fVar72 * local_b28 - fVar63 * fStack_b1c);
        fStack_554 = fStack_f90 * (fVar63 * fStack_b24 - fVar55);
        fStack_570 = local_f98 * (fVar63 * local_b28 - fVar72 * fStack_b1c);
        local_578 = (float)((uint)((_DAT_14685c0d0 - (fVar63 * fStack_b20 + fVar72 * fStack_b24)) *
                                  local_f98) & _DAT_14685c0e0);
        fStack_564 = (float)((uint)((fRam000000014685c0d4 - (fVar63 * fStack_b20 + fVar57)) *
                                   fStack_f94) & uRam000000014685c0e4);
        fStack_550 = (float)((uint)((fRam000000014685c0d8 - (fVar72 * fStack_b24 + fVar57)) *
                                   fStack_f90) & uRam000000014685c0e8);
        fStack_56c = (float)((uint)((fRam000000014685c0dc - (fVar57 + fVar57)) * fStack_f8c) &
                            uRam000000014685c0ec);
        fStack_53c = fRam000000014685c0dc;
        local_d98 = fStack_564 * local_5a8 + local_568 * local_5b8 + fStack_560 * local_598 +
                    fStack_56c * local_588;
        fStack_d94 = fStack_564 * fStack_5a4 + local_568 * fStack_5b4 + fStack_560 * fStack_594 +
                     fStack_56c * fStack_584;
        fStack_d90 = fStack_564 * fStack_5a0 + local_568 * fStack_5b0 + fStack_560 * fStack_590 +
                     fStack_56c * fStack_580;
        fStack_d8c = fStack_564 * fStack_5ac + local_568 * fStack_5ac + fStack_560 * fStack_5ac +
                     fStack_56c * fRam000000014685c0dc;
        local_d88 = fStack_554 * local_5a8 + local_558 * local_5b8 + fStack_550 * local_598 +
                    fStack_56c * local_588;
        fStack_d84 = fStack_554 * fStack_5a4 + local_558 * fStack_5b4 + fStack_550 * fStack_594 +
                     fStack_56c * fStack_584;
        fStack_d80 = fStack_554 * fStack_5a0 + local_558 * fStack_5b0 + fStack_550 * fStack_590 +
                     fStack_56c * fStack_580;
        fStack_d7c = fStack_554 * fStack_5ac + local_558 * fStack_5ac + fStack_550 * fStack_5ac +
                     fStack_56c * fRam000000014685c0dc;
        local_d78 = fVar69 * local_5a8 + fVar66 * local_5b8 + fVar71 * local_598 +
                    fRam000000014685c0dc * local_588;
        fStack_d74 = fVar69 * fStack_5a4 + fVar66 * fStack_5b4 + fVar71 * fStack_594 +
                     fRam000000014685c0dc * fStack_584;
        fStack_d70 = fVar69 * fStack_5a0 + fVar66 * fStack_5b0 + fVar71 * fStack_590 +
                     fRam000000014685c0dc * fStack_580;
        fStack_d6c = fVar69 * fStack_5ac + fVar66 * fStack_5ac + fVar71 * fStack_5ac +
                     fRam000000014685c0dc * fRam000000014685c0dc;
        local_da8 = fStack_574 * local_5a8 + local_578 * local_5b8 + fStack_570 * local_598 +
                    fStack_56c * local_588;
        fStack_da4 = fStack_574 * fStack_5a4 + local_578 * fStack_5b4 + fStack_570 * fStack_594 +
                     fStack_56c * fStack_584;
        fStack_da0 = fStack_574 * fStack_5a0 + local_578 * fStack_5b0 + fStack_570 * fStack_590 +
                     fStack_56c * fStack_580;
        fStack_d9c = fStack_574 * fStack_5ac + local_578 * fStack_5ac + fStack_570 * fStack_5ac +
                     fStack_56c * fRam000000014685c0dc;
        fStack_59c = fStack_5ac;
        fStack_58c = fStack_5ac;
        fStack_55c = fStack_56c;
        fStack_54c = fStack_56c;
        local_548 = fVar66;
        fStack_544 = fVar69;
        fStack_540 = fVar71;
        FMatrix::RemoveScaling(&local_da8);
        fVar66 = (float)(-(uint)(fVar76 <= fVar81) & (_DAT_14685c190 ^ (uint)fVar73) ^
                        _DAT_14685c190);
        fVar69 = (float)(-(uint)(fVar77 <= fVar64) & (uRam000000014685c194 ^ (uint)fVar74) ^
                        uRam000000014685c194);
        fVar71 = (float)(-(uint)(fVar70 <= fVar65) & (uRam000000014685c198 ^ (uint)fVar75) ^
                        uRam000000014685c198);
        local_bc8 = fVar66;
        local_bc4 = fVar69;
        local_bc0 = fVar71;
        pfVar24 = (float *)FMatrix::GetScaledAxis(&local_da8,local_948,1);
        local_da8 = fVar66 * *pfVar24;
        fStack_da4 = fVar66 * pfVar24[1];
        fStack_da0 = fVar66 * pfVar24[2];
        pfVar24 = (float *)FMatrix::GetScaledAxis(&local_da8,local_918,2);
        local_d98 = fVar69 * *pfVar24;
        fStack_d94 = fVar69 * pfVar24[1];
        fStack_d90 = fVar69 * pfVar24[2];
        local_bb4 = fStack_d84;
        local_bb0 = fStack_d80;
        local_bb8 = local_d88;
        fStack_d84 = fStack_d84 * fVar71;
        fStack_d80 = fStack_d80 * fVar71;
        local_d88 = local_d88 * fVar71;
        FQuat::FQuat(&local_ab8,&local_da8);
        local_f58 = 0x322bcc77;
        auVar52._0_4_ = local_ab8 * local_ab8 + fStack_ab0 * fStack_ab0;
        auVar52._4_4_ = fStack_ab4 * fStack_ab4 + fStack_aac * fStack_aac;
        auVar52._8_4_ = fStack_ab0 * fStack_ab0 + local_ab8 * local_ab8;
        auVar52._12_4_ = fStack_aac * fStack_aac + fStack_ab4 * fStack_ab4;
        fVar55 = auVar52._4_4_ + auVar52._0_4_;
        fVar57 = auVar52._8_4_ + auVar52._4_4_;
        fVar59 = auVar52._12_4_ + auVar52._8_4_;
        fVar61 = auVar52._0_4_ + auVar52._12_4_;
        auVar7._4_4_ = fVar57;
        auVar7._0_4_ = fVar55;
        auVar7._8_4_ = fVar59;
        auVar7._12_4_ = fVar61;
        auVar56 = rsqrtps(auVar52,auVar7);
        fVar66 = auVar56._0_4_;
        fVar69 = auVar56._4_4_;
        fVar71 = auVar56._8_4_;
        fVar72 = auVar56._12_4_;
        fVar66 = (_DAT_14685c180 - fVar66 * fVar66 * fVar55 * _DAT_14685c180) * fVar66 + fVar66;
        fVar69 = (fRam000000014685c184 - fVar69 * fVar69 * fVar57 * fRam000000014685c184) * fVar69 +
                 fVar69;
        fVar71 = (fRam000000014685c188 - fVar71 * fVar71 * fVar59 * fRam000000014685c188) * fVar71 +
                 fVar71;
        fVar72 = (fRam000000014685c18c - fVar72 * fVar72 * fVar61 * fRam000000014685c18c) * fVar72 +
                 fVar72;
        local_238._4_4_ = fStack_d74;
        local_238._0_4_ = local_d78;
        fStack_230 = fStack_d70;
        local_248 = (float)(((uint)(((_DAT_14685c180 - fVar66 * fVar66 * fVar55 * _DAT_14685c180) *
                                     fVar66 + fVar66) * local_ab8) ^ _DAT_14685c170) &
                            -(uint)(1e-08 <= fVar55) ^ _DAT_14685c170);
        fStack_244 = (float)(((uint)(((fRam000000014685c184 -
                                      fVar69 * fVar69 * fVar57 * fRam000000014685c184) * fVar69 +
                                     fVar69) * fStack_ab4) ^ uRam000000014685c174) &
                             -(uint)(1e-08 <= fVar57) ^ uRam000000014685c174);
        fStack_240 = (float)(((uint)(((fRam000000014685c188 -
                                      fVar71 * fVar71 * fVar59 * fRam000000014685c188) * fVar71 +
                                     fVar71) * fStack_ab0) ^ uRam000000014685c178) &
                             -(uint)(1e-08 <= fVar59) ^ uRam000000014685c178);
        fStack_23c = (float)(((uint)(((fRam000000014685c18c -
                                      fVar72 * fVar72 * fVar61 * fRam000000014685c18c) * fVar72 +
                                     fVar72) * fStack_aac) ^ uRam000000014685c17c) &
                             -(uint)(1e-08 <= fVar61) ^ uRam000000014685c17c);
        fStack_22c = 0.0;
        local_228._4_4_ = fVar64;
        local_228._0_4_ = fVar81;
        fStack_220 = fVar65;
        fStack_21c = fVar68;
      }
      pauVar25 = (undefined1 (*) [12])FUN_14222dc90(param_3,local_924);
      local_1028 = local_1028 & 0xffffffffffffff00;
      fStack_21c = 0.0;
      _local_228 = *pauVar25;
      FUN_14223d270(param_3,&local_248,0,0);
    }
  }
  else {
    local_1010 = DAT_1468b5d90;
    local_100c = DAT_1468b5d94;
    local_1008 = DAT_1468b5d98;
    local_ff8 = _DAT_1464aa810;
    uStack_ff0 = _DAT_1464aa818;
    cVar16 = (**(code **)(*plVar22 + 0x2e8))(plVar22);
    fVar59 = fRam000000014685c1a8;
    fVar57 = fRam000000014685c1a4;
    fVar55 = _DAT_14685c1a0;
    fVar72 = fRam000000014685c0d8;
    fVar71 = fRam000000014685c0d4;
    fVar69 = _DAT_14685c0d0;
    if ((cVar16 == '\0') || (bVar2 = *(byte *)(param_1 + 0x8e8), bVar2 == 3)) {
      if (*(char *)(param_1 + 0x8e8) == '\x03') {
        local_c88 = (undefined4)plVar20[0x46];
        local_c84 = *(undefined4 *)((longlong)plVar20 + 0x234);
        local_c80 = (undefined4)plVar20[0x47];
        auVar14._4_4_ = fStack_254;
        auVar14._0_4_ = local_258;
        auVar14._8_4_ = fStack_250;
        auVar14._12_4_ = fStack_24c;
        local_c78 = local_268._4_4_;
        local_c74 = (float)uStack_260;
        local_c7c = (float)local_268;
        auVar56 = *(undefined1 (*) [16])(param_1 + 0x230);
        fVar66 = auVar56._0_4_;
        fVar55 = auVar56._4_4_;
        fVar57 = auVar56._8_4_;
        auVar39 = minps(auVar14,auVar56);
        auVar40._4_4_ = -(uint)(auVar39._4_4_ < fRam000000014685c1a4);
        auVar40._0_4_ = -(uint)(auVar39._0_4_ < _DAT_14685c1a0);
        auVar40._8_4_ = -(uint)(auVar39._8_4_ < fRam000000014685c1a8);
        auVar40._12_4_ = -(uint)(auVar39._12_4_ < fRam000000014685c1ac);
        iVar29 = movmskps(3,auVar40);
        if (iVar29 == 0) {
          fVar69 = *(float *)(param_1 + 0x210);
          fVar71 = *(float *)(param_1 + 0x214);
          fVar72 = *(float *)(param_1 + 0x218);
          fVar59 = *(float *)(param_1 + 0x21c);
          fVar66 = fVar66 * (float)local_268;
          fVar55 = fVar55 * local_268._4_4_;
          fVar57 = fVar57 * (float)uStack_260;
          fVar75 = fVar59 * (float)local_278 + fVar69 * uStack_270._4_4_ * _DAT_14685c160 +
                   fVar71 * (float)uStack_270 * _DAT_14685c150 +
                   fVar72 * local_278._4_4_ * _DAT_14685c140;
          fVar76 = fVar59 * local_278._4_4_ + fVar69 * (float)uStack_270 * fRam000000014685c164 +
                   fVar71 * uStack_270._4_4_ * fRam000000014685c154 +
                   fVar72 * (float)local_278 * fRam000000014685c144;
          fVar77 = fVar59 * (float)uStack_270 + fVar69 * local_278._4_4_ * fRam000000014685c168 +
                   fVar71 * (float)local_278 * fRam000000014685c158 +
                   fVar72 * uStack_270._4_4_ * fRam000000014685c148;
          fVar70 = fVar59 * uStack_270._4_4_ + fVar69 * (float)local_278 * fRam000000014685c16c +
                   fVar71 * local_278._4_4_ * fRam000000014685c15c +
                   fVar72 * (float)uStack_270 * fRam000000014685c14c;
          fVar61 = fVar57 * fVar71 - fVar55 * fVar72;
          fVar73 = fVar66 * fVar72 - fVar57 * fVar69;
          fVar74 = fVar55 * fVar69 - fVar66 * fVar71;
          fVar61 = fVar61 + fVar61;
          fVar73 = fVar73 + fVar73;
          fVar74 = fVar74 + fVar74;
          local_1010 = (fVar74 * fVar71 - fVar73 * fVar72) + fVar66 + fVar61 * fVar59 +
                       *(float *)(param_1 + 0x220);
          local_100c = (fVar61 * fVar72 - fVar74 * fVar69) + fVar55 + fVar73 * fVar59 +
                       *(float *)(param_1 + 0x224);
          local_1008 = (fVar73 * fVar69 - fVar61 * fVar71) + fVar57 + fVar74 * fVar59 +
                       *(float *)(param_1 + 0x228);
        }
        else {
          fVar59 = *(float *)(param_1 + 0x210);
          fVar61 = *(float *)(param_1 + 0x214);
          fVar73 = *(float *)(param_1 + 0x218);
          fVar74 = *(float *)(param_1 + 0x21c);
          fVar76 = fVar61 + fVar61;
          fVar77 = fVar73 + fVar73;
          fVar53 = fVar66 * local_258;
          fVar54 = fVar55 * fStack_254;
          fVar63 = fVar57 * fStack_250;
          fVar75 = fVar59 * (fVar59 + fVar59);
          local_6b8 = (float)((uint)(fVar66 * (_DAT_14685c0d0 - (fVar73 * fVar77 + fVar61 * fVar76))
                                    ) & _DAT_14685c0e0);
          fStack_6a4 = (float)((uint)(fVar55 * (fRam000000014685c0d4 - (fVar73 * fVar77 + fVar75)))
                              & uRam000000014685c0e4);
          fStack_690 = (float)((uint)(fVar57 * (fRam000000014685c0d8 - (fVar61 * fVar76 + fVar75)))
                              & uRam000000014685c0e8);
          fStack_6ac = (float)((uint)(auVar56._12_4_ * (fRam000000014685c0dc - (fVar75 + fVar75))) &
                              uRam000000014685c0ec);
          fVar73 = (fVar59 + fVar59) * fVar74;
          fVar75 = local_278._4_4_ + local_278._4_4_;
          fVar70 = (float)uStack_270 + (float)uStack_270;
          fStack_6b4 = fVar66 * (fVar77 * fVar74 + fVar76 * fVar59);
          fStack_6a0 = fVar55 * (fVar73 + fVar77 * fVar61);
          local_698 = fVar57 * (fVar76 * fVar74 + fVar77 * fVar59);
          local_6a8 = (fVar76 * fVar59 - fVar77 * fVar74) * fVar55;
          fStack_694 = (fVar77 * fVar61 - fVar73) * fVar57;
          fStack_6b0 = (fVar77 * fVar59 - fVar76 * fVar74) * fVar66;
          fVar66 = ((float)local_278 + (float)local_278) * (float)local_278;
          local_688 = *(float *)(param_1 + 0x220);
          fStack_684 = *(float *)(param_1 + 0x224);
          fStack_680 = *(float *)(param_1 + 0x228);
          fStack_67c = fRam000000014685c0dc;
          fVar55 = ((float)local_278 + (float)local_278) * uStack_270._4_4_;
          local_678 = (float)((uint)((_DAT_14685c0d0 -
                                     (fVar70 * (float)uStack_270 + fVar75 * local_278._4_4_)) *
                                    local_258) & _DAT_14685c0e0);
          fStack_664 = (float)((uint)((fRam000000014685c0d4 - (fVar70 * (float)uStack_270 + fVar66))
                                     * fStack_254) & uRam000000014685c0e4);
          fStack_650 = (float)((uint)((fRam000000014685c0d8 - (fVar75 * local_278._4_4_ + fVar66)) *
                                     fStack_250) & uRam000000014685c0e8);
          fStack_66c = (float)((uint)((fRam000000014685c0dc - (fVar66 + fVar66)) * fStack_24c) &
                              uRam000000014685c0ec);
          fStack_674 = (fVar70 * uStack_270._4_4_ + fVar75 * (float)local_278) * local_258;
          fStack_660 = (fVar55 + fVar70 * local_278._4_4_) * fStack_254;
          local_658 = (fVar75 * uStack_270._4_4_ + fVar70 * (float)local_278) * fStack_250;
          local_668 = (fVar75 * (float)local_278 - fVar70 * uStack_270._4_4_) * fStack_254;
          fStack_654 = (fVar70 * local_278._4_4_ - fVar55) * fStack_250;
          fStack_670 = (fVar70 * (float)local_278 - fVar75 * uStack_270._4_4_) * local_258;
          local_648 = (float)local_268;
          fStack_644 = local_268._4_4_;
          fStack_640 = (float)uStack_260;
          fStack_63c = fRam000000014685c0dc;
          local_e48 = local_678 * local_6b8 + fStack_674 * local_6a8 + fStack_670 * local_698 +
                      fStack_66c * local_688;
          fStack_e44 = local_678 * fStack_6b4 + fStack_674 * fStack_6a4 + fStack_670 * fStack_694 +
                       fStack_66c * fStack_684;
          fStack_e40 = local_678 * fStack_6b0 + fStack_674 * fStack_6a0 + fStack_670 * fStack_690 +
                       fStack_66c * fStack_680;
          fStack_e3c = local_678 * fStack_6ac + fStack_674 * fStack_6ac + fStack_670 * fStack_6ac +
                       fStack_66c * fRam000000014685c0dc;
          local_e38 = local_668 * local_6b8 + fStack_664 * local_6a8 + fStack_660 * local_698 +
                      fStack_66c * local_688;
          fStack_e34 = local_668 * fStack_6b4 + fStack_664 * fStack_6a4 + fStack_660 * fStack_694 +
                       fStack_66c * fStack_684;
          fStack_e30 = local_668 * fStack_6b0 + fStack_664 * fStack_6a0 + fStack_660 * fStack_690 +
                       fStack_66c * fStack_680;
          fStack_e2c = local_668 * fStack_6ac + fStack_664 * fStack_6ac + fStack_660 * fStack_6ac +
                       fStack_66c * fRam000000014685c0dc;
          local_e28 = local_658 * local_6b8 + fStack_654 * local_6a8 + fStack_650 * local_698 +
                      fStack_66c * local_688;
          fStack_e24 = local_658 * fStack_6b4 + fStack_654 * fStack_6a4 + fStack_650 * fStack_694 +
                       fStack_66c * fStack_684;
          fStack_e20 = local_658 * fStack_6b0 + fStack_654 * fStack_6a0 + fStack_650 * fStack_690 +
                       fStack_66c * fStack_680;
          fStack_e1c = local_658 * fStack_6ac + fStack_654 * fStack_6ac + fStack_650 * fStack_6ac +
                       fStack_66c * fRam000000014685c0dc;
          local_e18 = fRam000000014685c0dc * local_688 +
                      (float)local_268 * local_6b8 + local_268._4_4_ * local_6a8 +
                      (float)uStack_260 * local_698;
          fStack_e14 = fRam000000014685c0dc * fStack_684 +
                       (float)local_268 * fStack_6b4 + local_268._4_4_ * fStack_6a4 +
                       (float)uStack_260 * fStack_694;
          fStack_e10 = fRam000000014685c0dc * fStack_680 +
                       (float)local_268 * fStack_6b0 + local_268._4_4_ * fStack_6a0 +
                       (float)uStack_260 * fStack_690;
          fStack_e0c = fRam000000014685c0dc * fRam000000014685c0dc +
                       (float)local_268 * fStack_6ac + local_268._4_4_ * fStack_6ac +
                       (float)uStack_260 * fStack_6ac;
          fStack_69c = fStack_6ac;
          fStack_68c = fStack_6ac;
          fStack_65c = fStack_66c;
          fStack_64c = fStack_66c;
          FMatrix::RemoveScaling(&local_e48);
          local_c60 = local_e48;
          local_c58 = fStack_e40;
          local_c70 = (float)((_DAT_14685c190 ^ (uint)fVar69) & -(uint)(_DAT_14685c1a0 <= fVar53) ^
                             _DAT_14685c190);
          local_c6c = (float)((uRam000000014685c194 ^ (uint)fVar71) &
                              -(uint)(fRam000000014685c1a4 <= fVar54) ^ uRam000000014685c194);
          local_c68 = (float)((uRam000000014685c198 ^ (uint)fVar72) &
                              -(uint)(fRam000000014685c1a8 <= fVar63) ^ uRam000000014685c198);
          local_c5c = fStack_e44;
          fStack_e40 = fStack_e40 * local_c70;
          fStack_e44 = fStack_e44 * local_c70;
          local_e48 = local_e48 * local_c70;
          local_c54 = local_e38;
          local_c50 = fStack_e34;
          local_c4c = fStack_e30;
          fStack_e30 = fStack_e30 * local_c6c;
          fStack_e34 = fStack_e34 * local_c6c;
          local_e38 = local_e38 * local_c6c;
          local_c48 = local_e28;
          local_c44 = fStack_e24;
          local_c40 = fStack_e20;
          fStack_e20 = fStack_e20 * local_c68;
          fStack_e24 = fStack_e24 * local_c68;
          local_e28 = local_e28 * local_c68;
          FQuat::FQuat(&local_a98,&local_e48);
          local_f70 = 0x322bcc77;
          auVar50._0_4_ = local_a98 * local_a98 + fStack_a90 * fStack_a90;
          auVar50._4_4_ = fStack_a94 * fStack_a94 + fStack_a8c * fStack_a8c;
          auVar50._8_4_ = fStack_a90 * fStack_a90 + local_a98 * local_a98;
          auVar50._12_4_ = fStack_a8c * fStack_a8c + fStack_a94 * fStack_a94;
          auVar41._0_4_ = auVar50._4_4_ + auVar50._0_4_;
          auVar41._4_4_ = auVar50._8_4_ + auVar50._4_4_;
          auVar41._8_4_ = auVar50._12_4_ + auVar50._8_4_;
          auVar41._12_4_ = auVar50._0_4_ + auVar50._12_4_;
          auVar56 = rsqrtps(auVar50,auVar41);
          fVar66 = auVar56._0_4_;
          fVar69 = auVar56._4_4_;
          fVar71 = auVar56._8_4_;
          fVar72 = auVar56._12_4_;
          fVar66 = (_DAT_14685c180 - fVar66 * fVar66 * _DAT_14685c180 * auVar41._0_4_) * fVar66 +
                   fVar66;
          fVar69 = (fRam000000014685c184 - fVar69 * fVar69 * fRam000000014685c184 * auVar41._4_4_) *
                   fVar69 + fVar69;
          fVar71 = (fRam000000014685c188 - fVar71 * fVar71 * fRam000000014685c188 * auVar41._8_4_) *
                   fVar71 + fVar71;
          fVar72 = (fRam000000014685c18c - fVar72 * fVar72 * fRam000000014685c18c * auVar41._12_4_)
                   * fVar72 + fVar72;
          fVar75 = (float)(((uint)(local_a98 *
                                  ((_DAT_14685c180 -
                                   fVar66 * fVar66 * _DAT_14685c180 * auVar41._0_4_) * fVar66 +
                                  fVar66)) ^ _DAT_14685c170) & -(uint)(1e-08 <= auVar41._0_4_) ^
                          _DAT_14685c170);
          fVar76 = (float)(((uint)(fStack_a94 *
                                  ((fRam000000014685c184 -
                                   fVar69 * fVar69 * fRam000000014685c184 * auVar41._4_4_) * fVar69
                                  + fVar69)) ^ uRam000000014685c174) &
                           -(uint)(1e-08 <= auVar41._4_4_) ^ uRam000000014685c174);
          fVar77 = (float)(((uint)(fStack_a90 *
                                  ((fRam000000014685c188 -
                                   fVar71 * fVar71 * fRam000000014685c188 * auVar41._8_4_) * fVar71
                                  + fVar71)) ^ uRam000000014685c178) &
                           -(uint)(1e-08 <= auVar41._8_4_) ^ uRam000000014685c178);
          fVar70 = (float)(((uint)(fStack_a8c *
                                  ((fRam000000014685c18c -
                                   fVar72 * fVar72 * fRam000000014685c18c * auVar41._12_4_) * fVar72
                                  + fVar72)) ^ uRam000000014685c17c) &
                           -(uint)(1e-08 <= auVar41._12_4_) ^ uRam000000014685c17c);
          local_1010 = local_e18;
          local_100c = fStack_e14;
          local_1008 = fStack_e10;
        }
        local_ff8 = CONCAT44(fVar76,fVar75);
        uStack_ff0 = CONCAT44(fVar70,fVar77);
        uVar17 = *(undefined4 *)(param_1 + 0x8ec);
        local_c3c = local_1010;
        local_c38 = local_100c;
        local_c34 = local_1008;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_14685c540) &&
           (_Init_thread_header(&DAT_14685c540), DAT_14685c540 == -1)) {
          FName::FName(&DAT_14685c538,L"SpawnTraceToGround",1);
          _Init_thread_footer(&DAT_14685c540);
        }
        local_d58[0] = 0;
        local_d58[1] = 0;
        local_1020 = local_d58;
        local_1028 = DAT_14685c538;
        FUN_142ce92e0(local_478,param_3,&local_1010,uVar17);
        if (local_d58[0] != 0) {
          FMemory::Free();
        }
        if ((local_478[0] & 1) != 0) {
          local_1008 = local_45c;
        }
      }
      else if (*(char *)(param_1 + 0x8e8) == '\x01') {
        puVar23 = (undefined8 *)(**(code **)(*plVar20 + 0xa80))(plVar20,local_128,&local_2a8);
        local_2a8 = *puVar23;
        uStack_2a0 = puVar23[1];
        local_298 = puVar23[2];
        uStack_290 = puVar23[3];
        local_288 = (float)puVar23[4];
        fStack_284 = (float)((ulonglong)puVar23[4] >> 0x20);
        fStack_280 = (float)puVar23[5];
        fStack_27c = (float)((ulonglong)puVar23[5] >> 0x20);
        puVar23 = (undefined8 *)(**(code **)(*plVar20 + 0xa80))(plVar20,local_158,&local_278);
        local_278 = *puVar23;
        uStack_270 = puVar23[1];
        local_c30 = *(float *)(puVar23 + 2);
        local_c2c = *(float *)((longlong)puVar23 + 0x14);
        local_268 = puVar23[2];
        local_c28 = *(float *)(puVar23 + 3);
        uStack_260 = puVar23[3];
        local_258 = (float)puVar23[4];
        fStack_254 = (float)((ulonglong)puVar23[4] >> 0x20);
        fStack_250 = (float)puVar23[5];
        fStack_24c = (float)((ulonglong)puVar23[5] >> 0x20);
        fVar73 = local_c28 * local_2a8._4_4_ - local_c2c * (float)uStack_2a0;
        fVar73 = fVar73 + fVar73;
        fVar57 = local_c30 * (float)uStack_2a0 - local_c28 * (float)local_2a8;
        fVar55 = local_c2c * (float)local_2a8 - local_c30 * local_2a8._4_4_;
        fVar61 = fVar73 * (float)uStack_2a0;
        fVar57 = fVar57 + fVar57;
        fVar55 = fVar55 + fVar55;
        fVar69 = fVar57 * (float)uStack_2a0;
        fVar59 = fVar57 * (float)local_2a8;
        fVar74 = fVar55 * local_2a8._4_4_;
        fVar71 = fVar55 * (float)local_2a8;
        fVar72 = fVar73 * local_2a8._4_4_;
        fVar57 = local_c2c + fVar57 * uStack_2a0._4_4_;
        fVar55 = local_c28 + fVar55 * uStack_2a0._4_4_;
        fVar73 = local_c30 + fVar73 * uStack_2a0._4_4_;
        lVar18 = FUN_1407cb7a0(param_1,local_4a8);
        auVar56 = *(undefined1 (*) [16])(lVar18 + 0x10);
        local_c24 = auVar56._0_4_;
        local_c20 = auVar56._4_4_;
        local_c1c = auVar56._8_4_;
        local_d68 = local_c24 + (fVar74 - fVar69) + fVar73;
        local_d64 = local_c20 + (fVar61 - fVar71) + fVar57;
        local_1028 = local_1028 & 0xffffffffffffff00;
        local_d60 = (fVar59 - fVar72) + fVar55 + local_c1c + fVar66;
        FUN_14223c850(param_3,&local_d68,0,0);
        local_1010 = *(float *)(param_1 + 0x220);
        local_100c = *(float *)(param_1 + 0x224);
        local_1008 = *(float *)(param_1 + 0x228);
        local_c18 = local_1010;
        local_c14 = local_100c;
        local_c10 = local_1008;
        goto LAB_1407d3e7e;
      }
    }
    else {
      if (bVar2 == 1) {
        lVar18 = param_1;
        pfVar24 = (float *)FUN_1407cb7a0(param_1,local_508);
        fVar74 = fRam000000014685c1a8;
        fVar73 = fRam000000014685c1a4;
        fVar61 = _DAT_14685c1a0;
        fVar59 = fRam000000014685c0d8;
        fVar57 = fRam000000014685c0d4;
        fVar55 = _DAT_14685c0d0;
        auVar9._4_4_ = fStack_fa4;
        auVar9._0_4_ = local_fa8;
        auVar9._8_4_ = fStack_fa0;
        auVar9._12_4_ = fStack_f9c;
        auVar56 = *(undefined1 (*) [16])(pfVar24 + 8);
        fVar66 = auVar56._0_4_;
        fVar69 = auVar56._4_4_;
        fVar71 = auVar56._8_4_;
        fVar72 = auVar56._12_4_;
        auVar56 = minps(auVar9,auVar56);
        auVar35._4_4_ = -(uint)(auVar56._4_4_ < fRam000000014685c1a4);
        auVar35._0_4_ = -(uint)(auVar56._0_4_ < _DAT_14685c1a0);
        auVar35._8_4_ = -(uint)(auVar56._8_4_ < fRam000000014685c1a8);
        auVar35._12_4_ = -(uint)(auVar56._12_4_ < fRam000000014685c1ac);
        iVar29 = movmskps((int)lVar18,auVar35);
        if (iVar29 == 0) {
          fVar55 = *pfVar24;
          fVar57 = pfVar24[1];
          fVar59 = pfVar24[2];
          fVar61 = pfVar24[3];
          fVar73 = (float)local_fb8._0_4_ * fVar66;
          fVar74 = (float)local_fb8._4_4_ * fVar69;
          fVar75 = (float)uStack_fb0 * fVar71;
          fVar76 = uStack_fb0._4_4_ * fVar72;
          local_1c8._4_4_ = fStack_fa4 * fVar69;
          local_1c8._0_4_ = local_fa8 * fVar66;
          fStack_1c0 = fStack_fa0 * fVar71;
          fStack_1bc = fStack_f9c * fVar72;
          local_1e8 = uStack_fc0._4_4_ * fVar55 * _DAT_14685c160 + (float)local_fc8 * fVar61 +
                      (float)uStack_fc0 * fVar57 * _DAT_14685c150 +
                      local_fc8._4_4_ * fVar59 * _DAT_14685c140;
          fStack_1e4 = (float)uStack_fc0 * fVar55 * fRam000000014685c164 + local_fc8._4_4_ * fVar61
                       + uStack_fc0._4_4_ * fVar57 * fRam000000014685c154 +
                       (float)local_fc8 * fVar59 * fRam000000014685c144;
          fStack_1e0 = local_fc8._4_4_ * fVar55 * fRam000000014685c168 + (float)uStack_fc0 * fVar61
                       + (float)local_fc8 * fVar57 * fRam000000014685c158 +
                       uStack_fc0._4_4_ * fVar59 * fRam000000014685c148;
          fStack_1dc = (float)local_fc8 * fVar55 * fRam000000014685c16c + uStack_fc0._4_4_ * fVar61
                       + local_fc8._4_4_ * fVar57 * fRam000000014685c15c +
                       (float)uStack_fc0 * fVar59 * fRam000000014685c14c;
          fVar66 = fVar75 * fVar57 - fVar74 * fVar59;
          fVar69 = fVar73 * fVar59 - fVar75 * fVar55;
          fVar71 = fVar74 * fVar55 - fVar73 * fVar57;
          fVar72 = fVar76 * fVar61 - fVar76 * fVar61;
          fVar66 = fVar66 + fVar66;
          fVar69 = fVar69 + fVar69;
          fVar71 = fVar71 + fVar71;
          fVar72 = fVar72 + fVar72;
          local_1d8._4_4_ =
               (fVar66 * fVar59 - fVar71 * fVar55) + fVar61 * fVar69 + fVar74 + pfVar24[5];
          local_1d8._0_4_ =
               (fVar71 * fVar57 - fVar69 * fVar59) + fVar61 * fVar66 + fVar73 + pfVar24[4];
          fStack_1d0 = (fVar69 * fVar55 - fVar66 * fVar57) + fVar61 * fVar71 + fVar75 + pfVar24[6];
          fStack_1cc = (fVar72 * fVar61 - fVar72 * fVar61) + fVar61 * fVar72 + fVar76 + pfVar24[7];
        }
        else {
          fVar75 = *pfVar24;
          fVar76 = pfVar24[1];
          fVar77 = pfVar24[2];
          fVar70 = pfVar24[3];
          fVar53 = fVar76 + fVar76;
          fVar54 = fVar77 + fVar77;
          fVar78 = local_fa8 * fVar66;
          fVar79 = fStack_fa4 * fVar69;
          fVar80 = fStack_fa0 * fVar71;
          fVar81 = fStack_f9c * fVar72;
          fVar67 = (fVar75 + fVar75) * fVar75;
          fVar63 = fVar70 * (fVar75 + fVar75);
          fStack_864 = (fVar70 * fVar54 + fVar75 * fVar53) * fVar66;
          fStack_850 = (fVar63 + fVar76 * fVar54) * fVar69;
          local_848 = (fVar70 * fVar53 + fVar75 * fVar54) * fVar71;
          local_858 = fVar69 * (fVar75 * fVar53 - fVar70 * fVar54);
          fStack_844 = fVar71 * (fVar76 * fVar54 - fVar63);
          fStack_860 = fVar66 * (fVar75 * fVar54 - fVar70 * fVar53);
          local_868 = (float)((uint)((_DAT_14685c0d0 - (fVar54 * fVar77 + fVar53 * fVar76)) * fVar66
                                    ) & _DAT_14685c0e0);
          fStack_854 = (float)((uint)((fRam000000014685c0d4 - (fVar54 * fVar77 + fVar67)) * fVar69)
                              & uRam000000014685c0e4);
          fStack_840 = (float)((uint)((fRam000000014685c0d8 - (fVar53 * fVar76 + fVar67)) * fVar71)
                              & uRam000000014685c0e8);
          fStack_85c = (float)((uint)((fRam000000014685c0dc - (fVar67 + fVar67)) * fVar72) &
                              uRam000000014685c0ec);
          fVar66 = local_fc8._4_4_ + local_fc8._4_4_;
          fVar69 = (float)uStack_fc0 + (float)uStack_fc0;
          local_838 = pfVar24[4];
          fStack_834 = pfVar24[5];
          fStack_830 = pfVar24[6];
          fVar72 = (float)local_fc8 * ((float)local_fc8 + (float)local_fc8);
          fVar71 = uStack_fc0._4_4_ * ((float)local_fc8 + (float)local_fc8);
          fStack_82c = fRam000000014685c0dc;
          fStack_8a4 = (uStack_fc0._4_4_ * fVar69 + (float)local_fc8 * fVar66) * local_fa8;
          fStack_890 = (fVar71 + local_fc8._4_4_ * fVar69) * fStack_fa4;
          local_888 = (uStack_fc0._4_4_ * fVar66 + (float)local_fc8 * fVar69) * fStack_fa0;
          local_898 = fStack_fa4 * ((float)local_fc8 * fVar66 - uStack_fc0._4_4_ * fVar69);
          fStack_884 = fStack_fa0 * (local_fc8._4_4_ * fVar69 - fVar71);
          fStack_8a0 = local_fa8 * ((float)local_fc8 * fVar69 - uStack_fc0._4_4_ * fVar66);
          local_8a8 = (float)((uint)((_DAT_14685c0d0 -
                                     ((float)uStack_fc0 * fVar69 + local_fc8._4_4_ * fVar66)) *
                                    local_fa8) & _DAT_14685c0e0);
          fStack_894 = (float)((uint)((fRam000000014685c0d4 - ((float)uStack_fc0 * fVar69 + fVar72))
                                     * fStack_fa4) & uRam000000014685c0e4);
          fStack_880 = (float)((uint)((fRam000000014685c0d8 - (local_fc8._4_4_ * fVar66 + fVar72)) *
                                     fStack_fa0) & uRam000000014685c0e8);
          fStack_89c = (float)((uint)((fRam000000014685c0dc - (fVar72 + fVar72)) * fStack_f9c) &
                              uRam000000014685c0ec);
          local_878 = (float)local_fb8._0_4_;
          fStack_874 = (float)local_fb8._4_4_;
          fStack_870 = (float)uStack_fb0;
          fStack_86c = fRam000000014685c0dc;
          local_ef8 = fStack_894 * local_858 + local_898 * local_868 + fStack_890 * local_848 +
                      fStack_89c * local_838;
          fStack_ef4 = fStack_894 * fStack_854 + local_898 * fStack_864 + fStack_890 * fStack_844 +
                       fStack_89c * fStack_834;
          fStack_ef0 = fStack_894 * fStack_850 + local_898 * fStack_860 + fStack_890 * fStack_840 +
                       fStack_89c * fStack_830;
          fStack_eec = fStack_894 * fStack_85c + local_898 * fStack_85c + fStack_890 * fStack_85c +
                       fStack_89c * fRam000000014685c0dc;
          local_ed8 = (float)local_fb8._4_4_ * local_858 + (float)local_fb8._0_4_ * local_868 +
                      (float)uStack_fb0 * local_848 + fRam000000014685c0dc * local_838;
          fStack_ed4 = (float)local_fb8._4_4_ * fStack_854 + (float)local_fb8._0_4_ * fStack_864 +
                       (float)uStack_fb0 * fStack_844 + fRam000000014685c0dc * fStack_834;
          fStack_ed0 = (float)local_fb8._4_4_ * fStack_850 + (float)local_fb8._0_4_ * fStack_860 +
                       (float)uStack_fb0 * fStack_840 + fRam000000014685c0dc * fStack_830;
          fStack_ecc = (float)local_fb8._4_4_ * fStack_85c + (float)local_fb8._0_4_ * fStack_85c +
                       (float)uStack_fb0 * fStack_85c + fRam000000014685c0dc * fRam000000014685c0dc;
          local_ee8 = fStack_884 * local_858 + local_888 * local_868 + fStack_880 * local_848 +
                      fStack_89c * local_838;
          fStack_ee4 = fStack_884 * fStack_854 + local_888 * fStack_864 + fStack_880 * fStack_844 +
                       fStack_89c * fStack_834;
          fStack_ee0 = fStack_884 * fStack_850 + local_888 * fStack_860 + fStack_880 * fStack_840 +
                       fStack_89c * fStack_830;
          fStack_edc = fStack_884 * fStack_85c + local_888 * fStack_85c + fStack_880 * fStack_85c +
                       fStack_89c * fRam000000014685c0dc;
          local_f08 = fStack_8a4 * local_858 + local_8a8 * local_868 + fStack_8a0 * local_848 +
                      fStack_89c * local_838;
          fStack_f04 = fStack_8a4 * fStack_854 + local_8a8 * fStack_864 + fStack_8a0 * fStack_844 +
                       fStack_89c * fStack_834;
          fStack_f00 = fStack_8a4 * fStack_850 + local_8a8 * fStack_860 + fStack_8a0 * fStack_840 +
                       fStack_89c * fStack_830;
          fStack_efc = fStack_8a4 * fStack_85c + local_8a8 * fStack_85c + fStack_8a0 * fStack_85c +
                       fStack_89c * fRam000000014685c0dc;
          fStack_88c = fStack_89c;
          fStack_87c = fStack_89c;
          fStack_84c = fStack_85c;
          fStack_83c = fStack_85c;
          FMatrix::RemoveScaling(&local_f08);
          local_d28 = local_f08;
          local_d24 = fStack_f04;
          local_d38 = (float)(-(uint)(fVar61 <= fVar78) & (_DAT_14685c190 ^ (uint)fVar55) ^
                             _DAT_14685c190);
          local_d34 = (float)(-(uint)(fVar73 <= fVar79) & (uRam000000014685c194 ^ (uint)fVar57) ^
                             uRam000000014685c194);
          local_d30 = (float)(-(uint)(fVar74 <= fVar80) & (uRam000000014685c198 ^ (uint)fVar59) ^
                             uRam000000014685c198);
          local_d20 = fStack_f00;
          local_f08 = local_f08 * local_d38;
          fStack_f04 = fStack_f04 * local_d38;
          fStack_f00 = fStack_f00 * local_d38;
          local_d1c = local_ef8;
          local_d18 = fStack_ef4;
          local_d14 = fStack_ef0;
          local_ef8 = local_ef8 * local_d34;
          fStack_ef4 = fStack_ef4 * local_d34;
          fStack_ef0 = fStack_ef0 * local_d34;
          local_d10 = local_ee8;
          local_d0c = fStack_ee4;
          local_d08 = fStack_ee0;
          local_ee8 = local_ee8 * local_d30;
          fStack_ee4 = fStack_ee4 * local_d30;
          fStack_ee0 = fStack_ee0 * local_d30;
          FQuat::FQuat(&local_a58,&local_f08);
          local_f88 = 0x322bcc77;
          auVar47._0_4_ = local_a58 * local_a58 + fStack_a50 * fStack_a50;
          auVar47._4_4_ = fStack_a54 * fStack_a54 + fStack_a4c * fStack_a4c;
          auVar47._8_4_ = fStack_a50 * fStack_a50 + local_a58 * local_a58;
          auVar47._12_4_ = fStack_a4c * fStack_a4c + fStack_a54 * fStack_a54;
          fVar55 = auVar47._4_4_ + auVar47._0_4_;
          fVar57 = auVar47._8_4_ + auVar47._4_4_;
          fVar59 = auVar47._12_4_ + auVar47._8_4_;
          fVar61 = auVar47._0_4_ + auVar47._12_4_;
          auVar3._4_4_ = fVar57;
          auVar3._0_4_ = fVar55;
          auVar3._8_4_ = fVar59;
          auVar3._12_4_ = fVar61;
          auVar56 = rsqrtps(auVar47,auVar3);
          fVar66 = auVar56._0_4_;
          fVar69 = auVar56._4_4_;
          fVar71 = auVar56._8_4_;
          fVar72 = auVar56._12_4_;
          fVar66 = (_DAT_14685c180 - fVar66 * fVar66 * fVar55 * _DAT_14685c180) * fVar66 + fVar66;
          fVar69 = (fRam000000014685c184 - fVar69 * fVar69 * fVar57 * fRam000000014685c184) * fVar69
                   + fVar69;
          fVar71 = (fRam000000014685c188 - fVar71 * fVar71 * fVar59 * fRam000000014685c188) * fVar71
                   + fVar71;
          fVar72 = (fRam000000014685c18c - fVar72 * fVar72 * fVar61 * fRam000000014685c18c) * fVar72
                   + fVar72;
          local_1d8._4_4_ = fStack_ed4;
          local_1d8._0_4_ = local_ed8;
          fStack_1d0 = fStack_ed0;
          local_1e8 = (float)(((uint)(((_DAT_14685c180 - fVar66 * fVar66 * fVar55 * _DAT_14685c180)
                                       * fVar66 + fVar66) * local_a58) ^ _DAT_14685c170) &
                              -(uint)(1e-08 <= fVar55) ^ _DAT_14685c170);
          fStack_1e4 = (float)(((uint)(((fRam000000014685c184 -
                                        fVar69 * fVar69 * fVar57 * fRam000000014685c184) * fVar69 +
                                       fVar69) * fStack_a54) ^ uRam000000014685c174) &
                               -(uint)(1e-08 <= fVar57) ^ uRam000000014685c174);
          fStack_1e0 = (float)(((uint)(((fRam000000014685c188 -
                                        fVar71 * fVar71 * fVar59 * fRam000000014685c188) * fVar71 +
                                       fVar71) * fStack_a50) ^ uRam000000014685c178) &
                               -(uint)(1e-08 <= fVar59) ^ uRam000000014685c178);
          fStack_1dc = (float)(((uint)(((fRam000000014685c18c -
                                        fVar72 * fVar72 * fVar61 * fRam000000014685c18c) * fVar72 +
                                       fVar72) * fStack_a4c) ^ uRam000000014685c17c) &
                               -(uint)(1e-08 <= fVar61) ^ uRam000000014685c17c);
          fStack_1cc = 0.0;
          local_1c8._4_4_ = fVar79;
          local_1c8._0_4_ = fVar78;
          fStack_1c0 = fVar80;
          fStack_1bc = fVar81;
        }
        pauVar25 = (undefined1 (*) [12])FUN_14222dc90(param_3,local_90c);
        local_1028 = local_1028 & 0xffffffffffffff00;
        fStack_1bc = 0.0;
        _local_1c8 = *pauVar25;
        FUN_14223d270(param_3,&local_1e8,0,0);
        local_1010 = *(float *)(param_1 + 0x220);
        local_100c = *(float *)(param_1 + 0x224);
        local_1008 = *(float *)(param_1 + 0x228);
        local_b88 = local_1010;
        local_b84 = local_100c;
        local_b80 = local_1008;
LAB_1407d3e7e:
        uVar17 = *(undefined4 *)(param_1 + 0x210);
        uVar58 = *(undefined4 *)(param_1 + 0x214);
        uVar60 = *(undefined4 *)(param_1 + 0x218);
        uVar62 = *(undefined4 *)(param_1 + 0x21c);
      }
      else {
        auVar10._4_4_ = fStack_fa4;
        auVar10._0_4_ = local_fa8;
        auVar10._8_4_ = fStack_fa0;
        auVar10._12_4_ = fStack_f9c;
        auVar12._4_4_ = fStack_284;
        auVar12._0_4_ = local_288;
        auVar12._8_4_ = fStack_280;
        auVar12._12_4_ = fStack_27c;
        local_af8 = 0.0;
        fStack_af4 = 0.0;
        fStack_af0 = 0.0;
        fStack_aec = fRam000000014685c0dc;
        auVar56 = minps(auVar10,auVar12);
        local_ae8 = 0;
        uStack_ae0 = 0;
        auVar36._4_4_ = -(uint)(auVar56._4_4_ < fRam000000014685c1a4);
        auVar36._0_4_ = -(uint)(auVar56._0_4_ < _DAT_14685c1a0);
        auVar36._8_4_ = -(uint)(auVar56._8_4_ < fRam000000014685c1a8);
        auVar36._12_4_ = -(uint)(auVar56._12_4_ < fRam000000014685c1ac);
        iVar29 = movmskps((uint)bVar2,auVar36);
        local_ad8 = (float)((uint)_DAT_14685c0d0 & _DAT_14685c0e0);
        fStack_ad4 = (float)((uint)fRam000000014685c0d4 & uRam000000014685c0e4);
        fStack_ad0 = (float)((uint)fRam000000014685c0d8 & uRam000000014685c0e8);
        fStack_acc = (float)((uint)fRam000000014685c0dc & uRam000000014685c0ec);
        if (iVar29 == 0) {
          fVar55 = (float)local_fb8._0_4_ * local_288;
          fVar57 = (float)local_fb8._4_4_ * fStack_284;
          fVar75 = (float)uStack_fb0 * fStack_280;
          fVar76 = uStack_fb0._4_4_ * fStack_27c;
          fVar66 = local_fa8 * local_288;
          fVar69 = fStack_fa4 * fStack_284;
          fVar71 = fStack_fa0 * fStack_280;
          fVar72 = fStack_f9c * fStack_27c;
          local_af8 = uStack_fc0._4_4_ * (float)local_2a8 * _DAT_14685c160 +
                      (float)local_fc8 * uStack_2a0._4_4_ +
                      (float)uStack_fc0 * local_2a8._4_4_ * _DAT_14685c150 +
                      local_fc8._4_4_ * (float)uStack_2a0 * _DAT_14685c140;
          fStack_af4 = (float)uStack_fc0 * (float)local_2a8 * fRam000000014685c164 +
                       local_fc8._4_4_ * uStack_2a0._4_4_ +
                       uStack_fc0._4_4_ * local_2a8._4_4_ * fRam000000014685c154 +
                       (float)local_fc8 * (float)uStack_2a0 * fRam000000014685c144;
          fStack_af0 = local_fc8._4_4_ * (float)local_2a8 * fRam000000014685c168 +
                       (float)uStack_fc0 * uStack_2a0._4_4_ +
                       (float)local_fc8 * local_2a8._4_4_ * fRam000000014685c158 +
                       uStack_fc0._4_4_ * (float)uStack_2a0 * fRam000000014685c148;
          fStack_aec = (float)local_fc8 * (float)local_2a8 * fRam000000014685c16c +
                       uStack_fc0._4_4_ * uStack_2a0._4_4_ +
                       local_fc8._4_4_ * local_2a8._4_4_ * fRam000000014685c15c +
                       (float)uStack_fc0 * (float)uStack_2a0 * fRam000000014685c14c;
          fVar59 = fVar75 * local_2a8._4_4_ - fVar57 * (float)uStack_2a0;
          fVar61 = fVar55 * (float)uStack_2a0 - fVar75 * (float)local_2a8;
          fVar73 = fVar57 * (float)local_2a8 - fVar55 * local_2a8._4_4_;
          fVar74 = fVar76 * uStack_2a0._4_4_ - fVar76 * uStack_2a0._4_4_;
          fVar59 = fVar59 + fVar59;
          fVar61 = fVar61 + fVar61;
          fVar73 = fVar73 + fVar73;
          fVar74 = fVar74 + fVar74;
          fVar55 = (fVar73 * local_2a8._4_4_ - fVar61 * (float)uStack_2a0) +
                   fVar59 * uStack_2a0._4_4_ + fVar55 + (float)local_298;
          fVar57 = (fVar59 * (float)uStack_2a0 - fVar73 * (float)local_2a8) +
                   fVar61 * uStack_2a0._4_4_ + fVar57 + local_298._4_4_;
          fVar59 = (fVar61 * (float)local_2a8 - fVar59 * local_2a8._4_4_) +
                   fVar73 * uStack_2a0._4_4_ + fVar75 + (float)uStack_290;
          fVar61 = (fVar74 * uStack_2a0._4_4_ - fVar74 * uStack_2a0._4_4_) +
                   fVar74 * uStack_2a0._4_4_ + fVar76 + uStack_290._4_4_;
          uVar17 = 0;
          local_f98 = fVar66;
          fStack_f94 = fVar69;
          fStack_f90 = fVar71;
          fStack_f8c = fVar72;
        }
        else {
          fVar66 = local_2a8._4_4_ + local_2a8._4_4_;
          fVar71 = (float)uStack_2a0 + (float)uStack_2a0;
          local_f98 = local_fa8 * local_288;
          fStack_f94 = fStack_fa4 * fStack_284;
          fStack_f90 = fStack_fa0 * fStack_280;
          fStack_f8c = fStack_f9c * fStack_27c;
          fVar72 = ((float)local_2a8 + (float)local_2a8) * (float)local_2a8;
          fVar69 = ((float)local_2a8 + (float)local_2a8) * uStack_2a0._4_4_;
          fStack_8e4 = (fVar71 * uStack_2a0._4_4_ + fVar66 * (float)local_2a8) * local_288;
          fStack_8d0 = (fVar69 + fVar71 * local_2a8._4_4_) * fStack_284;
          local_8c8 = (fVar66 * uStack_2a0._4_4_ + fVar71 * (float)local_2a8) * fStack_280;
          local_8d8 = fStack_284 * (fVar66 * (float)local_2a8 - fVar71 * uStack_2a0._4_4_);
          fStack_8c4 = fStack_280 * (fVar71 * local_2a8._4_4_ - fVar69);
          fStack_8e0 = local_288 * (fVar71 * (float)local_2a8 - fVar66 * uStack_2a0._4_4_);
          local_8e8 = (float)((uint)((_DAT_14685c0d0 -
                                     (fVar71 * (float)uStack_2a0 + fVar66 * local_2a8._4_4_)) *
                                    local_288) & _DAT_14685c0e0);
          fStack_8d4 = (float)((uint)((fRam000000014685c0d4 - (fVar71 * (float)uStack_2a0 + fVar72))
                                     * fStack_284) & uRam000000014685c0e4);
          fStack_8c0 = (float)((uint)((fRam000000014685c0d8 - (fVar66 * local_2a8._4_4_ + fVar72)) *
                                     fStack_280) & uRam000000014685c0e8);
          fStack_8dc = (float)((uint)((fRam000000014685c0dc - (fVar72 + fVar72)) * fStack_27c) &
                              uRam000000014685c0ec);
          fVar66 = local_fc8._4_4_ + local_fc8._4_4_;
          fVar69 = (float)uStack_fc0 + (float)uStack_fc0;
          fVar72 = (float)local_fc8 * ((float)local_fc8 + (float)local_fc8);
          fVar71 = uStack_fc0._4_4_ * ((float)local_fc8 + (float)local_fc8);
          local_8b8 = (float)local_298;
          fStack_8b4 = local_298._4_4_;
          fStack_8b0 = (float)uStack_290;
          fStack_8ac = fRam000000014685c0dc;
          fStack_774 = (uStack_fc0._4_4_ * fVar69 + (float)local_fc8 * fVar66) * local_fa8;
          fStack_760 = (fVar71 + local_fc8._4_4_ * fVar69) * fStack_fa4;
          local_758 = (uStack_fc0._4_4_ * fVar66 + (float)local_fc8 * fVar69) * fStack_fa0;
          local_768 = fStack_fa4 * ((float)local_fc8 * fVar66 - uStack_fc0._4_4_ * fVar69);
          fStack_754 = fStack_fa0 * (local_fc8._4_4_ * fVar69 - fVar71);
          fStack_770 = local_fa8 * ((float)local_fc8 * fVar69 - uStack_fc0._4_4_ * fVar66);
          local_778 = (float)((uint)((_DAT_14685c0d0 -
                                     ((float)uStack_fc0 * fVar69 + local_fc8._4_4_ * fVar66)) *
                                    local_fa8) & _DAT_14685c0e0);
          fStack_764 = (float)((uint)((fRam000000014685c0d4 - ((float)uStack_fc0 * fVar69 + fVar72))
                                     * fStack_fa4) & uRam000000014685c0e4);
          fStack_750 = (float)((uint)((fRam000000014685c0d8 - (local_fc8._4_4_ * fVar66 + fVar72)) *
                                     fStack_fa0) & uRam000000014685c0e8);
          fStack_76c = (float)((uint)((fRam000000014685c0dc - (fVar72 + fVar72)) * fStack_f9c) &
                              uRam000000014685c0ec);
          local_748 = (float)local_fb8._0_4_;
          fStack_744 = (float)local_fb8._4_4_;
          fStack_740 = (float)uStack_fb0;
          fStack_73c = fRam000000014685c0dc;
          local_eb8 = fStack_764 * local_8d8 + local_768 * local_8e8 + fStack_760 * local_8c8 +
                      fStack_76c * (float)local_298;
          fStack_eb4 = fStack_764 * fStack_8d4 + local_768 * fStack_8e4 + fStack_760 * fStack_8c4 +
                       fStack_76c * local_298._4_4_;
          fStack_eb0 = fStack_764 * fStack_8d0 + local_768 * fStack_8e0 + fStack_760 * fStack_8c0 +
                       fStack_76c * (float)uStack_290;
          fStack_eac = fStack_764 * fStack_8dc + local_768 * fStack_8dc + fStack_760 * fStack_8dc +
                       fStack_76c * fRam000000014685c0dc;
          local_e98 = (float)local_fb8._4_4_ * local_8d8 + (float)local_fb8._0_4_ * local_8e8 +
                      (float)uStack_fb0 * local_8c8 + fRam000000014685c0dc * (float)local_298;
          fStack_e94 = (float)local_fb8._4_4_ * fStack_8d4 + (float)local_fb8._0_4_ * fStack_8e4 +
                       (float)uStack_fb0 * fStack_8c4 + fRam000000014685c0dc * local_298._4_4_;
          fStack_e90 = (float)local_fb8._4_4_ * fStack_8d0 + (float)local_fb8._0_4_ * fStack_8e0 +
                       (float)uStack_fb0 * fStack_8c0 + fRam000000014685c0dc * (float)uStack_290;
          fStack_e8c = (float)local_fb8._4_4_ * fStack_8dc + (float)local_fb8._0_4_ * fStack_8dc +
                       (float)uStack_fb0 * fStack_8dc + fRam000000014685c0dc * fRam000000014685c0dc;
          local_ea8 = fStack_754 * local_8d8 + local_758 * local_8e8 + fStack_750 * local_8c8 +
                      fStack_76c * (float)local_298;
          fStack_ea4 = fStack_754 * fStack_8d4 + local_758 * fStack_8e4 + fStack_750 * fStack_8c4 +
                       fStack_76c * local_298._4_4_;
          fStack_ea0 = fStack_754 * fStack_8d0 + local_758 * fStack_8e0 + fStack_750 * fStack_8c0 +
                       fStack_76c * (float)uStack_290;
          fStack_e9c = fStack_754 * fStack_8dc + local_758 * fStack_8dc + fStack_750 * fStack_8dc +
                       fStack_76c * fRam000000014685c0dc;
          local_ec8 = fStack_774 * local_8d8 + local_778 * local_8e8 + fStack_770 * local_8c8 +
                      fStack_76c * (float)local_298;
          fStack_ec4 = fStack_774 * fStack_8d4 + local_778 * fStack_8e4 + fStack_770 * fStack_8c4 +
                       fStack_76c * local_298._4_4_;
          fStack_ec0 = fStack_774 * fStack_8d0 + local_778 * fStack_8e0 + fStack_770 * fStack_8c0 +
                       fStack_76c * (float)uStack_290;
          fStack_ebc = fStack_774 * fStack_8dc + local_778 * fStack_8dc + fStack_770 * fStack_8dc +
                       fStack_76c * fRam000000014685c0dc;
          fStack_8cc = fStack_8dc;
          fStack_8bc = fStack_8dc;
          fStack_75c = fStack_76c;
          fStack_74c = fStack_76c;
          FMatrix::RemoveScaling(&local_ec8);
          fVar72 = fStack_f8c;
          fVar71 = fStack_f90;
          fVar69 = fStack_f94;
          fVar66 = local_f98;
          local_cf0 = local_ec8;
          local_cec = fStack_ec4;
          local_d00 = (float)(-(uint)(fVar55 <= local_f98) & (_DAT_14685c190 ^ (uint)_DAT_14685c0d0)
                             ^ _DAT_14685c190);
          local_cfc = (float)(-(uint)(fVar57 <= fStack_f94) &
                              (uRam000000014685c194 ^ (uint)fRam000000014685c0d4) ^
                             uRam000000014685c194);
          local_cf8 = (float)(-(uint)(fVar59 <= fStack_f90) &
                              (uRam000000014685c198 ^ (uint)fRam000000014685c0d8) ^
                             uRam000000014685c198);
          local_ce8 = fStack_ec0;
          local_ec8 = local_ec8 * local_d00;
          fStack_ec4 = fStack_ec4 * local_d00;
          fStack_ec0 = fStack_ec0 * local_d00;
          local_ce4 = local_eb8;
          local_ce0 = fStack_eb4;
          local_cdc = fStack_eb0;
          local_eb8 = local_eb8 * local_cfc;
          fStack_eb4 = fStack_eb4 * local_cfc;
          fStack_eb0 = fStack_eb0 * local_cfc;
          local_cd8 = local_ea8;
          local_cd4 = fStack_ea4;
          local_cd0 = fStack_ea0;
          local_ea8 = local_ea8 * local_cf8;
          fStack_ea4 = fStack_ea4 * local_cf8;
          fStack_ea0 = fStack_ea0 * local_cf8;
          uVar17 = FQuat::FQuat(&local_a48,&local_ec8);
          local_f80 = 0x322bcc77;
          auVar48._0_4_ = local_a48 * local_a48 + fStack_a40 * fStack_a40;
          auVar48._4_4_ = fStack_a44 * fStack_a44 + fStack_a3c * fStack_a3c;
          auVar48._8_4_ = fStack_a40 * fStack_a40 + local_a48 * local_a48;
          auVar48._12_4_ = fStack_a3c * fStack_a3c + fStack_a44 * fStack_a44;
          fVar74 = auVar48._4_4_ + auVar48._0_4_;
          fVar75 = auVar48._8_4_ + auVar48._4_4_;
          fVar76 = auVar48._12_4_ + auVar48._8_4_;
          fVar77 = auVar48._0_4_ + auVar48._12_4_;
          auVar4._4_4_ = fVar75;
          auVar4._0_4_ = fVar74;
          auVar4._8_4_ = fVar76;
          auVar4._12_4_ = fVar77;
          auVar56 = rsqrtps(auVar48,auVar4);
          fVar55 = auVar56._0_4_;
          fVar57 = auVar56._4_4_;
          fVar59 = auVar56._8_4_;
          fVar73 = auVar56._12_4_;
          fVar55 = (_DAT_14685c180 - fVar55 * fVar55 * fVar74 * _DAT_14685c180) * fVar55 + fVar55;
          fVar57 = (fRam000000014685c184 - fVar57 * fVar57 * fVar75 * fRam000000014685c184) * fVar57
                   + fVar57;
          fVar59 = (fRam000000014685c188 - fVar59 * fVar59 * fVar76 * fRam000000014685c188) * fVar59
                   + fVar59;
          fVar73 = (fRam000000014685c18c - fVar73 * fVar73 * fVar77 * fRam000000014685c18c) * fVar73
                   + fVar73;
          fVar61 = 0.0;
          local_af8 = (float)(((uint)(((_DAT_14685c180 - fVar55 * fVar55 * fVar74 * _DAT_14685c180)
                                       * fVar55 + fVar55) * local_a48) ^ _DAT_14685c170) &
                              -(uint)(1e-08 <= fVar74) ^ _DAT_14685c170);
          fStack_af4 = (float)(((uint)(((fRam000000014685c184 -
                                        fVar57 * fVar57 * fVar75 * fRam000000014685c184) * fVar57 +
                                       fVar57) * fStack_a44) ^ uRam000000014685c174) &
                               -(uint)(1e-08 <= fVar75) ^ uRam000000014685c174);
          fStack_af0 = (float)(((uint)(((fRam000000014685c188 -
                                        fVar59 * fVar59 * fVar76 * fRam000000014685c188) * fVar59 +
                                       fVar59) * fStack_a40) ^ uRam000000014685c178) &
                               -(uint)(1e-08 <= fVar76) ^ uRam000000014685c178);
          fStack_aec = (float)(((uint)(((fRam000000014685c18c -
                                        fVar73 * fVar73 * fVar77 * fRam000000014685c18c) * fVar73 +
                                       fVar73) * fStack_a3c) ^ uRam000000014685c17c) &
                               -(uint)(1e-08 <= fVar77) ^ uRam000000014685c17c);
          fVar55 = local_e98;
          fVar57 = fStack_e94;
          fVar59 = fStack_e90;
        }
        fVar67 = fRam000000014685c1a8;
        fVar63 = fRam000000014685c1a4;
        fVar54 = _DAT_14685c1a0;
        fVar53 = fRam000000014685c0d8;
        fVar70 = fRam000000014685c0d4;
        fVar77 = _DAT_14685c0d0;
        auVar37._4_4_ = fVar69;
        auVar37._0_4_ = fVar66;
        auVar37._8_4_ = fVar71;
        auVar37._12_4_ = fVar72;
        local_ae8 = CONCAT44(fVar57,fVar55);
        uStack_ae0 = CONCAT44(fVar61,fVar59);
        auVar56 = *(undefined1 (*) [16])(param_1 + 0x230);
        fVar73 = auVar56._0_4_;
        fVar74 = auVar56._4_4_;
        fVar75 = auVar56._8_4_;
        fVar76 = auVar56._12_4_;
        auVar56 = minps(auVar37,auVar56);
        auVar38._4_4_ = -(uint)(auVar56._4_4_ < fRam000000014685c1a4);
        auVar38._0_4_ = -(uint)(auVar56._0_4_ < _DAT_14685c1a0);
        auVar38._8_4_ = -(uint)(auVar56._8_4_ < fRam000000014685c1a8);
        auVar38._12_4_ = -(uint)(auVar56._12_4_ < fRam000000014685c1ac);
        iVar29 = movmskps(uVar17,auVar38);
        local_ad8 = fVar66;
        fStack_ad4 = fVar69;
        fStack_ad0 = fVar71;
        fStack_acc = fVar72;
        if (iVar29 == 0) {
          fVar66 = *(float *)(param_1 + 0x210);
          fVar69 = *(float *)(param_1 + 0x214);
          fVar71 = *(float *)(param_1 + 0x218);
          fVar72 = *(float *)(param_1 + 0x21c);
          fVar55 = fVar73 * fVar55;
          fVar57 = fVar74 * fVar57;
          fVar59 = fVar75 * fVar59;
          fVar61 = fVar76 * fVar61;
          local_1f8._4_4_ = fVar74 * fStack_f94;
          local_1f8._0_4_ = fVar73 * local_f98;
          fStack_1f0 = fVar75 * fStack_f90;
          fStack_1ec = fVar76 * fStack_f8c;
          local_218 = fVar66 * fStack_aec * _DAT_14685c160 + fVar72 * local_af8 +
                      fVar69 * fStack_af0 * _DAT_14685c150 + fVar71 * fStack_af4 * _DAT_14685c140;
          fStack_214 = fVar66 * fStack_af0 * fRam000000014685c164 + fVar72 * fStack_af4 +
                       fVar69 * fStack_aec * fRam000000014685c154 +
                       fVar71 * local_af8 * fRam000000014685c144;
          fStack_210 = fVar66 * fStack_af4 * fRam000000014685c168 + fVar72 * fStack_af0 +
                       fVar69 * local_af8 * fRam000000014685c158 +
                       fVar71 * fStack_aec * fRam000000014685c148;
          fStack_20c = fVar66 * local_af8 * fRam000000014685c16c + fVar72 * fStack_aec +
                       fVar69 * fStack_af4 * fRam000000014685c15c +
                       fVar71 * fStack_af0 * fRam000000014685c14c;
          fVar73 = fVar59 * fVar69 - fVar57 * fVar71;
          fVar74 = fVar55 * fVar71 - fVar59 * fVar66;
          fVar75 = fVar57 * fVar66 - fVar55 * fVar69;
          fVar76 = fVar61 * fVar72 - fVar61 * fVar72;
          fVar73 = fVar73 + fVar73;
          fVar74 = fVar74 + fVar74;
          fVar75 = fVar75 + fVar75;
          fVar76 = fVar76 + fVar76;
          local_208._4_4_ =
               (fVar73 * fVar71 - fVar75 * fVar66) + fVar72 * fVar74 + fVar57 +
               *(float *)(param_1 + 0x224);
          local_208._0_4_ =
               (fVar75 * fVar69 - fVar74 * fVar71) + fVar72 * fVar73 + fVar55 +
               *(float *)(param_1 + 0x220);
          fStack_200 = (fVar74 * fVar66 - fVar73 * fVar69) + fVar72 * fVar75 + fVar59 +
                       *(float *)(param_1 + 0x228);
          fStack_1fc = (fVar76 * fVar72 - fVar76 * fVar72) + fVar72 * fVar76 + fVar61 +
                       *(float *)(param_1 + 0x22c);
        }
        else {
          fVar61 = *(float *)(param_1 + 0x210);
          fVar78 = *(float *)(param_1 + 0x214);
          fVar79 = *(float *)(param_1 + 0x218);
          fVar80 = *(float *)(param_1 + 0x21c);
          fVar81 = fVar78 + fVar78;
          fVar65 = fVar79 + fVar79;
          fVar68 = (fVar61 + fVar61) * fVar61;
          fVar64 = (fVar61 + fVar61) * fVar80;
          fStack_734 = (fVar65 * fVar80 + fVar81 * fVar61) * fVar73;
          fStack_720 = (fVar64 + fVar65 * fVar78) * fVar74;
          local_718 = (fVar81 * fVar80 + fVar65 * fVar61) * fVar75;
          local_728 = fVar74 * (fVar81 * fVar61 - fVar65 * fVar80);
          fStack_714 = fVar75 * (fVar65 * fVar78 - fVar64);
          fStack_730 = fVar73 * (fVar65 * fVar61 - fVar81 * fVar80);
          local_738 = (float)((uint)((_DAT_14685c0d0 - (fVar65 * fVar79 + fVar81 * fVar78)) * fVar73
                                    ) & _DAT_14685c0e0);
          fStack_724 = (float)((uint)((fRam000000014685c0d4 - (fVar65 * fVar79 + fVar68)) * fVar74)
                              & uRam000000014685c0e4);
          fStack_710 = (float)((uint)((fRam000000014685c0d8 - (fVar81 * fVar78 + fVar68)) * fVar75)
                              & uRam000000014685c0e8);
          fStack_72c = (float)((uint)((fRam000000014685c0dc - (fVar68 + fVar68)) * fVar76) &
                              uRam000000014685c0ec);
          fVar61 = fStack_af4 + fStack_af4;
          fVar78 = fStack_af0 + fStack_af0;
          local_708 = *(float *)(param_1 + 0x220);
          fStack_704 = *(float *)(param_1 + 0x224);
          fStack_700 = *(float *)(param_1 + 0x228);
          fVar79 = local_af8 * (local_af8 + local_af8);
          fVar80 = fStack_aec * (local_af8 + local_af8);
          fStack_6fc = fRam000000014685c0dc;
          fStack_6f4 = (fStack_aec * fVar78 + local_af8 * fVar61) * fVar66;
          fStack_6e0 = (fVar80 + fStack_af4 * fVar78) * fVar69;
          local_6d8 = (fStack_aec * fVar61 + local_af8 * fVar78) * fVar71;
          local_6e8 = fVar69 * (local_af8 * fVar61 - fStack_aec * fVar78);
          fStack_6d4 = fVar71 * (fStack_af4 * fVar78 - fVar80);
          fStack_6f0 = fVar66 * (local_af8 * fVar78 - fStack_aec * fVar61);
          local_6f8 = (float)((uint)((_DAT_14685c0d0 - (fStack_af0 * fVar78 + fStack_af4 * fVar61))
                                    * fVar66) & _DAT_14685c0e0);
          fStack_6e4 = (float)((uint)((fRam000000014685c0d4 - (fStack_af0 * fVar78 + fVar79)) *
                                     fVar69) & uRam000000014685c0e4);
          fStack_6d0 = (float)((uint)((fRam000000014685c0d8 - (fStack_af4 * fVar61 + fVar79)) *
                                     fVar71) & uRam000000014685c0e8);
          fStack_6ec = (float)((uint)((fRam000000014685c0dc - (fVar79 + fVar79)) * fVar72) &
                              uRam000000014685c0ec);
          fStack_6bc = fRam000000014685c0dc;
          local_e78 = fStack_6e4 * local_728 + local_6e8 * local_738 + fStack_6e0 * local_718 +
                      fStack_6ec * local_708;
          fStack_e74 = fStack_6e4 * fStack_724 + local_6e8 * fStack_734 + fStack_6e0 * fStack_714 +
                       fStack_6ec * fStack_704;
          fStack_e70 = fStack_6e4 * fStack_720 + local_6e8 * fStack_730 + fStack_6e0 * fStack_710 +
                       fStack_6ec * fStack_700;
          fStack_e6c = fStack_6e4 * fStack_72c + local_6e8 * fStack_72c + fStack_6e0 * fStack_72c +
                       fStack_6ec * fRam000000014685c0dc;
          local_e68 = fStack_6d4 * local_728 + local_6d8 * local_738 + fStack_6d0 * local_718 +
                      fStack_6ec * local_708;
          fStack_e64 = fStack_6d4 * fStack_724 + local_6d8 * fStack_734 + fStack_6d0 * fStack_714 +
                       fStack_6ec * fStack_704;
          fStack_e60 = fStack_6d4 * fStack_720 + local_6d8 * fStack_730 + fStack_6d0 * fStack_710 +
                       fStack_6ec * fStack_700;
          fStack_e5c = fStack_6d4 * fStack_72c + local_6d8 * fStack_72c + fStack_6d0 * fStack_72c +
                       fStack_6ec * fRam000000014685c0dc;
          local_e58 = fVar57 * local_728 + fVar55 * local_738 + fVar59 * local_718 +
                      fRam000000014685c0dc * local_708;
          fStack_e54 = fVar57 * fStack_724 + fVar55 * fStack_734 + fVar59 * fStack_714 +
                       fRam000000014685c0dc * fStack_704;
          fStack_e50 = fVar57 * fStack_720 + fVar55 * fStack_730 + fVar59 * fStack_710 +
                       fRam000000014685c0dc * fStack_700;
          fStack_e4c = fVar57 * fStack_72c + fVar55 * fStack_72c + fVar59 * fStack_72c +
                       fRam000000014685c0dc * fRam000000014685c0dc;
          local_e88 = fStack_6f4 * local_728 + local_6f8 * local_738 + fStack_6f0 * local_718 +
                      fStack_6ec * local_708;
          fStack_e84 = fStack_6f4 * fStack_724 + local_6f8 * fStack_734 + fStack_6f0 * fStack_714 +
                       fStack_6ec * fStack_704;
          fStack_e80 = fStack_6f4 * fStack_720 + local_6f8 * fStack_730 + fStack_6f0 * fStack_710 +
                       fStack_6ec * fStack_700;
          fStack_e7c = fStack_6f4 * fStack_72c + local_6f8 * fStack_72c + fStack_6f0 * fStack_72c +
                       fStack_6ec * fRam000000014685c0dc;
          fStack_71c = fStack_72c;
          fStack_70c = fStack_72c;
          fStack_6dc = fStack_6ec;
          fStack_6cc = fStack_6ec;
          local_6c8 = fVar55;
          fStack_6c4 = fVar57;
          fStack_6c0 = fVar59;
          FMatrix::RemoveScaling(&local_e88);
          local_cb8 = local_e88;
          local_cb4 = fStack_e84;
          local_cc8 = (float)(-(uint)(fVar54 <= fVar73 * fVar66) & (_DAT_14685c190 ^ (uint)fVar77) ^
                             _DAT_14685c190);
          local_cc4 = (float)(-(uint)(fVar63 <= fVar74 * fVar69) &
                              (uRam000000014685c194 ^ (uint)fVar70) ^ uRam000000014685c194);
          local_cc0 = (float)(-(uint)(fVar67 <= fVar75 * fVar71) &
                              (uRam000000014685c198 ^ (uint)fVar53) ^ uRam000000014685c198);
          local_cb0 = fStack_e80;
          local_e88 = local_e88 * local_cc8;
          fStack_e84 = fStack_e84 * local_cc8;
          fStack_e80 = fStack_e80 * local_cc8;
          local_cac = local_e78;
          local_ca8 = fStack_e74;
          local_ca4 = fStack_e70;
          local_e78 = local_e78 * local_cc4;
          fStack_e74 = fStack_e74 * local_cc4;
          fStack_e70 = fStack_e70 * local_cc4;
          local_ca0 = local_e68;
          local_c9c = fStack_e64;
          local_c98 = fStack_e60;
          local_e68 = local_e68 * local_cc0;
          fStack_e64 = fStack_e64 * local_cc0;
          fStack_e60 = fStack_e60 * local_cc0;
          FQuat::FQuat(&local_a38,&local_e88);
          local_f78 = 0x322bcc77;
          auVar49._0_4_ = local_a38 * local_a38 + fStack_a30 * fStack_a30;
          auVar49._4_4_ = fStack_a34 * fStack_a34 + fStack_a2c * fStack_a2c;
          auVar49._8_4_ = fStack_a30 * fStack_a30 + local_a38 * local_a38;
          auVar49._12_4_ = fStack_a2c * fStack_a2c + fStack_a34 * fStack_a34;
          fVar77 = auVar49._4_4_ + auVar49._0_4_;
          fVar70 = auVar49._8_4_ + auVar49._4_4_;
          fVar53 = auVar49._12_4_ + auVar49._8_4_;
          fVar54 = auVar49._0_4_ + auVar49._12_4_;
          auVar5._4_4_ = fVar70;
          auVar5._0_4_ = fVar77;
          auVar5._8_4_ = fVar53;
          auVar5._12_4_ = fVar54;
          auVar56 = rsqrtps(auVar49,auVar5);
          fVar55 = auVar56._0_4_;
          fVar57 = auVar56._4_4_;
          fVar59 = auVar56._8_4_;
          fVar61 = auVar56._12_4_;
          fVar55 = (_DAT_14685c180 - fVar55 * fVar55 * fVar77 * _DAT_14685c180) * fVar55 + fVar55;
          fVar57 = (fRam000000014685c184 - fVar57 * fVar57 * fVar70 * fRam000000014685c184) * fVar57
                   + fVar57;
          fVar59 = (fRam000000014685c188 - fVar59 * fVar59 * fVar53 * fRam000000014685c188) * fVar59
                   + fVar59;
          fVar61 = (fRam000000014685c18c - fVar61 * fVar61 * fVar54 * fRam000000014685c18c) * fVar61
                   + fVar61;
          local_208._4_4_ = fStack_e54;
          local_208._0_4_ = local_e58;
          fStack_200 = fStack_e50;
          local_218 = (float)(((uint)(((_DAT_14685c180 - fVar55 * fVar55 * fVar77 * _DAT_14685c180)
                                       * fVar55 + fVar55) * local_a38) ^ _DAT_14685c170) &
                              -(uint)(1e-08 <= fVar77) ^ _DAT_14685c170);
          fStack_214 = (float)(((uint)(((fRam000000014685c184 -
                                        fVar57 * fVar57 * fVar70 * fRam000000014685c184) * fVar57 +
                                       fVar57) * fStack_a34) ^ uRam000000014685c174) &
                               -(uint)(1e-08 <= fVar70) ^ uRam000000014685c174);
          fStack_210 = (float)(((uint)(((fRam000000014685c188 -
                                        fVar59 * fVar59 * fVar53 * fRam000000014685c188) * fVar59 +
                                       fVar59) * fStack_a30) ^ uRam000000014685c178) &
                               -(uint)(1e-08 <= fVar53) ^ uRam000000014685c178);
          fStack_20c = (float)(((uint)(((fRam000000014685c18c -
                                        fVar61 * fVar61 * fVar54 * fRam000000014685c18c) * fVar61 +
                                       fVar61) * fStack_a2c) ^ uRam000000014685c17c) &
                               -(uint)(1e-08 <= fVar54) ^ uRam000000014685c17c);
          fStack_1fc = 0.0;
          local_1f8._4_4_ = fVar74 * fVar69;
          local_1f8._0_4_ = fVar73 * fVar66;
          fStack_1f0 = fVar75 * fVar71;
          fStack_1ec = fVar76 * fVar72;
        }
        pauVar25 = (undefined1 (*) [12])FUN_14222dc90(param_3,local_930);
        local_1028 = local_1028 & 0xffffffffffffff00;
        fStack_1ec = 0.0;
        _local_1f8 = *pauVar25;
        FUN_14223d270(param_3,&local_218,0,0);
        lVar18 = FUN_1407cb7a0(param_1,local_538);
        local_1010 = *(float *)(lVar18 + 0x10);
        local_100c = *(float *)(lVar18 + 0x14);
        local_1008 = *(float *)(lVar18 + 0x18);
        local_c94 = local_1010;
        local_c90 = local_100c;
        local_c8c = local_1008;
        puVar26 = (undefined4 *)FUN_1407cb7a0(param_1,local_4d8);
        uVar17 = *puVar26;
        uVar58 = puVar26[1];
        uVar60 = puVar26[2];
        uVar62 = puVar26[3];
      }
      local_ff8 = CONCAT44(uVar58,uVar17);
      uStack_ff0 = CONCAT44(uVar62,uVar60);
    }
    uVar17 = (**(code **)(*param_3 + 0x578))(param_3,local_be8,local_f68);
    local_1008 = local_1008 + local_f68[0];
    if (*(char *)(param_1 + 0x8f0) == '\0') {
      lVar18 = param_3[0x2d];
      if (lVar18 == 0) {
        local_bf8 = DAT_1468b5da8;
        puVar27 = &local_c00;
        local_c00 = DAT_1468b5da0;
      }
      else {
        local_a28 = *(float *)(lVar18 + 0x210);
        fStack_a24 = *(float *)(lVar18 + 0x214);
        fStack_a20 = *(float *)(lVar18 + 0x218);
        fStack_a1c = *(float *)(lVar18 + 0x21c);
        auVar42._4_4_ = -(uint)(*(float *)(lVar18 + 0x254) != fStack_a24);
        auVar42._0_4_ = -(uint)(*(float *)(lVar18 + 0x250) != local_a28);
        auVar42._8_4_ = -(uint)(*(float *)(lVar18 + 600) != fStack_a20);
        auVar42._12_4_ = -(uint)(*(float *)(lVar18 + 0x25c) != fStack_a1c);
        iVar29 = movmskps(uVar17,auVar42);
        if (iVar29 != 0) {
          *(float *)(lVar18 + 0x250) = local_a28;
          *(float *)(lVar18 + 0x254) = fStack_a24;
          *(float *)(lVar18 + 600) = fStack_a20;
          *(float *)(lVar18 + 0x25c) = fStack_a1c;
          puVar23 = (undefined8 *)FQuat::Rotator(&local_a28,local_900);
          *(undefined8 *)(lVar18 + 0x260) = *puVar23;
          *(undefined4 *)(lVar18 + 0x268) = *(undefined4 *)(puVar23 + 1);
        }
        local_c0c = *(ulonglong *)(lVar18 + 0x260);
        local_c04 = *(undefined4 *)(lVar18 + 0x268);
        puVar27 = &local_c0c;
      }
      local_bf4 = *puVar27;
      local_bec = (int)puVar27[1];
      puVar27 = &local_bf4;
    }
    else {
      puVar27 = (ulonglong *)FQuat::Rotator(&local_ff8,local_93c);
    }
    local_e08 = *puVar27 & 0xffffffff00000000;
    local_e00 = 0;
    FUN_142cac960(param_3,&local_9f8,&local_1010,&local_e08);
  }
  pfVar24 = local_ba8;
  if (local_ba8 != (float *)0x0) {
    fVar66 = (float)SScrollBox::GetScrollOffset(plVar32);
    *pfVar24 = *(float *)(plVar22 + 0x12) / (fVar66 * *(float *)((longlong)plVar22 + 0x94));
  }
  if ((*(char *)((longlong)local_fd8 + 0x17e) == '\0') &&
     (cVar16 = FUN_140771e00(plVar20), cVar16 != '\0')) {
    FUN_142c97c50(plVar20,local_1018[0]);
  }
LAB_1407d4cd1:
  puVar23 = (undefined8 *)FUN_142c625b0(local_3b0,&DAT_14685c3c8,param_1);
  iVar29 = local_9f0;
  lVar18 = (longlong)local_9f0;
  local_9f0 = local_9f0 + 1;
  if (local_9ec < local_9f0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_9f8,iVar29);
  }
  uVar28 = puVar23[1];
  lVar18 = lVar18 * 0x38;
  *(undefined8 *)(lVar18 + local_9f8) = *puVar23;
  ((undefined8 *)(lVar18 + local_9f8))[1] = uVar28;
  uVar28 = puVar23[3];
  puVar31 = (undefined8 *)(lVar18 + 0x10 + local_9f8);
  *puVar31 = puVar23[2];
  puVar31[1] = uVar28;
  uVar28 = puVar23[5];
  puVar31 = (undefined8 *)(lVar18 + 0x20 + local_9f8);
  *puVar31 = puVar23[4];
  puVar31[1] = uVar28;
  *(undefined8 *)(lVar18 + 0x30 + local_9f8) = puVar23[6];
  FUN_142c84570(local_ba0,local_fe8);
  uVar28 = FUN_1405e0fd0(local_378,local_a18);
  local_1028 = local_1028 & 0xffffffffffffff00;
  FUN_142c7bb40(local_ba0,param_2,local_fe8,uVar28);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_b38);
  FUN_142c63c50(local_a18);
  return param_2;
}



// FUNCTION 1407d4e30 PostLoad body=39 status=ok
// SIG undefined PostLoad(void)

void UMixerCustomControl::PostLoad(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((*(byte *)(param_1 + 8) & 0x30) == 0) {
    FUN_1407d6390(param_1);
    return;
  }
  return;
}



// FUNCTION 1407d4e60 FUN_1407d4e60 body=29 status=ok
// SIG undefined FUN_1407d4e60(void)

void FUN_1407d4e60(undefined8 param_1)

{
  FUN_142394430();
  FUN_1407d74d0(param_1,0);
  return;
}



// FUNCTION 1407d4e80 PostLoad body=50 status=ok
// SIG undefined PostLoad(void)

void UVectorFieldStatic::PostLoad(undefined8 param_1)

{
  char cVar1;
  
  FUN_1417931d0();
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 == '\0') {
    FUN_1407c2880(param_1);
    return;
  }
  return;
}



// FUNCTION 1407d4ec0 PostLoad body=50 status=ok
// SIG undefined PostLoad(void)

void UVectorFieldStatic::PostLoad(undefined8 param_1)

{
  char cVar1;
  
  FUN_1417931d0();
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 == '\0') {
    FUN_1407c29d0(param_1);
    return;
  }
  return;
}



// FUNCTION 1407d4f00 PostLoad body=50 status=ok
// SIG undefined PostLoad(void)

void UVectorFieldStatic::PostLoad(undefined8 param_1)

{
  char cVar1;
  
  FUN_1417931d0();
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 == '\0') {
    FUN_1407c2b20(param_1);
    return;
  }
  return;
}



// FUNCTION 1407d4f40 PostLoad body=39 status=ok
// SIG undefined PostLoad(void)

void UMixerCustomControl::PostLoad(longlong param_1)

{
  FUN_1407d4f70();
  if ((*(byte *)(param_1 + 8) & 0x30) == 0) {
    FUN_1407d6390(param_1);
    return;
  }
  return;
}



// FUNCTION 1407d4f70 FUN_1407d4f70 body=861 status=ok
// SIG undefined FUN_1407d4f70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407d4f70(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  FUN_1422384a0();
  if (((*(longlong *)(param_1 + 0x168) == 0) && (*(longlong *)(param_1 + 0x488) != 0)) &&
     (*(longlong *)(param_1 + 0x4a0) != 0)) {
    FUN_14223f010(param_1);
    lVar2 = *(longlong *)(param_1 + 0x4a0);
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x1ec);
    local_20 = *(undefined4 *)(*(longlong *)(param_1 + 0x488) + 500);
    pfVar1 = (float *)(lVar2 + 0x280);
    if (((*(float *)(lVar2 + 0x1f8) != *pfVar1) ||
        (*(float *)(lVar2 + 0x1fc) != *(float *)(lVar2 + 0x284))) ||
       (*(float *)(lVar2 + 0x200) != *(float *)(lVar2 + 0x288))) {
      local_38 = *(undefined8 *)*(undefined1 (*) [12])(lVar2 + 0x1f8);
      auVar8._12_4_ = 0;
      auVar8._0_12_ = *(undefined1 (*) [12])(lVar2 + 0x1f8);
      fVar3 = (float)DAT_14685c110;
      fVar4 = DAT_14685c110._4_4_;
      fVar5 = DAT_14685c110._8_4_;
      auVar8 = divps(auVar8,_DAT_14685c110);
      fVar11 = (float)local_38 - (float)(int)auVar8._0_4_ * fVar3;
      fVar12 = (float)((ulonglong)local_38 >> 0x20) - (float)(int)auVar8._4_4_ * fVar4;
      fVar13 = *(float *)(lVar2 + 0x200) - (float)(int)auVar8._8_4_ * fVar5;
      fVar11 = (float)(((uint)(fVar11 + fVar3) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                      (uint)(fVar11 + fVar3));
      fVar12 = (float)(((uint)(fVar12 + fVar4) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                      (uint)(fVar12 + fVar4));
      fVar13 = (float)(((uint)(fVar13 + fVar5) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                      (uint)(fVar13 + fVar5));
      uVar10 = ((uint)(fVar13 - fVar5) ^ (uint)fVar13) & -(uint)(fRam000000014685c108 < fVar13) ^
               (uint)fVar13;
      uStack_30 = CONCAT44(uStack_30._4_4_,uVar10);
      *(ulonglong *)pfVar1 =
           CONCAT44(((uint)(fVar12 - fVar4) ^ (uint)fVar12) & -(uint)(fRam000000014685c104 < fVar12)
                    ^ (uint)fVar12,
                    ((uint)(fVar11 - fVar3) ^ (uint)fVar11) & -(uint)(_DAT_14685c100 < fVar11) ^
                    (uint)fVar11);
      *(uint *)(lVar2 + 0x288) = uVar10;
      puVar7 = (undefined8 *)FRotator::Quaternion(pfVar1,local_18);
      uVar6 = puVar7[1];
      *(undefined8 *)(lVar2 + 0x270) = *puVar7;
      *(undefined8 *)(lVar2 + 0x278) = uVar6;
    }
    local_38 = *(undefined8 *)(lVar2 + 0x270);
    uStack_30 = *(undefined8 *)(lVar2 + 0x278);
    uVar14 = 0;
    FUN_142397be0(lVar2,&local_28,&local_38,0,0,0);
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x1f8);
    local_20 = *(undefined4 *)(*(longlong *)(param_1 + 0x488) + 0x200);
    FUN_142398470(*(undefined8 *)(param_1 + 0x4a0),&local_28,0,0,uVar14 & 0xffffffffffffff00);
    FUN_142399e30(*(undefined8 *)(param_1 + 0x488),*(undefined8 *)(param_1 + 0x4a0),0);
    lVar2 = *(longlong *)(param_1 + 0x488);
    local_28 = _DAT_1468b5d90;
    pfVar1 = (float *)(lVar2 + 0x280);
    local_20 = DAT_1468b5d98;
    if (((*(float *)(lVar2 + 0x1f8) != *pfVar1) ||
        (*(float *)(lVar2 + 0x1fc) != *(float *)(lVar2 + 0x284))) ||
       (*(float *)(lVar2 + 0x200) != *(float *)(lVar2 + 0x288))) {
      local_38 = *(undefined8 *)*(undefined1 (*) [12])(lVar2 + 0x1f8);
      auVar9._12_4_ = 0;
      auVar9._0_12_ = *(undefined1 (*) [12])(lVar2 + 0x1f8);
      fVar3 = (float)DAT_14685c110;
      fVar4 = DAT_14685c110._4_4_;
      fVar5 = DAT_14685c110._8_4_;
      auVar8 = divps(auVar9,_DAT_14685c110);
      fVar11 = (float)local_38 - (float)(int)auVar8._0_4_ * fVar3;
      fVar12 = (float)((ulonglong)local_38 >> 0x20) - (float)(int)auVar8._4_4_ * fVar4;
      fVar13 = *(float *)(lVar2 + 0x200) - (float)(int)auVar8._8_4_ * fVar5;
      fVar11 = (float)(((uint)(fVar11 + fVar3) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                      (uint)(fVar11 + fVar3));
      fVar12 = (float)(((uint)(fVar12 + fVar4) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                      (uint)(fVar12 + fVar4));
      fVar13 = (float)(((uint)(fVar13 + fVar5) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                      (uint)(fVar13 + fVar5));
      uVar10 = ((uint)(fVar13 - fVar5) ^ (uint)fVar13) & -(uint)(fRam000000014685c108 < fVar13) ^
               (uint)fVar13;
      uStack_30 = CONCAT44(uStack_30._4_4_,uVar10);
      *(ulonglong *)pfVar1 =
           CONCAT44(((uint)(fVar12 - fVar4) ^ (uint)fVar12) & -(uint)(fRam000000014685c104 < fVar12)
                    ^ (uint)fVar12,
                    ((uint)(fVar11 - fVar3) ^ (uint)fVar11) & -(uint)(_DAT_14685c100 < fVar11) ^
                    (uint)fVar11);
      *(uint *)(lVar2 + 0x288) = uVar10;
      puVar7 = (undefined8 *)FRotator::Quaternion(pfVar1,local_18);
      uVar6 = puVar7[1];
      *(undefined8 *)(lVar2 + 0x270) = *puVar7;
      *(undefined8 *)(lVar2 + 0x278) = uVar6;
    }
    local_38 = *(undefined8 *)(lVar2 + 0x270);
    uStack_30 = *(undefined8 *)(lVar2 + 0x278);
    uVar14 = 0;
    FUN_142397be0(lVar2,&local_28,&local_38,0,0,0);
    local_28 = DAT_1468b5da0;
    local_20 = DAT_1468b5da8;
    FUN_142398470(*(undefined8 *)(param_1 + 0x488),&local_28,0,0,uVar14 & 0xffffffffffffff00);
  }
  return;
}



// FUNCTION 1407d52d0 FUN_1407d52d0 body=27 status=ok
// SIG undefined FUN_1407d52d0(void)

void FUN_1407d52d0(undefined8 param_1)

{
  FUN_1422384a0();
  FUN_1407d6850(param_1);
  return;
}



// FUNCTION 1407d52f0 FUN_1407d52f0 body=116 status=ok
// SIG undefined FUN_1407d52f0(void)

void FUN_1407d52f0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  UObject::PostLoad();
  if (*(char *)(param_1 + 0x56) != '\0') {
    *(undefined1 *)(param_1 + 0x50) = 2;
    *(undefined1 *)(param_1 + 0x56) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar3 = FUN_1407e4b30();
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
      return;
    }
  }
  if (*(char *)(param_1 + 0x55) == '\0') {
    *(undefined1 *)(param_1 + 0x54) = 1;
  }
  return;
}



// FUNCTION 1407d5370 FUN_1407d5370 body=204 status=ok
// SIG undefined FUN_1407d5370(void)

void FUN_1407d5370(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  UObject::PostLoad();
  if (*(char *)(param_1 + 0x46) != '\0') {
    *(undefined1 *)(param_1 + 0x40) = 2;
    *(undefined1 *)(param_1 + 0x46) = 0;
  }
  if (DAT_1468b616c == '\0') {
    if (*(char *)(param_1 + 0x41) == '\0') {
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
    if (*(char *)(param_1 + 0x43) == '\0') {
      *(undefined1 *)(param_1 + 0x42) = 0;
    }
    if (*(char *)(param_1 + 0x45) == '\0') {
      *(undefined1 *)(param_1 + 0x44) = 0;
    }
    plVar3 = *(longlong **)(param_1 + 0x30);
    plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x38) * 0x25;
    for (; plVar3 != plVar4; plVar3 = plVar3 + 0x25) {
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        if (*(char *)(param_1 + 0x41) == '\0') {
          bVar2 = *(byte *)(lVar1 + 0x50);
          if (*(byte *)(lVar1 + 0x50) <= *(byte *)(param_1 + 0x40)) {
            bVar2 = *(byte *)(param_1 + 0x40);
          }
          *(byte *)(param_1 + 0x40) = bVar2;
        }
        if (*(char *)(param_1 + 0x43) == '\0') {
          bVar2 = *(byte *)(lVar1 + 0x52);
          if (*(byte *)(lVar1 + 0x52) <= *(byte *)(param_1 + 0x42)) {
            bVar2 = *(byte *)(param_1 + 0x42);
          }
          *(byte *)(param_1 + 0x42) = bVar2;
        }
        if (*(char *)(param_1 + 0x45) == '\0') {
          bVar2 = *(byte *)(lVar1 + 0x54);
          if (*(byte *)(lVar1 + 0x54) <= *(byte *)(param_1 + 0x44)) {
            bVar2 = *(byte *)(param_1 + 0x44);
          }
          *(byte *)(param_1 + 0x44) = bVar2;
        }
      }
    }
  }
  return;
}



// FUNCTION 1407d5440 FUN_1407d5440 body=43 status=ok
// SIG undefined FUN_1407d5440(void)

void FUN_1407d5440(longlong param_1)

{
  FUN_1423945d0();
  if (*(char *)(param_1 + 0x91a) == '\x01') {
    *(undefined1 *)(param_1 + 0x918) = 1;
    *(undefined1 *)(param_1 + 0x91a) = 0;
  }
  return;
}



// FUNCTION 1407d5470 FUN_1407d5470 body=147 status=ok
// SIG undefined FUN_1407d5470(void)

void FUN_1407d5470(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  FUN_1423945d0();
  if (*(char *)(param_1 + 0x8ef) != '\0') {
    *(undefined1 *)(param_1 + 0x8e9) = 2;
    *(undefined1 *)(param_1 + 0x8ef) = 0;
  }
  if (*(char *)(param_1 + 0x98c) != '\0') {
    *(undefined1 *)(param_1 + 0x98c) = 0;
    *(undefined1 *)(param_1 + 0x8ca) = 1;
  }
  if ((*(char *)(param_1 + 0x950) != '\0') && ((byte)(*(char *)(param_1 + 0x968) - 2U) < 2)) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x960)) {
      plVar2 = *(longlong **)(param_1 + 0x958);
      while (*plVar2 == 0) {
        iVar1 = iVar1 + 1;
        plVar2 = plVar2 + 6;
        if (*(int *)(param_1 + 0x960) <= iVar1) {
          return;
        }
      }
      *(undefined1 *)(param_1 + 0x950) = 0;
    }
  }
  return;
}



// FUNCTION 1407d5510 FUN_1407d5510 body=387 status=ok
// SIG undefined FUN_1407d5510(void)

void FUN_1407d5510(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  FUN_1423945d0();
  uVar10 = 0;
  uVar6 = uVar10;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    uVar6 = AActor::GetLevel();
  }
  plVar1 = (longlong *)(param_1 + 0x6f0);
  plVar8 = (longlong *)*plVar1;
  plVar2 = plVar8 + (longlong)*(int *)(param_1 + 0x6f8) * 5;
  do {
    if (plVar8 == plVar2) {
LAB_1407d559d:
      puVar11 = *(undefined8 **)(param_1 + 0x758);
      uVar6 = (longlong)*(int *)(param_1 + 0x760) & 0x1fffffffffffffff;
      if (puVar11 + *(int *)(param_1 + 0x760) < puVar11) {
        uVar6 = uVar10;
      }
      if (uVar6 != 0) {
        do {
          FUN_1407bc910(&local_48,*puVar11);
          if ((((local_48 != 0) && (lStack_30 != 0)) && (local_38 != 0)) &&
             (((local_28 != 0 && (*(char *)(local_28 + 0x740) == '\0')) &&
              (cVar5 = FUN_1407cd900(), cVar5 == '\0')))) {
            iVar3 = *(int *)(param_1 + 0x6f8);
            lVar9 = (longlong)iVar3;
            *(int *)(param_1 + 0x6f8) = iVar3 + 1;
            if (*(int *)(param_1 + 0x6fc) < iVar3 + 1) {
              TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
            }
            lVar4 = *plVar1;
            plVar2 = (longlong *)(lVar4 + lVar9 * 0x28);
            *plVar2 = local_48;
            plVar2[1] = lStack_40;
            plVar2 = (longlong *)(lVar4 + 0x10 + lVar9 * 0x28);
            *plVar2 = local_38;
            plVar2[1] = lStack_30;
            *(longlong *)(lVar4 + 0x20 + lVar9 * 0x28) = local_28;
          }
          puVar11 = puVar11 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar6);
      }
      *(undefined4 *)(param_1 + 0x760) = 0;
      if (*(int *)(param_1 + 0x764) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo((ulonglong *)(param_1 + 0x758),0);
      }
      return;
    }
    if ((*plVar8 == 0) || (uVar7 = AActor::GetLevel(), uVar7 != uVar6)) {
      FUN_1407de4d0(param_1);
      UObjectBaseUtility::MarkPackageDirty(param_1);
      goto LAB_1407d559d;
    }
    plVar8 = plVar8 + 5;
  } while( true );
}



// FUNCTION 1407d56a0 PostLoad body=50 status=ok
// SIG undefined PostLoad(void)

void UVectorFieldStatic::PostLoad(undefined8 param_1)

{
  char cVar1;
  
  UObject::PostLoad();
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 == '\0') {
    FUN_1407c2880(param_1);
    return;
  }
  return;
}



// FUNCTION 1407d56e0 FUN_1407d56e0 body=595 status=ok
// SIG undefined FUN_1407d56e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407d56e0(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  char cVar3;
  
  UObject::PostLoad();
  puVar1 = (undefined1 *)(param_1 + 0x1d0);
  cVar3 = FUN_142de4010(puVar1,&DAT_14685c270);
  if (cVar3 != '\0') {
    *(undefined1 *)(param_1 + 0xc0) = *puVar1;
    *(undefined1 *)(param_1 + 0xc1) = *(undefined1 *)(param_1 + 0x1d1);
    *(undefined1 *)(param_1 + 0xc2) = *(undefined1 *)(param_1 + 0x1d2);
    *(undefined1 *)(param_1 + 0xc3) = *(undefined1 *)(param_1 + 0x1d3);
    *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(param_1 + 0x1d4);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x1e0);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x1e8);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x1f0);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x200);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x210);
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x220);
    *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x230);
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x238);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x240);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x244);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x248);
    *(undefined1 *)(param_1 + 0x140) = *puVar1;
    *(undefined1 *)(param_1 + 0x141) = *(undefined1 *)(param_1 + 0x1d1);
    *(undefined1 *)(param_1 + 0x142) = *(undefined1 *)(param_1 + 0x1d2);
    *(undefined1 *)(param_1 + 0x143) = *(undefined1 *)(param_1 + 0x1d3);
    *(undefined8 *)(param_1 + 0x144) = *(undefined8 *)(param_1 + 0x1d4);
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x1e0);
    *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x1e8);
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x1f0);
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x200);
    *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x210);
    *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x220);
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x230);
    *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0x238);
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_1 + 0x240);
    *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_1 + 0x244);
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0x248);
    *puVar1 = DAT_14685c270;
    *(undefined1 *)(param_1 + 0x1d1) = DAT_14685c271;
    *(undefined1 *)(param_1 + 0x1d2) = DAT_14685c272;
    *(undefined1 *)(param_1 + 0x1d3) = DAT_14685c273;
    *(undefined8 *)(param_1 + 0x1d4) = DAT_14685c274;
    *(undefined8 *)(param_1 + 0x1e0) = DAT_14685c280;
    *(undefined8 *)(param_1 + 0x1e8) = DAT_14685c288;
    uVar2 = uRam000000014685c298;
    *(undefined8 *)(param_1 + 0x1f0) = _DAT_14685c290;
    *(undefined8 *)(param_1 + 0x1f8) = uVar2;
    uVar2 = uRam000000014685c2a8;
    *(undefined8 *)(param_1 + 0x200) = _DAT_14685c2a0;
    *(undefined8 *)(param_1 + 0x208) = uVar2;
    uVar2 = uRam000000014685c2b8;
    *(undefined8 *)(param_1 + 0x210) = _DAT_14685c2b0;
    *(undefined8 *)(param_1 + 0x218) = uVar2;
    *(undefined8 *)(param_1 + 0x220) = DAT_14685c2c0;
    uVar2 = uRam000000014685c2d0;
    *(undefined8 *)(param_1 + 0x228) = _DAT_14685c2c8;
    *(undefined8 *)(param_1 + 0x230) = uVar2;
    *(undefined8 *)(param_1 + 0x238) = DAT_14685c2d8;
    *(undefined4 *)(param_1 + 0x240) = DAT_14685c2e0;
    *(undefined4 *)(param_1 + 0x244) = DAT_14685c2e4;
    *(undefined4 *)(param_1 + 0x248) = DAT_14685c2e8;
  }
  cVar3 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar3 == '\0') {
    FUN_1407c29d0(param_1);
  }
  return;
}



// FUNCTION 1407d5940 PostLoad body=50 status=ok
// SIG undefined PostLoad(void)

void UVectorFieldStatic::PostLoad(undefined8 param_1)

{
  char cVar1;
  
  UObject::PostLoad();
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 == '\0') {
    FUN_1407c2b20(param_1);
    return;
  }
  return;
}



// FUNCTION 1407d5980 FUN_1407d5980 body=570 status=ok
// SIG undefined FUN_1407d5980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407d5980(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  char cVar3;
  
  UObject::PostLoad();
  puVar1 = (undefined1 *)(param_1 + 0x1d0);
  cVar3 = FUN_142de4010(puVar1,&DAT_14685c270);
  if (cVar3 != '\0') {
    *(undefined1 *)(param_1 + 0xc0) = *puVar1;
    *(undefined1 *)(param_1 + 0xc1) = *(undefined1 *)(param_1 + 0x1d1);
    *(undefined1 *)(param_1 + 0xc2) = *(undefined1 *)(param_1 + 0x1d2);
    *(undefined1 *)(param_1 + 0xc3) = *(undefined1 *)(param_1 + 0x1d3);
    *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(param_1 + 0x1d4);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x1e0);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x1e8);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x1f0);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x200);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x210);
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x220);
    *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x230);
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x238);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x240);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x244);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x248);
    *(undefined1 *)(param_1 + 0x140) = *puVar1;
    *(undefined1 *)(param_1 + 0x141) = *(undefined1 *)(param_1 + 0x1d1);
    *(undefined1 *)(param_1 + 0x142) = *(undefined1 *)(param_1 + 0x1d2);
    *(undefined1 *)(param_1 + 0x143) = *(undefined1 *)(param_1 + 0x1d3);
    *(undefined8 *)(param_1 + 0x144) = *(undefined8 *)(param_1 + 0x1d4);
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x1e0);
    *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x1e8);
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x1f0);
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x200);
    *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x210);
    *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x220);
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x230);
    *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0x238);
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_1 + 0x240);
    *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_1 + 0x244);
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0x248);
    *puVar1 = DAT_14685c270;
    *(undefined1 *)(param_1 + 0x1d1) = DAT_14685c271;
    *(undefined1 *)(param_1 + 0x1d2) = DAT_14685c272;
    *(undefined1 *)(param_1 + 0x1d3) = DAT_14685c273;
    *(undefined8 *)(param_1 + 0x1d4) = DAT_14685c274;
    *(undefined8 *)(param_1 + 0x1e0) = DAT_14685c280;
    *(undefined8 *)(param_1 + 0x1e8) = DAT_14685c288;
    uVar2 = uRam000000014685c298;
    *(undefined8 *)(param_1 + 0x1f0) = _DAT_14685c290;
    *(undefined8 *)(param_1 + 0x1f8) = uVar2;
    uVar2 = uRam000000014685c2a8;
    *(undefined8 *)(param_1 + 0x200) = _DAT_14685c2a0;
    *(undefined8 *)(param_1 + 0x208) = uVar2;
    uVar2 = uRam000000014685c2b8;
    *(undefined8 *)(param_1 + 0x210) = _DAT_14685c2b0;
    *(undefined8 *)(param_1 + 0x218) = uVar2;
    *(undefined8 *)(param_1 + 0x220) = DAT_14685c2c0;
    uVar2 = uRam000000014685c2d0;
    *(undefined8 *)(param_1 + 0x228) = _DAT_14685c2c8;
    *(undefined8 *)(param_1 + 0x230) = uVar2;
    *(undefined8 *)(param_1 + 0x238) = DAT_14685c2d8;
    *(undefined4 *)(param_1 + 0x240) = DAT_14685c2e0;
    *(undefined4 *)(param_1 + 0x244) = DAT_14685c2e4;
    *(undefined4 *)(param_1 + 0x248) = DAT_14685c2e8;
  }
  return;
}



// FUNCTION 1407d5c20 FUN_1407d5c20 body=1065 status=ok
// SIG undefined FUN_1407d5c20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407d5c20(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined2 *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_1a8 [32];
  ulonglong local_188;
  undefined8 local_180;
  uint local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined8 local_158;
  longlong *local_150;
  longlong local_148;
  longlong *local_140;
  longlong **local_138;
  undefined1 local_130 [8];
  undefined1 local_128 [56];
  longlong local_f0;
  undefined1 local_e8 [64];
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_90 [64];
  longlong local_50;
  undefined4 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  lVar16 = param_1[0x14];
  lVar9 = 0;
  param_1[0x14] = 0;
  if ((char)param_1[0x15] == '\0') {
    return;
  }
  local_150 = param_1;
  local_148 = lVar16;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1,local_130);
  lVar15 = lVar9;
  if (*plVar5 != 0) {
    lVar6 = FUN_1428dfc70();
    for (lVar8 = *plVar5; (lVar15 = lVar9, lVar8 != 0 && (lVar15 = *plVar5, lVar8 != lVar6));
        lVar8 = *(longlong *)(lVar8 + 0x30)) {
    }
  }
  if (lVar15 == 0) {
    (**(code **)(*param_1 + 0x328))(param_1);
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1,&local_140);
    lVar15 = lVar9;
    if (*plVar5 != 0) {
      lVar6 = FUN_1428dfc70();
      for (lVar8 = *plVar5; (lVar15 = lVar9, lVar8 != 0 && (lVar15 = *plVar5, lVar8 != lVar6));
          lVar8 = *(longlong *)(lVar8 + 0x30)) {
      }
    }
    if (lVar15 == 0) {
      return;
    }
  }
  uVar7 = FUN_1428dfc70();
  local_178 = 0;
  local_180 = (ulonglong)local_180._4_4_ << 0x20;
  local_188 = local_188 & 0xffffffffffffff00;
  lVar8 = FUN_141799680(uVar7,param_1,DAT_14685c338,0);
  if (lVar8 != 0) {
    if (*(longlong *)(lVar8 + 0x10) == lVar15) {
      iVar2 = *(int *)(lVar8 + 0xc);
      if (iVar2 < (int)DAT_1469e91c4) {
        uVar12 = iVar2 >> 0x1f & 0xffff;
        uVar4 = iVar2 + uVar12;
        lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar12) * 0x18;
      }
      if ((*(uint *)(lVar9 + 8) >> 0x1d & 1) == 0) {
        param_1[0x14] = lVar8;
        goto LAB_1407d5d87;
      }
    }
    FUN_1417087d0(lVar8);
  }
LAB_1407d5d87:
  lVar9 = DAT_14685c338;
  if (param_1[0x14] == 0) {
    uVar13 = 0x29;
    if ((*(uint *)(param_1 + 1) >> 5 & 1) == 0) {
      uVar13 = 0x48;
    }
    local_158 = 0;
    if (DAT_14685c338 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    local_168 = 0;
    local_170 = 0;
    local_178 = local_178 & 0xffffff00;
    local_180 = 0;
    local_188 = local_188 & 0xffffffff00000000;
    uVar10 = FUN_1417985e0(lVar15,param_1,lVar9,uVar13);
    param_1[0x14] = uVar10;
    if (((uVar10 != 0) && (0 < (int)param_1[0x38])) &&
       (lVar9 = *(longlong *)(uVar10 + 0x10), lVar9 != 0)) {
      plVar5 = (longlong *)param_1[0x37];
      if ((longlong *)param_1[0x37] == (longlong *)0x0) {
        plVar5 = param_1 + 0x1f;
      }
      plVar1 = plVar5 + (longlong)(int)param_1[0x38] * 3;
      for (; plVar5 != plVar1; plVar5 = plVar5 + 3) {
        plVar11 = (longlong *)UStruct::FindPropertyByName(lVar9,*plVar5);
        lVar16 = DAT_1468b6160;
        if (plVar11 != (longlong *)0x0) {
          iVar2 = *(int *)((longlong)plVar11 + 0x44);
          if ((int)plVar5[2] == 0) {
            puVar14 = &DAT_143f3eda8;
          }
          else {
            puVar14 = (undefined2 *)plVar5[1];
          }
          cVar3 = FUN_141766f20(plVar11,0x40,DAT_1468b6160);
          if ((cVar3 != '\0') && (puVar14 != (undefined2 *)0x0)) {
            local_180 = lVar16;
            local_188 = uVar10;
            (**(code **)(*plVar11 + 0x2e0))(plVar11,puVar14,(longlong)iVar2 + uVar10,0x40);
          }
        }
        lVar16 = local_148;
        param_1 = local_150;
      }
    }
    FUN_1407d7710(param_1 + 0x1f,0);
    FUN_1407d7790(param_1 + 0x39,0);
  }
  if (((lVar16 != 0) && (param_1[0x14] != 0)) && (param_1[0x14] != lVar16)) {
    FUN_1417812e0(local_128,lVar16,param_1);
    local_150 = (longlong *)param_1[0x14];
    local_f0 = local_150[2];
    local_140 = &local_148;
    local_138 = &local_150;
    local_40 = 1;
    local_148 = lVar16;
    TSet<TTuple<UFlareCompany_*,__int64>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,__int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UFlareCompany_*_const_&,__int64_&&>_>
              (local_e8,&local_158,&local_140,0);
    FUN_141798990(local_128);
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
  }
  return;
}



// FUNCTION 1407d6050 FUN_1407d6050 body=826 status=ok
// SIG undefined FUN_1407d6050(void)

void FUN_1407d6050(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  longlong *plVar4;
  undefined2 *_Src;
  ulonglong uVar5;
  uint uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined2 *local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined1 local_e2;
  undefined **local_d8 [5];
  byte local_af;
  byte local_ae;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  
  if (*(char *)(param_1 + 0xa8) == '\0') {
    FUN_1407d7710(param_1 + 0xf8,0);
    FUN_1407d7790(param_1 + 0x1c8,0);
    return;
  }
  local_38 = *(longlong *)(param_1 + 0xa0);
  if (local_38 == 0) {
    FUN_1407d5c20();
    local_38 = *(longlong *)(param_1 + 0xa0);
    if (local_38 == 0) {
      return;
    }
  }
  FArchive::FArchive(local_d8);
  local_d8[0] = &PTR_FUN_1440dfec8;
  local_48 = param_1 + 0x1c8;
  local_40 = UObjectBaseUtility::GetOutermost(local_38);
  local_ae = local_ae | 8;
  FArchive::SetIsPersistent(local_d8,0);
  local_af = local_af | 0x20;
  lVar1 = param_1 + 0xf8;
  FUN_1407d7710(lVar1,0);
  FUN_1407d7790(param_1 + 0x1c8,0);
  lVar8 = FUN_14178ca30(*(undefined8 *)(param_1 + 0xa0));
  local_108 = (undefined2 *)0x0;
  local_100 = 0;
  local_f8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x10);
  if (local_f8 == 0) {
    local_f0 = (longlong *)0x0;
  }
  else {
    local_f0 = *(longlong **)(local_f8 + 0x38);
  }
  local_e8 = 0xffffffff;
  local_e4 = 0x101;
  local_e2 = 0;
  FUN_140472e10(&local_f8);
  plVar4 = local_f0;
  while (local_f0 = plVar4, plVar4 != (longlong *)0x0) {
    lVar10 = 0;
    lVar9 = UMulticastDelegateProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((!bVar3) && ((*(byte *)((longlong)plVar4 + 0x3e) & 1) != 0)) {
      if (lVar8 != 0) {
        lVar10 = *(int *)((longlong)plVar4 + 0x44) + lVar8;
      }
      cVar7 = FUN_141754d30(plVar4,&local_108,
                            (longlong)*(int *)((longlong)plVar4 + 0x44) +
                            *(longlong *)(param_1 + 0xa0),lVar10,*(longlong *)(param_1 + 0xa0),0x40,
                            0);
      if (cVar7 != '\0') {
        iVar2 = *(int *)(param_1 + 0x1c0);
        lVar9 = plVar4[3];
        *(int *)(param_1 + 0x1c0) = iVar2 + 1;
        if (*(int *)(param_1 + 0x1c4) < iVar2 + 1) {
          TArray<FCompactPose,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(lVar1,iVar2);
        }
        _Src = local_108;
        lVar10 = *(longlong *)(param_1 + 0x1b8);
        if (*(longlong *)(param_1 + 0x1b8) == 0) {
          lVar10 = lVar1;
        }
        *(longlong *)(lVar10 + (longlong)iVar2 * 0x18) = lVar9;
        lVar10 = lVar10 + (longlong)iVar2 * 0x18;
        *(undefined8 *)(lVar10 + 8) = 0;
        lVar9 = (longlong)(int)local_100;
        *(int *)(lVar10 + 0x10) = (int)local_100;
        if ((int)local_100 == 0) {
          *(undefined4 *)(lVar10 + 0x14) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(lVar10 + 8,local_100 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(*(void **)(lVar10 + 8),_Src,lVar9 * 2);
        }
        (**(code **)(*plVar4 + 0x2c0))
                  (plVar4,local_d8,
                   *(longlong *)(param_1 + 0xa0) + (longlong)*(int *)((longlong)plVar4 + 0x44),
                   *(int *)((longlong)plVar4 + 0x44) + lVar8);
        uVar5 = local_100;
        uVar6 = local_100._4_4_;
        local_100 = (ulonglong)local_100._4_4_ << 0x20;
        if (((longlong)uVar5 < 0) && (uVar6 != 0)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_108,0);
        }
        if (local_108 != (undefined2 *)0x0) {
          *local_108 = 0;
        }
      }
    }
    local_f0 = (longlong *)plVar4[5];
    FUN_140472e10(&local_f8);
    plVar4 = local_f0;
  }
  if (local_108 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FArchive::~FArchive(local_d8);
  return;
}



// FUNCTION 1407d6390 FUN_1407d6390 body=261 status=ok
// SIG undefined FUN_1407d6390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407d6390(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 *_Src;
  int iVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  undefined1 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x4c0);
  *(undefined4 *)(param_1 + 0x4c8) = 0;
  if (*(int *)(param_1 + 0x4cc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  local_20 = 0;
  local_28 = (undefined1 *)0x0;
  iVar3 = 0;
  if (param_1 != 0) {
    FUN_1407ba460(param_1,local_a8,0);
    iVar3 = (int)local_20;
  }
  if (iVar3 != 0) {
    iVar2 = *(int *)(param_1 + 0x4c8);
    if (*(int *)(param_1 + 0x4cc) < iVar2 + iVar3) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
      iVar2 = *(int *)(param_1 + 0x4c8);
    }
    _Src = local_a8;
    if (local_28 != (undefined1 *)0x0) {
      _Src = local_28;
    }
    _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar2 * 8),_Src,(longlong)iVar3 << 3)
    ;
    *(int *)(param_1 + 0x4c8) = *(int *)(param_1 + 0x4c8) + iVar3;
  }
  if (local_28 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407d64a0 FUN_1407d64a0 body=933 status=ok
// SIG undefined FUN_1407d64a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407d64a0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  undefined1 auStack_108 [32];
  char local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong local_d0 [2];
  undefined1 local_c0 [128];
  undefined1 *local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong uVar15;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (DAT_1468c2186 != '\0') {
    return;
  }
  lVar6 = param_1[0x23];
  uVar8 = 0;
  cVar13 = '\0';
  local_e8 = '\0';
  local_40 = (undefined1 *)0x0;
  local_38 = 0;
  uVar12 = uVar8;
  if (lVar6 != 0) {
    uVar2 = FUN_1407e5040();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,local_c0);
    }
    uVar12 = local_38 & 0xffffffff;
  }
  iVar7 = (int)param_1[0xfe];
  iVar11 = (int)uVar12;
  if (iVar11 < iVar7) {
    *(int *)(param_1 + 0xff) = (int)param_1[0xff] % iVar11;
    FUN_1407d73d0(param_1 + 0xfd,uVar12,iVar7 - iVar11,1);
LAB_1407d65fa:
    iVar11 = (int)local_38;
  }
  else {
    if (iVar11 <= iVar7) goto LAB_1407d660a;
    iVar1 = (int)param_1[0xfe];
    iVar7 = iVar11 - iVar7;
    *(int *)(param_1 + 0xfe) = iVar1 + iVar7;
    if (*(int *)((longlong)param_1 + 0x7f4) < iVar1 + iVar7) {
      TArray<FSlateRenderBatch,FDefaultAllocator>::ResizeGrow(param_1 + 0xfd,iVar1);
      iVar11 = (int)local_38;
    }
    puVar9 = (undefined8 *)((longlong)iVar1 * 0xf0 + param_1[0xfd]);
    if (iVar7 != 0) {
      lVar6 = (longlong)puVar9 + 0xec;
      do {
        FUN_142dc1920(puVar9);
        *puVar9 = &PTR_FUN_1440dc9a8;
        puVar9 = puVar9 + 0x1e;
        *(undefined8 *)(lVar6 + -0x14) = 0;
        *(undefined8 *)(lVar6 + -0xc) = 0;
        *(undefined8 *)(lVar6 + -4) = 0;
        lVar6 = lVar6 + 0xf0;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      goto LAB_1407d65fa;
    }
  }
  cVar13 = '\x01';
  local_e8 = '\x01';
LAB_1407d660a:
  if (0 < iVar11) {
    uVar12 = uVar8;
    uVar15 = uVar8;
    do {
      uStack_d8 = 0;
      lVar6 = param_1[0xfd];
      local_e0 = FUN_14077d150;
      plVar3 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        *(undefined4 *)(plVar3 + 2) = (undefined4)local_e0;
        *(undefined4 *)((longlong)plVar3 + 0x14) = local_e0._4_4_;
        *(undefined4 *)(plVar3 + 3) = uStack_d8;
        *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_d4;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar3[5] = lVar4;
        *plVar3 = (longlong)&PTR_FUN_143fcff08;
      }
      plVar10 = (longlong *)(lVar6 + 0x30 + uVar8);
      if (local_d0 == plVar10) {
LAB_1407d66b7:
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3,0);
          lVar4 = FMemory::Realloc(plVar3,0,0);
          if (lVar4 != 0) {
            FMemory::Free(lVar4);
          }
        }
      }
      else {
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x30))(plVar3,plVar10);
          goto LAB_1407d66b7;
        }
        if (((int)plVar10[1] != 0) && (plVar3 = (longlong *)*plVar10, plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x28))(plVar3,0);
          if (*plVar10 != 0) {
            lVar4 = FMemory::Realloc(*plVar10,0,0);
            *plVar10 = lVar4;
          }
          *(undefined4 *)(plVar10 + 1) = 0;
        }
      }
      FUN_142dd79a0(lVar6 + 0x10 + uVar8);
      lVar6 = param_1[0xfd];
      puVar5 = local_c0;
      if (local_40 != (undefined1 *)0x0) {
        puVar5 = local_40;
      }
      if (*(longlong *)(puVar5 + uVar12) != 0) {
        *(longlong *)(lVar6 + 0xd8 + uVar8) = *(longlong *)(puVar5 + uVar12);
        FUN_142ddac80(lVar6 + 0x10 + uVar8);
        lVar6 = param_1[0xfd];
      }
      FUN_1407ccb80((longlong)(int)uVar15 * 0xf0 + lVar6,param_1 + 0x103);
      (**(code **)(*(longlong *)(param_1[0xfd] + uVar8) + 8))
                ((longlong *)(param_1[0xfd] + uVar8),*(undefined1 *)((longlong)param_1 + 0x6f1));
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
      uVar12 = uVar12 + 8;
      uVar8 = uVar8 + 0xf0;
      cVar13 = local_e8;
    } while ((int)uVar14 < (int)local_38);
  }
  if (cVar13 != '\0') {
    (**(code **)(*param_1 + 0x8f0))(param_1);
  }
  if (local_40 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407d6850 FUN_1407d6850 body=654 status=ok
// SIG undefined FUN_1407d6850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407d6850(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  undefined4 uStack_1c;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (((((char)param_1[0xb5] != '\0') && (lVar2 != 0)) &&
      (cVar1 = UWorld::IsGameWorld(lVar2), cVar1 == '\0')) && (DAT_1468b616c == '\0')) {
    if (param_1[0xbc] == 0) {
      lVar2 = 0;
      plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_144089a20;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        *(undefined4 *)(plVar3 + 2) = 0x407cfd40;
        *(undefined4 *)((longlong)plVar3 + 0x14) = 1;
        *(undefined4 *)(plVar3 + 3) = 0;
        *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_1c;
        lVar2 = FDelegateHandle::GenerateNewID();
        plVar3[5] = lVar2;
        *plVar3 = (longlong)&PTR_FUN_144089a68;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146534730,1);
        plVar4 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
        iVar6 = DAT_146534738;
        lVar10 = (longlong)DAT_146534738;
        lVar2 = *plVar4;
        DAT_146534738 = DAT_146534738 + 1;
        if (DAT_14653473c < DAT_146534738) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146534730,iVar6);
        }
        puVar5 = (undefined8 *)(lVar10 * 0x10 + DAT_146534730);
        *puVar5 = plVar3;
        *(undefined4 *)(puVar5 + 1) = 3;
      }
      param_1[0xbc] = lVar2;
    }
    FUN_1407cca00(param_1,1);
    return;
  }
  lVar2 = param_1[0xbc];
  if (lVar2 != 0) {
    uVar11 = 0;
    uVar9 = uVar11;
    uVar12 = uVar11;
    iVar6 = DAT_146534738;
    if (0 < DAT_146534738) {
      do {
        plVar3 = (longlong *)(DAT_146534730 + uVar12);
        if ((((int)plVar3[1] != 0) && (plVar4 = (longlong *)*plVar3, plVar4 != (longlong *)0x0)) &&
           (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8),
           iVar6 = DAT_146534738, *plVar4 == lVar2)) {
          if (((int)plVar3[1] != 0) && (plVar4 = (longlong *)*plVar3, plVar4 != (longlong *)0x0)) {
            (**(code **)(*plVar4 + 0x28))(plVar4,0);
            if (*plVar3 != 0) {
              lVar2 = FMemory::Realloc(*plVar3,0,0);
              *plVar3 = lVar2;
            }
            *(undefined4 *)(plVar3 + 1) = 0;
            iVar6 = DAT_146534738;
          }
          break;
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar12 = uVar12 + 0x10;
      } while ((int)uVar8 < iVar6);
    }
    if (DAT_146534744 < 1) {
      uVar9 = uVar11;
      iVar7 = iVar6;
      if (0 < iVar6) {
        do {
          if (((*(int *)(uVar11 + 8 + DAT_146534730) == 0) ||
              (*(longlong **)(uVar11 + DAT_146534730) == (longlong *)0x0)) ||
             (cVar1 = (**(code **)(**(longlong **)(uVar11 + DAT_146534730) + 0x10))(), cVar1 != '\0'
             )) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146534730,uVar9,1,1);
          }
          else {
            uVar9 = (ulonglong)((int)uVar9 + 1);
            uVar11 = uVar11 + 0x10;
          }
          iVar7 = DAT_146534738;
        } while ((int)uVar9 < DAT_146534738);
      }
      _DAT_146534740 = iVar7 * 2;
      if (_DAT_146534740 < 3) {
        _DAT_146534740 = 2;
      }
      if ((_DAT_146534740 < iVar6) && (DAT_14653473c != iVar7)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146534730);
      }
    }
    param_1[0xbc] = 0;
  }
  return;
}



// FUNCTION 1407d6ae0 FUN_1407d6ae0 body=737 status=ok
// SIG undefined FUN_1407d6ae0(void)

void FUN_1407d6ae0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  uint uVar4;
  wchar_t *pwVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined8 local_res10;
  ulonglong local_res18 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (param_2 != (longlong *)0x0) {
    iVar2 = *(int *)((longlong)param_2 + 0xc);
    pwVar5 = (wchar_t *)0x0;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar13 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar13;
      pwVar5 = (wchar_t *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
               (longlong)(int)((uVar4 & 0xffff) - uVar13) * 0x18);
    }
    if ((*(uint *)(pwVar5 + 4) >> 0x1d & 1) == 0) {
      local_38 = FUN_1407bfad0;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      plVar1 = param_2 + 0x87;
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_38;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_38._4_4_;
        *(undefined4 *)(plVar6 + 3) = (undefined4)uStack_30;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_30._4_4_;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar7;
        *plVar6 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_res10);
        iVar2 = (int)param_2[0x88];
        *(int *)(param_2 + 0x88) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0x444) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar8 = plVar6;
        *(undefined4 *)(puVar8 + 1) = 3;
      }
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&USpawnManager::ActorDestroyed",L"::");
      pwVar5 = (wchar_t *)0x0;
      while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar5 = pwVar3;
      }
      FName::FName(local_res18,pwVar5 + 2,1);
      plVar1 = param_2 + 0x52;
      FWeakObjectPtr::operator=(&local_38,0);
      uStack_30 = 0;
      FWeakObjectPtr::operator=(&local_38,param_1);
      uStack_30 = local_res18[0];
      local_res10 = 0;
      if ((local_res18[0] != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
        UObject::FindFunction(lVar7,uStack_30);
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      iVar2 = (int)param_2[0x53];
      *(int *)(param_2 + 0x53) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0x29c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar12 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar12 = (undefined4)local_38;
      puVar12[1] = local_38._4_4_;
      *(ulonglong *)(puVar12 + 2) = uStack_30;
      uVar10 = UScrollBox::GetPrivateStaticClass();
      lVar7 = (**(code **)(*param_2 + 0x628))(param_2,uVar10);
      if (lVar7 != 0) {
        uStack_30 = uStack_30 & 0xffffffff00000000;
        local_38 = (code *)&LAB_1407bf820;
        plVar1 = (longlong *)(lVar7 + 0x268);
        plVar6 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = (longlong)&PTR_FUN_143fcfec0;
          FWeakObjectPtr::operator=(plVar6 + 1,param_1);
          *(undefined4 *)(plVar6 + 2) = (undefined4)local_38;
          *(undefined4 *)((longlong)plVar6 + 0x14) = local_38._4_4_;
          *(undefined4 *)(plVar6 + 3) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_30._4_4_;
          lVar11 = FDelegateHandle::GenerateNewID();
          plVar6[5] = lVar11;
          *plVar6 = (longlong)&PTR_FUN_143fcff08;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
          (**(code **)(*plVar6 + 0x20))(plVar6,&local_res10);
          iVar2 = *(int *)(lVar7 + 0x270);
          *(int *)(lVar7 + 0x270) = iVar2 + 1;
          if (*(int *)(lVar7 + 0x274) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
          }
          puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
          *puVar8 = plVar6;
          *(undefined4 *)(puVar8 + 1) = 3;
        }
      }
    }
  }
  return;
}



// FUNCTION 1407d6dd0 FUN_1407d6dd0 body=561 status=ok
// SIG undefined FUN_1407d6dd0(void)

void FUN_1407d6dd0(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
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
  
  lVar1 = param_1 + 0x170;
  if (*(longlong *)(param_1 + 400) != 0) {
    uVar5 = FMemory::Realloc(*(longlong *)(param_1 + 400),0,0);
    *(undefined8 *)(param_1 + 400) = uVar5;
  }
  puVar2 = (uint *)(param_1 + 0x198);
  uVar8 = *puVar2;
  if (uVar8 != 0) {
    FUN_1406f49a0();
    if (0 < (int)uVar8) {
      uVar9 = 0;
      uVar11 = (ulonglong)uVar8;
      do {
        lVar10 = *(longlong *)(param_1 + 400);
        if (*(longlong *)(param_1 + 400) == 0) {
          lVar10 = lVar1;
        }
        uVar6 = (longlong)(int)*puVar2 - 1U & uVar9;
        uVar9 = uVar9 + 1;
        *(undefined4 *)(lVar10 + uVar6 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    uStack_54 = 1;
    puStack_28 = (uint *)(param_1 + 0x150);
    local_58 = 0;
    iVar3 = *(int *)(param_1 + 0x160);
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = *(uint **)(param_1 + 0x158);
      if (*(uint **)(param_1 + 0x158) == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar10 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_1407d6f1f;
        uVar8 = puVar12[lVar10 + 1];
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
LAB_1407d6f1f:
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
        lVar10 = *(longlong *)(param_1 + 0x140);
        if (*(longlong *)(param_1 + 0x140) == 0) {
          lVar10 = param_1;
        }
        puVar12 = (uint *)(lVar10 + (longlong)iStack_1c * 0x14);
        uVar8 = (puVar12[1] ^ *puVar12) & *puVar2 - 1;
        puVar12[4] = uVar8;
        lVar10 = *(longlong *)(param_1 + 400);
        if (*(longlong *)(param_1 + 400) == 0) {
          lVar10 = lVar1;
        }
        puVar12[3] = *(uint *)(lVar10 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar8) * 4);
        lVar10 = *(longlong *)(param_1 + 400);
        if (*(longlong *)(param_1 + 400) == 0) {
          lVar10 = lVar1;
        }
        *(int *)(lVar10 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar8) * 4) = iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        FUN_1406e9690(&local_30);
      } while (iStack_1c < (int)puStack_28[4]);
    }
  }
  return;
}



// FUNCTION 1407d7010 FUN_1407d7010 body=155 status=ok
// SIG undefined FUN_1407d7010(void)

void FUN_1407d7010(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  
  if ((param_3 != (longlong *)0x0) && (iVar5 = 0, 0 < (int)param_2[1])) {
    lVar6 = 0;
    do {
      lVar1 = *param_1;
      lVar2 = *param_2;
      uVar4 = (**(code **)(*param_3 + 0x2d8))(param_3);
      cVar3 = FUN_1407cebc0((longlong)iVar5 * 0x158 + lVar2,uVar4);
      if (cVar3 != '\0') {
        *(int *)(lVar1 + lVar6) = *(int *)(lVar1 + lVar6) + -1;
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar5 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1407d70b0 FUN_1407d70b0 body=328 status=ok
// SIG undefined FUN_1407d70b0(void)

undefined8 FUN_1407d70b0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  if ((*(char *)((longlong)param_2 + 0x1a) == '\0') && (*(char *)(param_2 + 1) == '\x01')) {
    *(undefined1 *)(param_2 + 1) = 3;
    local_10 = (longlong *)0x0;
    if (param_2 + 0x11 != &local_18) {
      param_2[0x11] = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0x12,&local_10);
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
    *(int *)(*param_1 + 0x23c) = *(int *)(*param_1 + 0x23c) - *(int *)(param_2 + 0xd);
    if (*(char *)(param_2 + 3) == '\0') {
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + -1;
      FUN_1407cfba0(param_1,param_2,1);
    }
    else {
      *(int *)(param_1 + 0xd) = (int)param_1[0xd] + -1;
      lVar4 = param_1[7];
      if (lVar4 != 0) {
        FUN_1407c27c0(lVar4 + 0x558,lVar4,param_2);
      }
      iVar3 = (int)param_1[0x1a];
      *(int *)(param_1 + 0x1a) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0xd4) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x19,iVar3);
      }
      *(undefined8 *)(param_1[0x19] + (longlong)iVar3 * 8) = *param_2;
      *param_2 = 0;
    }
    FUN_1407c33a0(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 1407d7200 FUN_1407d7200 body=136 status=ok
// SIG undefined FUN_1407d7200(void)

void FUN_1407d7200(longlong param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res18 [16];
  
  piVar2 = (int *)FUN_1407c7790(param_1,local_res18,param_2);
  iVar1 = *piVar2;
  if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 600))) &&
     (lVar5 = (longlong)iVar1 * 0x140 + *(longlong *)(param_1 + 0x250), lVar5 != 0)) {
    plVar4 = *(longlong **)(lVar5 + 0x70);
    plVar3 = plVar4 + (longlong)*(int *)(lVar5 + 0x78) * 0x15;
    if (plVar4 != plVar3) {
      while (*plVar4 != param_2) {
        plVar4 = plVar4 + 0x15;
        if (plVar4 == plVar3) {
          return;
        }
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_1407d70b0(lVar5);
      }
    }
  }
  return;
}



// FUNCTION 1407d7290 FUN_1407d7290 body=104 status=ok
// SIG undefined FUN_1407d7290(void)

void FUN_1407d7290(longlong *param_1)

{
  longlong lVar1;
  int local_res8 [8];
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14625a720,local_res8,lVar1);
    if ((local_res8[0] != -1) &&
       (lVar1 = DAT_14625a720 + (longlong)local_res8[0] * 0x18, lVar1 != 0)) {
      lVar1 = *(longlong *)(lVar1 + 8);
      goto LAB_1407d72e5;
    }
  }
  lVar1 = 0;
LAB_1407d72e5:
  if (lVar1 != 0) {
    FUN_1407d7200(lVar1,param_1);
  }
  return;
}



// FUNCTION 1407d7300 RemoveAtImpl body=198 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FInvItem,TSizedDefaultAllocator<32>_>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + 0x18 + (longlong)param_2 * 0x30);
    iVar3 = param_3;
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x30),
                 (void *)((longlong)(param_2 + param_3) * 0x30 + *param_1),(longlong)iVar1 * 0x30);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1407d73d0 FUN_1407d73d0 body=249 status=ok
// SIG undefined FUN_1407d73d0(void)

void FUN_1407d73d0(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(*param_1 + (longlong)param_2 * 0xf0);
    iVar3 = param_3;
    do {
      *puVar2 = &PTR_FUN_1440dc9a8;
      if (puVar2[0x1c] != 0) {
        FMemory::Free();
      }
      *puVar2 = &PTR_FUN_14408b3d8;
      TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar2 + 6);
      puVar2 = puVar2 + 0x1e;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0xf0),
                 (void *)((longlong)(param_2 + param_3) * 0xf0 + *param_1),(longlong)iVar1 * 0xf0);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>,FDefaultAllocator>::
      ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1407d74d0 FUN_1407d74d0 body=355 status=ok
// SIG undefined FUN_1407d74d0(void)

void FUN_1407d74d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  longlong local_res10;
  longlong local_res18;
  
  local_res10 = param_2;
  TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x940,&local_res10);
  lVar1 = local_res10;
  lVar7 = *(longlong *)(param_1 + 0x958);
  lVar2 = (longlong)*(int *)(param_1 + 0x960) * 0x30 + lVar7;
  local_res18 = lVar2;
  if (lVar7 != lVar2) {
    do {
      lVar3 = (longlong)*(int *)(lVar7 + 0x20);
      if (*(int *)(lVar7 + 0x20) != 0) {
        iVar8 = 0;
        lVar2 = 0;
        bVar9 = **(longlong **)(lVar7 + 0x18) != lVar1;
        iVar5 = 0;
        do {
          lVar2 = lVar2 + 1;
          iVar6 = iVar5 + 1;
          if (lVar2 < lVar3) {
            plVar4 = (longlong *)(*(longlong *)(lVar7 + 0x18) + lVar2 * 8);
            do {
              if (bVar9 != (*plVar4 != lVar1)) break;
              iVar6 = iVar6 + 1;
              lVar2 = lVar2 + 1;
              plVar4 = plVar4 + 1;
            } while (lVar2 < lVar3);
          }
          if (bVar9 != false) {
            if (iVar8 != iVar5) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(lVar7 + 0x18) + (longlong)iVar8 * 8),
                         (void *)(*(longlong *)(lVar7 + 0x18) + (longlong)iVar5 * 8),
                         (longlong)(iVar6 - iVar5) << 3);
            }
            iVar8 = iVar8 + (iVar6 - iVar5);
          }
          bVar9 = (bool)(bVar9 ^ 1);
          iVar5 = iVar6;
        } while (lVar2 < lVar3);
        *(int *)(lVar7 + 0x20) = iVar8;
        lVar2 = local_res18;
      }
      lVar7 = lVar7 + 0x30;
    } while (lVar7 != lVar2);
  }
  if (*(int *)(param_1 + 0x948) == 0) {
    *(undefined1 *)(param_1 + 0x968) = 0;
  }
  FUN_1407df9c0(param_1);
  FUN_1407c3a30(param_1);
  return;
}



// FUNCTION 1407d7640 RemoveSwap body=198 status=ok
// SIG undefined RemoveSwap(void)

int TArray<UAIAsyncTaskBlueprintProxy_*,TSizedDefaultAllocator<32>_>::RemoveSwap
              (longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  iVar1 = (int)param_1[1];
  iVar4 = 0;
  iVar6 = iVar1;
  if (0 < iVar1) {
    lVar5 = 0;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar5 + lVar2) == *param_2) {
        iVar3 = (iVar6 - iVar4) + -1;
        if (0 < iVar3) {
          iVar3 = 1;
        }
        if (iVar3 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(lVar2 + (longlong)iVar4 * 8),
                     (void *)(lVar2 + (longlong)(iVar6 - iVar3) * 8),(longlong)iVar3 << 3);
          iVar6 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar6 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1);
        iVar6 = (int)param_1[1];
        iVar4 = iVar4 + -1;
        lVar5 = lVar5 + -8;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < iVar6);
  }
  return iVar1 - iVar6;
}



// FUNCTION 1407d7710 FUN_1407d7710 body=122 status=ok
// SIG undefined FUN_1407d7710(void)

void FUN_1407d7710(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_2 <= *(int *)(param_1 + 0xcc)) {
    iVar3 = *(int *)(param_1 + 200);
    lVar1 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar1 = param_1;
    }
    if (iVar3 != 0) {
      plVar2 = (longlong *)(lVar1 + 8);
      do {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_1 + 200) = 0;
    return;
  }
  FUN_1407c5440();
  return;
}



// FUNCTION 1407d7790 FUN_1407d7790 body=154 status=ok
// SIG undefined FUN_1407d7790(void)

void FUN_1407d7790(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar2 != 0) {
      plVar3 = (longlong *)(*param_1 + 8);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 3;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,param_2);
    }
  }
  else {
    if (iVar2 != 0) {
      plVar3 = (longlong *)(*param_1 + 8);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 3;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 1407d7830 FUN_1407d7830 body=477 status=ok
// SIG undefined FUN_1407d7830(void)

void FUN_1407d7830(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  float fVar8;
  longlong local_res8;
  longlong local_28;
  undefined8 *local_20;
  
  FUN_1407c4c60();
  plVar5 = (longlong *)0x0;
  plVar7 = plVar5;
  if (0 < *(int *)(param_1 + 0xf)) {
    do {
      FUN_1407c4430(param_1,(longlong)(int)plVar7 * 0xa8 + param_1[0xe]);
      uVar6 = (int)plVar7 + 1;
      plVar7 = (longlong *)(ulonglong)uVar6;
    } while ((int)uVar6 < *(int *)(param_1 + 0xf));
  }
  if (param_1[8] != 0) {
    uVar2 = (**(code **)(*(longlong *)*param_1 + 0x148))();
    FUN_1407cc680(param_1 + 0x10,param_1[8] + 0x908,uVar2);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  FUN_1407d7790(param_1 + 0x13,0);
  plVar7 = (longlong *)param_1[9];
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  if ((plVar7 != (longlong *)0x0) && (param_1[10] != 0)) {
    local_28 = param_1[10];
    local_20 = param_1;
    (**(code **)(*plVar7 + 0x2f0))(plVar7,&local_28);
    param_1[10] = 0;
  }
  lVar3 = param_1[8];
  if ((lVar3 != 0) && (plVar5 = *(longlong **)(lVar3 + 0x900), plVar5 == (longlong *)0x0)) {
    plVar5 = *(longlong **)(lVar3 + 0x8f8);
  }
  param_1[9] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    local_28 = param_1[10];
    local_20 = param_1;
    uVar2 = (**(code **)(*plVar5 + 0x2e8))(plVar5,&local_28);
    lVar3 = param_1[8];
    param_1[10] = uVar2;
  }
  param_1[0x15] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  lVar4 = 0;
  if (lVar3 != 0) {
    FUN_1407d7c60(param_1);
    lVar4 = param_1[8];
  }
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  if ((lVar4 != 0) && (fVar8 = (float)FUN_142c98860(lVar4 + 0x890), 0.0 < fVar8)) {
    iVar1 = rand();
    *(bool *)((longlong)param_1 + 0xb) = (float)iVar1 * 3.051851e-05 <= fVar8;
  }
  local_res8 = param_1[8];
  if (local_res8 != 0) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (local_res8 + 0x828,&local_res8);
  }
  local_res8 = param_1[7];
  if (local_res8 != 0) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (local_res8 + 0x500,&local_res8);
  }
  return;
}



// FUNCTION 1407d7a10 FUN_1407d7a10 body=579 status=ok
// SIG undefined FUN_1407d7a10(void)

void FUN_1407d7a10(longlong param_1,int param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char cVar13;
  ulonglong uVar14;
  undefined1 local_res10 [8];
  undefined4 *local_res18;
  undefined4 *local_res20;
  undefined1 *local_60;
  longlong local_58;
  ulonglong local_50;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0xa0))) {
    lVar7 = (longlong)param_2;
    lVar4 = *(longlong *)(param_1 + 0x98);
    uVar12 = 0xffffffffffffffff;
    *(undefined4 *)(lVar4 + lVar7 * 0x18) = 0;
    if (*(char *)(lVar4 + 4 + lVar7 * 0x18) != '\0') {
      local_res20 = *(undefined4 **)(lVar4 + 8 + lVar7 * 0x18);
      uVar10 = uVar12;
      cVar5 = '\0';
      do {
        cVar13 = cVar5;
        uVar10 = uVar10 >> 1;
        cVar5 = cVar13 + -1;
      } while (0xffffffff < uVar10);
      puVar2 = local_res20 + *(int *)(lVar4 + 0x10 + lVar7 * 0x18);
      if (local_res20 != puVar2) {
        local_res18 = local_res20 + 1;
        uVar8 = (ulonglong)((longlong)puVar2 + (3 - (longlong)local_res18)) >> 2;
        if (puVar2 < local_res18) {
          uVar8 = 0;
        }
        if (uVar8 != 0) {
          uVar14 = 2;
          do {
            uVar1 = uVar14 - 1;
            do {
              uVar9 = 0;
              uVar11 = uVar9;
              if (uVar14 != 1) {
                do {
                  do {
                    uVar6 = std::_guard_xfg_dispatch_icall_nop();
                  } while (uVar10 < uVar6);
                  uVar9 = (uVar9 << (cVar13 - 2U & 0x3f)) * 2 | (ulonglong)uVar6;
                  uVar11 = (uVar11 << (cVar13 - 2U & 0x3f)) * 2 | uVar10;
                } while (uVar11 < uVar1);
              }
            } while ((uVar11 / uVar14 <= uVar9 / uVar14) && (uVar11 % uVar14 != uVar1));
            uVar9 = uVar9 % uVar14;
            if (uVar9 != uVar1) {
              uVar3 = *local_res18;
              *local_res18 = local_res20[uVar9];
              local_res20[uVar9] = uVar3;
            }
            local_res18 = local_res18 + 1;
            uVar1 = uVar14 - 1;
            uVar14 = uVar14 + 1;
          } while (uVar1 != uVar8);
        }
      }
    }
    local_58 = 0x40;
    if ((*(char *)(*(longlong *)(param_1 + 0x40) + 0x950) != '\0') &&
       (*(int *)(param_1 + 0x90) == 0)) {
      local_60 = local_res10;
      do {
        local_58 = local_58 + -1;
        uVar12 = uVar12 >> 1;
      } while (0xffffffff < uVar12);
      local_50 = uVar12;
      FUN_1407bae90(*(longlong *)(param_1 + 0x98),
                    *(longlong *)(param_1 + 0x98) + (longlong)*(int *)(param_1 + 0xa0) * 0x18,
                    &local_60);
    }
  }
  return;
}



// FUNCTION 1407d7c60 FUN_1407d7c60 body=976 status=ok
// SIG undefined FUN_1407d7c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407d7c60(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined1 auStack_108 [32];
  int local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0 [16];
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  plVar1 = (longlong *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_1407d7790(plVar1);
  lVar12 = *(longlong *)(param_1 + 0x40);
  local_c8 = lVar12;
  if ((lVar12 == 0) || (*(int *)(lVar12 + 0x960) < 1)) {
    bVar3 = false;
LAB_1407d7cd7:
    if (bVar3) {
      iVar14 = *(int *)(lVar12 + 0x960);
      iVar2 = *(int *)(param_1 + 0xa0);
      iVar4 = iVar2 + iVar14;
      *(int *)(param_1 + 0xa0) = iVar4;
      if (*(int *)(param_1 + 0xa4) < iVar4) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar1 + (longlong)iVar2 * 0x18),0,(longlong)iVar14 * 0x18);
      local_e8 = 0;
      if (0 < *(int *)(lVar12 + 0x960)) {
        local_d8 = 0;
        local_e0 = 0;
        do {
          lVar5 = local_d8 + *(longlong *)(param_1 + 0x98);
          lVar9 = *(longlong *)(lVar12 + 0x958) + local_e0;
          plVar1 = (longlong *)(lVar5 + 8);
          *(undefined1 *)(lVar5 + 4) = *(undefined1 *)(lVar9 + 0x28);
          if (*(int *)(lVar5 + 0x14) < *(int *)(lVar9 + 0x20)) {
            TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
          }
          plVar16 = *(longlong **)(lVar9 + 0x18);
          plVar11 = plVar16 + *(int *)(lVar9 + 0x20);
          local_d0 = plVar11;
          if (plVar16 != plVar11) {
            do {
              uVar13 = 0;
              if (*plVar16 != 0) {
                plVar6 = (longlong *)(*plVar16 + 0x458);
                local_40 = (longlong *)0x0;
                local_38 = 0;
                (**(code **)(*plVar6 + 0x10))(plVar6,local_c0);
                plVar6 = local_c0;
                if (local_40 != (longlong *)0x0) {
                  plVar6 = local_40;
                }
                uVar8 = (longlong)(int)local_38 & 0x1fffffffffffffff;
                if (plVar6 + (int)local_38 < plVar6) {
                  uVar8 = uVar13;
                }
                if (uVar8 != 0) {
                  do {
                    plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x970);
                    for (plVar10 = plVar11;
                        plVar10 != plVar11 + *(int *)(*(longlong *)(param_1 + 0x40) + 0x978);
                        plVar10 = plVar10 + 1) {
                      if (*plVar10 == *plVar6) {
                        iVar14 = (int)((longlong)plVar10 - (longlong)plVar11 >> 3);
                        if (iVar14 != -1) {
                          iVar2 = *(int *)(lVar5 + 0x10);
                          *(int *)(lVar5 + 0x10) = iVar2 + 1;
                          if (*(int *)(lVar5 + 0x14) < iVar2 + 1) {
                            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
                          }
                          *(int *)(*plVar1 + (longlong)iVar2 * 4) = iVar14;
                        }
                        break;
                      }
                    }
                    plVar6 = plVar6 + 1;
                    uVar13 = uVar13 + 1;
                    plVar11 = local_d0;
                  } while (uVar13 != uVar8);
                }
                if (local_40 != (longlong *)0x0) {
                  FMemory::Free();
                }
              }
              plVar16 = plVar16 + 1;
              lVar12 = local_c8;
            } while (plVar16 != plVar11);
          }
          local_e0 = local_e0 + 0x30;
          local_d8 = local_d8 + 0x18;
          local_e8 = local_e8 + 1;
        } while (local_e8 < *(int *)(lVar12 + 0x960));
      }
      FUN_1407c11b0(param_1,*(undefined4 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x40));
      goto LAB_1407d7fde;
    }
  }
  else if ((byte)(*(char *)(lVar12 + 0x968) - 2U) < 2) {
    bVar3 = true;
    goto LAB_1407d7cd7;
  }
  lVar12 = (longlong)*(int *)(param_1 + 0xa0);
  iVar14 = *(int *)(param_1 + 0xa0) + 1;
  *(int *)(param_1 + 0xa0) = iVar14;
  if (*(int *)(param_1 + 0xa4) < iVar14) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar1);
  }
  lVar5 = *plVar1;
  *(undefined8 *)(lVar5 + lVar12 * 0x18) = 0;
  *(undefined8 *)(lVar5 + 8 + lVar12 * 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x10 + lVar12 * 0x18) = 0;
  lVar12 = *plVar1;
  iVar14 = *(int *)(lVar12 + 0x10);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x978);
  iVar4 = iVar14 + iVar2;
  *(int *)(lVar12 + 0x10) = iVar4;
  if (*(int *)(lVar12 + 0x14) < iVar4) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar12 + 8);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(lVar12 + 8) + (longlong)iVar14 * 4),0,(longlong)iVar2 << 2);
  uVar8 = 0;
  piVar7 = *(int **)(lVar12 + 8);
  uVar13 = (longlong)*(int *)(lVar12 + 0x10) & 0x3fffffffffffffff;
  if (piVar7 + *(int *)(lVar12 + 0x10) < piVar7) {
    uVar13 = uVar8;
  }
  uVar15 = uVar8;
  if (uVar13 != 0) {
    do {
      *piVar7 = (int)uVar8;
      piVar7 = piVar7 + 1;
      uVar8 = (ulonglong)((int)uVar8 + 1);
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar13);
  }
  *(undefined1 *)(lVar12 + 4) = *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x950);
LAB_1407d7fde:
  iVar14 = 0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    do {
      FUN_1407d7a10(param_1,iVar14);
      iVar14 = iVar14 + 1;
    } while (iVar14 < *(int *)(param_1 + 0xa0));
  }
  return;
}



// FUNCTION 1407d8030 FUN_1407d8030 body=23 status=ok
// SIG undefined FUN_1407d8030(void)

void FUN_1407d8030(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x588) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001407d803f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x588) + 0x900))();
    return;
  }
  return;
}



// FUNCTION 1407d8050 FUN_1407d8050 body=31 status=ok
// SIG undefined FUN_1407d8050(void)

void FUN_1407d8050(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1407cb650();
  if (lVar1 != 0) {
    FUN_1407d7830(lVar1);
    return;
  }
  return;
}



// FUNCTION 1407d8070 ResizeAllocation body=163 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<16,TSizedDefaultAllocator<32>_>::
     ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x140);
  if (param_3 < 0x11) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x14);
    pvVar1 = *(void **)((longlong)param_1 + 0x140);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x140) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x14);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x140) = uVar2;
  return;
}



// FUNCTION 1407d8120 ResizeAllocation body=163 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<8,FDefaultAllocator>::
     ForElementType<FObjectInitializer::FOverrides::FOverride>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xc0);
  if (param_3 < 9) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x18);
    pvVar1 = *(void **)((longlong)param_1 + 0xc0);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0xc0) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x18);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0xc0) = uVar2;
  return;
}



// FUNCTION 1407d81d0 FUN_1407d81d0 body=161 status=ok
// SIG undefined FUN_1407d81d0(void)

void FUN_1407d81d0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x800);
  if (param_3 < 0x41) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 5);
    pvVar1 = *(void **)((longlong)param_1 + 0x800);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x800) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 5);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x800) = uVar2;
  return;
}



// FUNCTION 1407d8280 ResizeAllocation body=161 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<16,FDefaultAllocator>::ForElementType<FVector4>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x100);
  if (param_3 < 0x11) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 4);
    pvVar1 = *(void **)((longlong)param_1 + 0x100);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x100) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 4);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x100) = uVar2;
  return;
}



// FUNCTION 1407d8330 FUN_1407d8330 body=166 status=ok
// SIG undefined FUN_1407d8330(void)

void FUN_1407d8330(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x2800);
  if (param_3 < 0x101) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x28);
    pvVar1 = *(void **)((longlong)param_1 + 0x2800);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x2800) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x28);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x2800) = uVar2;
  return;
}



// FUNCTION 1407d83e0 ResizeAllocation body=149 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<1,TSizedDefaultAllocator<32>_>::
     ForElementType<TSharedPtr<FGameplayAbilityTargetData,0>_>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (param_3 < 2) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 4);
    pvVar1 = *(void **)((longlong)param_1 + 0x10);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x10) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 4);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar2;
  return;
}



// FUNCTION 1407d8480 ResizeForCopy body=112 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<unsigned_int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy
               (longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != param_3) {
    TInlineAllocator<4,FDefaultAllocator>::ForElementType<unsigned_int>::ResizeAllocation
              (param_1,0,iVar1,4);
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}



// FUNCTION 1407d84f0 ResizeForCopy body=139 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeForCopy
               (longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      uVar2 = 8;
    }
    else {
      uVar3 = FMemory::QuantizeSize((longlong)(int)param_2 << 2,0);
      uVar2 = (uint)(uVar3 >> 2);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (uVar2 < 9) {
      if (lVar1 == 0) goto LAB_1407d8568;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar2 == 0)) goto LAB_1407d8568;
      lVar5 = (longlong)(int)uVar2 << 2;
    }
    uVar4 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
  }
LAB_1407d8568:
  *(uint *)(param_1 + 0x2c) = uVar2;
  return;
}



// FUNCTION 1407d8580 ResizeForCopy body=132 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FLiveLinkFrame,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x90,0);
    iVar3 = (int)(uVar1 / 0x90);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x90,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1407d8610 FUN_1407d8610 body=115 status=ok
// SIG undefined FUN_1407d8610(void)

void FUN_1407d8610(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != param_3) {
    TInlineAllocator<16,FDefaultAllocator>::ForElementType<FVector4>::ResizeAllocation
              (param_1,0,iVar1,0x10);
  }
  *(int *)(param_1 + 0x10c) = iVar1;
  return;
}



// FUNCTION 1407d8690 ResizeForCopy body=132 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
     ResizeForCopy(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      iVar2 = 8;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != param_3) {
    TInlineAllocator<8,FDefaultAllocator>::ForElementType<FObjectInitializer::FOverrides::FOverride>
    ::ResizeAllocation(param_1,0,iVar2,0x18);
  }
  *(int *)(param_1 + 0xcc) = iVar2;
  return;
}



// FUNCTION 1407d8720 ResizeForCopy body=142 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FInAppPurchaseProductInfo,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0xa8,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x8618618618618619) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 7);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if ((iVar4 != param_3) && ((*param_1 != 0 || (iVar4 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xa8,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  return;
}



// FUNCTION 1407d87b0 ResizeGrow body=240 status=ok
// SIG undefined ResizeGrow(void)

void TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x48);
  if (uVar1 < 9) {
    uVar2 = 8;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x4c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 8,0);
    uVar2 = (uint)(uVar3 >> 3);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x4c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x40);
  if (uVar2 < 9) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 3);
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
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 3,0);
        *(void **)((longlong)param_1 + 0x40) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 3);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 3;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar5;
  return;
}



// FUNCTION 1407d88a0 ResizeGrow body=124 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar2 = 4;
  if (4 < uVar1) {
    if ((*(int *)(param_1 + 0x2c) != 0) || (4 < uVar1)) {
      uVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(uVar2 * 8,0);
    uVar2 = uVar3 >> 3 & 0xffffffff;
    if ((int)(uVar3 >> 3) < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x2c) = (int)uVar2;
  FUN_140717c90(param_1,param_2,uVar2,8);
  return;
}



// FUNCTION 1407d8920 FUN_1407d8920 body=157 status=ok
// SIG undefined FUN_1407d8920(void)

void FUN_1407d8920(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x148);
  if (uVar1 < 0x11) {
    iVar4 = 0x10;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0x14c) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x14,0);
    iVar4 = (int)(uVar3 / 0x14);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x14c) = iVar4;
  TInlineAllocator<16,TSizedDefaultAllocator<32>_>::
  ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>::ResizeAllocation(param_1,param_2,iVar4,0x14)
  ;
  return;
}



// FUNCTION 1407d89c0 ResizeGrow body=157 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FCompactPose,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (uVar1 < 9) {
    iVar4 = 8;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0xcc) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x18,0);
    iVar4 = (int)(uVar3 / 0x18);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0xcc) = iVar4;
  TInlineAllocator<8,FDefaultAllocator>::ForElementType<FObjectInitializer::FOverrides::FOverride>::
  ResizeAllocation(param_1,param_2,iVar4,0x18);
  return;
}



// FUNCTION 1407d8a60 FUN_1407d8a60 body=138 status=ok
// SIG undefined FUN_1407d8a60(void)

void FUN_1407d8a60(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x128,0);
  iVar4 = (int)(uVar3 / 0x128);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x128,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1407d8af0 ResizeGrow body=137 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TInlineAllocator<64,FDefaultAllocator>_>
     ::ResizeGrow(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x808);
  if (uVar1 < 0x41) {
    iVar2 = 0x40;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x80c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 5,0);
    iVar2 = (int)(uVar3 >> 5);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x80c) = iVar2;
  FUN_1407d81d0(param_1,param_2,iVar2,0x20);
  return;
}



// FUNCTION 1407d8b80 ResizeGrow body=137 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FNiagaraRendererVariableInfo,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::
     ResizeGrow(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (uVar1 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x10c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 4,0);
    iVar2 = (int)(uVar3 >> 4);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x10c) = iVar2;
  TInlineAllocator<16,FDefaultAllocator>::ForElementType<FVector4>::ResizeAllocation
            (param_1,param_2,iVar2,0x10);
  return;
}



// FUNCTION 1407d8c10 ResizeGrow body=151 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar4 = FMemory::QuantizeSize(lVar3 * 0xa8,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x8618618618618619) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 7);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0xa8,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 1407d8cb0 FUN_1407d8cb0 body=140 status=ok
// SIG undefined FUN_1407d8cb0(void)

void FUN_1407d8cb0(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x140,0);
  iVar4 = (int)(uVar3 / 0x140);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x140,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1407d8d40 FUN_1407d8d40 body=154 status=ok
// SIG undefined FUN_1407d8d40(void)

void FUN_1407d8d40(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x2808);
  iVar4 = 0x100;
  if (0x100 < uVar1) {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0x280c) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x28,0);
    iVar4 = (int)(uVar3 / 0x28);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x280c) = iVar4;
  FUN_1407d8330(param_1,param_2,iVar4,0x28);
  return;
}



// FUNCTION 1407d8de0 FUN_1407d8de0 body=291 status=ok
// SIG undefined FUN_1407d8de0(void)

void FUN_1407d8de0(void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x1690);
  if (uVar1 < 0x15) {
    uVar5 = 0x14;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x1694) != 0) || (4 < uVar1)) {
      lVar6 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar2 = FMemory::QuantizeSize(lVar6 * 0x120,0);
    uVar5 = (uint)(uVar2 / 0x120);
    if ((int)uVar5 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x1694) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0x1680);
  if (uVar5 < 0x15) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)param_2 * 0x120);
    pvVar3 = *(void **)((longlong)param_1 + 0x1680);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0x120,0);
        *(void **)((longlong)param_1 + 0x1680) = pvVar3;
      }
      _guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)param_2 * 0x120);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0x120;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x1680) = uVar4;
  return;
}



// FUNCTION 1407d8f10 FUN_1407d8f10 body=138 status=ok
// SIG undefined FUN_1407d8f10(void)

void FUN_1407d8f10(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x2810,0);
  iVar4 = (int)(uVar3 / 0x2810);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x2810,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1407d8fa0 ResizeGrow body=128 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FSlateCachedClipState,TInlineAllocator<1,TSizedDefaultAllocator<32>_>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 < 2) {
    iVar2 = 1;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x1c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 4,0);
    iVar2 = (int)(uVar3 >> 4);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x1c) = iVar2;
  TInlineAllocator<1,TSizedDefaultAllocator<32>_>::
  ForElementType<TSharedPtr<FGameplayAbilityTargetData,0>_>::ResizeAllocation
            (param_1,param_2,iVar2,0x10);
  return;
}



// FUNCTION 1407d9020 ResizeGrow body=283 status=ok
// SIG undefined ResizeGrow(void)

void TArray<`anonymous_namespace'::FKerningOnlyTextSequenceEntry,TInlineAllocator<4,FDefaultAllocator>_>
     ::ResizeGrow(void *param_1,int param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar4 = *(uint *)((longlong)param_1 + 0xa8);
  uVar5 = 4;
  if (4 < uVar4) {
    if ((*(int *)((longlong)param_1 + 0xac) != 0) || (4 < uVar4)) {
      uVar5 = (longlong)(int)uVar4 + 0x10 + ((ulonglong)((longlong)(int)uVar4 * 3) >> 3);
    }
    uVar1 = FMemory::QuantizeSize(uVar5 * 0x28,0);
    uVar5 = uVar1 / 0x28 & 0xffffffff;
    if ((int)(uVar1 / 0x28) < (int)uVar4) {
      uVar5 = 0x7fffffff;
    }
  }
  uVar4 = (uint)uVar5;
  *(uint *)((longlong)param_1 + 0xac) = uVar4;
  pvVar2 = *(void **)((longlong)param_1 + 0xa0);
  if (uVar4 < 5) {
    if (pvVar2 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar2,(longlong)param_2 * 0x28);
    pvVar2 = *(void **)((longlong)param_1 + 0xa0);
    if (pvVar2 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
      if (uVar4 != 0) {
        pvVar2 = (void *)FMemory::Realloc(0,(longlong)(int)uVar4 * 0x28,0);
        *(void **)((longlong)param_1 + 0xa0) = pvVar2;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar2,param_1,(longlong)param_2 * 0x28);
      return;
    }
    lVar6 = (longlong)(int)uVar4 * 0x28;
  }
  uVar3 = FMemory::Realloc(pvVar2,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0xa0) = uVar3;
  return;
}



// FUNCTION 1407d9140 ResizeShrink body=159 status=ok
// SIG undefined ResizeShrink(void)

void TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeShrink(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x88);
  uVar3 = *(uint *)(param_1 + 0x8c);
  if (uVar2 < 0x11) {
    uVar2 = 0x10;
    goto LAB_1407d91b2;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 3)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 3,0);
        uVar3 = *(uint *)(param_1 + 0x8c);
        uVar2 = (uint)(uVar1 >> 3);
      }
      goto LAB_1407d91b2;
    }
    if (uVar2 == 0) goto LAB_1407d91b2;
  }
  uVar2 = uVar3;
LAB_1407d91b2:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x8c) = uVar2;
    TInlineAllocator<16,TSizedDefaultAllocator<32>_>::ForElementType<FGameplayTag>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x88),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 1407d91e0 ResizeShrink body=162 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FSvoNode,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  iVar5 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar6 - iVar5);
  if ((0x3fff < uVar2 * 0x70) || (uVar2 = (ulonglong)(uint)(iVar6 * 2), iVar5 * 3 < iVar6 * 2)) {
    if (0x40 < (uint)(iVar6 - iVar5)) {
      if (0 < iVar5) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar5 * 0x70,0);
        iVar6 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        lVar4 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
        uVar2 = SUB168(ZEXT816(0x2492492492492493) * auVar1,0);
        iVar5 = (int)((uVar3 - lVar4 >> 1) + lVar4 >> 6);
      }
      goto LAB_1407d9254;
    }
    if (iVar5 == 0) goto LAB_1407d9254;
  }
  iVar5 = iVar6;
LAB_1407d9254:
  if (iVar5 != iVar6) {
    *(int *)((longlong)param_1 + 0xc) = iVar5;
    if ((*param_1 != 0) || (iVar5 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x70,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1407d9290 FUN_1407d9290 body=159 status=ok
// SIG undefined FUN_1407d9290(void)

void FUN_1407d9290(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x808);
  uVar3 = *(uint *)(param_1 + 0x80c);
  if (uVar2 < 0x41) {
    uVar2 = 0x40;
    goto LAB_1407d9302;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 5)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 5,0);
        uVar3 = *(uint *)(param_1 + 0x80c);
        uVar2 = (uint)(uVar1 >> 5);
      }
      goto LAB_1407d9302;
    }
    if (uVar2 == 0) goto LAB_1407d9302;
  }
  uVar2 = uVar3;
LAB_1407d9302:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x80c) = uVar2;
    FUN_1407d81d0(param_1,*(undefined4 *)(param_1 + 0x808),uVar2,0x20);
    return;
  }
  return;
}



// FUNCTION 1407d9330 ResizeShrink body=159 status=ok
// SIG undefined ResizeShrink(void)

void TArray<D3D12_STATE_SUBOBJECT,TInlineAllocator<16,FDefaultAllocator>_>::ResizeShrink
               (longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x108);
  uVar3 = *(uint *)(param_1 + 0x10c);
  if (uVar2 < 0x11) {
    uVar2 = 0x10;
    goto LAB_1407d93a2;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 4)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 4,0);
        uVar3 = *(uint *)(param_1 + 0x10c);
        uVar2 = (uint)(uVar1 >> 4);
      }
      goto LAB_1407d93a2;
    }
    if (uVar2 == 0) goto LAB_1407d93a2;
  }
  uVar2 = uVar3;
LAB_1407d93a2:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x10c) = uVar2;
    TInlineAllocator<16,FDefaultAllocator>::ForElementType<FVector4>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x108),uVar2,0x10);
    return;
  }
  return;
}



// FUNCTION 1407d93d0 FUN_1407d93d0 body=165 status=ok
// SIG undefined FUN_1407d93d0(void)

ulonglong FUN_1407d93d0(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x2810) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x2810,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xcc7b01ff3384fe01) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x2810);
      }
      goto LAB_1407d9444;
    }
    if (iVar4 == 0) goto LAB_1407d9444;
  }
  iVar4 = iVar5;
LAB_1407d9444:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x2810,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1407d9480 ResizeTo body=127 status=ok
// SIG undefined ResizeTo(void)

void TArray<TTuple<FMovieSceneSequenceID,FGuid>,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::
     ResizeTo(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x11) {
      iVar2 = 0x10;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x14,0);
      iVar2 = (int)(uVar1 / 0x14);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x14c)) {
    *(int *)(param_1 + 0x14c) = iVar2;
    TInlineAllocator<16,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<FMovieSceneSequenceID,FGuid>_>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x148),iVar2,0x14);
  }
  return;
}



// FUNCTION 1407d9500 ResizeTo body=127 status=ok
// SIG undefined ResizeTo(void)

void TArray<FMovieSceneEntityAndAnimTypeID,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      iVar2 = 8;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xcc) = iVar2;
    TInlineAllocator<8,FDefaultAllocator>::ForElementType<FObjectInitializer::FOverrides::FOverride>
    ::ResizeAllocation(param_1,*(undefined4 *)(param_1 + 200),iVar2,0x18);
  }
  return;
}



// FUNCTION 1407d9580 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<296,8>_>,TSizedDefaultAllocator<32>_>::
     ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x128,0);
    iVar3 = (int)(uVar1 / 0x128);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x128,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1407d9600 ResizeTo body=110 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TInlineAllocator<64,FDefaultAllocator>_>
     ::ResizeTo(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x41) {
      iVar1 = 0x40;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 5,0);
      iVar1 = (int)(uVar2 >> 5);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x80c)) {
    *(int *)(param_1 + 0x80c) = iVar1;
    FUN_1407d81d0(param_1,*(undefined4 *)(param_1 + 0x808),iVar1,0x20);
  }
  return;
}



// FUNCTION 1407d9670 ResizeTo body=130 status=ok
// SIG undefined ResizeTo(void)

void TArray<FDragonData_SpineFeetPair,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0xa8,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x8618618618618619) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 7);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xa8,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 1407d9700 FUN_1407d9700 body=130 status=ok
// SIG undefined FUN_1407d9700(void)

void FUN_1407d9700(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x101) {
      iVar2 = 0x100;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x28,0);
      iVar2 = (int)(uVar1 / 0x28);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x280c)) {
    *(int *)(param_1 + 0x280c) = iVar2;
    FUN_1407d8330(param_1,*(undefined4 *)(param_1 + 0x2808),iVar2,0x28);
  }
  return;
}



// FUNCTION 1407d9790 FUN_1407d9790 body=256 status=ok
// SIG undefined FUN_1407d9790(void)

void FUN_1407d9790(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  
  if ((*(char *)(param_1 + 0xfc) == '\0') &&
     (plVar1 = (longlong *)FUN_142c6f130(), plVar1 != (longlong *)0x0)) {
    uVar2 = FUN_142e39920();
    plVar3 = (longlong *)(**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if ((plVar3 != (longlong *)0x0) &&
       ((plVar3[0x2f] != 0 && (*(longlong *)(plVar3[0x2f] + 400) == 0)))) {
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x1b9) == '\0') {
        bVar5 = *(byte *)(plVar3 + 0x96);
        if (bVar5 - 1 < 2) {
          bVar5 = 3;
        }
      }
      else {
        bVar5 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0x1b8);
      }
      (**(code **)(*plVar3 + 0x5a0))(plVar3,bVar5,0);
      FUN_142cf3f20(plVar3,0);
    }
    uVar2 = UScrollBox::GetPrivateStaticClass();
    lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar4 != 0) {
      FUN_142dbb5d0(lVar4 + 0x3d0,&DAT_14685c1b0);
    }
    if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x1ba) != '\0') {
      FUN_142db61a0(param_1 + 0x440,1);
    }
  }
  return;
}



// FUNCTION 1407d9890 FUN_1407d9890 body=336 status=ok
// SIG undefined FUN_1407d9890(void)

void FUN_1407d9890(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 local_128 [8];
  char local_120;
  undefined1 local_78 [80];
  longlong *local_28;
  
  iVar8 = *param_2;
  if ((((-1 < iVar8) && (iVar8 < *(int *)(param_1 + 600))) &&
      (lVar7 = (longlong)iVar8 * 0x140 + *(longlong *)(param_1 + 0x250), lVar7 != 0)) &&
     (iVar8 = 0, 0 < *(int *)(lVar7 + 0x78))) {
    do {
      FUN_1407bc410(local_128,(longlong)iVar8 * 0xa8 + *(longlong *)(lVar7 + 0x70));
      if (local_120 == '\x02') {
        uVar6 = FUN_1407bc120(local_78,lVar7,local_128);
        FUN_1407dc070(param_1,param_2,local_128,uVar6);
        plVar5 = local_28;
        if (local_28 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_28 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_28)(local_28);
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
      FUN_1407be530((longlong)iVar8 * 0xa8 + *(longlong *)(lVar7 + 0x70),local_128);
      FUN_1407be070(local_128);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(lVar7 + 0x78));
  }
  return;
}



// FUNCTION 1407d99e0 FUN_1407d99e0 body=423 status=ok
// SIG undefined FUN_1407d99e0(void)

void FUN_1407d99e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 local_res8 [2];
  undefined1 local_78 [80];
  longlong *local_28;
  
  iVar7 = *(int *)(param_1 + 0x248);
  if (iVar7 < *(int *)(param_1 + 600)) {
    do {
      cVar5 = FUN_1407c3110(param_1);
      if (cVar5 == '\0') {
        return;
      }
      lVar9 = (longlong)iVar7 * 0x140 + *(longlong *)(param_1 + 0x250);
      if ((((*(char *)(lVar9 + 8) != '\0') && (*(char *)(lVar9 + 9) != '\0')) &&
          (0 < *(int *)(lVar9 + 0x6c))) && (*(char *)(lVar9 + 10) != '\0')) {
        lVar8 = *(longlong *)(lVar9 + 0x70);
        lVar10 = (longlong)*(int *)(lVar9 + 0x78) * 0xa8 + lVar8;
        for (; lVar8 != lVar10; lVar8 = lVar8 + 0xa8) {
          if ((*(char *)(lVar8 + 8) == '\x02') &&
             (((*(char *)(lVar8 + 0x7c) != '\0' || (*(int *)(lVar8 + 0x68) == 0)) ||
              (*(int *)(lVar8 + 0x68) + *(int *)(param_1 + 0x23c) <= *(int *)(param_1 + 0x1c0))))) {
            if ((*(char *)(lVar8 + 0x1b) == '\0') || (*(longlong *)(lVar8 + 0x98) != 0)) {
              local_res8[0] = *(undefined4 *)(param_1 + 0x248);
              uVar6 = FUN_1407bc120(local_78,lVar9,lVar8);
              FUN_1407dc070(param_1,local_res8,lVar8,uVar6);
              plVar4 = local_28;
              if (local_28 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_28 + 1;
                lVar3 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar3 == 1) {
                  (**(code **)*local_28)(local_28);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar4 + 0xc);
                  iVar7 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*plVar4 + 8))(plVar4,1);
                  }
                }
              }
              cVar5 = FUN_1407c3110(param_1);
              if (cVar5 == '\0') break;
            }
            else {
              FUN_1407c4430(lVar9,lVar8);
            }
          }
        }
      }
      iVar7 = *(int *)(param_1 + 0x248) + 1;
      *(int *)(param_1 + 0x248) = iVar7;
    } while (iVar7 < *(int *)(param_1 + 600));
  }
  return;
}



// FUNCTION 1407d9b90 FUN_1407d9b90 body=176 status=ok
// SIG undefined FUN_1407d9b90(void)

void FUN_1407d9b90(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int local_res8 [2];
  
  uVar3 = 0;
  uVar5 = uVar3;
  if ((param_1 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 != 0)) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14625a720,local_res8,lVar1);
    if ((local_res8[0] != -1) &&
       (lVar1 = DAT_14625a720 + (longlong)local_res8[0] * 0x18, lVar1 != 0)) {
      uVar5 = *(ulonglong *)(lVar1 + 8);
    }
  }
  if ((uVar5 != 0) && (uVar4 = uVar3, 0 < *(int *)(uVar5 + 600))) {
    do {
      if (*(char *)(*(longlong *)(uVar5 + 0x250) + 9 + uVar4) != '\0') {
        local_res8[0] = (int)uVar3;
        FUN_1407d9890(uVar5,local_res8);
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar4 = uVar4 + 0x140;
    } while ((int)uVar2 < *(int *)(uVar5 + 600));
  }
  return;
}



// FUNCTION 1407d9c40 FUN_1407d9c40 body=629 status=ok
// SIG undefined FUN_1407d9c40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1407d9c40(longlong param_1,undefined8 param_2,float *param_3,undefined4 param_4)

{
  int iVar1;
  float *pfVar2;
  undefined1 *puVar3;
  longlong lVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  undefined1 auStack_108 [32];
  uint local_e8 [2];
  float local_e0 [2];
  undefined1 local_d8 [8];
  uint *local_d0;
  float *local_c8;
  float local_b8;
  char local_b4;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  int local_7c;
  undefined1 local_78 [8];
  undefined1 *local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  pfVar7 = (float *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_88 = 0;
  local_7c = 0;
  local_70 = (undefined1 *)0x0;
  local_68 = 0;
  local_b8 = 0.0;
  local_b4 = '\0';
  local_80 = 0xffffffff;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
            (&local_b0,*(undefined4 *)(param_1 + 0x808));
  local_e8[0] = 0;
  pfVar6 = pfVar7;
  if (0 < *(int *)(param_1 + 0x808)) {
    do {
      uVar5 = (uint)pfVar6;
      lVar4 = *(longlong *)(param_1 + 0x800);
      if (*(longlong *)(param_1 + 0x800) == 0) {
        lVar4 = param_1;
      }
      local_e0[0] = *(float *)(lVar4 + 8 + (longlong)(int)uVar5 * 0x20);
      if ((1e-08 < local_e0[0]) || (local_b4 != '\0')) {
        if ((int)local_a8 != local_7c) {
          puVar3 = local_78;
          if (local_70 != (undefined1 *)0x0) {
            puVar3 = local_70;
          }
          iVar1 = *(int *)(puVar3 + (longlong)(int)(local_68 - 1U & uVar5) * 4);
          while (iVar1 != -1) {
            lVar4 = (longlong)iVar1;
            if (*(uint *)(local_b0 + lVar4 * 0x10) == uVar5) {
              pfVar6 = (float *)(local_b0 + lVar4 * 0x10);
              if (iVar1 != -1) goto LAB_1407d9d83;
              break;
            }
            iVar1 = *(int *)(local_b0 + 8 + lVar4 * 0x10);
          }
        }
        pfVar6 = pfVar7;
LAB_1407d9d83:
        pfVar2 = pfVar6 + 1;
        if (pfVar6 == (float *)0x0) {
          pfVar2 = pfVar7;
        }
        if (pfVar2 != (float *)0x0) {
          local_b8 = local_b8 - *pfVar2;
        }
        local_b8 = local_b8 + local_e0[0];
        local_d0 = local_e8;
        local_c8 = local_e0;
        FUN_1407b93f0(&local_b0,local_d8,&local_d0,0);
        uVar5 = local_e8[0];
      }
      local_e8[0] = uVar5 + 1;
      pfVar6 = (float *)(ulonglong)local_e8[0];
    } while ((int)local_e8[0] < *(int *)(param_1 + 0x808));
  }
  local_e8[0] = 0xffffffff;
  FUN_1407d9ec0(&local_b8,local_e8,param_4);
  uVar5 = local_e8[0];
  if (((param_3 != (float *)0x0) && (-1 < (int)local_e8[0])) &&
     ((int)local_e8[0] < *(int *)(param_1 + 0x808))) {
    if (local_b8 <= 0.0) {
      fVar8 = 1.0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x800);
      if (*(longlong *)(param_1 + 0x800) == 0) {
        lVar4 = param_1;
      }
      fVar8 = *(float *)(lVar4 + 8 + (longlong)(int)local_e8[0] * 0x20) / local_b8;
    }
    *param_3 = fVar8;
  }
  local_68 = 0;
  if (local_70 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_b0);
  return uVar5;
}



// FUNCTION 1407d9ec0 FUN_1407d9ec0 body=591 status=ok
// SIG undefined FUN_1407d9ec0(void)

longlong FUN_1407d9ec0(float *param_1,undefined4 *param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  float fVar10;
  longlong lVar11;
  float *pfVar12;
  uint uVar13;
  float *pfVar14;
  float fVar15;
  int local_a8;
  uint uStack_a4;
  float fStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_80;
  uint uStack_7c;
  float *local_78;
  uint uStack_70;
  float fStack_6c;
  undefined8 local_68;
  float *local_60;
  undefined8 uStack_58;
  float *pfStack_50;
  uint uStack_48;
  float fStack_44;
  undefined8 uStack_40;
  
  fVar15 = 0.0;
  if (param_3 < 0.0) {
    iVar7 = rand();
    param_3 = (float)iVar7 * 3.051851e-05;
  }
  fVar2 = *param_1;
  pfVar12 = param_1 + 2;
  uStack_a4 = 1;
  fVar3 = param_1[0xc];
  pfVar1 = param_1 + 6;
  local_a8 = 0;
  fStack_94 = 0.0;
  iStack_90 = 0;
  if (fVar3 != 0.0) {
    pfVar14 = *(float **)(param_1 + 10);
    if (*(float **)(param_1 + 10) == (float *)0x0) {
      pfVar14 = pfVar1;
    }
    fVar4 = *pfVar14;
    iStack_90 = 0;
    local_a8 = 0;
    while (fVar4 == 0.0) {
      lVar11 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar7 = local_a8 + 1;
      bVar6 = (int)((int)fVar3 + -1 + ((int)fVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar7;
      if (bVar6) goto LAB_1407d9fbc;
      fVar4 = pfVar14[lVar11 + 1];
    }
    uStack_a4 = -(int)fVar4 & (uint)fVar4;
    iVar7 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    fStack_94 = (float)((iStack_90 - iVar7) + 0x1f);
    if ((int)fVar3 < (int)fStack_94) {
LAB_1407d9fbc:
      fStack_94 = fVar3;
    }
  }
  fVar4 = param_1[0xc];
  uStack_70 = 0xffffffff;
  fStack_6c = fStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  uVar13 = (uint)fVar4 & 0xffffffe0;
  iStack_80 = local_a8;
  uStack_7c = uStack_a4;
  local_78 = pfVar1;
  local_60 = pfVar12;
  pfStack_50 = pfVar1;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  fStack_44 = fStack_6c;
  fStack_94 = fVar4;
  if (fVar4 != fVar3) {
    pfVar14 = *(float **)(param_1 + 10);
    if (*(float **)(param_1 + 10) == (float *)0x0) {
      pfVar14 = pfVar1;
    }
    fVar10 = (float)((uint)pfVar14[(int)fVar4 >> 5] & -1 << (SUB41(fVar4,0) & 0x1f));
    iVar7 = (int)fVar4 >> 5;
    while (fVar10 == 0.0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((int)fVar3 + -1 + ((int)fVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7)
      goto LAB_1407da081;
      fVar10 = pfVar14[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar8 = -(int)fVar10 & (uint)fVar10;
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
    fStack_94 = (float)((uVar13 - iVar7) + 0x1f);
    if ((int)fVar3 < (int)fStack_94) {
LAB_1407da081:
      fStack_94 = fVar3;
    }
  }
  while( true ) {
    if ((fStack_6c == fStack_94) && (local_78 == pfVar1)) {
      return (ulonglong)(uint7)(int7)(int3)((uint)fStack_6c >> 8) << 8;
    }
    puVar9 = (undefined4 *)((longlong)(int)fStack_6c * 0x10 + *(longlong *)pfVar12);
    if ((fVar15 <= param_3 * fVar2) && (param_3 * fVar2 <= fVar15 + (float)puVar9[1])) break;
    fVar15 = fVar15 + (float)puVar9[1];
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  uVar5 = *puVar9;
  *param_2 = uVar5;
  return CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
}



// FUNCTION 1407da110 FUN_1407da110 body=182 status=ok
// SIG undefined FUN_1407da110(void)

void FUN_1407da110(longlong param_1,longlong param_2)

{
  int iVar1;
  
  FArchive::UsingCustomVersion(param_2,&DAT_14625a7b0);
  if (((*(byte *)(param_2 + 0x28) & 2) != 0) && (*(longlong *)(param_1 + 0xa0) != 0)) {
    FUN_1407d6050(param_1);
  }
  FUN_141763960(param_1,param_2);
  if ((*(byte *)(param_2 + 0x28) & 2) == 0) {
    if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
      iVar1 = FArchive::CustomVer(param_2,&DAT_14625a7b0);
      if (-1 < iVar1) {
        FUN_1407be710(param_2,param_1 + 0xf8);
        FUN_1407c67d0(param_1);
        FUN_1407c67d0(param_1);
        if ((*(uint *)(param_1 + 8) >> 5 & 1) == 0) {
          return;
        }
      }
      FUN_1407d5c20(param_1);
    }
    return;
  }
  FUN_1407be710(param_2,param_1 + 0xf8);
  return;
}



// FUNCTION 1407da1d0 FUN_1407da1d0 body=90 status=ok
// SIG undefined FUN_1407da1d0(void)

void FUN_1407da1d0(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  FArchive::UsingCustomVersion(param_2,&DAT_14625a7a0);
  FUN_141763960(param_1,param_2);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    iVar1 = FArchive::CustomVer(param_2,&DAT_14625a7a0);
    if (iVar1 < 0) {
      (**(code **)(*param_1 + 0x280))(param_1);
    }
  }
  return;
}



// FUNCTION 1407da230 FUN_1407da230 body=19 status=ok
// SIG undefined FUN_1407da230(void)

void FUN_1407da230(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 0x588) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x588) + 0x8c8) = param_2;
  }
  return;
}



// FUNCTION 1407da250 SetEnableSpectralAnalysis body=7 status=ok
// SIG undefined SetEnableSpectralAnalysis(void)

void UMediaSoundComponent::SetEnableSpectralAnalysis(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x8c8) = param_2;
  return;
}



// FUNCTION 1407da260 FUN_1407da260 body=10 status=ok
// SIG undefined FUN_1407da260(void)

void FUN_1407da260(longlong param_1,undefined1 param_2)

{
  if (*(char *)(param_1 + 0x55) == '\0') {
    *(undefined1 *)(param_1 + 0x54) = param_2;
  }
  return;
}



// FUNCTION 1407da270 FUN_1407da270 body=539 status=ok
// SIG undefined FUN_1407da270(void)

void FUN_1407da270(longlong param_1,char param_2)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong local_res8;
  longlong local_res18;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  
  if (*(longlong *)(param_1 + 0x588) != 0) {
    if (param_2 == '\0') {
      pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ASpawner::OnSpawningComplete",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
        pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      plVar1 = (longlong *)(param_1 + 0x4c0);
      lVar5 = *plVar1;
      iVar10 = *(int *)(param_1 + 0x4c8);
      for (lVar11 = lVar5; lVar11 != (longlong)iVar10 * 0x10 + lVar5; lVar11 = lVar11 + 0x10) {
        if ((*(longlong *)(lVar11 + 8) == local_res8) &&
           (lVar6 = FWeakObjectPtr::GetEvenIfUnreachable(lVar11), param_1 == lVar6)) {
          iVar10 = (int)(lVar11 - lVar5 >> 4);
          if (iVar10 != -1) {
            iVar9 = *(int *)(param_1 + 0x4c8);
            iVar7 = (iVar9 - iVar10) + -1;
            if (0 < iVar7) {
              iVar7 = 1;
            }
            if (iVar7 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar10 * 0x10 + *plVar1),
                         (void *)((longlong)(iVar9 - iVar7) * 0x10 + *plVar1),(longlong)iVar7 << 4);
              iVar9 = *(int *)(param_1 + 0x4c8);
            }
            *(int *)(param_1 + 0x4c8) = iVar9 + -1;
          }
          break;
        }
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    }
    else {
      pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ASpawner::OnSpawningComplete",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
        pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res18,pwVar3 + 2,1);
      plVar1 = (longlong *)(param_1 + 0x4c0);
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      FWeakObjectPtr::operator=(&local_38,param_1);
      local_30 = local_res18;
      local_res8 = 0;
      if ((local_res18 != 0) && (lVar5 = FWeakObjectPtr::Get(&local_38), lVar5 != 0)) {
        UObject::FindFunction(lVar5,local_30);
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      iVar10 = *(int *)(param_1 + 0x4c8);
      *(int *)(param_1 + 0x4c8) = iVar10 + 1;
      if (*(int *)(param_1 + 0x4cc) < iVar10 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar10);
      }
      puVar8 = (undefined4 *)((longlong)iVar10 * 0x10 + *plVar1);
      *puVar8 = local_38;
      puVar8[1] = local_34;
      *(longlong *)(puVar8 + 2) = local_30;
    }
  }
  return;
}



// FUNCTION 1407da490 FUN_1407da490 body=28 status=ok
// SIG undefined FUN_1407da490(void)

void FUN_1407da490(undefined8 param_1,undefined1 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1407cb650();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x2c) = param_2;
  }
  return;
}



// FUNCTION 1407da4b0 FUN_1407da4b0 body=678 status=ok
// SIG undefined FUN_1407da4b0(void)

void FUN_1407da4b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_38;
  
  if ((int)param_2[0x501] != 0) {
    plVar11 = (longlong *)0x0;
    plVar4 = (longlong *)param_2[0x500];
    if ((longlong *)param_2[0x500] == (longlong *)0x0) {
      plVar4 = param_2;
    }
    local_78 = *plVar4;
    lStack_70 = plVar4[1];
    local_68 = plVar4[2];
    lStack_60 = plVar4[3];
    lVar5 = plVar4[4];
    local_38 = lVar5;
    if (((((lVar5 != param_1) || (local_78 == 0)) || (lStack_60 == 0)) ||
        ((local_68 == 0 || (lVar5 == 0)))) ||
       ((*(char *)(lVar5 + 0x740) != '\0' || (cVar3 = FUN_1407cd900(), cVar3 != '\0')))) {
      puVar8 = *(undefined8 **)(param_1 + 0x748);
      plVar4 = (longlong *)((longlong)*(int *)(param_1 + 0x750) & 0x1fffffffffffffff);
      if (puVar8 + *(int *)(param_1 + 0x750) < puVar8) {
        plVar4 = plVar11;
      }
      plVar10 = plVar11;
      if (plVar4 != (longlong *)0x0) {
        do {
          FUN_14248cf90(DAT_146b17150 + 0xcf8,*puVar8);
          plVar10 = (longlong *)((longlong)plVar10 + 1);
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        } while (plVar10 != plVar4);
      }
      *(undefined4 *)(param_1 + 0x750) = 0;
      if (*(int *)(param_1 + 0x754) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x748,0);
      }
    }
    iVar1 = (int)param_2[0x501];
    plVar4 = (longlong *)param_2[0x500];
    *(int *)(param_1 + 0x6f8) = iVar1;
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x6fc) == 0)) {
      *(undefined4 *)(param_1 + 0x6fc) = 0;
    }
    else {
      TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(param_1 + 0x6f0,iVar1);
      if (plVar4 == (longlong *)0x0) {
        plVar4 = param_2;
      }
      _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x6f0),plVar4,(longlong)iVar1 * 0x28);
    }
    lVar2 = *(longlong *)(param_1 + 0x118);
    *(longlong *)(param_1 + 0x718) = local_78;
    *(longlong *)(param_1 + 0x720) = lStack_70;
    *(longlong *)(param_1 + 0x728) = local_68;
    *(longlong *)(param_1 + 0x730) = lStack_60;
    *(longlong *)(param_1 + 0x738) = lVar5;
    plVar4 = (longlong *)FUN_1407c9400(param_1);
    if ((*plVar4 == lVar2) && (*(longlong *)(param_1 + 0x730) != 0)) {
      local_78 = 0;
      lStack_70 = 0;
      lVar5 = FUN_1407cb650();
      if (lVar5 != 0) {
        FUN_1407c7970(lVar5,&local_78,1);
      }
      plVar4 = *(longlong **)(param_1 + 0x748);
      plVar10 = (longlong *)((longlong)*(int *)(param_1 + 0x750) & 0x1fffffffffffffff);
      if (plVar4 + *(int *)(param_1 + 0x750) < plVar4) {
        plVar10 = plVar11;
      }
      plVar9 = plVar11;
      if (plVar10 != (longlong *)0x0) {
        do {
          lVar5 = *plVar4;
          plVar7 = plVar11;
          if (lVar5 != 0) {
            uVar6 = FUN_1407e5ab0();
            plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar6);
          }
          (**(code **)(*plVar7 + 0x18))(plVar7,&local_78);
          plVar4 = plVar4 + 1;
          plVar9 = (longlong *)((longlong)plVar9 + 1);
        } while (plVar9 != plVar10);
      }
      if (local_78 != 0) {
        FMemory::Free();
      }
    }
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 1407da760 FUN_1407da760 body=32 status=ok
// SIG undefined FUN_1407da760(void)

void FUN_1407da760(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar1 = param_1 + 0x60;
  }
  FWeakObjectPtr::operator=(lVar1);
  return;
}



// FUNCTION 1407da780 SetRequestedTestFilter body=7 status=ok
// SIG undefined SetRequestedTestFilter(void)

void FAutomationTestFramework::SetRequestedTestFilter(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c0) = param_2;
  return;
}



// FUNCTION 1407da790 FUN_1407da790 body=102 status=ok
// SIG undefined FUN_1407da790(void)

void FUN_1407da790(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  int local_res8 [8];
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(&DAT_14625a720,local_res8,lVar1);
      if ((local_res8[0] != -1) &&
         (lVar1 = DAT_14625a720 + (longlong)local_res8[0] * 0x18, lVar1 != 0)) {
        lVar1 = *(longlong *)(lVar1 + 8);
        goto LAB_1407da7e5;
      }
    }
  }
  lVar1 = 0;
LAB_1407da7e5:
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x1c0) = param_2;
  }
  return;
}



// FUNCTION 1407da800 FUN_1407da800 body=48 status=ok
// SIG undefined FUN_1407da800(void)

void FUN_1407da800(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 0x28) = 0;
  lVar1 = *(longlong *)(param_1 + 0x70);
  lVar2 = (longlong)*(int *)(param_1 + 0x78) * 0xa8 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0xa8) {
    *(undefined1 *)(lVar1 + 0x7c) = 0;
  }
  return;
}



// FUNCTION 1407da830 FUN_1407da830 body=74 status=ok
// SIG undefined FUN_1407da830(void)

void FUN_1407da830(undefined8 param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_2 + 0x128)) {
    lVar1 = *(longlong *)(param_2 + 0x120);
    if (*(longlong *)(param_2 + 0x120) == 0) {
      lVar1 = param_2 + 0x60;
    }
    lVar1 = FWeakObjectPtr::Get(lVar1);
    if (lVar1 != 0) {
      FUN_14223ef90(lVar1,param_3);
      return;
    }
  }
  return;
}


