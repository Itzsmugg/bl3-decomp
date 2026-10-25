// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141e9b230 FUN_141e9b230 body=265 status=ok
// SIG undefined FUN_141e9b230(void)

int FUN_141e9b230(longlong param_1,char param_2,byte param_3,undefined8 param_4,undefined8 param_5,
                 int *param_6,int *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar9 = (longlong)*(int *)(param_1 + 0x3c);
  uVar7 = (&DAT_1464ca1b8)[lVar9 * 10];
  uVar5 = (&DAT_1464ca1bc)[lVar9 * 10];
  iVar1 = (&DAT_1464ca1c4)[lVar9 * 10];
  uVar3 = *(uint *)(param_1 + 0x60) >> (param_3 & 0x1f);
  uVar6 = uVar7;
  if (uVar7 <= uVar3) {
    uVar6 = uVar3;
  }
  uVar2 = uVar5;
  if (uVar5 <= uVar3) {
    uVar2 = uVar3;
  }
  if (param_2 == '\0') {
    uVar3 = 1;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x68);
    if (uVar4 < 2) {
      uVar4 = 0;
    }
    uVar4 = uVar4 >> (param_3 & 0x1f);
    uVar3 = 1;
    if (uVar4 != 0) {
      uVar3 = uVar4;
    }
  }
  uVar7 = ((uVar7 - 1) + uVar6) / uVar7;
  uVar5 = ((uVar5 - 1) + uVar2) / uVar5;
  uVar4 = uVar5;
  uVar6 = uVar7;
  if (*(int *)(param_1 + 0x3c) - 0x1eU < 2) {
    uVar6 = 2;
    if (1 < uVar7) {
      uVar6 = uVar7;
    }
    uVar4 = 2;
    if (1 < uVar5) {
      uVar4 = uVar5;
    }
  }
  iVar8 = uVar6 * iVar1;
  *param_6 = iVar8;
  if (param_2 == '\0') {
    *param_7 = 0;
  }
  else {
    *param_7 = iVar8 * uVar2;
  }
  return uVar4 * uVar6 * uVar3 * iVar1;
}



// FUNCTION 141e9b340 FUN_141e9b340 body=108 status=ok
// SIG undefined FUN_141e9b340(void)

undefined * FUN_141e9b340(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ab3f20) {
    _Init_thread_header(&DAT_146ab3f20);
    if (DAT_146ab3f20 == -1) {
      atexit(FUN_143e9e760);
      _Init_thread_footer(&DAT_146ab3f20);
      return &DAT_1464c9950;
    }
  }
  return &DAT_1464c9950;
}



// FUNCTION 141e9b3b0 FUN_141e9b3b0 body=1190 status=ok
// SIG undefined FUN_141e9b3b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_141e9b3b0(longlong param_1,int param_2,longlong *param_3,longlong param_4,ulonglong param_5,
                 longlong param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  longlong local_170;
  undefined4 local_168;
  int local_158;
  int local_154;
  int local_150 [2];
  ulonglong local_148;
  longlong local_140;
  int *local_138;
  longlong *local_130;
  undefined1 local_128 [208];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_148 = param_5;
  local_154 = param_2;
  local_140 = param_1;
  local_130 = param_3;
  local_168 = PlatformOpenGLCurrentContext(*(undefined8 *)(param_1 + 0x15c28));
  local_170 = param_6;
  local_178 = param_5;
  uVar3 = FOpenGLFramebufferKey::FOpenGLFramebufferKey(local_128,param_2,param_3,param_4);
  plVar4 = (longlong *)FUN_141e9b860();
  TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
  ::FindId(plVar4,local_150,uVar3);
  if (((local_150[0] != -1) && (lVar5 = (longlong)local_150[0] * 0xe0 + *plVar4, lVar5 != 0)) &&
     (iVar9 = *(int *)(lVar5 + 0xd0), iVar9 != 0)) {
    return iVar9 + -1;
  }
  if (((param_2 != 0) && (*param_3 != 0)) && (*(int *)(*param_3 + 0x10) == 0)) {
    return 0;
  }
  (*DAT_146ab4718)(1,&local_158);
  (*DAT_146ab4708)(0x8d40,local_158);
  iVar7 = param_2 + -1;
  iVar9 = -1;
  if (-1 < iVar7) {
    iVar6 = param_2 + 0x8cdf;
    puVar8 = (undefined4 *)(param_5 + (longlong)iVar7 * 4);
    lVar5 = param_4 - local_148;
    plVar4 = param_3 + iVar7;
    iVar9 = -1;
    do {
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        iVar9 = iVar7;
        if ((param_4 == 0) || (iVar1 = *(int *)(lVar5 + (longlong)puVar8), iVar1 == -1)) {
          uVar10 = *(uint *)(lVar2 + 0x14);
          if (uVar10 < 0x8c1b) {
            if (uVar10 != 0x8c1a) {
              if (uVar10 == 0xde1) goto LAB_141e9b537;
              if ((uVar10 != 0x806f) && (uVar10 != 0x8513)) goto LAB_141e9b693;
            }
          }
          else if (uVar10 != 0x9009) goto LAB_141e9b686;
          (*DAT_146ab4740)(0x8d40,iVar6,*(undefined4 *)(lVar2 + 0x10),*puVar8);
        }
        else {
          uVar10 = *(uint *)(lVar2 + 0x14);
          if (uVar10 < 0x8c1b) {
            if (uVar10 == 0x8c1a) {
LAB_141e9b57d:
              local_178 = CONCAT44(local_178._4_4_,iVar1);
              (*DAT_146ab4770)(0x8d40,iVar6,*(undefined4 *)(lVar2 + 0x10),*puVar8);
            }
            else {
              if (uVar10 != 0xde1) {
                if (uVar10 == 0x806f) {
                  local_170 = CONCAT44(local_170._4_4_,iVar1);
                  local_178 = CONCAT44(local_178._4_4_,*puVar8);
                  (*DAT_146ab4738)(0x8d40,iVar6,0x806f,*(undefined4 *)(lVar2 + 0x10));
                  goto LAB_141e9b5df;
                }
                if (uVar10 != 0x8513) goto LAB_141e9b693;
                uVar10 = iVar1 + 0x8515;
              }
LAB_141e9b537:
              local_178 = CONCAT44(local_178._4_4_,*puVar8);
              (*DAT_146ab4730)(0x8d40,iVar6,uVar10,*(undefined4 *)(lVar2 + 0x10));
            }
          }
          else {
            if (uVar10 == 0x9009) goto LAB_141e9b57d;
LAB_141e9b686:
            if (uVar10 == 0x9100) goto LAB_141e9b537;
LAB_141e9b693:
            (*DAT_146ab4748)(0x8d40,iVar6,0x8d41,*(undefined4 *)(lVar2 + 0x10));
          }
        }
      }
LAB_141e9b5df:
      iVar6 = iVar6 + -1;
      plVar4 = plVar4 + -1;
      puVar8 = puVar8 + -1;
      iVar7 = iVar7 + -1;
      param_5 = local_148;
      param_3 = local_130;
      param_2 = local_154;
    } while (-1 < iVar7);
  }
  if (param_6 == 0) goto LAB_141e9b653;
  uVar10 = *(uint *)(param_6 + 0x14);
  if (uVar10 < 0x8c1b) {
    if (uVar10 != 0x8c1a) {
      if (uVar10 == 0xde1) goto LAB_141e9b6dd;
      if ((uVar10 != 0x806f) && (uVar10 != 0x8513)) goto LAB_141e9b6c0;
    }
  }
  else if (uVar10 != 0x9009) {
    if (uVar10 != 0x9100) {
LAB_141e9b6c0:
      (*DAT_146ab4748)(0x8d40,*(undefined4 *)(param_6 + 0x1c),0x8d41,*(undefined4 *)(param_6 + 0x10)
                      );
      goto LAB_141e9b653;
    }
LAB_141e9b6dd:
    local_178 = local_178 & 0xffffffff00000000;
    (*DAT_146ab4730)(0x8d40,*(undefined4 *)(param_6 + 0x1c),uVar10,*(undefined4 *)(param_6 + 0x10));
    goto LAB_141e9b653;
  }
  (*DAT_146ab4740)(0x8d40,*(undefined4 *)(param_6 + 0x1c),*(undefined4 *)(param_6 + 0x10),0);
LAB_141e9b653:
  if (iVar9 == -1) {
    (*DAT_146ab40f0)(0);
    (*DAT_146ab4008)(0);
    if (param_6 == 0) {
      (*DAT_146ab4710)(1,&local_158);
      local_158 = 0;
      (*DAT_146ab4708)(0x8d40,0);
    }
  }
  else {
    (*DAT_146ab40f0)(iVar9 + 0x8ce0);
    (*DAT_146ab4008)(iVar9 + 0x8ce0);
  }
  local_154 = local_158 + 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ab3f1c) && (_Init_thread_header(&DAT_146ab3f1c), DAT_146ab3f1c == -1))
  {
    _DAT_1464c9900 = 0;
    _DAT_1464c9908 = 0;
    _DAT_1464c9920 = 0;
    _DAT_1464c9928 = 0;
    _DAT_1464c9930 = 0xffffffff;
    _DAT_1464c9934 = 0;
    DAT_1464c9940 = 0;
    _DAT_1464c9948 = 0;
    atexit(FUN_143e9e7e0);
    _Init_thread_footer(&DAT_146ab3f1c);
  }
  local_168 = PlatformOpenGLCurrentContext(*(undefined8 *)(local_140 + 0x15c28));
  local_170 = param_6;
  local_178 = param_5;
  local_140 = FOpenGLFramebufferKey::FOpenGLFramebufferKey(local_128,param_2,param_3,param_4);
  local_138 = &local_154;
  FUN_141e89870(&DAT_1464c9900,local_150,&local_140,0);
  return local_158;
}



// FUNCTION 141e9b860 FUN_141e9b860 body=108 status=ok
// SIG undefined FUN_141e9b860(void)

undefined * FUN_141e9b860(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ab3f1c) {
    _Init_thread_header(&DAT_146ab3f1c);
    if (DAT_146ab3f1c == -1) {
      atexit(FUN_143e9e7e0);
      _Init_thread_footer(&DAT_146ab3f1c);
      return &DAT_1464c9900;
    }
  }
  return &DAT_1464c9900;
}



// FUNCTION 141e9b8d0 GetOpenGLProgramUniformBlockBinding body=398 status=ok
// SIG undefined GetOpenGLProgramUniformBlockBinding(void)

void GetOpenGLProgramUniformBlockBinding(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint *puVar5;
  ulonglong *puVar6;
  uint *puVar7;
  ulonglong *puVar8;
  uint local_res8 [2];
  uint local_res10 [2];
  int local_res18 [2];
  uint *local_res20;
  
  local_res8[0] = param_1;
  local_res10[0] = param_2;
  plVar3 = (longlong *)FUN_141e9bc80();
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    plVar4 = (longlong *)plVar3[8];
    if ((longlong *)plVar3[8] == (longlong *)0x0) {
      plVar4 = plVar3 + 7;
    }
    uVar2 = *(uint *)((longlong)plVar4 +
                     ((longlong)(int)plVar3[9] - 1U & (longlong)(int)local_res8[0]) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar7 = (uint *)((longlong)(int)uVar2 * 0x60 + *plVar3);
        if (*puVar7 == local_res8[0]) {
          if ((uVar2 != 0xffffffff) && (puVar7 != (uint *)0x0)) goto LAB_141e9b986;
          break;
        }
        uVar2 = puVar7[0x16];
      } while (uVar2 != 0xffffffff);
    }
  }
  local_res20 = local_res8;
  FUN_141e89310(plVar3,local_res18,&local_res20,0);
  puVar7 = (uint *)((longlong)local_res18[0] * 0x60 + *plVar3);
LAB_141e9b986:
  puVar1 = puVar7 + 2;
  if (puVar7[4] != puVar7[0xf]) {
    puVar5 = *(uint **)(puVar7 + 0x12);
    if (*(uint **)(puVar7 + 0x12) == (uint *)0x0) {
      puVar5 = puVar7 + 0x10;
    }
    uVar2 = puVar5[(longlong)(int)puVar7[0x14] - 1U & (longlong)(int)local_res10[0]];
    if (uVar2 != 0xffffffff) {
      do {
        puVar8 = (ulonglong *)(*(longlong *)puVar1 + (longlong)(int)uVar2 * 0x18);
        if (*(ulonglong *)(*(longlong *)puVar1 + (longlong)(int)uVar2 * 0x18) ==
            (ulonglong)local_res10[0]) {
          if (uVar2 != 0xffffffff) goto LAB_141e9b9f3;
          break;
        }
        uVar2 = (uint)puVar8[2];
      } while (uVar2 != 0xffffffff);
    }
  }
  puVar8 = (ulonglong *)0x0;
LAB_141e9b9f3:
  puVar6 = puVar8 + 1;
  if (puVar8 == (ulonglong *)0x0) {
    puVar6 = (ulonglong *)0x0;
  }
  if (puVar6 == (ulonglong *)0x0) {
    local_res20 = local_res10;
    FUN_141e88dc0(puVar1,local_res18,&local_res20,0);
    puVar6 = (ulonglong *)(*(longlong *)puVar1 + (longlong)local_res18[0] * 0x18 + 8);
    *puVar6 = 0xffffffffffffffff;
  }
  if (*puVar6 != (ulonglong)param_3) {
    *puVar6 = (ulonglong)param_3;
    (*DAT_146ab4518)(local_res8[0],local_res10[0],param_3);
  }
  return;
}



// FUNCTION 141e9ba60 GetOpenGLProgramUniformBlockIndex body=305 status=ok
// SIG undefined GetOpenGLProgramUniformBlockIndex(void)

ulonglong GetOpenGLProgramUniformBlockIndex(int param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  int local_res8 [4];
  int local_res18 [2];
  int *local_res20;
  
  local_res8[0] = param_1;
  plVar4 = (longlong *)FUN_141e9bcf0();
  if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
    plVar5 = (longlong *)plVar4[8];
    if ((longlong *)plVar4[8] == (longlong *)0x0) {
      plVar5 = plVar4 + 7;
    }
    iVar2 = *(int *)((longlong)plVar5 +
                    ((longlong)(int)plVar4[9] - 1U & (longlong)local_res8[0]) * 4);
    if (iVar2 != -1) {
      do {
        piVar7 = (int *)((longlong)iVar2 * 0x60 + *plVar4);
        if (*piVar7 == local_res8[0]) {
          if ((iVar2 != -1) && (piVar7 != (int *)0x0)) goto LAB_141e9bb06;
          break;
        }
        iVar2 = piVar7[0x16];
      } while (iVar2 != -1);
    }
  }
  local_res20 = local_res8;
  FUN_141e890b0(plVar4,local_res18,&local_res20,0);
  piVar7 = (int *)((longlong)local_res18[0] * 0x60 + *plVar4);
LAB_141e9bb06:
  plVar4 = (longlong *)(piVar7 + 2);
  TSet<TTuple<FOpenGLUniformName,__int64>,TDefaultMapHashableKeyFuncs<FOpenGLUniformName,__int64,0>,FDefaultSetAllocator>
  ::FindId(plVar4,local_res18,param_2);
  puVar8 = (uint *)0x0;
  if (local_res18[0] != -1) {
    puVar8 = (uint *)((longlong)local_res18[0] * 0x20 + *plVar4);
  }
  puVar6 = puVar8 + 4;
  if (puVar8 == (uint *)0x0) {
    puVar6 = (uint *)0x0;
  }
  if (puVar6 == (uint *)0x0) {
    local_res20 = param_2;
    FUN_141e89570(plVar4,local_res18,&local_res20,0);
    lVar1 = *plVar4;
    uVar3 = (*DAT_146ab4418)(local_res8[0],param_2);
    *(ulonglong *)(lVar1 + (longlong)local_res18[0] * 0x20 + 0x10) = (ulonglong)uVar3;
    return (ulonglong)uVar3;
  }
  return (ulonglong)*puVar6;
}



// FUNCTION 141e9bba0 FUN_141e9bba0 body=108 status=ok
// SIG undefined FUN_141e9bba0(void)

undefined8 * FUN_141e9bba0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ab3f2c) {
    _Init_thread_header(&DAT_146ab3f2c);
    if (DAT_146ab3f2c == -1) {
      atexit(FUN_143e9e830);
      _Init_thread_footer(&DAT_146ab3f2c);
      return &DAT_1464c9a40;
    }
  }
  return &DAT_1464c9a40;
}



// FUNCTION 141e9bc10 FUN_141e9bc10 body=108 status=ok
// SIG undefined FUN_141e9bc10(void)

undefined8 * FUN_141e9bc10(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ab3f4c) {
    _Init_thread_header(&DAT_146ab3f4c);
    if (DAT_146ab3f4c == -1) {
      atexit(FUN_143e9e890);
      _Init_thread_footer(&DAT_146ab3f4c);
      return &DAT_1464c9ab0;
    }
  }
  return &DAT_1464c9ab0;
}



// FUNCTION 141e9bc80 FUN_141e9bc80 body=108 status=ok
// SIG undefined FUN_141e9bc80(void)

undefined8 * FUN_141e9bc80(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ab3f28) {
    _Init_thread_header(&DAT_146ab3f28);
    if (DAT_146ab3f28 == -1) {
      atexit(`GetOpenGLUniformBlockBindings'::`2'::
             _dynamic_atexit_destructor_for__UniformBlockBindings__);
      _Init_thread_footer(&DAT_146ab3f28);
      return &DAT_1464c99f0;
    }
  }
  return &DAT_1464c99f0;
}



// FUNCTION 141e9bcf0 FUN_141e9bcf0 body=108 status=ok
// SIG undefined FUN_141e9bcf0(void)

undefined8 * FUN_141e9bcf0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ab3f24) {
    _Init_thread_header(&DAT_146ab3f24);
    if (DAT_146ab3f24 == -1) {
      atexit(`GetOpenGLUniformBlockLocations'::`2'::
             _dynamic_atexit_destructor_for__UniformBlockLocations__);
      _Init_thread_footer(&DAT_146ab3f24);
      return &DAT_1464c99a0;
    }
  }
  return &DAT_1464c99a0;
}



// FUNCTION 141e9bd60 FUN_141e9bd60 body=671 status=ok
// SIG undefined FUN_141e9bd60(void)

longlong * FUN_141e9bd60(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  longlong lVar8;
  void *pvVar9;
  void *pvVar10;
  int iVar11;
  byte bVar12;
  byte *pbVar13;
  uint local_res8;
  void *local_58;
  undefined8 local_50;
  
  iVar5 = *(int *)(param_1 + 1);
  pvVar9 = (void *)*param_1;
  local_58 = (void *)0x0;
  local_50._0_4_ = iVar5;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,(2 - (uint)(iVar5 != 0)) + iVar5,0);
  pvVar10 = local_58;
  _guard_xfg_dispatch_icall_nop(local_58,pvVar9,(longlong)iVar5 * 2);
  iVar5 = (int)local_50;
  lVar8 = (longlong)(int)local_50;
  local_50._0_4_ = (2 - (uint)((int)local_50 != 0)) + (int)local_50;
  if (local_50._4_4_ < (int)local_50) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar5);
    pvVar10 = local_58;
  }
  puVar1 = (undefined2 *)((longlong)pvVar10 + (lVar8 - (ulonglong)(iVar5 != 0)) * 2);
  *puVar1 = 0x2f;
  puVar1[1] = 0;
  piVar4 = (int *)(param_3 + 0xc4);
  *param_2 = (longlong)pvVar10;
  *(int *)(param_2 + 1) = (int)local_50;
  *(int *)((longlong)param_2 + 0xc) = local_50._4_4_;
  local_res8 = 0;
  do {
    if (*piVar4 != 0) {
      iVar11 = 0x14;
      local_58 = (void *)0x0;
      local_50 = 0;
      pbVar13 = (byte *)(param_3 + 0xb0 + (longlong)(int)local_res8 * 200);
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,0x28);
      pvVar9 = local_58;
      iVar5 = (int)local_50;
      do {
        bVar12 = *pbVar13;
        sVar7 = 0x37;
        bVar2 = bVar12 >> 4;
        if (bVar2 < 10) {
          sVar7 = 0x30;
        }
        sVar7 = sVar7 + (ushort)bVar2;
        if (sVar7 != 0) {
          iVar3 = iVar5 + -1;
          if (iVar5 < 1) {
            iVar3 = 0;
          }
          iVar6 = (iVar5 < 1) + 1 + iVar5;
          local_50 = CONCAT44(local_50._4_4_,iVar6);
          if (local_50._4_4_ < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar5);
            pvVar9 = local_58;
            iVar6 = (int)local_50;
          }
          iVar5 = iVar6;
          *(short *)((longlong)pvVar9 + (longlong)iVar3 * 2) = sVar7;
          *(undefined2 *)((longlong)pvVar9 + (longlong)iVar3 * 2 + 2) = 0;
        }
        bVar12 = bVar12 & 0xf;
        sVar7 = 0x37;
        if (bVar12 < 10) {
          sVar7 = 0x30;
        }
        sVar7 = sVar7 + (ushort)bVar12;
        if (sVar7 != 0) {
          iVar3 = iVar5 + -1;
          if (iVar5 < 1) {
            iVar3 = 0;
          }
          iVar6 = (iVar5 < 1) + 1 + iVar5;
          local_50 = CONCAT44(local_50._4_4_,iVar6);
          if (local_50._4_4_ < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar5);
            pvVar9 = local_58;
            iVar6 = (int)local_50;
          }
          iVar5 = iVar6;
          *(short *)((longlong)pvVar9 + (longlong)iVar3 * 2) = sVar7;
          *(undefined2 *)((longlong)pvVar9 + (longlong)iVar3 * 2 + 2) = 0;
        }
        pbVar13 = pbVar13 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      if ((iVar5 != 0) && (iVar5 = iVar5 + -1, iVar5 != 0)) {
        iVar11 = (int)param_2[1];
        iVar3 = (uint)(iVar11 == 0) + iVar11 + iVar5;
        *(int *)(param_2 + 1) = iVar3;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar11);
        }
        pvVar10 = (void *)(*param_2 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar10,pvVar9,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar10) = 0;
      }
      if (pvVar9 != (void *)0x0) {
        FMemory::Free(pvVar9);
      }
    }
    local_res8 = local_res8 + 1;
    piVar4 = piVar4 + 0x32;
  } while (local_res8 < 6);
  return param_2;
}



// FUNCTION 141e9c000 GetRenderQueryResult_OnThisThread body=646 status=ok
// SIG undefined GetRenderQueryResult_OnThisThread(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FOpenGLDynamicRHI::GetRenderQueryResult_OnThisThread
               (undefined8 param_1,longlong param_2,char param_3)

{
  double dVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  double dVar8;
  int local_res10 [4];
  uint local_res20 [2];
  undefined8 local_88;
  LARGE_INTEGER local_80;
  LARGE_INTEGER local_78;
  LARGE_INTEGER local_70;
  LARGE_INTEGER local_68 [10];
  
  LOCK();
  iVar3 = *(int *)(param_2 + 0x38);
  if (iVar3 == 0) {
    *(int *)(param_2 + 0x38) = 0;
    iVar3 = 0;
  }
  UNLOCK();
  LOCK();
  iVar4 = *(int *)(param_2 + 0x34);
  if (iVar4 == 0) {
    *(int *)(param_2 + 0x34) = 0;
    iVar4 = 0;
  }
  UNLOCK();
  if (iVar3 != iVar4) {
    if ((*(char *)(param_2 + 0x3d) == '\0') &&
       (cVar2 = PlatformContextIsCurrent(*(undefined8 *)(param_2 + 0x20)), cVar2 == '\0')) {
      PlatformReleaseRenderQuery(*(undefined4 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(undefined1 *)(param_2 + 0x3d) = 1;
    }
    if (*(char *)(param_2 + 0x3d) == '\0') {
      local_res10[0] = 0;
      (*DAT_146ab42e0)(*(undefined4 *)(param_2 + 0x18),0x8867,local_res10);
      if (local_res10[0] == 0) {
        if (param_3 == '\0') {
          return;
        }
        QueryPerformanceCounter(local_68);
        QueryPerformanceCounter(&local_80);
        dVar1 = (double)local_80.QuadPart * DAT_1468b02f8;
        while( true ) {
          uVar5 = 0;
          uVar7 = 0;
          if (0 < DAT_1464c9840) {
            do {
              uVar6 = (int)uVar7 + 1;
              *(undefined1 *)(*(longlong *)(uVar5 + DAT_1464c9838) + 0x14) = 0;
              uVar5 = uVar5 + 8;
              uVar7 = (ulonglong)uVar6;
            } while ((int)uVar6 < DAT_1464c9840);
          }
          FUN_1416b1760(0);
          if (*(char *)(param_2 + 0x3d) != '\0') break;
          (*DAT_146ab42e0)(*(undefined4 *)(param_2 + 0x18),0x8867,local_res10);
          uVar6 = 0x40000000;
          if (*(int *)(param_2 + 0x40) != 2) {
            uVar6 = 0x3fe00000;
          }
          QueryPerformanceCounter(&local_78);
          dVar8 = (double)local_78.QuadPart * DAT_1468b02f8 - dVar1;
          if (((double)((ulonglong)uVar6 << 0x20) <= dVar8 &&
               dVar8 != (double)((ulonglong)uVar6 << 0x20)) || (local_res10[0] != 0))
          goto LAB_141e9c1a0;
        }
        *(undefined8 *)(param_2 + 0x28) = 1000;
        param_3 = '\0';
        local_res10[0] = 0;
        *(undefined1 *)(param_2 + 0x3c) = 1;
LAB_141e9c1a0:
        QueryPerformanceCounter(&local_70);
        cVar2 = FUN_1415e13e0();
        if (cVar2 == '\0') {
          DAT_146ac3acc = DAT_146ac3acc + (local_70.s.LowPart - local_68[0]._0_4_);
          _DAT_146ac3aec = _DAT_146ac3aec + 1;
        }
        else {
          _DAT_146ab6390 = _DAT_146ab6390 + (local_70.s.LowPart - local_68[0]._0_4_);
        }
      }
      if (local_res10[0] == 1) {
        if (*(int *)(param_2 + 0x40) == 2) {
          local_88 = 0;
          (*DAT_146ab47f0)(*(undefined4 *)(param_2 + 0x18),0x8866,&local_88);
          *(undefined8 *)(param_2 + 0x28) = local_88;
          *(undefined1 *)(param_2 + 0x3c) = 1;
          LOCK();
          *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
          UNLOCK();
          return;
        }
        local_res20[0] = 0;
        (*DAT_146ab42e0)(*(undefined4 *)(param_2 + 0x18),0x8866,local_res20);
        *(ulonglong *)(param_2 + 0x28) = (ulonglong)local_res20[0];
        *(undefined1 *)(param_2 + 0x3c) = 1;
        LOCK();
        *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
        UNLOCK();
        return;
      }
      if (local_res10[0] != 0) {
        return;
      }
      if (param_3 == '\0') {
        return;
      }
    }
    *(undefined8 *)(param_2 + 0x28) = 0;
    LOCK();
    *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141e9c290 FUN_141e9c290 body=89 status=ok
// SIG undefined FUN_141e9c290(void)

float FUN_141e9c290(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = 0.0;
  if (DAT_146ab6339 != '\0') {
    lVar1 = FUN_141e9c3d0(param_1 + 0x18,1);
    dVar2 = (double)lVar1;
    if (lVar1 < 0) {
      dVar2 = dVar2 + 1.8446744073709552e+19;
    }
    dVar3 = (double)DAT_146ab6340;
    if (DAT_146ab6340 < 0) {
      dVar3 = dVar3 + 1.8446744073709552e+19;
    }
    dVar2 = dVar2 / dVar3;
  }
  return (float)dVar2;
}



// FUNCTION 141e9c2f0 FUN_141e9c2f0 body=31 status=ok
// SIG undefined FUN_141e9c2f0(void)

longlong FUN_141e9c2f0(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x5d8);
  return *(longlong *)(param_1 + 0x98) + 0x5e0;
}



// FUNCTION 141e9c310 GetTextureNeeds body=31 status=ok
// SIG undefined GetTextureNeeds(void)

longlong FOpenGLComputeShader::GetTextureNeeds(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(*(longlong *)(param_1 + 0x100) + 0x5d8);
  return *(longlong *)(param_1 + 0x100) + 0x5e0;
}



// FUNCTION 141e9c330 GetTimeQuery body=153 status=ok
// SIG undefined GetTimeQuery(void)

undefined8 GetTimeQuery(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (DAT_146ab3e30 != 0) {
    iVar1 = DAT_146ab3e30 + -1;
    uVar4 = *(undefined8 *)(DAT_146ab3e28 + (longlong)iVar1 * 8);
    iVar2 = (DAT_146ab3e30 - iVar1) + -1;
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(DAT_146ab3e28 + (longlong)iVar1 * 8),
                 (void *)(DAT_146ab3e28 + (longlong)DAT_146ab3e30 * 8),(longlong)iVar2 << 3);
    }
    DAT_146ab3e30 = DAT_146ab3e30 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&DAT_146ab3e28);
    return uVar4;
  }
  lVar3 = operator_new(0x48);
  if (lVar3 != 0) {
    uVar4 = FUN_141e8d430(lVar3,2);
    return uVar4;
  }
  return 0;
}



// FUNCTION 141e9c3d0 FUN_141e9c3d0 body=856 status=ok
// SIG undefined FUN_141e9c3d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_141e9c3d0(longlong param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  double dVar4;
  char cVar5;
  LARGE_INTEGER LVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  int local_res18 [2];
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_58;
  LARGE_INTEGER local_50 [5];
  
  if (DAT_146ab6339 != '\0') {
    iVar7 = *(int *)(param_1 + 0x1c);
    uVar8 = (ulonglong)iVar7;
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x38) + uVar8 * 8);
    if ((*(char *)(lVar9 + 0x3d) == '\0') &&
       (cVar5 = PlatformContextIsCurrent(*(undefined8 *)(lVar9 + 0x20)), cVar5 == '\0')) {
      PlatformReleaseRenderQuery(*(undefined4 *)(lVar9 + 0x18),*(undefined8 *)(lVar9 + 0x20));
      *(undefined1 *)(lVar9 + 0x3d) = 1;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + uVar8 * 8);
    if (*(char *)(lVar1 + 0x3d) == '\0') {
      cVar5 = PlatformContextIsCurrent(*(undefined8 *)(lVar1 + 0x20));
      if (cVar5 == '\0') {
        PlatformReleaseRenderQuery(*(undefined4 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20));
        *(undefined1 *)(lVar1 + 0x3d) = 1;
      }
      if ((*(char *)(lVar1 + 0x3d) == '\0') && (*(char *)(lVar9 + 0x3d) == '\0')) {
        if ((param_2 == '\0') && (iVar10 = 1, 1 < *(int *)(param_1 + 0x20))) {
          do {
            local_res18[0] = 0;
            lVar9 = (longlong)(int)uVar8;
            (*DAT_146ab42e0)(*(undefined4 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar9 * 8) + 0x18),
                             0x8867,local_res18);
            if (local_res18[0] == 1) {
              local_res20.s.LowPart = 0;
              (*DAT_146ab42e0)(*(undefined4 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar9 * 8) + 0x18),
                               0x8867,&local_res20);
              if (local_res20.s.LowPart == 1) {
                local_58.QuadPart = 0;
                (*DAT_146ab47f0)(*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar9 * 8) + 0x18),
                                 0x8866,&local_58);
                local_50[0].QuadPart = 0;
                (*DAT_146ab47f0)(*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar9 * 8) + 0x18),
                                 0x8866,local_50);
                LVar6 = local_58;
                if ((ulonglong)local_50[0] < (ulonglong)local_58) goto LAB_141e9c56d;
              }
            }
            iVar10 = iVar10 + 1;
            uVar3 = (longlong)(*(int *)(param_1 + 0x18) + -1 + (int)uVar8) %
                    (longlong)*(int *)(param_1 + 0x18);
            uVar8 = uVar3 & 0xffffffff;
            iVar7 = (int)uVar3;
          } while (iVar10 < *(int *)(param_1 + 0x20));
        }
        if ((0 < *(int *)(param_1 + 0x20)) || (param_2 != '\0')) {
          if ((*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x18)) || (param_2 != '\0')) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          QueryPerformanceCounter(local_50);
          QueryPerformanceCounter(&local_res20);
          local_res18[0] = 0;
          lVar9 = (longlong)iVar7;
          dVar4 = (double)CONCAT44(local_res20.s.HighPart,local_res20.s.LowPart) * DAT_1468b02f8;
          do {
            (*DAT_146ab42e0)(*(undefined4 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar9 * 8) + 0x18),
                             0x8867,local_res18);
            QueryPerformanceCounter(&local_res20);
            if (0.5 < (double)CONCAT44(local_res20.s.HighPart,local_res20.s.LowPart) * DAT_1468b02f8
                      - dVar4) {
              return 0;
            }
          } while ((local_res18[0] == 0) && (bVar2));
          QueryPerformanceCounter(&local_res20);
          DAT_146ac3acc = DAT_146ac3acc + (local_res20.s.LowPart - local_50[0]._0_4_);
          _DAT_146ac3aec = _DAT_146ac3aec + 1;
          if (local_res18[0] == 1) {
            QueryPerformanceCounter(&local_58);
            QueryPerformanceCounter(local_50);
            local_res20.s.LowPart = 0;
            dVar4 = (double)local_50[0].QuadPart * DAT_1468b02f8;
            do {
              (*DAT_146ab42e0)(*(undefined4 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar9 * 8) + 0x18),
                               0x8867,&local_res20);
              QueryPerformanceCounter(local_50);
              if (0.5 < (double)local_50[0].QuadPart * DAT_1468b02f8 - dVar4) {
                return 0;
              }
            } while ((local_res20.s.LowPart == 0) && (bVar2));
            QueryPerformanceCounter(local_50);
            DAT_146ac3acc = DAT_146ac3acc + (local_50[0].s.LowPart - local_58._0_4_);
            if (local_res20.s.LowPart == 1) {
              local_50[0].QuadPart = 0;
              (*DAT_146ab47f0)(*(undefined4 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar9 * 8) + 0x18),
                               0x8866,local_50);
              local_58.QuadPart = 0;
              (*DAT_146ab47f0)(*(undefined4 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar9 * 8) + 0x18),
                               0x8866,&local_58);
              bVar2 = (ulonglong)local_58 < (ulonglong)local_50[0];
              LVar6 = local_50[0];
              local_50[0] = local_58;
              if (bVar2) {
LAB_141e9c56d:
                return LVar6.QuadPart - (longlong)local_50[0];
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 141e9c730 FUN_141e9c730 body=94 status=ok
// SIG undefined FUN_141e9c730(void)

float FUN_141e9c730(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  
  if (DAT_146ab6339 != '\0') {
    lVar1 = FUN_141e9c3d0(param_1 + 0x58,1);
    dVar2 = (double)lVar1;
    if (lVar1 < 0) {
      dVar2 = dVar2 + 1.8446744073709552e+19;
    }
    dVar3 = (double)DAT_146ab6340;
    if (DAT_146ab6340 < 0) {
      dVar3 = dVar3 + 1.8446744073709552e+19;
    }
    return (float)(dVar2 / dVar3);
  }
  return 0.0;
}



// FUNCTION 141e9c790 GetTypeHash body=185 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 200);
  iVar2 = (int)(*(ulonglong *)(param_1 + 0xc0) >> 4);
  uVar5 = 0x9e3779b9U - iVar2 ^ iVar2 << 8;
  uVar4 = -(uVar5 + iVar2) ^ uVar5 >> 0xd;
  uVar3 = (iVar2 - uVar5) - uVar4 ^ uVar4 >> 0xc;
  uVar6 = (uVar5 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar5 = (uVar4 - uVar6) - uVar3 ^ uVar6 >> 5;
  uVar4 = (uVar3 - uVar6) - uVar5 ^ uVar5 >> 3;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 << 10;
  uVar3 = FCrc::MemCrc_DEPRECATED(param_1,0xc0,0);
  return uVar3 ^ (uVar5 - uVar6) - uVar4 ^ uVar6 >> 0xf ^ uVar1;
}



// FUNCTION 141e9c850 GetTypeHash body=359 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(longlong param_1)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  
  uVar12 = 0;
  piVar8 = (int *)(param_1 + 0x28);
  lVar11 = 6;
  do {
    uVar6 = piVar8[0x1c];
    bVar2 = *(byte *)((longlong)piVar8 + 0x75);
    bVar3 = *(byte *)(piVar8 + 0x1d);
    uVar5 = FCrc::MemCrc_DEPRECATED(*(undefined8 *)(piVar8 + -6),piVar8[-4] * 4,0);
    uVar5 = uVar6 ^ (uint)bVar2 << 8 ^ (uint)bVar3 ^ uVar5;
    iVar9 = 0;
    if (0 < piVar8[-8]) {
      lVar10 = 0;
      do {
        uVar6 = FCrc::MemCrc_DEPRECATED
                          (*(undefined8 *)(lVar10 + *(longlong *)(piVar8 + -10)),
                           *(int *)(lVar10 + 8 + *(longlong *)(piVar8 + -10)) * 4,0);
        uVar5 = uVar5 ^ uVar6;
        lVar10 = lVar10 + 0x10;
        iVar9 = iVar9 + 1;
      } while (iVar9 < piVar8[-8]);
    }
    iVar9 = 0;
    if (0 < *piVar8) {
      lVar10 = 0;
      do {
        lVar4 = *(longlong *)(piVar8 + -2);
        uVar6 = *(uint *)(lVar10 + 0x10 + lVar4);
        uVar7 = FCrc::MemCrc32(*(undefined8 *)(lVar10 + lVar4),*(undefined4 *)(lVar10 + 8 + lVar4));
        lVar10 = lVar10 + 0x18;
        uVar5 = uVar5 ^ uVar7 ^ uVar6;
        iVar9 = iVar9 + 1;
      } while (iVar9 < *piVar8);
    }
    iVar9 = 0;
    if (0 < piVar8[4]) {
      lVar10 = 0;
      do {
        lVar4 = *(longlong *)(piVar8 + 2);
        uVar6 = *(uint *)(lVar10 + 0x10 + lVar4);
        uVar7 = FCrc::MemCrc32(*(undefined8 *)(lVar10 + lVar4),*(undefined4 *)(lVar10 + 8 + lVar4));
        lVar10 = lVar10 + 0x18;
        uVar5 = uVar5 ^ uVar7 ^ uVar6;
        iVar9 = iVar9 + 1;
      } while (iVar9 < piVar8[4]);
    }
    puVar1 = (uint *)(piVar8 + 0x27);
    piVar8 = piVar8 + 0x32;
    uVar12 = uVar12 ^ *puVar1 ^ uVar5;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  return uVar12;
}



// FUNCTION 141e9c9c0 Init body=151 status=ok
// SIG undefined Init(void)

void TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Init(void *param_1,char param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  iVar1 = (int)(param_3 + 0x1f + (param_3 + 0x1f >> 0x1f & 0x1fU)) >> 5;
  iVar2 = iVar1 << 5;
  if (*(int *)((longlong)param_1 + 0x14) != iVar2) {
    *(int *)((longlong)param_1 + 0x14) = iVar2;
    Realloc(param_1);
  }
  if (param_3 != 0) {
    *(int *)((longlong)param_1 + 0x10) = param_3;
    _Dst = *(void **)((longlong)param_1 + 8);
    if (*(void **)((longlong)param_1 + 8) == (void *)0x0) {
      _Dst = param_1;
    }
    ::_guard_xfg_dispatch_icall_nop(_Dst,-(uint)(param_2 != '\0') & 0xff,(longlong)iVar1 << 2);
  }
  return;
}



// FUNCTION 141e9ca60 InitDefaultGLContextState body=194 status=ok
// SIG undefined InitDefaultGLContextState(void)

void InitDefaultGLContextState(void)

{
  int iVar1;
  longlong local_18 [3];
  
  local_18[0] = 0;
  local_18[1] = 0;
  GetExtensionsString(local_18);
  (*DAT_146ab3ff8)(0xbd0);
  (*DAT_146ab4018)(0x8db9);
  iVar1 = FUN_141592950(local_18,L"GL_ARB_seamless_cube_map",1,0,0xffffffff);
  if (iVar1 != -1) {
    (*DAT_146ab4018)(0x884f);
  }
  if (DAT_1464c97f0 != 0) {
    iVar1 = FUN_141592950(local_18,L"GL_ARB_clip_control",1,0,0xffffffff);
    if ((iVar1 != -1) && (DAT_146ab3551 == '\0')) {
      DAT_146ab3dec = 1;
      (*DAT_146ab4818)(0x8ca2,0x935f);
    }
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e9cb30 FUN_141e9cb30 body=450 status=ok
// SIG undefined FUN_141e9cb30(void)

void FUN_141e9cb30(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  code *local_58 [2];
  longlong local_48 [4];
  longlong *local_28;
  int local_18;
  
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_1415e13e0();
    if (cVar1 == '\0') {
      puVar4 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      puVar2 = puVar4 + 0xc;
      if (DAT_146ab6eb0 < puVar2) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
        puVar4 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar2 = puVar4 + 0xc;
      }
      DAT_146ab6e8c = DAT_146ab6e8c + 1;
      DAT_146ab6ea8 = puVar2;
      *DAT_146ab6e80 = puVar4;
      local_28 = (longlong *)0x0;
      local_18 = 0;
      DAT_146ab6e80 = puVar4 + 1;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_48);
      if (puVar2 != (undefined8 *)0x0) {
        puVar2[1] = param_1;
        *puVar2 = &PTR_FUN_143f77b70;
      }
      local_58[0] = UE4Function_Private::
                    TFunctionRefCaller<<lambda_605314e1c5d7e5c150287cedfbc14450>,void___cdecl(void)>
                    ::Call;
      puVar4[1] = 0;
      *puVar4 = &PTR_ExecuteAndDestruct_144eb5ab0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 2,local_58);
      if (local_18 != 0) {
        plVar5 = local_48;
        if (local_28 != (longlong *)0x0) {
          plVar5 = local_28;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (DAT_146ab6e8c != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
      }
      FUN_141ed93a0(&DAT_146ab6e78);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
      }
      FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (*DAT_146ab47e8)();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  uVar3 = (*DAT_146ab47f8)(0x9117,0);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x000141e9cceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_146ab4028)();
  return;
}



// FUNCTION 141e9cd00 FUN_141e9cd00 body=257 status=ok
// SIG undefined FUN_141e9cd00(void)

void FUN_141e9cd00(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (DAT_146ab6338 == '\0') {
    DAT_146ab6340 = 1000000000;
    DAT_146ab6338 = '\x01';
  }
  iVar3 = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  DAT_146ab6339 = 0 < DAT_146ab0544;
  if (0 < DAT_146ab0544) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x34) < iVar1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x28,iVar1);
      iVar1 = *(int *)(param_1 + 0x18);
    }
    if (*(int *)(param_1 + 0x44) < iVar1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x38,iVar1);
      iVar1 = *(int *)(param_1 + 0x18);
    }
    if (0 < iVar1) {
      do {
        uVar2 = GetTimeQuery();
        iVar1 = *(int *)(param_1 + 0x30);
        *(int *)(param_1 + 0x30) = iVar1 + 1;
        if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = uVar2;
        uVar2 = GetTimeQuery();
        iVar1 = *(int *)(param_1 + 0x40);
        *(int *)(param_1 + 0x40) = iVar1 + 1;
        if (*(int *)(param_1 + 0x44) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar1);
        }
        iVar3 = iVar3 + 1;
        *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 8) = uVar2;
      } while (iVar3 < *(int *)(param_1 + 0x18));
    }
  }
  return;
}



// FUNCTION 141e9ce10 FUN_141e9ce10 body=2462 status=ok
// SIG undefined FUN_141e9ce10(void)

void FUN_141e9ce10(longlong param_1,longlong param_2,uint param_3,uint param_4,char param_5,
                  char param_6,undefined8 param_7,byte param_8,uint param_9,int param_10,
                  uint param_11,uint param_12,undefined8 param_13,longlong *param_14)

{
  longlong lVar1;
  undefined4 uVar2;
  bool bVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  undefined *in_stack_ffffffffffffff38;
  undefined1 local_88;
  int local_84;
  ulonglong local_80;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  longlong local_68;
  uint local_60;
  int local_5c;
  int *local_58;
  uint *local_50;
  longlong local_48;
  
  uVar13 = 0;
  local_88 = 0;
  local_84 = 0;
  iVar17 = 0x400 - DAT_1464c97dc;
  if (iVar17 < 2) {
    _guard_xfg_dispatch_icall_nop
              (&local_84,&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4,(longlong)iVar17 * 4);
    (*DAT_146ab4038)(0x400,&DAT_146ab0550);
    iVar14 = 1 - iVar17;
    _guard_xfg_dispatch_icall_nop(&local_84 + iVar17,&DAT_146ab0550,(longlong)iVar14 << 2);
  }
  else {
    local_84 = *(int *)(&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4);
    iVar14 = DAT_1464c97dc + 1;
  }
  uVar11 = (ulonglong)param_8;
  lVar21 = uVar11 * 0x1c;
  local_6c = param_12;
  lVar22 = (longlong)&DAT_146ab3630 + lVar21;
  bVar3 = true;
  bVar5 = (byte)(param_12 >> 4) & 1;
  uVar23 = *(uint *)(param_2 + 0x84);
  local_80 = (ulonglong)bVar5;
  local_58 = (int *)(lVar22 + local_80 * 4);
  DAT_1464c97dc = iVar14;
  local_70 = uVar23;
  local_68 = lVar22;
  if (*local_58 == 0) {
    LowLevelFatalErrorHandler
              ("Unknown",0x19b,L"Texture format \'%s\' not supported (sRGB=%d).",
               (&PTR_u_unknown_1464ca1b0)[uVar11 * 5],bVar5);
    in_stack_ffffffffffffff38 = (&PTR_u_unknown_1464ca1b0)[uVar11 * 5];
    FDebug::AssertFailed
              (&DAT_144eb7c97,"Unknown",0x19b,L"Texture format \'%s\' not supported (sRGB=%d).",
               in_stack_ffffffffffffff38,bVar5);
  }
  piVar4 = local_58;
  lVar9 = FUN_141e711c0(param_1,1);
  if (*(int *)(lVar9 + 0x428) != 0) {
    (*DAT_146ab42e8)(0x88ec,0);
    *(undefined4 *)(lVar9 + 0x428) = 0;
  }
  lVar1 = *(longlong *)(lVar9 + 8) + (longlong)(DAT_1464c97fc + -1) * 0x28;
  if ((*(uint *)(lVar1 + 0x10) != uVar23) || (*(int *)(lVar1 + 0x14) != local_84)) {
    in_stack_ffffffffffffff38 =
         (undefined *)CONCAT44((int)((ulonglong)in_stack_ffffffffffffff38 >> 0x20),local_84);
    FUN_141e6dbc0(param_1,lVar9,DAT_1464c97fc + -1,uVar23,in_stack_ffffffffffffff38,0,param_9);
  }
  uVar19 = 1;
  if (param_10 == 1) {
    if (((uVar23 == 0x8d65) || ((param_3 & param_3 - 1) != 0)) || ((param_4 & param_4 - 1) != 0)) {
      (*DAT_146ab4160)(uVar23,0x2802,0x812f);
      (*DAT_146ab4160)(uVar23,0x2803,0x812f);
      uVar18 = 0x812f;
    }
    else {
      (*DAT_146ab4160)(uVar23,0x2802,0x2901);
      (*DAT_146ab4160)(uVar23,0x2803,0x2901);
      uVar18 = 0x2901;
    }
    (*DAT_146ab4160)(uVar23,0x8072,uVar18);
    (*DAT_146ab4160)(uVar23,0x2800,0x2600);
    (*DAT_146ab4160)(uVar23,0x2801,0x2600);
    if (DAT_146ab3df1 != '\0') {
      (*DAT_146ab4160)(uVar23,0x84fe,1);
    }
    (*DAT_146ab4160)(uVar23,0x813c,0);
    if (uVar23 != 0x8d65) {
      (*DAT_146ab4160)(uVar23,0x813d,param_9 - 1);
    }
    local_5c = param_9 - 1;
    local_60 = 0;
    local_58 = &local_84;
    local_50 = &local_60;
    FUN_140608850(param_1 + 0x15bd8,&param_12,&local_58,0);
    if ((*(char *)((longlong)&DAT_146ab3648 + lVar21 + 1) != '\0') && ((local_6c & 1) == 0)) {
      (*DAT_146ab4160)(uVar23,0x8e42,0x1905);
      (*DAT_146ab4160)(uVar23,0x8e44,0x1903);
    }
    uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
    if (param_6 == '\0') {
      if (uVar23 != 0x8d65) {
        if (DAT_146ab4958 == (code *)0x0) {
          if (*(char *)(&DAT_146ab3648 + uVar11 * 0xe) == '\0') {
            local_88 = 1;
            uVar19 = uVar23;
            if (uVar23 == 0x8513) {
              uVar19 = 0x8515;
            }
            uVar7 = 1;
            if (uVar23 == 0x8513) {
              uVar7 = 6;
            }
            uVar11 = uVar13;
            param_12 = uVar19;
            if (param_9 != 0) {
              do {
                uVar6 = param_4 >> ((byte)uVar11 & 0x1f);
                uVar23 = param_3 >> ((byte)uVar11 & 0x1f);
                if (uVar6 < 2) {
                  uVar6 = 1;
                }
                uVar24 = 0;
                if (uVar23 < 2) {
                  uVar23 = 1;
                }
                do {
                  in_stack_ffffffffffffff38 =
                       (undefined *)
                       CONCAT44((int)((ulonglong)in_stack_ffffffffffffff38 >> 0x20),uVar6);
                  (*DAT_146ab4148)(uVar24 + uVar19,uVar11,*(undefined4 *)(lVar22 + local_80 * 4),
                                   uVar23,in_stack_ffffffffffffff38,0,
                                   *(undefined4 *)((longlong)&DAT_146ab3640 + lVar21),
                                   *(undefined4 *)((longlong)&DAT_146ab3640 + lVar21 + 4),0);
                  uVar24 = uVar24 + 1;
                } while (uVar24 < uVar7);
                uVar6 = (int)uVar11 + 1;
                uVar11 = (ulonglong)uVar6;
                uVar23 = local_70;
              } while (uVar6 < param_9);
            }
          }
        }
        else {
          in_stack_ffffffffffffff38 = (undefined *)CONCAT44(uVar16,param_4);
          (*DAT_146ab4958)(uVar23,param_9,
                           *(undefined4 *)((longlong)&DAT_146ab3638 + local_80 * 4 + lVar21),param_3
                           ,in_stack_ffffffffffffff38);
          local_88 = 1;
        }
      }
    }
    else {
      uVar7 = *(uint *)((longlong)&DAT_146ab3640 + lVar21);
      uVar2 = *(undefined4 *)((longlong)&DAT_146ab3640 + lVar21 + 4);
      iVar17 = *piVar4;
      param_12 = uVar7;
      if (DAT_146ab4960 == (code *)0x0) {
        if ((uVar23 != 0x8c1a) && (uVar23 != 0x9009)) {
          bVar3 = false;
        }
        if (param_9 != 0) {
          uVar11 = uVar13;
          if (bVar3) {
            do {
              uVar6 = (int)param_4 >> ((byte)uVar11 & 0x1f);
              uVar24 = (int)param_3 >> ((byte)uVar11 & 0x1f);
              if (uVar6 < 2) {
                uVar6 = 1;
              }
              if (uVar24 < 2) {
                uVar24 = uVar19;
              }
              in_stack_ffffffffffffff38 =
                   (undefined *)CONCAT44((int)((ulonglong)in_stack_ffffffffffffff38 >> 0x20),uVar6);
              (*DAT_146ab4210)(uVar23,uVar11,iVar17,uVar24,in_stack_ffffffffffffff38,param_11,0,
                               uVar7,uVar2,0);
              uVar6 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar6;
              lVar22 = local_68;
            } while (uVar6 < param_9);
          }
          else {
            do {
              bVar5 = (byte)uVar11;
              uVar6 = (int)param_11 >> (bVar5 & 0x1f);
              uVar24 = (int)param_4 >> (bVar5 & 0x1f);
              uVar12 = (int)param_3 >> (bVar5 & 0x1f);
              if (uVar6 < 2) {
                uVar6 = uVar19;
              }
              if (uVar24 < 2) {
                uVar24 = 1;
              }
              in_stack_ffffffffffffff38 =
                   (undefined *)CONCAT44((int)((ulonglong)in_stack_ffffffffffffff38 >> 0x20),uVar24)
              ;
              if (uVar12 < 2) {
                uVar12 = uVar19;
              }
              (*DAT_146ab4210)(uVar23,uVar11,iVar17,uVar12,in_stack_ffffffffffffff38,uVar6,0,uVar7,
                               uVar2,0);
              uVar6 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar6;
              lVar22 = local_68;
            } while (uVar6 < param_9);
          }
        }
      }
      else {
        in_stack_ffffffffffffff38 = (undefined *)CONCAT44(uVar16,param_4);
        (*DAT_146ab4960)(uVar23,param_9,iVar17,param_3,in_stack_ffffffffffffff38,param_11);
      }
    }
    if (param_14 != (longlong *)0x0) {
      local_58 = (int *)(**(code **)(*param_14 + 8))();
      uVar11 = (ulonglong)param_8;
      param_12 = 0;
      local_48 = uVar11 * 0x28;
      uVar19 = (&DAT_1464ca1b8)[uVar11 * 10];
      local_60 = (&DAT_1464ca1bc)[uVar11 * 10];
      local_68 = CONCAT44(local_68._4_4_,uVar19);
      if (param_9 != 0) {
        uVar11 = uVar13;
        uVar7 = param_11;
        if (param_11 < 2) {
          uVar7 = 1;
        }
        do {
          uVar6 = param_12;
          uVar12 = 0;
          uVar24 = param_3 >> ((byte)uVar13 & 0x1f);
          uVar20 = 1;
          uVar10 = (ulonglong)uVar24;
          if (uVar24 < 2) {
            uVar10 = 1;
          }
          uVar15 = param_4 >> ((byte)uVar13 & 0x1f);
          local_74 = ((int)(((uVar10 - 1) + (ulonglong)uVar19) / (ulonglong)uVar19) * uVar19) /
                     uVar19;
          uVar10 = (ulonglong)uVar15;
          if (uVar15 < 2) {
            uVar10 = 1;
          }
          local_78 = ((int)((((ulonglong)local_60 - 1) + uVar10) / (ulonglong)local_60) * local_60)
                     / local_60;
          if (param_6 == '\0') {
            uVar8 = uVar20;
            uVar19 = uVar23;
            if (param_5 != '\0') {
              uVar8 = 6;
              uVar19 = 0x8515;
            }
            if (uVar15 < 2) {
              uVar15 = uVar20;
            }
            if (uVar24 < 2) {
              uVar24 = uVar20;
            }
            do {
              in_stack_ffffffffffffff38 =
                   (undefined *)CONCAT44((int)((ulonglong)in_stack_ffffffffffffff38 >> 0x20),uVar24)
              ;
              (*DAT_146ab4178)(uVar12 + uVar19,uVar6,0,0,in_stack_ffffffffffffff38,uVar15,
                               *(undefined4 *)(lVar22 + 0x10),*(undefined4 *)(lVar22 + 0x14),
                               uVar11 + (longlong)local_58);
              uVar12 = uVar12 + 1;
              uVar11 = (ulonglong)
                       ((int)uVar11 +
                       *(int *)((longlong)&DAT_1464ca1c4 + local_48) * uVar7 * local_78 * local_74);
              uVar23 = local_70;
            } while (uVar12 < uVar8);
          }
          else {
            if (param_5 != '\0') {
              if (uVar15 < 2) {
                uVar15 = uVar20;
              }
              if (uVar24 < 2) {
                uVar24 = uVar20;
              }
              in_stack_ffffffffffffff38 =
                   (undefined *)((ulonglong)in_stack_ffffffffffffff38 & 0xffffffff00000000);
              (*DAT_146ab4218)(uVar23,uVar13,0,0,in_stack_ffffffffffffff38,uVar24,uVar15,param_11,
                               *(undefined4 *)(lVar22 + 0x10),*(undefined4 *)(lVar22 + 0x14),
                               uVar11 + (longlong)local_58);
            }
            uVar11 = (ulonglong)
                     ((int)uVar11 +
                     *(int *)((longlong)&DAT_1464ca1c4 + local_48) * uVar7 * local_78 * local_74);
            param_12 = (uint)uVar13;
          }
          param_12 = param_12 + 1;
          uVar13 = (ulonglong)param_12;
          uVar19 = (uint)local_68;
        } while (param_12 < param_9);
      }
      (**(code **)(*param_14 + 0x18))();
    }
  }
  else if (DAT_146ab4978 == (code *)0x0) {
    (*DAT_146ab47d0)(uVar23,param_10,*piVar4,param_3,param_4,1);
  }
  else {
    (*DAT_146ab4978)(uVar23);
  }
  uVar19 = local_6c;
  iVar17 = 1;
  uVar16 = 0;
  if ((local_6c & 0x40001) == 0) {
    if ((local_6c & 4) == 0) {
      if ((local_6c & 2) != 0) {
        if (param_8 == 0xb) {
          uVar16 = 0x821a;
        }
        else {
          uVar16 = 0x8d00;
          if ((param_8 - 0xc & 0xf7) != 0) {
            uVar16 = 0x8ce0;
          }
        }
      }
    }
    else {
      uVar16 = 0x821a;
      if (param_8 != 0xb) {
        uVar16 = 0x8d00;
      }
    }
  }
  else {
    uVar16 = 0x8ce0;
  }
  *(uint *)(param_2 + 0x84) = uVar23;
  *(int *)(param_2 + 0x80) = local_84;
  *(undefined4 *)(param_2 + 0x8c) = uVar16;
  if ((*(uint *)(param_2 + 0xe8) & 1) != 0) {
    iVar17 = 6;
  }
  TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Init
            (param_2 + 0xd0,local_88,*(int *)(param_2 + 0x34) * iVar17);
  OpenGLTextureAllocated(param_2,uVar19);
  return;
}



// FUNCTION 141e9d7c0 FUN_141e9d7c0 body=39 status=ok
// SIG undefined FUN_141e9d7c0(void)

void FUN_141e9d7c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144ebe2c8;
    return;
  }
  return;
}



// FUNCTION 141e9d7f0 InitializeResources body=343 status=ok
// SIG undefined InitializeResources(void)

void FOpenGLRHIState::InitializeResources(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  FOpenGLCommonState::InitializeResources();
  puVar1 = (undefined8 *)operator_new(0x308);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = 6;
    puVar2 = puVar1 + 1;
    *puVar1 = 6;
    puVar1 = puVar1 + 6;
    do {
      *(undefined4 *)(puVar1 + 10) = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1 = puVar1 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  *(undefined8 **)(param_1 + 0x420) = puVar2;
  FOpenGLShaderParameterCache::InitializeResources(puVar2,DAT_1464c9810 << 4);
  FOpenGLShaderParameterCache::InitializeResources
            (*(longlong *)(param_1 + 0x420) + 0x80,DAT_1464c9814 << 4);
  FOpenGLShaderParameterCache::InitializeResources
            (*(longlong *)(param_1 + 0x420) + 0x100,DAT_1464c9818 << 4);
  if (DAT_146ab053b != '\0') {
    FOpenGLShaderParameterCache::InitializeResources
              (*(longlong *)(param_1 + 0x420) + 0x180,DAT_1464c981c << 4);
    FOpenGLShaderParameterCache::InitializeResources
              (*(longlong *)(param_1 + 0x420) + 0x200,DAT_1464c9820 << 4);
  }
  *(undefined8 *)(param_1 + 0x418) = 0;
  if (DAT_1464c97cc != '\0') {
    FOpenGLShaderParameterCache::InitializeResources
              (*(longlong *)(param_1 + 0x420) + 0x280,DAT_1464c97c8 << 4);
  }
  *(undefined8 *)(param_1 + 0x6da) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x6e2) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x6d8) = 1;
  return;
}



// FUNCTION 141e9d950 InitializeResources body=222 status=ok
// SIG undefined InitializeResources(void)

void FOpenGLShaderParameterCache::InitializeResources(longlong *param_1,int param_2)

{
  longlong lVar1;
  size_t _Size;
  uint uVar2;
  
  uVar2 = param_2 + 0xfU & 0xfffffff0;
  _Size = (size_t)(int)(uVar2 * 5);
  lVar1 = FMemory::Malloc(_Size);
  *param_1 = lVar1;
  lVar1 = FMemory::Malloc(_Size);
  param_1[10] = lVar1;
  ::_guard_xfg_dispatch_icall_nop((void *)*param_1,0,_Size);
  ::_guard_xfg_dispatch_icall_nop((void *)param_1[10],0,_Size);
  lVar1 = (longlong)(int)uVar2;
  param_1[0xb] = param_1[10] + lVar1;
  param_1[1] = *param_1 + lVar1;
  param_1[2] = *param_1 + lVar1 + lVar1;
  param_1[0xc] = param_1[10] + lVar1 + lVar1;
  param_1[3] = param_1[2] + lVar1;
  param_1[0xd] = param_1[0xc] + lVar1;
  param_1[4] = param_1[3] + lVar1;
  param_1[0xe] = param_1[0xd] + lVar1;
  *(uint *)(param_1 + 0xf) = uVar2;
  uVar2 = param_2 + 0xfU >> 4;
  *(uint *)((longlong)param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(uint *)((longlong)param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 7) = 0;
  *(uint *)((longlong)param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)((longlong)param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 9) = 0;
  *(uint *)((longlong)param_1 + 0x4c) = uVar2;
  return;
}



// FUNCTION 141e9da30 FUN_141e9da30 body=90 status=ok
// SIG undefined FUN_141e9da30(void)

void FUN_141e9da30(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x14aa0) + 8))
            ((longlong *)(param_1 + 0x14aa0),DAT_1464c97fc,8);
  (**(code **)(*(longlong *)(param_1 + 0x15338) + 8))
            ((longlong *)(param_1 + 0x15338),DAT_1464c97fc,8);
                    /* WARNING: Could not recover jumptable at 0x000141e9da86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x1a8) + 8))((longlong *)(param_1 + 0x1a8),DAT_1464c97fc,8);
  return;
}



// FUNCTION 141e9da90 FUN_141e9da90 body=125 status=ok
// SIG undefined FUN_141e9da90(void)

int FUN_141e9da90(longlong *param_1,void *param_2,int param_3,int param_4)

{
  int iVar1;
  void *_Src;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_3;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_3) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  _Src = (void *)(*param_1 + (longlong)param_4);
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)param_3 + (longlong)_Src),_Src,(longlong)(iVar1 - param_4));
  _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)param_4),param_2,(longlong)param_3);
  return param_4;
}



// FUNCTION 141e9db10 FUN_141e9db10 body=198 status=ok
// SIG undefined FUN_141e9db10(void)

void FUN_141e9db10(longlong param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  if (((*(longlong *)(param_1 + 0x14aa8) != 0) || (*(longlong *)(param_1 + 0x15340) != 0)) &&
     (uVar4 = uVar2, 0 < DAT_1464c97fc)) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x14aa8);
      if ((lVar1 != 0) && (*(int *)(uVar2 + 0x14 + lVar1) == param_2)) {
        *(undefined4 *)(uVar2 + 0x10 + lVar1) = 0;
        *(undefined4 *)(uVar2 + 0x14 + *(longlong *)(param_1 + 0x14aa8)) = 0;
      }
      lVar1 = *(longlong *)(param_1 + 0x15340);
      if ((lVar1 != 0) && (*(int *)(uVar2 + 0x14 + lVar1) == param_2)) {
        *(undefined4 *)(uVar2 + 0x10 + lVar1) = 0;
        *(undefined4 *)(uVar2 + 0x14 + *(longlong *)(param_1 + 0x15340)) = 0;
      }
      uVar3 = (int)uVar4 + 1;
      uVar2 = uVar2 + 0x28;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < DAT_1464c97fc);
  }
  TSet<TTuple<unsigned_int,TTuple<unsigned_int,unsigned_int>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned_int,unsigned_int>,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x15bd8);
  if ((*(longlong *)(param_1 + 0x3f8) != 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x3f8) + 0x10) == param_2)) {
    *(undefined8 *)(param_1 + 0x3f8) = 0;
  }
  return;
}



// FUNCTION 141e9dbe0 FUN_141e9dbe0 body=61 status=ok
// SIG undefined FUN_141e9dbe0(void)

void FUN_141e9dbe0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (*DAT_146ab47e8)();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  uVar1 = (*DAT_146ab47f8)(0x9117,0);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000141e9dc16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_146ab4028)();
  return;
}



// FUNCTION 141e9dc20 FUN_141e9dc20 body=1868 status=ok
// SIG undefined FUN_141e9dc20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_141e9dc20(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined2 *puVar16;
  int iVar17;
  int iVar18;
  undefined2 *puVar19;
  longlong lVar20;
  int local_res10 [6];
  undefined4 *local_58;
  int local_50;
  undefined4 local_4c;
  undefined2 *local_48;
  int local_40;
  
  puVar13 = (undefined4 *)0x0;
  local_res10[0] = 0;
  if (DAT_146ab3550 == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ab3f18) &&
       (_Init_thread_header(&DAT_146ab3f18), DAT_146ab3f18 == -1)) {
      DAT_146ab3f08 = 0;
      _DAT_146ab3f10 = 0;
      atexit((_func_5014 *)&LAB_143e9e810);
      _Init_thread_footer(&DAT_146ab3f18);
    }
    if (DAT_146ab3f10 == 0) {
      do {
        uVar8 = (*DAT_146ab4390)();
        uVar5 = _DAT_146ab3f10;
        lVar14 = (longlong)DAT_146ab3f10;
        iVar17 = DAT_146ab3f10 + 1;
        _DAT_146ab3f10 = CONCAT44(DAT_146ab3f14,iVar17);
        if (DAT_146ab3f14 < iVar17) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146ab3f08,uVar5 & 0xffffffff);
        }
        *(undefined4 *)(DAT_146ab3f08 + lVar14 * 4) = uVar8;
      } while (DAT_146ab3f10 < 0x400);
    }
    iVar18 = DAT_146ab3f10 + -1;
    iVar17 = *(int *)(DAT_146ab3f08 + (longlong)iVar18 * 4);
    iVar9 = (DAT_146ab3f10 - iVar18) + -1;
    iVar10 = DAT_146ab3f10;
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(DAT_146ab3f08 + (longlong)iVar18 * 4),
                 (void *)(DAT_146ab3f08 + (longlong)DAT_146ab3f10 * 4),(longlong)iVar9 << 2);
      iVar10 = DAT_146ab3f10;
    }
    _DAT_146ab3f10 = CONCAT44(DAT_146ab3f14,iVar10 + -1);
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&DAT_146ab3f08);
    local_res10[0] = iVar17;
  }
  else {
    lVar14 = (longlong)DAT_1464c97e4;
    iVar17 = 0x400 - DAT_1464c97e4;
    if (iVar17 < 2) {
      _guard_xfg_dispatch_icall_nop(local_res10,&DAT_146ab2550 + lVar14,(longlong)iVar17 * 4);
      (*DAT_146ab4a88)(0x400,&DAT_146ab2550);
      _guard_xfg_dispatch_icall_nop(local_res10 + iVar17,&DAT_146ab2550,(longlong)(1 - iVar17) << 2)
      ;
      DAT_1464c97e4 = 1 - iVar17;
    }
    else {
      DAT_1464c97e4 = DAT_1464c97e4 + 1;
      local_res10[0] = (&DAT_146ab2550)[lVar14];
    }
  }
  iVar17 = local_res10[0];
  if (DAT_146ab3de0 == 0) {
LAB_141e9ded5:
    if (*(int *)(param_1 + 0xc4) != 0) {
      if (DAT_146ab3550 == '\0') {
        (*DAT_146ab4370)(local_res10[0]);
      }
      else {
        (*DAT_146ab4a70)(local_res10[0],1,*(int *)(param_1 + 0xc4));
      }
    }
    if (*(int *)(param_1 + 0x18c) != 0) {
      if (DAT_146ab3550 == '\0') {
        (*DAT_146ab4370)(local_res10[0]);
      }
      else {
        (*DAT_146ab4a70)(local_res10[0],2,*(int *)(param_1 + 0x18c));
      }
    }
    if (*(int *)(param_1 + 0x254) != 0) {
      if (DAT_146ab3550 == '\0') {
        (*DAT_146ab4370)(local_res10[0]);
      }
      else {
        (*DAT_146ab4a70)(local_res10[0],4,*(int *)(param_1 + 0x254));
      }
    }
    if (*(int *)(param_1 + 0x31c) != 0) {
      if (DAT_146ab3550 == '\0') {
        (*DAT_146ab4370)(local_res10[0]);
      }
      else {
        (*DAT_146ab4a70)(local_res10[0],8,*(int *)(param_1 + 0x31c));
      }
    }
    if (*(int *)(param_1 + 0x3e4) != 0) {
      if (DAT_146ab3550 == '\0') {
        (*DAT_146ab4370)(local_res10[0]);
      }
      else {
        (*DAT_146ab4a70)(local_res10[0],0x10,*(int *)(param_1 + 0x3e4));
      }
    }
    if (*(int *)(param_1 + 0x4ac) != 0) {
      if (DAT_146ab3550 == '\0') {
        (*DAT_146ab4370)(local_res10[0]);
      }
      else {
        (*DAT_146ab4a70)(local_res10[0],0x20,*(int *)(param_1 + 0x4ac));
      }
    }
    iVar17 = local_res10[0];
    if (DAT_146ab3550 == '\0') {
      cVar6 = FUN_141e9f200(DAT_146ab62cc);
      if (cVar6 != '\0') {
        if (*(int *)(param_1 + 0xc4) != 0) {
          FUN_141e93380(0x8b31,iVar17,*(undefined2 *)(param_1 + 0x98),param_1 + 0x9e);
          iVar17 = local_res10[0];
        }
        if (*(int *)(param_1 + 0x18c) != 0) {
          FUN_141e93380(0x8b30,iVar17,*(undefined2 *)(param_1 + 0x160),0);
          iVar17 = local_res10[0];
        }
      }
      (*DAT_146ab4460)(iVar17);
      iVar17 = local_res10[0];
      if ((DAT_146ab3de0 != 0) &&
         ((*DAT_146ab43e8)(local_res10[0],0x8741,local_res10 + 2), 0 < local_res10[2])) {
        iVar10 = local_res10[2] + 4;
        local_58 = (undefined4 *)0x0;
        local_4c = 0;
        if (iVar10 < 1) {
          iVar9 = 0;
          if ((iVar10 < 0) && (iVar10 != 0)) {
            local_50 = iVar10;
            TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_58);
            iVar9 = local_50;
          }
        }
        else {
          local_50 = iVar10;
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_58,0);
          iVar9 = local_50;
        }
        puVar15 = local_58;
        (*DAT_146ab4ad0)(iVar17,local_res10[2],local_res10 + 2,local_58,local_58 + 1);
        FUN_141e9bd60(DAT_146ab3de0,&local_48,param_1);
        uVar11 = FPlatformFileManager::Get();
        plVar12 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar11);
        puVar19 = &DAT_143f3eda8;
        if (local_40 != 0) {
          puVar19 = local_48;
        }
        plVar12 = (longlong *)(**(code **)(*plVar12 + 200))(plVar12,puVar19,0,0);
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x28))(plVar12,puVar15,(longlong)iVar9);
          (**(code **)*plVar12)(plVar12,1);
        }
        if (local_48 != (undefined2 *)0x0) {
          FMemory::Free(local_48);
        }
        if (puVar15 != (undefined4 *)0x0) goto LAB_141e9e158;
      }
      goto LAB_141e9e15d;
    }
  }
  else {
    local_58 = (undefined4 *)0x0;
    local_res10[2] = 0;
    local_4c = 0;
    FUN_141e9bd60(DAT_146ab3de0,&local_48,param_1);
    uVar11 = FPlatformFileManager::Get();
    plVar12 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar11);
    puVar19 = local_48;
    puVar16 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar16 = local_48;
    }
    plVar12 = (longlong *)(**(code **)(*plVar12 + 0xb8))(plVar12,puVar16,0);
    if (plVar12 == (longlong *)0x0) {
      if (puVar19 != (undefined2 *)0x0) {
        FMemory::Free(puVar19);
      }
      FUN_141e95300(param_1);
      goto LAB_141e9ded5;
    }
    uVar11 = (**(code **)(*plVar12 + 0x40))(plVar12);
    iVar10 = (int)uVar11;
    if (iVar10 < 1) {
      puVar15 = puVar13;
      if ((iVar10 < 0) && (iVar10 != 0)) {
        local_50 = iVar10;
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_58);
        puVar15 = local_58;
        goto LAB_141e9de66;
      }
    }
    else {
      local_50 = iVar10;
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_58);
      puVar15 = local_58;
      _guard_xfg_dispatch_icall_nop(local_58,0,(longlong)iVar10);
LAB_141e9de66:
      local_res10[2] = local_50;
    }
    (**(code **)(*plVar12 + 0x20))(plVar12,puVar15,uVar11);
    (**(code **)*plVar12)(plVar12,1);
    if (puVar19 != (undefined2 *)0x0) {
      FMemory::Free(puVar19);
    }
    (*DAT_146ab4ad8)(iVar17,*puVar15,puVar15 + 1,local_res10[2] + -4);
LAB_141e9e158:
    FMemory::Free(puVar15);
LAB_141e9e15d:
    if (DAT_146ab3550 == '\0') {
      (*DAT_146ab4470)(local_res10[0]);
      goto LAB_141e9e17c;
    }
  }
  (*DAT_146ab4a78)(local_res10[0]);
LAB_141e9e17c:
  lVar14 = operator_new(0x630);
  if (lVar14 != 0) {
    puVar13 = (undefined4 *)FOpenGLLinkedProgram::FOpenGLLinkedProgram(lVar14);
  }
  lVar14 = param_1 - (longlong)puVar13;
  lVar20 = 6;
  puVar15 = puVar13 + 0x2c;
  do {
    FOpenGLShaderBindings::operator=(puVar15 + -0x2c,(longlong)puVar15 + lVar14 + -0xb0);
    puVar2 = (undefined4 *)(lVar14 + (longlong)puVar15);
    uVar8 = puVar2[1];
    uVar3 = puVar2[2];
    uVar4 = puVar2[3];
    puVar1 = puVar15 + 0x32;
    *puVar15 = *puVar2;
    puVar15[1] = uVar8;
    puVar15[2] = uVar3;
    puVar15[3] = uVar4;
    puVar15[4] = *(undefined4 *)(lVar14 + -0xb8 + (longlong)puVar1);
    puVar15[5] = *(undefined4 *)(lVar14 + -0xb4 + (longlong)puVar1);
    lVar20 = lVar20 + -1;
    puVar15 = puVar1;
  } while (lVar20 != 0);
  puVar13[0x174] = local_res10[0];
  if ((*(int *)(param_1 + 0x31c) == 0) || (*(int *)(param_1 + 0x3e4) == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(puVar13 + 0x175) = uVar7;
  if (*(int *)(param_1 + 0xc4) != 0) {
    FUN_141e95840(puVar13,0,0);
  }
  if (*(int *)(param_1 + 0x18c) != 0) {
    FUN_141e95840(puVar13,1,*(undefined1 *)(param_1 + 0x9b));
  }
  if (*(int *)(param_1 + 0x254) != 0) {
    FUN_141e95840(puVar13,2,(uint)*(byte *)(param_1 + 0x163) + (uint)*(byte *)(param_1 + 0x9b));
  }
  if (*(int *)(param_1 + 0x31c) != 0) {
    FUN_141e95840(puVar13,3,
                  (uint)*(byte *)(param_1 + 0x22b) + (uint)*(byte *)(param_1 + 0x163) +
                  (uint)*(byte *)(param_1 + 0x9b));
  }
  if (*(int *)(param_1 + 0x3e4) != 0) {
    FUN_141e95840(puVar13,4,
                  (uint)*(byte *)(param_1 + 0x2f3) + (uint)*(byte *)(param_1 + 0x22b) +
                  (uint)*(byte *)(param_1 + 0x163) + (uint)*(byte *)(param_1 + 0x9b));
  }
  if (*(int *)(param_1 + 0x4ac) != 0) {
    FUN_141e95840(puVar13,5);
  }
  return puVar13;
}



// FUNCTION 141e9e370 LoadData body=145 status=ok
// SIG undefined LoadData(void)

void TOpenGLBuffer<FOpenGLBasePixelBuffer,35052,&CachedBindPixelUnpackBuffer>::LoadData
               (undefined8 param_1,int param_2,uint param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = DAT_1464c97d4;
  if (DAT_1464c97d4 == 0) {
    (*DAT_146ab4318)(0x88ec,param_2,param_3);
  }
  else if (param_3 != 0) {
    do {
      uVar2 = param_3;
      if (uVar1 <= param_3) {
        uVar2 = uVar1;
      }
      (*DAT_146ab4318)(0x88ec,param_2,uVar2,param_4);
      param_2 = param_2 + uVar2;
      param_4 = param_4 + (ulonglong)uVar2;
      param_3 = param_3 - uVar2;
    } while (param_3 != 0);
    return;
  }
  return;
}



// FUNCTION 141e9e410 Lock body=335 status=ok
// SIG undefined Lock(void)

void TOpenGLBuffer<FOpenGLBasePixelBuffer,35052,&CachedBindPixelUnpackBuffer>::Lock
               (longlong param_1,undefined4 param_2,int param_3,byte param_4,char param_5)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  
  FUN_141e6dae0(*(undefined4 *)(param_1 + 0x18));
  uVar3 = (uint)param_4 * 2 | *(uint *)(param_1 + 0x28) & 0xfffffffd;
  *(uint *)(param_1 + 0x28) = uVar3 | 1;
  if ((param_5 == '\0') && ((param_4 != 0 || (param_3 != *(int *)(param_1 + 0x40))))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((param_4 == 0) && (DAT_146ab053c == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((bVar1) && (DAT_146ab0540 == 0)) && (DAT_1464c97d8 != 0)) {
    if ((uVar3 & 4) == 0) {
      uVar4 = 0x88e4;
      if ((*(byte *)(param_1 + 0x14) & 6) != 0) {
        uVar4 = 0x88e8;
      }
    }
    else {
      uVar4 = 0x88e0;
    }
    (*DAT_146ab4310)(0x88ec,*(undefined4 *)(param_1 + 0x40),0,uVar4);
  }
  if (bVar2) {
    uVar3 = param_4 ^ 1;
    if (uVar3 == 0) {
      uVar4 = 1;
    }
    else if (uVar3 == 1) {
      uVar4 = 0x2a;
    }
    else if (uVar3 == 2) {
      uVar4 = 0x22;
    }
    else if (uVar3 == 3) {
      uVar4 = 0xc2;
    }
    else {
      uVar4 = 3;
    }
    uVar4 = (*DAT_146ab4778)(0x88ec,param_2,param_3,uVar4);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffff7;
    *(undefined4 *)(param_1 + 0x30) = param_2;
    *(int *)(param_1 + 0x2c) = param_3;
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = param_2;
    *(int *)(param_1 + 0x2c) = param_3;
    uVar4 = FMemory::Malloc(param_3,0);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
  }
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  return;
}



// FUNCTION 141e9e560 FUN_141e9e560 body=397 status=ok
// SIG undefined FUN_141e9e560(void)

undefined8
FUN_141e9e560(longlong param_1,undefined8 param_2,int param_3,int param_4,int param_5,
             ulonglong param_6,ulonglong param_7)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  
  uVar5 = FUN_141e9b150();
  iVar9 = 1;
  if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
    iVar9 = 6;
  }
  bVar4 = true;
  lVar2 = (longlong)(iVar9 * param_3 + param_4) * 8;
  if (*(longlong *)(lVar2 + *(longlong *)(param_1 + 0xa0)) == 0) {
    bVar4 = false;
    lVar6 = operator_new();
    lVar7 = 0;
    if (lVar6 != 0) {
      param_7 = param_7 & 0xffffffff00000000;
      param_6 = param_6 & 0xffffffffffffff00;
      lVar7 = FUN_141e69270(lVar6,0,uVar5,2,0,param_6,param_7,0);
    }
    puVar3 = *(undefined8 **)(lVar2 + *(longlong *)(param_1 + 0xa0));
    *(longlong *)(lVar2 + *(longlong *)(param_1 + 0xa0)) = lVar7;
    if (lVar7 != 0) {
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    }
    if (puVar3 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  puVar3 = *(undefined8 **)(lVar2 + *(longlong *)(param_1 + 0xa0));
  if (puVar3 != (undefined8 *)0x0) {
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
  }
  if ((bVar4) && ((*(uint *)(param_1 + 0x40) & 0x40005) == 0x40000)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((param_5 != 1) && (!bVar4)) {
    FUN_141ea9b30(param_1,param_3,param_4);
  }
  uVar8 = TOpenGLBuffer<FOpenGLBasePixelBuffer,35052,&CachedBindPixelUnpackBuffer>::Lock
                    (puVar3,0,*(undefined4 *)(puVar3 + 2),param_5 == 0,param_5 != 0,param_6,param_7)
  ;
  piVar1 = (int *)(puVar3 + 1);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  return uVar8;
}



// FUNCTION 141e9e6f0 FUN_141e9e6f0 body=580 status=ok
// SIG undefined FUN_141e9e6f0(void)

undefined8
FUN_141e9e6f0(longlong param_1,char param_2,int param_3,int param_4,int param_5,int *param_6,
             undefined4 *param_7)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  byte bVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  
  lVar14 = (longlong)*(int *)(param_1 + 0x3c);
  uVar16 = (&DAT_1464ca1b8)[lVar14 * 10];
  uVar15 = (&DAT_1464ca1bc)[lVar14 * 10];
  iVar2 = (&DAT_1464ca1c4)[lVar14 * 10];
  bVar12 = (byte)param_3;
  uVar5 = *(uint *)(param_1 + 0x60) >> (bVar12 & 0x1f);
  uVar13 = uVar16;
  if (uVar16 <= uVar5) {
    uVar13 = uVar5;
  }
  uVar6 = *(uint *)(param_1 + 100) >> (bVar12 & 0x1f);
  uVar5 = uVar15;
  if (uVar15 <= uVar6) {
    uVar5 = uVar6;
  }
  uVar6 = 1;
  if (param_2 != '\0') {
    uVar7 = *(uint *)(param_1 + 0x68) >> (bVar12 & 0x1f);
    uVar6 = 1;
    if (uVar7 != 0) {
      uVar6 = uVar7;
    }
  }
  uVar16 = ((uVar16 - 1) + uVar13) / uVar16;
  uVar15 = ((uVar15 - 1) + uVar5) / uVar15;
  uVar7 = uVar15;
  uVar13 = uVar16;
  if (*(int *)(param_1 + 0x3c) - 0x1eU < 2) {
    uVar13 = 2;
    if (1 < uVar16) {
      uVar13 = uVar16;
    }
    uVar7 = 2;
    if (1 < uVar15) {
      uVar7 = uVar15;
    }
  }
  iVar17 = uVar13 * iVar2;
  *param_6 = iVar17;
  uVar10 = 0;
  uVar18 = uVar10;
  if (param_2 != '\0') {
    uVar18 = (ulonglong)(iVar17 * uVar5);
  }
  bVar4 = true;
  *param_7 = (int)uVar18;
  iVar17 = 1;
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar17 = *(int *)(param_1 + 0x68);
  }
  iVar8 = 1;
  if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
    iVar8 = 6;
  }
  lVar14 = (longlong)(iVar8 * iVar17 * param_3 + param_4) * 8;
  if (*(longlong *)(lVar14 + *(longlong *)(param_1 + 0xa0)) == 0) {
    bVar4 = false;
    lVar9 = operator_new(0x48);
    if (lVar9 != 0) {
      uVar10 = FUN_141e69270(lVar9,0,uVar7 * uVar13 * uVar6 * iVar2,2,0,0,0,0);
    }
    puVar3 = *(undefined8 **)(lVar14 + *(longlong *)(param_1 + 0xa0));
    *(ulonglong *)(lVar14 + *(longlong *)(param_1 + 0xa0)) = uVar10;
    if (uVar10 != 0) {
      *(int *)(uVar10 + 8) = *(int *)(uVar10 + 8) + 1;
    }
    if (puVar3 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  puVar3 = *(undefined8 **)(lVar14 + *(longlong *)(param_1 + 0xa0));
  if (puVar3 != (undefined8 *)0x0) {
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
  }
  if ((bVar4) && ((*(uint *)(param_1 + 0x40) & 0x40005) == 0x40000)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((param_5 != 1) && (!bVar4)) {
    FUN_141ea9dd0(param_1,param_3,param_4);
  }
  uVar11 = TOpenGLBuffer<FOpenGLBasePixelBuffer,35052,&CachedBindPixelUnpackBuffer>::Lock
                     (puVar3,0,*(undefined4 *)(puVar3 + 2),param_5 == 0,param_5 != 0);
  piVar1 = (int *)(puVar3 + 1);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  return uVar11;
}



// FUNCTION 141e9e940 FUN_141e9e940 body=411 status=ok
// SIG undefined FUN_141e9e940(void)

undefined8
FUN_141e9e940(longlong param_1,undefined8 param_2,int param_3,int param_4,int param_5,
             ulonglong param_6,ulonglong param_7)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar5 = FUN_141e9b230();
  lVar8 = 0;
  bVar4 = true;
  uVar11 = *(uint *)(param_1 + 0x68);
  if (*(uint *)(param_1 + 0x68) < 2) {
    uVar11 = 0;
  }
  uVar10 = 1;
  if (uVar11 != 0) {
    uVar10 = uVar11;
  }
  iVar6 = 1;
  if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
    iVar6 = 6;
  }
  lVar2 = (longlong)(int)(iVar6 * uVar10 * param_3 + param_4) * 8;
  if (*(longlong *)(lVar2 + *(longlong *)(param_1 + 0xa0)) == 0) {
    bVar4 = false;
    lVar7 = operator_new(0x48);
    if (lVar7 != 0) {
      param_7 = param_7 & 0xffffffff00000000;
      param_6 = param_6 & 0xffffffffffffff00;
      lVar8 = FUN_141e69270(lVar7,0,uVar5,2,0,param_6,param_7,0);
    }
    puVar3 = *(undefined8 **)(lVar2 + *(longlong *)(param_1 + 0xa0));
    *(longlong *)(lVar2 + *(longlong *)(param_1 + 0xa0)) = lVar8;
    if (lVar8 != 0) {
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    }
    if (puVar3 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  puVar3 = *(undefined8 **)(lVar2 + *(longlong *)(param_1 + 0xa0));
  if (puVar3 != (undefined8 *)0x0) {
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
  }
  if ((bVar4) && ((*(uint *)(param_1 + 0x40) & 0x40005) == 0x40000)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((param_5 != 1) && (!bVar4)) {
    FUN_141eaa080(param_1,param_3,param_4);
  }
  uVar9 = TOpenGLBuffer<FOpenGLBasePixelBuffer,35052,&CachedBindPixelUnpackBuffer>::Lock
                    (puVar3,0,*(undefined4 *)(puVar3 + 2),param_5 == 0,param_5 != 0,param_6,param_7)
  ;
  piVar1 = (int *)(puVar3 + 1);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  return uVar9;
}



// FUNCTION 141e9eae0 FUN_141e9eae0 body=1092 status=ok
// SIG undefined FUN_141e9eae0(void)

longlong FUN_141e9eae0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                      int param_5,int *param_6)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong local_res18;
  undefined4 local_res20 [2];
  longlong local_f8;
  longlong local_f0;
  longlong *plStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  longlong *local_c0;
  longlong lStack_b8;
  longlong *plStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  
  lVar10 = 0;
  local_res18 = param_3;
  local_res20[0] = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ab3f58) && (_Init_thread_header(&DAT_146ab3f58), DAT_146ab3f58 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar12 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.RHICmdBufferWriteLocks");
    if (plVar12 != (longlong *)0x0) {
      lVar10 = (**(code **)(*plVar12 + 0x38))(plVar12);
    }
    DAT_146ab3f50 = lVar10;
    _Init_thread_footer(&DAT_146ab3f58);
  }
  piVar4 = param_6;
  if (((*(int *)(DAT_146ab3f50 + 4) < 1) || (param_5 != 1)) || (DAT_146ab6383 == '\0')) {
    plStack_e8 = &local_res18;
    local_e0 = local_res20;
    uStack_d8 = &param_5;
    uStack_c8 = &stack0x00000038;
    local_d0 = param_6;
    local_f8 = 0;
    local_f0 = param_1;
    if ((DAT_146ab6383 == '\0') || (cVar5 = FUN_1415e13e0(), cVar5 != '\0')) {
      iVar8 = param_5;
      uVar3 = local_res20[0];
      lVar10 = local_res18;
      if (DAT_146ab6383 != '\0') {
        IsInRenderingThread();
      }
      local_f8 = FUN_141e9e560(lVar10,0,uVar3,0,iVar8,piVar4,&param_6);
    }
    else {
      puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      puVar11 = puVar15 + 0xc;
      if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x70);
        puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        puVar11 = puVar15 + 0xc;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar11;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar15;
      local_c0 = &local_f8;
      lStack_b8 = local_f0;
      plStack_b0 = plStack_e8;
      *(undefined8 **)(param_2 + 8) = puVar15 + 1;
      uStack_a8 = (undefined4)local_e0;
      uStack_a4 = local_e0._4_4_;
      uStack_a0 = (undefined4)uStack_d8;
      uStack_9c = uStack_d8._4_4_;
      local_58 = (longlong *)0x0;
      local_98 = (undefined4)local_d0;
      uStack_94 = local_d0._4_4_;
      uStack_90 = (undefined4)uStack_c8;
      uStack_8c = uStack_c8._4_4_;
      local_48 = 0;
      puVar11 = (undefined8 *)FUN_140438ef0(0x40,local_78);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &PTR_FUN_144213c30;
        puVar11[1] = local_c0;
        puVar11[2] = lStack_b8;
        puVar11[3] = plStack_b0;
        puVar11[4] = CONCAT44(uStack_a4,uStack_a8);
        *(undefined4 *)(puVar11 + 5) = uStack_a0;
        *(undefined4 *)((longlong)puVar11 + 0x2c) = uStack_9c;
        *(undefined4 *)(puVar11 + 6) = local_98;
        *(undefined4 *)((longlong)puVar11 + 0x34) = uStack_94;
        puVar11[7] = CONCAT44(uStack_8c,uStack_90);
      }
      local_88[0] = FUN_141e938e0;
      puVar15[1] = 0;
      *puVar15 = &PTR_ExecuteAndDestruct_144eb5ab0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar15 + 2,local_88);
      if (local_48 != 0) {
        plVar12 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar12 = local_58;
        }
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x10))(plVar12,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (*(int *)(param_2 + 0x14) != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
      }
      FUN_141ed93a0(param_2);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(param_2);
      }
      FRHICommandListBase::WaitForTasks(param_2,1);
    }
    lVar10 = (longlong)*(int *)(local_res18 + 0x3c);
    uVar13 = (&DAT_1464ca1b8)[lVar10 * 10];
    uVar7 = (&DAT_1464ca1bc)[lVar10 * 10];
    bVar1 = (byte)local_res20[0] & 0x1f;
    uVar14 = *(uint *)(local_res18 + 0x60) >> bVar1;
    uVar17 = *(uint *)(local_res18 + 100) >> ((byte)local_res20[0] & 0x1f);
    uVar2 = uVar13;
    if (uVar13 <= uVar14) {
      uVar2 = uVar14;
    }
    uVar2 = (uint)(CONCAT44(0 >> bVar1,(uVar2 - 1) + uVar13) / (ulonglong)uVar13);
    uVar13 = uVar7;
    if (uVar7 <= uVar17) {
      uVar13 = uVar17;
    }
    uVar7 = ((uVar7 - 1) + uVar13) / uVar7;
    uVar14 = uVar7;
    uVar13 = uVar2;
    if (*(int *)(local_res18 + 0x3c) - 0x1eU < 2) {
      uVar13 = 2;
      if (1 < uVar2) {
        uVar13 = uVar2;
      }
      uVar14 = 2;
      if (1 < uVar7) {
        uVar14 = uVar7;
      }
    }
    iVar8 = uVar13 * (&DAT_1464ca1c4)[lVar10 * 10];
    iVar6 = uVar14 * uVar13 * (&DAT_1464ca1c4)[lVar10 * 10];
    *piVar4 = iVar8;
    lVar10 = local_f8;
  }
  else {
    iVar6 = FUN_141e9b150(local_res18,0,local_res20[0],0,1,param_6,&local_f8);
    lVar10 = FMemory::Malloc(iVar6,0x10);
    iVar8 = *piVar4;
  }
  uStack_d8 = (undefined4 *)CONCAT44(param_5,iVar8);
  local_f0 = local_res18;
  iVar8 = *(int *)(param_1 + 0x16040);
  local_e0 = (undefined4 *)CONCAT44(iVar6,local_res20[0]);
  iVar9 = iVar8 + 1;
  *(int *)(param_1 + 0x16040) = iVar9;
  plStack_e8 = (longlong *)lVar10;
  if (*(int *)(param_1 + 0x16044) < iVar9) {
    TArray<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams,TInlineAllocator<16,FDefaultAllocator>_>
    ::ResizeGrow(param_1 + 0x15e38);
  }
  lVar16 = *(longlong *)(param_1 + 0x16038);
  if (*(longlong *)(param_1 + 0x16038) == 0) {
    lVar16 = param_1 + 0x15e38;
  }
  lVar18 = (longlong)iVar8 * 0x20;
  plVar12 = (longlong *)(lVar16 + lVar18);
  *plVar12 = local_f0;
  plVar12[1] = (longlong)plStack_e8;
  puVar11 = (undefined8 *)(lVar16 + 0x10 + lVar18);
  *puVar11 = local_e0;
  puVar11[1] = uStack_d8;
  *(int *)(param_1 + 0x16048) = *(int *)(param_1 + 0x16048) + iVar6;
  return lVar10;
}



// FUNCTION 141e9ef30 MarkShaderParameterCachesDirty body=153 status=ok
// SIG undefined MarkShaderParameterCachesDirty(void)

uint * MarkShaderParameterCachesDirty(longlong param_1,byte param_2)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar1 = (uint *)(ulonglong)(byte)-param_2;
  uVar4 = (ulonglong)(-(uint)(param_2 != 0) & 5);
  if (uVar4 < param_2 + 5) {
    lVar3 = (param_2 + 5) - uVar4;
    puVar2 = (uint *)(uVar4 * 0x80 + 0x78 + param_1);
    do {
      puVar2[-0x14] = 0;
      puVar1 = puVar2 + 0x20;
      puVar2[-0x13] = *puVar2 >> 4;
      puVar2[-0x12] = 0;
      puVar2[-0x11] = *puVar2 >> 4;
      puVar2[-0x10] = 0;
      puVar2[-0xf] = *puVar2 >> 4;
      puVar2[-0xe] = 0;
      puVar2[-0xd] = *puVar2 >> 4;
      puVar2[-0xc] = 0;
      puVar2[-0xb] = *puVar2 >> 4;
      lVar3 = lVar3 + -1;
      puVar2 = puVar1;
    } while (lVar3 != 0);
  }
  return puVar1;
}



// FUNCTION 141e9efd0 MoveHashLines body=493 status=ok
// SIG undefined MoveHashLines(void)

undefined8 `anonymous_namespace'::MoveHashLines(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *pvVar7;
  byte *pbVar8;
  byte *_Str;
  int iVar9;
  
  _Str = (byte *)*param_2;
  do {
    pbVar4 = (byte *)::_guard_xfg_dispatch_icall_nop((char *)_Str,10);
    if (pbVar4 == (byte *)0x0) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (_Str[lVar5] != 0);
      pbVar4 = _Str + (int)lVar5;
    }
    pbVar8 = _Str;
    if (*_Str != 0x23) {
      for (; (bVar1 = *pbVar8, 3 < (byte)(bVar1 - 10) && (bVar1 != 0x85)); pbVar8 = pbVar8 + 1) {
        iVar2 = isspace((uint)bVar1);
        if (iVar2 == 0) {
          pbVar4 = (byte *)*param_2;
          if (pbVar4 < _Str) {
            iVar2 = (int)param_1[1];
            iVar9 = (int)_Str - (int)pbVar4;
            iVar3 = iVar2 + iVar9;
            *(int *)(param_1 + 1) = iVar3;
            if (iVar2 < 1) {
              if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
                TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
              }
              ::_guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar2 + *param_1),pbVar4,(longlong)iVar9);
              iVar2 = (int)param_1[1];
              *(int *)(param_1 + 1) = iVar2 + 1;
              if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
                TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
              }
              *(undefined1 *)((longlong)iVar2 + *param_1) = 0;
            }
            else {
              if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
                TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
              }
              pvVar7 = (void *)(*param_1 + (longlong)(iVar2 + -1));
              ::_guard_xfg_dispatch_icall_nop((void *)((longlong)iVar9 + (longlong)pvVar7),pvVar7,1)
              ;
              ::_guard_xfg_dispatch_icall_nop
                        ((void *)(*param_1 + (longlong)(iVar2 + -1)),pbVar4,(longlong)iVar9);
            }
            iVar2 = (int)param_1[1];
            lVar5 = *param_1;
            if (*(char *)((longlong)iVar2 + -2 + lVar5) != '\n') {
              *(int *)(param_1 + 1) = iVar2 + 1;
              if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
                TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1);
                lVar5 = *param_1;
              }
              pvVar7 = (void *)((iVar2 + -1) + lVar5);
              ::_guard_xfg_dispatch_icall_nop((void *)((longlong)pvVar7 + 1),pvVar7,1);
              *(undefined1 *)((longlong)(iVar2 + -1) + *param_1) = 10;
            }
            pvVar7 = (void *)*param_2;
            iVar2 = (int)_Str - (int)pvVar7;
            if (iVar2 != 0) {
              iVar3 = *(int *)(param_2 + 1);
              if (iVar3 - iVar2 != 0) {
                ::_guard_xfg_dispatch_icall_nop
                          (pvVar7,(void *)((longlong)iVar2 + (longlong)pvVar7),
                           (longlong)(iVar3 - iVar2));
                iVar3 = *(int *)(param_2 + 1);
              }
              *(int *)(param_2 + 1) = iVar3 - iVar2;
              TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_2);
            }
            uVar6 = 1;
          }
          else {
            uVar6 = 0;
          }
          return uVar6;
        }
      }
    }
    _Str = pbVar4 + 1;
    if (*pbVar4 != 10) {
      _Str = pbVar4;
    }
  } while( true );
}



// FUNCTION 141e9f1c0 NeedsUAVStage body=63 status=ok
// SIG undefined NeedsUAVStage(void)

undefined4 FOpenGLComputeShader::NeedsUAVStage(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x610);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x100) + 0x600;
  }
  uVar1 = *(uint *)(lVar2 + (longlong)((int)(param_2 + ((int)param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
  return CONCAT31((int3)(uVar1 >> 8),(uVar1 >> (param_2 & 0x1f) & 1) != 0);
}



// FUNCTION 141e9f200 FUN_141e9f200 body=43 status=ok
// SIG undefined FUN_141e9f200(void)

undefined8 FUN_141e9f200(undefined4 param_1)

{
  switch(param_1) {
  default:
    return 1;
  case 6:
  case 0xd:
  case 0xf:
  case 0x18:
    return 0;
  }
}



// FUNCTION 141e9f250 OpenGLTextureAllocated body=562 status=ok
// SIG undefined OpenGLTextureAllocated(void)

void OpenGLTextureAllocated(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  lVar4 = (**(code **)(*param_1 + 0x20))();
  if (lVar4 != 0) {
    if ((*(byte *)(lVar4 + 0x9c) & 1) != 0) {
      return;
    }
    iVar1 = CalcTextureSize(*(undefined4 *)(lVar4 + 0x60),*(undefined4 *)(lVar4 + 0x60),
                            *(undefined4 *)(lVar4 + 0x3c),*(undefined4 *)(lVar4 + 0x34));
    iVar3 = 1;
    if (*(int *)(lVar4 + 0x68) == 1) {
      iVar3 = 6;
    }
    *(uint *)(lVar4 + 0x9c) = *(uint *)(lVar4 + 0x9c) | 1;
    uVar6 = iVar1 * iVar3 * *(int *)(lVar4 + 0x68);
    *(uint *)(lVar4 + 0x98) =
         *(uint *)(lVar4 + 0x98) ^ (uVar6 ^ *(uint *)(lVar4 + 0x98)) & 0x3fffffff;
    uVar5 = 0x40000000;
    if ((*(uint *)(lVar4 + 0x60) & *(uint *)(lVar4 + 0x60) - 1) != 0) {
      uVar5 = 0;
    }
    *(uint *)(lVar4 + 0x98) = uVar5 | *(uint *)(lVar4 + 0x98) & 0xbfffffff;
    goto LAB_141e9f42f;
  }
  lVar4 = (**(code **)(*param_1 + 8))(param_1);
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*param_1 + 0x18))(param_1);
    if (lVar4 != 0) {
      if ((*(byte *)(lVar4 + 0x9c) & 1) != 0) {
        return;
      }
      uVar6 = CalcTextureSize3D(*(undefined4 *)(lVar4 + 0x60),*(undefined4 *)(lVar4 + 100),
                                *(undefined4 *)(lVar4 + 0x68),*(undefined4 *)(lVar4 + 0x3c),
                                *(undefined4 *)(lVar4 + 0x34));
      *(uint *)(lVar4 + 0x9c) = *(uint *)(lVar4 + 0x9c) | 1;
      uVar5 = (*(uint *)(lVar4 + 0x98) ^ uVar6) & 0x3fffffff ^ *(uint *)(lVar4 + 0x98);
      *(uint *)(lVar4 + 0x98) = uVar5;
      if ((((*(uint *)(lVar4 + 0x60) & *(uint *)(lVar4 + 0x60) - 1) != 0) ||
          ((*(uint *)(lVar4 + 100) & *(uint *)(lVar4 + 100) - 1) != 0)) ||
         (uVar2 = 0x40000000, (*(uint *)(lVar4 + 0x68) & *(uint *)(lVar4 + 0x68) - 1) != 0)) {
        uVar2 = 0;
      }
      *(uint *)(lVar4 + 0x98) = uVar5 & 0xbfffffff | uVar2;
      goto LAB_141e9f42f;
    }
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    if (lVar4 == 0) goto LAB_141e9f42f;
  }
  if ((*(byte *)(lVar4 + 0x9c) & 1) != 0) {
    return;
  }
  iVar1 = *(int *)(lVar4 + 0x68);
  iVar3 = CalcTextureSize(*(undefined4 *)(lVar4 + 0x60),*(undefined4 *)(lVar4 + 100),
                          *(undefined4 *)(lVar4 + 0x3c),*(undefined4 *)(lVar4 + 0x34));
  uVar6 = iVar3 * iVar1;
  uVar5 = (*(uint *)(lVar4 + 0x98) ^ uVar6) & 0x3fffffff ^ *(uint *)(lVar4 + 0x98);
  *(uint *)(lVar4 + 0x98) = uVar5;
  *(uint *)(lVar4 + 0x9c) = *(uint *)(lVar4 + 0x9c) | 1;
  if (((*(uint *)(lVar4 + 0x60) & *(uint *)(lVar4 + 0x60) - 1) != 0) ||
     (uVar2 = 0x40000000, (*(uint *)(lVar4 + 100) & *(uint *)(lVar4 + 100) - 1) != 0)) {
    uVar2 = 0;
  }
  *(uint *)(lVar4 + 0x98) = uVar5 & 0xbfffffff | uVar2;
LAB_141e9f42f:
  iVar1 = (int)(((int)(uVar6 + 0x3ff) >> 0x1f & 0x3ffU) + (uVar6 + 0x3ff & 0xfffffc00)) >> 10;
  if ((param_2 & 7) == 0) {
    DAT_146ab6300 = DAT_146ab6300 + iVar1;
  }
  else {
    DAT_146ab6304 = DAT_146ab6304 + iVar1;
  }
  return;
}



// FUNCTION 141e9f490 OpenGLTextureDeleted body=211 status=ok
// SIG undefined OpenGLTextureDeleted(void)

void OpenGLTextureDeleted(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  if (DAT_1469f59d8 != 0) {
    FShaderCache::InternalRemoveTexture(DAT_1469f59d8,param_1);
  }
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = 0;
  lVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  if (lVar2 == 0) {
    lVar2 = (**(code **)(*param_1 + 8))(param_1);
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_1 + 0x18))(param_1);
      if (lVar2 == 0) {
        lVar2 = (**(code **)(*param_1 + 0x10))(param_1);
        if (lVar2 == 0) goto LAB_141e9f51a;
        lVar2 = (**(code **)(*param_1 + 0x10))(param_1);
      }
      else {
        lVar2 = (**(code **)(*param_1 + 0x18))();
      }
    }
    else {
      lVar2 = (**(code **)(*param_1 + 8))();
    }
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x20))();
  }
  uVar3 = *(uint *)(lVar2 + 0x98) & 0x3fffffff;
LAB_141e9f51a:
  uVar3 = uVar3 + 0x3ff >> 10;
  if ((uVar1 & 7) != 0) {
    DAT_146ab6304 = DAT_146ab6304 - uVar3;
    return;
  }
  DAT_146ab6300 = DAT_146ab6300 - uVar3;
  return;
}



// FUNCTION 141e9f570 FUN_141e9f570 body=1362 status=ok
// SIG undefined FUN_141e9f570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e9f570(undefined8 param_1)

{
  wchar_t _C;
  char cVar1;
  wint_t wVar2;
  wint_t wVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined2 *puVar10;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined2 *local_178;
  ulonglong local_170;
  undefined2 *local_160;
  int local_158;
  undefined1 local_148 [256];
  longlong local_48;
  short *local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  DAT_1464c97f8 = 0;
  DAT_146ab0539 = 1;
  (*DAT_146ab4060)(0x8872,&DAT_1464c97f8);
  DAT_1464c9800 = 0;
  DAT_146ab0539 = 1;
  (*DAT_146ab4060)(0x8b4c,&DAT_1464c9800);
  DAT_1464c97fc = 0;
  DAT_146ab0539 = 1;
  (*DAT_146ab4060)(0x8b4d,&DAT_1464c97fc);
  DAT_146ab0539 = 0;
  if (DAT_1464c97fc < 0x30) {
    DAT_1464c9808 = 0;
    DAT_1464c980c = 0;
    if (0x10 < DAT_1464c97f8) {
      DAT_1464c97f8 = 0x10;
    }
    if (8 < DAT_1464c9800) {
      DAT_1464c9800 = 8;
    }
    if (8 < DAT_1464c9804) {
      DAT_1464c9804 = 8;
    }
    iVar4 = 0x20;
LAB_141e9f6eb:
    if (iVar4 < DAT_1464c97fc) {
      DAT_1464c97fc = iVar4;
    }
  }
  else if ((DAT_146ab62cc < 0x1e) && ((0x25e2cf88U >> (DAT_146ab62cc & 0x1f) & 1) != 0)) {
    if (0x10 < DAT_1464c97f8) {
      DAT_1464c97f8 = 0x10;
    }
    if (8 < DAT_1464c9800) {
      DAT_1464c9800 = 8;
    }
    if (8 < DAT_1464c9804) {
      DAT_1464c9804 = 8;
    }
    if (8 < DAT_1464c9808) {
      DAT_1464c9808 = 8;
    }
    if (8 < DAT_1464c980c) {
      DAT_1464c980c = 8;
    }
    iVar4 = 0x30;
    goto LAB_141e9f6eb;
  }
  local_188 = 0xffffffff;
  iVar4 = FUN_141592950(param_1,L"GL_KHR_texture_compression_astc_ldr",1);
  DAT_146ab3ded = iVar4 != -1;
  local_188 = 0xffffffff;
  iVar4 = FUN_141592950(param_1,L"GL_ARB_copy_image",1);
  DAT_146ab3dee = iVar4 != -1;
  local_188 = 0xffffffff;
  iVar4 = FUN_141592950(param_1,L"GL_ARB_seamless_cube_map",1);
  DAT_146ab3def = iVar4 != -1;
  local_188 = 0xffffffff;
  iVar4 = FUN_141592950(param_1,L"GL_EXT_texture_filter_anisotropic",1);
  DAT_146ab3df1 = iVar4 != -1;
  local_188 = 0xffffffff;
  iVar4 = FUN_141592950(param_1,L"GL_ARB_draw_buffers_blend",1);
  DAT_146ab3df2 = iVar4 != -1;
  uVar5 = (*DAT_146ab4070)(0x1f00);
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_148,uVar5);
  local_178 = (undefined2 *)0x0;
  local_170 = 0;
  if ((local_40 != (short *)0x0) && (*local_40 != 0)) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (local_40[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_170 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
    }
    FGenericPlatformString::Memcpy(local_178,local_40,(longlong)(int)uVar7 * 2);
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  local_188 = 0xffffffff;
  iVar4 = FUN_141592950(&local_178,L"ATI ",1);
  if (iVar4 != -1) {
    DAT_146ab62d8 = 0x1002;
    DAT_146ab3df3 = 1;
    goto LAB_141e9f9f3;
  }
  local_188 = 0xffffffff;
  iVar4 = FUN_141592950(&local_178,L"Intel ",1);
  if (iVar4 == -1) {
    pwVar9 = L"Intel";
    puVar10 = &DAT_143f3eda8;
    if ((int)local_170 != 0) {
      puVar10 = local_178;
    }
    do {
      _C = *(wchar_t *)((longlong)(puVar10 + -0xa275c06c) + (longlong)pwVar9);
      if ((_C == L'\0') && (*pwVar9 == L'\0')) break;
      if (_C != *pwVar9) {
        wVar2 = towlower(_C);
        wVar3 = towlower(*pwVar9);
        if (wVar2 != wVar3) goto LAB_141e9f905;
      }
      pwVar9 = pwVar9 + 1;
    } while( true );
  }
  goto LAB_141e9f9da;
LAB_141e9f905:
  if (wVar2 != wVar3) {
    local_188 = 0xffffffff;
    iVar4 = FUN_141592950(&local_178,L"NVIDIA ",1);
    if (iVar4 == -1) {
      local_188 = 0xffffffff;
      iVar4 = FUN_141592950(&local_178,L"ImgTec",1);
      if (iVar4 == -1) {
        local_188 = 0xffffffff;
        iVar4 = FUN_141592950(&local_178,&DAT_144eb8108,1);
        if (iVar4 == -1) {
          local_188 = 0xffffffff;
          iVar4 = FUN_141592950(&local_178,L"Qualcomm",1);
          if (iVar4 != -1) {
            DAT_146ab62d8 = 0x5143;
          }
        }
        else {
          DAT_146ab62d8 = 0x13b5;
        }
      }
      else {
        DAT_146ab62d8 = 0x1010;
      }
    }
    else {
      DAT_146ab62d8 = 0x10de;
    }
    goto LAB_141e9f9f3;
  }
LAB_141e9f9da:
  DAT_146ab62d8 = 0x8086;
  DAT_146ab3df3 = 1;
LAB_141e9f9f3:
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar6 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"OpenGL.UseStagingBuffer");
  if (plVar6 != (longlong *)0x0) {
    FString::PrintfImpl(&local_160,&DAT_143f3edc0,0);
    puVar10 = &DAT_143f3eda8;
    if (local_158 != 0) {
      puVar10 = local_160;
    }
    (**(code **)(*plVar6 + 0x60))(plVar6,puVar10,0x8000000);
    if (local_160 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  cVar1 = IsRHIDeviceIntel();
  if (cVar1 != '\0') {
    DAT_1464c97d0 = 0;
  }
  if (local_178 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e9fad0 RHIAliasTextureResources body=152 status=ok
// SIG undefined RHIAliasTextureResources(void)

void FOpenGLDynamicRHI::RHIAliasTextureResources
               (undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  lVar2 = lVar3;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x48))(param_2);
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar2 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 0x48))(param_3);
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar3 = (**(code **)(*param_3 + 0x48))(param_3);
  }
  if ((lVar2 != 0) && (lVar3 != 0)) {
    *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar3 + 0x10);
    uVar1 = *(undefined4 *)(lVar3 + 0x20);
    *(uint *)(lVar2 + 0x28) = *(uint *)(lVar2 + 0x28) | 0x80000000;
    *(undefined4 *)(lVar2 + 0x20) = uVar1;
  }
  return;
}



// FUNCTION 141e9fb70 RHIAsyncReallocateTexture2D body=124 status=ok
// SIG undefined RHIAsyncReallocateTexture2D(void)

undefined8 *
FOpenGLDynamicRHI::RHIAsyncReallocateTexture2D
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  CreateAsyncReallocate2DTextureTarget(param_2,param_1,param_3,param_4,param_5,param_6);
  GLCopyAsyncTexture2D(param_1,*param_2,param_5,param_6,param_3,param_7);
  return param_2;
}



// FUNCTION 141e9fbf0 FUN_141e9fbf0 body=399 status=ok
// SIG undefined FUN_141e9fbf0(void)

longlong *
FUN_141e9fbf0(undefined8 param_1,longlong *param_2,longlong param_3,undefined4 param_4,int param_5,
             uint param_6,uint param_7,undefined8 param_8)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  local_48 = *(undefined4 *)(param_3 + 0x20);
  uStack_44 = *(undefined4 *)(param_3 + 0x24);
  uStack_40 = *(undefined4 *)(param_3 + 0x28);
  uStack_3c = *(undefined4 *)(param_3 + 0x2c);
  local_38 = *(undefined4 *)(param_3 + 0x30);
  uVar1 = *(undefined1 *)(param_3 + 0x3c);
  if (param_5 == 0) {
    param_5 = 1;
    uVar2 = param_7;
    if (param_7 < param_6) {
      uVar2 = param_6;
    }
    while (uVar2 >> 1 != 0) {
      param_5 = param_5 + 1;
      uVar2 = uVar2 >> 1;
    }
  }
  uVar2 = *(uint *)(param_3 + 0x40) & 0xffffffef;
  if (DAT_1464c9c14 != 0) {
    uVar2 = *(uint *)(param_3 + 0x40);
  }
  lVar3 = operator_new(0xf0);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_141e8b9e0(lVar3,param_1,0,0xde1,0xffffffff,CONCAT44(uVar5,param_6),
                          CONCAT44(uVar6,param_7),0,param_5,1,1,1,uVar1,0,0,uVar2,0,&local_48);
  }
  OpenGLTextureAllocated(lVar3,uVar2);
  *param_2 = lVar3;
  lVar4 = 0;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    lVar4 = *param_2;
  }
  FUN_141e98bc0(param_1,lVar4,param_6,param_7,param_4,param_3,param_8);
  return param_2;
}



// FUNCTION 141e9fd80 FUN_141e9fd80 body=582 status=ok
// SIG undefined FUN_141e9fd80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141e9fd80(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_338 [48];
  undefined1 local_308 [480];
  longlong local_128;
  undefined1 local_120 [168];
  longlong local_78 [8];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  FUN_141ed9160(param_2);
  iVar15 = 0;
  if (*(char *)((longlong)param_2 + 0x10d) != '\0') {
    plVar9 = local_78;
    plVar7 = param_2;
    do {
      if (*plVar7 == 0) break;
      *plVar9 = *plVar7;
      iVar15 = iVar15 + 1;
      plVar9 = plVar9 + 1;
      plVar7 = plVar7 + 3;
    } while (iVar15 < 8);
    uVar14 = (longlong)plVar9 - (longlong)local_78 >> 3;
    if ((int)uVar14 != 0) {
      (**(code **)(*param_1 + 0xd8))(param_1,4,local_78,uVar14 & 0xffffffff);
    }
  }
  FUN_1404999a0(local_308);
  FUN_141ebe4d0(param_2,local_308);
  (**(code **)(*param_1 + 600))(param_1,local_308);
  lVar11 = 2;
  plVar9 = param_1 + 2;
  plVar7 = param_2;
  do {
    plVar10 = plVar7;
    plVar8 = plVar9;
    plVar9 = plVar8 + 0x10;
    lVar13 = plVar10[1];
    *plVar8 = *plVar10;
    plVar8[1] = lVar13;
    lVar13 = plVar10[3];
    plVar8[2] = plVar10[2];
    plVar8[3] = lVar13;
    lVar13 = plVar10[5];
    plVar8[4] = plVar10[4];
    plVar8[5] = lVar13;
    lVar13 = plVar10[7];
    plVar8[6] = plVar10[6];
    plVar8[7] = lVar13;
    lVar13 = plVar10[9];
    plVar8[8] = plVar10[8];
    plVar8[9] = lVar13;
    lVar13 = plVar10[0xb];
    plVar8[10] = plVar10[10];
    plVar8[0xb] = lVar13;
    lVar13 = plVar10[0xd];
    plVar8[0xc] = plVar10[0xc];
    plVar8[0xd] = lVar13;
    lVar13 = plVar10[0xf];
    plVar8[0xe] = plVar10[0xe];
    plVar8[0xf] = lVar13;
    lVar11 = lVar11 + -1;
    plVar7 = plVar10 + 0x10;
  } while (lVar11 != 0);
  lVar11 = plVar10[0x11];
  lVar13 = 8;
  puVar12 = local_120;
  *plVar9 = plVar10[0x10];
  plVar8[0x11] = lVar11;
  lVar11 = plVar10[0x13];
  plVar8[0x12] = plVar10[0x12];
  plVar8[0x13] = lVar11;
  lVar11 = plVar10[0x15];
  plVar8[0x14] = plVar10[0x14];
  plVar8[0x15] = lVar11;
  lVar11 = plVar10[0x17];
  plVar8[0x16] = plVar10[0x16];
  plVar8[0x17] = lVar11;
  uVar4 = *(undefined4 *)((longlong)plVar10 + 0xc4);
  lVar11 = plVar10[0x19];
  uVar5 = *(undefined4 *)((longlong)plVar10 + 0xcc);
  *(int *)(plVar8 + 0x18) = (int)plVar10[0x18];
  *(undefined4 *)((longlong)plVar8 + 0xc4) = uVar4;
  *(int *)(plVar8 + 0x19) = (int)lVar11;
  *(undefined4 *)((longlong)plVar8 + 0xcc) = uVar5;
  lVar11 = plVar10[0x1b];
  plVar8[0x1a] = plVar10[0x1a];
  plVar8[0x1b] = lVar11;
  do {
    puVar3 = *(undefined8 **)(puVar12 + -8);
    puVar12 = puVar12 + -8;
    lVar13 = lVar13 + -1;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = (uint *)(puVar3 + 1);
      uVar2 = *puVar1;
      plVar9 = (longlong *)(ulonglong)uVar2;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar2 == 1) {
        if (*(char *)(puVar3 + 2) == '\0') {
          if (DAT_146ab62f5 == '\0') {
            cVar6 = FOutputDevice::CanBeUsedOnAnyThread();
            if (cVar6 != '\0') goto LAB_141e9ff42;
          }
          plVar9 = (longlong *)0x0;
          LOCK();
          uVar2 = *(uint *)((longlong)puVar3 + 0xc);
          if (uVar2 == 0) {
            *(uint *)((longlong)puVar3 + 0xc) = 1;
          }
          else {
            plVar9 = (longlong *)(ulonglong)uVar2;
          }
          UNLOCK();
          if (uVar2 == 0) {
            plVar9 = (longlong *)
                     TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
          }
        }
        else {
LAB_141e9ff42:
          plVar9 = (longlong *)(**(code **)*puVar3)(puVar3,1);
        }
      }
    }
    if (lVar13 == 0) {
      if ((*(char *)((longlong)param_2 + 0x10c) != '\0') && (DAT_146ab6383 != '\0')) {
        DAT_1464c9830 = (undefined8 *)operator_new(0x18);
        if (DAT_1464c9830 == (undefined8 *)0x0) {
          DAT_1464c9830 = (undefined8 *)0x0;
        }
        else {
          *DAT_1464c9830 = 0;
          DAT_1464c9830[1] = 0;
          *(undefined4 *)(DAT_1464c9830 + 2) = 0;
          *(undefined1 *)((longlong)DAT_1464c9830 + 0x14) = 0;
        }
        plVar9 = (longlong *)(ulonglong)DAT_1464c9848;
        *(uint *)(DAT_1464c9830 + 2) = DAT_1464c9848;
      }
      return plVar9;
    }
  } while( true );
}



// FUNCTION 141e9ffd0 RHIBeginRenderQuery body=239 status=ok
// SIG undefined RHIBeginRenderQuery(void)

void FOpenGLDynamicRHI::RHIBeginRenderQuery(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uStack_c;
  
  if (param_2 != 0) {
    LOCK();
    piVar1 = (int *)(param_2 + 0x34);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    LOCK();
    *(int *)(param_2 + 0x38) = iVar5;
    UNLOCK();
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined1 *)(param_2 + 0x3c) = 0;
    if (*(int *)(param_2 + 0x40) == 1) {
      if ((*(char *)(param_2 + 0x3d) == '\0') &&
         (cVar4 = PlatformContextIsCurrent(*(undefined8 *)(param_2 + 0x20)), cVar4 == '\0')) {
        PlatformReleaseRenderQuery(*(undefined4 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
        *(undefined1 *)(param_2 + 0x3d) = 1;
      }
      if (*(char *)(param_2 + 0x3d) != '\0') {
        PlatformGetNewRenderQuery(param_2 + 0x18,param_2 + 0x20);
        *(undefined1 *)(param_2 + 0x3d) = 0;
      }
      (*DAT_146ab42c0)(0x8914,*(undefined4 *)(param_2 + 0x18));
      *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_2 + 0x18);
    }
    if ((DAT_1464c9830 != (longlong *)0x0) && ((int)DAT_1464c9830[2] != 0)) {
      LOCK();
      iVar5 = *(int *)(param_2 + 0x34);
      if (iVar5 == 0) {
        *(int *)(param_2 + 0x34) = 0;
        iVar5 = 0;
      }
      plVar2 = DAT_1464c9830;
      UNLOCK();
      iVar3 = (int)DAT_1464c9830[1];
      *(int *)(DAT_1464c9830 + 1) = iVar3 + 1;
      if (*(int *)((longlong)plVar2 + 0xc) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar3);
      }
      plVar2 = (longlong *)(*plVar2 + (longlong)iVar3 * 0x10);
      *plVar2 = param_2;
      plVar2[1] = CONCAT44(uStack_c,iVar5);
    }
  }
  return;
}



// FUNCTION 141ea00c0 FUN_141ea00c0 body=496 status=ok
// SIG undefined FUN_141ea00c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ea00c0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *_Dst;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_108 [32];
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  code *local_d8 [2];
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  longlong local_58;
  void *local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if ((DAT_146ab6383 == '\0') || (cVar3 = FUN_1415e13e0(), cVar3 != '\0')) {
    if (param_2 == (longlong *)0x0) {
      lVar5 = 0;
    }
    else {
      (**(code **)(*param_2 + 0x48))(param_2);
      if (DAT_146ab6383 != '\0') {
        IsInRenderingThread();
      }
      lVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_d8,param_3);
    if ((DAT_146ab4908 != (code *)0x0) && (DAT_146ab053a != '\0')) {
      (*DAT_146ab4908)(0x1702,*(undefined4 *)(lVar5 + 0x10),0xffffffffffffffff,local_50);
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  else {
    lVar5 = -1;
    local_e8 = (void *)0x0;
    local_dc = 0;
    do {
      lVar1 = lVar5 * 2;
      lVar5 = lVar5 + 1;
    } while (*(short *)(param_3 + 2 + lVar1) != 0);
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_d8,param_3);
    iVar6 = (int)lVar5 + 1;
    _Dst = (void *)0x0;
    uVar7 = 0;
    local_e0 = iVar6;
    if (0 < iVar6) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_e8,0);
      _Dst = local_e8;
      uVar7 = local_dc;
    }
    iVar2 = local_e0;
    _guard_xfg_dispatch_icall_nop(_Dst,local_50,(longlong)iVar6);
    if (local_58 != 0) {
      FMemory::Free();
    }
    local_a8 = 0;
    local_98 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_CopyToEmptyStorage_144ebe6f0;
      puVar4[1] = param_2;
      puVar4[2] = _Dst;
      *(int *)(puVar4 + 3) = iVar2;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar7;
      _Dst = (void *)0x0;
    }
    local_d8[0] = FUN_141e93b10;
    FUN_141eb4140(local_d8,0);
    if (_Dst != (void *)0x0) {
      FMemory::Free(_Dst);
    }
  }
  return;
}



// FUNCTION 141ea02b0 FUN_141ea02b0 body=119 status=ok
// SIG undefined FUN_141ea02b0(void)

void FUN_141ea02b0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  
  (*DAT_146ab42e8)(0x8c2a,*(undefined4 *)(param_2 + 0x1c));
  (*DAT_146ab48e8)(0x8c2a,*(undefined4 *)(param_2 + 0x20),0x8d94,0x1405,param_3);
  if ((*(char *)(param_1 + 0x15c40) != '\0') && (*(longlong *)(param_1 + 0x15c70) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x10);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x14);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



// FUNCTION 141ea0330 RHIComputeMemorySize body=96 status=ok
// SIG undefined RHIComputeMemorySize(void)

uint FOpenGLDynamicRHI::RHIComputeMemorySize(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  lVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  if ((*(byte *)(lVar1 + 0x2c) & 1) == 0) {
    (**(code **)(*param_2 + 0x48))(param_2);
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    (**(code **)(*param_2 + 0x48))(param_2);
  }
  return *(uint *)(lVar1 + 0x28) & 0x3fffffff;
}



// FUNCTION 141ea0390 FUN_141ea0390 body=1462 status=ok
// SIG undefined FUN_141ea0390(void)

void FUN_141ea0390(longlong param_1,longlong *param_2,longlong *param_3,int *param_4)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined8 in_stack_ffffffffffffff38;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar16;
  uint local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58 [2];
  longlong local_50;
  longlong local_48;
  int *local_40;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    (**(code **)(*param_2 + 0x48))(param_2);
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    local_50 = lVar5;
    (**(code **)(*param_3 + 0x48))(param_3);
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar6 = (**(code **)(*param_3 + 0x48))(param_3);
    if (lVar5 != lVar6) {
      local_48 = lVar6;
      lVar7 = (**(code **)(*param_2 + 0x20))(param_2);
      lVar8 = (**(code **)(*param_3 + 0x20))(param_3);
      lVar5 = 0;
      iVar11 = 0;
      iVar13 = iVar11;
      if (lVar8 != 0) {
        iVar13 = *param_4;
      }
      iVar9 = 1;
      if (lVar8 != 0) {
        iVar9 = 6;
      }
      iVar13 = iVar9 * param_4[0xb] + iVar13;
      iVar9 = iVar11;
      if (lVar7 != 0) {
        iVar9 = *param_4;
      }
      local_60 = 0;
      piVar1 = param_4 + 1;
      local_64 = 0;
      iVar10 = 1;
      if (lVar7 != 0) {
        iVar10 = 6;
      }
      iVar9 = iVar10 * param_4[10] + iVar9;
      local_5c = iVar13;
      local_58[0] = iVar9;
      local_40 = piVar1;
      cVar3 = FResolveRect::IsValid(piVar1);
      if (cVar3 == '\0') {
        (**(code **)(*param_2 + 0x48))(param_2);
        if (DAT_146ab6383 != '\0') {
          IsInRenderingThread();
        }
        lVar7 = (**(code **)(*param_2 + 8))(param_2);
        if (lVar7 == 0) {
          lVar7 = (**(code **)(*param_2 + 0x10))(param_2);
          if (lVar7 == 0) {
            lVar7 = (**(code **)(*param_2 + 0x18))(param_2);
            if (lVar7 == 0) {
              lVar7 = (**(code **)(*param_2 + 0x20))(param_2);
              if (lVar7 == 0) {
                LowLevelFatalErrorHandler("Unknown",0x6f0,L"Unknown RHI texture type");
                FDebug::AssertFailed(&DAT_143f3f584,"Unknown",0x6f0,L"Unknown RHI texture type");
                uVar14 = 0;
              }
              else {
                uVar14 = *(uint *)(param_2 + 0xc);
              }
            }
            else {
              uVar14 = *(uint *)(param_2 + 0xc);
            }
          }
          else {
            uVar14 = *(uint *)(param_2 + 0xc);
          }
        }
        else {
          uVar14 = *(uint *)(param_2 + 0xc);
        }
        (**(code **)(*param_2 + 0x48))(param_2);
        if (DAT_146ab6383 != '\0') {
          IsInRenderingThread();
        }
        lVar7 = (**(code **)(*param_2 + 8))(param_2);
        if (lVar7 == 0) {
          lVar7 = (**(code **)(*param_2 + 0x10))(param_2);
          if (lVar7 == 0) {
            lVar7 = (**(code **)(*param_2 + 0x18))(param_2);
            if (lVar7 == 0) {
              lVar7 = (**(code **)(*param_2 + 0x20))(param_2);
              if (lVar7 == 0) {
                LowLevelFatalErrorHandler("Unknown",0x70f,L"Unknown RHI texture type");
                FDebug::AssertFailed(&DAT_143f3f584,"Unknown",0x70f,L"Unknown RHI texture type");
                uVar12 = 0;
              }
              else {
                uVar12 = *(uint *)(param_2 + 0xc);
              }
            }
            else {
              uVar12 = *(uint *)((longlong)param_2 + 100);
            }
          }
          else {
            uVar12 = *(uint *)((longlong)param_2 + 100);
          }
        }
        else {
          uVar12 = *(uint *)((longlong)param_2 + 100);
        }
        uVar14 = uVar14 >> ((byte)param_4[9] & 0x1f);
        if (uVar14 < 2) {
          uVar14 = 1;
        }
        uVar12 = uVar12 >> ((byte)param_4[9] & 0x1f);
        iVar10 = iVar11;
        if (uVar12 < 2) {
          uVar12 = 1;
        }
      }
      else {
        iVar11 = *piVar1;
        local_64 = param_4[2];
        uVar14 = param_4[3] - iVar11;
        uVar12 = param_4[4] - local_64;
        iVar10 = local_64;
        local_60 = iVar11;
      }
      if ((*(char *)(param_1 + 0x15c40) != '\0') && (*(longlong *)(param_1 + 0x15c70) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x15c70) + 0x10);
        *piVar1 = *piVar1 + 1;
      }
      uVar15 = param_4[9];
      local_68 = uVar15;
      if ((((*(uint *)(param_2 + 7) < 2) && (*(uint *)(param_3 + 7) < 2)) &&
          (*(int *)((longlong)param_2 + 0x3c) == *(int *)((longlong)param_3 + 0x3c))) &&
         (DAT_146ab3dee != '\0')) {
        (*DAT_146ab4948)(*(undefined4 *)(local_50 + 0x10),*(undefined4 *)(local_50 + 0x14),uVar15,
                         iVar11,CONCAT44(uVar4,iVar10),CONCAT44(uVar16,iVar9),
                         *(undefined4 *)(lVar6 + 0x10),*(undefined4 *)(lVar6 + 0x14),uVar15,iVar11,
                         iVar10,iVar13,uVar14,uVar12,1);
      }
      else {
        if ((*(int *)(local_50 + 0x1c) == 0x821a) || (*(int *)(local_50 + 0x1c) == 0x8d00)) {
          bVar2 = 0;
          local_58[0] = FUN_141e9b3b0(param_1 + -0x30,0,0,0,0,local_50);
          uVar4 = FUN_141e9b3b0(param_1 + -0x30,0,0,0,0,lVar6);
        }
        else {
          bVar2 = 1;
          local_58[0] = FUN_141e9b3b0(param_1 + -0x30,1,&local_50,local_58,&local_68,0);
          uVar4 = FUN_141e9b3b0(param_1 + -0x30,1,&local_48,&local_5c,&local_68,0);
          lVar6 = local_48;
          iVar13 = local_5c;
          uVar15 = local_68;
        }
        (*DAT_146ab4708)(0x8ca9,uVar4);
        (*DAT_146ab4008)(-(uint)bVar2 & 0x8ce0);
        (*DAT_146ab4708)(0x8ca8,local_58[0]);
        (*DAT_146ab40f0)(-(uint)bVar2 & 0x8ce0);
        (*DAT_146ab4760)();
      }
      lVar7 = (**(code **)(*param_3 + 8))(param_3);
      if (((lVar7 != 0) && ((*(uint *)(param_3 + 8) & 0x40005) == 0x40000)) &&
         ((*(uint *)(param_3 + 7) < 2 && (cVar3 = FResolveRect::IsValid(local_40), cVar3 == '\0'))))
      {
        if (lVar6 != 0) {
          lVar5 = lVar6 + -0x70;
        }
        FUN_141ea9b30(lVar5,uVar15,iVar13);
      }
      lVar5 = FUN_141e711c0(param_1 + -0x30,1);
      *(undefined4 *)(lVar5 + 0x188) = 0xffffffff;
    }
  }
  return;
}



// FUNCTION 141ea0950 RHICreateBlendState body=500 status=ok
// SIG undefined RHICreateBlendState(void)

ulonglong *
FOpenGLDynamicRHI::RHICreateBlendState(undefined8 param_1,ulonglong *param_2,char *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  
  lVar4 = operator_new(0x138);
  uVar8 = 0;
  uVar5 = uVar8;
  if (lVar4 != 0) {
    uVar5 = FOpenGLBlendState::FOpenGLBlendState(lVar4);
  }
  puVar10 = (undefined4 *)(uVar5 + 0x20);
  do {
    pcVar9 = param_3;
    if (param_3[0x38] != '\0') {
      pcVar9 = param_3 + uVar8 * 7;
    }
    if (((((*pcVar9 == '\0') && (pcVar9[2] == '\0')) && (pcVar9[1] == '\x01')) &&
        ((pcVar9[3] == '\0' && (pcVar9[5] == '\0')))) && (pcVar9[4] == '\x01')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(puVar10 + -2) = uVar2;
    cVar1 = *pcVar9;
    if (cVar1 == '\x01') {
      uVar3 = 0x800a;
    }
    else if (cVar1 == '\x02') {
      uVar3 = 0x8007;
    }
    else if (cVar1 == '\x03') {
      uVar3 = 0x8008;
    }
    else if (cVar1 == '\x04') {
      uVar3 = 0x800b;
    }
    else {
      uVar3 = 0x8006;
    }
    puVar10[-1] = uVar3;
    uVar3 = FUN_141eaa7c0(pcVar9[1]);
    *puVar10 = uVar3;
    uVar3 = FUN_141eaa7c0(pcVar9[2]);
    puVar10[1] = uVar3;
    if ((pcVar9[5] == pcVar9[2]) && (pcVar9[4] == pcVar9[1])) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(puVar10 + 2) = uVar2;
    cVar1 = pcVar9[3];
    if (cVar1 == '\x01') {
      uVar3 = 0x800a;
    }
    else if (cVar1 == '\x02') {
      uVar3 = 0x8007;
    }
    else if (cVar1 == '\x03') {
      uVar3 = 0x8008;
    }
    else if (cVar1 == '\x04') {
      uVar3 = 0x800b;
    }
    else {
      uVar3 = 0x8006;
    }
    puVar10[3] = uVar3;
    uVar3 = FUN_141eaa7c0(pcVar9[4]);
    puVar10[4] = uVar3;
    uVar3 = FUN_141eaa7c0(pcVar9[5]);
    puVar10[5] = uVar3;
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
    puVar10[6] = puVar10[6] ^ ((uint)(byte)pcVar9[6] ^ puVar10[6]) & 1;
    uVar6 = ((uint)(byte)pcVar9[6] ^ puVar10[6]) & 2 ^ puVar10[6];
    puVar10[6] = uVar6;
    uVar6 = ((byte)pcVar9[6] ^ uVar6) & 4 ^ uVar6;
    puVar10[6] = uVar6;
    puVar10[6] = ((byte)pcVar9[6] ^ uVar6) & 8 ^ uVar6;
    puVar10 = puVar10 + 9;
  } while (uVar7 < 8);
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FShaderCache::InternalLogBlendState
              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),param_3,uVar5);
  }
  *param_2 = uVar5;
  if (uVar5 != 0) {
    LOCK();
    *(int *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea0b50 FUN_141ea0b50 body=2074 status=ok
// SIG undefined FUN_141ea0b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_141ea0b50(undefined1 *param_1,longlong *param_2,longlong param_3,ulonglong param_4,
             ulonglong param_5,longlong param_6,ulonglong param_7,ulonglong param_8)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  char cVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined *puVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  uint *puVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  undefined8 uVar23;
  int iVar24;
  bool bVar25;
  undefined1 auStack_678 [32];
  ulonglong local_658;
  ulonglong local_650;
  ulonglong local_648;
  longlong local_640;
  ulonglong local_638;
  longlong local_630;
  ulonglong local_628;
  ulonglong local_620;
  ulonglong local_618;
  longlong local_610;
  longlong local_608;
  int local_600 [2];
  ulonglong local_5f8;
  longlong local_5f0;
  longlong *local_5e8;
  longlong local_5e0;
  ulonglong local_5d8;
  undefined1 *local_5d0;
  longlong *local_5c8;
  undefined **local_5c0;
  undefined4 local_5b8;
  undefined4 local_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 local_5a0;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 local_588;
  undefined4 local_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 local_570;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 local_558;
  undefined4 local_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 local_540;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 local_528;
  undefined4 local_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 local_510;
  undefined1 local_508 [176];
  undefined8 local_458;
  undefined8 uStack_450;
  undefined4 local_448;
  undefined4 local_444;
  undefined1 local_440 [200];
  undefined1 local_378 [200];
  undefined1 local_2b0 [200];
  undefined1 local_1e8 [400];
  ulonglong local_58 [3];
  
  local_58[0] = DAT_1468387a8 ^ (ulonglong)auStack_678;
  local_628 = param_5;
  local_5f0 = param_6;
  local_618 = param_7;
  local_5d8 = param_8;
  local_620 = param_4;
  local_608 = param_3;
  local_5e8 = param_2;
  local_5d0 = param_1;
  if (param_7 == 0) {
    lVar10 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
    local_5b8 = 0;
    local_5c0 = &PTR_PTR_1464c0b40;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar10 + 0x38),local_600,&local_5c0);
    if (local_600[0] == -1) {
      lVar10 = 0;
    }
    else {
      lVar10 = (longlong)local_600[0] * 0x20 + *(longlong *)(lVar10 + 0x38);
    }
    plVar16 = (longlong *)(lVar10 + 0x10);
    if (lVar10 == 0) {
      plVar16 = (longlong *)0x0;
    }
    lVar10 = *(longlong *)(*plVar16 + 0x48);
    if (*(char *)(lVar10 + 0x28) == '\0') {
      FUN_1419f3850(lVar10);
    }
    param_7 = *(ulonglong *)(lVar10 + 0x40);
  }
  plVar16 = local_5e8;
  local_650 = param_8;
  local_658 = param_6;
  local_618 = param_7;
  plVar11 = (longlong *)GetCachedBoundShaderState(param_3,param_4,param_7,param_5);
  if (plVar11 != (longlong *)0x0) {
    lVar10 = *plVar11;
    *plVar16 = lVar10;
    if (lVar10 == 0) {
      return plVar16;
    }
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
    return plVar16;
  }
  if (param_4 == 0) {
    uVar12 = 0;
  }
  else {
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    uVar12 = *(ulonglong *)(param_4 + 0x38);
  }
  lVar10 = 0;
  local_5f8 = uVar12;
  if (param_7 != 0) {
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar10 = *(longlong *)(param_7 + 0x38);
  }
  local_5e0 = lVar10;
  if (param_5 == 0) {
    lVar18 = 0;
  }
  else {
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar18 = *(longlong *)(param_5 + 0x38);
  }
  uVar13 = 0;
  if (param_6 != 0) {
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    uVar13 = *(ulonglong *)(param_6 + 0x38);
  }
  uVar14 = 0;
  if (param_8 != 0) {
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    uVar14 = *(ulonglong *)(param_8 + 0x38);
  }
  FUN_141e8d1f0(local_508);
  FOpenGLShaderBindings::operator=(local_508,uVar12 + 0x18);
  local_444 = *(undefined4 *)(uVar12 + 0x10);
  local_458 = *(undefined8 *)(local_620 + 0x18);
  uStack_450 = *(undefined8 *)(local_620 + 0x20);
  local_448 = *(undefined4 *)(local_620 + 0x28);
  if (DAT_146ab053b != '\0') {
    if (lVar18 != 0) {
      local_5b0 = *(undefined4 *)(local_628 + 0x18);
      uStack_5ac = *(undefined4 *)(local_628 + 0x1c);
      uStack_5a8 = *(undefined4 *)(local_628 + 0x20);
      uStack_5a4 = *(undefined4 *)(local_628 + 0x24);
      local_5a0 = *(undefined4 *)(local_628 + 0x28);
      local_658 = uVar12;
      FUN_141e84300(local_2b0,lVar18,&local_5b0,local_508);
    }
    if (uVar13 != 0) {
      local_598 = *(undefined4 *)(local_5f0 + 0x18);
      uStack_594 = *(undefined4 *)(local_5f0 + 0x1c);
      uStack_590 = *(undefined4 *)(local_5f0 + 0x20);
      uStack_58c = *(undefined4 *)(local_5f0 + 0x24);
      local_588 = *(undefined4 *)(local_5f0 + 0x28);
      local_658 = lVar18;
      FUN_141e82ec0(local_1e8,uVar13,&local_598,local_2b0);
    }
  }
  if (uVar14 != 0) {
    if (uVar13 == 0) {
      local_658 = uVar12;
      local_568 = *(undefined4 *)(param_8 + 0x18);
      uStack_564 = *(undefined4 *)(param_8 + 0x1c);
      uStack_560 = *(undefined4 *)(param_8 + 0x20);
      uStack_55c = *(undefined4 *)(param_8 + 0x24);
      local_558 = *(undefined4 *)(param_8 + 0x28);
      FUN_141e80640(local_378,uVar14,&local_568,local_508);
    }
    else {
      local_658 = uVar13;
      local_580 = *(undefined4 *)(param_8 + 0x18);
      uStack_57c = *(undefined4 *)(param_8 + 0x1c);
      uStack_578 = *(undefined4 *)(param_8 + 0x20);
      uStack_574 = *(undefined4 *)(param_8 + 0x24);
      local_570 = *(undefined4 *)(param_8 + 0x28);
      FUN_141e81a80(local_378,uVar14,&local_580,local_1e8);
    }
  }
  uVar3 = *(undefined4 *)(param_7 + 0x28);
  uVar4 = *(undefined4 *)(param_7 + 0x18);
  uVar5 = *(undefined4 *)(param_7 + 0x1c);
  uVar6 = *(undefined4 *)(param_7 + 0x20);
  uVar7 = *(undefined4 *)(param_7 + 0x24);
  if (uVar13 == 0) {
    if (uVar14 == 0) {
      local_658 = uVar12;
      local_520 = uVar4;
      uStack_51c = uVar5;
      uStack_518 = uVar6;
      uStack_514 = uVar7;
      local_510 = uVar3;
      FUN_141e7c980(local_440,lVar10,&local_520,local_508);
    }
    else {
      local_658 = uVar14;
      local_538 = uVar4;
      uStack_534 = uVar5;
      uStack_530 = uVar6;
      uStack_52c = uVar7;
      local_528 = uVar3;
      FUN_141e7ddc0(local_440,lVar10,&local_538,local_378);
    }
  }
  else {
    local_658 = uVar13;
    local_550 = uVar4;
    uStack_54c = uVar5;
    uStack_548 = uVar6;
    uStack_544 = uVar7;
    local_540 = uVar3;
    FUN_141e7f200(local_440,lVar10,&local_550,local_1e8);
  }
  uVar21 = (ulonglong)DAT_146ab3ea0;
  iVar24 = 0;
  local_610 = 0;
  uVar12 = uVar21;
  do {
    lVar10 = *(longlong *)(&DAT_146ab3e50 + uVar21 * 8);
    iVar20 = (int)uVar12;
    if ((lVar10 != 0) && (cVar9 = FUN_141e8eeb0(lVar10,local_508), cVar9 != '\0')) {
      *(undefined8 *)(&DAT_146ab3e50 + (longlong)iVar20 * 8) = 0;
      local_610 = lVar10;
      goto LAB_141ea1131;
    }
    uVar12 = 0;
    iVar24 = iVar24 + 1;
    uVar1 = uVar21 + 1;
    bVar25 = uVar21 != 9;
    uVar21 = uVar12;
    if (bVar25) {
      uVar12 = (ulonglong)(iVar20 + 1);
      uVar21 = uVar1;
    }
  } while (iVar24 < 10);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ab3f2c) && (_Init_thread_header(&DAT_146ab3f2c), DAT_146ab3f2c == -1))
  {
    DAT_1464c9a40 = 0;
    _DAT_1464c9a48 = 0;
    DAT_1464c9a60 = 0;
    _DAT_1464c9a68 = 0;
    _DAT_1464c9a70 = 0xffffffff;
    DAT_1464c9a74 = 0;
    DAT_1464c9a80 = (undefined *)0x0;
    DAT_1464c9a88 = 0;
    atexit(FUN_143e9e830);
    _Init_thread_footer(&DAT_146ab3f2c);
  }
  if (DAT_1464c9a48 != DAT_1464c9a74) {
    iVar24 = GetTypeHash(local_508);
    lVar10 = DAT_1464c9a40;
    puVar15 = DAT_1464c9a80;
    if (DAT_1464c9a80 == (undefined *)0x0) {
      puVar15 = &DAT_1464c9a78;
    }
    iVar24 = *(int *)(puVar15 + ((longlong)DAT_1464c9a88 - 1U & (longlong)iVar24) * 4);
    while (iVar24 != -1) {
      lVar2 = (longlong)iVar24 * 0x4c0 + lVar10;
      cVar9 = FUN_141e8eeb0(lVar2,local_508);
      if (cVar9 != '\0') {
        if (iVar24 != -1) {
          lVar10 = (longlong)iVar24 * 0x4c0 + lVar10;
          goto LAB_141ea0fae;
        }
        break;
      }
      iVar24 = *(int *)(lVar2 + 0x4b8);
    }
  }
  lVar10 = 0;
LAB_141ea0fae:
  puVar8 = local_5d0;
  plVar16 = (longlong *)(lVar10 + 0x4b0);
  if (lVar10 == 0) {
    plVar16 = (longlong *)0x0;
  }
  if (plVar16 == (longlong *)0x0) {
    if (DAT_146ab3de0 == 0) {
      if (*(char *)(local_5f8 + 0x14) == '\0') {
        *(undefined1 *)(local_5f8 + 0x14) = 1;
      }
      if (*(char *)(local_5e0 + 0x14) == '\0') {
        *(undefined1 *)(local_5e0 + 0x14) = 1;
      }
      if ((uVar14 != 0) && (*(char *)(uVar14 + 0x14) == '\0')) {
        *(undefined1 *)(uVar14 + 0x14) = 1;
      }
      if (DAT_146ab053b != '\0') {
        if ((lVar18 != 0) && (*(char *)(lVar18 + 0x14) == '\0')) {
          *(undefined1 *)(lVar18 + 0x14) = 1;
        }
        if ((uVar13 != 0) && (*(char *)(uVar13 + 0x14) == '\0')) {
          *(undefined1 *)(uVar13 + 0x14) = 1;
        }
      }
    }
    lVar10 = FUN_141e711c0(local_5d0,1);
    lVar18 = 5;
    *(undefined4 *)(lVar10 + 0x198) = 0xffffffff;
    puVar19 = (uint *)(*(longlong *)(puVar8 + 0x5c8) + 0x78);
    do {
      puVar19[-0x14] = 0;
      puVar19[-0x13] = *puVar19 >> 4;
      puVar19[-0x12] = 0;
      puVar19[-0x11] = *puVar19 >> 4;
      puVar19[-0x10] = 0;
      puVar19[-0xf] = *puVar19 >> 4;
      puVar19[-0xe] = 0;
      puVar19[-0xd] = *puVar19 >> 4;
      puVar19[-0xc] = 0;
      puVar19[-0xb] = *puVar19 >> 4;
      lVar18 = lVar18 + -1;
      puVar19 = puVar19 + 0x20;
    } while (lVar18 != 0);
    *(undefined8 *)(puVar8 + 0x5c0) = 0;
    local_610 = FUN_141e9dc20(local_508);
    uVar23 = FUN_141e9bba0();
    local_5d0 = local_508;
    local_5c8 = &local_610;
    FUN_141e8a980(uVar23,&local_5f8,&local_5d0,0);
  }
  else {
    local_610 = *plVar16;
  }
LAB_141ea1131:
  plVar16 = local_5e8;
  lVar10 = local_608;
  lVar18 = 0;
  if ((((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) &&
      (*(char *)(*(longlong *)(DAT_1469f59d8 + 0xcc0) + 0xfa1) != '\0')) && (local_608 == 0)) {
    lVar10 = 6;
    *local_5e8 = 0;
    puVar22 = local_58;
    do {
      puVar22 = puVar22 + -0x19;
      FOpenGLShaderBindings::~FOpenGLShaderBindings(puVar22);
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    return plVar16;
  }
  lVar17 = operator_new(0xd0);
  uVar21 = local_5d8;
  lVar2 = local_5f0;
  uVar14 = local_618;
  uVar13 = local_620;
  uVar12 = local_628;
  if (lVar17 != 0) {
    local_640 = local_5f0;
    local_648 = local_628;
    local_650 = local_5d8;
    local_658 = local_618;
    lVar18 = FUN_141e8c970(lVar17,local_610,lVar10,local_620);
  }
  cVar9 = FUN_141ed07f0();
  lVar10 = 6;
  if (cVar9 != '\0') {
    if ((int)local_618 == 0) {
      uVar23 = 3;
      goto LAB_141ea1269;
    }
    if ((int)local_618 == 1) {
      uVar23 = 0xf;
      if (DAT_146ab3551 != '\0') {
        uVar23 = 0x18;
      }
      goto LAB_141ea1269;
    }
  }
  local_628 = local_628 & 0xffffffff00000000;
  (*DAT_146ab4060)(0x821b,&local_628);
  if (((int)local_628 == 3) || ((int)local_628 != 4)) {
    uVar23 = 1;
  }
  else {
    local_620 = local_620 & 0xffffffff00000000;
    (*DAT_146ab4060)(0x821c,&local_620);
    uVar23 = 1;
    if (2 < (uint)local_620) {
      uVar23 = 6;
    }
  }
LAB_141ea1269:
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    local_638 = uVar21;
    local_640 = lVar2;
    local_648 = uVar12;
    local_650 = uVar14;
    local_658 = uVar13;
    local_630 = lVar18;
    FShaderCache::InternalLogBoundShaderState
              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),uVar23,local_608);
  }
  plVar16 = local_5e8;
  *local_5e8 = lVar18;
  if (lVar18 != 0) {
    LOCK();
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
    UNLOCK();
  }
  puVar22 = local_58;
  do {
    puVar22 = puVar22 + -0x19;
    FOpenGLShaderBindings::~FOpenGLShaderBindings(puVar22);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return plVar16;
}



// FUNCTION 141ea1370 FUN_141ea1370 body=301 status=ok
// SIG undefined FUN_141ea1370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141ea1370(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  undefined1 auStack_508 [32];
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined4 local_4d8;
  undefined1 local_4c8 [1000];
  undefined1 local_e0 [176];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1468387a8 ^ (ulonglong)auStack_508;
  lVar1 = FUN_141e88370(param_3,0);
  if (*(char *)(lVar1 + 0x3c) == '\0') {
    *(undefined1 *)(lVar1 + 0x3c) = 1;
  }
  lVar2 = 0;
  if (DAT_1469f59e0 != 0) {
    lVar2 = DAT_1469f59d8;
  }
  if (lVar2 != 0) {
    local_4e8 = 0;
    uStack_4e0 = 0;
    local_4d8 = 0;
    FSHA1::HashBuffer(*param_3,*(undefined4 *)(param_3 + 1),&local_4e8);
    *(undefined4 *)(lVar1 + 0x18) = (undefined4)local_4e8;
    *(undefined4 *)(lVar1 + 0x1c) = local_4e8._4_4_;
    *(undefined4 *)(lVar1 + 0x20) = (undefined4)uStack_4e0;
    *(undefined4 *)(lVar1 + 0x24) = uStack_4e0._4_4_;
    *(undefined4 *)(lVar1 + 0x28) = local_4d8;
  }
  FUN_141e8d1f0(local_4c8);
  local_1c = *(undefined4 *)(lVar1 + 0x38);
  local_30 = *(undefined4 *)(lVar1 + 0x18);
  uStack_2c = *(undefined4 *)(lVar1 + 0x1c);
  uStack_28 = *(undefined4 *)(lVar1 + 0x20);
  uStack_24 = *(undefined4 *)(lVar1 + 0x24);
  local_20 = *(undefined4 *)(lVar1 + 0x28);
  FOpenGLShaderBindings::operator=(local_e0,lVar1 + 0x40);
  uVar3 = FUN_141e9dc20(local_4c8);
  *(undefined8 *)(lVar1 + 0x100) = uVar3;
  *param_2 = lVar1;
  LOCK();
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  UNLOCK();
  lVar1 = 6;
  puVar4 = local_18;
  do {
    puVar4 = puVar4 + -0x19;
    FOpenGLShaderBindings::~FOpenGLShaderBindings(puVar4);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return param_2;
}



// FUNCTION 141ea14a0 FUN_141ea14a0 body=403 status=ok
// SIG undefined FUN_141ea14a0(void)

undefined8 * FUN_141ea14a0(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x50);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar3 + 1) = 0;
    *puVar3 = &PTR_FUN_144ebe5e8;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *(undefined2 *)(puVar3 + 2) = 0x100;
    *(undefined2 *)(puVar3 + 3) = 0x100;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0x201;
    *(undefined2 *)(puVar3 + 4) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x24) = 0x207;
    *(undefined4 *)(puVar3 + 5) = 0x1e00;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = 0x1e00;
    *(undefined4 *)(puVar3 + 6) = 0x1e00;
    *(undefined4 *)((longlong)puVar3 + 0x34) = 0x207;
    *(undefined4 *)(puVar3 + 7) = 0x1e00;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x1e00;
    *(undefined4 *)(puVar3 + 8) = 0x1e00;
    *(undefined8 *)((longlong)puVar3 + 0x44) = 0xffffffffffffffff;
  }
  if ((param_3[1] == '\a') && (*param_3 == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(puVar3 + 3) = uVar1;
  *(char *)((longlong)puVar3 + 0x19) = *param_3;
  uVar2 = FUN_141eaa8c0(param_3[1]);
  *(undefined4 *)((longlong)puVar3 + 0x1c) = uVar2;
  if ((param_3[2] == '\0') && (param_3[7] == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(puVar3 + 4) = uVar1;
  *(char *)((longlong)puVar3 + 0x21) = param_3[7];
  uVar2 = FUN_141eaa8c0(param_3[3]);
  *(undefined4 *)((longlong)puVar3 + 0x24) = uVar2;
  uVar2 = FUN_141eaa990(param_3[4]);
  *(undefined4 *)(puVar3 + 5) = uVar2;
  uVar2 = FUN_141eaa990(param_3[5]);
  *(undefined4 *)((longlong)puVar3 + 0x2c) = uVar2;
  uVar2 = FUN_141eaa990(param_3[6]);
  *(undefined4 *)(puVar3 + 6) = uVar2;
  uVar2 = FUN_141eaa8c0(param_3[8]);
  *(undefined4 *)((longlong)puVar3 + 0x34) = uVar2;
  uVar2 = FUN_141eaa990(param_3[9]);
  *(undefined4 *)(puVar3 + 7) = uVar2;
  uVar2 = FUN_141eaa990(param_3[10]);
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uVar2;
  uVar2 = FUN_141eaa990(param_3[0xb]);
  *(undefined4 *)(puVar3 + 8) = uVar2;
  *(uint *)((longlong)puVar3 + 0x44) = (uint)(byte)param_3[0xc];
  *(uint *)(puVar3 + 9) = (uint)(byte)param_3[0xd];
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FShaderCache::InternalLogDepthStencilState
              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),param_3,puVar3);
  }
  *param_2 = puVar3;
  LOCK();
  *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
  UNLOCK();
  return param_2;
}



// FUNCTION 141ea1640 FUN_141ea1640 body=495 status=ok
// SIG undefined FUN_141ea1640(void)

longlong * FUN_141ea1640(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  size_t _Size;
  uint uStackX_14;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined1 *local_c8 [2];
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined4 local_88;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  pvVar7 = (void *)0x0;
  if ((DAT_146ab6383 == '\0') || (cVar3 = FUN_1415e13e0(), cVar3 != '\0')) {
    lVar4 = operator_new(0x48);
    if (lVar4 != 0) {
      local_48 = 0;
      local_38 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_68);
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[1] = param_3;
        *puVar5 = &PTR_FUN_143f77b70;
      }
      local_78[0] = &LAB_141e93ac0;
      pvVar7 = (void *)FUN_141e8b470(lVar4,local_78);
    }
  }
  else {
    local_d0 = *(int *)(param_3 + 1);
    _Size = (size_t)local_d0;
    pvVar9 = (void *)*param_3;
    local_d8 = (void *)0x0;
    if (local_d0 == 0) {
      local_cc = 0;
      pvVar10 = pvVar7;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_d8,local_d0,0);
      pvVar10 = local_d8;
      _guard_xfg_dispatch_icall_nop(local_d8,pvVar9,_Size);
    }
    uVar2 = local_cc;
    iVar1 = local_d0;
    lVar4 = operator_new(0x48);
    if (lVar4 == 0) {
      pvVar9 = (void *)((ulonglong)uStackX_14 << 0x20);
      pvVar8 = pvVar7;
    }
    else {
      local_d8 = (void *)0x0;
      local_98 = 0;
      local_88 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
      pvVar9 = pvVar10;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_FUN_144ebe750;
        puVar5[1] = pvVar10;
        *(int *)(puVar5 + 2) = iVar1;
        *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
        pvVar9 = pvVar7;
      }
      local_c8[0] = &LAB_141e93920;
      pvVar6 = (void *)FUN_141e8b470(lVar4,local_c8);
      pvVar8 = (void *)0x1;
      pvVar10 = pvVar7;
      pvVar7 = pvVar6;
    }
    if ((pvVar8 != (void *)0x0) && (pvVar9 != (void *)0x0)) {
      FMemory::Free(pvVar9);
    }
    if (pvVar10 != (void *)0x0) {
      FMemory::Free(pvVar10);
    }
  }
  *param_2 = (longlong)pvVar7;
  if (pvVar7 != (void *)0x0) {
    LOCK();
    *(int *)((longlong)pvVar7 + 8) = *(int *)((longlong)pvVar7 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea1830 FUN_141ea1830 body=495 status=ok
// SIG undefined FUN_141ea1830(void)

longlong * FUN_141ea1830(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  size_t _Size;
  uint uStackX_14;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined1 *local_c8 [2];
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined4 local_88;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  pvVar7 = (void *)0x0;
  if ((DAT_146ab6383 == '\0') || (cVar3 = FUN_1415e13e0(), cVar3 != '\0')) {
    lVar4 = operator_new(0x48);
    if (lVar4 != 0) {
      local_48 = 0;
      local_38 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_68);
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[1] = param_3;
        *puVar5 = &PTR_FUN_143f77b70;
      }
      local_78[0] = &LAB_141e93a00;
      pvVar7 = (void *)FUN_141e8b470(lVar4,local_78);
    }
  }
  else {
    local_d0 = *(int *)(param_3 + 1);
    _Size = (size_t)local_d0;
    pvVar9 = (void *)*param_3;
    local_d8 = (void *)0x0;
    if (local_d0 == 0) {
      local_cc = 0;
      pvVar10 = pvVar7;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_d8,local_d0,0);
      pvVar10 = local_d8;
      _guard_xfg_dispatch_icall_nop(local_d8,pvVar9,_Size);
    }
    uVar2 = local_cc;
    iVar1 = local_d0;
    lVar4 = operator_new(0x48);
    if (lVar4 == 0) {
      pvVar9 = (void *)((ulonglong)uStackX_14 << 0x20);
      pvVar8 = pvVar7;
    }
    else {
      local_d8 = (void *)0x0;
      local_98 = 0;
      local_88 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
      pvVar9 = pvVar10;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_FUN_144ebe750;
        puVar5[1] = pvVar10;
        *(int *)(puVar5 + 2) = iVar1;
        *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
        pvVar9 = pvVar7;
      }
      local_c8[0] = &LAB_141e93900;
      pvVar6 = (void *)FUN_141e8b470(lVar4,local_c8);
      pvVar8 = (void *)0x1;
      pvVar10 = pvVar7;
      pvVar7 = pvVar6;
    }
    if ((pvVar8 != (void *)0x0) && (pvVar9 != (void *)0x0)) {
      FMemory::Free(pvVar9);
    }
    if (pvVar10 != (void *)0x0) {
      FMemory::Free(pvVar10);
    }
  }
  *param_2 = (longlong)pvVar7;
  if (pvVar7 != (void *)0x0) {
    LOCK();
    *(int *)((longlong)pvVar7 + 8) = *(int *)((longlong)pvVar7 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea1a20 RHICreateGeometryShaderWithStreamOutput body=81 status=ok
// SIG undefined RHICreateGeometryShaderWithStreamOutput(void)

undefined8 *
FOpenGLDynamicRHI::RHICreateGeometryShaderWithStreamOutput(undefined8 param_1,undefined8 *param_2)

{
  LowLevelFatalErrorHandler("Unknown",0x4e4,L"OpenGL Render path does not support stream output!");
  FDebug::AssertFailed
            (&DAT_144eb6ee7,"Unknown",0x4e4,L"OpenGL Render path does not support stream output!");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 141ea1a80 FUN_141ea1a80 body=495 status=ok
// SIG undefined FUN_141ea1a80(void)

longlong * FUN_141ea1a80(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  size_t _Size;
  uint uStackX_14;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined1 *local_c8 [2];
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined4 local_88;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  pvVar7 = (void *)0x0;
  if ((DAT_146ab6383 == '\0') || (cVar3 = FUN_1415e13e0(), cVar3 != '\0')) {
    lVar4 = operator_new(0x48);
    if (lVar4 != 0) {
      local_48 = 0;
      local_38 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_68);
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[1] = param_3;
        *puVar5 = &PTR_FUN_143f77b70;
      }
      local_78[0] = &LAB_141e93950;
      pvVar7 = (void *)FUN_141e8b470(lVar4,local_78);
    }
  }
  else {
    local_d0 = *(int *)(param_3 + 1);
    _Size = (size_t)local_d0;
    pvVar9 = (void *)*param_3;
    local_d8 = (void *)0x0;
    if (local_d0 == 0) {
      local_cc = 0;
      pvVar10 = pvVar7;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_d8,local_d0,0);
      pvVar10 = local_d8;
      _guard_xfg_dispatch_icall_nop(local_d8,pvVar9,_Size);
    }
    uVar2 = local_cc;
    iVar1 = local_d0;
    lVar4 = operator_new(0x48);
    if (lVar4 == 0) {
      pvVar9 = (void *)((ulonglong)uStackX_14 << 0x20);
      pvVar8 = pvVar7;
    }
    else {
      local_d8 = (void *)0x0;
      local_98 = 0;
      local_88 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
      pvVar9 = pvVar10;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_FUN_144ebe750;
        puVar5[1] = pvVar10;
        *(int *)(puVar5 + 2) = iVar1;
        *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
        pvVar9 = pvVar7;
      }
      local_c8[0] = &LAB_141e93910;
      pvVar6 = (void *)FUN_141e8b470(lVar4,local_c8);
      pvVar8 = (void *)0x1;
      pvVar10 = pvVar7;
      pvVar7 = pvVar6;
    }
    if ((pvVar8 != (void *)0x0) && (pvVar9 != (void *)0x0)) {
      FMemory::Free(pvVar9);
    }
    if (pvVar10 != (void *)0x0) {
      FMemory::Free(pvVar10);
    }
  }
  *param_2 = (longlong)pvVar7;
  if (pvVar7 != (void *)0x0) {
    LOCK();
    *(int *)((longlong)pvVar7 + 8) = *(int *)((longlong)pvVar7 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea1c70 RHICreateIndexBuffer body=266 status=ok
// SIG undefined RHICreateIndexBuffer(void)

undefined8 *
FOpenGLDynamicRHI::RHICreateIndexBuffer
          (undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,longlong param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  puVar6 = (undefined8 *)0x0;
  puVar4 = puVar6;
  if (*(undefined8 **)(param_6 + 8) != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(**(code **)**(undefined8 **)(param_6 + 8))();
  }
  lVar5 = operator_new(0x58);
  if ((lVar5 != 0) &&
     (puVar6 = (undefined8 *)FUN_141e68fd0(lVar5,param_3,param_4,param_5,puVar4,0,0,0),
     puVar6 != (undefined8 *)0x0)) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
  }
  if (*(longlong **)(param_6 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_6 + 8) + 0x10))();
  }
  *param_2 = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar6 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))
         ) {
        LOCK();
        bVar7 = *(int *)((longlong)puVar6 + 0xc) == 0;
        if (bVar7) {
          *(int *)((longlong)puVar6 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar7) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar6);
        }
      }
      else {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141ea1d80 FUN_141ea1d80 body=495 status=ok
// SIG undefined FUN_141ea1d80(void)

longlong * FUN_141ea1d80(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  size_t _Size;
  uint uStackX_14;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined1 *local_c8 [2];
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined4 local_88;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  pvVar7 = (void *)0x0;
  if ((DAT_146ab6383 == '\0') || (cVar3 = FUN_1415e13e0(), cVar3 != '\0')) {
    lVar4 = operator_new(0x48);
    if (lVar4 != 0) {
      local_48 = 0;
      local_38 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_68);
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[1] = param_3;
        *puVar5 = &PTR_FUN_143f77b70;
      }
      local_78[0] = &LAB_141e93c70;
      pvVar7 = (void *)FUN_141e8b470(lVar4,local_78);
    }
  }
  else {
    local_d0 = *(int *)(param_3 + 1);
    _Size = (size_t)local_d0;
    pvVar9 = (void *)*param_3;
    local_d8 = (void *)0x0;
    if (local_d0 == 0) {
      local_cc = 0;
      pvVar10 = pvVar7;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_d8,local_d0,0);
      pvVar10 = local_d8;
      _guard_xfg_dispatch_icall_nop(local_d8,pvVar9,_Size);
    }
    uVar2 = local_cc;
    iVar1 = local_d0;
    lVar4 = operator_new(0x48);
    if (lVar4 == 0) {
      pvVar9 = (void *)((ulonglong)uStackX_14 << 0x20);
      pvVar8 = pvVar7;
    }
    else {
      local_d8 = (void *)0x0;
      local_98 = 0;
      local_88 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
      pvVar9 = pvVar10;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_FUN_144ebe750;
        puVar5[1] = pvVar10;
        *(int *)(puVar5 + 2) = iVar1;
        *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
        pvVar9 = pvVar7;
      }
      local_c8[0] = &LAB_141e93b00;
      pvVar6 = (void *)FUN_141e8b470(lVar4,local_c8);
      pvVar8 = (void *)0x1;
      pvVar10 = pvVar7;
      pvVar7 = pvVar6;
    }
    if ((pvVar8 != (void *)0x0) && (pvVar9 != (void *)0x0)) {
      FMemory::Free(pvVar9);
    }
    if (pvVar10 != (void *)0x0) {
      FMemory::Free(pvVar10);
    }
  }
  *param_2 = (longlong)pvVar7;
  if (pvVar7 != (void *)0x0) {
    LOCK();
    *(int *)((longlong)pvVar7 + 8) = *(int *)((longlong)pvVar7 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea1f70 FUN_141ea1f70 body=247 status=ok
// SIG undefined FUN_141ea1f70(void)

undefined8 * FUN_141ea1f70(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined8 *)operator_new();
  puVar3 = (undefined8 *)0x0;
  uVar4 = 0x1b02;
  iVar2 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR_FUN_144ebe5d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 2) = 0x100;
    puVar1[3] = 0x1b02;
    puVar1[4] = 0;
    puVar3 = puVar1;
  }
  if (param_3[1] == '\x01') {
    iVar2 = (DAT_146ab3dec != '\0') + 0x404;
  }
  else if (param_3[1] == '\x02') {
    iVar2 = 0x405 - (uint)(DAT_146ab3dec != '\0');
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar2;
  if (*param_3 == '\0') {
    uVar4 = 0x1b00;
  }
  else if (*param_3 == '\x01') {
    uVar4 = 0x1b01;
  }
  *(undefined4 *)(puVar3 + 3) = uVar4;
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)puVar3 + 0x24) = *(undefined4 *)(param_3 + 8);
  if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
    FShaderCache::InternalLogRasterizerState
              (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),param_3,puVar3);
  }
  *param_2 = puVar3;
  LOCK();
  *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
  UNLOCK();
  return param_2;
}



// FUNCTION 141ea2070 RHICreateRenderQuery body=101 status=ok
// SIG undefined RHICreateRenderQuery(void)

longlong * FOpenGLDynamicRHI::RHICreateRenderQuery(undefined8 param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_3 == 2) && (DAT_146ab0544 < 1)) {
    *param_2 = 0;
    return param_2;
  }
  lVar1 = operator_new(0x48);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_141e8d430(lVar1,param_3);
  }
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea20e0 FUN_141ea20e0 body=1144 status=ok
// SIG undefined FUN_141ea20e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141ea20e0(undefined8 param_1,undefined8 *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  uint uVar10;
  int local_res20 [2];
  undefined8 *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  undefined1 local_168 [8];
  byte *local_160;
  undefined8 **local_158;
  undefined1 *local_148 [2];
  undefined1 local_138 [32];
  undefined8 local_118;
  undefined4 local_108;
  undefined **local_f8 [18];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined1 local_48 [32];
  
  TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1464c98a0,local_res20);
  puVar5 = (undefined8 *)0x0;
  puVar4 = puVar5;
  if (local_res20[0] != -1) {
    puVar4 = (undefined8 *)((longlong)local_res20[0] * 0x30 + _DAT_1464c98a0);
  }
  local_188 = puVar4 + 4;
  if (puVar4 == (undefined8 *)0x0) {
    local_188 = puVar5;
  }
  if (local_188 == (undefined8 *)0x0) {
    if (DAT_146ab3ea4 == 0) {
      local_178 = 0;
      local_170 = 0;
      local_180 = 0;
      FArchive::FArchive(local_f8);
      local_68 = 0;
      local_f8[0] = &PTR_FUN_143f4a100;
      local_60 = &local_178;
      local_58 = 0;
      FArchive::SetIsSaving(local_f8,1);
      FArchive::SetIsPersistent(local_f8,0);
      FUN_1419dbd20(local_f8,local_48);
      DAT_146ab3ea4 = (int)local_170;
      FArchive::~FArchive(local_f8);
      if (local_178 != 0) {
        FMemory::Free();
      }
    }
    puVar4 = (undefined8 *)operator_new(0x48);
    uVar9 = 0x2901;
    local_188 = puVar5;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR__scalar_deleting_destructor__144ebe5c8;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *(undefined2 *)(puVar4 + 2) = 0x100;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = 0x2901;
      *(undefined4 *)(puVar4 + 4) = 0x2901;
      *(undefined8 *)((longlong)puVar4 + 0x24) = 0x2901;
      *(undefined4 *)((longlong)puVar4 + 0x2c) = 0x2600;
      *(undefined4 *)(puVar4 + 6) = 0x2600;
      *(undefined8 *)((longlong)puVar4 + 0x34) = 1;
      *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x207;
      local_188 = puVar4;
    }
    bVar1 = param_3[1];
    if (bVar1 == 1) {
      uVar3 = 0x812f;
    }
    else if (bVar1 == 2) {
      uVar3 = 0x8370;
    }
    else if (bVar1 == 3) {
      uVar3 = 0x812d;
    }
    else {
      uVar3 = 0x2901;
    }
    *(undefined4 *)((longlong)local_188 + 0x1c) = uVar3;
    bVar1 = param_3[2];
    if (bVar1 == 1) {
      uVar3 = 0x812f;
    }
    else if (bVar1 == 2) {
      uVar3 = 0x8370;
    }
    else if (bVar1 == 3) {
      uVar3 = 0x812d;
    }
    else {
      uVar3 = 0x2901;
    }
    *(undefined4 *)(local_188 + 4) = uVar3;
    bVar1 = param_3[3];
    if (bVar1 == 1) {
      uVar9 = 0x812f;
    }
    else if (bVar1 == 2) {
      uVar9 = 0x8370;
    }
    else if (bVar1 == 3) {
      uVar9 = 0x812d;
    }
    *(undefined4 *)((longlong)local_188 + 0x24) = uVar9;
    *(int *)(local_188 + 5) = (int)*(float *)(param_3 + 4);
    *(undefined4 *)((longlong)local_188 + 0x34) = 1;
    bVar1 = *param_3;
    bVar2 = param_3[0x18];
    if (bVar1 == 1) {
      *(undefined4 *)((longlong)local_188 + 0x2c) = 0x2601;
      *(undefined4 *)(local_188 + 6) = 0x2701;
    }
    else if (bVar1 == 2) {
      uVar9 = 0x2703;
      if (bVar2 != 0) {
        uVar9 = 0x2601;
      }
      *(undefined4 *)((longlong)local_188 + 0x2c) = 0x2601;
      *(undefined4 *)(local_188 + 6) = uVar9;
    }
    else if ((bVar1 < 3) || (4 < bVar1)) {
      *(undefined4 *)((longlong)local_188 + 0x2c) = 0x2600;
      *(undefined4 *)(local_188 + 6) = 0x2700;
    }
    else {
      uVar9 = 0x2703;
      if (bVar2 != 0) {
        uVar9 = 0x2601;
      }
      *(undefined4 *)((longlong)local_188 + 0x2c) = 0x2601;
      uVar8 = (ulonglong)_tls_index;
      *(undefined4 *)(local_188 + 6) = uVar9;
      uVar10 = *(uint *)(param_3 + 0x10);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x38) <
           DAT_1469fcd28) && (_Init_thread_header(&DAT_1469fcd28), DAT_1469fcd28 == -1)) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        plVar6 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MaxAnisotropy");
        if (plVar6 != (longlong *)0x0) {
          puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x38))(plVar6);
        }
        DAT_1469fcd20 = puVar5;
        _Init_thread_footer(&DAT_1469fcd28);
      }
      uVar7 = *(uint *)((longlong)DAT_1469fcd20 + 4);
      if (0 < (int)uVar10) {
        uVar7 = uVar10;
      }
      uVar10 = 1;
      if ((0 < (int)uVar7) && (uVar10 = 0x10, (int)uVar7 < 0x10)) {
        uVar10 = uVar7;
      }
      uVar7 = DAT_1464c97f4;
      if (uVar10 <= DAT_1464c97f4) {
        uVar7 = uVar10;
      }
      *(uint *)((longlong)local_188 + 0x34) = uVar7;
    }
    puVar4 = local_188;
    if (bVar2 == 0) {
      *(undefined4 *)(local_188 + 7) = 0;
    }
    else {
      *(undefined4 *)(local_188 + 7) = 0x884e;
      *(undefined4 *)((longlong)local_188 + 0x3c) = 0x201;
    }
    local_118 = 0;
    local_108 = 0;
    *(undefined4 *)(local_188 + 3) = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_138);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = puVar4;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_148[0] = &LAB_141e93cc0;
    FUN_141eb4140(local_148,0);
    LOCK();
    *(int *)(local_188 + 1) = *(int *)(local_188 + 1) + 1;
    UNLOCK();
    local_158 = &local_188;
    local_160 = param_3;
    FUN_141e8a080(&DAT_1464c98a0,local_168,&local_160,0);
    if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
      FUN_1419f4e80(DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),param_3,local_188);
    }
  }
  else {
    local_188 = (undefined8 *)*local_188;
  }
  *param_2 = local_188;
  if (local_188 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_188 + 1) = *(int *)(local_188 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea2560 FUN_141ea2560 body=173 status=ok
// SIG undefined FUN_141ea2560(void)

longlong * FUN_141ea2560(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar1 = operator_new(0x30);
  lVar3 = 0;
  if (lVar1 != 0) {
    local_28 = 0;
    local_18 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
    if (puVar2 != (undefined8 *)0x0) {
      local_68 = (undefined4)param_3;
      uStack_64 = (undefined4)((ulonglong)param_3 >> 0x20);
      uStack_60 = (undefined4)param_1;
      uStack_5c = (undefined4)((ulonglong)param_1 >> 0x20);
      *puVar2 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar2 + 1) = local_68;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_64;
      *(undefined4 *)(puVar2 + 2) = uStack_60;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_5c;
    }
    local_58[0] = &LAB_141e93940;
    lVar3 = FOpenGLShaderResourceViewProxy::FOpenGLShaderResourceViewProxy(lVar1,local_58);
  }
  *param_2 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea2610 FUN_141ea2610 body=180 status=ok
// SIG undefined FUN_141ea2610(void)

longlong * FUN_141ea2610(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  LowLevelFatalErrorHandler
            ("Unknown",0xa3,L"OpenGL RHI doesn\'t support RHICreateShaderResourceView yet!");
  FDebug::AssertFailed
            (&DAT_144eb6f12,"Unknown",0xa3,
             L"OpenGL RHI doesn\'t support RHICreateShaderResourceView yet!");
  lVar1 = operator_new(0x30);
  lVar3 = 0;
  if (lVar1 != 0) {
    local_28 = 0;
    local_18 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_143f3f130;
    }
    local_58[0] = AK::MemoryMgr::GetPoolName;
    lVar3 = FOpenGLShaderResourceViewProxy::FOpenGLShaderResourceViewProxy(lVar1,local_58);
  }
  *param_2 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea26d0 FUN_141ea26d0 body=254 status=ok
// SIG undefined FUN_141ea26d0(void)

longlong * FUN_141ea26d0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar1 = operator_new(0x30);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    uStack_70 = CONCAT31(uStack_70._1_3_,param_4);
    local_28 = 0;
    local_18 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_48);
    if (puVar2 != (undefined8 *)0x0) {
      local_78 = (undefined4)param_3;
      uStack_74 = (undefined4)((ulonglong)param_3 >> 0x20);
      *(undefined4 *)(puVar2 + 1) = local_78;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_74;
      *(undefined4 *)(puVar2 + 2) = uStack_70;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_6c;
      *puVar2 = &PTR_FUN_143f4d0b0;
      puVar2[3] = param_1;
    }
    local_58[0] = &LAB_141e93840;
    lVar1 = FOpenGLShaderResourceViewProxy::FOpenGLShaderResourceViewProxy(lVar1,local_58);
  }
  if (DAT_1469f59d8 != 0) {
    FShaderCache::InternalLogSRV(DAT_1469f59d8,lVar1,param_3,param_4,1,0);
  }
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea27d0 FUN_141ea27d0 body=290 status=ok
// SIG undefined FUN_141ea27d0(void)

longlong *
FUN_141ea27d0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  uVar1 = uStack_80;
  lVar2 = operator_new(0x30);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    uStack_80._3_1_ = SUB41(uVar1,3);
    uStack_80._0_3_ = CONCAT12(param_5,CONCAT11(param_4,param_6));
    local_38 = 0;
    local_28 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_58);
    if (puVar3 != (undefined8 *)0x0) {
      local_88 = (undefined4)param_3;
      uStack_84 = (undefined4)((ulonglong)param_3 >> 0x20);
      *(undefined4 *)(puVar3 + 1) = local_88;
      *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_84;
      *(undefined4 *)(puVar3 + 2) = uStack_80;
      *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_7c;
      *puVar3 = &PTR_FUN_143f4d0b0;
      puVar3[3] = param_1;
    }
    local_68[0] = &LAB_141e93c60;
    lVar2 = FOpenGLShaderResourceViewProxy::FOpenGLShaderResourceViewProxy(lVar2,local_68);
  }
  if (DAT_1469f59d8 != 0) {
    FShaderCache::InternalLogSRV(DAT_1469f59d8,lVar2,param_3,param_4,param_5,param_6);
  }
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea2900 FUN_141ea2900 body=260 status=ok
// SIG undefined FUN_141ea2900(void)

longlong * FUN_141ea2900(undefined8 param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar1 = operator_new(0x30);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    uStack_70 = CONCAT31(uStack_70._1_3_,param_4);
    local_28 = 0;
    local_18 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_48);
    if (puVar2 != (undefined8 *)0x0) {
      local_78 = (undefined4)param_3;
      uStack_74 = (undefined4)((ulonglong)param_3 >> 0x20);
      *(undefined4 *)(puVar2 + 1) = local_78;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_74;
      *(undefined4 *)(puVar2 + 2) = uStack_70;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_6c;
      *puVar2 = &PTR_FUN_143f4d0b0;
      puVar2[3] = param_1;
    }
    local_58[0] = &LAB_141e93840;
    lVar1 = FOpenGLShaderResourceViewProxy::FOpenGLShaderResourceViewProxy(lVar1,local_58);
  }
  if (DAT_1469f59d8 != 0) {
    FShaderCache::InternalLogSRV
              (DAT_1469f59d8,lVar1,param_3,param_4,*(undefined1 *)(param_3 + 0x34),
               *(undefined1 *)(param_3 + 0x3c));
  }
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea2a10 FUN_141ea2a10 body=260 status=ok
// SIG undefined FUN_141ea2a10(void)

longlong * FUN_141ea2a10(undefined8 param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar1 = operator_new(0x30);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    uStack_70 = CONCAT31(uStack_70._1_3_,param_4);
    local_28 = 0;
    local_18 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_48);
    if (puVar2 != (undefined8 *)0x0) {
      local_78 = (undefined4)param_3;
      uStack_74 = (undefined4)((ulonglong)param_3 >> 0x20);
      *(undefined4 *)(puVar2 + 1) = local_78;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_74;
      *(undefined4 *)(puVar2 + 2) = uStack_70;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_6c;
      *puVar2 = &PTR_FUN_143f4d0b0;
      puVar2[3] = param_1;
    }
    local_58[0] = &LAB_141e938c0;
    lVar1 = FOpenGLShaderResourceViewProxy::FOpenGLShaderResourceViewProxy(lVar1,local_58);
  }
  if (DAT_1469f59d8 != 0) {
    FShaderCache::InternalLogSRV
              (DAT_1469f59d8,lVar1,param_3,param_4,*(undefined1 *)(param_3 + 0x34),
               *(undefined1 *)(param_3 + 0x3c));
  }
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea2b20 FUN_141ea2b20 body=248 status=ok
// SIG undefined FUN_141ea2b20(void)

longlong *
FUN_141ea2b20(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  lVar1 = operator_new(0x30);
  lVar3 = 0;
  if (lVar1 != 0) {
    uStack_80 = CONCAT31(uStack_80._1_3_,param_5);
    local_38 = 0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x28,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      local_88 = (undefined4)param_1;
      uStack_84 = (undefined4)((ulonglong)param_1 >> 0x20);
      *puVar2 = &PTR_FUN_143ff7760;
      *(undefined4 *)(puVar2 + 1) = local_88;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_84;
      *(undefined4 *)(puVar2 + 2) = uStack_80;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_7c;
      puVar2[3] = param_3;
      puVar2[4] = CONCAT44(uStack_6c,param_4);
    }
    local_68[0] = &LAB_141e93b80;
    lVar3 = FOpenGLShaderResourceViewProxy::FOpenGLShaderResourceViewProxy(lVar1,local_68);
  }
  *param_2 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (DAT_1469f59d8 != 0) {
    FShaderCache::InternalLogSRV(DAT_1469f59d8,*param_2,param_3,param_4,param_5);
  }
  return param_2;
}



// FUNCTION 141ea2c20 FUN_141ea2c20 body=253 status=ok
// SIG undefined FUN_141ea2c20(void)

undefined8 *
FUN_141ea2c20(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             uint param_5,longlong param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  puVar6 = (undefined8 *)0x0;
  puVar4 = puVar6;
  if (*(undefined8 **)(param_6 + 8) != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(**(code **)**(undefined8 **)(param_6 + 8))();
  }
  lVar5 = operator_new(0x58);
  if ((lVar5 != 0) &&
     (puVar6 = (undefined8 *)FUN_141e8b1d0(lVar5,param_3,param_4,param_5 & 6,puVar4,0,0,0),
     puVar6 != (undefined8 *)0x0)) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
  }
  *param_2 = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar6 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))
         ) {
        LOCK();
        bVar7 = *(int *)((longlong)puVar6 + 0xc) == 0;
        if (bVar7) {
          *(int *)((longlong)puVar6 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar7) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar6);
        }
      }
      else {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141ea2d20 RHICreateTexture2D body=149 status=ok
// SIG undefined RHICreateTexture2D(void)

longlong *
FOpenGLDynamicRHI::RHICreateTexture2D
          (undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
          undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined8 *param_9)

{
  longlong lVar1;
  
  lVar1 = CreateOpenGLTexture(param_1,param_3,param_4,0,0,0,param_5,param_6,param_7,1,param_8,
                              param_9 + 2,*param_9);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea2dc0 FUN_141ea2dc0 body=1643 status=ok
// SIG undefined FUN_141ea2dc0(void)

void FUN_141ea2dc0(longlong param_1,ulonglong *param_2,uint param_3,uint param_4,int param_5,
                  byte param_6,uint param_7,uint param_8,longlong *param_9)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined *in_stack_ffffffffffffff18;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar17;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar18;
  longlong local_60;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  undefined4 *local_48;
  undefined4 *local_40;
  ulonglong uVar16;
  
  uVar11 = param_7;
  if (param_7 == 0) {
    uVar11 = 1;
    uVar14 = param_4;
    if (param_4 < param_3) {
      uVar14 = param_3;
    }
    while (uVar14 >> 1 != 0) {
      uVar11 = uVar11 + 1;
      uVar14 = uVar14 >> 1;
    }
  }
  uVar14 = param_8;
  if (DAT_1464c9c14 == 0) {
    uVar14 = param_8 & 0xffffffef;
  }
  uVar4 = 0;
  uVar10 = 0;
  param_8 = 0;
  iVar12 = 0x400 - DAT_1464c97dc;
  if (iVar12 < 2) {
    _guard_xfg_dispatch_icall_nop
              (&param_8,&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4,(longlong)iVar12 * 4);
    (*DAT_146ab4038)(0x400,&DAT_146ab0550);
    iVar5 = 1 - iVar12;
    _guard_xfg_dispatch_icall_nop(&param_8 + iVar12,&DAT_146ab0550,(longlong)iVar5 << 2);
  }
  else {
    param_8 = *(uint *)(&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4);
    iVar5 = DAT_1464c97dc + 1;
  }
  DAT_1464c97dc = iVar5;
  lVar3 = FUN_141e711c0(param_1,1);
  iVar12 = DAT_1464c97fc + -1;
  if ((*(int *)(*(longlong *)(lVar3 + 8) + 0x10 + (longlong)iVar12 * 0x28) != 0x8c1a) ||
     (*(int *)(*(longlong *)(lVar3 + 8) + 0x14 + (longlong)iVar12 * 0x28) != param_8)) {
    in_stack_ffffffffffffff18 =
         (undefined *)CONCAT44((int)((ulonglong)in_stack_ffffffffffffff18 >> 0x20),param_8);
    FUN_141e6dbc0(param_1,lVar3,iVar12,0x8c1a,in_stack_ffffffffffffff18,0,uVar11);
  }
  (*DAT_146ab4160)(0x8c1a,0x2802,0x2901);
  (*DAT_146ab4160)(0x8c1a,0x2803,0x2901);
  uVar8 = 0x2600;
  (*DAT_146ab4160)(0x8c1a,0x2800,0x2600);
  if (1 < uVar11) {
    uVar8 = 0x2700;
  }
  (*DAT_146ab4160)(0x8c1a,0x2801,uVar8);
  if (DAT_146ab3df1 != '\0') {
    (*DAT_146ab4160)(0x8c1a,0x84fe,1);
  }
  (*DAT_146ab4160)(0x8c1a,0x813c,0);
  (*DAT_146ab4160)(0x8c1a,0x813d,uVar11 - 1);
  local_54 = uVar11 - 1;
  local_48 = &param_8;
  local_58 = 0;
  local_40 = &local_58;
  FUN_140608850(param_1 + 0x15bd8,local_50,&local_48,0);
  uVar7 = (ulonglong)param_6;
  lVar6 = uVar7 * 0x1c;
  piVar1 = (int *)((longlong)&DAT_146ab3630 + (ulonglong)(uVar14 >> 4 & 1) * 4 + lVar6);
  if (*piVar1 == 0) {
    LowLevelFatalErrorHandler
              ("Unknown",0x687,L"Texture format \'%s\' not supported.",
               (&PTR_u_unknown_1464ca1b0)[uVar7 * 5]);
    in_stack_ffffffffffffff18 = (&PTR_u_unknown_1464ca1b0)[uVar7 * 5];
    FDebug::AssertFailed
              (&DAT_144eb7e82,"Unknown",0x687,L"Texture format \'%s\' not supported.",
               in_stack_ffffffffffffff18);
  }
  if (*(int *)(lVar3 + 0x428) != 0) {
    (*DAT_146ab42e8)(0x88ec,0);
    *(undefined4 *)(lVar3 + 0x428) = 0;
  }
  if ((longlong *)*param_9 == (longlong *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = (**(code **)(*(longlong *)*param_9 + 8))();
  }
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  iVar12 = *piVar1;
  param_7 = 0;
  uVar8 = *(undefined4 *)((longlong)&DAT_146ab3640 + lVar6 + 4);
  uVar17 = *(undefined4 *)((longlong)&DAT_146ab3640 + lVar6);
  if (DAT_146ab4960 == (code *)0x0) {
    uVar7 = uVar4;
    if (uVar11 != 0) {
      do {
        in_stack_ffffffffffffff40 = 0;
        uVar9 = (int)param_4 >> ((byte)uVar7 & 0x1f);
        uVar15 = (int)param_3 >> ((byte)uVar7 & 0x1f);
        if (uVar9 < 2) {
          uVar9 = 1;
        }
        in_stack_ffffffffffffff18 =
             (undefined *)CONCAT44((int)((ulonglong)in_stack_ffffffffffffff18 >> 0x20),uVar9);
        if (uVar15 < 2) {
          uVar15 = 1;
        }
        (*DAT_146ab4210)(0x8c1a,uVar7,iVar12,uVar15,in_stack_ffffffffffffff18,param_5,0,uVar17,uVar8
                         ,0);
        uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
        uVar15 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar15;
      } while (uVar15 < uVar11);
    }
  }
  else {
    in_stack_ffffffffffffff18 =
         (undefined *)CONCAT44((int)((ulonglong)in_stack_ffffffffffffff18 >> 0x20),param_4);
    (*DAT_146ab4960)(0x8c1a,uVar11,iVar12,param_3,in_stack_ffffffffffffff18,param_5);
  }
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  if (local_60 != 0) {
    if (uVar11 != 0) {
      uVar7 = uVar4;
      uVar16 = uVar4;
      do {
        lVar3 = uVar7 + local_60;
        uVar13 = param_4 >> ((byte)uVar16 & 0x1f);
        in_stack_ffffffffffffff40 =
             CONCAT44((int)((ulonglong)in_stack_ffffffffffffff40 >> 0x20),
                      *(undefined4 *)((longlong)&DAT_146ab3640 + lVar6 + 4));
        uVar9 = param_3 >> ((byte)uVar16 & 0x1f);
        uVar15 = uVar13;
        if (uVar13 < 2) {
          uVar15 = 1;
        }
        uVar2 = uVar9;
        if (uVar9 < 2) {
          uVar2 = 1;
        }
        in_stack_ffffffffffffff18 =
             (undefined *)((ulonglong)in_stack_ffffffffffffff18 & 0xffffffff00000000);
        (*DAT_146ab4218)(0x8c1a,uVar16,0,0,in_stack_ffffffffffffff18,uVar2,uVar15,param_5,
                         *(undefined4 *)((longlong)&DAT_146ab3640 + lVar6),in_stack_ffffffffffffff40
                         ,lVar3);
        uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
        uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
        uVar18 = (undefined4)((ulonglong)lVar3 >> 0x20);
        if (uVar13 < 2) {
          uVar13 = 1;
        }
        if (uVar9 < 2) {
          uVar9 = 1;
        }
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
        param_7 = param_7 + uVar13 * uVar9 * (&DAT_1464ca1c4)[(ulonglong)param_6 * 10] * param_5;
        uVar7 = (ulonglong)param_7;
      } while (uVar15 < uVar11);
    }
    (**(code **)(*(longlong *)*param_9 + 0x18))();
  }
  if ((uVar14 & 1) == 0) {
    if ((uVar14 & 4) == 0) {
      if ((uVar14 & 2) != 0) {
        if (param_6 == 0xb) {
          uVar10 = 0x821a;
        }
        else {
          uVar10 = 0x8d00;
          if ((param_6 - 0xc & 0xf7) != 0) {
            uVar10 = 0x8ce0;
          }
        }
      }
    }
    else {
      uVar10 = 0x821a;
      if (param_6 != 0xb) {
        uVar10 = 0x8d00;
      }
    }
  }
  else {
    uVar10 = 0x8ce0;
  }
  lVar3 = operator_new(0xf0);
  if (lVar3 != 0) {
    uVar4 = FUN_141e8bd10(lVar3,param_1,param_8,0x8c1a,CONCAT44(uVar8,uVar10),param_3,param_4,
                          param_5,uVar11,CONCAT44(uVar17,1),CONCAT44(uVar18,1),param_5,param_6,0,1,
                          uVar14,0,param_9 + 2);
  }
  OpenGLTextureAllocated(uVar4,uVar14);
  *param_2 = uVar4;
  if (uVar4 != 0) {
    LOCK();
    *(int *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141ea3430 RHICreateTexture2DArrayFromResource body=265 status=ok
// SIG undefined RHICreateTexture2DArrayFromResource(void)

longlong *
FOpenGLDynamicRHI::RHICreateTexture2DArrayFromResource
          (undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = operator_new(0xf0);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_141e8b9e0(lVar1,param_1,param_11,0x8c1a,0,param_4,param_5,0,param_7,param_8,param_9,
                          param_6,param_3,0,0,param_12,0,param_10);
  }
  *(uint *)(lVar2 + 0x98) = *(uint *)(lVar2 + 0x98) | 0x80000000;
  OpenGLTextureAllocated(lVar2,param_12);
  *param_2 = lVar2;
  LOCK();
  *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  UNLOCK();
  return param_2;
}



// FUNCTION 141ea3540 RHICreateTexture2DFromResource body=278 status=ok
// SIG undefined RHICreateTexture2DFromResource(void)

longlong *
FOpenGLDynamicRHI::RHICreateTexture2DFromResource
          (undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,uint param_7,undefined4 param_8,undefined8 param_9,
          undefined4 param_10,undefined4 param_11)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = operator_new(0xf0);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    uVar2 = 0xde1;
    if (1 < param_7) {
      uVar2 = 0x9100;
    }
    lVar1 = FUN_141e8b9e0(lVar1,param_1,param_10,uVar2,0,param_4,param_5,0,param_6,param_7,param_8,1
                          ,param_3,0,0,param_11,0,param_9);
  }
  *(uint *)(lVar1 + 0x98) = *(uint *)(lVar1 + 0x98) | 0x80000000;
  OpenGLTextureAllocated(lVar1,param_11);
  *param_2 = lVar1;
  LOCK();
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  UNLOCK();
  return param_2;
}



// FUNCTION 141ea3660 FUN_141ea3660 body=1769 status=ok
// SIG undefined FUN_141ea3660(void)

void FUN_141ea3660(longlong param_1,ulonglong *param_2,uint param_3,uint param_4,uint param_5,
                  byte param_6,uint param_7,uint param_8,longlong *param_9)

{
  undefined **ppuVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined *in_stack_fffffffffffffef8;
  undefined8 in_stack_ffffffffffffff20;
  undefined4 uVar20;
  longlong in_stack_ffffffffffffff28;
  undefined4 uVar21;
  uint local_94;
  longlong local_80;
  undefined4 local_78;
  int local_74;
  undefined **local_70;
  undefined1 local_68 [8];
  longlong local_60;
  int *local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  
  if (param_7 == 0) {
    uVar8 = param_4;
    if (param_4 < param_3) {
      uVar8 = param_3;
    }
    param_7 = 1;
    uVar7 = param_5;
    if (param_5 < uVar8) {
      uVar7 = uVar8;
    }
    while (uVar7 >> 1 != 0) {
      param_7 = param_7 + 1;
      uVar7 = uVar7 >> 1;
    }
  }
  uVar8 = param_8;
  if (DAT_1464c9c14 == 0) {
    uVar8 = param_8 & 0xffffffef;
  }
  uVar5 = 0;
  uVar9 = 0;
  param_8 = 0;
  iVar15 = 0x400 - DAT_1464c97dc;
  if (iVar15 < 2) {
    _guard_xfg_dispatch_icall_nop
              (&param_8,&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4,(longlong)iVar15 * 4);
    (*DAT_146ab4038)(0x400,&DAT_146ab0550);
    iVar14 = 1 - iVar15;
    _guard_xfg_dispatch_icall_nop(&param_8 + iVar15,&DAT_146ab0550,(longlong)iVar14 << 2);
  }
  else {
    param_8 = *(uint *)(&DAT_146ab0550 + (longlong)DAT_1464c97dc * 4);
    iVar14 = DAT_1464c97dc + 1;
  }
  DAT_1464c97dc = iVar14;
  lVar4 = FUN_141e711c0(param_1,1);
  iVar15 = DAT_1464c97fc + -1;
  if ((*(int *)(*(longlong *)(lVar4 + 8) + 0x10 + (longlong)iVar15 * 0x28) != 0x806f) ||
     (*(int *)(*(longlong *)(lVar4 + 8) + 0x14 + (longlong)iVar15 * 0x28) != param_8)) {
    in_stack_fffffffffffffef8 =
         (undefined *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffef8 >> 0x20),param_8);
    FUN_141e6dbc0(param_1,lVar4,iVar15,0x806f,in_stack_fffffffffffffef8,0,param_7);
  }
  (*DAT_146ab4160)(0x806f,0x2802,0x2901);
  (*DAT_146ab4160)(0x806f,0x2803,0x2901);
  (*DAT_146ab4160)(0x806f,0x8072,0x2901);
  (*DAT_146ab4160)(0x806f,0x2800,0x2600);
  (*DAT_146ab4160)(0x806f,0x2801,0x2700);
  if (DAT_146ab3df1 != '\0') {
    (*DAT_146ab4160)(0x806f,0x84fe,1);
  }
  (*DAT_146ab4160)(0x806f,0x813c,0);
  (*DAT_146ab4160)(0x806f,0x813d,param_7 - 1);
  local_74 = param_7 - 1;
  local_78 = 0;
  local_50 = &param_8;
  local_48 = &local_78;
  FUN_140608850(param_1 + 0x15bd8,local_68,&local_50,0);
  lVar16 = (ulonglong)param_6 * 0x1c;
  lVar17 = (longlong)&DAT_146ab3630 + lVar16;
  ppuVar1 = &PTR_u_unknown_1464ca1b0 + (ulonglong)param_6 * 5;
  piVar2 = (int *)(lVar17 + (ulonglong)(uVar8 >> 4 & 1) * 4);
  local_70 = ppuVar1;
  local_60 = lVar17;
  local_58 = piVar2;
  if (*piVar2 == 0) {
    LowLevelFatalErrorHandler("Unknown",0x6fb,L"Texture format \'%s\' not supported.",*ppuVar1);
    in_stack_fffffffffffffef8 = *ppuVar1;
    FDebug::AssertFailed
              (&DAT_144eb7e83,"Unknown",0x6fb,L"Texture format \'%s\' not supported.",
               in_stack_fffffffffffffef8);
  }
  if (*(int *)(lVar4 + 0x428) != 0) {
    (*DAT_146ab42e8)(0x88ec,0);
    *(undefined4 *)(lVar4 + 0x428) = 0;
  }
  plVar19 = param_9;
  if ((longlong *)*param_9 == (longlong *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = (**(code **)(*(longlong *)*param_9 + 8))();
    if ((longlong *)*plVar19 != (longlong *)0x0) {
      local_94 = (**(code **)(*(longlong *)*plVar19 + 0x10))();
      goto LAB_141ea39af;
    }
  }
  local_94 = 0;
LAB_141ea39af:
  uVar20 = *(undefined4 *)((longlong)&DAT_146ab3640 + lVar16);
  iVar15 = *piVar2;
  uVar21 = *(undefined4 *)((longlong)&DAT_146ab3640 + lVar16 + 4);
  if (DAT_146ab4960 == (code *)0x0) {
    uVar10 = uVar5;
    if (param_7 != 0) {
      do {
        in_stack_ffffffffffffff20 = 0;
        bVar6 = (byte)uVar10;
        uVar7 = (int)param_5 >> (bVar6 & 0x1f);
        uVar12 = (int)param_4 >> (bVar6 & 0x1f);
        uVar11 = (int)param_3 >> (bVar6 & 0x1f);
        if (uVar7 < 2) {
          uVar7 = 1;
        }
        if (uVar12 < 2) {
          uVar12 = 1;
        }
        in_stack_fffffffffffffef8 =
             (undefined *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffef8 >> 0x20),uVar12);
        if (uVar11 < 2) {
          uVar11 = 1;
        }
        (*DAT_146ab4210)(0x806f,uVar10,iVar15,uVar11,in_stack_fffffffffffffef8,uVar7,0,uVar20,uVar21
                         ,0);
        uVar7 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar7;
        lVar17 = local_60;
      } while (uVar7 < param_7);
    }
  }
  else {
    in_stack_fffffffffffffef8 =
         (undefined *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffef8 >> 0x20),param_4);
    (*DAT_146ab4960)(0x806f,param_7,iVar15,param_3,in_stack_fffffffffffffef8,param_5);
  }
  uVar7 = (uint)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  plVar19 = param_9;
  if (local_80 != 0) {
    uVar10 = uVar5;
    uVar18 = uVar5;
    if (param_7 != 0) {
      do {
        uVar7 = (uint)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
        uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
        uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
        bVar6 = (byte)uVar10;
        uVar11 = param_3 >> (bVar6 & 0x1f);
        if ((int)uVar11 < 2) {
          uVar11 = 1;
        }
        uVar12 = param_4 >> (bVar6 & 0x1f);
        if ((int)uVar12 < 2) {
          uVar12 = 1;
        }
        uVar13 = param_5 >> (bVar6 & 0x1f);
        if ((int)uVar13 < 2) {
          uVar13 = 1;
        }
        iVar15 = ((int)(*(int *)(local_70 + 1) + -1 + uVar11) / *(int *)(local_70 + 1)) *
                 ((int)(*(int *)((longlong)local_70 + 0xc) + -1 + uVar12) /
                 *(int *)((longlong)local_70 + 0xc)) * *(int *)((longlong)local_70 + 0x14) * uVar13;
        uVar3 = iVar15 + (int)uVar18;
        if (local_94 < uVar3) break;
        in_stack_ffffffffffffff28 = local_80 + uVar18;
        if (*(char *)(lVar17 + 0x18) == '\0') {
          in_stack_ffffffffffffff20 = CONCAT44(uVar20,*(undefined4 *)(lVar17 + 0x14));
          in_stack_fffffffffffffef8 = (undefined *)((ulonglong)uVar7 << 0x20);
          (*DAT_146ab4218)(0x806f,uVar10,0,0,in_stack_fffffffffffffef8,uVar11,uVar12,uVar13,
                           *(undefined4 *)(lVar17 + 0x10),in_stack_ffffffffffffff20,
                           in_stack_ffffffffffffff28);
        }
        else {
          in_stack_ffffffffffffff20 = CONCAT44(uVar20,iVar15);
          in_stack_fffffffffffffef8 = (undefined *)((ulonglong)uVar7 << 0x20);
          (*DAT_146ab4250)();
        }
        uVar7 = (uint)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
        uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
        uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
        uVar11 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar11;
        uVar18 = (ulonglong)uVar3;
      } while (uVar11 < param_7);
    }
    plVar19 = param_9;
    (**(code **)(*(longlong *)*param_9 + 0x18))();
  }
  if ((uVar8 & 1) == 0) {
    if ((uVar8 & 4) == 0) {
      if ((uVar8 & 2) != 0) {
        if (param_6 == 0xb) {
          uVar9 = 0x821a;
        }
        else {
          uVar9 = 0x8d00;
          if ((param_6 - 0xc & 0xf7) != 0) {
            uVar9 = 0x8ce0;
          }
        }
      }
    }
    else {
      uVar9 = 0x8d00;
      if (param_6 == 0xb) {
        uVar9 = 0x821a;
      }
    }
  }
  else {
    uVar9 = 0x8ce0;
  }
  lVar4 = operator_new(0xf0);
  if (lVar4 != 0) {
    uVar5 = FUN_141e8c050(lVar4,param_1,param_8,0x806f,CONCAT44(uVar7,uVar9),param_3,param_4,param_5
                          ,param_7,CONCAT44(uVar20,1),CONCAT44(uVar21,1),1,param_6,0,1,uVar8,0,
                          plVar19 + 2);
  }
  OpenGLTextureAllocated(uVar5,uVar8);
  *param_2 = uVar5;
  if (uVar5 != 0) {
    LOCK();
    *(int *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141ea3d50 RHICreateTextureCube body=120 status=ok
// SIG undefined RHICreateTextureCube(void)

longlong *
FOpenGLDynamicRHI::RHICreateTextureCube
          (undefined8 param_1,longlong *param_2,undefined4 param_3,undefined1 param_4,
          undefined4 param_5,undefined4 param_6,longlong param_7)

{
  longlong lVar1;
  
  lVar1 = CreateOpenGLTexture(param_1,param_3,param_3,1,0,0,param_4,param_5,1,1,param_6,
                              param_7 + 0x10,0);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea3dd0 RHICreateTextureCubeArray body=131 status=ok
// SIG undefined RHICreateTextureCubeArray(void)

longlong *
FOpenGLDynamicRHI::RHICreateTextureCubeArray
          (undefined8 param_1,longlong *param_2,undefined4 param_3,int param_4,undefined1 param_5,
          undefined4 param_6,undefined4 param_7,longlong param_8)

{
  longlong lVar1;
  
  lVar1 = CreateOpenGLTexture(param_1,param_3,param_3,
                              CONCAT71((uint7)(uint3)((uint)(param_4 * 6) >> 8),1),1,0,param_5,
                              param_6,1,param_4 * 6,param_7,param_8 + 0x10,0);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea3e60 RHICreateTextureCubeFromResource body=251 status=ok
// SIG undefined RHICreateTextureCubeFromResource(void)

longlong *
FOpenGLDynamicRHI::RHICreateTextureCubeFromResource
          (undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
          undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = operator_new(0xf0);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_141e8c390(lVar1,param_1,param_11,0x8513,0,param_4,param_4,0,param_7,param_8,param_9,
                          1,param_3,0,0,param_12,0,param_10);
  }
  *(uint *)(lVar2 + 0x98) = *(uint *)(lVar2 + 0x98) | 0x80000000;
  OpenGLTextureAllocated(lVar2,param_12);
  *param_2 = lVar2;
  LOCK();
  *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  UNLOCK();
  return param_2;
}



// FUNCTION 141ea3f60 RHICreateTextureExternal2D body=149 status=ok
// SIG undefined RHICreateTextureExternal2D(void)

longlong *
FOpenGLDynamicRHI::RHICreateTextureExternal2D
          (undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
          undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined8 *param_9)

{
  longlong lVar1;
  
  lVar1 = CreateOpenGLTexture(param_1,param_3,param_4,0,0,1,param_5,param_6,param_7,1,param_8,
                              param_9 + 2,*param_9);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea4000 RHICreateTextureReference body=185 status=ok
// SIG undefined RHICreateTextureReference(void)

undefined8 *
FOpenGLDynamicRHI::RHICreateTextureReference
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x70);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 2) = 0x100;
    puVar1[3] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    if (param_3 == (undefined8 *)0x0) {
      param_3 = puVar1 + 10;
    }
    puVar1[9] = param_3;
    puVar1[10] = 0xc7efffffe0000000;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144ebe3e0;
    puVar1[0xd] = 0;
    puVar2 = puVar1;
  }
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea40c0 FUN_141ea40c0 body=400 status=ok
// SIG undefined FUN_141ea40c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141ea40c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_288 [32];
  undefined1 *local_268;
  undefined1 local_258 [256];
  longlong local_158;
  undefined1 *local_150;
  undefined4 local_148;
  undefined1 local_138 [256];
  longlong local_38;
  undefined1 *local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  local_148 = 0x2f;
  local_150 = local_258;
  puVar2 = (undefined8 *)0x0;
  local_158 = 0;
  local_268 = (undefined1 *)CONCAT62(local_268._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_258,0x30,"FOpenGLDynamicRHI::RHICreateUnorderedAccessView");
  LowLevelFatalErrorHandler("Unknown",0x51,L"%s not implemented yet",local_150);
  if (local_158 != 0) {
    FMemory::Free();
  }
  local_38 = 0;
  local_30 = local_138;
  local_28 = 0x2f;
  local_268 = (undefined1 *)CONCAT62(local_268._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_138,0x30,"FOpenGLDynamicRHI::RHICreateUnorderedAccessView");
  local_268 = local_30;
  FDebug::AssertFailed(&DAT_144eb6e64,"Unknown",0x51,L"%s not implemented yet");
  if (local_38 != 0) {
    FMemory::Free();
  }
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR_FUN_144ebe580;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 2) = 0x100;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar2 = puVar1;
  }
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea4250 RHICreateUnorderedAccessView body=224 status=ok
// SIG undefined RHICreateUnorderedAccessView(void)

undefined8 *
FOpenGLDynamicRHI::RHICreateUnorderedAccessView
          (undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  puVar3 = (undefined8 *)operator_new(0x30);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f3ece8;
    lVar4 = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *(undefined2 *)(puVar3 + 2) = 0x100;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__144ebe590;
    puVar3[5] = param_3;
    lVar5 = lVar4;
    if (param_3 != 0) {
      LOCK();
      *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
      UNLOCK();
      plVar2 = (longlong *)puVar3[5];
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x48))(plVar2);
        if (DAT_146ab6383 != '\0') {
          IsInRenderingThread();
        }
        lVar4 = (**(code **)(*plVar2 + 0x48))(plVar2);
        lVar5 = puVar3[5];
      }
    }
    iVar1 = *(int *)(lVar5 + 0x3c);
    *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(lVar4 + 0x10);
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)((longlong)&DAT_146ab3630 + (longlong)iVar1 * 0x1c)
    ;
  }
  *param_2 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea4330 RHICreateUnorderedAccessView body=102 status=ok
// SIG undefined RHICreateUnorderedAccessView(void)

longlong *
FOpenGLDynamicRHI::RHICreateUnorderedAccessView
          (undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = operator_new(0x38);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FOpenGLVertexBufferUnorderedAccessView::FOpenGLVertexBufferUnorderedAccessView
                      (lVar1,param_1,param_3,param_4);
  }
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea43a0 FUN_141ea43a0 body=495 status=ok
// SIG undefined FUN_141ea43a0(void)

longlong * FUN_141ea43a0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  size_t _Size;
  uint uStackX_14;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined1 *local_c8 [2];
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined4 local_88;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  pvVar7 = (void *)0x0;
  if ((DAT_146ab6383 == '\0') || (cVar3 = FUN_1415e13e0(), cVar3 != '\0')) {
    lVar4 = operator_new(0x48);
    if (lVar4 != 0) {
      local_48 = 0;
      local_38 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_68);
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[1] = param_3;
        *puVar5 = &PTR_FUN_143f77b70;
      }
      local_78[0] = &LAB_141e93c40;
      pvVar7 = (void *)FUN_141e8b470(lVar4,local_78);
    }
  }
  else {
    local_d0 = *(int *)(param_3 + 1);
    _Size = (size_t)local_d0;
    pvVar9 = (void *)*param_3;
    local_d8 = (void *)0x0;
    if (local_d0 == 0) {
      local_cc = 0;
      pvVar10 = pvVar7;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_d8,local_d0,0);
      pvVar10 = local_d8;
      _guard_xfg_dispatch_icall_nop(local_d8,pvVar9,_Size);
    }
    uVar2 = local_cc;
    iVar1 = local_d0;
    lVar4 = operator_new(0x48);
    if (lVar4 == 0) {
      pvVar9 = (void *)((ulonglong)uStackX_14 << 0x20);
      pvVar8 = pvVar7;
    }
    else {
      local_d8 = (void *)0x0;
      local_98 = 0;
      local_88 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
      pvVar9 = pvVar10;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_FUN_144ebe750;
        puVar5[1] = pvVar10;
        *(int *)(puVar5 + 2) = iVar1;
        *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
        pvVar9 = pvVar7;
      }
      local_c8[0] = &LAB_141e93a90;
      pvVar6 = (void *)FUN_141e8b470(lVar4,local_c8);
      pvVar8 = (void *)0x1;
      pvVar10 = pvVar7;
      pvVar7 = pvVar6;
    }
    if ((pvVar8 != (void *)0x0) && (pvVar9 != (void *)0x0)) {
      FMemory::Free(pvVar9);
    }
    if (pvVar10 != (void *)0x0) {
      FMemory::Free(pvVar10);
    }
  }
  *param_2 = (longlong)pvVar7;
  if (pvVar7 != (void *)0x0) {
    LOCK();
    *(int *)((longlong)pvVar7 + 8) = *(int *)((longlong)pvVar7 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141ea45c0 RHIEndRenderQuery body=237 status=ok
// SIG undefined RHIEndRenderQuery(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FOpenGLDynamicRHI::RHIEndRenderQuery(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x40) == 1) {
      if ((*(char *)(param_2 + 0x3d) == '\0') &&
         (cVar3 = PlatformContextIsCurrent(*(undefined8 *)(param_2 + 0x20)), cVar3 == '\0')) {
        PlatformReleaseRenderQuery(*(undefined4 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
        *(undefined4 *)(param_2 + 0x18) = 0;
        *(undefined1 *)(param_2 + 0x3d) = 1;
      }
      if (*(char *)(param_2 + 0x3d) == '\0') {
        *(undefined4 *)(param_1 + 0x33c) = 0;
                    /* WARNING: Could not recover jumptable at 0x000141ea462e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*_DAT_146ab42c8)(0x8914);
        return;
      }
    }
    else if (*(int *)(param_2 + 0x40) == 2) {
      LOCK();
      piVar1 = (int *)(param_2 + 0x34);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      LOCK();
      *(int *)(param_2 + 0x38) = iVar2;
      UNLOCK();
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined1 *)(param_2 + 0x3c) = 0;
      if ((*(char *)(param_2 + 0x3d) == '\0') &&
         (cVar3 = PlatformContextIsCurrent(*(undefined8 *)(param_2 + 0x20)), cVar3 == '\0')) {
        PlatformReleaseRenderQuery(*(undefined4 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
        *(undefined4 *)(param_2 + 0x18) = 0;
        *(undefined1 *)(param_2 + 0x3d) = 1;
      }
      if (*(char *)(param_2 + 0x3d) != '\0') {
        PlatformGetNewRenderQuery(param_2 + 0x18,param_2 + 0x20);
        *(undefined1 *)(param_2 + 0x3d) = 0;
      }
      (*DAT_146ab47d8)(*(undefined4 *)(param_2 + 0x18),0x8e28);
    }
  }
  return;
}



// FUNCTION 141ea46b0 FUN_141ea46b0 body=189 status=ok
// SIG undefined FUN_141ea46b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ea46b0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x48))(param_2);
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar2 = (**(code **)(*param_2 + 0x48))(param_2);
  }
  if ((*(char *)(param_1 + 0x15c70) != '\0') && (*(longlong *)(param_1 + 0x15ca0) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15ca0) + 0x10);
    *piVar1 = *piVar1 + 1;
  }
  lVar3 = FUN_141e711c0(param_1,1);
  iVar5 = *(int *)(lVar2 + 0x14);
  iVar4 = DAT_1464c97fc + -1;
  if ((*(int *)(*(longlong *)(lVar3 + 8) + 0x10 + (longlong)iVar4 * 0x28) != iVar5) ||
     (*(int *)(*(longlong *)(lVar3 + 8) + 0x14 + (longlong)iVar4 * 0x28) != *(int *)(lVar2 + 0x10)))
  {
    FUN_141e6dbc0(param_1,lVar3,iVar4,iVar5,*(int *)(lVar2 + 0x10),0xffffffff,1);
    iVar5 = *(int *)(lVar2 + 0x14);
  }
                    /* WARNING: Could not recover jumptable at 0x000141ea4766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_146ab4758)(iVar5);
  return;
}



// FUNCTION 141ea4770 FUN_141ea4770 body=1123 status=ok
// SIG undefined FUN_141ea4770(void)

ulonglong FUN_141ea4770(undefined8 param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  ulonglong in_RAX;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128 [2];
  undefined1 *local_118 [2];
  longlong local_108 [4];
  longlong *local_e8;
  int local_d8;
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  
  if (param_2 != 0) {
    if (((DAT_146ab6383 == '\0') && (cVar7 = IsInRenderingThread(), cVar7 != '\0')) ||
       (cVar7 = FUN_1415e13e0(), cVar7 != '\0')) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    LOCK();
    iVar8 = *(int *)(param_2 + 0x38);
    if (iVar8 == 0) {
      *(int *)(param_2 + 0x38) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    LOCK();
    iVar9 = *(int *)(param_2 + 0x34);
    if (iVar9 == 0) {
      *(int *)(param_2 + 0x34) = 0;
      iVar9 = 0;
    }
    UNLOCK();
    if (iVar8 != iVar9) {
      if (bVar6) {
        FOpenGLDynamicRHI::GetRenderQueryResult_OnThisThread(param_1,param_2,param_4);
      }
      else {
        local_138 = (undefined4)param_1;
        uStack_134 = (undefined4)((ulonglong)param_1 >> 0x20);
        uStack_130 = (undefined4)param_2;
        uStack_12c = (undefined4)((ulonglong)param_2 >> 0x20);
        if (param_4 == '\0') {
          puVar12 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
          puVar10 = puVar12 + 0xc;
          if (DAT_146ab6eb0 < puVar10) {
            FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
            puVar12 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
            puVar10 = puVar12 + 0xc;
          }
          DAT_146ab6e8c = DAT_146ab6e8c + 1;
          DAT_146ab6ea8 = puVar10;
          *DAT_146ab6e80 = puVar12;
          local_48 = (longlong *)0x0;
          local_38 = 0;
          DAT_146ab6e80 = puVar12 + 1;
          puVar10 = (undefined8 *)FUN_140438ef0(0x18,local_68);
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = &PTR_FUN_143f77c18;
            *(undefined4 *)(puVar10 + 1) = local_138;
            *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_134;
            *(undefined4 *)(puVar10 + 2) = uStack_130;
            *(undefined4 *)((longlong)puVar10 + 0x14) = uStack_12c;
          }
          local_78[0] = UE4Function_Private::
                        TFunctionRefCaller<<lambda_8b91daca7f0e2bc64d19f1bc5a455890>,void___cdecl(void)>
                        ::Call;
          puVar12[1] = 0;
          *puVar12 = &PTR_ExecuteAndDestruct_144eb5ab0;
          TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar12 + 2,local_78);
          if (local_38 != 0) {
            plVar13 = local_68;
            if (local_48 != (longlong *)0x0) {
              plVar13 = local_48;
            }
            if (plVar13 != (longlong *)0x0) {
              (**(code **)(*plVar13 + 0x10))(plVar13,0);
            }
          }
          if (local_48 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        else {
          puVar12 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
          puVar10 = puVar12 + 0xc;
          if (DAT_146ab6eb0 < puVar10) {
            FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
            puVar12 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
            puVar10 = puVar12 + 0xc;
          }
          DAT_146ab6e8c = DAT_146ab6e8c + 1;
          DAT_146ab6ea8 = puVar10;
          *DAT_146ab6e80 = puVar12;
          local_e8 = (longlong *)0x0;
          local_d8 = 0;
          DAT_146ab6e80 = puVar12 + 1;
          puVar10 = (undefined8 *)FUN_140438ef0(0x18,local_108);
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = &PTR_FUN_143f77c18;
            *(undefined4 *)(puVar10 + 1) = local_138;
            *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_134;
            *(undefined4 *)(puVar10 + 2) = uStack_130;
            *(undefined4 *)((longlong)puVar10 + 0x14) = uStack_12c;
          }
          local_118[0] = &LAB_141e93850;
          puVar12[1] = 0;
          *puVar12 = &PTR_ExecuteAndDestruct_144eb5ab0;
          TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar12 + 2,local_118);
          if (local_d8 != 0) {
            plVar13 = local_108;
            if (local_e8 != (longlong *)0x0) {
              plVar13 = local_e8;
            }
            if (plVar13 != (longlong *)0x0) {
              (**(code **)(*plVar13 + 0x10))(plVar13,0);
            }
          }
          if (local_e8 != (longlong *)0x0) {
            FMemory::Free();
          }
          FRHICommandListImmediate::RHIThreadFence(&DAT_146ab6e78,local_128,0);
          puVar12 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
          puVar10 = puVar12 + 0xc;
          if (DAT_146ab6eb0 < puVar10) {
            FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
            puVar12 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
            puVar10 = puVar12 + 0xc;
          }
          DAT_146ab6e8c = DAT_146ab6e8c + 1;
          DAT_146ab6ea8 = puVar10;
          *DAT_146ab6e80 = puVar12;
          local_98 = (longlong *)0x0;
          local_88 = 0;
          DAT_146ab6e80 = puVar12 + 1;
          puVar10 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = &PTR_FUN_143f77c18;
            *(undefined4 *)(puVar10 + 1) = local_138;
            *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_134;
            *(undefined4 *)(puVar10 + 2) = uStack_130;
            *(undefined4 *)((longlong)puVar10 + 0x14) = uStack_12c;
          }
          local_c8[0] = &LAB_141e93ad0;
          puVar12[1] = 0;
          *puVar12 = &PTR_ExecuteAndDestruct_144eb5ab0;
          TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar12 + 2,local_c8);
          if (local_88 != 0) {
            plVar13 = local_b8;
            if (local_98 != (longlong *)0x0) {
              plVar13 = local_98;
            }
            if (plVar13 != (longlong *)0x0) {
              (**(code **)(*plVar13 + 0x10))(plVar13,0);
            }
          }
          if (local_98 != (longlong *)0x0) {
            FMemory::Free();
          }
          if (DAT_146ab6e8c != 0) {
            FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
          }
          FUN_141ed9b00(local_128);
          if (local_128[0] != 0) {
            LOCK();
            piVar1 = (int *)(local_128[0] + 0x48);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              FGraphEvent::Recycle();
            }
          }
        }
      }
    }
    LOCK();
    iVar8 = *(int *)(param_2 + 0x38);
    if (iVar8 == 0) {
      *(int *)(param_2 + 0x38) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    in_RAX = 0;
    LOCK();
    uVar2 = *(uint *)(param_2 + 0x34);
    if (uVar2 == 0) {
      *(uint *)(param_2 + 0x34) = 0;
    }
    else {
      in_RAX = (ulonglong)uVar2;
    }
    UNLOCK();
    if ((iVar8 == (int)in_RAX) && (*(char *)(param_2 + 0x3c) != '\0')) {
      if (*(int *)(param_2 + 0x40) == 2) {
        uVar11 = DAT_146ab6340 / 1000000;
        if (uVar11 < 2) {
          uVar11 = 1;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar11;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = *(ulonglong *)(param_2 + 0x28);
        *param_3 = SUB168(auVar5 / auVar4,0);
        return CONCAT71(SUB167(auVar5 / auVar4,1),1);
      }
      uVar3 = *(undefined8 *)(param_2 + 0x28);
      *param_3 = uVar3;
      return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    }
  }
  *param_3 = 0;
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141ea4c40 FUN_141ea4c40 body=515 status=ok
// SIG undefined FUN_141ea4c40(void)

undefined8
FUN_141ea4c40(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 local_res10;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  
  local_b0 = &local_res10;
  uStack_a8 = local_res18;
  local_a0 = local_res20;
  uStack_98 = &stack0x00000028;
  local_res10 = param_2;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_1415e13e0();
    if (cVar1 == '\0') {
      puVar4 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      local_b8 = 0;
      puVar2 = puVar4 + 0xc;
      if (DAT_146ab6eb0 < puVar2) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
        puVar4 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar2 = puVar4 + 0xc;
      }
      DAT_146ab6e8c = DAT_146ab6e8c + 1;
      uStack_88 = (undefined4)local_b0;
      uStack_84 = local_b0._4_4_;
      uStack_80 = (undefined4)uStack_a8;
      uStack_7c = uStack_a8._4_4_;
      DAT_146ab6ea8 = puVar2;
      *DAT_146ab6e80 = puVar4;
      local_90 = &local_b8;
      uStack_78 = (undefined4)local_a0;
      uStack_74 = local_a0._4_4_;
      uStack_70 = (undefined4)uStack_98;
      uStack_6c = uStack_98._4_4_;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      DAT_146ab6e80 = puVar4 + 1;
      puVar2 = (undefined8 *)FUN_140438ef0(0x30,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_143f4d098;
        puVar2[1] = local_90;
        puVar2[2] = CONCAT44(uStack_84,uStack_88);
        puVar2[3] = CONCAT44(uStack_7c,uStack_80);
        puVar2[4] = CONCAT44(uStack_74,uStack_78);
        puVar2[5] = CONCAT44(uStack_6c,uStack_70);
      }
      local_68[0] = UE4Function_Private::
                    TFunctionRefCaller<<lambda_0596d280bceb28568d530a6b7b114bb1>,void___cdecl(void)>
                    ::Call;
      puVar4[1] = 0;
      *puVar4 = &PTR_ExecuteAndDestruct_144eb5ab0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 2,local_68);
      if (local_28 != 0) {
        plVar5 = local_58;
        if (local_38 != (longlong *)0x0) {
          plVar5 = local_38;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (DAT_146ab6e8c != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
      }
      FUN_141ed93a0(&DAT_146ab6e78);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
      }
      FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
      return local_b8;
    }
  }
  uVar3 = <lambda_e846313f32584d9ff267a8bebf64506e>::operator()(&local_b0);
  return uVar3;
}



// FUNCTION 141ea4e50 RHILockStructuredBuffer body=338 status=ok
// SIG undefined RHILockStructuredBuffer(void)

/* WARNING: Removing unreachable block (ram,0x000141ea4f34) */
/* WARNING: Removing unreachable block (ram,0x000141ea4f3c) */

void FOpenGLDynamicRHI::RHILockStructuredBuffer
               (undefined8 param_1,longlong param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar1 = *(uint *)(param_2 + 0x20);
  FUN_141e6da00(*(undefined4 *)(param_2 + 0x28));
  uVar5 = 0;
  if (param_5 == 0) {
    uVar5 = 2;
  }
  uVar2 = *(uint *)(param_2 + 0x38);
  *(uint *)(param_2 + 0x38) = uVar5 | uVar2 & 0xfffffffd | 1;
  if (((uVar1 & 6) == 0) && ((param_5 == 0 || (param_4 != *(int *)(param_2 + 0x50))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((param_5 == 0) || (DAT_146ab053c != 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (((bVar3) && (DAT_146ab0540 == 0)) && (DAT_1464c97d8 != 0)) {
    if ((uVar2 & 4) == 0) {
      uVar6 = 0x88e4;
      if ((*(byte *)(param_2 + 0x20) & 6) != 0) {
        uVar6 = 0x88e8;
      }
    }
    else {
      uVar6 = 0x88e0;
    }
    (*DAT_146ab4310)(0x8892,*(undefined4 *)(param_2 + 0x50),0,uVar6);
  }
  if (bVar4) {
    if (param_5 != 0) {
      if (param_5 != 0) {
        uVar6 = 0x2a;
      }
      else {
        uVar6 = 3;
      }
    }
    else {
      uVar6 = 1;
    }
    uVar6 = (*DAT_146ab4778)(0x8892,param_3,param_4,uVar6);
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffff7;
    *(undefined4 *)(param_2 + 0x40) = param_3;
    *(int *)(param_2 + 0x3c) = param_4;
  }
  else {
    *(undefined4 *)(param_2 + 0x40) = param_3;
    *(int *)(param_2 + 0x3c) = param_4;
    uVar6 = FMemory::Malloc(param_4,0);
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) | 8;
  }
  *(undefined8 *)(param_2 + 0x48) = uVar6;
  return;
}



// FUNCTION 141ea4fb0 FUN_141ea4fb0 body=94 status=ok
// SIG undefined FUN_141ea4fb0(void)

void FUN_141ea4fb0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined1 local_res10 [8];
  
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  FUN_141e9e560(param_2,0,param_3,0,param_4,param_5,local_res10);
  return;
}



// FUNCTION 141ea5010 FUN_141ea5010 body=98 status=ok
// SIG undefined FUN_141ea5010(void)

void FUN_141ea5010(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined1 local_res10 [8];
  
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  FUN_141e9e6f0(param_2,0,param_4,param_3,param_5,param_6,local_res10);
  return;
}



// FUNCTION 141ea5080 FUN_141ea5080 body=96 status=ok
// SIG undefined FUN_141ea5080(void)

void FUN_141ea5080(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  FUN_141e9e6f0(param_2,1,param_3,0);
  return;
}



// FUNCTION 141ea50e0 FUN_141ea50e0 body=107 status=ok
// SIG undefined FUN_141ea50e0(void)

void FUN_141ea50e0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,undefined8 param_7)

{
  undefined1 local_res18 [16];
  
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  FUN_141e9e940(param_2,0,param_5,param_3 + param_4 * 6,param_6,param_7,local_res18);
  return;
}



// FUNCTION 141ea5150 FUN_141ea5150 body=1307 status=ok
// SIG undefined FUN_141ea5150(void)

longlong FUN_141ea5150(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                      undefined4 param_6,int param_7,int *param_8)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong local_res18;
  int local_res20 [2];
  longlong local_128 [2];
  longlong local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  longlong lStack_d0;
  longlong *plStack_c8;
  int *piStack_c0;
  undefined4 *puStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  
  lVar18 = 0;
  local_res18 = param_3;
  local_res20[0] = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ab3f78) && (_Init_thread_header(&DAT_146ab3f78), DAT_146ab3f78 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.RHICmdBufferWriteLocks");
    if (plVar9 != (longlong *)0x0) {
      lVar18 = (**(code **)(*plVar9 + 0x38))(plVar9);
    }
    DAT_146ab3f70 = lVar18;
    _Init_thread_footer(&DAT_146ab3f78);
  }
  piVar4 = param_8;
  if (((*(int *)(DAT_146ab3f70 + 4) < 1) || (param_7 != 1)) || (DAT_146ab6383 == '\0')) {
    plStack_110 = &local_res18;
    local_108 = local_res20;
    uStack_100 = &param_5;
    local_f8 = &param_6;
    uStack_f0 = &param_7;
    uStack_e0 = &stack0x00000048;
    local_e8 = param_8;
    local_128[0] = 0;
    local_118 = param_1;
    if ((DAT_146ab6383 == '\0') || (cVar5 = FUN_1415e13e0(), cVar5 != '\0')) {
      iVar1 = param_7;
      uVar3 = param_6;
      iVar17 = param_5;
      iVar12 = local_res20[0];
      lVar18 = local_res18;
      if (DAT_146ab6383 != '\0') {
        IsInRenderingThread();
      }
      local_128[0] = FUN_141e9e940(lVar18,0,uVar3,iVar17 * 6 + iVar12,iVar1,piVar4,&param_8);
    }
    else {
      puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      puVar8 = puVar14 + 0xc;
      if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x70);
        puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        puVar8 = puVar14 + 0xc;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar8;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar14;
      local_d8 = local_128;
      lStack_d0 = local_118;
      plStack_c8 = plStack_110;
      piStack_c0 = local_108;
      puStack_b8 = uStack_100;
      *(undefined8 **)(param_2 + 8) = puVar14 + 1;
      local_b0 = (undefined4)local_f8;
      uStack_ac = local_f8._4_4_;
      uStack_a8 = (undefined4)uStack_f0;
      uStack_a4 = uStack_f0._4_4_;
      local_58 = (longlong *)0x0;
      local_a0 = (undefined4)local_e8;
      uStack_9c = local_e8._4_4_;
      uStack_98 = (undefined4)uStack_e0;
      uStack_94 = uStack_e0._4_4_;
      local_48 = 0;
      puVar8 = (undefined8 *)FUN_140438ef0(0x50,local_78);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_FUN_144ebe708;
        puVar8[1] = local_d8;
        puVar8[2] = lStack_d0;
        puVar8[3] = plStack_c8;
        puVar8[4] = piStack_c0;
        puVar8[5] = puStack_b8;
        puVar8[6] = CONCAT44(uStack_ac,local_b0);
        puVar8[7] = CONCAT44(uStack_a4,uStack_a8);
        puVar8[8] = CONCAT44(uStack_9c,local_a0);
        puVar8[9] = CONCAT44(uStack_94,uStack_98);
      }
      local_88[0] = FUN_141e939c0;
      puVar14[1] = 0;
      *puVar14 = &PTR_ExecuteAndDestruct_144eb5ab0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar14 + 2,local_88);
      if (local_48 != 0) {
        plVar9 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar9 = local_58;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (*(int *)(param_2 + 0x14) != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
      }
      FUN_141ed93a0(param_2);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(param_2);
      }
      FRHICommandListBase::WaitForTasks(param_2,1);
    }
    lVar18 = (longlong)*(int *)(local_res18 + 0x3c);
    uVar11 = (&DAT_1464ca1b8)[lVar18 * 10];
    uVar6 = (&DAT_1464ca1bc)[lVar18 * 10];
    bVar2 = (byte)param_6 & 0x1f;
    uVar13 = *(uint *)(local_res18 + 0x60) >> bVar2;
    uVar16 = uVar11;
    if (uVar11 <= uVar13) {
      uVar16 = uVar13;
    }
    uVar10 = uVar6;
    if (uVar6 <= uVar13) {
      uVar10 = uVar13;
    }
    uVar11 = (uint)(CONCAT44(0 >> bVar2,(uVar16 - 1) + uVar11) / (ulonglong)uVar11);
    uVar6 = ((uVar6 - 1) + uVar10) / uVar6;
    uVar13 = uVar6;
    uVar16 = uVar11;
    if (*(int *)(local_res18 + 0x3c) - 0x1eU < 2) {
      uVar16 = 2;
      if (1 < uVar11) {
        uVar16 = uVar11;
      }
      uVar13 = 2;
      if (1 < uVar6) {
        uVar13 = uVar6;
      }
    }
    iVar12 = uVar16 * (&DAT_1464ca1c4)[lVar18 * 10];
    iVar17 = uVar13 * uVar16 * (&DAT_1464ca1c4)[lVar18 * 10];
    *piVar4 = iVar12;
    lVar18 = local_128[0];
  }
  else {
    lVar18 = (longlong)*(int *)(local_res18 + 0x3c);
    uVar11 = (&DAT_1464ca1b8)[lVar18 * 10];
    uVar6 = (&DAT_1464ca1bc)[lVar18 * 10];
    bVar2 = (byte)param_6 & 0x1f;
    uVar13 = *(uint *)(local_res18 + 0x60) >> bVar2;
    uVar16 = uVar11;
    if (uVar11 <= uVar13) {
      uVar16 = uVar13;
    }
    uVar10 = uVar6;
    if (uVar6 <= uVar13) {
      uVar10 = uVar13;
    }
    uVar13 = (uint)(CONCAT44(0 >> bVar2,(uVar16 - 1) + uVar11) / (ulonglong)uVar11);
    uVar6 = ((uVar10 - 1) + uVar6) / uVar6;
    uVar16 = uVar6;
    uVar11 = uVar13;
    if (*(int *)(local_res18 + 0x3c) - 0x1eU < 2) {
      uVar11 = 2;
      if (1 < uVar13) {
        uVar11 = uVar13;
      }
      uVar16 = 2;
      if (1 < uVar6) {
        uVar16 = uVar6;
      }
    }
    iVar17 = uVar16 * uVar11 * (&DAT_1464ca1c4)[lVar18 * 10];
    *param_8 = uVar11 * (&DAT_1464ca1c4)[lVar18 * 10];
    lVar18 = FMemory::Malloc(iVar17,0x10);
    iVar12 = *piVar4;
  }
  iVar1 = *(int *)(param_1 + 0x16040);
  local_118 = local_res18;
  iVar7 = iVar1 + 1;
  *(int *)(param_1 + 0x16040) = iVar7;
  local_108 = (int *)CONCAT44(iVar17,param_6);
  uStack_100 = (undefined4 *)CONCAT44(param_7,iVar12);
  plStack_110 = (longlong *)lVar18;
  if (*(int *)(param_1 + 0x16044) < iVar7) {
    TArray<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams,TInlineAllocator<16,FDefaultAllocator>_>
    ::ResizeGrow(param_1 + 0x15e38);
  }
  lVar15 = *(longlong *)(param_1 + 0x16038);
  if (*(longlong *)(param_1 + 0x16038) == 0) {
    lVar15 = param_1 + 0x15e38;
  }
  lVar19 = (longlong)iVar1 * 0x20;
  plVar9 = (longlong *)(lVar15 + lVar19);
  *plVar9 = local_118;
  plVar9[1] = (longlong)plStack_110;
  puVar8 = (undefined8 *)(lVar15 + 0x10 + lVar19);
  *puVar8 = local_108;
  puVar8[1] = uStack_100;
  *(int *)(param_1 + 0x16048) = *(int *)(param_1 + 0x16048) + iVar17;
  return lVar18;
}



// FUNCTION 141ea5670 FUN_141ea5670 body=471 status=ok
// SIG undefined FUN_141ea5670(void)

void FUN_141ea5670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 local_res10;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 *local_58 [2];
  longlong local_48 [4];
  longlong *local_28;
  int local_18;
  
  local_78 = &local_res10;
  local_68 = param_5;
  local_res10 = param_2;
  uStack_70 = param_4;
  uStack_60 = param_3;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_1415e13e0();
    if (cVar1 == '\0') {
      puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      puVar2 = puVar3 + 0xc;
      if (DAT_146ab6eb0 < puVar2) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
        puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar2 = puVar3 + 0xc;
      }
      DAT_146ab6e8c = DAT_146ab6e8c + 1;
      DAT_146ab6ea8 = puVar2;
      *DAT_146ab6e80 = puVar3;
      local_28 = (longlong *)0x0;
      local_18 = 0;
      DAT_146ab6e80 = puVar3 + 1;
      puVar2 = (undefined8 *)FUN_140438ef0(0x28,local_48);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_143ff7760;
        *(undefined4 *)(puVar2 + 1) = (undefined4)local_78;
        *(undefined4 *)((longlong)puVar2 + 0xc) = local_78._4_4_;
        *(undefined4 *)(puVar2 + 2) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_70._4_4_;
        puVar2[3] = local_68;
        puVar2[4] = uStack_60;
      }
      local_58[0] = &LAB_141e93cd0;
      puVar3[1] = 0;
      *puVar3 = &PTR_ExecuteAndDestruct_144eb5ab0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 2,local_58);
      if (local_18 != 0) {
        plVar4 = local_48;
        if (local_28 != (longlong *)0x0) {
          plVar4 = local_28;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (DAT_146ab6e8c != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
      }
      FUN_141ed93a0(&DAT_146ab6e78);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
      }
      FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
      return;
    }
  }
  <lambda_fbf316f14d9b4900820deb5fa4a25e3b>::operator()(&local_78);
  return;
}



// FUNCTION 141ea5850 FUN_141ea5850 body=51 status=ok
// SIG undefined FUN_141ea5850(void)

void FUN_141ea5850(longlong param_1)

{
  if ((DAT_146ab4900 != (code *)0x0) && (DAT_146ab053a != '\0')) {
    (*DAT_146ab4900)();
  }
                    /* WARNING: Could not recover jumptable at 0x000141ea587f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x15c38) + 0x20))();
  return;
}



// FUNCTION 141ea5890 FUN_141ea5890 body=192 status=ok
// SIG undefined FUN_141ea5890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ea5890(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  longlong local_38;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_b8);
  if ((DAT_146ab48f8 != (code *)0x0) && (DAT_146ab053a != '\0')) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(local_30 + lVar1) != '\0');
    (*DAT_146ab48f8)(0x824a,1);
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  (**(code **)(*(longlong *)(param_1 + 0x15c38) + 0x18))
            ((longlong *)(param_1 + 0x15c38),param_2,param_3);
  return;
}



// FUNCTION 141ea5950 FUN_141ea5950 body=504 status=ok
// SIG undefined FUN_141ea5950(void)

void FUN_141ea5950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 *local_58 [2];
  longlong local_48 [4];
  longlong *local_28;
  int local_18;
  
  local_88 = &local_res10;
  local_78 = &local_res20;
  uStack_70 = param_5;
  local_res10 = param_2;
  local_res20 = param_4;
  uStack_80 = param_3;
  local_68 = param_1;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_1415e13e0();
    if (cVar1 == '\0') {
      puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      puVar2 = puVar3 + 0xc;
      if (DAT_146ab6eb0 < puVar2) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
        puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar2 = puVar3 + 0xc;
      }
      DAT_146ab6e8c = DAT_146ab6e8c + 1;
      DAT_146ab6ea8 = puVar2;
      *DAT_146ab6e80 = puVar3;
      local_28 = (longlong *)0x0;
      local_18 = 0;
      DAT_146ab6e80 = puVar3 + 1;
      puVar2 = (undefined8 *)FUN_140438ef0(0x30,local_48);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_143f4d098;
        puVar2[1] = local_88;
        puVar2[2] = uStack_80;
        puVar2[3] = local_78;
        puVar2[4] = uStack_70;
        puVar2[5] = local_68;
      }
      local_58[0] = &LAB_141e93aa0;
      puVar3[1] = 0;
      *puVar3 = &PTR_ExecuteAndDestruct_144eb5ab0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 2,local_58);
      if (local_18 != 0) {
        plVar4 = local_48;
        if (local_28 != (longlong *)0x0) {
          plVar4 = local_28;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (DAT_146ab6e8c != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
      }
      FUN_141ed93a0(&DAT_146ab6e78);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
      }
      FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
      return;
    }
  }
  <lambda_d1d3e58297f02e7379cff1b521c6d1a4>::operator()(&local_88);
  return;
}



// FUNCTION 141ea5b50 FUN_141ea5b50 body=585 status=ok
// SIG undefined FUN_141ea5b50(void)

void FUN_141ea5b50(undefined8 param_1,longlong param_2,int *param_3,longlong *param_4,
                  undefined8 param_5)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong local_res10;
  undefined8 local_88;
  longlong *plStack_80;
  longlong *local_78;
  int *piStack_70;
  undefined8 local_68;
  undefined1 *local_58 [2];
  longlong local_48 [4];
  longlong *local_28;
  int local_18;
  
  local_res10 = param_2;
  if (param_2 == 0) {
    iVar7 = 0;
    *(undefined4 *)(param_4 + 1) = 0;
    iVar4 = 0;
    if (*(int *)((longlong)param_4 + 0xc) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_4);
      iVar4 = *(int *)((longlong)param_4 + 0xc);
      iVar7 = (int)param_4[1];
    }
    iVar6 = (param_3[3] - param_3[1]) * (param_3[2] - *param_3);
    iVar1 = iVar7 + iVar6;
    *(int *)(param_4 + 1) = iVar1;
    if (iVar4 < iVar1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_4);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*param_4 + (longlong)iVar7 * 4),0,(longlong)iVar6 << 2);
  }
  else {
    local_78 = &local_res10;
    local_68 = param_5;
    local_88 = param_1;
    plStack_80 = param_4;
    piStack_70 = param_3;
    if ((DAT_146ab6383 != '\0') && (cVar2 = FUN_1415e13e0(), cVar2 == '\0')) {
      puVar5 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      puVar3 = puVar5 + 0xc;
      if (DAT_146ab6eb0 < puVar3) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
        puVar5 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar3 = puVar5 + 0xc;
      }
      DAT_146ab6e8c = DAT_146ab6e8c + 1;
      DAT_146ab6ea8 = puVar3;
      *DAT_146ab6e80 = puVar5;
      local_28 = (longlong *)0x0;
      local_18 = 0;
      DAT_146ab6e80 = puVar5 + 1;
      puVar3 = (undefined8 *)FUN_140438ef0(0x30,local_48);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_143f4d098;
        puVar3[1] = local_88;
        puVar3[2] = plStack_80;
        puVar3[3] = local_78;
        puVar3[4] = piStack_70;
        puVar3[5] = local_68;
      }
      local_58[0] = &LAB_141e93af0;
      puVar5[1] = 0;
      *puVar5 = &PTR_ExecuteAndDestruct_144eb5ab0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar5 + 2,local_58);
      if (local_18 != 0) {
        plVar8 = local_48;
        if (local_28 != (longlong *)0x0) {
          plVar8 = local_28;
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
        }
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (DAT_146ab6e8c != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
      }
      FUN_141ed93a0(&DAT_146ab6e78);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
      }
      FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
      return;
    }
    FUN_141e90290(&local_88);
  }
  return;
}



// FUNCTION 141ea5da0 FUN_141ea5da0 body=493 status=ok
// SIG undefined FUN_141ea5da0(void)

void FUN_141ea5da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 local_res10;
  undefined8 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 *local_58 [2];
  longlong local_48 [4];
  longlong *local_28;
  int local_18;
  
  local_98 = &local_res10;
  puStack_90 = &stack0x00000038;
  local_88 = &stack0x00000028;
  puStack_80 = &stack0x00000030;
  local_res10 = param_2;
  local_78 = param_1;
  uStack_70 = param_3;
  local_68 = param_4;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_1415e13e0();
    if (cVar1 == '\0') {
      puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      puVar2 = puVar3 + 0xc;
      if (DAT_146ab6eb0 < puVar2) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
        puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar2 = puVar3 + 0xc;
      }
      DAT_146ab6e8c = DAT_146ab6e8c + 1;
      DAT_146ab6ea8 = puVar2;
      *DAT_146ab6e80 = puVar3;
      local_28 = (longlong *)0x0;
      local_18 = 0;
      DAT_146ab6e80 = puVar3 + 1;
      puVar2 = (undefined8 *)FUN_140438ef0(0x40,local_48);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_144213c30;
        puVar2[1] = local_98;
        puVar2[2] = puStack_90;
        puVar2[3] = local_88;
        puVar2[4] = puStack_80;
        *(undefined4 *)(puVar2 + 5) = (undefined4)local_78;
        *(undefined4 *)((longlong)puVar2 + 0x2c) = local_78._4_4_;
        *(undefined4 *)(puVar2 + 6) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)puVar2 + 0x34) = uStack_70._4_4_;
        puVar2[7] = local_68;
      }
      local_58[0] = &LAB_141e93a10;
      puVar3[1] = 0;
      *puVar3 = &PTR_ExecuteAndDestruct_144eb5ab0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 2,local_58);
      if (local_18 != 0) {
        plVar4 = local_48;
        if (local_28 != (longlong *)0x0) {
          plVar4 = local_28;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (DAT_146ab6e8c != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
      }
      FUN_141ed93a0(&DAT_146ab6e78);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
      }
      FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
      return;
    }
  }
  FUN_141e8fbb0(&local_98);
  return;
}



// FUNCTION 141ea5f90 FUN_141ea5f90 body=514 status=ok
// SIG undefined FUN_141ea5f90(void)

void FUN_141ea5f90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong local_res10;
  undefined1 *local_58 [2];
  longlong local_48 [4];
  longlong *local_28;
  int local_18;
  
  local_res10 = param_2;
  if ((DAT_146ab6383 != '\0') && (cVar2 = FUN_1415e13e0(), cVar2 == '\0')) {
    puVar4 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar4 + 0xc;
    if (DAT_146ab6eb0 < puVar3) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
      puVar4 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      puVar3 = puVar4 + 0xc;
    }
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    DAT_146ab6ea8 = puVar3;
    *DAT_146ab6e80 = puVar4;
    local_28 = (longlong *)0x0;
    local_18 = 0;
    DAT_146ab6e80 = puVar4 + 1;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_143f77b70;
      puVar3[1] = &local_res10;
    }
    local_58[0] = &LAB_141e93a20;
    puVar4[1] = 0;
    *puVar4 = &PTR_ExecuteAndDestruct_144eb5ab0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 2,local_58);
    if (local_18 != 0) {
      plVar5 = local_48;
      if (local_28 != (longlong *)0x0) {
        plVar5 = local_28;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (DAT_146ab6e8c != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
    }
    FUN_141ed93a0(&DAT_146ab6e78);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
    }
    FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
    return;
  }
  lVar1 = local_res10;
  if ((*(byte *)(local_res10 + 0x38) & 1) != 0) {
    FUN_141e6da70(*(undefined4 *)(local_res10 + 0x28));
    if ((DAT_146ab053c == 0) && ((*(byte *)(lVar1 + 0x38) & 2) == 0)) {
      TOpenGLBuffer<FOpenGLBaseIndexBuffer,34963,&CachedBindElementArrayBuffer>::LoadData
                (lVar1,*(undefined4 *)(lVar1 + 0x40),*(undefined4 *)(lVar1 + 0x3c),
                 *(undefined8 *)(lVar1 + 0x48));
      FMemory::Free(*(undefined8 *)(lVar1 + 0x48));
      *(uint *)(lVar1 + 0x38) = *(uint *)(lVar1 + 0x38) & 0xfffffff7;
    }
    else {
      (*DAT_146ab4330)(0x8893);
    }
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(longlong *)(lVar1 + 0x30) =
         *(longlong *)(lVar1 + 0x30) + (ulonglong)(~(*(uint *)(lVar1 + 0x38) >> 1) & 1);
    *(uint *)(lVar1 + 0x38) = *(uint *)(lVar1 + 0x38) & 0xfffffffe;
  }
  return;
}



// FUNCTION 141ea61a0 RHIUnlockStructuredBuffer body=119 status=ok
// SIG undefined RHIUnlockStructuredBuffer(void)

void FOpenGLDynamicRHI::RHIUnlockStructuredBuffer(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x38) & 1) != 0) {
    FUN_141e6da00(*(undefined4 *)(param_2 + 0x28));
    if ((DAT_146ab053c == 0) && ((*(byte *)(param_2 + 0x38) & 2) == 0)) {
      TOpenGLBuffer<FOpenGLBaseVertexBuffer,34962,&CachedBindArrayBuffer>::LoadData
                (param_2,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x3c),
                 *(undefined8 *)(param_2 + 0x48));
      FMemory::Free(*(undefined8 *)(param_2 + 0x48));
      *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffff7;
    }
    else {
      (*DAT_146ab4330)(0x8892);
    }
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(longlong *)(param_2 + 0x30) =
         *(longlong *)(param_2 + 0x30) + (ulonglong)(~(*(uint *)(param_2 + 0x38) >> 1) & 1);
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffe;
  }
  return;
}



// FUNCTION 141ea6220 RHIUnlockTexture2D body=53 status=ok
// SIG undefined RHIUnlockTexture2D(void)

void FOpenGLDynamicRHI::RHIUnlockTexture2D(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  TOpenGLTexture<FOpenGLBaseTexture2D>::Unlock(param_2,param_3,0);
  return;
}



// FUNCTION 141ea6260 RHIUnlockTexture2DArray body=66 status=ok
// SIG undefined RHIUnlockTexture2DArray(void)

void FOpenGLDynamicRHI::RHIUnlockTexture2DArray
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  TOpenGLTexture<FOpenGLBaseTexture2DArray>::Unlock(param_2,param_4,param_3);
  return;
}



// FUNCTION 141ea62b0 RHIUnlockTexture2D body=53 status=ok
// SIG undefined RHIUnlockTexture2D(void)

void FOpenGLDynamicRHI::RHIUnlockTexture2D(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  TOpenGLTexture<FOpenGLBaseTexture2DArray>::Unlock(param_2,param_3,0);
  return;
}



// FUNCTION 141ea62f0 RHIUnlockTextureCubeFace body=72 status=ok
// SIG undefined RHIUnlockTextureCubeFace(void)

void FOpenGLDynamicRHI::RHIUnlockTextureCubeFace
               (undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined4 param_5)

{
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  TOpenGLTexture<FOpenGLBaseTextureCube>::Unlock(param_2,param_5,param_3 + param_4 * 6);
  return;
}



// FUNCTION 141ea6340 FUN_141ea6340 body=1242 status=ok
// SIG undefined FUN_141ea6340(void)

void FUN_141ea6340(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  int param_6,undefined1 param_7)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined4 *_Dst;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  longlong local_res18;
  int local_res20 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 *local_a8 [2];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  
  uVar4 = 0;
  local_res18 = param_3;
  local_res20[0] = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ab3f88) && (_Init_thread_header(&DAT_146ab3f88), DAT_146ab3f88 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar6 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.RHICmdBufferWriteLocks");
    uVar7 = uVar4;
    if (plVar6 != (longlong *)0x0) {
      uVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
    }
    DAT_146ab3f80 = uVar7;
    _Init_thread_footer(&DAT_146ab3f88);
  }
  iVar8 = *(int *)(param_1 + 0x16040);
  iVar1 = *(int *)(DAT_146ab3f80 + 4);
  if (0 < iVar8) {
    lVar12 = *(longlong *)(param_1 + 0x16038);
    uVar7 = uVar4;
    lVar10 = lVar12;
    if (lVar12 == 0) {
      lVar10 = param_1 + 0x15e38;
    }
    do {
      iVar11 = (int)uVar7;
      if ((*(longlong *)(uVar4 + lVar10) == local_res18) &&
         (*(int *)(uVar4 + 0x10 + lVar10) == param_6)) {
        if (lVar12 == 0) {
          lVar12 = param_1 + 0x15e38;
        }
        _Dst = (undefined4 *)((longlong)iVar11 * 0x20 + lVar12);
        iVar11 = (iVar8 - iVar11) + -1;
        uVar16 = *_Dst;
        uVar17 = _Dst[1];
        uVar18 = _Dst[2];
        uVar19 = _Dst[3];
        if (0 < iVar11) {
          iVar11 = 1;
        }
        uVar13 = _Dst[4];
        iVar14 = _Dst[5];
        uVar15 = _Dst[6];
        uVar3 = _Dst[7];
        if (iVar11 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (_Dst,(void *)((longlong)(iVar8 - iVar11) * 0x20 + lVar12),(longlong)iVar11 << 5
                    );
          iVar8 = *(int *)(param_1 + 0x16040);
        }
        *(int *)(param_1 + 0x16040) = iVar8 + -1;
        uStack_d0 = (ulonglong)uVar3 << 0x20;
        *(int *)(param_1 + 0x16048) = *(int *)(param_1 + 0x16048) - iVar14;
        goto LAB_141ea6426;
      }
      uVar4 = uVar4 + 0x20;
      uVar7 = (ulonglong)(iVar11 + 1U);
    } while ((int)(iVar11 + 1U) < iVar8);
  }
  uVar3 = 1;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uStack_d0 = 0;
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0;
  uStack_d0._0_4_ = 0;
  uVar13 = (undefined4)local_d8;
  iVar14 = local_d8._4_4_;
  uVar15 = (undefined4)uStack_d0;
LAB_141ea6426:
  lVar12 = local_res18;
  if (((iVar1 < 1) || (uVar3 != 1)) || (DAT_146ab6383 == '\0')) {
    *(undefined4 *)(param_1 + 0x16048) = 0;
    if ((DAT_146ab6383 == '\0') || (cVar2 = FUN_1415e13e0(), cVar2 != '\0')) {
      iVar11 = param_6;
      iVar1 = param_5;
      iVar8 = local_res20[0];
      lVar12 = local_res18;
      if (DAT_146ab6383 != '\0') {
        IsInRenderingThread();
      }
      TOpenGLTexture<FOpenGLBaseTextureCube>::Unlock(lVar12,iVar11,iVar8 + iVar1 * 6);
    }
    else {
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      puVar5 = puVar9 + 0xc;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x70);
        puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        puVar5 = puVar9 + 0xc;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar9;
      *(undefined8 **)(param_2 + 8) = puVar9 + 1;
      local_78 = (longlong *)0x0;
      local_68 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x38,local_98);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_FUN_1442e7fc0;
        puVar5[1] = param_1;
        puVar5[2] = &local_res18;
        puVar5[3] = local_res20;
        puVar5[4] = &param_5;
        puVar5[5] = &param_6;
        puVar5[6] = &param_7;
      }
      local_a8[0] = &LAB_141e93a70;
      puVar9[1] = 0;
      *puVar9 = &PTR_ExecuteAndDestruct_144eb5ab0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar9 + 2,local_a8);
      if (local_68 != 0) {
        plVar6 = local_98;
        if (local_78 != (longlong *)0x0) {
          plVar6 = local_78;
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
        }
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (*(int *)(param_2 + 0x14) != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
      }
      FUN_141ed93a0(param_2);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(param_2);
      }
      FRHICommandListBase::WaitForTasks(param_2,1);
    }
  }
  else {
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    local_d8 = CONCAT44(param_5,local_res20[0]);
    puVar5 = puVar9 + 0xc;
    uStack_d0 = CONCAT44(CONCAT31(uStack_d0._5_3_,param_7),param_6);
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x70);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      puVar5 = puVar9 + 0xc;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x48,local_98);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      puVar5[2] = lVar12;
      *puVar5 = &PTR_FUN_144ebe6d8;
      puVar5[3] = local_d8;
      puVar5[4] = uStack_d0;
      *(undefined4 *)(puVar5 + 5) = uVar16;
      *(undefined4 *)((longlong)puVar5 + 0x2c) = uVar17;
      *(undefined4 *)(puVar5 + 6) = uVar18;
      *(undefined4 *)((longlong)puVar5 + 0x34) = uVar19;
      *(undefined4 *)(puVar5 + 7) = uVar13;
      *(int *)((longlong)puVar5 + 0x3c) = iVar14;
      *(undefined4 *)(puVar5 + 8) = uVar15;
      *(undefined4 *)((longlong)puVar5 + 0x44) = 1;
    }
    local_a8[0] = &LAB_141e93c50;
    puVar9[1] = 0;
    *puVar9 = &PTR_ExecuteAndDestruct_144eb5ab0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar9 + 2,local_a8);
    if (local_68 != 0) {
      plVar6 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar6 = local_78;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141ea6820 FUN_141ea6820 body=434 status=ok
// SIG undefined FUN_141ea6820(void)

void FUN_141ea6820(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *local_res10;
  code *local_58 [2];
  longlong local_48 [4];
  longlong *local_28;
  int local_18;
  
  local_res10 = param_2;
  if ((DAT_146ab6383 != '\0') && (cVar1 = FUN_1415e13e0(), cVar1 == '\0')) {
    puVar4 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
    puVar2 = puVar4 + 0xc;
    if (DAT_146ab6eb0 < puVar2) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
      puVar4 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      puVar2 = puVar4 + 0xc;
    }
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    DAT_146ab6ea8 = puVar2;
    *DAT_146ab6e80 = puVar4;
    local_28 = (longlong *)0x0;
    local_18 = 0;
    DAT_146ab6e80 = puVar4 + 1;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_143f77b70;
      puVar2[1] = &local_res10;
    }
    local_58[0] = FUN_141e93ce0;
    puVar4[1] = 0;
    *puVar4 = &PTR_ExecuteAndDestruct_144eb5ab0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 2,local_58);
    if (local_18 != 0) {
      plVar5 = local_48;
      if (local_28 != (longlong *)0x0) {
        plVar5 = local_28;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (DAT_146ab6e8c != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
    }
    FUN_141ed93a0(&DAT_146ab6e78);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
    }
    FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
    return;
  }
  uVar3 = (**(code **)(*local_res10 + 8))(local_res10);
  TOpenGLTexture<FOpenGLBaseTexture2D>::Unlock(uVar3,0,0);
  return;
}



// FUNCTION 141ea69e0 FUN_141ea69e0 body=402 status=ok
// SIG undefined FUN_141ea69e0(void)

void FUN_141ea69e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  int param_5,void *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  void *_Dst;
  undefined8 *puVar5;
  size_t _Size;
  int iVar6;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  uVar2 = *param_4;
  uVar3 = param_4[1];
  _Dst = (void *)0x0;
  uVar1 = param_4[2];
  iVar6 = (int)((ulonglong)uVar1 >> 0x20);
  if ((DAT_146ab6383 != '\0') && (cVar4 = FUN_1415e13e0(), cVar4 == '\0')) {
    _Size = (size_t)(iVar6 * param_5);
    _Dst = (void *)FMemory::Malloc(_Size,0x10);
    _guard_xfg_dispatch_icall_nop(_Dst,param_6,_Size);
  }
  uStack_a0 = (undefined4)uVar3;
  uStack_9c = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (_Dst != (void *)0x0) {
    param_6 = _Dst;
  }
  local_48 = 0;
  local_38 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x48,local_68);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_144ebe6d8;
    puVar5[1] = param_2;
    puVar5[2] = param_1;
    puVar5[3] = CONCAT44(param_3,param_5);
    puVar5[4] = uVar2;
    *(undefined4 *)(puVar5 + 5) = uStack_a0;
    *(undefined4 *)((longlong)puVar5 + 0x2c) = uStack_9c;
    *(int *)(puVar5 + 6) = (int)uVar1;
    *(int *)((longlong)puVar5 + 0x34) = iVar6;
    puVar5[7] = param_6;
    puVar5[8] = _Dst;
  }
  local_78[0] = &LAB_141e93970;
  FUN_141eb4140(local_78,0);
  return;
}



// FUNCTION 141ea6b80 RHIUpdateTexture3D body=515 status=ok
// SIG undefined RHIUpdateTexture3D(void)

void FOpenGLDynamicRHI::RHIUpdateTexture3D
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 *param_4,
               undefined8 param_5,int param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (DAT_146ab6383 != '\0') {
    IsInRenderingThread();
  }
  lVar1 = FUN_141e711c0(param_1,1);
  iVar3 = DAT_1464c97fc + -1;
  if ((*(int *)(*(longlong *)(lVar1 + 8) + 0x10 + (longlong)iVar3 * 0x28) !=
       *(int *)(param_2 + 0x84)) ||
     (*(int *)(*(longlong *)(lVar1 + 8) + 0x14 + (longlong)iVar3 * 0x28) != *(int *)(param_2 + 0x80)
     )) {
    FUN_141e6dbc0(param_1,lVar1,iVar3,*(int *)(param_2 + 0x84),*(int *)(param_2 + 0x80),0,
                  *(undefined4 *)(param_2 + 0x34));
  }
  if (*(int *)(lVar1 + 0x428) != 0) {
    (*DAT_146ab42e8)(0x88ec,0);
    *(undefined4 *)(lVar1 + 0x428) = 0;
  }
  lVar1 = (longlong)*(int *)(param_2 + 0x3c);
  lVar2 = lVar1 * 0x1c;
  (*DAT_146ab40d0)(0xcf5,1);
  if (*(char *)(&DAT_146ab3648 + lVar1 * 0xe) == '\0') {
    (*DAT_146ab40d0)(0xcf2,(ulonglong)(uint)param_4[6] /
                           (ulonglong)(uint)(&DAT_1464ca1b8)[lVar1 * 10]);
    (*DAT_146ab40d0)(0x806e,(ulonglong)(uint)param_4[7] /
                            (ulonglong)(uint)(&DAT_1464ca1bc)[lVar1 * 10]);
    (*DAT_146ab4218)(*(undefined4 *)(param_2 + 0x84),param_3,*param_4,param_4[1],param_4[2],
                     param_4[6],param_4[7],param_4[8],
                     *(undefined4 *)((longlong)&DAT_146ab3640 + lVar2),
                     *(undefined4 *)((longlong)&DAT_146ab3640 + lVar2 + 4),param_7);
  }
  else {
    (*DAT_146ab4250)(*(undefined4 *)(param_2 + 0x84),param_3,*param_4,param_4[1],param_4[2],
                     param_4[6],param_4[7],param_4[8],
                     *(undefined4 *)
                      ((longlong)&DAT_146ab3630 +
                      (ulonglong)(*(uint *)(param_2 + 0x40) >> 4 & 1) * 4 + lVar2),
                     param_4[8] * param_6,param_7);
  }
  (*DAT_146ab40d0)(0xcf5,4);
  (*DAT_146ab40d0)(0x806e,0);
                    /* WARNING: Could not recover jumptable at 0x000141ea6d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_146ab40d0)(0xcf2,0);
  return;
}



// FUNCTION 141ea6d90 RHIUpdateTextureReference body=102 status=ok
// SIG undefined RHIUpdateTextureReference(void)

void FOpenGLDynamicRHI::RHIUpdateTextureReference
               (undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    TRefCountPtr<FRHITexture>::operator=(param_2 + 0x60,param_3);
    if (param_3 == (longlong *)0x0) {
      *(undefined8 *)(param_2 + 0x68) = 0;
      return;
    }
    (**(code **)(*param_3 + 0x48))(param_3);
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    uVar1 = (**(code **)(*param_3 + 0x48))(param_3);
    *(undefined8 *)(param_2 + 0x68) = uVar1;
  }
  return;
}



// FUNCTION 141ea6e00 FUN_141ea6e00 body=2699 status=ok
// SIG undefined FUN_141ea6e00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_141ea6e00(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  longlong *param_5,longlong param_6)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  undefined1 auVar3 [12];
  float fVar4;
  undefined1 *puVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 (*pauVar18) [16];
  uint uVar19;
  float *pfVar20;
  byte bVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  int iVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar29;
  float fVar30;
  undefined1 in_XMM1 [16];
  undefined1 auVar28 [16];
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  undefined1 auStack_178 [32];
  int *local_158;
  ulonglong local_150;
  undefined1 (*local_148) [16];
  undefined4 local_140;
  int local_138;
  undefined4 local_130;
  char local_128;
  char local_127;
  char local_126;
  int local_124;
  int local_120;
  int local_11c;
  float local_118 [2];
  ulonglong local_110;
  ulonglong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_f8 = param_6;
  local_110 = param_1;
  local_100 = param_2;
  lVar12 = (**(code **)(*param_3 + 8))(param_3);
  if (lVar12 == 0) {
    return;
  }
  local_108 = lVar12 + 0x70;
  bVar21 = 0;
  uVar16 = 0;
  local_e8 = (undefined4 *)
             ((longlong)&DAT_146ab3630 + (longlong)*(int *)((longlong)param_3 + 0x3c) * 0x1c);
  bVar25 = false;
  iVar11 = 0;
  local_124 = 0;
  local_120 = 0;
  local_127 = '\0';
  local_128 = '\0';
  local_126 = '\0';
  switch(*(int *)((longlong)param_3 + 0x3c)) {
  case 1:
  case 9:
  case 10:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x15:
  case 0x16:
  case 0x1a:
    local_127 = '\x01';
    goto LAB_141ea6f0b;
  case 5:
  case 6:
  case 7:
  case 8:
  case 0x17:
  case 0x1e:
  case 0x1f:
  case 0x29:
  case 0x2a:
  case 0x2b:
    bVar25 = true;
    break;
  case 0xb:
    bVar21 = 1;
    local_126 = '\x01';
  case 0xc:
  case 0x14:
    local_128 = '\x01';
    fVar26 = 4.66716e-41;
    if (bVar21 == 0) {
      fVar26 = 5.05813e-41;
    }
    goto LAB_141ea6f13;
  }
  if (!bVar25) {
LAB_141ea6f0b:
    bVar21 = 0;
    fVar26 = 5.05364e-41;
LAB_141ea6f13:
    bVar25 = *(int *)(lVar12 + 0x8c) != 0x8ce0;
    local_11c = 0;
    if (bVar25) {
      puVar22 = (ulonglong *)0x0;
      local_158 = (int *)0x0;
      local_150 = local_108;
    }
    else {
      local_158 = &local_11c;
      local_150 = 0;
      puVar22 = &local_108;
    }
    local_118[0] = fVar26;
    uVar8 = FUN_141e9b3b0(local_110,!bVar25,puVar22,0);
    local_110 = CONCAT44(local_110._4_4_,uVar8);
    if (1 < *(uint *)(param_3 + 7)) {
      (*DAT_146ab4718)(1,&local_124);
      (*DAT_146ab4708)(0x8d40,local_124);
      (*DAT_146ab46e8)(1,&local_120);
      (*DAT_146ab46d8)(0x8d41,local_120);
      (*DAT_146ab46f0)(0x8d41,*local_e8,*(undefined4 *)(lVar12 + 0x60),*(undefined4 *)(lVar12 + 100)
                      );
      (*DAT_146ab46d8)(0x8d41,0);
      (*DAT_146ab4748)(0x8d40,fVar26,0x8d41,local_120);
      (*DAT_146ab4708)(0x8ca8,local_110 & 0xffffffff);
      if (local_128 == '\0') {
        local_138 = 0x4000;
      }
      else {
        local_138 = (uint)bVar21 * 0x400 + 0x100;
      }
      local_140 = *(undefined4 *)(lVar12 + 100);
      local_130 = 0x2600;
      local_148 = (undefined1 (*) [16])CONCAT44(local_148._4_4_,*(undefined4 *)(lVar12 + 0x60));
      local_150 = local_150 & 0xffffffff00000000;
      local_158 = (int *)((ulonglong)local_158 & 0xffffffff00000000);
      (*DAT_146ab4760)(0,0);
      local_110 = CONCAT44(local_110._4_4_,local_124);
    }
    local_11c = param_4[3] - param_4[1];
    iVar24 = param_4[2] - *param_4;
    iVar10 = *(int *)((longlong)param_5 + 0xc);
    uVar19 = local_11c * iVar24;
    *(undefined4 *)(param_5 + 1) = 0;
    iVar2 = uVar19 * 4;
    iVar17 = iVar11;
    if (iVar10 != iVar2) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_5,iVar2);
      iVar10 = *(int *)((longlong)param_5 + 0xc);
      iVar17 = (int)param_5[1];
    }
    *(int *)(param_5 + 1) = iVar17 + iVar2;
    if (iVar10 < iVar17 + iVar2) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_5,iVar17);
    }
    pauVar18 = (undefined1 (*) [16])((longlong)iVar17 + *param_5);
    iVar10 = (int)local_110;
    (*DAT_146ab4708)(0x8ca8,local_110 & 0xffffffff);
    if (((local_128 != '\0') || (local_126 != '\0')) || (fVar26 = 1.44194e-42, iVar10 != 0)) {
      fVar26 = local_118[0];
    }
    (*DAT_146ab40f0)(fVar26);
    (*DAT_146ab40d0)(0xd05,1);
    if (local_128 == '\0') {
      if (local_127 == '\0') {
        local_150._0_4_ = 0x8367;
        local_158._0_4_ = 0x80e1;
        local_148 = pauVar18;
        (*DAT_146ab40f8)(*param_4,param_4[1],iVar24,local_11c);
      }
      else {
        local_127 = *(char *)(local_f8 + 8);
        pauVar13 = (undefined1 (*) [16])FMemory::Malloc((longlong)(int)(uVar19 * 0x10),0);
        iVar11 = local_11c;
        local_150._0_4_ = 0x1406;
        local_158._0_4_ = 0x80e1;
        local_148 = pauVar13;
        (*DAT_146ab40f8)(*param_4,param_4[1],iVar24,local_11c);
        iVar10 = (*DAT_146ab4050)();
        if (iVar10 != 0) {
          local_150._0_4_ = 0x1406;
          local_158._0_4_ = 0x1908;
          local_148 = pauVar13;
          (*DAT_146ab40f8)(*param_4,param_4[1],iVar24,iVar11);
          iVar11 = (*DAT_146ab4050)();
          if (iVar11 == 0) {
            for (pauVar14 = pauVar13;
                pauVar14 != (undefined1 (*) [16])(*pauVar13 + (longlong)iVar2 * 4);
                pauVar14 = pauVar14 + 1) {
              uVar8 = *(undefined4 *)(*pauVar14 + 8);
              *(undefined4 *)(*pauVar14 + 8) = *(undefined4 *)*pauVar14;
              *(undefined4 *)*pauVar14 = uVar8;
            }
          }
        }
        cVar6 = local_127;
        local_e8 = (undefined4 *)0x0;
        uStack_e0 = 0;
        local_f8 = 0x3f8000003f800000;
        uStack_f0 = 0x3f8000003f800000;
        pauVar14 = pauVar13;
        if (3 < iVar2) {
          uVar19 = 2;
          do {
            fVar26 = *(float *)*pauVar14;
            fVar38 = *(float *)(*pauVar14 + 4);
            uVar16 = uVar16 + 4;
            fVar27 = fVar26;
            if ((float)local_e8 <= fVar26) {
              fVar27 = (float)local_e8;
            }
            if (fVar26 <= (float)local_f8) {
              fVar26 = (float)local_f8;
            }
                    /* WARNING: Ignoring partial resolution of indirect */
            local_e8._0_4_ = fVar27;
                    /* WARNING: Ignoring partial resolution of indirect */
            local_f8._0_4_ = fVar26;
            fVar27 = *(float *)(*pauVar14 + 8);
            uVar23 = (ulonglong)(uVar19 - 1 & 3);
            fVar26 = *(float *)((longlong)&local_e8 + uVar23 * 4);
            fVar29 = fVar38;
            if (fVar26 <= fVar38) {
              fVar29 = fVar26;
            }
            fVar26 = *(float *)((longlong)&local_f8 + uVar23 * 4);
            if (fVar38 <= fVar26) {
              fVar38 = fVar26;
            }
            *(float *)((longlong)&local_e8 + uVar23 * 4) = fVar29;
            *(float *)((longlong)&local_f8 + uVar23 * 4) = fVar38;
            fVar38 = *(float *)(*pauVar14 + 0xc);
            uVar23 = (ulonglong)(uVar19 & 3);
            pauVar14 = pauVar14 + 1;
            fVar26 = *(float *)((longlong)&local_e8 + uVar23 * 4);
            fVar29 = fVar27;
            if (fVar26 <= fVar27) {
              fVar29 = fVar26;
            }
            fVar26 = *(float *)((longlong)&local_f8 + uVar23 * 4);
            if (fVar27 <= fVar26) {
              fVar27 = fVar26;
            }
            *(float *)((longlong)&local_e8 + uVar23 * 4) = fVar29;
            *(float *)((longlong)&local_f8 + uVar23 * 4) = fVar27;
            uVar23 = (ulonglong)(uVar19 + 1 & 3);
            uVar19 = uVar19 + 4;
            fVar26 = *(float *)((longlong)&local_e8 + uVar23 * 4);
            fVar27 = fVar38;
            if (fVar26 <= fVar38) {
              fVar27 = fVar26;
            }
            fVar26 = *(float *)((longlong)&local_f8 + uVar23 * 4);
            if (fVar38 <= fVar26) {
              fVar38 = fVar26;
            }
            *(float *)((longlong)&local_e8 + uVar23 * 4) = fVar27;
            *(float *)((longlong)&local_f8 + uVar23 * 4) = fVar38;
          } while ((int)uVar16 < iVar2 + -3);
        }
        while ((int)uVar16 < iVar2) {
          fVar38 = *(float *)*pauVar14;
          uVar23 = (ulonglong)(uVar16 & 3);
          uVar16 = uVar16 + 1;
          fVar26 = *(float *)((longlong)&local_e8 + uVar23 * 4);
          fVar27 = fVar38;
          if (fVar26 <= fVar38) {
            fVar27 = fVar26;
          }
          fVar26 = *(float *)((longlong)&local_f8 + uVar23 * 4);
          if (fVar38 <= fVar26) {
            fVar38 = fVar26;
          }
          *(float *)((longlong)&local_e8 + uVar23 * 4) = fVar27;
          *(float *)((longlong)&local_f8 + uVar23 * 4) = fVar38;
          pauVar14 = (undefined1 (*) [16])(*pauVar14 + 4);
        }
        fVar26 = (float)local_e8;
        local_f8._4_4_ = (float)((ulonglong)local_f8 >> 0x20);
        fVar30 = (float)local_f8 - (float)local_e8;
        local_e8._4_4_ = (float)((ulonglong)local_e8 >> 0x20);
        fVar38 = local_e8._4_4_;
        fVar31 = local_f8._4_4_ - local_e8._4_4_;
        fVar27 = (float)uStack_e0;
        uStack_f0._4_4_ = (float)((ulonglong)uStack_f0 >> 0x20);
        fVar32 = (float)uStack_f0 - (float)uStack_e0;
        uStack_e0._4_4_ = (float)((ulonglong)uStack_e0 >> 0x20);
        fVar29 = uStack_e0._4_4_;
        uVar16 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
        fVar34 = uStack_f0._4_4_ - uStack_e0._4_4_;
        if (0 < (int)uVar16) {
          pfVar20 = (float *)(*pauVar13 + 4);
          uVar23 = (ulonglong)uVar16;
          do {
            local_f8 = CONCAT44((*pfVar20 - fVar38) * (1.0 / fVar31),
                                (pfVar20[1] - fVar27) * (1.0 / fVar32));
            uStack_f0 = CONCAT44((pfVar20[2] - fVar29) * (1.0 / fVar34),
                                 (pfVar20[-1] - fVar26) * (1.0 / fVar30));
            FLinearColor::ToFColor(&local_f8,local_118,cVar6);
            pfVar20 = pfVar20 + 4;
            *(float *)*pauVar18 = local_118[0];
            pauVar18 = (undefined1 (*) [16])(*pauVar18 + 4);
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
        FMemory::Free(pauVar13);
      }
    }
    else {
      pauVar13 = (undefined1 (*) [16])FMemory::Malloc((longlong)iVar2,0);
      local_150._0_4_ = 0x1406;
      local_158._0_4_ = 0x1902;
      local_148 = pauVar13;
      (*DAT_146ab40f8)(*param_4,param_4[1],iVar24,local_11c);
      auVar28._0_12_ = ZEXT812(0x7f7fffff);
      auVar28._12_4_ = 0;
      fVar26 = auVar28._0_4_;
      auVar33._0_12_ = ZEXT812(0x800000);
      fVar38 = 1.1754944e-38;
      auVar33._12_4_ = 0;
      if (0 < (int)uVar19) {
        pauVar14 = pauVar13;
        uVar15 = uVar16;
        if (7 < uVar19) {
          uVar9 = uVar19 & 0x80000007;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
          }
          auVar28 = _DAT_144ebe780;
          auVar33 = _DAT_144ebe790;
          auVar35 = _DAT_144ebe790;
          auVar36 = _DAT_144ebe780;
          do {
            uVar15 = uVar15 + 8;
            auVar33 = minps(auVar33,*pauVar14);
            auVar28 = maxps(auVar28,*pauVar14);
            pauVar1 = pauVar14 + 1;
            pauVar14 = pauVar14 + 2;
            auVar35 = minps(auVar35,*pauVar1);
            auVar36 = maxps(auVar36,*pauVar1);
          } while ((int)uVar15 < (int)(uVar19 - uVar9));
          in_XMM1 = maxps(auVar28,auVar36);
          auVar28 = minps(auVar33,auVar35);
          auVar36._8_8_ = in_XMM1._8_8_;
          auVar36._0_8_ = in_XMM1._8_8_;
          auVar33 = maxps(auVar36,in_XMM1);
          auVar35._8_8_ = auVar28._8_8_;
          auVar35._0_8_ = auVar28._8_8_;
          auVar28 = minps(auVar35,auVar28);
          if (auVar33._0_4_ <= auVar33._4_4_) {
            auVar33._0_4_ = auVar33._4_4_;
          }
          if (auVar28._4_4_ <= auVar28._0_4_) {
            auVar28._0_4_ = auVar28._4_4_;
          }
        }
        fVar26 = auVar28._0_4_;
        fVar38 = auVar33._0_4_;
        if ((int)uVar15 < (int)uVar19) {
          if (3 < (int)(uVar19 - uVar15)) {
            uVar9 = ((uVar19 - uVar15) - 4 >> 2) + 1;
            uVar23 = (ulonglong)uVar9;
            uVar15 = uVar15 + uVar9 * 4;
            do {
              fVar26 = *(float *)*pauVar14;
              fVar38 = *(float *)(*pauVar14 + 8);
              fVar27 = fVar26;
              if (auVar28._0_4_ <= fVar26) {
                fVar27 = auVar28._0_4_;
              }
              if (fVar26 <= auVar33._0_4_) {
                fVar26 = auVar33._0_4_;
              }
              if (*(float *)(*pauVar14 + 4) <= fVar27) {
                fVar27 = *(float *)(*pauVar14 + 4);
              }
              if (fVar26 <= *(float *)(*pauVar14 + 4)) {
                fVar26 = *(float *)(*pauVar14 + 4);
              }
              if (fVar38 <= fVar27) {
                fVar27 = fVar38;
              }
              if (fVar26 <= fVar38) {
                fVar26 = fVar38;
              }
              if (*(float *)(*pauVar14 + 0xc) <= fVar27) {
                fVar27 = *(float *)(*pauVar14 + 0xc);
              }
              if (fVar26 <= *(float *)(*pauVar14 + 0xc)) {
                fVar26 = *(float *)(*pauVar14 + 0xc);
              }
              pauVar14 = pauVar14 + 1;
              auVar28 = ZEXT416((uint)fVar27);
              auVar33 = ZEXT416((uint)fVar26);
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
          fVar26 = auVar28._0_4_;
          fVar38 = auVar33._0_4_;
          if ((int)uVar15 < (int)uVar19) {
            lVar12 = (longlong)(int)(uVar19 - uVar15);
            do {
              fVar26 = *(float *)*pauVar14;
              pauVar14 = (undefined1 (*) [16])(*pauVar14 + 4);
              fVar38 = fVar26;
              if (fVar26 <= auVar33._0_4_) {
                fVar38 = auVar33._0_4_;
              }
              auVar3._4_8_ = 0;
              auVar3._0_4_ = fVar38;
              in_XMM1._12_4_ = 0;
              in_XMM1._0_12_ = auVar3;
              if (auVar28._0_4_ <= fVar26) {
                fVar26 = auVar28._0_4_;
              }
              auVar33._12_4_ = 0;
              auVar33._0_12_ = auVar3;
              auVar28 = ZEXT416((uint)fVar26);
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
        }
      }
      if ((fVar26 < 0.0) || (1.0 < fVar38)) {
        fVar38 = fVar38 - fVar26;
        auVar37._4_4_ = fVar38;
        auVar37._0_4_ = fVar38;
        auVar37._8_4_ = fVar38;
        auVar37._12_4_ = fVar38;
        if (0 < (int)uVar19) {
          pauVar14 = pauVar13;
          if (0xf < uVar19) {
            uVar15 = uVar19 & 0x8000000f;
            if ((int)uVar15 < 0) {
              uVar15 = (uVar15 - 1 | 0xfffffff0) + 1;
            }
            auVar28 = rcpps(in_XMM1,auVar37);
            fVar27 = auVar28._0_4_;
            fVar29 = auVar28._4_4_;
            fVar30 = auVar28._8_4_;
            fVar31 = auVar28._12_4_;
            fVar27 = (fVar27 + fVar27) - fVar27 * fVar27 * fVar38;
            fVar29 = (fVar29 + fVar29) - fVar29 * fVar29 * fVar38;
            fVar30 = (fVar30 + fVar30) - fVar30 * fVar30 * fVar38;
            fVar31 = (fVar31 + fVar31) - fVar31 * fVar31 * fVar38;
            do {
              fVar32 = *(float *)(*pauVar14 + 4);
              fVar34 = *(float *)(*pauVar14 + 8);
              fVar4 = *(float *)(*pauVar14 + 0xc);
              uVar16 = uVar16 + 0x10;
              *(float *)*pauVar14 = (*(float *)*pauVar14 - fVar26) * fVar27;
              *(float *)(*pauVar14 + 4) = (fVar32 - fVar26) * fVar29;
              *(float *)(*pauVar14 + 8) = (fVar34 - fVar26) * fVar30;
              *(float *)(*pauVar14 + 0xc) = (fVar4 - fVar26) * fVar31;
              fVar32 = *(float *)(pauVar14[1] + 4);
              fVar34 = *(float *)(pauVar14[1] + 8);
              fVar4 = *(float *)(pauVar14[1] + 0xc);
              *(float *)pauVar14[1] = (*(float *)pauVar14[1] - fVar26) * fVar27;
              *(float *)(pauVar14[1] + 4) = (fVar32 - fVar26) * fVar29;
              *(float *)(pauVar14[1] + 8) = (fVar34 - fVar26) * fVar30;
              *(float *)(pauVar14[1] + 0xc) = (fVar4 - fVar26) * fVar31;
              fVar32 = *(float *)(pauVar14[2] + 4);
              fVar34 = *(float *)(pauVar14[2] + 8);
              fVar4 = *(float *)(pauVar14[2] + 0xc);
              *(float *)pauVar14[2] = (*(float *)pauVar14[2] - fVar26) * fVar27;
              *(float *)(pauVar14[2] + 4) = (fVar32 - fVar26) * fVar29;
              *(float *)(pauVar14[2] + 8) = (fVar34 - fVar26) * fVar30;
              *(float *)(pauVar14[2] + 0xc) = (fVar4 - fVar26) * fVar31;
              fVar32 = *(float *)(pauVar14[3] + 4);
              fVar34 = *(float *)(pauVar14[3] + 8);
              fVar4 = *(float *)(pauVar14[3] + 0xc);
              *(float *)pauVar14[3] = (*(float *)pauVar14[3] - fVar26) * fVar27;
              *(float *)(pauVar14[3] + 4) = (fVar32 - fVar26) * fVar29;
              *(float *)(pauVar14[3] + 8) = (fVar34 - fVar26) * fVar30;
              *(float *)(pauVar14[3] + 0xc) = (fVar4 - fVar26) * fVar31;
              pauVar14 = pauVar14 + 4;
            } while ((int)uVar16 < (int)(uVar19 - uVar15));
          }
          if ((int)uVar16 < (int)uVar19) {
            if (3 < (int)(uVar19 - uVar16)) {
              fVar27 = 1.0 / fVar38;
              uVar15 = ((uVar19 - uVar16) - 4 >> 2) + 1;
              uVar23 = (ulonglong)uVar15;
              uVar16 = uVar16 + uVar15 * 4;
              do {
                fVar29 = *(float *)(*pauVar14 + 4);
                fVar30 = *(float *)(*pauVar14 + 8);
                fVar31 = *(float *)(*pauVar14 + 0xc);
                *(float *)*pauVar14 = (*(float *)*pauVar14 - fVar26) * fVar27;
                *(float *)(*pauVar14 + 4) = (fVar29 - fVar26) * fVar27;
                *(float *)(*pauVar14 + 8) = (fVar30 - fVar26) * fVar27;
                *(float *)(*pauVar14 + 0xc) = (fVar31 - fVar26) * fVar27;
                pauVar14 = pauVar14 + 1;
                uVar23 = uVar23 - 1;
              } while (uVar23 != 0);
            }
            if ((int)uVar16 < (int)uVar19) {
              lVar12 = (longlong)(int)(uVar19 - uVar16);
              do {
                *(float *)*pauVar14 = (*(float *)*pauVar14 - fVar26) * (1.0 / fVar38);
                pauVar14 = (undefined1 (*) [16])(*pauVar14 + 4);
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
            }
          }
        }
      }
      pauVar14 = pauVar13;
      if (3 < (int)uVar19) {
        uVar16 = (uVar19 - 4 >> 2) + 1;
        uVar23 = (ulonglong)uVar16;
        iVar11 = uVar16 * 4;
        do {
          uVar7 = (undefined1)(int)(*(float *)*pauVar14 * 255.0);
          (*pauVar18)[0] = uVar7;
          (*pauVar18)[1] = uVar7;
          (*pauVar18)[2] = uVar7;
          (*pauVar18)[3] = 0xff;
          uVar7 = (undefined1)(int)(*(float *)(*pauVar14 + 4) * 255.0);
          (*pauVar18)[4] = uVar7;
          (*pauVar18)[5] = uVar7;
          (*pauVar18)[6] = uVar7;
          (*pauVar18)[7] = 0xff;
          uVar7 = (undefined1)(int)(*(float *)(*pauVar14 + 8) * 255.0);
          (*pauVar18)[8] = uVar7;
          (*pauVar18)[9] = uVar7;
          (*pauVar18)[10] = uVar7;
          (*pauVar18)[0xb] = 0xff;
          puVar5 = *pauVar14;
          pauVar14 = pauVar14 + 1;
          uVar7 = (undefined1)(int)(*(float *)(puVar5 + 0xc) * 255.0);
          (*pauVar18)[0xc] = uVar7;
          (*pauVar18)[0xd] = uVar7;
          (*pauVar18)[0xe] = uVar7;
          (*pauVar18)[0xf] = 0xff;
          pauVar18 = pauVar18 + 1;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
      if (iVar11 < (int)uVar19) {
        uVar23 = (ulonglong)(uVar19 - iVar11);
        do {
          puVar5 = *pauVar14;
          pauVar14 = (undefined1 (*) [16])(*pauVar14 + 4);
          uVar7 = (undefined1)(int)(*(float *)puVar5 * 255.0);
          (*pauVar18)[0] = uVar7;
          (*pauVar18)[1] = uVar7;
          (*pauVar18)[2] = uVar7;
          (*pauVar18)[3] = 0xff;
          uVar23 = uVar23 - 1;
          pauVar18 = (undefined1 (*) [16])(*pauVar18 + 4);
        } while (uVar23 != 0);
      }
      FMemory::Free(pauVar13);
    }
    (*DAT_146ab40d0)(0xd05,4);
    if (local_124 != 0) {
      (*DAT_146ab4708)(0x8d40,0);
      (*DAT_146ab4710)(1,&local_124);
    }
    if (local_120 != 0) {
      (*DAT_146ab46e0)(1,&local_120);
    }
    *(undefined4 *)(local_100 + 0x188) = 0xffffffff;
  }
                    /* WARNING: Read-only address (ram,0x000144ebe780) is written */
                    /* WARNING: Read-only address (ram,0x000144ebe790) is written */
  return;
}



// FUNCTION 141ea78d0 Rehash body=535 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FOpenGLUniformName,__int64>,TDefaultMapHashableKeyFuncs<FOpenGLUniformName,__int64,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_141ea79ff;
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
LAB_141ea79ff:
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
        uVar5 = FCrc::MemCrc32(lVar6,10);
        uVar5 = (int)*plVar2 - 1U & uVar5;
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



// FUNCTION 141ea7af0 Rehash body=538 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FSamplerPair,unsigned___int64>,TDefaultMapHashableKeyFuncs<FSamplerPair,unsigned___int64,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
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
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar5) goto LAB_141ea7c2f;
        uVar9 = puVar13[lVar6 + 1];
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
LAB_141ea7c2f:
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
        lVar6 = *param_1 + (longlong)iStack_1c * 0x18;
        uVar4 = *(undefined8 *)(*param_1 + (longlong)iStack_1c * 0x18);
        uVar9 = ((int)((ulonglong)uVar4 >> 0x20) << 0x12 ^ (uint)uVar4) & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x14) = uVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x10) =
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



// FUNCTION 141ea7d10 Rehash body=541 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FSamplerStateInitializerRHI,FOpenGLSamplerState_*>,TDefaultMapHashableKeyFuncs<FSamplerStateInitializerRHI,FOpenGLSamplerState_*,0>,FDefaultSetAllocator>
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
      local_68 = 0;
      iStack_50 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141ea7e3f;
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
LAB_141ea7e3f:
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
        lVar6 = (longlong)iStack_2c * 0x30 + *param_1;
        uVar5 = FCrc::MemCrc_DEPRECATED(lVar6,DAT_146ab3ea4,0);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x2c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x28) =
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



// FUNCTION 141ea7f30 Rehash body=534 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<TArray<char,FDefaultAllocator>,int>,TDefaultMapHashableKeyFuncs<TArray<char,FDefaultAllocator>,int,0>,FDefaultSetAllocator>
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
  undefined8 *puVar10;
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
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      local_68 = 0;
      iStack_50 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141ea805f;
        uVar5 = puVar13[lVar6 + 1];
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
LAB_141ea805f:
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
        puVar10 = (undefined8 *)((longlong)iStack_2c * 0x20 + *param_1);
        uVar5 = FCrc::MemCrc32(*puVar10,*(undefined4 *)(puVar10 + 1),0);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)((longlong)puVar10 + 0x1c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar10 + 3) =
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



// FUNCTION 141ea8150 Rehash body=533 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FOpenGLCompiledShaderKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,unsigned_int,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
        if (bVar4) goto LAB_141ea828f;
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
LAB_141ea828f:
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
        puVar12 = (uint *)(*param_1 + (longlong)iStack_1c * 0x18);
        uVar8 = (puVar12[2] ^ puVar12[1] ^ *puVar12) & (int)*plVar2 - 1U;
        puVar12[5] = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        puVar12[4] = *(uint *)((longlong)plVar6 +
                              ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
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



// FUNCTION 141ea8370 Rehash body=537 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_141ea849f;
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
LAB_141ea849f:
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
        lVar6 = (longlong)iStack_2c * 0xe0 + *param_1;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0xdc) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0xd8) =
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



// FUNCTION 141ea8590 FUN_141ea8590 body=537 status=ok
// SIG undefined FUN_141ea8590(void)

void FUN_141ea8590(longlong *param_1)

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
        if (bVar4) goto LAB_141ea86bf;
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
LAB_141ea86bf:
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
        lVar6 = (longlong)iStack_2c * 0x4c0 + *param_1;
        uVar5 = GetTypeHash(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x4bc) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x4b8) =
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



// FUNCTION 141ea87b0 FUN_141ea87b0 body=537 status=ok
// SIG undefined FUN_141ea87b0(void)

void FUN_141ea87b0(longlong *param_1)

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
        if (bVar4) goto LAB_141ea88df;
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
LAB_141ea88df:
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
        lVar6 = (longlong)iStack_2c * 0x580 + *param_1;
        uVar5 = GetTypeHash(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x57c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x578) =
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



// FUNCTION 141ea89d0 Rehash body=538 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<__int64,__int64>,TDefaultMapHashableKeyFuncs<__int64,__int64,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
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
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar5) goto LAB_141ea8b0f;
        uVar9 = puVar13[lVar6 + 1];
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
LAB_141ea8b0f:
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
        lVar6 = *param_1 + (longlong)iStack_1c * 0x18;
        uVar4 = *(undefined8 *)(*param_1 + (longlong)iStack_1c * 0x18);
        uVar9 = (int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x14) = uVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x10) =
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



// FUNCTION 141ea8bf0 FUN_141ea8bf0 body=413 status=ok
// SIG undefined FUN_141ea8bf0(void)

void FUN_141ea8bf0(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 *local_58 [2];
  longlong local_48 [4];
  longlong *local_28;
  int local_18;
  
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_1415e13e0();
    if (cVar1 == '\0') {
      puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      puVar2 = puVar3 + 0xc;
      if (DAT_146ab6eb0 < puVar2) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
        puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar2 = puVar3 + 0xc;
      }
      DAT_146ab6e8c = DAT_146ab6e8c + 1;
      DAT_146ab6ea8 = puVar2;
      *DAT_146ab6e80 = puVar3;
      local_28 = (longlong *)0x0;
      local_18 = 0;
      DAT_146ab6e80 = puVar3 + 1;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_48);
      if (puVar2 != (undefined8 *)0x0) {
        puVar2[1] = param_1;
        *puVar2 = &PTR_FUN_143f77b70;
      }
      local_58[0] = &LAB_141e93960;
      puVar3[1] = 0;
      *puVar3 = &PTR_ExecuteAndDestruct_144eb5ab0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 2,local_58);
      if (local_18 != 0) {
        plVar4 = local_48;
        if (local_28 != (longlong *)0x0) {
          plVar4 = local_28;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (DAT_146ab6e8c != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
      }
      FUN_141ed93a0(&DAT_146ab6e78);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
      }
      FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141ea8d86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_146ab47e8)(*(undefined8 *)(param_1 + 0x38));
  return;
}



// FUNCTION 141ea8d90 FUN_141ea8d90 body=902 status=ok
// SIG undefined FUN_141ea8d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ea8d90(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  uint *puVar9;
  ulonglong *puVar10;
  uint uVar11;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  int iStack_1a4;
  uint uStack_1a0;
  undefined4 uStack_19c;
  longlong *local_198;
  undefined8 uStack_190;
  uint *local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  longlong *local_168;
  char local_160;
  char cStack_15f;
  longlong *local_158;
  undefined8 uStack_150;
  uint *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_118;
  ulonglong local_108 [4];
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  if (param_2 != (longlong *)0x0) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
    (**(code **)(*param_2 + 0x48))(param_2);
    if (DAT_146ab6383 != '\0') {
      IsInRenderingThread();
    }
    lVar6 = (**(code **)(*param_2 + 0x48))(param_2);
    if (lVar6 != 0) {
      local_198 = (longlong *)FUN_141e9b860();
      iVar8 = (int)local_198[5];
      uVar11 = 0;
      local_1b8 = 0x100000000;
      uStack_1b0 = (uint *)(local_198 + 2);
      iStack_1a4 = 0;
      uStack_1a0 = 0;
      if (iVar8 != 0) {
        puVar9 = (uint *)local_198[4];
        if ((uint *)local_198[4] == (uint *)0x0) {
          puVar9 = uStack_1b0;
        }
        uVar4 = *puVar9;
        uVar3 = uVar11;
        uStack_1a0 = uVar11;
        while (uVar4 == 0) {
          uStack_1a0 = uStack_1a0 + 0x20;
          local_1b8._4_4_ = (undefined4)((ulonglong)local_1b8 >> 0x20);
          local_1b8 = CONCAT44(local_1b8._4_4_,uVar3 + 1);
          if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)uVar3)
          goto LAB_141ea8ec4;
          uVar4 = puVar9[(longlong)(int)uVar3 + 1];
          uVar3 = uVar3 + 1;
        }
        uVar4 = -uVar4 & uVar4;
        iVar5 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        local_1b8 = CONCAT44(uVar4,(undefined4)local_1b8);
        if (uVar4 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        iStack_1a4 = (uStack_1a0 - iVar5) + 0x1f;
        if (iVar8 < iStack_1a4) {
LAB_141ea8ec4:
          iStack_1a4 = iVar8;
        }
      }
      local_1a8 = 0xffffffff;
      uStack_180 = CONCAT44(iStack_1a4,0xffffffff);
      auVar2._8_4_ = uStack_1a0;
      auVar2._0_8_ = uStack_180;
      auVar2._12_4_ = uStack_19c;
      local_130 = SUB84(local_198,0);
      uStack_12c = (undefined4)((ulonglong)local_198 >> 0x20);
      uStack_150 = local_1b8;
      local_160 = '\0';
      cStack_15f = '\0';
      uStack_190 = local_1b8;
      uStack_138 = auVar2._8_8_;
      local_178._8_4_ = local_130;
      local_178._0_8_ = uStack_138;
      local_178._12_4_ = uStack_12c;
      iVar8 = iStack_1a4;
      local_188 = uStack_1b0;
      local_168 = local_198;
      local_158 = local_198;
      puStack_148 = uStack_1b0;
      uStack_140 = uStack_180;
      if (iStack_1a4 < (int)local_198[5]) {
        do {
          puVar10 = (ulonglong *)((longlong)iVar8 * 0xe0 + *local_198);
          local_108[0] = *puVar10;
          local_108[1] = puVar10[1];
          local_108[2] = puVar10[2];
          local_108[3] = puVar10[3];
          local_e8 = puVar10[4];
          uStack_e0 = puVar10[5];
          local_d8 = puVar10[6];
          uStack_d0 = puVar10[7];
          local_c8 = puVar10[8];
          uStack_c0 = puVar10[9];
          local_b8 = puVar10[10];
          uStack_b0 = puVar10[0xb];
          local_a8 = puVar10[0xc];
          uStack_a0 = puVar10[0xd];
          local_98 = puVar10[0xe];
          uStack_90 = puVar10[0xf];
          local_88 = puVar10[0x10];
          uStack_80 = puVar10[0x11];
          local_78 = puVar10[0x12];
          uStack_70 = puVar10[0x13];
          local_68 = puVar10[0x14];
          uStack_60 = puVar10[0x15];
          uVar1 = puVar10[0x18];
          local_58 = (int)puVar10[0x16];
          uStack_54 = *(undefined4 *)((longlong)puVar10 + 0xb4);
          uStack_50 = (int)puVar10[0x17];
          uStack_4c = *(undefined4 *)((longlong)puVar10 + 0xbc);
          local_48 = (int)puVar10[0x18];
          uStack_44 = *(undefined4 *)((longlong)puVar10 + 0xc4);
          uStack_40 = (int)puVar10[0x19];
          uStack_3c = *(undefined4 *)((longlong)puVar10 + 0xcc);
          uVar4 = uVar11;
          if (((uVar1 == 0) || (*(int *)(uVar1 + 0x14) != *(int *)(lVar6 + 0x14))) ||
             (*(int *)(uVar1 + 0x10) != *(int *)(lVar6 + 0x10))) {
            do {
              uVar1 = local_108[(longlong)(int)uVar4 * 3];
              if (((uVar1 != 0) && (*(int *)(uVar1 + 0x14) == *(int *)(lVar6 + 0x14))) &&
                 (*(int *)(uVar1 + 0x10) == *(int *)(lVar6 + 0x10))) goto LAB_141ea903c;
              uVar4 = uVar4 + 1;
            } while (uVar4 < 8);
          }
          else {
LAB_141ea903c:
            uStack_1b0 = (uint *)CONCAT44(uStack_1b0._4_4_,(int)puVar10[0x1a] + -1);
            local_128 = 0;
            local_118 = 0;
            local_1b8 = param_1;
            puVar7 = (undefined8 *)FUN_140438ef0(0x18,&puStack_148);
            if (puVar7 != (undefined8 *)0x0) {
              *puVar7 = &PTR_FUN_143f77c18;
              *(undefined4 *)(puVar7 + 1) = (undefined4)local_1b8;
              *(undefined4 *)((longlong)puVar7 + 0xc) = local_1b8._4_4_;
              *(undefined4 *)(puVar7 + 2) = (undefined4)uStack_1b0;
              *(undefined4 *)((longlong)puVar7 + 0x14) = uStack_1b0._4_4_;
            }
            local_158 = (longlong *)&LAB_141e93ab0;
            FUN_141eb4140(&local_158,0);
            TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
            ::Remove(local_178._8_8_,iVar8);
            local_160 = '\x01';
          }
          uStack_180 = CONCAT44(uStack_180._4_4_,(uint)uStack_180 & ~uStack_190._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_190);
          iVar8 = uStack_180._4_4_;
        } while (uStack_180._4_4_ < (int)local_188[6]);
        if ((local_160 != '\0') && (cStack_15f != '\0')) {
          TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_168,(int)local_168[1] - *(int *)((longlong)local_168 + 0x34),1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141ea9120 FUN_141ea9120 body=370 status=ok
// SIG undefined FUN_141ea9120(void)

void FUN_141ea9120(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 0x28);
  uVar5 = 0;
  uVar7 = (longlong)*(int *)(param_1 + 0x30) & 0x1fffffffffffffff;
  if (puVar6 + *(int *)(param_1 + 0x30) < puVar6) {
    uVar7 = uVar5;
  }
  uVar4 = uVar5;
  if (uVar7 != 0) {
    do {
      iVar2 = DAT_146ab3e30;
      lVar3 = (longlong)DAT_146ab3e30;
      uVar1 = *puVar6;
      DAT_146ab3e30 = DAT_146ab3e30 + 1;
      if (DAT_146ab3e34 < DAT_146ab3e30) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146ab3e28,iVar2);
      }
      puVar6 = puVar6 + 1;
      uVar4 = uVar4 + 1;
      *(undefined8 *)(DAT_146ab3e28 + lVar3 * 8) = uVar1;
    } while (uVar4 != uVar7);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x38);
  uVar7 = (longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff;
  if (puVar6 + *(int *)(param_1 + 0x40) < puVar6) {
    uVar7 = uVar5;
  }
  if (uVar7 != 0) {
    do {
      iVar2 = DAT_146ab3e30;
      lVar3 = (longlong)DAT_146ab3e30;
      uVar1 = *puVar6;
      DAT_146ab3e30 = DAT_146ab3e30 + 1;
      if (DAT_146ab3e34 < DAT_146ab3e30) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146ab3e28,iVar2);
      }
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 + 1;
      *(undefined8 *)(DAT_146ab3e28 + lVar3 * 8) = uVar1;
    } while (uVar5 != uVar7);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x34)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((*(int *)(param_1 + 0x44) < 0) && (*(int *)(param_1 + 0x44) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo((ulonglong *)(param_1 + 0x38),0);
    return;
  }
  return;
}



// FUNCTION 141ea92a0 Remove body=227 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<unsigned_int,TTuple<unsigned_int,unsigned_int>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned_int,unsigned_int>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar3 = *(int *)((longlong)plVar6 + ((longlong)param_2 & uVar7) * 4);
  if (iVar3 != -1) {
    lVar5 = *param_1;
    do {
      lVar8 = (longlong)iVar3;
      if (*(int *)(lVar5 + lVar8 * 0x14) == param_2) {
        uVar7 = (longlong)*(int *)(lVar5 + 0x10 + lVar8 * 0x14) & uVar7;
        puVar1 = (undefined4 *)((longlong)plVar6 + uVar7 * 4);
        iVar4 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x000141ea9332;
      }
      iVar3 = *(int *)(lVar5 + 0xc + lVar8 * 0x14);
    } while (iVar3 != -1);
  }
  return 0;
joined_r0x000141ea9332:
  if (iVar4 == -1) {
LAB_141ea935a:
    TSparseArray<TSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar3,1);
    return 1;
  }
  if (iVar4 == iVar3) {
    *puVar1 = *(undefined4 *)(lVar5 + lVar8 * 0x14 + 0xc);
    goto LAB_141ea935a;
  }
  lVar2 = (longlong)iVar4 * 5 + 3;
  iVar4 = *(int *)(lVar5 + lVar2 * 4);
  puVar1 = (undefined4 *)(lVar5 + lVar2 * 4);
  goto joined_r0x000141ea9332;
}



// FUNCTION 141ea9390 Remove body=252 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<int,TTuple<FString,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<FString,int>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
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
  if (iVar6 != -1) {
    lVar4 = *param_1;
    do {
      lVar5 = (longlong)iVar6;
      if (*(int *)(lVar4 + lVar5 * 0x28) == param_2) {
        lVar5 = lVar5 * 0x28;
        uVar8 = (longlong)*(int *)(lVar5 + 0x24 + lVar4) & uVar8;
        puVar2 = (undefined4 *)((longlong)plVar7 + uVar8 * 4);
        iVar3 = *(int *)((longlong)plVar7 + uVar8 * 4);
        goto joined_r0x000141ea9427;
      }
      iVar6 = *(int *)(lVar4 + 0x20 + lVar5 * 0x28);
    } while (iVar6 != -1);
  }
  return 0;
joined_r0x000141ea9427:
  if (iVar3 == -1) {
LAB_141ea9452:
    if (*(longlong *)(lVar5 + 8 + *param_1) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar6,1);
    return 1;
  }
  if (iVar3 == iVar6) {
    *puVar2 = *(undefined4 *)(lVar5 + lVar4 + 0x20);
    goto LAB_141ea9452;
  }
  lVar1 = (longlong)iVar3 * 5 + 4;
  iVar3 = *(int *)(lVar4 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar4 + lVar1 * 8);
  goto joined_r0x000141ea9427;
}



// FUNCTION 141ea9490 Remove body=276 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<unsigned_int,TMap<__int64,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,__int64,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TMap<__int64,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,__int64,0>_>,0>,FDefaultSetAllocator>
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
      lVar3 = (longlong)iVar5 * 0x60;
      if (*(int *)(lVar3 + lVar2) == param_2) {
        lVar3 = (longlong)iVar5 * 0x60;
        uVar7 = (longlong)*(int *)(lVar3 + 0x5c + lVar2) & uVar7;
        piVar4 = (int *)((longlong)plVar6 + uVar7 * 4);
        iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x000141ea952c;
      }
      iVar5 = *(int *)(lVar3 + 0x58 + lVar2);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x000141ea952c:
  if (iVar1 == -1) {
LAB_141ea9553:
    lVar3 = *param_1 + lVar3;
    *(undefined4 *)(lVar3 + 0x50) = 0;
    if (*(longlong *)(lVar3 + 0x48) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar3 + 8);
    TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x58);
    goto LAB_141ea9553;
  }
  piVar4 = (int *)((longlong)iVar1 * 0x60 + 0x58 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x000141ea952c;
}



// FUNCTION 141ea95b0 Remove body=249 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FOpenGLFramebufferKey,unsigned_int>,TDefaultMapHashableKeyFuncs<FOpenGLFramebufferKey,unsigned_int,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  longlong lVar8;
  int *piVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_1;
    lVar8 = (longlong)
            (int)((int)param_1[9] - 1U & *(uint *)((longlong)param_2 * 0xe0 + 0xdc + lVar3));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar9 = (int *)((longlong)plVar5 + lVar8 * 4);
    iVar2 = *(int *)((longlong)plVar5 + lVar8 * 4);
    while (iVar2 != -1) {
      if (iVar2 == param_2) {
        *piVar9 = *(int *)((longlong)param_2 * 0xe0 + 0xd8 + lVar3);
        break;
      }
      piVar9 = (int *)(lVar3 + 0xd8 + (longlong)iVar2 * 0xe0);
      iVar2 = *piVar9;
    }
  }
  bVar4 = (byte)param_2 & 0x1f;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)((longlong)(int)param_1[6] * 0xe0 + *param_1) = param_2;
  }
  uVar7 = 0xffffffff;
  puVar6 = (undefined4 *)((longlong)param_2 * 0xe0 + *param_1);
  *puVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar7 = (undefined4)param_1[6];
  }
  puVar6[1] = uVar7;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(int *)(param_1 + 6) = param_2;
  plVar5 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 +
                   (longlong)((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
  return;
}



// FUNCTION 141ea96b0 ReplaceCString body=279 status=ok
// SIG undefined ReplaceCString(void)

void `anonymous_namespace'::ReplaceCString(longlong *param_1,char *param_2,void *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  lVar8 = -1;
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (param_2[lVar6] != '\0');
  do {
    lVar8 = lVar8 + 1;
  } while (*(char *)(lVar8 + (longlong)param_3) != '\0');
  pcVar2 = ::_guard_xfg_dispatch_icall_nop((char *)*param_1,param_2);
  if (pcVar2 != (char *)0x0) {
    iVar7 = (int)lVar8;
    do {
      iVar4 = (int)pcVar2 - (int)*param_1;
      iVar5 = (int)lVar6;
      if (iVar5 != 0) {
        iVar1 = (int)param_1[1];
        iVar3 = (iVar1 - iVar4) - iVar5;
        if (iVar3 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar4 + *param_1),
                     (void *)((longlong)(iVar5 + iVar4) + *param_1),(longlong)iVar3);
          iVar1 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar1 - iVar5;
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_1);
      }
      iVar5 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar5 + iVar7;
      if (*(int *)((longlong)param_1 + 0xc) < iVar5 + iVar7) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1,iVar5);
      }
      lVar8 = (longlong)iVar4;
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar7 + *param_1 + lVar8),(void *)(*param_1 + lVar8),
                 (longlong)(iVar5 - iVar4));
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar8),param_3,(longlong)iVar7);
      pcVar2 = ::_guard_xfg_dispatch_icall_nop((char *)(*param_1 + lVar8),param_2);
    } while (pcVar2 != (char *)0x0);
  }
  return;
}



// FUNCTION 141ea97d0 ResizeAllocation body=161 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<16,FDefaultAllocator>::
     ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x200);
  if (param_3 < 0x11) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 5);
    pvVar1 = *(void **)((longlong)param_1 + 0x200);
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
        *(void **)((longlong)param_1 + 0x200) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 5);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x200) = uVar2;
  return;
}



// FUNCTION 141ea9880 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<1216,8>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x4c0,0);
  iVar4 = (int)(uVar3 / 0x4c0);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x4c0,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 141ea9910 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<1408,8>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x580,0);
  iVar4 = (int)(uVar3 / 0x580);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x580,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 141ea99a0 ResizeGrow body=137 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams,TInlineAllocator<16,FDefaultAllocator>_>
     ::ResizeGrow(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (uVar1 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x20c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 5,0);
    iVar2 = (int)(uVar3 >> 5);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x20c) = iVar2;
  TInlineAllocator<16,FDefaultAllocator>::
  ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>::ResizeAllocation
            (param_1,param_2,iVar2,0x20);
  return;
}



// FUNCTION 141ea9a30 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<1216,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x4c0,0);
    iVar3 = (int)(uVar1 / 0x4c0);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x4c0,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 141ea9ab0 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<1408,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x580,0);
    iVar3 = (int)(uVar1 / 0x580);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x580,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 141ea9b30 FUN_141ea9b30 body=671 status=ok
// SIG undefined FUN_141ea9b30(void)

void FUN_141ea9b30(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar14;
  uint in_stack_ffffffffffffffc0;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar13 = (longlong)*(int *)(param_1 + 0x3c);
  uVar9 = (&DAT_1464ca1b8)[lVar13 * 10];
  uVar5 = (&DAT_1464ca1bc)[lVar13 * 10];
  iVar12 = (&DAT_1464ca1c4)[lVar13 * 10];
  bVar3 = (byte)param_2 & 0x1f;
  uVar10 = *(uint *)(param_1 + 0x60) >> bVar3;
  uVar11 = *(uint *)(param_1 + 100) >> ((byte)param_2 & 0x1f);
  uVar4 = uVar9;
  if (uVar9 <= uVar10) {
    uVar4 = uVar10;
  }
  uVar4 = (uint)(CONCAT44(0 >> bVar3,(uVar4 - 1) + uVar9) / (ulonglong)uVar9);
  uVar9 = uVar5;
  if (uVar5 <= uVar11) {
    uVar9 = uVar11;
  }
  uVar5 = ((uVar5 - 1) + uVar9) / uVar5;
  uVar10 = uVar5;
  uVar9 = uVar4;
  if (*(int *)(param_1 + 0x3c) - 0x1eU < 2) {
    uVar9 = 2;
    if (1 < uVar4) {
      uVar9 = uVar4;
    }
    uVar10 = 2;
    if (1 < uVar5) {
      uVar10 = uVar5;
    }
  }
  iVar6 = 1;
  if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
    iVar6 = 6;
  }
  lVar8 = (longlong)(iVar6 * param_2 + param_3) * 8;
  if (*(longlong *)(lVar8 + *(longlong *)(param_1 + 0xa0)) == 0) {
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      uVar14 = 0;
      lVar7 = FUN_141e69270(lVar7,0,uVar10 * uVar9 * iVar12,2,0,
                            in_stack_ffffffffffffffc0 & 0xffffff00,0,0);
    }
    puVar2 = *(undefined8 **)(lVar8 + *(longlong *)(param_1 + 0xa0));
    *(longlong *)(lVar8 + *(longlong *)(param_1 + 0xa0)) = lVar7;
    if (lVar7 != 0) {
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  puVar2 = *(undefined8 **)(lVar8 + *(longlong *)(param_1 + 0xa0));
  if (puVar2 != (undefined8 *)0x0) {
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
  }
  lVar8 = FUN_141e711c0(*(undefined8 *)(param_1 + 0x70),1);
  iVar12 = DAT_1464c97fc + -1;
  if ((*(int *)(*(longlong *)(lVar8 + 8) + 0x10 + (longlong)iVar12 * 0x28) !=
       *(int *)(param_1 + 0x84)) ||
     (*(int *)(*(longlong *)(lVar8 + 8) + 0x14 + (longlong)iVar12 * 0x28) !=
      *(int *)(param_1 + 0x80))) {
    FUN_141e6dbc0(*(undefined8 *)(param_1 + 0x70),lVar8,iVar12,*(int *)(param_1 + 0x84),
                  CONCAT44(uVar14,*(int *)(param_1 + 0x80)),0xffffffff,
                  *(undefined4 *)(param_1 + 0x34));
  }
  (*DAT_146ab42e8)(0x88eb,*(undefined4 *)(puVar2 + 3));
  if (*(char *)(&DAT_146ab3648 + lVar13 * 0xe) == '\0') {
    (*DAT_146ab40d0)(0xd05,1);
    param_3 = param_3 + 0x8515;
    if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
      param_3 = *(int *)(param_1 + 0x84);
    }
    (*DAT_146ab4078)(param_3,param_2,*(undefined4 *)((longlong)&DAT_146ab3640 + lVar13 * 0x1c),
                     *(undefined4 *)((longlong)&DAT_146ab3640 + lVar13 * 0x1c + 4),0);
    (*DAT_146ab40d0)(0xd05,4);
  }
  else {
    param_3 = param_3 + 0x8515;
    if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
      param_3 = *(int *)(param_1 + 0x84);
    }
    (*DAT_146ab4268)(param_3,param_2,0);
  }
  (*DAT_146ab42e8)(0x88eb,0);
  piVar1 = (int *)(puVar2 + 1);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}



// FUNCTION 141ea9dd0 FUN_141ea9dd0 body=687 status=ok
// SIG undefined FUN_141ea9dd0(void)

void FUN_141ea9dd0(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar16;
  uint in_stack_ffffffffffffffc0;
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar15 = (longlong)*(int *)(param_1 + 0x3c);
  bVar3 = (byte)param_2 & 0x1f;
  uVar10 = *(uint *)(param_1 + 0x60) >> bVar3;
  uVar8 = (&DAT_1464ca1b8)[lVar15 * 10];
  uVar11 = (&DAT_1464ca1bc)[lVar15 * 10];
  iVar13 = (&DAT_1464ca1c4)[lVar15 * 10];
  uVar12 = *(uint *)(param_1 + 100) >> ((byte)param_2 & 0x1f);
  uVar14 = uVar8;
  if (uVar8 <= uVar10) {
    uVar14 = uVar10;
  }
  uVar14 = (uint)(CONCAT44(0 >> bVar3,(uVar14 - 1) + uVar8) / (ulonglong)uVar8);
  uVar8 = uVar11;
  if (uVar11 <= uVar12) {
    uVar8 = uVar12;
  }
  uVar11 = ((uVar11 - 1) + uVar8) / uVar11;
  uVar10 = uVar11;
  uVar8 = uVar14;
  if (*(int *)(param_1 + 0x3c) - 0x1eU < 2) {
    uVar8 = 2;
    if (1 < uVar14) {
      uVar8 = uVar14;
    }
    uVar10 = 2;
    if (1 < uVar11) {
      uVar10 = uVar11;
    }
  }
  iVar9 = 1;
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar9 = *(int *)(param_1 + 0x68);
  }
  iVar4 = 1;
  if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
    iVar4 = 6;
  }
  lVar6 = 0;
  lVar7 = (longlong)(iVar4 * iVar9 * param_2 + param_3) * 8;
  if (*(longlong *)(lVar7 + *(longlong *)(param_1 + 0xa0)) == 0) {
    lVar5 = operator_new(0x48);
    if (lVar5 != 0) {
      uVar16 = 0;
      lVar6 = FUN_141e69270(lVar5,0,uVar10 * uVar8 * iVar13,2,0,
                            in_stack_ffffffffffffffc0 & 0xffffff00,0,0);
    }
    puVar2 = *(undefined8 **)(lVar7 + *(longlong *)(param_1 + 0xa0));
    *(longlong *)(lVar7 + *(longlong *)(param_1 + 0xa0)) = lVar6;
    if (lVar6 != 0) {
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  puVar2 = *(undefined8 **)(lVar7 + *(longlong *)(param_1 + 0xa0));
  if (puVar2 != (undefined8 *)0x0) {
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
  }
  lVar7 = FUN_141e711c0(*(undefined8 *)(param_1 + 0x70),1);
  iVar13 = DAT_1464c97fc + -1;
  if ((*(int *)(*(longlong *)(lVar7 + 8) + 0x10 + (longlong)iVar13 * 0x28) !=
       *(int *)(param_1 + 0x84)) ||
     (*(int *)(*(longlong *)(lVar7 + 8) + 0x14 + (longlong)iVar13 * 0x28) !=
      *(int *)(param_1 + 0x80))) {
    FUN_141e6dbc0(*(undefined8 *)(param_1 + 0x70),lVar7,iVar13,*(int *)(param_1 + 0x84),
                  CONCAT44(uVar16,*(int *)(param_1 + 0x80)),0xffffffff,
                  *(undefined4 *)(param_1 + 0x34));
  }
  (*DAT_146ab42e8)(0x88eb,*(undefined4 *)(puVar2 + 3));
  if (*(int *)(param_1 + 0x68) == 0) {
    if (*(char *)(&DAT_146ab3648 + lVar15 * 0xe) == '\0') {
      (*DAT_146ab40d0)(0xd05,1);
      param_3 = param_3 + 0x8515;
      if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
        param_3 = *(int *)(param_1 + 0x84);
      }
      (*DAT_146ab4078)(param_3,param_2,*(undefined4 *)((longlong)&DAT_146ab3640 + lVar15 * 0x1c),
                       *(undefined4 *)((longlong)&DAT_146ab3640 + lVar15 * 0x1c + 4),0);
      (*DAT_146ab40d0)(0xd05,4);
    }
    else {
      param_3 = param_3 + 0x8515;
      if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
        param_3 = *(int *)(param_1 + 0x84);
      }
      (*DAT_146ab4268)(param_3,param_2,0);
    }
  }
  (*DAT_146ab42e8)(0x88eb,0);
  piVar1 = (int *)(puVar2 + 1);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}



// FUNCTION 141eaa080 FUN_141eaa080 body=697 status=ok
// SIG undefined FUN_141eaa080(void)

void FUN_141eaa080(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar13;
  uint in_stack_ffffffffffffffc0;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar12 = (longlong)*(int *)(param_1 + 0x3c);
  uVar4 = (&DAT_1464ca1b8)[lVar12 * 10];
  uVar9 = (&DAT_1464ca1bc)[lVar12 * 10];
  iVar11 = (&DAT_1464ca1c4)[lVar12 * 10];
  uVar10 = *(uint *)(param_1 + 0x60) >> ((byte)param_2 & 0x1f);
  uVar8 = uVar4;
  if (uVar4 <= uVar10) {
    uVar8 = uVar10;
  }
  uVar4 = ((uVar8 - 1) + uVar4) / uVar4;
  uVar8 = uVar9;
  if (uVar9 <= uVar10) {
    uVar8 = uVar10;
  }
  uVar9 = ((uVar9 - 1) + uVar8) / uVar9;
  uVar10 = uVar9;
  uVar8 = uVar4;
  if (*(int *)(param_1 + 0x3c) - 0x1eU < 2) {
    uVar8 = 2;
    if (1 < uVar4) {
      uVar8 = uVar4;
    }
    uVar10 = 2;
    if (1 < uVar9) {
      uVar10 = uVar9;
    }
  }
  lVar7 = 0;
  uVar4 = *(uint *)(param_1 + 0x68);
  if (*(uint *)(param_1 + 0x68) < 2) {
    uVar4 = 0;
  }
  uVar9 = 1;
  if (uVar4 != 0) {
    uVar9 = uVar4;
  }
  iVar5 = 1;
  if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
    iVar5 = 6;
  }
  lVar2 = (longlong)(int)(iVar5 * uVar9 * param_2 + param_3) * 8;
  if (*(longlong *)(lVar2 + *(longlong *)(param_1 + 0xa0)) == 0) {
    lVar6 = operator_new(0x48);
    if (lVar6 != 0) {
      uVar13 = 0;
      lVar7 = FUN_141e69270(lVar6,0,uVar10 * uVar8 * iVar11,2,0,
                            in_stack_ffffffffffffffc0 & 0xffffff00,0,0);
    }
    puVar3 = *(undefined8 **)(lVar2 + *(longlong *)(param_1 + 0xa0));
    *(longlong *)(lVar2 + *(longlong *)(param_1 + 0xa0)) = lVar7;
    if (lVar7 != 0) {
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    }
    if (puVar3 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  puVar3 = *(undefined8 **)(lVar2 + *(longlong *)(param_1 + 0xa0));
  if (puVar3 != (undefined8 *)0x0) {
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
  }
  lVar7 = FUN_141e711c0(*(undefined8 *)(param_1 + 0x70),1);
  iVar11 = DAT_1464c97fc + -1;
  if ((*(int *)(*(longlong *)(lVar7 + 8) + 0x10 + (longlong)iVar11 * 0x28) !=
       *(int *)(param_1 + 0x84)) ||
     (*(int *)(*(longlong *)(lVar7 + 8) + 0x14 + (longlong)iVar11 * 0x28) !=
      *(int *)(param_1 + 0x80))) {
    FUN_141e6dbc0(*(undefined8 *)(param_1 + 0x70),lVar7,iVar11,*(int *)(param_1 + 0x84),
                  CONCAT44(uVar13,*(int *)(param_1 + 0x80)),0xffffffff,
                  *(undefined4 *)(param_1 + 0x34));
  }
  (*DAT_146ab42e8)(0x88eb,*(undefined4 *)(puVar3 + 3));
  uVar4 = *(uint *)(param_1 + 0x68);
  if (*(uint *)(param_1 + 0x68) < 2) {
    uVar4 = 0;
  }
  if (uVar4 == 0) {
    if (*(char *)(&DAT_146ab3648 + lVar12 * 0xe) == '\0') {
      (*DAT_146ab40d0)(0xd05,1);
      param_3 = param_3 + 0x8515;
      if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
        param_3 = *(int *)(param_1 + 0x84);
      }
      (*DAT_146ab4078)(param_3,param_2,*(undefined4 *)((longlong)&DAT_146ab3640 + lVar12 * 0x1c),
                       *(undefined4 *)((longlong)&DAT_146ab3640 + lVar12 * 0x1c + 4),0);
      (*DAT_146ab40d0)(0xd05,4);
    }
    else {
      param_3 = param_3 + 0x8515;
      if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
        param_3 = *(int *)(param_1 + 0x84);
      }
      (*DAT_146ab4268)(param_3,param_2,0);
    }
  }
  (*DAT_146ab42e8)(0x88eb,0);
  piVar1 = (int *)(puVar3 + 1);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  return;
}



// FUNCTION 141eaa340 Set body=183 status=ok
// SIG undefined Set(void)

void FOpenGLShaderParameterCache::Set
               (longlong param_1,char param_2,ulonglong param_3,uint param_4,void *param_5)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_2 != 'h') {
    if (param_2 == 'i') {
      lVar5 = 0x18;
      lVar3 = 0x40;
      goto LAB_141eaa39f;
    }
    if (param_2 == 'l') {
      lVar5 = 0x10;
      lVar3 = 0x38;
      goto LAB_141eaa39f;
    }
    if (param_2 == 'm') {
      lVar5 = 8;
      lVar3 = 0x30;
      goto LAB_141eaa39f;
    }
    if (param_2 == 'u') {
      lVar5 = 0x20;
      lVar3 = 0x48;
      goto LAB_141eaa39f;
    }
  }
  lVar3 = 0x28;
  lVar5 = 0;
LAB_141eaa39f:
  puVar1 = (uint *)(lVar3 + param_1);
  uVar6 = param_4 + 0xf >> 4;
  uVar7 = (uint)(param_3 >> 4) & 0xfffffff;
  if (puVar1[1] != 0) {
    uVar2 = *puVar1;
    uVar6 = uVar6 + uVar7;
    uVar4 = puVar1[1] + uVar2;
    if (uVar2 <= uVar7) {
      uVar7 = uVar2;
    }
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    uVar6 = (uVar6 - uVar7) + 1;
  }
  puVar1[1] = uVar6;
  *puVar1 = uVar7;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((param_3 & 0xffffffff) + *(longlong *)(lVar5 + param_1)),param_5,
             (ulonglong)param_4);
  return;
}



// FUNCTION 141eaa400 FUN_141eaa400 body=482 status=ok
// SIG undefined FUN_141eaa400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141eaa400(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  code *pcVar8;
  longlong lVar9;
  int local_res20 [2];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  int local_60;
  int iStack_5c;
  undefined8 local_58;
  int *local_50;
  undefined8 *local_48;
  
  if (((DAT_146ab0540 != 0) && (DAT_146ab49a0 != (code *)0x0)) && (iVar7 = 0, 0 < (int)param_3[1]))
  {
    lVar9 = 0;
    pcVar8 = DAT_146ab49a0;
    do {
      lVar2 = *param_3;
      local_58 = 0xffffffff;
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x14 +
                      (ulonglong)*(uint *)(lVar2 + lVar9) * 0x28);
      lVar3 = *(longlong *)
               (*(longlong *)(param_1 + 0x1b8) + (ulonglong)*(uint *)(lVar2 + lVar9) * 8);
      if (lVar3 == 0) {
        iStack_5c = 0;
      }
      else {
        iStack_5c = *(int *)(lVar3 + 0x18);
      }
      iVar5 = iStack_5c;
      if (iVar1 != 0) {
        uVar4 = CONCAT44(iStack_5c,iVar1);
        local_60 = iVar1;
        piVar6 = (int *)TSet<TTuple<FSamplerPair,unsigned___int64>,TDefaultMapHashableKeyFuncs<FSamplerPair,unsigned___int64,0>,FDefaultSetAllocator>
                        ::FindId(&DAT_1464c9850,local_68,uVar4);
        if (*piVar6 == -1) {
          if (iVar5 == 0) {
            local_58 = (*DAT_146ab4998)(iVar1);
          }
          else {
            local_58 = (*pcVar8)(iVar1,iVar5);
          }
          (*DAT_146ab49a8)(local_58);
          local_50 = &local_60;
          local_48 = &local_58;
          FUN_141e89d70(&DAT_1464c9850,local_64,&local_50,0);
        }
        else {
          TSet<TTuple<FSamplerPair,unsigned___int64>,TDefaultMapHashableKeyFuncs<FSamplerPair,unsigned___int64,0>,FDefaultSetAllocator>
          ::FindId(&DAT_1464c9850,local_res20,uVar4);
          if (local_res20[0] == -1) {
            local_58 = _DAT_00000008;
          }
          else {
            local_58 = *(undefined8 *)(DAT_1464c9850 + (longlong)local_res20[0] * 0x18 + 8);
          }
        }
        (*DAT_146ab49b0)(*(undefined4 *)(lVar2 + 4 + lVar9),local_58);
        pcVar8 = DAT_146ab49a0;
      }
      iVar7 = iVar7 + 1;
      lVar9 = lVar9 + 8;
    } while (iVar7 < (int)param_3[1]);
  }
  return;
}



// FUNCTION 141eaa5f0 Shutdown body=101 status=ok
// SIG undefined Shutdown(void)

void FOpenGLProgramBinaryCache::Shutdown(void)

{
  longlong *plVar1;
  
  plVar1 = DAT_146ab3de0;
  if (DAT_146ab3de0 != (longlong *)0x0) {
    *(undefined4 *)(DAT_146ab3de0 + 0xb) = 0;
    if (plVar1[10] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FSoftObjectPath,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FSoftObjectPath,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (plVar1 + 2);
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x60);
    DAT_146ab3de0 = (longlong *)0x0;
  }
  return;
}



// FUNCTION 141eaa660 FUN_141eaa660 body=183 status=ok
// SIG undefined FUN_141eaa660(void)

void FUN_141eaa660(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  
  if (DAT_146ab6339 == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    return;
  }
  iVar4 = (*(int *)(param_1 + 0x1c) + 1) % *(int *)(param_1 + 0x18);
  lVar1 = (longlong)iVar4 * 8;
  lVar2 = *(longlong *)(lVar1 + *(longlong *)(param_1 + 0x28));
  if (*(char *)(lVar2 + 0x3d) == '\0') {
    cVar3 = PlatformContextIsCurrent(*(undefined8 *)(lVar2 + 0x20));
    if (cVar3 == '\0') {
      PlatformReleaseRenderQuery(*(undefined4 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20));
      *(undefined1 *)(lVar2 + 0x3d) = 1;
    }
    if (*(char *)(lVar2 + 0x3d) == '\0') goto LAB_141eaa6e5;
  }
  PlatformGetNewRenderQuery(lVar2 + 0x18,lVar2 + 0x20);
  *(undefined1 *)(lVar2 + 0x3d) = 0;
LAB_141eaa6e5:
  (*DAT_146ab47d8)(*(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar1) + 0x18),
                   0x8e28);
  *(int *)(param_1 + 0x1c) = iVar4;
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



// FUNCTION 141eaa720 FUN_141eaa720 body=129 status=ok
// SIG undefined FUN_141eaa720(void)

undefined8 FUN_141eaa720(uint param_1)

{
  if (param_1 < 0x301) {
    if (param_1 == 0x300) {
      return 2;
    }
    if (param_1 == 1) {
      return 1;
    }
  }
  else if (param_1 < 0x8002) {
    if (param_1 == 0x8001) {
      return 10;
    }
    switch(param_1) {
    case 0x301:
      return 3;
    case 0x302:
      return 4;
    case 0x303:
      return 5;
    case 0x304:
      return 6;
    case 0x305:
      return 7;
    case 0x306:
      return 8;
    case 0x307:
      return 9;
    }
  }
  else if (param_1 == 0x8002) {
    return 0xb;
  }
  return 0;
}



// FUNCTION 141eaa7c0 FUN_141eaa7c0 body=98 status=ok
// SIG undefined FUN_141eaa7c0(void)

undefined8 FUN_141eaa7c0(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return 1;
  case 2:
    return 0x300;
  case 3:
    return 0x301;
  case 4:
    return 0x302;
  case 5:
    return 0x303;
  case 6:
    return 0x304;
  case 7:
    return 0x305;
  case 8:
    return 0x306;
  case 9:
    return 0x307;
  case 10:
    return 0x8001;
  case 0xb:
    return 0x8002;
  default:
    return 0;
  }
}



// FUNCTION 141eaa850 FUN_141eaa850 body=75 status=ok
// SIG undefined FUN_141eaa850(void)

undefined8 FUN_141eaa850(undefined4 param_1)

{
  switch(param_1) {
  case 0x200:
    return 6;
  case 0x201:
    return 0;
  case 0x202:
    return 4;
  case 0x203:
    return 1;
  case 0x204:
    return 2;
  case 0x205:
    return 5;
  case 0x206:
    return 3;
  default:
    return 7;
  }
}



// FUNCTION 141eaa8c0 FUN_141eaa8c0 body=75 status=ok
// SIG undefined FUN_141eaa8c0(void)

undefined8 FUN_141eaa8c0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0x201;
  case 1:
    return 0x203;
  case 2:
    return 0x204;
  case 3:
    return 0x206;
  case 4:
    return 0x202;
  case 5:
    return 0x205;
  case 6:
    return 0x200;
  default:
    return 0x207;
  }
}



// FUNCTION 141eaa930 TranslateStencilOp body=96 status=ok
// SIG undefined TranslateStencilOp(void)

undefined8 TranslateStencilOp(uint param_1)

{
  if (param_1 < 0x1e03) {
    if (param_1 == 0x1e02) {
      return 3;
    }
    if (param_1 == 0) {
      return 1;
    }
    if (param_1 == 0x150a) {
      return 5;
    }
    if (param_1 == 0x1e01) {
      return 2;
    }
  }
  else {
    if (param_1 == 0x1e03) {
      return 4;
    }
    if (param_1 == 0x8507) {
      return 6;
    }
    if (param_1 == 0x8508) {
      return 7;
    }
  }
  return 0;
}



// FUNCTION 141eaa990 FUN_141eaa990 body=74 status=ok
// SIG undefined FUN_141eaa990(void)

undefined8 FUN_141eaa990(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return 0;
  case 2:
    return 0x1e01;
  case 3:
    return 0x1e02;
  case 4:
    return 0x1e03;
  case 5:
    return 0x150a;
  case 6:
    return 0x8507;
  case 7:
    return 0x8508;
  default:
    return 0x1e00;
  }
}



// FUNCTION 141eaaa00 Unlock body=119 status=ok
// SIG undefined Unlock(void)

void TOpenGLBuffer<FOpenGLBasePixelBuffer,35052,&CachedBindPixelUnpackBuffer>::Unlock
               (longlong param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    FUN_141e6dae0(*(undefined4 *)(param_1 + 0x18));
    if ((DAT_146ab053c == 0) && ((*(byte *)(param_1 + 0x28) & 2) == 0)) {
      LoadData(param_1,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c),
               *(undefined8 *)(param_1 + 0x38));
      FMemory::Free(*(undefined8 *)(param_1 + 0x38));
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffff7;
    }
    else {
      (*DAT_146ab4330)(0x88ec);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(longlong *)(param_1 + 0x20) =
         *(longlong *)(param_1 + 0x20) + (ulonglong)(~(*(uint *)(param_1 + 0x28) >> 1) & 1);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffffe;
  }
  return;
}



// FUNCTION 141eaaa80 Unlock body=844 status=ok
// SIG undefined Unlock(void)

void TOpenGLTexture<FOpenGLBaseTexture2D>::Unlock(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  byte bVar13;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar14;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  iVar11 = 1;
  if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
    iVar11 = 6;
  }
  lVar3 = (longlong)(iVar11 * param_2 + param_3) * 8;
  puVar4 = *(undefined8 **)(lVar3 + *(longlong *)(param_1 + 0xa0));
  if (puVar4 != (undefined8 *)0x0) {
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
  }
  iVar11 = *(int *)(param_1 + 0x3c);
  lVar12 = (longlong)iVar11 * 0x1c;
  bVar13 = (byte)(*(uint *)(param_1 + 0x40) >> 4) & 1;
  TOpenGLBuffer<FOpenGLBasePixelBuffer,35052,&CachedBindPixelUnpackBuffer>::Unlock(puVar4);
  if ((*(uint *)(puVar4 + 5) >> 1 & 1) == 0) {
    lVar6 = FUN_141e711c0(*(undefined8 *)(param_1 + 0x70),1);
    iVar9 = DAT_1464c97fc + -1;
    if ((*(int *)(*(longlong *)(lVar6 + 8) + 0x10 + (longlong)iVar9 * 0x28) !=
         *(int *)(param_1 + 0x84)) ||
       (*(int *)(*(longlong *)(lVar6 + 8) + 0x14 + (longlong)iVar9 * 0x28) !=
        *(int *)(param_1 + 0x80))) {
      FUN_141e6dbc0(*(undefined8 *)(param_1 + 0x70),lVar6,iVar9,*(int *)(param_1 + 0x84),
                    *(int *)(param_1 + 0x80),0xffffffff,*(undefined4 *)(param_1 + 0x34));
    }
    bVar7 = (byte)param_2;
    if (*(char *)(&DAT_146ab3648 + (longlong)iVar11 * 0xe) == '\0') {
      (*DAT_146ab40d0)(0xcf5,1);
      if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
        param_3 = *(int *)(param_1 + 0x84);
      }
      else {
        param_3 = param_3 + 0x8515;
      }
      uVar8 = *(uint *)(param_1 + 100) >> (bVar7 & 0x1f);
      uVar10 = *(uint *)(param_1 + 0x60) >> (bVar7 & 0x1f);
      if (uVar8 < 2) {
        uVar8 = 1;
      }
      if (uVar10 < 2) {
        uVar10 = 1;
      }
      (*DAT_146ab4178)(param_3,param_2,0,0,uVar10,uVar8,
                       *(undefined4 *)((longlong)&DAT_146ab3640 + lVar12),
                       CONCAT44(uVar14,*(undefined4 *)((longlong)&DAT_146ab3640 + lVar12 + 4)),0);
      (*DAT_146ab40d0)(0xcf5,4);
    }
    else {
      uVar10 = *(uint *)(param_1 + 0xe8) & 1;
      iVar11 = 1;
      if (uVar10 != 0) {
        iVar11 = 6;
      }
      uVar8 = iVar11 * param_2 + param_3;
      lVar6 = *(longlong *)(param_1 + 0xd8);
      if (*(longlong *)(param_1 + 0xd8) == 0) {
        lVar6 = param_1 + 0xd0;
      }
      if ((*(uint *)(lVar6 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           (uVar8 & 0x1f) & 1) == 0) {
        iVar11 = param_3 + 0x8515;
        if (uVar10 == 0) {
          iVar11 = *(int *)(param_1 + 0x84);
        }
        uVar10 = *(uint *)(param_1 + 100) >> (bVar7 & 0x1f);
        uVar8 = *(uint *)(param_1 + 0x60) >> (bVar7 & 0x1f);
        if (uVar10 < 2) {
          uVar10 = 1;
        }
        if (uVar8 < 2) {
          uVar8 = 1;
        }
        (*DAT_146ab4240)(iVar11,param_2,
                         *(undefined4 *)((longlong)&DAT_146ab3630 + (ulonglong)bVar13 * 4 + lVar12),
                         uVar8,uVar10,0,*(undefined4 *)(puVar4 + 2),0);
        iVar11 = 1;
        if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
          iVar11 = 6;
        }
        param_3 = iVar11 * param_2 + param_3;
        lVar12 = *(longlong *)(param_1 + 0xd8);
        if (*(longlong *)(param_1 + 0xd8) == 0) {
          lVar12 = param_1 + 0xd0;
        }
        puVar2 = (uint *)(lVar12 + (longlong)((int)(param_3 + (param_3 >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)param_3 & 0x1f);
      }
      else {
        if (uVar10 == 0) {
          param_3 = *(int *)(param_1 + 0x84);
        }
        else {
          param_3 = param_3 + 0x8515;
        }
        uVar8 = *(uint *)(param_1 + 100) >> (bVar7 & 0x1f);
        uVar10 = *(uint *)(param_1 + 0x60) >> (bVar7 & 0x1f);
        if (uVar8 < 2) {
          uVar8 = 1;
        }
        if (uVar10 < 2) {
          uVar10 = 1;
        }
        (*DAT_146ab4258)(param_3,param_2,0,0,uVar10,uVar8,
                         *(undefined4 *)((longlong)&DAT_146ab3630 + (ulonglong)bVar13 * 4 + lVar12),
                         CONCAT44(uVar14,*(undefined4 *)(puVar4 + 2)),0);
      }
    }
  }
  puVar5 = *(undefined8 **)(lVar3 + *(longlong *)(param_1 + 0xa0));
  *(undefined8 *)(lVar3 + *(longlong *)(param_1 + 0xa0)) = 0;
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  FUN_141e6dae0(0);
  piVar1 = (int *)(puVar4 + 1);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  return;
}



// FUNCTION 141eaadd0 Unlock body=1085 status=ok
// SIG undefined Unlock(void)

void TOpenGLTexture<FOpenGLBaseTexture2DArray>::Unlock(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  byte bVar15;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar16;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar17;
  
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  iVar13 = 1;
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar13 = *(int *)(param_1 + 0x68);
  }
  bVar6 = (byte)param_2;
  iVar10 = 1;
  if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
    iVar10 = 6;
  }
  lVar3 = (longlong)(iVar10 * iVar13 * param_2 + param_3) * 8;
  puVar4 = *(undefined8 **)(lVar3 + *(longlong *)(param_1 + 0xa0));
  if (puVar4 != (undefined8 *)0x0) {
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
  }
  iVar13 = *(int *)(param_1 + 0x3c);
  lVar14 = (longlong)iVar13 * 0x1c;
  bVar15 = (byte)(*(uint *)(param_1 + 0x40) >> 4) & 1;
  TOpenGLBuffer<FOpenGLBasePixelBuffer,35052,&CachedBindPixelUnpackBuffer>::Unlock(puVar4);
  if ((*(uint *)(puVar4 + 5) >> 1 & 1) == 0) {
    lVar7 = FUN_141e711c0(*(undefined8 *)(param_1 + 0x70),1);
    iVar10 = DAT_1464c97fc + -1;
    if ((*(int *)(*(longlong *)(lVar7 + 8) + 0x10 + (longlong)iVar10 * 0x28) !=
         *(int *)(param_1 + 0x84)) ||
       (*(int *)(*(longlong *)(lVar7 + 8) + 0x14 + (longlong)iVar10 * 0x28) !=
        *(int *)(param_1 + 0x80))) {
      FUN_141e6dbc0(*(undefined8 *)(param_1 + 0x70),lVar7,iVar10,*(int *)(param_1 + 0x84),
                    *(int *)(param_1 + 0x80),0xffffffff,*(undefined4 *)(param_1 + 0x34));
    }
    uVar12 = 1;
    uVar11 = 1;
    if (*(int *)(param_1 + 0x68) == 0) {
      if (*(char *)(&DAT_146ab3648 + (longlong)iVar13 * 0xe) != '\0') {
        uVar12 = *(uint *)(param_1 + 0xe8) & 1;
        iVar13 = 1;
        if (uVar12 != 0) {
          iVar13 = 6;
        }
        uVar11 = iVar13 * param_2 + param_3;
        lVar7 = *(longlong *)(param_1 + 0xd8);
        if (*(longlong *)(param_1 + 0xd8) == 0) {
          lVar7 = param_1 + 0xd0;
        }
        if ((*(uint *)(lVar7 + (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4)
             >> (uVar11 & 0x1f) & 1) == 0) {
          iVar13 = param_3 + 0x8515;
          if (uVar12 == 0) {
            iVar13 = *(int *)(param_1 + 0x84);
          }
          uVar12 = *(uint *)(param_1 + 100) >> (bVar6 & 0x1f);
          uVar11 = *(uint *)(param_1 + 0x60) >> (bVar6 & 0x1f);
          if (uVar12 < 2) {
            uVar12 = 1;
          }
          if (uVar11 < 2) {
            uVar11 = 1;
          }
          (*DAT_146ab4240)(iVar13,param_2,
                           *(undefined4 *)
                            ((longlong)&DAT_146ab3630 + (ulonglong)bVar15 * 4 + lVar14),uVar11,
                           uVar12,0,*(undefined4 *)(puVar4 + 2),0);
          iVar13 = 1;
          if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
            iVar13 = 6;
          }
          param_3 = iVar13 * param_2 + param_3;
          lVar14 = *(longlong *)(param_1 + 0xd8);
          if (*(longlong *)(param_1 + 0xd8) == 0) {
            lVar14 = param_1 + 0xd0;
          }
          puVar2 = (uint *)(lVar14 + (longlong)((int)(param_3 + (param_3 >> 0x1f & 0x1fU)) >> 5) * 4
                           );
          *puVar2 = *puVar2 | 1 << ((byte)param_3 & 0x1f);
        }
        else {
          if (uVar12 == 0) {
            param_3 = *(int *)(param_1 + 0x84);
          }
          else {
            param_3 = param_3 + 0x8515;
          }
          uVar11 = *(uint *)(param_1 + 100) >> (bVar6 & 0x1f);
          uVar12 = *(uint *)(param_1 + 0x60) >> (bVar6 & 0x1f);
          if (uVar11 < 2) {
            uVar11 = 1;
          }
          if (uVar12 < 2) {
            uVar12 = 1;
          }
          (*DAT_146ab4258)(param_3,param_2,0,0,uVar12,uVar11,
                           *(undefined4 *)
                            ((longlong)&DAT_146ab3630 + (ulonglong)bVar15 * 4 + lVar14),
                           CONCAT44(uVar16,*(undefined4 *)(puVar4 + 2)),0);
        }
        goto LAB_141eab1b1;
      }
      (*DAT_146ab40d0)(0xcf5,1);
      if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
        param_3 = *(int *)(param_1 + 0x84);
      }
      else {
        param_3 = param_3 + 0x8515;
      }
      uVar8 = *(uint *)(param_1 + 100) >> (bVar6 & 0x1f);
      uVar9 = *(uint *)(param_1 + 0x60) >> (bVar6 & 0x1f);
      if (uVar8 < 2) {
        uVar8 = uVar11;
      }
      if (uVar9 < 2) {
        uVar9 = uVar12;
      }
      (*DAT_146ab4178)(param_3,param_2,0,0,uVar9,uVar8,
                       *(undefined4 *)((longlong)&DAT_146ab3640 + lVar14),
                       CONCAT44(uVar16,*(undefined4 *)((longlong)&DAT_146ab3640 + lVar14 + 4)),0);
    }
    else {
      if (*(char *)(&DAT_146ab3648 + (longlong)iVar13 * 0xe) != '\0') {
        uVar11 = *(uint *)(param_1 + 100) >> (bVar6 & 0x1f);
        uVar8 = *(uint *)(param_1 + 0x60) >> (bVar6 & 0x1f);
        if (uVar11 < 2) {
          uVar11 = uVar12;
        }
        if (uVar8 < 2) {
          uVar8 = uVar12;
        }
        (*DAT_146ab4250)(*(undefined4 *)(param_1 + 0x84),param_2,0,0,param_3,uVar8,uVar11,
                         CONCAT44(uVar16,1),
                         CONCAT44(uVar17,*(undefined4 *)
                                          ((longlong)&DAT_146ab3630 + (ulonglong)bVar15 * 4 + lVar14
                                          )),*(undefined4 *)(puVar4 + 2),0);
        goto LAB_141eab1b1;
      }
      (*DAT_146ab40d0)(0xcf5,1);
      uVar12 = *(uint *)(param_1 + 100) >> (bVar6 & 0x1f);
      uVar8 = *(uint *)(param_1 + 0x60) >> (bVar6 & 0x1f);
      if (uVar12 < 2) {
        uVar12 = uVar11;
      }
      if (uVar8 < 2) {
        uVar8 = uVar11;
      }
      (*DAT_146ab4218)(*(undefined4 *)(param_1 + 0x84),param_2,0,0,param_3,uVar8,uVar12,
                       CONCAT44(uVar16,1),
                       CONCAT44(uVar17,*(undefined4 *)((longlong)&DAT_146ab3640 + lVar14)),
                       *(undefined4 *)((longlong)&DAT_146ab3640 + lVar14 + 4),0);
    }
    (*DAT_146ab40d0)(0xcf5,4);
  }
LAB_141eab1b1:
  puVar5 = *(undefined8 **)(lVar3 + *(longlong *)(param_1 + 0xa0));
  *(undefined8 *)(lVar3 + *(longlong *)(param_1 + 0xa0)) = 0;
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  FUN_141e6dae0(0);
  piVar1 = (int *)(puVar4 + 1);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  return;
}



// FUNCTION 141eab210 Unlock body=1025 status=ok
// SIG undefined Unlock(void)

void TOpenGLTexture<FOpenGLBaseTextureCube>::Unlock(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar14;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar15;
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  uVar9 = *(uint *)(param_1 + 0x68);
  bVar6 = (byte)param_2;
  if (uVar9 < 2) {
    uVar9 = 0;
  }
  uVar8 = 1;
  if (uVar9 != 0) {
    uVar8 = uVar9;
  }
  iVar12 = 1;
  if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
    iVar12 = 6;
  }
  lVar3 = (longlong)(int)(iVar12 * uVar8 * param_2 + param_3) * 8;
  puVar4 = *(undefined8 **)(lVar3 + *(longlong *)(param_1 + 0xa0));
  if (puVar4 != (undefined8 *)0x0) {
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
  }
  iVar12 = *(int *)(param_1 + 0x3c);
  lVar10 = (longlong)iVar12 * 0x1c;
  bVar13 = (byte)(*(uint *)(param_1 + 0x40) >> 4) & 1;
  TOpenGLBuffer<FOpenGLBasePixelBuffer,35052,&CachedBindPixelUnpackBuffer>::Unlock(puVar4);
  if ((*(uint *)(puVar4 + 5) >> 1 & 1) == 0) {
    lVar7 = FUN_141e711c0(*(undefined8 *)(param_1 + 0x70),1);
    iVar11 = DAT_1464c97fc + -1;
    if ((*(int *)(*(longlong *)(lVar7 + 8) + 0x10 + (longlong)iVar11 * 0x28) !=
         *(int *)(param_1 + 0x84)) ||
       (*(int *)(*(longlong *)(lVar7 + 8) + 0x14 + (longlong)iVar11 * 0x28) !=
        *(int *)(param_1 + 0x80))) {
      FUN_141e6dbc0(*(undefined8 *)(param_1 + 0x70),lVar7,iVar11,*(int *)(param_1 + 0x84),
                    *(int *)(param_1 + 0x80),0xffffffff,*(undefined4 *)(param_1 + 0x34));
    }
    uVar9 = *(uint *)(param_1 + 0x68);
    if (uVar9 < 2) {
      uVar9 = 0;
    }
    if (uVar9 == 0) {
      if (*(char *)(&DAT_146ab3648 + (longlong)iVar12 * 0xe) != '\0') {
        uVar9 = *(uint *)(param_1 + 0xe8) & 1;
        iVar12 = 1;
        if (uVar9 != 0) {
          iVar12 = 6;
        }
        uVar8 = iVar12 * param_2 + param_3;
        lVar7 = *(longlong *)(param_1 + 0xd8);
        if (*(longlong *)(param_1 + 0xd8) == 0) {
          lVar7 = param_1 + 0xd0;
        }
        if ((*(uint *)(lVar7 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4) >>
             (uVar8 & 0x1f) & 1) == 0) {
          iVar12 = param_3 + 0x8515;
          if (uVar9 == 0) {
            iVar12 = *(int *)(param_1 + 0x84);
          }
          uVar9 = *(uint *)(param_1 + 0x60) >> (bVar6 & 0x1f);
          if (uVar9 < 2) {
            uVar9 = 1;
          }
          (*DAT_146ab4240)(iVar12,param_2,
                           *(undefined4 *)
                            ((longlong)&DAT_146ab3630 + (ulonglong)bVar13 * 4 + lVar10),uVar9,uVar9,
                           0,*(undefined4 *)(puVar4 + 2),0);
          iVar12 = 1;
          if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
            iVar12 = 6;
          }
          param_3 = iVar12 * param_2 + param_3;
          lVar10 = *(longlong *)(param_1 + 0xd8);
          if (*(longlong *)(param_1 + 0xd8) == 0) {
            lVar10 = param_1 + 0xd0;
          }
          puVar2 = (uint *)(lVar10 + (longlong)((int)(param_3 + (param_3 >> 0x1f & 0x1fU)) >> 5) * 4
                           );
          *puVar2 = *puVar2 | 1 << ((byte)param_3 & 0x1f);
        }
        else {
          if (uVar9 == 0) {
            param_3 = *(int *)(param_1 + 0x84);
          }
          else {
            param_3 = param_3 + 0x8515;
          }
          uVar9 = *(uint *)(param_1 + 0x60) >> (bVar6 & 0x1f);
          if (uVar9 < 2) {
            uVar9 = 1;
          }
          (*DAT_146ab4258)(param_3,param_2,0,0,uVar9,uVar9,
                           *(undefined4 *)
                            ((longlong)&DAT_146ab3630 + (ulonglong)bVar13 * 4 + lVar10),
                           CONCAT44(uVar14,*(undefined4 *)(puVar4 + 2)),0);
        }
        goto LAB_141eab5b5;
      }
      (*DAT_146ab40d0)(0xcf5,1);
      if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
        param_3 = *(int *)(param_1 + 0x84);
      }
      else {
        param_3 = param_3 + 0x8515;
      }
      uVar9 = *(uint *)(param_1 + 0x60) >> (bVar6 & 0x1f);
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      (*DAT_146ab4178)(param_3,param_2,0,0,uVar9,uVar9,
                       *(undefined4 *)((longlong)&DAT_146ab3640 + lVar10),
                       CONCAT44(uVar14,*(undefined4 *)((longlong)&DAT_146ab3640 + lVar10 + 4)),0);
    }
    else {
      if (*(char *)(&DAT_146ab3648 + (longlong)iVar12 * 0xe) != '\0') {
        uVar9 = *(uint *)(param_1 + 0x60) >> (bVar6 & 0x1f);
        if (uVar9 < 2) {
          uVar9 = 1;
        }
        (*DAT_146ab4250)(*(undefined4 *)(param_1 + 0x84),param_2,0,0,param_3,uVar9,uVar9,
                         CONCAT44(uVar14,1),
                         CONCAT44(uVar15,*(undefined4 *)
                                          ((longlong)&DAT_146ab3630 + (ulonglong)bVar13 * 4 + lVar10
                                          )),*(undefined4 *)(puVar4 + 2),0);
        goto LAB_141eab5b5;
      }
      (*DAT_146ab40d0)(0xcf5,1);
      uVar9 = *(uint *)(param_1 + 0x60) >> (bVar6 & 0x1f);
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      (*DAT_146ab4218)(*(undefined4 *)(param_1 + 0x84),param_2,0,0,param_3,uVar9,uVar9,
                       CONCAT44(uVar14,1),
                       CONCAT44(uVar15,*(undefined4 *)((longlong)&DAT_146ab3640 + lVar10)),
                       *(undefined4 *)((longlong)&DAT_146ab3640 + lVar10 + 4),0);
    }
    (*DAT_146ab40d0)(0xcf5,4);
  }
LAB_141eab5b5:
  puVar5 = *(undefined8 **)(lVar3 + *(longlong *)(param_1 + 0xa0));
  *(undefined8 *)(lVar3 + *(longlong *)(param_1 + 0xa0)) = 0;
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  FUN_141e6dae0(0);
  piVar1 = (int *)(puVar4 + 1);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  return;
}



// FUNCTION 141eab620 FUN_141eab620 body=1211 status=ok
// SIG undefined FUN_141eab620(void)

void FUN_141eab620(longlong param_1,longlong param_2,longlong param_3,int param_4,undefined1 param_5
                  )

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined4 *_Dst;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  longlong local_res18;
  int local_res20 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined7 uStack_af;
  code *local_a8 [2];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  
  uVar5 = 0;
  local_res18 = param_3;
  local_res20[0] = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ab3f68) && (_Init_thread_header(&DAT_146ab3f68), DAT_146ab3f68 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.RHICmdBufferWriteLocks");
    uVar8 = uVar5;
    if (plVar7 != (longlong *)0x0) {
      uVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146ab3f60 = uVar8;
    _Init_thread_footer(&DAT_146ab3f68);
  }
  iVar9 = *(int *)(param_1 + 0x16040);
  iVar1 = *(int *)(DAT_146ab3f60 + 4);
  if (0 < iVar9) {
    lVar11 = *(longlong *)(param_1 + 0x16038);
    uVar8 = uVar5;
    lVar12 = lVar11;
    if (lVar11 == 0) {
      lVar12 = param_1 + 0x15e38;
    }
    do {
      iVar13 = (int)uVar8;
      if ((*(longlong *)(uVar5 + lVar12) == local_res18) &&
         (*(int *)(uVar5 + 0x10 + lVar12) == local_res20[0])) {
        if (lVar11 == 0) {
          lVar11 = param_1 + 0x15e38;
        }
        _Dst = (undefined4 *)((longlong)iVar13 * 0x20 + lVar11);
        iVar13 = (iVar9 - iVar13) + -1;
        uVar16 = *_Dst;
        uVar17 = _Dst[1];
        uVar18 = _Dst[2];
        uVar19 = _Dst[3];
        if (0 < iVar13) {
          iVar13 = 1;
        }
        uVar14 = _Dst[4];
        local_d8._4_4_ = _Dst[5];
        uVar15 = _Dst[6];
        iVar4 = _Dst[7];
        if (iVar13 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (_Dst,(void *)((longlong)(iVar9 - iVar13) * 0x20 + lVar11),(longlong)iVar13 << 5
                    );
          iVar9 = *(int *)(param_1 + 0x16040);
        }
        *(int *)(param_1 + 0x16040) = iVar9 + -1;
        *(int *)(param_1 + 0x16048) = *(int *)(param_1 + 0x16048) - local_d8._4_4_;
        goto LAB_141eab705;
      }
      uVar5 = uVar5 + 0x20;
      uVar8 = (ulonglong)(iVar13 + 1U);
    } while ((int)(iVar13 + 1U) < iVar9);
  }
  iVar4 = 1;
  local_d8._4_4_ = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  local_d8._0_4_ = 0;
  uStack_d0._0_4_ = 0;
  uVar14 = (undefined4)local_d8;
  uVar15 = (undefined4)uStack_d0;
LAB_141eab705:
  uVar2 = param_5;
  lVar11 = local_res18;
  if (((iVar1 < 1) || (iVar4 != 1)) || (DAT_146ab6383 == '\0')) {
    *(undefined4 *)(param_1 + 0x16048) = 0;
    iVar9 = local_res20[0];
    if (DAT_146ab6383 != '\0') {
      cVar3 = FUN_1415e13e0();
      iVar9 = local_res20[0];
      lVar11 = local_res18;
      if (cVar3 == '\0') {
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        puVar6 = puVar10 + 0xc;
        if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x70);
          puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
          puVar6 = puVar10 + 0xc;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar6;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar10;
        *(undefined8 **)(param_2 + 8) = puVar10 + 1;
        local_78 = (longlong *)0x0;
        local_68 = 0;
        puVar6 = (undefined8 *)FUN_140438ef0(0x28,local_98);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = &PTR_FUN_143ff7760;
          puVar6[1] = param_1;
          puVar6[2] = &local_res18;
          puVar6[3] = local_res20;
          puVar6[4] = &param_5;
        }
        local_a8[0] = FUN_141e93980;
        puVar10[1] = 0;
        *puVar10 = &PTR_ExecuteAndDestruct_144eb5ab0;
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar10 + 2,local_a8);
        if (local_68 != 0) {
          plVar7 = local_98;
          if (local_78 != (longlong *)0x0) {
            plVar7 = local_78;
          }
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x10))(plVar7,0);
          }
        }
        if (local_78 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (*(int *)(param_2 + 0x14) != 0) {
          FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
        }
        FUN_141ed93a0(param_2);
        if (DAT_146ab6383 != '\0') {
          FRHICommandListBase::WaitForRHIThreadTasks(param_2);
        }
        FRHICommandListBase::WaitForTasks(param_2,1);
        return;
      }
      if (DAT_146ab6383 != '\0') {
        IsInRenderingThread();
      }
    }
    TOpenGLTexture<FOpenGLBaseTexture2D>::Unlock(lVar11,iVar9,0);
  }
  else {
    local_d8 = CONCAT44(local_d8._4_4_,local_res20[0]);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uStack_d0 = CONCAT44(uVar17,uVar16);
    puVar6 = puVar10 + 0xc;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x70);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      puVar6 = puVar10 + 0xc;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x48,local_98);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[1] = param_1;
      puVar6[2] = lVar11;
      *puVar6 = &PTR_FUN_144ebe6d8;
      puVar6[3] = local_d8;
      puVar6[4] = uStack_d0;
      puVar6[5] = CONCAT44(uVar19,uVar18);
      puVar6[6] = CONCAT44(local_d8._4_4_,uVar14);
      puVar6[7] = CONCAT44(1,uVar15);
      puVar6[8] = CONCAT71(uStack_af,uVar2);
    }
    local_a8[0] = (code *)&LAB_141e93b90;
    puVar10[1] = 0;
    *puVar10 = &PTR_ExecuteAndDestruct_144eb5ab0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar10 + 2,local_a8);
    if (local_68 != 0) {
      plVar7 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar7 = local_78;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141eabae0 WaitForCompletion body=19 status=ok
// SIG undefined WaitForCompletion(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FOpenGLEventQuery::WaitForCompletion(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141eabaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_146ab4808)(*(undefined8 *)(param_1 + 0x38),0,500000000);
  return;
}



// FUNCTION 141eabb00 FUN_141eabb00 body=194 status=ok
// SIG undefined FUN_141eabb00(void)

void * FUN_141eabb00(undefined8 *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  _Src = (void *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  iVar1 = *(int *)((longlong)_Src + 0x380);
  *(int *)((longlong)param_2 + 0x380) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 900) = 0;
  }
  else {
    FUN_141eb3fe0(param_2,iVar1,0);
    _guard_xfg_dispatch_icall_nop(param_2,_Src,(longlong)iVar1 * 0x1c);
  }
  *(undefined4 *)((longlong)param_2 + 0x388) = *(undefined4 *)((longlong)_Src + 0x388);
  uVar3 = *(undefined8 *)((longlong)_Src + 0x394);
  *(undefined8 *)((longlong)param_2 + 0x38c) = *(undefined8 *)((longlong)_Src + 0x38c);
  *(undefined8 *)((longlong)param_2 + 0x394) = uVar3;
  uVar3 = *(undefined8 *)((longlong)_Src + 0x3a4);
  *(undefined8 *)((longlong)param_2 + 0x39c) = *(undefined8 *)((longlong)_Src + 0x39c);
  *(undefined8 *)((longlong)param_2 + 0x3a4) = uVar3;
  uVar3 = *(undefined8 *)((longlong)_Src + 0x3b4);
  *(undefined8 *)((longlong)param_2 + 0x3ac) = *(undefined8 *)((longlong)_Src + 0x3ac);
  *(undefined8 *)((longlong)param_2 + 0x3b4) = uVar3;
  uVar3 = *(undefined8 *)((longlong)_Src + 0x3c4);
  *(undefined8 *)((longlong)param_2 + 0x3bc) = *(undefined8 *)((longlong)_Src + 0x3bc);
  *(undefined8 *)((longlong)param_2 + 0x3c4) = uVar3;
  *(undefined8 *)((longlong)param_2 + 0x3d0) = *puVar2;
  *puVar2 = 0;
  return param_2;
}



// FUNCTION 141eabbd0 FUN_141eabbd0 body=657 status=ok
// SIG undefined FUN_141eabbd0(void)

int * FUN_141eabbd0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  bool bVar13;
  
  iVar10 = 1;
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
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar9 & 0x1f);
  puVar2 = (uint *)(*param_1 + (longlong)iVar9 * 0x18);
  plVar7 = (longlong *)param_3[1];
  *puVar2 = *(uint *)*param_3;
  lVar3 = *plVar7;
  *(longlong *)(puVar2 + 2) = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  puVar2[4] = 0xffffffff;
  bVar13 = false;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    if (uVar12 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar7 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar2) * 4);
      if (iVar8 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar8 * 0x18) == *puVar2) goto LAB_141eabd2b;
          iVar8 = *(int *)(*param_1 + 0x10 + (longlong)iVar8 * 0x18);
        } while (iVar8 != -1);
      }
    }
    iVar8 = -1;
LAB_141eabd2b:
    bVar13 = iVar8 != -1;
    if (bVar13) {
      lVar3 = *param_1;
      puVar4 = *(undefined8 **)(lVar3 + 8 + (longlong)iVar8 * 0x18);
      if (puVar4 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar4 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar3 + (longlong)iVar8 * 0x18),puVar2,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar8;
      goto LAB_141eabe38;
    }
  }
  if (3 < uVar12) {
    uVar6 = (uVar12 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar6 != 0) {
      iVar8 = 0x1f - iVar10;
    }
    uVar6 = (uVar12 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar6 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar12 = (int)param_1[9] - 1U & *puVar2;
    puVar2[5] = uVar12;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar2[4] = *(uint *)((longlong)plVar7 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<int,UTexture2D_*>,TDefaultMapHashableKeyFuncs<int,UTexture2D_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141eabe38:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 141eabe70 FUN_141eabe70 body=761 status=ok
// SIG undefined FUN_141eabe70(void)

int * FUN_141eabe70(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  void *_Dst;
  uint uVar13;
  void *_Src;
  int iVar14;
  bool bVar15;
  
  iVar9 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar11 = *(int *)((longlong)iVar10 * 0x3e0 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar11;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar11 * 0x3e0 + *param_1) = 0xffffffff;
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
  _Src = (void *)((longlong)iVar10 * 0x3e0 + *param_1);
  FUN_141eabb00(param_3,_Src);
  *(undefined4 *)((longlong)_Src + 0x3d8) = 0xffffffff;
  bVar15 = false;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar10 = iVar14;
    if (uVar13 != 0) {
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar11 = *(int *)((longlong)plVar8 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x388))
                       * 4);
      if (iVar11 != -1) {
        lVar2 = *param_1;
        do {
          lVar12 = (longlong)iVar11 * 0x3e0 + lVar2;
          cVar4 = operator==(lVar12,_Src);
          iVar10 = iVar11;
          if (cVar4 != '\0') break;
          iVar11 = *(int *)(lVar12 + 0x3d8);
          iVar10 = iVar14;
        } while (iVar11 != -1);
      }
    }
    bVar15 = iVar10 != -1;
    if (bVar15) {
      _Dst = (void *)((longlong)iVar10 * 0x3e0 + *param_1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>((longlong)_Dst + 0x3d0);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x3d8);
      iVar9 = *param_2;
      bVar3 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x3e0 + *param_1) = iVar9;
      }
      puVar7 = (undefined4 *)((longlong)iVar9 * 0x3e0 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar7[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141eac144;
    }
  }
  if (3 < uVar13) {
    uVar6 = (uVar13 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar9 = 0x20;
    cVar4 = '\0';
    if (uVar6 != 0) {
      iVar9 = 0x1f - iVar14;
    }
    uVar6 = (uVar13 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar4 = '\x1f' - (char)iVar14;
    }
    iVar9 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar4 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar13 = (int)param_1[9] - 1U & *(uint *)((longlong)_Src + 0x388);
    *(uint *)((longlong)_Src + 0x3dc) = uVar13;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x3d8) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    FUN_141eb39b0(param_1);
  }
LAB_141eac144:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 141eac170 HeapSortInternal<FScreenResolutionRHI,FIdentityFunctor,TDereferenceWrapper<FScreenResolutionRHI,<lambda_95a754f01efc037c0628af1c24830697>_>_> body=542 status=ok
// SIG undefined HeapSortInternal<FScreenResolutionRHI,FIdentityFunctor,TDereferenceWrapper<FScreenResolutionRHI,<lambda_95a754f01efc037c0628af1c24830697>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FScreenResolutionRHI,FIdentityFunctor,TDereferenceWrapper<FScreenResolutionRHI,<lambda_95a754f01efc037c0628af1c24830697>_>_>
               (undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  bool bVar13;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar6 = iVar8;
    iVar11 = iVar7;
joined_r0x000141eac1a5:
    do {
      if (iVar8 < param_2) {
        iVar8 = iVar7 * 2;
        iVar10 = iVar8 + 1;
        if (iVar8 + 2 < param_2) {
          puVar1 = (uint *)((longlong)param_1 + ((longlong)iVar8 + 2) * 0xc);
          lVar9 = (longlong)iVar10;
          uVar3 = *(uint *)((longlong)param_1 + lVar9 * 0xc);
          bVar13 = *puVar1 < uVar3;
          if ((*puVar1 == uVar3) &&
             (uVar3 = *(uint *)((longlong)param_1 + lVar9 * 0xc + 4), bVar13 = puVar1[1] < uVar3,
             puVar1[1] == uVar3)) {
            bVar13 = puVar1[2] < *(uint *)((longlong)param_1 + lVar9 * 0xc + 8);
          }
          if (bVar13) {
            iVar10 = iVar8;
          }
          iVar10 = iVar10 + 1;
        }
        puVar1 = (uint *)((longlong)param_1 + (longlong)iVar7 * 0xc);
        uVar3 = *(uint *)((longlong)param_1 + (longlong)iVar10 * 0xc);
        bVar13 = *puVar1 < uVar3;
        puVar2 = (uint *)((longlong)param_1 + (longlong)iVar10 * 0xc);
        if ((*puVar1 == uVar3) && (bVar13 = puVar1[1] < puVar2[1], puVar1[1] == puVar2[1])) {
          bVar13 = puVar1[2] < puVar2[2];
        }
        if (bVar13) {
          if (puVar1 != puVar2) {
            uVar4 = *(undefined8 *)puVar1;
            uVar3 = puVar1[2];
            *(undefined8 *)puVar1 = *(undefined8 *)puVar2;
            puVar1[2] = puVar2[2];
            *(undefined8 *)puVar2 = uVar4;
            puVar2[2] = uVar3;
          }
          iVar8 = iVar10 * 2 + 1;
          iVar7 = iVar10;
          goto joined_r0x000141eac1a5;
        }
      }
      iVar8 = iVar6 + -2;
      iVar7 = iVar11 + -1;
      iVar6 = iVar8;
      iVar11 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar12 = (undefined8 *)((longlong)param_1 + (longlong)param_2 * 0xc);
    do {
      if (param_1 != puVar12) {
        uVar4 = *param_1;
        uVar5 = *(undefined4 *)(param_1 + 1);
        *param_1 = *puVar12;
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar12 + 1);
        *puVar12 = uVar4;
        *(undefined4 *)(puVar12 + 1) = uVar5;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar6 = iVar7 * 2;
          iVar8 = iVar6 + 1;
          if (iVar6 + 2 < param_2) {
            puVar1 = (uint *)((longlong)param_1 + ((longlong)iVar6 + 2) * 0xc);
            lVar9 = (longlong)iVar8;
            uVar3 = *(uint *)((longlong)param_1 + lVar9 * 0xc);
            bVar13 = *puVar1 < uVar3;
            if ((*puVar1 == uVar3) &&
               (uVar3 = *(uint *)((longlong)param_1 + lVar9 * 0xc + 4), bVar13 = puVar1[1] < uVar3,
               puVar1[1] == uVar3)) {
              bVar13 = puVar1[2] < *(uint *)((longlong)param_1 + lVar9 * 0xc + 8);
            }
            if (bVar13) {
              iVar8 = iVar6;
            }
            iVar8 = iVar8 + 1;
          }
          puVar1 = (uint *)((longlong)param_1 + (longlong)iVar7 * 0xc);
          uVar3 = *(uint *)((longlong)param_1 + (longlong)iVar8 * 0xc);
          bVar13 = *puVar1 < uVar3;
          puVar2 = (uint *)((longlong)param_1 + (longlong)iVar8 * 0xc);
          if ((*puVar1 == uVar3) && (bVar13 = puVar1[1] < puVar2[1], puVar1[1] == puVar2[1])) {
            bVar13 = puVar1[2] < puVar2[2];
          }
          if (!bVar13) break;
          if (puVar1 != puVar2) {
            uVar4 = *(undefined8 *)puVar1;
            uVar3 = puVar1[2];
            *(undefined8 *)puVar1 = *(undefined8 *)puVar2;
            puVar1[2] = puVar2[2];
            *(undefined8 *)puVar2 = uVar4;
            puVar2[2] = uVar3;
          }
          iVar7 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar12 = (undefined8 *)((longlong)puVar12 + -0xc);
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141eac390 IntroSortInternal<FScreenResolutionRHI,FIdentityFunctor,TDereferenceWrapper<FScreenResolutionRHI,<lambda_95a754f01efc037c0628af1c24830697>_>_> body=881 status=ok
// SIG undefined IntroSortInternal<FScreenResolutionRHI,FIdentityFunctor,TDereferenceWrapper<FScreenResolutionRHI,<lambda_95a754f01efc037c0628af1c24830697>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FScreenResolutionRHI,FIdentityFunctor,TDereferenceWrapper<FScreenResolutionRHI,<lambda_95a754f01efc037c0628af1c24830697>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  longlong *plVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0xc + -0xc;
    fVar13 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar13 = fVar13 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar13 = ::_guard_xfg_dispatch_icall_nop(fVar13);
    local_328 = (undefined4)(longlong)(fVar13 + fVar13);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar11 = &local_338;
    do {
      puVar8 = (uint *)*plVar11;
      puVar5 = (uint *)plVar11[1];
      lVar1 = plVar11[2];
      local_348._0_4_ = (int)lVar1;
      lVar4 = ((longlong)puVar5 - (longlong)puVar8) / 0xc + 1;
      puVar7 = puVar8;
      if ((int)local_348 != 0) {
LAB_141eac480:
        if (8 < lVar4) {
          if (lVar4 < 0) {
            lVar4 = lVar4 + 1;
          }
          puVar8 = puVar7 + (lVar4 >> 1) * 3;
          if (puVar8 != puVar7) {
            uVar2 = *(undefined8 *)puVar8;
            uVar3 = puVar8[2];
            *(undefined8 *)puVar8 = *(undefined8 *)puVar7;
            puVar8[2] = puVar7[2];
            *(undefined8 *)puVar7 = uVar2;
            puVar7[2] = uVar3;
          }
          puVar9 = puVar5 + 3;
          puVar8 = puVar7;
LAB_141eac4d0:
          puVar6 = puVar8;
          puVar8 = puVar6 + 3;
          if (puVar8 <= puVar5) goto code_r0x000141eac4d9;
          goto LAB_141eac500;
        }
        for (; puVar8 = puVar7, puVar9 = puVar7, puVar7 < puVar5; puVar5 = puVar5 + -3) {
          while (puVar6 = puVar8, puVar8 = puVar9 + 3, puVar8 <= puVar5) {
            bVar12 = *puVar6 < *puVar8;
            if ((*puVar6 == *puVar8) && (bVar12 = puVar6[1] < puVar9[4], puVar6[1] == puVar9[4])) {
              bVar12 = puVar6[2] < puVar9[5];
            }
            puVar9 = puVar8;
            if (!bVar12) {
              puVar8 = puVar6;
            }
          }
          if (puVar6 != puVar5) {
            uVar2 = *(undefined8 *)puVar6;
            uVar3 = puVar6[2];
            *(undefined8 *)puVar6 = *(undefined8 *)puVar5;
            puVar6[2] = puVar5[2];
            *(undefined8 *)puVar5 = uVar2;
            puVar5[2] = uVar3;
          }
        }
        goto LAB_141eac63d;
      }
LAB_141eac62e:
      local_348 = lVar1;
      HeapSortInternal<FScreenResolutionRHI,FIdentityFunctor,TDereferenceWrapper<FScreenResolutionRHI,<lambda_95a754f01efc037c0628af1c24830697>_>_>
                (puVar8,lVar4,param_3,param_4);
LAB_141eac63d:
      plVar11 = plVar11 + -3;
    } while (&local_338 <= plVar11);
  }
  return;
code_r0x000141eac4d9:
  bVar12 = *puVar7 < *puVar8;
  if ((*puVar7 == *puVar8) && (bVar12 = puVar7[1] < puVar6[4], puVar7[1] == puVar6[4])) {
    bVar12 = puVar7[2] < puVar6[5];
  }
  if (!bVar12) goto LAB_141eac4d0;
LAB_141eac500:
  do {
    puVar10 = puVar9;
    puVar9 = puVar10 + -3;
    if (puVar9 <= puVar7) break;
    bVar12 = *puVar9 < *puVar7;
    if ((*puVar9 == *puVar7) && (bVar12 = puVar10[-2] < puVar7[1], puVar10[-2] == puVar7[1])) {
      bVar12 = puVar10[-1] < puVar7[2];
    }
  } while (!bVar12);
  if (puVar8 <= puVar9) {
    if (puVar8 != puVar9) {
      uVar2 = *(undefined8 *)puVar8;
      uVar3 = puVar6[5];
      *(undefined8 *)puVar8 = *(undefined8 *)puVar9;
      puVar6[5] = puVar10[-1];
      *(undefined8 *)puVar9 = uVar2;
      puVar10[-1] = uVar3;
    }
    goto LAB_141eac4d0;
  }
  if (puVar7 != puVar9) {
    uVar2 = *(undefined8 *)puVar7;
    uVar3 = puVar7[2];
    *(undefined8 *)puVar7 = *(undefined8 *)puVar9;
    puVar7[2] = puVar10[-1];
    *(undefined8 *)puVar9 = uVar2;
    puVar10[-1] = uVar3;
  }
  local_348._0_4_ = (int)local_348 + -1;
  lVar4 = (longlong)puVar9 + (-0xc - (longlong)puVar7);
  lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
  if ((lVar4 >> 1) - (lVar4 >> 0x3f) < ((longlong)puVar5 - (longlong)puVar8) / 0xc) {
    if (puVar8 < puVar5) {
      *plVar11 = (longlong)puVar8;
      plVar11[1] = (longlong)puVar5;
      *(int *)(plVar11 + 2) = (int)local_348;
      plVar11 = plVar11 + 3;
    }
    if (puVar9 <= puVar7 + 3) goto LAB_141eac63d;
    puVar5 = puVar10 + -6;
    puVar8 = puVar7;
  }
  else {
    if (puVar7 + 3 < puVar9) {
      *plVar11 = (longlong)puVar7;
      plVar11[1] = (longlong)(puVar10 + -6);
      *(int *)(plVar11 + 2) = (int)local_348;
      plVar11 = plVar11 + 3;
    }
    if (puVar5 <= puVar8) goto LAB_141eac63d;
  }
  lVar4 = ((longlong)puVar5 - (longlong)puVar8) / 0xc + 1;
  puVar7 = puVar8;
  if ((int)local_348 == 0) goto LAB_141eac62e;
  goto LAB_141eac480;
}



// FUNCTION 141eac710 Sort<FOpenGLVertexElement,TDereferenceWrapper<FOpenGLVertexElement,`FOpenGLVertexDeclarationKey::FOpenGLVertexDeclarationKey'::`2'::FCompareFOpenGLVertexElement>_> body=969 status=ok
// SIG undefined Sort<FOpenGLVertexElement,TDereferenceWrapper<FOpenGLVertexElement,`FOpenGLVertexDeclarationKey::FOpenGLVertexDeclarationKey'::`2'::FCompareFOpenGLVertexElement>_>(void)

void TMergeSort<TRotationInPlaceMerge<TJugglingRotation<FEuclidDivisionGCD>_>,2>::
     Sort<FOpenGLVertexElement,TDereferenceWrapper<FOpenGLVertexElement,_FOpenGLVertexDeclarationKey::FOpenGLVertexDeclarationKey_::_2_::FCompareFOpenGLVertexElement>_>
               (longlong param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  uint *puVar19;
  ulonglong uVar20;
  int iVar21;
  undefined8 *puVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  int local_94;
  int local_90;
  longlong local_80;
  undefined4 local_58 [8];
  
  uVar17 = (ulonglong)(int)param_2;
  if (0 < (int)param_2) {
    iVar23 = 1;
    puVar19 = (uint *)(param_1 + 0x24);
    lVar28 = (uVar17 - 1 >> 1) + 1;
    do {
      if ((iVar23 < (int)param_2) &&
         ((puVar19[-1] < puVar19[-8] ||
          ((puVar19[-1] == puVar19[-8] &&
           ((*puVar19 < puVar19[-7] ||
            ((*puVar19 == puVar19[-7] &&
             (*(byte *)((longlong)puVar19 + 0x11) < *(byte *)((longlong)puVar19 + -0xb))))))))))) {
        puVar15 = (undefined8 *)((longlong)iVar23 * 0x1c + param_1);
        puVar22 = (undefined8 *)((longlong)(iVar23 + -1) * 0x1c + param_1);
        if (puVar22 != puVar15) {
          uVar5 = puVar15[1];
          uVar18 = *(undefined4 *)(puVar22 + 3);
          uVar6 = *puVar22;
          uVar7 = puVar22[1];
          uVar1 = puVar22[2];
          *puVar22 = *puVar15;
          puVar22[1] = uVar5;
          puVar22[2] = puVar15[2];
          *(undefined4 *)(puVar22 + 3) = *(undefined4 *)(puVar15 + 3);
          *puVar15 = uVar6;
          puVar15[1] = uVar7;
          puVar15[2] = uVar1;
          *(undefined4 *)(puVar15 + 3) = uVar18;
        }
      }
      iVar23 = iVar23 + 2;
      puVar19 = puVar19 + 0xe;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
  }
  local_90 = 2;
  uVar13 = uVar17;
  if (2 < (int)param_2) {
    do {
      iVar23 = local_90 * 2;
      local_94 = 0;
      local_80 = 0;
      lVar28 = param_1;
      do {
        iVar10 = (int)uVar13 - local_94;
        if (iVar23 <= iVar10) {
          iVar10 = iVar23;
        }
        iVar30 = 0;
        iVar29 = local_90;
        if (0 < local_90) {
          do {
            if (iVar10 <= iVar29) break;
            lVar26 = 0;
            lVar25 = (longlong)iVar29 * 0x1c;
            if (iVar29 - iVar30 != 0) {
              uVar14 = *(uint *)(lVar25 + 4 + lVar28);
              uVar13 = (longlong)(iVar29 - iVar30);
              do {
                uVar20 = uVar13 >> 1;
                lVar12 = (uVar20 + lVar26 + (longlong)iVar30) * 0x1c;
                uVar2 = *(uint *)(lVar12 + 4 + lVar28);
                if (uVar14 < uVar2) {
                  bVar8 = true;
                }
                else if (uVar2 < uVar14) {
LAB_141eac8ea:
                  bVar8 = false;
                }
                else {
                  uVar3 = *(uint *)(lVar25 + 8 + lVar28);
                  uVar2 = *(uint *)(lVar12 + 8 + lVar28);
                  if (uVar3 < uVar2) {
                    bVar8 = true;
                  }
                  else {
                    if ((uVar2 < uVar3) ||
                       (*(byte *)(lVar12 + 0x19 + lVar28) <= *(byte *)(lVar25 + 0x19 + lVar28)))
                    goto LAB_141eac8ea;
                    bVar8 = true;
                  }
                }
                if (!bVar8) {
                  lVar26 = (ulonglong)((uint)uVar13 & 1) + uVar20 + lVar26;
                }
                uVar13 = uVar20;
              } while (uVar20 != 0);
            }
            iVar30 = iVar30 + (int)lVar26;
            if (iVar29 <= iVar30) break;
            uVar13 = 0;
            lVar26 = (longlong)iVar30 * 0x1c;
            if (iVar10 - iVar29 != 0) {
              uVar14 = *(uint *)(lVar26 + 4 + lVar28);
              uVar20 = (longlong)(iVar10 - iVar29);
              do {
                uVar16 = uVar20 >> 1;
                lVar25 = (uVar16 + uVar13 + (longlong)iVar29) * 0x1c;
                uVar2 = *(uint *)(lVar25 + 4 + lVar28);
                if (uVar2 < uVar14) {
                  bVar8 = true;
                }
                else if (uVar14 < uVar2) {
LAB_141eac96a:
                  bVar8 = false;
                }
                else {
                  uVar3 = *(uint *)(lVar25 + 8 + lVar28);
                  uVar2 = *(uint *)(lVar26 + 8 + lVar28);
                  if (uVar3 < uVar2) {
                    bVar8 = true;
                  }
                  else {
                    if ((uVar2 < uVar3) ||
                       (*(byte *)(lVar26 + 0x19 + lVar28) <= *(byte *)(lVar25 + 0x19 + lVar28)))
                    goto LAB_141eac96a;
                    bVar8 = true;
                  }
                }
                if (bVar8) {
                  uVar13 = (ulonglong)((uint)uVar20 & 1) + uVar16 + uVar13;
                }
                uVar20 = uVar16;
              } while (uVar16 != 0);
            }
            iVar21 = (int)uVar13;
            if (iVar21 != 0) {
              uVar13 = uVar13 & 0xffffffff;
              iVar27 = (iVar21 - iVar30) + iVar29;
              iVar24 = iVar27;
              do {
                iVar11 = (int)uVar13;
                uVar14 = iVar24 % iVar11;
                uVar13 = (ulonglong)uVar14;
                iVar24 = iVar11;
              } while (uVar14 != 0);
              uVar13 = 0;
              if (0 < iVar11) {
                lVar26 = 0;
                do {
                  lVar25 = (iVar30 + lVar26) * 0x1c;
                  uVar1 = *(undefined8 *)(lVar25 + 0x10 + lVar28);
                  uVar31 = (undefined4)uVar1;
                  uVar32 = (undefined4)((ulonglong)uVar1 >> 0x20);
                  uVar18 = *(undefined4 *)(lVar25 + 0x18 + lVar28);
                  puVar9 = (undefined4 *)(lVar25 + lVar28);
                  uVar33 = *puVar9;
                  uVar35 = puVar9[1];
                  uVar37 = puVar9[2];
                  uVar39 = puVar9[3];
                  iVar24 = (int)uVar13;
                  uVar20 = (longlong)iVar27 / (longlong)iVar11 & 0xffffffff;
                  if (0 < (int)((longlong)iVar27 / (longlong)iVar11)) {
                    do {
                      uVar16 = (longlong)((int)uVar13 + iVar21) % (longlong)iVar27;
                      uVar13 = uVar16 & 0xffffffff;
                      puVar9 = (undefined4 *)((longlong)((int)uVar16 + iVar30) * 0x1c + lVar28);
                      uVar34 = uVar33;
                      uVar36 = uVar35;
                      uVar38 = uVar37;
                      uVar40 = uVar39;
                      if (puVar9 != local_58) {
                        uVar34 = *puVar9;
                        uVar36 = puVar9[1];
                        uVar38 = puVar9[2];
                        uVar40 = puVar9[3];
                        uVar4 = puVar9[6];
                        uVar1 = *(undefined8 *)(puVar9 + 4);
                        *puVar9 = uVar33;
                        puVar9[1] = uVar35;
                        puVar9[2] = uVar37;
                        puVar9[3] = uVar39;
                        *(ulonglong *)(puVar9 + 4) = CONCAT44(uVar32,uVar31);
                        puVar9[6] = uVar18;
                        uVar31 = (undefined4)uVar1;
                        uVar32 = (undefined4)((ulonglong)uVar1 >> 0x20);
                        uVar18 = uVar4;
                      }
                      uVar20 = uVar20 - 1;
                      uVar33 = uVar34;
                      uVar35 = uVar36;
                      uVar37 = uVar38;
                      uVar39 = uVar40;
                    } while (uVar20 != 0);
                  }
                  uVar14 = iVar24 + 1;
                  uVar13 = (ulonglong)uVar14;
                  lVar26 = lVar26 + 1;
                } while ((int)uVar14 < iVar11);
              }
            }
            iVar30 = iVar30 + 1 + iVar21;
            iVar29 = iVar29 + iVar21;
          } while (iVar30 < iVar29);
          uVar13 = (ulonglong)param_2;
        }
        local_94 = local_94 + local_90 * 2;
        local_80 = local_80 + (longlong)local_90 * 2;
        lVar28 = lVar28 + (longlong)local_90 * 0x38;
      } while (local_80 < (longlong)uVar17);
      local_90 = iVar23;
    } while (iVar23 < (int)uVar13);
  }
  return;
}



// FUNCTION 141eacae0 FUN_141eacae0 body=1008 status=ok
// SIG undefined FUN_141eacae0(void)

longlong FUN_141eacae0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  undefined4 uVar9;
  longlong lVar10;
  short *psVar11;
  int iVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  undefined1 *local_res10;
  undefined4 local_58;
  undefined4 uStack_4c;
  undefined4 local_40;
  
  iVar12 = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x38c) = 0;
  uVar13 = 0;
  *(undefined8 *)(param_1 + 0x394) = 0;
  *(undefined8 *)(param_1 + 0x39c) = 0;
  *(undefined8 *)(param_1 + 0x3a4) = 0;
  *(undefined8 *)(param_1 + 0x3ac) = 0;
  *(undefined8 *)(param_1 + 0x3b4) = 0;
  *(undefined8 *)(param_1 + 0x3bc) = 0;
  *(undefined8 *)(param_1 + 0x3c4) = 0;
  if (0 < *(int *)(param_2 + 0x100)) {
    psVar11 = (short *)(param_2 + 6);
    do {
      bVar2 = *(byte *)(psVar11 + -3);
      sVar5 = *psVar11;
      bVar3 = *(byte *)((longlong)psVar11 + -5);
      local_40 = local_40 & 0xffffff;
      local_40._0_2_ = CONCAT11(*(byte *)((longlong)psVar11 + -3),(undefined1)local_40);
      sVar6 = psVar11[-1];
      sVar8 = (short)(local_40 >> 8);
      switch((char)psVar11[-2]) {
      case '\x01':
        local_58 = 0x1406;
        uStack_4c = 1;
        local_40._0_2_ = (ushort)*(byte *)((longlong)psVar11 + -3) << 8;
        local_40._0_3_ = CONCAT12(1,(ushort)local_40);
        local_40 = (uint)(uint3)local_40;
        break;
      case '\x02':
        local_58 = 0x1406;
        uStack_4c = 2;
        local_40._0_2_ = sVar8 << 8;
        local_40._0_3_ = CONCAT12(1,(ushort)local_40);
        local_40 = (uint)(uint3)local_40;
        break;
      case '\x03':
        local_58 = 0x1406;
        uStack_4c = 3;
        local_40._0_2_ = sVar8 << 8;
        local_40._0_3_ = CONCAT12(1,(ushort)local_40);
        local_40 = (uint)(uint3)local_40;
        break;
      case '\x04':
        local_58 = 0x1406;
        uStack_4c = 4;
        local_40._0_2_ = sVar8 << 8;
        local_40._0_3_ = CONCAT12(1,(ushort)local_40);
        local_40 = (uint)(uint3)local_40;
        break;
      case '\x05':
        local_58 = 0x1400;
        uStack_4c = 4;
        local_40 = CONCAT31(local_40._1_3_,1);
        local_40._0_3_ = CONCAT12(1,(ushort)local_40);
        local_40 = (uint)(uint3)local_40;
        break;
      case '\x06':
        local_58 = 0x1401;
        uStack_4c = 4;
        local_40._0_2_ = sVar8 << 8;
        local_40 = (uint)(ushort)local_40;
        break;
      case '\a':
        local_58 = 0x1401;
        uStack_4c = 4;
        local_40 = CONCAT31(local_40._1_3_,1);
        local_40._0_3_ = CONCAT12(1,(ushort)local_40);
        local_40 = (uint)(uint3)local_40;
        break;
      case '\b':
        local_58 = 0x1401;
        uStack_4c = 0x80e1;
        local_40 = CONCAT31(local_40._1_3_,1);
        local_40._0_3_ = CONCAT12(1,(ushort)local_40);
        local_40 = (uint)(uint3)local_40;
        break;
      case '\t':
        local_58 = 0x1402;
        uStack_4c = 2;
        local_40._0_2_ = sVar8 << 8;
        local_40 = (uint)(ushort)local_40;
        break;
      case '\n':
        local_58 = 0x1402;
        uStack_4c = 4;
        local_40._0_2_ = sVar8 << 8;
        local_40 = (uint)(ushort)local_40;
        break;
      case '\v':
        local_58 = 0x1402;
        uStack_4c = 2;
        local_40 = CONCAT31(local_40._1_3_,1);
        local_40._0_3_ = CONCAT12(1,(ushort)local_40);
        local_40 = (uint)(uint3)local_40;
        break;
      case '\f':
        local_58 = 0x140b;
        uStack_4c = 2;
        local_40._0_2_ = sVar8 << 8;
        local_40._0_3_ = CONCAT12(1,(ushort)local_40);
        local_40 = (uint)(uint3)local_40;
        break;
      case '\r':
        local_58 = 0x140b;
        uStack_4c = 4;
        local_40._0_2_ = sVar8 << 8;
        local_40._0_3_ = CONCAT12(1,(ushort)local_40);
        local_40 = (uint)(uint3)local_40;
        break;
      case '\x0e':
        local_58 = 0x1402;
        uStack_4c = 4;
        local_40 = CONCAT31(local_40._1_3_,1);
        local_40._0_3_ = CONCAT12(1,(ushort)local_40);
        local_40 = (uint)(uint3)local_40;
        break;
      case '\x0f':
        local_58 = 0x1403;
        uStack_4c = 2;
        local_40._0_2_ = sVar8 << 8;
        local_40 = (uint)(ushort)local_40;
        break;
      case '\x10':
        local_58 = 0x1403;
        uStack_4c = 4;
        local_40._0_2_ = sVar8 << 8;
        local_40 = (uint)(ushort)local_40;
        break;
      case '\x11':
        local_58 = 0x1403;
        uStack_4c = 2;
        local_40 = CONCAT31(local_40._1_3_,1);
        local_40._0_3_ = CONCAT12(1,(ushort)local_40);
        local_40 = (uint)(uint3)local_40;
        break;
      case '\x12':
        local_58 = 0x1403;
        uStack_4c = 4;
        local_40 = CONCAT31(local_40._1_3_,1);
        local_40._0_3_ = CONCAT12(1,(ushort)local_40);
        local_40 = (uint)(uint3)local_40;
        break;
      case '\x13':
        local_58 = 0x8368;
        uStack_4c = 4;
        local_40 = CONCAT31(local_40._1_3_,1);
        local_40._0_3_ = CONCAT12(1,(ushort)local_40);
        local_40 = (uint)(uint3)local_40;
        break;
      default:
        LowLevelFatalErrorHandler("Unknown",0x61,L"Unknown RHI vertex element type %u");
        FDebug::AssertFailed
                  (&DAT_143f3f584,"Unknown",0x61,L"Unknown RHI vertex element type %u",
                   (char)psVar11[-2]);
      }
      bVar4 = *(byte *)(psVar11 + -3);
      if (((uVar13 & 0xffff) >> (bVar4 & 0x1f) & 1) == 0) {
        uVar13 = uVar13 & 0xffff | 1 << (bVar4 & 0x1f);
        *(short *)(param_1 + 0x38c + (ulonglong)(uint)bVar4 * 2) = psVar11[-1];
      }
      iVar7 = *(int *)(param_1 + 0x380);
      *(int *)(param_1 + 0x380) = iVar7 + 1;
      if (*(int *)(param_1 + 900) < iVar7 + 1) {
        TArray<FOpenGLVertexElement,TFixedAllocator<32>_>::ResizeGrow(param_1,iVar7);
      }
      iVar12 = iVar12 + 1;
      lVar10 = (longlong)iVar7 * 0x1c;
      psVar11 = psVar11 + 4;
      puVar1 = (undefined4 *)(lVar10 + param_1);
      *puVar1 = local_58;
      puVar1[1] = (uint)bVar2;
      puVar1[2] = (uint)bVar3;
      puVar1[3] = uStack_4c;
      *(ulonglong *)(lVar10 + 0x10 + param_1) = (ulonglong)CONCAT24(sVar6,(uint)(sVar5 != 0));
      *(uint *)(lVar10 + 0x18 + param_1) = local_40;
    } while (iVar12 < *(int *)(param_2 + 0x100));
  }
  local_res10 = local_res8;
  TMergeSort<TRotationInPlaceMerge<TJugglingRotation<FEuclidDivisionGCD>_>,2>::
  Sort<FOpenGLVertexElement,TDereferenceWrapper<FOpenGLVertexElement,_FOpenGLVertexDeclarationKey::FOpenGLVertexDeclarationKey_::_2_::FCompareFOpenGLVertexElement>_>
            (param_1,*(undefined4 *)(param_1 + 0x380),&local_res10);
  uVar9 = FCrc::MemCrc_DEPRECATED(param_1,*(int *)(param_1 + 0x380) * 0x1c,0);
  *(undefined4 *)(param_1 + 0x388) = uVar9;
  uVar9 = FCrc::MemCrc_DEPRECATED(param_1 + 0x38c,0x40,uVar9);
  *(undefined4 *)(param_1 + 0x388) = uVar9;
  return param_1;
}



// FUNCTION 141eacf20 FPlatformOpenGLDevice body=662 status=ok
// SIG undefined FPlatformOpenGLDevice(void)

longlong FPlatformOpenGLDevice::FPlatformOpenGLDevice(longlong param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  BOOL BVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar5;
  HDC pHVar6;
  HGLRC pHVar7;
  LPCRITICAL_SECTION p_Var8;
  undefined4 uVar9;
  
  p_Var8 = (LPCRITICAL_SECTION)0x0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x70) = 1;
  lpCriticalSection = (LPCRITICAL_SECTION)operator_new(0x28);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    InitializeCriticalSection(lpCriticalSection);
    SetCriticalSectionSpinCount(lpCriticalSection,4000);
    p_Var8 = lpCriticalSection;
  }
  *(LPCRITICAL_SECTION *)(param_1 + 0x78) = p_Var8;
  uVar5 = FCommandLine::Get();
  cVar2 = FParse::Param(uVar5,L"opengl3");
  uVar5 = FCommandLine::Get();
  cVar3 = FParse::Param(uVar5,L"opengl");
  if (cVar3 == '\0') {
    uVar5 = FCommandLine::Get();
    cVar3 = FParse::Param(uVar5,L"opengl4");
    bVar1 = false;
    if (cVar3 == '\0') goto LAB_141eacfc8;
  }
  bVar1 = true;
LAB_141eacfc8:
  if ((cVar2 == '\0') && ((bVar1 || (DAT_1464c9828 == 3)))) {
    uVar5 = 4;
    uVar9 = 3;
  }
  else {
    uVar5 = 3;
    uVar9 = 2;
  }
  cVar2 = (*DAT_146ab40a8)(0x6789);
  DAT_146ab3f90 = cVar2 != '\0';
  PlatformCreateDummyGLWindow(param_1);
  PlatformCreateOpenGLContextCore(param_1,uVar5,uVar9,0);
  pHVar6 = wglGetCurrentDC();
  pHVar7 = wglGetCurrentContext();
  if ((pHVar7 == *(HGLRC *)(param_1 + 0x10)) && (pHVar6 == *(HDC *)(param_1 + 8))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    BVar4 = wglMakeCurrent(*(HDC *)(param_1 + 8),*(HGLRC *)(param_1 + 0x10));
    if (BVar4 == 0) {
      wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    }
  }
  InitDebugContext();
  (*DAT_146ab47a8)(1,param_1 + 0x24);
  (*DAT_146ab47b8)(*(undefined4 *)(param_1 + 0x24));
  InitDefaultGLContextState();
  (*DAT_146ab4718)(1,param_1 + 0x20);
  if (!bVar1) {
    if (pHVar7 == (HGLRC)0x0) {
      pHVar7 = (HGLRC)0x0;
      pHVar6 = (HDC)0x0;
    }
    BVar4 = wglMakeCurrent(pHVar6,pHVar7);
    if (BVar4 == 0) {
      wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    }
  }
  PlatformCreateDummyGLWindow(param_1 + 0x30);
  PlatformCreateOpenGLContextCore(param_1 + 0x30,uVar5,uVar9,*(undefined8 *)(param_1 + 0x10));
  pHVar6 = wglGetCurrentDC();
  pHVar7 = wglGetCurrentContext();
  if ((pHVar7 == *(HGLRC *)(param_1 + 0x40)) && (pHVar6 == *(HDC *)(param_1 + 0x38))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    BVar4 = wglMakeCurrent(*(HDC *)(param_1 + 0x38),*(HGLRC *)(param_1 + 0x40));
    if (BVar4 == 0) {
      wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    }
  }
  InitDebugContext();
  (*DAT_146ab47a8)(1,param_1 + 0x54);
  (*DAT_146ab47b8)(*(undefined4 *)(param_1 + 0x54));
  InitDefaultGLContextState();
  (*DAT_146ab4718)(1,param_1 + 0x50);
  if (!bVar1) {
    if (pHVar7 == (HGLRC)0x0) {
      pHVar7 = (HGLRC)0x0;
      pHVar6 = (HDC)0x0;
    }
    BVar4 = wglMakeCurrent(pHVar6,pHVar7);
    if (BVar4 == 0) {
      wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    }
  }
  BVar4 = wglMakeCurrent(*(HDC *)(param_1 + 8),*(HGLRC *)(param_1 + 0x10));
  if (BVar4 == 0) {
    wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
  }
  return param_1;
}



// FUNCTION 141ead1c0 FUN_141ead1c0 body=398 status=ok
// SIG undefined FUN_141ead1c0(void)

void FUN_141ead1c0(longlong *param_1)

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
      if (bVar4) goto LAB_141ead281;
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
LAB_141ead281:
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
                ((longlong)iStack_1c * 0x3e0 + 0x3d0 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_141eb40b0(param_1,0);
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



// FUNCTION 141ead350 FUN_141ead350 body=529 status=ok
// SIG undefined FUN_141ead350(void)

void FUN_141ead350(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  code *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  *param_1 = &PTR_FUN_144ed0d20;
  if (*(char *)(param_1 + 6) != '\0') {
    ChangeDisplaySettingsW((DEVMODEW *)0x0,0);
  }
  (**(code **)(param_1[9] + 0x30))(param_1 + 9);
  puVar4 = (undefined8 *)param_1[8];
  param_1[8] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      if ((*(char *)(puVar4 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))
         ) {
        LOCK();
        bVar11 = *(int *)((longlong)puVar4 + 0xc) == 0;
        if (bVar11) {
          *(int *)((longlong)puVar4 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar11) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar4);
        }
      }
      else {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
  local_48 = 0;
  local_38 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = param_1;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  local_78[0] = FUN_141eae1e0;
  FUN_141eb4140(local_78,1);
  lVar2 = param_1[3];
  param_1[4] = 0;
  lVar5 = (longlong)*(int *)(lVar2 + 0x910);
  if (*(int *)(lVar2 + 0x910) != 0) {
    iVar10 = 0;
    bVar11 = (undefined8 *)**(longlong **)(lVar2 + 0x908) != param_1;
    lVar7 = 0;
    iVar8 = 0;
    do {
      lVar7 = lVar7 + 1;
      iVar9 = iVar8 + 1;
      if (lVar7 < lVar5) {
        plVar6 = (longlong *)(*(longlong *)(lVar2 + 0x908) + lVar7 * 8);
        do {
          if (bVar11 != ((undefined8 *)*plVar6 != param_1)) break;
          iVar9 = iVar9 + 1;
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar7 < lVar5);
      }
      if (bVar11 != false) {
        if (iVar10 != iVar8) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar2 + 0x908) + (longlong)iVar10 * 8),
                     (void *)(*(longlong *)(lVar2 + 0x908) + (longlong)iVar8 * 8),
                     (longlong)(iVar9 - iVar8) << 3);
        }
        iVar10 = iVar10 + (iVar9 - iVar8);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar8 = iVar9;
    } while (lVar7 < lVar5);
    *(int *)(lVar2 + 0x910) = iVar10;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x11);
  FUN_141edd2d0(param_1 + 9);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 8);
  *param_1 = &PTR_FUN_143f3ece8;
  return;
}



// FUNCTION 141ead570 operator== body=130 status=ok
// SIG undefined operator==(void)

undefined8 operator==(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x380);
  if (iVar2 != *(int *)(param_2 + 0x380)) {
    return 0;
  }
  if (iVar2 != 0) {
    piVar1 = (int *)(param_1 + 8);
    param_2 = param_2 - param_1;
    do {
      if (piVar1[-2] != *(int *)(param_2 + -8 + (longlong)piVar1)) {
        return 0;
      }
      if (piVar1[-1] != *(int *)(param_2 + -4 + (longlong)piVar1)) {
        return 0;
      }
      if (*piVar1 != *(int *)(param_2 + (longlong)piVar1)) {
        return 0;
      }
      if (piVar1[1] != *(int *)(param_2 + 4 + (longlong)piVar1)) {
        return 0;
      }
      if (piVar1[2] != *(int *)(param_2 + 8 + (longlong)piVar1)) {
        return 0;
      }
      if ((char)piVar1[4] != *(char *)(param_2 + 0x10 + (longlong)piVar1)) {
        return 0;
      }
      if (*(char *)((longlong)piVar1 + 0x11) != *(char *)(param_2 + 0x11 + (longlong)piVar1)) {
        return 0;
      }
      if (*(char *)((longlong)piVar1 + 0x12) != *(char *)(param_2 + 0x12 + (longlong)piVar1)) {
        return 0;
      }
      if (piVar1[3] != *(int *)(param_2 + 0xc + (longlong)piVar1)) {
        return 0;
      }
      piVar1 = piVar1 + 7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 1;
}



// FUNCTION 141ead600 operator() body=445 status=ok
// SIG undefined operator()(void)

void <lambda_1a5134d11c59fe26d5f842d7306b548f>::operator()(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined *puVar7;
  int local_res8 [2];
  
  lVar4 = *(longlong *)*param_1;
  if (((DAT_1464c97cd != '\0') && (DAT_1464c97d0 != 0)) || ((*(uint *)(lVar4 + 0x1c) & 0x800) == 0))
  {
    if ((DAT_146ab4968 != 0) && (DAT_1464c9b00 != 0)) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(&DAT_1464c9b60,local_res8);
      if (local_res8[0] != -1) {
        lVar1 = DAT_1464c9b60 + (longlong)local_res8[0] * 0x18;
        plVar5 = *(longlong **)(lVar1 + 8);
        if (DAT_1464c9b68 != DAT_1464c9b94) {
          lVar6 = (longlong)(int)(DAT_1464c9ba8 - 1U & *(uint *)(lVar1 + 0x14));
          puVar7 = DAT_1464c9ba0;
          if (DAT_1464c9ba0 == (undefined *)0x0) {
            puVar7 = &DAT_1464c9b98;
          }
          puVar2 = (undefined4 *)(puVar7 + lVar6 * 4);
          iVar3 = *(int *)(puVar7 + lVar6 * 4);
          while (iVar3 != -1) {
            if (iVar3 == local_res8[0]) {
              *puVar2 = *(undefined4 *)(lVar1 + 0x10);
              break;
            }
            lVar6 = (longlong)iVar3 * 3 + 2;
            puVar2 = (undefined4 *)(DAT_1464c9b60 + lVar6 * 8);
            iVar3 = *(int *)(DAT_1464c9b60 + lVar6 * 8);
          }
        }
        TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized(&DAT_1464c9b60,(longlong)local_res8[0],1);
        FUN_141e6da00(*(undefined4 *)(lVar4 + 0x28));
        (*DAT_146ab47c0)(0x8f36,0x8892,
                         ((ulonglong)(*(uint *)((longlong)plVar5 + 0xc) >> 0x18) - DAT_146ab6240) +
                         *plVar5,*(uint *)((longlong)plVar5 + 0xc) & 0xffffff,(int)plVar5[1]);
        *(undefined4 *)(plVar5 + 2) = DAT_1464aaa90;
        return;
      }
    }
    if ((*(byte *)(lVar4 + 0x38) & 1) != 0) {
      FUN_141e6da00(*(undefined4 *)(lVar4 + 0x28));
      if ((DAT_146ab053c == 0) && ((*(byte *)(lVar4 + 0x38) & 2) == 0)) {
        TOpenGLBuffer<FOpenGLBaseVertexBuffer,34962,&CachedBindArrayBuffer>::LoadData
                  (lVar4,*(undefined4 *)(lVar4 + 0x40),*(undefined4 *)(lVar4 + 0x3c),
                   *(undefined8 *)(lVar4 + 0x48));
        FMemory::Free(*(undefined8 *)(lVar4 + 0x48));
        *(uint *)(lVar4 + 0x38) = *(uint *)(lVar4 + 0x38) & 0xfffffff7;
      }
      else {
        (*DAT_146ab4330)(0x8892);
      }
      *(undefined8 *)(lVar4 + 0x48) = 0;
      *(longlong *)(lVar4 + 0x30) =
           *(longlong *)(lVar4 + 0x30) + (ulonglong)(~(*(uint *)(lVar4 + 0x38) >> 1) & 1);
      *(uint *)(lVar4 + 0x38) = *(uint *)(lVar4 + 0x38) & 0xfffffffe;
    }
  }
  return;
}



// FUNCTION 141ead7c0 operator() body=453 status=ok
// SIG undefined operator()(void)

/* WARNING: Removing unreachable block (ram,0x000141ead91a) */
/* WARNING: Removing unreachable block (ram,0x000141ead922) */

longlong <lambda_e236c217745a8c5409c2d9925fda17d8>::operator()(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 uVar11;
  
  lVar6 = *(longlong *)*param_1;
  if (((DAT_1464c97cd == '\0') || (DAT_1464c97d0 == 0)) && ((*(uint *)(lVar6 + 0x1c) & 0x800) != 0))
  {
    return (ulonglong)*(uint *)param_1[1] + *(longlong *)(lVar6 + 0x20);
  }
  if ((((*(byte *)(lVar6 + 0x1c) & 6) == 0) || (*(int *)param_1[2] != 1)) ||
     (lVar9 = GetAllocation(lVar6,*(undefined4 *)param_1[3],*(undefined4 *)param_1[1],0x10),
     lVar9 == 0)) {
    uVar1 = *(uint *)(lVar6 + 0x1c);
    iVar2 = *(int *)param_1[2];
    iVar3 = *(int *)param_1[3];
    uVar4 = *(undefined4 *)param_1[1];
    FUN_141e6da00(*(undefined4 *)(lVar6 + 0x28));
    uVar10 = 0;
    if (iVar2 == 0) {
      uVar10 = 2;
    }
    uVar5 = *(uint *)(lVar6 + 0x38);
    *(uint *)(lVar6 + 0x38) = uVar10 | uVar5 & 0xfffffffd | 1;
    if (((uVar1 & 6) == 0) && ((iVar2 == 0 || (iVar3 != *(int *)(lVar6 + 0x50))))) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((iVar2 == 0) || (DAT_146ab053c != 0)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if (((bVar7) && (DAT_146ab0540 == 0)) && (DAT_1464c97d8 != 0)) {
      if ((uVar5 & 4) == 0) {
        uVar11 = 0x88e4;
        if ((*(byte *)(lVar6 + 0x1c) & 6) != 0) {
          uVar11 = 0x88e8;
        }
      }
      else {
        uVar11 = 0x88e0;
      }
      (*DAT_146ab4310)(0x8892,*(undefined4 *)(lVar6 + 0x50),0,uVar11);
    }
    if (bVar8) {
      if (iVar2 != 0) {
        if (iVar2 != 0) {
          uVar11 = 0x2a;
        }
        else {
          uVar11 = 3;
        }
      }
      else {
        uVar11 = 1;
      }
      lVar9 = (*DAT_146ab4778)(0x8892,uVar4,iVar3,uVar11);
      *(uint *)(lVar6 + 0x38) = *(uint *)(lVar6 + 0x38) & 0xfffffff7;
      *(undefined4 *)(lVar6 + 0x40) = uVar4;
      *(int *)(lVar6 + 0x3c) = iVar3;
    }
    else {
      *(undefined4 *)(lVar6 + 0x40) = uVar4;
      *(int *)(lVar6 + 0x3c) = iVar3;
      lVar9 = FMemory::Malloc(iVar3,0);
      *(uint *)(lVar6 + 0x38) = *(uint *)(lVar6 + 0x38) | 8;
    }
    *(longlong *)(lVar6 + 0x48) = lVar9;
  }
  return lVar9;
}



// FUNCTION 141ead990 FUN_141ead990 body=339 status=ok
// SIG undefined FUN_141ead990(void)

void FUN_141ead990(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 local_res8 [2];
  
  iVar8 = 0x400 - DAT_1464c97e0;
  local_res8[0] = 0;
  if (iVar8 < 2) {
    _guard_xfg_dispatch_icall_nop(local_res8,&DAT_146ab1550 + DAT_1464c97e0,(longlong)iVar8 * 4);
    (*DAT_146ab4300)(0x400,&DAT_146ab1550);
    iVar7 = 1 - iVar8;
    _guard_xfg_dispatch_icall_nop(local_res8 + iVar8,&DAT_146ab1550,(longlong)iVar7 << 2);
  }
  else {
    local_res8[0] = (&DAT_146ab1550)[DAT_1464c97e0];
    iVar7 = DAT_1464c97e0 + 1;
  }
  DAT_1464c97e0 = iVar7;
  FUN_141e6db50(local_res8[0]);
  uVar9 = 0x88e4;
  if ((char)param_1[4] != '\0') {
    uVar9 = 0x88e0;
  }
  (*DAT_146ab4310)(0x8a11,(int)param_1[1],0,uVar9);
  puVar2 = (undefined8 *)param_1[3];
  if (puVar2 != (undefined8 *)0x0) {
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
  }
  lVar5 = param_1[4];
  lVar6 = param_1[1];
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 0x28) = local_res8[0];
  *(undefined4 *)(lVar3 + 0x2c) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  puVar4 = *(undefined8 **)(lVar3 + 0x50);
  *(undefined8 **)(lVar3 + 0x50) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
  }
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  *(int *)(lVar3 + 0x58) = (int)lVar6;
  *(char *)(lVar3 + 0x5c) = (char)lVar5;
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 141eadaf0 `scalar_deleting_destructor' body=108 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_9227c6ebd131d307861678b9f3313372>_>::
_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 10) != 0) {
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 4;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141eadb60 FUN_141eadb60 body=83 status=ok
// SIG undefined FUN_141eadb60(void)

undefined8 * FUN_141eadb60(undefined8 *param_1,uint param_2)

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
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141eadbc0 `scalar_deleting_destructor' body=82 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FOpenGLEUniformBufferData::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ed0cc0;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141eadc20 `scalar_deleting_destructor' body=380 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FOpenGLUniformBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  BOOL BVar12;
  uint uVar13;
  longlong lVar14;
  
  *param_1 = &PTR__scalar_deleting_destructor__144ed0cc8;
  if (*(int *)(param_1 + 5) != 0) {
    cVar10 = FUN_141eaf3f0();
    uVar9 = DAT_1464aaa90;
    uVar3 = *(undefined4 *)(param_1 + 5);
    if (cVar10 == '\0') {
      FUN_141eb3bd0(param_1[10] != 0,uVar3,*(undefined4 *)(param_1 + 0xb));
      *(undefined4 *)(param_1 + 5) = 0;
    }
    else {
      uVar4 = *(undefined4 *)((longlong)param_1 + 0x2c);
      uVar5 = *(undefined4 *)(param_1 + 0xb);
      uVar7 = param_1[6];
      cVar10 = *(char *)((longlong)param_1 + 0x5c);
      uVar13 = DAT_1464aaa90 % 3;
      uVar11 = GetPoolBucketIndex();
      BVar12 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b18);
      if (BVar12 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b18);
      }
      lVar14 = ((longlong)(int)uVar13 * 0x2d + (ulonglong)uVar11) * 0x20 +
               (ulonglong)(-(uint)(cVar10 != '\0') & 0x10);
      iVar6 = *(int *)((longlong)&DAT_146ab5118 + lVar14);
      *(int *)((longlong)&DAT_146ab5118 + lVar14) = iVar6 + 1;
      if (*(int *)((longlong)&DAT_146ab5118 + lVar14 + 4) < iVar6 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow((longlong *)((longlong)&DAT_146ab5110 + lVar14),iVar6);
      }
      lVar14 = *(longlong *)((longlong)&DAT_146ab5110 + lVar14);
      puVar2 = (undefined4 *)(lVar14 + (longlong)iVar6 * 0x18);
      *puVar2 = uVar3;
      puVar2[1] = uVar5;
      puVar2[2] = uVar4;
      puVar2[3] = uVar9;
      *(undefined8 *)(lVar14 + 0x10 + (longlong)iVar6 * 0x18) = uVar7;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b18);
    }
  }
  puVar8 = (undefined8 *)param_1[10];
  if (puVar8 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar8 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>::
  ~TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>(param_1 + 8);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141eadda0 FUN_141eadda0 body=43 status=ok
// SIG undefined FUN_141eadda0(void)

undefined8 * FUN_141eadda0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3e0);
  }
  return param_1;
}



// FUNCTION 141eaddd0 FUN_141eaddd0 body=52 status=ok
// SIG undefined FUN_141eaddd0(void)

undefined8 FUN_141eaddd0(undefined8 param_1,ulonglong param_2)

{
  FUN_141ead350();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 141eade10 FUN_141eade10 body=722 status=ok
// SIG undefined FUN_141eade10(void)

void FUN_141eade10(void)

{
  undefined4 uVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b18);
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b18);
  }
  uVar10 = (ulonglong)DAT_1464aaa90;
  plVar11 = &DAT_146ab4b70;
  iVar8 = 10;
  do {
    iVar14 = 0;
    plVar9 = plVar11;
    if (0 < DAT_146ab4b10) {
      do {
        iVar6 = (int)plVar9[1] + -1;
        if (-1 < iVar6) {
          lVar13 = (longlong)iVar6 * 0x18;
          do {
            if (0x1e < (uint)((int)uVar10 - *(int *)(*plVar9 + 0xc + lVar13))) {
              uVar1 = *(undefined4 *)(*plVar9 + lVar13);
              if (DAT_146ab3552 == '\0') {
                local_48 = 0;
                local_38 = 0;
                puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_68);
                if (puVar5 != (undefined8 *)0x0) {
                  *(undefined4 *)(puVar5 + 1) = uVar1;
                  *puVar5 = &PTR_CopyToEmptyStorage_144319440;
                }
                local_78[0] = &LAB_141eae2b0;
                FUN_141eb4140(local_78,0);
              }
              else {
                BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b40);
                if (BVar3 == 0) {
                  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b40);
                }
                TSet<TTuple<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>,0>,FDefaultSetAllocator>
                ::Remove(&DAT_1464c9b10,uVar1);
                LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b40);
              }
              iVar2 = (int)plVar9[1];
              iVar4 = (iVar2 - iVar6) + -1;
              if (0 < iVar4) {
                iVar4 = 1;
              }
              if (iVar4 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*plVar9 + (longlong)iVar6 * 0x18),
                           (void *)(*plVar9 + (longlong)(iVar2 - iVar4) * 0x18),
                           (longlong)iVar4 * 0x18);
                iVar2 = (int)plVar9[1];
              }
              *(int *)(plVar9 + 1) = iVar2 + -1;
              TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar9);
              uVar10 = (ulonglong)DAT_1464aaa90;
              iVar8 = iVar8 + -1;
              if (iVar8 == 0) goto LAB_141eadfd6;
            }
            lVar13 = lVar13 + -0x18;
            iVar6 = iVar6 + -1;
          } while (-1 < iVar6);
        }
        if (iVar8 == 0) goto LAB_141eadfd6;
        iVar14 = iVar14 + 1;
        plVar9 = plVar9 + 4;
      } while (iVar14 < DAT_146ab4b10);
    }
  } while ((iVar8 != 0) && (plVar11 = plVar11 + 2, (longlong)plVar11 < 0x146ab4b90));
LAB_141eadfd6:
  lVar12 = (longlong)((int)uVar10 + (int)(uVar10 / 3) * -3);
  lVar13 = 0;
  do {
    iVar8 = 0;
    if (0 < DAT_146ab4b10) {
      piVar7 = (int *)(&DAT_146ab5118 + (lVar12 * 0x5a + lVar13) * 2);
      do {
        iVar14 = *piVar7;
        if (iVar14 != 0) {
          iVar6 = piVar7[lVar12 * -0x168 + -0x168];
          if (piVar7[lVar12 * -0x168 + -0x167] < iVar6 + iVar14) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeTo(piVar7 + lVar12 * -0x168 + -0x16a);
            iVar6 = piVar7[lVar12 * -0x168 + -0x168];
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(piVar7 + lVar12 * -0x168 + -0x16a) +
                             (longlong)iVar6 * 0x18),*(void **)(piVar7 + -2),(longlong)iVar14 * 0x18
                    );
          piVar7[lVar12 * -0x168 + -0x168] = piVar7[lVar12 * -0x168 + -0x168] + iVar14;
        }
        *piVar7 = 0;
        if (0x7fffffff < (uint)piVar7[1]) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeTo(piVar7 + -2,0);
        }
        iVar8 = iVar8 + 1;
        piVar7 = piVar7 + 8;
      } while (iVar8 < DAT_146ab4b10);
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 < 2);
                    /* WARNING: Could not recover jumptable at 0x000141eae0db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b18);
  return;
}



// FUNCTION 141eae0f0 BeginFrame_VertexBufferCleanup body=220 status=ok
// SIG undefined BeginFrame_VertexBufferCleanup(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BeginFrame_VertexBufferCleanup(void)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (2 < DAT_1464aaa90) {
    iVar3 = 0;
    iVar1 = DAT_1464aaa90 - 3;
    if (0 < DAT_146ab6218) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + (longlong)DAT_146ab6210);
        if ((*(int *)(lVar2 + 0x10) < 0) || (iVar1 < *(int *)(lVar2 + 0x10))) break;
        DAT_146ab624c = DAT_146ab624c + (uint)*(byte *)(lVar2 + 0xf) + *(int *)(lVar2 + 8);
        FMemory::operator_delete(lVar2,0x18);
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar3 < DAT_146ab6218);
      if (iVar3 != 0) {
        if (DAT_146ab6218 - iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (DAT_146ab6210,(void *)((longlong)DAT_146ab6210 + (longlong)iVar3 * 8),
                     (longlong)(DAT_146ab6218 - iVar3) << 3);
        }
        DAT_146ab6218 = DAT_146ab6218 - iVar3;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&DAT_146ab6210);
      }
    }
    _DAT_146ab6248 = 0;
  }
  return;
}



// FUNCTION 141eae1e0 FUN_141eae1e0 body=50 status=ok
// SIG undefined FUN_141eae1e0(void)

void FUN_141eae1e0(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_1 + 0x20);
  PlatformReleaseOpenGLContext(*(undefined8 *)(*(longlong *)(*param_1 + 0x18) + 0x15c28),uVar1);
  FMemory::operator_delete(uVar1,0x30);
  return;
}



// FUNCTION 141eae250 Call body=61 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>::Call
               (undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    plVar2 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar2 = param_1 + 2;
    }
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 8))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141eae28a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(uVar1);
  return;
}



// FUNCTION 141eae290 Call body=30 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_be1a3b3f713e425d3361216b207e8d16>,void___cdecl(void)>::Call
               (undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = <lambda_e236c217745a8c5409c2d9925fda17d8>::operator()(param_1 + 1);
  *(undefined8 *)*param_1 = uVar1;
  return;
}



// FUNCTION 141eae2d0 FUN_141eae2d0 body=549 status=ok
// SIG undefined FUN_141eae2d0(void)

void FUN_141eae2d0(char param_1,longlong param_2,void *param_3,uint param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong _Size;
  void *_Dst;
  longlong *plVar4;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  
  puVar2 = *(undefined8 **)(param_2 + 0x50);
  _Size = (ulonglong)param_4;
  if (puVar2 != (undefined8 *)0x0) {
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
  }
  if (puVar2 == (undefined8 *)0x0) {
    if (*(void **)(param_2 + 0x30) == (void *)0x0) {
      if (param_1 == '\0') {
        _Dst = (void *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar2 = (undefined8 *)((longlong)(int)param_4 + (longlong)_Dst);
        if (DAT_146ab6eb0 < puVar2) {
          FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,param_4 + 0x10);
          _Dst = (void *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
          puVar2 = (undefined8 *)((longlong)(int)param_4 + (longlong)_Dst);
        }
        DAT_146ab6ea8 = puVar2;
        _guard_xfg_dispatch_icall_nop(_Dst,param_3,_Size);
        puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar2 = puVar3 + 0xc;
        if (DAT_146ab6eb0 < puVar2) {
          FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
          puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
          puVar2 = puVar3 + 0xc;
        }
        DAT_146ab6e8c = DAT_146ab6e8c + 1;
        DAT_146ab6ea8 = puVar2;
        *DAT_146ab6e80 = puVar3;
        local_38 = (longlong *)0x0;
        local_28 = 0;
        DAT_146ab6e80 = puVar3 + 1;
        puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_58);
        if (puVar2 != (undefined8 *)0x0) {
          uStack_80 = SUB84(_Dst,0);
          uStack_7c = (undefined4)((ulonglong)_Dst >> 0x20);
          *(uint *)(puVar2 + 1) = param_4;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_84;
          *(undefined4 *)(puVar2 + 2) = uStack_80;
          *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_7c;
          *puVar2 = &PTR_FUN_143f4d0b0;
          puVar2[3] = param_2;
        }
        local_68[0] = &LAB_141eae230;
        puVar3[1] = 0;
        *puVar3 = &PTR_ExecuteAndDestruct_144eb5ab0;
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 2,local_68);
        if (local_28 != 0) {
          plVar4 = local_58;
          if (local_38 != (longlong *)0x0) {
            plVar4 = local_38;
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,0);
          }
        }
        if (local_38 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      else {
        (*DAT_146ab4318)(0x8a11,0,_Size,param_3);
      }
    }
    else {
      _guard_xfg_dispatch_icall_nop(*(void **)(param_2 + 0x30),param_3,_Size);
    }
  }
  else {
    _guard_xfg_dispatch_icall_nop((void *)puVar2[2],param_3,_Size);
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 141eae500 CopyToEmptyStorage body=97 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_50573a4081bc06268289253819177437>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144ed0d78;
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_1 + 0x10);
    puVar1[0xc] = *(undefined8 *)(param_1 + 0x60);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141eae570 CopyToEmptyStorage body=99 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_e9d35ae3c030f560d5efeb427212e8e1>_>::
CopyToEmptyStorage(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_144ed0d60;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(param_1 + 0x28);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141eae5e0 FUN_141eae5e0 body=1543 status=ok
// SIG undefined FUN_141eae5e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141eae5e0(undefined8 *param_1,undefined8 param_2,int *param_3,uint param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  BOOL BVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined1 auStack_218 [32];
  int local_1f8 [2];
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined1 local_1e0 [8];
  undefined8 local_1d8;
  int *local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  int *local_1b8;
  undefined8 **local_1b0;
  undefined8 *local_1a8;
  undefined1 *local_198 [2];
  longlong local_188 [4];
  longlong *local_168;
  int local_158;
  code *local_148 [2];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  code *local_f8 [2];
  longlong local_e8 [4];
  longlong *local_c8;
  int local_b8;
  code *local_a8 [2];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  undefined8 *local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_1d0 = param_3;
  local_1c8 = param_2;
  local_1c0 = param_1;
  puVar7 = (undefined8 *)operator_new(0x60);
  puVar11 = (undefined8 *)0x0;
  puVar10 = puVar11;
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &PTR_FUN_144d838e0;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *(undefined2 *)(puVar7 + 2) = 0x100;
    puVar7[3] = param_3;
    *(int *)(puVar7 + 4) = *param_3;
    *puVar7 = &PTR__scalar_deleting_destructor__144ed0cc8;
    puVar7[5] = 0;
    DAT_146ab4b68 = DAT_146ab4b68 + 1;
    *(int *)(puVar7 + 7) = DAT_146ab4b68;
    puVar7[6] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    *(undefined4 *)(puVar7 + 0xb) = 0;
    *(undefined1 *)((longlong)puVar7 + 0x5c) = 0;
    puVar10 = puVar7;
  }
  local_f8[0] = AK::MemoryMgr::StartProfileThreadUsage;
  local_c8 = (longlong *)0x0;
  local_b8 = 0;
  iVar4 = GetPoolBucketIndex(*param_3);
  iVar4 = *(int *)(DAT_146ab4b08 + (longlong)iVar4 * 4);
  if (iVar4 == 0) {
    iVar4 = *param_3;
  }
  local_1f0 = (undefined8 *)0x0;
  local_1d8 = 0;
  if (DAT_146ab3552 == '\0') {
    local_168 = (longlong *)0x0;
    local_158 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x30,local_188);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_CopyToEmptyStorage_144ed0d60;
      puVar7[1] = puVar10;
      *(int *)(puVar7 + 2) = iVar4;
      puVar7[3] = 0;
      puVar7[4] = 0;
      *(bool *)(puVar7 + 5) = param_4 < 2;
    }
    local_198[0] = &LAB_141eae2c0;
    FGenericPlatformMemory::MemswapGreaterThan8(local_198,local_f8,0x50);
    if (local_158 != 0) {
      plVar9 = local_188;
      if (local_168 != (longlong *)0x0) {
        plVar9 = local_168;
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
      }
    }
    if (local_168 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b40);
    if (BVar5 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b40);
    }
    DAT_146ab6260 = DAT_146ab6260 + 1;
    local_1f8[0] = DAT_146ab6260;
    puVar7 = (undefined8 *)operator_new(0x20);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      *(undefined4 *)(puVar7 + 1) = 0;
      uVar12 = iVar4 + 3U >> 2;
      *puVar7 = &PTR__scalar_deleting_destructor__144ed0cc0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      if (*(uint *)((longlong)puVar7 + 0x1c) != uVar12) {
        TArray<float,FDefaultAllocator>::ResizeTo(puVar7 + 2,uVar12);
        puVar11 = (undefined8 *)(ulonglong)*(uint *)(puVar7 + 3);
      }
      iVar6 = (int)puVar11 + uVar12;
      *(int *)(puVar7 + 3) = iVar6;
      if (*(int *)((longlong)puVar7 + 0x1c) < iVar6) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(puVar7 + 2);
      }
    }
    if (puVar7 != (undefined8 *)0x0) {
      *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
    }
    local_1b8 = local_1f8;
    local_1b0 = &local_1e8;
    local_1e8 = puVar7;
    FUN_141eabbd0(&DAT_1464c9b10,local_1e0,&local_1b8,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b40);
    puVar7 = local_1f0;
    local_1f0 = local_1e8;
    local_1e8 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar7 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar7)(puVar7,1);
      }
      if (local_1e8 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_1e8 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*local_1e8)(local_1e8,1);
        }
      }
    }
    puVar7 = local_1f0;
    if (local_1f0 != (undefined8 *)0x0) {
      *(int *)(local_1f0 + 1) = *(int *)(local_1f0 + 1) + 1;
    }
    puVar10[6] = local_1d8;
    *(int *)(puVar10 + 5) = local_1f8[0];
    *(undefined4 *)((longlong)puVar10 + 0x2c) = 0;
    puVar11 = (undefined8 *)puVar10[10];
    puVar10[10] = local_1f0;
    if (local_1f0 != (undefined8 *)0x0) {
      *(int *)(local_1f0 + 1) = *(int *)(local_1f0 + 1) + 1;
    }
    local_1a8 = local_1f0;
    if (puVar11 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar11 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar11)(puVar11,1);
      }
    }
    *(int *)(puVar10 + 0xb) = iVar4;
    *(bool *)((longlong)puVar10 + 0x5c) = param_4 < 2;
    if (puVar7 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar7 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
  }
  if (((DAT_146ab6383 == '\0') && (cVar3 = IsInRenderingThread(), cVar3 != '\0')) ||
     (cVar3 = FUN_1415e13e0(), cVar3 != '\0')) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  if (DAT_146ab3552 != '\0') goto LAB_141eaeb1c;
  if (cVar3 != '\0') {
    if (local_b8 != 0) {
      plVar9 = local_e8;
      if (local_c8 != (longlong *)0x0) {
        plVar9 = local_c8;
      }
      if (plVar9 != (longlong *)0x0) {
        uVar8 = (**(code **)(*plVar9 + 8))();
        (*local_f8[0])(uVar8);
        goto LAB_141eaeb1c;
      }
    }
    (*local_f8[0])(0);
    goto LAB_141eaeb1c;
  }
  puVar11 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar11 + 0xc;
  if (DAT_146ab6eb0 < puVar7) {
    FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
    puVar11 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar11 + 0xc;
  }
  DAT_146ab6e8c = DAT_146ab6e8c + 1;
  puVar2 = puVar11 + 1;
  DAT_146ab6ea8 = puVar7;
  *DAT_146ab6e80 = puVar11;
  local_78 = (longlong *)0x0;
  local_68 = 0;
  DAT_146ab6e80 = puVar2;
  if (local_b8 == 0) {
LAB_141eaea34:
    local_a8[0] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  else {
    plVar9 = local_e8;
    if (local_c8 != (longlong *)0x0) {
      plVar9 = local_c8;
    }
    if (plVar9 == (longlong *)0x0) goto LAB_141eaea34;
    plVar9 = (longlong *)(**(code **)*plVar9)(plVar9,local_98);
    (**(code **)(*plVar9 + 8))(plVar9);
    local_a8[0] = local_f8[0];
  }
  local_118 = (longlong *)0x0;
  local_108 = 0;
  local_58 = puVar10;
  puVar7 = (undefined8 *)FUN_140438ef0(0x70,local_138);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_CopyToEmptyStorage_144ed0d78;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar7 + 2,local_a8);
    puVar7[0xc] = local_58;
  }
  local_148[0] = UE4Function_Private::
                 TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>::
                 Call;
  *puVar2 = 0;
  *puVar11 = &PTR_ExecuteAndDestruct_144eb5ab0;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar11 + 2,local_148);
  if (local_108 != 0) {
    plVar9 = local_138;
    if (local_118 != (longlong *)0x0) {
      plVar9 = local_118;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    plVar9 = local_98;
    if (local_78 != (longlong *)0x0) {
      plVar9 = local_78;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_141eaeb1c:
  piVar1 = local_1d0;
  FUN_141eae2d0(cVar3,puVar10,local_1c8,*local_1d0);
  SetLayoutTable(puVar10,local_1c8,piVar1);
  puVar7 = local_1c0;
  *local_1c0 = puVar10;
  if (puVar10 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
    UNLOCK();
  }
  if (local_1f0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_1f0 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_1f0)(local_1f0,1);
    }
  }
  if (local_b8 != 0) {
    plVar9 = local_e8;
    if (local_c8 != (longlong *)0x0) {
      plVar9 = local_c8;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return puVar7;
}



// FUNCTION 141eaebf0 Empty body=417 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
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
  
  iVar3 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar3 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = *puVar9;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar6 == 0) {
      lVar7 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar8 = local_58 + 1;
      bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar8;
      if (bVar5) goto LAB_141eaecc1;
      uVar6 = puVar9[lVar7 + 1];
    }
    uStack_54 = -uVar6 & uVar6;
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
LAB_141eaecc1:
      iStack_44 = iVar3;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar3) {
    do {
      puVar4 = *(undefined8 **)(*param_1 + 8 + (longlong)iStack_1c * 0x18);
      if (puVar4 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar4 + 1);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar6 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar6) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141eaeda0 GetAllocation body=738 status=ok
// SIG undefined GetAllocation(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong GetAllocation(undefined8 param_1,int param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 local_res8;
  undefined1 local_res20 [8];
  longlong *local_58;
  undefined8 *local_50;
  longlong **local_48;
  
  uVar8 = param_4 - 1;
  if ((DAT_146ab4968 != (code *)0x0) && (DAT_1464c9b00 != 0)) {
    local_res8 = param_1;
    if (DAT_146ab4b6c == 0) {
      iVar5 = 0x400 - DAT_1464c97e0;
      if (iVar5 < 2) {
        _guard_xfg_dispatch_icall_nop
                  (&DAT_146ab4b6c,&DAT_146ab1550 + DAT_1464c97e0,(longlong)iVar5 * 4);
        (*DAT_146ab4300)(0x400,&DAT_146ab1550);
        iVar3 = 1 - iVar5;
        _guard_xfg_dispatch_icall_nop(&DAT_146ab4b6c + iVar5,&DAT_146ab1550,(longlong)iVar3 << 2);
      }
      else {
        DAT_146ab4b6c = (&DAT_146ab1550)[DAT_1464c97e0];
        iVar3 = DAT_1464c97e0 + 1;
      }
      DAT_1464c97e0 = iVar3;
      (*DAT_146ab42e8)(0x8f36,DAT_146ab4b6c);
      (*DAT_146ab4968)(0x8f36,0x1000000,0,0xc2);
      DAT_146ab6240 = (*DAT_146ab4778)(0x8f36,0,0x1000000,0xc2);
      DAT_146ab624c = 0x1000000;
    }
    iVar5 = (int)DAT_146ab6240 + DAT_146ab6250;
    iVar5 = (iVar5 + uVar8 & ~uVar8) - iVar5;
    uVar6 = iVar5 + param_2;
    if ((uVar6 <= 0x400000U - _DAT_146ab6248) && (uVar6 <= DAT_146ab624c)) {
      uVar4 = 0x1000000 - DAT_146ab6250;
      uVar2 = DAT_146ab624c;
      if (uVar4 < uVar6) {
        puVar1 = (undefined8 *)operator_new(0x18);
        *(uint *)((longlong)puVar1 + 0xc) = *(uint *)((longlong)puVar1 + 0xc) & 0xff000000;
        *(undefined1 *)((longlong)puVar1 + 0xf) = 0;
        *puVar1 = 0;
        *(uint *)(puVar1 + 1) = uVar4;
        *(undefined4 *)(puVar1 + 2) = DAT_1464aaa90;
        iVar5 = DAT_146ab6218;
        lVar7 = (longlong)DAT_146ab6218;
        DAT_146ab6218 = DAT_146ab6218 + 1;
        if (DAT_146ab621c < DAT_146ab6218) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146ab6210,iVar5);
        }
        uVar2 = DAT_146ab624c - uVar4;
        DAT_146ab6250 = 0;
        DAT_146ab624c = uVar2;
        *(undefined8 **)(DAT_146ab6210 + lVar7 * 8) = puVar1;
        iVar5 = (uVar8 + (int)DAT_146ab6240 & ~uVar8) - (int)DAT_146ab6240;
        uVar6 = iVar5 + param_2;
      }
      if (uVar6 <= uVar2) {
        local_58 = (longlong *)operator_new(0x18);
        *local_58 = (ulonglong)DAT_146ab6250 + DAT_146ab6240;
        *(uint *)((longlong)local_58 + 0xc) =
             *(uint *)((longlong)local_58 + 0xc) ^
             (*(uint *)((longlong)local_58 + 0xc) ^ param_3) & 0xffffff;
        *(char *)((longlong)local_58 + 0xf) = (char)iVar5;
        *(int *)(local_58 + 1) = param_2;
        *(undefined4 *)(local_58 + 2) = 0xffffffff;
        iVar5 = DAT_146ab6218;
        lVar7 = (longlong)DAT_146ab6218;
        DAT_146ab6218 = DAT_146ab6218 + 1;
        if (DAT_146ab621c < DAT_146ab6218) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146ab6210,iVar5);
        }
        *(longlong **)(DAT_146ab6210 + lVar7 * 8) = local_58;
        local_50 = &local_res8;
        local_48 = &local_58;
        FUN_1405c0510(&DAT_1464c9b60,local_res20,&local_50,0);
        DAT_146ab6250 = DAT_146ab6250 + uVar6;
        DAT_146ab624c = DAT_146ab624c - uVar6;
        _DAT_146ab6248 = _DAT_146ab6248 + uVar6;
        return (ulonglong)*(byte *)((longlong)local_58 + 0xf) + *local_58;
      }
    }
  }
  return 0;
}



// FUNCTION 141eaf090 FUN_141eaf090 body=597 status=ok
// SIG undefined FUN_141eaf090(void)

undefined8 FUN_141eaf090(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  char local_resa;
  
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x398)) {
    puVar9 = (undefined1 *)(param_1 + 0x20);
    do {
      uVar1 = *puVar9;
      iVar5 = *(int *)(puVar9 + 8);
      uVar2 = puVar9[-4];
      uVar3 = puVar9[0x11];
      uVar4 = *(undefined2 *)(puVar9 + 0xc);
      uVar6 = *(uint *)(puVar9 + -8);
      if (uVar6 < 0x1404) {
        if (uVar6 == 0x1403) {
          if (*(int *)(puVar9 + 4) == 2) {
            local_resa = '\x0f';
            if (puVar9[0x10] != '\0') {
              local_resa = '\x11';
            }
          }
          else if ((*(int *)(puVar9 + 4) == 4) && (local_resa = '\x10', puVar9[0x10] != '\0')) {
            local_resa = '\x12';
          }
        }
        else if (uVar6 == 0x1400) {
          if (*(int *)(puVar9 + 4) == 4) {
            local_resa = '\x05';
          }
        }
        else if (uVar6 == 0x1401) {
          if (*(int *)(puVar9 + 4) == 4) {
            local_resa = (puVar9[0x10] != '\0') + '\x06';
          }
          else if (*(int *)(puVar9 + 4) == 0x80e1) {
            local_resa = '\b';
          }
        }
        else if (uVar6 == 0x1402) {
          if (*(int *)(puVar9 + 4) == 2) {
            if (puVar9[0x10] == '\0') {
              local_resa = '\f';
              if (puVar9[0x12] == '\0') {
                local_resa = '\t';
              }
            }
            else {
              local_resa = '\v';
            }
          }
          else if (*(int *)(puVar9 + 4) == 4) {
            if (puVar9[0x10] == '\0') {
              local_resa = '\r';
              if (puVar9[0x12] == '\0') {
                local_resa = '\n';
              }
            }
            else {
              local_resa = '\x0e';
            }
          }
        }
      }
      else if (uVar6 == 0x1406) {
        iVar7 = *(int *)(puVar9 + 4);
        if (iVar7 == 1) {
          local_resa = '\x01';
        }
        else if (iVar7 == 2) {
          local_resa = '\x02';
        }
        else if (iVar7 == 3) {
          local_resa = '\x03';
        }
        else if (iVar7 == 4) {
          local_resa = '\x04';
        }
      }
      else if (uVar6 == 0x140b) {
        if (*(int *)(puVar9 + 4) == 2) {
          local_resa = '\f';
        }
        else if (*(int *)(puVar9 + 4) == 4) {
          local_resa = '\r';
        }
      }
      else if (uVar6 == 0x8368) {
        local_resa = '\x13';
      }
      iVar7 = *(int *)(param_2 + 0x100);
      lVar8 = (longlong)iVar7;
      *(int *)(param_2 + 0x100) = iVar7 + 1;
      if (*(int *)(param_2 + 0x104) < iVar7 + 1) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_2,iVar7);
      }
      iVar10 = iVar10 + 1;
      *(undefined1 *)(param_2 + 1 + lVar8 * 8) = uVar1;
      puVar9 = puVar9 + 0x1c;
      *(undefined1 *)(param_2 + lVar8 * 8) = uVar2;
      *(char *)(param_2 + 2 + lVar8 * 8) = local_resa;
      *(undefined1 *)(param_2 + 3 + lVar8 * 8) = uVar3;
      *(undefined2 *)(param_2 + 4 + lVar8 * 8) = uVar4;
      *(ushort *)(param_2 + 6 + lVar8 * 8) = (ushort)(iVar5 == 1);
    } while (iVar10 < *(int *)(param_1 + 0x398));
  }
  return 1;
}



// FUNCTION 141eaf2f0 GetPoolBucketIndex body=247 status=ok
// SIG undefined GetPoolBucketIndex(void)

uint GetPoolBucketIndex(uint param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  
  if (DAT_146ab4b10 == 0) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b18);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b18);
    }
    puVar5 = &DAT_144ed0ae0;
    do {
      uVar7 = DAT_146ab4b10;
      lVar4 = (longlong)(int)DAT_146ab4b10;
      DAT_146ab4b10 = DAT_146ab4b10 + 1;
      if (DAT_146ab4b14 < (int)DAT_146ab4b10) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146ab4b08,uVar7);
      }
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      *(undefined4 *)(DAT_146ab4b08 + lVar4 * 4) = uVar1;
    } while ((longlong)puVar5 < 0x144ed0b94);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b18);
  }
  uVar7 = 0;
  uVar6 = DAT_146ab4b10;
  do {
    uVar3 = uVar6 + uVar7 >> 1;
    if (*(uint *)(DAT_146ab4b08 + -4 + (ulonglong)uVar3 * 4) < param_1) {
      uVar7 = uVar3;
      uVar3 = uVar6;
    }
    uVar6 = uVar3;
  } while (1 < uVar6 - uVar7);
  return uVar7;
}



// FUNCTION 141eaf3f0 FUN_141eaf3f0 body=171 status=ok
// SIG undefined FUN_141eaf3f0(void)

bool FUN_141eaf3f0(void)

{
  char cVar1;
  longlong *plVar2;
  int *piVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ab6270) {
    _Init_thread_header(&DAT_146ab6270);
    if (DAT_146ab6270 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.UniformBufferPooling");
      piVar3 = (int *)0x0;
      if (plVar2 != (longlong *)0x0) {
        piVar3 = (int *)(**(code **)(*plVar2 + 0x38))(plVar2);
      }
      DAT_146ab6268 = piVar3;
      _Init_thread_footer(&DAT_146ab6270);
    }
  }
  cVar1 = IsInParallelRenderingThread();
  piVar3 = DAT_146ab6268;
  if (cVar1 != '\0') {
    piVar3 = DAT_146ab6268 + 1;
  }
  return *piVar3 != 0;
}



// FUNCTION 141eaf4a0 PlatformBlitToViewport body=802 status=ok
// SIG undefined PlatformBlitToViewport(void)

undefined8
PlatformBlitToViewport
          (longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,char param_5,
          char param_6,int param_7)

{
  longlong lVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  HDC pHVar2;
  bool bVar3;
  char cVar4;
  BOOL BVar5;
  undefined4 extraout_var;
  HDC pHVar6;
  HGLRC pHVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  HGLRC pHVar11;
  undefined8 uVar12;
  undefined4 local_res10;
  
  lVar1 = param_2[4];
  if (DAT_146ab3551 != '\0') {
    (*DAT_146ab3ff8)(0x8db9);
    iVar10 = 0;
    if (param_6 != '\0') {
      iVar10 = param_7;
    }
    if ((DAT_146ab0548 != (code *)0x0) && (*(int *)(lVar1 + 0x1c) != iVar10)) {
      (*DAT_146ab0548)(iVar10);
      *(int *)(lVar1 + 0x1c) = iVar10;
    }
    BVar5 = SwapBuffers(*(HDC *)(lVar1 + 8));
    return CONCAT71((int7)(CONCAT44(extraout_var,BVar5) >> 8),1);
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x78);
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  pHVar2 = *(HDC *)(lVar1 + 8);
  pHVar11 = *(HGLRC *)(lVar1 + 0x10);
  local_res10 = *(undefined4 *)(lVar1 + 0x20);
  if (*(int *)(param_1 + 0x68) == 1) {
    local_res10 = *(undefined4 *)(param_1 + 0x50);
    pHVar11 = *(HGLRC *)(param_1 + 0x40);
  }
  pHVar6 = wglGetCurrentDC();
  pHVar7 = wglGetCurrentContext();
  if ((pHVar7 == pHVar11) && (pHVar6 == pHVar2)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    BVar5 = wglMakeCurrent(pHVar2,pHVar11);
    if (BVar5 == 0) {
      wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    }
  }
  lVar8 = (**(code **)(*param_2 + 0x30))(param_2);
  if (lVar8 != 0) {
    *(undefined1 *)(param_1 + 0x70) = 0;
    (*DAT_146ab3ff8)(0x8db9);
    plVar9 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2);
    cVar4 = (**(code **)(*plVar9 + 0x18))(plVar9,&param_7);
    (*DAT_146ab4018)(0x8db9);
    if (cVar4 == '\0') {
      if (!bVar3) {
        if (pHVar7 == (HGLRC)0x0) {
          pHVar7 = (HGLRC)0x0;
          pHVar6 = (HDC)0x0;
        }
        BVar5 = wglMakeCurrent(pHVar6,pHVar7);
        if (BVar5 == 0) {
          wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
        }
      }
      uVar12 = 0;
      goto LAB_141eaf788;
    }
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  if ((*(int *)(param_1 + 0x68) == 1) && (*(char *)(param_1 + 0x70) != '\0')) {
    (*DAT_146ab4708)(0x8d40,local_res10);
    (*DAT_146ab4730)(0x8d40,0x8ce0,*(undefined4 *)(lVar1 + 0x2c),*(undefined4 *)(lVar1 + 0x28),0);
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  (*DAT_146ab3ff8)(0x8db9);
  (*DAT_146ab4708)(0x8ca9,0);
  (*DAT_146ab4008)(0x405);
  (*DAT_146ab4708)(0x8ca8,local_res10);
  (*DAT_146ab40f0)(0x8ce0);
  (*DAT_146ab4760)(0,0,param_3,param_4,0,param_4,param_3,0,0x4000,0x2600);
  (*DAT_146ab4018)(0x8db9);
  if (param_5 != '\0') {
    iVar10 = 0;
    if (param_6 != '\0') {
      iVar10 = param_7;
    }
    if ((DAT_146ab0548 != (code *)0x0) && (*(int *)(lVar1 + 0x1c) != iVar10)) {
      (*DAT_146ab0548)(iVar10);
      *(int *)(lVar1 + 0x1c) = iVar10;
    }
    SwapBuffers(*(HDC *)(lVar1 + 8));
  }
  if (!bVar3) {
    if (pHVar7 == (HGLRC)0x0) {
      pHVar7 = (HGLRC)0x0;
      pHVar6 = (HDC)0x0;
    }
    BVar5 = wglMakeCurrent(pHVar6,pHVar7);
    if (BVar5 == 0) {
      wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    }
  }
  uVar12 = 1;
LAB_141eaf788:
  LeaveCriticalSection(lpCriticalSection);
  return uVar12;
}



// FUNCTION 141eaf7d0 FUN_141eaf7d0 body=8 status=ok
// SIG undefined FUN_141eaf7d0(void)

undefined1 FUN_141eaf7d0(void)

{
  return DAT_146ab3f90;
}



// FUNCTION 141eaf7e0 PlatformContextIsCurrent body=27 status=ok
// SIG undefined PlatformContextIsCurrent(void)

bool PlatformContextIsCurrent(HGLRC param_1)

{
  HGLRC pHVar1;
  
  pHVar1 = wglGetCurrentContext();
  return pHVar1 == param_1;
}



// FUNCTION 141eaf800 PlatformCreateDummyGLWindow body=228 status=ok
// SIG undefined PlatformCreateDummyGLWindow(void)

void PlatformCreateDummyGLWindow(undefined8 *param_1)

{
  HWND hWnd;
  HDC pHVar1;
  WNDCLASSW local_58;
  
  if (DAT_146ab628c == '\0') {
    local_58.lpfnWndProc = (WNDPROC)&DAT_141eafc00;
    local_58.hIcon = (HICON)0x0;
    local_58.hCursor = (HCURSOR)0x0;
    local_58.hbrBackground = (HBRUSH)0x7;
    local_58.lpszMenuName = (LPCWSTR)0x0;
    DAT_146ab628c = '\x01';
    local_58.style = 0x20;
    local_58._4_4_ = 0;
    local_58.cbClsExtra = 0;
    local_58.cbWndExtra = 0;
    local_58.hInstance = (HINSTANCE)0x0;
    local_58.lpszClassName = L"DummyGLWindow";
    RegisterClassW(&local_58);
  }
  hWnd = CreateWindowExW(0x100,L"DummyGLWindow",(LPCWSTR)0x0,0x80000000,0,0,1,1,(HWND)0x0,(HMENU)0x0
                         ,(HINSTANCE)0x0,(LPVOID)0x0);
  *param_1 = hWnd;
  *(undefined1 *)(param_1 + 3) = 1;
  pHVar1 = GetDC(hWnd);
  param_1[1] = pHVar1;
  FUN_141eb1c30(pHVar1,1);
  return;
}



// FUNCTION 141eaf8f0 PlatformCreateOpenGLContext body=398 status=ok
// SIG undefined PlatformCreateOpenGLContext(void)

undefined8 * PlatformCreateOpenGLContext(longlong param_1,HWND param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  BOOL BVar5;
  undefined8 *puVar6;
  HDC pHVar7;
  undefined8 uVar8;
  HGLRC pHVar9;
  undefined4 uVar10;
  
  *(undefined1 *)(param_1 + 0x70) = 1;
  puVar6 = (undefined8 *)operator_new(0x30);
  *puVar6 = param_2;
  *(undefined1 *)(puVar6 + 3) = 0;
  pHVar7 = GetDC(param_2);
  puVar6[1] = pHVar7;
  FUN_141eb1c30(pHVar7,0);
  uVar8 = FCommandLine::Get();
  cVar3 = FParse::Param(uVar8,L"opengl3");
  uVar8 = FCommandLine::Get();
  cVar4 = FParse::Param(uVar8,L"opengl");
  if (cVar4 == '\0') {
    uVar8 = FCommandLine::Get();
    cVar4 = FParse::Param(uVar8,L"opengl4");
    bVar2 = false;
    if (cVar4 == '\0') goto LAB_141eaf988;
  }
  bVar2 = true;
LAB_141eaf988:
  if ((cVar3 == '\0') && ((bVar2 || (DAT_1464c9828 == 3)))) {
    uVar8 = 4;
    uVar10 = 3;
  }
  else {
    uVar8 = 3;
    uVar10 = 2;
  }
  PlatformCreateOpenGLContextCore(puVar6,uVar8,uVar10,*(undefined8 *)(param_1 + 0x10));
  pHVar7 = wglGetCurrentDC();
  pHVar9 = wglGetCurrentContext();
  if ((pHVar9 == (HGLRC)puVar6[2]) && (pHVar7 == (HDC)puVar6[1])) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
    BVar5 = wglMakeCurrent((HDC)puVar6[1],(HGLRC)puVar6[2]);
    if (BVar5 == 0) {
      wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    }
  }
  InitDefaultGLContextState();
  (*DAT_146ab4718)(1,puVar6 + 4);
  if (!bVar2) {
    if (pHVar9 == (HGLRC)0x0) {
      pHVar9 = (HGLRC)0x0;
      pHVar7 = (HDC)0x0;
    }
    BVar5 = wglMakeCurrent(pHVar7,pHVar9);
    if (BVar5 == 0) {
      wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    }
  }
  iVar1 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar1 + 1;
  if (*(int *)(param_1 + 0x6c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x60,iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x60) + (longlong)iVar1 * 8) = puVar6;
  return puVar6;
}



// FUNCTION 141eafa80 PlatformCreateOpenGLContextCore body=177 status=ok
// SIG undefined PlatformCreateOpenGLContextCore(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void PlatformCreateOpenGLContextCore
               (longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  undefined8 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar2 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar2,L"openglDebug");
  local_58 = 0x2091;
  local_3c = 1;
  local_50 = 0x2092;
  local_44 = cVar1 != '\0' | 2;
  local_48 = 0x2094;
  local_40 = 0x9126;
  local_54 = param_2;
  local_4c = param_3;
  uVar2 = (*DAT_146ab4ae0)(*(undefined8 *)(param_1 + 8),param_4,&local_58);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return;
}



// FUNCTION 141eafb40 PlatformCreateOpenGLDevice body=36 status=ok
// SIG undefined PlatformCreateOpenGLDevice(void)

void PlatformCreateOpenGLDevice(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x80);
  if (lVar1 != 0) {
    FPlatformOpenGLDevice::FPlatformOpenGLDevice(lVar1);
    return;
  }
  return;
}



// FUNCTION 141eafb70 PlatformDestroyOpenGLDevice body=143 status=ok
// SIG undefined PlatformDestroyOpenGLDevice(void)

void PlatformDestroyOpenGLDevice(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  
  if (param_1 != 0) {
    BVar1 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    if (BVar1 == 0) {
      wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    }
    FUN_141e74740();
    PlatformReleaseOpenGLContext(param_1,param_1 + 0x30);
    PlatformReleaseOpenGLContext(param_1,param_1);
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x78);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      DeleteCriticalSection(lpCriticalSection);
      FMemory::operator_delete(lpCriticalSection,0x28);
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(param_1,0x80);
  }
  return;
}



// FUNCTION 141eafc20 PlatformGetNewRenderQuery body=337 status=ok
// SIG undefined PlatformGetNewRenderQuery(void)

void PlatformGetNewRenderQuery(int *param_1,undefined8 *param_2)

{
  LPCRITICAL_SECTION p_Var1;
  BOOL BVar2;
  int iVar3;
  LPCRITICAL_SECTION p_Var4;
  HGLRC pHVar5;
  longlong *plVar6;
  LPCRITICAL_SECTION p_Var7;
  int iVar8;
  int local_res8 [2];
  
  p_Var7 = (LPCRITICAL_SECTION)0x0;
  p_Var1 = DAT_146ab6258;
  if ((DAT_146ab6258 == (LPCRITICAL_SECTION)0x0) &&
     (p_Var4 = (LPCRITICAL_SECTION)operator_new(0x28), p_Var1 = p_Var7,
     p_Var4 != (LPCRITICAL_SECTION)0x0)) {
    InitializeCriticalSection(p_Var4);
    SetCriticalSectionSpinCount(p_Var4,4000);
    p_Var1 = p_Var4;
  }
  DAT_146ab6258 = p_Var1;
  p_Var1 = DAT_146ab6258;
  BVar2 = TryEnterCriticalSection(DAT_146ab6258);
  if (BVar2 == 0) {
    EnterCriticalSection(p_Var1);
  }
  pHVar5 = wglGetCurrentContext();
  local_res8[0] = 0;
  plVar6 = DAT_146ab6230;
  p_Var4 = p_Var7;
  if (0 < DAT_146ab6238) {
    do {
      iVar8 = (int)p_Var4;
      if ((HGLRC)*plVar6 == pHVar5) {
        local_res8[0] = (int)(DAT_146ab6230 + (longlong)iVar8 * 2)[1];
        iVar3 = (DAT_146ab6238 - iVar8) + -1;
        if (0 < iVar3) {
          iVar3 = 1;
        }
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (DAT_146ab6230 + (longlong)iVar8 * 2,
                     DAT_146ab6230 + (longlong)(DAT_146ab6238 - iVar3) * 2,(longlong)iVar3 << 4);
        }
        DAT_146ab6238 = DAT_146ab6238 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(&DAT_146ab6230);
        if (local_res8[0] != 0) goto LAB_141eafd49;
        break;
      }
      p_Var7 = (LPCRITICAL_SECTION)((longlong)&p_Var7->DebugInfo + 1);
      plVar6 = plVar6 + 2;
      p_Var4 = (LPCRITICAL_SECTION)(ulonglong)(iVar8 + 1);
    } while ((longlong)p_Var7 < (longlong)DAT_146ab6238);
  }
  (*DAT_146ab42a8)(1,local_res8);
LAB_141eafd49:
  *param_1 = local_res8[0];
  *param_2 = pHVar5;
  LeaveCriticalSection(p_Var1);
  return;
}



// FUNCTION 141eafd80 PlatformInitOpenGL body=7854 status=ok
// SIG undefined PlatformInitOpenGL(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char PlatformInitOpenGL(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  BOOL BVar4;
  HGLRC pHVar5;
  undefined8 uVar6;
  HMODULE hLibModule;
  HDC hDC;
  undefined4 uVar7;
  HWND local_38;
  HDC local_30;
  HGLRC local_28;
  
  if (DAT_146ab62a0 != '\0') {
    return DAT_146ab62a1;
  }
  PlatformCreateDummyGLWindow(&local_38);
  hDC = local_30;
  pHVar5 = wglCreateContext(local_30);
  local_28 = pHVar5;
  BVar4 = wglMakeCurrent(hDC,pHVar5);
  if (BVar4 == 0) {
    wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
  }
  DAT_146ab4ae0 = wglGetProcAddress("wglCreateContextAttribsARB");
  if (DAT_146ab4ae0 == (PROC)0x0) goto LAB_141eafebe;
  BVar4 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
  if (BVar4 == 0) {
    wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
  }
  wglDeleteContext(pHVar5);
  uVar6 = FCommandLine::Get();
  cVar2 = FParse::Param(uVar6,L"opengl3");
  uVar6 = FCommandLine::Get();
  cVar3 = FParse::Param(uVar6,L"opengl");
  if (cVar3 == '\0') {
    uVar6 = FCommandLine::Get();
    cVar3 = FParse::Param(uVar6,L"opengl4");
    bVar1 = false;
    if (cVar3 != '\0') goto LAB_141eafe5a;
  }
  else {
LAB_141eafe5a:
    bVar1 = true;
  }
  if ((cVar2 == '\0') && ((bVar1 || (DAT_1464c9828 == 3)))) {
    uVar6 = 4;
    uVar7 = 3;
  }
  else {
    uVar6 = 3;
    uVar7 = 2;
  }
  PlatformCreateOpenGLContextCore(&local_38,uVar6,uVar7,0);
  pHVar5 = local_28;
  hDC = local_30;
  if (local_28 != (HGLRC)0x0) {
    DAT_146ab62a1 = '\x01';
    BVar4 = wglMakeCurrent(local_30,local_28);
    if (BVar4 == 0) {
      wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    }
  }
LAB_141eafebe:
  if (DAT_146ab62a1 != '\0') {
    hLibModule = (HMODULE)FWindowsPlatformProcess::GetDllHandle(L"opengl32.dll");
    if (hLibModule == (HMODULE)0x0) {
      LowLevelFatalErrorHandler("Unknown",0x351,L"Couldn\'t load opengl32.dll");
      FDebug::AssertFailed(&DAT_144ebe88d,"Unknown",0x351,L"Couldn\'t load opengl32.dll");
    }
    DAT_146ab3f98 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glBindTexture");
    DAT_146ab3fa0 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glBlendFunc");
    _DAT_146ab3fa8 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glColorMask");
    _DAT_146ab3fb0 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glCopyTexImage1D");
    _DAT_146ab3fb8 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glCopyTexImage2D");
    _DAT_146ab3fc0 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glCopyTexSubImage1D");
    _DAT_146ab3fc8 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glCopyTexSubImage2D");
    DAT_146ab3fd0 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glCullFace");
    DAT_146ab3fd8 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glDeleteTextures");
    DAT_146ab3fe0 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glDepthFunc");
    DAT_146ab3fe8 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glDepthMask");
    DAT_146ab3ff0 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glDepthRange");
    DAT_146ab3ff8 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glDisable");
    DAT_146ab4000 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glDrawArrays");
    DAT_146ab4008 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glDrawBuffer");
    _DAT_146ab4010 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glDrawElements");
    DAT_146ab4018 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glEnable");
    _DAT_146ab4020 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glFinish");
    DAT_146ab4028 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glFlush");
    _DAT_146ab4030 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glFrontFace");
    DAT_146ab4038 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGenTextures");
    DAT_146ab4040 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetBooleanv");
    _DAT_146ab4048 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetDoublev");
    DAT_146ab4050 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetError");
    _DAT_146ab4058 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetFloatv");
    DAT_146ab4060 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetIntegerv");
    _DAT_146ab4068 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetPointerv");
    DAT_146ab4070 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetString");
    DAT_146ab4078 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetTexImage");
    _DAT_146ab4080 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetTexLevelParameterfv");
    _DAT_146ab4088 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetTexLevelParameteriv");
    _DAT_146ab4090 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetTexParameterfv");
    _DAT_146ab4098 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glGetTexParameteriv");
    _DAT_146ab40a0 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glHint");
    DAT_146ab40a8 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glIsEnabled");
    _DAT_146ab40b0 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glIsTexture");
    _DAT_146ab40b8 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glLineWidth");
    _DAT_146ab40c0 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glLogicOp");
    _DAT_146ab40c8 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glPixelStoref");
    DAT_146ab40d0 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glPixelStorei");
    _DAT_146ab40d8 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glPointSize");
    DAT_146ab40e0 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glPolygonMode");
    DAT_146ab40e8 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glPolygonOffset");
    DAT_146ab40f0 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glReadBuffer");
    DAT_146ab40f8 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glReadPixels");
    DAT_146ab4100 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glScissor");
    _DAT_146ab4108 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glClearDepth");
    _DAT_146ab4110 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glClearColor");
    _DAT_146ab4118 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glClearStencil");
    _DAT_146ab4120 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glClear");
    DAT_146ab4128 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glStencilFunc");
    DAT_146ab4130 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glStencilMask");
    DAT_146ab4138 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glStencilOp");
    _DAT_146ab4140 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glTexImage1D");
    DAT_146ab4148 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glTexImage2D");
    _DAT_146ab4150 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glTexParameterf");
    _DAT_146ab4158 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glTexParameterfv");
    DAT_146ab4160 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glTexParameteri");
    _DAT_146ab4168 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glTexParameteriv");
    _DAT_146ab4170 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glTexSubImage1D");
    DAT_146ab4178 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glTexSubImage2D");
    DAT_146ab4180 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"glViewport");
    FWindowsPlatformProcess::FreeDllHandle(hLibModule);
    DAT_146ab4188 = wglGetProcAddress("glBindSampler");
    DAT_146ab4190 = wglGetProcAddress("glDeleteSamplers");
    DAT_146ab4198 = wglGetProcAddress("glGenSamplers");
    DAT_146ab41a0 = wglGetProcAddress("glSamplerParameteri");
    DAT_146ab41a8 = wglGetProcAddress("glClearBufferfv");
    DAT_146ab41b0 = wglGetProcAddress("glClearBufferiv");
    _DAT_146ab41b8 = wglGetProcAddress("glClearBufferuiv");
    DAT_146ab41c0 = wglGetProcAddress("glClearBufferfi");
    DAT_146ab41c8 = wglGetProcAddress("glColorMaski");
    DAT_146ab41d0 = wglGetProcAddress("glDisablei");
    DAT_146ab41d8 = wglGetProcAddress("glEnablei");
    _DAT_146ab41e0 = wglGetProcAddress("glGetBooleani_v");
    _DAT_146ab41e8 = wglGetProcAddress("glGetIntegeri_v");
    _DAT_146ab41f0 = wglGetProcAddress("glIsEnabledi");
    _DAT_146ab41f8 = wglGetProcAddress("glBlendColor");
    DAT_146ab4200 = wglGetProcAddress("glBlendEquation");
    DAT_146ab4208 = wglGetProcAddress("glDrawRangeElements");
    DAT_146ab4210 = wglGetProcAddress("glTexImage3D");
    DAT_146ab4218 = wglGetProcAddress("glTexSubImage3D");
    DAT_146ab4220 = wglGetProcAddress("glCopyTexSubImage3D");
    DAT_146ab4228 = wglGetProcAddress("glActiveTexture");
    _DAT_146ab4230 = wglGetProcAddress("glSampleCoverage");
    _DAT_146ab4238 = wglGetProcAddress("glCompressedTexImage3D");
    DAT_146ab4240 = wglGetProcAddress("glCompressedTexImage2D");
    _DAT_146ab4248 = wglGetProcAddress("glCompressedTexImage1D");
    DAT_146ab4250 = wglGetProcAddress("glCompressedTexSubImage3D");
    DAT_146ab4258 = wglGetProcAddress("glCompressedTexSubImage2D");
    _DAT_146ab4260 = wglGetProcAddress("glCompressedTexSubImage1D");
    DAT_146ab4268 = wglGetProcAddress("glGetCompressedTexImage");
    DAT_146ab4270 = wglGetProcAddress("glBlendFuncSeparate");
    _DAT_146ab4278 = wglGetProcAddress("glMultiDrawArrays");
    _DAT_146ab4280 = wglGetProcAddress("glMultiDrawElements");
    _DAT_146ab4288 = wglGetProcAddress("glPointParameterf");
    _DAT_146ab4290 = wglGetProcAddress("glPointParameterfv");
    _DAT_146ab4298 = wglGetProcAddress("glPointParameteri");
    _DAT_146ab42a0 = wglGetProcAddress("glPointParameteriv");
    DAT_146ab42a8 = wglGetProcAddress("glGenQueries");
    DAT_146ab42b0 = wglGetProcAddress("glDeleteQueries");
    _DAT_146ab42b8 = wglGetProcAddress("glIsQuery");
    DAT_146ab42c0 = wglGetProcAddress("glBeginQuery");
    _DAT_146ab42c8 = wglGetProcAddress("glEndQuery");
    DAT_146ab42d0 = wglGetProcAddress("glGetQueryiv");
    _DAT_146ab42d8 = wglGetProcAddress("glGetQueryObjectiv");
    DAT_146ab42e0 = wglGetProcAddress("glGetQueryObjectuiv");
    DAT_146ab42e8 = wglGetProcAddress("glBindBuffer");
    _DAT_146ab42f0 = wglGetProcAddress("glBindBufferBase");
    DAT_146ab42f8 = wglGetProcAddress("glDeleteBuffers");
    DAT_146ab4300 = wglGetProcAddress("glGenBuffers");
    _DAT_146ab4308 = wglGetProcAddress("glIsBuffer");
    DAT_146ab4310 = wglGetProcAddress("glBufferData");
    DAT_146ab4318 = wglGetProcAddress("glBufferSubData");
    _DAT_146ab4320 = wglGetProcAddress("glGetBufferSubData");
    _DAT_146ab4328 = wglGetProcAddress("glMapBuffer");
    DAT_146ab4330 = wglGetProcAddress("glUnmapBuffer");
    _DAT_146ab4338 = wglGetProcAddress("glGetBufferParameteriv");
    _DAT_146ab4340 = wglGetProcAddress("glGetBufferPointerv");
    DAT_146ab4348 = wglGetProcAddress("glBlendEquationSeparate");
    DAT_146ab4350 = wglGetProcAddress("glDrawBuffers");
    DAT_146ab4358 = wglGetProcAddress("glStencilOpSeparate");
    DAT_146ab4360 = wglGetProcAddress("glStencilFuncSeparate");
    _DAT_146ab4368 = wglGetProcAddress("glStencilMaskSeparate");
    DAT_146ab4370 = wglGetProcAddress("glAttachShader");
    DAT_146ab4378 = wglGetProcAddress("glBindAttribLocation");
    DAT_146ab4380 = wglGetProcAddress("glBindFragDataLocation");
    DAT_146ab4388 = wglGetProcAddress("glCompileShader");
    DAT_146ab4390 = wglGetProcAddress("glCreateProgram");
    DAT_146ab4398 = wglGetProcAddress("glCreateShader");
    DAT_146ab43a0 = wglGetProcAddress("glDeleteProgram");
    DAT_146ab43a8 = wglGetProcAddress("glDeleteShader");
    DAT_146ab43b0 = wglGetProcAddress("glDetachShader");
    DAT_146ab43b8 = wglGetProcAddress("glDisableVertexAttribArray");
    DAT_146ab43c0 = wglGetProcAddress("glEnableVertexAttribArray");
    _DAT_146ab43c8 = wglGetProcAddress("glGetActiveAttrib");
    _DAT_146ab43d0 = wglGetProcAddress("glGetActiveUniform");
    DAT_146ab43d8 = wglGetProcAddress("glGetAttachedShaders");
    _DAT_146ab43e0 = wglGetProcAddress("glGetAttribLocation");
    DAT_146ab43e8 = wglGetProcAddress("glGetProgramiv");
    _DAT_146ab43f0 = wglGetProcAddress("glGetProgramInfoLog");
    DAT_146ab43f8 = wglGetProcAddress("glGetShaderiv");
    _DAT_146ab4400 = wglGetProcAddress("glGetShaderInfoLog");
    DAT_146ab4408 = wglGetProcAddress("glGetShaderSource");
    DAT_146ab4410 = wglGetProcAddress("glGetUniformLocation");
    DAT_146ab4418 = wglGetProcAddress("glGetUniformBlockIndex");
    _DAT_146ab4420 = wglGetProcAddress("glGetUniformfv");
    _DAT_146ab4428 = wglGetProcAddress("glGetUniformiv");
    _DAT_146ab4430 = wglGetProcAddress("glGetVertexAttribdv");
    _DAT_146ab4438 = wglGetProcAddress("glGetVertexAttribfv");
    _DAT_146ab4440 = wglGetProcAddress("glGetVertexAttribiv");
    _DAT_146ab4448 = wglGetProcAddress("glGetVertexAttribPointerv");
    _DAT_146ab4450 = wglGetProcAddress("glIsProgram");
    _DAT_146ab4458 = wglGetProcAddress("glIsShader");
    DAT_146ab4460 = wglGetProcAddress("glLinkProgram");
    DAT_146ab4468 = wglGetProcAddress("glShaderSource");
    DAT_146ab4470 = wglGetProcAddress("glUseProgram");
    _DAT_146ab4478 = wglGetProcAddress("glUniform1f");
    _DAT_146ab4480 = wglGetProcAddress("glUniform2f");
    _DAT_146ab4488 = wglGetProcAddress("glUniform3f");
    _DAT_146ab4490 = wglGetProcAddress("glUniform4f");
    DAT_146ab4498 = wglGetProcAddress("glUniform1i");
    _DAT_146ab44a0 = wglGetProcAddress("glUniform2i");
    _DAT_146ab44a8 = wglGetProcAddress("glUniform3i");
    _DAT_146ab44b0 = wglGetProcAddress("glUniform4i");
    _DAT_146ab44b8 = wglGetProcAddress("glUniform1fv");
    _DAT_146ab44c0 = wglGetProcAddress("glUniform2fv");
    _DAT_146ab44c8 = wglGetProcAddress("glUniform3fv");
    DAT_146ab44d0 = wglGetProcAddress("glUniform4fv");
    _DAT_146ab44d8 = wglGetProcAddress("glUniform1iv");
    _DAT_146ab44e0 = wglGetProcAddress("glUniform2iv");
    _DAT_146ab44e8 = wglGetProcAddress("glUniform3iv");
    DAT_146ab44f0 = wglGetProcAddress("glUniform4iv");
    _DAT_146ab44f8 = wglGetProcAddress("glUniform1uiv");
    _DAT_146ab4500 = wglGetProcAddress("glUniform2uiv");
    _DAT_146ab4508 = wglGetProcAddress("glUniform3uiv");
    DAT_146ab4510 = wglGetProcAddress("glUniform4uiv");
    DAT_146ab4518 = wglGetProcAddress("glUniformBlockBinding");
    _DAT_146ab4520 = wglGetProcAddress("glUniformMatrix2fv");
    _DAT_146ab4528 = wglGetProcAddress("glUniformMatrix3fv");
    _DAT_146ab4530 = wglGetProcAddress("glUniformMatrix4fv");
    _DAT_146ab4538 = wglGetProcAddress("glValidateProgram");
    _DAT_146ab4540 = wglGetProcAddress("glVertexAttrib1d");
    _DAT_146ab4548 = wglGetProcAddress("glVertexAttrib1dv");
    _DAT_146ab4550 = wglGetProcAddress("glVertexAttrib1f");
    _DAT_146ab4558 = wglGetProcAddress("glVertexAttrib1fv");
    _DAT_146ab4560 = wglGetProcAddress("glVertexAttrib1s");
    _DAT_146ab4568 = wglGetProcAddress("glVertexAttrib1sv");
    _DAT_146ab4570 = wglGetProcAddress("glVertexAttrib2d");
    _DAT_146ab4578 = wglGetProcAddress("glVertexAttrib2dv");
    _DAT_146ab4580 = wglGetProcAddress("glVertexAttrib2f");
    _DAT_146ab4588 = wglGetProcAddress("glVertexAttrib2fv");
    _DAT_146ab4590 = wglGetProcAddress("glVertexAttrib2s");
    _DAT_146ab4598 = wglGetProcAddress("glVertexAttrib2sv");
    _DAT_146ab45a0 = wglGetProcAddress("glVertexAttrib3d");
    _DAT_146ab45a8 = wglGetProcAddress("glVertexAttrib3dv");
    _DAT_146ab45b0 = wglGetProcAddress("glVertexAttrib3f");
    _DAT_146ab45b8 = wglGetProcAddress("glVertexAttrib3fv");
    _DAT_146ab45c0 = wglGetProcAddress("glVertexAttrib3s");
    _DAT_146ab45c8 = wglGetProcAddress("glVertexAttrib3sv");
    _DAT_146ab45d0 = wglGetProcAddress("glVertexAttrib4Nbv");
    _DAT_146ab45d8 = wglGetProcAddress("glVertexAttrib4Niv");
    _DAT_146ab45e0 = wglGetProcAddress("glVertexAttrib4Nsv");
    _DAT_146ab45e8 = wglGetProcAddress("glVertexAttrib4Nub");
    _DAT_146ab45f0 = wglGetProcAddress("glVertexAttrib4Nubv");
    _DAT_146ab45f8 = wglGetProcAddress("glVertexAttrib4Nuiv");
    _DAT_146ab4600 = wglGetProcAddress("glVertexAttrib4Nusv");
    _DAT_146ab4608 = wglGetProcAddress("glVertexAttrib4bv");
    _DAT_146ab4610 = wglGetProcAddress("glVertexAttrib4d");
    _DAT_146ab4618 = wglGetProcAddress("glVertexAttrib4dv");
    _DAT_146ab4620 = wglGetProcAddress("glVertexAttrib4f");
    DAT_146ab4628 = wglGetProcAddress("glVertexAttrib4fv");
    _DAT_146ab4630 = wglGetProcAddress("glVertexAttrib4iv");
    _DAT_146ab4638 = wglGetProcAddress("glVertexAttrib4s");
    _DAT_146ab4640 = wglGetProcAddress("glVertexAttrib4sv");
    _DAT_146ab4648 = wglGetProcAddress("glVertexAttrib4ubv");
    _DAT_146ab4650 = wglGetProcAddress("glVertexAttrib4uiv");
    _DAT_146ab4658 = wglGetProcAddress("glVertexAttrib4usv");
    _DAT_146ab4660 = wglGetProcAddress("glVertexAttribI4iv");
    _DAT_146ab4668 = wglGetProcAddress("glVertexAttribI4uiv");
    _DAT_146ab4670 = wglGetProcAddress("glVertexAttribI4sv");
    _DAT_146ab4678 = wglGetProcAddress("glVertexAttribI4usv");
    _DAT_146ab4680 = wglGetProcAddress("glVertexAttribI4bv");
    _DAT_146ab4688 = wglGetProcAddress("glVertexAttribI4ubv");
    DAT_146ab4690 = wglGetProcAddress("glVertexAttribPointer");
    DAT_146ab4698 = wglGetProcAddress("glVertexAttribIPointer");
    _DAT_146ab46a0 = wglGetProcAddress("glUniformMatrix2x3fv");
    _DAT_146ab46a8 = wglGetProcAddress("glUniformMatrix3x2fv");
    _DAT_146ab46b0 = wglGetProcAddress("glUniformMatrix2x4fv");
    _DAT_146ab46b8 = wglGetProcAddress("glUniformMatrix4x2fv");
    _DAT_146ab46c0 = wglGetProcAddress("glUniformMatrix3x4fv");
    _DAT_146ab46c8 = wglGetProcAddress("glUniformMatrix4x3fv");
    _DAT_146ab46d0 = wglGetProcAddress("glIsRenderbuffer");
    DAT_146ab46d8 = wglGetProcAddress("glBindRenderbuffer");
    DAT_146ab46e0 = wglGetProcAddress("glDeleteRenderbuffers");
    DAT_146ab46e8 = wglGetProcAddress("glGenRenderbuffers");
    DAT_146ab46f0 = wglGetProcAddress("glRenderbufferStorage");
    _DAT_146ab46f8 = wglGetProcAddress("glGetRenderbufferParameteriv");
    _DAT_146ab4700 = wglGetProcAddress("glIsFramebuffer");
    DAT_146ab4708 = wglGetProcAddress("glBindFramebuffer");
    DAT_146ab4710 = wglGetProcAddress("glDeleteFramebuffers");
    DAT_146ab4718 = wglGetProcAddress("glGenFramebuffers");
    DAT_146ab4720 = wglGetProcAddress("glCheckFramebufferStatus");
    _DAT_146ab4728 = wglGetProcAddress("glFramebufferTexture1D");
    DAT_146ab4730 = wglGetProcAddress("glFramebufferTexture2D");
    DAT_146ab4738 = wglGetProcAddress("glFramebufferTexture3D");
    DAT_146ab4740 = wglGetProcAddress("glFramebufferTexture");
    DAT_146ab4748 = wglGetProcAddress("glFramebufferRenderbuffer");
    _DAT_146ab4750 = wglGetProcAddress("glGetFramebufferAttachmentParameteriv");
    _DAT_146ab4758 = wglGetProcAddress("glGenerateMipmap");
    DAT_146ab4760 = wglGetProcAddress("glBlitFramebuffer");
    _DAT_146ab4768 = wglGetProcAddress("glRenderbufferStorageMultisample");
    DAT_146ab4770 = wglGetProcAddress("glFramebufferTextureLayer");
    DAT_146ab4778 = wglGetProcAddress("glMapBufferRange");
    _DAT_146ab4780 = wglGetProcAddress("glFlushMappedBufferRange");
    DAT_146ab4788 = wglGetProcAddress("glVertexAttribDivisor");
    DAT_146ab4790 = wglGetProcAddress("glDrawArraysInstanced");
    DAT_146ab4798 = wglGetProcAddress("glDrawElementsInstanced");
    DAT_146ab47a0 = wglGetProcAddress("glGetStringi");
    DAT_146ab47a8 = wglGetProcAddress("glGenVertexArrays");
    DAT_146ab47b0 = wglGetProcAddress("glDeleteVertexArrays");
    DAT_146ab47b8 = wglGetProcAddress("glBindVertexArray");
    DAT_146ab47c0 = wglGetProcAddress("glCopyBufferSubData");
    DAT_146ab47c8 = wglGetProcAddress("glTexBuffer");
    DAT_146ab47d0 = wglGetProcAddress("glTexImage2DMultisample");
    DAT_146ab47d8 = wglGetProcAddress("glQueryCounter");
    _DAT_146ab47e0 = wglGetProcAddress("glIsSync");
    DAT_146ab47e8 = wglGetProcAddress("glDeleteSync");
    DAT_146ab47f0 = wglGetProcAddress("glGetQueryObjectui64v");
    DAT_146ab47f8 = wglGetProcAddress("glFenceSync");
    _DAT_146ab4800 = wglGetProcAddress("glGetSynciv");
    _DAT_146ab4808 = wglGetProcAddress("glClientWaitSync");
    DAT_146ab4810 = wglGetProcAddress("glBindBufferRange");
    DAT_146ab4818 = wglGetProcAddress("glClipControl");
    DAT_146ab4820 = wglGetProcAddress("glDebugMessageCallbackARB");
    DAT_146ab4828 = wglGetProcAddress("glDebugMessageControlARB");
    DAT_146ab4830 = wglGetProcAddress("glDebugMessageCallbackAMD");
    _DAT_146ab4838 = wglGetProcAddress("glDebugMessageEnableAMD");
    _DAT_146ab4840 = wglGetProcAddress("glGetActiveUniformsiv");
    _DAT_146ab4848 = wglGetProcAddress("glGetVertexAttribIuiv");
    _DAT_146ab4850 = wglGetProcAddress("glGetActiveUniformName");
    _DAT_146ab4858 = wglGetProcAddress("glGetUniformuiv");
    _DAT_146ab4860 = wglGetProcAddress("glGetActiveUniformBlockiv");
    _DAT_146ab4868 = wglGetProcAddress("glGetBufferParameteri64v");
    _DAT_146ab4870 = wglGetProcAddress("glGetActiveUniformBlockName");
    _DAT_146ab4878 = wglGetProcAddress("glGetSamplerParameterfv");
    _DAT_146ab4880 = wglGetProcAddress("glGetSamplerParameteriv");
    DAT_146ab4888 = wglGetProcAddress("glDispatchCompute");
    DAT_146ab4890 = wglGetProcAddress("glDispatchComputeIndirect");
    DAT_146ab4898 = wglGetProcAddress("glBindImageTexture");
    DAT_146ab48a0 = wglGetProcAddress("glMemoryBarrier");
    DAT_146ab48a8 = wglGetProcAddress("glBlendEquationi");
    DAT_146ab48b0 = wglGetProcAddress("glBlendEquationSeparatei");
    DAT_146ab48b8 = wglGetProcAddress("glBlendFunci");
    DAT_146ab48c0 = wglGetProcAddress("glBlendFuncSeparatei");
    _DAT_146ab48c8 = wglGetProcAddress("glBlendEquationSeparateiARB");
    _DAT_146ab48d0 = wglGetProcAddress("glBlendEquationiARB");
    _DAT_146ab48d8 = wglGetProcAddress("glBlendFuncSeparateiARB");
    _DAT_146ab48e0 = wglGetProcAddress("glBlendFunciARB");
    DAT_146ab48e8 = wglGetProcAddress("glClearBufferData");
    _DAT_146ab48f0 = wglGetProcAddress("glClearBufferSubData");
    DAT_146ab48f8 = wglGetProcAddress("glPushDebugGroup");
    DAT_146ab4900 = wglGetProcAddress("glPopDebugGroup");
    DAT_146ab4908 = wglGetProcAddress("glObjectLabel");
    _DAT_146ab4910 = wglGetProcAddress("glObjectPtrLabel");
    DAT_146ab4918 = wglGetProcAddress("glPatchParameteri");
    DAT_146ab4920 = wglGetProcAddress("glBindVertexBuffer");
    DAT_146ab4928 = wglGetProcAddress("glVertexAttribFormat");
    DAT_146ab4930 = wglGetProcAddress("glVertexAttribIFormat");
    DAT_146ab4938 = wglGetProcAddress("glVertexAttribBinding");
    DAT_146ab4940 = wglGetProcAddress("glVertexBindingDivisor");
    DAT_146ab4948 = wglGetProcAddress("glCopyImageSubData");
    _DAT_146ab4950 = wglGetProcAddress("glTexStorage1D");
    DAT_146ab4958 = wglGetProcAddress("glTexStorage2D");
    DAT_146ab4960 = wglGetProcAddress("glTexStorage3D");
    DAT_146ab4968 = wglGetProcAddress("glBufferStorage");
    DAT_146ab4970 = wglGetProcAddress("glTextureView");
    DAT_146ab4978 = wglGetProcAddress("glTexStorage2DMultisample");
    DAT_146ab4980 = wglGetProcAddress("glDrawElementsIndirect");
    DAT_146ab4988 = wglGetProcAddress("glDrawArraysIndirect");
    DAT_146ab4990 = wglGetProcAddress("glDepthBoundsEXT");
    DAT_146ab4998 = wglGetProcAddress("glGetTextureHandleARB");
    DAT_146ab49a0 = wglGetProcAddress("glGetTextureSamplerHandleARB");
    DAT_146ab49a8 = wglGetProcAddress("glMakeTextureHandleResidentARB");
    DAT_146ab49b0 = wglGetProcAddress("glUniformHandleui64ARB");
    _DAT_146ab49b8 = wglGetProcAddress("glMakeTextureHandleNonResidentARB");
    _DAT_146ab49c0 = wglGetProcAddress("glPushDebugGroupKHR");
    _DAT_146ab49c8 = wglGetProcAddress("glPopDebugGroupKHR");
    _DAT_146ab49d0 = wglGetProcAddress("glObjectLabelKHR");
    _DAT_146ab49d8 = wglGetProcAddress("glObjectPtrLabelKHR");
    _DAT_146ab49e0 = wglGetProcAddress("glDebugMessageCallbackKHR");
    _DAT_146ab49e8 = wglGetProcAddress("glDebugMessageControlKHR");
    _DAT_146ab49f0 = wglGetProcAddress("glPatchParameteriEXT");
    _DAT_146ab49f8 = wglGetProcAddress("glTextureViewEXT");
    _DAT_146ab4a00 = wglGetProcAddress("glBlendEquationiEXT");
    _DAT_146ab4a08 = wglGetProcAddress("glBlendEquationSeparateiEXT");
    _DAT_146ab4a10 = wglGetProcAddress("glBlendFunciEXT");
    _DAT_146ab4a18 = wglGetProcAddress("glBlendFuncSeparateiEXT");
    _DAT_146ab4a20 = wglGetProcAddress("glColorMaskiEXT");
    _DAT_146ab4a28 = wglGetProcAddress("glDisableiEXT");
    _DAT_146ab4a30 = wglGetProcAddress("glEnableiEXT");
    _DAT_146ab4a38 = wglGetProcAddress("glFramebufferTextureEXT");
    _DAT_146ab4a40 = wglGetProcAddress("glCopyImageSubDataEXT");
    _DAT_146ab4a48 = wglGetProcAddress("glTexBufferEXT");
    _DAT_146ab4a50 = wglGetProcAddress("glDepthRangef");
    _DAT_146ab4a58 = wglGetProcAddress("glClearDepthf");
    _DAT_146ab4a60 = wglGetProcAddress("glGetShaderPrecisionFormat");
    DAT_146ab4a68 = wglGetProcAddress("glProgramParameteri");
    DAT_146ab4a70 = wglGetProcAddress("glUseProgramStages");
    DAT_146ab4a78 = wglGetProcAddress("glBindProgramPipeline");
    DAT_146ab4a80 = wglGetProcAddress("glDeleteProgramPipelines");
    DAT_146ab4a88 = wglGetProcAddress("glGenProgramPipelines");
    DAT_146ab4a90 = wglGetProcAddress("glProgramUniform1i");
    DAT_146ab4a98 = wglGetProcAddress("glProgramUniform4iv");
    DAT_146ab4aa0 = wglGetProcAddress("glProgramUniform4fv");
    DAT_146ab4aa8 = wglGetProcAddress("glProgramUniform4uiv");
    _DAT_146ab4ab0 = wglGetProcAddress("glGetProgramPipelineiv");
    _DAT_146ab4ab8 = wglGetProcAddress("glValidateProgramPipeline");
    _DAT_146ab4ac0 = wglGetProcAddress("glGetProgramPipelineInfoLog");
    _DAT_146ab4ac8 = wglGetProcAddress("glIsProgramPipeline");
    DAT_146ab4ad0 = wglGetProcAddress("glGetProgramBinary");
    DAT_146ab4ad8 = wglGetProcAddress("glProgramBinary");
  }
  if (pHVar5 != (HGLRC)0x0) {
    BVar4 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    if (BVar4 == 0) {
      wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    }
    wglDeleteContext(pHVar5);
  }
  ReleaseDC(local_38,hDC);
  DestroyWindow(local_38);
  return DAT_146ab62a1;
}



// FUNCTION 141eb1c30 FUN_141eb1c30 body=313 status=ok
// SIG undefined FUN_141eb1c30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141eb1c30(HDC param_1)

{
  undefined4 uVar1;
  int format;
  BOOL BVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  PIXELFORMATDESCRIPTOR local_38;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_38.cAuxBuffers = '\0';
  local_38.bReserved = '\0';
  local_38.dwLayerMask = 0;
  local_38.cAlphaBits = '\0';
  local_38.cAlphaShift = '\0';
  local_38.cAccumBits = '\0';
  local_38.cAccumRedBits = '\0';
  local_38.cAccumGreenBits = '\0';
  local_38.cAccumBlueBits = '\0';
  local_38.cAccumAlphaBits = '\0';
  local_38.cDepthBits = '\0';
  local_38.cStencilBits = '\0';
  local_38.iLayerType = '\0';
  local_38.dwVisibleMask = 0;
  local_38.dwDamageMask = 0;
  local_38.nSize = 0x28;
  local_38.nVersion = 1;
  uVar1 = local_38._0_4_;
  local_38.nSize = 0x28;
  local_38.nVersion = 1;
  local_38.dwFlags = 0x25;
  local_38.iPixelType = '\0';
  local_38.cColorBits = ' ';
  local_38.cRedBits = '\0';
  local_38.cRedShift = '\0';
  local_38.cGreenBits = '\0';
  local_38.cGreenShift = '\0';
  local_38.cBlueBits = '\0';
  local_38.cBlueShift = '\0';
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ab6288) &&
     (local_38._0_4_ = uVar1, _Init_thread_header(&DAT_146ab6288), DAT_146ab6288 == -1)) {
    uVar3 = FCommandLine::Get();
    DAT_146ab6284 = FParse::Param(uVar3,L"quad_buffer_stereo");
    _Init_thread_footer(&DAT_146ab6288);
  }
  if (DAT_146ab6284 != '\0') {
    local_38.dwFlags = local_38.dwFlags | 2;
  }
  format = ChoosePixelFormat(param_1,&local_38);
  if ((format != 0) && (BVar2 = SetPixelFormat(param_1,format,&local_38), BVar2 != 0)) {
    return;
  }
  LowLevelFatalErrorHandler("Unknown",0x94,L"Failed to set pixel format for device context.");
  FDebug::AssertFailed
            (&DAT_144ebe88a,"Unknown",0x94,L"Failed to set pixel format for device context.");
  return;
}



// FUNCTION 141eb1d70 PlatformNULLContextSetup body=49 status=ok
// SIG undefined PlatformNULLContextSetup(void)

void PlatformNULLContextSetup(void)

{
  BOOL BVar1;
  HDC pHVar2;
  
  pHVar2 = wglGetCurrentDC();
  if (pHVar2 != (HDC)0x0) {
    BVar1 = wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    if (BVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141eb1d95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
      return;
    }
  }
  return;
}



// FUNCTION 141eb1db0 PlatformOpenGLContextValid body=21 status=ok
// SIG undefined PlatformOpenGLContextValid(void)

bool PlatformOpenGLContextValid(void)

{
  HGLRC pHVar1;
  
  pHVar1 = wglGetCurrentContext();
  return pHVar1 != (HGLRC)0x0;
}



// FUNCTION 141eb1dd0 PlatformOpenGLCurrentContext body=59 status=ok
// SIG undefined PlatformOpenGLCurrentContext(void)

int PlatformOpenGLCurrentContext(longlong param_1)

{
  HGLRC pHVar1;
  
  pHVar1 = wglGetCurrentContext();
  if (pHVar1 == *(HGLRC *)(param_1 + 0x40)) {
    return 1;
  }
  if (pHVar1 == *(HGLRC *)(param_1 + 0x10)) {
    return 0;
  }
  return -1 - (uint)(pHVar1 != (HGLRC)0x0);
}



// FUNCTION 141eb1e10 PlatformReleaseOpenGLContext body=787 status=ok
// SIG undefined PlatformReleaseOpenGLContext(void)

void PlatformReleaseOpenGLContext(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  HDC pHVar2;
  longlong lVar3;
  bool bVar4;
  BOOL BVar5;
  HDC pHVar6;
  HGLRC pHVar7;
  LPCRITICAL_SECTION p_Var8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  bool bVar14;
  
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  puVar12 = puVar1;
  do {
    if (puVar12 == puVar1 + *(int *)(param_1 + 0x68)) {
LAB_141eb1e7e:
      lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x78);
      *(undefined1 *)(param_1 + 0x70) = 1;
      BVar5 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar5 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      pHVar6 = wglGetCurrentDC();
      pHVar7 = wglGetCurrentContext();
      pHVar2 = (HDC)param_2[1];
      bVar14 = pHVar6 == pHVar2;
      if ((pHVar7 == (HGLRC)param_2[2]) && (bVar14)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
        BVar5 = wglMakeCurrent(pHVar2,(HGLRC)param_2[2]);
        if (BVar5 == 0) {
          wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
        }
      }
      lVar3 = param_2[2];
      if (DAT_146ab6258 == (LPCRITICAL_SECTION)0x0) {
        p_Var8 = (LPCRITICAL_SECTION)operator_new(0x28);
        if (p_Var8 == (LPCRITICAL_SECTION)0x0) {
          DAT_146ab6258 = (LPCRITICAL_SECTION)0x0;
        }
        else {
          InitializeCriticalSection(p_Var8);
          SetCriticalSectionSpinCount(p_Var8,4000);
          DAT_146ab6258 = p_Var8;
        }
      }
      p_Var8 = DAT_146ab6258;
      BVar5 = TryEnterCriticalSection(DAT_146ab6258);
      if (BVar5 == 0) {
        EnterCriticalSection(p_Var8);
      }
      iVar11 = 0;
      if (0 < DAT_146ab6238) {
        lVar13 = 0;
        lVar10 = DAT_146ab6230;
        iVar9 = DAT_146ab6238;
        do {
          if (*(longlong *)(lVar13 + lVar10) == lVar3) {
            (*DAT_146ab42b0)(1,lVar10 + 8 + (longlong)iVar11 * 0x10);
            iVar9 = (DAT_146ab6238 - iVar11) + -1;
            if (0 < iVar9) {
              iVar9 = 1;
            }
            if (iVar9 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar11 * 0x10 + DAT_146ab6230),
                         (void *)((longlong)(DAT_146ab6238 - iVar9) * 0x10 + DAT_146ab6230),
                         (longlong)iVar9 << 4);
            }
            DAT_146ab6238 = DAT_146ab6238 + -1;
            TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(&DAT_146ab6230);
            iVar11 = iVar11 + -1;
            lVar13 = lVar13 + -0x10;
            lVar10 = DAT_146ab6230;
            iVar9 = DAT_146ab6238;
          }
          iVar11 = iVar11 + 1;
          lVar13 = lVar13 + 0x10;
        } while (iVar11 < iVar9);
      }
      LeaveCriticalSection(p_Var8);
      (*DAT_146ab47b8)(0);
      (*DAT_146ab47b0)(1,(longlong)param_2 + 0x24);
      if (*(int *)(param_2 + 4) != 0) {
        (*DAT_146ab4710)(1,param_2 + 4);
        *(undefined4 *)(param_2 + 4) = 0;
      }
      if (!bVar4) {
        if (pHVar7 == (HGLRC)0x0) {
          pHVar7 = (HGLRC)0x0;
          pHVar6 = (HDC)0x0;
        }
        BVar5 = wglMakeCurrent(pHVar6,pHVar7);
        if (BVar5 == 0) {
          wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
        }
      }
      wglDeleteContext((HGLRC)param_2[2]);
      param_2[2] = 0;
      LeaveCriticalSection(lpCriticalSection);
      if (bVar4) {
        wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
      }
      ReleaseDC((HWND)*param_2,(HDC)param_2[1]);
      param_2[1] = 0;
      pHVar7 = wglGetCurrentContext();
      if (((pHVar7 == *(HGLRC *)(param_1 + 0x40)) && (bVar14)) &&
         (BVar5 = wglMakeCurrent(*(HDC *)(param_1 + 0x38),*(HGLRC *)(param_1 + 0x40)), BVar5 == 0))
      {
        wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
      }
      if (*(char *)(param_2 + 3) != '\0') {
        DestroyWindow((HWND)*param_2);
      }
      *param_2 = 0;
      return;
    }
    if ((undefined8 *)*puVar12 == param_2) {
      iVar11 = (int)((longlong)puVar12 - (longlong)puVar1 >> 3);
      if (iVar11 != -1) {
        _guard_xfg_dispatch_icall_nop
                  (puVar1 + iVar11,puVar1 + iVar11 + 1,
                   (longlong)((*(int *)(param_1 + 0x68) - iVar11) + -1) << 3);
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
      }
      goto LAB_141eb1e7e;
    }
    puVar12 = puVar12 + 1;
  } while( true );
}



// FUNCTION 141eb2130 PlatformReleaseRenderQuery body=172 status=ok
// SIG undefined PlatformReleaseRenderQuery(void)

void PlatformReleaseRenderQuery(undefined4 param_1,HGLRC param_2)

{
  undefined4 *puVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar3;
  BOOL BVar4;
  HGLRC pHVar5;
  longlong lVar6;
  undefined4 local_res8 [2];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_c;
  
  local_res8[0] = param_1;
  pHVar5 = wglGetCurrentContext();
  lpCriticalSection = DAT_146ab6258;
  if (pHVar5 == param_2) {
    (*DAT_146ab42b0)(1,local_res8);
    return;
  }
  BVar4 = TryEnterCriticalSection(DAT_146ab6258);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar3 = local_res8[0];
  iVar2 = DAT_146ab6238;
  lVar6 = (longlong)DAT_146ab6238;
  DAT_146ab6238 = DAT_146ab6238 + 1;
  if (DAT_146ab623c < DAT_146ab6238) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146ab6230,iVar2);
  }
  local_18 = SUB84(param_2,0);
  uStack_14 = (undefined4)((ulonglong)param_2 >> 0x20);
  puVar1 = (undefined4 *)(DAT_146ab6230 + lVar6 * 0x10);
  *puVar1 = local_18;
  puVar1[1] = uStack_14;
  puVar1[2] = uVar3;
  puVar1[3] = uStack_c;
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 141eb21e0 PlatformRenderingContextSetup body=85 status=ok
// SIG undefined PlatformRenderingContextSetup(void)

void PlatformRenderingContextSetup(longlong param_1)

{
  BOOL BVar1;
  HGLRC pHVar2;
  HDC pHVar3;
  
  pHVar2 = wglGetCurrentContext();
  if (pHVar2 != (HGLRC)0x0) {
    (*DAT_146ab4028)();
  }
  if (*(int *)(param_1 + 0x68) == 1) {
    pHVar3 = *(HDC *)(**(longlong **)(param_1 + 0x60) + 8);
  }
  else {
    pHVar3 = *(HDC *)(param_1 + 0x38);
  }
  BVar1 = wglMakeCurrent(pHVar3,*(HGLRC *)(param_1 + 0x40));
  if (BVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141eb2228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    return;
  }
  return;
}



// FUNCTION 141eb2240 PlatformResizeGLContext body=563 status=ok
// SIG undefined PlatformResizeGLContext(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void PlatformResizeGLContext
               (longlong param_1,undefined8 *param_2,DWORD param_3,DWORD param_4,char param_5,
               char param_6,undefined4 param_7,undefined4 param_8)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  BOOL BVar2;
  HMONITOR hMonitor;
  HDC pHVar3;
  HGLRC pHVar4;
  undefined1 auStackY_1e8 [32];
  tagMONITORINFO local_1a8;
  WCHAR local_180 [36];
  DEVMODEW local_138;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStackY_1e8;
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x78);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (param_5 == '\0') {
    if (param_6 != '\0') {
      ChangeDisplaySettingsW((DEVMODEW *)0x0,0);
    }
  }
  else {
    hMonitor = MonitorFromWindow((HWND)*param_2,1);
    _guard_xfg_dispatch_icall_nop(&local_1a8.rcMonitor,0,100);
    local_1a8.cbSize = 0x68;
    GetMonitorInfoW(hMonitor,&local_1a8);
    local_138.dmBitsPerPel = 0x20;
    local_138.dmSize = 0xdc;
    local_138.dmFields = 0x1c0000;
    local_138.dmPelsWidth = param_3;
    local_138.dmPelsHeight = param_4;
    ChangeDisplaySettingsExW(local_180,&local_138,(HWND)0x0,4,(LPVOID)0x0);
  }
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_2 + 5) = param_8;
  *(undefined4 *)((longlong)param_2 + 0x2c) = param_7;
  if (DAT_146ab3551 == '\0') {
    pHVar3 = wglGetCurrentDC();
    pHVar4 = wglGetCurrentContext();
    if ((pHVar4 == (HGLRC)param_2[2]) && (pHVar3 == (HDC)param_2[1])) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
      BVar2 = wglMakeCurrent((HDC)param_2[1],(HGLRC)param_2[2]);
      if (BVar2 == 0) {
        wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
      }
    }
    (*DAT_146ab4708)(0x8d40,*(undefined4 *)(param_2 + 4));
    (*DAT_146ab4730)(0x8d40,0x8ce0,param_7,param_8);
    (*DAT_146ab4180)(0,0,param_3,param_4);
    (*DAT_146ab41a8)(0x1800,0,&DAT_146ab6290);
    if (!bVar1) {
      if (pHVar4 == (HGLRC)0x0) {
        pHVar4 = (HGLRC)0x0;
        pHVar3 = (HDC)0x0;
      }
      BVar2 = wglMakeCurrent(pHVar3,pHVar4);
      if (BVar2 == 0) {
        wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 141eb2480 FUN_141eb2480 body=243 status=ok
// SIG undefined FUN_141eb2480(void)

void FUN_141eb2480(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  BOOL BVar2;
  HGLRC pHVar3;
  HDC pHVar4;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x8e8);
  lVar1 = *(longlong *)(param_1 + 0x15bf8);
  *(undefined1 *)(param_1 + 0x8f0) = 0;
  pHVar3 = wglGetCurrentContext();
  if (pHVar3 != *(HGLRC *)(lVar1 + 0x40)) {
    lVar1 = *(longlong *)(param_1 + 0x15bf8);
    *(undefined1 *)(param_1 + 0x8f0) = 1;
    pHVar3 = wglGetCurrentContext();
    if (pHVar3 != (HGLRC)0x0) {
      (*DAT_146ab4028)();
    }
    if (*(int *)(lVar1 + 0x68) == 1) {
      pHVar4 = *(HDC *)(**(longlong **)(lVar1 + 0x60) + 8);
    }
    else {
      pHVar4 = *(HDC *)(lVar1 + 0x38);
    }
    BVar2 = wglMakeCurrent(pHVar4,*(HGLRC *)(lVar1 + 0x40));
    if (BVar2 == 0) {
      wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    }
  }
  local_28 = param_3;
  if (param_3 == 0) {
    local_28 = *(longlong *)(*(longlong *)(param_1 + 0x8e8) + 0x40);
  }
  local_1c = 0xffffffff;
  local_20 = 0;
  local_18 = 0x101;
  FUN_141e78e50(param_1,1,&local_28,0,0,0);
  return;
}



// FUNCTION 141eb2580 RHICopyVertexBuffer body=109 status=ok
// SIG undefined RHICopyVertexBuffer(void)

void FOpenGLDynamicRHI::RHICopyVertexBuffer(undefined8 param_1,longlong param_2,longlong param_3)

{
  (*DAT_146ab42e8)(0x8f36,*(undefined4 *)(param_2 + 0x28));
  (*DAT_146ab42e8)(0x8f37,*(undefined4 *)(param_3 + 0x28));
  (*DAT_146ab47c0)(0x8f36,0x8f37,0,0,*(undefined4 *)(param_2 + 0x18));
  (*DAT_146ab42e8)(0x8f36,0);
                    /* WARNING: Could not recover jumptable at 0x000141eb25e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_146ab42e8)(0x8f37,0);
  return;
}



// FUNCTION 141eb25f0 FUN_141eb25f0 body=1175 status=ok
// SIG undefined FUN_141eb25f0(void)

undefined8 *
FUN_141eb25f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int *param_4,uint param_5)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  BOOL BVar8;
  undefined *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int local_a8;
  undefined8 *local_a0;
  int local_98;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  
  local_98 = 0;
  local_a0 = (undefined8 *)0x0;
  if (((DAT_146ab6383 == '\0') && (cVar5 = IsInRenderingThread(), cVar5 != '\0')) ||
     (cVar5 = FUN_1415e13e0(), cVar5 != '\0')) {
    cVar5 = '\x01';
  }
  else {
    cVar5 = '\0';
  }
  puVar11 = (undefined8 *)0x0;
  if ((*param_4 != 0) && (cVar6 = FUN_141eaf3f0(), puVar11 = (undefined8 *)0x0, cVar6 != '\0')) {
    uVar7 = GetPoolBucketIndex(*param_4);
    local_a8 = 0;
    BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b18);
    if (BVar8 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b18);
    }
    lVar2 = (ulonglong)(param_5 < 2) + (ulonglong)uVar7 * 2;
    iVar3 = (&DAT_146ab4b78)[lVar2 * 4];
    if (0 < iVar3) {
      uVar4 = *(undefined8 *)((&DAT_146ab4b70)[lVar2 * 2] + -0x18 + (longlong)iVar3 * 0x18);
      (&DAT_146ab4b78)[lVar2 * 4] = iVar3 + -1;
      TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(&DAT_146ab4b70 + lVar2 * 2);
      local_98 = (int)uVar4;
      local_a8 = (int)((ulonglong)uVar4 >> 0x20);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b18);
    if (0 < iVar3) {
      if (DAT_146ab3552 == '\0') {
        if (cVar5 == '\0') {
          puVar12 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
          puVar11 = puVar12 + 0xc;
          if (DAT_146ab6eb0 < puVar11) {
            FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
            puVar12 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
            puVar11 = puVar12 + 0xc;
          }
          DAT_146ab6e8c = DAT_146ab6e8c + 1;
          DAT_146ab6ea8 = puVar11;
          *DAT_146ab6e80 = puVar12;
          local_48 = (longlong *)0x0;
          local_38 = 0;
          DAT_146ab6e80 = puVar12 + 1;
          puVar11 = (undefined8 *)FUN_140438ef0(0x10,local_68);
          if (puVar11 != (undefined8 *)0x0) {
            *(int *)(puVar11 + 1) = local_98;
            *puVar11 = &PTR_CopyToEmptyStorage_144319440;
          }
          puVar12[1] = 0;
          *puVar12 = &PTR_ExecuteAndDestruct_144eb5ab0;
          TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar12 + 2);
          if (local_38 != 0) {
            plVar10 = local_68;
            if (local_48 != (longlong *)0x0) {
              plVar10 = local_48;
            }
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
          if (local_48 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        else {
          FUN_141e6db50(local_98);
        }
      }
      else {
        BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b40);
        if (BVar8 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b40);
        }
        if (DAT_1464c9b18 != DAT_1464c9b44) {
          puVar9 = DAT_1464c9b50;
          if (DAT_1464c9b50 == (undefined *)0x0) {
            puVar9 = &DAT_1464c9b48;
          }
          iVar3 = *(int *)(puVar9 + ((longlong)DAT_1464c9b58 - 1U & (longlong)local_98) * 4);
          while (iVar3 != -1) {
            lVar2 = (longlong)iVar3 * 0x18;
            if (*(int *)(lVar2 + DAT_1464c9b10) == local_98) {
              plVar10 = (longlong *)(lVar2 + DAT_1464c9b10);
              if (iVar3 != -1) goto LAB_141eb27cd;
              break;
            }
            iVar3 = *(int *)(lVar2 + 0x10 + DAT_1464c9b10);
          }
        }
        plVar10 = (longlong *)0x0;
LAB_141eb27cd:
        plVar13 = plVar10 + 1;
        if (plVar10 == (longlong *)0x0) {
          plVar13 = (longlong *)0x0;
        }
        local_a0 = (undefined8 *)*plVar13;
        if (local_a0 != (undefined8 *)0x0) {
          *(int *)(local_a0 + 1) = *(int *)(local_a0 + 1) + 1;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b40);
      }
      puVar11 = local_a0;
      if (local_a8 != 0) {
        puVar12 = (undefined8 *)operator_new(0x60);
        puVar11 = (undefined8 *)0x0;
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = &PTR_FUN_143f3ece8;
          *(undefined4 *)(puVar12 + 1) = 0;
          *puVar12 = &PTR_FUN_144d838e0;
          *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
          *(undefined2 *)(puVar12 + 2) = 0x100;
          puVar12[3] = param_4;
          iVar3 = *param_4;
          *puVar12 = &PTR__scalar_deleting_destructor__144ed0cc8;
          *(int *)(puVar12 + 4) = iVar3;
          DAT_146ab4b68 = DAT_146ab4b68 + 1;
          *(int *)(puVar12 + 7) = DAT_146ab4b68;
          puVar12[5] = 0;
          puVar12[6] = 0;
          puVar12[8] = 0;
          puVar12[9] = 0;
          puVar12[10] = 0;
          *(undefined4 *)(puVar12 + 0xb) = 0;
          *(undefined1 *)((longlong)puVar12 + 0x5c) = 0;
          puVar11 = puVar12;
        }
        if (local_a0 != (undefined8 *)0x0) {
          *(int *)(local_a0 + 1) = *(int *)(local_a0 + 1) + 1;
        }
        *(int *)(puVar11 + 5) = local_98;
        *(undefined4 *)((longlong)puVar11 + 0x2c) = 0;
        puVar11[6] = 0;
        puVar12 = (undefined8 *)puVar11[10];
        puVar11[10] = local_a0;
        if (local_a0 != (undefined8 *)0x0) {
          *(int *)(local_a0 + 1) = *(int *)(local_a0 + 1) + 1;
        }
        if (puVar12 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar12 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar12)(puVar12,1);
          }
        }
        *(bool *)((longlong)puVar11 + 0x5c) = param_5 < 2;
        *(int *)(puVar11 + 0xb) = local_a8;
        if (local_a0 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_a0 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*local_a0)(local_a0,1);
          }
        }
        FUN_141eae2d0(cVar5,puVar11,param_3,*param_4);
        SetLayoutTable(puVar11,param_3,param_4);
        *param_2 = puVar11;
        LOCK();
        *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
        UNLOCK();
        if (local_a0 == (undefined8 *)0x0) {
          return param_2;
        }
        piVar1 = (int *)(local_a0 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return param_2;
        }
        puVar11 = (undefined8 *)*local_a0;
        goto LAB_141eb2a5e;
      }
    }
  }
  local_a0 = puVar11;
  FUN_141eae5e0(param_2,param_3,param_4,param_5);
  if (local_a0 == (undefined8 *)0x0) {
    return param_2;
  }
  piVar1 = (int *)(local_a0 + 1);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return param_2;
  }
  puVar11 = (undefined8 *)*local_a0;
LAB_141eb2a5e:
  (*(code *)*puVar11)(local_a0,1);
  return param_2;
}



// FUNCTION 141eb2a90 RHICreateVertexBuffer body=260 status=ok
// SIG undefined RHICreateVertexBuffer(void)

undefined8 *
FOpenGLDynamicRHI::RHICreateVertexBuffer
          (undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
          longlong param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  puVar6 = (undefined8 *)0x0;
  puVar4 = puVar6;
  if (*(undefined8 **)(param_5 + 8) != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(**(code **)**(undefined8 **)(param_5 + 8))();
  }
  lVar5 = operator_new(0x58);
  if ((lVar5 != 0) &&
     (puVar6 = (undefined8 *)FUN_141e69500(lVar5,0,param_3,param_4,puVar4,0,0,0),
     puVar6 != (undefined8 *)0x0)) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
  }
  if (*(longlong **)(param_5 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_5 + 8) + 0x10))();
  }
  *param_2 = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar6 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar6 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))
         ) {
        LOCK();
        bVar7 = *(int *)((longlong)puVar6 + 0xc) == 0;
        if (bVar7) {
          *(int *)((longlong)puVar6 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar7) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar6);
        }
      }
      else {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141eb2ba0 FUN_141eb2ba0 body=930 status=ok
// SIG undefined FUN_141eb2ba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141eb2ba0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  longlong *plVar5;
  int *piVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_468 [32];
  int local_448 [2];
  longlong *local_440 [2];
  undefined8 local_430;
  longlong *local_428;
  int *local_420;
  undefined8 local_418;
  int local_410 [4];
  char local_400 [880];
  int local_90;
  int local_88;
  longlong local_84;
  longlong lStack_7c;
  longlong local_74;
  longlong lStack_6c;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  longlong local_54;
  longlong lStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_468;
  local_430 = param_3;
  local_428 = param_2;
  FUN_141eacae0(local_410,param_3);
  if (DAT_1464c9bb8 != DAT_1464c9be4) {
    puVar4 = DAT_1464c9bf0;
    if (DAT_1464c9bf0 == (undefined *)0x0) {
      puVar4 = &DAT_1464c9be8;
    }
    iVar2 = *(int *)(puVar4 + ((longlong)DAT_1464c9bf8 - 1U & (longlong)local_88) * 4);
    while (iVar2 != -1) {
      lVar9 = (longlong)iVar2 * 0x3e0 + DAT_1464c9bb0;
      iVar8 = *(int *)(lVar9 + 0x380);
      if (iVar8 == local_90) {
        if (iVar8 == 0) {
LAB_141eb2d1e:
          if (iVar2 != -1) goto LAB_141eb2d3e;
          break;
        }
        piVar6 = (int *)(lVar9 + 8);
        while ((((((piVar6[-2] == *(int *)((longlong)local_410 + -lVar9 + -8 + (longlong)piVar6) &&
                   (piVar6[-1] == *(int *)((longlong)local_410 + -lVar9 + -4 + (longlong)piVar6)))
                  && (*piVar6 == *(int *)((longlong)local_410 + -lVar9 + (longlong)piVar6))) &&
                 ((piVar6[1] == *(int *)((longlong)local_410 + -lVar9 + 4 + (longlong)piVar6) &&
                  (piVar6[2] == *(int *)((longlong)local_410 + (8 - lVar9) + (longlong)piVar6)))))
                && (((char)piVar6[4] == (local_400 + -lVar9)[(longlong)piVar6] &&
                    ((*(char *)((longlong)piVar6 + 0x11) ==
                      (local_400 + (1 - lVar9))[(longlong)piVar6] &&
                     (*(char *)((longlong)piVar6 + 0x12) ==
                      (local_400 + (2 - lVar9))[(longlong)piVar6])))))) &&
               (piVar6[3] == *(int *)((longlong)local_410 + (0xc - lVar9) + (longlong)piVar6)))) {
          piVar6 = piVar6 + 7;
          iVar8 = iVar8 + -1;
          if (iVar8 == 0) goto LAB_141eb2d1e;
        }
      }
      iVar2 = *(int *)(lVar9 + 0x3d8);
    }
  }
  lVar9 = 0;
LAB_141eb2d3e:
  plVar7 = (longlong *)0x0;
  plVar5 = (longlong *)(lVar9 + 0x3d0);
  if (lVar9 == 0) {
    plVar5 = plVar7;
  }
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x3e0);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143f3ece8;
      *(undefined4 *)(plVar5 + 1) = 0;
      *plVar5 = (longlong)&PTR_FUN_144ed0cd0;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 0;
      *(undefined2 *)(plVar5 + 2) = 0x100;
      *(int *)(plVar5 + 0x73) = local_90;
      if (local_90 == 0) {
        *(undefined4 *)((longlong)plVar5 + 0x39c) = 0;
      }
      else {
        FUN_141eb3fe0(plVar5 + 3,local_90,0);
        _guard_xfg_dispatch_icall_nop(plVar5 + 3,local_410,(longlong)local_90 * 0x1c);
      }
      plVar5[0x74] = local_84;
      plVar5[0x75] = lStack_7c;
      plVar5[0x76] = local_74;
      plVar5[0x77] = lStack_6c;
      *(undefined4 *)(plVar5 + 0x78) = local_64;
      *(undefined4 *)((longlong)plVar5 + 0x3c4) = uStack_60;
      *(undefined4 *)(plVar5 + 0x79) = uStack_5c;
      *(undefined4 *)((longlong)plVar5 + 0x3cc) = uStack_58;
      plVar5[0x7a] = local_54;
      plVar5[0x7b] = lStack_4c;
      plVar7 = plVar5;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_420 = local_410;
    local_418 = local_440;
    local_440[0] = plVar7;
    FUN_141eabe70(&DAT_1464c9bb0,local_448,&local_420,0);
    plVar7 = local_440[0];
    plVar5 = (longlong *)(DAT_1464c9bb0 + 0x3d0 + (longlong)local_448[0] * 0x3e0);
    if (local_440[0] != (longlong *)0x0) {
      LOCK();
      plVar1 = local_440[0] + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        if (((char)local_440[0][2] == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')
            ))) {
          LOCK();
          bVar10 = *(int *)((longlong)plVar7 + 0xc) == 0;
          if (bVar10) {
            *(int *)((longlong)plVar7 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar10) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,plVar7);
          }
        }
        else {
          (**(code **)*plVar7)(plVar7,1);
        }
      }
    }
    if ((DAT_1469f59d8 != 0) && (*(longlong *)(DAT_1469f59d8 + 0xcc0) != 0)) {
      FShaderCache::InternalLogVertexDeclaration
                (DAT_1469f59d8,*(longlong *)(DAT_1469f59d8 + 0xcc0),local_430,*plVar5);
    }
  }
  lVar9 = *plVar5;
  *local_428 = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141eb2f50 FUN_141eb2f50 body=357 status=ok
// SIG undefined FUN_141eb2f50(void)

undefined8 *
FUN_141eb2f50(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,int param_7)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  puVar2 = (undefined8 *)operator_new(0x90);
  puVar5 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar2 + 1) = 0;
    *puVar2 = &PTR_FUN_144ed0d20;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined2 *)(puVar2 + 2) = 0x100;
    iVar4 = 2;
    if (param_7 != 0) {
      iVar4 = param_7;
    }
    *(int *)((longlong)puVar2 + 0x34) = iVar4;
    puVar2[3] = param_1;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined1 *)(puVar2 + 6) = 0;
    *(undefined1 *)(puVar2 + 7) = 1;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 10) = 4;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *(undefined1 *)(puVar2 + 0xe) = 0;
    puVar2[9] = &PTR_FUN_144ed0ce0;
    puVar2[0xf] = param_1;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    (*DAT_146ab4050)();
    lVar1 = puVar2[3];
    iVar4 = *(int *)(lVar1 + 0x910);
    *(int *)(lVar1 + 0x910) = iVar4 + 1;
    if (*(int *)(lVar1 + 0x914) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar1 + 0x908,iVar4);
    }
    *(undefined8 **)(*(longlong *)(lVar1 + 0x908) + (longlong)iVar4 * 8) = puVar2;
    uVar3 = PlatformCreateOpenGLContext(*(undefined8 *)(puVar2[3] + 0x15c28),param_3);
    puVar2[4] = uVar3;
    FUN_141eb3d80(puVar2,param_4,param_5,param_6);
    FUN_141edf270(puVar2 + 9);
    puVar5 = puVar2;
  }
  *param_2 = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141eb30c0 FUN_141eb30c0 body=594 status=ok
// SIG undefined FUN_141eb30c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141eb30c0(longlong param_1,longlong param_2,undefined1 param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  char cVar6;
  char cVar7;
  undefined4 uVar8;
  BOOL BVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_38;
  LARGE_INTEGER local_30;
  
  QueryPerformanceCounter(&local_30);
  uVar3 = *(undefined4 *)(*(longlong *)(param_2 + 0x40) + 100);
  uVar4 = *(undefined4 *)(*(longlong *)(param_2 + 0x40) + 0x60);
  uVar8 = FUN_141ed0a30();
  cVar6 = PlatformBlitToViewport
                    (*(undefined8 *)(param_1 + 0x15bf8),param_2,uVar4,uVar3,param_3,param_4,uVar8);
  *(undefined4 *)(param_1 + 0x15490) = 0xffffffff;
  lVar11 = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x8e8);
  *(undefined8 *)(param_1 + 0x8e8) = 0;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar5 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))
         ) {
        LOCK();
        bVar12 = *(int *)((longlong)puVar5 + 0xc) == 0;
        if (bVar12) {
          *(int *)((longlong)puVar5 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar12) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar5);
        }
      }
      else {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  if (cVar6 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ab6280) &&
       (_Init_thread_header(&DAT_146ab6280), DAT_146ab6280 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar10 = (longlong *)
                (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.FinishCurrentFrame");
      if (plVar10 != (longlong *)0x0) {
        lVar11 = (**(code **)(*plVar10 + 0x38))(plVar10);
      }
      DAT_146ab6278 = lVar11;
      _Init_thread_footer(&DAT_146ab6280);
    }
    if (*(int *)(DAT_146ab6278 + 4) == 0) {
      FOpenGLEventQuery::WaitForCompletion();
      FUN_141e9dbe0(param_2 + 0x48);
    }
    else {
      FUN_141e9dbe0(param_2 + 0x48);
      FOpenGLEventQuery::WaitForCompletion(param_2 + 0x48);
    }
  }
  if (DAT_1464cabea != '\0') {
    FOpenGLEventQuery::WaitForCompletion(param_2 + 0x48);
    QueryPerformanceCounter(&local_res10);
    _DAT_1464cabf0 = local_res10.s.LowPart - _DAT_1464cabec;
    DAT_1464cabea = '\0';
  }
  if (*(char *)(param_1 + 0x8f0) != '\0') {
    BVar9 = wglMakeCurrent(*(HDC *)(*(longlong *)(param_1 + 0x15bf8) + 8),
                           *(HGLRC *)(*(longlong *)(param_1 + 0x15bf8) + 0x10));
    if (BVar9 == 0) {
      wglMakeCurrent((HDC)0x0,(HGLRC)0x0);
    }
    *(undefined1 *)(param_1 + 0x8f0) = 0;
  }
  QueryPerformanceCounter(&local_38);
  cVar6 = FUN_1415e13e0();
  if (cVar6 == '\0') {
    cVar6 = IsInActualRenderingThread();
    if (cVar6 != '\0') {
      DAT_146ac3ad0 = DAT_146ac3ad0 + (local_38.s.LowPart - local_30._0_4_);
      _DAT_146ac3af0 = _DAT_146ac3af0 + 1;
    }
  }
  else {
    _DAT_146ab6390 = _DAT_146ab6390 + (local_38.s.LowPart - local_30._0_4_);
  }
  return;
}



// FUNCTION 141eb3320 RHIGetAvailableResolutions body=373 status=ok
// SIG undefined RHIGetAvailableResolutions(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FOpenGLDynamicRHI::RHIGetAvailableResolutions(undefined8 param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  DWORD iModeNum;
  longlong lVar4;
  undefined1 auStack_128 [32];
  undefined1 local_108 [16];
  DEVMODEW local_f8;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  iModeNum = 0;
  ::_guard_xfg_dispatch_icall_nop(&local_f8,0,0xdc);
  iVar2 = EnumDisplaySettingsW((LPCWSTR)0x0,0,&local_f8);
  do {
    if (iVar2 == 0) {
      local_108[0] = 0;
      AlgoImpl::
      IntroSortInternal<FScreenResolutionRHI,FIdentityFunctor,TDereferenceWrapper<FScreenResolutionRHI,<lambda_95a754f01efc037c0628af1c24830697>_>_>
                (*param_2,(longlong)(int)param_2[1],0,local_108);
      return 1;
    }
    iModeNum = iModeNum + 1;
    if ((local_f8.dmPelsWidth < 0x28f1) && (local_f8.dmPelsHeight < 0x28f1)) {
      if (param_3 == '\0') {
        if (0x28f0 < local_f8.dmDisplayFrequency) goto LAB_141eb3433;
      }
      else {
        iVar2 = 0;
        if (0 < (int)param_2[1]) {
          puVar3 = (uint *)*param_2;
          do {
            if ((*puVar3 == local_f8.dmPelsWidth) && (puVar3[1] == local_f8.dmPelsHeight))
            goto LAB_141eb3433;
            iVar2 = iVar2 + 1;
            puVar3 = puVar3 + 3;
          } while (iVar2 < (int)param_2[1]);
        }
      }
      lVar4 = (longlong)(int)param_2[1];
      iVar2 = (int)param_2[1] + 1;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2);
      }
      lVar1 = *param_2;
      *(undefined8 *)(lVar1 + lVar4 * 0xc) = 0;
      *(undefined4 *)(lVar1 + 8 + lVar4 * 0xc) = 0;
      puVar3 = (uint *)(*param_2 + lVar4 * 0xc);
      *puVar3 = local_f8.dmPelsWidth;
      puVar3[1] = local_f8.dmPelsHeight;
      puVar3[2] = local_f8.dmDisplayFrequency;
    }
LAB_141eb3433:
    iVar2 = EnumDisplaySettingsW((LPCWSTR)0x0,iModeNum,&local_f8);
  } while( true );
}



// FUNCTION 141eb34a0 RHIGetSupportedResolution body=263 status=ok
// SIG undefined RHIGetSupportedResolution(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FOpenGLDynamicRHI::RHIGetSupportedResolution(undefined8 param_1,DWORD *param_2,DWORD *param_3)

{
  bool bVar1;
  BOOL BVar2;
  uint uVar3;
  uint uVar4;
  DWORD iModeNum;
  DWORD DVar5;
  DWORD DVar6;
  undefined1 auStack_138 [32];
  DEVMODEW local_118;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  bVar1 = false;
  DVar6 = 0;
  DVar5 = 0;
  iModeNum = 0;
  ::_guard_xfg_dispatch_icall_nop(&local_118,0,0xdc);
  BVar2 = EnumDisplaySettingsW((LPCWSTR)0x0,0,&local_118);
  if (BVar2 == 0) {
    *param_2 = 0;
    *param_3 = 0;
  }
  else {
    do {
      iModeNum = iModeNum + 1;
      if ((!bVar1) ||
         ((uVar3 = (int)(local_118.dmPelsWidth - *param_2) >> 0x1f,
          uVar4 = (int)(DVar6 - *param_2) >> 0x1f,
          (int)((local_118.dmPelsWidth - *param_2 ^ uVar3) - uVar3) <=
          (int)((DVar6 - *param_2 ^ uVar4) - uVar4) &&
          (uVar3 = (int)(local_118.dmPelsHeight - *param_3) >> 0x1f,
          uVar4 = (int)(DVar5 - *param_3) >> 0x1f,
          (int)((local_118.dmPelsHeight - *param_3 ^ uVar3) - uVar3) <=
          (int)((DVar5 - *param_3 ^ uVar4) - uVar4))))) {
        bVar1 = true;
        DVar6 = local_118.dmPelsWidth;
        DVar5 = local_118.dmPelsHeight;
      }
      BVar2 = EnumDisplaySettingsW((LPCWSTR)0x0,iModeNum,&local_118);
    } while (BVar2 != 0);
    *param_2 = DVar6;
    *param_3 = DVar5;
  }
  return;
}



// FUNCTION 141eb35d0 FUN_141eb35d0 body=515 status=ok
// SIG undefined FUN_141eb35d0(void)

undefined8
FUN_141eb35d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 local_res10;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  
  local_b0 = &local_res10;
  uStack_a8 = local_res18;
  local_a0 = &stack0x00000028;
  uStack_98 = local_res20;
  local_res10 = param_2;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_1415e13e0();
    if (cVar1 == '\0') {
      puVar4 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      local_b8 = 0;
      puVar2 = puVar4 + 0xc;
      if (DAT_146ab6eb0 < puVar2) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
        puVar4 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar2 = puVar4 + 0xc;
      }
      DAT_146ab6e8c = DAT_146ab6e8c + 1;
      uStack_88 = (undefined4)local_b0;
      uStack_84 = local_b0._4_4_;
      uStack_80 = (undefined4)uStack_a8;
      uStack_7c = uStack_a8._4_4_;
      DAT_146ab6ea8 = puVar2;
      *DAT_146ab6e80 = puVar4;
      local_90 = &local_b8;
      uStack_78 = (undefined4)local_a0;
      uStack_74 = local_a0._4_4_;
      uStack_70 = (undefined4)uStack_98;
      uStack_6c = uStack_98._4_4_;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      DAT_146ab6e80 = puVar4 + 1;
      puVar2 = (undefined8 *)FUN_140438ef0(0x30,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_143f4d098;
        puVar2[1] = local_90;
        puVar2[2] = CONCAT44(uStack_84,uStack_88);
        puVar2[3] = CONCAT44(uStack_7c,uStack_80);
        puVar2[4] = CONCAT44(uStack_74,uStack_78);
        puVar2[5] = CONCAT44(uStack_6c,uStack_70);
      }
      local_68[0] = UE4Function_Private::
                    TFunctionRefCaller<<lambda_be1a3b3f713e425d3361216b207e8d16>,void___cdecl(void)>
                    ::Call;
      puVar4[1] = 0;
      *puVar4 = &PTR_ExecuteAndDestruct_144eb5ab0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 2,local_68);
      if (local_28 != 0) {
        plVar5 = local_58;
        if (local_38 != (longlong *)0x0) {
          plVar5 = local_38;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (DAT_146ab6e8c != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
      }
      FUN_141ed93a0(&DAT_146ab6e78);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
      }
      FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
      return local_b8;
    }
  }
  uVar3 = <lambda_e236c217745a8c5409c2d9925fda17d8>::operator()(&local_b0);
  return uVar3;
}



// FUNCTION 141eb3800 FUN_141eb3800 body=427 status=ok
// SIG undefined FUN_141eb3800(void)

void FUN_141eb3800(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined1 *local_58 [2];
  longlong local_48 [4];
  longlong *local_28;
  int local_18;
  
  local_res18 = &local_res10;
  local_res10 = param_2;
  if (DAT_146ab6383 != '\0') {
    cVar1 = FUN_1415e13e0();
    if (cVar1 == '\0') {
      puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      puVar2 = puVar3 + 0xc;
      if (DAT_146ab6eb0 < puVar2) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
        puVar3 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
        puVar2 = puVar3 + 0xc;
      }
      DAT_146ab6e8c = DAT_146ab6e8c + 1;
      DAT_146ab6ea8 = puVar2;
      *DAT_146ab6e80 = puVar3;
      local_28 = (longlong *)0x0;
      local_18 = 0;
      DAT_146ab6e80 = puVar3 + 1;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_48);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_143f77b70;
        puVar2[1] = &local_res10;
      }
      local_58[0] = &LAB_141eae1d0;
      puVar3[1] = 0;
      *puVar3 = &PTR_ExecuteAndDestruct_144eb5ab0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 2,local_58);
      if (local_18 != 0) {
        plVar4 = local_48;
        if (local_28 != (longlong *)0x0) {
          plVar4 = local_28;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (DAT_146ab6e8c != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
      }
      FUN_141ed93a0(&DAT_146ab6e78);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
      }
      FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
      return;
    }
  }
  <lambda_1a5134d11c59fe26d5f842d7306b548f>::operator()(&local_res18);
  return;
}



// FUNCTION 141eb39b0 FUN_141eb39b0 body=532 status=ok
// SIG undefined FUN_141eb39b0(void)

void FUN_141eb39b0(longlong *param_1)

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
        if (bVar4) goto LAB_141eb3aef;
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
LAB_141eb3aef:
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
        lVar6 = (longlong)iStack_1c * 0x3e0 + *param_1;
        uVar5 = (int)*plVar2 - 1U & *(uint *)(lVar6 + 0x388);
        *(uint *)(lVar6 + 0x3dc) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x3d8) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
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



// FUNCTION 141eb3bd0 FUN_141eb3bd0 body=147 status=ok
// SIG undefined FUN_141eb3bd0(void)

void FUN_141eb3bd0(char param_1,undefined4 param_2)

{
  BOOL BVar1;
  undefined8 *puVar2;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (param_1 != '\0') {
    BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b40);
    if (BVar1 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b40);
    }
    TSet<TTuple<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>,0>,FDefaultSetAllocator>
    ::Remove(&DAT_1464c9b10,param_2);
                    /* WARNING: Could not recover jumptable at 0x000141eb3c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146ab4b40);
    return;
  }
  local_28 = 0;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = param_2;
    *puVar2 = &PTR_CopyToEmptyStorage_144319440;
  }
  local_58[0] = &LAB_141eae2b0;
  FUN_141eb4140(local_58,0);
  return;
}



// FUNCTION 141eb3c70 Remove body=264 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FOpenGLEUniformBufferData>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  uVar10 = (longlong)(int)param_1[9] - 1;
  iVar8 = *(int *)((longlong)plVar9 + ((longlong)param_2 & uVar10) * 4);
  if (iVar8 != -1) {
    lVar5 = *param_1;
    do {
      lVar7 = (longlong)iVar8;
      if (*(int *)(lVar5 + lVar7 * 0x18) == param_2) {
        lVar7 = lVar7 * 0x18;
        uVar10 = (longlong)*(int *)(lVar7 + 0x14 + lVar5) & uVar10;
        puVar3 = (undefined4 *)((longlong)plVar9 + uVar10 * 4);
        iVar4 = *(int *)((longlong)plVar9 + uVar10 * 4);
        goto joined_r0x000141eb3d07;
      }
      iVar8 = *(int *)(lVar5 + 0x10 + lVar7 * 0x18);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x000141eb3d07:
  if (iVar4 == -1) {
LAB_141eb3d32:
    puVar6 = *(undefined8 **)(lVar7 + 8 + *param_1);
    if (puVar6 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar6 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar8,1);
    return 1;
  }
  if (iVar4 == iVar8) {
    *puVar3 = *(undefined4 *)(lVar7 + lVar5 + 0x10);
    goto LAB_141eb3d32;
  }
  lVar2 = (longlong)iVar4 * 3 + 2;
  iVar4 = *(int *)(lVar5 + lVar2 * 8);
  puVar3 = (undefined4 *)(lVar5 + lVar2 * 8);
  goto joined_r0x000141eb3d07;
}



// FUNCTION 141eb3d80 FUN_141eb3d80 body=596 status=ok
// SIG undefined FUN_141eb3d80(void)

void FUN_141eb3d80(longlong param_1,uint param_2,int param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  uint in_stack_ffffffffffffff68;
  uint in_stack_ffffffffffffff70;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar9;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar10;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if (((param_2 != *(uint *)(param_1 + 0x28)) || (param_3 != *(int *)(param_1 + 0x2c))) ||
     (param_4 != *(char *)(param_1 + 0x30))) {
    if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x88) + 8))();
    }
    puVar3 = *(undefined8 **)(param_1 + 0x40);
    uVar7 = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')
            ))) {
          LOCK();
          bVar8 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar8) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar8) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    if (DAT_146ab3551 == '\0') {
      uVar7 = 0;
    }
    else {
      lVar6 = operator_new(0xf0);
      if (lVar6 == 0) {
        OpenGLTextureAllocated(0,1);
      }
      else {
        in_stack_ffffffffffffff68 = 0x8ce0;
        in_stack_ffffffffffffff70 = param_2;
        uVar7 = FUN_141e8b9e0(lVar6,uVar4,0,0x8d41,0x8ce0,param_2,param_3,0,1,1,1,CONCAT44(uVar9,1),
                              CONCAT44(uVar10,2),0,0,1,0,&DAT_1464c9cb8);
        OpenGLTextureAllocated(uVar7,1);
      }
    }
    TRefCountPtr<FRHITexture>::operator=(param_1 + 0x40,uVar7);
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (lVar6 == 0) {
      uVar7 = FOpenGLDynamicRHI::CreateOpenGLTexture
                        (*(undefined8 *)(param_1 + 0x18),param_2,param_3,0,
                         in_stack_ffffffffffffff68 & 0xffffff00,
                         in_stack_ffffffffffffff70 & 0xffffff00,*(undefined1 *)(param_1 + 0x34),1,1,
                         1,1,&DAT_1464c9cb8,0);
      TRefCountPtr<FRHITexture>::operator=(param_1 + 0x40,uVar7);
      lVar6 = *(longlong *)(param_1 + 0x40);
    }
    PlatformResizeGLContext
              (*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x15c28),
               *(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4,
               *(undefined1 *)(param_1 + 0x30),*(undefined4 *)(lVar6 + 0x84),
               *(undefined4 *)(lVar6 + 0x80));
    *(uint *)(param_1 + 0x28) = param_2;
    *(int *)(param_1 + 0x2c) = param_3;
    *(char *)(param_1 + 0x30) = param_4;
  }
  return;
}



// FUNCTION 141eb3fe0 FUN_141eb3fe0 body=17 status=ok
// SIG undefined FUN_141eb3fe0(void)

void FUN_141eb3fe0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x20;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 900) = uVar1;
  return;
}



// FUNCTION 141eb4000 ResizeGrow body=151 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD,TSizedDefaultAllocator<32>_>::
     ResizeGrow(longlong *param_1)

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
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x3e0,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x842108421084211) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 9);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x3e0,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 141eb40a0 ResizeGrow body=11 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FOpenGLVertexElement,TFixedAllocator<32>_>::ResizeGrow(longlong param_1)

{
  *(undefined4 *)(param_1 + 900) = 0x20;
  return;
}



// FUNCTION 141eb40b0 FUN_141eb40b0 body=130 status=ok
// SIG undefined FUN_141eb40b0(void)

void FUN_141eb40b0(longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x3e0,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x842108421084211) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 9);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x3e0,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 141eb4140 FUN_141eb4140 body=493 status=ok
// SIG undefined FUN_141eb4140(void)

void FUN_141eb4140(undefined8 *param_1,char param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_68 [80];
  
  if ((DAT_146ab6383 == '\0') || (cVar1 = FUN_1415e13e0(), cVar1 != '\0')) {
    uVar4 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      plVar5 = (longlong *)param_1[6];
      if ((longlong *)param_1[6] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      if (plVar5 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar5 + 8))();
      }
    }
    (*(code *)*param_1)(uVar4);
  }
  else {
    puVar6 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
    puVar2 = puVar6 + 0xc;
    if (DAT_146ab6eb0 < puVar2) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x70);
      puVar6 = (undefined8 *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      puVar2 = puVar6 + 0xc;
    }
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    DAT_146ab6ea8 = puVar2;
    *DAT_146ab6e80 = puVar6;
    DAT_146ab6e80 = puVar6 + 1;
    lVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_68,param_1);
    *puVar6 = &PTR_ExecuteAndDestruct_144eb5ab0;
    puVar6[1] = 0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar6 + 2,lVar3);
    if (*(int *)(lVar3 + 0x40) != 0) {
      plVar5 = *(longlong **)(lVar3 + 0x30);
      if (*(longlong **)(lVar3 + 0x30) == (longlong *)0x0) {
        plVar5 = (longlong *)(lVar3 + 0x10);
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (*(longlong *)(lVar3 + 0x30) != 0) {
      FMemory::Free();
    }
    if (param_2 != '\0') {
      if (DAT_146ab6e8c != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
      }
      FUN_141ed93a0(&DAT_146ab6e78);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
      }
      FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
    }
  }
  if (*(int *)(param_1 + 8) != 0) {
    plVar5 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141eb4330 SetCustomPresent body=132 status=ok
// SIG undefined SetCustomPresent(void)

void FOpenGLViewport::SetCustomPresent(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  
  puVar3 = *(undefined8 **)(param_1 + 0x88);
  *(longlong *)(param_1 + 0x88) = param_2;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
  }
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) != '\0') ||
         ((DAT_146ab62f5 == '\0' && (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 != '\0')))
         ) {
                    /* WARNING: Could not recover jumptable at 0x000141eb43ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar3)(puVar3,1);
        return;
      }
      LOCK();
      bVar5 = *(int *)((longlong)puVar3 + 0xc) == 0;
      if (bVar5) {
        *(int *)((longlong)puVar3 + 0xc) = 1;
      }
      UNLOCK();
      if (bVar5) {
        TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141eb43c0 SetLayoutTable body=439 status=ok
// SIG undefined SetLayoutTable(void)

void SetLayoutTable(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  iVar3 = *(int *)(param_3 + 0x20);
  if (iVar3 != 0) {
    plVar9 = *(longlong **)(param_1 + 0x40);
    for (iVar7 = *(int *)(param_1 + 0x48); iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar4 = (undefined8 *)*plVar9;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar4 + 1);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if ((*(char *)(puVar4 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))) {
            LOCK();
            bVar10 = *(int *)((longlong)puVar4 + 0xc) == 0;
            if (bVar10) {
              *(int *)((longlong)puVar4 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar10) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar4)(puVar4);
          }
        }
      }
      plVar9 = plVar9 + 1;
    }
    plVar9 = (longlong *)(param_1 + 0x40);
    lVar8 = 0;
    iVar7 = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(int *)(param_1 + 0x4c) != iVar3) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar9);
      iVar7 = *(int *)(param_1 + 0x48);
    }
    *(int *)(param_1 + 0x48) = iVar7 + iVar3;
    if (*(int *)(param_1 + 0x4c) < iVar7 + iVar3) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*plVar9 + (longlong)iVar7 * 8),0,(longlong)iVar3 * 8);
    if (0 < iVar3) {
      do {
        puVar4 = *(undefined8 **)(*plVar9 + lVar8 * 8);
        lVar5 = *(longlong *)
                 ((ulonglong)*(ushort *)(*(longlong *)(param_3 + 8) + lVar8 * 2) + param_2);
        *(longlong *)(*plVar9 + lVar8 * 8) = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar4 + 1);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            if ((*(char *)(puVar4 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))) {
              LOCK();
              bVar10 = *(int *)((longlong)puVar4 + 0xc) == 0;
              if (bVar10) {
                *(int *)((longlong)puVar4 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar10) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar4);
              }
            }
            else {
              (**(code **)*puVar4)(puVar4,1);
            }
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar3);
    }
  }
  return;
}



// FUNCTION 141eb4580 FUN_141eb4580 body=577 status=ok
// SIG undefined FUN_141eb4580(void)

undefined8 FUN_141eb4580(longlong param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  BOOL BVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  LARGE_INTEGER local_res8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  
  cVar5 = *(char *)(param_1 + 0x48);
  while (cVar5 != '\0') {
    (**(code **)(*DAT_146ab6358 + 0x728))(DAT_146ab6358,&local_a8,0);
    lVar10 = DAT_146ac3938;
    cVar5 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
      lVar9 = 4;
    }
    else {
      lVar9 = 0;
    }
    lVar4 = DAT_146ac3998;
    iVar1 = *(int *)(lVar9 + lVar10);
    if (iVar1 < 1) {
      iVar7 = 1;
    }
    else {
      iVar7 = 4;
      if (iVar1 < 4) {
        iVar7 = iVar1;
      }
    }
    dVar11 = (double)iVar7 * 0.016666666666666666;
    cVar5 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
      lVar10 = 4;
    }
    else {
      lVar10 = 0;
    }
    dVar2 = local_98 + dVar11;
    dVar3 = (double)*(float *)(lVar10 + lVar4) * 0.001;
    QueryPerformanceCounter(&local_res8);
    dVar2 = (dVar2 - dVar3) - ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0);
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    FUN_1416b1760((float)dVar2);
    BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    if (BVar8 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    }
    *(undefined8 *)(param_1 + 0x30) = local_a8;
    *(undefined8 *)(param_1 + 0x38) = uStack_a0;
    *(double *)(param_1 + 0x40) = local_98;
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
    *(double *)(param_1 + 0x38) = (dVar11 + *(double *)(param_1 + 0x38)) - dVar3;
    *(double *)(param_1 + 0x40) = (dVar11 + *(double *)(param_1 + 0x40)) - dVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
    cVar5 = *(char *)(param_1 + 0x48);
  }
  return 0;
}



// FUNCTION 141eb47e0 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRHIFrameOffsetThread::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_IsPromotedBuild_144edafb0;
  if (param_1[10] != 0) {
    FUN_1415b5910();
    param_1[10] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141eb4850 operator<FString,FGPUProfilerEventNodeStats>_TTuple<FString,FGPUProfilerEventNodeStats> body=118 status=ok
// SIG undefined operator<FString,FGPUProfilerEventNodeStats>_TTuple<FString,FGPUProfilerEventNodeStats>(void)

longlong TPairInitializer<FString_const_&,FGPUProfilerEventNodeStats_const_&>::
         operator<FString,FGPUProfilerEventNodeStats>_TTuple<FString,FGPUProfilerEventNodeStats>
                   (undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  FString::FString(param_2,*param_1);
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_1440104c8;
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(lVar1 + 8);
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_144da0c18;
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(lVar1 + 0x10);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(lVar1 + 0x14);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(lVar1 + 0x18);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(lVar1 + 0x1c);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(lVar1 + 0x20);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(lVar1 + 0x24);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(lVar1 + 0x28);
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(lVar1 + 0x2c);
  return param_2;
}



// FUNCTION 141eb48d0 AddUniqueImpl<TRefCountPtr<FGraphEvent>_const_&> body=188 status=ok
// SIG undefined AddUniqueImpl<TRefCountPtr<FGraphEvent>_const_&>(void)

ulonglong TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::
          AddUniqueImpl<TRefCountPtr<FGraphEvent>_const_&>(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  uVar1 = *(uint *)(param_1 + 5);
  plVar5 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar5 = param_1;
  }
  if (plVar5 != plVar5 + (int)uVar1) {
    plVar3 = plVar5;
    do {
      if (*plVar3 == *param_2) {
        uVar4 = (longlong)plVar3 - (longlong)plVar5 >> 3;
        if ((int)uVar4 != -1) {
          return uVar4;
        }
        break;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar5 + (int)uVar1);
  }
  *(uint *)(param_1 + 5) = uVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)(uVar1 + 1)) {
    ResizeGrow(param_1,uVar1);
  }
  plVar5 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar5 = param_1;
  }
  lVar2 = *param_2;
  plVar5[(int)uVar1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
    UNLOCK();
  }
  return (ulonglong)uVar1;
}



// FUNCTION 141eb4990 FUN_141eb4990 body=391 status=ok
// SIG undefined FUN_141eb4990(void)

ulonglong FUN_141eb4990(longlong param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  switch(param_2) {
  case 1:
    uVar2 = FMultiInt<6>::operator==(param_1,param_3);
    return uVar2;
  case 2:
    in_RAX = 0;
    param_1 = param_1 - (longlong)param_3;
    puVar3 = param_3;
    uVar2 = in_RAX;
    do {
      uVar1 = *(uint *)(param_1 + (longlong)puVar3);
      uVar5 = *puVar3;
      if (uVar1 >= uVar5 && uVar1 != uVar5) goto LAB_141eb49fd;
      if (uVar1 < uVar5) break;
      uVar5 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar5;
      puVar3 = puVar3 + 1;
    } while (uVar5 < 6);
    do {
      uVar1 = *param_3;
      uVar5 = *(uint *)(param_1 + (longlong)param_3);
      if (uVar1 >= uVar5 && uVar1 != uVar5) break;
      if (uVar1 < uVar5) goto switchD_141eb49b0_default;
      uVar5 = (int)in_RAX + 1;
      in_RAX = (ulonglong)uVar5;
      param_3 = param_3 + 1;
      if (5 < uVar5) {
        return (ulonglong)(uint3)(uVar5 >> 8) << 8;
      }
    } while( true );
  case 3:
    in_RAX = 0;
    param_1 = param_1 - (longlong)param_3;
    while (uVar5 = *(uint *)(param_1 + (longlong)param_3), uVar5 <= *param_3) {
      if (uVar5 < *param_3) goto switchD_141eb49b0_default;
      uVar5 = (int)in_RAX + 1;
      in_RAX = (ulonglong)uVar5;
      param_3 = param_3 + 1;
      if (5 < uVar5) {
        return (ulonglong)(uint3)(uVar5 >> 8) << 8;
      }
    }
    break;
  case 4:
    in_RAX = 0;
    param_1 = param_1 - (longlong)param_3;
    puVar3 = param_3;
    uVar2 = in_RAX;
    do {
      uVar1 = *(uint *)(param_1 + (longlong)puVar3);
      uVar5 = *puVar3;
      if (uVar1 >= uVar5 && uVar1 != uVar5) goto LAB_141eb4a70;
      puVar4 = param_3;
      uVar6 = in_RAX;
      if (uVar1 < uVar5) break;
      uVar5 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar5;
      puVar3 = puVar3 + 1;
    } while (uVar5 < 6);
    do {
      if (*(uint *)(param_1 + (longlong)puVar4) < *puVar4) goto LAB_141eb4a70;
      if (*puVar4 < *(uint *)(param_1 + (longlong)puVar4)) break;
      uVar5 = (int)uVar6 + 1;
      puVar4 = puVar4 + 1;
      uVar6 = (ulonglong)uVar5;
      if (5 < uVar5) {
        return 1;
      }
    } while( true );
  case 5:
    in_RAX = 0;
    param_1 = param_1 - (longlong)param_3;
    while (uVar5 = *(uint *)(param_1 + (longlong)param_3), *param_3 <= uVar5) {
      if (*param_3 < uVar5) goto switchD_141eb49b0_default;
      uVar5 = (int)in_RAX + 1;
      in_RAX = (ulonglong)uVar5;
      param_3 = param_3 + 1;
      if (5 < uVar5) {
        return (ulonglong)(uint3)(uVar5 >> 8) << 8;
      }
    }
    break;
  case 6:
    in_RAX = 0;
    param_1 = param_1 - (longlong)param_3;
    puVar3 = param_3;
    uVar2 = in_RAX;
    do {
      uVar1 = *(uint *)(param_1 + (longlong)puVar3);
      uVar5 = *puVar3;
      if (uVar1 >= uVar5 && uVar1 != uVar5) goto LAB_141eb4b00;
      puVar4 = param_3;
      uVar6 = in_RAX;
      if (uVar1 < uVar5) break;
      uVar5 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar5;
      puVar3 = puVar3 + 1;
    } while (uVar5 < 6);
    do {
      if (*(uint *)(param_1 + (longlong)puVar4) < *puVar4) goto LAB_141eb4b00;
      if (*puVar4 < *(uint *)(param_1 + (longlong)puVar4)) break;
      uVar5 = (int)uVar6 + 1;
      puVar4 = puVar4 + 1;
      uVar6 = (ulonglong)uVar5;
      if (5 < uVar5) {
        return 1;
      }
    } while( true );
  default:
    goto switchD_141eb49b0_default;
  }
LAB_141eb49fd:
  return CONCAT71((int7)(in_RAX >> 8),1);
LAB_141eb4a70:
  uVar1 = *(uint *)(param_1 + (longlong)param_3);
  uVar5 = *param_3;
  if (uVar1 >= uVar5 && uVar1 != uVar5) goto LAB_141eb49fd;
  if (uVar1 < uVar5) goto switchD_141eb49b0_default;
  uVar5 = (int)in_RAX + 1;
  in_RAX = (ulonglong)uVar5;
  param_3 = param_3 + 1;
  if (5 < uVar5) {
    return (ulonglong)(uint3)(uVar5 >> 8) << 8;
  }
  goto LAB_141eb4a70;
  while( true ) {
    uVar5 = (int)in_RAX + 1;
    in_RAX = (ulonglong)uVar5;
    param_3 = param_3 + 1;
    if (5 < uVar5) break;
LAB_141eb4b00:
    uVar1 = *param_3;
    uVar5 = *(uint *)(param_1 + (longlong)param_3);
    if (uVar1 >= uVar5 && uVar1 != uVar5) goto LAB_141eb49fd;
    if (uVar1 < uVar5) break;
  }
switchD_141eb49b0_default:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141eb4b40 Discard<<lambda_9bcd655b6dec050e72f51feb99300d2c>_> body=625 status=ok
// SIG undefined Discard<<lambda_9bcd655b6dec050e72f51feb99300d2c>_>(void)

int TDiscardableKeyValueCache<FRHIComputeShader_*,FComputePipelineState_*>::
    Discard<<lambda_9bcd655b6dec050e72f51feb99300d2c>_>
              (longlong param_1,ulonglong param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
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
  
  uVar8 = (undefined4)param_2;
  if ((param_2 & 2) == 0) {
    uVar8 = ApplyLock(param_1,param_2,2);
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  uVar2 = *(uint *)(plVar5 + 5);
  puVar1 = (uint *)(plVar5 + 2);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar14 = (uint *)plVar5[4];
    if ((uint *)plVar5[4] == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar3 = *puVar14;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar12 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar9 = local_98 + 1;
      bVar7 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar9;
      if (bVar7) goto LAB_141eb4c2c;
      uVar3 = puVar14[lVar12 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
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
    if ((int)uVar2 < (int)uStack_84) {
LAB_141eb4c2c:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(plVar5 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar13 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar5;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar14 = (uint *)plVar5[4];
    if ((uint *)plVar5[4] == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar11 = puVar14[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar9 = (int)uVar3 >> 5;
    while (uVar11 == 0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_141eb4cf1;
      uVar11 = puVar14[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar11 = -uVar11 & uVar11;
    iVar9 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (uVar13 - iVar9) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_141eb4cf1:
      uStack_84 = uVar2;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    puVar6 = *(undefined8 **)(*plVar5 + 8 + (longlong)(int)uStack_5c * 0x18);
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  lVar12 = *(longlong *)(param_1 + 0x10);
  iVar9 = *(int *)(lVar12 + 8);
  iVar4 = *(int *)(lVar12 + 0x34);
  TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
  ::Empty(lVar12,0);
  lVar12 = *(longlong *)(param_1 + 8);
  lVar10 = 0x68;
  if (lVar12 != param_1 + 0x18) {
    lVar10 = 0x18;
  }
  *(longlong *)(param_1 + 8) = lVar10 + param_1;
  uVar2 = 0x18;
  if (lVar12 != param_1 + 0x18) {
    uVar2 = 0x68;
  }
  *(ulonglong *)(param_1 + 0x10) = (ulonglong)uVar2 + param_1;
  *param_3 = uVar8;
  return iVar9 - iVar4;
}



// FUNCTION 141eb4dc0 Emplace<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_const_&> body=470 status=ok
// SIG undefined Emplace<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_const_&>(void)

int * TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_const_&>
                (longlong *param_1,int *param_2,uint *param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  *local_30 = *param_3;
  FPipelineCacheFileFormatPSOMetaData::FPipelineCacheFileFormatPSOMetaData(local_30 + 2,param_3 + 2)
  ;
  local_30[0x28] = 0xffffffff;
  bVar6 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)((longlong)iVar3 * 0xa8 + *param_1) == *local_30) goto LAB_141eb4e91;
          iVar3 = *(int *)((longlong)iVar3 * 0xa8 + 0xa0 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_141eb4e91:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar3 * 0xa8 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x98) = 0;
      if (*(longlong *)((longlong)_Dst + 0x90) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 0x50);
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_30,0xa0);
      TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_141eb4f6d;
    }
  }
  cVar1 = ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & *local_30;
    local_30[0x29] = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_30[0x28] =
         *(uint *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_141eb4f6d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 141eb4fa0 FUN_141eb4fa0 body=593 status=ok
// SIG undefined FUN_141eb4fa0(void)

int * FUN_141eb4fa0(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  void *_Src;
  longlong lVar9;
  bool bVar10;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<Audio::FGrain,TSizedDefaultAllocator<32>_>::ResizeGrow(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar6 * 0x250 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x250 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  _Src = (void *)((longlong)iVar6 * 0x250 + *param_1);
  FUN_141eb9840(_Src,param_3);
  *(undefined4 *)((longlong)_Src + 0x248) = 0xffffffff;
  bVar10 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar6 = FUN_141ec8950(_Src);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar6) * 4);
      if (iVar6 != -1) {
        lVar3 = *param_1;
        do {
          lVar9 = (longlong)iVar6 * 0x250 + lVar3;
          cVar4 = FUN_141ebbd90(lVar9,_Src);
          if (cVar4 != '\0') goto LAB_141eb510c;
          iVar6 = *(int *)(lVar9 + 0x248);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_141eb510c:
    bVar10 = iVar6 != -1;
    if (bVar10) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar6 * 0x250 + *param_1),_Src,0x248);
      FUN_141ed2d40(param_1,*param_2,1);
      *param_2 = iVar6;
      goto LAB_141eb51c7;
    }
  }
  cVar4 = FUN_141ebe100(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    iVar6 = *param_2;
    uVar7 = FUN_141ec8950(_Src);
    uVar7 = (int)param_1[9] - 1U & uVar7;
    *(uint *)((longlong)_Src + 0x24c) = uVar7;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x248) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) = iVar6
    ;
  }
LAB_141eb51c7:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 141eb5200 FUN_141eb5200 body=700 status=ok
// SIG undefined FUN_141eb5200(void)

uint * FUN_141eb5200(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  char cVar12;
  undefined4 uVar13;
  bool bVar14;
  uint local_res8 [2];
  undefined4 uStack_3c;
  
  iVar11 = 1;
  uVar13 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar9 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar9 + 1)) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,uVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar9 = *(uint *)(param_1 + 6);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)(int)uVar9 * 0x28);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x28) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar9;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
  _Src = (undefined8 *)(*param_1 + (longlong)(int)uVar9 * 0x28);
  FString::FString(_Src,*param_3);
  local_res8[0] = local_res8[0] & 0xffffff00;
  *(undefined4 *)(_Src + 2) = 0;
  *(undefined4 *)((longlong)_Src + 0x14) = 0;
  *(undefined4 *)(_Src + 3) = 0;
  *(undefined4 *)((longlong)_Src + 0x1c) = uStack_3c;
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar9 = local_res8[0];
    lVar10 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + lVar10 * 0x28) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar2 + lVar10 * 0x28),_Src,0x20);
      uVar5 = *param_2;
      bVar3 = (byte)uVar5 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = uVar5;
      }
      lVar10 = *param_1;
      *(undefined4 *)(lVar10 + (longlong)(int)uVar5 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar13 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar10 + 4 + (longlong)(int)uVar5 * 0x28) = uVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar5;
      plVar6 = (longlong *)param_1[4];
      *param_2 = uVar9;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141eb5496;
    }
  }
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar9) {
    uVar5 = (uVar9 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar12 = '\0';
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar11;
    }
    uVar5 = (uVar9 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar12 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar9 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar9 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*_Src;
    }
    uVar5 = FUN_140438070(puVar8);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)_Src + 0x24) = uVar5;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         uVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141eb5496:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 141eb54c0 FUN_141eb54c0 body=474 status=ok
// SIG undefined FUN_141eb54c0(void)

int * FUN_141eb54c0(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 *_Src;
  int iVar13;
  bool bVar14;
  int local_res8 [2];
  int local_res10;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar13 * 0x40 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar13;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  bVar14 = false;
  puVar2 = (uint *)((longlong)plVar12 +
                   (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar13 & 0x1f);
  puVar4 = (undefined8 *)*param_3;
  _Src = (undefined8 *)((longlong)iVar13 * 0x40 + *param_1);
  puVar5 = (undefined8 *)param_3[1];
  uVar9 = puVar4[1];
  *_Src = *puVar4;
  _Src[1] = uVar9;
  uVar6 = *(undefined4 *)((longlong)puVar4 + 0x14);
  uVar7 = *(undefined4 *)(puVar4 + 3);
  uVar8 = *(undefined4 *)((longlong)puVar4 + 0x1c);
  *(undefined4 *)(_Src + 2) = *(undefined4 *)(puVar4 + 2);
  *(undefined4 *)((longlong)_Src + 0x14) = uVar6;
  *(undefined4 *)(_Src + 3) = uVar7;
  *(undefined4 *)((longlong)_Src + 0x1c) = uVar8;
  uVar6 = *(undefined4 *)((longlong)puVar4 + 0x24);
  uVar7 = *(undefined4 *)(puVar4 + 5);
  uVar8 = *(undefined4 *)((longlong)puVar4 + 0x2c);
  *(undefined4 *)(_Src + 4) = *(undefined4 *)(puVar4 + 4);
  *(undefined4 *)((longlong)_Src + 0x24) = uVar6;
  *(undefined4 *)(_Src + 5) = uVar7;
  *(undefined4 *)((longlong)_Src + 0x2c) = uVar8;
  _Src[6] = *puVar5;
  *(undefined4 *)(_Src + 7) = 0xffffffff;
  local_res10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (local_res10 != 1) {
    TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar14 = local_res8[0] != -1;
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)local_res8[0] * 0x40 + *param_1),_Src,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar13,1);
      *param_2 = local_res8[0];
      goto LAB_141eb567a;
    }
  }
  cVar10 = TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
           ::ConditionalRehash(param_1,local_res10,0);
  if (cVar10 == '\0') {
    uVar11 = GetTypeHash(_Src);
    uVar11 = uVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x3c) = uVar11;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 7) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_141eb567a:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar14;
  }
  return param_2;
}



// FUNCTION 141eb56a0 FUN_141eb56a0 body=419 status=ok
// SIG undefined FUN_141eb56a0(void)

int * FUN_141eb56a0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_28 [2];
  uint *local_20;
  
  FUN_141ebc9a0(param_1,local_28);
  uVar1 = param_3[1];
  *param_2 = local_28[0];
  *local_20 = *(uint *)*param_3;
  FUN_141eb9840(local_20 + 1,uVar1);
  local_20[0x93] = 0xffffffff;
  bVar7 = false;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_20) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)((longlong)iVar4 * 0x254 + *param_1) == *local_20) goto LAB_141eb5771;
          iVar4 = *(int *)((longlong)iVar4 * 0x254 + 0x24c + *param_1);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_141eb5771:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar4 * 0x254 + *param_1),local_20,0x24c);
      FUN_141ed2bc0(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_141eb5819;
    }
  }
  cVar2 = FUN_141ebdd90(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_20;
    local_20[0x94] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_20[0x93] =
         *(uint *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_141eb5819:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 141eb5850 Emplace<TPairInitializer<unsigned_int_const_&,FPipelineCacheFileFormatPSOMetaData_const_&>_> body=473 status=ok
// SIG undefined Emplace<TPairInitializer<unsigned_int_const_&,FPipelineCacheFileFormatPSOMetaData_const_&>_>(void)

int * TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,FPipelineCacheFileFormatPSOMetaData_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  uVar1 = param_3[1];
  *param_2 = local_38[0];
  *local_30 = *(uint *)*param_3;
  FPipelineCacheFileFormatPSOMetaData::FPipelineCacheFileFormatPSOMetaData(local_30 + 2,uVar1);
  local_30[0x28] = 0xffffffff;
  bVar7 = false;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)((longlong)iVar4 * 0xa8 + *param_1) == *local_30) goto LAB_141eb5921;
          iVar4 = *(int *)((longlong)iVar4 * 0xa8 + 0xa0 + *param_1);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_141eb5921:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _Dst = (void *)((longlong)iVar4 * 0xa8 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x98) = 0;
      if (*(longlong *)((longlong)_Dst + 0x90) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 0x50);
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_30,0xa0);
      TSparseArray<TSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_141eb5a00;
    }
  }
  cVar2 = ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_30;
    local_30[0x29] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_30[0x28] =
         *(uint *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_141eb5a00:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 141eb5a30 FUN_141eb5a30 body=697 status=ok
// SIG undefined FUN_141eb5a30(void)

int * FUN_141eb5a30(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *_Src;
  longlong lVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar17 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar17 + 1) {
      TArray<ATTLENBossSnak01Pawn::TTLENBossSnakJoint,FDefaultAllocator>::ResizeGrow(param_1,iVar17)
      ;
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar17 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar18 = *(int *)((longlong)iVar17 * 0x130 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar18;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar18 * 0x130 + *param_1) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar17;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar13 +
                   (longlong)((int)(iVar17 + (iVar17 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar17 & 0x1f);
  lVar15 = 2;
  _Src = (undefined8 *)((longlong)iVar17 * 0x130 + *param_1);
  puVar2 = (undefined8 *)param_3[1];
  puVar7 = _Src;
  puVar8 = (undefined8 *)*param_3;
  do {
    puVar14 = puVar8;
    puVar12 = puVar7;
    uVar6 = puVar14[1];
    *puVar12 = *puVar14;
    puVar12[1] = uVar6;
    uVar6 = puVar14[3];
    puVar12[2] = puVar14[2];
    puVar12[3] = uVar6;
    uVar6 = puVar14[5];
    puVar12[4] = puVar14[4];
    puVar12[5] = uVar6;
    uVar6 = puVar14[7];
    puVar12[6] = puVar14[6];
    puVar12[7] = uVar6;
    uVar6 = puVar14[9];
    puVar12[8] = puVar14[8];
    puVar12[9] = uVar6;
    uVar6 = puVar14[0xb];
    puVar12[10] = puVar14[10];
    puVar12[0xb] = uVar6;
    uVar6 = puVar14[0xd];
    puVar12[0xc] = puVar14[0xc];
    puVar12[0xd] = uVar6;
    uVar6 = puVar14[0xf];
    puVar12[0xe] = puVar14[0xe];
    puVar12[0xf] = uVar6;
    lVar15 = lVar15 + -1;
    puVar7 = puVar12 + 0x10;
    puVar8 = puVar14 + 0x10;
  } while (lVar15 != 0);
  uVar3 = *(undefined4 *)((longlong)puVar14 + 0x84);
  uVar4 = *(undefined4 *)(puVar14 + 0x11);
  uVar5 = *(undefined4 *)((longlong)puVar14 + 0x8c);
  bVar19 = false;
  *(undefined4 *)(puVar12 + 0x10) = *(undefined4 *)(puVar14 + 0x10);
  *(undefined4 *)((longlong)puVar12 + 0x84) = uVar3;
  *(undefined4 *)(puVar12 + 0x11) = uVar4;
  *(undefined4 *)((longlong)puVar12 + 0x8c) = uVar5;
  uVar3 = *(undefined4 *)((longlong)puVar14 + 0x94);
  uVar4 = *(undefined4 *)(puVar14 + 0x13);
  uVar5 = *(undefined4 *)((longlong)puVar14 + 0x9c);
  *(undefined4 *)(puVar12 + 0x12) = *(undefined4 *)(puVar14 + 0x12);
  *(undefined4 *)((longlong)puVar12 + 0x94) = uVar3;
  *(undefined4 *)(puVar12 + 0x13) = uVar4;
  *(undefined4 *)((longlong)puVar12 + 0x9c) = uVar5;
  _Src[0x24] = *puVar2;
  *(undefined4 *)(_Src + 0x25) = 0xffffffff;
  iVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar18 != 1) {
    if (iVar18 != 0) {
      plVar13 = (longlong *)param_1[8];
      iVar10 = GetTypeHash(_Src);
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar13 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4)
      ;
      if (iVar10 != -1) {
        lVar15 = *param_1;
        do {
          lVar16 = (longlong)iVar10 * 0x130 + lVar15;
          cVar9 = FUN_141ebbab0(lVar16,_Src);
          if (cVar9 != '\0') goto LAB_141eb5c0c;
          iVar10 = *(int *)(lVar16 + 0x128);
        } while (iVar10 != -1);
      }
    }
    iVar10 = -1;
LAB_141eb5c0c:
    bVar19 = iVar10 != -1;
    if (bVar19) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar10 * 0x130 + *param_1),_Src,0x128);
      TSparseArray<TSetElement<TTuple<FString,FConfigFile>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar17,1);
      *param_2 = iVar10;
      goto LAB_141eb5cbc;
    }
  }
  cVar9 = TSet<TTuple<FGraphicsPipelineStateKey,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateKey,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar18,0);
  if (cVar9 == '\0') {
    uVar11 = GetTypeHash(_Src);
    uVar11 = uVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 300) = uVar11;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x25) =
         *(undefined4 *)
          ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_141eb5cbc:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar19;
  }
  return param_2;
}



// FUNCTION 141eb5cf0 FUN_141eb5cf0 body=603 status=ok
// SIG undefined FUN_141eb5cf0(void)

uint * FUN_141eb5cf0(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 uVar11;
  bool bVar12;
  uint local_res8 [2];
  
  uVar11 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar9 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar9 + 1)) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1,uVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar9 = *(uint *)(param_1 + 6);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)(int)uVar9 * 0x48);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x48) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = uVar9;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 +
                   (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
  _Src = (undefined8 *)(*param_1 + (longlong)(int)uVar9 * 0x48);
  TPairInitializer<FString_const_&,FGPUProfilerEventNodeStats_const_&>::
  operator<FString,FGPUProfilerEventNodeStats>_TTuple<FString,FGPUProfilerEventNodeStats>
            (param_3,_Src);
  *(undefined4 *)(_Src + 8) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FGPUProfilerEventNodeStats>,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar9 = local_res8[0];
    lVar10 = (longlong)(int)local_res8[0];
    bVar12 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar12);
    if (bVar12) {
      plVar7 = (longlong *)(*param_1 + lVar10 * 0x48);
      plVar7[2] = (longlong)&PTR_FUN_1440104c8;
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar7,_Src,0x40);
      uVar6 = *param_2;
      bVar3 = (byte)uVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x48) = uVar6;
      }
      lVar10 = *param_1;
      *(undefined4 *)(lVar10 + (longlong)(int)uVar6 * 0x48) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar11 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar10 + 4 + (longlong)(int)uVar6 * 0x48) = uVar11;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar6;
      plVar7 = (longlong *)param_1[4];
      *param_2 = uVar9;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141eb5f25;
    }
  }
  cVar4 = TSet<TTuple<FString,FGPUProfilerEventNodeStats>,TDefaultMapHashableKeyFuncs<FString,FGPUProfilerEventNodeStats,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    uVar9 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*_Src;
    }
    uVar6 = FUN_140438070(puVar8);
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)_Src + 0x44) = uVar6;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 8) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(uint *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         uVar9;
  }
LAB_141eb5f25:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 141eb5f50 FUN_141eb5f50 body=506 status=ok
// SIG undefined FUN_141eb5f50(void)

void FUN_141eb5f50(undefined8 *param_1,int param_2,undefined8 param_3,int *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar4 = iVar6;
    iVar8 = iVar5;
joined_r0x000141eb5f88:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          lVar9 = param_1[iVar7];
          lVar1 = param_1[(longlong)iVar6 + 2];
          if (*param_4 == 2) {
            bVar10 = *(uint *)(lVar9 + 0x20) < *(uint *)(lVar1 + 0x20);
          }
          else if (*param_4 == 3) {
            bVar10 = *(uint *)(lVar9 + 0x24) < *(uint *)(lVar1 + 0x24);
          }
          else {
            bVar10 = *(float *)(lVar9 + 0x28) < *(float *)(lVar1 + 0x28);
          }
          if (bVar10) {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        lVar9 = param_1[iVar7];
        lVar1 = param_1[iVar5];
        if (*param_4 == 2) {
          bVar10 = *(uint *)(lVar9 + 0x20) < *(uint *)(lVar1 + 0x20);
        }
        else if (*param_4 == 3) {
          bVar10 = *(uint *)(lVar9 + 0x24) < *(uint *)(lVar1 + 0x24);
        }
        else {
          bVar10 = *(float *)(lVar9 + 0x28) < *(float *)(lVar1 + 0x28);
        }
        if (bVar10) {
          param_1[iVar5] = lVar9;
          iVar6 = iVar7 * 2 + 1;
          param_1[iVar7] = lVar1;
          iVar5 = iVar7;
          goto joined_r0x000141eb5f88;
        }
      }
      iVar6 = iVar4 + -2;
      iVar5 = iVar8 + -1;
      iVar4 = iVar6;
      iVar8 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  lVar9 = (longlong)param_2;
  if (0 < param_2) {
    do {
      uVar2 = *param_1;
      *param_1 = param_1[lVar9];
      param_1[lVar9] = uVar2;
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar5 * 2;
          iVar6 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            lVar1 = param_1[iVar6];
            lVar3 = param_1[(longlong)iVar4 + 2];
            if (*param_4 == 2) {
              bVar10 = *(uint *)(lVar1 + 0x20) < *(uint *)(lVar3 + 0x20);
            }
            else if (*param_4 == 3) {
              bVar10 = *(uint *)(lVar1 + 0x24) < *(uint *)(lVar3 + 0x24);
            }
            else {
              bVar10 = *(float *)(lVar1 + 0x28) < *(float *)(lVar3 + 0x28);
            }
            if (bVar10) {
              iVar6 = iVar4;
            }
            iVar6 = iVar6 + 1;
          }
          lVar1 = param_1[iVar6];
          lVar3 = param_1[iVar5];
          if (*param_4 == 2) {
            bVar10 = *(uint *)(lVar1 + 0x20) < *(uint *)(lVar3 + 0x20);
          }
          else if (*param_4 == 3) {
            bVar10 = *(uint *)(lVar1 + 0x24) < *(uint *)(lVar3 + 0x24);
          }
          else {
            bVar10 = *(float *)(lVar1 + 0x28) < *(float *)(lVar3 + 0x28);
          }
          if (!bVar10) break;
          param_1[iVar5] = lVar1;
          param_1[iVar6] = lVar3;
          iVar5 = iVar6;
        } while (iVar6 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar9 = lVar9 + -1;
    } while (0 < lVar9);
  }
  return;
}



// FUNCTION 141eb6150 HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FString,FGPUProfileInfoPair>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FGPUProfileInfoPair>,TDefaultMapHashableKeyFuncs<FString,FGPUProfileInfoPair,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FGPUProfileInfoPair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGPUProfileInfoPair,0>_>::FValueComparisonClass<<lambda_38db9149a4980a8cf7713aeccd1c6f0a>_>_>_>_>_> body=517 status=ok
// SIG undefined HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FString,FGPUProfileInfoPair>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FGPUProfileInfoPair>,TDefaultMapHashableKeyFuncs<FString,FGPUProfileInfoPair,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FGPUProfileInfoPair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGPUProfileInfoPair,0>_>::FValueComparisonClass<<lambda_38db9149a4980a8cf7713aeccd1c6f0a>_>_>_>_>_>(void)

void AlgoImpl::
     HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FIdentityFunctor,TDereferenceWrapper<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,TSparseArray<TSetElement<TTuple<FString,FGPUProfileInfoPair>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FGPUProfileInfoPair>,TDefaultMapHashableKeyFuncs<FString,FGPUProfileInfoPair,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FGPUProfileInfoPair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGPUProfileInfoPair,0>_>::FValueComparisonClass<<lambda_38db9149a4980a8cf7713aeccd1c6f0a>_>_>_>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
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
  
  iVar10 = (param_2 + -2) / 2;
  if (-1 < iVar10) {
    iVar11 = iVar10 * 2 + 1;
    iVar4 = iVar11;
    iVar13 = iVar10;
joined_r0x000141eb617a:
    do {
      if (iVar11 < param_2) {
        iVar11 = iVar10 * 2;
        iVar12 = iVar11 + 1;
        if (iVar11 + 2 < param_2) {
          if ((longlong)param_1[(longlong)iVar12 * 5 + 2] <
              (longlong)param_1[(longlong)iVar11 * 5 + 0xc]) {
            iVar12 = iVar11;
          }
          iVar12 = iVar12 + 1;
        }
        puVar14 = param_1 + (longlong)iVar12 * 5;
        puVar1 = param_1 + (longlong)iVar10 * 5;
        if ((longlong)puVar14[2] < (longlong)param_1[(longlong)iVar10 * 5 + 2]) {
          if (puVar1 != puVar14) {
            uVar5 = puVar14[1];
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            uVar8 = puVar1[2];
            uVar9 = puVar1[3];
            uVar3 = puVar1[4];
            *puVar1 = *puVar14;
            puVar1[1] = uVar5;
            uVar5 = puVar14[3];
            puVar1[2] = puVar14[2];
            puVar1[3] = uVar5;
            puVar1[4] = puVar14[4];
            *puVar14 = uVar6;
            puVar14[1] = uVar7;
            puVar14[2] = uVar8;
            puVar14[3] = uVar9;
            puVar14[4] = uVar3;
          }
          iVar11 = iVar12 * 2 + 1;
          iVar10 = iVar12;
          goto joined_r0x000141eb617a;
        }
      }
      iVar11 = iVar4 + -2;
      iVar10 = iVar13 + -1;
      iVar4 = iVar11;
      iVar13 = iVar10;
    } while (-1 < iVar10);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar14 = param_1 + (longlong)param_2 * 5;
    do {
      if (param_1 != puVar14) {
        uVar5 = puVar14[1];
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar8 = param_1[2];
        uVar9 = param_1[3];
        uVar3 = param_1[4];
        *param_1 = *puVar14;
        param_1[1] = uVar5;
        uVar5 = puVar14[3];
        param_1[2] = puVar14[2];
        param_1[3] = uVar5;
        param_1[4] = puVar14[4];
        *puVar14 = uVar6;
        puVar14[1] = uVar7;
        puVar14[2] = uVar8;
        puVar14[3] = uVar9;
        puVar14[4] = uVar3;
      }
      iVar10 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar10 * 2;
          iVar11 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if ((longlong)param_1[(longlong)iVar11 * 5 + 2] <
                (longlong)param_1[(longlong)iVar4 * 5 + 0xc]) {
              iVar11 = iVar4;
            }
            iVar11 = iVar11 + 1;
          }
          puVar1 = param_1 + (longlong)iVar11 * 5;
          puVar2 = param_1 + (longlong)iVar10 * 5;
          if ((longlong)param_1[(longlong)iVar10 * 5 + 2] <= (longlong)puVar1[2]) break;
          if (puVar2 != puVar1) {
            uVar5 = puVar1[1];
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            uVar8 = puVar2[2];
            uVar9 = puVar2[3];
            uVar3 = puVar2[4];
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            uVar5 = puVar1[3];
            puVar2[2] = puVar1[2];
            puVar2[3] = uVar5;
            puVar2[4] = puVar1[4];
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            puVar1[2] = uVar8;
            puVar1[3] = uVar9;
            puVar1[4] = uVar3;
          }
          iVar10 = iVar11;
        } while (iVar11 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar14 = puVar14 + -5;
    } while (0 < param_2);
  }
  return;
}


