// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143915bc0 _Reallocate body=142 status=ok
// SIG undefined _Reallocate(void)

void std::vector<unsigned_int,std::allocator<bool>_>::_Reallocate
               (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  _Dst = (void *)allocator<int>::allocate();
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 != 0) {
    allocator<sTokenChange>::deallocate(param_1,lVar1,param_1[2] - lVar1 >> 2,param_4,uVar3);
  }
  param_1[2] = (longlong)((longlong)_Dst + param_2 * 4);
  param_1[1] = (longlong)((longlong)_Dst + (lVar2 - lVar1 >> 2) * 4);
  *param_1 = (longlong)_Dst;
  return;
}



// FUNCTION 143915c50 _Reallocate body=142 status=ok
// SIG undefined _Reallocate(void)

void std::vector<unsigned_int,std::allocator<bool>_>::_Reallocate
               (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  _Dst = (void *)allocator<sTokenChange>::allocate();
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 != 0) {
    allocator<sTokenChange>::deallocate(param_1,lVar1,param_1[2] - lVar1 >> 2,param_4,uVar3);
  }
  param_1[2] = (longlong)((longlong)_Dst + param_2 * 4);
  param_1[1] = (longlong)((longlong)_Dst + (lVar2 - lVar1 >> 2) * 4);
  *param_1 = (longlong)_Dst;
  return;
}



// FUNCTION 143915ce0 _Reallocate body=142 status=ok
// SIG undefined _Reallocate(void)

void std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::_Reallocate
               (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  _Dst = (void *)allocator<wchar_t_const_*___ptr64>::allocate();
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 != 0) {
    allocator<wchar_t_const_*___ptr64>::deallocate
              (param_1,lVar1,param_1[2] - lVar1 >> 3,param_4,uVar3);
  }
  param_1[2] = (longlong)((longlong)_Dst + param_2 * 8);
  param_1[1] = (longlong)((longlong)_Dst + (lVar2 - lVar1 >> 3) * 8);
  *param_1 = (longlong)_Dst;
  return;
}



// FUNCTION 143915d70 FUN_143915d70 body=289 status=ok
// SIG undefined FUN_143915d70(void)

void FUN_143915d70(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 local_res10;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else if (param_2 < 0x1000) {
    uVar5 = operator_new(param_2);
    if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    lVar3 = operator_new();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar5 = lVar3 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar5 - 8) = lVar3;
  }
  local_res10 = (undefined1)param_2;
  std::_Uninit_copy<char_const_*___ptr64,unsigned_char_*___ptr64,std::allocator<unsigned_char>_>
            (*param_1,param_1[1],uVar5,param_1,local_res10,local_res10,uVar6);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if (uVar1 != 0) {
    uVar4 = uVar1;
    if (0xfff < param_1[2] - uVar1) {
      if ((uVar1 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar1 - 8);
      if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar1 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar1 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
  }
  param_1[2] = uVar5 + param_2;
  param_1[1] = uVar5 + (uVar2 - uVar1);
  *param_1 = uVar5;
  return;
}



// FUNCTION 143915ea0 FUN_143915ea0 body=161 status=ok
// SIG undefined FUN_143915ea0(void)

void FUN_143915ea0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  lVar3 = FUN_1439160b0();
  local_res8 = SUB81(param_1,0);
  FUN_143914ce0(*param_1,param_1[1],lVar3,param_1,local_res8,local_res8,uVar4);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 != 0) {
    std::allocator<wchar_t>::deallocate(param_1,lVar1,param_1[2] - lVar1 >> 1);
  }
  param_1[2] = lVar3 + param_2 * 2;
  param_1[1] = lVar3 + (lVar2 - lVar1 >> 1) * 2;
  *param_1 = lVar3;
  return;
}



// FUNCTION 143915f50 _Reserve body=129 status=ok
// SIG undefined _Reserve(void)

void std::vector<unsigned_int,std::allocator<bool>_>::_Reserve(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 <= (ulonglong)(param_1[2] - param_1[1] >> 2)) {
    return;
  }
  lVar2 = param_1[1] - *param_1 >> 2;
  if (0x3fffffffffffffffU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  param_2 = param_2 + lVar2;
  uVar3 = param_1[2] - *param_1 >> 2;
  uVar1 = 0;
  if (uVar3 <= 0x3fffffffffffffff - (uVar3 >> 1)) {
    uVar1 = (uVar3 >> 1) + uVar3;
  }
  if (param_2 <= uVar1) {
    param_2 = uVar1;
  }
  _Reallocate(param_1,param_2);
  return;
}



// FUNCTION 143915fe0 FUN_143915fe0 body=129 status=ok
// SIG undefined FUN_143915fe0(void)

void FUN_143915fe0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 <= (ulonglong)(param_1[2] - param_1[1] >> 3)) {
    return;
  }
  lVar2 = param_1[1] - *param_1 >> 3;
  if (0x1fffffffffffffffU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  param_2 = param_2 + lVar2;
  uVar3 = param_1[2] - *param_1 >> 3;
  uVar1 = 0;
  if (uVar3 <= 0x1fffffffffffffff - (uVar3 >> 1)) {
    uVar1 = (uVar3 >> 1) + uVar3;
  }
  if (param_2 <= uVar1) {
    param_2 = uVar1;
  }
  std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::_Reallocate
            (param_1,param_2);
  return;
}



// FUNCTION 143916070 FUN_143916070 body=51 status=ok
// SIG undefined FUN_143916070(void)

void FUN_143916070(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    std::allocator<wchar_t>::deallocate(param_1,lVar1,param_1[2] - lVar1 >> 1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1439160b0 FUN_1439160b0 body=120 status=ok
// SIG undefined FUN_1439160b0(void)

ulonglong FUN_1439160b0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    param_2 = param_2 * 2;
    if (0xfff < param_2) {
      if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      lVar1 = operator_new(param_2 + 0x27);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar2 - 8) = lVar1;
      return uVar2;
    }
    uVar2 = operator_new();
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  return uVar2;
}



// FUNCTION 143916130 allocate body=124 status=ok
// SIG undefined allocate(void)

ulonglong std::allocator<sTokenChange>::allocate(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    param_2 = param_2 * 4;
    if (0xfff < param_2) {
      if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      lVar1 = operator_new(param_2 + 0x27);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar2 - 8) = lVar1;
      return uVar2;
    }
    uVar2 = operator_new();
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  return uVar2;
}



// FUNCTION 1439161b0 allocate body=124 status=ok
// SIG undefined allocate(void)

ulonglong std::allocator<wchar_t_const_*___ptr64>::allocate(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    param_2 = param_2 * 8;
    if (0xfff < param_2) {
      if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      lVar1 = operator_new(param_2 + 0x27);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar2 - 8) = lVar1;
      return uVar2;
    }
    uVar2 = operator_new();
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  return uVar2;
}



// FUNCTION 143916230 FUN_143916230 body=332 status=ok
// SIG undefined FUN_143916230(void)

void FUN_143916230(longlong param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *local_res8;
  int local_res10 [2];
  undefined4 local_res18 [2];
  int *local_res20;
  
  iVar3 = *(int *)(**(longlong **)(param_1 + 8) + (longlong)(param_2 * 2) * 4);
  iVar4 = *(int *)(**(longlong **)(param_1 + 8) + (longlong)(param_2 * 2 + 1) * 4);
  local_res10[0] = param_2;
  if (iVar3 < *(int *)(param_1 + 4)) {
    *(undefined4 *)(**(longlong **)(param_1 + 0x10) + (longlong)(iVar4 + iVar3) * 4) = param_3;
  }
  else {
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    cVar2 = *(char *)((longlong)puVar5[1] + 0x19);
    puVar9 = puVar5;
    puVar8 = (undefined8 *)puVar5[1];
    while (cVar2 == '\0') {
      if (*(int *)(puVar8 + 4) < param_2) {
        puVar7 = (undefined8 *)puVar8[2];
        puVar8 = puVar9;
      }
      else {
        puVar7 = (undefined8 *)*puVar8;
      }
      puVar9 = puVar8;
      puVar8 = puVar7;
      cVar2 = *(char *)((longlong)puVar7 + 0x19);
    }
    local_res18[0] = param_3;
    if ((puVar9 == puVar5) || (param_2 < *(int *)(puVar9 + 4))) {
      local_res20 = local_res10;
      lVar6 = FUN_143914580(param_1 + 0x18,&DAT_145c61158,&local_res20,&local_res8);
      FUN_1439148b0(param_1 + 0x18,&local_res8,puVar9,lVar6 + 0x20,lVar6);
      puVar9 = local_res8;
    }
    if (*(int *)(param_1 + 4) < iVar3) {
      std::vector<int,std::allocator<int>_>::push_back(puVar9 + 5,local_res18);
    }
    else {
      FUN_143918510(puVar9 + 5,(longlong)(*(int *)(param_1 + 4) + 1));
      _guard_xfg_dispatch_icall_nop
                ((void *)puVar9[5],(void *)(**(longlong **)(param_1 + 0x10) + (longlong)iVar4 * 4),
                 (longlong)*(int *)(param_1 + 4) << 2);
      *(undefined4 *)(puVar9[5] + (longlong)*(int *)(param_1 + 4) * 4) = param_3;
    }
  }
  piVar1 = (int *)(**(longlong **)(param_1 + 8) + (longlong)(local_res10[0] * 2) * 4);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 143916380 FUN_143916380 body=301 status=ok
// SIG undefined FUN_143916380(void)

void FUN_143916380(int *param_1)

{
  ulonglong *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int local_res8 [2];
  
  puVar1 = *(ulonglong **)(param_1 + 2);
  local_res8[0] = 0;
  piVar2 = (int *)puVar1[1];
  if ((local_res8 < piVar2) && (piVar3 = (int *)*puVar1, piVar3 <= local_res8)) {
    if (piVar2 == (int *)puVar1[2]) {
      std::vector<unsigned_int,std::allocator<bool>_>::_Reserve(puVar1,1);
    }
    if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
      *(undefined4 *)puVar1[1] =
           *(undefined4 *)(*puVar1 + ((longlong)local_res8 - (longlong)piVar3 >> 2) * 4);
    }
  }
  else {
    if (piVar2 == (int *)puVar1[2]) {
      std::vector<unsigned_int,std::allocator<bool>_>::_Reserve(puVar1,1);
    }
    if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
      *(undefined4 *)puVar1[1] = 0;
    }
  }
  puVar1[1] = puVar1[1] + 4;
  iVar4 = param_1[1] * *param_1;
  puVar1 = *(ulonglong **)(param_1 + 2);
  piVar2 = (int *)puVar1[1];
  local_res8[0] = iVar4;
  if ((local_res8 < piVar2) && (piVar3 = (int *)*puVar1, piVar3 <= local_res8)) {
    if (piVar2 == (int *)puVar1[2]) {
      std::vector<unsigned_int,std::allocator<bool>_>::_Reserve(puVar1,1);
    }
    if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
      *(undefined4 *)puVar1[1] =
           *(undefined4 *)(*puVar1 + ((longlong)local_res8 - (longlong)piVar3 >> 2) * 4);
    }
  }
  else {
    if (piVar2 == (int *)puVar1[2]) {
      std::vector<unsigned_int,std::allocator<bool>_>::_Reserve(puVar1,1);
    }
    if ((int *)puVar1[1] != (int *)0x0) {
      *(int *)puVar1[1] = iVar4;
    }
  }
  puVar1[1] = puVar1[1] + 4;
  *param_1 = *param_1 + 1;
  FUN_143918510(*(undefined8 *)(param_1 + 4),(longlong)(*param_1 * param_1[1]));
  return;
}



// FUNCTION 1439164b0 FUN_1439164b0 body=22 status=ok
// SIG undefined FUN_1439164b0(void)

void FUN_1439164b0(longlong param_1,int param_2,undefined4 param_3)

{
  FUN_14391b520(*(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + (longlong)param_2 * 8),param_3);
  return;
}



// FUNCTION 1439164d0 FUN_1439164d0 body=2527 status=ok
// SIG undefined FUN_1439164d0(void)

undefined8 FUN_1439164d0(int *param_1)

{
  byte *pbVar1;
  ushort *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  int *piVar16;
  uint uVar17;
  int *piVar19;
  int iVar20;
  longlong *plVar21;
  int *piVar22;
  int *piVar23;
  ulonglong uVar24;
  int *local_res8;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int *local_168;
  int *piStack_160;
  int *local_158;
  uint local_150;
  int *local_148;
  int local_140;
  int local_13c;
  longlong *local_138;
  int *local_130;
  int local_128;
  int local_124;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined1 local_108 [4];
  int local_104;
  longlong *local_100;
  longlong *local_f8;
  undefined8 *local_f0 [2];
  undefined1 local_e0 [4];
  int local_dc;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 *local_c8 [2];
  longlong *local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  int **local_a0;
  undefined8 *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [24];
  undefined8 *local_60 [2];
  undefined8 local_50;
  ulonglong uVar18;
  
  local_50 = 0xfffffffffffffffe;
  iVar5 = param_1[2];
  iVar6 = *param_1;
  local_res8 = param_1;
  FUN_143918970(param_1,iVar5);
  *param_1 = iVar6;
  local_b8 = (longlong *)(param_1 + 6);
  FUN_143918510(local_b8,(longlong)(iVar6 * 2));
  local_110 = (longlong)iVar6;
  FUN_143918710(param_1 + 0x18);
  _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x18),0,(longlong)*param_1);
  piVar19 = param_1 + 1;
  *piVar19 = 0;
  local_148 = piVar19;
  FUN_143918510(param_1 + 0x24,0);
  FUN_143918610(param_1 + 0x36,0);
  FUN_143918710(param_1 + 0x3c,0);
  local_b0 = (longlong *)(param_1 + 0x12);
  FUN_143918510(local_b0,(longlong)
                         (int)(*(longlong *)(param_1 + 0xe) - *(longlong *)(param_1 + 0xc) >> 2));
  uVar13 = (ulonglong)(iVar5 * 4);
  plVar21 = (longlong *)(param_1 + 0x1e);
  local_138 = plVar21;
  if ((ulonglong)(*(longlong *)(param_1 + 0x22) - *plVar21 >> 2) < uVar13) {
    if (0x3fffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    std::vector<unsigned_int,std::allocator<bool>_>::_Reallocate(plVar21,uVar13);
  }
  if ((ulonglong)(*(longlong *)(param_1 + 0x2e) - *(longlong *)(param_1 + 0x2a) >> 2) < uVar13) {
    if (0x3fffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    std::vector<unsigned_int,std::allocator<bool>_>::_Reallocate(param_1 + 0x2a,uVar13);
  }
  if ((ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x24) >> 2) < uVar13) {
    if (0x3fffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    std::vector<unsigned_int,std::allocator<bool>_>::_Reallocate(param_1 + 0x24,uVar13);
  }
  FUN_143914d40(local_e0,param_1 + 0x24,param_1 + 0x2a,2);
  FUN_143914d40(local_78,param_1 + 0x42,param_1 + 0x48,6);
  FUN_143914d40(local_108,param_1 + 0x54,param_1 + 0x5a);
  local_168 = (int *)0x0;
  piStack_160 = (int *)0x0;
  piVar12 = (int *)0x0;
  local_158 = (int *)0x0;
  local_150 = 0;
  local_118 = 0;
  piVar16 = (int *)0x0;
  piVar22 = (int *)0x0;
  piVar23 = piVar12;
  if (0 < local_110) {
    do {
      iVar5 = 0;
      lVar9 = (longlong)*(int *)(*local_b8 + 4 + local_118 * 8);
      local_124 = *(int *)(*local_b8 + local_118 * 8);
      local_80 = *(longlong *)(local_res8 + 0xc) + lVar9 * 4;
      local_88 = *local_b0 + lVar9 * 4;
      local_120 = 0;
      uVar17 = (uint)piVar12;
      if (0 < local_124) {
        do {
          local_90 = local_120 * 4;
          iVar6 = *(int *)(local_80 + local_90);
          local_128 = iVar5 + 1;
          iVar5 = *(int *)(local_80 + (longlong)(local_128 % local_124) * 4);
          local_140 = iVar6;
          local_13c = iVar5;
          if (iVar6 == iVar5) {
            if ((piVar19 < piVar16) && (piVar22 <= piVar19)) {
              lVar9 = (longlong)piVar19 - (longlong)piVar22 >> 2;
              if ((piVar16 == piVar23) && ((longlong)piVar23 - (longlong)piVar16 >> 2 == 0)) {
                lVar10 = (longlong)piVar16 - (longlong)piVar22 >> 2;
                if (lVar10 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  std::_Xlength_error("vector<T> too long");
                }
                uVar13 = lVar10 + 1;
                uVar24 = (longlong)piVar23 - (longlong)piVar22 >> 2;
                uVar18 = 0;
                if (uVar24 <= 0x3fffffffffffffff - (uVar24 >> 1)) {
                  uVar18 = (uVar24 >> 1) + uVar24;
                }
                if (uVar13 <= uVar18) {
                  uVar13 = uVar18;
                }
                std::vector<unsigned_int,std::allocator<bool>_>::_Reallocate(&local_168,uVar13);
                piVar16 = piStack_160;
                piVar22 = local_168;
                piVar23 = local_158;
              }
LAB_143916a24:
              if (piVar16 != (int *)0x0) {
                iVar5 = piVar22[lVar9];
LAB_143916c09:
                *piVar16 = iVar5;
              }
            }
            else {
              if ((piVar16 == piVar23) && ((longlong)piVar23 - (longlong)piVar16 >> 2 == 0)) {
                lVar9 = (longlong)piVar16 - (longlong)piVar22 >> 2;
                if (lVar9 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  std::_Xlength_error("vector<T> too long");
                }
                uVar13 = lVar9 + 1;
                uVar24 = (longlong)piVar23 - (longlong)piVar22 >> 2;
                uVar18 = 0;
                if (uVar24 <= 0x3fffffffffffffff - (uVar24 >> 1)) {
                  uVar18 = (uVar24 >> 1) + uVar24;
                }
                if (uVar13 <= uVar18) {
                  uVar13 = uVar18;
                }
                std::vector<unsigned_int,std::allocator<bool>_>::_Reallocate(&local_168,uVar13);
                piVar16 = piStack_160;
                piVar22 = local_168;
                piVar23 = local_158;
              }
LAB_143916c00:
              if (piVar16 != (int *)0x0) {
                iVar5 = *piVar19;
                goto LAB_143916c09;
              }
            }
            piVar16 = piVar16 + 1;
            piStack_160 = piVar16;
LAB_143916c14:
            iVar5 = *piVar19;
            *piVar19 = iVar5 + 1;
            std::vector<int,std::allocator<int>_>::push_back(local_138,&local_140);
            std::vector<int,std::allocator<int>_>::push_back(local_138,&local_13c);
            FUN_143916380(local_e0);
            iVar6 = local_140;
            FUN_143916230(local_108,local_140,iVar5);
            FUN_143916230(local_108,local_13c,iVar5);
          }
          else {
            iVar20 = *(int *)(*local_100 + (longlong)(iVar6 * 2) * 4);
            if (local_104 < iVar20) {
              puVar7 = (undefined8 *)local_f0[0][1];
              puVar14 = local_f0[0];
              if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
                do {
                  if (*(int *)(puVar7 + 4) < iVar6) {
                    puVar8 = (undefined8 *)puVar7[2];
                  }
                  else {
                    puVar8 = (undefined8 *)*puVar7;
                    puVar14 = puVar7;
                  }
                  puVar7 = puVar8;
                } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
                if ((puVar14 == local_f0[0]) || (iVar6 < *(int *)(puVar14 + 4))) goto LAB_1439167c3;
              }
              else {
LAB_1439167c3:
                local_130 = local_res20;
                local_res20[0] = iVar6;
                lVar9 = FUN_143914580(local_f0,&DAT_145c61158,&local_130,local_res10);
                FUN_1439148b0(local_f0,&local_a8,puVar14,lVar9 + 0x20,lVar9);
                puVar14 = local_a8;
              }
              lVar9 = puVar14[5];
              iVar20 = (int)(puVar14[6] - lVar9 >> 2);
            }
            else {
              lVar9 = *local_f8 + (longlong)*(int *)(*local_100 + (longlong)(iVar6 * 2 + 1) * 4) * 4
              ;
            }
            uVar13 = 0;
            if (0 < iVar20) {
              uVar18 = uVar13;
              do {
                lVar10 = (longlong)(*(int *)(lVar9 + uVar13 * 4) * 2);
                if ((*(int *)(*local_138 + lVar10 * 4) == iVar5) ||
                   (*(int *)(*local_138 + 4 + lVar10 * 4) == iVar5)) {
                  iVar5 = *(int *)(lVar9 + uVar13 * 4);
                  goto LAB_14391687c;
                }
                uVar17 = (int)uVar18 + 1;
                uVar18 = (ulonglong)uVar17;
                uVar13 = uVar13 + 1;
              } while ((int)uVar17 < iVar20);
            }
            iVar5 = -1;
LAB_14391687c:
            local_res20[0] = iVar5;
            if (iVar5 == -1) goto LAB_143916c14;
            local_130 = (int *)CONCAT44(local_130._4_4_,iVar5);
            iVar3 = iVar5 * 2;
            iVar20 = *(int *)(*local_d8 + (longlong)iVar3 * 4);
            if (local_dc < iVar20) {
              puVar7 = (undefined8 *)local_c8[0][1];
              puVar14 = local_c8[0];
              if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
                do {
                  if (*(int *)(puVar7 + 4) < iVar5) {
                    puVar8 = (undefined8 *)puVar7[2];
                  }
                  else {
                    puVar8 = (undefined8 *)*puVar7;
                    puVar14 = puVar7;
                  }
                  puVar7 = puVar8;
                } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
                if ((puVar14 == local_c8[0]) || (iVar5 < *(int *)(puVar14 + 4))) goto LAB_1439168e1;
              }
              else {
LAB_1439168e1:
                local_a0 = &local_130;
                lVar9 = FUN_143914580(local_c8,&DAT_145c61158,&local_a0,local_res18);
                FUN_1439148b0(local_c8,&local_98,puVar14,lVar9 + 0x20,lVar9);
                puVar14 = local_98;
              }
              lVar9 = puVar14[5];
              iVar20 = (int)(puVar14[6] - lVar9 >> 2);
            }
            else {
              lVar9 = *local_d0 + (longlong)*(int *)(*local_d8 + (longlong)(iVar3 + 1) * 4) * 4;
            }
            if (*(uint *)(lVar9 + (longlong)(iVar20 + -1) * 4) == local_150) {
              piVar12 = piVar22;
              if ((local_res20 < piVar16) && (piVar22 <= local_res20)) {
                if (piVar16 == piVar23) {
                  std::vector<unsigned_int,std::allocator<bool>_>::_Reserve(&local_168,1);
                  piVar16 = piStack_160;
                  piVar12 = local_168;
                  piVar23 = local_158;
                }
                if (piVar16 != (int *)0x0) {
                  *piVar16 = piVar12[(longlong)local_res20 - (longlong)piVar22 >> 2];
                }
              }
              else {
                if (piVar16 == piVar23) {
                  std::vector<unsigned_int,std::allocator<bool>_>::_Reserve(&local_168,1);
                  piVar16 = piStack_160;
                  piVar12 = local_168;
                  piVar23 = local_158;
                }
                if (piVar16 != (int *)0x0) {
                  *piVar16 = iVar5;
                }
              }
              piVar19 = local_148;
              piStack_160 = piVar16 + 1;
              piVar16 = piStack_160;
              piVar22 = piVar12;
              if ((piStack_160 <= local_148) || (local_148 < piVar12)) {
                if (piStack_160 == piVar23) {
                  std::vector<unsigned_int,std::allocator<bool>_>::_Reserve(&local_168,1);
                  piVar16 = piStack_160;
                  piVar22 = local_168;
                  piVar23 = local_158;
                }
                goto LAB_143916c00;
              }
              lVar9 = (longlong)local_148 - (longlong)piVar12 >> 2;
              if (piStack_160 == piVar23) {
                std::vector<unsigned_int,std::allocator<bool>_>::_Reserve(&local_168,1);
                piVar16 = piStack_160;
                piVar22 = local_168;
                piVar23 = local_158;
              }
              goto LAB_143916a24;
            }
            if ((1 < iVar20) ||
               (piVar19 = local_148, iVar6 == *(int *)(*local_138 + (longlong)iVar3 * 4))) {
              if ((local_res20 < piVar16) && (piVar22 <= local_res20)) {
                lVar9 = (longlong)local_res20 - (longlong)piVar22;
                if (piVar16 == piVar23) {
                  std::vector<unsigned_int,std::allocator<bool>_>::_Reserve(&local_168,1);
                  piVar16 = piStack_160;
                  piVar22 = local_168;
                  piVar23 = local_158;
                }
                if (piVar16 != (int *)0x0) {
                  *piVar16 = piVar22[lVar9 >> 2];
                }
              }
              else {
                if (piVar16 == piVar23) {
                  std::vector<unsigned_int,std::allocator<bool>_>::_Reserve(&local_168,1);
                  piVar16 = piStack_160;
                  piVar22 = local_168;
                  piVar23 = local_158;
                }
                if (piVar16 != (int *)0x0) {
                  *piVar16 = iVar5;
                }
              }
              piVar16 = piVar16 + 1;
              piVar19 = local_148;
              piStack_160 = piVar16;
            }
          }
          FUN_143916230(local_e0,iVar5,local_150);
          FUN_143916230(local_78,iVar6,local_150);
          *(int *)(local_88 + local_90) = iVar5;
          local_120 = local_120 + 1;
          uVar17 = local_150;
          iVar5 = local_128;
        } while (local_128 < local_124);
      }
      local_150 = uVar17 + 1;
      piVar12 = (int *)(ulonglong)local_150;
      local_118 = local_118 + 1;
      plVar21 = local_138;
    } while (local_118 < local_110);
  }
  iVar5 = FUN_143916ec0(local_e0);
  iVar6 = FUN_143916ec0(local_78);
  local_res10[0] = iVar6;
  local_res18[0] = FUN_143916ec0(local_108);
  piVar4 = local_res8;
  local_res8[4] = iVar5;
  piVar12 = local_res8 + 5;
  piVar11 = local_res10;
  if (iVar6 < *piVar12) {
    piVar11 = piVar12;
  }
  *piVar12 = *piVar11;
  piVar11 = local_res18;
  if (local_res18[0] < *piVar12) {
    piVar11 = piVar12;
  }
  iVar5 = *piVar11;
  *piVar12 = iVar5;
  if (iVar5 < 0x10000) {
    FUN_1439188f0(local_res8,*piVar19);
    iVar5 = (int)((longlong)piVar16 - (longlong)piVar22 >> 2);
    if (0 < iVar5) {
      iVar6 = 0;
      piVar19 = piVar22;
      do {
        iVar20 = *piVar19;
        pbVar1 = (byte *)((longlong)iVar20 + *(longlong *)(piVar4 + 0x3c));
        *pbVar1 = *pbVar1 | 1;
        piVar16 = (int *)(*plVar21 + (longlong)(iVar20 * 2) * 4);
        puVar2 = (ushort *)(*(longlong *)(piVar4 + 0x6c) + (longlong)*piVar16 * 2);
        *puVar2 = *puVar2 | 1;
        puVar2 = (ushort *)(*(longlong *)(piVar4 + 0x6c) + (longlong)piVar16[1] * 2);
        *puVar2 = *puVar2 | 1;
        iVar6 = iVar6 + 1;
        piVar19 = piVar19 + 1;
      } while (iVar6 < iVar5);
    }
    FUN_143918010(piVar4);
    FUN_143918090(piVar4);
    uVar15 = 1;
  }
  else {
    uVar15 = 0;
  }
  if (piVar22 != (int *)0x0) {
    std::allocator<sTokenChange>::deallocate
              (&local_168,piVar22,(longlong)piVar23 - (longlong)piVar22 >> 2);
  }
  FUN_143917400(local_f0,&local_res8,*local_f0[0],local_f0[0]);
  std::_Deallocate(local_f0[0],1,0x40);
  FUN_143917400(local_60,&local_res8,*local_60[0],local_60[0]);
  std::_Deallocate(local_60[0],1,0x40);
  FUN_143917400(local_c8,&local_res8,*local_c8[0],local_c8[0]);
  std::_Deallocate(local_c8[0],1,0x40);
  return uVar15;
}



// FUNCTION 143916ec0 FUN_143916ec0 body=813 status=ok
// SIG undefined FUN_143916ec0(void)

int FUN_143916ec0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  ulonglong *puVar6;
  int *piVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  void *_Src;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong *local_res10;
  int local_res18 [2];
  int local_res20;
  ulonglong local_90;
  ulonglong uStack_88;
  ulonglong local_80;
  int local_78 [2];
  int *local_70;
  undefined8 *local_68;
  void *local_60;
  int local_58 [2];
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  iVar16 = 1;
  if (*(longlong *)(param_1 + 8) == 0) {
    iVar18 = *(int *)**(undefined8 **)(param_1 + 2);
    iVar15 = iVar18;
    if (1 < *param_1) {
      lVar14 = 8;
      do {
        iVar2 = *(int *)(**(longlong **)(param_1 + 2) + lVar14);
        memmove((void *)(**(longlong **)(param_1 + 4) + (longlong)iVar18 * 4),
                (void *)(**(longlong **)(param_1 + 4) +
                        (longlong)*(int *)(**(longlong **)(param_1 + 2) + 4 + lVar14) * 4),
                (longlong)iVar2 << 2);
        *(int *)(**(longlong **)(param_1 + 2) + 4 + lVar14) = iVar18;
        iVar18 = iVar18 + iVar2;
        if (iVar15 < iVar2) {
          iVar15 = iVar2;
        }
        iVar16 = iVar16 + 1;
        lVar14 = lVar14 + 8;
      } while (iVar16 < *param_1);
    }
    FUN_143918510(*(undefined8 *)(param_1 + 4),(longlong)iVar18);
  }
  else {
    bVar5 = false;
    plVar8 = *(longlong **)(param_1 + 2);
    iVar18 = *(int *)*plVar8;
    if (1 < *param_1) {
      lVar14 = 8;
      do {
        *(int *)(lVar14 + 4 + *plVar8) = iVar18;
        bVar5 = (bool)(bVar5 | param_1[1] * iVar16 < iVar18);
        plVar8 = *(longlong **)(param_1 + 2);
        iVar18 = iVar18 + *(int *)(lVar14 + *plVar8);
        iVar16 = iVar16 + 1;
        lVar14 = lVar14 + 8;
      } while (iVar16 < *param_1);
    }
    bVar4 = iVar18 <= param_1[1] * *param_1;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    if (!bVar5 && bVar4) {
      puVar6 = *(ulonglong **)(param_1 + 4);
    }
    else {
      FUN_143918510(&local_90,(longlong)iVar18);
      puVar6 = &local_90;
    }
    uVar17 = local_80;
    iVar15 = param_1[1];
    local_78[0] = iVar15;
    local_res18[0] = 0;
    local_res10 = puVar6;
    local_res20 = iVar15;
    if (0 < *param_1) {
      do {
        iVar16 = *(int *)(**(longlong **)(param_1 + 2) + (longlong)(local_res18[0] * 2) * 4);
        local_58[0] = iVar16;
        local_60 = (void *)(*puVar6 +
                           (longlong)
                           *(int *)(**(longlong **)(param_1 + 2) +
                                   (longlong)(local_res18[0] * 2 + 1) * 4) * 4);
        if (param_1[1] < iVar16) {
          puVar3 = *(undefined8 **)(param_1 + 6);
          cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
          puVar13 = puVar3;
          puVar12 = (undefined8 *)puVar3[1];
          while (cVar1 == '\0') {
            if (*(int *)(puVar12 + 4) < local_res18[0]) {
              puVar9 = (undefined8 *)puVar12[2];
              puVar12 = puVar13;
            }
            else {
              puVar9 = (undefined8 *)*puVar12;
            }
            puVar13 = puVar12;
            puVar12 = puVar9;
            cVar1 = *(char *)((longlong)puVar9 + 0x19);
          }
          if ((puVar13 == puVar3) || (local_res18[0] < *(int *)(puVar13 + 4))) {
            local_70 = local_res18;
            lVar14 = FUN_143914580(param_1 + 6,&DAT_145c61158,&local_70,&local_res10);
            FUN_1439148b0(param_1 + 6,&local_68,puVar13,lVar14 + 0x20,lVar14);
            puVar13 = local_68;
          }
          _Src = (void *)puVar13[5];
          piVar7 = local_58;
          if (iVar16 <= local_res20) {
            piVar7 = local_78;
          }
          iVar15 = *piVar7;
          local_res20 = iVar15;
          local_78[0] = iVar15;
        }
        else {
          _Src = (void *)(**(longlong **)(param_1 + 4) + (longlong)(param_1[1] * local_res18[0]) * 4
                         );
        }
        memmove(local_60,_Src,(longlong)iVar16 << 2);
        local_res18[0] = local_res18[0] + 1;
      } while (local_res18[0] < *param_1);
    }
    if (!bVar5 && bVar4) {
      FUN_143918510(*(undefined8 *)(param_1 + 4),(longlong)iVar18);
      uVar10 = local_90;
    }
    else {
      puVar6 = *(ulonglong **)(param_1 + 4);
      uVar10 = local_90;
      if (puVar6 != &local_90) {
        uVar10 = *puVar6;
        *puVar6 = local_90;
        puVar6[1] = uStack_88;
        uVar11 = puVar6[2];
        puVar6[2] = uVar17;
        uVar17 = uVar11;
      }
    }
    if (uVar10 != 0) {
      uVar17 = (longlong)(uVar17 - uVar10) >> 2;
      if (0x3fffffffffffffff < uVar17) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar11 = uVar10;
      if (0xfff < uVar17 * 4) {
        if ((uVar10 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        uVar11 = *(ulonglong *)(uVar10 - 8);
        if (uVar10 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        if (uVar10 - uVar11 < 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        if (0x27 < uVar10 - uVar11) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(uVar11);
    }
  }
  return iVar15;
}



// FUNCTION 143917200 FUN_143917200 body=266 status=ok
// SIG undefined FUN_143917200(void)

int FUN_143917200(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong local_res8;
  
  local_res8 = operator_new(0xd8);
  if (local_res8 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_14391b1f0(local_res8,param_1);
  }
  local_res8 = lVar3;
  FUN_14391d100(lVar3,param_3);
  FUN_1421e2d30(lVar3,param_2);
  FUN_14391d000(lVar3);
  puVar4 = (ulonglong *)(param_1 + 0x1c8);
  plVar1 = *(longlong **)(param_1 + 0x1d0);
  if ((&local_res8 < plVar1) && (plVar2 = (longlong *)*puVar4, plVar2 <= &local_res8)) {
    if (plVar1 == *(longlong **)(param_1 + 0x1d8)) {
      FUN_143915fe0(puVar4,1);
    }
    if (*(undefined8 **)(param_1 + 0x1d0) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x1d0) =
           *(undefined8 *)(*puVar4 + ((longlong)&local_res8 - (longlong)plVar2 >> 3) * 8);
    }
  }
  else {
    if (plVar1 == *(longlong **)(param_1 + 0x1d8)) {
      FUN_143915fe0(puVar4,1);
    }
    if (*(longlong **)(param_1 + 0x1d0) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0x1d0) = lVar3;
    }
  }
  *(longlong *)(param_1 + 0x1d0) = *(longlong *)(param_1 + 0x1d0) + 8;
  return (int)((longlong)(*(longlong *)(param_1 + 0x1d0) - *puVar4) >> 3) + -1;
}



// FUNCTION 143917310 deallocate body=105 status=ok
// SIG undefined deallocate(void)

void std::allocator<wchar_t>::deallocate(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar1 = param_2;
  if (0xfff < param_3 * 2) {
    if ((param_2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar1 = *(ulonglong *)(param_2 - 8);
    if (param_2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (param_2 - uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < param_2 - uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(uVar1);
  return;
}



// FUNCTION 143917380 deallocate body=109 status=ok
// SIG undefined deallocate(void)

void std::allocator<wchar_t_const_*___ptr64>::deallocate
               (undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (0x1fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar1 = param_2;
  if (0xfff < param_3 * 8) {
    if ((param_2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar1 = *(ulonglong *)(param_2 - 8);
    if (param_2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (param_2 - uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < param_2 - uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(uVar1);
  return;
}



// FUNCTION 143917400 FUN_143917400 body=234 status=ok
// SIG undefined FUN_143917400(void)

undefined8 *
FUN_143917400(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  longlong *local_res18;
  
  plVar2 = (longlong *)*param_1;
  if ((param_3 == (longlong *)*plVar2) && (param_4 == plVar2)) {
    FUN_143915a30(param_1,plVar2[1],param_3,param_4,0xfffffffffffffffe);
    *(longlong *)(*param_1 + 8) = *param_1;
    *(longlong *)*param_1 = *param_1;
    *(longlong *)(*param_1 + 0x10) = *param_1;
    param_1[1] = 0;
    *param_2 = *(undefined8 *)*param_1;
  }
  else {
    while (param_3 != param_4) {
      local_res18 = param_3;
      if (*(char *)((longlong)param_3 + 0x19) == '\0') {
        local_res18 = (longlong *)param_3[2];
        if (*(char *)((longlong)local_res18 + 0x19) == '\0') {
          cVar1 = *(char *)(*local_res18 + 0x19);
          plVar2 = (longlong *)*local_res18;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar2 + 0x19);
            local_res18 = plVar2;
            plVar2 = (longlong *)*plVar2;
          }
        }
        else {
          cVar1 = *(char *)(param_3[1] + 0x19);
          plVar3 = (longlong *)param_3[1];
          plVar2 = param_3;
          while ((local_res18 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)local_res18[2]))) {
            cVar1 = *(char *)(local_res18[1] + 0x19);
            plVar3 = (longlong *)local_res18[1];
            plVar2 = local_res18;
          }
        }
      }
      FUN_1439174f0(param_1,local_res8,param_3);
      param_3 = local_res18;
    }
    *param_2 = param_3;
  }
  return param_2;
}



// FUNCTION 1439174f0 FUN_1439174f0 body=1094 status=ok
// SIG undefined FUN_1439174f0(void)

undefined8 * FUN_1439174f0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *local_res18;
  
  local_res18 = param_3;
  if (*(char *)((longlong)param_3 + 0x19) == '\0') {
    local_res18 = (longlong *)param_3[2];
    if (*(char *)((longlong)local_res18 + 0x19) == '\0') {
      cVar1 = *(char *)(*local_res18 + 0x19);
      plVar9 = (longlong *)*local_res18;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar9 + 0x19);
        local_res18 = plVar9;
        plVar9 = (longlong *)*plVar9;
      }
    }
    else {
      cVar1 = *(char *)(param_3[1] + 0x19);
      plVar11 = (longlong *)param_3[1];
      plVar9 = param_3;
      while ((local_res18 = plVar11, cVar1 == '\0' && (plVar9 == (longlong *)local_res18[2]))) {
        cVar1 = *(char *)(local_res18[1] + 0x19);
        plVar11 = (longlong *)local_res18[1];
        plVar9 = local_res18;
      }
    }
  }
  plVar9 = (longlong *)*param_3;
  if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
    plVar11 = plVar9;
    if ((*(char *)(param_3[2] + 0x19) == '\0') &&
       (plVar11 = (longlong *)local_res18[2], local_res18 != param_3)) {
      plVar9[1] = (longlong)local_res18;
      *local_res18 = *param_3;
      plVar9 = local_res18;
      if (local_res18 != (longlong *)param_3[2]) {
        plVar9 = (longlong *)local_res18[1];
        if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
          plVar11[1] = (longlong)plVar9;
        }
        *plVar9 = (longlong)plVar11;
        local_res18[2] = param_3[2];
        *(longlong **)(param_3[2] + 8) = local_res18;
      }
      if (*(longlong **)(*param_1 + 8) == param_3) {
        *(longlong **)(*param_1 + 8) = local_res18;
      }
      else {
        puVar4 = (undefined8 *)param_3[1];
        if ((longlong *)*puVar4 == param_3) {
          *puVar4 = local_res18;
        }
        else {
          puVar4[2] = local_res18;
        }
      }
      local_res18[1] = param_3[1];
      lVar3 = local_res18[3];
      *(char *)(local_res18 + 3) = (char)param_3[3];
      *(char *)(param_3 + 3) = (char)lVar3;
      goto LAB_1439176a2;
    }
  }
  else {
    plVar11 = (longlong *)param_3[2];
  }
  plVar9 = (longlong *)param_3[1];
  if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
    plVar11[1] = (longlong)plVar9;
  }
  if (*(longlong **)(*param_1 + 8) == param_3) {
    *(longlong **)(*param_1 + 8) = plVar11;
  }
  else if ((longlong *)*plVar9 == param_3) {
    *plVar9 = (longlong)plVar11;
  }
  else {
    plVar9[2] = (longlong)plVar11;
  }
  if (*(longlong **)*param_1 == param_3) {
    plVar8 = plVar9;
    if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar11 + 0x19);
      plVar2 = (longlong *)*plVar11;
      plVar8 = plVar11;
      while (plVar6 = plVar2, cVar1 == '\0') {
        plVar2 = (longlong *)*plVar6;
        cVar1 = *(char *)((longlong)plVar2 + 0x19);
        plVar8 = plVar6;
      }
    }
    *(longlong **)*param_1 = plVar8;
  }
  lVar3 = *param_1;
  if (*(longlong **)(lVar3 + 0x10) == param_3) {
    if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
      cVar1 = *(char *)(plVar11[2] + 0x19);
      plVar8 = (longlong *)plVar11[2];
      plVar2 = plVar11;
      while (plVar6 = plVar8, cVar1 == '\0') {
        plVar8 = (longlong *)plVar6[2];
        cVar1 = *(char *)((longlong)plVar8 + 0x19);
        plVar2 = plVar6;
      }
      *(longlong **)(lVar3 + 0x10) = plVar2;
    }
    else {
      *(longlong **)(lVar3 + 0x10) = plVar9;
    }
  }
LAB_1439176a2:
  if ((char)param_3[3] == '\x01') {
    if (plVar11 != *(longlong **)(*param_1 + 8)) {
      do {
        plVar8 = plVar9;
        if ((char)plVar11[3] != '\x01') break;
        plVar9 = (longlong *)*plVar8;
        if (plVar11 == plVar9) {
          plVar9 = (longlong *)plVar8[2];
          if ((char)plVar9[3] == '\0') {
            *(undefined1 *)(plVar9 + 3) = 1;
            plVar9 = (longlong *)plVar8[2];
            *(undefined1 *)(plVar8 + 3) = 0;
            plVar8[2] = *plVar9;
            if (*(char *)(*plVar9 + 0x19) == '\0') {
              *(longlong **)(*plVar9 + 8) = plVar8;
            }
            plVar9[1] = plVar8[1];
            if (plVar8 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar9;
            }
            else {
              puVar4 = (undefined8 *)plVar8[1];
              if (plVar8 == (longlong *)*puVar4) {
                *puVar4 = plVar9;
              }
              else {
                puVar4[2] = plVar9;
              }
            }
            *plVar9 = (longlong)plVar8;
            plVar8[1] = (longlong)plVar9;
            plVar9 = (longlong *)plVar8[2];
          }
          if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
            if ((*(char *)(*plVar9 + 0x18) != '\x01') || (*(char *)(plVar9[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar9[2] + 0x18) == '\x01') {
                *(undefined1 *)(*plVar9 + 0x18) = 1;
                *(undefined1 *)(plVar9 + 3) = 0;
                std::
                _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
                ::_Rrotate(param_1,plVar9);
                plVar9 = (longlong *)plVar8[2];
              }
              *(char *)(plVar9 + 3) = (char)plVar8[3];
              *(undefined1 *)(plVar8 + 3) = 1;
              *(undefined1 *)(plVar9[2] + 0x18) = 1;
              std::
              _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
              ::_Lrotate(param_1,plVar8);
              break;
            }
LAB_143917819:
            *(undefined1 *)(plVar9 + 3) = 0;
          }
        }
        else {
          if ((char)plVar9[3] == '\0') {
            *(undefined1 *)(plVar9 + 3) = 1;
            lVar3 = *plVar8;
            *(undefined1 *)(plVar8 + 3) = 0;
            *plVar8 = *(longlong *)(lVar3 + 0x10);
            if (*(char *)(*(longlong *)(lVar3 + 0x10) + 0x19) == '\0') {
              *(longlong **)(*(longlong *)(lVar3 + 0x10) + 8) = plVar8;
            }
            *(longlong *)(lVar3 + 8) = plVar8[1];
            if (plVar8 == *(longlong **)(*param_1 + 8)) {
              *(longlong *)(*param_1 + 8) = lVar3;
            }
            else {
              plVar9 = (longlong *)plVar8[1];
              if (plVar8 == (longlong *)plVar9[2]) {
                plVar9[2] = lVar3;
              }
              else {
                *plVar9 = lVar3;
              }
            }
            *(longlong **)(lVar3 + 0x10) = plVar8;
            plVar8[1] = lVar3;
            plVar9 = (longlong *)*plVar8;
          }
          if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
            if ((*(char *)(plVar9[2] + 0x18) == '\x01') && (*(char *)(*plVar9 + 0x18) == '\x01'))
            goto LAB_143917819;
            if (*(char *)(*plVar9 + 0x18) == '\x01') {
              *(undefined1 *)(plVar9[2] + 0x18) = 1;
              *(undefined1 *)(plVar9 + 3) = 0;
              std::
              _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
              ::_Lrotate(param_1,plVar9,plVar8,plVar8);
              plVar9 = (longlong *)*plVar8;
            }
            *(char *)(plVar9 + 3) = (char)plVar8[3];
            *(undefined1 *)(plVar8 + 3) = 1;
            *(undefined1 *)(*plVar9 + 0x18) = 1;
            std::
            _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
            ::_Rrotate(param_1,plVar8);
            break;
          }
        }
        plVar9 = (longlong *)plVar8[1];
        plVar11 = plVar8;
      } while (plVar8 != *(longlong **)(*param_1 + 8));
    }
    *(undefined1 *)(plVar11 + 3) = 1;
  }
  uVar5 = param_3[5];
  if (uVar5 != 0) {
    uVar7 = (longlong)(param_3[7] - uVar5) >> 2;
    if (0x3fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar10 = uVar5;
    if (0xfff < uVar7 * 4) {
      if ((uVar5 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar10 = *(ulonglong *)(uVar5 - 8);
      if (uVar5 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar5 - uVar10 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar5 - uVar10) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar10);
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
  }
  FMemory::operator_delete(param_3);
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  *param_2 = local_res18;
  return param_2;
}



// FUNCTION 143917940 FUN_143917940 body=206 status=ok
// SIG undefined FUN_143917940(void)

int FUN_143917940(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x168) +
                  (longlong)
                  *(int *)(*(longlong *)(param_1 + 0x150) + (longlong)(param_2 * 2 + 1) * 4) * 4);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x150) + (longlong)(param_2 * 2) * 4);
  iVar3 = 0;
  if (param_2 == param_3) {
    if (0 < iVar2) {
      piVar4 = piVar1;
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x78) + (longlong)(*piVar4 * 2) * 4) ==
            *(int *)(*(longlong *)(param_1 + 0x78) + 4 + (longlong)(*piVar4 * 2) * 4))
        goto LAB_1439179bd;
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < iVar2);
    }
  }
  else if (0 < iVar2) {
    piVar4 = piVar1;
    while ((*(int *)(*(longlong *)(param_1 + 0x78) + (longlong)(*piVar4 * 2) * 4) != param_3 &&
           (*(int *)(*(longlong *)(param_1 + 0x78) + 4 + (longlong)(*piVar4 * 2) * 4) != param_3)))
    {
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
      if (iVar2 <= iVar3) {
        return -1;
      }
    }
LAB_1439179bd:
    return piVar1[iVar3];
  }
  return -1;
}



// FUNCTION 143917a10 FUN_143917a10 body=61 status=ok
// SIG undefined FUN_143917a10(void)

longlong * FUN_143917a10(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1c8) + (longlong)param_4 * 8);
  lVar2 = *(longlong *)(*plVar1 + 0x18);
  *param_2 = plVar1[3] + (longlong)*(int *)(lVar2 + (longlong)(param_3 * 2 + 1) * 4) * 4;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar2 + (longlong)(param_3 * 2) * 4);
  return param_2;
}



// FUNCTION 143917a50 FUN_143917a50 body=78 status=ok
// SIG undefined FUN_143917a50(void)

longlong * FUN_143917a50(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uStack_c;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1c8) + (longlong)param_4 * 8);
  lVar3 = *(longlong *)(*plVar2 + 0x18);
  uVar1 = *(undefined4 *)(lVar3 + (longlong)(param_3 * 2) * 4);
  *param_2 = plVar2[3] + (longlong)*(int *)(lVar3 + (longlong)(param_3 * 2 + 1) * 4) * 4;
  param_2[1] = CONCAT44(uStack_c,uVar1);
  return param_2;
}



// FUNCTION 143917aa0 FUN_143917aa0 body=18 status=ok
// SIG undefined FUN_143917aa0(void)

undefined4 FUN_143917aa0(longlong param_1,int param_2)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x1c8) + (longlong)param_2 * 8) + 0x10);
}



// FUNCTION 143917ac0 FUN_143917ac0 body=162 status=ok
// SIG undefined FUN_143917ac0(void)

char * FUN_143917ac0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "MISSING_EDGE_FACES";
  case 1:
    return "MISSING_EDGE_VERTS";
  case 2:
    return "MISSING_FACE_EDGES";
  case 3:
    return "MISSING_FACE_VERTS";
  case 4:
    return "MISSING_VERT_FACES";
  case 5:
    return "MISSING_VERT_EDGES";
  case 6:
    return "FAILED_CORRELATION_EDGE_FACE";
  case 7:
    return "FAILED_CORRELATION_FACE_VERT";
  case 8:
    return "FAILED_CORRELATION_FACE_EDGE";
  case 9:
    return "FAILED_ORIENTATION_INCIDENT_EDGE";
  case 10:
    return "FAILED_ORIENTATION_INCIDENT_FACE";
  case 0xb:
    return "FAILED_ORIENTATION_INCIDENT_FACES_EDGES";
  case 0xc:
    return "DEGENERATE_EDGE";
  case 0xd:
    return "NON_MANIFOLD_EDGE";
  case 0xe:
    return "INVALID_CREASE_EDGE";
  case 0xf:
    return "INVALID_CREASE_VERT";
  default:
    return (char *)0x0;
  }
}



// FUNCTION 143917bb0 FUN_143917bb0 body=333 status=ok
// SIG undefined FUN_143917bb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_143917bb0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  size_t _Size;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  undefined1 *_Src;
  uint uVar10;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  uint local_e0;
  uint local_dc;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  _Src = local_d8;
  lVar7 = *(longlong *)(param_1 + 0x120);
  lVar1 = (longlong)(param_2 * 2 + 1) * 4;
  iVar3 = *(int *)(lVar1 + *(longlong *)(param_1 + 0x108));
  lVar2 = (longlong)(param_2 * 2) * 4;
  lVar8 = *(longlong *)(param_1 + 0x168);
  iVar4 = *(int *)(lVar2 + *(longlong *)(param_1 + 0x108));
  iVar5 = *(int *)(lVar2 + *(longlong *)(param_1 + 0x150));
  iVar6 = *(int *)(lVar1 + *(longlong *)(param_1 + 0x150));
  local_dc = 0x20;
  uVar10 = iVar5 + iVar4;
  local_58 = (undefined1 *)0x0;
  local_e0 = uVar10;
  if (0x20 < uVar10) {
    local_e8 = _Src;
    _Src = (undefined1 *)operator_new((ulonglong)uVar10 << 2);
    local_dc = uVar10;
    local_58 = _Src;
  }
  _Size = (longlong)iVar4 * 4;
  local_e8 = _Src;
  cVar9 = FUN_143917d00(param_1,param_2,_Src,_Src + _Size);
  if (cVar9 != '\0') {
    _guard_xfg_dispatch_icall_nop((void *)(lVar7 + (longlong)iVar3 * 4),_Src,_Size);
    _guard_xfg_dispatch_icall_nop
              ((void *)(lVar8 + (longlong)iVar6 * 4),_Src + _Size,(longlong)iVar5 << 2);
  }
  FMemory::operator_delete(local_58);
  return cVar9 != '\0';
}



// FUNCTION 143917d00 FUN_143917d00 body=783 status=ok
// SIG undefined FUN_143917d00(void)

undefined8 FUN_143917d00(longlong param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar12 = param_2 * 2;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar12 * 4);
  iVar11 = *(int *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar12 * 4);
  lVar3 = (longlong)iVar11;
  if (((iVar2 == 0) || (iVar11 < 2)) || (1 < iVar11 - iVar2)) {
    return 0;
  }
  uVar6 = 0;
  iVar13 = -1;
  iVar10 = -1;
  if (iVar11 == iVar2) {
    iVar13 = *(int *)(*(longlong *)(param_1 + 0x120) +
                     (longlong)*(int *)(*(longlong *)(param_1 + 0x108) + (longlong)(iVar12 + 1) * 4)
                     * 4);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar13 * 2 + 1) * 4);
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + lVar9 * 4);
    for (piVar5 = piVar1;
        (piVar5 != piVar1 + *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar13 * 2) * 4) &&
        (*piVar5 != param_2)); piVar5 = piVar5 + 1) {
    }
    uVar6 = (longlong)piVar5 - (longlong)piVar1 >> 2;
    iVar10 = *(int *)(*(longlong *)(param_1 + 0x48) + ((int)uVar6 + lVar9) * 4);
  }
  else if (0 < iVar11) {
    lVar9 = 0;
    iVar11 = iVar10;
    iVar13 = -1;
    do {
      iVar10 = *(int *)(*(longlong *)(param_1 + 0x168) +
                        (longlong)
                        *(int *)(*(longlong *)(param_1 + 0x150) + (longlong)(iVar12 + 1) * 4) * 4 +
                       lVar9 * 4);
      if (*(int *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar10 * 2) * 4) == 1) {
        iVar13 = *(int *)(*(longlong *)(param_1 + 0xa8) +
                         (longlong)
                         *(int *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar10 * 2 + 1) * 4) *
                         4);
        lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar13 * 2 + 1) * 4);
        piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + lVar7 * 4);
        for (piVar5 = piVar1;
            (piVar5 != piVar1 + *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar13 * 2) * 4)
            && (*piVar5 != param_2)); piVar5 = piVar5 + 1) {
        }
        uVar6 = (ulonglong)(int)((longlong)piVar5 - (longlong)piVar1 >> 2);
        iVar11 = iVar10;
        if (iVar10 == *(int *)(*(longlong *)(param_1 + 0x48) + (lVar7 + uVar6) * 4)) break;
      }
      iVar10 = iVar11;
      lVar9 = lVar9 + 1;
      iVar11 = iVar10;
    } while (lVar9 < lVar3);
  }
  *param_3 = iVar13;
  *param_4 = iVar10;
  if (1 < lVar3) {
    iVar11 = iVar13 * 2;
    lVar7 = 1;
    lVar8 = 1;
    lVar9 = (longlong)(iVar11 + 1) * 4;
    iVar12 = iVar10;
    do {
      iVar4 = (int)uVar6;
      if (iVar4 == 0) {
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar11 * 4);
      }
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x48) +
                       (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar9) * 4 +
                      (longlong)(iVar4 + -1) * 4);
      if ((iVar4 == iVar12) || (iVar4 == iVar10)) {
        return 0;
      }
      param_4[lVar7] = iVar4;
      lVar7 = lVar7 + 1;
      if (lVar8 < iVar2) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0xa8) +
                        (longlong)
                        *(int *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar4 * 2 + 1) * 4) * 4)
        ;
        iVar11 = *(int *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar4 * 2) * 4);
        if (iVar11 == 0) {
          return 0;
        }
        if ((iVar11 == 1) && (*piVar1 == iVar13)) {
          return 0;
        }
        lVar9 = 0;
        if (*piVar1 == iVar13) {
          lVar9 = 4;
        }
        iVar13 = *(int *)(lVar9 + (longlong)piVar1);
        iVar11 = iVar13 * 2;
        lVar9 = (longlong)(iVar11 + 1) * 4;
        piVar1 = (int *)(*(longlong *)(param_1 + 0x48) +
                        (longlong)
                        *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar11 + 1) * 4) * 4);
        for (piVar5 = piVar1;
            (piVar5 != piVar1 + *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar11 * 4) &&
            (*piVar5 != iVar4)); piVar5 = piVar5 + 1) {
        }
        uVar6 = (longlong)piVar5 - (longlong)piVar1 >> 2 & 0xffffffff;
        param_3[lVar8] = iVar13;
        lVar8 = lVar8 + 1;
      }
      iVar12 = iVar4;
    } while (lVar7 < lVar3);
  }
  return 1;
}



// FUNCTION 143918010 FUN_143918010 body=120 status=ok
// SIG undefined FUN_143918010(void)

void FUN_143918010(longlong param_1)

{
  ushort *puVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  iVar2 = *(int *)(param_1 + 8);
  uVar4 = 0;
  uVar5 = uVar4;
  if (0 < (longlong)iVar2) {
    do {
      puVar1 = (ushort *)(*(longlong *)(param_1 + 0x1b0) + uVar4 * 2);
      if (((*(byte *)(*(longlong *)(param_1 + 0x1b0) + uVar4 * 2) & 1) == 0) &&
         (cVar3 = FUN_143917bb0(param_1,uVar5), cVar3 == '\0')) {
        *puVar1 = *puVar1 | 1;
      }
      uVar4 = uVar4 + 1;
      uVar5 = (ulonglong)((int)uVar5 + 1);
    } while ((longlong)uVar4 < (longlong)iVar2);
  }
  return;
}



// FUNCTION 143918090 FUN_143918090 body=755 status=ok
// SIG undefined FUN_143918090(void)

void FUN_143918090(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar16 = *(int *)(param_1 + 8);
  lVar12 = (longlong)iVar16;
  FUN_143918420(param_1 + 0x138,*(longlong *)(param_1 + 0x128) - *(longlong *)(param_1 + 0x120) >> 2
               );
  FUN_143918420(param_1 + 0x180,*(longlong *)(param_1 + 0x170) - *(longlong *)(param_1 + 0x168) >> 2
               );
  FUN_143918420(param_1 + 0xc0,*(longlong *)(param_1 + 0xb0) - *(longlong *)(param_1 + 0xa8) >> 2);
  iVar17 = 0;
  lVar18 = 0;
  if (0 < iVar16) {
    do {
      iVar16 = -1;
      lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x108) + 4 + lVar18 * 8);
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x108) + lVar18 * 8);
      piVar15 = (int *)(*(longlong *)(param_1 + 0x120) + lVar8 * 4);
      puVar13 = (undefined2 *)(*(longlong *)(param_1 + 0x138) + lVar8 * 2);
      if (0 < (int)uVar2) {
        uVar14 = (ulonglong)uVar2;
        do {
          iVar3 = *piVar15 * 2;
          lVar8 = *(longlong *)(param_1 + 0x30) +
                  (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar3 + 1) * 4) * 4;
          if (*piVar15 == iVar16) {
            lVar9 = (ulonglong)(ushort)puVar13[-1] * 4 + 4;
          }
          else {
            lVar9 = 0;
          }
          for (piVar6 = (int *)(lVar9 + lVar8);
              (piVar6 != (int *)(lVar8 + (longlong)
                                         *(int *)(*(longlong *)(param_1 + 0x18) +
                                                 (longlong)iVar3 * 4) * 4) && (*piVar6 != iVar17));
              piVar6 = piVar6 + 1) {
          }
          *puVar13 = (short)((longlong)piVar6 - lVar8 >> 2);
          puVar13 = puVar13 + 1;
          iVar16 = *piVar15;
          piVar15 = piVar15 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      iVar17 = iVar17 + 1;
      lVar18 = lVar18 + 1;
    } while (lVar18 < lVar12);
  }
  iVar16 = 0;
  lVar18 = 0;
  if (0 < lVar12) {
    do {
      lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x150) + 4 + lVar18 * 8);
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x150) + lVar18 * 8);
      lVar8 = *(longlong *)(param_1 + 0x168) + lVar10 * 4;
      lVar9 = *(longlong *)(param_1 + 0x180);
      lVar11 = 0;
      if (0 < (int)uVar2) {
        uVar14 = (ulonglong)uVar2;
        do {
          iVar17 = *(int *)(lVar8 + lVar11 * 4);
          lVar7 = (longlong)(iVar17 * 2);
          iVar3 = *(int *)(*(longlong *)(param_1 + 0x78) + 4 + lVar7 * 4);
          if (*(int *)(*(longlong *)(param_1 + 0x78) + lVar7 * 4) == iVar3) {
            if ((lVar11 == 0) || (iVar17 != *(int *)(lVar8 + -4 + lVar11 * 4))) {
              uVar5 = 0;
            }
            else {
              uVar5 = 1;
            }
          }
          else {
            uVar5 = (ushort)(iVar16 == iVar3);
          }
          *(ushort *)(lVar9 + lVar10 * 2 + lVar11 * 2) = uVar5;
          lVar11 = lVar11 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      uVar4 = *(uint *)(param_1 + 0x14);
      if ((int)*(uint *)(param_1 + 0x14) < (int)uVar2) {
        uVar4 = uVar2;
      }
      iVar16 = iVar16 + 1;
      lVar18 = lVar18 + 1;
      *(uint *)(param_1 + 0x14) = uVar4;
    } while (lVar18 < lVar12);
  }
  iVar16 = 0;
  lVar12 = 0;
  if (0 < (longlong)iVar1) {
    do {
      iVar17 = -1;
      lVar18 = (longlong)*(int *)(*(longlong *)(param_1 + 0x90) + 4 + lVar12 * 8);
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x90) + lVar12 * 8);
      piVar15 = (int *)(*(longlong *)(param_1 + 0xa8) + lVar18 * 4);
      puVar13 = (undefined2 *)(*(longlong *)(param_1 + 0xc0) + lVar18 * 2);
      if (0 < (int)uVar2) {
        uVar14 = (ulonglong)uVar2;
        do {
          iVar3 = *piVar15 * 2;
          lVar18 = *(longlong *)(param_1 + 0x48) +
                   (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar3 + 1) * 4) * 4
          ;
          if (*piVar15 == iVar17) {
            lVar8 = (ulonglong)(ushort)puVar13[-1] * 4 + 4;
          }
          else {
            lVar8 = 0;
          }
          for (piVar6 = (int *)(lVar8 + lVar18);
              (piVar6 != (int *)(lVar18 + (longlong)
                                          *(int *)(*(longlong *)(param_1 + 0x18) +
                                                  (longlong)iVar3 * 4) * 4) && (*piVar6 != iVar16));
              piVar6 = piVar6 + 1) {
          }
          *puVar13 = (short)((longlong)piVar6 - lVar18 >> 2);
          puVar13 = puVar13 + 1;
          iVar17 = *piVar15;
          piVar15 = piVar15 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      iVar16 = iVar16 + 1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar1);
  }
  return;
}



// FUNCTION 143918390 push_back body=140 status=ok
// SIG undefined push_back(void)

void std::vector<int,std::allocator<int>_>::push_back(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  if ((param_2 < puVar1) && (puVar2 = (undefined4 *)*param_1, puVar2 <= param_2)) {
    if (puVar1 == (undefined4 *)param_1[2]) {
      vector<unsigned_int,std::allocator<bool>_>::_Reserve(param_1,1);
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] =
           *(undefined4 *)(*param_1 + ((longlong)param_2 - (longlong)puVar2 >> 2) * 4);
      param_1[1] = param_1[1] + 4;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)param_1[2]) {
      vector<unsigned_int,std::allocator<bool>_>::_Reserve(param_1,1);
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] = *param_2;
    }
  }
  param_1[1] = param_1[1] + 4;
  return;
}



// FUNCTION 143918420 FUN_143918420 body=238 status=ok
// SIG undefined FUN_143918420(void)

void FUN_143918420(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = param_1[1];
  uVar2 = lVar1 - *param_1 >> 1;
  if (param_2 < uVar2) {
    param_1[1] = lVar1 + (param_2 - uVar2) * 2;
  }
  else if (uVar2 < param_2) {
    if ((ulonglong)(param_1[2] - lVar1 >> 1) < param_2 - uVar2) {
      if (0x7fffffffffffffff - uVar2 < param_2 - uVar2) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      FUN_143915b30(param_1);
    }
    _guard_xfg_dispatch_icall_nop((void *)param_1[1],0,(param_2 - (param_1[1] - *param_1 >> 1)) * 2)
    ;
    param_1[1] = param_1[1] + (param_2 - (param_1[1] - *param_1 >> 1)) * 2;
  }
  return;
}



// FUNCTION 143918510 FUN_143918510 body=245 status=ok
// SIG undefined FUN_143918510(void)

void FUN_143918510(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = param_1[1];
  uVar2 = lVar1 - *param_1 >> 2;
  if (param_2 < uVar2) {
    param_1[1] = lVar1 + (param_2 - uVar2) * 4;
  }
  else if (uVar2 < param_2) {
    if ((ulonglong)(param_1[2] - lVar1 >> 2) < param_2 - uVar2) {
      if (0x3fffffffffffffff - uVar2 < param_2 - uVar2) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      std::vector<unsigned_int,std::allocator<bool>_>::_Reallocate(param_1);
    }
    _guard_xfg_dispatch_icall_nop((void *)param_1[1],0,(param_2 - (param_1[1] - *param_1 >> 2)) * 4)
    ;
    param_1[1] = param_1[1] + (param_2 - (param_1[1] - *param_1 >> 2)) * 4;
  }
  return;
}



// FUNCTION 143918610 FUN_143918610 body=245 status=ok
// SIG undefined FUN_143918610(void)

void FUN_143918610(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = param_1[1];
  uVar2 = lVar1 - *param_1 >> 2;
  if (param_2 < uVar2) {
    param_1[1] = lVar1 + (param_2 - uVar2) * 4;
  }
  else if (uVar2 < param_2) {
    if ((ulonglong)(param_1[2] - lVar1 >> 2) < param_2 - uVar2) {
      if (0x3fffffffffffffff - uVar2 < param_2 - uVar2) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      std::vector<unsigned_int,std::allocator<bool>_>::_Reallocate(param_1);
    }
    _guard_xfg_dispatch_icall_nop((void *)param_1[1],0,(param_2 - (param_1[1] - *param_1 >> 2)) * 4)
    ;
    param_1[1] = param_1[1] + (param_2 - (param_1[1] - *param_1 >> 2)) * 4;
  }
  return;
}



// FUNCTION 143918710 FUN_143918710 body=215 status=ok
// SIG undefined FUN_143918710(void)

void FUN_143918710(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar1 = *param_1;
  uVar2 = param_1[1] - lVar1;
  if (param_2 < uVar2) {
    param_1[1] = lVar1 + param_2;
  }
  else if (uVar2 < param_2) {
    uVar3 = param_2 - uVar2;
    if ((ulonglong)(param_1[2] - param_1[1]) < uVar3) {
      if (~uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      uVar6 = param_1[2] - lVar1;
      uVar5 = 0;
      if (uVar6 <= ~(uVar6 >> 1)) {
        uVar5 = (uVar6 >> 1) + uVar6;
      }
      uVar4 = uVar3 + uVar2;
      if (uVar3 + uVar2 <= uVar5) {
        uVar4 = uVar5;
      }
      FUN_143915d70(param_1,uVar4,uVar5,uVar6,0xfffffffffffffffe);
    }
    FUN_143914cc0(param_1[1],param_2 - (param_1[1] - *param_1),param_1,(ulonglong)param_1 & 0xff);
    param_1[1] = param_1[1] + (*param_1 - param_1[1]) + param_2;
  }
  return;
}



// FUNCTION 1439187f0 FUN_1439187f0 body=242 status=ok
// SIG undefined FUN_1439187f0(void)

void FUN_1439187f0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar1 = param_1[1];
  uVar2 = lVar1 - *param_1 >> 1;
  if (param_2 < uVar2) {
    param_1[1] = lVar1 + (param_2 - uVar2) * 2;
  }
  else if (uVar2 < param_2) {
    uVar4 = param_2 - uVar2;
    if ((ulonglong)(param_1[2] - lVar1 >> 1) < uVar4) {
      if (0x7fffffffffffffff - uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      uVar7 = param_1[2] - *param_1 >> 1;
      uVar6 = 0x7fffffffffffffff - (uVar7 >> 1);
      uVar3 = 0;
      if (uVar7 <= uVar6) {
        uVar3 = (uVar7 >> 1) + uVar7;
      }
      uVar5 = uVar4 + uVar2;
      if (uVar4 + uVar2 <= uVar3) {
        uVar5 = uVar3;
      }
      FUN_143915ea0(param_1,uVar5,uVar6,uVar7,0xfffffffffffffffe);
    }
    FUN_143914cc0(param_1[1],param_2 - (param_1[1] - *param_1 >> 1),param_1,
                  (ulonglong)param_1 & 0xff);
    param_1[1] = param_1[1] + (param_2 - (param_1[1] - *param_1 >> 1)) * 2;
  }
  return;
}



// FUNCTION 1439188f0 FUN_1439188f0 body=122 status=ok
// SIG undefined FUN_1439188f0(void)

void FUN_1439188f0(longlong param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  FUN_143918510(param_1 + 0x90,(longlong)(param_2 * 2));
  FUN_143918610(param_1 + 0xd8,(longlong)param_2);
  FUN_143918710(param_1 + 0xf0);
  if (0 < param_2) {
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0xf0),0,(longlong)*(int *)(param_1 + 4));
  }
  return;
}



// FUNCTION 143918970 FUN_143918970 body=126 status=ok
// SIG undefined FUN_143918970(void)

void FUN_143918970(longlong param_1,int param_2)

{
  *(int *)(param_1 + 8) = param_2;
  FUN_143918510(param_1 + 0x108,(longlong)(param_2 * 2));
  FUN_143918510(param_1 + 0x150,(longlong)(param_2 * 2));
  FUN_143918610(param_1 + 0x198,(longlong)param_2);
  FUN_1439187f0(param_1 + 0x1b0);
  _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x1b0),0,(longlong)*(int *)(param_1 + 8) * 2);
  return;
}



// FUNCTION 1439189f0 FUN_1439189f0 body=2253 status=ok
// SIG undefined FUN_1439189f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1439189f0(int *param_1,code *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  int *piVar7;
  ushort *puVar8;
  longlong lVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  char *_Format;
  byte *pbVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  code *pcVar19;
  undefined1 auStack_558 [32];
  int local_538;
  uint local_530;
  undefined8 local_528;
  code *local_520;
  int local_518;
  int *local_510;
  longlong local_508;
  longlong local_500;
  undefined8 local_4f8;
  undefined1 *local_4e8;
  uint local_4e0;
  uint local_4dc;
  undefined1 local_4d8 [128];
  undefined1 *local_458;
  char local_448 [1024];
  ulonglong local_48;
  
  local_4f8 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_558;
  local_528 = param_3;
  local_520 = param_2;
  local_510 = param_1;
  if (((int)(*(longlong *)(param_1 + 0xe) - *(longlong *)(param_1 + 0xc) >> 2) == 0) ||
     ((int)(*(longlong *)(param_1 + 0x4a) - *(longlong *)(param_1 + 0x48) >> 2) == 0)) {
    if (((int)(*(longlong *)(param_1 + 0xe) - *(longlong *)(param_1 + 0xc) >> 2) == 0) &&
       (param_2 != (code *)0x0)) {
      uVar5 = FUN_143917ac0(3);
      _snprintf(local_448,0x400,"%s - missing face-verts",uVar5);
      (*param_2)(3,local_448,param_3);
    }
    piVar4 = (int *)(*(longlong *)(param_1 + 0x4a) - *(longlong *)(param_1 + 0x48) >> 2);
    if (((int)piVar4 != 0) || (param_2 == (code *)0x0)) goto LAB_143919291;
    uVar5 = FUN_143917ac0(4);
    _snprintf(local_448,0x400,"%s - missing vert-faces",uVar5);
    uVar5 = 4;
  }
  else {
    iVar14 = 0;
    iVar12 = *param_1;
    if (0 < iVar12) {
      lVar9 = *(longlong *)(param_1 + 0xc);
      piVar11 = *(int **)(param_1 + 6);
      do {
        uVar17 = 0;
        if (0 < (longlong)*piVar11) {
          uVar18 = uVar17;
          do {
            iVar15 = 0;
            uVar10 = (uint)uVar17;
            iVar2 = *(int *)(lVar9 + (longlong)piVar11[1] * 4 + uVar18 * 4) * 2;
            iVar12 = *(int *)(*(longlong *)(param_1 + 0x42) + (longlong)iVar2 * 4);
            piVar4 = (int *)(longlong)
                            *(int *)(*(longlong *)(param_1 + 0x42) + (longlong)(iVar2 + 1) * 4);
            piVar7 = (int *)(*(longlong *)(param_1 + 0x48) + (longlong)piVar4 * 4);
            puVar8 = (ushort *)(*(longlong *)(param_1 + 0x4e) + (longlong)piVar4 * 2);
            if (iVar12 < 1) {
LAB_143918b31:
              if (param_2 == (code *)0x0) goto LAB_143919291;
              uVar5 = FUN_143917ac0(7);
              _Format = "%s - face %d correlation of vert %d failed";
              goto LAB_143918b50;
            }
            while ((*piVar7 != iVar14 || (piVar4 = (int *)(ulonglong)*puVar8, *puVar8 != uVar10))) {
              iVar15 = iVar15 + 1;
              piVar7 = piVar7 + 1;
              puVar8 = puVar8 + 1;
              if (iVar12 <= iVar15) goto LAB_143918b31;
            }
            uVar17 = (ulonglong)(uVar10 + 1);
            uVar18 = uVar18 + 1;
          } while ((longlong)uVar18 < (longlong)*piVar11);
          lVar9 = *(longlong *)(param_1 + 0xc);
        }
        iVar14 = iVar14 + 1;
        piVar11 = piVar11 + 2;
      } while (iVar14 < *param_1);
      iVar12 = *param_1;
    }
    iVar14 = 0;
    if (((int)(*(longlong *)(param_1 + 0x2c) - *(longlong *)(param_1 + 0x2a) >> 2) != 0) &&
       ((int)(*(longlong *)(param_1 + 0x14) - *(longlong *)(param_1 + 0x12) >> 2) != 0)) {
      if (0 < iVar12) {
        lVar9 = *(longlong *)(param_1 + 0x12);
        piVar11 = *(int **)(param_1 + 6);
        do {
          uVar17 = 0;
          if (0 < (longlong)*piVar11) {
            uVar18 = uVar17;
            do {
              iVar15 = 0;
              iVar2 = *(int *)(lVar9 + (longlong)piVar11[1] * 4 + uVar18 * 4) * 2;
              iVar12 = *(int *)(*(longlong *)(param_1 + 0x24) + (longlong)iVar2 * 4);
              piVar4 = (int *)(longlong)
                              *(int *)(*(longlong *)(param_1 + 0x24) + (longlong)(iVar2 + 1) * 4);
              piVar7 = (int *)(*(longlong *)(param_1 + 0x2a) + (longlong)piVar4 * 4);
              puVar8 = (ushort *)(*(longlong *)(param_1 + 0x30) + (longlong)piVar4 * 2);
              uVar10 = (uint)uVar17;
              if (iVar12 < 1) {
LAB_143918c71:
                if (param_2 != (code *)0x0) {
                  uVar5 = FUN_143917ac0(8);
                  local_538 = iVar14;
                  local_530 = uVar10;
                  _snprintf(local_448,0x400,"%s - face %d correlation of edge %d failed",uVar5);
                  piVar4 = (int *)(*param_2)(8,local_448,local_528);
                }
                goto LAB_143919291;
              }
              while ((*piVar7 != iVar14 || (piVar4 = (int *)(ulonglong)*puVar8, *puVar8 != uVar10)))
              {
                iVar15 = iVar15 + 1;
                piVar7 = piVar7 + 1;
                puVar8 = puVar8 + 1;
                if (iVar12 <= iVar15) goto LAB_143918c71;
              }
              uVar17 = (ulonglong)(uVar10 + 1);
              uVar18 = uVar18 + 1;
            } while ((longlong)uVar18 < (longlong)*piVar11);
            lVar9 = *(longlong *)(param_1 + 0x12);
          }
          iVar14 = iVar14 + 1;
          piVar11 = piVar11 + 2;
        } while (iVar14 < *param_1);
      }
      iVar14 = 0;
      if (((int)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x1e) >> 2) != 0) &&
         ((int)(*(longlong *)(param_1 + 0x5c) - *(longlong *)(param_1 + 0x5a) >> 2) != 0)) {
        if (0 < param_1[1]) {
          iVar12 = iVar14;
LAB_143918d16:
          uVar10 = 0;
          piVar11 = (int *)(*(longlong *)(param_1 + 0x1e) + (longlong)iVar12 * 4);
LAB_143918d30:
          iVar2 = *(int *)(*(longlong *)(param_1 + 0x54) + (longlong)(*piVar11 * 2) * 4);
          lVar9 = (longlong)
                  *(int *)(*(longlong *)(param_1 + 0x54) + (longlong)(*piVar11 * 2 + 1) * 4);
          piVar4 = (int *)(*(longlong *)(param_1 + 0x5a) + lVar9 * 4);
          puVar8 = (ushort *)(*(longlong *)(param_1 + 0x60) + lVar9 * 2);
          iVar15 = 0;
          if (0 < iVar2) goto LAB_143918d57;
LAB_143918d8f:
          if (param_2 != (code *)0x0) {
            uVar5 = FUN_143917ac0(7);
            _Format = "%s - edge %d correlation of vert %d failed";
LAB_143918b50:
            local_538 = iVar14;
            local_530 = uVar10;
            _snprintf(local_448,0x400,_Format,uVar5);
            uVar5 = 7;
            param_3 = local_528;
            goto LAB_143918b73;
          }
          goto LAB_143919291;
        }
LAB_143918db3:
        uVar10 = param_1[5] * 2;
        puVar6 = local_4d8;
        local_4dc = 0x20;
        local_458 = (undefined1 *)0x0;
        local_4e0 = uVar10;
        if (0x20 < uVar10) {
          local_4e8 = puVar6;
          puVar6 = (undefined1 *)operator_new((ulonglong)uVar10 << 2);
          local_4dc = uVar10;
          local_458 = puVar6;
        }
        local_518 = 0;
        local_4e8 = puVar6;
        if (0 < param_1[2]) {
          local_500 = 0;
          local_508 = 0;
          do {
            iVar12 = local_518;
            if ((*(ushort *)(local_508 + *(longlong *)(param_1 + 0x6c)) & 0x801) == 0) {
              iVar14 = *(int *)(local_500 + *(longlong *)(param_1 + 0x42));
              piVar4 = (int *)(*(longlong *)(param_1 + 0x48) +
                              (longlong)*(int *)(local_500 + 4 + *(longlong *)(param_1 + 0x42)) * 4)
              ;
              iVar2 = *(int *)(*(longlong *)(param_1 + 0x54) + local_500);
              piVar11 = (int *)(*(longlong *)(param_1 + 0x5a) +
                               (longlong)*(int *)(*(longlong *)(param_1 + 0x54) + 4 + local_500) * 4
                               );
              puVar1 = puVar6 + (longlong)iVar14 * 4;
              cVar3 = FUN_143917d00(local_510,local_518,puVar6,puVar1);
              pcVar19 = local_520;
              if (cVar3 == '\0') {
                if (local_520 == (code *)0x0) goto LAB_1439190ba;
                uVar5 = FUN_143917ac0(0xb);
                local_538 = iVar12;
                _snprintf(local_448,0x400,"%s - vertex %d cannot orient incident faces and edges",
                          uVar5);
                uVar5 = 0xb;
                goto LAB_1439190ab;
              }
              uVar10 = 0;
              if (0 < iVar14) {
                lVar9 = (longlong)puVar6 - (longlong)piVar4;
                uVar13 = uVar10;
                do {
                  if (*piVar4 != *(int *)(lVar9 + (longlong)piVar4)) {
                    if (local_520 == (code *)0x0) goto LAB_1439190ba;
                    uVar5 = FUN_143917ac0(10);
                    local_538 = local_518;
                    local_530 = uVar13;
                    _snprintf(local_448,0x400,
                              "%s - vertex %d orientation failure at incident face %d",uVar5);
                    uVar5 = 10;
                    goto LAB_1439190ab;
                  }
                  uVar13 = uVar13 + 1;
                  piVar4 = piVar4 + 1;
                } while ((int)uVar13 < iVar14);
              }
              puVar6 = local_4e8;
              param_1 = local_510;
              if (0 < iVar2) {
                lVar9 = (longlong)puVar1 - (longlong)piVar11;
                do {
                  if (*piVar11 != *(int *)(lVar9 + (longlong)piVar11)) {
                    if (local_520 == (code *)0x0) goto LAB_1439190ba;
                    uVar5 = FUN_143917ac0(9);
                    local_538 = local_518;
                    local_530 = uVar10;
                    _snprintf(local_448,0x400,
                              "%s - vertex %d orientation failure at incident edge %d",uVar5);
                    uVar5 = 9;
                    goto LAB_1439190ab;
                  }
                  uVar10 = uVar10 + 1;
                  piVar11 = piVar11 + 1;
                } while ((int)uVar10 < iVar2);
              }
            }
            local_518 = local_518 + 1;
            local_508 = local_508 + 2;
            local_500 = local_500 + 8;
          } while (local_518 < param_1[2]);
        }
        pcVar19 = local_520;
        uVar17 = 0;
        if (0 < param_1[1]) {
          pbVar16 = *(byte **)(param_1 + 0x3c);
          iVar12 = 0;
          uVar18 = uVar17;
LAB_143918ff5:
          if ((*pbVar16 & 1) == 0) {
            piVar4 = (int *)(*(longlong *)(param_1 + 0x1e) + (longlong)(int)uVar18 * 4);
            if (*piVar4 == piVar4[1]) {
              if (local_520 == (code *)0x0) goto LAB_1439190ba;
              uVar5 = FUN_143917ac0(0xc);
              local_538 = iVar12;
              _snprintf(local_448,0x400,
                        "%s - Error in eIndex = %d:  degenerate edge not tagged marked non-manifold"
                        ,uVar5);
              uVar5 = 0xc;
LAB_1439190ab:
              (*pcVar19)(uVar5,local_448,local_528);
LAB_1439190ba:
              uVar17 = 0;
              goto LAB_1439190c0;
            }
            uVar10 = *(uint *)(uVar17 + *(longlong *)(param_1 + 0x24));
            if (1 < uVar10 - 1) {
              if (local_520 == (code *)0x0) goto LAB_1439190ba;
              uVar5 = FUN_143917ac0(0xd);
              local_538 = iVar12;
              local_530 = uVar10;
              _snprintf(local_448,0x400,
                        "%s - edge %d with %d incident faces not tagged non-manifold",uVar5);
              uVar5 = 0xd;
              goto LAB_1439190ab;
            }
          }
          iVar12 = iVar12 + 1;
          uVar18 = (ulonglong)((int)uVar18 + 2);
          pbVar16 = pbVar16 + 1;
          uVar17 = uVar17 + 8;
          if (param_1[1] <= iVar12) goto LAB_1439190be;
          goto LAB_143918ff5;
        }
LAB_1439190be:
        uVar17 = 1;
LAB_1439190c0:
        FMemory::operator_delete(local_458);
        return uVar17;
      }
      if (((int)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x1e) >> 2) == 0) &&
         (param_2 != (code *)0x0)) {
        uVar5 = FUN_143917ac0(1);
        _snprintf(local_448,0x400,"%s - missing edge-verts",uVar5);
        param_3 = local_528;
        (*param_2)(1,local_448,local_528);
      }
      piVar4 = (int *)(*(longlong *)(param_1 + 0x5c) - *(longlong *)(param_1 + 0x5a) >> 2);
      if (((int)piVar4 == 0) && (param_2 != (code *)0x0)) {
        uVar5 = FUN_143917ac0(5);
        _snprintf(local_448,0x400,"%s - missing vert-edges",uVar5);
        uVar5 = 5;
LAB_143918b73:
        piVar4 = (int *)(*param_2)(uVar5,local_448,param_3);
      }
      goto LAB_143919291;
    }
    if (((int)(*(longlong *)(param_1 + 0x2c) - *(longlong *)(param_1 + 0x2a) >> 2) == 0) &&
       (param_2 != (code *)0x0)) {
      uVar5 = FUN_143917ac0(0);
      _snprintf(local_448,0x400,"%s - missing edge-faces",uVar5);
      (*param_2)(0,local_448,param_3);
    }
    piVar4 = (int *)(*(longlong *)(param_1 + 0x14) - *(longlong *)(param_1 + 0x12) >> 2);
    if (((int)piVar4 != 0) || (param_2 == (code *)0x0)) goto LAB_143919291;
    uVar5 = FUN_143917ac0(2);
    _snprintf(local_448,0x400,"%s - missing face-edges",uVar5);
    uVar5 = 2;
  }
  piVar4 = (int *)(*param_2)(uVar5,local_448,param_3);
LAB_143919291:
  return (ulonglong)piVar4 & 0xffffffffffffff00;
LAB_143918d57:
  while ((*piVar4 != iVar14 || (*puVar8 != uVar10))) {
    iVar15 = iVar15 + 1;
    piVar4 = piVar4 + 1;
    puVar8 = puVar8 + 1;
    if (iVar2 <= iVar15) goto LAB_143918d8f;
  }
  uVar10 = uVar10 + 1;
  piVar11 = piVar11 + 1;
  if (1 < (int)uVar10) goto code_r0x000143918d7f;
  goto LAB_143918d30;
code_r0x000143918d7f:
  iVar14 = iVar14 + 1;
  iVar12 = iVar12 + 2;
  if (param_1[1] <= iVar14) goto LAB_143918db3;
  goto LAB_143918d16;
}



// FUNCTION 1439192c0 _snprintf body=90 status=ok
// SIG int _snprintf(char * _Dest, size_t _Count, char * _Format, ...)

int __cdecl _snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
  local_res20 = in_R9;
  puVar2 = (ulonglong *)__local_stdio_printf_options();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,_Dest,_Count,_Format,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 143919320 _Uninitialized_move_al_unchecked1<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_*___ptr64,std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_*___ptr64,std::allocator<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_>_> body=62 status=ok
// SIG undefined _Uninitialized_move_al_unchecked1<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_*___ptr64,std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_*___ptr64,std::allocator<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_>_>(void)

undefined8 *
std::
_Uninitialized_move_al_unchecked1<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_*___ptr64,std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_*___ptr64,std::allocator<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_>_>
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_3 != (undefined8 *)0x0) {
      uVar1 = param_1[1];
      *param_3 = *param_1;
      param_3[1] = uVar1;
      param_3[2] = param_1[2];
    }
    param_3 = param_3 + 3;
  }
  return param_3;
}



// FUNCTION 143919360 FUN_143919360 body=383 status=ok
// SIG undefined FUN_143919360(void)

undefined4 *
FUN_143919360(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_res20;
  
  *param_1 = param_2;
  param_1[1] = (int)param_3;
  param_1[2] = param_1[2] & 0xffffffc1 | 1;
  param_1[3] = param_1[3] & 0xffffffc0;
  param_1[4] = param_1[4] & 0xfffff0f0 | 0xf0;
  lVar3 = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  if ((ulonglong)(*(longlong *)(param_1 + 0xe) - *(longlong *)(param_1 + 10) >> 3) < 10) {
    std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::_Reallocate
              (param_1 + 10,10,param_3,param_4,0xfffffffffffffffe);
  }
  local_res20 = operator_new(0x1e0);
  if (local_res20 != 0) {
    lVar3 = FUN_143914e00(local_res20);
  }
  plVar1 = *(longlong **)(param_1 + 0xc);
  local_res20 = lVar3;
  if ((&local_res20 < plVar1) && (plVar2 = *(longlong **)(param_1 + 10), plVar2 <= &local_res20)) {
    if (plVar1 == *(longlong **)(param_1 + 0xe)) {
      FUN_143915fe0(param_1 + 10,1);
    }
    if (*(undefined8 **)(param_1 + 0xc) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0xc) =
           *(undefined8 *)
            (*(longlong *)(param_1 + 10) + ((longlong)&local_res20 - (longlong)plVar2 >> 3) * 8);
    }
  }
  else {
    if (plVar1 == *(longlong **)(param_1 + 0xe)) {
      FUN_143915fe0(param_1 + 10,1);
    }
    if (*(longlong **)(param_1 + 0xc) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0xc) = lVar3;
    }
  }
  *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) + 8;
  if ((ulonglong)((*(longlong *)(param_1 + 0x1a) - *(longlong *)(param_1 + 0x16)) / 0x18) < 10) {
    std::
    vector<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>,std::allocator<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_>_>
    ::_Reallocate(param_1 + 0x16,10);
  }
  FUN_143919d60(param_1);
  return param_1;
}



// FUNCTION 1439194e0 ~vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_> body=52 status=ok
// SIG undefined ~vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>(void)

void std::vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>::
     ~vector<wchar_t_const_*___ptr64,std::allocator<wchar_t_const_*___ptr64>_>(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    allocator<wchar_t_const_*___ptr64>::deallocate(param_1,lVar1,param_1[2] - lVar1 >> 3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 143919520 ~vector<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>,std::allocator<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_>_> body=81 status=ok
// SIG undefined ~vector<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>,std::allocator<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_>_>(void)

void std::
     vector<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>,std::allocator<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_>_>
     ::
     ~vector<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>,std::allocator<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_>_>
               (longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    allocator<CefStringBase<CefStringTraitsUTF16>_>::deallocate
              (param_1,lVar1,(param_1[2] - lVar1) / 0x18);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 143919580 FUN_143919580 body=625 status=ok
// SIG undefined FUN_143919580(void)

void FUN_143919580(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  uVar6 = uVar4;
  uVar3 = uVar4;
  if (0 < (int)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3)) {
    do {
      lVar1 = *(longlong *)(uVar3 + *(longlong *)(param_1 + 0x28));
      if (lVar1 != 0) {
        FUN_143915070(lVar1);
        FMemory::operator_delete(lVar1,0x1e0);
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar3 = uVar3 + 8;
    } while ((int)uVar5 < (int)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3))
    ;
  }
  uVar6 = uVar4;
  if (0 < (int)(*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 3)) {
    do {
      puVar2 = *(undefined8 **)(uVar6 + *(longlong *)(param_1 + 0x40));
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      uVar5 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar5;
      uVar6 = uVar6 + 8;
    } while ((int)uVar5 < (int)(*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 3))
    ;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x58);
  if (uVar6 != 0) {
    uVar3 = (longlong)(*(longlong *)(param_1 + 0x68) - uVar6) / 0x18;
    if (0xaaaaaaaaaaaaaaa < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 0x18) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x40);
  if (uVar6 != 0) {
    uVar3 = (longlong)(*(longlong *)(param_1 + 0x50) - uVar6) >> 3;
    if (0x1fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 8) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x28);
  if (uVar6 != 0) {
    uVar3 = (longlong)(*(longlong *)(param_1 + 0x38) - uVar6) >> 3;
    if (0x1fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 8) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 143919800 FUN_143919800 body=448 status=ok
// SIG undefined FUN_143919800(void)

void FUN_143919800(undefined4 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint local_res8;
  
  if (*(int *)(**(longlong **)(param_1 + 10) + 8) == 0) {
    FUN_14391a070(4,"Failure in TopologyRefiner::RefineUniform() -- base level is uninitialized.",
                  param_3,param_4,0xfffffffffffffffe);
  }
  else if ((ulonglong)(*(longlong *)(param_1 + 0x12) - *(longlong *)(param_1 + 0x10)) < 8) {
    param_1[3] = param_2;
    param_1[2] = (param_2 * 4 ^ param_1[2]) & 0x3c ^ param_1[2] | 1;
    iVar1 = FUN_14391e6a0(*param_1);
    uVar6 = param_2 >> 3 & 2 | local_res8 & 0xfffffff8;
    uVar8 = 1;
    if ((param_2 & 0xf) != 0) {
      lVar7 = 0;
      do {
        uVar2 = 0;
        if ((param_2 & 0x20) == 0) {
          uVar2 = (uint)(uVar8 == (param_2 & 0xf));
        }
        uVar6 = uVar6 & 0xfffffffb | uVar2 * 4;
        uVar5 = *(undefined8 *)(lVar7 + *(longlong *)(param_1 + 10));
        lVar3 = operator_new(0x1e0);
        if (lVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_143914e00(lVar3);
        }
        if (iVar1 == 0) {
          lVar3 = operator_new(0x1f8);
          if (lVar3 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_1439217e0(lVar3,uVar5,uVar4,param_1 + 1);
          }
        }
        else {
          lVar3 = operator_new(0x210);
          if (lVar3 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_143923880(lVar3,uVar5,uVar4,param_1 + 1);
          }
        }
        FUN_143920c90(uVar5,uVar6);
        FUN_143919bf0(param_1,uVar4);
        FUN_143919cb0(param_1,uVar5);
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar8 <= (int)(param_2 & 0xf));
    }
    FUN_143919d60(param_1);
  }
  else {
    FUN_14391a070(4,
                  "Failure in TopologyRefiner::RefineUniform() -- previous refinements already applied."
                  ,param_3,param_4,0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1439199c0 _Reallocate body=214 status=ok
// SIG undefined _Reallocate(void)

void std::
     vector<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>,std::allocator<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_>_>
     ::_Reallocate(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  lVar2 = allocator<std::vector<c2t::Point,std::allocator<c2t::Point>_>_>::allocate();
  local_res8 = SUB81(param_1,0);
  _Uninitialized_move_al_unchecked1<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_*___ptr64,std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_*___ptr64,std::allocator<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_>_>
            (*param_1,param_1[1],lVar2,param_1,0,local_res8,uVar4);
  lVar1 = *param_1;
  lVar3 = (param_1[1] - lVar1) / 6 + (param_1[1] - lVar1 >> 0x3f);
  if (lVar1 != 0) {
    allocator<CefStringBase<CefStringTraitsUTF16>_>::deallocate
              (param_1,lVar1,(param_1[2] - lVar1) / 0x18);
  }
  param_1[2] = lVar2 + param_2 * 0x18;
  param_1[1] = lVar2 + ((lVar3 >> 2) - (lVar3 >> 0x3f)) * 0x18;
  *param_1 = lVar2;
  return;
}



// FUNCTION 143919aa0 _Reserve body=199 status=ok
// SIG undefined _Reserve(void)

void std::
     vector<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>,std::allocator<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_>_>
     ::_Reserve(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2 <= (ulonglong)((param_1[2] - param_1[1]) / 0x18)) {
    return;
  }
  lVar1 = (param_1[1] - *param_1) / 0x18;
  if (0xaaaaaaaaaaaaaaaU - lVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  param_2 = lVar1 + param_2;
  uVar2 = (param_1[2] - *param_1) / 0x18;
  uVar3 = 0;
  if (uVar2 <= 0xaaaaaaaaaaaaaaa - (uVar2 >> 1)) {
    uVar3 = (uVar2 >> 1) + uVar2;
  }
  if (param_2 <= uVar3) {
    param_2 = uVar3;
  }
  _Reallocate(param_1,param_2);
  return;
}



// FUNCTION 143919b70 allocate body=124 status=ok
// SIG undefined allocate(void)

ulonglong std::allocator<std::vector<c2t::Point,std::allocator<c2t::Point>_>_>::allocate
                    (undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    param_2 = param_2 * 0x18;
    if (0xfff < param_2) {
      if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      lVar1 = operator_new(param_2 + 0x27);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar2 - 8) = lVar1;
      return uVar2;
    }
    uVar2 = operator_new();
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  return uVar2;
}



// FUNCTION 143919bf0 FUN_143919bf0 body=177 status=ok
// SIG undefined FUN_143919bf0(void)

void FUN_143919bf0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  local_res8 = param_2;
  if ((&local_res8 < puVar1) && (puVar2 = *(undefined8 **)(param_1 + 0x28), puVar2 <= &local_res8))
  {
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      FUN_143915fe0(param_1 + 0x28,1);
    }
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x30) =
           *(undefined8 *)
            (*(longlong *)(param_1 + 0x28) + ((longlong)&local_res8 - (longlong)puVar2 >> 3) * 8);
    }
  }
  else {
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      FUN_143915fe0(param_1 + 0x28,1);
    }
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x30) = param_2;
    }
  }
  *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 8;
  FUN_14391a030(param_1,param_2);
  return;
}



// FUNCTION 143919cb0 FUN_143919cb0 body=162 status=ok
// SIG undefined FUN_143919cb0(void)

void FUN_143919cb0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  
  puVar2 = *(undefined8 **)(param_1 + 0x48);
  puVar1 = (ulonglong *)(param_1 + 0x40);
  local_res8 = param_2;
  if ((&local_res8 < puVar2) && (puVar3 = (undefined8 *)*puVar1, puVar3 <= &local_res8)) {
    if (puVar2 == *(undefined8 **)(param_1 + 0x50)) {
      FUN_143915fe0(puVar1,1);
    }
    if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x48) =
           *(undefined8 *)(*puVar1 + ((longlong)&local_res8 - (longlong)puVar3 >> 3) * 8);
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 8;
      return;
    }
  }
  else {
    if (puVar2 == *(undefined8 **)(param_1 + 0x50)) {
      FUN_143915fe0(puVar1,1);
    }
    if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x48) = param_2;
    }
  }
  *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 8;
  return;
}



// FUNCTION 143919d60 FUN_143919d60 body=264 status=ok
// SIG undefined FUN_143919d60(void)

void FUN_143919d60(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  std::
  vector<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>,std::allocator<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_>_>
  ::resize(param_1 + 0x58,*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3);
  *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8) = 0;
  **(undefined8 **)(param_1 + 0x58) = **(undefined8 **)(param_1 + 0x28);
  *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x10) = 0;
  iVar5 = (int)(*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 3);
  if (iVar5 != 0) {
    lVar3 = 1;
    lVar4 = (longlong)iVar5;
    *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x10) = **(undefined8 **)(param_1 + 0x40);
    if (1 < lVar4) {
      lVar2 = 0x18;
      do {
        *(undefined8 *)(lVar2 + 8 + *(longlong *)(param_1 + 0x58)) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x40) + -8 + lVar3 * 8);
        *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0x58)) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar3 * 8);
        lVar1 = lVar3 * 8;
        lVar3 = lVar3 + 1;
        *(undefined8 *)(lVar2 + 0x10 + *(longlong *)(param_1 + 0x58)) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar1);
        lVar2 = lVar2 + 0x18;
      } while (lVar3 < lVar4);
    }
    lVar3 = lVar4 * 0x18;
    *(undefined8 *)(lVar3 + 8 + *(longlong *)(param_1 + 0x58)) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)(iVar5 + -1) * 8);
    *(undefined8 *)(lVar3 + *(longlong *)(param_1 + 0x58)) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar4 * 8);
    *(undefined8 *)(lVar3 + 0x10 + *(longlong *)(param_1 + 0x58)) = 0;
  }
  return;
}



// FUNCTION 143919e70 deallocate body=109 status=ok
// SIG undefined deallocate(void)

void std::allocator<CefStringBase<CefStringTraitsUTF16>_>::deallocate
               (undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (0xaaaaaaaaaaaaaaa < param_3) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar1 = param_2;
  if (0xfff < param_3 * 0x18) {
    if ((param_2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar1 = *(ulonglong *)(param_2 - 8);
    if (param_2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (param_2 - uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < param_2 - uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(uVar1);
  return;
}



// FUNCTION 143919ef0 FUN_143919ef0 body=76 status=ok
// SIG undefined FUN_143919ef0(void)

void FUN_143919ef0(longlong param_1)

{
  undefined4 *puVar1;
  
  if ((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) & 0xfffffffffffffff8U) != 0) {
    puVar1 = (undefined4 *)**(undefined8 **)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x14) = puVar1[2];
    *(undefined4 *)(param_1 + 0x18) = puVar1[1];
    *(undefined4 *)(param_1 + 0x1c) = *puVar1;
    *(int *)(param_1 + 0x20) = (int)(*(longlong *)(puVar1 + 0xe) - *(longlong *)(puVar1 + 0xc) >> 2)
    ;
    *(undefined4 *)(param_1 + 0x24) = puVar1[5];
    return;
  }
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



// FUNCTION 143919f40 resize body=237 status=ok
// SIG undefined resize(void)

void std::
     vector<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>,std::allocator<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>_>_>
     ::resize(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  lVar4 = lVar3 - *param_1;
  lVar2 = lVar4 / 6 + (lVar4 >> 0x3f);
  uVar1 = (lVar2 >> 2) - (lVar2 >> 0x3f);
  if (param_2 < uVar1) {
    param_1[1] = lVar3 + (param_2 - uVar1) * 0x18;
  }
  else if (uVar1 < param_2) {
    _Reserve(param_1,param_2 - uVar1,lVar4,lVar3,0xfffffffffffffffe);
    lVar3 = (param_1[1] - *param_1) / 6 + (param_1[1] - *param_1 >> 0x3f);
    FUN_143914cc0(param_1[1],param_2 - ((lVar3 >> 2) - (lVar3 >> 0x3f)),param_1,
                  (ulonglong)param_1 & 0xff);
    param_1[1] = param_1[1] + (param_2 - (param_1[1] - *param_1) / 0x18) * 0x18;
  }
  return;
}



// FUNCTION 14391a030 FUN_14391a030 body=62 status=ok
// SIG undefined FUN_14391a030(void)

void FUN_14391a030(longlong param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int local_res8 [8];
  
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2[2];
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2[1];
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *param_2;
  *(int *)(param_1 + 0x20) =
       *(int *)(param_1 + 0x20) +
       (int)(*(longlong *)(param_2 + 0xe) - *(longlong *)(param_2 + 0xc) >> 2);
  piVar1 = (int *)(param_1 + 0x24);
  local_res8[0] = param_2[5];
  piVar2 = local_res8;
  if (param_2[5] <= *piVar1) {
    piVar2 = piVar1;
  }
  *piVar1 = *piVar2;
  return;
}



// FUNCTION 14391a070 FUN_14391a070 body=187 status=ok
// SIG undefined FUN_14391a070(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14391a070(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_2858 [32];
  undefined8 local_2838;
  undefined8 *local_2830;
  undefined1 local_2828 [10240];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14391a08c;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2858;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (ulonglong *)__local_stdio_printf_options();
  local_2838 = 0;
  local_2830 = &local_res18;
  __stdio_common_vsprintf(*puVar1 | 2,local_2828,0x2800,param_2);
  if (DAT_146b95d18 == (code *)0x0) {
    printf("%s: %s\n",(&PTR_s_No_Error_14682ce60)[param_1],local_2828);
  }
  else {
    (*DAT_146b95d18)(param_1,local_2828);
  }
  return;
}



// FUNCTION 14391a130 FUN_14391a130 body=188 status=ok
// SIG undefined FUN_14391a130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14391a130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  FILE *_File;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_2858 [32];
  undefined8 local_2838;
  undefined8 *local_2830;
  undefined1 local_2828 [10240];
  ulonglong local_28;
  undefined8 uStack_18;
  
  uStack_18 = 0x14391a150;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2858;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (ulonglong *)__local_stdio_printf_options();
  local_2838 = 0;
  local_2830 = &local_res10;
  __stdio_common_vsprintf(*puVar1 | 2,local_2828,0x2800,param_1);
  if (DAT_146b95d20 == (code *)0x0) {
    _File = (FILE *)__acrt_iob_func(1);
    fwprintf(_File,(wchar_t *)"Warning: %s\n",local_2828);
  }
  else {
    (*DAT_146b95d20)(local_2828);
  }
  return;
}



// FUNCTION 14391a1f0 FUN_14391a1f0 body=1446 status=ok
// SIG undefined FUN_14391a1f0(void)

undefined8 FUN_14391a1f0(undefined4 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  bool bVar9;
  byte bVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  ushort uVar18;
  longlong lVar19;
  int *piVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  int *piVar24;
  int iVar25;
  uint uVar26;
  undefined4 uVar27;
  longlong local_88;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  longlong local_68;
  int *local_60;
  longlong local_58;
  
  local_80 = param_1[1];
  lVar4 = **(longlong **)(param_1 + 10);
  uVar21 = local_80 & 3;
  local_70 = uVar21;
  if (uVar21 == 0) {
    iVar14 = FUN_14391e660();
    bVar9 = true;
    if (0 < iVar14) goto LAB_14391a234;
  }
  bVar9 = false;
LAB_14391a234:
  iVar14 = 0;
  if (0 < *(int *)(lVar4 + 4)) {
    lVar19 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + 0xf0);
      lVar6 = *(longlong *)(lVar4 + 0xd8);
      bVar2 = *(byte *)(lVar19 + lVar5);
      bVar17 = 0;
      if (*(int *)(*(longlong *)(lVar4 + 0x90) + lVar19 * 8) < 2) {
        bVar17 = 2;
      }
      *(byte *)(lVar19 + lVar5) = bVar17 | bVar2 & 0xfd;
      if ((bVar17 != 0) || ((bVar2 & 1) != 0)) {
        *(undefined4 *)(lVar6 + lVar19 * 4) = 0x41200000;
      }
      bVar7 = 10.0 <= *(float *)(lVar6 + lVar19 * 4);
      bVar2 = *(byte *)(lVar19 + lVar5);
      bVar17 = bVar7 << 2;
      *(byte *)(lVar19 + lVar5) = bVar17 | bVar2 & 0xfb;
      if ((*(float *)(lVar6 + lVar19 * 4) <= 0.0) || (bVar7)) {
        bVar10 = 0;
      }
      else {
        bVar10 = 8;
      }
      iVar14 = iVar14 + 1;
      *(byte *)(lVar19 + lVar5) = bVar17 | bVar2 & 0xf3 | bVar10;
      lVar19 = lVar19 + 1;
    } while (iVar14 < *(int *)(lVar4 + 4));
  }
  uVar15 = FUN_14391e680(*param_1);
  local_78 = 0;
  uVar16 = (int)uVar15 / 2;
  if (0 < *(int *)(lVar4 + 8)) {
    lVar19 = 0;
    local_58 = 0;
    local_88 = 0;
    local_74 = uVar16;
    do {
      iVar25 = 0;
      uVar26 = 0;
      local_68 = *(longlong *)(lVar4 + 0x198);
      iVar23 = 0;
      lVar5 = *(longlong *)(lVar4 + 0x1b0);
      local_7c = *(uint *)(*(longlong *)(lVar4 + 0x150) + local_58);
      uVar22 = (ulonglong)local_7c;
      local_60 = (int *)(*(longlong *)(lVar4 + 0x168) +
                        (longlong)*(int *)(*(longlong *)(lVar4 + 0x150) + 4 + local_58) * 4);
      piVar24 = (int *)(*(longlong *)(lVar4 + 0x120) +
                       (longlong)*(int *)(*(longlong *)(lVar4 + 0x108) + 4 + local_58) * 4);
      uVar16 = *(uint *)(*(longlong *)(lVar4 + 0x108) + local_58);
      iVar14 = 0;
      if (0 < (int)local_7c) {
        piVar20 = local_60;
        do {
          iVar3 = *piVar20;
          piVar20 = piVar20 + 1;
          bVar2 = *(byte *)((longlong)iVar3 + *(longlong *)(lVar4 + 0xf0));
          iVar25 = iVar25 + (bVar2 >> 1 & 1);
          uVar26 = uVar26 + (bVar2 >> 2 & 1);
          iVar14 = iVar14 + (bVar2 & 1);
          iVar23 = iVar23 + (bVar2 >> 3 & 1);
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      if ((uVar16 == 1) && (local_7c == 2)) {
        bVar7 = true;
        if (uVar21 != 2) goto LAB_14391a439;
LAB_14391a421:
        *(undefined4 *)(local_88 + local_68) = 0x41200000;
      }
      else {
        bVar7 = false;
LAB_14391a439:
        if (((*(byte *)(lVar19 + lVar5) & 1) != 0) &&
           (((iVar14 != 2 || (iVar25 != 0)) || ((int)uVar16 <= (int)local_7c)))) goto LAB_14391a421;
      }
      uVar13 = *(ushort *)(lVar19 + lVar5);
      uVar18 = (ushort)(10.0 <= *(float *)(local_88 + local_68)) << 4;
      *(ushort *)(lVar19 + lVar5) = uVar18 | uVar13 & 0xffef;
      if ((*(float *)(local_88 + local_68) <= 0.0) || (10.0 <= *(float *)(local_88 + local_68))) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0x20;
      }
      uVar12 = 0;
      if (0 < iVar23) {
        uVar12 = 0x40;
      }
      *(ushort *)(lVar19 + lVar5) = uVar18 | uVar13 & 0xff8f | uVar11 | uVar12;
      uVar13 = FUN_143913fb0(&local_80,*(undefined4 *)(local_88 + local_68),iVar23 + uVar26);
      *(ushort *)(lVar19 + lVar5) = *(ushort *)(lVar19 + lVar5) & 0xf87b;
      uVar18 = 0;
      if (0 < iVar25) {
        uVar18 = 4;
      }
      *(ushort *)(lVar19 + lVar5) = *(ushort *)(lVar19 + lVar5) | (uVar13 & 0xf) << 7 | uVar18;
      uVar13 = *(ushort *)(lVar19 + lVar5);
      if ((bVar7) && ((uVar13 & 0x10) != 0)) {
        uVar18 = 8;
      }
      else {
        uVar18 = 0;
      }
      *(ushort *)(lVar19 + lVar5) = uVar13 & 0xfff7 | uVar18;
      if (uVar18 == 0) {
        uVar8 = uVar15;
        if ((uVar13 & 4) != 0) {
          uVar8 = local_74;
        }
        *(ushort *)(lVar19 + lVar5) = (ushort)(uVar16 != uVar8) * 2 | uVar13 & 0xfff5;
      }
      else {
        *(ushort *)(lVar19 + lVar5) = uVar13 & 0xfff5 | uVar18;
      }
      uVar13 = *(ushort *)(lVar19 + lVar5);
      uVar18 = 0;
      if (0 < (int)uVar26) {
        uVar18 = 0x1000;
      }
      *(ushort *)(lVar19 + lVar5) =
           -(ushort)(uVar18 != 0 || (uVar13 & 0x10) != 0) & 0x4000 | uVar18 | uVar13 & 0x87ff;
      if (uVar18 != 0) {
        if ((uVar13 & 0x10) == 0) {
          uVar27 = 0;
        }
        else {
          uVar27 = *(undefined4 *)(local_88 + local_68);
        }
        iVar14 = FUN_143913fb0(&local_80,uVar27,uVar26);
        if (iVar14 == 4) {
          *(ushort *)(lVar19 + lVar5) = *(ushort *)(lVar19 + lVar5) | 0x2000;
          uVar13 = *(ushort *)(lVar19 + lVar5);
          if ((uVar13 & 3) == 0) {
            if ((uVar13 & 4) == 0) {
              if (uVar15 == 4) {
                *(ushort *)(lVar19 + lVar5) =
                     (ushort)((*(byte *)((longlong)local_60[2] + *(longlong *)(lVar4 + 0xf0)) ^
                              *(byte *)((longlong)*local_60 + *(longlong *)(lVar4 + 0xf0))) >> 2 & 1
                             ) << 0xe | uVar13 & 0xbfff;
              }
              else if (uVar15 == 6) {
                lVar6 = *(longlong *)(lVar4 + 0xf0);
                if ((((*(byte *)(local_60[3] + lVar6) ^ *(byte *)(*local_60 + lVar6)) & 4) == 0) &&
                   (((*(byte *)(local_60[4] + lVar6) ^ *(byte *)(local_60[1] + lVar6)) & 4) == 0)) {
                  uVar18 = 0;
                }
                else {
                  uVar18 = 0x4000;
                }
                *(ushort *)(lVar19 + lVar5) = uVar13 & 0xbfff | uVar18;
              }
            }
            else {
              *(ushort *)(lVar19 + lVar5) = uVar13 & 0xbfff;
            }
          }
        }
        else if (((iVar14 == 8) && (uVar26 == local_7c)) &&
                ((2 < (int)local_7c || ((*(byte *)(lVar19 + lVar5) & 0x10) != 0)))) {
          *(ushort *)(lVar19 + lVar5) = *(ushort *)(lVar19 + lVar5) & 0xbfff;
        }
      }
      if (((bVar9) && ((*(byte *)(lVar19 + lVar5) & 4) != 0)) && (0 < (int)uVar16)) {
        uVar22 = (ulonglong)uVar16;
        do {
          iVar14 = *piVar24;
          piVar24 = piVar24 + 1;
          pbVar1 = (byte *)((longlong)iVar14 + *(longlong *)(lVar4 + 0x60));
          *pbVar1 = *pbVar1 | 1;
          param_1[2] = param_1[2] | 2;
          uVar22 = uVar22 - 1;
          uVar21 = local_70;
        } while (uVar22 != 0);
      }
      lVar19 = lVar19 + 2;
      uVar16 = local_78 + 1;
      local_88 = local_88 + 4;
      local_58 = local_58 + 8;
      local_78 = uVar16;
    } while ((int)uVar16 < *(int *)(lVar4 + 8));
  }
  return CONCAT71((uint7)(uint3)(uVar16 >> 8),1);
}



// FUNCTION 14391a7a0 FUN_14391a7a0 body=257 status=ok
// SIG undefined FUN_14391a7a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14391a7a0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  undefined1 auStack_468 [32];
  undefined4 local_448;
  char local_438 [1024];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_468;
  lVar2 = **(longlong **)(param_1 + 0x28);
  iVar1 = *(int *)(lVar2 + 4);
  if (iVar1 == 0) {
    cVar3 = FUN_1439164d0(lVar2);
    if (cVar3 == '\0') {
      local_448 = 0xffff;
      _snprintf(local_438,0x400,
                "Failure in TopologyRefinerFactory<>::Create() -- vertex with valence %d > %d max.",
                (ulonglong)*(uint *)(lVar2 + 0x14));
      FUN_14391a070(4,local_438);
      return 0;
    }
  }
  else if (*(int *)(lVar2 + 0x14) == 0) {
    FUN_14391a070(4,"Failure in TopologyRefinerFactory<>::Create() -- maximum valence not assigned."
                 );
    return 0;
  }
  if ((param_2 != '\0') && (cVar3 = FUN_1439189f0(lVar2,param_3,param_4), cVar3 == '\0')) {
    pcVar4 = 
    "Failure in TopologyRefinerFactory<>::Create() -- invalid topology detected from partial specification."
    ;
    if (iVar1 != 0) {
      pcVar4 = 
      "Failure in TopologyRefinerFactory<>::Create() -- invalid topology detected as fully specified."
      ;
    }
    FUN_14391a070(4,pcVar4);
    return 0;
  }
  FUN_143919ef0(param_1);
  return 1;
}



// FUNCTION 14391a8b0 FUN_14391a8b0 body=510 status=ok
// SIG undefined FUN_14391a8b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14391a8b0(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_448 [32];
  undefined4 local_428;
  char local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_448;
  piVar5 = (int *)**(undefined8 **)(param_1 + 10);
  iVar3 = piVar5[2];
  iVar4 = *piVar5;
  if (iVar3 == 0) {
    FUN_14391a070(4,"Failure in TopologyRefinerFactory<>::Create() -- mesh contains no vertices.");
    uVar6 = 0;
  }
  else if (iVar4 == 0) {
    FUN_14391a070(4,
                  "Failure in TopologyRefinerFactory<>::Create() -- meshes without faces not yet supported."
                 );
    uVar6 = 0;
  }
  else if (piVar5[5] < 0x10000) {
    iVar7 = *(int *)(*(longlong *)(piVar5 + 6) + (longlong)(iVar4 * 2 + -2) * 4) +
            *(int *)(*(longlong *)(piVar5 + 6) + (longlong)(iVar4 * 2 + -1) * 4);
    if (iVar7 == 0) {
      FUN_14391a070(4,
                    "Failure in TopologyRefinerFactory<>::Create() -- mesh contains no face-vertices."
                   );
      uVar6 = 0;
    }
    else if ((*param_1 == 2) && (iVar7 != iVar4 * 3)) {
      FUN_14391a070(4,
                    "Failure in TopologyRefinerFactory<>::Create() -- non-triangular faces not supported by Loop scheme."
                   );
      uVar6 = 0;
    }
    else {
      FUN_143918510(piVar5 + 0xc,(longlong)iVar7);
      iVar4 = piVar5[1];
      if (0 < iVar4) {
        FUN_143918510(piVar5 + 0x12,
                      (longlong)
                      (int)(*(longlong *)(piVar5 + 0xe) - *(longlong *)(piVar5 + 0xc) >> 2));
        FUN_143918510(piVar5 + 0x1e,(longlong)(piVar5[1] * 2));
        iVar4 = iVar4 * 2;
        FUN_14391abb0(piVar5,*(int *)(*(longlong *)(piVar5 + 0x24) + (longlong)(iVar4 + -2) * 4) +
                             *(int *)(*(longlong *)(piVar5 + 0x24) + (longlong)(iVar4 + -1) * 4));
        iVar3 = iVar3 * 2;
        lVar1 = (longlong)(iVar3 + -2) * 4;
        lVar2 = (longlong)(iVar3 + -1) * 4;
        FUN_14391ac30(piVar5,*(int *)(lVar2 + *(longlong *)(piVar5 + 0x42)) +
                             *(int *)(lVar1 + *(longlong *)(piVar5 + 0x42)));
        FUN_14391abf0(piVar5,*(int *)(lVar2 + *(longlong *)(piVar5 + 0x54)) +
                             *(int *)(lVar1 + *(longlong *)(piVar5 + 0x54)));
      }
      uVar6 = 1;
    }
  }
  else {
    local_428 = 0xffff;
    _snprintf(local_418,0x400,
              "Failure in TopologyRefinerFactory<>::Create() -- face with %d vertices > %d max.",
              (ulonglong)(uint)piVar5[5]);
    FUN_14391a070(4,local_418);
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 14391aab0 FUN_14391aab0 body=241 status=ok
// SIG undefined FUN_14391aab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14391aab0(undefined4 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_438 [32];
  char local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_438;
  uVar1 = **(undefined8 **)(param_1 + 10);
  iVar2 = FUN_14391e680(*param_1);
  uVar6 = 0;
  uVar4 = (ulonglong)(uint)(iVar2 / 2);
  if (0 < (int)(*(longlong *)(**(longlong **)(param_1 + 10) + 0x1d0) -
                *(longlong *)(**(longlong **)(param_1 + 10) + 0x1c8) >> 3)) {
    do {
      iVar3 = FUN_143917aa0(uVar1,uVar6);
      if (iVar3 == 0) {
        _snprintf(local_418,0x400,
                  "Failure in TopologyRefinerFactory<>::Create() -- face-varying channel %d has no values."
                  ,uVar6);
        uVar4 = FUN_14391a070(4,local_418);
        return uVar4 & 0xffffffffffffff00;
      }
      FUN_1439164b0(uVar1,uVar6,iVar2 / 2);
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar4 = *(longlong *)(**(longlong **)(param_1 + 10) + 0x1d0) -
              *(longlong *)(**(longlong **)(param_1 + 10) + 0x1c8) >> 3;
    } while ((int)uVar5 < (int)uVar4);
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// FUNCTION 14391abb0 FUN_14391abb0 body=56 status=ok
// SIG undefined FUN_14391abb0(void)

void FUN_14391abb0(longlong param_1,int param_2)

{
  FUN_143918510(param_1 + 0xa8,(longlong)param_2);
  FUN_143918420(param_1 + 0xc0,(longlong)param_2);
  return;
}



// FUNCTION 14391abf0 FUN_14391abf0 body=56 status=ok
// SIG undefined FUN_14391abf0(void)

void FUN_14391abf0(longlong param_1,int param_2)

{
  FUN_143918510(param_1 + 0x168,(longlong)param_2);
  FUN_143918420(param_1 + 0x180,(longlong)param_2);
  return;
}



// FUNCTION 14391ac30 FUN_14391ac30 body=56 status=ok
// SIG undefined FUN_14391ac30(void)

void FUN_14391ac30(longlong param_1,int param_2)

{
  FUN_143918510(param_1 + 0x120,(longlong)param_2);
  FUN_143918420(param_1 + 0x138,(longlong)param_2);
  return;
}



// FUNCTION 14391ac70 FUN_14391ac70 body=29 status=ok
// SIG undefined FUN_14391ac70(void)

void * FUN_14391ac70(void *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x68);
  return param_1;
}



// FUNCTION 14391ac90 FUN_14391ac90 body=468 status=ok
// SIG undefined FUN_14391ac90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14391ac90(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_468 [32];
  undefined4 local_448;
  undefined4 local_440;
  char local_438 [1024];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_468;
  uVar4 = 0;
  if ((((0 < *(int *)(param_2 + 0x18)) &&
       (puVar5 = *(undefined4 **)(param_2 + 0x20), puVar5 != (undefined4 *)0x0)) &&
      (*(longlong *)(param_2 + 0x28) != 0)) &&
     (uVar3 = uVar4, uVar6 = uVar4, 0 < *(int *)(param_2 + 0x18))) {
    do {
      iVar2 = FUN_143917940(**(undefined8 **)(param_1 + 0x28),*puVar5,puVar5[1]);
      if (iVar2 == -1) {
        local_440 = puVar5[1];
        local_448 = *puVar5;
        _snprintf(local_438,0x400,"Edge %d specified to be sharp does not exist (%d, %d)",uVar3);
        FUN_14391b0a0(0xe,local_438,param_2);
      }
      else {
        *(undefined4 *)(*(longlong *)(**(longlong **)(param_1 + 0x28) + 0xd8) + (longlong)iVar2 * 4)
             = *(undefined4 *)(uVar6 + *(longlong *)(param_2 + 0x28));
      }
      uVar7 = (int)uVar3 + 1;
      puVar5 = puVar5 + 2;
      uVar3 = (ulonglong)uVar7;
      uVar6 = uVar6 + 4;
    } while ((int)uVar7 < *(int *)(param_2 + 0x18));
  }
  if (((0 < *(int *)(param_2 + 0x30)) && (*(longlong *)(param_2 + 0x38) != 0)) &&
     ((*(longlong *)(param_2 + 0x40) != 0 &&
      (uVar3 = uVar4, uVar6 = uVar4, 0 < *(int *)(param_2 + 0x30))))) {
    do {
      iVar2 = *(int *)(uVar3 + *(longlong *)(param_2 + 0x38));
      if ((iVar2 < 0) || (*(int *)(**(longlong **)(param_1 + 0x28) + 8) <= iVar2)) {
        _snprintf(local_438,0x400,"Vertex %d specified to be sharp does not exist");
        FUN_14391b0a0(0xf,local_438,param_2);
      }
      else {
        *(undefined4 *)
         (*(longlong *)(**(longlong **)(param_1 + 0x28) + 0x198) + (longlong)iVar2 * 4) =
             *(undefined4 *)(uVar3 + *(longlong *)(param_2 + 0x40));
      }
      uVar7 = (int)uVar6 + 1;
      uVar3 = uVar3 + 4;
      uVar6 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(param_2 + 0x30));
  }
  uVar3 = (ulonglong)*(uint *)(param_2 + 0x48);
  uVar6 = uVar4;
  if (0 < (int)*(uint *)(param_2 + 0x48)) {
    do {
      uVar7 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar7;
      uVar3 = *(ulonglong *)(**(longlong **)(param_1 + 0x28) + 0x60);
      pbVar1 = (byte *)((longlong)*(int *)(uVar6 + *(longlong *)(param_2 + 0x50)) + uVar3);
      *pbVar1 = *pbVar1 | 1;
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
      uVar6 = uVar6 + 4;
    } while ((int)uVar7 < *(int *)(param_2 + 0x48));
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 14391ae70 FUN_14391ae70 body=182 status=ok
// SIG undefined FUN_14391ae70(void)

undefined8 FUN_14391ae70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  
  iVar4 = 0;
  if (0 < *(int *)(param_2 + 4)) {
    lVar3 = 0;
    lVar5 = 0;
    do {
      lVar6 = *(longlong *)(**(longlong **)(param_1 + 0x28) + 0x18);
      uVar2 = *(uint *)(lVar6 + lVar5);
      uVar7 = (ulonglong)uVar2;
      puVar8 = (undefined4 *)
               (*(longlong *)(**(longlong **)(param_1 + 0x28) + 0x30) +
               (longlong)*(int *)(lVar6 + 4 + lVar5) * 4);
      if (*(char *)(param_2 + 0x58) == '\0') {
        if (0 < (int)uVar2) {
          do {
            lVar6 = lVar3 * 4;
            lVar3 = lVar3 + 1;
            *puVar8 = *(undefined4 *)(*(longlong *)(param_2 + 0x10) + lVar6);
            uVar7 = uVar7 - 1;
            puVar8 = puVar8 + 1;
          } while (uVar7 != 0);
        }
      }
      else {
        lVar6 = lVar3 * 4;
        lVar3 = lVar3 + 1;
        *puVar8 = *(undefined4 *)(*(longlong *)(param_2 + 0x10) + lVar6);
        lVar6 = (longlong)(int)(uVar2 - 1);
        if (0 < (int)(uVar2 - 1)) {
          do {
            lVar1 = lVar3 * 4;
            lVar3 = lVar3 + 1;
            puVar8[lVar6] = *(undefined4 *)(*(longlong *)(param_2 + 0x10) + lVar1);
            lVar6 = lVar6 + -1;
          } while (0 < lVar6);
        }
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)(param_2 + 4));
  }
  return 1;
}



// FUNCTION 14391af30 FUN_14391af30 body=362 status=ok
// SIG undefined FUN_14391af30(void)

undefined8 FUN_14391af30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined4 *local_38;
  int local_30;
  
  if (*(int *)(param_2 + 0x5c) < 1) {
    return 1;
  }
  iVar8 = 0;
  if (*(int *)(param_2 + 0x5c) < 1) {
    return 1;
  }
  lVar7 = 0;
  do {
    lVar2 = *(longlong *)(lVar7 + 8 + *(longlong *)(param_2 + 0x60));
    FUN_143917200(**(undefined8 **)(param_1 + 0x28),
                  *(undefined4 *)(lVar7 + *(longlong *)(param_2 + 0x60)),param_1 + 4);
    iVar5 = 0;
    lVar4 = 0;
    if (0 < *(int *)(param_2 + 4)) {
      do {
        FUN_143917a10(**(undefined8 **)(param_1 + 0x28),&local_38,iVar5,iVar8);
        if (*(char *)(param_2 + 0x58) == '\0') {
          iVar6 = 0;
          if (0 < local_30) {
            lVar3 = 0;
            do {
              lVar1 = lVar4 * 4;
              lVar4 = lVar4 + 1;
              iVar6 = iVar6 + 1;
              *(undefined4 *)(lVar3 + (longlong)local_38) = *(undefined4 *)(lVar2 + lVar1);
              lVar3 = lVar3 + 4;
            } while (iVar6 < local_30);
          }
        }
        else {
          lVar3 = lVar4 * 4;
          lVar4 = lVar4 + 1;
          *local_38 = *(undefined4 *)(lVar2 + lVar3);
          lVar3 = (longlong)(local_30 + -1);
          if (0 < local_30 + -1) {
            do {
              lVar1 = lVar4 * 4;
              lVar4 = lVar4 + 1;
              local_38[lVar3] = *(undefined4 *)(lVar2 + lVar1);
              lVar3 = lVar3 + -1;
            } while (0 < lVar3);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_2 + 4));
    }
    iVar8 = iVar8 + 1;
    lVar7 = lVar7 + 0x10;
  } while (iVar8 < *(int *)(param_2 + 0x5c));
  return 1;
}



// FUNCTION 14391b0a0 FUN_14391b0a0 body=8 status=ok
// SIG undefined FUN_14391b0a0(void)

void FUN_14391b0a0(undefined8 param_1,undefined8 param_2)

{
  FUN_14391a130(param_2);
  return;
}



// FUNCTION 14391b0b0 FUN_14391b0b0 body=213 status=ok
// SIG undefined FUN_14391b0b0(void)

undefined8 FUN_14391b0b0(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  FUN_143918970(**(undefined8 **)(param_1 + 0x28),*param_2);
  iVar7 = param_2[1];
  piVar2 = (int *)**(undefined8 **)(param_1 + 0x28);
  *piVar2 = iVar7;
  FUN_143918510(piVar2 + 6,(longlong)(iVar7 * 2));
  FUN_143918710(piVar2 + 0x18);
  _guard_xfg_dispatch_icall_nop(*(void **)(piVar2 + 0x18),0,(longlong)*piVar2);
  iVar7 = 0;
  if (0 < (int)param_2[1]) {
    lVar6 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(param_2 + 2) + lVar6 * 4);
      lVar3 = **(longlong **)(param_1 + 0x28);
      lVar4 = *(longlong *)(lVar3 + 0x18);
      *(int *)(lVar4 + lVar6 * 8) = iVar1;
      lVar4 = lVar4 + lVar6 * 8;
      if (lVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(lVar4 + -8) + *(int *)(lVar4 + -4);
      }
      *(int *)(lVar4 + 4) = iVar5;
      iVar5 = *(int *)(lVar3 + 0x14);
      if (*(int *)(lVar3 + 0x14) < iVar1) {
        iVar5 = iVar1;
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 1;
      *(int *)(lVar3 + 0x14) = iVar5;
    } while (iVar7 < (int)param_2[1]);
  }
  return 1;
}



// FUNCTION 14391b190 FUN_14391b190 body=45 status=ok
// SIG undefined FUN_14391b190(void)

void FUN_14391b190(undefined2 *param_1,longlong param_2,undefined2 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 14391b1c0 FUN_14391b1c0 body=43 status=ok
// SIG undefined FUN_14391b1c0(void)

void FUN_14391b1c0(undefined1 *param_1,longlong param_2,undefined1 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined1 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 14391b1f0 FUN_14391b1f0 body=165 status=ok
// SIG undefined FUN_14391b1f0(void)

undefined8 * FUN_14391b1f0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xfffffe14 | 0x14;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 14391b2a0 FUN_14391b2a0 body=38 status=ok
// SIG undefined FUN_14391b2a0(void)

void FUN_14391b2a0(longlong *param_1)

{
  FMemory::operator_delete(param_1[6]);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x10;
  *param_1 = (longlong)(param_1 + 2);
  return;
}



// FUNCTION 14391b2d0 ~StackBuffer<int,16> body=38 status=ok
// SIG undefined ~StackBuffer<int,16>(void)

void OpenSubdiv::v3_2_0::Vtr::internal::StackBuffer<int,16>::~StackBuffer<int,16>(longlong *param_1)

{
  FMemory::operator_delete(param_1[10]);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x10;
  *param_1 = (longlong)(param_1 + 2);
  return;
}



// FUNCTION 14391b300 FUN_14391b300 body=41 status=ok
// SIG undefined FUN_14391b300(void)

void FUN_14391b300(longlong *param_1)

{
  FMemory::operator_delete(param_1[0x16]);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x10;
  *param_1 = (longlong)(param_1 + 2);
  return;
}



// FUNCTION 14391b330 FUN_14391b330 body=318 status=ok
// SIG undefined FUN_14391b330(void)

void FUN_14391b330(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + 0xc0);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    std::allocator<sTokenChange>::deallocate
              (plVar1,lVar2,*(longlong *)(param_1 + 0xd0) - lVar2 >> 2);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  std::vector<unsigned_char,std::allocator<unsigned_char>_>::_Tidy(param_1 + 0xa8);
  plVar1 = (longlong *)(param_1 + 0x90);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    std::allocator<sTokenChange>::deallocate
              (plVar1,lVar2,*(longlong *)(param_1 + 0xa0) - lVar2 >> 2);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (lVar2 != 0) {
    std::allocator<wchar_t>::deallocate
              (param_1 + 0x78,lVar2,*(longlong *)(param_1 + 0x88) - lVar2 >> 1);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (lVar2 != 0) {
    std::allocator<sTokenChange>::deallocate
              (param_1 + 0x60,lVar2,*(longlong *)(param_1 + 0x70) - lVar2 >> 2);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 != 0) {
    std::allocator<wchar_t>::deallocate
              (param_1 + 0x48,lVar2,*(longlong *)(param_1 + 0x58) - lVar2 >> 1);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  std::vector<unsigned_char,std::allocator<unsigned_char>_>::_Tidy(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    std::allocator<sTokenChange>::deallocate
              (param_1 + 0x18,lVar2,*(longlong *)(param_1 + 0x28) - lVar2 >> 2);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14391b470 FUN_14391b470 body=172 status=ok
// SIG undefined FUN_14391b470(void)

void FUN_14391b470(longlong *param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 local_res8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    lVar1 = FUN_1439160b0();
    *param_1 = lVar1;
    param_1[1] = lVar1;
    lVar1 = *param_1;
    param_1[2] = lVar1 + param_2 * 2;
    local_res8 = SUB81(param_1,0);
    FUN_14391b190(lVar1,param_2,param_3,param_1,local_res8);
    param_1[1] = lVar1 + param_2 * 2;
  }
  return;
}



// FUNCTION 14391b520 FUN_14391b520 body=3408 status=ok
// SIG undefined FUN_14391b520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14391b520(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  short *psVar8;
  bool bVar9;
  short sVar10;
  int iVar11;
  undefined2 *puVar12;
  int *piVar13;
  ulonglong uVar14;
  ushort *puVar15;
  ushort *puVar16;
  longlong lVar17;
  undefined2 *puVar18;
  int *piVar19;
  longlong lVar20;
  byte bVar21;
  uint uVar22;
  byte *pbVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  undefined4 *puVar27;
  byte bVar28;
  byte bVar29;
  int *piVar30;
  int iVar31;
  bool bVar32;
  bool bVar33;
  undefined1 auStack_2c8 [32];
  byte local_2a8;
  undefined2 local_2a6;
  char local_2a4;
  char local_2a3;
  int local_2a0;
  uint local_29c;
  int local_298;
  undefined2 *local_290;
  uint local_288;
  ushort *local_280;
  longlong local_278;
  uint local_270;
  uint local_26c;
  int local_268;
  uint local_264;
  int *local_260;
  ushort *local_258;
  ushort *local_250;
  undefined8 uStack_248;
  longlong local_240;
  ulonglong local_238;
  int *local_230;
  int *local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  int *local_200;
  undefined8 local_1f8;
  undefined2 *local_1f0;
  uint local_1e8;
  uint local_1e4;
  undefined2 local_1e0 [16];
  undefined2 *local_1c0;
  int *local_1b8;
  uint local_1b0;
  uint local_1ac;
  int local_1a8 [16];
  int *local_168;
  int *local_158;
  uint local_150;
  uint local_14c;
  int local_148 [16];
  int *local_108;
  short *local_f8;
  uint local_f0;
  uint local_ec;
  short local_e8 [80];
  short *local_48;
  ulonglong local_38;
  
  local_1f8 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_29c = *(uint *)(param_1 + 1) >> 2 & 7;
  *(bool *)((longlong)param_1 + 0xc) = local_29c == 5;
  bVar32 = local_29c - 4 < 2;
  *(bool *)((longlong)param_1 + 0xd) = bVar32;
  *(bool *)((longlong)param_1 + 0xe) = local_29c - 2 < 2;
  if (((*(uint *)(param_1 + 1) & 3) == 2) || (local_2a4 = '\x01', local_29c == 0)) {
    local_2a4 = '\0';
  }
  if ((local_29c == 3) || (local_2a3 = '\0', bVar32)) {
    local_2a3 = '\x01';
  }
  local_2a6 = 0;
  local_250 = (ushort *)0x0;
  uStack_248 = 0;
  local_240 = 0;
  local_264 = param_2;
  FUN_14391b470(&local_250,(longlong)*(int *)(*param_1 + 8),&local_2a6);
  local_2a6 = 0;
  FUN_14391cc10(param_1 + 0xf,
                (longlong)
                (int)(*(longlong *)(*param_1 + 0x128) - *(longlong *)(*param_1 + 0x120) >> 2),
                &local_2a6);
  uVar22 = *(uint *)(*param_1 + 0x14);
  uVar26 = (ulonglong)uVar22;
  local_158 = local_148;
  local_14c = 0x10;
  local_108 = (int *)0x0;
  local_150 = uVar22;
  if (0x10 < uVar22) {
    local_158 = (int *)operator_new(uVar26 << 2);
    local_14c = uVar22;
    local_108 = local_158;
  }
  local_1b8 = local_1a8;
  local_1ac = 0x10;
  local_168 = (int *)0x0;
  local_1b0 = uVar22;
  if (0x10 < uVar22) {
    local_1b8 = (int *)operator_new(uVar26 << 2);
    local_1ac = uVar22;
    local_168 = local_1b8;
  }
  local_290 = local_1e0;
  local_1e4 = 0x10;
  local_1c0 = (undefined2 *)0x0;
  local_1f0 = local_290;
  local_1e8 = uVar22;
  if (0x10 < uVar22) {
    local_1f0 = (undefined2 *)operator_new(uVar26 * 2);
    local_1e4 = uVar22;
    local_1c0 = local_1f0;
  }
  local_f8 = local_e8;
  local_ec = 0x10;
  local_48 = (short *)0x0;
  local_f0 = uVar22;
  if (0x10 < uVar22) {
    local_290 = local_1f0;
    local_f8 = (short *)operator_new(uVar26 * 10);
    local_ec = uVar22;
    local_48 = local_f8;
  }
  piVar19 = local_1b8;
  puVar15 = local_250;
  local_230 = local_1b8;
  local_298 = 0;
  local_2a0 = 0;
  if (0 < *(int *)(*param_1 + 8)) {
    local_278 = 0;
    local_218 = 0;
    local_220 = -(longlong)local_250;
    local_280 = local_250;
    do {
      piVar6 = local_158;
      lVar17 = *param_1;
      local_288 = *(uint *)(local_278 + *(longlong *)(lVar17 + 0x108));
      piVar13 = (int *)(*(longlong *)(lVar17 + 0x120) +
                       (longlong)*(int *)(local_278 + 4 + *(longlong *)(lVar17 + 0x108)) * 4);
      puVar16 = (ushort *)
                (*(longlong *)(lVar17 + 0x138) +
                (longlong)*(int *)(local_278 + 4 + *(longlong *)(lVar17 + 0x108)) * 2);
      local_200 = local_158;
      if (0 < (int)local_288) {
        uVar26 = (ulonglong)local_288;
        piVar30 = local_158;
        do {
          *piVar30 = *(int *)(param_1[3] +
                             (longlong)
                             (int)((uint)*puVar16 +
                                  *(int *)(*(longlong *)(*param_1 + 0x18) +
                                          (longlong)(*piVar13 * 2 + 1) * 4)) * 4);
          puVar16 = puVar16 + 1;
          piVar13 = piVar13 + 1;
          piVar30 = piVar30 + 1;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
      lVar17 = *param_1;
      local_270 = *(uint *)(local_278 + *(longlong *)(lVar17 + 0x150));
      local_228 = (int *)(*(longlong *)(lVar17 + 0x168) +
                         (longlong)*(int *)(local_278 + 4 + *(longlong *)(lVar17 + 0x150)) * 4);
      local_258 = (ushort *)
                  (*(longlong *)(lVar17 + 0x180) +
                  (longlong)*(int *)(local_278 + 4 + *(longlong *)(lVar17 + 0x150)) * 2);
      local_2a8 = ~*(byte *)((longlong)local_280 + *(longlong *)(lVar17 + 0x1b0) + local_220) & 1;
      bVar28 = *(byte *)((longlong)local_280 + *(longlong *)(lVar17 + 0x1b0) + local_220) >> 2;
      bVar29 = bVar28 & 1;
      local_2a6 = CONCAT11(local_2a6._1_1_,bVar28) & 0xff01;
      if (local_2a8 == 0) {
        if ((0 < (int)local_288) &&
           (piVar13 = local_228, uVar26 = (ulonglong)local_270, 0 < (int)local_270)) {
          do {
            local_238 = uVar26;
            local_268 = *piVar13;
            lVar1 = *param_1;
            lVar17 = (longlong)(local_268 * 2) * 4;
            iVar11 = *(int *)(*(longlong *)(lVar1 + 0x90) + lVar17);
            lVar20 = (longlong)(local_268 * 2 + 1) * 4;
            local_208 = *(longlong *)(lVar1 + 0xa8) +
                        (longlong)*(int *)(*(longlong *)(lVar1 + 0x90) + lVar20) * 4;
            if (1 < iVar11) {
              local_210 = *(longlong *)(lVar1 + 0xc0) +
                          (longlong)*(int *)(*(longlong *)(lVar1 + 0x90) + lVar20) * 2;
              piVar30 = (int *)(*(longlong *)(lVar1 + 0x78) + lVar17);
              local_26c = (uint)*local_258;
              bVar32 = false;
              iVar31 = 0;
              iVar25 = 0;
              lVar17 = 0;
              do {
                if (iVar11 <= iVar25) {
                  if (!bVar32) goto LAB_14391bae4;
                  break;
                }
                iVar7 = *(int *)(local_208 + lVar17 * 4) * 2;
                lVar2 = (longlong)(iVar7 + 1) * 4;
                lVar5 = *(longlong *)(lVar1 + 0x18);
                lVar20 = param_1[3] + (longlong)*(int *)(lVar2 + lVar5) * 4;
                uVar3 = *(ushort *)(local_210 + lVar17 * 2);
                uVar22 = (uint)(local_26c !=
                               (*piVar30 !=
                               *(int *)(*(longlong *)(lVar1 + 0x30) +
                                        (longlong)*(int *)(lVar5 + lVar2) * 4 + (ulonglong)uVar3 * 4
                                       ))) + (uint)uVar3;
                uVar26 = (ulonglong)uVar22;
                if (uVar22 == *(uint *)(lVar5 + (longlong)iVar7 * 4)) {
                  uVar26 = 0;
                }
                if (lVar17 == 0) {
                  iVar31 = *(int *)(lVar20 + uVar26 * 4);
                }
                else {
                  bVar32 = *(int *)(lVar20 + uVar26 * 4) != iVar31;
                }
                iVar25 = iVar25 + 1;
                lVar17 = lVar17 + 1;
              } while (!bVar32);
              local_250[*piVar30] = 1;
              local_250[piVar30[1]] = 1;
              pbVar23 = (byte *)((longlong)local_268 + param_1[6]);
              bVar29 = 0;
              if (*piVar30 == local_2a0) {
                bVar29 = 2;
              }
              bVar28 = *pbVar23;
              *pbVar23 = bVar29 | bVar28 & 0xfd;
              bVar21 = 0;
              if (piVar30[1] == local_2a0) {
                bVar21 = 4;
              }
              bVar29 = bVar21 | bVar29 | bVar28 & 0xf9 | 1;
              *pbVar23 = bVar29;
              *pbVar23 = (*(char *)((longlong)param_1 + 0xd) << 3 ^ bVar29) & 8 ^ bVar29;
            }
LAB_14391bae4:
            local_260 = piVar13 + 1;
            local_258 = local_258 + 1;
            piVar13 = local_260;
            uVar26 = local_238 - 1;
          } while (local_238 - 1 != 0);
          local_238 = 0;
          goto LAB_14391bb0f;
        }
      }
      else {
        uVar26 = (ulonglong)bVar29;
        if ((int)(uint)bVar29 < (int)local_288) {
          piVar13 = local_228 + uVar26;
          do {
            uVar24 = (uint)uVar26;
            uVar22 = uVar24;
            if (uVar24 == 0) {
              uVar22 = local_288;
            }
            if (*(int *)(((longlong)local_158 - (longlong)local_228) + (longlong)piVar13) !=
                local_158[(int)(uVar22 - 1)]) {
              iVar11 = *piVar13;
              piVar30 = (int *)(*(longlong *)(*param_1 + 0x78) + (longlong)(iVar11 * 2) * 4);
              local_250[*piVar30] = 1;
              local_250[piVar30[1]] = 1;
              pbVar23 = (byte *)((longlong)iVar11 + param_1[6]);
              bVar29 = 0;
              if (*piVar30 == local_2a0) {
                bVar29 = 2;
              }
              bVar28 = *pbVar23;
              *pbVar23 = bVar29 | bVar28 & 0xfd;
              bVar21 = 0;
              if (piVar30[1] == local_2a0) {
                bVar21 = 4;
              }
              bVar29 = bVar21 | bVar29 | bVar28 & 0xf9 | 1;
              *pbVar23 = bVar29;
              *pbVar23 = (*(char *)((longlong)param_1 + 0xd) << 3 ^ bVar29) & 8 ^ bVar29;
            }
            uVar26 = (ulonglong)(uVar24 + 1);
            piVar13 = piVar13 + 1;
          } while ((int)(uVar24 + 1) < (int)local_288);
LAB_14391bb0f:
          bVar29 = (byte)local_2a6;
        }
      }
      uVar26 = (ulonglong)local_270;
      if ((bVar29 != 0) && (*local_280 == 0)) {
        if ((*(char *)((longlong)param_1 + 0xd) == '\0') || ((int)local_288 < 1)) {
          if ((local_288 == 1) && (local_2a4 != '\0')) {
            *local_280 = 1;
          }
        }
        else {
          *local_280 = 1;
          if (local_2a8 == 0) {
            piVar13 = local_228;
            if (0 < (int)local_270) {
              do {
                if ((*(byte *)((longlong)*piVar13 + *(longlong *)(*param_1 + 0xf0)) & 2) != 0) {
                  pbVar23 = (byte *)((longlong)*piVar13 + param_1[6]);
                  *pbVar23 = *pbVar23 | 8;
                }
                piVar13 = piVar13 + 1;
                uVar26 = uVar26 - 1;
              } while (uVar26 != 0);
            }
          }
          else {
            *(byte *)((longlong)*local_228 + param_1[6]) =
                 *(byte *)((longlong)*local_228 + param_1[6]) | 8;
            *(byte *)((longlong)local_228[(int)(local_270 - 1)] + param_1[6]) =
                 *(byte *)((longlong)local_228[(int)(local_270 - 1)] + param_1[6]) | 8;
          }
        }
      }
      iVar11 = 1;
      *piVar19 = *local_158;
      *local_1f0 = 0;
      if (1 < (int)local_288) {
        uVar26 = (ulonglong)(local_288 - 1);
        puVar12 = local_1f0;
        do {
          puVar18 = puVar12 + 1;
          piVar13 = piVar6 + 1;
          if (*piVar13 == *piVar6) {
            *puVar18 = *puVar12;
          }
          else {
            *puVar18 = (short)iVar11;
            if (iVar11 == 1) {
              piVar19[1] = *piVar13;
              iVar11 = 2;
            }
            else if ((iVar11 == 2) && (*piVar19 != *piVar13)) {
              piVar19[2] = *piVar13;
              iVar11 = 3;
            }
            else {
              piVar6 = piVar19 + iVar11;
              if (piVar19 != piVar6) {
                piVar30 = piVar19;
                do {
                  if (*piVar30 == *piVar13) {
                    if (piVar30 != piVar6) {
                      *puVar18 = (short)((longlong)piVar30 - (longlong)piVar19 >> 2);
                      goto LAB_14391bc6a;
                    }
                    break;
                  }
                  piVar30 = piVar30 + 1;
                } while (piVar30 != piVar6);
              }
              *piVar6 = *piVar13;
              iVar11 = iVar11 + 1;
            }
          }
LAB_14391bc6a:
          uVar26 = uVar26 - 1;
          piVar6 = piVar13;
          puVar12 = puVar18;
        } while (uVar26 != 0);
      }
      if ((local_2a8 == 0) && (*local_280 == 0)) {
        *local_280 = (ushort)(1 < iVar11);
      }
      *(short *)((longlong)local_280 + param_1[9] + local_220) = (short)iVar11;
      *(int *)(local_218 + param_1[0xc]) = local_298;
      local_298 = local_298 + iVar11;
      if ((1 < iVar11) &&
         (puVar12 = (undefined2 *)
                    (param_1[0xf] +
                    (longlong)*(int *)(local_278 + 4 + *(longlong *)(*param_1 + 0x108)) * 2),
         0 < (int)local_288)) {
        lVar17 = (longlong)local_1f0 - (longlong)puVar12;
        uVar26 = (ulonglong)local_288;
        do {
          *puVar12 = *(undefined2 *)(lVar17 + (longlong)puVar12);
          puVar12 = puVar12 + 1;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
      local_2a0 = local_2a0 + 1;
      local_280 = local_280 + 1;
      local_218 = local_218 + 4;
      local_278 = local_278 + 8;
    } while (local_2a0 < *(int *)(*param_1 + 8));
  }
  local_290 = local_1f0;
  FUN_14391d0a0(param_1,local_298);
  local_2a0 = 0;
  if (0 < *(int *)(*param_1 + 8)) {
    local_290 = (undefined2 *)0x0;
    local_280 = (ushort *)0x0;
    local_278 = 0;
    do {
      psVar8 = local_f8;
      lVar17 = *param_1;
      local_288 = *(uint *)(local_278 + *(longlong *)(lVar17 + 0x108));
      piVar19 = (int *)(*(longlong *)(lVar17 + 0x120) +
                       (longlong)*(int *)(local_278 + 4 + *(longlong *)(lVar17 + 0x108)) * 4);
      puVar16 = (ushort *)
                (*(longlong *)(lVar17 + 0x138) +
                (longlong)*(int *)(local_278 + 4 + *(longlong *)(lVar17 + 0x108)) * 2);
      uVar3 = *(ushort *)(param_1[9] + (longlong)local_280);
      uVar26 = (ulonglong)uVar3;
      puVar27 = (undefined4 *)
                (param_1[0x12] + (longlong)*(int *)((longlong)local_290 + param_1[0xc]) * 4);
      if ((int)local_288 < 1) {
        *puVar27 = 0;
      }
      else {
        *puVar27 = *(undefined4 *)
                    (param_1[3] +
                    (longlong)
                    (int)((uint)*puVar16 +
                         *(int *)(*(longlong *)(lVar17 + 0x18) + (longlong)(*piVar19 * 2 + 1) * 4))
                    * 4);
      }
      if (*(short *)((longlong)puVar15 + (longlong)local_280) != 0) {
        if (1 < uVar3) {
          uVar22 = 1;
          if (1 < (int)local_288) {
            puVar27 = puVar27 + 1;
            lVar17 = (param_1[0xf] +
                     (longlong)*(int *)(*(longlong *)(*param_1 + 0x108) + 4 + local_278) * 2) -
                     (longlong)puVar16;
            uVar14 = (ulonglong)(local_288 - 1);
            do {
              puVar16 = puVar16 + 1;
              piVar19 = piVar19 + 1;
              if (*(ushort *)(lVar17 + (longlong)puVar16) == uVar22) {
                *puVar27 = *(undefined4 *)
                            (param_1[3] +
                            (longlong)
                            (int)((uint)*puVar16 +
                                 *(int *)(*(longlong *)(*param_1 + 0x18) +
                                         (longlong)(*piVar19 * 2 + 1) * 4)) * 4);
                uVar22 = uVar22 + 1;
                puVar27 = puVar27 + 1;
              }
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
        }
        lVar17 = (longlong)*(int *)((longlong)local_290 + param_1[0xc]) + param_1[0x15];
        uVar4 = *(ushort *)((longlong)local_280 + *(longlong *)(*param_1 + 0x1b0));
        uVar22 = (uint)uVar3;
        if ((((*(char *)((longlong)param_1 + 0xd) == '\0') && ((uVar4 & 0x11) == 0)) &&
            ((*(char *)((longlong)param_1 + 0xe) == '\0' || (uVar3 < 3)))) &&
           (((local_2a3 == '\0' || (uVar22 != 1)) || ((uVar4 & 4) != 0)))) {
          bVar32 = false;
        }
        else {
          bVar32 = true;
        }
        _guard_xfg_dispatch_icall_nop(local_f8,0,(longlong)(int)uVar22 * 10);
        FUN_14391c290(param_1,local_2a0,psVar8);
        bVar33 = false;
        if (((!bVar32) && (*(char *)((longlong)param_1 + 0xe) != '\0')) && (uVar22 == 2)) {
          if (((psVar8[4] != 0) || (psVar8[9] != 0)) || ((psVar8[2] != 0 || (psVar8[7] != 0)))) {
            bVar32 = true;
          }
          if (local_29c == 3) {
            if ((*psVar8 == 1) || (psVar8[5] == 1)) {
              bVar29 = 1;
            }
            else {
              bVar29 = 0;
            }
            bVar32 = (bool)(bVar32 | bVar29);
          }
          bVar33 = (psVar8[3] != 0) != (psVar8[8] != 0);
        }
        lVar20 = 0;
        puVar15 = local_250;
        if (uVar22 != 0) {
          do {
            bVar28 = 0;
            *(undefined1 *)(lVar20 + lVar17) = 0;
            *(byte *)(lVar20 + lVar17) = *(byte *)(lVar20 + lVar17) | 1;
            bVar29 = *(byte *)(lVar20 + lVar17);
            puVar16 = (ushort *)(psVar8 + lVar20 * 5);
            if (puVar16[2] == 0) {
              if (((bVar32) || (puVar16[4] != 0)) || ((*puVar16 == 1 && (local_29c != 0)))) {
                bVar21 = 1;
              }
              else {
                bVar21 = 0;
              }
              if (*puVar16 == 1) {
                *(byte *)(lVar20 + lVar17) = (bVar21 ^ 1) * '\x02' | bVar29 & 0xfd;
              }
              else {
                if (*puVar16 != local_264) {
                  bVar28 = 2;
                }
                *(byte *)(lVar20 + lVar17) = bVar28 | bVar29 & 0xfd;
              }
              bVar29 = 0;
              if (puVar16[4] != 0) {
                bVar29 = 0x40;
              }
              bVar28 = *(byte *)(lVar20 + lVar17);
              *(byte *)(lVar20 + lVar17) = bVar29 | bVar28 & 0xbf;
              if (puVar16[4] == 0) {
                if (bVar21 == 0) {
                  bVar9 = (bool)((bVar28 & 2) >> 1);
                }
                else {
                  bVar9 = 1 < *puVar16;
                }
              }
              else {
                bVar9 = 1 < (int)((uint)*puVar16 - (uint)puVar16[4]);
              }
              bVar29 = bVar29 | bVar28 & 0x3f | bVar9 << 7;
              *(byte *)(lVar20 + lVar17) = bVar29;
              if (bVar21 == 0) {
                if ((puVar16[3] == 0) && ((uVar4 & 0x20) == 0)) {
                  if (bVar33) {
                    bVar29 = bVar29 | 0x30;
                  }
                  else {
                    bVar29 = bVar29 | 8;
                  }
                }
                else {
                  bVar29 = bVar29 | 0x10;
                }
                *(byte *)(lVar20 + lVar17) = bVar29;
                if (*(char *)((longlong)param_1 + 0xd) == '\0') {
                  lVar1 = param_1[0x18] + (longlong)*(int *)((longlong)local_290 + param_1[0xc]) * 4
                  ;
                  *(ushort *)(lVar1 + lVar20 * 4) = puVar16[1];
                  if ((lVar20 == 0) && (puVar16[1] != 0)) {
                    sVar10 = (puVar16[1] - (short)local_288) + -1 + *puVar16;
                  }
                  else {
                    sVar10 = (*puVar16 - 1) + puVar16[1];
                  }
                  *(short *)(lVar1 + 2 + lVar20 * 4) = sVar10;
                }
              }
            }
            else {
              *(byte *)(lVar20 + lVar17) = bVar29 | 4;
            }
            lVar20 = lVar20 + 1;
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
        }
      }
      local_2a0 = local_2a0 + 1;
      local_278 = local_278 + 8;
      local_280 = local_280 + 1;
      local_290 = local_290 + 2;
    } while (local_2a0 < *(int *)(*param_1 + 8));
  }
  FMemory::operator_delete(local_48);
  local_f8 = local_e8;
  local_ec = 0x10;
  FMemory::operator_delete(local_1c0);
  local_1f0 = local_1e0;
  local_1e4 = 0x10;
  FMemory::operator_delete(local_168);
  local_1b8 = local_1a8;
  local_1ac = 0x10;
  FMemory::operator_delete(local_108);
  local_158 = local_148;
  local_14c = 0x10;
  if (puVar15 != (ushort *)0x0) {
    uVar26 = local_240 - (longlong)puVar15 >> 1;
    if (0x7fffffffffffffff < uVar26) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    puVar16 = puVar15;
    if (0xfff < uVar26 * 2) {
      if (((ulonglong)puVar15 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      puVar16 = *(ushort **)(puVar15 + -4);
      if (puVar15 <= puVar16) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if ((ulonglong)((longlong)puVar15 - (longlong)puVar16) < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < (ulonglong)((longlong)puVar15 - (longlong)puVar16)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(puVar16);
  }
  return;
}



// FUNCTION 14391c290 FUN_14391c290 body=672 status=ok
// SIG undefined FUN_14391c290(void)

void FUN_14391c290(longlong *param_1,int param_2,short *param_3)

{
  ushort *puVar1;
  longlong lVar2;
  byte bVar3;
  ushort uVar4;
  longlong lVar5;
  bool bVar6;
  ushort *puVar7;
  ulonglong uVar8;
  int iVar9;
  ushort *puVar10;
  int *piVar11;
  int iVar12;
  short local_20;
  
  lVar5 = *param_1;
  iVar12 = param_2 * 2;
  lVar2 = (longlong)(iVar12 + 1) * 4;
  piVar11 = (int *)(*(longlong *)(lVar5 + 0x168) +
                   (longlong)*(int *)(*(longlong *)(lVar5 + 0x150) + lVar2) * 4);
  iVar9 = *(int *)(*(longlong *)(lVar5 + 0x108) + (longlong)iVar12 * 4);
  iVar12 = *(int *)(*(longlong *)(lVar5 + 0x150) + (longlong)iVar12 * 4);
  bVar6 = iVar9 < iVar12;
  puVar1 = (ushort *)(param_1[0xf] + (longlong)*(int *)(*(longlong *)(lVar5 + 0x108) + lVar2) * 2);
  uVar4 = *(ushort *)((longlong)param_2 * 2 + param_1[9]);
  uVar8 = (ulonglong)uVar4;
  if ((*(byte *)((longlong)param_2 * 2 + *(longlong *)(lVar5 + 0x1b0)) & 1) == 0) {
    if ((uVar4 != 1) || (bVar6)) {
      iVar12 = 1;
      param_3[0] = 1;
      param_3[1] = 0;
      if ((!bVar6) && (puVar1[iVar9 + -1] == 0)) {
        if ((*(byte *)((longlong)*piVar11 + param_1[6]) & 1) == 0) {
          bVar3 = *(byte *)((longlong)*piVar11 + *(longlong *)(*param_1 + 0xf0));
          if ((bVar3 & 4) == 0) {
            if ((bVar3 & 8) != 0) {
              param_3[3] = param_3[3] + 1;
            }
          }
          else {
            param_3[4] = param_3[4] + 1;
          }
        }
        else {
          param_3[2] = param_3[2] + 1;
        }
      }
      puVar7 = puVar1;
      if (1 < iVar9) {
        do {
          piVar11 = piVar11 + 1;
          puVar10 = puVar7 + 1;
          uVar4 = *puVar10;
          if (uVar4 == *puVar7) {
            if ((*(byte *)((longlong)*piVar11 + param_1[6]) & 1) == 0) {
              bVar3 = *(byte *)((longlong)*piVar11 + *(longlong *)(*param_1 + 0xf0));
              if ((bVar3 & 4) == 0) {
                if ((bVar3 & 8) != 0) {
                  param_3[(ulonglong)uVar4 * 5 + 3] = param_3[(ulonglong)uVar4 * 5 + 3] + 1;
                }
              }
              else {
                param_3[(ulonglong)uVar4 * 5 + 4] = param_3[(ulonglong)uVar4 * 5 + 4] + 1;
              }
            }
            else {
              param_3[(ulonglong)uVar4 * 5 + 2] = param_3[(ulonglong)uVar4 * 5 + 2] + 1;
            }
          }
          else {
            if (param_3[(ulonglong)uVar4 * 5] != 0) {
              param_3[(ulonglong)uVar4 * 5 + 2] = param_3[(ulonglong)uVar4 * 5 + 2] + 1;
            }
            param_3[(ulonglong)*puVar10 * 5 + 1] = (short)iVar12;
          }
          iVar12 = iVar12 + 1;
          param_3[(ulonglong)*puVar10 * 5] = param_3[(ulonglong)*puVar10 * 5] + 1;
          puVar7 = puVar10;
        } while (iVar12 < iVar9);
      }
      if ((puVar1[iVar9 + -1] == 0) && (!bVar6)) {
        param_3[2] = param_3[2] + -1;
      }
    }
    else {
      local_20 = (short)iVar9;
      iVar9 = 0;
      param_3[0] = 0;
      param_3[1] = 0;
      if (iVar12 < 1) {
LAB_14391c3e2:
        *param_3 = local_20;
      }
      else {
        do {
          if ((*(byte *)((longlong)piVar11[iVar9] + param_1[6]) & 1) == 0) {
            bVar3 = *(byte *)((longlong)piVar11[iVar9] + *(longlong *)(*param_1 + 0xf0));
            if ((bVar3 & 4) == 0) {
              if ((bVar3 & 8) != 0) {
                param_3[3] = param_3[3] + 1;
              }
            }
            else {
              param_3[4] = param_3[4] + 1;
            }
          }
          else {
            if (*param_3 != 0) {
              param_3[2] = 1;
              goto LAB_14391c3e2;
            }
            *param_3 = local_20;
            param_3[1] = (short)iVar9;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar12);
        *param_3 = local_20;
      }
    }
  }
  else if (uVar4 != 0) {
    do {
      *param_3 = 0;
      param_3[2] = 1;
      param_3 = param_3 + 5;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// FUNCTION 14391c530 FUN_14391c530 body=364 status=ok
// SIG undefined FUN_14391c530(void)

void FUN_14391c530(longlong *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar4 = *param_1;
  piVar1 = (int *)(*(longlong *)(lVar4 + 0x78) + (longlong)(param_2 * 2) * 4);
  if ((uint)*(ushort *)(param_1[9] + (longlong)piVar1[1] * 2) +
      (uint)*(ushort *)(param_1[9] + (longlong)*piVar1 * 2) < 3) {
    if (*(int *)(lVar4 + 0xc) < 1) {
      *param_4 = *(undefined4 *)
                  (param_1[0x12] + (longlong)*(int *)(param_1[0xc] + (longlong)*piVar1 * 4) * 4);
      uVar5 = *(undefined4 *)
               (param_1[0x12] + (longlong)*(int *)(param_1[0xc] + (longlong)piVar1[1] * 4) * 4);
    }
    else {
      *param_4 = *(undefined4 *)(param_1[0xc] + (longlong)*piVar1 * 4);
      uVar5 = *(undefined4 *)(param_1[0xc] + (longlong)piVar1[1] * 4);
    }
    param_4[1] = uVar5;
  }
  else {
    lVar6 = (longlong)(param_2 * 2 + 1);
    iVar3 = *(int *)(*(longlong *)(lVar4 + 0xa8) +
                    ((longlong)*(int *)(*(longlong *)(lVar4 + 0x90) + lVar6 * 4) + (longlong)param_3
                    ) * 4) * 2;
    uVar2 = *(ushort *)
             (*(longlong *)(lVar4 + 0xc0) +
             ((longlong)*(int *)(*(longlong *)(lVar4 + 0x90) + lVar6 * 4) + (longlong)param_3) * 2);
    lVar7 = (longlong)(iVar3 + 1);
    lVar6 = param_1[3] + (longlong)*(int *)(*(longlong *)(lVar4 + 0x18) + lVar7 * 4) * 4;
    uVar8 = 0;
    uVar5 = *(undefined4 *)(lVar6 + (ulonglong)uVar2 * 4);
    iVar3 = *(int *)(*(longlong *)(lVar4 + 0x18) + (longlong)iVar3 * 4);
    *param_4 = uVar5;
    if ((int)(uVar2 + 1) < iVar3) {
      uVar8 = (ulonglong)(uVar2 + 1);
    }
    param_4[1] = *(undefined4 *)(lVar6 + uVar8 * 4);
    if (*piVar1 !=
        *(int *)(*(longlong *)(*param_1 + 0x30) +
                ((longlong)*(int *)(*(longlong *)(*param_1 + 0x18) + lVar7 * 4) + (ulonglong)uVar2)
                * 4)) {
      *param_4 = param_4[1];
      param_4[1] = uVar5;
      return;
    }
  }
  return;
}



// FUNCTION 14391c6a0 FUN_14391c6a0 body=277 status=ok
// SIG undefined FUN_14391c6a0(void)

void FUN_14391c6a0(longlong *param_1,int param_2,ushort param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  
  lVar6 = *param_1;
  lVar1 = param_1[0x18] + (longlong)*(int *)(param_1[0xc] + (longlong)param_2 * 4) * 4;
  lVar12 = (longlong)(param_2 * 2 + 1);
  lVar2 = *(longlong *)(lVar6 + 0x120) +
          (longlong)*(int *)(*(longlong *)(lVar6 + 0x108) + lVar12 * 4) * 4;
  lVar7 = *(longlong *)(lVar6 + 0x18);
  lVar8 = param_1[3];
  lVar6 = *(longlong *)(lVar6 + 0x138) +
          (longlong)*(int *)(*(longlong *)(lVar6 + 0x108) + lVar12 * 4) * 2;
  uVar11 = (ulonglong)*(ushort *)(lVar1 + (ulonglong)param_3 * 4);
  uVar14 = (ulonglong)*(ushort *)(lVar1 + (ulonglong)param_3 * 4 + 2);
  uVar3 = *(ushort *)(lVar6 + uVar11 * 2);
  iVar9 = *(int *)(lVar2 + uVar11 * 4) * 2;
  iVar10 = *(int *)(lVar2 + uVar14 * 4) * 2;
  iVar5 = *(int *)(lVar7 + (longlong)(iVar10 + 1) * 4);
  uVar11 = 0;
  uVar4 = *(ushort *)(lVar6 + uVar14 * 2);
  if ((uint)uVar3 != *(int *)(lVar7 + (longlong)iVar9 * 4) - 1U) {
    uVar11 = (ulonglong)(uVar3 + 1);
  }
  uVar13 = *(uint *)(lVar7 + (longlong)iVar10 * 4);
  if (uVar4 != 0) {
    uVar13 = (uint)uVar4;
  }
  *param_4 = *(undefined4 *)
              (lVar8 + (longlong)*(int *)(lVar7 + (longlong)(iVar9 + 1) * 4) * 4 + uVar11 * 4);
  param_4[1] = *(undefined4 *)(lVar8 + (longlong)iVar5 * 4 + (longlong)(int)(uVar13 - 1) * 4);
  return;
}



// FUNCTION 14391c7c0 FUN_14391c7c0 body=715 status=ok
// SIG undefined FUN_14391c7c0(void)

void FUN_14391c7c0(longlong *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  ushort *puVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  
  lVar10 = *param_1;
  lVar17 = (longlong)(param_2 * 2 + 1) * 4;
  lVar11 = *(longlong *)(lVar10 + 0x150);
  iVar6 = *(int *)(lVar11 + lVar17);
  lVar19 = *(longlong *)(lVar10 + 0x168) + (longlong)*(int *)(lVar17 + lVar11) * 4;
  iVar7 = *(int *)(lVar11 + (longlong)(param_2 * 2) * 4);
  lVar12 = *(longlong *)(lVar10 + 0x180);
  lVar11 = *(longlong *)(lVar10 + 0x138) +
           (longlong)*(int *)(*(longlong *)(lVar10 + 0x108) + lVar17) * 2;
  bVar3 = *(byte *)(*(longlong *)(lVar10 + 0x1b0) + (longlong)param_2 * 2);
  bVar4 = *(byte *)(*(longlong *)(lVar10 + 0x1b0) + (longlong)param_2 * 2);
  iVar8 = *(int *)(lVar10 + 0xc);
  iVar18 = 0;
  if (0 < iVar7) {
    lVar17 = (*(longlong *)(lVar10 + 0x120) +
             (longlong)*(int *)(*(longlong *)(lVar10 + 0x108) + lVar17) * 4) - lVar19;
    puVar16 = (ushort *)(lVar11 + -2);
    lVar19 = lVar19 - (longlong)param_3;
    do {
      lVar10 = *param_1;
      iVar13 = *(int *)(lVar19 + (longlong)param_3) * 2;
      iVar9 = *(int *)(*(longlong *)(lVar10 + 0x78) +
                      ((ulonglong)
                       (*(short *)(((lVar12 + (longlong)iVar6 * 2) - lVar11) + 2 + (longlong)puVar16
                                  ) == 0) + (longlong)iVar13) * 4);
      lVar20 = (longlong)iVar9;
      if (*(short *)(param_1[9] + lVar20 * 2) == 1) {
        if (iVar8 == 0) {
          *param_3 = *(undefined4 *)
                      (param_1[0x12] + (longlong)*(int *)(param_1[0xc] + lVar20 * 4) * 4);
        }
        else {
          *param_3 = *(undefined4 *)(param_1[0xc] + lVar20 * 4);
        }
      }
      else if ((~bVar4 & 1) == 0) {
        lVar20 = (longlong)(iVar13 + 1);
        iVar13 = *(int *)(*(longlong *)(lVar10 + 0xa8) +
                         (longlong)*(int *)(*(longlong *)(lVar10 + 0x90) + lVar20 * 4) * 4) * 2;
        uVar5 = *(ushort *)
                 (*(longlong *)(lVar10 + 0xc0) +
                 (longlong)*(int *)(*(longlong *)(lVar10 + 0x90) + lVar20 * 4) * 2);
        lVar2 = (longlong)(iVar13 + 1) * 4;
        lVar20 = param_1[3] + (longlong)*(int *)(lVar2 + *(longlong *)(lVar10 + 0x18)) * 4;
        if (iVar9 != *(int *)(*(longlong *)(lVar10 + 0x30) +
                             ((longlong)*(int *)(lVar2 + *(longlong *)(lVar10 + 0x18)) +
                             (ulonglong)uVar5) * 4)) {
          uVar15 = 0;
          if ((uint)uVar5 != *(int *)(*(longlong *)(lVar10 + 0x18) + (longlong)iVar13 * 4) - 1U) {
            uVar15 = (ulonglong)(uVar5 + 1);
          }
          uVar14 = *(undefined4 *)(lVar20 + uVar15 * 4);
          goto LAB_14391ca5d;
        }
        *param_3 = *(undefined4 *)(lVar20 + (ulonglong)uVar5 * 4);
      }
      else if (((bVar3 >> 2 & 1) == 0) || (iVar18 != iVar7 + -1)) {
        iVar9 = *(int *)((longlong)param_3 + lVar17 + lVar19) * 2;
        puVar1 = (undefined4 *)
                 (param_1[3] +
                 (longlong)*(int *)(*(longlong *)(lVar10 + 0x18) + (longlong)(iVar9 + 1) * 4) * 4);
        if ((uint)puVar16[1] == *(int *)(*(longlong *)(lVar10 + 0x18) + (longlong)iVar9 * 4) - 1U) {
          *param_3 = *puVar1;
        }
        else {
          *param_3 = puVar1[(ulonglong)puVar16[1] + 1];
        }
      }
      else {
        iVar9 = *(int *)((longlong)param_3 + lVar17 + lVar19 + -4) * 2;
        lVar20 = param_1[3] +
                 (longlong)*(int *)(*(longlong *)(lVar10 + 0x18) + (longlong)(iVar9 + 1) * 4) * 4;
        if (*puVar16 == 0) {
          uVar14 = *(undefined4 *)
                    (lVar20 + (longlong)
                              (*(int *)(*(longlong *)(lVar10 + 0x18) + (longlong)iVar9 * 4) + -1) *
                              4);
        }
        else {
          uVar14 = *(undefined4 *)(lVar20 + (longlong)(int)(*puVar16 - 1) * 4);
        }
LAB_14391ca5d:
        *param_3 = uVar14;
      }
      iVar18 = iVar18 + 1;
      puVar16 = puVar16 + 1;
      param_3 = param_3 + 1;
    } while (iVar18 < iVar7);
  }
  return;
}



// FUNCTION 14391ca90 FUN_14391ca90 body=35 status=ok
// SIG undefined FUN_14391ca90(void)

void FUN_14391ca90(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  _guard_xfg_dispatch_icall_nop
            ((void *)param_1[3],*(void **)(lVar1 + 0x30),
             (longlong)(int)(*(longlong *)(lVar1 + 0x38) - *(longlong *)(lVar1 + 0x30) >> 2) << 2);
  return;
}



// FUNCTION 14391cac0 FUN_14391cac0 body=325 status=ok
// SIG undefined FUN_14391cac0(void)

void FUN_14391cac0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ushort *puVar9;
  ulonglong uVar10;
  
  uVar6 = 0;
  lVar5 = *(longlong *)(*param_1 + 0x30);
  uVar4 = *(longlong *)(*param_1 + 0x38) - lVar5 >> 2;
  if (0 < (int)uVar4) {
    uVar4 = uVar4 & 0xffffffff;
    uVar8 = uVar6;
    do {
      *(undefined4 *)(uVar8 + param_1[3]) =
           *(undefined4 *)(param_1[0xc] + (longlong)*(int *)(uVar8 + lVar5) * 4);
      uVar4 = uVar4 - 1;
      uVar8 = uVar8 + 4;
    } while (uVar4 != 0);
  }
  uVar4 = uVar6;
  uVar8 = uVar6;
  if (0 < *(int *)(*param_1 + 8)) {
    do {
      if (1 < *(ushort *)(uVar6 + param_1[9])) {
        lVar5 = *param_1;
        lVar2 = *(longlong *)(lVar5 + 0x108);
        piVar3 = (int *)(*(longlong *)(lVar5 + 0x120) + (longlong)*(int *)(lVar2 + 4 + uVar8) * 4);
        puVar9 = (ushort *)
                 (param_1[0xf] + (longlong)*(int *)(*(longlong *)(lVar5 + 0x108) + 4 + uVar8) * 2);
        if (0 < (int)*(uint *)(lVar2 + uVar8)) {
          lVar5 = (*(longlong *)(lVar5 + 0x138) + (longlong)*(int *)(lVar2 + 4 + uVar8) * 2) -
                  (longlong)puVar9;
          uVar10 = (ulonglong)*(uint *)(lVar2 + uVar8);
          do {
            if (*puVar9 != 0) {
              piVar1 = (int *)(param_1[3] +
                              (longlong)
                              (int)(*(int *)(*(longlong *)(*param_1 + 0x18) +
                                            (longlong)(*piVar3 * 2 + 1) * 4) +
                                   (uint)*(ushort *)((longlong)puVar9 + lVar5)) * 4);
              *piVar1 = *piVar1 + (uint)*puVar9;
            }
            piVar3 = piVar3 + 1;
            puVar9 = puVar9 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      uVar7 = (int)uVar4 + 1;
      uVar6 = uVar6 + 2;
      uVar4 = (ulonglong)uVar7;
      uVar8 = uVar8 + 8;
    } while ((int)uVar7 < *(int *)(*param_1 + 8));
  }
  return;
}



// FUNCTION 14391cc10 FUN_14391cc10 body=391 status=ok
// SIG undefined FUN_14391cc10(void)

void FUN_14391cc10(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 local_res8;
  
  uVar2 = param_1[1];
  uVar5 = *param_1;
  uVar1 = (longlong)(uVar2 - uVar5) >> 1;
  if (param_2 < uVar1) {
    param_1[1] = uVar2 + (param_2 - uVar1) * 2;
  }
  else if (uVar1 < param_2) {
    if ((param_3 < uVar2) && (uVar5 <= param_3)) {
      uVar3 = param_2 - uVar1;
      if ((ulonglong)((longlong)(param_1[2] - uVar2) >> 1) < uVar3) {
        if (0x7fffffffffffffff - uVar1 < uVar3) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar4 = (longlong)(param_1[2] - uVar5) >> 1;
        uVar2 = 0;
        if (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1)) {
          uVar2 = (uVar4 >> 1) + uVar4;
        }
        uVar4 = uVar1 + uVar3;
        if (uVar1 + uVar3 <= uVar2) {
          uVar4 = uVar2;
        }
        FUN_143915b30(param_1,uVar4);
      }
      param_3 = *param_1 + ((longlong)(param_3 - uVar5) >> 1) * 2;
    }
    else {
      uVar3 = param_2 - uVar1;
      if ((ulonglong)((longlong)(param_1[2] - uVar2) >> 1) < uVar3) {
        if (0x7fffffffffffffff - uVar1 < uVar3) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar5 = (longlong)(param_1[2] - uVar5) >> 1;
        uVar2 = 0;
        if (uVar5 <= 0x7fffffffffffffff - (uVar5 >> 1)) {
          uVar2 = (uVar5 >> 1) + uVar5;
        }
        uVar5 = uVar1 + uVar3;
        if (uVar1 + uVar3 <= uVar2) {
          uVar5 = uVar2;
        }
        FUN_143915b30(param_1,uVar5);
      }
    }
    local_res8 = SUB81(param_1,0);
    FUN_14391b190(param_1[1],param_2 - ((longlong)(param_1[1] - *param_1) >> 1),param_3,param_1,
                  local_res8);
    param_1[1] = param_1[1] + (param_2 - ((longlong)(param_1[1] - *param_1) >> 1)) * 2;
  }
  return;
}



// FUNCTION 14391cda0 FUN_14391cda0 body=248 status=ok
// SIG undefined FUN_14391cda0(void)

void FUN_14391cda0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar1 = param_1[1];
  uVar2 = lVar1 - *param_1 >> 2;
  if (param_2 < uVar2) {
    param_1[1] = lVar1 + (param_2 - uVar2) * 4;
  }
  else if (uVar2 < param_2) {
    uVar4 = param_2 - uVar2;
    if ((ulonglong)(param_1[2] - lVar1 >> 2) < uVar4) {
      if (0x3fffffffffffffff - uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      uVar7 = param_1[2] - *param_1 >> 2;
      uVar6 = 0x3fffffffffffffff - (uVar7 >> 1);
      uVar3 = 0;
      if (uVar7 <= uVar6) {
        uVar3 = (uVar7 >> 1) + uVar7;
      }
      uVar5 = uVar4 + uVar2;
      if (uVar4 + uVar2 <= uVar3) {
        uVar5 = uVar3;
      }
      std::vector<unsigned_int,std::allocator<bool>_>::_Reallocate
                (param_1,uVar5,uVar6,uVar7,0xfffffffffffffffe);
    }
    FUN_1438fbeb0(param_1[1],param_2 - (param_1[1] - *param_1 >> 2),param_1,
                  (ulonglong)param_1 & 0xff);
    param_1[1] = param_1[1] + (param_2 - (param_1[1] - *param_1 >> 2)) * 4;
  }
  return;
}



// FUNCTION 14391cea0 FUN_14391cea0 body=340 status=ok
// SIG undefined FUN_14391cea0(void)

void FUN_14391cea0(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 local_res8;
  
  uVar3 = param_1[1];
  uVar5 = *param_1;
  uVar1 = uVar3 - uVar5;
  if (param_2 < uVar1) {
    param_1[1] = uVar5 + param_2;
  }
  else if (uVar1 < param_2) {
    if ((param_3 < uVar3) && (uVar5 <= param_3)) {
      uVar2 = param_2 - uVar1;
      if (param_1[2] - uVar3 < uVar2) {
        if (~uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar4 = param_1[2] - uVar5;
        uVar3 = 0;
        if (uVar4 <= ~(uVar4 >> 1)) {
          uVar3 = (uVar4 >> 1) + uVar4;
        }
        uVar4 = uVar2 + uVar1;
        if (uVar2 + uVar1 <= uVar3) {
          uVar4 = uVar3;
        }
        FUN_143915d70(param_1,uVar4);
      }
      param_3 = (param_3 - uVar5) + *param_1;
    }
    else {
      uVar2 = param_2 - uVar1;
      if (param_1[2] - uVar3 < uVar2) {
        if (~uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar5 = param_1[2] - uVar5;
        uVar3 = 0;
        if (uVar5 <= ~(uVar5 >> 1)) {
          uVar3 = (uVar5 >> 1) + uVar5;
        }
        uVar5 = uVar2 + uVar1;
        if (uVar2 + uVar1 <= uVar3) {
          uVar5 = uVar3;
        }
        FUN_143915d70(param_1,uVar5);
      }
    }
    local_res8 = SUB81(param_1,0);
    FUN_14391b1c0(param_1[1],param_2 - (param_1[1] - *param_1),param_3,param_1,local_res8);
    param_1[1] = param_1[1] + (*param_1 - param_1[1]) + param_2;
  }
  return;
}



// FUNCTION 14391d000 FUN_14391d000 body=146 status=ok
// SIG undefined FUN_14391d000(void)

void FUN_14391d000(longlong *param_1)

{
  undefined2 local_res8;
  
  FUN_143918510(param_1 + 3,
                (longlong)
                (int)(*(longlong *)(*param_1 + 0x38) - *(longlong *)(*param_1 + 0x30) >> 2));
  local_res8 = (ushort)local_res8._1_1_ << 8;
  FUN_14391cea0(param_1 + 6,(longlong)*(int *)(*param_1 + 4),&local_res8);
  FUN_143918420(param_1 + 9,(longlong)*(int *)(*param_1 + 8));
  FUN_143918510(param_1 + 0xc,(longlong)*(int *)(*param_1 + 8));
  local_res8 = 0;
  FUN_14391cc10(param_1 + 0xf,
                (longlong)
                (int)(*(longlong *)(*param_1 + 0x128) - *(longlong *)(*param_1 + 0x120) >> 2),
                &local_res8);
  return;
}



// FUNCTION 14391d0a0 FUN_14391d0a0 body=89 status=ok
// SIG undefined FUN_14391d0a0(void)

void FUN_14391d0a0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined1 local_res10 [24];
  
  lVar1 = (longlong)param_2;
  FUN_143918510(param_1 + 0x90,lVar1);
  local_res10[0] = 0;
  FUN_14391cea0(param_1 + 0xa8,lVar1,local_res10);
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_14391cda0(param_1 + 0xc0,lVar1);
  }
  return;
}



// FUNCTION 14391d100 FUN_14391d100 body=6 status=ok
// SIG undefined FUN_14391d100(void)

void FUN_14391d100(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 8) = *param_2;
  return;
}



// FUNCTION 14391d110 FUN_14391d110 body=45 status=ok
// SIG undefined FUN_14391d110(void)

longlong * FUN_14391d110(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  *param_1 = param_2;
  param_1[1] = *(longlong *)(param_2 + 8);
  param_1[2] = param_3;
  param_1[3] = *(longlong *)(param_2 + 0x10);
  param_1[4] = param_4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 14391d140 FUN_14391d140 body=56 status=ok
// SIG undefined FUN_14391d140(void)

void FUN_14391d140(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    std::allocator<wchar_t>::deallocate
              ((undefined8 *)(param_1 + 0x28),lVar1,*(longlong *)(param_1 + 0x38) - lVar1 >> 1);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14391d180 FUN_14391d180 body=170 status=ok
// SIG undefined FUN_14391d180(void)

void FUN_14391d180(longlong param_1)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 8) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8);
  *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0xc) =
       *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xc);
  *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0xd) =
       *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xd);
  *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0xe) =
       *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xe);
  FUN_14391d230(param_1);
  FUN_14391d940(param_1);
  FUN_14391e5d0(param_1);
  FUN_14391dde0(param_1);
  FUN_14391e000(param_1);
  if (*(char *)(*(longlong *)(param_1 + 0x20) + 0xd) == '\0') {
    FUN_14391de70(param_1);
    FUN_14391e1d0(param_1);
  }
  if (*(int *)(*(longlong *)(param_1 + 0x18) + 8) < *(int *)(*(longlong *)(param_1 + 0x20) + 0x10))
  {
    FUN_14391cac0();
    return;
  }
  FUN_14391ca90();
  return;
}



// FUNCTION 14391d230 FUN_14391d230 body=372 status=ok
// SIG undefined FUN_14391d230(void)

void FUN_14391d230(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined2 local_res8 [4];
  
  lVar2 = *param_1;
  lVar3 = (longlong)*(int *)(lVar2 + 0x50);
  iVar5 = *(int *)(lVar2 + 0x34);
  lVar8 = (longlong)(*(int *)(lVar2 + 0x38) + *(int *)(lVar2 + 0x50));
  if (lVar3 < lVar8) {
    lVar8 = lVar8 - lVar3;
    piVar4 = (int *)(*(longlong *)(lVar2 + 0x138) + lVar3 * 4);
    do {
      if ((~*(byte *)((longlong)*piVar4 + *(longlong *)(param_1[2] + 0x30)) & 1) == 0) {
        iVar9 = *(int *)(*(longlong *)(param_1[1] + 0x90) + (longlong)(*piVar4 * 2) * 4);
      }
      else {
        iVar9 = 1;
      }
      iVar5 = iVar5 + iVar9;
      piVar4 = piVar4 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  lVar3 = (longlong)*(int *)(lVar2 + 0x54);
  iVar7 = 0;
  iVar9 = 0;
  lVar8 = (longlong)(*(int *)(lVar2 + 0x3c) + *(int *)(lVar2 + 0x54));
  if (lVar3 < lVar8) {
    if (1 < lVar8 - lVar3) {
      lVar6 = ((lVar8 - lVar3) - 2U >> 1) + 1;
      lVar1 = lVar3 * 4;
      lVar3 = lVar3 + lVar6 * 2;
      piVar4 = (int *)(*(longlong *)(lVar2 + 0x138) + lVar1);
      iVar9 = iVar7;
      do {
        iVar7 = iVar7 + (uint)*(ushort *)(*(longlong *)(param_1[2] + 0x48) + (longlong)*piVar4 * 2);
        iVar9 = iVar9 + (uint)*(ushort *)
                               (*(longlong *)(param_1[2] + 0x48) + (longlong)piVar4[1] * 2);
        lVar6 = lVar6 + -1;
        piVar4 = piVar4 + 2;
      } while (lVar6 != 0);
    }
    if (lVar3 < lVar8) {
      iVar5 = iVar5 + (uint)*(ushort *)
                             (*(longlong *)(param_1[2] + 0x48) +
                             (longlong)*(int *)(*(longlong *)(lVar2 + 0x138) + lVar3 * 4) * 2);
    }
    iVar5 = iVar5 + iVar9 + iVar7;
  }
  FUN_14391d000(param_1[4]);
  FUN_143918710(param_1[4] + 0xa8,(longlong)iVar5);
  local_res8[0] = 0;
  FUN_14391cc10(param_1 + 5,(longlong)iVar5,local_res8);
  return;
}



// FUNCTION 14391d3b0 FUN_14391d3b0 body=1421 status=ok
// SIG undefined FUN_14391d3b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_14391d3b0(longlong *param_1,int param_2,ushort param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  int *piVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ushort *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined1 auStack_208 [32];
  undefined4 *local_1e8;
  undefined4 *local_1e0;
  int local_1d8 [2];
  undefined4 *local_1d0;
  int *local_1c8;
  uint uStack_1c0;
  uint local_1b8;
  uint local_1b4;
  longlong *local_1b0;
  ulonglong local_1a8;
  undefined4 *local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  undefined8 local_160;
  int *local_158;
  uint local_150;
  uint local_14c;
  int local_148 [16];
  int *local_108;
  undefined4 *local_f8;
  uint local_f0;
  uint local_ec;
  undefined4 local_e8 [32];
  undefined4 *local_68;
  ulonglong local_58;
  
  local_160 = 0xfffffffffffffffe;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  lVar12 = (longlong)param_2;
  local_158 = local_148;
  uVar9 = 0;
  iVar13 = 0;
  local_150 = 0;
  local_14c = 0x10;
  local_108 = (int *)0x0;
  lVar2 = *(longlong *)(param_1[1] + 0x150);
  uVar7 = *(uint *)(lVar2 + (longlong)(param_2 * 2) * 4);
  lVar14 = (longlong)(param_2 * 2 + 1);
  lVar2 = *(longlong *)(param_1[1] + 0x168) + (longlong)*(int *)(lVar2 + lVar14 * 4) * 4;
  lVar1 = param_1[3];
  local_1d8[0] = param_4;
  local_1b8 = uVar7;
  local_1b0 = param_1;
  local_170 = lVar2;
  if ((int)(*(longlong *)(lVar1 + 0x170) - *(longlong *)(lVar1 + 0x168) >> 2) == 0) {
    if (uVar7 == 0) {
      FMemory::operator_delete(0);
      local_158 = local_148;
      local_14c = 0x10;
    }
    else if (0x10 < uVar7) {
      FMemory::operator_delete(0);
      local_158 = local_148;
      local_14c = 0x10;
      local_158 = (int *)operator_new((ulonglong)uVar7 << 2);
      local_14c = uVar7;
      local_108 = local_158;
    }
    puVar8 = (ushort *)
             (*(longlong *)(param_1[1] + 0x180) +
             (longlong)*(int *)(*(longlong *)(param_1[1] + 0x150) + lVar14 * 4) * 2);
    local_1c8 = local_158;
    uStack_1c0 = uVar7;
    local_150 = uVar7;
    if (0 < (int)uVar7) {
      uVar10 = (ulonglong)uVar7;
      uVar6 = uVar9;
      do {
        *(undefined4 *)(uVar6 + (longlong)local_158) =
             *(undefined4 *)
              (*(longlong *)(*param_1 + 0xc0) + (longlong)(*(int *)(uVar6 + lVar2) * 2) * 4 +
              (ulonglong)*puVar8 * 4);
        puVar8 = puVar8 + 1;
        uVar6 = uVar6 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  else {
    local_1c8 = (int *)(*(longlong *)(lVar1 + 0x168) +
                       (longlong)
                       *(int *)(*(longlong *)(lVar1 + 0x150) + (longlong)(param_4 * 2 + 1) * 4) * 4)
    ;
    uStack_1c0 = *(uint *)(*(longlong *)(lVar1 + 0x150) + (longlong)(param_4 * 2) * 4);
  }
  uVar11 = uVar7 * 2;
  local_f8 = local_e8;
  local_ec = 0x20;
  local_68 = (undefined4 *)0x0;
  local_f0 = uVar11;
  if (0x20 < uVar11) {
    local_1a0 = local_f8;
    local_f8 = (undefined4 *)operator_new((ulonglong)uVar11 << 2);
    local_ec = uVar11;
    local_68 = local_f8;
  }
  local_1e0 = local_f8 + (int)uVar7;
  uVar11 = *(uint *)(*(longlong *)(param_1[2] + 0xc0) +
                     (longlong)*(int *)(*(longlong *)(param_1[2] + 0x60) + lVar12 * 4) * 4 +
                    (ulonglong)param_3 * 4);
  local_1b4 = uVar11 >> 0x10;
  uVar3 = (ushort)(uVar11 >> 0x10);
  if ((ushort)uVar11 < uVar3) {
    uVar11 = (uVar11 & 0xffff) + 1;
    if (local_1b4 < uVar11) goto LAB_14391d897;
    lVar1 = *(longlong *)(param_1[1] + 0xd8);
    lVar14 = *(longlong *)(param_1[3] + 0xd8);
    piVar4 = local_1c8 + uVar11;
    uVar7 = (local_1b4 - uVar11) + 1;
    uVar9 = (ulonglong)uVar7;
    puVar5 = local_f8;
    do {
      *puVar5 = *(undefined4 *)
                 (lVar1 + (longlong)*(int *)((lVar2 - (longlong)local_1c8) + (longlong)piVar4) * 4);
      *(undefined4 *)
       ((longlong)local_1e0 + ((ulonglong)uVar11 * -4 - (longlong)local_1c8) + (longlong)piVar4) =
           *(undefined4 *)(lVar14 + (longlong)*piVar4 * 4);
      puVar5 = puVar5 + 1;
      piVar4 = piVar4 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  else {
    if ((ushort)uVar11 <= uVar3) goto LAB_14391d897;
    uVar11 = (uVar11 & 0xffff) + 1;
    if ((int)uVar11 < (int)uVar7) {
      iVar13 = 0;
      if (3 < (int)(uVar7 - uVar11)) {
        local_198 = *(longlong *)(param_1[1] + 0xd8);
        local_190 = *(longlong *)(param_1[3] + 0xd8);
        lVar1 = *(longlong *)(param_1[1] + 0xd8);
        puVar5 = local_f8 + 2;
        piVar4 = local_1c8 + (ulonglong)uVar11 + 1;
        lVar15 = lVar2 - (longlong)local_1c8;
        lVar14 = (longlong)local_1e0 + ((ulonglong)uVar11 * -4 - (longlong)local_1c8);
        local_178 = ((2 - (ulonglong)uVar11) * 4 - (longlong)local_1c8) + (longlong)local_1e0;
        uVar7 = ((uVar7 - uVar11) - 4 >> 2) + 1;
        uVar6 = (ulonglong)uVar7;
        iVar13 = uVar7 * 4;
        uVar11 = uVar11 + iVar13;
        uVar9 = uVar6 * 4;
        do {
          puVar5[-2] = *(undefined4 *)
                        (local_198 + (longlong)*(int *)(lVar15 + -4 + (longlong)piVar4) * 4);
          *(undefined4 *)(lVar14 + -4 + (longlong)piVar4) =
               *(undefined4 *)(local_190 + (longlong)piVar4[-1] * 4);
          puVar5[-1] = *(undefined4 *)
                        (local_198 + (longlong)*(int *)(lVar15 + (longlong)piVar4) * 4);
          *(undefined4 *)(lVar14 + (longlong)piVar4) =
               *(undefined4 *)(local_190 + (longlong)*piVar4 * 4);
          *puVar5 = *(undefined4 *)
                     (local_198 + (longlong)*(int *)(lVar15 + 4 + (longlong)piVar4) * 4);
          *(undefined4 *)(lVar14 + 4 + (longlong)piVar4) =
               *(undefined4 *)(local_190 + (longlong)piVar4[1] * 4);
          puVar5[1] = *(undefined4 *)(lVar1 + (longlong)*(int *)(lVar15 + 8 + (longlong)piVar4) * 4)
          ;
          *(undefined4 *)(local_178 + (longlong)piVar4) =
               *(undefined4 *)(local_190 + (longlong)piVar4[2] * 4);
          puVar5 = puVar5 + 4;
          piVar4 = piVar4 + 4;
          uVar6 = uVar6 - 1;
          param_1 = local_1b0;
          lVar2 = local_170;
          uVar7 = local_1b8;
          local_1a8 = uVar9;
        } while (uVar6 != 0);
      }
      if ((int)uVar11 < (int)uVar7) {
        local_1a8 = *(ulonglong *)(param_1[1] + 0xd8);
        lVar1 = *(longlong *)(param_1[3] + 0xd8);
        puVar5 = local_1e0 + uVar9;
        piVar4 = local_1c8 + (int)uVar11;
        lVar14 = (longlong)(int)(uVar7 - uVar11);
        iVar13 = iVar13 + (uVar7 - uVar11);
        do {
          *(undefined4 *)(((longlong)local_f8 - (longlong)local_1e0) + (longlong)puVar5) =
               *(undefined4 *)
                (local_1a8 +
                (longlong)*(int *)((lVar2 - (longlong)local_1c8) + (longlong)piVar4) * 4);
          *puVar5 = *(undefined4 *)(lVar1 + (longlong)*piVar4 * 4);
          piVar4 = piVar4 + 1;
          puVar5 = puVar5 + 1;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
    }
    lVar1 = *(longlong *)(param_1[1] + 0xd8);
    lVar14 = *(longlong *)(param_1[3] + 0xd8);
    puVar5 = local_1e0 + iVar13;
    uVar9 = (ulonglong)(local_1b4 + 1);
    uVar7 = iVar13 + local_1b4 + 1;
    piVar4 = local_1c8;
    do {
      *(undefined4 *)((longlong)puVar5 + ((longlong)local_f8 - (longlong)local_1e0)) =
           *(undefined4 *)
            (lVar1 + (longlong)*(int *)((lVar2 - (longlong)local_1c8) + (longlong)piVar4) * 4);
      *puVar5 = *(undefined4 *)(lVar14 + (longlong)*piVar4 * 4);
      piVar4 = piVar4 + 1;
      puVar5 = puVar5 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = (ulonglong)uVar7;
LAB_14391d897:
  lVar2 = (longlong)local_1d8[0];
  local_1d8[0] = *(int *)(*param_1 + 0x18);
  local_1e8 = local_f8;
  local_1d0 = local_1e0;
  local_1a0 = local_f8;
  local_168 = lVar12;
  uVar16 = FUN_143913da0(local_1d8,*(undefined4 *)(*(longlong *)(param_1[1] + 0x198) + lVar12 * 4),
                         *(undefined4 *)(*(longlong *)(param_1[3] + 0x198) + lVar2 * 4),uVar9);
  FMemory::operator_delete(local_68);
  local_f8 = local_e8;
  local_ec = 0x20;
  FMemory::operator_delete(local_108);
  return uVar16;
}



// FUNCTION 14391d940 FUN_14391d940 body=81 status=ok
// SIG undefined FUN_14391d940(void)

void FUN_14391d940(longlong *param_1)

{
  *(undefined4 *)(param_1[4] + 0x10) = 0;
  if (*(char *)(*param_1 + 0x25) != '\0') {
    FUN_14391dcb0();
    FUN_14391dbe0(param_1);
    FUN_14391dd00(param_1);
    return;
  }
  FUN_14391dd00();
  FUN_14391dcb0(param_1);
  FUN_14391dbe0(param_1);
  return;
}



// FUNCTION 14391d9a0 FUN_14391d9a0 body=328 status=ok
// SIG undefined FUN_14391d9a0(void)

int FUN_14391d9a0(longlong *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  
  lVar7 = *(longlong *)(param_1[1] + 0x90);
  piVar1 = (int *)(*(longlong *)(param_1[1] + 0xa8) +
                  (longlong)*(int *)(lVar7 + (longlong)(param_3 * 2 + 1) * 4) * 4);
  iVar2 = *(int *)(lVar7 + (longlong)(param_3 * 2) * 4);
  if (iVar2 != 1) {
    iVar4 = 0;
    if (0 < iVar2) {
      lVar7 = (longlong)*(int *)(*(longlong *)(param_1[4] + 0x60) + (longlong)param_2 * 4) * 2;
      do {
        *(short *)(lVar7 + param_1[5]) = (short)iVar4;
        iVar4 = iVar4 + 1;
        lVar7 = lVar7 + 2;
      } while (iVar4 < iVar2);
    }
    lVar6 = (longlong)(param_2 * 2 + 1);
    piVar9 = (int *)(*(longlong *)(param_1[3] + 0x120) +
                    (longlong)*(int *)(*(longlong *)(param_1[3] + 0x108) + lVar6 * 4) * 4);
    lVar7 = *(longlong *)(*(longlong *)param_1[4] + 0x108);
    puVar11 = (undefined2 *)
              (((longlong *)param_1[4])[0xf] + (longlong)*(int *)(lVar6 * 4 + lVar7) * 2);
    uVar3 = *(uint *)(lVar7 + (longlong)(param_2 * 2) * 4);
    if (0 < (int)uVar3) {
      uVar10 = (ulonglong)uVar3;
      do {
        iVar4 = *(int *)(*(longlong *)(*param_1 + 0x108) + (longlong)*piVar9 * 4);
        if (iVar2 == 2) {
          if (iVar4 == piVar1[1]) {
            *puVar11 = 1;
          }
        }
        else {
          iVar5 = 0;
          piVar8 = piVar1;
          if (0 < iVar2) {
            do {
              if (iVar4 == *piVar8) {
                *puVar11 = (short)iVar5;
              }
              iVar5 = iVar5 + 1;
              piVar8 = piVar8 + 1;
            } while (iVar5 < iVar2);
          }
        }
        piVar9 = piVar9 + 1;
        puVar11 = puVar11 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  return iVar2;
}



// FUNCTION 14391daf0 FUN_14391daf0 body=228 status=ok
// SIG undefined FUN_14391daf0(void)

ushort FUN_14391daf0(longlong param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar1 = *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48) + (longlong)param_3 * 2);
  if (1 < uVar1) {
    iVar3 = 1;
    if (1 < uVar1) {
      lVar5 = (longlong)
              (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x60) + (longlong)param_2 * 4)
              + 1) * 2;
      do {
        *(short *)(lVar5 + *(longlong *)(param_1 + 0x28)) = (short)iVar3;
        iVar3 = iVar3 + 1;
        lVar5 = lVar5 + 2;
      } while (iVar3 < (int)(uint)uVar1);
    }
    lVar5 = *(longlong *)(**(longlong **)(param_1 + 0x20) + 0x108);
    puVar4 = (undefined2 *)
             ((*(longlong **)(param_1 + 0x20))[0xf] +
             (longlong)*(int *)(lVar5 + (longlong)(param_2 * 2 + 1) * 4) * 2);
    uVar2 = *(uint *)(lVar5 + (longlong)(param_2 * 2) * 4);
    if (0 < (int)uVar2) {
      lVar5 = ((*(longlong **)(param_1 + 0x10))[0xf] +
              (longlong)
              *(int *)(*(longlong *)(**(longlong **)(param_1 + 0x10) + 0x108) +
                      (longlong)(param_3 * 2 + 1) * 4) * 2) - (longlong)puVar4;
      uVar6 = (ulonglong)uVar2;
      do {
        *puVar4 = *(undefined2 *)(lVar5 + (longlong)puVar4);
        puVar4 = puVar4 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return uVar1;
}



// FUNCTION 14391dbe0 FUN_14391dbe0 body=199 status=ok
// SIG undefined FUN_14391dbe0(void)

void FUN_14391dbe0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)(*param_1 + 0x50);
  iVar2 = *(int *)(*param_1 + 0x38);
  uVar4 = (ulonglong)iVar1;
  uVar5 = uVar4;
  for (; (longlong)uVar4 < (longlong)(iVar2 + iVar1); uVar4 = uVar4 + 1) {
    iVar3 = *(int *)(*(longlong *)(*param_1 + 0x138) + uVar4 * 4);
    *(undefined4 *)(*(longlong *)(param_1[4] + 0x60) + uVar4 * 4) =
         *(undefined4 *)(param_1[4] + 0x10);
    if ((~*(byte *)(*(longlong *)(param_1[2] + 0x30) + (longlong)iVar3) & 1) == 0) {
      iVar3 = FUN_14391d9a0(param_1,uVar5 & 0xffffffff);
      *(short *)(*(longlong *)(param_1[4] + 0x48) + uVar4 * 2) = (short)iVar3;
      *(int *)(param_1[4] + 0x10) = *(int *)(param_1[4] + 0x10) + iVar3;
    }
    else {
      *(undefined2 *)(*(longlong *)(param_1[4] + 0x48) + uVar4 * 2) = 1;
      *(int *)(param_1[4] + 0x10) = *(int *)(param_1[4] + 0x10) + 1;
    }
    uVar5 = (ulonglong)((int)uVar5 + 1);
  }
  return;
}



// FUNCTION 14391dcb0 FUN_14391dcb0 body=76 status=ok
// SIG undefined FUN_14391dcb0(void)

void FUN_14391dcb0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(*param_1 + 0x4c);
  iVar2 = *(int *)(*param_1 + 0x34);
  for (lVar3 = (longlong)iVar1; lVar3 < iVar2 + iVar1; lVar3 = lVar3 + 1) {
    *(undefined4 *)(*(longlong *)(param_1[4] + 0x60) + lVar3 * 4) =
         *(undefined4 *)(param_1[4] + 0x10);
    *(undefined2 *)(*(longlong *)(param_1[4] + 0x48) + lVar3 * 2) = 1;
    *(int *)(param_1[4] + 0x10) = *(int *)(param_1[4] + 0x10) + 1;
  }
  return;
}



// FUNCTION 14391dd00 FUN_14391dd00 body=212 status=ok
// SIG undefined FUN_14391dd00(void)

void FUN_14391dd00(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)(*param_1 + 0x54);
  iVar2 = *(int *)(*param_1 + 0x3c);
  uVar4 = (ulonglong)iVar1;
  uVar5 = uVar4;
  for (; (longlong)uVar4 < (longlong)(iVar2 + iVar1); uVar4 = uVar4 + 1) {
    iVar3 = *(int *)(*(longlong *)(*param_1 + 0x138) + uVar4 * 4);
    *(undefined4 *)(*(longlong *)(param_1[4] + 0x60) + uVar4 * 4) =
         *(undefined4 *)(param_1[4] + 0x10);
    if ((~*(byte *)((longlong)*(int *)(*(longlong *)(param_1[2] + 0x60) + (longlong)iVar3 * 4) +
                   *(longlong *)(param_1[2] + 0xa8)) & 1) == 0) {
      iVar3 = FUN_14391daf0(param_1,uVar5 & 0xffffffff,iVar3);
      *(short *)(*(longlong *)(param_1[4] + 0x48) + uVar4 * 2) = (short)iVar3;
      *(int *)(param_1[4] + 0x10) = *(int *)(param_1[4] + 0x10) + iVar3;
    }
    else {
      *(undefined2 *)(*(longlong *)(param_1[4] + 0x48) + uVar4 * 2) = 1;
      *(int *)(param_1[4] + 0x10) = *(int *)(param_1[4] + 0x10) + 1;
    }
    uVar5 = (ulonglong)((int)uVar5 + 1);
  }
  return;
}



// FUNCTION 14391dde0 FUN_14391dde0 body=140 status=ok
// SIG undefined FUN_14391dde0(void)

void FUN_14391dde0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  iVar1 = 0;
  if (0 < *(int *)(*param_1 + 0x2c)) {
    lVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      *(undefined1 *)(lVar2 + *(longlong *)(param_1[4] + 0x30)) = 0;
      lVar2 = lVar2 + 1;
    } while (iVar1 < *(int *)(*param_1 + 0x2c));
  }
  uVar4 = (ulonglong)*(int *)(*param_1 + 0x2c);
  uVar5 = uVar4;
  if (*(int *)(*param_1 + 0x2c) < *(int *)(param_1[3] + 4)) {
    do {
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      *(undefined1 *)(uVar5 + *(longlong *)(param_1[4] + 0x30)) =
           *(undefined1 *)
            ((longlong)*(int *)(*(longlong *)(*param_1 + 0x120) + -4 + (uVar5 + 1) * 4) +
            *(longlong *)(param_1[2] + 0x30));
      uVar5 = uVar5 + 1;
    } while ((int)uVar3 < *(int *)(param_1[3] + 4));
  }
  return;
}



// FUNCTION 14391de70 FUN_14391de70 body=395 status=ok
// SIG undefined FUN_14391de70(void)

void FUN_14391de70(longlong *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  short sVar5;
  longlong lVar6;
  short *psVar7;
  byte *pbVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  
  lVar6 = *param_1;
  bVar11 = *(int *)(lVar6 + 0x20) != 4;
  iVar2 = *(int *)(lVar6 + 0x50);
  iVar3 = *(int *)(lVar6 + 0x38);
  for (lVar6 = (longlong)iVar2; lVar6 < iVar3 + iVar2; lVar6 = lVar6 + 1) {
    lVar9 = param_1[4];
    pbVar8 = (byte *)((longlong)*(int *)(*(longlong *)(lVar9 + 0x60) + lVar6 * 4) +
                     *(longlong *)(lVar9 + 0xa8));
    uVar1 = *(ushort *)(*(longlong *)(lVar9 + 0x48) + lVar6 * 2);
    uVar10 = (ulonglong)uVar1;
    if (((*pbVar8 & 1) != 0) && ((~*(byte *)(*(longlong *)(*param_1 + 0x180) + lVar6) & 1) != 0)) {
      psVar7 = (short *)(*(longlong *)(lVar9 + 0xc0) +
                        (longlong)*(int *)(*(longlong *)(lVar9 + 0x60) + lVar6 * 4) * 4);
      sVar5 = 0;
      if (uVar1 != 0) {
        do {
          if ((*pbVar8 & 0x18) != 0) {
            *psVar7 = sVar5;
            psVar7[1] = sVar5 + bVar11 + 1;
          }
          sVar5 = sVar5 + bVar11 + 2;
          pbVar8 = pbVar8 + 1;
          psVar7 = psVar7 + 2;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
  }
  iVar2 = *(int *)(*param_1 + 0x54);
  iVar3 = *(int *)(*param_1 + 0x3c);
  for (lVar6 = (longlong)iVar2; lVar6 < iVar3 + iVar2; lVar6 = lVar6 + 1) {
    lVar9 = param_1[4];
    pbVar8 = (byte *)((longlong)*(int *)(*(longlong *)(lVar9 + 0x60) + lVar6 * 4) +
                     *(longlong *)(lVar9 + 0xa8));
    uVar1 = *(ushort *)(*(longlong *)(lVar9 + 0x48) + lVar6 * 2);
    uVar10 = (ulonglong)uVar1;
    if (((*pbVar8 & 1) != 0) && ((~*(byte *)(*(longlong *)(*param_1 + 0x180) + lVar6) & 1) != 0)) {
      puVar4 = (undefined4 *)
               (*(longlong *)(lVar9 + 0xc0) +
               (longlong)*(int *)(*(longlong *)(lVar9 + 0x60) + lVar6 * 4) * 4);
      if (uVar1 != 0) {
        lVar9 = (*(longlong *)(param_1[2] + 0xc0) +
                (longlong)
                *(int *)(*(longlong *)(param_1[2] + 0x60) +
                        (longlong)*(int *)(*(longlong *)(*param_1 + 0x138) + lVar6 * 4) * 4) * 4) -
                (longlong)puVar4;
        do {
          if ((*pbVar8 & 0x18) != 0) {
            *puVar4 = *(undefined4 *)(lVar9 + (longlong)puVar4);
          }
          pbVar8 = pbVar8 + 1;
          puVar4 = puVar4 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
  }
  return;
}



// FUNCTION 14391e000 FUN_14391e000 body=450 status=ok
// SIG undefined FUN_14391e000(void)

void FUN_14391e000(longlong *param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  iVar3 = *(int *)(*param_1 + 0x4c);
  iVar12 = *(int *)(*param_1 + 0x34) + iVar3;
  if (iVar3 < iVar12) {
    uVar7 = (ulonglong)(uint)(iVar12 - iVar3);
    lVar6 = (longlong)*(int *)(*(longlong *)(param_1[4] + 0x60) + (longlong)iVar3 * 4);
    do {
      *(undefined1 *)(lVar6 + *(longlong *)(param_1[4] + 0xa8)) = 0;
      uVar7 = uVar7 - 1;
      lVar6 = lVar6 + 1;
    } while (uVar7 != 0);
  }
  local_res10[0] = 1;
  local_res8[0] = 9;
  puVar10 = local_res8;
  if (*(char *)(param_1[2] + 0xd) != '\0') {
    puVar10 = local_res10;
  }
  iVar3 = *(int *)(*param_1 + 0x50);
  lVar6 = (longlong)iVar3;
  lVar13 = (longlong)(*(int *)(*param_1 + 0x38) + iVar3);
  if (lVar6 < lVar13) {
    lVar11 = 0;
    do {
      lVar9 = param_1[4];
      puVar4 = (undefined1 *)
               ((longlong)*(int *)(*(longlong *)(lVar9 + 0x60) + lVar6 * 4) +
               *(longlong *)(lVar9 + 0xa8));
      uVar2 = *(ushort *)(*(longlong *)(lVar9 + 0x48) + lVar6 * 2);
      if ((*(byte *)((longlong)*(int *)(*(longlong *)(*param_1 + 0x138) + lVar6 * 4) +
                    *(longlong *)(param_1[2] + 0x30)) & 9) == 0) {
        lVar9 = (longlong)(puVar4 + (int)(uint)uVar2) - (longlong)puVar4;
        if (puVar4 + (int)(uint)uVar2 < puVar4) {
          lVar9 = lVar11;
        }
        lVar8 = lVar11;
        if (lVar9 != 0) {
          do {
            puVar4[lVar8] = 0;
            lVar8 = lVar8 + 1;
          } while (lVar8 != lVar9);
        }
      }
      else {
        lVar9 = (longlong)(puVar4 + uVar2) - (longlong)puVar4;
        if (puVar4 + uVar2 < puVar4) {
          lVar9 = lVar11;
        }
        if (lVar9 != 0) {
          uVar1 = *puVar10;
          puVar5 = puVar4;
          do {
            *puVar5 = uVar1;
            puVar5 = puVar5 + 1;
          } while ((longlong)puVar5 - (longlong)puVar4 != lVar9);
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar13);
  }
  iVar3 = *(int *)(*param_1 + 0x54);
  iVar12 = *(int *)(*param_1 + 0x3c);
  for (lVar6 = (longlong)iVar3; lVar6 < iVar12 + iVar3; lVar6 = lVar6 + 1) {
    lVar13 = param_1[2];
    lVar11 = (longlong)*(int *)(*(longlong *)(*param_1 + 0x138) + lVar6 * 4);
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)*(int *)(*(longlong *)(param_1[4] + 0x60) + lVar6 * 4) +
                       *(longlong *)(param_1[4] + 0xa8)),
               (void *)((longlong)*(int *)(*(longlong *)(lVar13 + 0x60) + lVar11 * 4) +
                       *(longlong *)(lVar13 + 0xa8)),
               (ulonglong)*(ushort *)(*(longlong *)(lVar13 + 0x48) + lVar11 * 2));
  }
  return;
}



// FUNCTION 14391e1d0 FUN_14391e1d0 body=1009 status=ok
// SIG undefined FUN_14391e1d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14391e1d0(longlong *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  byte *pbVar14;
  longlong lVar15;
  int *piVar16;
  ushort *puVar17;
  ulonglong uVar18;
  byte *pbVar19;
  ushort *puVar20;
  char cVar21;
  undefined1 auStack_f8 [32];
  char local_d8;
  longlong local_d0;
  undefined8 local_c8;
  uint uStack_c0;
  int *local_b8;
  uint uStack_b0;
  int *local_a8;
  uint uStack_a0;
  int *local_98;
  uint local_90;
  uint local_8c;
  int local_88 [16];
  int *local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  cVar21 = *(char *)(param_1[2] + 0xe);
  uVar5 = *(uint *)(param_1[3] + 0x14);
  local_98 = local_88;
  local_8c = 0x10;
  local_48 = (int *)0x0;
  local_d8 = cVar21;
  local_90 = uVar5;
  if (0x10 < uVar5) {
    local_98 = (int *)operator_new((ulonglong)uVar5 << 2);
    local_8c = uVar5;
    local_48 = local_98;
  }
  iVar12 = *(int *)(*param_1 + 0x54);
  lVar13 = (longlong)iVar12;
  local_d0 = (longlong)(*(int *)(*param_1 + 0x3c) + iVar12);
  do {
    if (local_d0 <= lVar13) {
      FMemory::operator_delete(local_48);
      return;
    }
    lVar15 = param_1[4];
    pbVar19 = (byte *)((longlong)*(int *)(*(longlong *)(lVar15 + 0x60) + lVar13 * 4) +
                      *(longlong *)(lVar15 + 0xa8));
    uVar2 = *(ushort *)(*(longlong *)(lVar15 + 0x48) + lVar13 * 2);
    uVar11 = (ulonglong)uVar2;
    if (((*pbVar19 & 1) != 0) && ((~*(byte *)(*(longlong *)(*param_1 + 0x180) + lVar13) & 1) != 0))
    {
      lVar7 = param_1[1];
      iVar12 = *(int *)(*(longlong *)(*param_1 + 0x138) + lVar13 * 4);
      if ((*(byte *)(*(longlong *)(lVar7 + 0x1b0) + (longlong)iVar12 * 2) & 0x60) != 0) {
        lVar8 = param_1[3];
        uVar3 = *(ushort *)(*(longlong *)(lVar8 + 0x1b0) + lVar13 * 2);
        if ((uVar3 & 0x30) == 0) {
          if ((uVar3 & 0x60) == 0) {
            if (uVar2 != 0) {
              do {
                if ((*pbVar19 & 0x10) != 0) {
                  *pbVar19 = *pbVar19 & 0xcf | 8;
                }
                pbVar19 = pbVar19 + 1;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
          }
          else {
            puVar20 = (ushort *)
                      (*(longlong *)(lVar15 + 0xc0) +
                      (longlong)*(int *)(*(longlong *)(lVar15 + 0x60) + lVar13 * 4) * 4);
            if ((int)(*(longlong *)(lVar8 + 0x170) - *(longlong *)(lVar8 + 0x168) >> 2) == 0) {
              lVar8 = *(longlong *)(lVar7 + 0x150);
              iVar12 = iVar12 * 2;
              lVar9 = *(longlong *)(lVar7 + 0x168);
              lVar15 = (longlong)(iVar12 + 1) * 4;
              iVar6 = *(int *)(lVar15 + lVar8);
              uStack_c0 = *(uint *)(lVar8 + (longlong)iVar12 * 4);
              puVar17 = (ushort *)
                        (*(longlong *)(lVar7 + 0x180) + (longlong)*(int *)(lVar8 + lVar15) * 2);
              if (0 < (int)uStack_c0) {
                uVar18 = (ulonglong)uStack_c0;
                lVar15 = 0;
                do {
                  uVar3 = *puVar17;
                  puVar17 = puVar17 + 1;
                  *(undefined4 *)(lVar15 + (longlong)local_98) =
                       *(undefined4 *)
                        (*(longlong *)(*param_1 + 0xc0) +
                        ((longlong)(*(int *)(lVar15 + lVar9 + (longlong)iVar6 * 4) * 2) +
                        (ulonglong)uVar3) * 4);
                  uVar18 = uVar18 - 1;
                  lVar15 = lVar15 + 4;
                } while (uVar18 != 0);
              }
              local_a8 = local_98;
              uStack_a0 = uStack_c0;
              local_c8 = local_98;
            }
            else {
              local_b8 = (int *)(*(longlong *)(lVar8 + 0x168) +
                                (longlong)*(int *)(*(longlong *)(lVar8 + 0x150) + 4 + lVar13 * 8) *
                                4);
              uStack_c0 = *(uint *)(*(longlong *)(lVar8 + 0x150) + lVar13 * 8);
              uStack_b0 = uStack_c0;
              local_c8 = local_b8;
            }
            pbVar14 = pbVar19;
            if (uVar2 != 0) {
              do {
                bVar1 = *pbVar14;
                if (((bVar1 & 0x10) != 0) && ((bVar1 & 0x20) == 0)) {
                  uVar3 = *puVar20;
                  bVar10 = 0;
                  uVar4 = puVar20[1];
                  if (uVar3 < uVar4) {
                    uVar18 = (ulonglong)(uVar3 + 1);
                    piVar16 = local_c8 + uVar18;
                    do {
                      if ((int)(uint)uVar4 < (int)uVar18) goto LAB_14391e511;
                      iVar12 = *piVar16;
                      uVar18 = (ulonglong)((int)uVar18 + 1);
                      piVar16 = piVar16 + 1;
                    } while ((*(byte *)((longlong)iVar12 + *(longlong *)(param_1[3] + 0xf0)) >> 3 &
                             1) == 0);
                  }
                  else if (uVar4 < uVar3) {
                    uVar18 = (ulonglong)(uVar3 + 1);
                    piVar16 = local_c8 + uVar18;
                    do {
                      if ((int)uStack_c0 <= (int)uVar18) break;
                      iVar12 = *piVar16;
                      uVar18 = (ulonglong)((int)uVar18 + 1);
                      piVar16 = piVar16 + 1;
                      bVar10 = *(byte *)((longlong)iVar12 + *(longlong *)(param_1[3] + 0xf0)) >> 3 &
                               1;
                    } while (bVar10 == 0);
                    iVar12 = 0;
                    piVar16 = local_c8;
                    while (bVar10 == 0) {
                      if ((int)(uint)uVar4 < iVar12) goto LAB_14391e511;
                      iVar6 = *piVar16;
                      iVar12 = iVar12 + 1;
                      piVar16 = piVar16 + 1;
                      bVar10 = *(byte *)((longlong)iVar6 + *(longlong *)(param_1[3] + 0xf0)) >> 3 &
                               1;
                    }
                  }
                  else {
LAB_14391e511:
                    *pbVar14 = bVar1 & 0xcf | 8;
                  }
                }
                puVar20 = puVar20 + 2;
                uVar11 = uVar11 - 1;
                pbVar14 = pbVar14 + 1;
                cVar21 = local_d8;
              } while (uVar11 != 0);
            }
            if ((uVar2 == 2) && (cVar21 != '\0')) {
              bVar1 = *pbVar19;
              if (((bVar1 & 0x20) == 0) || ((pbVar19[1] & 0x10) != 0)) {
                if (((pbVar19[1] & 0x20) != 0) && ((bVar1 & 0x10) == 0)) {
                  pbVar19[1] = pbVar19[1] & 0xdf;
                }
              }
              else {
                *pbVar19 = bVar1 & 0xdf;
              }
            }
          }
        }
      }
    }
    lVar13 = lVar13 + 1;
  } while( true );
}



// FUNCTION 14391e5d0 FUN_14391e5d0 body=144 status=ok
// SIG undefined FUN_14391e5d0(void)

void FUN_14391e5d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_143918710(*(longlong *)(param_1 + 0x20) + 0xa8,
                (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x10));
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(char *)(lVar2 + 0xd) == '\0') {
    FUN_14391cda0(lVar2 + 0xc0,(longlong)*(int *)(lVar2 + 0x10));
  }
  FUN_143918420(param_1 + 0x28,(longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x10));
  FUN_143918510(*(longlong *)(param_1 + 0x20) + 0x90,
                (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x10));
  lVar2 = *(longlong *)(param_1 + 0x20);
  iVar1 = 0;
  if (0 < *(int *)(lVar2 + 0x10)) {
    lVar3 = 0;
    do {
      *(int *)(lVar3 + *(longlong *)(lVar2 + 0x90)) = iVar1;
      iVar1 = iVar1 + 1;
      lVar2 = *(longlong *)(param_1 + 0x20);
      lVar3 = lVar3 + 4;
    } while (iVar1 < *(int *)(lVar2 + 0x10));
  }
  return;
}



// FUNCTION 14391e660 FUN_14391e660 body=18 status=ok
// SIG undefined FUN_14391e660(void)

undefined4 FUN_14391e660(int param_1)

{
  return *(undefined4 *)(&DAT_14682cea4 + (longlong)param_1 * 0x18);
}



// FUNCTION 14391e680 FUN_14391e680 body=18 status=ok
// SIG undefined FUN_14391e680(void)

undefined4 FUN_14391e680(int param_1)

{
  return *(undefined4 *)(&DAT_14682cea0 + (longlong)param_1 * 0x18);
}



// FUNCTION 14391e6a0 FUN_14391e6a0 body=18 status=ok
// SIG undefined FUN_14391e6a0(void)

undefined4 FUN_14391e6a0(int param_1)

{
  return *(undefined4 *)(&DAT_14682ce98 + (longlong)param_1 * 0x18);
}



// FUNCTION 14391e6c0 _Uninit_alloc_fill_n1<unsigned_int_*___ptr64,unsigned___int64,std::allocator<unsigned_int>_> body=43 status=ok
// SIG undefined _Uninit_alloc_fill_n1<unsigned_int_*___ptr64,unsigned___int64,std::allocator<unsigned_int>_>(void)

void std::
     _Uninit_alloc_fill_n1<unsigned_int_*___ptr64,unsigned___int64,std::allocator<unsigned_int>_>
               (undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 14391e6f0 FUN_14391e6f0 body=423 status=ok
// SIG undefined FUN_14391e6f0(void)

undefined8 *
FUN_14391e6f0(undefined8 *param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  param_1[1] = param_2;
  *param_1 = OpenSubdiv::v3_2_0::Vtr::internal::Refinement::vftable;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = *param_4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(int *)(param_3 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  return param_1;
}



// FUNCTION 14391e8a0 FUN_14391e8a0 body=1977 status=ok
// SIG undefined FUN_14391e8a0(void)

void FUN_14391e8a0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  *param_1 = OpenSubdiv::v3_2_0::Vtr::internal::Refinement::vftable;
  uVar3 = 0;
  uVar6 = uVar3;
  if (0 < (int)((longlong)(param_1[0x3d] - param_1[0x3c]) >> 3)) {
    do {
      lVar2 = *(longlong *)(uVar6 + param_1[0x3c]);
      if (lVar2 != 0) {
        FUN_14391d140(lVar2);
        FMemory::operator_delete(lVar2,0x40);
      }
      uVar5 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar5;
      uVar6 = uVar6 + 8;
    } while ((int)uVar5 < (int)((longlong)(param_1[0x3d] - param_1[0x3c]) >> 3));
  }
  uVar6 = param_1[0x3c];
  if (uVar6 != 0) {
    uVar3 = (longlong)(param_1[0x3e] - uVar6) >> 3;
    if (0x1fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 8) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
  }
  uVar6 = param_1[0x39];
  if (uVar6 != 0) {
    uVar3 = uVar6;
    if (0xfff < param_1[0x3b] - uVar6) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar3 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar3 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar3) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar3);
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
  }
  uVar6 = param_1[0x36];
  if (uVar6 != 0) {
    uVar3 = uVar6;
    if (0xfff < param_1[0x38] - uVar6) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar3 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar3 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar3) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar3);
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
  }
  uVar6 = param_1[0x33];
  if (uVar6 != 0) {
    uVar3 = uVar6;
    if (0xfff < param_1[0x35] - uVar6) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar3 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar3 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar3) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar3);
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
  }
  uVar6 = param_1[0x30];
  if (uVar6 != 0) {
    uVar3 = uVar6;
    if (0xfff < param_1[0x32] - uVar6) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar3 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar3 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar3) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar3);
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
  }
  uVar6 = param_1[0x2d];
  if (uVar6 != 0) {
    uVar3 = uVar6;
    if (0xfff < param_1[0x2f] - uVar6) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar3 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar3 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar3) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar3);
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
  }
  uVar6 = param_1[0x2a];
  if (uVar6 != 0) {
    uVar3 = uVar6;
    if (0xfff < param_1[0x2c] - uVar6) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar3 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar3 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar3) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar3);
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
  }
  uVar6 = param_1[0x27];
  if (uVar6 != 0) {
    uVar3 = (longlong)(param_1[0x29] - uVar6) >> 2;
    if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 4) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
  }
  uVar6 = param_1[0x24];
  if (uVar6 != 0) {
    uVar3 = (longlong)(param_1[0x26] - uVar6) >> 2;
    if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 4) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
  }
  uVar6 = param_1[0x21];
  if (uVar6 != 0) {
    uVar3 = (longlong)(param_1[0x23] - uVar6) >> 2;
    if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 4) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
  }
  uVar6 = param_1[0x1e];
  if (uVar6 != 0) {
    uVar3 = (longlong)(param_1[0x20] - uVar6) >> 2;
    if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 4) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
  }
  uVar6 = param_1[0x1b];
  if (uVar6 != 0) {
    uVar3 = (longlong)(param_1[0x1d] - uVar6) >> 2;
    if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 4) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
  }
  uVar6 = param_1[0x18];
  if (uVar6 != 0) {
    uVar3 = (longlong)(param_1[0x1a] - uVar6) >> 2;
    if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 4) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
  }
  plVar1 = param_1 + 0x15;
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    std::allocator<sTokenChange>::deallocate(plVar1,lVar2,param_1[0x17] - lVar2 >> 2);
    *plVar1 = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  plVar1 = param_1 + 0x12;
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    std::allocator<sTokenChange>::deallocate(plVar1,lVar2,param_1[0x14] - lVar2 >> 2);
    *plVar1 = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  lVar2 = param_1[0xf];
  if (lVar2 != 0) {
    std::allocator<sTokenChange>::deallocate(param_1 + 0xf,lVar2,param_1[0x11] - lVar2 >> 2);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  return;
}



// FUNCTION 14391f0a0 FUN_14391f0a0 body=52 status=ok
// SIG undefined FUN_14391f0a0(void)

undefined8 FUN_14391f0a0(undefined8 param_1,ulonglong param_2)

{
  FUN_14391e8a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f8);
  }
  return param_1;
}



// FUNCTION 14391f0e0 _Reserve body=129 status=ok
// SIG undefined _Reserve(void)

void std::vector<unsigned_int,std::allocator<bool>_>::_Reserve(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 <= (ulonglong)(param_1[2] - param_1[1] >> 2)) {
    return;
  }
  lVar2 = param_1[1] - *param_1 >> 2;
  if (0x3fffffffffffffffU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  param_2 = param_2 + lVar2;
  uVar3 = param_1[2] - *param_1 >> 2;
  uVar1 = 0;
  if (uVar3 <= 0x3fffffffffffffff - (uVar3 >> 1)) {
    uVar1 = (uVar3 >> 1) + uVar3;
  }
  if (param_2 <= uVar1) {
    param_2 = uVar1;
  }
  _Reallocate(param_1,param_2);
  return;
}



// FUNCTION 14391f170 FUN_14391f170 body=39 status=ok
// SIG undefined FUN_14391f170(void)

void FUN_14391f170(longlong param_1)

{
  **(undefined4 **)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x28);
  *(int *)(*(longlong *)(param_1 + 0x10) + 4) = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c);
  *(int *)(*(longlong *)(param_1 + 0x10) + 8) =
       *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34);
  return;
}



// FUNCTION 14391f1a0 FUN_14391f1a0 body=37 status=ok
// SIG undefined FUN_14391f1a0(void)

void FUN_14391f1a0(longlong *param_1)

{
  FUN_14391f3b0();
  FUN_14391f1d0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014391f1c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



// FUNCTION 14391f1d0 FUN_14391f1d0 body=469 status=ok
// SIG undefined FUN_14391f1d0(void)

void FUN_14391f1d0(longlong param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  
  lVar6 = *(longlong *)(param_1 + 8);
  iVar10 = 0;
  if (0 < *(int *)(lVar6 + 4)) {
    lVar4 = 0;
    iVar9 = 0;
    do {
      pbVar8 = (byte *)(*(longlong *)(param_1 + 0x1b0) + lVar4);
      puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar9 * 4);
      piVar7 = (int *)(*(longlong *)(lVar6 + 0x78) + (longlong)iVar9 * 4);
      if ((*pbVar8 & 1) == 0) {
        if ((*(byte *)((longlong)*piVar7 + *(longlong *)(param_1 + 0x1c8)) & 1) != 0) {
          *puVar3 = 1;
          *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + lVar4 * 4) = 1;
        }
        if ((*(byte *)((longlong)piVar7[1] + *(longlong *)(param_1 + 0x1c8)) & 1) != 0) {
          puVar3[1] = 1;
          *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + lVar4 * 4) = 1;
        }
      }
      else {
        *puVar3 = 2;
        puVar3[1] = 2;
        *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + lVar4 * 4) = 2;
      }
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x90);
      iVar2 = *(int *)(lVar6 + lVar4 * 8);
      piVar7 = (int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xa8) +
                      (longlong)*(int *)(lVar6 + 4 + lVar4 * 8) * 4);
      if (iVar2 == 2) {
        *pbVar8 = ((*(byte *)((longlong)piVar7[1] + *(longlong *)(param_1 + 0x198)) ^
                   *(byte *)((longlong)*piVar7 + *(longlong *)(param_1 + 0x198))) & 1) * '\x02' |
                  *pbVar8 & 0xe1;
      }
      else if (iVar2 < 2) {
        *pbVar8 = *pbVar8 & 0xe1;
      }
      else {
        iVar5 = 1;
        bVar1 = *(byte *)((longlong)*piVar7 + *(longlong *)(param_1 + 0x198));
        *pbVar8 = *pbVar8 & 0xe1;
        if (1 < iVar2) {
          do {
            piVar7 = piVar7 + 1;
            if ((*(byte *)((longlong)*piVar7 + *(longlong *)(param_1 + 0x198)) & 1) != (bVar1 & 1))
            {
              *pbVar8 = *pbVar8 & 0xe3 | 2;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar2);
        }
      }
      lVar6 = *(longlong *)(param_1 + 8);
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 2;
      lVar4 = lVar4 + 1;
    } while (iVar10 < *(int *)(lVar6 + 4));
  }
  return;
}



// FUNCTION 14391f3b0 FUN_14391f3b0 body=63 status=ok
// SIG undefined FUN_14391f3b0(void)

void FUN_14391f3b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 8)) {
    lVar1 = 0;
    do {
      if ((*(byte *)(lVar1 + *(longlong *)(param_1 + 0x1c8)) & 1) != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + lVar1 * 4) = 2;
      }
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 1;
    } while (iVar2 < *(int *)(*(longlong *)(param_1 + 8) + 8));
  }
  return;
}



// FUNCTION 14391f3f0 FUN_14391f3f0 body=153 status=ok
// SIG undefined FUN_14391f3f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14391f3f0(undefined8 param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_38 [32];
  byte local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  pbVar1 = local_18;
  iVar4 = 0;
  do {
    iVar3 = 0;
    do {
      *pbVar1 = *pbVar1 & 0xfe;
      bVar2 = (byte)iVar3;
      iVar3 = iVar3 + 1;
      *pbVar1 = *pbVar1 & 0xe1 | (byte)iVar4 & 1 | (bVar2 & 3) << 3;
      pbVar1 = pbVar1 + 1;
    } while (iVar3 < 4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  FUN_14391fc40(param_1,local_18);
  FUN_14391f880(param_1,local_18);
  FUN_143920580(param_1,local_18);
  return;
}



// FUNCTION 14391f490 FUN_14391f490 body=357 status=ok
// SIG undefined FUN_14391f490(void)

void FUN_14391f490(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  byte bVar8;
  
  uVar3 = 0;
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar4 = uVar3;
    uVar7 = uVar3;
    if (0 < *(int *)(*(longlong *)(param_1 + 8) + 4)) {
      do {
        piVar2 = (int *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)uVar3 * 4);
        bVar8 = ~*(byte *)(*(longlong *)(param_1 + 0x1b0) + uVar4) & 1;
        iVar6 = (int)uVar7;
        if (bVar8 == 0) {
          *(undefined1 *)((longlong)*piVar2 + *(longlong *)(param_1 + 0x168)) = *param_2;
          *(undefined1 *)((longlong)piVar2[1] + *(longlong *)(param_1 + 0x168)) = param_2[1];
          *(int *)(*(longlong *)(param_1 + 0x120) + (longlong)*piVar2 * 4) = iVar6;
LAB_14391f5c3:
          *(int *)(*(longlong *)(param_1 + 0x120) + (longlong)piVar2[1] * 4) = iVar6;
        }
        else {
          if (*piVar2 != -1) {
            *(undefined1 *)((longlong)*piVar2 + *(longlong *)(param_1 + 0x168)) =
                 param_2[(ulonglong)bVar8 * 4];
            *(int *)(*(longlong *)(param_1 + 0x120) + (longlong)*piVar2 * 4) = iVar6;
          }
          if (piVar2[1] != -1) {
            *(undefined1 *)((longlong)piVar2[1] + *(longlong *)(param_1 + 0x168)) =
                 param_2[(ulonglong)bVar8 * 4 + 1];
            goto LAB_14391f5c3;
          }
        }
        uVar3 = (ulonglong)((int)uVar3 + 2);
        uVar4 = uVar4 + 1;
        uVar7 = (ulonglong)(iVar6 + 1U);
      } while ((int)(iVar6 + 1U) < *(int *)(*(longlong *)(param_1 + 8) + 4));
    }
  }
  else if (0 < *(int *)(*(longlong *)(param_1 + 8) + 4)) {
    lVar5 = (longlong)*(int *)(param_1 + 0x48);
    do {
      lVar1 = lVar5 + 2;
      *(undefined1 *)(lVar5 + *(longlong *)(param_1 + 0x168)) = *param_2;
      *(undefined1 *)(*(longlong *)(param_1 + 0x168) + -1 + lVar1) = param_2[1];
      iVar6 = (int)uVar3;
      *(int *)(*(longlong *)(param_1 + 0x120) + -8 + lVar1 * 4) = iVar6;
      *(int *)(*(longlong *)(param_1 + 0x120) + -4 + lVar1 * 4) = iVar6;
      uVar3 = (ulonglong)(iVar6 + 1U);
      lVar5 = lVar1;
    } while ((int)(iVar6 + 1U) < *(int *)(*(longlong *)(param_1 + 8) + 4));
    return;
  }
  return;
}



// FUNCTION 14391f600 FUN_14391f600 body=627 status=ok
// SIG undefined FUN_14391f600(void)

void FUN_14391f600(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar7;
  int *piVar8;
  ulonglong uVar9;
  byte bVar10;
  ulonglong uVar6;
  
  uVar3 = 0;
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar6 = uVar3;
    uVar9 = uVar3;
    if (0 < **(int **)(param_1 + 8)) {
      do {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x68) + uVar6 * 8);
        piVar8 = (int *)(*(longlong *)(param_1 + 0x90) +
                        (longlong)*(int *)(*(longlong *)(param_1 + 0x68) + 4 + uVar6 * 8) * 4);
        bVar10 = ~*(byte *)(uVar6 + *(longlong *)(param_1 + 0x198)) & 1;
        iVar7 = (int)uVar9;
        if ((bVar10 == 0) && (iVar1 == 4)) {
          *(undefined1 *)((longlong)*piVar8 + *(longlong *)(param_1 + 0x168)) = *param_2;
          *(undefined1 *)((longlong)piVar8[1] + *(longlong *)(param_1 + 0x168)) = param_2[1];
          *(undefined1 *)((longlong)piVar8[2] + *(longlong *)(param_1 + 0x168)) = param_2[2];
          *(undefined1 *)((longlong)piVar8[3] + *(longlong *)(param_1 + 0x168)) = param_2[3];
          *(int *)(*(longlong *)(param_1 + 0x120) + (longlong)*piVar8 * 4) = iVar7;
          *(int *)(*(longlong *)(param_1 + 0x120) + (longlong)piVar8[1] * 4) = iVar7;
          *(int *)(*(longlong *)(param_1 + 0x120) + (longlong)piVar8[2] * 4) = iVar7;
          *(int *)(*(longlong *)(param_1 + 0x120) + (longlong)piVar8[3] * 4) = iVar7;
        }
        else {
          uVar9 = uVar3;
          if (0 < iVar1) {
            do {
              if (*piVar8 != -1) {
                iVar2 = (int)uVar9;
                if (4 < iVar1) {
                  iVar2 = 0;
                }
                *(undefined1 *)((longlong)*piVar8 + *(longlong *)(param_1 + 0x168)) =
                     param_2[(ulonglong)bVar10 * 4 + (longlong)iVar2];
                *(int *)(*(longlong *)(param_1 + 0x120) + (longlong)*piVar8 * 4) = iVar7;
              }
              uVar5 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar5;
              piVar8 = piVar8 + 1;
            } while ((int)uVar5 < iVar1);
          }
        }
        uVar6 = uVar6 + 1;
        uVar9 = (ulonglong)(iVar7 + 1U);
      } while ((int)(iVar7 + 1U) < **(int **)(param_1 + 8));
    }
  }
  else if (0 < **(int **)(param_1 + 8)) {
    lVar4 = (longlong)*(int *)(param_1 + 0x44);
    uVar6 = uVar3;
    uVar9 = uVar3;
    do {
      iVar1 = *(int *)(uVar9 + *(longlong *)(param_1 + 0x68));
      iVar7 = (int)uVar6;
      if (iVar1 == 4) {
        *(undefined1 *)(lVar4 + *(longlong *)(param_1 + 0x168)) = *param_2;
        *(undefined1 *)(lVar4 + 1 + *(longlong *)(param_1 + 0x168)) = param_2[1];
        *(undefined1 *)(lVar4 + 2 + *(longlong *)(param_1 + 0x168)) = param_2[2];
        *(undefined1 *)(lVar4 + 3 + *(longlong *)(param_1 + 0x168)) = param_2[3];
        *(int *)(*(longlong *)(param_1 + 0x120) + lVar4 * 4) = iVar7;
        *(int *)(*(longlong *)(param_1 + 0x120) + 4 + lVar4 * 4) = iVar7;
        *(int *)(*(longlong *)(param_1 + 0x120) + 8 + lVar4 * 4) = iVar7;
        *(int *)(*(longlong *)(param_1 + 0x120) + 0xc + lVar4 * 4) = iVar7;
        lVar4 = lVar4 + 4;
      }
      else {
        uVar6 = uVar3;
        if (0 < iVar1) {
          do {
            iVar2 = (int)uVar6;
            if (4 < iVar1) {
              iVar2 = 0;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
            *(undefined1 *)(lVar4 + *(longlong *)(param_1 + 0x168)) = param_2[iVar2];
            *(int *)(*(longlong *)(param_1 + 0x120) + lVar4 * 4) = iVar7;
            lVar4 = lVar4 + 1;
          } while ((int)uVar5 < iVar1);
        }
      }
      uVar6 = (ulonglong)(iVar7 + 1U);
      uVar9 = uVar9 + 8;
    } while ((int)(iVar7 + 1U) < **(int **)(param_1 + 8));
    return;
  }
  return;
}



// FUNCTION 14391f880 FUN_14391f880 body=88 status=ok
// SIG undefined FUN_14391f880(void)

void FUN_14391f880(longlong param_1,undefined8 param_2)

{
  FUN_143918710(param_1 + 0x168,(longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 4));
  FUN_143918510(param_1 + 0x120,(longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 4));
  FUN_14391f600(param_1,param_2);
  FUN_14391f490(param_1,param_2);
  return;
}



// FUNCTION 14391f8e0 FUN_14391f8e0 body=132 status=ok
// SIG undefined FUN_14391f8e0(void)

void FUN_14391f8e0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_143918710(*(longlong *)(param_1 + 0x10) + 0xf0,
                (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 4));
  FUN_14391f980(param_1);
  iVar1 = *(int *)(param_1 + 0x48);
  iVar2 = *(int *)(param_1 + 0x30);
  for (lVar3 = (longlong)iVar1; lVar3 < iVar2 + iVar1; lVar3 = lVar3 + 1) {
    *(undefined1 *)(lVar3 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xf0)) =
         *(undefined1 *)
          ((longlong)*(int *)(*(longlong *)(param_1 + 0x120) + lVar3 * 4) +
          *(longlong *)(*(longlong *)(param_1 + 8) + 0xf0));
  }
  return;
}



// FUNCTION 14391f980 FUN_14391f980 body=56 status=ok
// SIG undefined FUN_14391f980(void)

void FUN_14391f980(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x44);
  iVar2 = *(int *)(param_1 + 0x2c);
  for (lVar3 = (longlong)iVar1; lVar3 < iVar2 + iVar1; lVar3 = lVar3 + 1) {
    *(undefined1 *)(lVar3 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xf0)) = 0;
  }
  return;
}



// FUNCTION 14391f9c0 FUN_14391f9c0 body=626 status=ok
// SIG undefined FUN_14391f9c0(void)

void FUN_14391f9c0(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar7;
  int *piVar8;
  ulonglong uVar9;
  byte bVar10;
  ulonglong uVar6;
  
  uVar3 = 0;
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar6 = uVar3;
    uVar9 = uVar3;
    if (0 < **(int **)(param_1 + 8)) {
      do {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x58) + uVar6 * 8);
        piVar8 = (int *)(*(longlong *)(param_1 + 0x78) +
                        (longlong)*(int *)(*(longlong *)(param_1 + 0x58) + 4 + uVar6 * 8) * 4);
        bVar10 = ~*(byte *)(uVar6 + *(longlong *)(param_1 + 0x198)) & 1;
        iVar7 = (int)uVar9;
        if ((bVar10 == 0) && (iVar1 == 4)) {
          *(undefined1 *)((longlong)*piVar8 + *(longlong *)(param_1 + 0x150)) = *param_2;
          *(undefined1 *)((longlong)piVar8[1] + *(longlong *)(param_1 + 0x150)) = param_2[1];
          *(undefined1 *)((longlong)piVar8[2] + *(longlong *)(param_1 + 0x150)) = param_2[2];
          *(undefined1 *)((longlong)piVar8[3] + *(longlong *)(param_1 + 0x150)) = param_2[3];
          *(int *)(*(longlong *)(param_1 + 0x108) + (longlong)*piVar8 * 4) = iVar7;
          *(int *)(*(longlong *)(param_1 + 0x108) + (longlong)piVar8[1] * 4) = iVar7;
          *(int *)(*(longlong *)(param_1 + 0x108) + (longlong)piVar8[2] * 4) = iVar7;
          *(int *)(*(longlong *)(param_1 + 0x108) + (longlong)piVar8[3] * 4) = iVar7;
        }
        else {
          uVar9 = uVar3;
          if (0 < iVar1) {
            do {
              if (*piVar8 != -1) {
                iVar2 = (int)uVar9;
                if (4 < iVar1) {
                  iVar2 = 0;
                }
                *(undefined1 *)((longlong)*piVar8 + *(longlong *)(param_1 + 0x150)) =
                     param_2[(ulonglong)bVar10 * 4 + (longlong)iVar2];
                *(int *)(*(longlong *)(param_1 + 0x108) + (longlong)*piVar8 * 4) = iVar7;
              }
              uVar5 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar5;
              piVar8 = piVar8 + 1;
            } while ((int)uVar5 < iVar1);
          }
        }
        uVar6 = uVar6 + 1;
        uVar9 = (ulonglong)(iVar7 + 1U);
      } while ((int)(iVar7 + 1U) < **(int **)(param_1 + 8));
    }
  }
  else if (0 < **(int **)(param_1 + 8)) {
    lVar4 = (longlong)*(int *)(param_1 + 0x40);
    uVar6 = uVar3;
    uVar9 = uVar3;
    do {
      iVar1 = *(int *)(uVar9 + *(longlong *)(param_1 + 0x58));
      iVar7 = (int)uVar6;
      if (iVar1 == 4) {
        *(undefined1 *)(lVar4 + *(longlong *)(param_1 + 0x150)) = *param_2;
        *(undefined1 *)(lVar4 + 1 + *(longlong *)(param_1 + 0x150)) = param_2[1];
        *(undefined1 *)(lVar4 + 2 + *(longlong *)(param_1 + 0x150)) = param_2[2];
        *(undefined1 *)(lVar4 + 3 + *(longlong *)(param_1 + 0x150)) = param_2[3];
        *(int *)(*(longlong *)(param_1 + 0x108) + lVar4 * 4) = iVar7;
        *(int *)(*(longlong *)(param_1 + 0x108) + 4 + lVar4 * 4) = iVar7;
        *(int *)(*(longlong *)(param_1 + 0x108) + 8 + lVar4 * 4) = iVar7;
        *(int *)(*(longlong *)(param_1 + 0x108) + 0xc + lVar4 * 4) = iVar7;
        lVar4 = lVar4 + 4;
      }
      else {
        uVar6 = uVar3;
        if (0 < iVar1) {
          do {
            iVar2 = (int)uVar6;
            if (4 < iVar1) {
              iVar2 = 0;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
            *(undefined1 *)(lVar4 + *(longlong *)(param_1 + 0x150)) = param_2[iVar2];
            *(int *)(*(longlong *)(param_1 + 0x108) + lVar4 * 4) = iVar7;
            lVar4 = lVar4 + 1;
          } while ((int)uVar5 < iVar1);
        }
      }
      uVar6 = (ulonglong)(iVar7 + 1U);
      uVar9 = uVar9 + 8;
    } while ((int)(iVar7 + 1U) < **(int **)(param_1 + 8));
    return;
  }
  return;
}



// FUNCTION 14391fc40 FUN_14391fc40 body=75 status=ok
// SIG undefined FUN_14391fc40(void)

void FUN_14391fc40(longlong param_1,undefined8 param_2)

{
  FUN_143918710(param_1 + 0x150,(longlong)**(int **)(param_1 + 0x10));
  FUN_143918510(param_1 + 0x108,(longlong)**(int **)(param_1 + 0x10));
  FUN_14391f9c0(param_1,param_2);
  return;
}



// FUNCTION 14391fc90 FUN_14391fc90 body=114 status=ok
// SIG undefined FUN_14391fc90(void)

void FUN_14391fc90(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_143918710(*(int **)(param_1 + 0x10) + 0x18,(longlong)**(int **)(param_1 + 0x10));
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x28);
  for (lVar3 = (longlong)iVar1; lVar3 < iVar2 + iVar1; lVar3 = lVar3 + 1) {
    *(undefined1 *)(lVar3 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60)) =
         *(undefined1 *)
          ((longlong)*(int *)(*(longlong *)(param_1 + 0x108) + lVar3 * 4) +
          *(longlong *)(*(longlong *)(param_1 + 8) + 0x60));
  }
  return;
}



// FUNCTION 14391fd10 FUN_14391fd10 body=1559 status=ok
// SIG undefined FUN_14391fd10(void)

void FUN_14391fd10(longlong param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar3 = 0;
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(char *)(param_1 + 0x24) != '\0') {
    iVar2 = (int)(*(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x78) >> 2);
    uVar5 = uVar3;
    uVar9 = uVar3;
    if (0 < iVar2) {
      do {
        *(int *)(*(longlong *)(param_1 + 0x78) + uVar5 * 4) = (int)uVar9;
        uVar9 = (ulonglong)((int)uVar9 + 1);
        uVar5 = uVar5 + 1;
      } while ((longlong)uVar5 < (longlong)iVar2);
    }
    *(int *)(param_1 + 0x28) = iVar2;
    *(undefined4 *)(param_1 + 0x44) = 0;
    uVar6 = *(longlong *)(param_1 + 0x98) - *(longlong *)(param_1 + 0x90) >> 2;
    iVar2 = (int)uVar6;
    uVar5 = uVar3;
    uVar9 = uVar3;
    if (0 < iVar2) {
      do {
        *(int *)(*(longlong *)(param_1 + 0x90) + uVar5 * 4) = (int)uVar9;
        uVar5 = uVar5 + 1;
        uVar9 = (ulonglong)((int)uVar9 + 1);
      } while ((longlong)uVar5 < (longlong)iVar2);
    }
    *(int *)(param_1 + 0x2c) = iVar2;
    *(int *)(param_1 + 0x48) = iVar2;
    iVar2 = (int)(*(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xc0) >> 2);
    uVar5 = uVar3;
    if (0 < iVar2) {
      do {
        *(int *)(*(longlong *)(param_1 + 0xc0) + uVar5 * 4) = (int)uVar6;
        uVar6 = (ulonglong)((int)uVar6 + 1);
        uVar5 = uVar5 + 1;
      } while ((longlong)uVar5 < (longlong)iVar2);
    }
    *(int *)(param_1 + 0x30) = iVar2;
    if (*(char *)(param_1 + 0x25) == '\0') {
      *(undefined4 *)(param_1 + 0x54) = 0;
      iVar2 = (int)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 2);
      uVar5 = uVar3;
      uVar9 = uVar3;
      if (0 < iVar2) {
        do {
          *(int *)(*(longlong *)(param_1 + 0xf0) + uVar5 * 4) = (int)uVar9;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar5 = uVar5 + 1;
        } while ((longlong)uVar5 < (longlong)iVar2);
      }
      iVar7 = *(int *)(param_1 + 0x54) + iVar2;
      *(int *)(param_1 + 0x3c) = iVar2;
      *(int *)(param_1 + 0x4c) = iVar7;
      iVar2 = (int)(*(longlong *)(param_1 + 0xb0) - *(longlong *)(param_1 + 0xa8) >> 2);
      uVar5 = uVar3;
      if (0 < iVar2) {
        do {
          *(int *)(*(longlong *)(param_1 + 0xa8) + uVar5 * 4) = iVar7;
          iVar7 = iVar7 + 1;
          uVar5 = uVar5 + 1;
        } while ((longlong)uVar5 < (longlong)iVar2);
      }
      iVar7 = *(int *)(param_1 + 0x4c) + iVar2;
      *(int *)(param_1 + 0x34) = iVar2;
      *(int *)(param_1 + 0x50) = iVar7;
      iVar2 = (int)(*(longlong *)(param_1 + 0xe0) - *(longlong *)(param_1 + 0xd8) >> 2);
      if (0 < iVar2) {
        do {
          *(int *)(*(longlong *)(param_1 + 0xd8) + uVar3 * 4) = iVar7;
          iVar7 = iVar7 + 1;
          uVar3 = uVar3 + 1;
        } while ((longlong)uVar3 < (longlong)iVar2);
      }
      *(int *)(param_1 + 0x38) = iVar2;
      return;
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    iVar2 = (int)(*(longlong *)(param_1 + 0xb0) - *(longlong *)(param_1 + 0xa8) >> 2);
    uVar5 = uVar3;
    uVar9 = uVar3;
    if (0 < iVar2) {
      do {
        *(int *)(*(longlong *)(param_1 + 0xa8) + uVar5 * 4) = (int)uVar9;
        uVar5 = uVar5 + 1;
        uVar9 = (ulonglong)((int)uVar9 + 1);
      } while ((longlong)uVar5 < (longlong)iVar2);
    }
    iVar7 = *(int *)(param_1 + 0x4c) + iVar2;
    *(int *)(param_1 + 0x34) = iVar2;
    *(int *)(param_1 + 0x50) = iVar7;
    iVar2 = (int)(*(longlong *)(param_1 + 0xe0) - *(longlong *)(param_1 + 0xd8) >> 2);
    uVar5 = uVar3;
    if (0 < iVar2) {
      do {
        *(int *)(*(longlong *)(param_1 + 0xd8) + uVar5 * 4) = iVar7;
        iVar7 = iVar7 + 1;
        uVar5 = uVar5 + 1;
      } while ((longlong)uVar5 < (longlong)iVar2);
    }
    iVar7 = *(int *)(param_1 + 0x50) + iVar2;
    *(int *)(param_1 + 0x38) = iVar2;
    *(int *)(param_1 + 0x54) = iVar7;
    iVar2 = (int)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 2);
    if (0 < iVar2) {
      do {
        *(int *)(*(longlong *)(param_1 + 0xf0) + uVar3 * 4) = iVar7;
        iVar7 = iVar7 + 1;
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < (longlong)iVar2);
    }
    *(int *)(param_1 + 0x3c) = iVar2;
    return;
  }
  uVar5 = uVar3;
  uVar9 = uVar3;
  uVar6 = uVar3;
  iVar7 = iVar2;
  if (0 < (int)(*(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x78) >> 2)) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x78) + uVar9) == 0) {
        iVar4 = -1;
      }
      else {
        iVar4 = (int)uVar5;
        uVar5 = (ulonglong)(iVar4 + 1);
      }
      iVar7 = (int)uVar5;
      *(int *)(*(longlong *)(param_1 + 0x78) + uVar9) = iVar4;
      uVar10 = (int)uVar6 + 1;
      uVar9 = uVar9 + 4;
      uVar6 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)(*(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x78) >> 2)
            );
  }
  *(int *)(param_1 + 0x28) = iVar7;
  *(undefined4 *)(param_1 + 0x44) = 0;
  uVar5 = uVar3;
  uVar9 = uVar3;
  uVar6 = uVar3;
  iVar7 = iVar2;
  if (0 < (int)(*(longlong *)(param_1 + 0x98) - *(longlong *)(param_1 + 0x90) >> 2)) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x90) + uVar9) == 0) {
        iVar4 = -1;
      }
      else {
        iVar4 = (int)uVar5;
        uVar5 = (ulonglong)(iVar4 + 1);
      }
      iVar7 = (int)uVar5;
      *(int *)(*(longlong *)(param_1 + 0x90) + uVar9) = iVar4;
      uVar10 = (int)uVar6 + 1;
      uVar9 = uVar9 + 4;
      uVar6 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)(*(longlong *)(param_1 + 0x98) - *(longlong *)(param_1 + 0x90) >> 2)
            );
  }
  *(int *)(param_1 + 0x2c) = iVar7;
  iVar8 = 0;
  *(int *)(param_1 + 0x48) = iVar7;
  uVar5 = uVar3;
  uVar9 = uVar3;
  uVar6 = uVar3;
  iVar4 = iVar8;
  if (0 < (int)(*(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xc0) >> 2)) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0xc0) + uVar6) == 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = (int)uVar9 + iVar7;
        uVar9 = (ulonglong)((int)uVar9 + 1);
      }
      iVar4 = (int)uVar9;
      *(int *)(*(longlong *)(param_1 + 0xc0) + uVar6) = iVar1;
      uVar10 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar10;
      uVar6 = uVar6 + 4;
    } while ((int)uVar10 < (int)(*(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xc0) >> 2))
    ;
  }
  *(int *)(param_1 + 0x30) = iVar4;
  if (*(char *)(param_1 + 0x25) == '\0') {
    *(undefined4 *)(param_1 + 0x54) = 0;
    uVar5 = uVar3;
    uVar9 = uVar3;
    uVar6 = uVar3;
    if (0 < (int)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 2)) {
      do {
        if (*(int *)(*(longlong *)(param_1 + 0xf0) + uVar9) == 0) {
          iVar7 = -1;
        }
        else {
          iVar7 = (int)uVar5;
          uVar5 = (ulonglong)(iVar7 + 1);
        }
        iVar8 = (int)uVar5;
        *(int *)(*(longlong *)(param_1 + 0xf0) + uVar9) = iVar7;
        uVar10 = (int)uVar6 + 1;
        uVar9 = uVar9 + 4;
        uVar6 = (ulonglong)uVar10;
      } while ((int)uVar10 <
               (int)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 2));
    }
    iVar4 = *(int *)(param_1 + 0x54) + iVar8;
    *(int *)(param_1 + 0x3c) = iVar8;
    *(int *)(param_1 + 0x4c) = iVar4;
    uVar5 = uVar3;
    uVar9 = uVar3;
    iVar7 = iVar2;
    if (0 < (int)(*(longlong *)(param_1 + 0xb0) - *(longlong *)(param_1 + 0xa8) >> 2)) {
      do {
        if (*(int *)(*(longlong *)(param_1 + 0xa8) + uVar5) == 0) {
          iVar8 = -1;
        }
        else {
          iVar8 = iVar7 + iVar4;
          iVar7 = iVar7 + 1;
        }
        *(int *)(*(longlong *)(param_1 + 0xa8) + uVar5) = iVar8;
        uVar10 = (int)uVar9 + 1;
        uVar5 = uVar5 + 4;
        uVar9 = (ulonglong)uVar10;
      } while ((int)uVar10 <
               (int)(*(longlong *)(param_1 + 0xb0) - *(longlong *)(param_1 + 0xa8) >> 2));
    }
    iVar4 = *(int *)(param_1 + 0x4c) + iVar7;
    *(int *)(param_1 + 0x34) = iVar7;
    *(int *)(param_1 + 0x50) = iVar4;
    uVar5 = uVar3;
    uVar9 = uVar3;
    if (0 < (int)(*(longlong *)(param_1 + 0xe0) - *(longlong *)(param_1 + 0xd8) >> 2)) {
      do {
        if (*(int *)(*(longlong *)(param_1 + 0xd8) + uVar5) == 0) {
          iVar7 = -1;
        }
        else {
          iVar7 = (int)uVar3 + iVar4;
          uVar3 = (ulonglong)((int)uVar3 + 1);
        }
        iVar2 = (int)uVar3;
        *(int *)(*(longlong *)(param_1 + 0xd8) + uVar5) = iVar7;
        uVar10 = (int)uVar9 + 1;
        uVar5 = uVar5 + 4;
        uVar9 = (ulonglong)uVar10;
      } while ((int)uVar10 <
               (int)(*(longlong *)(param_1 + 0xe0) - *(longlong *)(param_1 + 0xd8) >> 2));
    }
    *(int *)(param_1 + 0x38) = iVar2;
    return;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  uVar5 = uVar3;
  uVar9 = uVar3;
  uVar6 = uVar3;
  if (0 < (int)(*(longlong *)(param_1 + 0xb0) - *(longlong *)(param_1 + 0xa8) >> 2)) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0xa8) + uVar9) == 0) {
        iVar7 = -1;
      }
      else {
        iVar7 = (int)uVar5;
        uVar5 = (ulonglong)(iVar7 + 1);
      }
      iVar8 = (int)uVar5;
      *(int *)(*(longlong *)(param_1 + 0xa8) + uVar9) = iVar7;
      uVar10 = (int)uVar6 + 1;
      uVar9 = uVar9 + 4;
      uVar6 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)(*(longlong *)(param_1 + 0xb0) - *(longlong *)(param_1 + 0xa8) >> 2)
            );
  }
  iVar4 = *(int *)(param_1 + 0x4c) + iVar8;
  *(int *)(param_1 + 0x34) = iVar8;
  *(int *)(param_1 + 0x50) = iVar4;
  uVar5 = uVar3;
  uVar9 = uVar3;
  iVar7 = iVar2;
  if (0 < (int)(*(longlong *)(param_1 + 0xe0) - *(longlong *)(param_1 + 0xd8) >> 2)) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0xd8) + uVar5) == 0) {
        iVar8 = -1;
      }
      else {
        iVar8 = iVar7 + iVar4;
        iVar7 = iVar7 + 1;
      }
      *(int *)(*(longlong *)(param_1 + 0xd8) + uVar5) = iVar8;
      uVar10 = (int)uVar9 + 1;
      uVar5 = uVar5 + 4;
      uVar9 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)(*(longlong *)(param_1 + 0xe0) - *(longlong *)(param_1 + 0xd8) >> 2)
            );
  }
  iVar4 = *(int *)(param_1 + 0x50) + iVar7;
  *(int *)(param_1 + 0x38) = iVar7;
  *(int *)(param_1 + 0x54) = iVar4;
  uVar5 = uVar3;
  uVar9 = uVar3;
  if (0 < (int)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 2)) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0xf0) + uVar5) == 0) {
        iVar7 = -1;
      }
      else {
        iVar7 = (int)uVar3 + iVar4;
        uVar3 = (ulonglong)((int)uVar3 + 1);
      }
      iVar2 = (int)uVar3;
      *(int *)(*(longlong *)(param_1 + 0xf0) + uVar5) = iVar7;
      uVar10 = (int)uVar9 + 1;
      uVar5 = uVar5 + 4;
      uVar9 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 2)
            );
  }
  *(int *)(param_1 + 0x3c) = iVar2;
  return;
}



// FUNCTION 143920330 FUN_143920330 body=42 status=ok
// SIG undefined FUN_143920330(void)

void FUN_143920330(longlong *param_1)

{
  (**(code **)(*param_1 + 8))();
  if (*(char *)((longlong)param_1 + 0x24) == '\0') {
    FUN_14391f1a0(param_1);
  }
  FUN_14391fd10(param_1);
  return;
}



// FUNCTION 143920360 FUN_143920360 body=172 status=ok
// SIG undefined FUN_143920360(void)

void FUN_143920360(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar5 = uVar3;
    if (0 < *(int *)(*(longlong *)(param_1 + 8) + 4)) {
      do {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0xd8) + uVar5 * 4);
        if (iVar1 != -1) {
          if ((*(byte *)(uVar5 + *(longlong *)(param_1 + 0x1b0)) & 1) != 0) {
            *(undefined1 *)((longlong)iVar1 + *(longlong *)(param_1 + 0x180)) = *param_2;
          }
          *(int *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = (int)uVar3;
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
        uVar5 = uVar5 + 1;
      } while ((int)uVar2 < *(int *)(*(longlong *)(param_1 + 8) + 4));
    }
  }
  else if (0 < *(int *)(*(longlong *)(param_1 + 8) + 4)) {
    lVar4 = (longlong)*(int *)(param_1 + 0x50) * 4;
    do {
      *(int *)(lVar4 + *(longlong *)(param_1 + 0x138)) = (int)uVar3;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      lVar4 = lVar4 + 4;
    } while ((int)uVar2 < *(int *)(*(longlong *)(param_1 + 8) + 4));
    return;
  }
  return;
}



// FUNCTION 143920410 FUN_143920410 body=187 status=ok
// SIG undefined FUN_143920410(void)

void FUN_143920410(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar3 = 0;
    if (*(char *)(param_1 + 0x24) == '\0') {
      uVar5 = uVar3;
      if (0 < **(int **)(param_1 + 8)) {
        do {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xa8) + uVar5 * 4);
          if (iVar1 != -1) {
            if ((*(byte *)(uVar5 + *(longlong *)(param_1 + 0x198)) & 1) != 0) {
              *(undefined1 *)((longlong)iVar1 + *(longlong *)(param_1 + 0x180)) = *param_2;
            }
            *(int *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = (int)uVar3;
          }
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
          uVar5 = uVar5 + 1;
        } while ((int)uVar2 < **(int **)(param_1 + 8));
      }
    }
    else if (0 < **(int **)(param_1 + 8)) {
      lVar4 = (longlong)*(int *)(param_1 + 0x4c) * 4;
      do {
        *(int *)(lVar4 + *(longlong *)(param_1 + 0x138)) = (int)uVar3;
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
        lVar4 = lVar4 + 4;
      } while ((int)uVar2 < **(int **)(param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1439204d0 FUN_1439204d0 body=172 status=ok
// SIG undefined FUN_1439204d0(void)

void FUN_1439204d0(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  if (*(char *)(param_1 + 0x24) == '\0') {
    uVar5 = uVar3;
    if (0 < *(int *)(*(longlong *)(param_1 + 8) + 8)) {
      do {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0xf0) + uVar5 * 4);
        if (iVar1 != -1) {
          if ((*(byte *)(uVar5 + *(longlong *)(param_1 + 0x1c8)) & 1) != 0) {
            *(undefined1 *)((longlong)iVar1 + *(longlong *)(param_1 + 0x180)) = *param_2;
          }
          *(int *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = (int)uVar3;
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
        uVar5 = uVar5 + 1;
      } while ((int)uVar2 < *(int *)(*(longlong *)(param_1 + 8) + 8));
    }
  }
  else if (0 < *(int *)(*(longlong *)(param_1 + 8) + 8)) {
    lVar4 = (longlong)*(int *)(param_1 + 0x54) * 4;
    do {
      *(int *)(lVar4 + *(longlong *)(param_1 + 0x138)) = (int)uVar3;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      lVar4 = lVar4 + 4;
    } while ((int)uVar2 < *(int *)(*(longlong *)(param_1 + 8) + 8));
    return;
  }
  return;
}



// FUNCTION 143920580 FUN_143920580 body=112 status=ok
// SIG undefined FUN_143920580(void)

void FUN_143920580(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_2;
  if (*(char *)(param_1 + 0x24) == '\0') {
    lVar1 = param_2 + 4;
  }
  FUN_14391cea0(param_1 + 0x180,(longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 8),lVar1);
  FUN_143918510(param_1 + 0x138,(longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 8));
  FUN_143920410(param_1,param_2);
  FUN_143920360(param_1,param_2);
  FUN_1439204d0(param_1,param_2);
  return;
}



// FUNCTION 1439205f0 FUN_1439205f0 body=126 status=ok
// SIG undefined FUN_1439205f0(void)

void FUN_1439205f0(longlong param_1)

{
  ushort *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_1439187f0(*(longlong *)(param_1 + 0x10) + 0x1b0);
  FUN_1439207f0(param_1);
  FUN_143920670(param_1);
  FUN_1439208a0(param_1);
  if (*(char *)(param_1 + 0x24) == '\0') {
    lVar4 = *(longlong *)(param_1 + 0x10);
    iVar3 = 0;
    if (0 < *(int *)(lVar4 + 8)) {
      lVar2 = 0;
      do {
        if ((*(byte *)(lVar2 + *(longlong *)(param_1 + 0x180)) & 1) != 0) {
          puVar1 = (ushort *)(*(longlong *)(lVar4 + 0x1b0) + lVar2 * 2);
          *puVar1 = *puVar1 | 0x800;
        }
        lVar4 = *(longlong *)(param_1 + 0x10);
        iVar3 = iVar3 + 1;
        lVar2 = lVar2 + 1;
      } while (iVar3 < *(int *)(lVar4 + 8));
    }
  }
  return;
}



// FUNCTION 143920670 FUN_143920670 body=374 status=ok
// SIG undefined FUN_143920670(void)

void FUN_143920670(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  short sVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  
  lVar5 = *(longlong *)(param_1 + 8);
  uVar6 = 0;
  iVar9 = 0;
  if (0 < *(int *)(lVar5 + 4)) {
    lVar3 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0xd8) + lVar3 * 4);
      if (iVar2 != -1) {
        bVar1 = *(byte *)(lVar3 + *(longlong *)(lVar5 + 0xf0));
        uVar7 = (ushort)(bVar1 >> 2 & 1);
        uVar8 = 0;
        if ((bVar1 & 5) == 5) {
          uVar8 = 0x4000;
        }
        uVar8 = ((ushort)(bVar1 >> 1 & 1) | uVar7 << 0xb) << 2 |
                (ushort)(bVar1 & 1) | uVar6 & 0x8fba | ((ushort)(bVar1 >> 3 & 1) | uVar7 << 6) << 6
                | uVar8;
        sVar4 = 4;
        if ((bVar1 & 0xc) == 0) {
          sVar4 = 1;
        }
        uVar6 = uVar8 ^ (sVar4 << 7 ^ uVar8) & 0x780;
        *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b0) + (longlong)iVar2 * 2) =
             uVar6;
      }
      lVar5 = *(longlong *)(param_1 + 8);
      iVar9 = iVar9 + 1;
      lVar3 = lVar3 + 1;
    } while (iVar9 < *(int *)(lVar5 + 4));
  }
  return;
}



// FUNCTION 1439207f0 FUN_1439207f0 body=170 status=ok
// SIG undefined FUN_1439207f0(void)

void FUN_1439207f0(longlong param_1)

{
  ushort *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x4c);
    lVar3 = (longlong)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x34));
    if (*(int *)(*(longlong *)(param_1 + 8) + 0xc) < 1) {
      for (; lVar2 < lVar3; lVar2 = lVar2 + 1) {
        *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b0) + lVar2 * 2) = 0x80;
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) +
                    (longlong)(*(int *)(*(longlong *)(param_1 + 0x138) + lVar2 * 4) * 2) * 4) !=
            *(int *)(param_1 + 0x20)) {
          puVar1 = (ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b0) + lVar2 * 2);
          *puVar1 = *puVar1 | 2;
        }
      }
    }
    else if (lVar2 < lVar3) {
      do {
        *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b0) + lVar2 * 2) = 0x80;
        lVar2 = lVar2 + 1;
      } while (lVar2 < lVar3);
      return;
    }
  }
  return;
}



// FUNCTION 1439208a0 FUN_1439208a0 body=83 status=ok
// SIG undefined FUN_1439208a0(void)

void FUN_1439208a0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x3c);
  for (lVar3 = (longlong)iVar1; lVar3 < iVar2 + iVar1; lVar3 = lVar3 + 1) {
    *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b0) + lVar3 * 2) =
         *(undefined2 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1b0) +
          (longlong)*(int *)(*(longlong *)(param_1 + 0x138) + lVar3 * 4) * 2);
  }
  return;
}



// FUNCTION 143920900 BeginDestroy body=35 status=ok
// SIG undefined BeginDestroy(void)

void UPawnAction_Move::BeginDestroy(undefined8 param_1)

{
  FUN_14391fc90();
  FUN_14391f8e0(param_1);
  FUN_1439205f0(param_1);
  return;
}



// FUNCTION 143920930 FUN_143920930 body=854 status=ok
// SIG undefined FUN_143920930(void)

void FUN_143920930(longlong param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  short sVar9;
  ushort uVar10;
  ushort uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int *piVar16;
  ushort *puVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  undefined4 local_res8 [2];
  
  lVar12 = (longlong)*(int *)(param_1 + 0x50);
  local_res8[0] = *(undefined4 *)(param_1 + 0x18);
  lVar14 = (longlong)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x50));
  if (lVar12 < lVar14) {
    do {
      lVar6 = *(longlong *)(param_1 + 0x10);
      lVar7 = *(longlong *)(lVar6 + 0x1b0);
      uVar11 = *(ushort *)(lVar7 + lVar12 * 2);
      if ((uVar11 & 0x40) != 0) {
        lVar18 = *(longlong *)(param_1 + 0xc0);
        lVar15 = (longlong)(*(int *)(*(longlong *)(param_1 + 0x138) + lVar12 * 4) * 2);
        if ((*(byte *)(lVar12 + *(longlong *)(param_1 + 0x180)) & 1) == 0) {
          uVar10 = 0;
          if ((byte)((*(byte *)((longlong)*(int *)(lVar18 + lVar15 * 4) +
                               *(longlong *)(lVar6 + 0xf0)) >> 3 & 1) +
                    (*(byte *)((longlong)*(int *)(lVar18 + 4 + lVar15 * 4) +
                              *(longlong *)(lVar6 + 0xf0)) >> 3 & 1)) != '\0') {
            uVar10 = 0x40;
          }
          *(ushort *)(lVar7 + lVar12 * 2) = uVar10 | uVar11 & 0xffbf;
          uVar11 = FUN_143913fb0(local_res8,0);
          puVar17 = (ushort *)(lVar7 + lVar12 * 2);
          *puVar17 = *puVar17 & 0xf87f;
          puVar17 = (ushort *)(lVar7 + lVar12 * 2);
          *puVar17 = *puVar17 | (uVar11 & 0xf) << 7;
        }
        else {
          iVar2 = *(int *)(lVar18 + lVar15 * 4);
          if (((iVar2 == -1) ||
              ((*(byte *)((longlong)iVar2 + *(longlong *)(lVar6 + 0xf0)) & 8) == 0)) &&
             ((iVar2 = *(int *)(lVar18 + 4 + lVar15 * 4), iVar2 == -1 ||
              ((*(byte *)((longlong)iVar2 + *(longlong *)(lVar6 + 0xf0)) & 8) == 0)))) {
            uVar11 = 0;
          }
          else {
            uVar11 = 0x40;
          }
          sVar9 = 1;
          if (uVar11 != 0) {
            sVar9 = 4;
          }
          *(ushort *)(lVar7 + lVar12 * 2) =
               sVar9 << 7 | *(ushort *)(lVar7 + lVar12 * 2) & 0xf83f | uVar11;
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < lVar14);
  }
  iVar2 = *(int *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x3c);
  for (lVar12 = (longlong)iVar2; lVar12 < iVar3 + iVar2; lVar12 = lVar12 + 1) {
    lVar14 = *(longlong *)(param_1 + 8);
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x138) + lVar12 * 4);
    uVar11 = *(ushort *)(*(longlong *)(lVar14 + 0x1b0) + (longlong)iVar4 * 2);
    if ((uVar11 & 0x60) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x10);
      lVar7 = *(longlong *)(lVar6 + 0x1b0);
      if (((uVar11 & 0x20) == 0) || ((*(byte *)(lVar7 + lVar12 * 2) & 0x20) != 0)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (((uVar11 & 0x40) != 0) || (bVar8)) {
        iVar20 = 0;
        iVar19 = 0;
        if ((int)(*(longlong *)(lVar6 + 0x170) - *(longlong *)(lVar6 + 0x168) >> 2) < 1) {
          iVar4 = iVar4 * 2;
          lVar18 = (longlong)(iVar4 + 1);
          piVar16 = (int *)(*(longlong *)(lVar14 + 0x168) +
                           (longlong)*(int *)(*(longlong *)(lVar14 + 0x150) + lVar18 * 4) * 4);
          uVar5 = *(uint *)(*(longlong *)(lVar14 + 0x150) + (longlong)iVar4 * 4);
          if (0 < (int)uVar5) {
            uVar13 = (ulonglong)uVar5;
            puVar17 = (ushort *)
                      (*(longlong *)(lVar14 + 0x180) +
                      (longlong)*(int *)(*(longlong *)(lVar14 + 0x150) + lVar18 * 4) * 2);
            do {
              iVar4 = *piVar16;
              piVar16 = piVar16 + 1;
              bVar1 = *(byte *)((longlong)
                                *(int *)(*(longlong *)(param_1 + 0xc0) + (longlong)(iVar4 * 2) * 4 +
                                        (ulonglong)*puVar17 * 4) + *(longlong *)(lVar6 + 0xf0));
              iVar19 = iVar19 + (bVar1 >> 3 & 1);
              iVar20 = iVar20 + (bVar1 >> 2 & 1);
              uVar13 = uVar13 - 1;
              puVar17 = puVar17 + 1;
            } while (uVar13 != 0);
          }
        }
        else {
          piVar16 = (int *)(*(longlong *)(lVar6 + 0x168) +
                           (longlong)*(int *)(*(longlong *)(lVar6 + 0x150) + 4 + lVar12 * 8) * 4);
          uVar5 = *(uint *)(*(longlong *)(lVar6 + 0x150) + lVar12 * 8);
          if (0 < (int)uVar5) {
            uVar13 = (ulonglong)uVar5;
            do {
              iVar4 = *piVar16;
              piVar16 = piVar16 + 1;
              bVar1 = *(byte *)((longlong)iVar4 + *(longlong *)(lVar6 + 0xf0));
              iVar19 = iVar19 + (bVar1 >> 3 & 1);
              iVar20 = iVar20 + (bVar1 >> 2 & 1);
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
        }
        puVar17 = (ushort *)(lVar7 + lVar12 * 2);
        *puVar17 = *puVar17 & 0xffbf;
        uVar11 = 0;
        if (0 < iVar19) {
          uVar11 = 0x40;
        }
        puVar17 = (ushort *)(lVar7 + lVar12 * 2);
        *puVar17 = *puVar17 | uVar11;
        if ((*(byte *)(lVar7 + lVar12 * 2) & 0x30) == 0) {
          uVar11 = FUN_143913fb0(local_res8,0,iVar19 + iVar20);
          puVar17 = (ushort *)(lVar7 + lVar12 * 2);
          *puVar17 = *puVar17 & 0xf87f;
          puVar17 = (ushort *)(lVar7 + lVar12 * 2);
          *puVar17 = *puVar17 | (uVar11 & 0xf) << 7;
        }
      }
    }
  }
  return;
}



// FUNCTION 143920c90 FUN_143920c90 body=178 status=ok
// SIG undefined FUN_143920c90(void)

void FUN_143920c90(longlong param_1,uint param_2)

{
  bool bVar1;
  uint local_res8 [2];
  uint local_res10;
  
  *(byte *)(param_1 + 0x24) = ~(byte)param_2 & 1;
  *(byte *)(param_1 + 0x25) = (byte)(param_2 >> 1) & 1;
  bVar1 = 0 < (int)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1d0) -
                    *(longlong *)(*(longlong *)(param_1 + 8) + 0x1c8) >> 3);
  local_res10 = param_2;
  FUN_143920330(param_1);
  FUN_14391f170(param_1);
  FUN_14391f3f0(param_1);
  UPawnAction_Move::BeginDestroy(param_1);
  if ((local_res10 & 4) == 0) {
    local_res8[0] = local_res8[0] | 0x3f;
  }
  else {
    local_res8[0] = local_res8[0] & 0xffffffc1 | 1;
  }
  if (bVar1) {
    local_res8[0] = local_res8[0] | 0x10;
  }
  FUN_1439213b0(param_1,local_res8);
  UPawnAction_Move::BeginDestroy(param_1);
  if (bVar1) {
    FUN_1439211a0(param_1);
  }
  return;
}



// FUNCTION 143920d50 resize body=209 status=ok
// SIG undefined resize(void)

void std::vector<unsigned_int,std::allocator<bool>_>::resize
               (ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 local_res8;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar3 = (longlong)(uVar1 - uVar2) >> 2;
  if (param_2 < uVar3) {
    param_1[1] = uVar1 + (param_2 - uVar3) * 4;
  }
  else if (uVar3 < param_2) {
    if ((param_3 < uVar1) && (uVar2 <= param_3)) {
      _Reserve(param_1,param_2 - uVar3);
      param_3 = *param_1 + ((longlong)(param_3 - uVar2) >> 2) * 4;
    }
    else {
      _Reserve(param_1,param_2 - uVar3);
    }
    local_res8 = SUB81(param_1,0);
    _Uninit_alloc_fill_n1<unsigned_int_*___ptr64,unsigned___int64,std::allocator<unsigned_int>_>
              (param_1[1],param_2 - ((longlong)(param_1[1] - *param_1) >> 2),param_3,param_1,
               local_res8);
    param_1[1] = param_1[1] + (param_2 - ((longlong)(param_1[1] - *param_1) >> 2)) * 4;
  }
  return;
}



// FUNCTION 143920e30 FUN_143920e30 body=879 status=ok
// SIG undefined FUN_143920e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143920e30(longlong param_1)

{
  byte *pbVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auStack_e8 [32];
  uint local_c8 [2];
  longlong local_c0;
  undefined8 local_b8;
  undefined1 *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined1 local_98 [64];
  undefined1 *local_58;
  ulonglong local_48;
  
  local_b8 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_c8[0] = *(uint *)(param_1 + 0x18);
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xe0) =
       *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xd8);
  std::vector<unsigned_int,std::allocator<bool>_>::resize
            (*(longlong *)(param_1 + 0x10) + 0xd8,
             (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 4),&DAT_145c61150);
  local_a8 = local_98;
  local_a0 = 0;
  local_9c = 0x10;
  local_58 = (undefined1 *)0x0;
  if (((local_c8[0] & 0x60) != 0) &&
     (uVar8 = *(uint *)(*(longlong *)(param_1 + 8) + 0x14), 0x10 < uVar8)) {
    FMemory::operator_delete(0);
    local_a8 = local_98;
    local_9c = 0x10;
    local_a8 = (undefined1 *)operator_new((ulonglong)uVar8 << 2);
    local_9c = uVar8;
    local_58 = local_a8;
  }
  lVar9 = (longlong)*(int *)(param_1 + 0x48);
  lVar12 = (longlong)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x48));
  local_c0 = lVar12;
  if (lVar9 < lVar12) {
    do {
      fVar16 = 0.0;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xd8);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xf0);
      bVar3 = *(byte *)(lVar9 + lVar6);
      if ((bVar3 & 4) == 0) {
        if ((bVar3 & 8) != 0) {
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x120) + lVar9 * 4);
          lVar7 = *(longlong *)(param_1 + 8);
          fVar2 = *(float *)(*(longlong *)(lVar7 + 0xd8) + (longlong)iVar4 * 4);
          if ((local_c8[0] & 0x60) == 0) {
            if (0.0 < fVar2) {
              if (fVar2 < 10.0) {
                if (1.0 < fVar2) {
                  fVar16 = fVar2 - 1.0;
                }
              }
              else {
                fVar16 = 10.0;
              }
            }
            *(float *)(lVar5 + lVar9 * 4) = fVar16;
          }
          else {
            iVar14 = *(int *)(*(longlong *)(lVar7 + 0x78) + (longlong)(iVar4 * 2) * 4 +
                             (ulonglong)(*(byte *)(*(longlong *)(param_1 + 0x168) + lVar9) >> 3 & 3)
                             * 4) * 2;
            iVar4 = *(int *)(*(longlong *)(lVar7 + 0x150) + (longlong)iVar14 * 4);
            lVar7 = *(longlong *)(lVar7 + 0x168) +
                    (longlong)*(int *)(*(longlong *)(lVar7 + 0x150) + (longlong)(iVar14 + 1) * 4) *
                    4;
            iVar14 = 0;
            lVar12 = 0;
            if (3 < iVar4) {
              piVar11 = (int *)(lVar7 + 8);
              lVar13 = -lVar7;
              uVar8 = (iVar4 - 4U >> 2) + 1;
              uVar10 = (ulonglong)uVar8;
              iVar14 = uVar8 * 4;
              lVar12 = (ulonglong)uVar8 * 4;
              do {
                *(undefined4 *)(local_a8 + (longlong)piVar11 + lVar13 + -8) =
                     *(undefined4 *)
                      (*(longlong *)(*(longlong *)(param_1 + 8) + 0xd8) + (longlong)piVar11[-2] * 4)
                ;
                *(undefined4 *)(local_a8 + (longlong)piVar11 + lVar13 + -4) =
                     *(undefined4 *)
                      (*(longlong *)(*(longlong *)(param_1 + 8) + 0xd8) + (longlong)piVar11[-1] * 4)
                ;
                *(undefined4 *)((longlong)local_a8 + lVar13 + (longlong)piVar11) =
                     *(undefined4 *)
                      (*(longlong *)(*(longlong *)(param_1 + 8) + 0xd8) + (longlong)*piVar11 * 4);
                *(undefined4 *)(local_a8 + lVar13 + 4 + (longlong)piVar11) =
                     *(undefined4 *)
                      (*(longlong *)(*(longlong *)(param_1 + 8) + 0xd8) + (longlong)piVar11[1] * 4);
                piVar11 = piVar11 + 4;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            if (iVar14 < iVar4) {
              lVar12 = lVar12 * 4;
              uVar10 = (ulonglong)(uint)(iVar4 - iVar14);
              do {
                *(undefined4 *)(local_a8 + lVar12) =
                     *(undefined4 *)
                      (*(longlong *)(*(longlong *)(param_1 + 8) + 0xd8) +
                      (longlong)*(int *)(lVar7 + lVar12) * 4);
                lVar12 = lVar12 + 4;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            uVar15 = FUN_143914070(local_c8,fVar2,iVar4,local_a8);
            *(undefined4 *)(lVar5 + lVar9 * 4) = uVar15;
            lVar12 = local_c0;
          }
          if (*(float *)(lVar5 + lVar9 * 4) <= 0.0) {
            pbVar1 = (byte *)(lVar9 + lVar6);
            *pbVar1 = *pbVar1 & 0xf7;
          }
        }
      }
      else {
        *(undefined4 *)(lVar5 + lVar9 * 4) = 0x41200000;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar12);
  }
  FMemory::operator_delete(local_58);
  return;
}



// FUNCTION 1439211a0 FUN_1439211a0 body=470 status=ok
// SIG undefined FUN_1439211a0(void)

void FUN_1439211a0(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong lVar9;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined8 uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  iVar7 = (int)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1d0) -
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x1c8) >> 3);
  lVar9 = 0;
  if (0 < iVar7) {
    puVar1 = (ulonglong *)(param_1 + 0x1e0);
    do {
      uVar6 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c8) + lVar9 * 8);
      local_res18 = operator_new(0xd8);
      if (local_res18 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_14391b1f0(local_res18,*(undefined8 *)(param_1 + 0x10));
      }
      local_res8 = uVar5;
      local_res20 = operator_new(0x40);
      if (local_res20 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_14391d110(local_res20,param_1,uVar6,uVar5,uVar10);
      }
      local_res10 = uVar6;
      FUN_14391d180(uVar6);
      lVar2 = *(longlong *)(param_1 + 0x10);
      puVar8 = (ulonglong *)(lVar2 + 0x1c8);
      puVar3 = *(undefined8 **)(lVar2 + 0x1d0);
      if ((&local_res8 < puVar3) && (puVar4 = (undefined8 *)*puVar8, puVar4 <= &local_res8)) {
        if (puVar3 == *(undefined8 **)(lVar2 + 0x1d8)) {
          FUN_143915fe0(puVar8,1);
        }
        if (*(undefined8 **)(lVar2 + 0x1d0) != (undefined8 *)0x0) {
          **(undefined8 **)(lVar2 + 0x1d0) =
               *(undefined8 *)(*puVar8 + ((longlong)&local_res8 - (longlong)puVar4 >> 3) * 8);
        }
      }
      else {
        if (puVar3 == *(undefined8 **)(lVar2 + 0x1d8)) {
          FUN_143915fe0(puVar8,1);
        }
        if (*(undefined8 **)(lVar2 + 0x1d0) != (undefined8 *)0x0) {
          **(undefined8 **)(lVar2 + 0x1d0) = uVar5;
        }
      }
      *(longlong *)(lVar2 + 0x1d0) = *(longlong *)(lVar2 + 0x1d0) + 8;
      puVar3 = *(undefined8 **)(param_1 + 0x1e8);
      if ((&local_res10 < puVar3) && (puVar4 = (undefined8 *)*puVar1, puVar4 <= &local_res10)) {
        if (puVar3 == *(undefined8 **)(param_1 + 0x1f0)) {
          FUN_143915fe0(puVar1,1);
        }
        if (*(undefined8 **)(param_1 + 0x1e8) != (undefined8 *)0x0) {
          **(undefined8 **)(param_1 + 0x1e8) =
               *(undefined8 *)(*puVar1 + ((longlong)&local_res10 - (longlong)puVar4 >> 3) * 8);
        }
      }
      else {
        if (puVar3 == *(undefined8 **)(param_1 + 0x1f0)) {
          FUN_143915fe0(puVar1,1);
        }
        if (*(undefined8 **)(param_1 + 0x1e8) != (undefined8 *)0x0) {
          **(undefined8 **)(param_1 + 0x1e8) = uVar6;
        }
      }
      *(longlong *)(param_1 + 0x1e8) = *(longlong *)(param_1 + 0x1e8) + 8;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar7);
  }
  return;
}



// FUNCTION 143921380 BeginDestroy body=35 status=ok
// SIG undefined BeginDestroy(void)

void UPawnAction_Move::BeginDestroy(undefined8 param_1)

{
  FUN_143920e30();
  FUN_143921450(param_1);
  FUN_143920930(param_1);
  return;
}



// FUNCTION 1439213b0 FUN_1439213b0 body=157 status=ok
// SIG undefined FUN_1439213b0(void)

void FUN_1439213b0(longlong *param_1,byte *param_2)

{
  int *piVar1;
  int local_res8 [2];
  
  if ((*param_2 & 1) != 0) {
    (**(code **)(*param_1 + 0x18))();
  }
  if ((*param_2 & 2) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  if ((*param_2 & 4) != 0) {
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  if ((*param_2 & 8) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  if ((*param_2 & 0x10) != 0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  if ((*param_2 & 0x20) != 0) {
    (**(code **)(*param_1 + 0x40))(param_1);
  }
  local_res8[0] = 6;
  if (*(int *)((longlong)param_1 + 0x1c) == 0) {
    local_res8[0] = 4;
  }
  piVar1 = local_res8;
  if (local_res8[0] <= *(int *)(param_1[1] + 0x14)) {
    piVar1 = (int *)(param_1[1] + 0x14);
  }
  *(int *)(param_1[2] + 0x14) = *piVar1;
  return;
}



// FUNCTION 143921450 FUN_143921450 body=898 status=ok
// SIG undefined FUN_143921450(void)

void FUN_143921450(longlong param_1)

{
  ushort *puVar1;
  float fVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x1a0) =
       *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x198);
  std::vector<unsigned_int,std::allocator<bool>_>::resize
            (*(longlong *)(param_1 + 0x10) + 0x198,
             (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 8),&DAT_145c61150);
  lVar6 = (longlong)*(int *)(param_1 + 0x54);
  lVar7 = (longlong)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x54));
  if (lVar6 < lVar7) {
    if (3 < lVar7 - lVar6) {
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b0);
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x198);
        uVar3 = *(ushort *)(lVar4 + lVar6 * 2);
        if ((uVar3 & 0x10) == 0) {
          if ((uVar3 & 0x20) != 0) {
            fVar2 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x198) +
                              (longlong)*(int *)(*(longlong *)(param_1 + 0x138) + lVar6 * 4) * 4);
            if (fVar2 <= 0.0) {
LAB_14392153a:
              fVar8 = 0.0;
            }
            else {
              fVar8 = 10.0;
              if (fVar2 < 10.0) {
                if (fVar2 <= 1.0) goto LAB_14392153a;
                fVar8 = fVar2 - 1.0;
              }
            }
            *(float *)(lVar5 + lVar6 * 4) = fVar8;
            if (fVar8 <= 0.0) {
              puVar1 = (ushort *)(lVar4 + lVar6 * 2);
              *puVar1 = *puVar1 & 0xffdf;
            }
          }
        }
        else {
          *(undefined4 *)(lVar5 + lVar6 * 4) = 0x41200000;
        }
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b0);
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x198);
        uVar3 = *(ushort *)(lVar4 + 2 + lVar6 * 2);
        if ((uVar3 & 0x10) == 0) {
          if ((uVar3 & 0x20) != 0) {
            fVar2 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x198) +
                              (longlong)*(int *)(*(longlong *)(param_1 + 0x138) + 4 + lVar6 * 4) * 4
                              );
            if (fVar2 <= 0.0) {
LAB_1439215ca:
              fVar8 = 0.0;
            }
            else {
              fVar8 = 10.0;
              if (fVar2 < 10.0) {
                if (fVar2 <= 1.0) goto LAB_1439215ca;
                fVar8 = fVar2 - 1.0;
              }
            }
            *(float *)(lVar5 + 4 + lVar6 * 4) = fVar8;
            if (fVar8 <= 0.0) {
              puVar1 = (ushort *)(lVar4 + 2 + lVar6 * 2);
              *puVar1 = *puVar1 & 0xffdf;
            }
          }
        }
        else {
          *(undefined4 *)(lVar5 + 4 + lVar6 * 4) = 0x41200000;
        }
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b0);
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x198);
        uVar3 = *(ushort *)(lVar4 + 4 + lVar6 * 2);
        if ((uVar3 & 0x10) == 0) {
          if ((uVar3 & 0x20) != 0) {
            fVar2 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x198) +
                              (longlong)*(int *)(*(longlong *)(param_1 + 0x138) + 8 + lVar6 * 4) * 4
                              );
            if (fVar2 <= 0.0) {
LAB_14392165c:
              fVar8 = 0.0;
            }
            else {
              fVar8 = 10.0;
              if (fVar2 < 10.0) {
                if (fVar2 <= 1.0) goto LAB_14392165c;
                fVar8 = fVar2 - 1.0;
              }
            }
            *(float *)(lVar5 + 8 + lVar6 * 4) = fVar8;
            if (fVar8 <= 0.0) {
              puVar1 = (ushort *)(lVar4 + 4 + lVar6 * 2);
              *puVar1 = *puVar1 & 0xffdf;
            }
          }
        }
        else {
          *(undefined4 *)(lVar5 + 8 + lVar6 * 4) = 0x41200000;
        }
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b0);
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x198);
        uVar3 = *(ushort *)(lVar4 + 6 + lVar6 * 2);
        if ((uVar3 & 0x10) == 0) {
          if ((uVar3 & 0x20) != 0) {
            fVar2 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x198) +
                              (longlong)*(int *)(*(longlong *)(param_1 + 0x138) + 0xc + lVar6 * 4) *
                              4);
            if (fVar2 <= 0.0) {
LAB_1439216ee:
              fVar8 = 0.0;
            }
            else {
              fVar8 = 10.0;
              if (fVar2 < 10.0) {
                if (fVar2 <= 1.0) goto LAB_1439216ee;
                fVar8 = fVar2 - 1.0;
              }
            }
            *(float *)(lVar5 + 0xc + lVar6 * 4) = fVar8;
            if (fVar8 <= 0.0) {
              puVar1 = (ushort *)(lVar4 + 6 + lVar6 * 2);
              *puVar1 = *puVar1 & 0xffdf;
            }
          }
        }
        else {
          *(undefined4 *)(lVar5 + 0xc + lVar6 * 4) = 0x41200000;
        }
        lVar6 = lVar6 + 4;
      } while (lVar6 < lVar7 + -3);
    }
    for (; lVar6 < lVar7; lVar6 = lVar6 + 1) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b0);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x198);
      uVar3 = *(ushort *)(lVar4 + lVar6 * 2);
      if ((uVar3 & 0x10) == 0) {
        if ((uVar3 & 0x20) != 0) {
          fVar2 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x198) +
                            (longlong)*(int *)(*(longlong *)(param_1 + 0x138) + lVar6 * 4) * 4);
          if (fVar2 <= 0.0) {
LAB_143921793:
            fVar8 = 0.0;
          }
          else {
            fVar8 = 10.0;
            if (fVar2 < 10.0) {
              if (fVar2 <= 1.0) goto LAB_143921793;
              fVar8 = fVar2 - 1.0;
            }
          }
          *(float *)(lVar5 + lVar6 * 4) = fVar8;
          if (fVar8 <= 0.0) {
            puVar1 = (ushort *)(lVar4 + lVar6 * 2);
            *puVar1 = *puVar1 & 0xffdf;
          }
        }
      }
      else {
        *(undefined4 *)(lVar5 + lVar6 * 4) = 0x41200000;
      }
    }
  }
  return;
}



// FUNCTION 1439217e0 FUN_1439217e0 body=47 status=ok
// SIG undefined FUN_1439217e0(void)

undefined8 * FUN_1439217e0(undefined8 *param_1)

{
  FUN_14391e6f0();
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *param_1 = OpenSubdiv::v3_2_0::Vtr::internal::QuadRefinement::vftable;
  *(undefined4 *)(param_1 + 4) = 4;
  return param_1;
}



// FUNCTION 143921810 FUN_143921810 body=15 status=ok
// SIG undefined FUN_143921810(void)

void FUN_143921810(undefined8 *param_1)

{
  *param_1 = OpenSubdiv::v3_2_0::Vtr::internal::QuadRefinement::vftable;
  FUN_14391e8a0();
  return;
}



// FUNCTION 143921820 FUN_143921820 body=52 status=ok
// SIG undefined FUN_143921820(void)

undefined8 FUN_143921820(undefined8 param_1,ulonglong param_2)

{
  FUN_143921810();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f8);
  }
  return param_1;
}



// FUNCTION 143921860 FUN_143921860 body=299 status=ok
// SIG undefined FUN_143921860(void)

void FUN_143921860(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 local_res8 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  piVar4 = *(int **)(param_1 + 8);
  local_res8[0] = 0;
  lVar5 = *(longlong *)(piVar4 + 0xe);
  lVar6 = *(longlong *)(piVar4 + 0xc);
  lVar7 = *(longlong *)(piVar4 + 0x14);
  lVar8 = *(longlong *)(piVar4 + 0x20);
  lVar9 = *(longlong *)(piVar4 + 0x12);
  lVar10 = *(longlong *)(piVar4 + 0x1e);
  iVar1 = *piVar4;
  iVar2 = piVar4[1];
  iVar3 = piVar4[2];
  lVar11 = *(longlong *)(piVar4 + 8);
  lVar12 = *(longlong *)(piVar4 + 6);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(piVar4 + 6);
  *(ulonglong *)(param_1 + 0x60) = CONCAT44(uStack_1c,(int)(lVar11 - lVar12 >> 2));
  lVar11 = *(longlong *)(piVar4 + 8);
  lVar12 = *(longlong *)(piVar4 + 6);
  local_28 = (undefined4)*(undefined8 *)(piVar4 + 6);
  uStack_24 = (undefined4)((ulonglong)*(undefined8 *)(piVar4 + 6) >> 0x20);
  *(undefined4 *)(param_1 + 0x68) = local_28;
  *(undefined4 *)(param_1 + 0x6c) = uStack_24;
  *(int *)(param_1 + 0x70) = (int)(lVar11 - lVar12 >> 2);
  *(undefined4 *)(param_1 + 0x74) = uStack_1c;
  std::vector<unsigned_int,std::allocator<bool>_>::resize
            (param_1 + 0x78,(longlong)(int)(lVar5 - lVar6 >> 2),local_res8);
  std::vector<unsigned_int,std::allocator<bool>_>::resize
            (param_1 + 0x90,(longlong)(int)(lVar7 - lVar9 >> 2),local_res8);
  std::vector<unsigned_int,std::allocator<bool>_>::resize
            (param_1 + 0xc0,(longlong)(int)(lVar8 - lVar10 >> 2),local_res8);
  std::vector<unsigned_int,std::allocator<bool>_>::resize(param_1 + 0xa8,(longlong)iVar1,local_res8)
  ;
  std::vector<unsigned_int,std::allocator<bool>_>::resize(param_1 + 0xd8,(longlong)iVar2,local_res8)
  ;
  std::vector<unsigned_int,std::allocator<bool>_>::resize(param_1 + 0xf0,(longlong)iVar3,local_res8)
  ;
  return;
}



// FUNCTION 143921990 FUN_143921990 body=709 status=ok
// SIG undefined FUN_143921990(void)

void FUN_143921990(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  byte *pbVar12;
  int *piVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  
  piVar13 = *(int **)(param_1 + 8);
  iVar11 = 0;
  if (0 < *piVar13) {
    lVar17 = 0;
    do {
      pbVar12 = (byte *)(*(longlong *)(param_1 + 0x198) + lVar17);
      puVar1 = (undefined4 *)
               (*(longlong *)(param_1 + 0x78) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x58) + 4 + lVar17 * 8) * 4);
      puVar2 = (undefined4 *)
               (*(longlong *)(param_1 + 0x90) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x68) + 4 + lVar17 * 8) * 4);
      iVar15 = *(int *)(*(longlong *)(piVar13 + 6) + 4 + lVar17 * 8);
      lVar14 = *(longlong *)(piVar13 + 0xc);
      uVar4 = *(uint *)(*(longlong *)(piVar13 + 6) + lVar17 * 8);
      if ((*pbVar12 & 1) == 0) {
        bVar6 = false;
        uVar7 = 0;
        lVar9 = 0;
        if (0 < (int)uVar4) {
          do {
            if ((*(byte *)((longlong)*(int *)(lVar14 + (longlong)iVar15 * 4 + lVar9 * 4) +
                          *(longlong *)(param_1 + 0x1c8)) & 1) != 0) {
              uVar5 = uVar7;
              if (lVar9 == 0) {
                uVar5 = uVar4;
              }
              puVar1[lVar9] = 1;
              bVar6 = true;
              puVar2[lVar9] = 1;
              puVar2[(int)(uVar5 - 1)] = 1;
            }
            uVar7 = uVar7 + 1;
            lVar9 = lVar9 + 1;
          } while ((int)uVar7 < (int)uVar4);
          if (bVar6) {
            *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + lVar17 * 4) = 1;
            lVar14 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
            piVar13 = (int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x48) +
                             (longlong)*(int *)(lVar14 + 4 + lVar17 * 8) * 4);
            uVar4 = *(uint *)(lVar14 + lVar17 * 8);
            uVar10 = (ulonglong)uVar4;
            if (uVar4 == 4) {
              lVar14 = *(longlong *)(param_1 + 0x1b0);
              *pbVar12 = ((*(byte *)(piVar13[3] + lVar14) & 2) * '\x02' |
                         *(byte *)(piVar13[2] + lVar14) & 6) << 2 |
                         ((*(byte *)(piVar13[1] + lVar14) & 0xfe) * '\x02' |
                         *(byte *)(*piVar13 + lVar14)) & 0x1e | *pbVar12 & 0xe1;
            }
            else if (uVar4 == 3) {
              lVar14 = *(longlong *)(param_1 + 0x1b0);
              *pbVar12 = ((*(byte *)(piVar13[1] + lVar14) & 0xfe) * '\x02' |
                         *(byte *)(*piVar13 + lVar14)) & 0x1e |
                         (*(byte *)(piVar13[2] + lVar14) & 6) << 2 | *pbVar12 & 0xe1;
            }
            else {
              *pbVar12 = *pbVar12 & 0xe1;
              if (0 < (int)uVar4) {
                do {
                  bVar3 = *pbVar12;
                  iVar15 = *piVar13;
                  piVar13 = piVar13 + 1;
                  *pbVar12 = ((*(byte *)((longlong)iVar15 + *(longlong *)(param_1 + 0x1b0)) | bVar3)
                             ^ bVar3) & 0x1e ^ bVar3;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
            }
          }
        }
      }
      else {
        iVar15 = 0;
        lVar14 = 0;
        if (0 < (int)uVar4) {
          iVar16 = iVar15;
          if ((3 < uVar4) &&
             ((puVar1 + (int)(uVar4 - 1) < puVar2 ||
              (iVar16 = 0, puVar2 + (int)(uVar4 - 1) < puVar1)))) {
            uVar7 = uVar4 & 0x80000003;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
            }
            do {
              iVar15 = iVar15 + 4;
              lVar14 = lVar14 + 4;
            } while (lVar14 < (int)(uVar4 - uVar7));
            iVar16 = (uVar4 - uVar7) + 3;
            uVar10 = (ulonglong)((int)(iVar16 + (iVar16 >> 0x1f & 3U)) >> 2);
            puVar8 = puVar1;
            for (lVar9 = (uVar10 & 0xfffffffffffffff) << 2; lVar9 != 0; lVar9 = lVar9 + -1) {
              *puVar8 = 2;
              puVar8 = puVar8 + 1;
            }
            puVar8 = puVar2;
            for (lVar9 = (uVar10 & 0xfffffffffffffff) << 2; iVar16 = iVar15, lVar9 != 0;
                lVar9 = lVar9 + -1) {
              *puVar8 = 2;
              puVar8 = puVar8 + 1;
            }
          }
          if (iVar16 < (int)uVar4) {
            puVar8 = puVar2 + lVar14;
            uVar10 = (ulonglong)(uVar4 - iVar16);
            do {
              *(undefined4 *)(((longlong)puVar1 - (longlong)puVar2) + (longlong)puVar8) = 2;
              *puVar8 = 2;
              puVar8 = puVar8 + 1;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + lVar17 * 4) = 2;
        *pbVar12 = *pbVar12 & 0xe1;
      }
      piVar13 = *(int **)(param_1 + 8);
      iVar11 = iVar11 + 1;
      lVar17 = lVar17 + 1;
    } while (iVar11 < *piVar13);
  }
  return;
}



// FUNCTION 143921c60 FUN_143921c60 body=231 status=ok
// SIG undefined FUN_143921c60(void)

void FUN_143921c60(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 8);
  lVar5 = *(longlong *)(lVar4 + 0x38);
  lVar1 = *(longlong *)(lVar4 + 0x30);
  lVar2 = *(longlong *)(lVar4 + 0xb0);
  lVar4 = *(longlong *)(lVar4 + 0xa8);
  FUN_143918510(*(longlong *)(param_1 + 0x10) + 0x90,
                (longlong)(*(int *)(*(longlong *)(param_1 + 0x10) + 4) * 2));
  lVar4 = (longlong)(((int)(lVar5 - lVar1 >> 2) + (int)(lVar2 - lVar4 >> 2)) * 2);
  FUN_143918510(*(longlong *)(param_1 + 0x10) + 0xa8,lVar4);
  FUN_143918420(*(longlong *)(param_1 + 0x10) + 0xc0,lVar4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10) =
       *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x10);
  FUN_143922050(param_1);
  FUN_143921d50(param_1);
  lVar4 = *(longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(lVar4 + 4) * 2;
  lVar5 = (longlong)
          (*(int *)(*(longlong *)(lVar4 + 0x90) + (longlong)(iVar3 + -2) * 4) +
          *(int *)(*(longlong *)(lVar4 + 0x90) + (longlong)(iVar3 + -1) * 4));
  FUN_143918510(lVar4 + 0xa8,lVar5);
  FUN_143918420(*(longlong *)(param_1 + 0x10) + 0xc0,lVar5);
  return;
}



// FUNCTION 143921d50 FUN_143921d50 body=760 status=ok
// SIG undefined FUN_143921d50(void)

void FUN_143921d50(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  ushort *puVar18;
  ushort *puVar19;
  int *piVar20;
  ushort uVar21;
  uint uVar22;
  int *piVar23;
  ulonglong uVar24;
  int local_res10;
  int local_res18;
  longlong local_80;
  
  local_res10 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 4)) {
    local_80 = 0;
    local_res18 = 0;
    do {
      uVar22 = 0;
      piVar15 = (int *)(*(longlong *)(param_1 + 0xc0) + (longlong)local_res18 * 4);
      if ((*piVar15 != -1) || (piVar15[1] != -1)) {
        lVar5 = *(longlong *)(param_1 + 8);
        lVar6 = *(longlong *)(lVar5 + 0x90);
        lVar7 = *(longlong *)(lVar5 + 0xa8);
        iVar1 = *(int *)(lVar6 + 4 + local_80);
        uVar2 = *(uint *)(lVar6 + local_80);
        iVar3 = *(int *)(lVar6 + 4 + local_80);
        lVar6 = *(longlong *)(lVar5 + 0xc0);
        piVar11 = (int *)(*(longlong *)(lVar5 + 0x78) + (longlong)local_res18 * 4);
        piVar20 = piVar11;
        do {
          uVar17 = 0;
          iVar4 = *(int *)(((longlong)piVar15 - (longlong)piVar11) + (longlong)piVar20);
          if (iVar4 != -1) {
            lVar8 = *(longlong *)(param_1 + 0x10);
            lVar5 = (longlong)(iVar4 * 2) * 4;
            puVar14 = (uint *)(lVar5 + *(longlong *)(lVar8 + 0x90));
            *puVar14 = uVar2;
            uVar9 = uVar17;
            if (iVar4 != 0) {
              uVar9 = puVar14[-2] + puVar14[-1];
            }
            puVar14[1] = uVar9;
            uVar9 = *(uint *)(lVar8 + 0x10);
            if ((int)*(uint *)(lVar8 + 0x10) < (int)uVar2) {
              uVar9 = uVar2;
            }
            *(uint *)(lVar8 + 0x10) = uVar9;
            lVar8 = *(longlong *)(param_1 + 0x10);
            lVar12 = (longlong)(iVar4 * 2 + 1);
            piVar16 = (int *)(*(longlong *)(lVar8 + 0xa8) +
                             (longlong)*(int *)(*(longlong *)(lVar8 + 0x90) + lVar12 * 4) * 4);
            puVar19 = (ushort *)
                      (*(longlong *)(lVar8 + 0xc0) +
                      (longlong)*(int *)(*(longlong *)(lVar8 + 0x90) + lVar12 * 4) * 2);
            if (0 < (int)uVar2) {
              uVar24 = (ulonglong)uVar2;
              puVar18 = (ushort *)(lVar6 + (longlong)iVar3 * 2);
              piVar23 = (int *)(lVar7 + (longlong)iVar1 * 4);
              uVar17 = 0;
              do {
                uVar21 = *puVar18;
                lVar12 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
                lVar13 = (longlong)(*piVar23 * 2 + 1);
                lVar8 = (longlong)(*piVar23 * 2) * 4;
                iVar4 = *(int *)(lVar8 + lVar12);
                uVar9 = uVar22;
                if (*piVar11 != piVar11[1]) {
                  uVar9 = (uint)(*(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x30) +
                                          (longlong)*(int *)(lVar12 + lVar13 * 4) * 4 +
                                         (ulonglong)uVar21 * 4) != *piVar20);
                }
                iVar10 = uVar9 + uVar21;
                if (iVar10 == *(int *)(lVar8 + *(longlong *)(param_1 + 0x58))) {
                  iVar10 = 0;
                }
                iVar10 = *(int *)(*(longlong *)(param_1 + 0x78) +
                                  (longlong)*(int *)(lVar13 * 4 + *(longlong *)(param_1 + 0x58)) * 4
                                 + (longlong)iVar10 * 4);
                if (iVar10 != -1) {
                  *piVar16 = iVar10;
                  if (iVar4 != 4) {
                    uVar21 = -(ushort)(uVar9 != 0) & 3;
                  }
                  uVar17 = uVar17 + 1;
                  *puVar19 = uVar21;
                  piVar16 = piVar16 + 1;
                  puVar19 = puVar19 + 1;
                }
                piVar23 = piVar23 + 1;
                puVar18 = puVar18 + 1;
                uVar24 = uVar24 - 1;
              } while (uVar24 != 0);
            }
            *(uint *)(lVar5 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x90)) = uVar17;
          }
          piVar20 = piVar20 + 1;
          uVar22 = uVar22 + 1;
        } while ((int)uVar22 < 2);
      }
      local_res10 = local_res10 + 1;
      local_res18 = local_res18 + 2;
      local_80 = local_80 + 8;
    } while (local_res10 < *(int *)(*(longlong *)(param_1 + 8) + 4));
  }
  return;
}



// FUNCTION 143922050 FUN_143922050 body=514 status=ok
// SIG undefined FUN_143922050(void)

void FUN_143922050(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  short *psVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  short sVar8;
  ushort uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  undefined4 *puVar13;
  longlong lVar14;
  int iVar15;
  int *piVar16;
  longlong lVar17;
  int local_res8;
  longlong local_res18;
  
  local_res8 = 0;
  if (0 < **(int **)(param_1 + 8)) {
    local_res18 = 0;
    do {
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x58) + local_res18);
      piVar1 = (int *)(*(longlong *)(param_1 + 0x78) +
                      (longlong)*(int *)(*(longlong *)(param_1 + 0x58) + 4 + local_res18) * 4);
      iVar6 = *(int *)(local_res18 + 4 + *(longlong *)(param_1 + 0x68));
      lVar7 = *(longlong *)(param_1 + 0x90);
      if (0 < iVar5) {
        iVar15 = 1;
        lVar14 = (longlong)iVar5;
        piVar16 = piVar1;
        do {
          iVar10 = *(int *)(((lVar7 + (longlong)iVar6 * 4) - (longlong)piVar1) + (longlong)piVar16);
          if (iVar10 != -1) {
            lVar17 = *(longlong *)(param_1 + 0x10);
            lVar4 = (longlong)(iVar10 * 2) * 4;
            puVar13 = (undefined4 *)(*(longlong *)(lVar17 + 0x90) + lVar4);
            *puVar13 = 2;
            if (iVar10 == 0) {
              iVar12 = 0;
            }
            else {
              iVar12 = puVar13[-2] + puVar13[-1];
            }
            puVar13[1] = iVar12;
            iVar12 = *(int *)(lVar17 + 0x10);
            if (*(int *)(lVar17 + 0x10) < 2) {
              iVar12 = 2;
            }
            *(int *)(lVar17 + 0x10) = iVar12;
            lVar17 = *(longlong *)(param_1 + 0x10);
            lVar11 = (longlong)(iVar10 * 2 + 1);
            piVar2 = (int *)(*(longlong *)(lVar17 + 0xa8) +
                            (longlong)*(int *)(*(longlong *)(lVar17 + 0x90) + lVar11 * 4) * 4);
            psVar3 = (short *)(*(longlong *)(lVar17 + 0xc0) +
                              (longlong)*(int *)(*(longlong *)(lVar17 + 0x90) + lVar11 * 4) * 2);
            iVar10 = 0;
            if (iVar15 < iVar5) {
              iVar10 = iVar15;
            }
            iVar12 = 0;
            lVar17 = 0;
            if (*piVar16 != -1) {
              *piVar2 = *piVar16;
              iVar12 = 1;
              sVar8 = 1;
              if (iVar5 == 4) {
                sVar8 = (short)iVar10;
              }
              lVar17 = 1;
              *psVar3 = sVar8;
            }
            if (piVar1[iVar10] != -1) {
              piVar2[lVar17] = piVar1[iVar10];
              if ((longlong)iVar5 == 4) {
                uVar9 = (short)iVar10 - 2U & 3;
              }
              else {
                uVar9 = 2;
              }
              psVar3[lVar17] = uVar9;
              iVar12 = iVar12 + 1;
            }
            *(int *)(lVar4 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x90)) = iVar12;
          }
          iVar15 = iVar15 + 1;
          piVar16 = piVar16 + 1;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      local_res8 = local_res8 + 1;
      local_res18 = local_res18 + 8;
    } while (local_res8 < **(int **)(param_1 + 8));
  }
  return;
}



// FUNCTION 143922260 FUN_143922260 body=51 status=ok
// SIG undefined FUN_143922260(void)

void FUN_143922260(longlong param_1)

{
  FUN_143918510(*(longlong *)(param_1 + 0x10) + 0x78,
                (longlong)(*(int *)(*(longlong *)(param_1 + 0x10) + 4) * 2));
  FUN_143922390(param_1);
  FUN_1439222a0(param_1);
  return;
}



// FUNCTION 1439222a0 FUN_1439222a0 body=231 status=ok
// SIG undefined FUN_1439222a0(void)

void FUN_1439222a0(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  lVar6 = *(longlong *)(param_1 + 8);
  iVar7 = 0;
  if (0 < *(int *)(lVar6 + 4)) {
    lVar8 = 0;
    iVar3 = 0;
    do {
      piVar5 = (int *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar3 * 4);
      piVar4 = (int *)(*(longlong *)(lVar6 + 0x78) + (longlong)iVar3 * 4);
      iVar2 = *piVar5;
      if (iVar2 != -1) {
        puVar1 = (undefined4 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x78) + (longlong)(iVar2 * 2) * 4);
        *puVar1 = *(undefined4 *)(lVar8 + *(longlong *)(param_1 + 0xd8));
        puVar1[1] = *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + (longlong)*piVar4 * 4);
      }
      iVar2 = piVar5[1];
      if (iVar2 != -1) {
        puVar1 = (undefined4 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x78) + (longlong)(iVar2 * 2) * 4);
        *puVar1 = *(undefined4 *)(lVar8 + *(longlong *)(param_1 + 0xd8));
        puVar1[1] = *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + (longlong)piVar4[1] * 4);
      }
      lVar6 = *(longlong *)(param_1 + 8);
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + 2;
      lVar8 = lVar8 + 4;
    } while (iVar7 < *(int *)(lVar6 + 4));
  }
  return;
}



// FUNCTION 143922390 FUN_143922390 body=205 status=ok
// SIG undefined FUN_143922390(void)

void FUN_143922390(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  piVar4 = *(int **)(param_1 + 8);
  iVar7 = 0;
  if (0 < *piVar4) {
    lVar6 = 0;
    lVar8 = 0;
    do {
      uVar2 = *(uint *)(*(longlong *)(piVar4 + 6) + lVar6);
      piVar4 = (int *)(*(longlong *)(piVar4 + 0x12) +
                      (longlong)*(int *)(*(longlong *)(piVar4 + 6) + 4 + lVar6) * 4);
      if (0 < (int)uVar2) {
        lVar5 = (*(longlong *)(param_1 + 0x90) +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x68) + 4 + lVar6) * 4) -
                (longlong)piVar4;
        uVar9 = (ulonglong)uVar2;
        do {
          iVar3 = *(int *)(lVar5 + (longlong)piVar4);
          if (iVar3 != -1) {
            puVar1 = (undefined4 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x78) +
                     (longlong)(iVar3 * 2) * 4);
            *puVar1 = *(undefined4 *)(lVar8 + *(longlong *)(param_1 + 0xa8));
            puVar1[1] = *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + (longlong)*piVar4 * 4);
          }
          piVar4 = piVar4 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      piVar4 = *(int **)(param_1 + 8);
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
      lVar8 = lVar8 + 4;
    } while (iVar7 < *piVar4);
  }
  return;
}



// FUNCTION 143922460 FUN_143922460 body=68 status=ok
// SIG undefined FUN_143922460(void)

void FUN_143922460(longlong param_1)

{
  if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) -
       *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) & 0xfffffffffffffffcU) == 0) {
    FUN_143922700();
  }
  FUN_143918510(*(int **)(param_1 + 0x10) + 0x12,(longlong)(**(int **)(param_1 + 0x10) << 2));
  FUN_1439224b0(param_1);
  return;
}



// FUNCTION 1439224b0 FUN_1439224b0 body=591 status=ok
// SIG undefined FUN_1439224b0(void)

void FUN_1439224b0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  int local_res18;
  longlong local_60;
  
  local_res18 = 0;
  if (0 < **(int **)(param_1 + 8)) {
    local_60 = 0;
    do {
      lVar13 = *(longlong *)(param_1 + 8);
      lVar14 = *(longlong *)(lVar13 + 0x30);
      iVar3 = *(int *)(*(longlong *)(lVar13 + 0x18) + 4 + local_60);
      uVar4 = *(uint *)(*(longlong *)(lVar13 + 0x18) + local_60);
      uVar18 = (ulonglong)(int)uVar4;
      lVar13 = *(longlong *)(lVar13 + 0x48) +
               (longlong)*(int *)(*(longlong *)(lVar13 + 0x18) + 4 + local_60) * 4;
      iVar5 = *(int *)(local_60 + 4 + *(longlong *)(param_1 + 0x58));
      lVar15 = *(longlong *)(param_1 + 0x78);
      lVar1 = *(longlong *)(param_1 + 0x90) +
              (longlong)*(int *)(*(longlong *)(param_1 + 0x68) + 4 + local_60) * 4;
      uVar24 = 0;
      if (0 < (int)uVar4) {
        iVar27 = -1;
        uVar23 = uVar18;
        do {
          iVar6 = *(int *)(lVar15 + (longlong)iVar5 * 4 + uVar24 * 4);
          if (iVar6 != -1) {
            iVar20 = iVar27;
            uVar16 = uVar24;
            if (uVar24 == 0) {
              iVar20 = (int)uVar23 + -1;
              uVar16 = uVar18;
            }
            lVar25 = uVar16 - 1;
            lVar22 = (longlong)(*(int *)(lVar25 * 4 + lVar13) * 2);
            lVar26 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x78);
            lVar21 = (longlong)(*(int *)(lVar13 + uVar24 * 4) * 2);
            iVar7 = *(int *)(lVar14 + (longlong)iVar3 * 4 + uVar24 * 4);
            iVar8 = *(int *)(lVar26 + lVar22 * 4);
            if (iVar8 == *(int *)(lVar26 + 4 + lVar22 * 4)) {
              uVar23 = 1;
            }
            else {
              uVar23 = (ulonglong)(iVar8 != iVar7);
            }
            iVar8 = *(int *)(lVar26 + lVar21 * 4);
            uVar19 = 0;
            if (iVar8 != *(int *)(lVar26 + 4 + lVar21 * 4)) {
              uVar19 = (ulonglong)(iVar8 != iVar7);
            }
            uVar9 = *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + (lVar22 + uVar23) * 4);
            uVar10 = *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + (lVar21 + uVar19) * 4);
            uVar11 = *(undefined4 *)(lVar25 * 4 + lVar1);
            uVar12 = *(undefined4 *)(lVar1 + uVar24 * 4);
            puVar2 = (undefined4 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48) +
                     (longlong)
                     *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) +
                             (longlong)(iVar6 * 2 + 1) * 4) * 4);
            if (uVar18 == 4) {
              if (lVar25 == 0) {
                uVar17 = 3;
                lVar26 = 3;
              }
              else {
                uVar17 = iVar20 - 1;
                lVar26 = uVar16 - 2;
                if (lVar26 == 0) {
                  uVar17 = uVar4;
                }
              }
              puVar2[uVar24] = uVar10;
              puVar2[(int)(uVar17 - 1)] = uVar12;
              puVar2[lVar26] = uVar11;
              puVar2[lVar25] = uVar9;
            }
            else {
              *puVar2 = uVar10;
              puVar2[1] = uVar12;
              puVar2[2] = uVar11;
              puVar2[3] = uVar9;
            }
            uVar23 = (ulonglong)uVar4;
          }
          iVar27 = iVar27 + 1;
          uVar24 = uVar24 + 1;
        } while ((longlong)uVar24 < (longlong)uVar18);
      }
      local_res18 = local_res18 + 1;
      local_60 = local_60 + 8;
    } while (local_res18 < **(int **)(param_1 + 8));
  }
  return;
}



// FUNCTION 143922700 FUN_143922700 body=108 status=ok
// SIG undefined FUN_143922700(void)

void FUN_143922700(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_143918510(*(int **)(param_1 + 0x10) + 6,(longlong)(**(int **)(param_1 + 0x10) * 2));
  iVar2 = 0;
  if (0 < **(int **)(param_1 + 0x10)) {
    lVar3 = 0;
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(lVar3 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18)) = 4;
      *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + -4 + lVar3 + 8) = iVar1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < **(int **)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 143922770 FUN_143922770 body=68 status=ok
// SIG undefined FUN_143922770(void)

void FUN_143922770(longlong param_1)

{
  if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) -
       *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) & 0xfffffffffffffffcU) == 0) {
    FUN_143922700();
  }
  FUN_143918510(*(int **)(param_1 + 0x10) + 0xc,(longlong)(**(int **)(param_1 + 0x10) << 2));
  FUN_1439227c0(param_1);
  return;
}



// FUNCTION 1439227c0 FUN_1439227c0 body=531 status=ok
// SIG undefined FUN_1439227c0(void)

void FUN_1439227c0(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  int local_res18;
  longlong local_res20;
  longlong local_50;
  
  local_res18 = 0;
  if (0 < **(int **)(param_1 + 8)) {
    local_50 = 0;
    local_res20 = 0;
    do {
      lVar10 = *(longlong *)(param_1 + 8);
      lVar11 = *(longlong *)(lVar10 + 0x30);
      iVar2 = *(int *)(*(longlong *)(lVar10 + 0x18) + 4 + local_50);
      uVar3 = *(uint *)(*(longlong *)(lVar10 + 0x18) + local_50);
      uVar15 = (ulonglong)(int)uVar3;
      lVar10 = *(longlong *)(lVar10 + 0x48) +
               (longlong)*(int *)(*(longlong *)(lVar10 + 0x18) + 4 + local_50) * 4;
      iVar4 = *(int *)(local_50 + 4 + *(longlong *)(param_1 + 0x58));
      uVar18 = 0;
      lVar12 = *(longlong *)(param_1 + 0x78);
      if (0 < (int)uVar3) {
        iVar17 = -1;
        uVar16 = uVar15;
        do {
          iVar5 = *(int *)(lVar12 + (longlong)iVar4 * 4 + uVar18 * 4);
          if (iVar5 != -1) {
            iVar21 = iVar17;
            uVar13 = uVar18;
            if (uVar18 == 0) {
              iVar21 = (int)uVar16 + -1;
              uVar13 = uVar15;
            }
            lVar19 = uVar13 - 1;
            uVar6 = *(undefined4 *)(local_res20 + *(longlong *)(param_1 + 0xa8));
            uVar7 = *(undefined4 *)
                     (*(longlong *)(param_1 + 0xd8) + (longlong)*(int *)(lVar10 + lVar19 * 4) * 4);
            uVar8 = *(undefined4 *)
                     (*(longlong *)(param_1 + 0xf0) +
                     (longlong)*(int *)(lVar11 + (longlong)iVar2 * 4 + uVar18 * 4) * 4);
            uVar9 = *(undefined4 *)
                     (*(longlong *)(param_1 + 0xd8) + (longlong)*(int *)(lVar10 + uVar18 * 4) * 4);
            puVar1 = (undefined4 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
                     (longlong)
                     *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) +
                             (longlong)(iVar5 * 2 + 1) * 4) * 4);
            if (uVar15 == 4) {
              if (lVar19 == 0) {
                uVar14 = 3;
                lVar20 = 3;
              }
              else {
                uVar14 = iVar21 - 1;
                lVar20 = uVar13 - 2;
                if (lVar20 == 0) {
                  uVar14 = uVar3;
                }
              }
              puVar1[uVar18] = uVar8;
              puVar1[(int)(uVar14 - 1)] = uVar9;
              puVar1[lVar20] = uVar6;
              puVar1[lVar19] = uVar7;
            }
            else {
              *puVar1 = uVar8;
              puVar1[1] = uVar9;
              puVar1[2] = uVar6;
              puVar1[3] = uVar7;
            }
            uVar16 = (ulonglong)uVar3;
          }
          iVar17 = iVar17 + 1;
          uVar18 = uVar18 + 1;
        } while ((longlong)uVar18 < (longlong)uVar15);
      }
      local_res18 = local_res18 + 1;
      local_50 = local_50 + 8;
      local_res20 = local_res20 + 4;
    } while (local_res18 < **(int **)(param_1 + 8));
  }
  return;
}



// FUNCTION 1439229e0 FUN_1439229e0 body=279 status=ok
// SIG undefined FUN_1439229e0(void)

void FUN_1439229e0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = *(longlong *)(param_1 + 8);
  lVar8 = *(longlong *)(lVar7 + 0x38);
  lVar2 = *(longlong *)(lVar7 + 0x30);
  lVar3 = *(longlong *)(lVar7 + 0x170);
  lVar4 = *(longlong *)(lVar7 + 0x168);
  lVar5 = *(longlong *)(lVar7 + 0xb0);
  lVar6 = *(longlong *)(lVar7 + 0xa8);
  iVar1 = *(int *)(lVar7 + 4);
  FUN_143918510(*(longlong *)(param_1 + 0x10) + 0x150,
                (longlong)(*(int *)(*(longlong *)(param_1 + 0x10) + 8) * 2));
  lVar7 = (longlong)
          ((int)(lVar8 - lVar2 >> 2) + (int)(lVar3 - lVar4 >> 2) + (int)(lVar5 - lVar6 >> 2) +
          iVar1 * 2);
  FUN_143918510(*(longlong *)(param_1 + 0x10) + 0x168,lVar7);
  FUN_143918420(*(longlong *)(param_1 + 0x10) + 0x180,lVar7);
  if (*(int *)(param_1 + 0x54) == 0) {
    FUN_143922f60();
    FUN_143922df0(param_1);
    FUN_143922b00(param_1);
  }
  else {
    FUN_143922df0(param_1);
    FUN_143922b00(param_1);
    FUN_143922f60(param_1);
  }
  lVar7 = *(longlong *)(param_1 + 0x10);
  iVar1 = *(int *)(lVar7 + 8) * 2;
  lVar8 = (longlong)
          (*(int *)(*(longlong *)(lVar7 + 0x150) + (longlong)(iVar1 + -2) * 4) +
          *(int *)(*(longlong *)(lVar7 + 0x150) + (longlong)(iVar1 + -1) * 4));
  FUN_143918510(lVar7 + 0x168,lVar8);
  FUN_143918420(*(longlong *)(param_1 + 0x10) + 0x180,lVar8);
  return;
}



// FUNCTION 143922b00 FUN_143922b00 body=743 status=ok
// SIG undefined FUN_143922b00(void)

void FUN_143922b00(longlong param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int *piVar17;
  longlong lVar18;
  int *piVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  int local_res8;
  int local_res10;
  longlong local_res18;
  longlong local_res20;
  
  local_res8 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 4)) {
    local_res10 = 0;
    local_res20 = 0;
    local_res18 = 0;
    do {
      iVar3 = *(int *)(local_res18 + *(longlong *)(param_1 + 0xd8));
      if (iVar3 != -1) {
        lVar7 = *(longlong *)(param_1 + 8);
        lVar8 = *(longlong *)(lVar7 + 0x90);
        lVar9 = *(longlong *)(lVar7 + 0xa8);
        iVar4 = *(int *)(lVar8 + 4 + local_res20);
        uVar5 = *(uint *)(lVar8 + local_res20);
        uVar21 = (ulonglong)uVar5;
        iVar6 = *(int *)(lVar8 + 4 + local_res20);
        iVar13 = uVar5 + 2;
        lVar8 = *(longlong *)(lVar7 + 0xc0);
        lVar14 = *(longlong *)(param_1 + 0x10);
        piVar19 = (int *)(*(longlong *)(lVar7 + 0x78) + (longlong)local_res10 * 4);
        piVar17 = (int *)(*(longlong *)(param_1 + 0xc0) + (longlong)local_res10 * 4);
        lVar7 = (longlong)(iVar3 * 2) * 4;
        piVar11 = (int *)(lVar7 + *(longlong *)(lVar14 + 0x150));
        *piVar11 = iVar13;
        if (iVar3 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = piVar11[-2] + piVar11[-1];
        }
        piVar11[1] = iVar10;
        iVar10 = *(int *)(lVar14 + 0x14);
        if (*(int *)(lVar14 + 0x14) < iVar13) {
          iVar10 = iVar13;
        }
        *(int *)(lVar14 + 0x14) = iVar10;
        lVar14 = *(longlong *)(param_1 + 0x10);
        lVar12 = (longlong)(iVar3 * 2 + 1);
        piVar11 = (int *)(*(longlong *)(lVar14 + 0x168) +
                         (longlong)*(int *)(*(longlong *)(lVar14 + 0x150) + lVar12 * 4) * 4);
        lVar18 = 0;
        puVar1 = (undefined2 *)
                 (*(longlong *)(lVar14 + 0x180) +
                 (longlong)*(int *)(*(longlong *)(lVar14 + 0x150) + lVar12 * 4) * 2);
        iVar3 = *piVar17;
        bVar22 = iVar3 != -1;
        if (bVar22) {
          *piVar11 = iVar3;
          *puVar1 = 0;
        }
        uVar16 = (ulonglong)bVar22;
        uVar15 = (uint)bVar22;
        iVar3 = piVar17[1];
        if (iVar3 != -1) {
          piVar11[uVar16] = iVar3;
          uVar15 = bVar22 + 1;
          puVar1[uVar16] = 0;
          uVar16 = uVar16 + 1;
        }
        if (0 < (int)uVar5) {
          do {
            uVar20 = (ulonglong)*(ushort *)(lVar8 + (longlong)iVar6 * 2 + lVar18 * 2);
            lVar14 = (longlong)(*(int *)(lVar9 + (longlong)iVar4 * 4 + lVar18 * 4) * 2 + 1);
            iVar3 = *(int *)(*(longlong *)(param_1 + 0x90) +
                            ((longlong)*(int *)(*(longlong *)(param_1 + 0x68) + lVar14 * 4) + uVar20
                            ) * 4);
            if (iVar3 != -1) {
              piVar11[uVar16] = iVar3;
              puVar1[uVar16] = 1;
              uVar15 = uVar15 + 1;
              uVar16 = uVar16 + 1;
              if ((lVar18 == 0) && (uVar16 == 3)) {
                iVar3 = *piVar19;
                if ((iVar3 != piVar19[1]) &&
                   (*(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x30) +
                            ((longlong)
                             *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) + lVar14 * 4)
                            + uVar20) * 4) == iVar3)) {
                  iVar3 = *piVar11;
                  *piVar11 = piVar11[1];
                  piVar11[1] = iVar3;
                  uVar2 = *puVar1;
                  *puVar1 = puVar1[1];
                  puVar1[1] = uVar2;
                }
                iVar3 = piVar11[1];
                piVar11[1] = piVar11[2];
                piVar11[2] = iVar3;
                uVar2 = puVar1[1];
                puVar1[1] = puVar1[2];
                puVar1[2] = uVar2;
              }
            }
            lVar18 = lVar18 + 1;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
        *(uint *)(lVar7 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x150)) = uVar15;
      }
      local_res8 = local_res8 + 1;
      local_res10 = local_res10 + 2;
      local_res18 = local_res18 + 4;
      local_res20 = local_res20 + 8;
    } while (local_res8 < *(int *)(*(longlong *)(param_1 + 8) + 4));
  }
  return;
}



// FUNCTION 143922df0 FUN_143922df0 body=365 status=ok
// SIG undefined FUN_143922df0(void)

void FUN_143922df0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  
  piVar8 = *(int **)(param_1 + 8);
  iVar10 = 0;
  if (0 < *piVar8) {
    lVar11 = 0;
    lVar15 = 0;
    do {
      iVar7 = *(int *)(lVar15 + *(longlong *)(param_1 + 0xa8));
      if (iVar7 != -1) {
        lVar4 = *(longlong *)(param_1 + 0x10);
        iVar2 = *(int *)(lVar11 + *(longlong *)(piVar8 + 6));
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x68) + 4 + lVar11);
        lVar5 = *(longlong *)(param_1 + 0x90);
        lVar1 = (longlong)(iVar7 * 2) * 4;
        piVar8 = (int *)(*(longlong *)(lVar4 + 0x150) + lVar1);
        *piVar8 = iVar2;
        if (iVar7 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = piVar8[-2] + piVar8[-1];
        }
        piVar8[1] = iVar6;
        iVar13 = 0;
        iVar14 = 0;
        iVar6 = *(int *)(lVar4 + 0x14);
        if (*(int *)(lVar4 + 0x14) < iVar2) {
          iVar6 = iVar2;
        }
        *(int *)(lVar4 + 0x14) = iVar6;
        lVar4 = *(longlong *)(param_1 + 0x10);
        lVar9 = (longlong)(iVar7 * 2 + 1);
        piVar8 = (int *)(*(longlong *)(lVar4 + 0x168) +
                        (longlong)*(int *)(*(longlong *)(lVar4 + 0x150) + lVar9 * 4) * 4);
        puVar12 = (undefined2 *)
                  (*(longlong *)(lVar4 + 0x180) +
                  (longlong)*(int *)(*(longlong *)(lVar4 + 0x150) + lVar9 * 4) * 2);
        iVar7 = 0;
        if (0 < iVar2) {
          do {
            iVar6 = iVar7;
            if (iVar7 == 0) {
              iVar6 = iVar2;
            }
            iVar6 = *(int *)(lVar5 + (longlong)iVar3 * 4 + (longlong)(iVar6 + -1) * 4);
            iVar14 = iVar13;
            if (iVar6 != -1) {
              *piVar8 = iVar6;
              iVar14 = iVar13 + 1;
              piVar8 = piVar8 + 1;
              *puVar12 = 0;
              puVar12 = puVar12 + 1;
            }
            iVar7 = iVar7 + 1;
            iVar13 = iVar14;
          } while (iVar7 < iVar2);
        }
        *(int *)(lVar1 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x150)) = iVar14;
      }
      piVar8 = *(int **)(param_1 + 8);
      iVar10 = iVar10 + 1;
      lVar15 = lVar15 + 4;
      lVar11 = lVar11 + 8;
    } while (iVar10 < *piVar8);
  }
  return;
}



// FUNCTION 143922f60 FUN_143922f60 body=407 status=ok
// SIG undefined FUN_143922f60(void)

void FUN_143922f60(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  int *piVar13;
  int *piVar14;
  longlong lVar15;
  longlong lVar16;
  
  iVar10 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 8)) {
    lVar16 = 0;
    lVar15 = 0;
    do {
      iVar1 = *(int *)(lVar15 + *(longlong *)(param_1 + 0xf0));
      if (iVar1 != -1) {
        lVar3 = *(longlong *)(param_1 + 8);
        lVar4 = *(longlong *)(lVar3 + 0x150);
        uVar2 = *(uint *)(lVar4 + lVar16);
        uVar9 = (ulonglong)uVar2;
        piVar13 = (int *)(*(longlong *)(lVar3 + 0x168) + (longlong)*(int *)(lVar4 + 4 + lVar16) * 4)
        ;
        lVar8 = *(longlong *)(param_1 + 0x10);
        puVar5 = (ushort *)
                 (*(longlong *)(lVar3 + 0x180) + (longlong)*(int *)(lVar4 + 4 + lVar16) * 2);
        lVar3 = (longlong)(iVar1 * 2) * 4;
        puVar7 = (uint *)(*(longlong *)(lVar8 + 0x150) + lVar3);
        *puVar7 = uVar2;
        if (iVar1 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = puVar7[-2] + puVar7[-1];
        }
        puVar7[1] = uVar6;
        uVar6 = *(uint *)(lVar8 + 0x14);
        if ((int)*(uint *)(lVar8 + 0x14) < (int)uVar2) {
          uVar6 = uVar2;
        }
        iVar11 = 0;
        *(uint *)(lVar8 + 0x14) = uVar6;
        lVar4 = *(longlong *)(param_1 + 0x10);
        lVar8 = (longlong)(iVar1 * 2 + 1);
        piVar14 = (int *)(*(longlong *)(lVar4 + 0x168) +
                         (longlong)*(int *)(*(longlong *)(lVar4 + 0x150) + lVar8 * 4) * 4);
        puVar12 = (undefined2 *)
                  (*(longlong *)(lVar4 + 0x180) +
                  (longlong)*(int *)(*(longlong *)(lVar4 + 0x150) + lVar8 * 4) * 2);
        if (0 < (int)uVar2) {
          do {
            iVar1 = *(int *)(*(longlong *)(param_1 + 0xc0) +
                            ((longlong)(*piVar13 * 2) + (ulonglong)*puVar5) * 4);
            if (iVar1 != -1) {
              *piVar14 = iVar1;
              iVar11 = iVar11 + 1;
              piVar14 = piVar14 + 1;
              *puVar12 = 1;
              puVar12 = puVar12 + 1;
            }
            piVar13 = piVar13 + 1;
            puVar5 = puVar5 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        *(int *)(lVar3 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x150)) = iVar11;
      }
      iVar10 = iVar10 + 1;
      lVar15 = lVar15 + 4;
      lVar16 = lVar16 + 8;
    } while (iVar10 < *(int *)(*(longlong *)(param_1 + 8) + 8));
  }
  return;
}



// FUNCTION 143923100 FUN_143923100 body=273 status=ok
// SIG undefined FUN_143923100(void)

void FUN_143923100(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *(longlong *)(param_1 + 8);
  lVar7 = *(longlong *)(lVar6 + 0xb0);
  lVar1 = *(longlong *)(lVar6 + 0xa8);
  lVar2 = *(longlong *)(lVar6 + 0x38);
  lVar3 = *(longlong *)(lVar6 + 0x30);
  lVar4 = *(longlong *)(lVar6 + 0x128);
  lVar6 = *(longlong *)(lVar6 + 0x120);
  FUN_143918510(*(longlong *)(param_1 + 0x10) + 0x108,
                (longlong)(*(int *)(*(longlong *)(param_1 + 0x10) + 8) * 2));
  lVar6 = (longlong)
          ((int)(lVar2 - lVar3 >> 2) + (int)(lVar7 - lVar1 >> 2) * 2 + (int)(lVar4 - lVar6 >> 2));
  FUN_143918510(*(longlong *)(param_1 + 0x10) + 0x120,lVar6);
  FUN_143918420(*(longlong *)(param_1 + 0x10) + 0x138,lVar6);
  if (*(int *)(param_1 + 0x54) == 0) {
    FUN_1439235c0();
    FUN_143923450(param_1);
    FUN_143923220(param_1);
  }
  else {
    FUN_143923450(param_1);
    FUN_143923220(param_1);
    FUN_1439235c0(param_1);
  }
  lVar6 = *(longlong *)(param_1 + 0x10);
  iVar5 = *(int *)(lVar6 + 8) * 2;
  lVar7 = (longlong)
          (*(int *)(*(longlong *)(lVar6 + 0x108) + (longlong)(iVar5 + -2) * 4) +
          *(int *)(*(longlong *)(lVar6 + 0x108) + (longlong)(iVar5 + -1) * 4));
  FUN_143918510(lVar6 + 0x120,lVar7);
  FUN_143918420(*(longlong *)(param_1 + 0x10) + 0x138,lVar7);
  return;
}



// FUNCTION 143923220 FUN_143923220 body=548 status=ok
// SIG undefined FUN_143923220(void)

void FUN_143923220(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ushort *puVar6;
  ushort uVar7;
  ushort uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  ushort *puVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  ulonglong uVar16;
  int local_res8;
  longlong local_res10;
  longlong local_res18;
  
  local_res8 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 4)) {
    local_res18 = 0;
    local_res10 = 0;
    do {
      iVar10 = 0;
      iVar11 = 0;
      iVar1 = *(int *)(local_res10 + *(longlong *)(param_1 + 0xd8));
      if (iVar1 != -1) {
        lVar4 = *(longlong *)(param_1 + 8);
        lVar5 = *(longlong *)(lVar4 + 0x90);
        uVar2 = *(uint *)(lVar5 + local_res18);
        uVar16 = (ulonglong)uVar2;
        piVar13 = (int *)(*(longlong *)(lVar4 + 0xa8) +
                         (longlong)*(int *)(lVar5 + 4 + local_res18) * 4);
        puVar12 = (ushort *)
                  (*(longlong *)(lVar4 + 0xc0) + (longlong)*(int *)(lVar5 + 4 + local_res18) * 2);
        lVar4 = (longlong)(iVar1 * 2) * 4;
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x108);
        *(uint *)(lVar4 + lVar5) = uVar2 * 2;
        iVar14 = iVar11;
        if (iVar1 != 0) {
          iVar14 = *(int *)(lVar4 + -8 + lVar5) + *(int *)(lVar4 + -4 + lVar5);
        }
        *(int *)(lVar4 + 4 + lVar5) = iVar14;
        lVar5 = *(longlong *)(param_1 + 0x10);
        lVar9 = (longlong)(iVar1 * 2 + 1);
        piVar15 = (int *)(*(longlong *)(lVar5 + 0x120) +
                         (longlong)*(int *)(*(longlong *)(lVar5 + 0x108) + lVar9 * 4) * 4);
        puVar6 = (ushort *)
                 (*(longlong *)(lVar5 + 0x138) +
                 (longlong)*(int *)(*(longlong *)(lVar5 + 0x108) + lVar9 * 4) * 2);
        if (0 < (int)uVar2) {
          do {
            uVar8 = *puVar12;
            lVar5 = *(longlong *)(param_1 + 0x78) +
                    (longlong)
                    *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)(*piVar13 * 2 + 1) * 4) * 4;
            iVar14 = uVar8 + 1;
            iVar1 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)(*piVar13 * 2) * 4);
            if (iVar14 == iVar1) {
              iVar14 = 0;
            }
            iVar11 = *(int *)(lVar5 + (longlong)iVar14 * 4);
            if (iVar11 != -1) {
              *piVar15 = iVar11;
              uVar7 = 3;
              if (iVar1 == 4) {
                uVar7 = uVar8;
              }
              iVar10 = iVar10 + 1;
              piVar15 = piVar15 + 1;
              *puVar6 = uVar7;
              puVar6 = puVar6 + 1;
            }
            iVar3 = *(int *)(lVar5 + (ulonglong)uVar8 * 4);
            iVar11 = iVar10;
            if (iVar3 != -1) {
              *piVar15 = iVar3;
              uVar8 = 1;
              if (iVar1 == 4) {
                uVar8 = (ushort)iVar14;
              }
              iVar11 = iVar10 + 1;
              piVar15 = piVar15 + 1;
              *puVar6 = uVar8;
              puVar6 = puVar6 + 1;
            }
            piVar13 = piVar13 + 1;
            puVar12 = puVar12 + 1;
            uVar16 = uVar16 - 1;
            iVar10 = iVar11;
          } while (uVar16 != 0);
        }
        *(int *)(lVar4 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x108)) = iVar11;
      }
      local_res8 = local_res8 + 1;
      local_res10 = local_res10 + 4;
      local_res18 = local_res18 + 8;
    } while (local_res8 < *(int *)(*(longlong *)(param_1 + 8) + 4));
  }
  return;
}



// FUNCTION 143923450 FUN_143923450 body=365 status=ok
// SIG undefined FUN_143923450(void)

void FUN_143923450(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ushort uVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  int iVar10;
  ushort *puVar11;
  int *piVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  
  iVar10 = 0;
  if (0 < **(int **)(param_1 + 8)) {
    lVar15 = 0;
    lVar14 = 0;
    do {
      iVar2 = *(int *)(lVar14 + *(longlong *)(param_1 + 0xa8));
      if (iVar2 != -1) {
        lVar5 = *(longlong *)(param_1 + 0x78);
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x58) + 4 + lVar15);
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x58) + lVar15);
        lVar1 = (longlong)(iVar2 * 2) * 4;
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x108);
        *(int *)(lVar1 + lVar8) = iVar4;
        if (iVar2 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = *(int *)(lVar1 + -8 + lVar8) + *(int *)(lVar1 + -4 + lVar8);
        }
        *(int *)(lVar1 + 4 + lVar8) = iVar13;
        iVar13 = 0;
        lVar8 = *(longlong *)(param_1 + 0x10);
        lVar7 = (longlong)(iVar2 * 2 + 1);
        piVar12 = (int *)(*(longlong *)(lVar8 + 0x120) +
                         (longlong)*(int *)(*(longlong *)(lVar8 + 0x108) + lVar7 * 4) * 4);
        puVar11 = (ushort *)
                  (*(longlong *)(lVar8 + 0x138) +
                  (longlong)*(int *)(*(longlong *)(lVar8 + 0x108) + lVar7 * 4) * 2);
        lVar8 = 0;
        if (0 < iVar4) {
          uVar9 = 0xfffe;
          do {
            iVar2 = *(int *)(lVar5 + (longlong)iVar3 * 4 + lVar8 * 4);
            if (iVar2 != -1) {
              *piVar12 = iVar2;
              if (iVar4 == 4) {
                uVar6 = uVar9 & 3;
              }
              else {
                uVar6 = 2;
              }
              iVar13 = iVar13 + 1;
              *puVar11 = uVar6;
              piVar12 = piVar12 + 1;
              puVar11 = puVar11 + 1;
            }
            uVar9 = uVar9 + 1;
            lVar8 = lVar8 + 1;
          } while (lVar8 < iVar4);
        }
        *(int *)(lVar1 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x108)) = iVar13;
      }
      iVar10 = iVar10 + 1;
      lVar14 = lVar14 + 4;
      lVar15 = lVar15 + 8;
    } while (iVar10 < **(int **)(param_1 + 8));
  }
  return;
}



// FUNCTION 1439235c0 FUN_1439235c0 body=474 status=ok
// SIG undefined FUN_1439235c0(void)

void FUN_1439235c0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ushort uVar6;
  longlong lVar7;
  int *piVar8;
  ulonglong uVar9;
  int iVar10;
  ushort *puVar11;
  int *piVar12;
  ushort *puVar13;
  longlong lVar14;
  int iVar15;
  longlong local_res8;
  
  iVar15 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 8)) {
    local_res8 = 0;
    lVar14 = 0;
    do {
      iVar1 = *(int *)(lVar14 + *(longlong *)(param_1 + 0xf0));
      if (iVar1 != -1) {
        lVar4 = *(longlong *)(param_1 + 8);
        lVar5 = *(longlong *)(lVar4 + 0x108);
        uVar2 = *(uint *)(lVar5 + local_res8);
        uVar9 = (ulonglong)uVar2;
        piVar8 = (int *)(*(longlong *)(lVar4 + 0x120) +
                        (longlong)*(int *)(lVar5 + 4 + local_res8) * 4);
        puVar11 = (ushort *)
                  (*(longlong *)(lVar4 + 0x138) + (longlong)*(int *)(lVar5 + 4 + local_res8) * 2);
        lVar4 = (longlong)(iVar1 * 2) * 4;
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x108);
        *(uint *)(lVar4 + lVar5) = uVar2;
        if (iVar1 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *(int *)(lVar4 + -8 + lVar5) + *(int *)(lVar4 + -4 + lVar5);
        }
        *(int *)(lVar4 + 4 + lVar5) = iVar10;
        iVar10 = 0;
        lVar5 = *(longlong *)(param_1 + 0x10);
        lVar7 = (longlong)(iVar1 * 2 + 1);
        piVar12 = (int *)(*(longlong *)(lVar5 + 0x120) +
                         (longlong)*(int *)(*(longlong *)(lVar5 + 0x108) + lVar7 * 4) * 4);
        puVar13 = (ushort *)
                  (*(longlong *)(lVar5 + 0x138) +
                  (longlong)*(int *)(*(longlong *)(lVar5 + 0x108) + lVar7 * 4) * 2);
        if (0 < (int)uVar2) {
          do {
            uVar6 = *puVar11;
            iVar1 = *(int *)(*(longlong *)(param_1 + 0x78) +
                             (longlong)
                             *(int *)(*(longlong *)(param_1 + 0x58) +
                                     (longlong)(*piVar8 * 2 + 1) * 4) * 4 + (ulonglong)uVar6 * 4);
            iVar3 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)(*piVar8 * 2) * 4);
            if (iVar1 != -1) {
              *piVar12 = iVar1;
              if (iVar3 != 4) {
                uVar6 = 0;
              }
              iVar10 = iVar10 + 1;
              *puVar13 = uVar6;
              piVar12 = piVar12 + 1;
              puVar13 = puVar13 + 1;
            }
            piVar8 = piVar8 + 1;
            puVar11 = puVar11 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        *(int *)(lVar4 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x108)) = iVar10;
      }
      local_res8 = local_res8 + 8;
      iVar15 = iVar15 + 1;
      lVar14 = lVar14 + 4;
    } while (iVar15 < *(int *)(*(longlong *)(param_1 + 8) + 8));
  }
  return;
}



// FUNCTION 1439237a0 resize body=209 status=ok
// SIG undefined resize(void)

void std::vector<unsigned_int,std::allocator<bool>_>::resize
               (ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 local_res8;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar3 = (longlong)(uVar1 - uVar2) >> 2;
  if (param_2 < uVar3) {
    param_1[1] = uVar1 + (param_2 - uVar3) * 4;
  }
  else if (uVar3 < param_2) {
    if ((param_3 < uVar1) && (uVar2 <= param_3)) {
      _Reserve(param_1,param_2 - uVar3);
      param_3 = *param_1 + ((longlong)(param_3 - uVar2) >> 2) * 4;
    }
    else {
      _Reserve(param_1,param_2 - uVar3);
    }
    local_res8 = SUB81(param_1,0);
    _Uninit_alloc_fill_n1<unsigned_int_*___ptr64,unsigned___int64,std::allocator<unsigned_int>_>
              (param_1[1],param_2 - ((longlong)(param_1[1] - *param_1) >> 2),param_3,param_1,
               local_res8);
    param_1[1] = param_1[1] + (param_2 - ((longlong)(param_1[1] - *param_1) >> 2)) * 4;
  }
  return;
}



// FUNCTION 143923880 FUN_143923880 body=70 status=ok
// SIG undefined FUN_143923880(void)

undefined8 * FUN_143923880(undefined8 *param_1)

{
  FUN_14391e6f0();
  *param_1 = OpenSubdiv::v3_2_0::Vtr::internal::TriRefinement::vftable;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 4) = 3;
  return param_1;
}



// FUNCTION 1439238d0 FUN_1439238d0 body=88 status=ok
// SIG undefined FUN_1439238d0(void)

void FUN_1439238d0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = param_1 + 0x3f;
  *param_1 = OpenSubdiv::v3_2_0::Vtr::internal::TriRefinement::vftable;
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    std::allocator<sTokenChange>::deallocate(plVar1,lVar2,param_1[0x41] - lVar2 >> 2);
    *plVar1 = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
  }
  FUN_14391e8a0(param_1);
  return;
}



// FUNCTION 143923930 FUN_143923930 body=52 status=ok
// SIG undefined FUN_143923930(void)

undefined8 FUN_143923930(undefined8 param_1,ulonglong param_2)

{
  FUN_1439238d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 143923970 FUN_143923970 body=389 status=ok
// SIG undefined FUN_143923970(void)

void FUN_143923970(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined4 local_res8 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  
  piVar5 = *(int **)(param_1 + 8);
  local_res8[0] = 4;
  iVar2 = *piVar5;
  lVar6 = *(longlong *)(piVar5 + 0x14);
  lVar7 = *(longlong *)(piVar5 + 0x20);
  lVar8 = *(longlong *)(piVar5 + 0x12);
  lVar9 = *(longlong *)(piVar5 + 0x1e);
  iVar3 = piVar5[1];
  iVar4 = piVar5[2];
  std::vector<unsigned_int,std::allocator<bool>_>::resize(param_1 + 0x1f8,(longlong)(iVar2 * 2));
  iVar12 = 0;
  if (0 < **(int **)(param_1 + 8)) {
    lVar13 = 0;
    do {
      iVar1 = iVar12 * 4;
      iVar12 = iVar12 + 1;
      *(int *)(lVar13 + 4 + *(longlong *)(param_1 + 0x1f8)) = iVar1;
      lVar13 = lVar13 + 8;
    } while (iVar12 < **(int **)(param_1 + 8));
  }
  lVar13 = *(longlong *)(param_1 + 8);
  local_res8[0] = 0;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x1f8);
  *(ulonglong *)(param_1 + 0x60) =
       CONCAT44(uStack_2c,
                (int)(*(longlong *)(param_1 + 0x200) - *(longlong *)(param_1 + 0x1f8) >> 2));
  lVar10 = *(longlong *)(lVar13 + 0x20);
  lVar11 = *(longlong *)(lVar13 + 0x18);
  local_38 = (undefined4)*(undefined8 *)(lVar13 + 0x18);
  uStack_34 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x18) >> 0x20);
  *(undefined4 *)(param_1 + 0x68) = local_38;
  *(undefined4 *)(param_1 + 0x6c) = uStack_34;
  *(int *)(param_1 + 0x70) = (int)(lVar10 - lVar11 >> 2);
  *(undefined4 *)(param_1 + 0x74) = uStack_2c;
  std::vector<unsigned_int,std::allocator<bool>_>::resize
            (param_1 + 0x78,(longlong)(iVar2 * 4),local_res8);
  std::vector<unsigned_int,std::allocator<bool>_>::resize
            (param_1 + 0x90,(longlong)(int)(lVar6 - lVar8 >> 2),local_res8);
  std::vector<unsigned_int,std::allocator<bool>_>::resize
            (param_1 + 0xc0,(longlong)(int)(lVar7 - lVar9 >> 2),local_res8);
  std::vector<unsigned_int,std::allocator<bool>_>::resize(param_1 + 0xa8,0,local_res8);
  std::vector<unsigned_int,std::allocator<bool>_>::resize(param_1 + 0xd8,(longlong)iVar3,local_res8)
  ;
  std::vector<unsigned_int,std::allocator<bool>_>::resize(param_1 + 0xf0,(longlong)iVar4,local_res8)
  ;
  return;
}



// FUNCTION 143923b00 FUN_143923b00 body=494 status=ok
// SIG undefined FUN_143923b00(void)

void FUN_143923b00(longlong param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  byte bVar8;
  byte bVar9;
  byte *pbVar10;
  longlong lVar11;
  
  piVar7 = *(int **)(param_1 + 8);
  iVar6 = 0;
  if (0 < *piVar7) {
    lVar11 = 0;
    do {
      pbVar10 = (byte *)(*(longlong *)(param_1 + 0x198) + lVar11);
      puVar1 = (undefined4 *)
               (*(longlong *)(param_1 + 0x78) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x58) + 4 + lVar11 * 8) * 4);
      lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x68) + 4 + lVar11 * 8);
      lVar3 = *(longlong *)(param_1 + 0x90);
      piVar2 = (int *)(*(longlong *)(piVar7 + 0xc) +
                      (longlong)*(int *)(*(longlong *)(piVar7 + 6) + 4 + lVar11 * 8) * 4);
      if ((*pbVar10 & 1) == 0) {
        lVar4 = *(longlong *)(param_1 + 0x1c8);
        if ((byte)((*(byte *)(piVar2[2] + lVar4) & 1) + (*(byte *)(piVar2[1] + lVar4) & 1) +
                  (*(byte *)(*piVar2 + lVar4) & 1)) != '\0') {
          piVar7 = (int *)(*(longlong *)(piVar7 + 0x12) +
                          (longlong)*(int *)(*(longlong *)(piVar7 + 6) + 4 + lVar11 * 8) * 4);
          lVar4 = *(longlong *)(param_1 + 0x1b0);
          bVar9 = ((*(byte *)(piVar7[1] + lVar4) & 0xfe) * '\x02' | *(byte *)(*piVar7 + lVar4)) &
                  0x1e;
          bVar8 = *(byte *)(piVar7[2] + lVar4) & 6;
          *pbVar10 = bVar9 | bVar8 << 2 | *pbVar10 & 0xe1;
          if (bVar9 != 0 || bVar8 != 0) {
            puVar1[3] = 1;
            *(undefined4 *)(lVar3 + lVar5 * 4) = 1;
            *(undefined4 *)(lVar3 + 4 + lVar5 * 4) = 1;
            *(undefined4 *)(lVar3 + 8 + lVar5 * 4) = 1;
          }
          if ((*(byte *)((longlong)*piVar2 + *(longlong *)(param_1 + 0x1c8)) & 1) != 0) {
            *puVar1 = 1;
            *(undefined4 *)(lVar3 + lVar5 * 4) = 1;
          }
          if ((*(byte *)((longlong)piVar2[1] + *(longlong *)(param_1 + 0x1c8)) & 1) != 0) {
            puVar1[1] = 1;
            *(undefined4 *)(lVar3 + 4 + lVar5 * 4) = 1;
          }
          if ((*(byte *)((longlong)piVar2[2] + *(longlong *)(param_1 + 0x1c8)) & 1) != 0) {
            puVar1[2] = 1;
            *(undefined4 *)(lVar3 + 8 + lVar5 * 4) = 1;
          }
        }
      }
      else {
        *puVar1 = 2;
        puVar1[1] = 2;
        puVar1[2] = 2;
        puVar1[3] = 2;
        *(undefined4 *)(lVar3 + lVar5 * 4) = 2;
        *(undefined4 *)(lVar3 + 4 + lVar5 * 4) = 2;
        *(undefined4 *)(lVar3 + 8 + lVar5 * 4) = 2;
        *pbVar10 = *pbVar10 & 0xe1;
      }
      piVar7 = *(int **)(param_1 + 8);
      iVar6 = iVar6 + 1;
      lVar11 = lVar11 + 1;
    } while (iVar6 < *piVar7);
  }
  return;
}



// FUNCTION 143923cf0 FUN_143923cf0 body=237 status=ok
// SIG undefined FUN_143923cf0(void)

void FUN_143923cf0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x98);
  lVar5 = *(longlong *)(param_1 + 0x90);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xb0);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xa8);
  FUN_143918510(*(longlong *)(param_1 + 0x10) + 0x90,
                (longlong)(*(int *)(*(longlong *)(param_1 + 0x10) + 4) * 2));
  lVar4 = (longlong)(((int)(lVar4 - lVar5 >> 2) + (int)(lVar1 - lVar2 >> 2)) * 2);
  FUN_143918510(*(longlong *)(param_1 + 0x10) + 0xa8,lVar4);
  FUN_143918420(*(longlong *)(param_1 + 0x10) + 0xc0,lVar4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10) =
       *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x10);
  FUN_1439240d0(param_1);
  FUN_143923de0(param_1);
  lVar4 = *(longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(lVar4 + 4) * 2;
  lVar5 = (longlong)
          (*(int *)(*(longlong *)(lVar4 + 0x90) + (longlong)(iVar3 + -2) * 4) +
          *(int *)(*(longlong *)(lVar4 + 0x90) + (longlong)(iVar3 + -1) * 4));
  FUN_143918510(lVar4 + 0xa8,lVar5);
  FUN_143918420(*(longlong *)(param_1 + 0x10) + 0xc0,lVar5);
  return;
}



// FUNCTION 143923de0 FUN_143923de0 body=737 status=ok
// SIG undefined FUN_143923de0(void)

void FUN_143923de0(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  uint *puVar13;
  int *piVar14;
  int *piVar15;
  ulonglong uVar16;
  ushort *puVar17;
  ushort *puVar18;
  uint uVar19;
  int *piVar20;
  int *piVar21;
  int iVar22;
  int local_res10;
  int local_res18;
  longlong local_88;
  
  local_res10 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 4)) {
    local_88 = 0;
    local_res18 = 0;
    do {
      uVar19 = 0;
      piVar14 = (int *)(*(longlong *)(param_1 + 0xc0) + (longlong)local_res18 * 4);
      if ((*piVar14 != -1) || (piVar14[1] != -1)) {
        lVar5 = *(longlong *)(param_1 + 8);
        lVar6 = *(longlong *)(lVar5 + 0x90);
        lVar7 = *(longlong *)(lVar5 + 0xa8);
        iVar2 = *(int *)(lVar6 + 4 + local_88);
        uVar3 = *(uint *)(lVar6 + local_88);
        iVar4 = *(int *)(lVar6 + 4 + local_88);
        lVar6 = *(longlong *)(lVar5 + 0xc0);
        piVar11 = (int *)(*(longlong *)(lVar5 + 0x78) + (longlong)local_res18 * 4);
        piVar20 = piVar11;
        do {
          iVar22 = 0;
          iVar10 = *(int *)(((longlong)piVar14 - (longlong)piVar11) + (longlong)piVar20);
          if (iVar10 != -1) {
            lVar8 = *(longlong *)(param_1 + 0x10);
            lVar5 = (longlong)(iVar10 * 2) * 4;
            puVar13 = (uint *)(lVar5 + *(longlong *)(lVar8 + 0x90));
            *puVar13 = uVar3;
            uVar9 = 0;
            if (iVar10 != 0) {
              uVar9 = puVar13[-2] + puVar13[-1];
            }
            puVar13[1] = uVar9;
            uVar9 = *(uint *)(lVar8 + 0x10);
            if ((int)*(uint *)(lVar8 + 0x10) < (int)uVar3) {
              uVar9 = uVar3;
            }
            *(uint *)(lVar8 + 0x10) = uVar9;
            lVar8 = *(longlong *)(param_1 + 0x10);
            lVar12 = (longlong)(iVar10 * 2 + 1);
            piVar15 = (int *)(*(longlong *)(lVar8 + 0xa8) +
                             (longlong)*(int *)(*(longlong *)(lVar8 + 0x90) + lVar12 * 4) * 4);
            puVar18 = (ushort *)
                      (*(longlong *)(lVar8 + 0xc0) +
                      (longlong)*(int *)(*(longlong *)(lVar8 + 0x90) + lVar12 * 4) * 2);
            if (0 < (int)uVar3) {
              uVar16 = (ulonglong)uVar3;
              puVar17 = (ushort *)(lVar6 + (longlong)iVar4 * 2);
              piVar21 = (int *)(lVar7 + (longlong)iVar2 * 4);
              do {
                uVar1 = *puVar17;
                lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
                lVar12 = (longlong)(*piVar21 * 2 + 1);
                uVar9 = uVar19;
                if (*piVar11 != piVar11[1]) {
                  uVar9 = (uint)(*(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x30) +
                                          (longlong)*(int *)(lVar8 + lVar12 * 4) * 4 +
                                         (ulonglong)uVar1 * 4) != *piVar20);
                }
                iVar10 = uVar9 + uVar1;
                if (iVar10 == *(int *)(lVar8 + (longlong)(*piVar21 * 2) * 4)) {
                  iVar10 = 0;
                }
                iVar10 = *(int *)(*(longlong *)(param_1 + 0x78) +
                                  (longlong)*(int *)(lVar12 * 4 + *(longlong *)(param_1 + 0x58)) * 4
                                 + (longlong)iVar10 * 4);
                if (iVar10 != -1) {
                  *piVar15 = iVar10;
                  iVar22 = iVar22 + 1;
                  piVar15 = piVar15 + 1;
                  *puVar18 = uVar1;
                  puVar18 = puVar18 + 1;
                }
                piVar21 = piVar21 + 1;
                puVar17 = puVar17 + 1;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            *(int *)(lVar5 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x90)) = iVar22;
          }
          uVar19 = uVar19 + 1;
          piVar20 = piVar20 + 1;
        } while ((int)uVar19 < 2);
      }
      local_res10 = local_res10 + 1;
      local_res18 = local_res18 + 2;
      local_88 = local_88 + 8;
    } while (local_res10 < *(int *)(*(longlong *)(param_1 + 8) + 4));
  }
  return;
}



// FUNCTION 1439240d0 FUN_1439240d0 body=475 status=ok
// SIG undefined FUN_1439240d0(void)

void FUN_1439240d0(longlong param_1)

{
  int *piVar1;
  short *psVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int *piVar14;
  longlong lVar15;
  bool bVar16;
  int local_res8;
  
  local_res8 = 0;
  if (0 < **(int **)(param_1 + 8)) {
    lVar15 = 0;
    do {
      lVar9 = (longlong)*(int *)(lVar15 + 4 + *(longlong *)(param_1 + 0x58));
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x78) + 0xc + lVar9 * 4);
      piVar14 = (int *)(*(longlong *)(param_1 + 0x78) + lVar9 * 4);
      uVar12 = *(uint *)(*(longlong *)(param_1 + 0x68) + lVar15);
      if (0 < (int)uVar12) {
        iVar8 = 1;
        lVar9 = (*(longlong *)(param_1 + 0x90) +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x68) + 4 + lVar15) * 4) -
                (longlong)piVar14;
        uVar11 = (ulonglong)uVar12;
        do {
          iVar5 = *(int *)(lVar9 + (longlong)piVar14);
          if (iVar5 != -1) {
            lVar6 = *(longlong *)(param_1 + 0x10);
            lVar3 = (longlong)(iVar5 * 2) * 4;
            puVar13 = (undefined4 *)(*(longlong *)(lVar6 + 0x90) + lVar3);
            *puVar13 = 2;
            if (iVar5 == 0) {
              iVar7 = 0;
            }
            else {
              iVar7 = puVar13[-2] + puVar13[-1];
            }
            puVar13[1] = iVar7;
            iVar7 = *(int *)(lVar6 + 0x10);
            if (*(int *)(lVar6 + 0x10) < 2) {
              iVar7 = 2;
            }
            *(int *)(lVar6 + 0x10) = iVar7;
            lVar6 = *(longlong *)(param_1 + 0x10);
            lVar10 = (longlong)(iVar5 * 2 + 1);
            piVar1 = (int *)(*(longlong *)(lVar6 + 0xa8) +
                            (longlong)*(int *)(*(longlong *)(lVar6 + 0x90) + lVar10 * 4) * 4);
            psVar2 = (short *)(*(longlong *)(lVar6 + 0xc0) +
                              (longlong)*(int *)(*(longlong *)(lVar6 + 0x90) + lVar10 * 4) * 2);
            bVar16 = *piVar14 != -1;
            if (bVar16) {
              *piVar1 = *piVar14;
              lVar6 = (longlong)iVar8;
              *psVar2 = (short)iVar8 +
                        ((short)((ulonglong)(lVar6 * 0x55555556) >> 0x20) +
                        (short)((lVar6 / 3 + (lVar6 >> 0x3f) & 0xffffffffU) >> 0x1f)) * -3;
            }
            uVar12 = (uint)bVar16;
            if (iVar4 != -1) {
              piVar1[bVar16] = iVar4;
              lVar6 = (longlong)iVar8;
              psVar2[bVar16] =
                   (short)iVar8 +
                   ((short)((ulonglong)(lVar6 * 0x55555556) >> 0x20) +
                   (short)((lVar6 / 3 + (lVar6 >> 0x3f) & 0xffffffffU) >> 0x1f)) * -3;
              uVar12 = uVar12 + 1;
            }
            *(uint *)(lVar3 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x90)) = uVar12;
          }
          iVar8 = iVar8 + 1;
          piVar14 = piVar14 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      local_res8 = local_res8 + 1;
      lVar15 = lVar15 + 8;
    } while (local_res8 < **(int **)(param_1 + 8));
  }
  return;
}



// FUNCTION 1439242b0 FUN_1439242b0 body=51 status=ok
// SIG undefined FUN_1439242b0(void)

void FUN_1439242b0(longlong param_1)

{
  FUN_143918510(*(longlong *)(param_1 + 0x10) + 0x78,
                (longlong)(*(int *)(*(longlong *)(param_1 + 0x10) + 4) * 2));
  FUN_1439242f0(param_1);
  FUN_1439222a0(param_1);
  return;
}



// FUNCTION 1439242f0 FUN_1439242f0 body=243 status=ok
// SIG undefined FUN_1439242f0(void)

void FUN_1439242f0(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  piVar6 = *(int **)(param_1 + 8);
  iVar8 = 0;
  if (0 < *piVar6) {
    lVar9 = 0;
    do {
      piVar6 = (int *)(*(longlong *)(piVar6 + 0x12) +
                      (longlong)*(int *)(*(longlong *)(piVar6 + 6) + 4 + lVar9) * 4);
      piVar1 = (int *)(*(longlong *)(param_1 + 0x90) +
                      (longlong)*(int *)(lVar9 + 4 + *(longlong *)(param_1 + 0x68)) * 4);
      lVar5 = *(longlong *)(param_1 + 0xd8);
      uVar2 = *(undefined4 *)(lVar5 + (longlong)*piVar6 * 4);
      uVar3 = *(undefined4 *)(lVar5 + (longlong)piVar6[1] * 4);
      uVar4 = *(undefined4 *)(lVar5 + (longlong)piVar6[2] * 4);
      if (*piVar1 != -1) {
        lVar7 = (longlong)(*piVar1 * 2);
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x78);
        *(undefined4 *)(lVar5 + lVar7 * 4) = uVar2;
        *(undefined4 *)(lVar5 + 4 + lVar7 * 4) = uVar4;
      }
      if (piVar1[1] != -1) {
        lVar7 = (longlong)(piVar1[1] * 2);
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x78);
        *(undefined4 *)(lVar5 + lVar7 * 4) = uVar3;
        *(undefined4 *)(lVar5 + 4 + lVar7 * 4) = uVar2;
      }
      if (piVar1[2] != -1) {
        lVar7 = (longlong)(piVar1[2] * 2);
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x78);
        *(undefined4 *)(lVar5 + lVar7 * 4) = uVar4;
        *(undefined4 *)(lVar5 + 4 + lVar7 * 4) = uVar3;
      }
      piVar6 = *(int **)(param_1 + 8);
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 8;
    } while (iVar8 < *piVar6);
  }
  return;
}



// FUNCTION 1439243f0 FUN_1439243f0 body=69 status=ok
// SIG undefined FUN_1439243f0(void)

void FUN_1439243f0(longlong param_1)

{
  if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) -
       *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) & 0xfffffffffffffffcU) == 0) {
    FUN_143924660();
  }
  FUN_143918510(*(int **)(param_1 + 0x10) + 0x12,(longlong)(**(int **)(param_1 + 0x10) * 3));
  FUN_143924440(param_1);
  return;
}



// FUNCTION 143924440 FUN_143924440 body=540 status=ok
// SIG undefined FUN_143924440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143924440(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 local_38 [8];
  
  piVar12 = *(int **)(param_1 + 8);
  iVar10 = 0;
  if (0 < *piVar12) {
    lVar14 = 0;
    do {
      lVar11 = *(longlong *)(param_1 + 8);
      lVar13 = 0;
      lVar6 = *(longlong *)(param_1 + 0xc0);
      lVar7 = *(longlong *)(piVar12 + 0x1e);
      piVar12 = (int *)(*(longlong *)(lVar11 + 0x30) +
                       (longlong)*(int *)(*(longlong *)(lVar11 + 0x18) + 4 + lVar14) * 4);
      lVar11 = (*(longlong *)(lVar11 + 0x48) +
               (longlong)*(int *)(*(longlong *)(lVar11 + 0x18) + 4 + lVar14) * 4) -
               (longlong)piVar12;
      piVar1 = (int *)(*(longlong *)(param_1 + 0x78) +
                      (longlong)*(int *)(*(longlong *)(param_1 + 0x58) + 4 + lVar14) * 4);
      puVar2 = (undefined4 *)
               (*(longlong *)(param_1 + 0x90) +
               (longlong)*(int *)(lVar14 + 4 + *(longlong *)(param_1 + 0x68)) * 4);
      do {
        lVar9 = (longlong)(*(int *)(lVar11 + (longlong)piVar12) * 2);
        iVar5 = *(int *)(lVar7 + lVar9 * 4);
        lVar3 = lVar6 + lVar9 * 4;
        if ((iVar5 == *(int *)(lVar7 + 4 + lVar9 * 4)) || (*piVar12 == iVar5)) {
          bVar8 = 0;
        }
        else {
          bVar8 = 1;
        }
        piVar12 = piVar12 + 1;
        local_38[lVar13 * 2] = *(undefined4 *)(lVar3 + (ulonglong)bVar8 * 4);
        local_38[lVar13 * 2 + 1] = *(undefined4 *)(lVar3 + ((ulonglong)bVar8 ^ 1) * 4);
        lVar13 = lVar13 + 1;
      } while (lVar13 < 3);
      if (*piVar1 != -1) {
        puVar4 = (undefined4 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48) +
                 (longlong)
                 *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) +
                         (longlong)(*piVar1 * 2 + 1) * 4) * 4);
        *puVar4 = local_38[0];
        puVar4[1] = *puVar2;
        puVar4[2] = local_38[5];
      }
      if (piVar1[1] != -1) {
        puVar4 = (undefined4 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48) +
                 (longlong)
                 *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) +
                         (longlong)(piVar1[1] * 2 + 1) * 4) * 4);
        *puVar4 = local_38[1];
        puVar4[1] = local_38[2];
        puVar4[2] = puVar2[1];
      }
      if (piVar1[2] != -1) {
        puVar4 = (undefined4 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48) +
                 (longlong)
                 *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) +
                         (longlong)(piVar1[2] * 2 + 1) * 4) * 4);
        *puVar4 = puVar2[2];
        puVar4[1] = local_38[3];
        puVar4[2] = local_38[4];
      }
      if (piVar1[3] != -1) {
        puVar4 = (undefined4 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48) +
                 (longlong)
                 *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) +
                         (longlong)(piVar1[3] * 2 + 1) * 4) * 4);
        *puVar4 = puVar2[2];
        puVar4[1] = *puVar2;
        puVar4[2] = puVar2[1];
      }
      piVar12 = *(int **)(param_1 + 8);
      iVar10 = iVar10 + 1;
      lVar14 = lVar14 + 8;
    } while (iVar10 < *piVar12);
  }
  return;
}



// FUNCTION 143924660 FUN_143924660 body=98 status=ok
// SIG undefined FUN_143924660(void)

void FUN_143924660(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_res8 [8];
  
  local_res8[0] = 3;
  std::vector<unsigned_int,std::allocator<bool>_>::resize
            (*(int **)(param_1 + 0x10) + 6,(longlong)(**(int **)(param_1 + 0x10) * 2),local_res8);
  piVar4 = *(int **)(param_1 + 0x10);
  iVar1 = 0;
  if (0 < *piVar4) {
    lVar2 = 0;
    iVar3 = 0;
    do {
      lVar2 = lVar2 + 8;
      iVar1 = iVar1 + 1;
      *(int *)(*(longlong *)(piVar4 + 6) + -4 + lVar2) = iVar3;
      iVar3 = iVar3 + 3;
      piVar4 = *(int **)(param_1 + 0x10);
    } while (iVar1 < *piVar4);
  }
  return;
}



// FUNCTION 1439246d0 FUN_1439246d0 body=69 status=ok
// SIG undefined FUN_1439246d0(void)

void FUN_1439246d0(longlong param_1)

{
  if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) -
       *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) & 0xfffffffffffffffcU) == 0) {
    FUN_143924660();
  }
  FUN_143918510(*(int **)(param_1 + 0x10) + 0xc,(longlong)(**(int **)(param_1 + 0x10) * 3));
  FUN_143924720(param_1);
  return;
}



// FUNCTION 143924720 FUN_143924720 body=421 status=ok
// SIG undefined FUN_143924720(void)

void FUN_143924720(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  
  iVar11 = 0;
  if (0 < **(int **)(param_1 + 8)) {
    lVar9 = 0;
    do {
      lVar8 = *(longlong *)(param_1 + 8);
      piVar1 = (int *)(*(longlong *)(lVar8 + 0x30) +
                      (longlong)*(int *)(*(longlong *)(lVar8 + 0x18) + 4 + lVar9) * 4);
      piVar2 = (int *)(*(longlong *)(lVar8 + 0x48) +
                      (longlong)*(int *)(*(longlong *)(lVar8 + 0x18) + 4 + lVar9) * 4);
      piVar3 = (int *)(*(longlong *)(param_1 + 0x78) +
                      (longlong)*(int *)(*(longlong *)(param_1 + 0x58) + 4 + lVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0xd8);
      uVar5 = *(undefined4 *)(lVar8 + (longlong)*piVar2 * 4);
      uVar6 = *(undefined4 *)(lVar8 + (longlong)piVar2[1] * 4);
      uVar7 = *(undefined4 *)(lVar8 + (longlong)piVar2[2] * 4);
      if (*piVar3 != -1) {
        puVar4 = (undefined4 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
                 (longlong)
                 *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) +
                         (longlong)(*piVar3 * 2 + 1) * 4) * 4);
        *puVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + (longlong)*piVar1 * 4);
        puVar4[1] = uVar5;
        puVar4[2] = uVar7;
      }
      if (piVar3[1] != -1) {
        lVar10 = (longlong)
                 *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) +
                         (longlong)(piVar3[1] * 2 + 1) * 4);
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30);
        *(undefined4 *)(lVar8 + lVar10 * 4) = uVar5;
        lVar8 = lVar8 + lVar10 * 4;
        *(undefined4 *)(lVar8 + 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + (longlong)piVar1[1] * 4);
        *(undefined4 *)(lVar8 + 8) = uVar6;
      }
      if (piVar3[2] != -1) {
        lVar10 = (longlong)
                 *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) +
                         (longlong)(piVar3[2] * 2 + 1) * 4);
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30);
        *(undefined4 *)(lVar8 + lVar10 * 4) = uVar7;
        *(undefined4 *)(lVar8 + 4 + lVar10 * 4) = uVar6;
        *(undefined4 *)(lVar8 + lVar10 * 4 + 8) =
             *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + (longlong)piVar1[2] * 4);
      }
      if (piVar3[3] != -1) {
        lVar10 = (longlong)
                 *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) +
                         (longlong)(piVar3[3] * 2 + 1) * 4);
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30);
        *(undefined4 *)(lVar8 + lVar10 * 4) = uVar6;
        *(undefined4 *)(lVar8 + 4 + lVar10 * 4) = uVar7;
        *(undefined4 *)(lVar8 + 8 + lVar10 * 4) = uVar5;
      }
      iVar11 = iVar11 + 1;
      lVar9 = lVar9 + 8;
    } while (iVar11 < **(int **)(param_1 + 8));
  }
  return;
}



// FUNCTION 1439248d0 FUN_1439248d0 body=248 status=ok
// SIG undefined FUN_1439248d0(void)

void FUN_1439248d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 8);
  lVar6 = *(longlong *)(lVar5 + 0xb0);
  lVar2 = *(longlong *)(lVar5 + 0xa8);
  lVar3 = *(longlong *)(lVar5 + 0x170);
  lVar4 = *(longlong *)(lVar5 + 0x168);
  iVar1 = *(int *)(lVar5 + 4);
  FUN_143918510(*(longlong *)(param_1 + 0x10) + 0x150,
                (longlong)(*(int *)(*(longlong *)(param_1 + 0x10) + 8) * 2));
  lVar5 = (longlong)((int)(lVar3 - lVar4 >> 2) + ((int)(lVar6 - lVar2 >> 2) + iVar1) * 2);
  FUN_143918510(*(longlong *)(param_1 + 0x10) + 0x168,lVar5);
  FUN_143918420(*(longlong *)(param_1 + 0x10) + 0x180,lVar5);
  if (*(int *)(param_1 + 0x54) == 0) {
    FUN_143922f60();
    FUN_1439249d0(param_1);
  }
  else {
    FUN_1439249d0(param_1);
    FUN_143922f60(param_1);
  }
  lVar5 = *(longlong *)(param_1 + 0x10);
  iVar1 = *(int *)(lVar5 + 8) * 2;
  lVar6 = (longlong)
          (*(int *)(*(longlong *)(lVar5 + 0x150) + (longlong)(iVar1 + -2) * 4) +
          *(int *)(*(longlong *)(lVar5 + 0x150) + (longlong)(iVar1 + -1) * 4));
  FUN_143918510(lVar5 + 0x168,lVar6);
  FUN_143918420(*(longlong *)(param_1 + 0x10) + 0x180,lVar6);
  return;
}



// FUNCTION 1439249d0 FUN_1439249d0 body=815 status=ok
// SIG undefined FUN_1439249d0(void)

void FUN_1439249d0(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  undefined2 *puVar12;
  int iVar13;
  int *piVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int local_res8;
  int local_res10;
  longlong local_res18;
  longlong local_res20;
  
  local_res8 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 4)) {
    local_res10 = 0;
    local_res20 = 0;
    local_res18 = 0;
    do {
      uVar18 = 0;
      iVar16 = *(int *)(local_res18 + *(longlong *)(param_1 + 0xd8));
      if (iVar16 != -1) {
        lVar5 = *(longlong *)(param_1 + 8);
        lVar6 = *(longlong *)(lVar5 + 0x90);
        lVar7 = *(longlong *)(lVar5 + 0xa8);
        iVar2 = *(int *)(lVar6 + 4 + local_res20);
        uVar3 = *(uint *)(lVar6 + local_res20);
        uVar21 = (ulonglong)uVar3;
        iVar4 = *(int *)(lVar6 + 4 + local_res20);
        lVar6 = *(longlong *)(lVar5 + 0xc0);
        lVar8 = *(longlong *)(param_1 + 0x10);
        piVar14 = (int *)(*(longlong *)(lVar5 + 0x78) + (longlong)local_res10 * 4);
        lVar15 = *(longlong *)(param_1 + 0xc0) + (longlong)local_res10 * 4;
        lVar5 = (longlong)(iVar16 * 2) * 4;
        piVar10 = (int *)(lVar5 + *(longlong *)(lVar8 + 0x150));
        iVar13 = uVar3 + 2;
        *piVar10 = iVar13;
        iVar17 = 0;
        iVar9 = iVar17;
        if (iVar16 != 0) {
          iVar9 = piVar10[-2] + piVar10[-1];
        }
        piVar10[1] = iVar9;
        iVar9 = *(int *)(lVar8 + 0x14);
        if (*(int *)(lVar8 + 0x14) < iVar13) {
          iVar9 = iVar13;
        }
        iVar13 = -1;
        *(int *)(lVar8 + 0x14) = iVar9;
        uVar20 = 0;
        lVar8 = *(longlong *)(param_1 + 0x10);
        lVar11 = (longlong)(iVar16 * 2 + 1);
        iVar16 = -1;
        piVar10 = (int *)(*(longlong *)(lVar8 + 0x168) +
                         (longlong)*(int *)(*(longlong *)(lVar8 + 0x150) + lVar11 * 4) * 4);
        puVar12 = (undefined2 *)
                  (*(longlong *)(lVar8 + 0x180) +
                  (longlong)*(int *)(*(longlong *)(lVar8 + 0x150) + lVar11 * 4) * 2);
        uVar19 = uVar18;
        if (0 < (int)uVar3) {
          do {
            uVar1 = *(ushort *)(lVar6 + (longlong)iVar4 * 2 + uVar19 * 2);
            lVar11 = (longlong)(*(int *)(lVar7 + (longlong)iVar2 * 4 + uVar19 * 4) * 2 + 1);
            lVar8 = *(longlong *)(param_1 + 0x90) +
                    (longlong)*(int *)(*(longlong *)(param_1 + 0x68) + lVar11 * 4) * 4;
            if (uVar19 == 0) {
              iVar16 = *piVar14;
              if (iVar16 != piVar14[1]) {
                uVar20 = (ulonglong)
                         (*(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x30) +
                                  ((longlong)
                                   *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) +
                                           lVar11 * 4) + (ulonglong)uVar1) * 4) != iVar16);
              }
              lVar11 = 0;
              if ((char)uVar20 == '\0') {
                lVar11 = 4;
              }
              iVar13 = *(int *)(lVar11 + lVar15);
              iVar16 = *(int *)(lVar15 + uVar20 * 4);
            }
            iVar9 = *(int *)(lVar8 + (ulonglong)uVar1 * 4);
            iVar17 = *(int *)(lVar8 + (longlong)(int)((uVar1 + 1) % 3) * 4);
            if ((uVar19 == 0) && (iVar13 != -1)) {
              *piVar10 = iVar13;
              uVar18 = (ulonglong)((int)uVar18 + 1);
              piVar10 = piVar10 + 1;
              *puVar12 = 0;
              puVar12 = puVar12 + 1;
            }
            if (iVar17 != -1) {
              *piVar10 = iVar17;
              piVar10 = piVar10 + 1;
              *puVar12 = 1;
              uVar18 = (ulonglong)((int)uVar18 + 1);
              puVar12 = puVar12 + 1;
            }
            if (iVar9 != -1) {
              *piVar10 = iVar9;
              uVar18 = (ulonglong)((int)uVar18 + 1);
              piVar10 = piVar10 + 1;
              *puVar12 = 0;
              puVar12 = puVar12 + 1;
            }
            if ((uVar19 == 0) && (iVar16 != -1)) {
              *piVar10 = iVar16;
              uVar18 = (ulonglong)((int)uVar18 + 1);
              piVar10 = piVar10 + 1;
              *puVar12 = 0;
              puVar12 = puVar12 + 1;
            }
            iVar17 = (int)uVar18;
            uVar21 = uVar21 - 1;
            uVar19 = uVar19 + 1;
          } while (uVar21 != 0);
        }
        *(int *)(lVar5 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x150)) = iVar17;
      }
      local_res8 = local_res8 + 1;
      local_res10 = local_res10 + 2;
      local_res18 = local_res18 + 4;
      local_res20 = local_res20 + 8;
    } while (local_res8 < *(int *)(*(longlong *)(param_1 + 8) + 4));
  }
  return;
}



// FUNCTION 143924d00 FUN_143924d00 body=245 status=ok
// SIG undefined FUN_143924d00(void)

void FUN_143924d00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 8);
  lVar5 = *(longlong *)(lVar4 + 0xb0);
  lVar1 = *(longlong *)(lVar4 + 0xa8);
  lVar2 = *(longlong *)(lVar4 + 0x128);
  lVar4 = *(longlong *)(lVar4 + 0x120);
  FUN_143918510(*(longlong *)(param_1 + 0x10) + 0x108,
                (longlong)(*(int *)(*(longlong *)(param_1 + 0x10) + 8) * 2));
  lVar4 = (longlong)((int)(lVar5 - lVar1 >> 2) * 3 + (int)(lVar2 - lVar4 >> 2));
  FUN_143918510(*(longlong *)(param_1 + 0x10) + 0x120,lVar4);
  FUN_143918420(*(longlong *)(param_1 + 0x10) + 0x138,lVar4);
  if (*(int *)(param_1 + 0x54) == 0) {
    FUN_143925040();
    FUN_143924e00(param_1);
  }
  else {
    FUN_143924e00(param_1);
    FUN_143925040(param_1);
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(lVar4 + 8) * 2;
  lVar5 = (longlong)
          (*(int *)(*(longlong *)(lVar4 + 0x108) + (longlong)(iVar3 + -2) * 4) +
          *(int *)(*(longlong *)(lVar4 + 0x108) + (longlong)(iVar3 + -1) * 4));
  FUN_143918510(lVar4 + 0x120,lVar5);
  FUN_143918420(*(longlong *)(param_1 + 0x10) + 0x138,lVar5);
  return;
}



// FUNCTION 143924e00 FUN_143924e00 body=567 status=ok
// SIG undefined FUN_143924e00(void)

void FUN_143924e00(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ushort *puVar7;
  int *piVar8;
  ulonglong uVar9;
  ushort *puVar10;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong local_res8;
  
  iVar13 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 4)) {
    lVar12 = 0;
    local_res8 = 0;
    do {
      iVar2 = *(int *)(local_res8 + *(longlong *)(param_1 + 0xd8));
      if (iVar2 != -1) {
        lVar3 = *(longlong *)(param_1 + 8);
        lVar4 = *(longlong *)(lVar3 + 0x90);
        uVar14 = *(uint *)(lVar4 + lVar12);
        uVar9 = (ulonglong)uVar14;
        piVar8 = (int *)(*(longlong *)(lVar3 + 0xa8) + (longlong)*(int *)(lVar4 + 4 + lVar12) * 4);
        puVar10 = (ushort *)
                  (*(longlong *)(lVar3 + 0xc0) + (longlong)*(int *)(lVar4 + 4 + lVar12) * 2);
        lVar3 = (longlong)(iVar2 * 2) * 4;
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x108);
        *(uint *)(lVar3 + lVar4) = uVar14 * 2;
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(lVar3 + -8 + lVar4) + *(int *)(lVar3 + -4 + lVar4);
        }
        *(int *)(lVar3 + 4 + lVar4) = iVar5;
        iVar5 = 0;
        lVar4 = *(longlong *)(param_1 + 0x10);
        lVar6 = (longlong)(iVar2 * 2 + 1);
        piVar11 = (int *)(*(longlong *)(lVar4 + 0x120) +
                         (longlong)*(int *)(*(longlong *)(lVar4 + 0x108) + lVar6 * 4) * 4);
        puVar7 = (ushort *)
                 (*(longlong *)(lVar4 + 0x138) +
                 (longlong)*(int *)(*(longlong *)(lVar4 + 0x108) + lVar6 * 4) * 2);
        if (0 < (int)uVar14) {
          do {
            uVar1 = *puVar10;
            uVar14 = (uVar1 + 1) % 3;
            lVar4 = *(longlong *)(param_1 + 0x78) +
                    (longlong)
                    *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)(*piVar8 * 2 + 1) * 4) * 4;
            iVar2 = *(int *)(lVar4 + (ulonglong)uVar14 * 4);
            if (iVar2 != -1) {
              *piVar11 = iVar2;
              iVar5 = iVar5 + 1;
              piVar11 = piVar11 + 1;
              *puVar7 = uVar1;
              puVar7 = puVar7 + 1;
            }
            if (*(int *)(lVar4 + 0xc) != -1) {
              *piVar11 = *(int *)(lVar4 + 0xc);
              iVar5 = iVar5 + 1;
              piVar11 = piVar11 + 1;
              *puVar7 = (short)(uVar1 + 2) +
                        (short)((ulonglong)((longlong)(int)(uVar1 + 2) * 0x55555556) >> 0x20) * -3;
              puVar7 = puVar7 + 1;
            }
            iVar2 = *(int *)(lVar4 + (ulonglong)uVar1 * 4);
            if (iVar2 != -1) {
              *piVar11 = iVar2;
              iVar5 = iVar5 + 1;
              piVar11 = piVar11 + 1;
              *puVar7 = (ushort)uVar14;
              puVar7 = puVar7 + 1;
            }
            piVar8 = piVar8 + 1;
            puVar10 = puVar10 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        *(int *)(lVar3 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x108)) = iVar5;
      }
      local_res8 = local_res8 + 4;
      iVar13 = iVar13 + 1;
      lVar12 = lVar12 + 8;
    } while (iVar13 < *(int *)(*(longlong *)(param_1 + 8) + 4));
  }
  return;
}



// FUNCTION 143925040 FUN_143925040 body=405 status=ok
// SIG undefined FUN_143925040(void)

void FUN_143925040(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ushort *puVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  ushort *puVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  
  iVar15 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 8)) {
    lVar13 = 0;
    lVar14 = 0;
    do {
      iVar2 = *(int *)(lVar14 + *(longlong *)(param_1 + 0xf0));
      if (iVar2 != -1) {
        lVar4 = *(longlong *)(param_1 + 8);
        lVar5 = *(longlong *)(lVar4 + 0x108);
        uVar3 = *(uint *)(lVar5 + lVar13);
        uVar9 = (ulonglong)uVar3;
        piVar11 = (int *)(*(longlong *)(lVar4 + 0x120) + (longlong)*(int *)(lVar5 + 4 + lVar13) * 4)
        ;
        puVar12 = (ushort *)
                  (*(longlong *)(lVar4 + 0x138) + (longlong)*(int *)(lVar5 + 4 + lVar13) * 2);
        lVar4 = (longlong)(iVar2 * 2) * 4;
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x108);
        *(uint *)(lVar5 + lVar4) = uVar3;
        if (iVar2 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(lVar5 + -8 + lVar4) + *(int *)(lVar5 + -4 + lVar4);
        }
        *(int *)(lVar5 + 4 + lVar4) = iVar8;
        iVar8 = 0;
        lVar5 = *(longlong *)(param_1 + 0x10);
        lVar7 = (longlong)(iVar2 * 2 + 1);
        piVar10 = (int *)(*(longlong *)(lVar5 + 0x120) +
                         (longlong)*(int *)(*(longlong *)(lVar5 + 0x108) + lVar7 * 4) * 4);
        puVar6 = (ushort *)
                 (*(longlong *)(lVar5 + 0x138) +
                 (longlong)*(int *)(*(longlong *)(lVar5 + 0x108) + lVar7 * 4) * 2);
        if (0 < (int)uVar3) {
          do {
            uVar1 = *puVar12;
            iVar2 = *(int *)(*(longlong *)(param_1 + 0x78) +
                            ((longlong)
                             *(int *)(*(longlong *)(param_1 + 0x58) +
                                     (longlong)(*piVar11 * 2 + 1) * 4) + (ulonglong)uVar1) * 4);
            if (iVar2 != -1) {
              *piVar10 = iVar2;
              iVar8 = iVar8 + 1;
              piVar10 = piVar10 + 1;
              *puVar6 = uVar1;
              puVar6 = puVar6 + 1;
            }
            puVar12 = puVar12 + 1;
            piVar11 = piVar11 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x108) + lVar4) = iVar8;
      }
      iVar15 = iVar15 + 1;
      lVar14 = lVar14 + 4;
      lVar13 = lVar13 + 8;
    } while (iVar15 < *(int *)(*(longlong *)(param_1 + 8) + 8));
  }
  return;
}



// FUNCTION 1439251e0 FUN_1439251e0 body=21 status=ok
// SIG undefined FUN_1439251e0(void)

void FUN_1439251e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14394bdf0();
  FUN_14394beb0(uVar1);
  return;
}



// FUNCTION 143925200 ConvertToTraceType body=28 status=ok
// SIG undefined ConvertToTraceType(void)

void UEngineTypes::ConvertToTraceType(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14394bdf0();
  FUN_14394c030(uVar1,param_1);
  return;
}



// FUNCTION 143925220 FUN_143925220 body=221 status=ok
// SIG undefined FUN_143925220(void)

undefined8 * FUN_143925220(undefined8 *param_1,longlong param_2,char *param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = 0;
  param_1[3] = 0xf;
  param_1[2] = 0;
  *(undefined1 *)param_1 = 0;
  lVar2 = lVar4;
  if (*param_3 != '\0') {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_3[lVar2] != '\0');
  }
  lVar2 = lVar2 + *(longlong *)(param_2 + 0x10);
  if ((param_1[3] != lVar2) &&
     (cVar1 = FUN_143925b90(param_1,lVar2,1,param_4,1,0xfffffffffffffffe), cVar1 != '\0')) {
    param_1[2] = 0;
    puVar3 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar3 = (undefined8 *)*param_1;
    }
    *(undefined1 *)puVar3 = 0;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_1,param_2,0,0xffffffffffffffff);
  if (*param_3 != '\0') {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_3[lVar4] != '\0');
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_1,param_3,lVar4);
  return param_1;
}



// FUNCTION 143925300 FUN_143925300 body=85 status=ok
// SIG undefined FUN_143925300(void)

longlong FUN_143925300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  lVar1 = FUN_143925b30();
  *(undefined2 *)(lVar1 + 0x18) = 0;
  FUN_1439254b0(param_1,lVar1 + 0x1c,param_2,param_4,uVar2);
  return lVar1;
}



// FUNCTION 143925360 FUN_143925360 body=171 status=ok
// SIG undefined FUN_143925360(void)

void FUN_143925360(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  lVar2 = *param_1;
  uVar7 = FUN_143925410(param_1,*(undefined8 *)(*param_2 + 8),lVar2,param_3);
  *(undefined8 *)(lVar2 + 8) = uVar7;
  plVar3 = (longlong *)*param_1;
  param_1[1] = param_2[1];
  plVar4 = (longlong *)plVar3[1];
  if (*(char *)((longlong)plVar4 + 0x19) != '\0') {
    *plVar3 = (longlong)plVar3;
    *(longlong *)(*param_1 + 0x10) = *param_1;
    return;
  }
  cVar1 = *(char *)(*plVar4 + 0x19);
  plVar6 = (longlong *)*plVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar6 + 0x19);
    plVar4 = plVar6;
    plVar6 = (longlong *)*plVar6;
  }
  *plVar3 = (longlong)plVar4;
  lVar2 = *(longlong *)(*param_1 + 8);
  lVar5 = *(longlong *)(lVar2 + 0x10);
  cVar1 = *(char *)(lVar5 + 0x19);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x19);
    lVar2 = lVar5;
    lVar5 = *(longlong *)(lVar5 + 0x10);
  }
  *(longlong *)(*param_1 + 0x10) = lVar2;
  return;
}



// FUNCTION 143925410 FUN_143925410 body=158 status=ok
// SIG undefined FUN_143925410(void)

undefined8 *
FUN_143925410(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar2 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar1 = (undefined8 *)FUN_143925300(param_1,(longlong)param_2 + 0x1c);
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((longlong)puVar2 + 0x19) != '\0') {
      puVar2 = puVar1;
    }
    uVar3 = FUN_143925410(param_1,*param_2,puVar1,param_4,puVar2,uVar3);
    *puVar1 = uVar3;
    uVar3 = FUN_143925410(param_1,param_2[2],puVar1,param_4);
    puVar1[2] = uVar3;
  }
  return puVar2;
}



// FUNCTION 1439254b0 FUN_1439254b0 body=115 status=ok
// SIG undefined FUN_1439254b0(void)

void FUN_1439254b0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_2 != (undefined8 *)0x0) {
    lVar2 = 2;
    do {
      puVar4 = param_3;
      puVar3 = param_2;
      uVar1 = puVar4[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar1;
      uVar1 = puVar4[3];
      puVar3[2] = puVar4[2];
      puVar3[3] = uVar1;
      uVar1 = puVar4[5];
      puVar3[4] = puVar4[4];
      puVar3[5] = uVar1;
      uVar1 = puVar4[7];
      puVar3[6] = puVar4[6];
      puVar3[7] = uVar1;
      uVar1 = puVar4[9];
      puVar3[8] = puVar4[8];
      puVar3[9] = uVar1;
      uVar1 = puVar4[0xb];
      puVar3[10] = puVar4[10];
      puVar3[0xb] = uVar1;
      uVar1 = puVar4[0xd];
      puVar3[0xc] = puVar4[0xc];
      puVar3[0xd] = uVar1;
      uVar1 = puVar4[0xf];
      puVar3[0xe] = puVar4[0xe];
      puVar3[0xf] = uVar1;
      lVar2 = lVar2 + -1;
      param_2 = puVar3 + 0x10;
      param_3 = puVar4 + 0x10;
    } while (lVar2 != 0);
    uVar1 = puVar4[0x11];
    puVar3[0x10] = puVar4[0x10];
    puVar3[0x11] = uVar1;
  }
  return;
}



// FUNCTION 143925550 FUN_143925550 body=33 status=ok
// SIG undefined FUN_143925550(void)

undefined8 * FUN_143925550(undefined8 *param_1)

{
  FUN_143e17780();
  *param_1 = Iex::ArgExc::vftable;
  return param_1;
}



// FUNCTION 143925580 FUN_143925580 body=463 status=ok
// SIG undefined FUN_143925580(void)

undefined8 * FUN_143925580(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 local_20 [24];
  
  FUN_14394c2d0();
  *param_1 = Imf::RgbaInputFile::FromYca::vftable;
  param_1[6] = param_2;
  *(byte *)(param_1 + 7) = (byte)(param_3 >> 5) & 1;
  uVar7 = FLiveLinkClient::OnLiveLinkSourcesChanged(param_2);
  piVar8 = (int *)UEngine::SeamlessTravelHandlerForWorld(uVar7);
  iVar1 = *piVar8;
  iVar2 = piVar8[1];
  iVar3 = piVar8[2];
  iVar4 = piVar8[3];
  *(int *)((longlong)param_1 + 0x3c) = iVar1;
  *(int *)(param_1 + 8) = iVar2;
  *(int *)((longlong)param_1 + 0x44) = iVar4;
  *(int *)(param_1 + 9) = (iVar3 - iVar1) + 1;
  *(int *)((longlong)param_1 + 0x4c) = (iVar4 - iVar2) + 1;
  *(int *)(param_1 + 10) = iVar2 + -0x1d;
  uVar7 = FLiveLinkClient::OnLiveLinkSourcesChanged(param_1[6]);
  puVar9 = (undefined4 *)UEngine::SeamlessTravelHandlerForWorld(uVar7);
  *(undefined4 *)((longlong)param_1 + 0x54) = *puVar9;
  uVar7 = FLiveLinkClient::OnLiveLinkSourcesChanged(param_1[6]);
  puVar9 = (undefined4 *)FUN_1439274e0(local_20,uVar7);
  *(undefined4 *)(param_1 + 0xb) = *puVar9;
  *(undefined4 *)((longlong)param_1 + 0x5c) = puVar9[1];
  *(undefined4 *)(param_1 + 0xc) = puVar9[2];
  uVar10 = FUN_143925c70((longlong)*(int *)(param_1 + 9) << 3);
  uVar10 = uVar10 >> 3;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = ((longlong)*(int *)(param_1 + 9) + uVar10) * 0x20;
  uVar7 = SUB168(ZEXT816(8) * auVar5,0);
  if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
    uVar7 = 0xffffffffffffffff;
  }
  uVar7 = operator_new(uVar7);
  param_1[0xd] = uVar7;
  lVar11 = 0;
  plVar12 = param_1 + 0xe;
  lVar13 = 0x1d;
  do {
    *plVar12 = param_1[0xd] + ((longlong)*(int *)(param_1 + 9) + uVar10) * lVar11 * 8;
    lVar11 = lVar11 + 1;
    plVar12 = plVar12 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  param_1[0x2b] = ((longlong)*(int *)(param_1 + 9) + uVar10) * 0xe8 + param_1[0xd];
  param_1[0x2c] = ((longlong)*(int *)(param_1 + 9) + uVar10) * 0xf0 + param_1[0xd];
  param_1[0x2d] = ((longlong)*(int *)(param_1 + 9) + uVar10) * 0xf8 + param_1[0xd];
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (longlong)(*(int *)(param_1 + 9) + 0x1a);
  uVar7 = SUB168(ZEXT816(8) * auVar6,0);
  if (SUB168(ZEXT816(8) * auVar6,8) != 0) {
    uVar7 = 0xffffffffffffffff;
  }
  uVar7 = operator_new(uVar7);
  param_1[0x2e] = uVar7;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  return param_1;
}



// FUNCTION 143925750 FUN_143925750 body=223 status=ok
// SIG undefined FUN_143925750(void)

undefined8 *
FUN_143925750(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  *param_1 = Imf::RgbaInputFile::vftable;
  lVar2 = operator_new(0x10);
  uVar4 = 0;
  uVar3 = uVar4;
  if (lVar2 != 0) {
    uVar3 = FUN_143933bc0(lVar2,param_2,param_3,param_4,uVar5);
  }
  param_1[1] = uVar3;
  param_1[2] = 0;
  param_1[6] = 0xf;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (param_1 + 3,&DAT_145af3922,0);
  uVar3 = FLiveLinkClient::OnLiveLinkSourcesChanged(param_1[1]);
  uVar3 = UEngine::SeamlessTravelHandlerForWorld(uVar3);
  uVar1 = FUN_143926a30(uVar3,param_1 + 3);
  if ((uVar1 & 0x30) != 0) {
    lVar2 = operator_new(400);
    if (lVar2 != 0) {
      uVar4 = FUN_143925580(lVar2,param_1[1],uVar1);
    }
    param_1[2] = uVar4;
  }
  return param_1;
}



// FUNCTION 143925830 FUN_143925830 body=223 status=ok
// SIG undefined FUN_143925830(void)

undefined8 *
FUN_143925830(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  *param_1 = Imf::RgbaInputFile::vftable;
  lVar2 = operator_new(0x10);
  uVar4 = 0;
  uVar3 = uVar4;
  if (lVar2 != 0) {
    uVar3 = FUN_143933c40(lVar2,param_2,param_3,param_4,uVar5);
  }
  param_1[1] = uVar3;
  param_1[2] = 0;
  param_1[6] = 0xf;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (param_1 + 3,&DAT_145af3922,0);
  uVar3 = FLiveLinkClient::OnLiveLinkSourcesChanged(param_1[1]);
  uVar3 = UEngine::SeamlessTravelHandlerForWorld(uVar3);
  uVar1 = FUN_143926a30(uVar3,param_1 + 3);
  if ((uVar1 & 0x30) != 0) {
    lVar2 = operator_new(400);
    if (lVar2 != 0) {
      uVar4 = FUN_143925580(lVar2,param_1[1],uVar1);
    }
    param_1[2] = uVar4;
  }
  return param_1;
}



// FUNCTION 143925920 FUN_143925920 body=36 status=ok
// SIG undefined FUN_143925920(void)

void FUN_143925920(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_143712dd0(*param_1);
    return;
  }
  return;
}



// FUNCTION 143925950 FUN_143925950 body=121 status=ok
// SIG undefined FUN_143925950(void)

void FUN_143925950(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = Imf::RgbaInputFile::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (0xf < (ulonglong)param_1[6]) {
    std::_Wrap_alloc<std::allocator<char>_>::deallocate(param_1 + 3,param_1[3],param_1[6] + 1);
  }
  param_1[6] = 0xf;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



// FUNCTION 1439259d0 FUN_1439259d0 body=66 status=ok
// SIG undefined FUN_1439259d0(void)

void FUN_1439259d0(longlong param_1)

{
  ios_base *piVar1;
  
  piVar1 = (ios_base *)(param_1 + 0x98);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>(piVar1);
  *(code **)piVar1 = _vftable__exref;
  *(code **)piVar1 = _vftable__exref;
                    /* WARNING: Could not recover jumptable at 0x000143925a0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::ios_base::_Ios_base_dtor(piVar1);
  return;
}



// FUNCTION 143925a20 FUN_143925a20 body=47 status=ok
// SIG undefined FUN_143925a20(void)

undefined8 FUN_143925a20(undefined8 param_1,uint param_2)

{
  FUN_143e17bd0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143925a50 FUN_143925a50 body=81 status=ok
// SIG undefined FUN_143925a50(void)

undefined8 * FUN_143925a50(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::RgbaInputFile::FromYca::vftable;
  FMemory::operator_delete(param_1[0xd]);
  FMemory::operator_delete(param_1[0x2e]);
  FUN_14394c300(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143925ab0 FUN_143925ab0 body=47 status=ok
// SIG undefined FUN_143925ab0(void)

undefined8 FUN_143925ab0(undefined8 param_1,uint param_2)

{
  FUN_143925950();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143925ae0 FUN_143925ae0 body=77 status=ok
// SIG undefined FUN_143925ae0(void)

void FUN_143925ae0(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x130);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  *(longlong *)lVar1 = lVar1;
  if ((longlong *)(lVar1 + 8) != (longlong *)0x0) {
    *(longlong *)(lVar1 + 8) = lVar1;
  }
  if ((longlong *)(lVar1 + 0x10) != (longlong *)0x0) {
    *(longlong *)(lVar1 + 0x10) = lVar1;
  }
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  return;
}



// FUNCTION 143925b30 FUN_143925b30 body=92 status=ok
// SIG undefined FUN_143925b30(void)

undefined8 * FUN_143925b30(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x130);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  *puVar1 = *param_1;
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = *param_1;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = *param_1;
  }
  return puVar1;
}



// FUNCTION 143925b90 FUN_143925b90 body=208 status=ok
// SIG undefined FUN_143925b90(void)

bool FUN_143925b90(undefined8 *param_1,ulonglong param_2,char param_3)

{
  ulonglong uVar1;
  void *_Src;
  ulonglong _Size;
  
  if (param_2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  uVar1 = param_1[3];
  if (uVar1 < param_2) {
    FUN_143263050(param_1,param_2,param_1[2]);
  }
  else if ((param_3 == '\0') || (0xf < param_2)) {
    if (param_2 == 0) {
      param_1[2] = 0;
      if (0xf < uVar1) {
        param_1 = (undefined8 *)*param_1;
      }
      *(undefined1 *)param_1 = 0;
    }
  }
  else {
    _Size = param_1[2];
    if (param_2 < (ulonglong)param_1[2]) {
      _Size = param_2;
    }
    if (0xf < uVar1) {
      _Src = (void *)*param_1;
      if (_Size != 0) {
        _guard_xfg_dispatch_icall_nop(param_1,_Src,_Size);
      }
      std::_Wrap_alloc<std::allocator<char>_>::deallocate(param_1,_Src,param_1[3] + 1);
    }
    param_1[2] = _Size;
    param_1[3] = 0xf;
    *(undefined1 *)(_Size + (longlong)param_1) = 0;
  }
  return param_2 != 0;
}



// FUNCTION 143925c70 FUN_143925c70 body=234 status=ok
// SIG undefined FUN_143925c70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_143925c70(longlong param_1)

{
  byte bVar1;
  int iVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b95d30) && (_Init_thread_header(&DAT_146b95d30), DAT_146b95d30 == -1))
  {
    _DAT_146b95d28 = (longlong)(1 << ((byte)DAT_14682ced8 & 0x1f));
    _Init_thread_footer(&DAT_146b95d30);
  }
  iVar2 = DAT_14682ced8 + 2;
  bVar1 = (byte)iVar2;
  while (1 < param_1 >> (bVar1 & 0x3f)) {
    iVar2 = iVar2 + 1;
    bVar1 = (byte)iVar2;
  }
  iVar2 = 1 << (bVar1 + 1 & 0x1f);
  if (param_1 <= iVar2 + -0x40) {
    iVar2 = 1 << (bVar1 & 0x1f);
    if (iVar2 + 0x40 <= param_1) {
      return 0;
    }
    return (iVar2 - param_1) + 0x40;
  }
  return (iVar2 - param_1) + 0x40;
}



// FUNCTION 143925d60 clear body=126 status=ok
// SIG undefined clear(void)

void std::
     _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
     ::clear(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    _Erase(param_1,plVar3[2],param_3,param_4,uVar4);
    plVar2 = (longlong *)*plVar3;
    FMemory::operator_delete(plVar3);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  *(longlong *)(*param_1 + 8) = *param_1;
  *(longlong *)*param_1 = *param_1;
  *(longlong *)(*param_1 + 0x10) = *param_1;
  param_1[1] = 0;
  return;
}



// FUNCTION 143925de0 FUN_143925de0 body=119 status=ok
// SIG undefined FUN_143925de0(void)

ulonglong FUN_143925de0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar2 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  uVar4 = uVar1;
  if (uVar2 < uVar1) {
    uVar4 = uVar2;
  }
  if (uVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = _guard_xfg_dispatch_icall_nop(param_1,param_2,uVar4);
  }
  uVar4 = (ulonglong)iVar3;
  if (uVar4 == 0) {
    if (uVar2 < uVar1) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = (ulonglong)(uVar2 != uVar1);
    }
  }
  return uVar4;
}



// FUNCTION 143925e60 ShouldUsePath body=25 status=ok
// SIG undefined ShouldUsePath(void)

void FLightningBallModelComponent::ShouldUsePath(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FLiveLinkClient::OnLiveLinkSourcesChanged(*(undefined8 *)(param_1 + 8));
  UEngine::SeamlessTravelHandlerForWorld(uVar1);
  return;
}



// FUNCTION 143925e80 erase body=218 status=ok
// SIG undefined erase(void)

undefined8 *
std::
_Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
::erase(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  longlong *local_res18;
  
  if ((param_3 == *(longlong **)*param_1) && (param_4 == (longlong *)*param_1)) {
    clear();
    *param_2 = *(undefined8 *)*param_1;
    return param_2;
  }
  while (param_3 != param_4) {
    local_res18 = param_3;
    if (*(char *)((longlong)param_3 + 0x19) == '\0') {
      local_res18 = (longlong *)param_3[2];
      if (*(char *)((longlong)local_res18 + 0x19) == '\0') {
        cVar1 = *(char *)(*local_res18 + 0x19);
        plVar2 = (longlong *)*local_res18;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x19);
          local_res18 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x19);
        plVar3 = (longlong *)param_3[1];
        plVar2 = param_3;
        while ((local_res18 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)local_res18[2]))) {
          cVar1 = *(char *)(local_res18[1] + 0x19);
          plVar3 = (longlong *)local_res18[1];
          plVar2 = local_res18;
        }
      }
    }
    erase(param_1,local_res8,param_3);
    param_3 = local_res18;
  }
  *param_2 = param_3;
  return param_2;
}



// FUNCTION 143925f60 erase body=968 status=ok
// SIG undefined erase(void)

undefined8 *
std::
_Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
::erase(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_res18;
  
  local_res18 = param_3;
  if (*(char *)((longlong)param_3 + 0x19) == '\0') {
    local_res18 = (longlong *)param_3[2];
    if (*(char *)((longlong)local_res18 + 0x19) == '\0') {
      cVar1 = *(char *)(*local_res18 + 0x19);
      plVar7 = (longlong *)*local_res18;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar7 + 0x19);
        local_res18 = plVar7;
        plVar7 = (longlong *)*plVar7;
      }
    }
    else {
      cVar1 = *(char *)(param_3[1] + 0x19);
      plVar8 = (longlong *)param_3[1];
      plVar7 = param_3;
      while ((local_res18 = plVar8, cVar1 == '\0' && (plVar7 == (longlong *)local_res18[2]))) {
        cVar1 = *(char *)(local_res18[1] + 0x19);
        plVar8 = (longlong *)local_res18[1];
        plVar7 = local_res18;
      }
    }
  }
  plVar7 = (longlong *)*param_3;
  if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
    plVar8 = plVar7;
    if ((*(char *)(param_3[2] + 0x19) == '\0') &&
       (plVar8 = (longlong *)local_res18[2], local_res18 != param_3)) {
      plVar7[1] = (longlong)local_res18;
      *local_res18 = *param_3;
      plVar7 = local_res18;
      if (local_res18 != (longlong *)param_3[2]) {
        plVar7 = (longlong *)local_res18[1];
        if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
          plVar8[1] = (longlong)plVar7;
        }
        *plVar7 = (longlong)plVar8;
        local_res18[2] = param_3[2];
        *(longlong **)(param_3[2] + 8) = local_res18;
      }
      if (*(longlong **)(*param_1 + 8) == param_3) {
        *(longlong **)(*param_1 + 8) = local_res18;
      }
      else {
        puVar4 = (undefined8 *)param_3[1];
        if ((longlong *)*puVar4 == param_3) {
          *puVar4 = local_res18;
        }
        else {
          puVar4[2] = local_res18;
        }
      }
      local_res18[1] = param_3[1];
      lVar3 = local_res18[3];
      *(char *)(local_res18 + 3) = (char)param_3[3];
      *(char *)(param_3 + 3) = (char)lVar3;
      goto LAB_143926124;
    }
  }
  else {
    plVar8 = (longlong *)param_3[2];
  }
  plVar7 = (longlong *)param_3[1];
  if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
    plVar8[1] = (longlong)plVar7;
  }
  if (*(longlong **)(*param_1 + 8) == param_3) {
    *(longlong **)(*param_1 + 8) = plVar8;
  }
  else if ((longlong *)*plVar7 == param_3) {
    *plVar7 = (longlong)plVar8;
  }
  else {
    plVar7[2] = (longlong)plVar8;
  }
  if (*(longlong **)*param_1 == param_3) {
    plVar6 = plVar7;
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar8 + 0x19);
      plVar2 = (longlong *)*plVar8;
      plVar6 = plVar8;
      while (plVar5 = plVar2, cVar1 == '\0') {
        plVar2 = (longlong *)*plVar5;
        cVar1 = *(char *)((longlong)plVar2 + 0x19);
        plVar6 = plVar5;
      }
    }
    *(longlong **)*param_1 = plVar6;
  }
  lVar3 = *param_1;
  if (*(longlong **)(lVar3 + 0x10) == param_3) {
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      cVar1 = *(char *)(plVar8[2] + 0x19);
      plVar6 = (longlong *)plVar8[2];
      plVar2 = plVar8;
      while (plVar5 = plVar6, cVar1 == '\0') {
        plVar6 = (longlong *)plVar5[2];
        cVar1 = *(char *)((longlong)plVar6 + 0x19);
        plVar2 = plVar5;
      }
      *(longlong **)(lVar3 + 0x10) = plVar2;
    }
    else {
      *(longlong **)(lVar3 + 0x10) = plVar7;
    }
  }
LAB_143926124:
  if ((char)param_3[3] == '\x01') {
    if (plVar8 != *(longlong **)(*param_1 + 8)) {
      do {
        plVar6 = plVar7;
        if ((char)plVar8[3] != '\x01') break;
        plVar7 = (longlong *)*plVar6;
        if (plVar8 == plVar7) {
          plVar7 = (longlong *)plVar6[2];
          if ((char)plVar7[3] == '\0') {
            *(undefined1 *)(plVar7 + 3) = 1;
            plVar7 = (longlong *)plVar6[2];
            *(undefined1 *)(plVar6 + 3) = 0;
            plVar6[2] = *plVar7;
            if (*(char *)(*plVar7 + 0x19) == '\0') {
              *(longlong **)(*plVar7 + 8) = plVar6;
            }
            plVar7[1] = plVar6[1];
            if (plVar6 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar7;
            }
            else {
              puVar4 = (undefined8 *)plVar6[1];
              if (plVar6 == (longlong *)*puVar4) {
                *puVar4 = plVar7;
              }
              else {
                puVar4[2] = plVar7;
              }
            }
            *plVar7 = (longlong)plVar6;
            plVar6[1] = (longlong)plVar7;
            plVar7 = (longlong *)plVar6[2];
          }
          if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
            if ((*(char *)(*plVar7 + 0x18) != '\x01') || (*(char *)(plVar7[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar7[2] + 0x18) == '\x01') {
                *(undefined1 *)(*plVar7 + 0x18) = 1;
                *(undefined1 *)(plVar7 + 3) = 0;
                _Rrotate(param_1,plVar7);
                plVar7 = (longlong *)plVar6[2];
              }
              *(char *)(plVar7 + 3) = (char)plVar6[3];
              *(undefined1 *)(plVar6 + 3) = 1;
              *(undefined1 *)(plVar7[2] + 0x18) = 1;
              _Lrotate(param_1,plVar6);
              break;
            }
LAB_143926290:
            *(undefined1 *)(plVar7 + 3) = 0;
          }
        }
        else {
          if ((char)plVar7[3] == '\0') {
            *(undefined1 *)(plVar7 + 3) = 1;
            lVar3 = *plVar6;
            *(undefined1 *)(plVar6 + 3) = 0;
            *plVar6 = *(longlong *)(lVar3 + 0x10);
            if (*(char *)(*(longlong *)(lVar3 + 0x10) + 0x19) == '\0') {
              *(longlong **)(*(longlong *)(lVar3 + 0x10) + 8) = plVar6;
            }
            *(longlong *)(lVar3 + 8) = plVar6[1];
            if (plVar6 == *(longlong **)(*param_1 + 8)) {
              *(longlong *)(*param_1 + 8) = lVar3;
            }
            else {
              plVar7 = (longlong *)plVar6[1];
              if (plVar6 == (longlong *)plVar7[2]) {
                plVar7[2] = lVar3;
              }
              else {
                *plVar7 = lVar3;
              }
            }
            *(longlong **)(lVar3 + 0x10) = plVar6;
            plVar6[1] = lVar3;
            plVar7 = (longlong *)*plVar6;
          }
          if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
            if ((*(char *)(plVar7[2] + 0x18) == '\x01') && (*(char *)(*plVar7 + 0x18) == '\x01'))
            goto LAB_143926290;
            if (*(char *)(*plVar7 + 0x18) == '\x01') {
              *(undefined1 *)(plVar7[2] + 0x18) = 1;
              *(undefined1 *)(plVar7 + 3) = 0;
              _Lrotate(param_1,plVar7);
              plVar7 = (longlong *)*plVar6;
            }
            *(char *)(plVar7 + 3) = (char)plVar6[3];
            *(undefined1 *)(plVar6 + 3) = 1;
            *(undefined1 *)(*plVar7 + 0x18) = 1;
            _Rrotate(param_1,plVar6);
            break;
          }
        }
        plVar7 = (longlong *)plVar6[1];
        plVar8 = plVar6;
      } while (plVar6 != *(longlong **)(*param_1 + 8));
    }
    *(undefined1 *)(plVar8 + 3) = 1;
  }
  FMemory::operator_delete(param_3);
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  *param_2 = local_res18;
  return param_2;
}



// FUNCTION 143926330 erase body=218 status=ok
// SIG undefined erase(void)

undefined8 *
std::
_Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
::erase(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  longlong *local_res18;
  
  if ((param_3 == *(longlong **)*param_1) && (param_4 == (longlong *)*param_1)) {
    clear();
    *param_2 = *(undefined8 *)*param_1;
    return param_2;
  }
  while (param_3 != param_4) {
    local_res18 = param_3;
    if (*(char *)((longlong)param_3 + 0x19) == '\0') {
      local_res18 = (longlong *)param_3[2];
      if (*(char *)((longlong)local_res18 + 0x19) == '\0') {
        cVar1 = *(char *)(*local_res18 + 0x19);
        plVar2 = (longlong *)*local_res18;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x19);
          local_res18 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x19);
        plVar3 = (longlong *)param_3[1];
        plVar2 = param_3;
        while ((local_res18 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)local_res18[2]))) {
          cVar1 = *(char *)(local_res18[1] + 0x19);
          plVar3 = (longlong *)local_res18[1];
          plVar2 = local_res18;
        }
      }
    }
    erase(param_1,local_res8,param_3);
    param_3 = local_res18;
  }
  *param_2 = param_3;
  return param_2;
}



// FUNCTION 143926410 GetFilter body=9 status=ok
// SIG undefined GetFilter(void)

void Scaleform::Render::FilterState::GetFilter(longlong param_1)

{
  FLiveLinkClient::OnLiveLinkSourcesChanged(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 143926420 FUN_143926420 body=156 status=ok
// SIG undefined FUN_143926420(void)

void FUN_143926420(longlong param_1)

{
  undefined2 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  lVar6 = 0;
  do {
    lVar2 = *(longlong *)(param_1 + 0x170);
    *(undefined2 *)(lVar6 + lVar2) = *(undefined2 *)(lVar2 + 0x68);
    *(undefined2 *)(lVar6 + 2 + lVar2) = *(undefined2 *)(lVar2 + 0x6a);
    *(undefined2 *)(lVar6 + 4 + lVar2) = *(undefined2 *)(lVar2 + 0x6c);
    *(undefined2 *)(lVar6 + 6 + lVar2) = *(undefined2 *)(lVar2 + 0x6e);
    lVar6 = lVar6 + 8;
    lVar2 = *(longlong *)(param_1 + 0x170);
    iVar3 = *(int *)(param_1 + 0x48) + 0xd + iVar5;
    iVar5 = iVar5 + 1;
    puVar1 = (undefined2 *)(lVar2 + (longlong)(*(int *)(param_1 + 0x48) + 0xb) * 8);
    lVar4 = (longlong)iVar3;
    *(undefined2 *)(lVar2 + lVar4 * 8) = *puVar1;
    *(undefined2 *)(lVar2 + 2 + lVar4 * 8) = puVar1[1];
    *(undefined2 *)(lVar2 + 4 + lVar4 * 8) = puVar1[2];
    *(undefined2 *)(lVar2 + 6 + lVar4 * 8) = puVar1[3];
  } while (lVar6 < 0x68);
  return;
}



// FUNCTION 1439264c0 FUN_1439264c0 body=913 status=ok
// SIG undefined FUN_1439264c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439264c0(longlong param_1,int param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined *local_1a8 [3];
  undefined **local_190 [13];
  undefined8 local_128;
  undefined4 local_120;
  code *local_110;
  undefined **local_a8 [13];
  ulonglong local_40;
  
  local_1b0 = 0xfffffffffffffffe;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  uVar12 = 0;
  local_1b8 = 0;
  if (*(longlong *)(param_1 + 0x178) != 0) {
    uVar8 = param_2 - *(int *)(param_1 + 0x50);
    iVar5 = (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f);
    if (iVar5 < 0x1d) {
      FUN_143926cb0(param_1,uVar8);
    }
    if (iVar5 < 3) {
      FUN_143926da0(param_1,uVar8);
    }
    if ((int)uVar8 < 0) {
      iVar9 = -uVar8;
      iVar5 = iVar9;
      if (0x1d < iVar9) {
        iVar5 = 0x1d;
      }
      iVar5 = iVar5 + -1;
      lVar6 = (longlong)iVar5;
      if (-1 < iVar5) {
        iVar5 = iVar5 + param_2 + -0xe;
        puVar10 = (undefined8 *)(param_1 + 0x70 + lVar6 * 8);
        do {
          FUN_143926950(param_1,iVar5,*puVar10);
          iVar5 = iVar5 + -1;
          puVar10 = puVar10 + -1;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      if (3 < iVar9) {
        iVar9 = 3;
      }
      lVar6 = (longlong)iVar9;
      if (0 < iVar9) {
        puVar10 = (undefined8 *)(param_1 + 0x158);
        uVar7 = uVar12;
        do {
          iVar5 = (int)uVar7;
          if ((param_2 + iVar5 & 1U) == 0) {
            FUN_143935b50(*(undefined4 *)(param_1 + 0x48),param_1 + ((longlong)iVar5 + 0xe) * 8,
                          *puVar10);
            uVar3 = *puVar10;
            uVar4 = uVar3;
          }
          else {
            uVar3 = puVar10[-0x10];
            uVar4 = *puVar10;
          }
          FUN_143934f50(param_1 + 0x58,*(undefined4 *)(param_1 + 0x48),uVar3,uVar4);
          uVar7 = (ulonglong)(iVar5 + 1);
          puVar10 = puVar10 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
    }
    else {
      uVar2 = uVar8;
      if (0x1d < (int)uVar8) {
        uVar2 = 0x1d;
      }
      iVar5 = uVar2 - 1;
      lVar6 = (longlong)iVar5;
      if (-1 < iVar5) {
        iVar5 = (param_2 + 0xe) - iVar5;
        puVar10 = (undefined8 *)(param_1 + (0x2a - lVar6) * 8);
        do {
          FUN_143926950(param_1,iVar5,*puVar10);
          iVar5 = iVar5 + 1;
          puVar10 = puVar10 + 1;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      if (3 < (int)uVar8) {
        uVar8 = 3;
      }
      iVar5 = 2;
      if ((int)(2 - uVar8) < 2) {
        puVar10 = (undefined8 *)(param_1 + 0x168);
        lVar6 = param_1 + 0x80;
        do {
          if ((param_2 + iVar5 & 1U) == 0) {
            FUN_143935b50(*(undefined4 *)(param_1 + 0x48),lVar6,*puVar10);
            uVar3 = *puVar10;
            uVar4 = uVar3;
          }
          else {
            uVar3 = puVar10[-0x10];
            uVar4 = *puVar10;
          }
          FUN_143934f50(param_1 + 0x58,*(undefined4 *)(param_1 + 0x48),uVar3,uVar4);
          iVar5 = iVar5 + -1;
          lVar6 = lVar6 + -8;
          puVar10 = puVar10 + -1;
        } while ((int)(2 - uVar8) < iVar5);
      }
    }
    FUN_1439354c0(param_1 + 0x58,*(undefined4 *)(param_1 + 0x48),param_1 + 0x158,
                  *(undefined8 *)(param_1 + 0x170));
    uVar7 = uVar12;
    if (0 < *(int *)(param_1 + 0x48)) {
      do {
        puVar11 = (undefined2 *)(*(longlong *)(param_1 + 0x170) + uVar12);
        puVar1 = (undefined2 *)
                 (*(longlong *)(param_1 + 0x178) +
                 ((longlong)(*(int *)(param_1 + 0x3c) + (int)uVar7) * *(longlong *)(param_1 + 0x180)
                 + (longlong)param_2 * *(longlong *)(param_1 + 0x188)) * 8);
        *puVar1 = *puVar11;
        puVar1[1] = puVar11[1];
        puVar1[2] = puVar11[2];
        puVar1[3] = puVar11[3];
        uVar8 = (int)uVar7 + 1;
        uVar12 = uVar12 + 8;
        uVar7 = (ulonglong)uVar8;
      } while ((int)uVar8 < *(int *)(param_1 + 0x48));
    }
    *(int *)(param_1 + 0x50) = param_2;
    return;
  }
  local_1a8[0] = &DAT_145af0c78;
  local_1a8[2] = &DAT_145af0c80;
  local_110 = _vftable__exref;
  local_1b8 = 1;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_1a8,
             (basic_streambuf<char,std::char_traits<char>_> *)local_190);
  *(undefined ***)((longlong)local_1a8 + (longlong)*(int *)(local_1a8[0] + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)local_1a8 + (longlong)*(int *)(local_1a8[0] + 4) + -4) =
       *(int *)(local_1a8[0] + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_190);
  local_190[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_128 = 0;
  local_120 = 0;
  uVar3 = FUN_143934450(*(undefined8 *)(param_1 + 0x30));
  uVar4 = std::operator<<<std::char_traits<char>_>
                    (local_1a8 + 2,
                     "No frame buffer was specified as the pixel data destination for image file \""
                    );
  uVar3 = std::operator<<<std::char_traits<char>_>(uVar4,uVar3);
  std::operator<<<std::char_traits<char>_>(uVar3,&DAT_145c62598);
  FUN_143e175c0(local_a8,local_1a8);
  local_a8[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_a8,(ThrowInfo *)&DAT_1461db4d8);
}



// FUNCTION 143926860 FUN_143926860 body=116 status=ok
// SIG undefined FUN_143926860(void)

void FUN_143926860(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2;
  if (param_3 < param_2) {
    iVar1 = param_3;
  }
  if (param_2 < param_3) {
    param_2 = param_3;
  }
  if (*(int *)(param_1 + 0x54) == 0) {
    if (iVar1 <= param_2) {
      do {
        FUN_1439264c0(param_1,iVar1);
        iVar1 = iVar1 + 1;
      } while (iVar1 <= param_2);
      return;
    }
  }
  else {
    for (; iVar1 <= param_2; param_2 = param_2 + -1) {
      FUN_1439264c0(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 1439268e0 FUN_1439268e0 body=109 status=ok
// SIG undefined FUN_1439268e0(void)

void FUN_1439268e0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_20;
  undefined1 local_18;
  
  uVar1 = 0xfffffffffffffffe;
  local_20 = *(longlong *)(param_1 + 0x10);
  if (local_20 == 0) {
    FUN_143934590(*(undefined8 *)(param_1 + 8));
  }
  else {
    FUN_1437125f0();
    local_18 = 1;
    FUN_143926860(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,uVar1);
    FUN_143925920(&local_20);
  }
  return;
}



// FUNCTION 143926950 FUN_143926950 body=222 status=ok
// SIG undefined FUN_143926950(void)

void FUN_143926950(longlong param_1,uint param_2,void *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x40);
  if (((int)uVar3 <= (int)param_2) && (uVar3 = param_2, *(int *)(param_1 + 0x44) < (int)param_2)) {
    uVar3 = *(int *)(param_1 + 0x44) - 1;
  }
  FUN_143934580(*(undefined8 *)(param_1 + 0x30));
  if ((*(char *)(param_1 + 0x38) == '\0') && (iVar2 = 0, 0 < *(int *)(param_1 + 0x48))) {
    lVar1 = 0x68;
    do {
      iVar2 = iVar2 + 1;
      *(undefined2 *)(lVar1 + *(longlong *)(param_1 + 0x170)) = 0;
      *(undefined2 *)(*(longlong *)(param_1 + 0x170) + -4 + lVar1 + 8) = 0;
      lVar1 = lVar1 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x48));
  }
  if ((uVar3 & 1) == 0) {
    FUN_143926420(param_1);
    FUN_1439356a0(*(undefined4 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x170),param_3);
    return;
  }
  _guard_xfg_dispatch_icall_nop
            (param_3,(void *)(*(longlong *)(param_1 + 0x170) + 0x68),
             (longlong)*(int *)(param_1 + 0x48) << 3);
  return;
}



// FUNCTION 143926a30 FUN_143926a30 body=626 status=ok
// SIG undefined FUN_143926a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte FUN_143926a30(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58 [3];
  ulonglong local_40;
  ulonglong local_38;
  
  local_80 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  uVar3 = FUN_143925220(&local_78,param_2,&DAT_145b13940);
  lVar4 = FUN_1439286c0(param_1,uVar3);
  if (0xf < local_60) {
    std::_Wrap_alloc<std::allocator<char>_>::deallocate
              (&local_78,CONCAT71(uStack_77,local_78),local_60 + 1);
  }
  bVar1 = false;
  bVar5 = lVar4 != 0;
  uVar3 = FUN_143925220(&local_78,param_2,&DAT_145b40b70);
  lVar4 = FUN_1439286c0(param_1,uVar3);
  if (0xf < local_60) {
    std::_Wrap_alloc<std::allocator<char>_>::deallocate
              (&local_78,CONCAT71(uStack_77,local_78),local_60 + 1);
  }
  if (lVar4 != 0) {
    bVar5 = bVar5 | 2;
  }
  uVar3 = FUN_143925220(&local_78,param_2,&DAT_145b06dd4);
  lVar4 = FUN_1439286c0(param_1,uVar3);
  if (0xf < local_60) {
    std::_Wrap_alloc<std::allocator<char>_>::deallocate
              (&local_78,CONCAT71(uStack_77,local_78),local_60 + 1);
  }
  if (lVar4 != 0) {
    bVar5 = bVar5 | 4;
  }
  uVar3 = FUN_143925220(&local_78,param_2,&DAT_145b06dd0);
  lVar4 = FUN_1439286c0(param_1,uVar3);
  if (0xf < local_60) {
    std::_Wrap_alloc<std::allocator<char>_>::deallocate
              (&local_78,CONCAT71(uStack_77,local_78),local_60 + 1);
  }
  if (lVar4 != 0) {
    bVar5 = bVar5 | 8;
  }
  uVar3 = FUN_143925220(&local_78,param_2,&DAT_145b417e4);
  lVar4 = FUN_1439286c0(param_1,uVar3);
  if (0xf < local_60) {
    std::_Wrap_alloc<std::allocator<char>_>::deallocate
              (&local_78,CONCAT71(uStack_77,local_78),local_60 + 1);
  }
  if (lVar4 != 0) {
    bVar5 = bVar5 | 0x10;
  }
  uVar3 = FUN_143925220(local_58,param_2,&DAT_145c62590);
  local_88 = 1;
  lVar4 = FUN_1439286c0(param_1,uVar3);
  if (lVar4 == 0) {
    uVar3 = FUN_143925220(&local_78,param_2,&DAT_145c62594);
    bVar1 = true;
    local_88 = 3;
    lVar4 = FUN_1439286c0(param_1,uVar3);
    if (lVar4 == 0) {
      bVar2 = false;
      goto LAB_143926c1e;
    }
  }
  bVar2 = true;
LAB_143926c1e:
  if (bVar1) {
    if (0xf < local_60) {
      std::_Wrap_alloc<std::allocator<char>_>::deallocate
                (&local_78,CONCAT71(uStack_77,local_78),local_60 + 1);
    }
    local_60 = 0xf;
    local_68 = 0;
    local_78 = 0;
  }
  if (0xf < local_40) {
    std::_Wrap_alloc<std::allocator<char>_>::deallocate(local_58,local_58[0],local_40 + 1);
  }
  if (bVar2) {
    bVar5 = bVar5 | 0x20;
  }
  return bVar5;
}



// FUNCTION 143926cb0 FUN_143926cb0 body=237 status=ok
// SIG undefined FUN_143926cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143926cb0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 local_108 [30];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)local_108;
  if (param_2 < 0) {
    iVar4 = (int)((ulonglong)((longlong)(0x1c - param_2) * 0x72c234f7) >> 0x20) - (0x1c - param_2);
  }
  else {
    iVar4 = (int)((ulonglong)((longlong)param_2 * 0x8d3dcb09) >> 0x20);
  }
  lVar6 = 7;
  puVar3 = (undefined8 *)(param_1 + 0x70);
  puVar5 = local_108;
  do {
    puVar1 = puVar3 + 4;
    *puVar5 = *puVar3;
    puVar2 = puVar5 + 4;
    puVar5[1] = puVar3[1];
    puVar5[2] = puVar3[2];
    puVar5[3] = puVar3[3];
    lVar6 = lVar6 + -1;
    puVar3 = puVar1;
    puVar5 = puVar2;
  } while (lVar6 != 0);
  lVar6 = 0x1d;
  *puVar2 = *puVar1;
  puVar3 = (undefined8 *)(param_1 + 0x70);
  iVar4 = param_2 + ((iVar4 >> 4) - (iVar4 >> 0x1f)) * -0x1d;
  do {
    *puVar3 = local_108[iVar4 % 0x1d];
    lVar6 = lVar6 + -1;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + 1;
  } while (lVar6 != 0);
  return;
}



// FUNCTION 143926da0 FUN_143926da0 body=236 status=ok
// SIG undefined FUN_143926da0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143926da0(longlong param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong local_28 [5];
  
  local_28[3] = DAT_1468387a8 ^ (ulonglong)local_28;
  if (param_2 < 0) {
    uVar2 = (ulonglong)
            (uint)((int)((ulonglong)((longlong)(2 - param_2) * 0x55555555) >> 0x20) - (2 - param_2)
                  >> 1);
  }
  else {
    uVar2 = (longlong)param_2 / 3 + ((longlong)param_2 >> 0x3f) & 0xffffffff;
  }
  param_2 = param_2 + ((int)uVar2 + (int)(uVar2 >> 0x1f)) * -3;
  local_28[0] = *(ulonglong *)(param_1 + 0x158);
  local_28[1] = *(undefined8 *)(param_1 + 0x160);
  iVar1 = param_2 + 1;
  local_28[2] = *(undefined8 *)(param_1 + 0x168);
  *(ulonglong *)(param_1 + 0x158) =
       local_28[param_2 + (param_2 / 3 + (param_2 >> 0x1f) +
                          (int)(((longlong)param_2 / 3 + ((longlong)param_2 >> 0x3f) & 0xffffffffU)
                               >> 0x1f)) * -3];
  param_2 = param_2 + 2;
  *(ulonglong *)(param_1 + 0x160) =
       local_28[iVar1 + (iVar1 / 3 + (iVar1 >> 0x1f) +
                        (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >>
                             0x1f)) * -3];
  *(ulonglong *)(param_1 + 0x168) =
       local_28[param_2 + (param_2 / 3 + (param_2 >> 0x1f) +
                          (int)(((longlong)param_2 / 3 + ((longlong)param_2 >> 0x3f) & 0xffffffffU)
                               >> 0x1f)) * -3];
  return;
}



// FUNCTION 143926e90 FUN_143926e90 body=847 status=ok
// SIG undefined FUN_143926e90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143926e90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined1 local_98 [56];
  undefined8 local_60 [3];
  ulonglong local_48;
  ulonglong local_40;
  
  local_a8 = 0xfffffffffffffffe;
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (*(longlong *)(param_1 + 0x178) == 0) {
    local_b8 = (undefined8 *)0x0;
    local_b0 = 0;
    local_b8 = (undefined8 *)FUN_14186c270(&local_b8);
    uVar1 = FUN_143925220(local_60,param_5,&DAT_145b417e4);
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0x3fe0000000000000;
    local_d8 = 1;
    local_e0 = 1;
    local_e8 = 0;
    uVar2 = FUN_143930720(local_98,1,
                          *(longlong *)(param_1 + 0x170) + 2 +
                          (longlong)(0xd - *(int *)(param_1 + 0x3c)) * 8,8);
    FUN_143930bb0(&local_b8,uVar1,uVar2);
    if (0xf < local_48) {
      std::_Wrap_alloc<std::allocator<char>_>::deallocate(local_60,local_60[0],local_48 + 1);
    }
    if (*(char *)(param_1 + 0x38) != '\0') {
      uVar1 = FUN_143925220(local_60,param_5,&DAT_145c62590);
      local_c0 = 0;
      local_c8 = 0;
      local_d0 = 0;
      local_d8 = 2;
      local_e0 = 2;
      local_e8 = 0;
      uVar2 = FUN_143930720(local_98,1,
                            *(longlong *)(param_1 + 0x170) +
                            (longlong)(0xd - *(int *)(param_1 + 0x3c)) * 8,0x10);
      FUN_143930bb0(&local_b8,uVar1,uVar2);
      if (0xf < local_48) {
        std::_Wrap_alloc<std::allocator<char>_>::deallocate(local_60,local_60[0],local_48 + 1);
      }
      uVar1 = FUN_143925220(local_60,param_5,&DAT_145c62594);
      local_c0 = 0;
      local_c8 = 0;
      local_d0 = 0;
      local_d8 = 2;
      local_e0 = 2;
      local_e8 = 0;
      uVar2 = FUN_143930720(local_98,1,
                            *(longlong *)(param_1 + 0x170) + 4 +
                            (longlong)(0xd - *(int *)(param_1 + 0x3c)) * 8,0x10);
      FUN_143930bb0(&local_b8,uVar1,uVar2);
      if (0xf < local_48) {
        std::_Wrap_alloc<std::allocator<char>_>::deallocate(local_60,local_60[0],local_48 + 1);
      }
    }
    uVar1 = FUN_143925220(local_60,param_5,&DAT_145b06dd0);
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0x3ff0000000000000;
    local_d8 = 1;
    local_e0 = 1;
    local_e8 = 0;
    uVar2 = FUN_143930720(local_98,1,
                          (longlong)(0xd - *(int *)(param_1 + 0x3c)) * 8 + 6 +
                          *(longlong *)(param_1 + 0x170),8);
    FUN_143930bb0(&local_b8,uVar1,uVar2);
    if (0xf < local_48) {
      std::_Wrap_alloc<std::allocator<char>_>::deallocate(local_60,local_60[0],local_48 + 1);
    }
    FUN_143934610(*(undefined8 *)(param_1 + 0x30),&local_b8);
    std::
    _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
    ::erase(&local_b8,local_a0,*local_b8,local_b8);
    FMemory::operator_delete(local_b8);
  }
  *(undefined8 *)(param_1 + 0x178) = param_2;
  *(undefined8 *)(param_1 + 0x180) = param_3;
  *(undefined8 *)(param_1 + 0x188) = param_4;
  return;
}



// FUNCTION 1439271e0 FUN_1439271e0 body=754 status=ok
// SIG undefined FUN_1439271e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439271e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined1 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8 [56];
  undefined8 local_70 [3];
  ulonglong local_58;
  ulonglong local_50;
  
  local_b8 = 0xfffffffffffffffe;
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_c8 = *(undefined8 **)(param_1 + 0x10);
  if (local_c8 == (undefined8 *)0x0) {
    param_3 = param_3 * 8;
    param_4 = param_4 * 8;
    local_c8 = (undefined8 *)0x0;
    local_c0 = 0;
    local_c8 = (undefined8 *)FUN_14186c270(&local_c8);
    uVar1 = FUN_143925220(local_70,param_1 + 0x18,&DAT_145b13940);
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = 1;
    local_f0 = 1;
    local_f8 = param_4;
    uVar2 = FUN_143930720(local_a8,1,param_2,param_3);
    FUN_143930bb0(&local_c8,uVar1,uVar2);
    if (0xf < local_58) {
      std::_Wrap_alloc<std::allocator<char>_>::deallocate(local_70,local_70[0],local_58 + 1);
    }
    uVar1 = FUN_143925220(local_70,param_1 + 0x18,&DAT_145b40b70);
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = 1;
    local_f0 = 1;
    local_f8 = param_4;
    uVar2 = FUN_143930720(local_a8,1,param_2 + 2,param_3);
    FUN_143930bb0(&local_c8,uVar1,uVar2);
    if (0xf < local_58) {
      std::_Wrap_alloc<std::allocator<char>_>::deallocate(local_70,local_70[0],local_58 + 1);
    }
    uVar1 = FUN_143925220(local_70,param_1 + 0x18,&DAT_145b06dd4);
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = 1;
    local_f0 = 1;
    local_f8 = param_4;
    uVar2 = FUN_143930720(local_a8,1,param_2 + 4,param_3);
    FUN_143930bb0(&local_c8,uVar1,uVar2);
    if (0xf < local_58) {
      std::_Wrap_alloc<std::allocator<char>_>::deallocate(local_70,local_70[0],local_58 + 1);
    }
    uVar1 = FUN_143925220(local_70,param_1 + 0x18,&DAT_145b06dd0);
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 0x3ff0000000000000;
    local_e8 = 1;
    local_f0 = 1;
    local_f8 = param_4;
    uVar2 = FUN_143930720(local_a8,1,param_2 + 6,param_3);
    FUN_143930bb0(&local_c8,uVar1,uVar2);
    if (0xf < local_58) {
      std::_Wrap_alloc<std::allocator<char>_>::deallocate(local_70,local_70[0],local_58 + 1);
    }
    FUN_143934610(*(undefined8 *)(param_1 + 8),&local_c8);
    std::
    _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
    ::erase(&local_c8,local_b0,*local_c8,local_c8);
    FMemory::operator_delete(local_c8);
  }
  else {
    FUN_1437125f0();
    local_c0 = CONCAT71(local_c0._1_7_,1);
    local_f8 = param_1 + 0x18;
    FUN_143926e90(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
    FUN_143925920(&local_c8);
  }
  return;
}



// FUNCTION 1439274e0 FUN_1439274e0 body=293 status=ok
// SIG undefined FUN_1439274e0(void)

undefined8 FUN_1439274e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_res8 = 0x3ea01a37;
  local_resc = 0x3ea872b0;
  local_res18 = 0x3e19999a;
  local_res1c = 0x3d75c28f;
  local_res20 = 0x3e99999a;
  local_res24 = 0x3f19999a;
  local_38 = 0x3f23d70a;
  local_34 = 0x3ea8f5c3;
  FUN_143934b40(&local_30,&local_38,&local_res20,&local_res18,&local_res8);
  cVar1 = FUN_1439362b0(param_2);
  if (cVar1 != '\0') {
    puVar2 = (undefined4 *)UEngine::SeamlessTravelHandlerForWorld(param_2);
    local_30 = *puVar2;
    local_2c = puVar2[1];
    local_28 = puVar2[2];
    local_24 = puVar2[3];
    local_20 = puVar2[4];
    local_1c = puVar2[5];
    local_18 = puVar2[6];
    local_14 = puVar2[7];
  }
  FUN_1439351b0(param_1,&local_30);
  return param_1;
}



// FUNCTION 143927610 FUN_143927610 body=74 status=ok
// SIG undefined FUN_143927610(void)

undefined8 * FUN_143927610(undefined8 *param_1,char *param_2)

{
  longlong lVar1;
  
  *param_1 = Imf::IStream::vftable;
  param_1[4] = 0xf;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (*param_2 != '\0') {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (param_2[lVar1] != '\0');
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign();
  return param_1;
}



// FUNCTION 143927660 FUN_143927660 body=33 status=ok
// SIG undefined FUN_143927660(void)

undefined8 * FUN_143927660(undefined8 *param_1)

{
  FUN_143e17780();
  *param_1 = Iex::InputExc::vftable;
  return param_1;
}



// FUNCTION 143927690 FUN_143927690 body=74 status=ok
// SIG undefined FUN_143927690(void)

undefined8 * FUN_143927690(undefined8 *param_1,char *param_2)

{
  longlong lVar1;
  
  *param_1 = Imf::OStream::vftable;
  param_1[4] = 0xf;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (*param_2 != '\0') {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (param_2[lVar1] != '\0');
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign();
  return param_1;
}



// FUNCTION 1439276e0 FUN_1439276e0 body=69 status=ok
// SIG undefined FUN_1439276e0(void)

void FUN_1439276e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  *param_1 = Imf::IStream::vftable;
  if (0xf < (ulonglong)param_1[4]) {
    std::_Wrap_alloc<std::allocator<char>_>::deallocate(puVar1,*puVar1,param_1[4] + 1);
  }
  param_1[4] = 0xf;
  param_1[3] = 0;
  *(undefined1 *)puVar1 = 0;
  return;
}



// FUNCTION 143927730 FUN_143927730 body=69 status=ok
// SIG undefined FUN_143927730(void)

void FUN_143927730(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  *param_1 = Imf::OStream::vftable;
  if (0xf < (ulonglong)param_1[4]) {
    std::_Wrap_alloc<std::allocator<char>_>::deallocate(puVar1,*puVar1,param_1[4] + 1);
  }
  param_1[4] = 0xf;
  param_1[3] = 0;
  *(undefined1 *)puVar1 = 0;
  return;
}



// FUNCTION 143927780 FUN_143927780 body=109 status=ok
// SIG undefined FUN_143927780(void)

undefined8 * FUN_143927780(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::IStream::vftable;
  if (0xf < (ulonglong)param_1[4]) {
    std::_Wrap_alloc<std::allocator<char>_>::deallocate(param_1 + 1,param_1[1],param_1[4] + 1);
  }
  param_1[4] = 0xf;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 1439277f0 FUN_1439277f0 body=109 status=ok
// SIG undefined FUN_1439277f0(void)

undefined8 * FUN_1439277f0(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::OStream::vftable;
  if (0xf < (ulonglong)param_1[4]) {
    std::_Wrap_alloc<std::allocator<char>_>::deallocate(param_1 + 1,param_1[1],param_1[4] + 1);
  }
  param_1[4] = 0xf;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143927860 FUN_143927860 body=15 status=ok
// SIG undefined FUN_143927860(void)

longlong * FUN_143927860(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (0xf < *(ulonglong *)(param_1 + 0x20)) {
    plVar1 = (longlong *)*plVar1;
  }
  return plVar1;
}



// FUNCTION 143927870 FUN_143927870 body=71 status=ok
// SIG undefined FUN_143927870(void)

void FUN_143927870(void)

{
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FUN_143e179e0(local_78,
                "Attempt to perform a memory-mapped read on a file that is not memory mapped.");
  local_78[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db5c8);
}



// FUNCTION 1439278c0 FUN_1439278c0 body=107 status=ok
// SIG undefined FUN_1439278c0(void)

longlong FUN_1439278c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_143925b30();
  *(undefined2 *)(lVar1 + 0x18) = 0;
  FUN_143928170(param_1,lVar1 + 0x1c,param_2,param_3,param_4);
  return lVar1;
}



// FUNCTION 143927930 _Buynode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_&___ptr64> body=110 status=ok
// SIG undefined _Buynode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_&___ptr64>(void)

longlong std::
         _Tree_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
         ::
         _Buynode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_&___ptr64>
                   (undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar2 = _Buynode0();
  *(undefined2 *)(lVar2 + 0x18) = 0;
  puVar1 = (undefined1 *)(lVar2 + 0x20);
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined8 *)(lVar2 + 0x38) = 0xf;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *puVar1 = 0;
    basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (puVar1,param_2,0,0xffffffffffffffff,uVar3,puVar1);
  }
  return lVar2;
}



// FUNCTION 1439279a0 FUN_1439279a0 body=678 status=ok
// SIG undefined FUN_1439279a0(void)

undefined8 *
FUN_1439279a0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (0xd79435e50d7941 < (ulonglong)param_1[1]) {
    FMemory::operator_delete(param_6);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar4 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_143927a24;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_143927a24;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_143927a24:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar5 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar4 = *param_1;
      *param_2 = param_6;
      *(undefined1 *)(*(longlong *)(lVar4 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar6 = (longlong *)plVar5[1];
    plVar7 = *(longlong **)plVar6[1];
    if (plVar6 == plVar7) {
      lVar4 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar4 + 0x18) == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(lVar4 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar5 = *(longlong **)(plVar5[1] + 8);
      }
      else {
        if (plVar5 == (longlong *)plVar6[2]) {
          plVar5 = (longlong *)plVar6[2];
          plVar6[2] = *plVar5;
          if (*(char *)(*plVar5 + 0x19) == '\0') {
            *(longlong **)(*plVar5 + 8) = plVar6;
          }
          plVar5[1] = plVar6[1];
          if (plVar6 == *(longlong **)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar5;
          }
          else {
            plVar7 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)*plVar7) {
              *plVar7 = (longlong)plVar5;
            }
            else {
              plVar7[2] = (longlong)plVar5;
            }
          }
          *plVar5 = (longlong)plVar6;
          plVar6[1] = (longlong)plVar5;
          plVar5 = plVar6;
        }
        *(undefined1 *)(plVar5[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar5[1] + 8);
        plVar7 = (longlong *)*plVar6;
        *plVar6 = plVar7[2];
        if (*(char *)(plVar7[2] + 0x19) == '\0') {
          *(longlong **)(plVar7[2] + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
          plVar7[2] = (longlong)plVar6;
        }
        else {
          plVar2 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
          else {
            *plVar2 = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
        }
LAB_143927c1e:
        plVar6[1] = (longlong)plVar7;
      }
    }
    else {
      if ((char)plVar7[3] != '\0') {
        if (plVar5 == (longlong *)*plVar6) {
          lVar4 = *plVar6;
          *plVar6 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x19) == '\0') {
            *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar6;
          }
          *(longlong *)(lVar4 + 8) = plVar6[1];
          if (plVar6 == *(longlong **)(*param_1 + 8)) {
            *(longlong *)(*param_1 + 8) = lVar4;
          }
          else {
            plVar5 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)plVar5[2]) {
              plVar5[2] = lVar4;
            }
            else {
              *plVar5 = lVar4;
            }
          }
          *(longlong **)(lVar4 + 0x10) = plVar6;
          plVar6[1] = lVar4;
          plVar5 = plVar6;
        }
        *(undefined1 *)(plVar5[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar5[1] + 8);
        plVar7 = (longlong *)plVar6[2];
        plVar6[2] = *plVar7;
        if (*(char *)(*plVar7 + 0x19) == '\0') {
          *(longlong **)(*plVar7 + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
        }
        else {
          puVar3 = (undefined8 *)plVar6[1];
          if (plVar6 == (longlong *)*puVar3) {
            *puVar3 = plVar7;
          }
          else {
            puVar3[2] = plVar7;
          }
        }
        *plVar7 = (longlong)plVar6;
        goto LAB_143927c1e;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
      plVar5 = *(longlong **)(plVar5[1] + 8);
    }
    cVar1 = *(char *)(plVar5[1] + 0x18);
  } while( true );
}



// FUNCTION 143927c50 FUN_143927c50 body=821 status=ok
// SIG undefined FUN_143927c50(void)

undefined8 *
FUN_143927c50(longlong *param_1,undefined8 *param_2,longlong *param_3,byte *param_4,
             undefined8 param_5)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 local_20 [24];
  
  if (param_1[1] == 0) {
    FUN_1439279a0(param_1,param_2,1,*param_1,param_4,param_5,0xfffffffffffffffe);
    return param_2;
  }
  plVar3 = (longlong *)*param_1;
  if (param_3 == (longlong *)*plVar3) {
    pbVar7 = param_4;
    do {
      bVar1 = *pbVar7;
      uVar6 = (uint)pbVar7[(longlong)param_3 + (0x1c - (longlong)param_4)];
      if (bVar1 != uVar6) break;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 != 0);
    if ((int)(bVar1 - uVar6) < 0) {
      FUN_1439279a0(param_1,param_2,1,param_3,param_4,param_5,0xfffffffffffffffe);
      return param_2;
    }
  }
  else if (param_3 == plVar3) {
    pbVar7 = (byte *)(plVar3[2] + 0x1c);
    lVar10 = (longlong)param_4 - (longlong)pbVar7;
    do {
      bVar1 = *pbVar7;
      uVar6 = (uint)pbVar7[lVar10];
      if (bVar1 != uVar6) break;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 != 0);
    if ((int)(bVar1 - uVar6) < 0) {
      FUN_1439279a0(param_1,param_2,0,plVar3[2],param_4,param_5,0xfffffffffffffffe);
      return param_2;
    }
  }
  else {
    pbVar7 = (byte *)((longlong)param_3 + 0x1c);
    pbVar8 = param_4;
    do {
      bVar1 = *pbVar8;
      uVar6 = (uint)pbVar8[(longlong)pbVar7 - (longlong)param_4];
      if (bVar1 != uVar6) break;
      pbVar8 = pbVar8 + 1;
    } while (uVar6 != 0);
    if ((int)(bVar1 - uVar6) < 0) {
      if (*(char *)((longlong)param_3 + 0x19) == '\0') {
        plVar11 = (longlong *)*param_3;
        if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
          cVar2 = *(char *)(plVar11[2] + 0x19);
          plVar4 = (longlong *)plVar11[2];
          while (cVar2 == '\0') {
            cVar2 = *(char *)(plVar4[2] + 0x19);
            plVar11 = plVar4;
            plVar4 = (longlong *)plVar4[2];
          }
        }
        else {
          cVar2 = *(char *)(param_3[1] + 0x19);
          plVar4 = (longlong *)param_3[1];
          plVar11 = param_3;
          while ((plVar5 = plVar4, cVar2 == '\0' && (plVar11 == (longlong *)*plVar5))) {
            cVar2 = *(char *)(plVar5[1] + 0x19);
            plVar4 = (longlong *)plVar5[1];
            plVar11 = plVar5;
          }
          if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
            plVar11 = plVar5;
          }
        }
      }
      else {
        plVar11 = (longlong *)param_3[2];
      }
      pbVar8 = (byte *)((longlong)plVar11 + 0x1c);
      lVar10 = (longlong)param_4 - (longlong)pbVar8;
      do {
        bVar1 = *pbVar8;
        uVar6 = (uint)pbVar8[lVar10];
        if (bVar1 != uVar6) break;
        pbVar8 = pbVar8 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 0) {
        if (*(char *)(plVar11[2] + 0x19) != '\0') {
          FUN_1439279a0(param_1,param_2,0,plVar11,param_4,param_5,0xfffffffffffffffe);
          return param_2;
        }
        FUN_1439279a0(param_1,param_2,1,param_3,param_4,param_5,0xfffffffffffffffe);
        return param_2;
      }
    }
    lVar10 = (longlong)param_4 - (longlong)pbVar7;
    do {
      bVar1 = *pbVar7;
      uVar6 = (uint)pbVar7[lVar10];
      if (bVar1 != uVar6) break;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 != 0);
    if ((int)(bVar1 - uVar6) < 0) {
      plVar11 = param_3;
      if (*(char *)((longlong)param_3 + 0x19) == '\0') {
        plVar11 = (longlong *)param_3[2];
        if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar11 + 0x19);
          plVar4 = (longlong *)*plVar11;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*plVar4 + 0x19);
            plVar11 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar2 = *(char *)(param_3[1] + 0x19);
          plVar5 = (longlong *)param_3[1];
          plVar4 = param_3;
          while ((plVar11 = plVar5, cVar2 == '\0' && (plVar4 == (longlong *)plVar11[2]))) {
            cVar2 = *(char *)(plVar11[1] + 0x19);
            plVar5 = (longlong *)plVar11[1];
            plVar4 = plVar11;
          }
        }
      }
      if (plVar11 != plVar3) {
        pbVar7 = param_4;
        do {
          bVar1 = *pbVar7;
          uVar6 = (uint)pbVar7[(longlong)plVar11 + (0x1c - (longlong)param_4)];
          if (bVar1 != uVar6) break;
          pbVar7 = pbVar7 + 1;
        } while (uVar6 != 0);
        if (-1 < (int)(bVar1 - uVar6)) goto LAB_143927f46;
      }
      if (*(char *)(param_3[2] + 0x19) != '\0') {
        FUN_1439279a0(param_1,param_2,0,param_3,param_4,param_5,0xfffffffffffffffe);
        return param_2;
      }
      FUN_1439279a0(param_1,param_2,1,plVar11,param_4,param_5,0xfffffffffffffffe);
      return param_2;
    }
  }
LAB_143927f46:
  puVar9 = (undefined8 *)FUN_143927f90(param_1,local_20,0,param_4,param_5);
  *param_2 = *puVar9;
  return param_2;
}



// FUNCTION 143927f90 FUN_143927f90 body=471 status=ok
// SIG undefined FUN_143927f90(void)

undefined8 *
FUN_143927f90(longlong *param_1,undefined8 *param_2,undefined8 param_3,byte *param_4,
             undefined8 param_5)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  
  puVar5 = (undefined8 *)*param_1;
  uVar8 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  cVar1 = *(char *)((longlong)puVar5[1] + 0x19);
  puVar3 = puVar5;
  puVar7 = (undefined8 *)puVar5[1];
  while (cVar1 == '\0') {
    if ((char)param_3 == '\0') {
      lVar9 = (longlong)puVar7 + (0x1c - (longlong)param_4);
      pbVar4 = param_4;
      do {
        bVar2 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar9];
        if (bVar2 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      uVar8 = CONCAT71((int7)((ulonglong)lVar9 >> 8),(int)(bVar2 - uVar6) < 0);
    }
    else {
      pbVar4 = (byte *)((longlong)puVar7 + 0x1c);
      lVar9 = (longlong)param_4 - (longlong)pbVar4;
      do {
        bVar2 = *pbVar4;
        uVar6 = (uint)pbVar4[lVar9];
        if (bVar2 != uVar6) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar6 != 0);
      uVar8 = CONCAT71((int7)((ulonglong)lVar9 >> 8),-1 < (int)(bVar2 - uVar6));
    }
    if ((char)uVar8 == '\0') {
      puVar10 = (undefined8 *)puVar7[2];
    }
    else {
      puVar10 = (undefined8 *)*puVar7;
    }
    puVar3 = puVar7;
    puVar7 = puVar10;
    cVar1 = *(char *)((longlong)puVar10 + 0x19);
  }
  puVar7 = puVar3;
  if ((char)uVar8 != '\0') {
    if (puVar3 == (undefined8 *)*puVar5) {
      puVar5 = (undefined8 *)
               FUN_1439279a0(param_1,local_res8,CONCAT71((int7)((ulonglong)uVar8 >> 8),1),puVar3,
                             param_4,param_5,0xfffffffffffffffe);
      *param_2 = *puVar5;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)puVar3 + 0x19) == '\0') {
      puVar7 = (undefined8 *)*puVar3;
      if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
        cVar1 = *(char *)((longlong)puVar7[2] + 0x19);
        puVar5 = (undefined8 *)puVar7[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)puVar5[2] + 0x19);
          puVar7 = puVar5;
          puVar5 = (undefined8 *)puVar5[2];
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
        puVar5 = (undefined8 *)puVar3[1];
        puVar7 = puVar3;
        while ((puVar10 = puVar5, cVar1 == '\0' && (puVar7 == (undefined8 *)*puVar10))) {
          cVar1 = *(char *)((longlong)puVar10[1] + 0x19);
          puVar5 = (undefined8 *)puVar10[1];
          puVar7 = puVar10;
        }
        if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
          puVar7 = puVar10;
        }
      }
    }
    else {
      puVar7 = (undefined8 *)puVar3[2];
    }
  }
  pbVar4 = (byte *)((longlong)puVar7 + 0x1c);
  lVar9 = (longlong)param_4 - (longlong)pbVar4;
  do {
    bVar2 = *pbVar4;
    uVar6 = (uint)pbVar4[lVar9];
    if (bVar2 != uVar6) break;
    pbVar4 = pbVar4 + 1;
  } while (uVar6 != 0);
  if ((int)(bVar2 - uVar6) < 0) {
    puVar5 = (undefined8 *)
             FUN_1439279a0(param_1,local_res8,uVar8,puVar3,param_4,param_5,0xfffffffffffffffe);
    *param_2 = *puVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    FMemory::operator_delete(param_5);
    *param_2 = puVar7;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143928170 FUN_143928170 body=142 status=ok
// SIG undefined FUN_143928170(void)

void FUN_143928170(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (param_2 != (undefined8 *)0x0) {
    lVar4 = 2;
    puVar2 = (undefined8 *)*param_4;
    puVar3 = param_2;
    do {
      uVar1 = puVar2[1];
      *puVar3 = *puVar2;
      puVar3[1] = uVar1;
      uVar1 = puVar2[3];
      puVar3[2] = puVar2[2];
      puVar3[3] = uVar1;
      uVar1 = puVar2[5];
      puVar3[4] = puVar2[4];
      puVar3[5] = uVar1;
      uVar1 = puVar2[7];
      puVar3[6] = puVar2[6];
      puVar3[7] = uVar1;
      uVar1 = puVar2[9];
      puVar3[8] = puVar2[8];
      puVar3[9] = uVar1;
      uVar1 = puVar2[0xb];
      puVar3[10] = puVar2[10];
      puVar3[0xb] = uVar1;
      uVar1 = puVar2[0xd];
      puVar3[0xc] = puVar2[0xc];
      puVar3[0xd] = uVar1;
      uVar1 = puVar2[0xf];
      puVar3[0xe] = puVar2[0xe];
      puVar3[0xf] = uVar1;
      lVar4 = lVar4 + -1;
      puVar2 = puVar2 + 0x10;
      puVar3 = puVar3 + 0x10;
    } while (lVar4 != 0);
    *(undefined4 *)(param_2 + 0x20) = 1;
    *(undefined4 *)((longlong)param_2 + 0x104) = 1;
    *(undefined4 *)(param_2 + 0x21) = 1;
    *(undefined1 *)((longlong)param_2 + 0x10c) = 0;
  }
  return;
}



// FUNCTION 143928200 FUN_143928200 body=22 status=ok
// SIG undefined FUN_143928200(void)

undefined4 *
FUN_143928200(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  *(undefined1 *)(param_1 + 3) = param_5;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return param_1;
}



// FUNCTION 143928220 FUN_143928220 body=230 status=ok
// SIG undefined FUN_143928220(void)

longlong FUN_143928220(longlong *param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong local_res8;
  byte *local_res18 [2];
  
  puVar3 = (undefined8 *)*param_1;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar4 = puVar3;
  puVar7 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar5 = (byte *)((longlong)puVar7 + 0x1c);
    lVar9 = (longlong)param_2 - (longlong)pbVar5;
    do {
      bVar2 = *pbVar5;
      uVar6 = (uint)pbVar5[lVar9];
      if (bVar2 != uVar6) break;
      pbVar5 = pbVar5 + 1;
    } while (uVar6 != 0);
    if ((int)(bVar2 - uVar6) < 0) {
      puVar8 = (undefined8 *)puVar7[2];
      puVar7 = puVar4;
    }
    else {
      puVar8 = (undefined8 *)*puVar7;
    }
    puVar4 = puVar7;
    puVar7 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if (puVar4 != puVar3) {
    pbVar5 = param_2;
    do {
      bVar2 = *pbVar5;
      uVar6 = (uint)pbVar5[(longlong)puVar4 + (0x1c - (longlong)param_2)];
      if (bVar2 != uVar6) break;
      pbVar5 = pbVar5 + 1;
    } while (uVar6 != 0);
    if (-1 < (int)(bVar2 - uVar6)) {
      return (longlong)puVar4 + 0x11c;
    }
  }
  local_res18[0] = param_2;
  lVar9 = FUN_1439278c0(param_1,&DAT_145c626dd,local_res18,&local_res8);
  FUN_143927c50(param_1,&local_res8,puVar4,lVar9 + 0x1c,lVar9);
  return local_res8 + 0x11c;
}



// FUNCTION 143928310 _Buynode0 body=92 status=ok
// SIG undefined _Buynode0(void)

undefined8 *
std::
_Tree_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
::_Buynode0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  *puVar1 = *param_1;
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = *param_1;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = *param_1;
  }
  return puVar1;
}


