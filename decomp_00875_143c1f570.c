// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143c1f570 FUN_143c1f570 body=44 status=ok
// SIG undefined FUN_143c1f570(void)

double FUN_143c1f570(undefined8 param_1,double param_2)

{
  double dVar1;
  
  dVar1 = (double)FUN_143a917b0(param_2);
  return param_2 - dVar1;
}



// FUNCTION 143c1f5a0 FUN_143c1f5a0 body=31 status=ok
// SIG undefined FUN_143c1f5a0(void)

void FUN_143c1f5a0(undefined8 param_1,undefined8 param_2)

{
  FUN_143a917b0(param_2);
  return;
}



// FUNCTION 143c1f5c0 FUN_143c1f5c0 body=41 status=ok
// SIG undefined FUN_143c1f5c0(void)

void FUN_143c1f5c0(longlong param_1,undefined8 param_2)

{
  FUN_143a917d0(param_2,*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 143c1f5f0 FUN_143c1f5f0 body=30 status=ok
// SIG undefined FUN_143c1f5f0(void)

longlong FUN_143c1f5f0(longlong param_1,longlong param_2)

{
  return param_2 % *(longlong *)(param_1 + 0x28);
}



// FUNCTION 143c1f610 FUN_143c1f610 body=74 status=ok
// SIG undefined FUN_143c1f610(void)

double FUN_143c1f610(longlong param_1,double param_2)

{
  longlong lVar1;
  
  lVar1 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
          ::GetBoundProgramCounterForTimerManager(param_1);
  if (lVar1 == 0) {
    param_2 = param_2 / *(double *)(param_1 + 0x20);
  }
  else {
    param_2 = (double)FUN_143a917b0(param_2 / *(double *)(param_1 + 0x20));
  }
  return param_2;
}



// FUNCTION 143c1f660 FUN_143c1f660 body=27 status=ok
// SIG undefined FUN_143c1f660(void)

longlong FUN_143c1f660(longlong param_1,longlong param_2)

{
  return param_2 / *(longlong *)(param_1 + 0x28);
}



// FUNCTION 143c1f680 FUN_143c1f680 body=41 status=ok
// SIG undefined FUN_143c1f680(void)

void FUN_143c1f680(longlong param_1,double param_2)

{
  FUN_143a91bf0(param_2 * *(double *)(param_1 + 0x20));
  return;
}



// FUNCTION 143c1f6b0 FUN_143c1f6b0 body=29 status=ok
// SIG undefined FUN_143c1f6b0(void)

longlong FUN_143c1f6b0(longlong param_1,longlong param_2)

{
  return param_2 * *(longlong *)(param_1 + 0x28);
}



// FUNCTION 143c1f6cd _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143c1f6cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_2();
  return;
}



// FUNCTION 143c1f6d3 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143c1f6d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_3();
  return;
}



// FUNCTION 143c1f700 FUN_143c1f700 body=29 status=ok
// SIG undefined FUN_143c1f700(void)

undefined8 FUN_143c1f700(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *param_4 = 0;
  if (param_2 == 0) {
    return 0x51;
  }
  uVar1 = FUN_143c28320();
  return uVar1;
}



// FUNCTION 143c1f720 raccess_guess_linux_netatalk body=121 status=ok
// SIG undefined raccess_guess_linux_netatalk(void)

int raccess_guess_linux_netatalk
              (longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
              undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = FUN_143c285a0(lVar1,param_3,&DAT_145d21090);
  if (lVar3 == 0) {
    iVar2 = 0x40;
  }
  else {
    iVar2 = FUN_143c284f0(param_1,lVar3,param_5);
    if (iVar2 == 0) {
      *param_4 = lVar3;
    }
    else {
      (**(code **)(lVar1 + 0x10))(lVar1,lVar3);
    }
  }
  return iVar2;
}



// FUNCTION 143c1f7a0 FUN_143c1f7a0 body=204 status=ok
// SIG undefined FUN_143c1f7a0(void)

undefined4
FUN_143c1f7a0(longlong *param_1,undefined8 param_2,void *param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  void *_Dst;
  longlong lVar2;
  size_t _Size;
  int iVar4;
  longlong lVar3;
  
  lVar2 = -1;
  do {
    lVar3 = lVar2;
    lVar2 = lVar3 + 1;
  } while (*(char *)((longlong)param_3 + lVar2) != '\0');
  iVar4 = (int)lVar3 + 0x13;
  if (iVar4 <= 0x7fffffff) {
    _Dst = (void *)0x0;
    if (iVar4 < 1) {
      if (iVar4 < 0) {
        return 6;
      }
    }
    else {
      _Dst = (void *)(**(code **)(*param_1 + 8))(*param_1);
      if (_Dst == (void *)0x0) {
        return 0x40;
      }
    }
    if (0 < iVar4) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar4);
    }
    _Size = (size_t)(int)lVar2;
    _guard_xfg_dispatch_icall_nop(_Dst,param_3,_Size);
    builtin_strncpy((char *)(_Size + (longlong)_Dst),"/..namedfork/rsr",0x10);
    *(undefined2 *)(_Size + 0x10 + (longlong)_Dst) = 99;
    *param_4 = _Dst;
    *param_5 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = 10;
  }
  return uVar1;
}



// FUNCTION 143c1f870 FUN_143c1f870 body=202 status=ok
// SIG undefined FUN_143c1f870(void)

undefined4
FUN_143c1f870(longlong *param_1,undefined8 param_2,void *param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  void *_Dst;
  longlong lVar2;
  size_t _Size;
  int iVar4;
  longlong lVar3;
  
  lVar2 = -1;
  do {
    lVar3 = lVar2;
    lVar2 = lVar3 + 1;
  } while (*(char *)((longlong)param_3 + lVar2) != '\0');
  iVar4 = (int)lVar3 + 7;
  if (iVar4 <= 0x7fffffff) {
    _Dst = (void *)0x0;
    if (iVar4 < 1) {
      if (iVar4 < 0) {
        return 6;
      }
    }
    else {
      _Dst = (void *)(**(code **)(*param_1 + 8))(*param_1);
      if (_Dst == (void *)0x0) {
        return 0x40;
      }
    }
    if (0 < iVar4) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar4);
    }
    _Size = (size_t)(int)lVar2;
    _guard_xfg_dispatch_icall_nop(_Dst,param_3,_Size);
    *(undefined4 *)(_Size + (longlong)_Dst) = 0x7273722f;
    *(undefined2 *)(_Size + 4 + (longlong)_Dst) = 99;
    *param_4 = _Dst;
    *param_5 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = 10;
  }
  return uVar1;
}



// FUNCTION 143c1f940 raccess_guess_vfat body=65 status=ok
// SIG undefined raccess_guess_vfat(void)

undefined8
raccess_guess_vfat(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined4 *param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_143c285a0(*param_1,param_3,"resource.frk/");
  if (lVar1 == 0) {
    return 0x40;
  }
  *param_4 = lVar1;
  *param_5 = 0;
  return 0;
}



// FUNCTION 143c1f990 raccess_guess_linux_cap body=65 status=ok
// SIG undefined raccess_guess_linux_cap(void)

undefined8
raccess_guess_linux_cap
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
          undefined4 *param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_143c285a0(*param_1,param_3,".resource/");
  if (lVar1 == 0) {
    return 0x40;
  }
  *param_4 = lVar1;
  *param_5 = 0;
  return 0;
}



// FUNCTION 143c1f9e0 raccess_guess_linux_netatalk body=121 status=ok
// SIG undefined raccess_guess_linux_netatalk(void)

int raccess_guess_linux_netatalk
              (longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
              undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = FUN_143c285a0(lVar1,param_3,&DAT_145b99efc);
  if (lVar3 == 0) {
    iVar2 = 0x40;
  }
  else {
    iVar2 = FUN_143c284f0(param_1,lVar3,param_5);
    if (iVar2 == 0) {
      *param_4 = lVar3;
    }
    else {
      (**(code **)(lVar1 + 0x10))(lVar1,lVar3);
    }
  }
  return iVar2;
}



// FUNCTION 143c1fa60 raccess_guess_linux_netatalk body=121 status=ok
// SIG undefined raccess_guess_linux_netatalk(void)

int raccess_guess_linux_netatalk
              (longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
              undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = FUN_143c285a0(lVar1,param_3,".AppleDouble/");
  if (lVar3 == 0) {
    iVar2 = 0x40;
  }
  else {
    iVar2 = FUN_143c284f0(param_1,lVar3,param_5);
    if (iVar2 == 0) {
      *param_4 = lVar3;
    }
    else {
      (**(code **)(lVar1 + 0x10))(lVar1,lVar3);
    }
  }
  return iVar2;
}



// FUNCTION 143c1fae0 FUN_143c1fae0 body=138 status=ok
// SIG undefined FUN_143c1fae0(void)

void FUN_143c1fae0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x20);
  if ((plVar1 != (longlong *)0x0) && (lVar2 != 0)) {
    lVar4 = *plVar1;
    while (lVar4 != 0) {
      lVar3 = *(longlong *)(lVar4 + 8);
      FUN_143c26210(lVar2,*(undefined8 *)(lVar4 + 0x10),param_1);
      (**(code **)(lVar2 + 0x10))(lVar2,lVar4);
      lVar4 = lVar3;
    }
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 143c1fb70 FUN_143c1fb70 body=125 status=ok
// SIG undefined FUN_143c1fb70(void)

void FUN_143c1fb70(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  lVar3 = *param_1;
  if ((lVar1 != 0) && (*(longlong **)(lVar1 + 0x130) == param_1)) {
    *(undefined8 *)(lVar1 + 0x130) = 0;
  }
  if ((*(byte *)*param_1 & 2) != 0) {
    FUN_143c275e0();
  }
  if ((*(byte *)*param_1 & 1) != 0) {
    FUN_143c1fae0(param_1);
  }
  if (*(code **)(lVar3 + 0x28) != (code *)0x0) {
    (**(code **)(lVar3 + 0x28))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000143c1fbea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,param_1);
  return;
}



// FUNCTION 143c1fbf0 FUN_143c1fbf0 body=45 status=ok
// SIG undefined FUN_143c1fbf0(void)

undefined8 FUN_143c1fbf0(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 == (longlong *)0x0) {
    return 0x24;
  }
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x90) != 0)) {
    *(longlong **)(lVar1 + 0x80) = param_1;
    return 0;
  }
  return 0x23;
}



// FUNCTION 143c1fc20 FUN_143c1fc20 body=476 status=ok
// SIG undefined FUN_143c1fc20(void)

undefined8 * FUN_143c1fc20(longlong *param_1,byte *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  
  if (param_1 == (longlong *)0x0) {
    return (undefined8 *)0x21;
  }
  if (param_2 == (byte *)0x0) {
    return (undefined8 *)&DAT_00000006;
  }
  if (0x20006 < *(int *)(param_2 + 0x14)) {
    return (undefined8 *)&DAT_00000004;
  }
  puVar7 = (undefined8 *)0x0;
  if (*(uint *)((longlong)param_1 + 0x14) != 0) {
    puVar5 = puVar7;
    do {
      pcVar6 = *(char **)(*(longlong *)param_1[(longlong)((longlong)puVar5 + 3)] + 8);
      lVar8 = *(longlong *)(param_2 + 8) - (longlong)pcVar6;
      do {
        cVar1 = *pcVar6;
        cVar2 = pcVar6[lVar8];
        if (cVar1 != cVar2) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        if (*(int *)(param_2 + 0x10) <=
            *(int *)(*(longlong *)param_1[(longlong)((longlong)puVar5 + 3)] + 0x10)) {
          return (undefined8 *)0x5;
        }
        FUN_143c23c80(param_1);
        break;
      }
      uVar9 = (int)puVar5 + 1;
      puVar5 = (undefined8 *)(ulonglong)uVar9;
    } while (uVar9 < *(uint *)((longlong)param_1 + 0x14));
  }
  lVar8 = *param_1;
  if (0x1f < *(uint *)((longlong)param_1 + 0x14)) {
    return (undefined8 *)&DAT_00000030;
  }
  iVar3 = *(int *)(param_2 + 4);
  if (iVar3 < 1) {
    puVar5 = puVar7;
    if (-1 < iVar3) goto LAB_143c1fd36;
    puVar7 = (undefined8 *)&DAT_00000006;
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(lVar8 + 8))(lVar8);
    if (puVar5 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&DAT_00000040;
    }
    else {
LAB_143c1fd36:
      if (0 < iVar3) {
        _guard_xfg_dispatch_icall_nop(puVar5,0,(longlong)iVar3);
      }
    }
  }
  if ((int)puVar7 != 0) {
    return puVar7;
  }
  puVar5[1] = param_1;
  puVar5[2] = lVar8;
  *puVar5 = param_2;
  if ((*param_2 & 2) == 0) {
LAB_143c1fd73:
    if ((*(byte *)*puVar5 & 4) != 0) {
      param_1[0x26] = (longlong)puVar5;
    }
    if ((*(byte *)*puVar5 & 1) != 0) {
      puVar5[3] = (byte *)*puVar5;
    }
    if (*(code **)(param_2 + 0x20) != (code *)0x0) {
      uVar9 = (**(code **)(param_2 + 0x20))(puVar5);
      puVar7 = (undefined8 *)(ulonglong)uVar9;
      if (uVar9 != 0) goto LAB_143c1fda2;
    }
    param_1[(ulonglong)*(uint *)((longlong)param_1 + 0x14) + 3] = (longlong)puVar5;
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  }
  else {
    uVar9 = FUN_143c265e0(puVar5);
    puVar7 = (undefined8 *)(ulonglong)uVar9;
    if (uVar9 == 0) goto LAB_143c1fd73;
LAB_143c1fda2:
    if (((((*(byte *)*puVar5 & 2) != 0) && (lVar4 = puVar5[3], lVar4 != 0)) &&
        (*(int *)(lVar4 + 0x38) == 0x6f75746c)) && (puVar5[0xc] != 0)) {
      (**(code **)(*(longlong *)(lVar4 + 0x60) + 0x28))();
    }
    (**(code **)(lVar8 + 0x10))(lVar8,puVar5);
  }
  return puVar7;
}



// FUNCTION 143c1fe00 FUN_143c1fe00 body=108 status=ok
// SIG undefined FUN_143c1fe00(void)

int FUN_143c1fe00(int param_1,int param_2)

{
  param_2 = param_2 - param_1;
  if (param_2 < -0xb3ffff) {
    param_2 = param_2 + 0x1680000 + ((-param_2 - 0xb40000U) / 0x1680000) * 0x1680000;
  }
  if (0xb40000 < param_2) {
    return ((param_2 - 0xb40001U) / 0x1680000) * -0x1680000 + -0x1680000 + param_2;
  }
  return param_2;
}



// FUNCTION 143c1fe70 FUN_143c1fe70 body=163 status=ok
// SIG undefined FUN_143c1fe70(void)

int FUN_143c1fe70(uint param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int local_res18;
  int local_res1c;
  
  if ((param_1 == 0) && (param_2 == 0)) {
    return 0;
  }
  uVar2 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f) |
          (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  bVar1 = 0;
  if ((uVar2 & 0xffff0000) != 0) {
    uVar2 = uVar2 >> 0x10;
    bVar1 = 0x10;
  }
  if ((uVar2 & 0xff00) != 0) {
    uVar2 = uVar2 >> 8;
    bVar1 = bVar1 + 8;
  }
  if ((uVar2 & 0xf0) != 0) {
    uVar2 = uVar2 >> 4;
    bVar1 = bVar1 + 4;
  }
  if ((uVar2 & 0xc) != 0) {
    uVar2 = uVar2 >> 2;
    bVar1 = bVar1 + 2;
  }
  if ((uVar2 & 2) != 0) {
    bVar1 = bVar1 + 1;
  }
  if (bVar1 < 0x1e) {
    local_res18 = param_1 << (0x1d - bVar1 & 0x1f);
    local_res1c = param_2 << (0x1d - bVar1 & 0x1f);
  }
  else {
    local_res18 = (int)param_1 >> (bVar1 - 0x1d & 0x1f);
    local_res1c = (int)param_2 >> (bVar1 - 0x1d & 0x1f);
  }
  FUN_143c278c0(&local_res18);
  return local_res1c;
}



// FUNCTION 143c1ff20 FUN_143c1ff20 body=284 status=ok
// SIG undefined FUN_143c1ff20(void)

int FUN_143c1ff20(undefined4 *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (((param_1 == (undefined4 *)0x0) || (param_3 == (longlong *)0x0)) ||
     (lVar1 = *param_3, lVar1 == 0)) {
    return 6;
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x98);
  puVar7 = (undefined4 *)FUN_143c271e0(uVar2,*param_1,local_res8);
  if (local_res8[0] != 0) goto LAB_143c20003;
  lVar8 = *param_3;
  uVar3 = *(undefined4 *)((longlong)param_3 + 4);
  lVar5 = param_3[1];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 **)(puVar7 + 4) = param_1;
  *puVar7 = (int)lVar8;
  puVar7[1] = uVar3;
  puVar7[2] = (int)lVar5;
  puVar7[3] = uVar4;
  if (*(code **)(param_1 + 2) == (code *)0x0) {
LAB_143c1ffb5:
    lVar8 = FUN_143c27410(uVar2,8,*(int *)(lVar1 + 0x38),*(int *)(lVar1 + 0x38) + 1,
                          *(undefined8 *)(lVar1 + 0x40),local_res8);
    *(longlong *)(lVar1 + 0x40) = lVar8;
    if (local_res8[0] == 0) {
      *(undefined4 **)(lVar8 + (longlong)*(int *)(lVar1 + 0x38) * 8) = puVar7;
      *(int *)(lVar1 + 0x38) = *(int *)(lVar1 + 0x38) + 1;
      goto LAB_143c20003;
    }
  }
  else {
    local_res8[0] = (**(code **)(param_1 + 2))(puVar7,param_2);
    if (local_res8[0] == 0) goto LAB_143c1ffb5;
  }
  iVar6 = local_res8[0];
  FUN_143c26720(puVar7);
  puVar7 = (undefined4 *)0x0;
  local_res8[0] = iVar6;
LAB_143c20003:
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = puVar7;
  }
  return local_res8[0];
}



// FUNCTION 143c20040 FUN_143c20040 body=40 status=ok
// SIG undefined FUN_143c20040(void)

int FUN_143c20040(undefined4 param_1)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = 0xdbd95b;
  FUN_143c279b0(local_res10,param_1);
  return (int)local_res10[0] + 0x80 >> 8;
}



// FUNCTION 143c20070 FUN_143c20070 body=129 status=ok
// SIG undefined FUN_143c20070(void)

ulonglong FUN_143c20070(uint param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 1;
  if ((int)param_1 < 0) {
    param_1 = -param_1;
    iVar3 = -1;
  }
  if ((int)param_2 < 0) {
    param_2 = -param_2;
    iVar3 = -iVar3;
  }
  if (param_2 == 0) {
    uVar1 = 0x7fffffff;
  }
  else if (0xffff - (param_2 >> 0x11) < param_1) {
    uVar2 = (param_2 >> 1) + param_1 * 0x10000;
    uVar1 = FUN_143c26960((param_1 >> 0x10) + (uint)(uVar2 < param_1 * 0x10000),uVar2,
                          (ulonglong)param_2);
  }
  else {
    uVar1 = (ulonglong)((param_2 >> 1) + param_1 * 0x10000) / (ulonglong)param_2;
  }
  if (iVar3 < 0) {
    uVar1 = (ulonglong)(uint)-(int)uVar1;
  }
  return uVar1;
}



// FUNCTION 143c20100 FUN_143c20100 body=226 status=ok
// SIG undefined FUN_143c20100(void)

undefined8 FUN_143c20100(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x90) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + 0x54);
    *piVar1 = *piVar1 + -1;
    if (0 < *(int *)(*(longlong *)(param_1 + 0xd0) + 0x54)) {
      return 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x90);
    lVar4 = *(longlong *)(lVar3 + 0x10);
    puVar2 = (undefined8 *)(lVar3 + 0x20);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar5 = (longlong *)*puVar2; plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[1])
      {
        if (plVar5[2] == param_1) {
          if (puVar2 != (undefined8 *)0x0) {
            lVar6 = *plVar5;
            plVar5 = (longlong *)plVar5[1];
            if (lVar6 == 0) {
              *puVar2 = plVar5;
            }
            else {
              *(longlong **)(lVar6 + 8) = plVar5;
            }
            if (plVar5 == (longlong *)0x0) {
              *(longlong *)(lVar3 + 0x28) = lVar6;
            }
            else {
              *plVar5 = lVar6;
            }
          }
          (**(code **)(lVar4 + 0x10))(lVar4);
          FUN_143c26210(lVar4,param_1,lVar3);
          return 0;
        }
      }
    }
    return 0x23;
  }
  return 0x23;
}



// FUNCTION 143c201f0 FUN_143c201f0 body=137 status=ok
// SIG undefined FUN_143c201f0(void)

void FUN_143c201f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x90) + 0x10);
    lVar3 = *(longlong *)(lVar1 + 0x78);
    lVar5 = 0;
    if (*(longlong *)(lVar1 + 0x78) != 0) {
      while (lVar4 = lVar3, lVar4 != param_1) {
        lVar3 = *(longlong *)(lVar4 + 0x10);
        lVar5 = lVar4;
        if (*(longlong *)(lVar4 + 0x10) == 0) {
          return;
        }
      }
      if (lVar5 == 0) {
        *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar4 + 0x10);
      }
      else {
        *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar4 + 0x10);
      }
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_1);
      }
      ft_glyphslot_done(param_1);
      (**(code **)(lVar2 + 0x10))(lVar2,param_1);
    }
  }
  return;
}



// FUNCTION 143c20280 FUN_143c20280 body=513 status=ok
// SIG undefined FUN_143c20280(void)

undefined4 FUN_143c20280(longlong *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  char *pcVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  char **ppcVar16;
  char *local_38 [2];
  
  if (param_1 == (longlong *)0x0) {
    return 0x21;
  }
  *(int *)(param_1 + 0x2d) = (int)param_1[0x2d] + -1;
  if ((int)param_1[0x2d] < 1) {
    lVar15 = 2;
    lVar4 = *param_1;
    ppcVar16 = local_38;
    local_38[0] = "type42";
    local_38[1] = (char *)0x0;
    do {
      uVar11 = 0;
      if (*(int *)((longlong)param_1 + 0x14) != 0) {
        pcVar5 = *ppcVar16;
        do {
          plVar6 = (longlong *)param_1[uVar11 + 3];
          if (pcVar5 == (char *)0x0) {
LAB_143c20336:
            if ((*(byte *)*plVar6 & 1) != 0) {
              lVar12 = plVar6[4];
              while (lVar12 != 0) {
                FUN_143c20100(*(undefined8 *)(lVar12 + 0x10));
                lVar12 = plVar6[4];
              }
            }
          }
          else {
            pcVar8 = *(char **)(*plVar6 + 8);
            lVar12 = (longlong)pcVar5 - (longlong)pcVar8;
            do {
              cVar1 = *pcVar8;
              cVar2 = pcVar8[lVar12];
              if (cVar1 != cVar2) break;
              pcVar8 = pcVar8 + 1;
            } while (cVar2 != '\0');
            if (cVar1 == cVar2) goto LAB_143c20336;
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
        } while (uVar10 < *(uint *)((longlong)param_1 + 0x14));
      }
      ppcVar16 = ppcVar16 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    iVar3 = *(int *)((longlong)param_1 + 0x14);
    while (iVar3 != 0) {
      uVar10 = *(uint *)((longlong)param_1 + 0x14) - 1;
      plVar6 = (longlong *)param_1[(ulonglong)uVar10 + 3];
      if (plVar6 != (longlong *)0x0) {
        plVar13 = param_1 + 3;
        plVar9 = plVar13 + *(uint *)((longlong)param_1 + 0x14);
        if (plVar13 < plVar9) {
LAB_143c203b6:
          if ((longlong *)*plVar13 != plVar6) goto code_r0x000143c203bb;
          plVar9 = plVar9 + -1;
          *(uint *)((longlong)param_1 + 0x14) = uVar10;
          if (plVar13 < plVar9) {
            plVar14 = plVar13;
            for (lVar15 = ((ulonglong)((longlong)plVar9 + (-1 - (longlong)plVar13)) >> 3) + 1;
                plVar13 = plVar13 + 1, lVar15 != 0; lVar15 = lVar15 + -1) {
              *plVar14 = *plVar13;
              plVar14 = plVar14 + 1;
            }
          }
          *plVar9 = 0;
          lVar15 = plVar6[1];
          lVar12 = plVar6[2];
          lVar7 = *plVar6;
          if ((lVar15 != 0) && (*(longlong **)(lVar15 + 0x130) == plVar6)) {
            *(undefined8 *)(lVar15 + 0x130) = 0;
          }
          if ((*(byte *)*plVar6 & 2) != 0) {
            FUN_143c275e0(plVar6);
          }
          if ((*(byte *)*plVar6 & 1) != 0) {
            FUN_143c1fae0(plVar6);
          }
          if (*(code **)(lVar7 + 0x28) != (code *)0x0) {
            (**(code **)(lVar7 + 0x28))(plVar6);
          }
          (**(code **)(lVar12 + 0x10))(lVar12,plVar6);
        }
      }
LAB_143c2044f:
      iVar3 = *(int *)((longlong)param_1 + 0x14);
    }
    (**(code **)(lVar4 + 0x10))(lVar4,param_1);
  }
  return 0;
code_r0x000143c203bb:
  plVar13 = plVar13 + 1;
  if (plVar9 <= plVar13) goto LAB_143c2044f;
  goto LAB_143c203b6;
}



// FUNCTION 143c20490 FUN_143c20490 body=282 status=ok
// SIG undefined FUN_143c20490(void)

undefined4 FUN_143c20490(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_1 == (longlong *)0x0) {
    return 0x24;
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x90);
    if (lVar3 == 0) {
      return 0x22;
    }
    plVar1 = (longlong *)(lVar2 + 0xa8);
    lVar4 = *(longlong *)(lVar3 + 0x10);
    if (plVar1 != (longlong *)0x0) {
      for (plVar5 = (longlong *)*plVar1; plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[1])
      {
        if ((longlong *)plVar5[2] == param_1) {
          if (plVar1 != (longlong *)0x0) {
            lVar6 = *plVar5;
            plVar5 = (longlong *)plVar5[1];
            if (lVar6 == 0) {
              *plVar1 = (longlong)plVar5;
            }
            else {
              *(longlong **)(lVar6 + 8) = plVar5;
            }
            if (plVar5 == (longlong *)0x0) {
              *(longlong *)(lVar2 + 0xb0) = lVar6;
            }
            else {
              *plVar5 = lVar6;
            }
          }
          (**(code **)(lVar4 + 0x10))(lVar4);
          if (*(longlong **)(lVar2 + 0x80) == param_1) {
            *(undefined8 *)(lVar2 + 0x80) = 0;
            if (*plVar1 != 0) {
              *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(*plVar1 + 0x10);
            }
          }
          FUN_143c26420(lVar4,param_1,lVar3);
          return 0;
        }
      }
    }
    return 0x24;
  }
  return 0x23;
}



// FUNCTION 143c205b0 FUN_143c205b0 body=116 status=ok
// SIG undefined FUN_143c205b0(void)

undefined8 FUN_143c205b0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x88) != 0)) &&
     (*(int *)(*(longlong *)(param_1 + 0x88) + 8) == 0x756e6963)) {
    lVar1 = FUN_143c26520();
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000143c2060e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x28))
                        (lVar1,*(undefined8 *)(param_1 + 0x88),param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 143c20630 FUN_143c20630 body=207 status=ok
// SIG undefined FUN_143c20630(void)

undefined8 FUN_143c20630(longlong param_1,ulonglong param_2,uint param_3,longlong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0x23;
  }
  else if (param_4 == 0) {
    uVar2 = 6;
  }
  else if ((uint)param_2 < *(uint *)(param_1 + 0x10)) {
    pcVar1 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 0x90);
    if ((pcVar1 != (code *)0x0) && (((param_3 & 3) != 0 || ((param_3 & 0xf0000) == 0x10000)))) {
      uVar2 = (*pcVar1)(param_1,param_2,1,param_3,param_4);
      if ((int)uVar2 == 0) {
        uVar2 = FUN_143c26010(param_1,param_4,1,param_3);
        return uVar2;
      }
      if ((char)uVar2 != '\a') {
        return uVar2;
      }
    }
    uVar2 = FUN_143c20700(param_1,param_2 & 0xffffffff,1,param_3,param_4);
  }
  else {
    uVar2 = 0x10;
  }
  return uVar2;
}



// FUNCTION 143c20700 FUN_143c20700 body=335 status=ok
// SIG undefined FUN_143c20700(void)

ulonglong FUN_143c20700(longlong param_1,uint param_2,uint param_3,uint param_4,int *param_5)

{
  code *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_5 == (int *)0x0) {
    uVar3 = 6;
  }
  else if (((param_2 < *(uint *)(param_1 + 0x10)) && (param_2 <= param_2 + param_3)) &&
          (param_2 + param_3 <= *(uint *)(param_1 + 0x10))) {
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      pcVar1 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 0x90);
      if ((pcVar1 != (code *)0x0) && (((param_4 & 3) != 0 || ((param_4 & 0xf0000) == 0x10000)))) {
        piVar6 = param_5;
        uVar3 = (*pcVar1)(param_1);
        if ((int)uVar3 == 0) {
          uVar3 = FUN_143c26010(param_1,param_5,param_3,param_4,piVar6);
          return uVar3;
        }
        if ((char)uVar3 != '\a') {
          return uVar3;
        }
      }
      uVar2 = 0;
      if ((param_4 >> 0x1d & 1) == 0) {
        uVar5 = 0;
        if (param_3 != 0) {
          do {
            uVar2 = FUN_143c216b0(param_1,uVar5 + param_2,param_4 | 0x100);
            if (uVar2 != 0) break;
            if ((param_4 & 0x10) == 0) {
              iVar4 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x58);
            }
            else {
              iVar4 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x5c);
            }
            uVar5 = uVar5 + 1;
            *param_5 = iVar4 << 10;
            param_5 = param_5 + 1;
          } while (uVar5 < param_3);
        }
        uVar3 = (ulonglong)uVar2;
      }
      else {
        uVar3 = 7;
      }
    }
  }
  else {
    uVar3 = 0x10;
  }
  return uVar3;
}



// FUNCTION 143c20850 FT_Get_CMap_Format body=95 status=ok
// SIG undefined FT_Get_CMap_Format(void)

undefined4 FT_Get_CMap_Format(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [4];
  undefined4 local_resc;
  
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    plVar1 = *(longlong **)(*param_1 + 0x90);
    pcVar2 = *(code **)(*plVar1 + 0x30);
    if (pcVar2 != (code *)0x0) {
      puVar4 = (undefined8 *)(*pcVar2)(plVar1,"tt-cmaps");
      if (puVar4 != (undefined8 *)0x0) {
        iVar3 = (*(code *)*puVar4)(param_1,local_res8);
        if (iVar3 != 0) {
          local_resc = 0xffffffff;
        }
        return local_resc;
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 143c208b0 FT_Get_Char_Index body=28 status=ok
// SIG undefined FT_Get_Char_Index(void)

undefined8 FT_Get_Char_Index(longlong param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x88) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000143c208c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10) + 0x18))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 143c208d0 FUN_143c208d0 body=217 status=ok
// SIG undefined FUN_143c208d0(void)

undefined8 FUN_143c208d0(longlong param_1,int param_2,undefined1 *param_3,int param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if ((param_3 != (undefined1 *)0x0) && (param_4 != 0)) {
    *param_3 = 0;
    if (*(int *)(param_1 + 0x10) <= param_2) {
      return 0x10;
    }
    if (((*(uint *)(param_1 + 8) & 0x200) != 0) &&
       (puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0xd0) + 0x30),
       puVar2 != (undefined8 *)0xfffffffffffffffe)) {
      if (puVar2 == (undefined8 *)0x0) {
        pcVar1 = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
        if (pcVar1 != (code *)0x0) {
          puVar2 = (undefined8 *)(*pcVar1)(*(longlong **)(param_1 + 0x90),"glyph-dict");
        }
        puVar4 = (undefined8 *)0xfffffffffffffffe;
        if (puVar2 != (undefined8 *)0x0) {
          puVar4 = puVar2;
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0xd0) + 0x30) = puVar4;
        if (puVar2 == (undefined8 *)0x0) {
          return 6;
        }
      }
      if ((code *)*puVar2 != (code *)0x0) {
        uVar3 = (*(code *)*puVar2)(param_1,param_2,param_3,param_4);
        return uVar3;
      }
    }
  }
  return 6;
}



// FUNCTION 143c209b0 FUN_143c209b0 body=299 status=ok
// SIG undefined FUN_143c209b0(void)

int FUN_143c209b0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,uint *param_5)

{
  ushort uVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = 0;
  if (param_1 != 0) {
    if (param_5 == (uint *)0x0) {
      iVar4 = 6;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x90);
      param_5[0] = 0;
      param_5[1] = 0;
      pcVar3 = *(code **)(*(longlong *)(lVar2 + 0x18) + 0x80);
      if (((pcVar3 != (code *)0x0) && (iVar4 = (*pcVar3)(), iVar4 == 0)) && (param_4 != 2)) {
        uVar5 = FUN_143c22100(*param_5,*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x1c));
        *param_5 = uVar5;
        uVar6 = FUN_143c22100(param_5[1],*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x20));
        param_5[1] = uVar6;
        if (param_4 != 1) {
          uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x80) + 0x18);
          if (uVar1 < 0x19) {
            uVar5 = FUN_143c21f00(uVar5,uVar1,0x19);
            *param_5 = uVar5;
          }
          uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x80) + 0x1a);
          if (uVar1 < 0x19) {
            uVar5 = FUN_143c21f00(param_5[1],uVar1,0x19);
            param_5[1] = uVar5;
          }
          *param_5 = *param_5 + 0x20 & 0xffffffc0;
          param_5[1] = param_5[1] + 0x20 & 0xffffffc0;
        }
      }
    }
    return iVar4;
  }
  return 0x23;
}



// FUNCTION 143c20ae0 FT_Get_Module body=125 status=ok
// SIG undefined FT_Get_Module(void)

undefined8 FT_Get_Module(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  puVar5 = (undefined8 *)(param_1 + 0x18);
  puVar1 = puVar5 + *(uint *)(param_1 + 0x14);
  if (puVar1 <= puVar5) {
    return 0;
  }
  do {
    pcVar4 = *(char **)(*(longlong *)*puVar5 + 8);
    lVar6 = param_2 - (longlong)pcVar4;
    do {
      cVar2 = *pcVar4;
      cVar3 = pcVar4[lVar6];
      if (cVar2 != cVar3) break;
      pcVar4 = pcVar4 + 1;
    } while (cVar3 != '\0');
    if (cVar2 == cVar3) {
      return *puVar5;
    }
    puVar5 = puVar5 + 1;
    if (puVar1 <= puVar5) {
      return 0;
    }
  } while( true );
}



// FUNCTION 143c20b60 FT_Get_Module_Interface body=31 status=ok
// SIG undefined FT_Get_Module_Interface(void)

undefined8 FT_Get_Module_Interface(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FT_Get_Module();
  if (plVar1 != (longlong *)0x0) {
    return *(undefined8 *)(*plVar1 + 0x18);
  }
  return 0;
}



// FUNCTION 143c20b80 FUN_143c20b80 body=157 status=ok
// SIG undefined FUN_143c20b80(void)

undefined8 FUN_143c20b80(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((((param_1 != 0) && ((*(uint *)(param_1 + 8) & 0x200) != 0)) && (param_2 != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x30), lVar2 != -2)) {
    if (lVar2 == 0) {
      pcVar1 = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
      if (pcVar1 != (code *)0x0) {
        lVar2 = (*pcVar1)(*(longlong **)(param_1 + 0x90),"glyph-dict");
      }
      lVar4 = -2;
      if (lVar2 != 0) {
        lVar4 = lVar2;
      }
      *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x30) = lVar4;
      if (lVar2 == 0) {
        return 0;
      }
    }
    if (*(code **)(lVar2 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c20c0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 8))(param_1,param_2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 143c20c20 FT_Get_Next_Char body=127 status=ok
// SIG undefined FT_Get_Next_Char(void)

uint FT_Get_Next_Char(longlong param_1,uint param_2,uint *param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint local_res8 [2];
  
  uVar3 = 0;
  uVar2 = 0;
  if (((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x88), uVar2 = 0, lVar1 != 0)) &&
     (uVar2 = 0, local_res8[0] = param_2, *(int *)(param_1 + 0x10) != 0)) {
    do {
      uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x20))(lVar1,local_res8);
    } while (*(uint *)(param_1 + 0x10) <= uVar2);
    uVar3 = local_res8[0];
    if (uVar2 == 0) {
      uVar3 = 0;
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar2;
  }
  return uVar3;
}



// FUNCTION 143c20ca0 FUN_143c20ca0 body=370 status=ok
// SIG undefined FUN_143c20ca0(void)

void FUN_143c20ca0(longlong param_1)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  short sVar4;
  short sVar5;
  ulonglong uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  
  if (param_1 != 0) {
    sVar4 = *(short *)(param_1 + 0x60);
    sVar5 = *(short *)(param_1 + 0x1a);
    *(short *)(param_1 + 0x1a) = *(short *)(param_1 + 0x62) + sVar5;
    *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + *(short *)(param_1 + 0x60);
    iVar16 = 0;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x98);
    if ((0 < sVar4) && (uVar17 = (uint)sVar4, 0xf < uVar17)) {
      uVar6 = *(ulonglong *)(param_1 + 0x78);
      if ((param_1 + 0x78U < uVar6) || (uVar6 + (longlong)(sVar4 + -1) * 2 < param_1 + 0x78U)) {
        uVar14 = uVar17 & 0x8000000f;
        if ((int)uVar14 < 0) {
          uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
        }
        do {
          psVar2 = (short *)(uVar6 + (longlong)iVar16 * 2);
          sVar7 = psVar2[1];
          sVar8 = psVar2[2];
          sVar9 = psVar2[3];
          sVar10 = psVar2[4];
          sVar11 = psVar2[5];
          sVar12 = psVar2[6];
          sVar13 = psVar2[7];
          psVar3 = (short *)(uVar6 + (longlong)iVar16 * 2);
          *psVar3 = *psVar2 + sVar5;
          psVar3[1] = sVar7 + sVar5;
          psVar3[2] = sVar8 + sVar5;
          psVar3[3] = sVar9 + sVar5;
          psVar3[4] = sVar10 + sVar5;
          psVar3[5] = sVar11 + sVar5;
          psVar3[6] = sVar12 + sVar5;
          psVar3[7] = sVar13 + sVar5;
          iVar1 = iVar16 + 8;
          iVar16 = iVar16 + 0x10;
          psVar2 = (short *)(uVar6 + (longlong)iVar1 * 2);
          sVar7 = psVar2[1];
          sVar8 = psVar2[2];
          sVar9 = psVar2[3];
          sVar10 = psVar2[4];
          sVar11 = psVar2[5];
          sVar12 = psVar2[6];
          sVar13 = psVar2[7];
          psVar3 = (short *)(uVar6 + (longlong)iVar1 * 2);
          *psVar3 = *psVar2 + sVar5;
          psVar3[1] = sVar7 + sVar5;
          psVar3[2] = sVar8 + sVar5;
          psVar3[3] = sVar9 + sVar5;
          psVar3[4] = sVar10 + sVar5;
          psVar3[5] = sVar11 + sVar5;
          psVar3[6] = sVar12 + sVar5;
          psVar3[7] = sVar13 + sVar5;
        } while (iVar16 < (int)(uVar17 - uVar14));
      }
    }
    for (lVar15 = (longlong)iVar16; lVar15 < sVar4; lVar15 = lVar15 + 1) {
      psVar2 = (short *)(*(longlong *)(param_1 + 0x78) + lVar15 * 2);
      *psVar2 = *psVar2 + sVar5;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(longlong *)(param_1 + 0x68) =
         *(longlong *)(param_1 + 0x20) + (longlong)*(short *)(param_1 + 0x1a) * 8;
    *(longlong *)(param_1 + 0x70) =
         (longlong)*(short *)(param_1 + 0x1a) + *(longlong *)(param_1 + 0x28);
    *(longlong *)(param_1 + 0x78) =
         *(longlong *)(param_1 + 0x30) + (longlong)*(short *)(param_1 + 0x18) * 2;
    if (*(char *)(param_1 + 0x14) != '\0') {
      *(longlong *)(param_1 + 0x88) =
           *(longlong *)(param_1 + 0x40) + (longlong)*(short *)(param_1 + 0x1a) * 8;
      *(longlong *)(param_1 + 0x90) =
           *(longlong *)(param_1 + 0x48) + (longlong)*(short *)(param_1 + 0x1a) * 8;
    }
    *(ulonglong *)(param_1 + 0xa0) =
         (ulonglong)*(uint *)(param_1 + 0x50) * 0x20 + *(longlong *)(param_1 + 0x58);
  }
  return;
}



// FUNCTION 143c20e20 FUN_143c20e20 body=97 status=ok
// SIG undefined FUN_143c20e20(void)

void FUN_143c20e20(longlong param_1)

{
  *(longlong *)(param_1 + 0x68) =
       *(longlong *)(param_1 + 0x20) + (longlong)*(short *)(param_1 + 0x1a) * 8;
  *(longlong *)(param_1 + 0x70) =
       (longlong)*(short *)(param_1 + 0x1a) + *(longlong *)(param_1 + 0x28);
  *(longlong *)(param_1 + 0x78) =
       *(longlong *)(param_1 + 0x30) + (longlong)*(short *)(param_1 + 0x18) * 2;
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(longlong *)(param_1 + 0x88) =
         *(longlong *)(param_1 + 0x40) + (longlong)*(short *)(param_1 + 0x1a) * 8;
    *(longlong *)(param_1 + 0x90) =
         *(longlong *)(param_1 + 0x48) + (longlong)*(short *)(param_1 + 0x1a) * 8;
  }
  return;
}



// FUNCTION 143c20e90 FUN_143c20e90 body=822 status=ok
// SIG undefined FUN_143c20e90(void)

int FUN_143c20e90(longlong *param_1,int param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int local_res10 [2];
  
  lVar5 = *param_1;
  iVar6 = 0;
  bVar2 = false;
  uVar1 = *(uint *)(param_1 + 1);
  uVar7 = (int)*(short *)((longlong)param_1 + 0x1a) + *(short *)((longlong)param_1 + 0x62) + param_2
  ;
  if (uVar1 < uVar7) {
    uVar7 = uVar7 + 7 & 0xfffffff8;
    if (0x7fff < uVar7) {
      return 10;
    }
    lVar4 = param_1[4];
    local_res10[0] = 0;
    if (((int)uVar1 < 0) || ((int)uVar7 < 0)) {
      iVar6 = 6;
    }
    else {
      iVar6 = 0;
      if (uVar7 == 0) {
        if (lVar4 != 0) {
          (**(code **)(lVar5 + 0x10))(lVar5);
        }
        lVar3 = 0;
        goto LAB_143c20f72;
      }
      if ((int)uVar7 < 0x10000000) {
        if (uVar1 == 0) {
          lVar3 = FUN_143c271e0(lVar5,uVar7 * 8,local_res10);
          lVar4 = lVar3;
          iVar6 = local_res10[0];
          if (local_res10[0] == 0) {
LAB_143c20f72:
            lVar4 = lVar3;
            if ((int)uVar1 < (int)uVar7) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((int)(uVar1 * 8) + lVar3),0,(longlong)(int)((uVar7 - uVar1) * 8));
            }
          }
        }
        else {
          lVar3 = (**(code **)(lVar5 + 0x18))(lVar5,uVar1 * 8,uVar7 * 8,lVar4);
          if (lVar3 != 0) goto LAB_143c20f72;
          iVar6 = 0x40;
        }
      }
      else {
        iVar6 = 10;
      }
    }
    param_1[4] = lVar4;
    if (iVar6 == 0) {
      lVar4 = param_1[5];
      if (((int)uVar1 < 0) || ((int)uVar7 < 0)) {
        iVar6 = 6;
      }
      else {
        local_res10[0] = iVar6;
        if (uVar7 == 0) {
          if (lVar4 != 0) {
            (**(code **)(lVar5 + 0x10))(lVar5);
          }
          lVar3 = 0;
          goto LAB_143c2101d;
        }
        if ((int)uVar7 <= 0x7fffffff) {
          if (uVar1 == 0) {
            lVar3 = FUN_143c271e0(lVar5,uVar7,local_res10);
            lVar4 = lVar3;
            iVar6 = local_res10[0];
            if (local_res10[0] == 0) {
LAB_143c2101d:
              lVar4 = lVar3;
              if ((int)uVar1 < (int)uVar7) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((int)uVar1 + lVar3),0,(longlong)(int)(uVar7 - uVar1));
              }
            }
          }
          else {
            lVar3 = (**(code **)(lVar5 + 0x18))(lVar5,uVar1,uVar7,lVar4);
            if (lVar3 != 0) goto LAB_143c2101d;
            iVar6 = 0x40;
          }
        }
        else {
          iVar6 = 10;
        }
      }
      param_1[5] = lVar4;
      local_res10[0] = iVar6;
      if (iVar6 == 0) {
        if (*(char *)((longlong)param_1 + 0x14) != '\0') {
          lVar4 = FUN_143c27410(lVar5,8,uVar1 * 2,uVar7 * 2,param_1[8],local_res10);
          iVar6 = local_res10[0];
          param_1[8] = lVar4;
          if (local_res10[0] != 0) goto LAB_143c21197;
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar4 + (ulonglong)uVar7 * 8),(void *)((ulonglong)uVar1 * 8 + lVar4),
                     (ulonglong)uVar1 * 8);
          param_1[9] = param_1[8] + (ulonglong)uVar7 * 8;
        }
        bVar2 = true;
        *(uint *)(param_1 + 1) = uVar7;
        goto LAB_143c210ba;
      }
    }
LAB_143c21197:
    FUN_143c21480(param_1);
  }
  else {
LAB_143c210ba:
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    uVar7 = (int)(short)param_1[3] + (short)param_1[0xc] + param_3;
    if (uVar1 < uVar7) {
      uVar7 = uVar7 + 3 & 0xfffffffc;
      if (0x7fff < uVar7) {
        return 10;
      }
      lVar4 = param_1[6];
      local_res10[0] = 0;
      if (((int)uVar1 < 0) || ((int)uVar7 < 0)) {
        iVar6 = 6;
      }
      else {
        if (uVar7 == 0) {
          if (lVar4 != 0) {
            (**(code **)(lVar5 + 0x10))(lVar5);
          }
          lVar5 = 0;
          iVar6 = 0;
          goto LAB_143c21163;
        }
        if ((int)uVar7 < 0x40000000) {
          if (uVar1 == 0) {
            lVar5 = FUN_143c271e0(lVar5,uVar7 * 2,local_res10);
            lVar4 = lVar5;
            iVar6 = local_res10[0];
            if (local_res10[0] == 0) {
LAB_143c21163:
              lVar4 = lVar5;
              if ((int)uVar1 < (int)uVar7) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((int)(uVar1 * 2) + lVar5),0,(longlong)(int)((uVar7 - uVar1) * 2)
                          );
              }
            }
          }
          else {
            lVar5 = (**(code **)(lVar5 + 0x18))(lVar5,uVar1 * 2,uVar7 * 2,lVar4);
            iVar6 = 0;
            if (lVar5 != 0) goto LAB_143c21163;
            iVar6 = 0x40;
          }
        }
        else {
          iVar6 = 10;
        }
      }
      param_1[6] = lVar4;
      if (iVar6 != 0) goto LAB_143c21197;
      *(uint *)((longlong)param_1 + 0xc) = uVar7;
    }
    else if (!bVar2) {
      return iVar6;
    }
    FUN_143c20e20(param_1);
  }
  return iVar6;
}



// FUNCTION 143c211d0 FUN_143c211d0 body=274 status=ok
// SIG undefined FUN_143c211d0(void)

int FUN_143c211d0(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int local_res10 [2];
  
  uVar1 = *(uint *)(param_1 + 2);
  uVar5 = (int)param_1[0x13] + (int)param_1[10] + param_2;
  lVar2 = *param_1;
  if (uVar5 <= uVar1) {
    return 0;
  }
  lVar4 = param_1[0xb];
  uVar5 = uVar5 + 1 & 0xfffffffe;
  local_res10[0] = 0;
  if (((int)uVar1 < 0) || ((int)uVar5 < 0)) {
    iVar3 = 6;
  }
  else {
    iVar3 = 0;
    if (uVar5 == 0) {
      if (lVar4 != 0) {
        (**(code **)(lVar2 + 0x10))(lVar2);
      }
      lVar2 = 0;
    }
    else {
      if (0x3ffffff < (int)uVar5) {
        iVar3 = 10;
        goto LAB_143c212b0;
      }
      if (uVar1 == 0) {
        lVar2 = FUN_143c271e0(lVar2,uVar5 << 5,local_res10);
        lVar4 = lVar2;
        iVar3 = local_res10[0];
        if (local_res10[0] != 0) goto LAB_143c212b0;
      }
      else {
        lVar2 = (**(code **)(lVar2 + 0x18))(lVar2,uVar1 << 5,uVar5 << 5,lVar4);
        if (lVar2 == 0) {
          iVar3 = 0x40;
          goto LAB_143c212b0;
        }
      }
    }
    lVar4 = lVar2;
    if ((int)uVar1 < (int)uVar5) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((int)(uVar1 << 5) + lVar2),0,(longlong)(int)((uVar5 - uVar1) * 0x20));
    }
  }
LAB_143c212b0:
  param_1[0xb] = lVar4;
  if (iVar3 == 0) {
    *(uint *)(param_1 + 2) = uVar5;
    param_1[0x14] = (ulonglong)*(uint *)(param_1 + 10) * 0x20 + param_1[0xb];
  }
  return iVar3;
}



// FUNCTION 143c212f0 FUN_143c212f0 body=166 status=ok
// SIG undefined FUN_143c212f0(void)

int FUN_143c212f0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int local_res8 [2];
  
  _Dst = (void *)0x0;
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 1) * 2;
  local_res8[0] = 0;
  if (iVar2 < 0) {
    iVar3 = 6;
  }
  else if (iVar2 != 0) {
    if (iVar2 < 0x10000000) {
      iVar1 = *(int *)(param_1 + 1) << 4;
      _Dst = (void *)FUN_143c271e0(*param_1,iVar1,local_res8);
      iVar3 = local_res8[0];
      if ((local_res8[0] == 0) && (0 < iVar2)) {
        _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar1);
      }
    }
    else {
      iVar3 = 10;
    }
  }
  param_1[8] = _Dst;
  if (iVar3 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    param_1[9] = (void *)((longlong)_Dst + (ulonglong)*(uint *)(param_1 + 1) * 8);
    FUN_143c20e20(param_1);
  }
  return iVar3;
}



// FUNCTION 143c213a0 FUN_143c213a0 body=96 status=ok
// SIG undefined FUN_143c213a0(void)

undefined4 FUN_143c213a0(longlong param_1,undefined8 *param_2)

{
  longlong *_Dst;
  
  _Dst = (longlong *)(**(code **)(param_1 + 8))();
  if (_Dst == (longlong *)0x0) {
    return 0x40;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,0xb0);
  *_Dst = param_1;
  *param_2 = _Dst;
  return 0;
}



// FUNCTION 143c21400 FT_GlyphLoader_Prepare body=128 status=ok
// SIG undefined FT_GlyphLoader_Prepare(void)

void FT_GlyphLoader_Prepare(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(longlong *)(param_1 + 0x68) =
       *(longlong *)(param_1 + 0x20) + (longlong)*(short *)(param_1 + 0x1a) * 8;
  *(longlong *)(param_1 + 0x70) =
       (longlong)*(short *)(param_1 + 0x1a) + *(longlong *)(param_1 + 0x28);
  *(longlong *)(param_1 + 0x78) =
       *(longlong *)(param_1 + 0x30) + (longlong)*(short *)(param_1 + 0x18) * 2;
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(longlong *)(param_1 + 0x88) =
         *(longlong *)(param_1 + 0x40) + (longlong)*(short *)(param_1 + 0x1a) * 8;
    *(longlong *)(param_1 + 0x90) =
         *(longlong *)(param_1 + 0x48) + (longlong)*(short *)(param_1 + 0x1a) * 8;
  }
  *(ulonglong *)(param_1 + 0xa0) =
       (ulonglong)*(uint *)(param_1 + 0x50) * 0x20 + *(longlong *)(param_1 + 0x58);
  return;
}



// FUNCTION 143c21480 FUN_143c21480 body=202 status=ok
// SIG undefined FUN_143c21480(void)

void FUN_143c21480(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (param_1[4] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[4] = 0;
  if (param_1[5] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[5] = 0;
  if (param_1[6] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[6] = 0;
  if (param_1[8] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[8] = 0;
  if (param_1[0xb] != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = param_1[3];
  param_1[0xd] = param_1[4];
  param_1[0xe] = param_1[5];
  param_1[0xf] = param_1[6];
  param_1[0x10] = param_1[7];
  param_1[0x11] = param_1[8];
  param_1[0x12] = param_1[9];
  param_1[0x13] = param_1[10];
  param_1[0x14] = param_1[0xb];
  return;
}



// FUNCTION 143c21550 FT_GlyphLoader_Rewind body=60 status=ok
// SIG undefined FT_GlyphLoader_Rewind(void)

void FT_GlyphLoader_Rewind(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x58);
  return;
}



// FUNCTION 143c21590 FUN_143c21590 body=137 status=ok
// SIG undefined FUN_143c21590(void)

int FUN_143c21590(uint param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res18;
  
  local_res18 = CONCAT44(param_2,param_1);
  uVar2 = param_2;
  if ((param_1 != 0) && (uVar2 = param_1, param_2 != 0)) {
    iVar3 = FUN_143c27820(&local_res18);
    FUN_143c278c0(&local_res18);
    iVar4 = FUN_143c277a0(local_res18 & 0xffffffff);
    bVar1 = (byte)iVar3;
    if (iVar3 < 1) {
      return iVar4 << (-bVar1 & 0x1f);
    }
    return (1 << (bVar1 - 1 & 0x1f)) + iVar4 >> (bVar1 & 0x1f);
  }
  return (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
}



// FUNCTION 143c21620 FUN_143c21620 body=48 status=ok
// SIG undefined FUN_143c21620(void)

void FUN_143c21620(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = 0;
  uVar3 = 0;
  uVar2 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar3;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar2;
  }
  return;
}



// FUNCTION 143c21650 FUN_143c21650 body=47 status=ok
// SIG undefined FUN_143c21650(void)

void FUN_143c21650(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (longlong *)0x0)) {
    lVar1 = param_1[1];
    param_2[1] = 0;
    *param_2 = lVar1;
    if (lVar1 != 0) {
      *(longlong **)(lVar1 + 8) = param_2;
      param_1[1] = param_2;
      return;
    }
    *param_1 = param_2;
    param_1[1] = param_2;
  }
  return;
}



// FUNCTION 143c21680 FUN_143c21680 body=34 status=ok
// SIG undefined FUN_143c21680(void)

longlong FUN_143c21680(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != (longlong *)0x0) {
    for (lVar1 = *param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8)) {
      if (*(longlong *)(lVar1 + 0x10) == param_2) {
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 143c216b0 FUN_143c216b0 body=971 status=ok
// SIG undefined FUN_143c216b0(void)

int FUN_143c216b0(longlong param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  
  if (((param_1 == 0) || (*(longlong *)(param_1 + 0x80) == 0)) ||
     (lVar2 = *(longlong *)(param_1 + 0x78), lVar2 == 0)) {
    return 0x23;
  }
  ft_glyphslot_clear(lVar2);
  puVar3 = *(undefined8 **)(param_1 + 0x90);
  plVar4 = *(longlong **)(puVar3[1] + 0x130);
  if ((param_3 >> 10 & 1) != 0) {
    param_3 = param_3 | 0x801;
  }
  if ((param_3 & 1) != 0) {
    param_3 = param_3 & 0xfffffffb | 10;
  }
  if (((plVar4 != (longlong *)0x0) && ((param_3 & 0x8002) == 0)) &&
     (((*(uint *)*puVar3 & 0x300) == 0x100 &&
      (uVar11 = *(uint *)(param_1 + 8), (uVar11 >> 0xd & 1) == 0)))) {
    if ((param_3 >> 0xb & 1) == 0) {
      piVar5 = *(int **)(param_1 + 0xd0);
      if (((piVar5[2] != 0) || (*piVar5 == 0)) && ((*piVar5 != 0 || (piVar5[2] == 0))))
      goto LAB_143c21869;
    }
    if ((((((param_3 & 0x20) != 0) || ((*(uint *)*puVar3 >> 10 & 1) == 0)) ||
         ((param_3 & 0xf0000) == 0x10000)) ||
        (*(char *)(*(longlong *)(param_1 + 0xd0) + 0x50) != '\0')) ||
       (((((uVar11 & 8) != 0 && (*(int *)(param_1 + 0x3c4) != 0)) &&
         (*(short *)(param_1 + 0x18a) == 0)) &&
        ((*(int *)(param_1 + 0x348) == 0 && (*(int *)(param_1 + 0x358) == 0)))))) {
      if (((((uVar11 & 2) == 0) || ((param_3 & 8) != 0)) ||
          (iVar8 = (**(code **)(puVar3[3] + 0x78))
                             (lVar2,*(undefined8 *)(param_1 + 0x80),param_2,param_3 | 0x4000),
          iVar8 != 0)) || (iVar8 = 0, *(int *)(lVar2 + 0x60) != 0x62697473)) {
        lVar6 = *(longlong *)(param_1 + 0xd0);
        uVar9 = *(undefined4 *)(lVar6 + 0x18);
        *(undefined4 *)(lVar6 + 0x18) = 0;
        iVar8 = (**(code **)(*(longlong *)(*plVar4 + 0x18) + 0x18))
                          (plVar4,lVar2,*(undefined8 *)(param_1 + 0x80),param_2,param_3);
        *(undefined4 *)(lVar6 + 0x18) = uVar9;
      }
      goto LAB_143c218c0;
    }
  }
LAB_143c21869:
  iVar8 = (**(code **)(puVar3[3] + 0x78))(lVar2,*(undefined8 *)(param_1 + 0x80),param_2,param_3);
  if (iVar8 != 0) {
    return iVar8;
  }
  iVar8 = 0;
  if (*(int *)(lVar2 + 0x60) == 0x6f75746c) {
    iVar8 = FT_Outline_Check(lVar2 + 0x98);
    if (iVar8 != 0) {
      return iVar8;
    }
    iVar8 = 0;
    if ((param_3 & 2) == 0) {
      FUN_143c26cf0(lVar2,param_3 & 0x10);
    }
  }
LAB_143c218c0:
  puVar1 = (undefined4 *)(lVar2 + 0x58);
  if ((param_3 & 0x10) == 0) {
    *puVar1 = *(undefined4 *)(lVar2 + 0x40);
    *(undefined4 *)(lVar2 + 0x5c) = 0;
  }
  else {
    *(undefined4 *)(lVar2 + 0x5c) = *(undefined4 *)(lVar2 + 0x4c);
    *puVar1 = 0;
  }
  if (((param_3 >> 0xd & 1) == 0) && ((*(byte *)(param_1 + 8) & 1) != 0)) {
    lVar6 = *(longlong *)(param_1 + 0x80);
    uVar9 = FUN_143c21f00(*(undefined4 *)(lVar2 + 0x50),*(undefined4 *)(lVar6 + 0x1c),0x40);
    *(undefined4 *)(lVar2 + 0x50) = uVar9;
    uVar9 = FUN_143c21f00(*(undefined4 *)(lVar2 + 0x54),*(undefined4 *)(lVar6 + 0x20),0x40);
    *(undefined4 *)(lVar2 + 0x54) = uVar9;
  }
  if ((param_3 >> 0xb & 1) == 0) {
    lVar6 = *(longlong *)(param_1 + 0xd0);
    if (*(uint *)(lVar6 + 0x18) != 0) {
      lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 8) + 0x90) + 8);
      lVar12 = *(longlong *)(lVar7 + 0x128);
      if ((lVar12 == 0) || (iVar10 = *(int *)(lVar2 + 0x60), *(int *)(lVar12 + 0x20) != iVar10)) {
        lVar7 = *(longlong *)(lVar7 + 0x118);
        iVar10 = *(int *)(lVar2 + 0x60);
        while ((lVar12 = 0, lVar7 != 0 &&
               (lVar12 = *(longlong *)(lVar7 + 0x10), *(int *)(lVar12 + 0x20) != iVar10))) {
          lVar7 = *(longlong *)(lVar7 + 8);
        }
      }
      if (lVar12 == 0) {
        if (iVar10 == 0x6f75746c) {
          if ((*(uint *)(lVar6 + 0x18) & 1) != 0) {
            FUN_143c234b0(lVar2 + 0x98,lVar6);
          }
          if ((*(byte *)(lVar6 + 0x18) & 2) != 0) {
            FUN_143c23560(lVar2 + 0x98,*(undefined4 *)(lVar6 + 0x10),*(undefined4 *)(lVar6 + 0x14));
          }
        }
      }
      else {
        iVar8 = (**(code **)(*(longlong *)(lVar12 + 0x18) + 0x48))(lVar12,lVar2,lVar6,lVar6 + 0x10);
      }
      FUN_143c254f0(puVar1,lVar6);
    }
  }
  if ((((iVar8 == 0) && (*(int *)(lVar2 + 0x60) != 0x62697473)) &&
      (*(int *)(lVar2 + 0x60) != 0x636f6d70)) && ((param_3 & 4) != 0)) {
    uVar11 = (int)param_3 >> 0x10 & 0xf;
    if ((uVar11 == 0) && (uVar11 = 0, (param_3 & 0x1000) != 0)) {
      uVar11 = 2;
    }
    if (*(longlong *)(lVar2 + 8) == 0) {
      iVar8 = 6;
    }
    else {
      iVar8 = FUN_143c23d50(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar2 + 8) + 0x90) + 8),
                            lVar2,uVar11);
    }
  }
  return iVar8;
}



// FUNCTION 143c21a80 FUN_143c21a80 body=134 status=ok
// SIG undefined FUN_143c21a80(void)

undefined8
FUN_143c21a80(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((param_1 == 0) || ((*(byte *)(param_1 + 8) & 8) == 0)) {
    uVar3 = 0x23;
  }
  else {
    pcVar1 = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
    if ((pcVar1 != (code *)0x0) &&
       (puVar2 = (undefined8 *)(*pcVar1)(*(longlong **)(param_1 + 0x90),"sfnt-table"),
       puVar2 != (undefined8 *)0x0)) {
      uVar3 = (*(code *)*puVar2)(param_1,param_2,param_3,param_4,param_5);
      return uVar3;
    }
    uVar3 = 7;
  }
  return uVar3;
}



// FUNCTION 143c21b10 FT_Lookup_Renderer body=81 status=ok
// SIG undefined FT_Lookup_Renderer(void)

longlong FT_Lookup_Renderer(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x118);
    if (param_3 != (longlong *)0x0) {
      if (*param_3 != 0) {
        lVar2 = *(longlong *)(*param_3 + 8);
      }
      *param_3 = 0;
    }
    for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 8)) {
      lVar1 = *(longlong *)(lVar2 + 0x10);
      if (*(int *)(lVar1 + 0x20) == param_2) {
        if (param_3 != (longlong *)0x0) {
          *param_3 = lVar2;
        }
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 143c21b70 FUN_143c21b70 body=62 status=ok
// SIG undefined FUN_143c21b70(void)

int FUN_143c21b70(ulonglong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 & 0xffff0000) != 0) {
    param_1 = param_1 >> 0x10 & 0xffff;
    iVar1 = 0x10;
  }
  if ((param_1 & 0xff00) != 0) {
    param_1 = param_1 >> 8 & 0xffffff;
    iVar1 = iVar1 + 8;
  }
  if ((param_1 & 0xf0) != 0) {
    param_1 = param_1 >> 4 & 0xfffffff;
    iVar1 = iVar1 + 4;
  }
  if ((param_1 & 0xc) != 0) {
    param_1 = param_1 >> 2 & 0x3fffffff;
    iVar1 = iVar1 + 2;
  }
  if ((param_1 & 2) != 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



// FUNCTION 143c21bb0 FUN_143c21bb0 body=333 status=ok
// SIG undefined FUN_143c21bb0(void)

undefined8 FUN_143c21bb0(longlong param_1,int *param_2,char param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    return 0x23;
  }
  if (*param_2 == 0) {
    iVar7 = param_2[1];
    iVar6 = iVar7;
    if (param_2[3] != 0) {
      iVar6 = (iVar7 * param_2[3] + 0x24) / 0x48;
    }
    iVar1 = param_2[2];
    iVar3 = iVar1;
    if (param_2[4] != 0) {
      iVar3 = (iVar1 * param_2[4] + 0x24) / 0x48;
    }
    if (((iVar7 == 0) || ((iVar4 = iVar6, iVar1 != 0 && (iVar4 = iVar3, iVar7 == 0)))) &&
       (iVar4 = iVar3, iVar1 != 0)) {
      iVar6 = iVar3;
    }
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      lVar5 = 0;
      piVar2 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      do {
        if (((iVar4 + 0x20U & 0xffffffc0) == (piVar2[1] + 0x20U & 0xffffffc0)) &&
           (((iVar6 + 0x20U & 0xffffffc0) == (*piVar2 + 0x20U & 0xffffffc0) || (param_3 != '\0'))))
        {
          if (param_4 != (int *)0x0) {
            *param_4 = iVar7;
          }
          return 0;
        }
        iVar7 = iVar7 + 1;
        lVar5 = lVar5 + 1;
        piVar2 = piVar2 + 4;
      } while (lVar5 < *(int *)(param_1 + 0x28));
    }
    return 0x17;
  }
  return 7;
}



// FUNCTION 143c21d00 FUN_143c21d00 body=170 status=ok
// SIG undefined FUN_143c21d00(void)

undefined4 FUN_143c21d00(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    return 6;
  }
  uVar4 = *param_1;
  iVar1 = FUN_143c22100(param_1[1],param_1[2]);
  iVar2 = FUN_143c22100(uVar4,param_1[3]);
  iVar2 = iVar2 - iVar1;
  if (iVar2 == 0) {
    return 6;
  }
  iVar1 = FUN_143c20070(param_1[1],iVar2);
  param_1[1] = -iVar1;
  iVar1 = FUN_143c20070(param_1[2],iVar2);
  param_1[2] = -iVar1;
  uVar3 = FUN_143c20070(param_1[3],iVar2);
  *param_1 = uVar3;
  uVar4 = FUN_143c20070(uVar4,iVar2);
  param_1[3] = uVar4;
  return 0;
}



// FUNCTION 143c21db0 FUN_143c21db0 body=323 status=ok
// SIG undefined FUN_143c21db0(void)

void FUN_143c21db0(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if ((param_1 != (undefined4 *)0x0) && (param_3 = param_3 << 0x10, param_2 != (int *)0x0)) {
    iVar8 = param_2[1];
    iVar9 = param_2[3];
    uVar1 = *param_1;
    iVar4 = FUN_143c21f00(uVar1,iVar8,param_3);
    iVar5 = FUN_143c21f00(param_1[1],iVar9,param_3);
    iVar11 = param_2[2];
    iVar10 = *param_2;
    uVar2 = param_1[3];
    uVar3 = param_1[2];
    iVar6 = FUN_143c21f00(uVar3,iVar10,param_3);
    iVar7 = FUN_143c21f00(uVar2,iVar11,param_3);
    iVar8 = FUN_143c21f00(uVar3,iVar8,param_3);
    iVar9 = FUN_143c21f00(uVar2,iVar9,param_3);
    iVar10 = FUN_143c21f00(uVar1,iVar10,param_3);
    iVar11 = FUN_143c21f00(param_1[1],iVar11,param_3);
    *param_2 = iVar10 + iVar11;
    param_2[3] = iVar8 + iVar9;
    param_2[1] = iVar4 + iVar5;
    param_2[2] = iVar6 + iVar7;
  }
  return;
}



// FUNCTION 143c21f00 FUN_143c21f00 body=260 status=ok
// SIG undefined FUN_143c21f00(void)

ulonglong FUN_143c21f00(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar5 = 1;
  if ((param_1 == 0) || (param_2 == param_3)) {
    uVar2 = (ulonglong)param_1;
  }
  else {
    if ((int)param_1 < 0) {
      param_1 = -param_1;
      iVar5 = -1;
    }
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      iVar5 = -iVar5;
    }
    if ((int)param_3 < 0) {
      param_3 = -param_3;
      iVar5 = -iVar5;
    }
    if (param_3 == 0) {
      uVar2 = 0x7fffffff;
    }
    else if (0x1fb66 - (param_3 >> 0x11) < param_1 + param_2) {
      uVar1 = (param_2 & 0xffff) * (param_1 >> 0x10);
      uVar3 = (param_2 >> 0x10) * (param_1 & 0xffff) + uVar1;
      uVar7 = (param_2 & 0xffff) * (param_1 & 0xffff) + uVar3 * 0x10000;
      uVar4 = (param_3 >> 1) + uVar7;
      iVar6 = (uint)(uVar3 < uVar1) * 0x10000 + (param_2 >> 0x10) * (param_1 >> 0x10) +
              (uVar3 >> 0x10) + (uint)(uVar7 < uVar3 * 0x10000) + (uint)(uVar4 < uVar7);
      if (iVar6 == 0) {
        uVar2 = (ulonglong)uVar4 / (ulonglong)param_3;
      }
      else {
        uVar2 = FUN_143c26960(iVar6,uVar4,param_3);
      }
    }
    else {
      uVar2 = (ulonglong)((param_3 >> 1) + param_1 * param_2) / (ulonglong)param_3;
    }
    if (iVar5 < 0) {
      return (ulonglong)(uint)-(int)uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 143c22010 FUN_143c22010 body=227 status=ok
// SIG undefined FUN_143c22010(void)

ulonglong FUN_143c22010(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = 1;
  if ((param_1 == 0) || (param_2 == param_3)) {
    uVar2 = (ulonglong)param_1;
  }
  else {
    if ((int)param_1 < 0) {
      param_1 = -param_1;
      iVar4 = -1;
    }
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      iVar4 = -iVar4;
    }
    if ((int)param_3 < 0) {
      param_3 = -param_3;
      iVar4 = -iVar4;
    }
    if (param_3 == 0) {
      uVar2 = 0x7fffffff;
    }
    else if (param_1 + param_2 < 0x20000) {
      uVar2 = (ulonglong)(param_1 * param_2) / (ulonglong)param_3;
    }
    else {
      uVar1 = (param_2 & 0xffff) * (param_1 >> 0x10);
      uVar3 = (param_2 >> 0x10) * (param_1 & 0xffff) + uVar1;
      uVar6 = (param_2 & 0xffff) * (param_1 & 0xffff) + uVar3 * 0x10000;
      iVar5 = (uint)(uVar3 < uVar1) * 0x10000 + (param_2 >> 0x10) * (param_1 >> 0x10) +
              (uVar3 >> 0x10) + (uint)(uVar6 < uVar3 * 0x10000);
      if (iVar5 == 0) {
        uVar2 = (ulonglong)uVar6 / (ulonglong)param_3;
      }
      else {
        uVar2 = FUN_143c26960(iVar5,uVar6);
      }
    }
    if (iVar4 < 0) {
      return (ulonglong)(uint)-(int)uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 143c22100 FUN_143c22100 body=132 status=ok
// SIG undefined FUN_143c22100(void)

uint FUN_143c22100(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if ((param_1 != 0) && (param_2 != 0x10000)) {
    if ((int)param_1 < 0) {
      param_1 = -param_1;
      iVar1 = -1;
    }
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      iVar1 = -iVar1;
    }
    if ((param_2 >> 8) + param_1 < 0x1fff) {
      param_1 = param_1 * param_2 + 0x8000 >> 0x10;
    }
    else {
      param_1 = (param_1 >> 0x10) * param_2 +
                ((param_2 & 0xffff) * (param_1 & 0xffff) + 0x8000 >> 0x10) +
                (param_2 >> 0x10) * (param_1 & 0xffff);
    }
    if (iVar1 < 0) {
      param_1 = -param_1;
    }
  }
  return param_1;
}



// FUNCTION 143c22190 FUN_143c22190 body=254 status=ok
// SIG undefined FUN_143c22190(void)

int FUN_143c22190(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  int iVar4;
  
  if (param_1 == 0) {
    return 0x23;
  }
  lVar2 = *(longlong *)(param_1 + 0x90);
  if (lVar2 == 0) {
    return 6;
  }
  iVar4 = 0;
  _Dst = (void *)0x0;
  lVar3 = *(longlong *)(lVar2 + 0x10);
  iVar1 = *(int *)(*(longlong *)(lVar2 + 0x18) + 0x40);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar4 = 6;
      goto LAB_143c22224;
    }
  }
  else {
    _Dst = (void *)(**(code **)(lVar3 + 8))(lVar3);
    if (_Dst == (void *)0x0) {
      iVar4 = 0x40;
      goto LAB_143c22224;
    }
  }
  if (0 < iVar1) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar1);
  }
LAB_143c22224:
  if (iVar4 == 0) {
    *(longlong *)((longlong)_Dst + 8) = param_1;
    iVar4 = ft_glyphslot_init(_Dst);
    if (iVar4 == 0) {
      *(undefined8 *)((longlong)_Dst + 0x10) = *(undefined8 *)(param_1 + 0x78);
      *(void **)(param_1 + 0x78) = _Dst;
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = _Dst;
      }
    }
    else {
      ft_glyphslot_done(_Dst);
      (**(code **)(lVar3 + 0x10))(lVar3,_Dst);
    }
  }
  else if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  return iVar4;
}



// FUNCTION 143c22290 FUN_143c22290 body=162 status=ok
// SIG undefined FUN_143c22290(void)

undefined8 FUN_143c22290(longlong param_1,undefined8 *param_2)

{
  longlong *_Dst;
  
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    _Dst = (longlong *)(**(code **)(param_1 + 8))();
    if (_Dst != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x170);
      *_Dst = param_1;
      *(undefined4 *)(_Dst + 0x28) = 0;
      _Dst[0x27] = 0;
      *(undefined4 *)(_Dst + 1) = 2;
      *(undefined8 *)((longlong)_Dst + 0xc) = 6;
      *(undefined4 *)(_Dst + 0x2d) = 1;
      *param_2 = _Dst;
      return 0;
    }
    return 0x40;
  }
  return 6;
}



// FUNCTION 143c22340 FUN_143c22340 body=73 status=ok
// SIG undefined FUN_143c22340(void)

undefined8
FUN_143c22340(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 local_48 [2];
  longlong local_40;
  undefined4 local_38;
  undefined8 local_28;
  
  if (param_2 == 0) {
    return 6;
  }
  local_48[0] = 1;
  local_28 = 0;
  local_40 = param_2;
  local_38 = param_3;
  uVar1 = FUN_143c224d0(param_1,local_48,param_4,param_5);
  return uVar1;
}



// FUNCTION 143c22390 FUN_143c22390 body=307 status=ok
// SIG undefined FUN_143c22390(void)

int FUN_143c22390(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int local_res8 [2];
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 != (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x90) == 0) {
      return 0x22;
    }
    *param_2 = 0;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18);
    lVar2 = *(longlong *)(param_1 + 0x98);
    plVar5 = (longlong *)FUN_143c271e0(lVar2,*(undefined4 *)(lVar1 + 0x3c),local_res8);
    iVar4 = local_res8[0];
    if (local_res8[0] == 0) {
      puVar6 = (undefined8 *)(**(code **)(lVar2 + 8))(lVar2,0x18);
      if (puVar6 == (undefined8 *)0x0) {
        local_res8[0] = 0x40;
      }
      else {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
      }
      iVar4 = local_res8[0];
      if (local_res8[0] == 0) {
        *plVar5 = param_1;
        plVar5[7] = 0;
        pcVar3 = *(code **)(lVar1 + 0x58);
        if (pcVar3 != (code *)0x0) {
          iVar4 = (*pcVar3)(plVar5);
        }
        if (iVar4 == 0) {
          *param_2 = (longlong)plVar5;
          puVar6[2] = plVar5;
          FUN_143c21650(param_1 + 0xa8,puVar6);
          return 0;
        }
      }
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)(lVar2 + 0x10))(lVar2,puVar6);
      }
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(lVar2 + 0x10))(lVar2,plVar5);
    }
    return iVar4;
  }
  return 6;
}



// FUNCTION 143c224d0 FUN_143c224d0 body=1183 status=ok
// SIG undefined FUN_143c224d0(void)

ulonglong FUN_143c224d0(longlong *param_1,uint *param_2,int param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  char cVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar19;
  longlong local_58;
  undefined8 *local_50;
  longlong local_48;
  longlong *local_40;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  puVar9 = (undefined8 *)0x0;
  local_48 = 0;
  local_58 = 0;
  puVar12 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  if (((param_4 == (undefined8 *)0x0) && (-1 < param_3)) || (param_2 == (uint *)0x0)) {
    return 6;
  }
  if (((*param_2 & 2) == 0) || (*(longlong *)(param_2 + 8) == 0)) {
    cVar16 = '\0';
  }
  else {
    cVar16 = '\x01';
  }
  uVar5 = FUN_143c24990(param_1,param_2,&local_58);
  uVar14 = (ulonglong)uVar5;
  puVar4 = puVar9;
  lVar13 = local_58;
  if (uVar5 == 0) {
    lVar18 = *param_1;
    local_48 = lVar18;
    if (((*param_2 & 8) != 0) &&
       (puVar17 = *(undefined8 **)(param_2 + 10), puVar17 != (undefined8 *)0x0)) {
      puVar9 = puVar17;
      if ((*(byte *)*puVar17 & 1) == 0) {
        uVar14 = 0x20;
        FUN_143c24800(local_58,cVar16);
        goto LAB_143c2293c;
      }
      uVar5 = 0;
      uVar10 = 0;
      if ((*param_2 & 0x10) != 0) {
        uVar5 = param_2[0xc];
        uVar10 = *(undefined8 *)(param_2 + 0xe);
      }
      uVar5 = FUN_143c27e70(puVar17,&local_58,cVar16,param_3,CONCAT44(uVar19,uVar5),uVar10,&local_50
                           );
      puVar12 = local_50;
      uVar14 = (ulonglong)uVar5;
      if (uVar5 != 0) {
        FUN_143c24800(local_58,cVar16);
        goto LAB_143c2293c;
      }
LAB_143c22732:
      uVar11 = 0;
      plVar8 = (longlong *)(**(code **)(lVar18 + 8))(lVar18,0x18);
      puVar12 = local_50;
      if (plVar8 == (longlong *)0x0) {
        uVar14 = 0x40;
      }
      else {
        *plVar8 = 0;
        plVar8[1] = 0;
        plVar8[2] = 0;
        uVar14 = uVar11;
      }
      if ((int)uVar14 == 0) {
        plVar8[2] = (longlong)local_50;
        lVar13 = local_50[0x12];
        if ((undefined8 *)(lVar13 + 0x20) != (undefined8 *)0x0) {
          lVar3 = *(longlong *)(lVar13 + 0x28);
          plVar8[1] = 0;
          *plVar8 = lVar3;
          if (lVar3 == 0) {
            *(undefined8 *)(lVar13 + 0x20) = plVar8;
          }
          else {
            *(longlong **)(lVar3 + 8) = plVar8;
          }
          *(longlong **)(lVar13 + 0x28) = plVar8;
        }
        if (param_3 < 0) {
LAB_143c227d3:
          if ((*(byte *)(puVar12 + 1) & 1) != 0) {
            if (*(short *)((longlong)puVar12 + 0x6e) < 0) {
              *(short *)((longlong)puVar12 + 0x6e) = -*(short *)((longlong)puVar12 + 0x6e);
            }
            if ((*(byte *)(puVar12 + 1) & 0x20) == 0) {
              *(undefined2 *)((longlong)puVar12 + 0x72) = *(undefined2 *)((longlong)puVar12 + 0x6e);
            }
          }
          if (((*(byte *)(puVar12 + 1) & 2) != 0) && (uVar15 = uVar11, 0 < *(int *)(puVar12 + 5))) {
            do {
              psVar1 = (short *)(uVar15 + puVar12[6]);
              sVar2 = *(short *)(uVar15 + puVar12[6]);
              if (sVar2 < 0) {
                *psVar1 = -sVar2;
              }
              if (*(int *)(psVar1 + 4) < 0) {
                *(int *)(psVar1 + 4) = (int)-psVar1[4];
              }
              if (*(int *)(psVar1 + 6) < 0) {
                *(int *)(psVar1 + 6) = -*(int *)(psVar1 + 6);
              }
              uVar5 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar5;
              uVar15 = uVar15 + 0x10;
            } while ((int)uVar5 < *(int *)(puVar12 + 5));
          }
          puVar9 = (undefined8 *)puVar12[0x1a];
          *puVar9 = 0x10000;
          *(undefined4 *)(puVar9 + 1) = 0;
          *(undefined8 *)((longlong)puVar9 + 0xc) = 0x10000;
          *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
          *(undefined4 *)((longlong)puVar9 + 0x54) = 1;
          if (param_4 != (undefined8 *)0x0) {
            *param_4 = puVar12;
            return uVar14;
          }
          goto LAB_143c22893;
        }
        uVar5 = FUN_143c22190(local_50,0);
        uVar14 = (ulonglong)uVar5;
        if (uVar5 == 0) {
          uVar5 = FUN_143c22390(puVar12,&local_40);
          uVar14 = (ulonglong)uVar5;
          if (uVar5 == 0) {
            puVar12[0x10] = local_40;
            goto LAB_143c227d3;
          }
        }
      }
      puVar9 = puVar17;
      if (plVar8 != (longlong *)0x0) {
LAB_143c22893:
        FUN_143c20100(puVar12);
        return uVar14;
      }
      goto LAB_143c2293c;
    }
    plVar8 = param_1 + 3;
    uVar14 = 0xb;
    local_40 = plVar8 + *(uint *)((longlong)param_1 + 0x14);
    if (plVar8 < local_40) {
      do {
        puVar17 = (undefined8 *)*plVar8;
        if ((*(byte *)*puVar17 & 1) != 0) {
          uVar5 = 0;
          uVar10 = 0;
          if ((*param_2 & 0x10) != 0) {
            uVar5 = param_2[0xc];
            uVar10 = *(undefined8 *)(param_2 + 0xe);
          }
          uVar6 = FUN_143c27e70(puVar17,&local_58,cVar16,param_3,uVar5,uVar10,&local_50);
          uVar14 = (ulonglong)uVar6;
          lVar18 = local_48;
          if (uVar6 == 0) goto LAB_143c22732;
          iVar7 = _guard_xfg_dispatch_icall_nop(*(char **)(*(longlong *)*plVar8 + 8),"truetype");
          lVar13 = local_58;
          puVar9 = puVar17;
          if ((iVar7 == 0) && ((char)uVar6 == -0x72)) {
            iVar7 = FUN_143c251d0(local_58,0);
            puVar4 = local_50;
            if (iVar7 != 0) break;
            uVar5 = FUN_143c28050(param_1,lVar13,param_3,uVar5,uVar10,param_4);
            uVar14 = (ulonglong)uVar5;
            if (uVar5 == 0) {
              FUN_143c24800(lVar13,cVar16);
              return 0;
            }
          }
          puVar4 = local_50;
          if ((char)uVar14 != '\x02') break;
        }
        plVar8 = plVar8 + 1;
        puVar4 = local_50;
      } while (plVar8 < local_40);
    }
  }
  puVar12 = puVar4;
  uVar5 = (uint)uVar14 & 0xff;
  if (((uVar5 == 0x51) || (uVar5 == 2)) || (uVar5 == 0x55)) {
    uVar5 = FUN_143c27db0(param_1,lVar13,param_3,param_4,param_2);
    uVar14 = (ulonglong)uVar5;
    if (uVar5 == 0) {
      if (lVar13 != 0) {
        lVar18 = *(longlong *)(lVar13 + 0x30);
        if (*(code **)(lVar13 + 0x28) != (code *)0x0) {
          (**(code **)(lVar13 + 0x28))(lVar13);
        }
        if (cVar16 == '\0') {
          (**(code **)(lVar18 + 0x10))(lVar18,lVar13);
        }
      }
      return 0;
    }
    if ((char)uVar5 == '\x02') {
      uVar14 = 2;
    }
  }
  lVar18 = local_48;
  if (lVar13 != 0) {
    lVar3 = *(longlong *)(lVar13 + 0x30);
    if (*(code **)(lVar13 + 0x28) != (code *)0x0) {
      (**(code **)(lVar13 + 0x28))(lVar13);
    }
    lVar18 = local_48;
    if (cVar16 == '\0') {
      (**(code **)(lVar3 + 0x10))(lVar3,lVar13);
      lVar18 = local_48;
    }
  }
LAB_143c2293c:
  if (puVar12 != (undefined8 *)0x0) {
    FUN_143c26210(lVar18,puVar12,puVar9);
  }
  return uVar14;
}



// FUNCTION 143c22970 FT_Outline_Check body=99 status=ok
// SIG undefined FT_Outline_Check(void)

undefined8 FT_Outline_Check(short *param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  if (param_1 != (short *)0x0) {
    sVar1 = param_1[1];
    sVar2 = *param_1;
    if (sVar1 == 0) {
      if (sVar2 == 0) {
        return 0;
      }
    }
    else if ((0 < sVar1) && (0 < sVar2)) {
      iVar4 = -1;
      if (0 < sVar2) {
        psVar3 = *(short **)(param_1 + 0xc);
        lVar5 = 0;
        iVar6 = -1;
        do {
          iVar4 = (int)*psVar3;
          if (iVar4 <= iVar6) {
            return 6;
          }
          if (sVar1 <= iVar4) {
            return 6;
          }
          lVar5 = lVar5 + 1;
          psVar3 = psVar3 + 1;
          iVar6 = iVar4;
        } while (lVar5 < sVar2);
      }
      if (iVar4 == sVar1 + -1) {
        return 0;
      }
    }
  }
  return 6;
}



// FUNCTION 143c229e0 FUN_143c229e0 body=178 status=ok
// SIG undefined FUN_143c229e0(void)

undefined8 FUN_143c229e0(short *param_1,short *param_2)

{
  if ((param_1 == (short *)0x0) || (param_2 == (short *)0x0)) {
    return 0x14;
  }
  if ((param_1[1] == param_2[1]) && (*param_1 == *param_2)) {
    if (param_1 != param_2) {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_2 + 4),*(void **)(param_1 + 4),(longlong)param_1[1] << 3);
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_2 + 8),*(void **)(param_1 + 8),(longlong)param_1[1]);
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_2 + 0xc),*(void **)(param_1 + 0xc),(longlong)*param_1 * 2);
      *(uint *)(param_2 + 0x10) =
           *(uint *)(param_1 + 0x10) & 0xfffffffe | *(uint *)(param_2 + 0x10) & 1;
    }
    return 0;
  }
  return 6;
}



// FUNCTION 143c22aa0 FUN_143c22aa0 body=910 status=ok
// SIG undefined FUN_143c22aa0(void)

undefined8 FUN_143c22aa0(short *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  byte bVar6;
  ulonglong uVar7;
  int *piVar8;
  int *piVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  undefined8 local_80;
  int local_78;
  int local_74;
  int local_70;
  int iStack_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  longlong local_48;
  
  if (param_1 == (short *)0x0) {
    return 0x14;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 6;
  }
  uVar7 = 0;
  uVar1 = *(undefined4 *)(param_2 + 4);
  iVar2 = *(int *)((longlong)param_2 + 0x24);
  local_88 = 0;
  if (*param_1 < 1) {
    return 0;
  }
  local_48 = 0;
LAB_143c22b30:
  iVar4 = (int)*(short *)(local_48 + *(longlong *)(param_1 + 0xc));
  if (-1 < iVar4) {
    lVar3 = *(longlong *)(param_1 + 4);
    piVar16 = (int *)(lVar3 + (longlong)*(short *)(local_48 + *(longlong *)(param_1 + 0xc)) * 8);
    piVar8 = (int *)(lVar3 + uVar7 * 8);
    uVar5 = *(undefined8 *)(lVar3 + uVar7 * 8);
    local_98._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
    bVar6 = (byte)uVar1;
    iVar13 = (local_98._4_4_ << (bVar6 & 0x1f)) - iVar2;
    iVar12 = ((int)uVar5 << (bVar6 & 0x1f)) - iVar2;
    local_98 = CONCAT44(iVar13,iVar12);
    local_80._4_4_ = (int)((ulonglong)*(undefined8 *)piVar16 >> 0x20);
    iVar15 = (local_80._4_4_ << (bVar6 & 0x1f)) - iVar2;
    iVar14 = ((int)*(undefined8 *)piVar16 << (bVar6 & 0x1f)) - iVar2;
    local_90 = local_98;
    pbVar10 = (byte *)(*(longlong *)(param_1 + 8) + uVar7);
    local_80 = CONCAT44(iVar15,iVar14);
    if ((*pbVar10 & 3) != 2) {
      if ((*pbVar10 & 3) == 0) {
        if ((*(byte *)(*(longlong *)(param_1 + 8) + (longlong)iVar4) & 3) == 1) {
          piVar16 = piVar16 + -2;
          local_98 = local_80;
        }
        else {
          local_98 = CONCAT44((iVar15 + iVar13) / 2,(iVar14 + iVar12) / 2);
        }
        piVar8 = piVar8 + -2;
        pbVar10 = pbVar10 + -1;
      }
      uVar5 = (*(code *)*param_2)(&local_98,param_3);
      iVar12 = (int)uVar5;
      do {
        if (iVar12 != 0) {
          return uVar5;
        }
        if (piVar16 <= piVar8) {
          uVar5 = (*(code *)param_2[1])(&local_98,param_3);
          goto LAB_143c22da8;
        }
        pbVar11 = pbVar10 + 1;
        piVar9 = piVar8 + 2;
        if ((pbVar10[1] & 3) == 0) {
          iVar13 = (*piVar9 << (bVar6 & 0x1f)) - iVar2;
          iVar12 = (piVar8[3] << (bVar6 & 0x1f)) - iVar2;
          local_90 = CONCAT44(iVar12,iVar13);
          piVar8 = piVar9;
          while( true ) {
            if (piVar16 <= piVar8) {
              uVar5 = (*(code *)param_2[2])(&local_90,&local_98,param_3);
              goto LAB_143c22da8;
            }
            piVar9 = piVar8 + 2;
            pbVar10 = pbVar11 + 1;
            pbVar11 = pbVar11 + 1;
            local_70 = (piVar8[2] << (bVar6 & 0x1f)) - iVar2;
            iStack_6c = (piVar8[3] << (bVar6 & 0x1f)) - iVar2;
            if ((*pbVar10 & 3) == 1) break;
            if ((*pbVar10 & 3) != 0) {
              return 0x14;
            }
            local_58 = (local_70 + iVar13) / 2;
            local_54 = (iStack_6c + iVar12) / 2;
            uVar5 = (*(code *)param_2[2])(&local_90,&local_58,param_3);
            if ((int)uVar5 != 0) {
              return uVar5;
            }
            local_90 = CONCAT44(iStack_6c,local_70);
            piVar8 = piVar9;
            iVar12 = iStack_6c;
            iVar13 = local_70;
          }
          uVar5 = (*(code *)param_2[2])(&local_90,&local_70,param_3);
        }
        else if ((pbVar10[1] & 3) == 1) {
          local_50 = (*piVar9 << (bVar6 & 0x1f)) - iVar2;
          local_4c = (piVar8[3] << (bVar6 & 0x1f)) - iVar2;
          uVar5 = (*(code *)param_2[1])(&local_50,param_3);
        }
        else {
          if (piVar16 < piVar8 + 4) {
            return 0x14;
          }
          if ((pbVar10[2] & 3) != 2) {
            return 0x14;
          }
          iVar12 = *piVar9;
          piVar9 = piVar8 + 6;
          pbVar11 = pbVar10 + 3;
          local_68 = (iVar12 << (bVar6 & 0x1f)) - iVar2;
          local_64 = (piVar8[3] << (bVar6 & 0x1f)) - iVar2;
          local_78 = (piVar8[4] << (bVar6 & 0x1f)) - iVar2;
          local_74 = (piVar8[5] << (bVar6 & 0x1f)) - iVar2;
          if (piVar16 < piVar9) goto LAB_143c22e08;
          local_60 = (*piVar9 << (bVar6 & 0x1f)) - iVar2;
          local_5c = (piVar8[7] << (bVar6 & 0x1f)) - iVar2;
          uVar5 = (*(code *)param_2[3])(&local_68,&local_78,&local_60);
        }
        iVar12 = (int)uVar5;
        piVar8 = piVar9;
        pbVar10 = pbVar11;
      } while( true );
    }
  }
  return 0x14;
LAB_143c22e08:
  uVar5 = (*(code *)param_2[3])(&local_68,&local_78,&local_98,param_3);
LAB_143c22da8:
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  local_88 = local_88 + 1;
  local_48 = local_48 + 2;
  uVar7 = (ulonglong)(iVar4 + 1);
  if (*param_1 <= local_88) {
    return 0;
  }
  goto LAB_143c22b30;
}



// FUNCTION 143c22e30 FUN_143c22e30 body=17 status=ok
// SIG undefined FUN_143c22e30(void)

undefined8 FUN_143c22e30(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  uVar1 = FUN_143c22e50(*param_1);
  return uVar1;
}



// FUNCTION 143c22e50 FUN_143c22e50 body=173 status=ok
// SIG undefined FUN_143c22e50(void)

undefined4 FUN_143c22e50(longlong param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return 0x14;
  }
  if (param_1 == 0) {
    return 6;
  }
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    if (param_2[1] != 0) {
      (**(code **)(param_1 + 0x10))();
    }
    param_2[1] = 0;
    if (param_2[2] != 0) {
      (**(code **)(param_1 + 0x10))(param_1);
    }
    param_2[2] = 0;
    if (param_2[3] != 0) {
      (**(code **)(param_1 + 0x10))(param_1);
    }
    param_2[3] = 0;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  return 0;
}



// FUNCTION 143c22f00 FUN_143c22f00 body=176 status=ok
// SIG undefined FUN_143c22f00(void)

void FUN_143c22f00(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    if (*(short *)(param_1 + 2) == 0) {
      *param_2 = 0;
      param_2[2] = 0;
      param_2[1] = 0;
      param_2[3] = 0;
      return;
    }
    piVar3 = *(int **)(param_1 + 8);
    iVar6 = *piVar3;
    iVar7 = piVar3[1];
    piVar1 = piVar3 + (longlong)*(short *)(param_1 + 2) * 2;
    iVar5 = iVar6;
    iVar4 = iVar7;
    while (piVar3 = piVar3 + 2, piVar3 < piVar1) {
      iVar2 = *piVar3;
      if (iVar2 < iVar5) {
        iVar5 = iVar2;
      }
      if (iVar6 < iVar2) {
        iVar6 = iVar2;
      }
      iVar2 = piVar3[1];
      if (iVar2 < iVar7) {
        iVar7 = iVar2;
      }
      if (iVar4 < iVar2) {
        iVar4 = iVar2;
      }
    }
    *param_2 = iVar5;
    param_2[2] = iVar6;
    param_2[1] = iVar7;
    param_2[3] = iVar4;
  }
  return;
}



// FUNCTION 143c22fb0 FUN_143c22fb0 body=515 status=ok
// SIG undefined FUN_143c22fb0(void)

undefined8 FUN_143c22fb0(short *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined8 uVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  byte bVar7;
  
  iVar9 = 0;
  if ((param_1 == (short *)0x0) || (param_1[1] < 1)) {
    return 0;
  }
  FUN_143c22f00(param_1,&local_38);
  if (local_38 == local_30) {
    return 2;
  }
  if (local_34 != local_2c) {
    iVar4 = FUN_143c21b70((local_30 ^ (int)local_30 >> 0x1f) - ((int)local_30 >> 0x1f) |
                          (local_38 ^ (int)local_38 >> 0x1f) - ((int)local_38 >> 0x1f));
    iVar16 = 0;
    if (0 < iVar4 + -0xe) {
      iVar16 = iVar4 + -0xe;
    }
    iVar5 = FUN_143c21b70(local_2c - local_34);
    lVar15 = (longlong)*param_1;
    lVar1 = *(longlong *)(param_1 + 4);
    iVar4 = 0;
    if (0 < iVar5 + -0xe) {
      iVar4 = iVar5 + -0xe;
    }
    iVar5 = 0;
    if (0 < lVar15) {
      psVar10 = *(short **)(param_1 + 0xc);
      do {
        uVar17 = (ulonglong)*psVar10;
        iVar12 = 0;
        iVar11 = 0;
        lVar13 = (longlong)iVar5;
        uVar8 = *(undefined8 *)(lVar1 + uVar17 * 8);
        uVar18 = uVar17;
        if (lVar13 <= (longlong)uVar17) {
          bVar6 = (byte)iVar4;
          bVar7 = (byte)iVar16;
          if (1 < (longlong)((uVar17 - lVar13) + 1)) {
            do {
              uVar2 = *(undefined8 *)(lVar1 + lVar13 * 8);
              uVar18 = (ulonglong)uVar8 >> 0x20;
              iVar14 = (int)((ulonglong)uVar2 >> 0x20);
              iVar5 = (int)uVar8;
              iVar3 = (int)uVar2;
              uVar8 = *(undefined8 *)(lVar1 + 8 + lVar13 * 8);
              lVar13 = lVar13 + 2;
              iVar12 = iVar12 + (iVar14 - (int)uVar18 >> (bVar6 & 0x1f)) *
                                (iVar5 + iVar3 >> (bVar7 & 0x1f));
              iVar11 = iVar11 + ((int)((ulonglong)uVar8 >> 0x20) - iVar14 >> (bVar6 & 0x1f)) *
                                (iVar3 + (int)uVar8 >> (bVar7 & 0x1f));
            } while (lVar13 <= (longlong)(uVar17 - 1));
            uVar18 = (ulonglong)(uint)(int)*psVar10;
          }
          if (lVar13 <= (longlong)uVar17) {
            uVar2 = *(undefined8 *)(lVar1 + lVar13 * 8);
            iVar9 = iVar9 + ((int)((ulonglong)uVar2 >> 0x20) - (int)((ulonglong)uVar8 >> 0x20) >>
                            (bVar6 & 0x1f)) * ((int)uVar8 + (int)uVar2 >> (bVar7 & 0x1f));
          }
          iVar9 = iVar9 + iVar11 + iVar12;
        }
        psVar10 = psVar10 + 1;
        iVar5 = (int)uVar18 + 1;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      if (0 < iVar9) {
        return 1;
      }
      if (iVar9 < 0) {
        return 0;
      }
    }
    return 2;
  }
  return 2;
}



// FUNCTION 143c231c0 FUN_143c231c0 body=17 status=ok
// SIG undefined FUN_143c231c0(void)

undefined8 FUN_143c231c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  uVar1 = FUN_143c231e0(*param_1);
  return uVar1;
}



// FUNCTION 143c231e0 FUN_143c231e0 body=490 status=ok
// SIG undefined FUN_143c231e0(void)

undefined1 * FUN_143c231e0(longlong param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  undefined1 *_Dst;
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint local_res20 [2];
  
  if ((param_4 == (undefined8 *)0x0) || (param_1 == 0)) {
    return &DAT_00000006;
  }
  *param_4 = 0;
  param_4[1] = 0;
  *(undefined4 *)(param_4 + 2) = 0;
  *(undefined4 *)((longlong)param_4 + 0x14) = 0;
  *(undefined4 *)(param_4 + 3) = 0;
  *(undefined4 *)((longlong)param_4 + 0x1c) = 0;
  param_4[4] = 0;
  if ((int)param_3 < 0) {
    return &DAT_00000006;
  }
  if (param_3 <= param_2) {
    if (0x7fff < param_2) {
      return (undefined1 *)0xa;
    }
    _Dst = (undefined1 *)0x0;
    local_res20[0] = 0;
    if ((int)param_2 < 0) {
      puVar1 = &DAT_00000006;
      puVar2 = (undefined1 *)0x0;
    }
    else {
      puVar1 = _Dst;
      puVar2 = _Dst;
      if (param_2 != 0) {
        if ((int)param_2 < 0x10000000) {
          puVar2 = (undefined1 *)FUN_143c271e0(0,param_2 * 8,local_res20);
          puVar1 = (undefined1 *)(ulonglong)local_res20[0];
          if ((local_res20[0] == 0) && (0 < (int)param_2)) {
            _guard_xfg_dispatch_icall_nop(puVar2,0,(longlong)(int)(param_2 * 8));
          }
        }
        else {
          puVar1 = (undefined1 *)0xa;
          puVar2 = (undefined1 *)0x0;
        }
      }
    }
    param_4[1] = puVar2;
    if ((int)puVar1 == 0) {
      puVar2 = (undefined1 *)0x0;
      local_res20[0] = 0;
      if ((int)param_2 < 0) {
        puVar1 = &DAT_00000006;
      }
      else {
        puVar1 = _Dst;
        puVar2 = _Dst;
        if (param_2 != 0) {
          if ((int)param_2 <= 0x7fffffff) {
            puVar2 = (undefined1 *)FUN_143c271e0(param_1,param_2,local_res20);
            puVar1 = (undefined1 *)(ulonglong)local_res20[0];
            if ((local_res20[0] == 0) && (0 < (int)param_2)) {
              _guard_xfg_dispatch_icall_nop(puVar2,0,(longlong)(int)param_2);
            }
          }
          else {
            puVar1 = (undefined1 *)0xa;
          }
        }
      }
      param_4[2] = puVar2;
      if ((int)puVar1 == 0) {
        local_res20[0] = 0;
        puVar1 = _Dst;
        if (param_3 != 0) {
          if ((int)param_3 < 0x40000000) {
            _Dst = (undefined1 *)FUN_143c271e0(param_1,param_3 * 2,local_res20);
            puVar1 = (undefined1 *)(ulonglong)local_res20[0];
            if ((local_res20[0] == 0) && (0 < (int)param_3)) {
              _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)(int)(param_3 * 2));
            }
          }
          else {
            puVar1 = (undefined1 *)0xa;
          }
        }
        param_4[3] = _Dst;
        if ((int)puVar1 == 0) {
          *(uint *)(param_4 + 4) = *(uint *)(param_4 + 4) | 1;
          *(short *)((longlong)param_4 + 2) = (short)param_2;
          *(short *)param_4 = (short)param_3;
          return (undefined1 *)0x0;
        }
      }
    }
    *(uint *)(param_4 + 4) = *(uint *)(param_4 + 4) | 1;
    FUN_143c22e50(param_1,param_4);
    return puVar1;
  }
  return &DAT_00000006;
}



// FUNCTION 143c233d0 FUN_143c233d0 body=213 status=ok
// SIG undefined FUN_143c233d0(void)

int FUN_143c233d0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_1 == 0) {
    return 0x21;
  }
  if (param_2 == 0) {
    return 0x14;
  }
  if (param_3 == 0) {
    return 6;
  }
  lVar1 = *(longlong *)(param_1 + 0x128);
  lVar2 = *(longlong *)(param_1 + 0x118);
  *(longlong *)(param_3 + 8) = param_2;
  iVar3 = 0x13;
  while (((lVar1 != 0 &&
          (iVar3 = (**(code **)(lVar1 + 0x68))(*(undefined8 *)(lVar1 + 0x60),param_3), iVar3 != 0))
         && ((char)iVar3 == '\x13'))) {
    lVar4 = *(longlong *)(param_1 + 0x118);
    if (lVar2 != 0) {
      lVar4 = *(longlong *)(lVar2 + 8);
    }
    while ((lVar1 = 0, lVar2 = 0, lVar4 != 0 &&
           (lVar1 = *(longlong *)(lVar4 + 0x10), lVar2 = lVar4, *(int *)(lVar1 + 0x20) != 0x6f75746c
           ))) {
      lVar4 = *(longlong *)(lVar4 + 8);
    }
  }
  return iVar3;
}



// FUNCTION 143c234b0 FUN_143c234b0 body=174 status=ok
// SIG undefined FUN_143c234b0(void)

void FUN_143c234b0(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    piVar6 = *(int **)(param_1 + 8);
    piVar1 = piVar6 + (longlong)*(short *)(param_1 + 2) * 2;
    for (; piVar6 < piVar1; piVar6 = piVar6 + 2) {
      if (piVar6 != (int *)0x0) {
        iVar2 = FUN_143c22100(*piVar6,param_2[2]);
        iVar3 = FUN_143c22100(piVar6[1],param_2[3]);
        iVar4 = FUN_143c22100(piVar6[1],param_2[1]);
        iVar5 = FUN_143c22100(*piVar6,*param_2);
        piVar6[1] = iVar2 + iVar3;
        *piVar6 = iVar4 + iVar5;
      }
    }
  }
  return;
}



// FUNCTION 143c23560 FUN_143c23560 body=61 status=ok
// SIG undefined FUN_143c23560(void)

void FUN_143c23560(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  ushort uVar2;
  
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 8);
    uVar2 = 0;
    if (0 < *(short *)(param_1 + 2)) {
      do {
        *piVar1 = *piVar1 + param_2;
        uVar2 = uVar2 + 1;
        piVar1[1] = piVar1[1] + param_3;
        piVar1 = piVar1 + 2;
      } while ((int)(uint)uVar2 < (int)*(short *)(param_1 + 2));
    }
  }
  return;
}



// FUNCTION 143c235a0 FUN_143c235a0 body=1115 status=ok
// SIG undefined FUN_143c235a0(void)

ulonglong FUN_143c235a0(longlong *param_1,longlong *param_2,uint param_3,int param_4,int param_5,
                       char param_6,undefined8 *param_7,int *param_8)

{
  longlong lVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  ulonglong uVar7;
  int *_Dst;
  ushort uVar8;
  ushort uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined2 *puVar12;
  int *piVar13;
  int *piVar14;
  undefined2 *puVar15;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_48 [8];
  longlong local_40;
  undefined2 *_Base;
  
  local_40 = *param_1;
  uVar7 = (ulonglong)param_3;
  if ((code *)param_2[4] == (code *)0x0) {
    if (*(uint *)(param_2 + 1) < param_3) {
      return 0x55;
    }
  }
  else {
    iVar3 = (*(code *)param_2[4])(param_2,uVar7,0,0);
    if (iVar3 != 0) {
      return 0x55;
    }
  }
  _Base = (undefined2 *)0x0;
  puVar15 = (undefined2 *)0x0;
  *(uint *)((longlong)param_2 + 0xc) = param_3;
  if (*(uint *)(param_2 + 1) <= param_3 + 1) {
    return 0x55;
  }
  if ((code *)param_2[4] == (code *)0x0) {
    puVar6 = (uint *)(uVar7 + *param_2);
    uVar8 = 0;
    if (puVar6 == (uint *)0x0) goto LAB_143c23645;
  }
  else {
    iVar3 = (*(code *)param_2[4])(param_2,uVar7,local_res8,2);
    if (iVar3 != 2) {
      return 0x55;
    }
    puVar6 = local_res8;
  }
  uVar8 = CONCAT11((char)*puVar6,*(undefined1 *)((longlong)puVar6 + 1));
LAB_143c23645:
  *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 2;
  uVar5 = *(uint *)((longlong)param_2 + 0xc);
  puVar12 = _Base;
  if (uVar8 != 0xffffffff) {
    do {
      if (*(uint *)(param_2 + 1) <= uVar5 + 3) {
        return 0x55;
      }
      if ((code *)param_2[4] == (code *)0x0) {
        puVar10 = (undefined1 *)((ulonglong)uVar5 + *param_2);
        iVar3 = 0;
        if (puVar10 != (undefined1 *)0x0) goto LAB_143c236cf;
      }
      else {
        iVar3 = (*(code *)param_2[4])(param_2,(ulonglong)uVar5,local_48,4);
        if (iVar3 != 4) {
          return 0x55;
        }
        puVar10 = local_48;
LAB_143c236cf:
        iVar3 = CONCAT31(CONCAT21(CONCAT11(*puVar10,puVar10[1]),puVar10[2]),puVar10[3]);
      }
      *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 4;
      uVar5 = *(uint *)((longlong)param_2 + 0xc);
      if (*(uint *)(param_2 + 1) <= uVar5 + 1) {
        return 0x55;
      }
      if ((code *)param_2[4] == (code *)0x0) {
        puVar6 = (uint *)((ulonglong)uVar5 + *param_2);
        uVar9 = 0;
        if (puVar6 != (uint *)0x0) goto LAB_143c2373a;
      }
      else {
        iVar4 = (*(code *)param_2[4])(param_2,(ulonglong)uVar5,local_res8,2);
        if (iVar4 != 2) {
          return 0x55;
        }
        puVar6 = local_res8;
LAB_143c2373a:
        uVar9 = CONCAT11((char)*puVar6,*(undefined1 *)((longlong)puVar6 + 1));
      }
      *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 2;
      if ((*(uint *)(param_2 + 1) <= *(int *)((longlong)param_2 + 0xc) + 1U) ||
         (((code *)param_2[4] != (code *)0x0 &&
          (iVar4 = (*(code *)param_2[4])(param_2,*(int *)((longlong)param_2 + 0xc),local_res10,2),
          iVar4 != 2)))) {
        return 0x55;
      }
      *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 2;
      uVar5 = *(uint *)((longlong)param_2 + 0xc);
      if (iVar3 == param_5) {
        *param_8 = uVar9 + 1;
        uVar7 = FUN_143c251d0(param_2);
        lVar1 = local_40;
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        iVar3 = *param_8;
        local_res8[0] = 0;
        if (iVar3 < 0) {
          uVar7 = 6;
LAB_143c23876:
          local_res8[0] = (uint)uVar7;
          _Base = puVar15;
          if (local_res8[0] != 0) {
            return uVar7;
          }
        }
        else {
          if (iVar3 != 0) {
            if (0xfffffff < iVar3) {
              return 10;
            }
            puVar15 = (undefined2 *)FUN_143c271e0(local_40,iVar3 * 8,local_res8);
            uVar7 = (ulonglong)local_res8[0];
            if ((local_res8[0] == 0) && (0 < iVar3)) {
              _guard_xfg_dispatch_icall_nop(puVar15,0,(longlong)(iVar3 * 8));
            }
            goto LAB_143c23876;
          }
          local_res8[0] = 0;
        }
        iVar3 = 0;
        puVar15 = _Base;
        uVar5 = local_res8[0];
        if (*param_8 < 1) goto LAB_143c2390f;
        goto LAB_143c23890;
      }
      uVar11 = (int)puVar12 + 1;
      puVar12 = (undefined2 *)(ulonglong)uVar11;
    } while ((int)uVar11 < (int)(uVar8 + 1));
  }
  return 1;
  while( true ) {
    local_res8[0] = FUN_143c25220(param_2,2);
    uVar7 = (ulonglong)local_res8[0];
    if (local_res8[0] != 0) goto LAB_143c239c5;
    uVar5 = FUN_143c24ea0(param_2,local_res8);
    uVar7 = (ulonglong)local_res8[0];
    if (local_res8[0] != 0) goto LAB_143c239c5;
    local_res8[0] = FUN_143c25220(param_2);
    uVar7 = (ulonglong)local_res8[0];
    if (local_res8[0] != 0) goto LAB_143c239c5;
    iVar3 = iVar3 + 1;
    *(uint *)(puVar15 + 2) = uVar5 & 0xffffff;
    puVar15 = puVar15 + 4;
    uVar5 = 0;
    if (*param_8 <= iVar3) break;
LAB_143c23890:
    uVar2 = FUN_143c25070(param_2,local_res8);
    uVar7 = (ulonglong)local_res8[0];
    *puVar15 = uVar2;
    if (local_res8[0] != 0) goto LAB_143c239c5;
  }
LAB_143c2390f:
  local_res8[0] = uVar5;
  if (param_6 != '\0') {
    _guard_xfg_dispatch_icall_nop(_Base,(longlong)*param_8,8,(_PtFuncCompare *)&LAB_143c275c0);
  }
  iVar3 = *param_8;
  _Dst = (int *)0x0;
  local_res8[0] = 0;
  if (iVar3 < 0) {
    uVar7 = 6;
LAB_143c23986:
    if ((int)uVar7 != 0) goto LAB_143c239c5;
  }
  else if (iVar3 != 0) {
    if (0x1fffffff < iVar3) {
      uVar7 = 10;
      goto LAB_143c239c5;
    }
    _Dst = (int *)FUN_143c271e0(lVar1,iVar3 * 4,local_res8);
    uVar7 = (ulonglong)local_res8[0];
    if (local_res8[0] != 0) goto LAB_143c239c5;
    if (0 < iVar3) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)(iVar3 * 4));
    }
    goto LAB_143c23986;
  }
  iVar3 = 0;
  if (0 < *param_8) {
    piVar14 = (int *)(_Base + 2);
    piVar13 = _Dst;
    do {
      iVar4 = *piVar14;
      piVar14 = piVar14 + 2;
      iVar3 = iVar3 + 1;
      *piVar13 = iVar4 + param_4;
      piVar13 = piVar13 + 1;
    } while (iVar3 < *param_8);
  }
  uVar7 = 0;
  *param_7 = _Dst;
LAB_143c239c5:
  if (_Base != (undefined2 *)0x0) {
    (**(code **)(local_40 + 0x10))(local_40,_Base);
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 143c23a00 FUN_143c23a00 body=637 status=ok
// SIG undefined FUN_143c23a00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c23a00(undefined8 param_1,longlong *param_2,uint param_3,int *param_4,int *param_5)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  size_t sVar9;
  uint uVar10;
  undefined1 auStack_88 [32];
  uint local_68 [2];
  char local_60 [16];
  char local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar6 = (ulonglong)param_3;
  if ((code *)param_2[4] == (code *)0x0) {
    if (param_3 <= *(uint *)(param_2 + 1)) goto LAB_143c23a51;
  }
  else {
    iVar3 = (*(code *)param_2[4])(param_2,uVar6,0);
    if (iVar3 == 0) {
LAB_143c23a51:
      *(uint *)((longlong)param_2 + 0xc) = param_3;
      if (*(uint *)(param_2 + 1) <= param_3) {
        return 0x55;
      }
      if ((code *)param_2[4] == (code *)0x0) {
        uVar4 = *(uint *)(param_2 + 1) - param_3;
        sVar9 = (size_t)uVar4;
        if (0x10 < uVar4) {
          sVar9 = 0x10;
        }
        uVar4 = (uint)sVar9;
        _guard_xfg_dispatch_icall_nop(local_60,(void *)(uVar6 + *param_2),sVar9);
      }
      else {
        uVar4 = (*(code *)param_2[4])(param_2,uVar6,local_60);
      }
      *(uint *)((longlong)param_2 + 0xc) = uVar4 + param_3;
      uVar6 = 0;
      if (uVar4 < 0x10) {
        uVar6 = 0x55;
      }
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      iVar3 = CONCAT31(CONCAT21(CONCAT11(local_60[0],local_60[1]),local_60[2]),local_60[3]) +
              param_3;
      *param_5 = iVar3;
      uVar4 = CONCAT31(CONCAT21(CONCAT11(local_60[4],local_60[5]),local_60[6]),local_60[7]) +
              param_3;
      if ((CONCAT31(CONCAT21(CONCAT11(local_60[8],local_60[9]),local_60[10]),local_60[0xb]) + iVar3
           == uVar4) && (uVar4 != param_3)) {
        uVar6 = FUN_143c251d0(param_2,uVar4);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        uVar10 = *(uint *)((longlong)param_2 + 0xc);
        local_50[0xf] = local_60[0xf] + '\x01';
        if (*(uint *)(param_2 + 1) <= uVar10) {
          return 0x55;
        }
        if ((code *)param_2[4] == (code *)0x0) {
          uVar5 = *(uint *)(param_2 + 1) - uVar10;
          sVar9 = (size_t)uVar5;
          if (0x10 < uVar5) {
            sVar9 = 0x10;
          }
          uVar5 = (uint)sVar9;
          _guard_xfg_dispatch_icall_nop(local_50,(void *)((ulonglong)uVar10 + *param_2),sVar9);
        }
        else {
          uVar5 = (*(code *)param_2[4])(param_2,(ulonglong)uVar10,local_50);
        }
        *(uint *)((longlong)param_2 + 0xc) = uVar5 + uVar10;
        uVar10 = 0;
        if (uVar5 < 0x10) {
          uVar10 = 0x55;
        }
        if (uVar10 != 0) {
          return (ulonglong)uVar10;
        }
        lVar8 = 1;
        bVar1 = true;
        lVar7 = 0;
        do {
          if (local_50[lVar7] != '\0') {
            lVar8 = 0;
          }
          if (local_50[lVar7] != local_60[lVar7]) {
            bVar1 = false;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < 0x10);
        if (((int)lVar8 != 0) || (bVar1)) {
          local_68[0] = FUN_143c25220(param_2,8);
          uVar2 = FUN_143c25070(param_2,local_68);
          if (local_68[0] != 0) {
            return (ulonglong)local_68[0];
          }
          if (uVar2 != 0xffffffff) {
            iVar3 = uVar2 + uVar4;
            uVar6 = FUN_143c251d0(param_2,iVar3);
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            *param_4 = iVar3;
            return uVar6;
          }
        }
      }
      return 2;
    }
  }
  return 0x55;
}



// FUNCTION 143c23c80 FUN_143c23c80 body=151 status=ok
// SIG undefined FUN_143c23c80(void)

undefined4 FUN_143c23c80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_1 == 0) {
    return 0x21;
  }
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x18);
    plVar2 = plVar3 + *(uint *)(param_1 + 0x14);
    for (; plVar3 < plVar2; plVar3 = plVar3 + 1) {
      if (*plVar3 == param_2) {
        plVar2 = plVar2 + -1;
        *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) - 1;
        if (plVar3 < plVar2) {
          plVar4 = plVar3;
          for (lVar1 = ((ulonglong)((longlong)plVar2 + (-1 - (longlong)plVar3)) >> 3) + 1;
              plVar3 = plVar3 + 1, lVar1 != 0; lVar1 = lVar1 + -1) {
            *plVar4 = *plVar3;
            plVar4 = plVar4 + 1;
          }
        }
        *plVar2 = 0;
        FUN_143c1fb70(param_2);
        return 0;
      }
    }
  }
  return 0x22;
}



// FUNCTION 143c23d20 FUN_143c23d20 body=42 status=ok
// SIG undefined FUN_143c23d20(void)

undefined8 FUN_143c23d20(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    uVar1 = FUN_143c23d50(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8),
                          param_1,param_2);
    return uVar1;
  }
  return 6;
}



// FUNCTION 143c23d50 FUN_143c23d50 body=272 status=ok
// SIG undefined FUN_143c23d50(void)

ulonglong FUN_143c23d50(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_2 + 0x60);
  if (iVar1 == 0x62697473) {
    return 0;
  }
  if (iVar1 == 0x6f75746c) {
    lVar6 = *(longlong *)(param_1 + 0x128);
    lVar5 = *(longlong *)(param_1 + 0x118);
  }
  else {
    lVar6 = 0;
    lVar5 = 0;
    if (param_1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x118);
      while( true ) {
        lVar6 = 0;
        lVar5 = 0;
        if ((lVar3 == 0) ||
           (lVar6 = *(longlong *)(lVar3 + 0x10), lVar5 = lVar3, *(int *)(lVar6 + 0x20) == iVar1))
        break;
        lVar3 = *(longlong *)(lVar3 + 8);
      }
    }
  }
  if (lVar6 == 0) {
    uVar4 = 7;
  }
  else {
    do {
      uVar2 = (**(code **)(lVar6 + 0x70))(lVar6,param_2,param_3,0);
      uVar4 = uVar2 & 0xffffffff;
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      if ((char)uVar2 != '\x13') {
        return uVar2;
      }
      lVar6 = 0;
      if (param_1 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x118);
        if (lVar5 != 0) {
          lVar3 = *(longlong *)(lVar5 + 8);
        }
        while ((lVar5 = 0, lVar6 = 0, lVar3 != 0 &&
               (lVar6 = *(longlong *)(lVar3 + 0x10), lVar5 = lVar3,
               *(int *)(lVar6 + 0x20) != *(int *)(param_2 + 0x60)))) {
          lVar3 = *(longlong *)(lVar3 + 8);
        }
      }
    } while (lVar6 != 0);
  }
  return uVar4;
}



// FUNCTION 143c23e60 FUN_143c23e60 body=610 status=ok
// SIG undefined FUN_143c23e60(void)

void FUN_143c23e60(longlong param_1,int *param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined4 *)(lVar2 + 0x30) = 0;
    *(undefined4 *)(lVar2 + 0x1c) = 0x10000;
    *(undefined4 *)(lVar2 + 0x20) = 0x10000;
    return;
  }
  iVar8 = *param_2;
  uVar9 = 0;
  uVar10 = 0;
  iVar6 = 0;
  iVar7 = 0;
  if (iVar8 == 0) {
    uVar10 = (uint)*(ushort *)(param_1 + 0x68);
    uVar9 = uVar10;
LAB_143c23f15:
    if ((int)uVar9 < 0) {
      uVar9 = -uVar9;
    }
    if ((int)uVar10 < 0) {
      uVar10 = -uVar10;
    }
LAB_143c23f21:
    iVar8 = param_2[1];
    iVar6 = iVar8;
    if (param_2[3] != 0) {
      iVar6 = (param_2[3] * iVar8 + 0x24) / 0x48;
    }
    if (param_2[4] == 0) {
      iVar7 = param_2[2];
    }
    else {
      iVar7 = (param_2[4] * param_2[2] + 0x24) / 0x48;
    }
    if (iVar8 == 0) {
      uVar5 = FUN_143c20070(iVar7,uVar10);
      *(undefined4 *)(lVar2 + 0x20) = uVar5;
      *(undefined4 *)(lVar2 + 0x1c) = uVar5;
      iVar6 = FUN_143c21f00(iVar7,uVar9,uVar10);
      goto LAB_143c23fed;
    }
    iVar8 = FUN_143c20070(iVar6,uVar9);
    *(int *)(lVar2 + 0x1c) = iVar8;
    if (param_2[2] == 0) {
      *(int *)(lVar2 + 0x20) = iVar8;
      iVar7 = FUN_143c21f00(iVar6,uVar10,uVar9);
      goto LAB_143c23fed;
    }
    iVar4 = FUN_143c20070(iVar7);
    *(int *)(lVar2 + 0x20) = iVar4;
    if (*param_2 != 3) goto LAB_143c23fed;
    iVar3 = iVar7;
    if (iVar8 < iVar4) {
      *(int *)(lVar2 + 0x20) = iVar8;
      goto LAB_143c23fed;
    }
  }
  else {
    if (iVar8 == 1) {
      uVar10 = (int)*(short *)(param_1 + 0x6a) - (int)*(short *)(param_1 + 0x6c);
      uVar9 = uVar10;
      goto LAB_143c23f15;
    }
    if (iVar8 == 2) {
      uVar10 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x5c);
      uVar9 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x58);
      goto LAB_143c23f15;
    }
    if (iVar8 == 3) {
      uVar10 = (int)*(short *)(param_1 + 0x6a) - (int)*(short *)(param_1 + 0x6c);
      uVar9 = (int)*(short *)(param_1 + 0x70);
      goto LAB_143c23f15;
    }
    if (iVar8 != 4) goto LAB_143c23f21;
    iVar8 = param_2[1];
    *(int *)(lVar2 + 0x1c) = iVar8;
    iVar4 = param_2[2];
    *(int *)(lVar2 + 0x20) = iVar4;
    iVar3 = 0;
    if (iVar8 != 0) {
      if (iVar4 == 0) {
        *(int *)(lVar2 + 0x20) = iVar8;
        iVar6 = 0;
      }
      goto LAB_143c23fed;
    }
  }
  iVar7 = iVar3;
  *(int *)(lVar2 + 0x1c) = iVar4;
LAB_143c23fed:
  if (*param_2 != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x68);
    iVar6 = FUN_143c22100(uVar1,*(undefined4 *)(lVar2 + 0x1c));
    iVar7 = FUN_143c22100(uVar1,*(undefined4 *)(lVar2 + 0x20));
  }
  *(short *)(lVar2 + 0x18) = (short)(iVar6 + 0x20 >> 6);
  *(short *)(lVar2 + 0x1a) = (short)(iVar7 + 0x20 >> 6);
  iVar8 = FUN_143c22100((int)*(short *)(param_1 + 0x6a),*(undefined4 *)(lVar2 + 0x20));
  *(uint *)(lVar2 + 0x24) = iVar8 + 0x3fU & 0xffffffc0;
  uVar9 = FUN_143c22100((int)*(short *)(param_1 + 0x6c),*(undefined4 *)(lVar2 + 0x20));
  *(uint *)(lVar2 + 0x28) = uVar9 & 0xffffffc0;
  iVar8 = FUN_143c22100((int)*(short *)(param_1 + 0x6e),*(undefined4 *)(lVar2 + 0x20));
  *(uint *)(lVar2 + 0x2c) = iVar8 + 0x20U & 0xffffffc0;
  iVar8 = FUN_143c22100((int)*(short *)(param_1 + 0x70),*(undefined4 *)(lVar2 + 0x1c));
  *(uint *)(lVar2 + 0x30) = iVar8 + 0x20U & 0xffffffc0;
  return;
}



// FUNCTION 143c240d0 FT_Request_Size body=158 status=ok
// SIG undefined FT_Request_Size(void)

undefined8 FT_Request_Size(longlong param_1,int *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined4 local_res8 [8];
  
  if (param_1 == 0) {
    return 0x23;
  }
  if ((((param_2 == (int *)0x0) || (param_2[1] < 0)) || (param_2[2] < 0)) || (4 < *param_2)) {
    uVar1 = 6;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 0x98);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c24120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x80));
      return uVar1;
    }
    if (((*(uint *)(param_1 + 8) & 1) != 0) || ((*(uint *)(param_1 + 8) & 2) == 0)) {
      FUN_143c23e60(param_1);
      return 0;
    }
    uVar1 = FUN_143c21bb0(param_1,param_2,0,local_res8);
    if ((int)uVar1 == 0) {
      uVar1 = FT_Select_Size(param_1,local_res8[0]);
      return uVar1;
    }
  }
  return uVar1;
}



// FUNCTION 143c24170 FT_RoundFix body=31 status=ok
// SIG undefined FT_RoundFix(void)

uint FT_RoundFix(int param_1)

{
  if (-1 < param_1) {
    return param_1 + 0x8000U & 0xffff0000;
  }
  return -(0x8000U - param_1 & 0xffff0000);
}



// FUNCTION 143c24190 FUN_143c24190 body=89 status=ok
// SIG undefined FUN_143c24190(void)

undefined4 FUN_143c24190(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 != 0) {
    if (param_2 == 0x756e6963) {
      plVar3 = *(longlong **)(param_1 + 0x40);
      if ((plVar3 != (longlong *)0x0) &&
         (plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x38) + -1, plVar2 = plVar4,
         plVar3 <= plVar4)) {
        do {
          lVar1 = *plVar2;
          if ((*(int *)(lVar1 + 8) == 0x756e6963) &&
             (((*(short *)(lVar1 + 0xc) == 3 && (*(short *)(lVar1 + 0xe) == 10)) ||
              ((*(short *)(lVar1 + 0xc) == 0 && (*(short *)(lVar1 + 0xe) == 4)))))) {
            *(longlong *)(param_1 + 0x88) = lVar1;
            return 0;
          }
          plVar2 = plVar2 + -1;
        } while (plVar3 <= plVar2);
        for (; plVar3 <= plVar4; plVar4 = plVar4 + -1) {
          if (*(int *)(*plVar4 + 8) == 0x756e6963) {
            *(longlong *)(param_1 + 0x88) = *plVar4;
            return 0;
          }
        }
      }
      return 0x26;
    }
    plVar3 = *(longlong **)(param_1 + 0x40);
    if (plVar3 == (longlong *)0x0) {
      return 0x26;
    }
    plVar4 = plVar3 + *(int *)(param_1 + 0x38);
    for (; plVar3 < plVar4; plVar3 = plVar3 + 1) {
      if (*(int *)(*plVar3 + 8) == param_2) {
        *(longlong *)(param_1 + 0x88) = *plVar3;
        return 0;
      }
    }
  }
  return 6;
}



// FUNCTION 143c241f0 FUN_143c241f0 body=266 status=ok
// SIG undefined FUN_143c241f0(void)

void FUN_143c241f0(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  psVar6 = (short *)((ulonglong)param_2 * 0x10 + *(longlong *)(param_1 + 0x30));
  *(short *)(lVar1 + 0x18) = (short)(*(int *)(psVar6 + 4) + 0x20 >> 6);
  *(short *)(lVar1 + 0x1a) = (short)(*(int *)(psVar6 + 6) + 0x20 >> 6);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar2 = FUN_143c20070(*(undefined4 *)(psVar6 + 4),*(undefined2 *)(param_1 + 0x68));
    *(undefined4 *)(lVar1 + 0x1c) = uVar2;
    uVar3 = FUN_143c20070(*(undefined4 *)(psVar6 + 6),*(undefined2 *)(param_1 + 0x68));
    *(undefined4 *)(lVar1 + 0x20) = uVar3;
    iVar4 = FUN_143c22100((int)*(short *)(param_1 + 0x6a),uVar3);
    *(uint *)(lVar1 + 0x24) = iVar4 + 0x3fU & 0xffffffc0;
    uVar5 = FUN_143c22100((int)*(short *)(param_1 + 0x6c),uVar3);
    *(uint *)(lVar1 + 0x28) = uVar5 & 0xffffffc0;
    iVar4 = FUN_143c22100((int)*(short *)(param_1 + 0x6e),uVar3);
    *(uint *)(lVar1 + 0x2c) = iVar4 + 0x20U & 0xffffffc0;
    iVar4 = FUN_143c22100((int)*(short *)(param_1 + 0x70),uVar2);
    *(uint *)(lVar1 + 0x30) = iVar4 + 0x20U & 0xffffffc0;
    return;
  }
  *(undefined4 *)(lVar1 + 0x1c) = 0x10000;
  *(undefined4 *)(lVar1 + 0x20) = 0x10000;
  *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)(psVar6 + 6);
  *(undefined4 *)(lVar1 + 0x28) = 0;
  *(int *)(lVar1 + 0x2c) = (int)*psVar6 << 6;
  *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(psVar6 + 4);
  return;
}



// FUNCTION 143c24300 FT_Select_Size body=99 status=ok
// SIG undefined FT_Select_Size(void)

undefined8 FT_Select_Size(longlong param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((param_1 == 0) || ((*(byte *)(param_1 + 8) & 2) == 0)) {
    return 0x23;
  }
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x28))) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 0xa0);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143c2433d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x80));
      return uVar1;
    }
    FUN_143c241f0(param_1);
    return 0;
  }
  return 6;
}



// FUNCTION 143c24370 FUN_143c24370 body=345 status=ok
// SIG undefined FUN_143c24370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143c24370(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_2c = param_3;
  if ((param_2 != 0) && (local_2c = param_2, param_3 == 0)) {
    param_3 = param_2;
  }
  local_24 = param_5;
  if ((param_4 != 0) && (local_24 = param_4, param_5 == 0)) {
    param_5 = param_4;
  }
  if (local_2c < 0x40) {
    local_2c = 0x40;
  }
  local_28 = param_3;
  if (param_3 < 0x40) {
    local_28 = 0x40;
  }
  if (local_24 == 0) {
    local_24 = 0x48;
    param_5 = 0x48;
  }
  local_30 = 0;
  if (param_1 == 0) {
    return 0x23;
  }
  if ((local_2c < 0) || (local_28 < 0)) {
    uVar2 = 6;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 0x98);
    local_20 = param_5;
    if (pcVar1 != (code *)0x0) {
      uVar2 = (*pcVar1)(*(undefined8 *)(param_1 + 0x80),&local_30);
      return uVar2;
    }
    if (((*(uint *)(param_1 + 8) & 1) != 0) || ((*(uint *)(param_1 + 8) & 2) == 0)) {
      FUN_143c23e60(param_1,&local_30);
      return 0;
    }
    uVar2 = FUN_143c21bb0(param_1,&local_30,0,local_38);
    if ((int)uVar2 == 0) {
      uVar2 = FT_Select_Size(param_1,local_38[0]);
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 143c244d0 FUN_143c244d0 body=164 status=ok
// SIG undefined FUN_143c244d0(void)

undefined4 FUN_143c244d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_1 == 0) {
    return 0x23;
  }
  plVar3 = *(longlong **)(param_1 + 0x40);
  if ((plVar3 != (longlong *)0x0) && (param_2 != 0)) {
    iVar2 = FT_Get_CMap_Format(param_2);
    if (iVar2 != 0xe) {
      plVar1 = plVar3 + *(int *)(param_1 + 0x38);
      for (; plVar3 < plVar1; plVar3 = plVar3 + 1) {
        if (*plVar3 == param_2) {
          *(longlong *)(param_1 + 0x88) = *plVar3;
          return 0;
        }
      }
    }
    return 6;
  }
  return 0x26;
}



// FUNCTION 143c24580 FUN_143c24580 body=124 status=ok
// SIG undefined FUN_143c24580(void)

void FUN_143c24580(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 0xd0);
    piVar1[6] = 0;
    if (param_2 == (int *)0x0) {
      piVar1[0] = 0x10000;
      piVar1[1] = 0;
      piVar1[2] = 0;
      piVar1[3] = 0x10000;
      param_2 = piVar1;
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)piVar1 = *(undefined8 *)param_2;
      *(undefined8 *)(piVar1 + 2) = uVar2;
    }
    if (((param_2[2] != 0 || param_2[1] != 0) || (*param_2 != 0x10000)) || (param_2[3] != 0x10000))
    {
      piVar1[6] = 1;
    }
    if (param_3 == (int *)0x0) {
      param_3 = piVar1 + 4;
      piVar1[5] = 0;
      *param_3 = 0;
    }
    else {
      *(undefined8 *)(piVar1 + 4) = *(undefined8 *)param_3;
    }
    if (param_3[1] != 0 || *param_3 != 0) {
      piVar1[6] = piVar1[6] | 2;
    }
  }
  return;
}



// FUNCTION 143c24600 FUN_143c24600 body=40 status=ok
// SIG undefined FUN_143c24600(void)

int FUN_143c24600(undefined4 param_1)

{
  undefined8 local_res10;
  
  local_res10 = 0xdbd95b;
  FUN_143c279b0(&local_res10,param_1);
  return local_res10._4_4_ + 0x80 >> 8;
}



// FUNCTION 143c24630 FT_Stream_Close body=18 status=ok
// SIG undefined FT_Stream_Close(void)

void FT_Stream_Close(longlong param_1)

{
  if ((param_1 != 0) && (*(code **)(param_1 + 0x28) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143c2463e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))();
    return;
  }
  return;
}



// FUNCTION 143c24650 FUN_143c24650 body=288 status=ok
// SIG undefined FUN_143c24650(void)

int FUN_143c24650(longlong *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar4 = (ulonglong)param_2;
  if (param_1[4] != 0) {
    lVar1 = param_1[6];
    if (*(uint *)(param_1 + 1) < param_2) {
      iVar5 = 0x55;
    }
    else {
      iVar5 = 0;
      lVar3 = 0;
      if ((int)param_2 < 1) {
        iVar5 = 0;
        if ((int)param_2 < 0) {
          iVar5 = 6;
        }
      }
      else {
        lVar3 = (**(code **)(lVar1 + 8))(lVar1,uVar4);
        if (lVar3 == 0) {
          iVar5 = 0x40;
        }
      }
      *param_1 = lVar3;
      if (iVar5 == 0) {
        uVar2 = (*(code *)param_1[4])(param_1,*(undefined4 *)((longlong)param_1 + 0xc),lVar3,uVar4);
        if (uVar2 < param_2) {
          if (*param_1 != 0) {
            (**(code **)(lVar1 + 0x10))(lVar1);
          }
          *param_1 = 0;
          iVar5 = 0x55;
        }
        *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + uVar2;
        param_1[7] = *param_1;
        param_1[8] = *param_1 + uVar4;
      }
    }
    return iVar5;
  }
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  if ((uVar2 < *(uint *)(param_1 + 1)) && (param_2 <= *(uint *)(param_1 + 1) - uVar2)) {
    param_1[7] = (ulonglong)uVar2 + *param_1;
    param_1[8] = (ulonglong)uVar2 + *param_1 + uVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar2 + param_2;
    return 0;
  }
  return 0x55;
}



// FUNCTION 143c24770 FT_Stream_ExitFrame body=69 status=ok
// SIG undefined FT_Stream_ExitFrame(void)

void FT_Stream_ExitFrame(longlong *param_1)

{
  if (param_1[4] != 0) {
    if (*param_1 != 0) {
      (**(code **)(param_1[6] + 0x10))(param_1[6]);
    }
    *param_1 = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    return;
  }
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}



// FUNCTION 143c247c0 FT_Stream_ExtractFrame body=53 status=ok
// SIG undefined FT_Stream_ExtractFrame(void)

void FT_Stream_ExtractFrame(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_143c24650();
  if (iVar1 == 0) {
    *param_3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 143c24800 FUN_143c24800 body=69 status=ok
// SIG undefined FUN_143c24800(void)

void FUN_143c24800(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    if (*(code **)(param_1 + 0x28) != (code *)0x0) {
      (**(code **)(param_1 + 0x28))();
    }
    if (param_2 == 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_1);
    }
  }
  return;
}



// FUNCTION 143c24850 FT_Stream_GetChar body=27 status=ok
// SIG undefined FT_Stream_GetChar(void)

ulonglong FT_Stream_GetChar(longlong param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x38);
  if (pbVar2 < *(byte **)(param_1 + 0x40)) {
    bVar1 = *pbVar2;
    *(byte **)(param_1 + 0x38) = pbVar2 + 1;
    return (ulonglong)bVar1;
  }
  return (ulonglong)pbVar2 & 0xffffffffffffff00;
}



// FUNCTION 143c24870 FUN_143c24870 body=65 status=ok
// SIG undefined FUN_143c24870(void)

undefined4 FUN_143c24870(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  
  puVar5 = *(undefined1 **)(param_1 + 0x38);
  if (puVar5 + 3 < *(undefined1 **)(param_1 + 0x40)) {
    uVar1 = puVar5[1];
    uVar2 = *puVar5;
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *(undefined1 **)(param_1 + 0x38) = puVar5 + 4;
    return CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar3),uVar4);
  }
  *(undefined1 **)(param_1 + 0x38) = puVar5;
  return 0;
}



// FUNCTION 143c248c0 FUN_143c248c0 body=65 status=ok
// SIG undefined FUN_143c248c0(void)

undefined4 FUN_143c248c0(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x38);
  if ((longlong)puVar1 + 3U < *(ulonglong *)(param_1 + 0x40)) {
    uVar2 = *puVar1;
    *(undefined4 **)(param_1 + 0x38) = puVar1 + 1;
    return uVar2;
  }
  *(undefined4 **)(param_1 + 0x38) = puVar1;
  return 0;
}



// FUNCTION 143c24910 FUN_143c24910 body=49 status=ok
// SIG undefined FUN_143c24910(void)

undefined2 FUN_143c24910(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
  puVar3 = *(undefined1 **)(param_1 + 0x38);
  if (puVar3 + 1 < *(undefined1 **)(param_1 + 0x40)) {
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    *(undefined1 **)(param_1 + 0x38) = puVar3 + 2;
    return CONCAT11(uVar1,uVar2);
  }
  *(undefined1 **)(param_1 + 0x38) = puVar3;
  return 0;
}



// FUNCTION 143c24950 FUN_143c24950 body=50 status=ok
// SIG undefined FUN_143c24950(void)

undefined2 FUN_143c24950(longlong param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  puVar1 = *(undefined2 **)(param_1 + 0x38);
  if ((longlong)puVar1 + 1U < *(ulonglong *)(param_1 + 0x40)) {
    uVar2 = *puVar1;
    *(undefined2 **)(param_1 + 0x38) = puVar1 + 1;
    return uVar2;
  }
  *(undefined2 **)(param_1 + 0x38) = puVar1;
  return 0;
}



// FUNCTION 143c24990 FUN_143c24990 body=303 status=ok
// SIG undefined FUN_143c24990(void)

undefined8 * FUN_143c24990(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)0x0;
  *param_3 = 0;
  if (param_1 == (longlong *)0x0) {
    return (undefined8 *)0x21;
  }
  if (param_2 == (uint *)0x0) {
    return (undefined8 *)&DAT_00000006;
  }
  lVar1 = *param_1;
  puVar3 = (undefined8 *)(**(code **)(lVar1 + 8))(lVar1,0x48);
  if (puVar3 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)&DAT_00000040;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar5 = puVar4;
  }
  if ((int)puVar5 != 0) {
    return puVar5;
  }
  puVar3[6] = lVar1;
  uVar2 = *param_2;
  if ((uVar2 & 1) == 0) {
    if ((uVar2 & 4) != 0) {
      uVar2 = FUN_143c2b800(puVar3,*(undefined8 *)(param_2 + 6));
      puVar5 = (undefined8 *)(ulonglong)uVar2;
      puVar3[3] = *(undefined8 *)(param_2 + 6);
      goto LAB_143c24a81;
    }
    if (((uVar2 & 2) != 0) && (*(longlong *)(param_2 + 8) != 0)) {
      (**(code **)(lVar1 + 0x10))(lVar1,puVar3);
      puVar3 = *(undefined8 **)(param_2 + 8);
      goto LAB_143c24a81;
    }
    puVar5 = (undefined8 *)&DAT_00000006;
  }
  else {
    uVar2 = param_2[4];
    *puVar3 = *(undefined8 *)(param_2 + 2);
    *(uint *)(puVar3 + 1) = uVar2;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
LAB_143c24a81:
    if ((int)puVar5 == 0) {
      puVar3[6] = lVar1;
      puVar4 = puVar3;
      goto LAB_143c24aa1;
    }
  }
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)(lVar1 + 0x10))(lVar1,puVar3);
  }
LAB_143c24aa1:
  *param_3 = puVar4;
  return puVar5;
}



// FUNCTION 143c24ac0 FUN_143c24ac0 body=25 status=ok
// SIG undefined FUN_143c24ac0(void)

void FUN_143c24ac0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 1) = param_3;
  return;
}



// FUNCTION 143c24ae0 FUN_143c24ae0 body=14 status=ok
// SIG undefined FUN_143c24ae0(void)

void FUN_143c24ae0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_143c24af0(param_1,*(undefined4 *)(param_1 + 0xc),param_2,param_3);
  return;
}



// FUNCTION 143c24af0 FUN_143c24af0 body=143 status=ok
// SIG undefined FUN_143c24af0(void)

undefined4 FUN_143c24af0(longlong *param_1,uint param_2,void *param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_2 < *(uint *)(param_1 + 1)) {
    if ((code *)param_1[4] == (code *)0x0) {
      uVar1 = *(uint *)(param_1 + 1) - param_2;
      if (param_4 < uVar1) {
        uVar1 = param_4;
      }
      _guard_xfg_dispatch_icall_nop
                (param_3,(void *)((ulonglong)param_2 + *param_1),(ulonglong)uVar1);
    }
    else {
      uVar1 = (*(code *)param_1[4])(param_1,(ulonglong)param_2);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar1 + param_2;
    uVar2 = 0;
    if (uVar1 < param_4) {
      uVar2 = 0x55;
    }
  }
  else {
    uVar2 = 0x55;
  }
  return uVar2;
}



// FUNCTION 143c24b80 FUN_143c24b80 body=126 status=ok
// SIG undefined FUN_143c24b80(void)

ulonglong FUN_143c24b80(longlong *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  byte local_res8 [8];
  
  *param_2 = 0;
  local_res8[0] = 0;
  if ((code *)param_1[4] == (code *)0x0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    uVar3 = (ulonglong)uVar2;
    if (uVar2 < *(uint *)(param_1 + 1)) {
      bVar1 = *(byte *)((ulonglong)uVar2 + *param_1);
      *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
      return (ulonglong)bVar1;
    }
  }
  else {
    uVar3 = (*(code *)param_1[4])(param_1,*(undefined4 *)((longlong)param_1 + 0xc),local_res8,1);
    if ((int)uVar3 == 1) {
      *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
      return (ulonglong)local_res8[0];
    }
  }
  *param_2 = 0x55;
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 143c24c00 FUN_143c24c00 body=575 status=ok
// SIG undefined FUN_143c24c00(void)

int FUN_143c24c00(longlong param_1,byte *param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  sbyte sVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  
  bVar5 = false;
  if (param_2 == (byte *)0x0) {
    return 6;
  }
  if (param_1 == 0) {
    return 0x28;
  }
  iVar6 = 0;
  bVar2 = *param_2;
  puVar10 = *(uint **)(param_1 + 0x38);
  while (bVar2 - 4 < 0x16) {
    switch(bVar2 - 4) {
    case 0:
      iVar6 = FUN_143c24650(param_1,*(undefined2 *)(param_2 + 2));
      if (iVar6 == 0) {
        puVar11 = *(uint **)(param_1 + 0x38);
        bVar5 = true;
        goto LAB_143c24df1;
      }
      goto LAB_143c24e0b;
    default:
      goto switchD_143c24c8d_caseD_1;
    case 4:
    case 5:
      uVar9 = (uint)(byte)*puVar10;
      sVar8 = 0x18;
      puVar11 = (uint *)((longlong)puVar10 + 1);
      break;
    case 8:
    case 9:
      puVar11 = (uint *)((longlong)puVar10 + 2);
      sVar8 = 0x10;
      uVar9 = (uint)(byte)*puVar10 << 8;
      uVar7 = (uint)*(byte *)((longlong)puVar10 + 1);
      goto LAB_143c24dc1;
    case 10:
    case 0xb:
      puVar11 = (uint *)((longlong)puVar10 + 2);
      sVar8 = 0x10;
      uVar9 = (uint)*(byte *)((longlong)puVar10 + 1) << 8;
      uVar7 = (uint)(byte)*puVar10;
      goto LAB_143c24dc1;
    case 0xc:
    case 0xd:
      puVar11 = puVar10 + 1;
      uVar9 = CONCAT31(CONCAT21(CONCAT11((byte)*puVar10,*(byte *)((longlong)puVar10 + 1)),
                                *(byte *)((longlong)puVar10 + 2)),*(byte *)((longlong)puVar10 + 3));
      sVar8 = 0;
      break;
    case 0xe:
    case 0xf:
      puVar11 = puVar10 + 1;
      uVar9 = *puVar10;
      sVar8 = 0;
      break;
    case 0x10:
    case 0x11:
      uVar4 = CONCAT11((byte)*puVar10,*(byte *)((longlong)puVar10 + 1));
      bVar3 = *(byte *)((longlong)puVar10 + 2);
      goto LAB_143c24db9;
    case 0x12:
    case 0x13:
      uVar4 = *(ushort *)((longlong)puVar10 + 1);
      bVar3 = (byte)*puVar10;
LAB_143c24db9:
      uVar7 = (uint)bVar3;
      puVar11 = (uint *)((longlong)puVar10 + 3);
      sVar8 = 8;
      uVar9 = (uint)uVar4 << 8;
LAB_143c24dc1:
      uVar9 = uVar9 | uVar7;
      break;
    case 0x14:
    case 0x15:
      puVar11 = (uint *)((ulonglong)param_2[1] + (longlong)puVar10);
      if (puVar11 <= *(uint **)(param_1 + 0x40)) {
        if (bVar2 == 0x18) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((ulonglong)*(ushort *)(param_2 + 2) + param_3),puVar10,
                     (ulonglong)param_2[1]);
        }
        goto LAB_143c24df1;
      }
      iVar6 = 0x55;
      goto LAB_143c24e0b;
    }
    if ((bVar2 & 1) != 0) {
      uVar9 = (int)(uVar9 << sVar8) >> sVar8;
    }
    puVar10 = (uint *)((ulonglong)*(ushort *)(param_2 + 2) + param_3);
    if (param_2[1] == 1) {
      *(char *)puVar10 = (char)uVar9;
    }
    else if (param_2[1] == 2) {
      *(short *)puVar10 = (short)uVar9;
    }
    else {
      *puVar10 = uVar9;
    }
LAB_143c24df1:
    pbVar1 = param_2 + 4;
    param_2 = param_2 + 4;
    puVar10 = puVar11;
    bVar2 = *pbVar1;
  }
switchD_143c24c8d_caseD_1:
  *(uint **)(param_1 + 0x38) = puVar10;
LAB_143c24e0b:
  if (bVar5) {
    FT_Stream_ExitFrame(param_1);
  }
  return iVar6;
}



// FUNCTION 143c24ea0 FUN_143c24ea0 body=152 status=ok
// SIG undefined FUN_143c24ea0(void)

undefined4 FUN_143c24ea0(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 local_res8 [8];
  
  uVar4 = 0;
  *param_2 = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar1 + 3) {
LAB_143c24f25:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    puVar3 = (undefined1 *)((ulonglong)uVar1 + *param_1);
    if (puVar3 == (undefined1 *)0x0) goto LAB_143c24f13;
  }
  else {
    iVar2 = (*(code *)param_1[4])(param_1,uVar1,local_res8,4);
    if (iVar2 != 4) goto LAB_143c24f25;
    puVar3 = local_res8;
  }
  uVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]),puVar3[3]);
LAB_143c24f13:
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 4;
  return uVar4;
}



// FUNCTION 143c24f40 FUN_143c24f40 body=152 status=ok
// SIG undefined FUN_143c24f40(void)

undefined4 FUN_143c24f40(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_res8 [2];
  
  uVar4 = 0;
  *param_2 = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar1 + 3) {
LAB_143c24fc5:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    puVar3 = (undefined4 *)((ulonglong)uVar1 + *param_1);
    if (puVar3 == (undefined4 *)0x0) goto LAB_143c24fb3;
  }
  else {
    iVar2 = (*(code *)param_1[4])(param_1,uVar1,local_res8,4);
    if (iVar2 != 4) goto LAB_143c24fc5;
    puVar3 = local_res8;
  }
  uVar4 = *puVar3;
LAB_143c24fb3:
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 4;
  return uVar4;
}



// FUNCTION 143c24fe0 FUN_143c24fe0 body=141 status=ok
// SIG undefined FUN_143c24fe0(void)

uint FUN_143c24fe0(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  uVar4 = 0;
  *param_2 = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar1 + 2) {
LAB_143c2505a:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    puVar3 = (undefined1 *)((ulonglong)uVar1 + *param_1);
    if (puVar3 == (undefined1 *)0x0) goto LAB_143c25048;
  }
  else {
    iVar2 = (*(code *)param_1[4])(param_1,uVar1,local_res8,3);
    if (iVar2 != 3) goto LAB_143c2505a;
    puVar3 = local_res8;
  }
  uVar4 = (uint)CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]);
LAB_143c25048:
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 3;
  return uVar4;
}



// FUNCTION 143c25070 FUN_143c25070 body=143 status=ok
// SIG undefined FUN_143c25070(void)

undefined2 FUN_143c25070(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined1 local_res8 [8];
  
  uVar4 = 0;
  *param_2 = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar1 + 1) {
LAB_143c250e6:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    puVar3 = (undefined1 *)((ulonglong)uVar1 + *param_1);
    if (puVar3 == (undefined1 *)0x0) goto LAB_143c250cf;
  }
  else {
    iVar2 = (*(code *)param_1[4])(param_1,uVar1,local_res8,2);
    if (iVar2 != 2) goto LAB_143c250e6;
    puVar3 = local_res8;
  }
  uVar4 = CONCAT11(*puVar3,puVar3[1]);
LAB_143c250cf:
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 2;
  return uVar4;
}



// FUNCTION 143c25100 FUN_143c25100 body=143 status=ok
// SIG undefined FUN_143c25100(void)

undefined2 FUN_143c25100(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 local_res8 [4];
  
  uVar4 = 0;
  *param_2 = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar1 + 1) {
LAB_143c25176:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    puVar3 = (undefined2 *)((ulonglong)uVar1 + *param_1);
    if (puVar3 == (undefined2 *)0x0) goto LAB_143c2515f;
  }
  else {
    iVar2 = (*(code *)param_1[4])(param_1,uVar1,local_res8,2);
    if (iVar2 != 2) goto LAB_143c25176;
    puVar3 = local_res8;
  }
  uVar4 = *puVar3;
LAB_143c2515f:
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 2;
  return uVar4;
}



// FUNCTION 143c25190 FT_Stream_ReleaseFrame body=61 status=ok
// SIG undefined FT_Stream_ReleaseFrame(void)

void FT_Stream_ReleaseFrame(longlong param_1,longlong *param_2)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    if (*param_2 != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x30) + 0x10))(*(longlong *)(param_1 + 0x30));
    }
    *param_2 = 0;
    return;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 143c251d0 FUN_143c251d0 body=73 status=ok
// SIG undefined FUN_143c251d0(void)

undefined8 FUN_143c251d0(longlong param_1,uint param_2)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    if (param_2 <= *(uint *)(param_1 + 8)) goto LAB_143c25209;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x20))(param_1,param_2,0,0);
    if (iVar1 == 0) {
LAB_143c25209:
      *(uint *)(param_1 + 0xc) = param_2;
      return 0;
    }
  }
  return 0x55;
}



// FUNCTION 143c25220 FUN_143c25220 body=117 status=ok
// SIG undefined FUN_143c25220(void)

undefined8 FUN_143c25220(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 < 0) {
    return 0x55;
  }
  uVar2 = *(int *)(param_1 + 0xc) + param_2;
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    if (uVar2 <= *(uint *)(param_1 + 8)) goto LAB_143c25280;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x20))(param_1,uVar2,0,0);
    if (iVar1 == 0) {
LAB_143c25280:
      *(uint *)(param_1 + 0xc) = uVar2;
      return 0;
    }
  }
  return 0x55;
}



// FUNCTION 143c252a0 FUN_143c252a0 body=117 status=ok
// SIG undefined FUN_143c252a0(void)

ulonglong FUN_143c252a0(longlong *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar1) {
    return 0;
  }
  if ((code *)param_1[4] != (code *)0x0) {
    uVar2 = (*(code *)param_1[4])(param_1,uVar1,param_2,param_3);
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + (int)uVar2;
    return uVar2;
  }
  uVar3 = *(uint *)(param_1 + 1) - uVar1;
  if (param_3 < uVar3) {
    uVar3 = param_3;
  }
  _guard_xfg_dispatch_icall_nop(param_2,(void *)((ulonglong)uVar1 + *param_1),(ulonglong)uVar3);
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + uVar3;
  return (ulonglong)uVar3;
}



// FUNCTION 143c25320 FUN_143c25320 body=54 status=ok
// SIG undefined FUN_143c25320(void)

void FUN_143c25320(undefined4 param_1)

{
  undefined8 local_res10;
  
  local_res10 = 0xdbd95b;
  FUN_143c279b0(&local_res10,param_1);
  FUN_143c20070(local_res10._4_4_ + 0x80 >> 8,(int)local_res10 + 0x80 >> 8);
  return;
}



// FUNCTION 143c25360 FUN_143c25360 body=23 status=ok
// SIG undefined FUN_143c25360(void)

void FUN_143c25360(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1[1] = 0;
    FUN_143c25410(param_1,param_3);
    return;
  }
  return;
}



// FUNCTION 143c25380 FUN_143c25380 body=143 status=ok
// SIG undefined FUN_143c25380(void)

int FUN_143c25380(ulonglong *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong local_res8 [4];
  
  if (param_1 == (ulonglong *)0x0) {
    return 0;
  }
  local_res8[0] = *param_1;
  uVar2 = (uint)(local_res8[0] >> 0x20);
  uVar3 = uVar2;
  if (((uint)local_res8[0] != 0) && (uVar3 = (uint)local_res8[0], uVar2 != 0)) {
    iVar4 = FUN_143c27820(local_res8);
    FUN_143c278c0(local_res8);
    iVar5 = FUN_143c277a0(local_res8[0] & 0xffffffff);
    bVar1 = (byte)iVar4;
    if (iVar4 < 1) {
      return iVar5 << (-bVar1 & 0x1f);
    }
    return (1 << (bVar1 - 1 & 0x1f)) + iVar5 >> (bVar1 & 0x1f);
  }
  return (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
}



// FUNCTION 143c25410 FUN_143c25410 body=209 status=ok
// SIG undefined FUN_143c25410(void)

void FUN_143c25410(ulonglong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res8;
  
  if ((param_1 != (ulonglong *)0x0) && (param_2 != 0)) {
    local_res8 = *param_1;
    if (((int)local_res8 != 0) || ((int)(local_res8 >> 0x20) != 0)) {
      iVar2 = FUN_143c27820(&local_res8);
      FUN_143c279b0(&local_res8,param_2);
      iVar3 = FUN_143c277a0(local_res8 & 0xffffffff);
      iVar4 = FUN_143c277a0(local_res8._4_4_);
      bVar1 = (byte)iVar2;
      if (0 < iVar2) {
        iVar2 = 1 << (bVar1 - 1 & 0x1f);
        *(int *)((longlong)param_1 + 4) = (iVar4 >> 0x1f) + iVar2 + iVar4 >> (bVar1 & 0x1f);
        *(int *)param_1 = (iVar3 >> 0x1f) + iVar2 + iVar3 >> (bVar1 & 0x1f);
        return;
      }
      *(int *)((longlong)param_1 + 4) = iVar4 << (-bVar1 & 0x1f);
      *(int *)param_1 = iVar3 << (-bVar1 & 0x1f);
    }
  }
  return;
}



// FUNCTION 143c254f0 FUN_143c254f0 body=121 status=ok
// SIG undefined FUN_143c254f0(void)

void FUN_143c254f0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != (int *)0x0) && (param_2 != (undefined4 *)0x0)) {
    iVar1 = FUN_143c22100(*param_1,param_2[2]);
    iVar2 = FUN_143c22100(param_1[1],param_2[3]);
    iVar3 = FUN_143c22100(param_1[1],param_2[1]);
    iVar4 = FUN_143c22100(*param_1,*param_2);
    param_1[1] = iVar1 + iVar2;
    *param_1 = iVar3 + iVar4;
  }
  return;
}



// FUNCTION 143c25570 FUN_143c25570 body=153 status=ok
// SIG undefined FUN_143c25570(void)

void FUN_143c25570(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != (int *)0x0) && (param_3 = param_3 << 0x10, param_2 != (undefined4 *)0x0)) {
    iVar1 = FUN_143c21f00(*param_1,param_2[2],param_3);
    iVar2 = FUN_143c21f00(param_1[1],param_2[3],param_3);
    iVar3 = FUN_143c21f00(param_1[1],param_2[1],param_3);
    iVar4 = FUN_143c21f00(*param_1,*param_2,param_3);
    param_1[1] = iVar1 + iVar2;
    *param_1 = iVar3 + iVar4;
  }
  return;
}



// FUNCTION 143c25610 FUN_143c25610 body=461 status=ok
// SIG undefined FUN_143c25610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143c25610(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  size_t _Size;
  uint uVar6;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_e8;
  char local_d8;
  byte local_d7;
  char acStack_d6 [61];
  char local_99;
  char local_8e;
  char local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (param_2 == (longlong *)0x0) {
    uVar4 = 0x55;
  }
  else {
    uVar5 = 0x55;
    local_e8 = param_4;
    if (((code *)param_2[4] == (code *)0x0) ||
       (iVar2 = (*(code *)param_2[4])(param_2,0,0,0), uVar6 = uVar5, iVar2 == 0)) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      uVar6 = 0;
    }
    uVar3 = uVar6;
    if (uVar6 == 0) {
      uVar1 = *(uint *)((longlong)param_2 + 0xc);
      uVar3 = uVar5;
      if (uVar1 < *(uint *)(param_2 + 1)) {
        if ((code *)param_2[4] == (code *)0x0) {
          uVar3 = *(uint *)(param_2 + 1) - uVar1;
          _Size = (size_t)uVar3;
          if (0x80 < uVar3) {
            _Size = 0x80;
          }
          uVar3 = (uint)_Size;
          _guard_xfg_dispatch_icall_nop(&local_d8,(void *)((ulonglong)uVar1 + *param_2),_Size);
        }
        else {
          uVar3 = (*(code *)param_2[4])(param_2,(ulonglong)uVar1,&local_d8,0x80);
        }
        *(uint *)((longlong)param_2 + 0xc) = uVar3 + uVar1;
        if (uVar3 < 0x80) {
          uVar6 = uVar5;
        }
        uVar3 = uVar6;
        if (uVar6 == 0) {
          if ((((local_d8 == '\0') && (local_8e == '\0')) && (local_86 == '\0')) &&
             ((((byte)(local_d7 - 1) < 0x21 && (local_99 == '\0')) && (acStack_d6[local_d7] == '\0')
              ))) {
            local_f8 = local_e8;
            uVar4 = FUN_143c257e0(param_1,param_2,
                                  (CONCAT31(CONCAT21(CONCAT11(local_85,local_84),local_83),local_82)
                                   + 0x7fU & 0xffffff80) + 0x80,param_3);
            return uVar4;
          }
          return 2;
        }
      }
    }
    uVar4 = (ulonglong)uVar3;
  }
  return uVar4;
}



// FUNCTION 143c257e0 FUN_143c257e0 body=385 status=ok
// SIG undefined FUN_143c257e0(void)

ulonglong FUN_143c257e0(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                       undefined8 *param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int local_res8 [2];
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  
  lVar1 = *param_1;
  uVar5 = (undefined4)((ulonglong)&local_38 >> 0x20);
  uVar4 = FUN_143c23a00();
  if ((int)uVar4 == 0) {
    uVar4 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffffb0 >> 8),1);
    iVar2 = FUN_143c235a0(param_1,param_2,local_34,local_38,CONCAT44(uVar5,0x504f5354),uVar4,
                          &local_30,local_res8);
    if (iVar2 == 0) {
      uVar3 = FUN_143c25970(param_1,param_2,local_30,local_res8[0],param_4,param_5);
      uVar4 = (ulonglong)uVar3;
      if (local_30 != 0) {
        (**(code **)(lVar1 + 0x10))(lVar1,local_30);
      }
      if (uVar3 == 0) {
        *(undefined4 *)*param_5 = 1;
      }
    }
    else {
      uVar3 = FUN_143c235a0(param_1,param_2,local_34,local_38,0x73666e74,uVar4 & 0xffffffffffffff00,
                            &local_30,local_res8);
      uVar4 = (ulonglong)uVar3;
      if (uVar3 == 0) {
        uVar3 = FUN_143c25e60(param_1,param_2,local_30,local_res8[0],param_4 % local_res8[0],param_5
                             );
        uVar4 = (ulonglong)uVar3;
        if (local_30 != 0) {
          (**(code **)(lVar1 + 0x10))(lVar1,local_30);
        }
        if (uVar3 == 0) {
          *(int *)*param_5 = local_res8[0];
        }
      }
    }
  }
  return uVar4;
}



// FUNCTION 143c25970 FUN_143c25970 body=1255 status=ok
// SIG undefined FUN_143c25970(void)

undefined4 *
FUN_143c25970(longlong *param_1,longlong *param_2,longlong param_3,int param_4,int param_5,
             undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ushort uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint local_68;
  int local_64;
  uint local_60;
  undefined1 local_5c [4];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  local_48 = *param_1;
  if (1 < param_5 + 1U) {
    return (undefined4 *)0x1;
  }
  puVar14 = (undefined4 *)0x0;
  iVar3 = 0;
  local_50 = (longlong)param_4;
  local_60 = 0;
  puVar4 = puVar14;
  puVar10 = puVar14;
  if (0 < param_4) {
    do {
      uVar15 = *(uint *)(param_3 + (longlong)puVar10 * 4);
      if ((code *)param_2[4] == (code *)0x0) {
        if (uVar15 <= *(uint *)(param_2 + 1)) goto LAB_143c25a26;
        puVar5 = (undefined4 *)0x55;
      }
      else {
        iVar2 = (*(code *)param_2[4])(param_2,uVar15,0);
        if (iVar2 == 0) {
LAB_143c25a26:
          *(uint *)((longlong)param_2 + 0xc) = uVar15;
          puVar5 = puVar14;
        }
        else {
          puVar5 = (undefined4 *)0x55;
        }
      }
      if ((int)puVar5 != 0) {
        return puVar5;
      }
      uVar15 = *(uint *)((longlong)param_2 + 0xc);
      if (*(uint *)(param_2 + 1) <= uVar15 + 3) {
        return (undefined4 *)0x55;
      }
      if ((code *)param_2[4] == (code *)0x0) {
        puVar5 = (undefined4 *)((ulonglong)uVar15 + *param_2);
        local_60 = 0;
        if (puVar5 != (undefined4 *)0x0) goto LAB_143c25a72;
      }
      else {
        iVar2 = (*(code *)param_2[4])(param_2,(ulonglong)uVar15,&param_5);
        if (iVar2 != 4) {
          return (undefined4 *)0x55;
        }
        puVar5 = &param_5;
LAB_143c25a72:
        local_60 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)puVar5,
                                              *(undefined1 *)((longlong)puVar5 + 1)),
                                     *(undefined1 *)((longlong)puVar5 + 2)),
                            *(undefined1 *)((longlong)puVar5 + 3));
      }
      *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 4;
      if ((0x7fffffff < local_60) ||
         (local_60 = (uint)puVar4 + 6 + local_60, local_60 < (uint)puVar4)) {
        return (undefined4 *)&DAT_00000009;
      }
      puVar10 = (undefined4 *)((longlong)puVar10 + 1);
      puVar4 = (undefined4 *)(ulonglong)local_60;
    } while ((longlong)puVar10 < (longlong)param_4);
  }
  uVar15 = local_60 + 2;
  if (uVar15 < 6) {
    return (undefined4 *)0xa;
  }
  uVar11 = 6;
  uVar9 = 6;
  if ((int)uVar15 < 1) {
    puVar4 = puVar14;
    if ((int)uVar15 < 0) {
      puVar10 = (undefined4 *)&DAT_00000006;
      goto LAB_143c25b31;
    }
  }
  else {
    puVar4 = (undefined4 *)(**(code **)(local_48 + 8))(local_48);
    if (puVar4 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)&DAT_00000040;
      goto LAB_143c25b31;
    }
  }
  puVar10 = puVar14;
  if (0 < (int)uVar15) {
    _guard_xfg_dispatch_icall_nop(puVar4,0,(longlong)(int)uVar15);
    puVar10 = (undefined4 *)0x0;
  }
LAB_143c25b31:
  if ((int)puVar10 == 0) {
    *puVar4 = 0x180;
    *(undefined2 *)(puVar4 + 1) = 0;
    uVar13 = 2;
    puVar10 = (undefined4 *)0x1;
    local_68 = 2;
    local_64 = 1;
    local_58 = 0;
    if (0 < local_50) {
      do {
        iVar3 = (int)puVar14;
        uVar9 = (uint)uVar11;
        uVar1 = *(uint *)(param_3 + local_58 * 4);
        uVar13 = (ulonglong)uVar1;
        if ((code *)param_2[4] == (code *)0x0) {
          if (*(uint *)(param_2 + 1) < uVar1) goto LAB_143c25e17;
        }
        else {
          iVar2 = (*(code *)param_2[4])(param_2,uVar13,0);
          if (iVar2 != 0) goto LAB_143c25e17;
        }
        *(uint *)((longlong)param_2 + 0xc) = uVar1;
        uVar8 = 0;
        if (*(uint *)(param_2 + 1) <= uVar1 + 3) goto LAB_143c25e17;
        if ((code *)param_2[4] == (code *)0x0) {
          puVar7 = (undefined1 *)(uVar13 + *param_2);
          if (puVar7 != (undefined1 *)0x0) goto LAB_143c25bff;
        }
        else {
          iVar2 = (*(code *)param_2[4])(param_2,uVar13,local_5c);
          if (iVar2 != 4) goto LAB_143c25e17;
          puVar7 = local_5c;
LAB_143c25bff:
          uVar8 = CONCAT31(CONCAT21(CONCAT11(*puVar7,puVar7[1]),puVar7[2]),puVar7[3]);
        }
        *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 4;
        uVar1 = *(uint *)((longlong)param_2 + 0xc);
        if ((0x7fffffff < uVar8) || (uVar6 = 0, *(uint *)(param_2 + 1) <= uVar1 + 1))
        goto LAB_143c25e17;
        if ((code *)param_2[4] == (code *)0x0) {
          puVar5 = (undefined4 *)((ulonglong)uVar1 + *param_2);
          if (puVar5 != (undefined4 *)0x0) goto LAB_143c25c7f;
        }
        else {
          iVar2 = (*(code *)param_2[4])(param_2,(ulonglong)uVar1,&param_5);
          if (iVar2 != 2) goto LAB_143c25e17;
          puVar5 = &param_5;
LAB_143c25c7f:
          uVar6 = CONCAT11(*(undefined1 *)puVar5,*(undefined1 *)((longlong)puVar5 + 1));
        }
        puVar5 = (undefined4 *)0x0;
        *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 2;
        iVar2 = (int)(uint)uVar6 >> 8;
        if (iVar2 != 0) {
          if (2 < uVar8) {
            puVar5 = (undefined4 *)(ulonglong)(uVar8 - 2);
          }
          iVar12 = (int)puVar5;
          if (iVar2 == local_64) {
            puVar5 = (undefined4 *)(ulonglong)(uint)(iVar3 + iVar12);
          }
          else {
            uVar13 = (ulonglong)local_68;
            if (uVar15 < local_68 + 3) goto LAB_143c25e17;
            *(char *)(uVar13 + (longlong)puVar4) = (char)puVar14;
            *(char *)((ulonglong)(local_68 + 1) + (longlong)puVar4) =
                 (char)((ulonglong)puVar14 >> 8);
            *(char *)((ulonglong)(local_68 + 2) + (longlong)puVar4) =
                 (char)((ulonglong)puVar14 >> 0x10);
            *(char *)((ulonglong)(local_68 + 3) + (longlong)puVar4) =
                 (char)((ulonglong)puVar14 >> 0x18);
            if (iVar2 == 5) goto LAB_143c25d9b;
            if (uVar15 < uVar9 + 6) goto LAB_143c25e17;
            *(undefined1 *)(uVar11 + (longlong)puVar4) = 0x80;
            *(char *)((ulonglong)(uVar9 + 1) + (longlong)puVar4) = (char)(uVar6 >> 8);
            local_68 = uVar9 + 2;
            *(undefined1 *)((ulonglong)local_68 + (longlong)puVar4) = 0;
            *(undefined1 *)((ulonglong)(uVar9 + 3) + (longlong)puVar4) = 0;
            *(undefined1 *)((ulonglong)(uVar9 + 4) + (longlong)puVar4) = 0;
            *(undefined1 *)((ulonglong)(uVar9 + 5) + (longlong)puVar4) = 0;
            uVar11 = (ulonglong)(uVar9 + 6);
            local_64 = iVar2;
          }
          if (((local_60 < (uint)uVar11) || (uVar9 = iVar12 + (uint)uVar11, local_60 < uVar9)) ||
             (iVar3 = FUN_143c24af0(param_2,*(undefined4 *)((longlong)param_2 + 0xc)), iVar3 != 0))
          goto LAB_143c25e17;
          uVar11 = (ulonglong)uVar9;
          puVar14 = puVar5;
        }
        iVar3 = (int)puVar14;
        uVar9 = (uint)uVar11;
        local_58 = local_58 + 1;
      } while (local_58 < local_50);
      uVar13 = (ulonglong)local_68;
    }
LAB_143c25d9b:
    if (uVar9 + 2 <= uVar15) {
      iVar2 = (int)uVar13;
      *(undefined1 *)((ulonglong)uVar9 + (longlong)puVar4) = 0x80;
      *(undefined1 *)((ulonglong)(uVar9 + 1) + (longlong)puVar4) = 3;
      if (iVar2 + 3U <= uVar15) {
        *(char *)(uVar13 + (longlong)puVar4) = (char)iVar3;
        *(char *)((ulonglong)(iVar2 + 1) + (longlong)puVar4) = (char)((uint)iVar3 >> 8);
        *(char *)((ulonglong)(iVar2 + 2) + (longlong)puVar4) = (char)((uint)iVar3 >> 0x10);
        *(char *)((ulonglong)(iVar2 + 3U) + (longlong)puVar4) = (char)((uint)iVar3 >> 0x18);
        puVar4 = (undefined4 *)FUN_143c281f0(param_1,puVar4,uVar9 + 2,0,"type1",param_6);
        return puVar4;
      }
    }
LAB_143c25e17:
    (**(code **)(local_48 + 0x10))(local_48,puVar4);
  }
  return puVar10;
}



// FUNCTION 143c25e60 FUN_143c25e60 body=431 status=ok
// SIG undefined FUN_143c25e60(void)

int FUN_143c25e60(undefined8 *param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                 undefined8 param_6)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  
  bVar3 = false;
  uVar2 = *param_1;
  iVar7 = param_5;
  if (param_5 == -1) {
    iVar7 = 0;
  }
  if (param_4 <= iVar7) {
    return 1;
  }
  uVar1 = *(uint *)(param_3 + (longlong)iVar7 * 4);
  if (*(code **)(param_2 + 0x20) == (code *)0x0) {
    if (*(uint *)(param_2 + 8) < uVar1) {
      param_5 = 0x55;
      goto LAB_143c25ee4;
    }
  }
  else {
    iVar5 = (**(code **)(param_2 + 0x20))(param_2,uVar1,0,0);
    if (iVar5 != 0) {
      param_5 = 0x55;
      goto LAB_143c25ee4;
    }
  }
  *(uint *)(param_2 + 0xc) = uVar1;
  param_5 = 0;
LAB_143c25ee4:
  iVar5 = param_5;
  if ((param_5 == 0) &&
     (iVar6 = FUN_143c24ea0(param_2,&param_5), uVar4 = param_6, iVar5 = param_5, param_5 == 0)) {
    if (iVar6 == -1) {
      iVar5 = 1;
    }
    else {
      iVar5 = FUN_143c28050(param_1,param_2,iVar7,0,0,param_6);
      if ((((iVar5 != 0) && (param_5 = iVar5, iVar7 = FUN_143c251d0(param_2,uVar1 + 4), iVar7 == 0))
          && (piVar8 = (int *)FUN_143c271e0(uVar2,iVar6,&param_5), iVar5 = param_5, param_5 == 0))
         && (iVar5 = FUN_143c24af0(param_2,*(undefined4 *)(param_2 + 0xc),piVar8,iVar6), iVar5 == 0)
         ) {
        if ((4 < iVar6) && (*piVar8 == 0x4f54544f)) {
          bVar3 = true;
        }
        pcVar9 = "truetype";
        if (bVar3) {
          pcVar9 = "cff";
        }
        iVar5 = FUN_143c281f0(param_1,piVar8,iVar6,0,pcVar9,uVar4);
      }
    }
  }
  return iVar5;
}



// FUNCTION 143c26010 FUN_143c26010 body=306 status=ok
// SIG undefined FUN_143c26010(void)

undefined8 FUN_143c26010(longlong param_1,uint *param_2,uint param_3,ulonglong param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  if ((param_4 & 1) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x80);
    if (lVar1 == 0) {
      return 0x24;
    }
    if ((param_4 & 0x10) == 0) {
      uVar8 = *(uint *)(lVar1 + 0x1c);
    }
    else {
      uVar8 = *(uint *)(lVar1 + 0x20);
    }
    if (param_3 != 0) {
      uVar7 = (ulonglong)param_3;
      do {
        uVar2 = *param_2;
        iVar6 = 1;
        if ((uVar2 != 0) && (uVar8 != 0x40)) {
          if ((int)uVar2 < 0) {
            uVar2 = -uVar2;
            iVar6 = -1;
          }
          uVar10 = uVar8;
          if ((int)uVar8 < 0) {
            uVar10 = -uVar8;
            iVar6 = -iVar6;
          }
          if (uVar2 + uVar10 < 0x1fb67) {
            uVar2 = uVar2 * uVar10 + 0x20 >> 6;
          }
          else {
            uVar4 = (uVar10 & 0xffff) * (uVar2 >> 0x10);
            uVar5 = (uVar10 >> 0x10) * (uVar2 & 0xffff) + uVar4;
            uVar9 = (uVar10 & 0xffff) * (uVar2 & 0xffff) + uVar5 * 0x10000;
            uVar3 = uVar9 + 0x20;
            iVar11 = (uint)(uVar5 < uVar4) * 0x10000 + (uVar10 >> 0x10) * (uVar2 >> 0x10) +
                     (uVar5 >> 0x10) + (uint)(uVar9 < uVar5 * 0x10000) + (uint)(uVar3 < uVar9);
            if (iVar11 == 0) {
              uVar2 = uVar3 >> 6;
            }
            else {
              uVar2 = FUN_143c26960(iVar11,uVar3,0x40);
            }
          }
          if (iVar6 < 0) {
            uVar2 = -uVar2;
          }
        }
        *param_2 = uVar2;
        param_2 = param_2 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return 0;
}



// FUNCTION 143c26150 FUN_143c26150 body=186 status=ok
// SIG undefined FUN_143c26150(void)

void FUN_143c26150(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar4;
  
  if (param_1 != 0) {
    uVar4 = 0;
    uVar5 = uVar4;
    if (0 < *(int *)(param_1 + 0x38)) {
      do {
        plVar1 = *(longlong **)(uVar5 + *(longlong *)(param_1 + 0x40));
        lVar2 = *(longlong *)(*plVar1 + 0x98);
        if (*(code **)(plVar1[2] + 0x10) != (code *)0x0) {
          (**(code **)(plVar1[2] + 0x10))(plVar1);
        }
        (**(code **)(lVar2 + 0x10))(lVar2,plVar1);
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        *(undefined8 *)(uVar5 + *(longlong *)(param_1 + 0x40)) = 0;
        uVar5 = uVar5 + 8;
      } while ((int)uVar3 < *(int *)(param_1 + 0x38));
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      (**(code **)(param_2 + 0x10))(param_2);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 143c26210 FUN_143c26210 body=524 status=ok
// SIG undefined FUN_143c26210(void)

void FUN_143c26210(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar2 = *(longlong *)(param_3 + 0x18);
  if (*(code **)(param_2 + 0xc0) != (code *)0x0) {
    (**(code **)(param_2 + 0xc0))(*(undefined8 *)(param_2 + 0xb8));
  }
  lVar3 = *(longlong *)(param_2 + 0x78);
  do {
    if (lVar3 == 0) {
      if (((longlong *)(param_2 + 0xa8) != (longlong *)0x0) && (param_1 != 0)) {
        lVar3 = *(longlong *)(param_2 + 0xa8);
        while (lVar3 != 0) {
          lVar4 = *(longlong *)(lVar3 + 8);
          lVar5 = *(longlong *)(lVar3 + 0x10);
          if (*(code **)(lVar5 + 0x10) != (code *)0x0) {
            (**(code **)(lVar5 + 0x10))(lVar5);
          }
          pcVar6 = *(code **)(*(longlong *)(param_3 + 0x18) + 0x60);
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(lVar5);
          }
          if (*(longlong *)(lVar5 + 0x38) != 0) {
            (**(code **)(param_1 + 0x10))(param_1);
          }
          *(undefined8 *)(lVar5 + 0x38) = 0;
          (**(code **)(param_1 + 0x10))(param_1,lVar5);
          (**(code **)(param_1 + 0x10))(param_1,lVar3);
          lVar3 = lVar4;
        }
        *(undefined8 *)(param_2 + 0xa8) = 0;
        *(undefined8 *)(param_2 + 0xb0) = 0;
      }
      *(undefined8 *)(param_2 + 0x80) = 0;
      if (*(code **)(param_2 + 0x50) != (code *)0x0) {
        (**(code **)(param_2 + 0x50))(param_2);
      }
      FUN_143c26150(param_2,param_1);
      pcVar6 = *(code **)(lVar2 + 0x50);
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(param_2);
      }
      uVar1 = *(uint *)(param_2 + 8);
      lVar2 = *(longlong *)(param_2 + 0xa0);
      if (lVar2 != 0) {
        lVar3 = *(longlong *)(lVar2 + 0x30);
        if (*(code **)(lVar2 + 0x28) != (code *)0x0) {
          (**(code **)(lVar2 + 0x28))(lVar2);
        }
        if ((uVar1 >> 10 & 1) == 0) {
          (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
        }
      }
      *(undefined8 *)(param_2 + 0xa0) = 0;
      if (*(longlong *)(param_2 + 0xd0) != 0) {
        (**(code **)(param_1 + 0x10))(param_1);
        *(undefined8 *)(param_2 + 0xd0) = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000143c26419. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x10))(param_1,param_2);
      return;
    }
    lVar3 = *(longlong *)(param_2 + 0x78);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar3 + 8);
      lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x90) + 0x10);
      lVar9 = *(longlong *)(lVar4 + 0x78);
      lVar8 = 0;
      while (lVar7 = lVar9, lVar7 != 0) {
        if (lVar7 == lVar3) {
          if (lVar8 == 0) {
            *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar7 + 0x10);
          }
          else {
            *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar7 + 0x10);
          }
          if (*(code **)(lVar3 + 0x28) != (code *)0x0) {
            (**(code **)(lVar3 + 0x28))(lVar3);
          }
          ft_glyphslot_done(lVar3);
          (**(code **)(lVar5 + 0x10))(lVar5);
          break;
        }
        lVar8 = lVar7;
        lVar9 = *(longlong *)(lVar7 + 0x10);
      }
    }
    lVar3 = *(longlong *)(param_2 + 0x78);
  } while( true );
}



// FUNCTION 143c26420 FUN_143c26420 body=107 status=ok
// SIG undefined FUN_143c26420(void)

void FUN_143c26420(longlong param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
  pcVar1 = *(code **)(*(longlong *)(param_3 + 0x18) + 0x60);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_2);
  }
  if (*(longlong *)(param_2 + 0x38) != 0) {
    (**(code **)(param_1 + 0x10))(param_1);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x000143c26488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(param_1,param_2);
  return;
}



// FUNCTION 143c26490 find_unicode_charmap body=143 status=ok
// SIG undefined find_unicode_charmap(void)

undefined8 find_unicode_charmap(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if ((plVar1 != (longlong *)0x0) &&
     (plVar4 = plVar1 + (longlong)*(int *)(param_1 + 0x38) + -1, plVar3 = plVar4, plVar1 <= plVar4))
  {
    do {
      lVar2 = *plVar3;
      if ((*(int *)(lVar2 + 8) == 0x756e6963) &&
         (((*(short *)(lVar2 + 0xc) == 3 && (*(short *)(lVar2 + 0xe) == 10)) ||
          ((*(short *)(lVar2 + 0xc) == 0 && (*(short *)(lVar2 + 0xe) == 4)))))) {
        *(longlong *)(param_1 + 0x88) = lVar2;
        return 0;
      }
      plVar3 = plVar3 + -1;
    } while (plVar1 <= plVar3);
    for (; plVar1 <= plVar4; plVar4 = plVar4 + -1) {
      if (*(int *)(*plVar4 + 8) == 0x756e6963) {
        *(longlong *)(param_1 + 0x88) = *plVar4;
        return 0;
      }
    }
  }
  return 0x26;
}



// FUNCTION 143c26520 FUN_143c26520 body=179 status=ok
// SIG undefined FUN_143c26520(void)

longlong FUN_143c26520(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res8 [4];
  int local_resc;
  
  plVar7 = *(longlong **)(param_1 + 0x40);
  if (plVar7 == (longlong *)0x0) {
    return 0;
  }
  plVar1 = plVar7 + *(int *)(param_1 + 0x38);
  do {
    if (plVar1 <= plVar7) {
      return 0;
    }
    plVar2 = (longlong *)*plVar7;
    if ((((*(short *)((longlong)plVar2 + 0xc) == 0) && (*(short *)((longlong)plVar2 + 0xe) == 5)) &&
        (plVar2 != (longlong *)0x0)) && (*plVar2 != 0)) {
      plVar3 = *(longlong **)(*plVar2 + 0x90);
      pcVar4 = *(code **)(*plVar3 + 0x30);
      if (((pcVar4 != (code *)0x0) &&
          (puVar6 = (undefined8 *)(*pcVar4)(plVar3,"tt-cmaps"), puVar6 != (undefined8 *)0x0)) &&
         ((iVar5 = (*(code *)*puVar6)(plVar2,local_res8), iVar5 == 0 && (local_resc == 0xe)))) {
        return *plVar7;
      }
    }
    plVar7 = plVar7 + 1;
  } while( true );
}



// FUNCTION 143c265e0 FUN_143c265e0 body=308 status=ok
// SIG undefined FUN_143c265e0(void)

ulonglong FUN_143c265e0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  plVar2 = (longlong *)param_1[1];
  lVar3 = *plVar2;
  plVar7 = (longlong *)(**(code **)(lVar3 + 8))(lVar3,0x18);
  if (plVar7 == (longlong *)0x0) {
    uVar8 = 0x40;
  }
  else {
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar7[2] = 0;
    uVar8 = 0;
  }
  if ((int)uVar8 == 0) {
    lVar4 = *param_1;
    param_1[3] = lVar4;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar4 + 0x38);
    if ((*(int *)(lVar4 + 0x38) == 0x6f75746c) &&
       (pcVar5 = *(code **)(*(longlong *)(lVar4 + 0x60) + 8), pcVar5 != (code *)0x0)) {
      uVar6 = (*pcVar5)(lVar3,param_1 + 0xc);
      if (uVar6 != 0) {
        if (plVar7 == (longlong *)0x0) {
          return (ulonglong)uVar6;
        }
        (**(code **)(lVar3 + 0x10))(lVar3,plVar7);
        return (ulonglong)uVar6;
      }
      param_1[0xd] = *(longlong *)(*(longlong *)(lVar4 + 0x60) + 0x20);
      param_1[0xe] = *(longlong *)(lVar4 + 0x40);
      uVar8 = 0;
    }
    plVar1 = plVar2 + 0x23;
    plVar7[2] = (longlong)param_1;
    if (plVar1 != (longlong *)0x0) {
      lVar3 = plVar2[0x24];
      plVar7[1] = 0;
      *plVar7 = lVar3;
      if (lVar3 == 0) {
        *plVar1 = (longlong)plVar7;
      }
      else {
        *(longlong **)(lVar3 + 8) = plVar7;
      }
      plVar2[0x24] = (longlong)plVar7;
    }
    lVar3 = *plVar1;
    while ((uVar9 = 0, lVar3 != 0 &&
           (uVar9 = *(ulonglong *)(lVar3 + 0x10), *(int *)(uVar9 + 0x20) != 0x6f75746c))) {
      lVar3 = *(longlong *)(lVar3 + 8);
    }
    plVar2[0x25] = uVar9;
  }
  return uVar8;
}



// FUNCTION 143c26720 FUN_143c26720 body=61 status=ok
// SIG undefined FUN_143c26720(void)

void FUN_143c26720(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0x98);
  if (*(code **)(param_1[2] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[2] + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000143c2675a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
  return;
}



// FUNCTION 143c26760 FUN_143c26760 body=188 status=ok
// SIG undefined FUN_143c26760(void)

bool FUN_143c26760(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  iVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  if (iVar1 < iVar2) {
    iVar2 = (iVar1 * 3 >> 3) + iVar2;
  }
  else {
    iVar2 = (iVar2 * 3 >> 3) + iVar1;
  }
  iVar4 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f);
  iVar1 = (param_4 ^ (int)param_4 >> 0x1f) - ((int)param_4 >> 0x1f);
  if (iVar1 < iVar4) {
    iVar4 = (iVar1 * 3 >> 3) + iVar4;
  }
  else {
    iVar4 = (iVar4 * 3 >> 3) + iVar1;
  }
  uVar3 = (int)(param_1 + param_3) >> 0x1f;
  iVar5 = (param_1 + param_3 ^ uVar3) - uVar3;
  uVar3 = (int)(param_2 + param_4) >> 0x1f;
  iVar1 = (param_2 + param_4 ^ uVar3) - uVar3;
  if (iVar1 < iVar5) {
    iVar5 = (iVar1 * 3 >> 3) + iVar5;
  }
  else {
    iVar5 = (iVar5 * 3 >> 3) + iVar1;
  }
  return (iVar4 - iVar5) + iVar2 < iVar5 >> 4;
}



// FUNCTION 143c26820 FUN_143c26820 body=317 status=ok
// SIG undefined FUN_143c26820(void)

uint FUN_143c26820(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    bVar6 = (int)param_1 < 0;
    param_1 = param_4;
    if (bVar6) {
      return -param_4;
    }
  }
  else if (param_1 == 0) {
    param_1 = param_3;
    if (-1 < (int)param_2) {
      return -param_3;
    }
  }
  else if (param_4 == 0) {
    param_1 = param_2;
    if ((int)param_3 < 0) {
      return -param_2;
    }
  }
  else if (param_3 == 0) {
    if (-1 < (int)param_4) {
      return -param_1;
    }
  }
  else {
    uVar1 = (param_4 & 0xffff) * (param_1 >> 0x10);
    uVar2 = (param_4 >> 0x10) * (param_1 & 0xffff) + uVar1;
    uVar3 = (param_4 & 0xffff) * (param_1 & 0xffff) + uVar2 * 0x10000;
    uVar4 = (uint)(uVar2 < uVar1) * 0x10000 + (param_4 >> 0x10) * (param_1 >> 0x10) +
            (uVar2 >> 0x10) + (uint)(uVar3 < uVar2 * 0x10000);
    uVar1 = (param_3 & 0xffff) * (param_2 >> 0x10);
    uVar2 = (param_3 >> 0x10) * (param_2 & 0xffff) + uVar1;
    uVar5 = (param_3 & 0xffff) * (param_2 & 0xffff) + uVar2 * 0x10000;
    uVar1 = (uint)(uVar2 < uVar1) * 0x10000 + (param_3 >> 0x10) * (param_2 >> 0x10) +
            (uVar2 >> 0x10) + (uint)(uVar5 < uVar2 * 0x10000);
    if (uVar4 <= uVar1) {
      if (uVar4 < uVar1) {
        return 0xffffffff;
      }
      if (uVar3 <= uVar5) {
        return -(uint)(uVar3 < uVar5);
      }
    }
    param_1 = 1;
  }
  return param_1;
}



// FUNCTION 143c26960 FUN_143c26960 body=165 status=ok
// SIG undefined FUN_143c26960(void)

ulonglong FUN_143c26960(uint param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  
  if (param_3 <= param_1) {
    return 0x7fffffff;
  }
  iVar7 = 0;
  uVar3 = param_1;
  if ((param_1 & 0xffff0000) != 0) {
    uVar3 = param_1 >> 0x10;
    iVar7 = 0x10;
  }
  if ((uVar3 & 0xff00) != 0) {
    uVar3 = uVar3 >> 8;
    iVar7 = iVar7 + 8;
  }
  if ((uVar3 & 0xf0) != 0) {
    uVar3 = uVar3 >> 4;
    iVar7 = iVar7 + 4;
  }
  if ((uVar3 & 0xc) != 0) {
    uVar3 = uVar3 >> 2;
    iVar7 = iVar7 + 2;
  }
  if ((uVar3 & 2) != 0) {
    iVar7 = iVar7 + 1;
  }
  iVar8 = 0x20 - (0x1f - iVar7);
  bVar6 = (byte)(0x1f - iVar7);
  bVar2 = bVar6 & 0x1f;
  uVar3 = param_2 >> ((byte)iVar8 & 0x1f) | param_1 << bVar2;
  param_2 = param_2 << (bVar6 & 0x1f);
  uVar1 = CONCAT44(0 << bVar2,uVar3) / (ulonglong)param_3;
  uVar5 = uVar1 & 0xffffffff;
  uVar3 = uVar3 - (int)uVar1 * param_3;
  do {
    uVar4 = (int)uVar5 * 2;
    uVar3 = uVar3 * 2 | param_2 >> 0x1f;
    param_2 = param_2 * 2;
    if (param_3 <= uVar3) {
      uVar3 = uVar3 - param_3;
      uVar4 = uVar4 | 1;
    }
    uVar5 = (ulonglong)uVar4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  return uVar5;
}



// FUNCTION 143c26a10 FUN_143c26a10 body=166 status=ok
// SIG undefined FUN_143c26a10(void)

undefined4 FUN_143c26a10(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  void *_Dst;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x98);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0xf0) + 8);
  if ((uVar1 & 1) == 0) {
    *(uint *)(*(longlong *)(param_1 + 0xf0) + 8) = uVar1 | 1;
  }
  else {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  _Dst = (void *)0x0;
  if (param_2 < 1) {
    if (param_2 < 0) {
      uVar3 = 6;
      goto LAB_143c26a9d;
    }
  }
  else {
    _Dst = (void *)(**(code **)(lVar2 + 8))(lVar2);
    if (_Dst == (void *)0x0) {
      *(undefined8 *)(param_1 + 0x78) = 0;
      return 0x40;
    }
  }
  if (0 < param_2) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)param_2);
  }
  uVar3 = 0;
LAB_143c26a9d:
  *(void **)(param_1 + 0x78) = _Dst;
  return uVar3;
}



// FUNCTION 143c26ac0 ft_glyphslot_clear body=205 status=ok
// SIG undefined ft_glyphslot_clear(void)

void ft_glyphslot_clear(longlong param_1)

{
  uint *puVar1;
  
  if ((*(longlong *)(param_1 + 0xf0) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0xf0) + 8) & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x98) + 0x10))();
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  return;
}



// FUNCTION 143c26b90 ft_glyphslot_done body=244 status=ok
// SIG undefined ft_glyphslot_done(void)

void ft_glyphslot_done(longlong param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x90);
  lVar3 = puVar2[2];
  if (*(code **)(puVar2[3] + 0x70) != (code *)0x0) {
    (**(code **)(puVar2[3] + 0x70))();
  }
  if ((*(longlong *)(param_1 + 0xf0) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0xf0) + 8) & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x98);
    if (*(longlong *)(param_1 + 0x78) != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
    if ((*(uint *)*puVar2 & 0x200) == 0) {
      plVar5 = (longlong *)**(longlong **)(param_1 + 0xf0);
      if (plVar5 != (longlong *)0x0) {
        lVar4 = *plVar5;
        FUN_143c21480(plVar5);
        (**(code **)(lVar4 + 0x10))(lVar4,plVar5);
      }
      **(undefined8 **)(param_1 + 0xf0) = 0;
    }
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3);
    }
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 143c26c90 ft_glyphslot_free_bitmap body=93 status=ok
// SIG undefined ft_glyphslot_free_bitmap(void)

void ft_glyphslot_free_bitmap(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0xf0) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0xf0) + 8) & 1) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x98);
    if (*(longlong *)(param_1 + 0x78) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffe;
    return;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 143c26cf0 FUN_143c26cf0 body=176 status=ok
// SIG undefined FUN_143c26cf0(void)

void FUN_143c26cf0(longlong param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (param_2 == '\0') {
    uVar2 = *(uint *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xffffffc0;
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xffffffc0;
    uVar4 = uVar2 & 0xffffffc0;
    *(uint *)(param_1 + 0x38) = uVar4;
    uVar3 = iVar1 + 0x3fU & 0xffffffc0;
    *(uint *)(param_1 + 0x3c) = uVar3;
    *(uint *)(param_1 + 0x30) = (*(int *)(param_1 + 0x30) + 0x3f + uVar2 & 0xffffffc0) - uVar4;
    *(uint *)(param_1 + 0x34) = uVar3 - (iVar1 - *(int *)(param_1 + 0x34) & 0xffffffc0U);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x44);
    uVar3 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffffc0;
    *(uint *)(param_1 + 0x3c) = iVar1 + 0x3fU & 0xffffffc0;
    uVar5 = uVar2 & 0xffffffc0;
    *(uint *)(param_1 + 0x44) = uVar5;
    uVar4 = uVar3 & 0xffffffc0;
    *(uint *)(param_1 + 0x30) = (uVar2 + 0x3f + *(int *)(param_1 + 0x30) & 0xffffffc0) - uVar5;
    *(uint *)(param_1 + 0x48) = uVar4;
    *(uint *)(param_1 + 0x34) = (*(int *)(param_1 + 0x34) + 0x3f + uVar3 & 0xffffffc0) - uVar4;
  }
  *(uint *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0x20U & 0xffffffc0;
  *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x20U & 0xffffffc0;
  return;
}



// FUNCTION 143c26da0 ft_glyphslot_init body=185 status=ok
// SIG undefined ft_glyphslot_init(void)

ulonglong ft_glyphslot_init(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar6 = 0;
  puVar1 = *(undefined8 **)(param_1[1] + 0x90);
  lVar2 = puVar1[2];
  lVar3 = puVar1[3];
  *param_1 = puVar1[1];
  puVar4 = (undefined8 *)(**(code **)(lVar2 + 8))(lVar2,0x30);
  if (puVar4 == (undefined8 *)0x0) {
    uVar6 = 0x40;
  }
  else {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
  }
  if (uVar6 == 0) {
    param_1[0x1e] = puVar4;
    if ((*(uint *)*puVar1 & 0x200) == 0) {
      uVar6 = FUN_143c213a0(lVar2);
    }
    if ((uVar6 == 0) && (*(code **)(lVar3 + 0x68) != (code *)0x0)) {
      uVar5 = (**(code **)(lVar3 + 0x68))(param_1);
      return uVar5;
    }
  }
  return (ulonglong)uVar6;
}



// FUNCTION 143c26e60 ft_glyphslot_set_bitmap body=118 status=ok
// SIG undefined ft_glyphslot_set_bitmap(void)

void ft_glyphslot_set_bitmap(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0xf0) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0xf0) + 8) & 1) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x98);
    if (*(longlong *)(param_1 + 0x78) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffe;
    *(undefined8 *)(param_1 + 0x78) = param_2;
    return;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x78) = param_2;
  return;
}



// FUNCTION 143c26ee0 FUN_143c26ee0 body=758 status=ok
// SIG undefined FUN_143c26ee0(void)

int FUN_143c26ee0(longlong *param_1,int param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  int local_res8 [2];
  int local_res18;
  undefined1 local_res20 [8];
  
  uVar7 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  iVar1 = 0;
  uVar6 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar6 + 3) {
    return 0x55;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    piVar4 = (int *)((ulonglong)uVar6 + *param_1);
    if (piVar4 != (int *)0x0) goto LAB_143c26f4b;
  }
  else {
    iVar1 = (*(code *)param_1[4])(param_1,(ulonglong)uVar6,local_res8,4);
    if (iVar1 != 4) {
      return 0x55;
    }
    piVar4 = local_res8;
LAB_143c26f4b:
    iVar1 = CONCAT31(CONCAT21(CONCAT11((char)*piVar4,*(undefined1 *)((longlong)piVar4 + 1)),
                              *(undefined1 *)((longlong)piVar4 + 2)),
                     *(undefined1 *)((longlong)piVar4 + 3));
  }
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 4;
  uVar6 = *(uint *)((longlong)param_1 + 0xc);
  if (iVar1 != 0x74797031) {
    return 2;
  }
  if (*(uint *)(param_1 + 1) <= uVar6 + 1) {
    return 0x55;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    piVar4 = (int *)((ulonglong)uVar6 + *param_1);
    if (piVar4 != (int *)0x0) goto LAB_143c26fc8;
  }
  else {
    iVar1 = (*(code *)param_1[4])(param_1,(ulonglong)uVar6,local_res8,2);
    if (iVar1 != 2) {
      return 0x55;
    }
    piVar4 = local_res8;
LAB_143c26fc8:
    uVar7 = (uint)CONCAT11((char)*piVar4,*(undefined1 *)((longlong)piVar4 + 1));
  }
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 2;
  uVar6 = *(int *)((longlong)param_1 + 0xc) + 6;
  if ((code *)param_1[4] == (code *)0x0) {
    if (uVar6 <= *(uint *)(param_1 + 1)) goto LAB_143c2700e;
  }
  else {
    iVar1 = (*(code *)param_1[4])(param_1,uVar6,0,0);
    if (iVar1 == 0) {
LAB_143c2700e:
      iVar1 = -1;
      *(uint *)((longlong)param_1 + 0xc) = uVar6;
      *param_5 = 0;
      local_res18 = 0;
      if (uVar7 != 0) {
        do {
          iVar2 = 0;
          uVar6 = *(uint *)((longlong)param_1 + 0xc);
          if (*(uint *)(param_1 + 1) <= uVar6 + 3) {
            return 0x55;
          }
          if ((code *)param_1[4] == (code *)0x0) {
            puVar5 = (undefined1 *)((ulonglong)uVar6 + *param_1);
            if (puVar5 != (undefined1 *)0x0) goto LAB_143c27089;
          }
          else {
            iVar2 = (*(code *)param_1[4])(param_1,uVar6,local_res20,4);
            if (iVar2 != 4) {
              return 0x55;
            }
            puVar5 = local_res20;
LAB_143c27089:
            iVar2 = CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]);
          }
          *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 4;
          uVar6 = *(int *)((longlong)param_1 + 0xc) + 4;
          if ((code *)param_1[4] == (code *)0x0) {
            if (uVar6 <= *(uint *)(param_1 + 1)) goto LAB_143c270e0;
            local_res8[0] = 0x55;
          }
          else {
            iVar3 = (*(code *)param_1[4])(param_1,uVar6,0,0);
            if (iVar3 == 0) {
LAB_143c270e0:
              *(uint *)((longlong)param_1 + 0xc) = uVar6;
              local_res8[0] = 0;
            }
            else {
              local_res8[0] = 0x55;
            }
          }
          if (local_res8[0] != 0) {
            return local_res8[0];
          }
          iVar3 = FUN_143c24ea0(param_1,local_res8);
          *param_3 = iVar3;
          if (local_res8[0] != 0) {
            return local_res8[0];
          }
          iVar3 = FUN_143c24ea0(param_1,local_res8);
          *param_4 = iVar3;
          if (local_res8[0] != 0) {
            return local_res8[0];
          }
          if (iVar2 == 0x43494420) {
            *param_3 = *param_3 + 0x16;
            *param_4 = *param_4 + -0x16;
            *param_5 = 1;
joined_r0x000143c2714a:
            iVar1 = iVar1 + 1;
            if (param_2 < 0) {
              return 0;
            }
LAB_143c27191:
            if (iVar1 == param_2) {
              return 0;
            }
          }
          else {
            if (iVar2 == 0x54595031) {
              *param_3 = *param_3 + 0x18;
              *param_4 = *param_4 + -0x18;
              *param_5 = 0;
              goto joined_r0x000143c2714a;
            }
            if (-1 < param_2) goto LAB_143c27191;
          }
          local_res18 = local_res18 + 1;
        } while (local_res18 < (int)uVar7);
      }
      return 0x8e;
    }
  }
  return 0x55;
}



// FUNCTION 143c271e0 FUN_143c271e0 body=132 status=ok
// SIG undefined FUN_143c271e0(void)

void * FUN_143c271e0(longlong param_1,int param_2,undefined4 *param_3)

{
  void *_Dst;
  
  _Dst = (void *)0x0;
  if (param_2 < 1) {
    if (param_2 < 0) {
      *param_3 = 6;
      return (void *)0x0;
    }
  }
  else {
    _Dst = (void *)(**(code **)(param_1 + 8))();
    if (_Dst == (void *)0x0) {
      *param_3 = 0x40;
      return (void *)0x0;
    }
  }
  if (0 < param_2) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)param_2);
  }
  *param_3 = 0;
  return _Dst;
}



// FUNCTION 143c27270 FUN_143c27270 body=119 status=ok
// SIG undefined FUN_143c27270(void)

void * FUN_143c27270(longlong param_1,void *param_2,uint param_3,undefined4 *param_4)

{
  void *_Dst;
  
  _Dst = (void *)0x0;
  if ((int)param_3 < 1) {
    if ((int)param_3 < 0) {
      *param_4 = 6;
      return (void *)0x0;
    }
  }
  else {
    _Dst = (void *)(**(code **)(param_1 + 8))(param_1,(ulonglong)param_3);
    if (_Dst == (void *)0x0) {
      *param_4 = 0x40;
      return (void *)0x0;
    }
  }
  if (param_2 != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,param_2,(ulonglong)param_3);
  }
  *param_4 = 0;
  return _Dst;
}



// FUNCTION 143c272f0 ft_mem_free body=10 status=ok
// SIG undefined ft_mem_free(void)

void ft_mem_free(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000143c272f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 143c27300 FUN_143c27300 body=69 status=ok
// SIG undefined FUN_143c27300(void)

longlong FUN_143c27300(longlong param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_2 < 1) {
    uVar2 = 0;
    if (param_2 < 0) {
      uVar2 = 6;
    }
    *param_3 = uVar2;
    return 0;
  }
  lVar1 = (**(code **)(param_1 + 8))();
  if (lVar1 == 0) {
    *param_3 = 0x40;
    return 0;
  }
  *param_3 = 0;
  return lVar1;
}



// FUNCTION 143c27350 FUN_143c27350 body=190 status=ok
// SIG undefined FUN_143c27350(void)

longlong FUN_143c27350(longlong param_1,int param_2,int param_3,int param_4,longlong param_5,
                      undefined4 *param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 local_res18 [4];
  
  uVar2 = 0;
  local_res18[0] = 0;
  lVar1 = param_5;
  if (((param_3 < 0) || (param_4 < 0)) || (param_2 < 0)) {
    uVar2 = 6;
  }
  else if ((param_4 == 0) || (param_2 == 0)) {
    if (param_5 != 0) {
      (**(code **)(param_1 + 0x10))();
    }
    lVar1 = 0;
    uVar2 = 0;
  }
  else if ((int)(0x7fffffff / (longlong)param_2) < param_4) {
    uVar2 = 10;
  }
  else if (param_3 == 0) {
    lVar1 = FUN_143c271e0(param_1,param_2 * param_4,local_res18);
    uVar2 = local_res18[0];
  }
  else {
    lVar1 = (**(code **)(param_1 + 0x18))(param_1,param_2 * param_3,param_2 * param_4,param_5);
    if (lVar1 == 0) {
      lVar1 = param_5;
      uVar2 = 0x40;
    }
  }
  *param_6 = uVar2;
  return lVar1;
}



// FUNCTION 143c27410 FUN_143c27410 body=142 status=ok
// SIG undefined FUN_143c27410(void)

longlong FUN_143c27410(undefined8 param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                      undefined4 *param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_143c27350();
  if (param_3 < param_4) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(param_2 * param_3 + lVar1),0,(longlong)((param_4 - param_3) * param_2));
  }
  *param_6 = 0;
  return lVar1;
}



// FUNCTION 143c274a0 FUN_143c274a0 body=41 status=ok
// SIG undefined FUN_143c274a0(void)

bool FUN_143c274a0(char *param_1,char *param_2,uint param_3)

{
  for (; (1 < param_3 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_3 = param_3 - 1;
  }
  *param_1 = '\0';
  return *param_2 != '\0';
}



// FUNCTION 143c274d0 ft_mem_strdup body=51 status=ok
// SIG undefined ft_mem_strdup(void)

void ft_mem_strdup(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    FUN_143c27270(param_1,param_2,(int)lVar1 + 1,param_3);
    return;
  }
  FUN_143c27270(param_1,0,0,param_3);
  return;
}



// FUNCTION 143c27510 ft_module_get_service body=161 status=ok
// SIG undefined ft_module_get_service(void)

longlong ft_module_get_service(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = 0;
  if (param_1 != (longlong *)0x0) {
    if ((*(code **)(*param_1 + 0x30) == (code *)0x0) ||
       (lVar3 = (**(code **)(*param_1 + 0x30))(), lVar3 == 0)) {
      puVar4 = (undefined8 *)(param_1[1] + 0x18);
      puVar1 = puVar4 + *(uint *)(param_1[1] + 0x14);
      while ((puVar4 < puVar1 &&
             (((plVar2 = (longlong *)*puVar4, plVar2 == param_1 ||
               (*(code **)(*plVar2 + 0x30) == (code *)0x0)) ||
              (lVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,param_2), lVar3 == 0))))) {
        puVar4 = puVar4 + 1;
      }
    }
    return lVar3;
  }
  return 0;
}



// FUNCTION 143c275e0 FUN_143c275e0 body=231 status=ok
// SIG undefined FUN_143c275e0(void)

void FUN_143c275e0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = *plVar2;
    plVar1 = plVar2 + 0x23;
    if (plVar1 != (longlong *)0x0) {
      for (plVar4 = (longlong *)*plVar1; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[1])
      {
        if (plVar4[2] == param_1) {
          if ((*(int *)(*(longlong *)(param_1 + 0x18) + 0x38) == 0x6f75746c) &&
             (*(longlong *)(param_1 + 0x60) != 0)) {
            (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + 0x28))();
          }
          if (plVar1 != (longlong *)0x0) {
            lVar5 = *plVar4;
            plVar4 = (longlong *)plVar4[1];
            if (lVar5 == 0) {
              *plVar1 = (longlong)plVar4;
            }
            else {
              *(longlong **)(lVar5 + 8) = plVar4;
            }
            if (plVar4 == (longlong *)0x0) {
              plVar2[0x24] = lVar5;
            }
            else {
              *plVar4 = lVar5;
            }
          }
          (**(code **)(lVar3 + 0x10))(lVar3);
          lVar3 = *plVar1;
          while ((lVar5 = 0, lVar3 != 0 &&
                 (lVar5 = *(longlong *)(lVar3 + 0x10), *(int *)(lVar5 + 0x20) != 0x6f75746c))) {
            lVar3 = *(longlong *)(lVar3 + 8);
          }
          plVar2[0x25] = lVar5;
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143c276d0 ft_service_list_lookup body=93 status=ok
// SIG undefined ft_service_list_lookup(void)

undefined8 ft_service_list_lookup(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  longlong lVar5;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    pcVar4 = (char *)*param_1;
    while (pcVar4 != (char *)0x0) {
      lVar5 = param_2 - (longlong)pcVar4;
      do {
        cVar2 = *pcVar4;
        cVar3 = pcVar4[lVar5];
        if (cVar2 != cVar3) break;
        pcVar4 = pcVar4 + 1;
      } while (cVar3 != '\0');
      if (cVar2 == cVar3) {
        return param_1[1];
      }
      puVar1 = param_1 + 2;
      param_1 = param_1 + 2;
      pcVar4 = (char *)*puVar1;
    }
  }
  return 0;
}



// FUNCTION 143c27730 FUN_143c27730 body=105 status=ok
// SIG undefined FUN_143c27730(void)

void FUN_143c27730(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 4);
  if (iVar1 < 0) {
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
  }
  else if (0 < iVar1) {
    iVar2 = iVar2 - iVar1;
  }
  if (param_2 == 0) {
    param_2 = (iVar2 * 0xc) / 10;
  }
  *(int *)(param_1 + 0x1c) = param_2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x10) / 2;
  *(int *)(param_1 + 0x18) = (param_2 - iVar2) / 2;
  return;
}



// FUNCTION 143c277a0 FUN_143c277a0 body=118 status=ok
// SIG undefined FUN_143c277a0(void)

int FUN_143c277a0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 1;
  if ((int)param_1 < 0) {
    param_1 = -param_1;
    iVar5 = -1;
  }
  uVar1 = (param_1 >> 0x10) * 0x5b16;
  uVar3 = (param_1 & 0xffff) * 0xdbd9 + uVar1;
  uVar2 = (param_1 & 0xffff) * 0x5b16 + uVar3 * 0x10000;
  iVar4 = (uint)(uVar3 < uVar1) * 0x10000 + (param_1 >> 0x10) * 0xdbd9 + (uVar3 >> 0x10) +
          (uint)(uVar2 < uVar3 * 0x10000) + (uint)(uVar2 + 0x40000000 < 0x40000000);
  if (iVar5 < 0) {
    iVar4 = -iVar4;
  }
  return iVar4;
}



// FUNCTION 143c27820 FUN_143c27820 body=153 status=ok
// SIG undefined FUN_143c27820(void)

int FUN_143c27820(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar5 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f) |
          (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
  uVar3 = 0;
  if ((uVar5 & 0xffff0000) != 0) {
    uVar5 = uVar5 >> 0x10;
    uVar3 = 0x10;
  }
  if ((uVar5 & 0xff00) != 0) {
    uVar5 = uVar5 >> 8;
    uVar3 = uVar3 + 8;
  }
  if ((uVar5 & 0xf0) != 0) {
    uVar5 = uVar5 >> 4;
    uVar3 = uVar3 + 4;
  }
  if ((uVar5 & 0xc) != 0) {
    uVar5 = uVar5 >> 2;
    uVar3 = uVar3 + 2;
  }
  if ((uVar5 & 2) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (uVar3 < 0x1e) {
    bVar4 = (byte)(0x1d - uVar3);
    param_1[1] = uVar1 << (bVar4 & 0x1f);
    *param_1 = uVar2 << (bVar4 & 0x1f);
    return 0x1d - uVar3;
  }
  bVar4 = (byte)(uVar3 - 0x1d);
  param_1[1] = (int)uVar1 >> (bVar4 & 0x1f);
  *param_1 = (int)uVar2 >> (bVar4 & 0x1f);
  return -(uVar3 - 0x1d);
}



// FUNCTION 143c278c0 FUN_143c278c0 body=238 status=ok
// SIG undefined FUN_143c278c0(void)

void FUN_143c278c0(int *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar7 = *param_1;
  iVar2 = param_1[1];
  if (iVar7 < iVar2) {
    iVar7 = -iVar7;
    if (iVar7 < iVar2) {
      iVar10 = 0x5a0000;
      iVar9 = iVar2;
      iVar2 = iVar7;
    }
    else {
      iVar10 = -0xb40000;
      if (0 < iVar2) {
        iVar10 = 0xb40000;
      }
      iVar9 = iVar7;
      iVar2 = -iVar2;
    }
  }
  else if (iVar2 < -iVar7) {
    iVar10 = -0x5a0000;
    iVar9 = -iVar2;
    iVar2 = iVar7;
  }
  else {
    iVar10 = 0;
    iVar9 = iVar7;
  }
  iVar7 = 1;
  piVar6 = &DAT_145d20ef0;
  iVar4 = 1;
  do {
    bVar3 = (byte)iVar4;
    if (iVar2 < 1) {
      iVar8 = -(iVar7 + iVar2 >> (bVar3 & 0x1f));
      iVar5 = iVar7 + iVar9 >> (bVar3 & 0x1f);
      iVar1 = -*piVar6;
    }
    else {
      iVar8 = iVar7 + iVar2 >> (bVar3 & 0x1f);
      iVar5 = -(iVar7 + iVar9 >> (bVar3 & 0x1f));
      iVar1 = *piVar6;
    }
    iVar2 = iVar2 + iVar5;
    iVar9 = iVar8 + iVar9;
    iVar10 = iVar10 + iVar1;
    piVar6 = piVar6 + 1;
    iVar7 = iVar7 * 2;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x17);
  *param_1 = iVar9;
  if (-1 < iVar10) {
    param_1[1] = iVar10 + 8U & 0xfffffff0;
    return;
  }
  param_1[1] = -(8U - iVar10 & 0xfffffff0);
  return;
}



// FUNCTION 143c279b0 FUN_143c279b0 body=263 status=ok
// SIG undefined FUN_143c279b0(void)

void FUN_143c279b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  iVar9 = *param_1;
  iVar8 = param_1[1];
  if (param_2 < -0x2d0000) {
    uVar10 = (-param_2 - 0x2d0001U) / 0x5a0000 + 1;
    uVar6 = (ulonglong)uVar10;
    param_2 = param_2 + uVar10 * 0x5a0000;
    iVar11 = iVar9;
    do {
      iVar9 = iVar8;
      iVar8 = -iVar11;
      uVar6 = uVar6 - 1;
      iVar11 = iVar9;
    } while (uVar6 != 0);
  }
  if (0x2d0000 < param_2) {
    uVar10 = (param_2 - 0x2d0001U) / 0x5a0000 + 1;
    uVar6 = (ulonglong)uVar10;
    param_2 = param_2 + uVar10 * -0x5a0000;
    iVar11 = iVar8;
    do {
      iVar8 = iVar9;
      iVar9 = -iVar11;
      uVar6 = uVar6 - 1;
      iVar11 = iVar8;
    } while (uVar6 != 0);
  }
  iVar11 = 1;
  piVar7 = &DAT_145d20ef0;
  iVar4 = 1;
  do {
    bVar3 = (byte)iVar4;
    if (param_2 < 0) {
      iVar5 = iVar11 + iVar8 >> (bVar3 & 0x1f);
      iVar2 = -(iVar11 + iVar9 >> (bVar3 & 0x1f));
      iVar1 = *piVar7;
    }
    else {
      iVar5 = -(iVar11 + iVar8 >> (bVar3 & 0x1f));
      iVar2 = iVar11 + iVar9 >> (bVar3 & 0x1f);
      iVar1 = -*piVar7;
    }
    iVar8 = iVar8 + iVar2;
    param_2 = param_2 + iVar1;
    iVar9 = iVar5 + iVar9;
    piVar7 = piVar7 + 1;
    iVar11 = iVar11 * 2;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x17);
  *param_1 = iVar9;
  param_1[1] = iVar8;
  return;
}



// FUNCTION 143c27ac0 FUN_143c27ac0 body=20 status=ok
// SIG undefined FUN_143c27ac0(void)

void FUN_143c27ac0(_JBTYPE *param_1,undefined4 param_2)

{
  *(undefined4 *)((longlong)param_1[0x11].Part + 4) = param_2;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(param_1,1);
}



// FUNCTION 143c27ae0 FUN_143c27ae0 body=32 status=ok
// SIG undefined FUN_143c27ae0(void)

void FUN_143c27ae0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0x100) = param_2;
  *(undefined8 *)(param_1 + 0x108) = param_3;
  *(undefined4 *)(param_1 + 0x110) = param_4;
  *(undefined4 *)(param_1 + 0x114) = 0;
  return;
}



// FUNCTION 143c27b00 FUN_143c27b00 body=681 status=ok
// SIG undefined FUN_143c27b00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_143c27b00(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 *param_4,
             longlong param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint unaff_R12D;
  uint uVar11;
  undefined **ppuVar12;
  longlong lVar13;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  int local_188;
  int *local_180;
  undefined4 local_178;
  longlong *local_170;
  uint local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138 [6];
  longlong local_120;
  int local_f8 [10];
  undefined4 local_d0 [10];
  longlong local_a8 [10];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_150 = *param_1;
  piVar7 = local_f8;
  local_168 = unaff_R12D & 0xffffff00;
  ppuVar12 = &PTR_LAB_145d20f50;
  local_188 = 2;
  plVar8 = local_a8;
  local_160 = 9;
  local_180 = (int *)0x9;
  puVar9 = local_d0;
  local_148 = param_5;
  local_158 = 0;
  local_178 = param_3;
  local_170 = param_1;
  local_140 = param_4;
  do {
    *plVar8 = 0;
    iVar5 = 0;
    if (param_2 == 0) {
      *piVar7 = 0;
LAB_143c27bda:
      local_198 = puVar9;
      iVar5 = (*(code *)*ppuVar12)(local_170,param_2);
      *piVar7 = iVar5;
    }
    else {
      if ((*(code **)(param_2 + 0x20) == (code *)0x0) ||
         (iVar4 = (**(code **)(param_2 + 0x20))(param_2,0,0,0), iVar4 == 0)) {
        *(undefined4 *)(param_2 + 0xc) = 0;
      }
      else {
        iVar5 = 0x55;
      }
      *piVar7 = iVar5;
      if (iVar5 == 0) goto LAB_143c27bda;
    }
    puVar9 = puVar9 + 1;
    plVar8 = plVar8 + 1;
    ppuVar12 = ppuVar12 + 2;
    piVar7 = piVar7 + 1;
    local_180 = (int *)((longlong)local_180 + -1);
  } while (local_180 != (int *)0x0);
  plVar8 = local_a8;
  uVar10 = 0;
  local_180 = &DAT_145d20f58;
  lVar13 = 0;
  iVar5 = local_188;
  uVar11 = local_168;
  do {
    piVar7 = local_180;
    if (*local_180 - 3U < 2) {
      bVar3 = true;
      if ((char)uVar11 == '\0') goto LAB_143c27c58;
    }
    else {
      bVar3 = false;
LAB_143c27c58:
      if (*(int *)((longlong)local_f8 + lVar13) == 0) {
        local_120 = *plVar8;
        local_138[0] = 4;
        if (local_120 == 0) {
          local_120 = *(longlong *)(local_148 + 0x18);
        }
        iVar5 = FUN_143c24990(local_170,local_138,&local_158);
        lVar6 = local_158;
        if ((bVar3) && (uVar11 = uVar11 & 0xff, (char)iVar5 == 'Q')) {
          uVar11 = 1;
        }
        if (iVar5 == 0) {
          local_198 = local_140;
          iVar5 = FUN_143c257e0(local_170,local_158,*(undefined4 *)((longlong)local_d0 + lVar13),
                                local_178);
          if (lVar6 != 0) {
            lVar1 = *(longlong *)(lVar6 + 0x30);
            if (*(code **)(lVar6 + 0x28) != (code *)0x0) {
              (**(code **)(lVar6 + 0x28))(lVar6);
            }
            (**(code **)(lVar1 + 0x10))(lVar1,lVar6);
            piVar7 = local_180;
          }
          if (iVar5 == 0) break;
          uVar11 = uVar11 & 0xff;
          if (bVar3) {
            uVar11 = 1;
          }
        }
      }
    }
    local_180 = piVar7 + 4;
    uVar10 = uVar10 + 1;
    plVar8 = plVar8 + 1;
    lVar13 = lVar13 + 4;
  } while (uVar10 < 9);
  lVar13 = local_150;
  plVar8 = local_a8;
  lVar6 = 9;
  local_188 = iVar5;
  do {
    if (*plVar8 != 0) {
      (**(code **)(lVar13 + 0x10))(lVar13);
      *plVar8 = 0;
      lVar6 = local_160;
    }
    plVar8 = plVar8 + 1;
    lVar6 = lVar6 + -1;
    local_160 = lVar6;
  } while (lVar6 != 0);
  uVar2 = 0;
  if (local_188 != 0) {
    uVar2 = 2;
  }
  return uVar2;
}



// FUNCTION 143c27db0 FUN_143c27db0 body=129 status=ok
// SIG undefined FUN_143c27db0(void)

void FUN_143c27db0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  byte *param_5)

{
  char cVar1;
  
  cVar1 = FUN_143c25610();
  if (cVar1 == '\x02') {
    cVar1 = FUN_143c257e0(param_1,param_2,0,param_3,param_4);
  }
  if (((cVar1 == '\x02') || (cVar1 == 'U')) && ((*param_5 & 4) != 0)) {
    FUN_143c27b00(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 143c27e40 FUN_143c27e40 body=45 status=ok
// SIG undefined FUN_143c27e40(void)

void FUN_143c27e40(longlong *param_1)

{
  if (*param_1 != 0) {
    (**(code **)(param_1[6] + 0x10))(param_1[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 143c27e70 FUN_143c27e70 body=466 status=ok
// SIG undefined FUN_143c27e70(void)

int FUN_143c27e70(longlong param_1,undefined8 *param_2,char param_3,undefined4 param_4,int param_5,
                 int *param_6,undefined8 *param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  void *_Dst_00;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  _Dst_00 = (void *)0x0;
  lVar3 = *(longlong *)(param_1 + 0x10);
  iVar6 = 0;
  _Dst = (void *)0x0;
  iVar1 = *(int *)(lVar2 + 0x38);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar6 = 6;
      goto LAB_143c27ede;
    }
  }
  else {
    _Dst = (void *)(**(code **)(lVar3 + 8))(lVar3);
    if (_Dst == (void *)0x0) {
      iVar6 = 0x40;
      goto LAB_143c27ede;
    }
  }
  if (0 < iVar1) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar1);
  }
LAB_143c27ede:
  if (iVar6 == 0) {
    *(longlong *)((longlong)_Dst + 0x90) = param_1;
    *(longlong *)((longlong)_Dst + 0x98) = lVar3;
    *(undefined8 *)((longlong)_Dst + 0xa0) = *param_2;
    if (param_3 != '\0') {
      *(uint *)((longlong)_Dst + 8) = *(uint *)((longlong)_Dst + 8) | 0x400;
    }
    iVar6 = 0;
    _Dst_00 = (void *)(**(code **)(lVar3 + 8))(lVar3);
    if (_Dst_00 == (void *)0x0) {
      iVar6 = 0x40;
    }
    else {
      _guard_xfg_dispatch_icall_nop(_Dst_00,0,0x58);
    }
    if (iVar6 == 0) {
      lVar5 = 0;
      *(void **)((longlong)_Dst + 0xd0) = _Dst_00;
      *(undefined8 *)((longlong)_Dst_00 + 0x48) = 0;
      piVar4 = param_6;
      if (0 < param_5) {
        do {
          if (*(longlong *)(*(longlong *)((longlong)_Dst + 0xd0) + 0x48) != 0) break;
          if (*piVar4 == 0x696e6372) {
            *(undefined8 *)(*(longlong *)((longlong)_Dst + 0xd0) + 0x48) =
                 *(undefined8 *)(piVar4 + 2);
          }
          lVar5 = lVar5 + 1;
          piVar4 = piVar4 + 4;
        } while (lVar5 < param_5);
      }
      if (*(code **)(lVar2 + 0x48) != (code *)0x0) {
        iVar6 = (**(code **)(lVar2 + 0x48))(*param_2,_Dst,param_4,(longlong)param_5,param_6);
      }
      *param_2 = *(undefined8 *)((longlong)_Dst + 0xa0);
      if ((iVar6 == 0) && ((iVar6 = find_unicode_charmap(_Dst), iVar6 == 0 || ((char)iVar6 == '&')))
         ) {
        *param_7 = _Dst;
        return 0;
      }
    }
  }
  FUN_143c26150(_Dst,lVar3);
  if (*(code **)(lVar2 + 0x50) != (code *)0x0) {
    (**(code **)(lVar2 + 0x50))(_Dst);
  }
  if (_Dst_00 != (void *)0x0) {
    (**(code **)(lVar3 + 0x10))(lVar3,_Dst_00);
  }
  if (_Dst != (void *)0x0) {
    (**(code **)(lVar3 + 0x10))(lVar3,_Dst);
  }
  *param_7 = 0;
  return iVar6;
}



// FUNCTION 143c28050 FUN_143c28050 body=403 status=ok
// SIG undefined FUN_143c28050(void)

int FUN_143c28050(longlong *param_1,longlong param_2,uint param_3,undefined4 param_4,int param_5,
                 undefined8 param_6)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  void *_Dst;
  char *pcVar5;
  uint uVar6;
  size_t _Size;
  void *pvVar7;
  int local_res10 [2];
  undefined4 local_res20 [2];
  
  uVar1 = *(uint *)(param_2 + 0xc);
  lVar2 = *param_1;
  local_res20[0] = param_4;
  iVar3 = FUN_143c26ee0(param_2,param_3,local_res10,&param_5,local_res20);
  if (iVar3 != 0) goto LAB_143c2819a;
  uVar6 = local_res10[0] + uVar1;
  if (*(code **)(param_2 + 0x20) == (code *)0x0) {
    if (*(uint *)(param_2 + 8) < uVar6) goto LAB_143c2819a;
  }
  else {
    iVar4 = (**(code **)(param_2 + 0x20))(param_2,uVar6,0,0);
    if (iVar4 != 0) goto LAB_143c2819a;
  }
  iVar4 = param_5;
  pvVar7 = (void *)0x0;
  *(uint *)(param_2 + 0xc) = uVar6;
  _Size = (size_t)param_5;
  if (param_5 < 1) {
    _Dst = pvVar7;
    if (-1 < param_5) goto LAB_143c28114;
    iVar3 = 6;
  }
  else {
    _Dst = (void *)(**(code **)(lVar2 + 8))(lVar2);
    if (_Dst == (void *)0x0) {
      iVar3 = 0x40;
    }
    else {
LAB_143c28114:
      iVar3 = 0;
      if (0 < iVar4) {
        _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
        iVar3 = 0;
      }
    }
  }
  if ((iVar3 == 0) &&
     (iVar3 = FUN_143c24af0(param_2,*(undefined4 *)(param_2 + 0xc),_Dst,iVar4), iVar3 == 0)) {
    pcVar5 = "type1";
    if ((char)local_res20[0] != '\0') {
      pcVar5 = "cid";
    }
    if ((int)param_3 < 0) {
      pvVar7 = (void *)(ulonglong)param_3;
    }
    iVar3 = FUN_143c281f0(param_1,_Dst,iVar4,pvVar7,pcVar5,param_6);
  }
LAB_143c2819a:
  if ((char)iVar3 == '\x02') {
    if (*(code **)(param_2 + 0x20) == (code *)0x0) {
      if (*(uint *)(param_2 + 8) < uVar1) {
        return 0x55;
      }
    }
    else {
      iVar4 = (**(code **)(param_2 + 0x20))(param_2,uVar1,0,0);
      if (iVar4 != 0) {
        return 0x55;
      }
    }
    *(uint *)(param_2 + 0xc) = uVar1;
  }
  return iVar3;
}



// FUNCTION 143c281f0 FUN_143c281f0 body=297 status=ok
// SIG undefined FUN_143c281f0(void)

undefined8 *
FUN_143c281f0(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             longlong param_5,longlong *param_6)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 local_58 [8];
  undefined8 *local_38;
  undefined8 local_30;
  
  lVar1 = *param_1;
  if (param_2 == (undefined8 *)0x0) {
    return (undefined8 *)&DAT_00000006;
  }
  puVar3 = (undefined8 *)(**(code **)(lVar1 + 8))(lVar1,0x48);
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)&DAT_00000040;
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[8] = 0;
    puVar3[5] = FUN_143c27e40;
    *puVar3 = param_2;
    *(undefined4 *)(puVar3 + 1) = param_3;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar4 = (undefined8 *)0x0;
  }
  if ((int)puVar4 == 0) {
    local_58[0] = 2;
    local_38 = puVar3;
    if (param_5 != 0) {
      local_58[0] = 10;
      local_30 = FT_Get_Module(param_1);
    }
    uVar2 = FUN_143c224d0(param_1,local_58,param_4,param_6);
    puVar4 = (undefined8 *)(ulonglong)uVar2;
    if (uVar2 == 0) {
      *(uint *)(*param_6 + 8) = *(uint *)(*param_6 + 8) & 0xfffffbff;
      return (undefined8 *)0x0;
    }
    if (puVar3 == (undefined8 *)0x0) {
      return puVar4;
    }
    param_2 = puVar3;
    if ((code *)puVar3[5] != (code *)0x0) {
      (*(code *)puVar3[5])(puVar3);
    }
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  return puVar4;
}



// FUNCTION 143c28320 FUN_143c28320 body=455 status=ok
// SIG undefined FUN_143c28320(void)

ulonglong FUN_143c28320(undefined8 param_1,longlong *param_2,ulonglong param_3,int param_4,
                       undefined4 *param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 local_res8;
  ulonglong local_res18 [2];
  
  local_res8 = param_1;
  iVar8 = 0;
  uVar6 = *(uint *)((longlong)param_2 + 0xc);
  iVar2 = 0;
  local_res18[0] = param_3 & 0xffffffff00000000;
  if (*(uint *)(param_2 + 1) <= uVar6 + 3) {
    return 0x55;
  }
  if ((code *)param_2[4] == (code *)0x0) {
    puVar5 = (undefined8 *)((ulonglong)uVar6 + *param_2);
    if (puVar5 != (undefined8 *)0x0) goto LAB_143c2837a;
  }
  else {
    iVar2 = (*(code *)param_2[4])(param_2,(ulonglong)uVar6,&local_res8,4);
    if (iVar2 != 4) {
      return 0x55;
    }
    puVar5 = &local_res8;
LAB_143c2837a:
    iVar2 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)puVar5,*(undefined1 *)((longlong)puVar5 + 1)),
                              *(undefined1 *)((longlong)puVar5 + 2)),
                     *(undefined1 *)((longlong)puVar5 + 3));
  }
  *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 4;
  if (iVar2 != param_4) {
    return 2;
  }
  FUN_143c24ea0(param_2,local_res18);
  if ((int)local_res18[0] != 0) {
    return local_res18[0] & 0xffffffff;
  }
  uVar7 = 0;
  uVar6 = *(int *)((longlong)param_2 + 0xc) + 0x10;
  if ((code *)param_2[4] == (code *)0x0) {
    if (*(uint *)(param_2 + 1) < uVar6) {
      uVar7 = 0x55;
      goto LAB_143c283ff;
    }
  }
  else {
    iVar2 = (*(code *)param_2[4])(param_2,uVar6,0,0);
    if (iVar2 != 0) {
      uVar7 = 0x55;
      goto LAB_143c283ff;
    }
  }
  *(uint *)((longlong)param_2 + 0xc) = uVar6;
LAB_143c283ff:
  local_res18[0] = CONCAT44(local_res18[0]._4_4_,uVar7);
  if (uVar7 != 0) {
    return (ulonglong)uVar7;
  }
  uVar1 = FUN_143c25070(param_2,local_res18);
  if ((int)local_res18[0] == 0) {
    if ((uVar1 != 0) && (uVar1 != 0)) {
      do {
        iVar2 = FUN_143c24ea0(param_2,local_res18);
        if ((int)local_res18[0] != 0) {
          return local_res18[0] & 0xffffffff;
        }
        if (iVar2 == 2) {
          uVar3 = FUN_143c24ea0(param_2,local_res18);
          if ((int)local_res18[0] == 0) {
            FUN_143c24ea0(param_2,local_res18);
            if ((int)local_res18[0] == 0) {
              *param_5 = uVar3;
              return 0;
            }
          }
        }
        else {
          uVar4 = FUN_143c25220(param_2,8);
          local_res18[0] = CONCAT44(local_res18[0]._4_4_,(int)uVar4);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)(uint)uVar1);
    }
    return 2;
  }
  return local_res18[0] & 0xffffffff;
}



// FUNCTION 143c284f0 FUN_143c284f0 body=161 status=ok
// SIG undefined FUN_143c284f0(void)

ulonglong FUN_143c284f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong local_res10;
  undefined4 local_48 [6];
  undefined8 local_30;
  
  local_48[0] = 4;
  local_30 = param_2;
  uVar2 = FUN_143c24990(param_1,local_48,&local_res10);
  if ((int)uVar2 == 0) {
    if (local_res10 == 0) {
      uVar3 = 0x51;
    }
    else {
      uVar3 = FUN_143c28320(param_1,local_res10,param_2,0x51607,param_3);
      lVar1 = *(longlong *)(local_res10 + 0x30);
      if (*(code **)(local_res10 + 0x28) != (code *)0x0) {
        (**(code **)(local_res10 + 0x28))(local_res10);
      }
      (**(code **)(lVar1 + 0x10))(lVar1,local_res10);
    }
    uVar2 = (ulonglong)uVar3;
  }
  return uVar2;
}



// FUNCTION 143c285a0 FUN_143c285a0 body=279 status=ok
// SIG undefined FUN_143c285a0(void)

char * FUN_143c285a0(longlong param_1,char *param_2,longlong param_3)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  longlong lVar7;
  
  lVar3 = -1;
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (param_2[lVar7] != '\0');
  do {
    pcVar4 = (char *)(param_3 + 1 + lVar3);
    lVar3 = lVar3 + 1;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
  iVar6 = (int)lVar3 + 1 + (int)lVar7;
  if (iVar6 < 1) {
    if (-1 < iVar6) goto LAB_143c2860f;
  }
  else {
    pcVar4 = (char *)(**(code **)(param_1 + 8))();
    if (pcVar4 != (char *)0x0) {
LAB_143c2860f:
      if (0 < iVar6) {
        _guard_xfg_dispatch_icall_nop(pcVar4,0,(longlong)iVar6);
      }
      pcVar5 = _guard_xfg_dispatch_icall_nop(param_2,0x2f);
      if (pcVar5 == (char *)0x0) {
        *pcVar4 = '\0';
      }
      else {
        _guard_xfg_dispatch_icall_nop(pcVar4,param_2,(size_t)(pcVar5 + (1 - (longlong)param_2)));
        pcVar4[(longlong)(pcVar5 + (1 - (longlong)param_2))] = '\0';
        param_2 = pcVar5 + 1;
      }
      pcVar5 = pcVar4 + -1;
      do {
        pcVar1 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
      } while (*pcVar1 != '\0');
      lVar3 = 0;
      do {
        cVar2 = *(char *)(param_3 + lVar3);
        pcVar5[lVar3] = cVar2;
        lVar3 = lVar3 + 1;
      } while (cVar2 != '\0');
      pcVar5 = pcVar4 + -1;
      do {
        pcVar1 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
      } while (*pcVar1 != '\0');
      lVar3 = 0;
      do {
        cVar2 = param_2[lVar3];
        pcVar5[lVar3] = cVar2;
        lVar3 = lVar3 + 1;
      } while (cVar2 != '\0');
      return pcVar4;
    }
  }
  return (char *)0x0;
}



// FUNCTION 143c286c0 FUN_143c286c0 body=172 status=ok
// SIG undefined FUN_143c286c0(void)

undefined8 FUN_143c286c0(undefined8 *param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  if (*(int *)(param_2 + 0x60) != 0x62697473) {
    return 0x12;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x94);
  if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x70);
    param_1[5] = *(undefined8 *)(param_2 + 0x68);
    param_1[6] = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x80);
    param_1[7] = *(undefined8 *)(param_2 + 0x78);
    param_1[8] = uVar2;
    param_1[9] = *(undefined8 *)(param_2 + 0x88);
    puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffe;
    return 0;
  }
  FUN_143c29300(param_1 + 5);
  uVar2 = FUN_143c290d0(uVar2,param_2 + 0x68,param_1 + 5);
  return uVar2;
}



// FUNCTION 143c287f0 ft_outline_glyph_init body=101 status=ok
// SIG undefined ft_outline_glyph_init(void)

ulonglong ft_outline_glyph_init(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if (*(int *)(param_2 + 0x60) != 0x6f75746c) {
    return 0x12;
  }
  uVar1 = FUN_143c231c0(*param_1,(int)*(short *)(param_2 + 0x9a),(int)*(short *)(param_2 + 0x98),
                        param_1 + 4);
  if ((int)uVar1 == 0) {
    FUN_143c229e0((short *)(param_2 + 0x98),param_1 + 4);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 143c28870 FUN_143c28870 body=78 status=ok
// SIG undefined FUN_143c28870(void)

ulonglong FUN_143c28870(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_143c231c0(*param_1,(int)*(short *)((longlong)param_1 + 0x22),
                        (int)*(short *)(param_1 + 4),param_2 + 0x20);
  if ((int)uVar1 == 0) {
    FUN_143c229e0(param_1 + 4,param_2 + 0x20);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 143c288c0 FUN_143c288c0 body=61 status=ok
// SIG undefined FUN_143c288c0(void)

void FUN_143c288c0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  if (param_2 != 0) {
    FUN_143c234b0(param_1 + 0x20);
  }
  if (param_3 != (undefined4 *)0x0) {
    FUN_143c23560(param_1 + 0x20,*param_3,param_3[1]);
  }
  return;
}



// FUNCTION 143c28950 FUN_143c28950 body=61 status=ok
// SIG undefined FUN_143c28950(void)

void FUN_143c28950(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)*param_1;
    if (*(code **)(param_1[1] + 0x10) != (code *)0x0) {
      (**(code **)(param_1[1] + 0x10))();
    }
    ft_mem_free(uVar1,param_1);
  }
  return;
}



// FUNCTION 143c28990 FUN_143c28990 body=268 status=ok
// SIG undefined FUN_143c28990(void)

int FUN_143c28990(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int local_res8 [2];
  
  if (param_1 == (undefined8 *)0x0) {
    return 0x25;
  }
  puVar2 = (undefined8 *)*param_1;
  if (param_2 != (undefined8 *)0x0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0x62697473) {
      puVar5 = &DAT_145d210e8;
    }
    else if (iVar1 == 0x6f75746c) {
      puVar5 = &DAT_145d21120;
    }
    else {
      lVar3 = FT_Lookup_Renderer(puVar2,iVar1,0);
      if ((lVar3 == 0) || (puVar5 = (undefined4 *)(lVar3 + 0x28), puVar5 == (undefined4 *)0x0)) {
        return 0x12;
      }
    }
    puVar4 = (undefined8 *)FUN_143c271e0(*puVar2,*puVar5,local_res8);
    if (local_res8[0] == 0) {
      *puVar4 = puVar2;
      puVar4[1] = puVar5;
      *(undefined4 *)(puVar4 + 2) = puVar5[1];
      *(int *)((longlong)puVar4 + 0x14) = *(int *)(param_1 + 0xb) << 10;
      *(int *)(puVar4 + 3) = *(int *)((longlong)param_1 + 0x5c) << 10;
      local_res8[0] = (**(code **)(puVar5 + 2))(puVar4,param_1);
      if (local_res8[0] == 0) {
        *param_2 = puVar4;
      }
      else {
        FUN_143c28950(puVar4);
      }
    }
    return local_res8[0];
  }
  return 6;
}



// FUNCTION 143c28aa0 FUN_143c28aa0 body=250 status=ok
// SIG undefined FUN_143c28aa0(void)

int FUN_143c28aa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int local_res10 [2];
  
  if (((param_2 != (undefined8 *)0x0) && (param_1 != (undefined8 *)0x0)) && (param_1[1] != 0)) {
    *param_2 = 0;
    puVar1 = (undefined4 *)param_1[1];
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined8 *)*param_1;
      puVar3 = (undefined8 *)FUN_143c271e0(*puVar2,*puVar1,local_res10);
      if (local_res10[0] == 0) {
        *puVar3 = puVar2;
        puVar3[1] = puVar1;
        *(undefined4 *)(puVar3 + 2) = puVar1[1];
        *(undefined8 *)((longlong)puVar3 + 0x14) = *(undefined8 *)((longlong)param_1 + 0x14);
        *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_1 + 2);
        if ((*(code **)(puVar1 + 6) == (code *)0x0) ||
           (local_res10[0] = (**(code **)(puVar1 + 6))(param_1,puVar3), local_res10[0] == 0)) {
          *param_2 = puVar3;
        }
        else {
          FUN_143c28950(puVar3);
        }
      }
      return local_res10[0];
    }
    return 6;
  }
  return 6;
}



// FUNCTION 143c28ba0 FUN_143c28ba0 body=67 status=ok
// SIG undefined FUN_143c28ba0(void)

void FUN_143c28ba0(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = &DAT_145d212a8;
  ppuVar2 = &PTR_DAT_145d21160;
  do {
    FUN_143c1fc20(param_1,puVar1);
    puVar1 = ppuVar2[1];
    ppuVar2 = ppuVar2 + 1;
  } while (puVar1 != (undefined *)0x0);
  return;
}



// FUNCTION 143c28bf0 FUN_143c28bf0 body=1213 status=ok
// SIG undefined FUN_143c28bf0(void)

int FUN_143c28bf0(undefined8 *param_1,uint *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  byte *_Src;
  uint uVar3;
  byte *_Dst;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int local_res8 [2];
  
  iVar5 = 0;
  local_res8[0] = 0;
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  if ((param_2 != (uint *)0x0) && (param_3 != (uint *)0x0)) {
    uVar2 = *param_1;
    if ((byte)(*(char *)((longlong)param_2 + 0x1a) - 1U) < 7) {
      uVar1 = param_3[2];
      if ((int)uVar1 < 0) {
        uVar1 = -uVar1;
      }
      uVar8 = *param_3;
      *(undefined1 *)((longlong)param_3 + 0x1a) = 2;
      *param_3 = *param_2;
      param_3[1] = param_2[1];
      if (0 < param_4) {
        iVar5 = 0;
        if ((int)param_2[1] % param_4 != 0) {
          iVar5 = param_4 - (int)param_2[1] % param_4;
        }
      }
      uVar3 = param_2[1] + iVar5;
      if ((0 < (int)uVar3) && ((uint)(0xffffffff / (ulonglong)uVar3) < *param_3)) {
        return 6;
      }
      if (uVar8 * uVar1 < *param_3 * uVar3) {
        uVar2 = FUN_143c27350(uVar2,1,uVar8 * uVar1,*param_3 * uVar3,*(undefined8 *)(param_3 + 4),
                              local_res8);
        *(undefined8 *)(param_3 + 4) = uVar2;
        if (local_res8[0] != 0) {
          return local_res8[0];
        }
      }
      if ((int)param_3[2] < 0) {
        uVar3 = -uVar3;
      }
      param_3[2] = uVar3;
    }
    else {
      local_res8[0] = 6;
    }
    _Dst = *(byte **)(param_3 + 4);
    _Src = *(byte **)(param_2 + 4);
    if ((int)param_2[2] < 0) {
      _Src = _Src + -(longlong)(int)((*param_2 - 1) * param_2[2]);
    }
    if ((int)param_3[2] < 0) {
      _Dst = _Dst + -(longlong)(int)((*param_3 - 1) * param_3[2]);
    }
    switch(*(undefined1 *)((longlong)param_2 + 0x1a)) {
    case 1:
      *(undefined2 *)(param_3 + 6) = 2;
      uVar1 = *param_2;
      if (uVar1 != 0) {
        do {
          pbVar6 = _Src;
          pbVar7 = _Dst;
          for (uVar8 = param_2[1] >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            bVar4 = *pbVar6;
            uVar3 = (uint)bVar4;
            pbVar6 = pbVar6 + 1;
            *pbVar7 = (byte)((int)uVar3 >> 7);
            pbVar7[1] = (byte)((int)(uint)bVar4 >> 6) & 1;
            pbVar7[2] = (byte)((int)uVar3 >> 5) & 1;
            pbVar7[3] = (byte)((int)uVar3 >> 4) & 1;
            pbVar7[4] = (byte)((int)uVar3 >> 3) & 1;
            pbVar7[5] = (byte)((int)uVar3 >> 2) & 1;
            pbVar7[7] = bVar4 & 1;
            pbVar7[6] = (byte)((int)uVar3 >> 1) & 1;
            pbVar7 = pbVar7 + 8;
          }
          uVar8 = param_2[1] & 7;
          if (uVar8 != 0) {
            uVar3 = (uint)*pbVar6;
            do {
              iVar5 = (int)uVar3 >> 7;
              uVar3 = uVar3 * 2;
              *pbVar7 = (byte)iVar5 & 1;
              uVar8 = uVar8 - 1;
              pbVar7 = pbVar7 + 1;
            } while (uVar8 != 0);
          }
          _Src = _Src + (int)param_2[2];
          _Dst = _Dst + (int)param_3[2];
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
        return local_res8[0];
      }
      break;
    case 2:
    case 5:
    case 6:
      uVar1 = param_2[1];
      *(undefined2 *)(param_3 + 6) = 0x100;
      uVar8 = *param_2;
      if (uVar8 != 0) {
        do {
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)uVar1);
          _Src = _Src + (int)param_2[2];
          _Dst = _Dst + (int)param_3[2];
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
        return local_res8[0];
      }
      break;
    case 3:
      *(undefined2 *)(param_3 + 6) = 4;
      uVar1 = *param_2;
      if (uVar1 != 0) {
        do {
          pbVar6 = _Src;
          pbVar7 = _Dst;
          for (uVar8 = param_2[1] >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            bVar4 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            *pbVar7 = (byte)((int)(uint)bVar4 >> 6);
            pbVar7[1] = (byte)((int)(uint)bVar4 >> 4) & 3;
            pbVar7[3] = bVar4 & 3;
            pbVar7[2] = (byte)((int)(uint)bVar4 >> 2) & 3;
            pbVar7 = pbVar7 + 4;
          }
          uVar8 = param_2[1] & 3;
          if (uVar8 != 0) {
            uVar3 = (uint)*pbVar6;
            do {
              iVar5 = (int)uVar3 >> 6;
              uVar3 = uVar3 << 2;
              *pbVar7 = (byte)iVar5 & 3;
              uVar8 = uVar8 - 1;
              pbVar7 = pbVar7 + 1;
            } while (uVar8 != 0);
          }
          _Src = _Src + (int)param_2[2];
          _Dst = _Dst + (int)param_3[2];
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
        return local_res8[0];
      }
      break;
    case 4:
      *(undefined2 *)(param_3 + 6) = 0x10;
      uVar1 = *param_2;
      if (uVar1 != 0) {
        do {
          pbVar6 = _Src;
          pbVar7 = _Dst;
          for (uVar8 = param_2[1] >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
            bVar4 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            pbVar7[1] = bVar4 & 0xf;
            *pbVar7 = (byte)((int)(uint)bVar4 >> 4);
            pbVar7 = pbVar7 + 2;
          }
          if ((param_2[1] & 1) != 0) {
            *pbVar7 = *pbVar6 >> 4;
          }
          _Src = _Src + (int)param_2[2];
          _Dst = _Dst + (int)param_3[2];
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
        return local_res8[0];
      }
      break;
    case 7:
      *(undefined2 *)(param_3 + 6) = 0x100;
      for (uVar1 = *param_2; uVar1 != 0; uVar1 = uVar1 - 1) {
        uVar8 = param_2[1];
        if (uVar8 != 0) {
          pbVar6 = _Src + 1;
          pbVar7 = _Dst;
          do {
            bVar4 = pbVar6[2];
            if (bVar4 != 0) {
              bVar4 = bVar4 - (char)(((uint)pbVar6[1] * (uint)pbVar6[1] * 0x366d +
                                      (uint)*pbVar6 * (uint)*pbVar6 * 0xb717 +
                                      (uint)pbVar6[-1] * (uint)pbVar6[-1] * 0x127c >> 0x10) /
                                    (uint)bVar4);
            }
            *pbVar7 = bVar4;
            pbVar6 = pbVar6 + 4;
            pbVar7 = pbVar7 + 1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        _Src = _Src + (int)param_2[2];
        _Dst = _Dst + (int)param_3[2];
      }
    }
    return local_res8[0];
  }
  return 6;
}



// FUNCTION 143c290d0 FUN_143c290d0 body=435 status=ok
// SIG undefined FUN_143c290d0(void)

int FUN_143c290d0(undefined8 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  uint uVar4;
  void *_Src;
  int iVar5;
  size_t _Size;
  int iVar6;
  int iVar7;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  if ((param_2 == (int *)0x0) || (param_3 == (int *)0x0)) {
    return 6;
  }
  if (param_2 == param_3) {
    return 0;
  }
  iVar1 = param_3[2];
  iVar5 = param_2[2];
  iVar6 = 1;
  if (iVar5 < 0) {
    iVar6 = -1;
  }
  iVar7 = 1;
  if (iVar1 < 0) {
    iVar7 = -1;
  }
  if (*(longlong *)(param_2 + 4) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_3 = *(undefined8 *)param_2;
    *(undefined8 *)(param_3 + 2) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_3 + 6) = uVar2;
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
    if (iVar6 != iVar7) {
      param_3[2] = -param_3[2];
    }
    return 0;
  }
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  uVar4 = *param_2 * iVar5;
  if (*(longlong *)(param_3 + 4) == 0) {
    uVar2 = FUN_143c27300(*param_1,uVar4,local_res8);
  }
  else {
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (*param_3 * iVar1 == uVar4) goto LAB_143c291f1;
    uVar2 = FUN_143c27350(*param_1,1,*param_3 * iVar1,uVar4,*(longlong *)(param_3 + 4),local_res8);
  }
  *(undefined8 *)(param_3 + 4) = uVar2;
  if (local_res8[0] != 0) {
    return local_res8[0];
  }
LAB_143c291f1:
  pvVar3 = *(void **)(param_3 + 4);
  uVar2 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)param_3 = *(undefined8 *)param_2;
  *(undefined8 *)(param_3 + 2) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_3 + 6) = uVar2;
  *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
  *(void **)(param_3 + 4) = pvVar3;
  if (iVar6 == iVar7) {
    _guard_xfg_dispatch_icall_nop(pvVar3,*(void **)(param_2 + 4),(ulonglong)uVar4);
  }
  else {
    iVar1 = *param_3;
    _Src = *(void **)(param_2 + 4);
    pvVar3 = (void *)((ulonglong)(uint)((iVar1 + -1) * iVar5) + (longlong)pvVar3);
    if (iVar1 != 0) {
      _Size = (size_t)iVar5;
      do {
        _guard_xfg_dispatch_icall_nop(pvVar3,_Src,_Size);
        _Src = (void *)((longlong)_Src + _Size);
        pvVar3 = (void *)((longlong)pvVar3 - _Size);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return local_res8[0];
}



// FUNCTION 143c29290 FUN_143c29290 body=99 status=ok
// SIG undefined FUN_143c29290(void)

undefined4 FUN_143c29290(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 6;
  }
  ft_mem_free(*param_1,param_2[2]);
  param_2[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  return 0;
}



// FUNCTION 143c29300 FUN_143c29300 body=40 status=ok
// SIG undefined FUN_143c29300(void)

void FUN_143c29300(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}



// FUNCTION 143c29330 FUN_143c29330 body=412 status=ok
// SIG undefined FUN_143c29330(void)

ulonglong FUN_143c29330(longlong *param_1,longlong param_2,char param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  undefined8 *local_res8;
  
  if (((param_1 == (longlong *)0x0) || (lVar5 = *param_1, lVar5 == 0)) ||
     (*(undefined4 **)(lVar5 + 8) != &DAT_145d21120)) {
    return 6;
  }
  uVar4 = FUN_143c28aa0(lVar5,&local_res8);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  iVar1 = FUN_143c22fb0(local_res8 + 4);
  iVar9 = 0;
  uVar8 = (uint)(iVar1 != 0);
  if (param_3 != '\0') {
    uVar8 = (uint)(uVar8 == 0);
  }
  uVar2 = FUN_143c2a570(param_2,local_res8 + 4,0);
  if (uVar2 != 0) goto LAB_143c294a8;
  iVar1 = 0;
  if ((param_2 != 0) && (uVar8 < 2)) {
    lVar5 = (longlong)(int)uVar8;
    iVar3 = 0;
    iVar6 = *(int *)(param_2 + 0x40 + lVar5 * 0x30);
    pbVar7 = *(byte **)(param_2 + 0x50 + lVar5 * 0x30);
    if (iVar6 != 0) {
      do {
        if ((*pbVar7 & 4) == 0) {
          if (iVar3 == 0) goto LAB_143c29432;
        }
        else {
          if (iVar3 != 0) goto LAB_143c29432;
          iVar3 = 1;
        }
        if ((*pbVar7 & 8) != 0) {
          iVar9 = iVar9 + 1;
          iVar3 = 0;
        }
        iVar1 = iVar1 + 1;
        pbVar7 = pbVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (iVar3 != 0) {
LAB_143c29432:
        iVar9 = 0;
        iVar1 = 0;
        goto LAB_143c29440;
      }
    }
    *(undefined1 *)(param_2 + 0x68 + lVar5 * 0x30) = 1;
  }
LAB_143c29440:
  FUN_143c22e30(*local_res8,local_res8 + 4);
  uVar2 = FUN_143c231c0(*local_res8,iVar1,iVar9,local_res8 + 4);
  if (uVar2 == 0) {
    *(undefined4 *)(local_res8 + 4) = 0;
    FUN_143c2a330(param_2,uVar8,local_res8 + 4);
    if (param_4 != '\0') {
      FUN_143c28950(*param_1);
    }
    *param_1 = (longlong)local_res8;
    return 0;
  }
LAB_143c294a8:
  FUN_143c28950(local_res8);
  if (param_4 == '\0') {
    *param_1 = 0;
  }
  return (ulonglong)uVar2;
}



// FUNCTION 143c294d0 FUN_143c294d0 body=1507 status=ok
// SIG undefined FUN_143c294d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c294d0(int *param_1,int *param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int *piVar15;
  undefined1 auStack_1d8 [32];
  char local_1b8;
  int local_1b0;
  int iStack_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int iStack_194;
  int local_190;
  int local_188;
  int local_184;
  int *local_180;
  int *local_178;
  int *local_170;
  int local_168;
  int local_164;
  int *local_160;
  int *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  int local_58 [8];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  iVar6 = 0;
  local_1b8 = '\x01';
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_3 == (int *)0x0)) {
    iVar6 = 6;
  }
  else if ((((param_1[2] - *param_2) + 1U < 3) && ((param_1[3] - param_2[1]) + 1U < 3)) &&
          (((*param_2 - *param_3) + 1U < 3 && ((param_2[1] - param_3[1]) + 1U < 3)))) {
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_3;
  }
  else {
    local_170 = (int *)&local_148;
    local_148 = *(undefined8 *)param_3;
    local_140 = *(undefined8 *)param_2;
    local_138 = *(undefined8 *)(param_1 + 2);
    local_180 = (int *)((longlong)&local_138 + 4);
    local_160 = param_1;
    local_158 = param_3;
    do {
      piVar15 = local_170;
      iVar6 = *param_1;
      iVar8 = iVar6;
      local_1a8 = iVar6;
      if (local_170 < local_58) {
        local_1a4 = local_170[4];
        local_178 = local_170 + 4;
        iVar12 = *local_170 - local_170[2];
        iVar14 = local_170[1] - local_170[3];
        if (((local_170[2] - local_1a4) + 1U < 3) && ((local_170[3] - local_170[5]) + 1U < 3)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((iVar12 + 1U < 3) && (iVar14 + 1U < 3)) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (bVar4) {
          if (!bVar5) {
            iVar6 = FUN_143c1fe70(iVar12,iVar14);
            iVar8 = iVar6;
          }
        }
        else if (bVar5) {
          iVar6 = FUN_143c1fe70();
          iVar8 = iVar6;
        }
        else {
          iVar8 = FUN_143c1fe70();
          iVar6 = FUN_143c1fe70(iVar12,iVar14);
        }
        local_1a8 = iVar6;
        uVar7 = FUN_143c1fe00(iVar8,iVar6);
        if ((int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)) < 0x1e0000)
        goto LAB_143c29710;
        if ((char)param_1[5] != '\0') {
          *param_1 = iVar8;
        }
        piVar15[8] = local_1a4;
        iVar6 = (local_1a4 + piVar15[2]) / 2;
        piVar15[6] = iVar6;
        iVar8 = (*piVar15 + piVar15[2]) / 2;
        piVar15[2] = iVar8;
        *local_178 = (iVar8 + iVar6) / 2;
        piVar15[9] = piVar15[5];
        iVar6 = (piVar15[5] + piVar15[3]) / 2;
        piVar15[7] = iVar6;
        iVar8 = (piVar15[1] + piVar15[3]) / 2;
        piVar15[3] = iVar8;
        local_180 = local_180 + 4;
        piVar15[5] = (iVar8 + iVar6) / 2;
        local_170 = local_178;
      }
      else {
LAB_143c29710:
        if (local_1b8 == '\0') {
          uVar7 = FUN_143c1fe00(*param_1,iVar8);
          iVar12 = 0;
          if (0x78000 < (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f))) {
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar15 + 4);
            param_1[1] = iVar8;
            param_1[0xc] = 0;
            iVar12 = FUN_143c2b620(param_1,0);
            param_1[0xc] = param_1[0xd];
          }
        }
        else {
          local_1b8 = '\0';
          if ((char)param_1[5] == '\0') {
            param_1[1] = iVar8;
            iVar12 = FUN_143c2b620(param_1,0);
          }
          else {
            iVar12 = FUN_143c2b6a0(param_1,iVar8,0);
          }
        }
        local_190 = iVar12;
        if (local_190 != 0) {
          return local_190;
        }
        iVar12 = FUN_143c1fe00(iVar8,iVar6);
        local_19c = iVar12 / 2 + iVar8;
        uVar9 = FUN_143c20040(iVar12 / 2);
        local_1a4 = FUN_143c20070(param_1[0xf],uVar9);
        if ((char)param_1[10] != '\0') {
          local_190 = FUN_143c1fe70(*piVar15 - piVar15[4],piVar15[1] - piVar15[5]);
        }
        iVar8 = iVar6 + 0x5a0000;
        iVar12 = 0;
        local_19c = local_19c - iVar6;
        local_178 = (int *)((ulonglong)local_178 & 0xffffffff00000000);
        puVar13 = (uint *)(param_1 + 0x10);
        do {
          local_1a0 = iVar8;
          FUN_143c25360(&local_198,local_1a4,local_19c + iVar8);
          local_198 = local_198 + piVar15[2];
          iStack_194 = iStack_194 + piVar15[3];
          FUN_143c25360(&local_1b0,param_1[0xf]);
          local_1b0 = local_1b0 + *piVar15;
          iStack_1ac = iStack_1ac + piVar15[1];
          if ((char)param_1[10] == '\0') {
LAB_143c299db:
            iVar6 = FUN_143c2af00(puVar13);
            if (iVar6 == 0) {
              uVar7 = *puVar13;
              lVar3 = *(longlong *)(puVar13 + 4);
              puVar1 = (undefined8 *)(*(longlong *)(puVar13 + 2) + (ulonglong)uVar7 * 8);
              *puVar1 = CONCAT44(iStack_194,local_198);
              puVar1[1] = CONCAT44(iStack_1ac,local_1b0);
              *(undefined2 *)(lVar3 + (ulonglong)uVar7) = 0x100;
              *puVar13 = *puVar13 + 2;
            }
            *(undefined1 *)(puVar13 + 6) = 0;
            if (iVar6 != 0) {
              return iVar6;
            }
          }
          else {
            uVar2 = *(undefined8 *)(*(longlong *)(puVar13 + 2) + (ulonglong)(*puVar13 - 1) * 8);
            iVar14 = (int)uVar2;
            local_150 = uVar2;
            iVar6 = FUN_143c1fe70(local_1b0 - iVar14,iStack_1ac - (int)((ulonglong)uVar2 >> 0x20));
            uVar7 = FUN_143c1fe00(local_190,iVar6);
            iVar8 = local_1a0;
            if ((int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)) < 0x5a0001)
            goto LAB_143c299db;
            iVar8 = local_150._4_4_;
            iVar12 = FUN_143c1fe70(piVar15[4] - iVar14,*local_180 - local_150._4_4_);
            iVar10 = FUN_143c1fe70(*piVar15 - local_1b0,piVar15[1] - iStack_1ac);
            local_168 = local_1b0 - iVar14;
            local_164 = iStack_1ac - iVar8;
            uVar9 = FUN_143c25380(&local_168);
            uVar7 = FUN_143c24600(iVar6 - iVar10);
            uVar11 = FUN_143c24600(iVar12 - iVar10);
            uVar9 = FUN_143c21f00(uVar9,(uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f),
                                  (uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f));
            FUN_143c25360(&local_188,uVar9);
            local_188 = local_188 + iVar14;
            local_184 = local_184 + iVar8;
            *(undefined1 *)(puVar13 + 6) = 0;
            iVar6 = FUN_143c2afe0(puVar13,&local_188);
            if (iVar6 != 0) {
              return iVar6;
            }
            iVar6 = FUN_143c2afe0(puVar13,&local_1b0);
            if (iVar6 != 0) {
              return iVar6;
            }
            iVar6 = FUN_143c2af00(puVar13,2);
            if (iVar6 == 0) {
              uVar7 = *puVar13;
              lVar3 = *(longlong *)(puVar13 + 4);
              puVar1 = (undefined8 *)(*(longlong *)(puVar13 + 2) + (ulonglong)uVar7 * 8);
              *puVar1 = CONCAT44(iStack_194,local_198);
              puVar1[1] = uVar2;
              *(undefined2 *)(lVar3 + (ulonglong)uVar7) = 0x100;
              *puVar13 = *puVar13 + 2;
            }
            *(undefined1 *)(puVar13 + 6) = 0;
            if (iVar6 != 0) {
              return iVar6;
            }
            iVar6 = FUN_143c2afe0(puVar13);
            if (iVar6 != 0) {
              return iVar6;
            }
            param_1 = local_160;
            piVar15 = local_170;
            iVar12 = (int)local_178;
            iVar8 = local_1a0;
          }
          iVar12 = iVar12 + 1;
          iVar8 = iVar8 + -0xb40000;
          puVar13 = puVar13 + 0xc;
          local_178 = (int *)CONCAT44(local_178._4_4_,iVar12);
        } while (iVar12 < 2);
        local_170 = piVar15 + -4;
        local_180 = local_180 + -4;
        *param_1 = local_1a8;
        local_1a0 = iVar8;
      }
      iVar6 = 0;
    } while (&local_148 <= local_170);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)local_158;
  }
  return iVar6;
}



// FUNCTION 143c29ac0 FUN_143c29ac0 body=1461 status=ok
// SIG undefined FUN_143c29ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143c29ac0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint *puVar14;
  int *piVar15;
  int *piVar16;
  undefined1 auStack_208 [32];
  char local_1e8;
  int local_1e4;
  int local_1e0 [2];
  int local_1d8;
  int iStack_1d4;
  int local_1d0 [2];
  int local_1c8;
  int iStack_1c4;
  int local_1c0;
  int iStack_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int *local_1a8;
  undefined4 local_1a0;
  int local_19c;
  undefined4 local_198;
  int *local_190;
  int local_188;
  int local_184;
  int *local_180;
  int *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  int local_68 [12];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  iVar12 = 0;
  local_1e8 = '\x01';
  if ((((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_3 == (int *)0x0)) ||
     (param_4 == (int *)0x0)) {
    iVar12 = 6;
  }
  else if (((((param_1[2] - *param_2) + 1U < 3) && ((param_1[3] - param_2[1]) + 1U < 3)) &&
           (((*param_2 - *param_3) + 1U < 3 &&
            (((param_2[1] - param_3[1]) + 1U < 3 && ((*param_3 - *param_4) + 1U < 3)))))) &&
          ((param_3[1] - param_4[1]) + 1U < 3)) {
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_4;
  }
  else {
    local_168 = *(undefined8 *)param_4;
    piVar16 = (int *)&local_168;
    piVar15 = (int *)((longlong)&local_150 + 4);
    local_160 = *(undefined8 *)param_3;
    local_158 = *(undefined8 *)param_2;
    local_150 = *(undefined8 *)(param_1 + 2);
    local_180 = param_1;
    local_178 = param_4;
    do {
      local_1e4 = *param_1;
      local_1e0[0] = local_1e4;
      local_1d0[0] = local_1e4;
      local_1a8 = piVar15;
      local_190 = piVar16;
      if ((piVar16 < local_68) &&
         (cVar4 = FUN_143c2a900(piVar16,&local_1e4,local_1e0,local_1d0), cVar4 == '\0')) {
        if ((char)param_1[5] != '\0') {
          *param_1 = local_1e4;
        }
        FUN_143c2aad0(piVar16);
        piVar16 = piVar16 + 6;
        piVar15 = piVar15 + 6;
      }
      else {
        iVar6 = local_1d0[0];
        iVar12 = local_1e0[0];
        iVar8 = local_1e4;
        if (local_1e8 == '\0') {
          uVar10 = FUN_143c1fe00(*param_1,local_1e4);
          iVar5 = 0;
          if (0x5a000 < (int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f))) {
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar16 + 6);
            param_1[1] = iVar8;
            param_1[0xc] = 0;
            iVar5 = FUN_143c2b620(param_1,0);
            param_1[0xc] = param_1[0xd];
          }
        }
        else {
          local_1e8 = '\0';
          if ((char)param_1[5] == '\0') {
            param_1[1] = local_1e4;
            iVar5 = FUN_143c2b620(param_1,0);
          }
          else {
            iVar5 = FUN_143c2b6a0(param_1,local_1e4,0);
          }
        }
        local_1b0 = iVar5;
        if (local_1b0 != 0) {
          return local_1b0;
        }
        iVar5 = FUN_143c1fe00(iVar8,iVar12);
        iVar6 = FUN_143c1fe00(iVar12,iVar6);
        iVar7 = FUN_143c1fe00(iVar8,iVar12);
        local_1e0[0] = iVar7 / 2 + iVar8;
        iVar8 = FUN_143c1fe00(iVar12,local_1d0[0]);
        iVar12 = iVar8 / 2 + iVar12;
        uVar9 = FUN_143c20040(iVar5 / 2);
        local_1a0 = FUN_143c20070(param_1[0xf],uVar9);
        uVar9 = FUN_143c20040(iVar6 / 2);
        local_198 = FUN_143c20070(param_1[0xf],uVar9);
        if ((char)param_1[10] != '\0') {
          local_1b0 = FUN_143c1fe70(*piVar16 - piVar16[6],piVar16[1] - piVar16[7]);
        }
        iVar8 = iVar12 + 0x5a0000;
        puVar14 = (uint *)(param_1 + 0x10);
        local_1e0[0] = local_1e0[0] - iVar12;
        local_19c = local_1d0[0] - iVar12;
        local_1ac = 0;
        do {
          iVar12 = local_1ac;
          local_1e4 = iVar8;
          FUN_143c25360(&local_1c0,local_1a0,local_1e0[0] + iVar8);
          local_1c0 = local_1c0 + piVar16[4];
          iStack_1bc = iStack_1bc + piVar16[5];
          FUN_143c25360(&local_1c8,local_198,iVar8);
          local_1c8 = local_1c8 + piVar16[2];
          iStack_1c4 = iStack_1c4 + piVar16[3];
          FUN_143c25360(&local_1d8,param_1[0xf]);
          local_1d8 = local_1d8 + *piVar16;
          iStack_1d4 = iStack_1d4 + piVar16[1];
          if ((char)param_1[10] == '\0') {
LAB_143c29f8f:
            iVar6 = FUN_143c2af00(puVar14);
            if (iVar6 == 0) {
              uVar13 = (ulonglong)*puVar14;
              lVar3 = *(longlong *)(puVar14 + 4);
              puVar1 = (undefined8 *)(*(longlong *)(puVar14 + 2) + uVar13 * 8);
              *puVar1 = CONCAT44(iStack_1bc,local_1c0);
              puVar1[1] = CONCAT44(iStack_1c4,local_1c8);
              puVar1[2] = CONCAT44(iStack_1d4,local_1d8);
              *(undefined2 *)(lVar3 + uVar13) = 0x202;
              *(undefined1 *)(lVar3 + 2 + uVar13) = 1;
              *puVar14 = *puVar14 + 3;
            }
            *(undefined1 *)(puVar14 + 6) = 0;
            local_1e4 = iVar8;
            local_1ac = iVar12;
          }
          else {
            uVar2 = *(undefined8 *)(*(longlong *)(puVar14 + 2) + (ulonglong)(*puVar14 - 1) * 8);
            iVar5 = (int)uVar2;
            local_170 = uVar2;
            iVar6 = FUN_143c1fe70(local_1d8 - iVar5,iStack_1d4 - (int)((ulonglong)uVar2 >> 0x20));
            uVar10 = FUN_143c1fe00(local_1b0,iVar6);
            iVar8 = local_1e4;
            if ((int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) < 0x5a0001)
            goto LAB_143c29f8f;
            iVar12 = local_170._4_4_;
            iVar8 = FUN_143c1fe70(piVar16[6] - iVar5,*local_1a8 - local_170._4_4_);
            iVar7 = FUN_143c1fe70(*piVar16 - local_1d8,piVar16[1] - iStack_1d4);
            local_188 = local_1d8 - iVar5;
            local_184 = iStack_1d4 - iVar12;
            uVar9 = FUN_143c25380(&local_188);
            uVar10 = FUN_143c24600(iVar6 - iVar7);
            uVar11 = FUN_143c24600(iVar8 - iVar7);
            uVar9 = FUN_143c21f00(uVar9,(uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f),
                                  (uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f));
            FUN_143c25360(&local_1b8,uVar9);
            local_1b8 = local_1b8 + iVar5;
            local_1b4 = local_1b4 + iVar12;
            *(undefined1 *)(puVar14 + 6) = 0;
            iVar12 = FUN_143c2afe0(puVar14,&local_1b8);
            if (iVar12 != 0) {
              return iVar12;
            }
            iVar12 = FUN_143c2afe0(puVar14,&local_1d8);
            if (iVar12 != 0) {
              return iVar12;
            }
            iVar12 = FUN_143c2af00(puVar14,3);
            if (iVar12 == 0) {
              uVar13 = (ulonglong)*puVar14;
              lVar3 = *(longlong *)(puVar14 + 4);
              puVar1 = (undefined8 *)(*(longlong *)(puVar14 + 2) + uVar13 * 8);
              *puVar1 = CONCAT44(iStack_1c4,local_1c8);
              puVar1[1] = CONCAT44(iStack_1bc,local_1c0);
              puVar1[2] = uVar2;
              *(undefined2 *)(lVar3 + uVar13) = 0x202;
              *(undefined1 *)(lVar3 + 2 + uVar13) = 1;
              *puVar14 = *puVar14 + 3;
            }
            *(undefined1 *)(puVar14 + 6) = 0;
            if (iVar12 != 0) {
              return iVar12;
            }
            iVar6 = FUN_143c2afe0(puVar14);
            param_1 = local_180;
            piVar16 = local_190;
          }
          if (iVar6 != 0) {
            return iVar6;
          }
          local_1ac = local_1ac + 1;
          iVar8 = local_1e4 + -0xb40000;
          puVar14 = puVar14 + 0xc;
        } while (local_1ac < 2);
        piVar16 = piVar16 + -6;
        piVar15 = local_1a8 + -6;
        *param_1 = local_1d0[0];
      }
      iVar12 = 0;
    } while (&local_168 <= piVar16);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)local_178;
  }
  return iVar12;
}



// FUNCTION 143c2a080 FUN_143c2a080 body=200 status=ok
// SIG undefined FUN_143c2a080(void)

void FUN_143c2a080(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    uVar2 = **(undefined8 **)(param_1 + 0xa0);
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x68) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    ft_mem_free(uVar2,param_1);
  }
  return;
}



// FUNCTION 143c2a150 FUN_143c2a150 body=467 status=ok
// SIG undefined FUN_143c2a150(void)

int FUN_143c2a150(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  iVar2 = 0;
  if (param_1 == (undefined4 *)0x0) {
    return 6;
  }
  if (*(char *)((longlong)param_1 + 0x15) == '\0') {
    if (((param_1[2] != param_1[7]) || (param_1[3] != param_1[8])) &&
       (iVar2 = FUN_143c2a360(param_1,param_1 + 7), iVar2 != 0)) {
      return iVar2;
    }
    param_1[1] = param_1[6];
    iVar2 = FUN_143c1fe00(*param_1);
    if (iVar2 != 0) {
      iVar1 = FUN_143c2b2c0(param_1,iVar2 < 0,param_1[9]);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar2 = FUN_143c2b3c0(param_1,iVar2 >= 0,param_1[9]);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    FUN_143c2ad60(param_1 + 0x10,0);
    param_1 = param_1 + 0x1c;
    uVar3 = 1;
  }
  else {
    iVar1 = FUN_143c2b130(param_1,*param_1,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = param_1[0x1c] - param_1[0x23];
    if ((0 < iVar1) && (iVar2 = FUN_143c2af00(param_1 + 0x10,iVar1), iVar2 == 0)) {
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x12) + (ulonglong)(uint)param_1[0x10] * 8);
      puVar4 = (undefined8 *)
               (*(longlong *)(param_1 + 0x1e) + ((ulonglong)(uint)param_1[0x1c] - 1) * 8);
      pbVar6 = (byte *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x10]);
      pbVar7 = (byte *)(((ulonglong)(uint)param_1[0x1c] - 1) + *(longlong *)(param_1 + 0x20));
      if ((undefined8 *)(*(longlong *)(param_1 + 0x1e) + (longlong)(int)param_1[0x23] * 8) <= puVar4
         ) {
        do {
          *puVar5 = *puVar4;
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + -1;
          *pbVar6 = *pbVar7 & 0xf3;
          pbVar6 = pbVar6 + 1;
          pbVar7 = pbVar7 + -1;
        } while ((undefined8 *)(*(longlong *)(param_1 + 0x1e) + (longlong)(int)param_1[0x23] * 8) <=
                 puVar4);
      }
      param_1[0x1c] = param_1[0x23];
      param_1[0x10] = param_1[0x10] + iVar1;
      *(undefined1 *)(param_1 + 0x16) = 0;
      *(undefined1 *)(param_1 + 0x22) = 0;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
    iVar2 = FUN_143c2b130(param_1,param_1[6] + 0xb40000,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar3 = 0;
    param_1 = param_1 + 0x10;
  }
  FUN_143c2ad60(param_1,uVar3);
  return 0;
}



// FUNCTION 143c2a330 FUN_143c2a330 body=48 status=ok
// SIG undefined FUN_143c2a330(void)

void FUN_143c2a330(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((((param_1 != 0) && (param_3 != 0)) && (param_2 < 2)) &&
     (lVar1 = param_1 + 0x40 + (longlong)(int)param_2 * 0x30, *(char *)(lVar1 + 0x28) != '\0')) {
    FUN_143c2ae50(lVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 143c2a360 FUN_143c2a360 body=334 status=ok
// SIG undefined FUN_143c2a360(void)

int FUN_143c2a360(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_res8;
  int local_resc;
  int local_res18;
  int local_res1c;
  
  iVar3 = 0;
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    local_res8 = *param_2 - param_1[2];
    local_resc = param_2[1] - param_1[3];
    if ((local_res8 != 0) || (local_resc != 0)) {
      iVar1 = FUN_143c25380(&local_res8);
      iVar2 = FUN_143c1fe70(local_res8,local_resc);
      FUN_143c25360(&local_res8,param_1[0xf],iVar2 + 0x5a0000);
      if ((char)param_1[5] == '\0') {
        param_1[1] = iVar2;
        iVar3 = FUN_143c2b620(param_1,iVar1);
      }
      else {
        iVar3 = FUN_143c2b6a0(param_1,iVar2,iVar1);
      }
      if (iVar3 == 0) {
        piVar5 = param_1 + 0x10;
        iVar3 = 1;
        do {
          local_res18 = local_res8 + *param_2;
          local_res1c = param_2[1] + local_resc;
          iVar4 = FUN_143c2afe0(piVar5,&local_res18,1);
          if (iVar4 != 0) {
            return iVar4;
          }
          piVar5 = piVar5 + 0xc;
          local_res8 = -local_res8;
          local_resc = -local_resc;
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
        *param_1 = iVar2;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_2;
        param_1[4] = iVar1;
        iVar3 = 0;
      }
    }
    return iVar3;
  }
  return 6;
}



// FUNCTION 143c2a4b0 FUN_143c2a4b0 body=186 status=ok
// SIG undefined FUN_143c2a4b0(void)

int FUN_143c2a4b0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int local_res8 [2];
  
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  if (param_2 == (longlong *)0x0) {
    return 6;
  }
  uVar1 = *param_1;
  lVar2 = FUN_143c271e0(uVar1,0xa8,local_res8);
  if (local_res8[0] == 0) {
    *(undefined8 **)(lVar2 + 0xa0) = param_1;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined1 *)(lVar2 + 0x68) = 0;
    *(undefined8 *)(lVar2 + 0x60) = uVar1;
    *(undefined4 *)(lVar2 + 0x5c) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0x90) = uVar1;
    *(undefined8 *)(lVar2 + 0x78) = 0;
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(lVar2 + 0x70) = 0;
    *(undefined4 *)(lVar2 + 0x8c) = 0xffffffff;
    *(undefined1 *)(lVar2 + 0x98) = 0;
  }
  *param_2 = lVar2;
  return local_res8[0];
}



// FUNCTION 143c2a570 FUN_143c2a570 body=832 status=ok
// SIG undefined FUN_143c2a570(void)

undefined8 FUN_143c2a570(undefined4 *param_1,short *param_2,char param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  uint local_res10;
  undefined8 local_res20;
  undefined8 local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48 [2];
  
  if (param_2 == (short *)0x0) {
    return 0x14;
  }
  if (param_1 == (undefined4 *)0x0) {
    return 6;
  }
  uVar5 = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x17] = 0xffffffff;
  param_1[0x1c] = 0;
  param_1[0x23] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x26) = 0;
  local_res10 = 0;
  if (0 < *param_2) {
    local_50 = 0;
    uVar9 = uVar5;
    do {
      uVar8 = (uint)uVar9;
      uVar14 = (uint)*(short *)(local_50 + *(longlong *)(param_2 + 0xc));
      lVar10 = *(longlong *)(param_2 + 4);
      piVar15 = (int *)(lVar10 + (ulonglong)uVar14 * 8);
      if ((uint)uVar5 < uVar14) {
        lVar11 = *(longlong *)(param_2 + 8);
        uVar2 = *(undefined8 *)piVar15;
        piVar12 = (int *)(lVar10 + uVar5 * 8);
        local_78 = *(undefined8 *)(lVar10 + uVar5 * 8);
        lVar10 = lVar11 + uVar5;
        bVar6 = *(byte *)(lVar11 + uVar5) & 3;
        if (bVar6 == 2) {
          return 0x14;
        }
        local_res20 = local_78;
        if (bVar6 == 0) {
          if ((*(byte *)(lVar11 + (ulonglong)uVar14) & 3) == 1) {
            piVar15 = piVar15 + -2;
            local_res20 = uVar2;
          }
          else {
            local_res20._0_4_ = (int)local_78;
            local_res20._4_4_ = (int)((ulonglong)local_78 >> 0x20);
            local_res20 = CONCAT44(((int)((ulonglong)uVar2 >> 0x20) + local_res20._4_4_) / 2,
                                   ((int)local_res20 + (int)uVar2) / 2);
          }
          piVar12 = piVar12 + -2;
          lVar10 = lVar10 + -1;
        }
        *(undefined1 *)(param_1 + 5) = 1;
        *(undefined8 *)(param_1 + 2) = local_res20;
        *(char *)((longlong)param_1 + 0x15) = param_3;
        if ((param_1[0xc] == 0) && ((param_3 == '\0' || (param_1[0xb] != 0)))) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        *(undefined1 *)(param_1 + 10) = uVar4;
        *(undefined8 *)(param_1 + 7) = local_res20;
        *param_1 = 0;
        if (piVar12 < piVar15) {
          do {
            lVar11 = lVar10 + 1;
            piVar13 = piVar12 + 2;
            bVar6 = *(byte *)(lVar10 + 1) & 3;
            if (bVar6 == 0) {
              iVar7 = *piVar13;
              local_78 = *(undefined8 *)piVar13;
              while( true ) {
                if (piVar15 <= piVar13) {
                  uVar2 = FUN_143c294d0(param_1,&local_78,&local_res20);
                  goto LAB_143c2a83a;
                }
                pbVar1 = (byte *)(lVar11 + 1);
                lVar11 = lVar11 + 1;
                uVar2 = *(undefined8 *)(piVar13 + 2);
                piVar13 = piVar13 + 2;
                bVar6 = *pbVar1 & 3;
                local_48[0] = uVar2;
                if (bVar6 == 1) break;
                if (bVar6 != 0) {
                  return 0x14;
                }
                local_68 = ((int)uVar2 + iVar7) / 2;
                local_64 = ((int)((ulonglong)uVar2 >> 0x20) + (int)((ulonglong)local_78 >> 0x20)) /
                           2;
                uVar3 = FUN_143c294d0(param_1,&local_78,&local_68);
                iVar7 = (int)uVar2;
                local_78 = uVar2;
                if ((int)uVar3 != 0) {
                  return uVar3;
                }
              }
              uVar2 = FUN_143c294d0(param_1,&local_78,local_48);
            }
            else if (bVar6 == 1) {
              local_70 = *piVar13;
              local_6c = piVar12[3];
              uVar2 = FUN_143c2a360(param_1,&local_70);
            }
            else {
              if (piVar15 < piVar12 + 4) {
                return 0x14;
              }
              if ((*(byte *)(lVar10 + 2) & 3) != 2) {
                return 0x14;
              }
              local_58 = *(undefined8 *)piVar13;
              piVar13 = piVar12 + 6;
              lVar11 = lVar10 + 3;
              local_60 = *(undefined8 *)(piVar12 + 4);
              if (piVar15 < piVar13) {
                uVar2 = FUN_143c29ac0(param_1,&local_58,&local_60,&local_res20);
                break;
              }
              local_48[0] = *(undefined8 *)piVar13;
              uVar2 = FUN_143c29ac0(param_1,&local_58,&local_60,local_48);
            }
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            lVar10 = lVar11;
            piVar12 = piVar13;
          } while (piVar13 < piVar15);
LAB_143c2a83a:
          uVar8 = local_res10;
          if ((int)uVar2 != 0) {
            return uVar2;
          }
        }
        if ((*(char *)(param_1 + 5) == '\0') && (uVar2 = FUN_143c2a150(param_1), (int)uVar2 != 0)) {
          return uVar2;
        }
      }
      uVar5 = (ulonglong)(uVar14 + 1);
      local_res10 = uVar8 + 1;
      uVar9 = (ulonglong)local_res10;
      local_50 = local_50 + 2;
    } while ((int)local_res10 < (int)*param_2);
  }
  return 0;
}



// FUNCTION 143c2a8b0 FUN_143c2a8b0 body=72 status=ok
// SIG undefined FUN_143c2a8b0(void)

void FUN_143c2a8b0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int param_5)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x3c) = param_2;
    *(undefined4 *)(param_1 + 0x2c) = param_3;
    *(undefined4 *)(param_1 + 0x30) = param_4;
    *(undefined4 *)(param_1 + 0x34) = param_4;
    if (param_5 < 0x10000) {
      param_5 = 0x10000;
    }
    *(int *)(param_1 + 0x38) = param_5;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  return;
}



// FUNCTION 143c2a900 FUN_143c2a900 body=452 status=ok
// SIG undefined FUN_143c2a900(void)

ulonglong FUN_143c2a900(int *param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar10 = param_1[4] - param_1[6];
  iVar9 = param_1[5] - param_1[7];
  iVar7 = param_1[2] - param_1[4];
  iVar8 = param_1[3] - param_1[5];
  iVar12 = *param_1 - param_1[2];
  iVar11 = param_1[1] - param_1[3];
  bVar1 = true;
  if ((iVar10 + 1U < 3) && (iVar9 + 1U < 3)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((iVar7 + 1U < 3) && (iVar8 + 1U < 3)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((2 < iVar12 + 1U) || (2 < iVar11 + 1U)) {
    bVar1 = false;
  }
  if (bVar2) {
    if (bVar3) {
      if (!bVar1) {
        iVar7 = FUN_143c1fe70(iVar12,iVar11);
        *param_4 = iVar7;
        *param_3 = iVar7;
        *param_2 = iVar7;
      }
      goto LAB_143c2aa6c;
    }
    if (bVar1) {
      iVar7 = FUN_143c1fe70(iVar7,iVar8);
      *param_4 = iVar7;
      *param_3 = iVar7;
      *param_2 = iVar7;
      goto LAB_143c2aa6c;
    }
    iVar7 = FUN_143c1fe70(iVar7,iVar8);
    *param_3 = iVar7;
    *param_2 = iVar7;
  }
  else {
    if (bVar3) {
      if (bVar1) {
        iVar7 = FUN_143c1fe70(iVar10,iVar9);
        *param_4 = iVar7;
        *param_3 = iVar7;
        *param_2 = iVar7;
      }
      else {
        iVar7 = FUN_143c1fe70(iVar10,iVar9);
        *param_2 = iVar7;
        iVar8 = FUN_143c1fe70(iVar12,iVar11);
        *param_4 = iVar8;
        iVar7 = *param_2;
        iVar8 = FUN_143c1fe00(iVar7,iVar8);
        *param_3 = iVar8 / 2 + iVar7;
      }
      goto LAB_143c2aa6c;
    }
    if (bVar1) {
      iVar9 = FUN_143c1fe70(iVar10,iVar9);
      *param_2 = iVar9;
      iVar7 = FUN_143c1fe70(iVar7,iVar8);
      *param_4 = iVar7;
      *param_3 = iVar7;
      goto LAB_143c2aa6c;
    }
    iVar9 = FUN_143c1fe70(iVar10,iVar9);
    *param_2 = iVar9;
    iVar7 = FUN_143c1fe70(iVar7,iVar8);
    *param_3 = iVar7;
  }
  iVar7 = FUN_143c1fe70(iVar12,iVar11);
  *param_4 = iVar7;
LAB_143c2aa6c:
  uVar4 = FUN_143c1fe00(*param_2,*param_3);
  uVar5 = FUN_143c1fe00(*param_3,*param_4);
  uVar4 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
  if (((int)uVar4 < 0x168000) &&
     (uVar4 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f), (int)uVar4 < 0x168000)) {
    uVar6 = CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
  }
  else {
    uVar6 = (ulonglong)uVar4 & 0xffffffffffffff00;
  }
  return uVar6;
}



// FUNCTION 143c2aad0 FUN_143c2aad0 body=203 status=ok
// SIG undefined FUN_143c2aad0(void)

void FUN_143c2aad0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[2];
  param_1[0xc] = param_1[6];
  iVar1 = (*param_1 + iVar3) / 2;
  param_1[2] = iVar1;
  iVar2 = (param_1[6] + param_1[4]) / 2;
  param_1[10] = iVar2;
  iVar4 = param_1[3];
  iVar3 = (param_1[4] + iVar3) / 2;
  iVar1 = (iVar3 + iVar1) / 2;
  param_1[4] = iVar1;
  param_1[0xd] = param_1[7];
  iVar3 = (iVar2 + iVar3) / 2;
  param_1[8] = iVar3;
  param_1[6] = (iVar3 + iVar1) / 2;
  iVar3 = (param_1[1] + iVar4) / 2;
  param_1[3] = iVar3;
  iVar1 = (param_1[7] + param_1[5]) / 2;
  param_1[0xb] = iVar1;
  iVar4 = (param_1[5] + iVar4) / 2;
  iVar3 = (iVar4 + iVar3) / 2;
  param_1[5] = iVar3;
  iVar4 = (iVar1 + iVar4) / 2;
  param_1[9] = iVar4;
  param_1[7] = (iVar4 + iVar3) / 2;
  return;
}



// FUNCTION 143c2aba0 FUN_143c2aba0 body=437 status=ok
// SIG undefined FUN_143c2aba0(void)

int FUN_143c2aba0(uint *param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  
  FUN_143c25360(&local_50,param_3,param_4);
  iStack_4c = iStack_4c + param_2[1];
  iVar3 = -0x5a0000;
  if (-1 < param_5) {
    iVar3 = 0x5a0000;
  }
  local_50 = local_50 + *param_2;
  if (param_5 != 0) {
    while( true ) {
      if (param_5 < 0x5a0001) {
        iVar7 = param_5;
        if (param_5 < -0x5a0000) {
          iVar7 = -0x5a0000;
        }
      }
      else {
        iVar7 = 0x5a0000;
      }
      iVar8 = iVar7 + param_4;
      iVar9 = iVar7;
      if (iVar7 < 0) {
        iVar9 = -iVar7;
      }
      FUN_143c25360(&local_58,param_3,iVar8);
      local_58 = local_58 + *param_2;
      iStack_54 = iStack_54 + param_2[1];
      iVar4 = FUN_143c20040(iVar9 >> 1);
      iVar9 = FUN_143c24600(iVar9 >> 1);
      uVar5 = FUN_143c21f00(param_3,iVar9 << 2,(iVar4 + 0x10000) * 3);
      FUN_143c25360(&local_48,uVar5,iVar3 + param_4);
      local_48 = local_48 + local_50;
      iStack_44 = iStack_44 + iStack_4c;
      FUN_143c25360(&local_40,uVar5,iVar8 - iVar3);
      local_40 = local_40 + local_58;
      iStack_3c = iStack_3c + iStack_54;
      iVar9 = FUN_143c2af00(param_1,3);
      if (iVar9 == 0) {
        uVar6 = (ulonglong)*param_1;
        lVar2 = *(longlong *)(param_1 + 4);
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 2) + uVar6 * 8);
        *puVar1 = CONCAT44(iStack_44,local_48);
        puVar1[1] = CONCAT44(iStack_3c,local_40);
        puVar1[2] = CONCAT44(iStack_54,local_58);
        *(undefined2 *)(lVar2 + uVar6) = 0x202;
        *(undefined1 *)(lVar2 + 2 + uVar6) = 1;
        *param_1 = *param_1 + 3;
      }
      *(undefined1 *)(param_1 + 6) = 0;
      if (iVar9 != 0) break;
      iStack_4c = iStack_54;
      param_5 = param_5 - iVar7;
      param_4 = iVar8;
      local_50 = local_58;
      if (param_5 == 0) {
        return 0;
      }
    }
    return iVar9;
  }
  return 0;
}



// FUNCTION 143c2ad60 FUN_143c2ad60 body=225 status=ok
// SIG undefined FUN_143c2ad60(void)

void FUN_143c2ad60(uint *param_1,char param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  
  uVar10 = param_1[7];
  uVar7 = (ulonglong)uVar10;
  uVar3 = *param_1;
  if (uVar10 + 1 < uVar3) {
    uVar10 = uVar3 - 1;
    *param_1 = uVar10;
    *(undefined8 *)(*(longlong *)(param_1 + 2) + uVar7 * 8) =
         *(undefined8 *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar10 * 8);
    if (param_2 != '\0') {
      puVar5 = (undefined8 *)(uVar7 * 8 + 8 + *(longlong *)(param_1 + 2));
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 2) + -8 + (ulonglong)uVar10 * 8);
      if (puVar5 < puVar8) {
        do {
          uVar4 = *puVar5;
          *puVar5 = *puVar8;
          puVar5 = puVar5 + 1;
          *puVar8 = uVar4;
          puVar8 = puVar8 + -1;
        } while (puVar5 < puVar8);
      }
      puVar6 = (undefined1 *)(*(longlong *)(param_1 + 4) + 1 + uVar7);
      puVar9 = (undefined1 *)(*(longlong *)(param_1 + 4) + -1 + (ulonglong)uVar10);
      if (puVar6 < puVar9) {
        do {
          uVar2 = *puVar6;
          *puVar6 = *puVar9;
          puVar6 = puVar6 + 1;
          *puVar9 = uVar2;
          puVar9 = puVar9 + -1;
        } while (puVar6 < puVar9);
      }
    }
    *(byte *)(*(longlong *)(param_1 + 4) + uVar7) =
         *(byte *)(*(longlong *)(param_1 + 4) + uVar7) | 4;
    pbVar1 = (byte *)((ulonglong)(uVar3 - 2) + *(longlong *)(param_1 + 4));
    *pbVar1 = *pbVar1 | 8;
    param_1[7] = 0xffffffff;
    *(undefined1 *)(param_1 + 6) = 0;
    return;
  }
  *param_1 = uVar10;
  param_1[7] = 0xffffffff;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 143c2ae50 FUN_143c2ae50 body=164 status=ok
// SIG undefined FUN_143c2ae50(void)

void FUN_143c2ae50(uint *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  short *psVar6;
  
  _guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(param_2 + 4) + (longlong)param_2[1] * 8),*(void **)(param_1 + 2)
             ,(ulonglong)*param_1 << 3);
  pbVar5 = (byte *)((longlong)param_2[1] + *(longlong *)(param_2 + 8));
  pbVar4 = *(byte **)(param_1 + 4);
  for (uVar3 = *param_1; uVar3 != 0; uVar3 = uVar3 - 1) {
    if ((*pbVar4 & 1) == 0) {
      *pbVar5 = *pbVar4 & 2;
    }
    else {
      *pbVar5 = 1;
    }
    pbVar4 = pbVar4 + 1;
    pbVar5 = pbVar5 + 1;
  }
  pbVar4 = *(byte **)(param_1 + 4);
  psVar6 = (short *)(*(longlong *)(param_2 + 0xc) + (longlong)*param_2 * 2);
  uVar3 = *param_1;
  sVar2 = param_2[1];
  sVar1 = 0;
  if (uVar3 != 0) {
    do {
      if ((*pbVar4 & 8) != 0) {
        *psVar6 = sVar2;
        psVar6 = psVar6 + 1;
        *param_2 = *param_2 + 1;
      }
      pbVar4 = pbVar4 + 1;
      sVar2 = sVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    sVar1 = (short)*param_1;
  }
  param_2[1] = param_2[1] + sVar1;
  return;
}



// FUNCTION 143c2af00 FUN_143c2af00 body=215 status=ok
// SIG undefined FUN_143c2af00(void)

int FUN_143c2af00(int *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int local_res10 [2];
  
  uVar1 = param_1[1];
  local_res10[0] = 0;
  if ((uint)(*param_1 + param_2) <= uVar1) {
    return 0;
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  for (uVar4 = uVar1; uVar4 < (uint)(*param_1 + param_2); uVar4 = uVar4 + 0x10 + (uVar4 >> 1)) {
  }
  uVar2 = FUN_143c27410(uVar3,8,uVar1,uVar4,*(undefined8 *)(param_1 + 2),local_res10);
  *(undefined8 *)(param_1 + 2) = uVar2;
  if (local_res10[0] == 0) {
    uVar3 = FUN_143c27410(uVar3,1,uVar1,uVar4,*(undefined8 *)(param_1 + 4),local_res10);
    *(undefined8 *)(param_1 + 4) = uVar3;
    if (local_res10[0] == 0) {
      param_1[1] = uVar4;
    }
  }
  return local_res10[0];
}



// FUNCTION 143c2afe0 FUN_143c2afe0 body=181 status=ok
// SIG undefined FUN_143c2afe0(void)

int FUN_143c2afe0(uint *param_1,int *param_2,undefined1 param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = 0;
  if ((char)param_1[6] == '\0') {
    if (((*param_1 != 0) &&
        (uVar4 = (ulonglong)(*param_1 - 1),
        (*(int *)(*(longlong *)(param_1 + 2) + uVar4 * 8) - *param_2) + 1U < 3)) &&
       ((*(int *)(*(longlong *)(param_1 + 2) + uVar4 * 8 + 4) - param_2[1]) + 1U < 3)) {
      return 0;
    }
    iVar3 = FUN_143c2af00(param_1,1);
    if (iVar3 == 0) {
      uVar1 = *param_1;
      lVar2 = *(longlong *)(param_1 + 4);
      *(undefined8 *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar1 * 8) = *(undefined8 *)param_2;
      *(undefined1 *)(lVar2 + (ulonglong)uVar1) = 1;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    *(undefined8 *)(*(longlong *)(param_1 + 2) + (ulonglong)(*param_1 - 1) * 8) =
         *(undefined8 *)param_2;
  }
  *(undefined1 *)(param_1 + 6) = param_3;
  return iVar3;
}



// FUNCTION 143c2b0a0 FUN_143c2b0a0 body=135 status=ok
// SIG undefined FUN_143c2b0a0(void)

void FUN_143c2b0a0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[0xf];
  iVar3 = param_2 * -0xb40000 + 0x5a0000;
  iVar2 = FUN_143c1fe00(*param_1,param_1[1]);
  if (iVar2 == 0xb40000) {
    iVar2 = iVar3 * -2;
  }
  FUN_143c2aba0(param_1 + (longlong)param_2 * 0xc + 0x10,param_1 + 2,iVar1,*param_1 + iVar3,iVar2);
  *(undefined1 *)(param_1 + (longlong)param_2 * 0xc + 0x16) = 0;
  return;
}



// FUNCTION 143c2b130 FUN_143c2b130 body=395 status=ok
// SIG undefined FUN_143c2b130(void)

undefined8 FUN_143c2b130(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int local_res8;
  int local_resc;
  int local_res20;
  int local_res24;
  
  iVar1 = param_1[0xb];
  if (iVar1 == 1) {
    *param_1 = param_2;
    param_1[1] = param_2 + 0xb40000;
    uVar2 = FUN_143c2b0a0(param_1,param_3);
    return uVar2;
  }
  if (iVar1 == 2) {
    iVar1 = param_1[0xf];
    iVar3 = param_3 * -0xb40000 + 0x5a0000;
    FUN_143c25360(&local_res20,iVar1,iVar3 + param_2);
    FUN_143c25360(&local_res8,iVar1,param_2);
    local_resc = local_resc + param_1[3] + local_res24;
    local_res8 = local_res8 + param_1[2] + local_res20;
    uVar2 = FUN_143c2afe0(param_1 + (longlong)param_3 * 0xc + 0x10,&local_res8,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    FUN_143c25360(&local_res20,iVar1,param_2 - iVar3);
    FUN_143c25360(&local_res8,iVar1,param_2);
    local_res8 = local_res8 + param_1[2] + local_res20;
    local_resc = local_resc + param_1[3] + local_res24;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = param_1[0xf];
    iVar3 = param_3 * -0xb40000 + 0x5a0000;
    FUN_143c25360(&local_res8,iVar1,iVar3 + param_2);
    local_res8 = local_res8 + param_1[2];
    local_resc = local_resc + param_1[3];
    uVar2 = FUN_143c2afe0(param_1 + (longlong)param_3 * 0xc + 0x10,&local_res8,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    FUN_143c25360(&local_res8,iVar1,param_2 - iVar3);
    local_res8 = local_res8 + param_1[2];
    local_resc = local_resc + param_1[3];
  }
  uVar2 = FUN_143c2afe0(param_1 + (longlong)param_3 * 0xc + 0x10,&local_res8,0);
  return uVar2;
}



// FUNCTION 143c2b2c0 FUN_143c2b2c0 body=252 status=ok
// SIG undefined FUN_143c2b2c0(void)

void FUN_143c2b2c0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int local_res8;
  int local_resc;
  
  lVar5 = (longlong)param_2;
  iVar7 = param_2 * -0xb40000 + 0x5a0000;
  iVar1 = FUN_143c1fe00(*param_1,param_1[1]);
  iVar1 = iVar1 / 2;
  if ((((char)param_1[lVar5 * 0xc + 0x16] != '\0') && (param_3 != 0)) &&
     (iVar1 + 0x59c000U < 0xb38001)) {
    uVar2 = FUN_143c25320(iVar1);
    uVar3 = FUN_143c22100(param_1[0xf],uVar2);
    uVar6 = (int)uVar3 >> 0x1f;
    iVar4 = (uVar3 ^ uVar6) - uVar6;
    if ((((uVar3 ^ uVar6) != uVar6) && (iVar4 <= param_1[4])) && (iVar4 <= param_3)) {
      iVar4 = *param_1;
      uVar2 = FUN_143c20040(iVar1);
      uVar2 = FUN_143c20070(param_1[0xf],uVar2);
      FUN_143c25360(&local_res8,uVar2,iVar4 + iVar1 + iVar7);
      local_res8 = local_res8 + param_1[2];
      iVar1 = param_1[3];
      goto LAB_143c2b390;
    }
  }
  FUN_143c25360(&local_res8,param_1[0xf],param_1[1] + iVar7);
  local_res8 = local_res8 + param_1[2];
  iVar1 = param_1[3];
  *(undefined1 *)(param_1 + lVar5 * 0xc + 0x16) = 0;
LAB_143c2b390:
  local_resc = local_resc + iVar1;
  FUN_143c2afe0(param_1 + lVar5 * 0xc + 0x10,&local_res8,0);
  return;
}



// FUNCTION 143c2b3c0 FUN_143c2b3c0 body=594 status=ok
// SIG undefined FUN_143c2b3c0(void)

void FUN_143c2b3c0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int local_res8;
  int local_resc;
  int local_res10;
  int local_res18;
  int local_res20;
  int local_res24;
  
  iVar4 = param_1[0xc];
  piVar8 = param_1 + (longlong)param_2 * 0xc + 0x10;
  local_res18 = param_3;
  if (iVar4 == 0) {
    FUN_143c2b0a0(param_1);
    return;
  }
  local_res10 = param_1[0xf];
  uVar6 = param_2 * -0xb40000 + 0x5a0000;
  if (iVar4 == 1) {
LAB_143c2b4ed:
    FUN_143c25360(&local_res8,local_res10,param_1[1] + uVar6);
    local_res8 = local_res8 + param_1[2];
    iVar4 = param_1[3];
    *(undefined1 *)(piVar8 + 6) = 0;
  }
  else {
    iVar1 = FUN_143c1fe00(*param_1,param_1[1]);
    iVar7 = *param_1;
    uVar5 = uVar6;
    if (iVar1 != 0xb40000) {
      iVar7 = iVar7 + uVar6 + iVar1 / 2;
      uVar5 = iVar1 / 2;
    }
    local_res8 = FUN_143c20040(uVar5);
    iVar2 = FUN_143c22100(param_1[0xe],local_res8);
    iVar1 = local_res10;
    if (iVar2 < 0x10000) {
      if (iVar4 != 2) goto LAB_143c2b4ed;
      if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0x3a) goto LAB_143c2b49b;
      uVar3 = FUN_143c22100(local_res10,param_1[0xe]);
      FUN_143c25360(&local_res20,uVar3,iVar7);
      local_res20 = local_res20 + param_1[2];
      local_res24 = local_res24 + param_1[3];
      uVar5 = FUN_143c24600(uVar5);
      uVar3 = FUN_143c21f00(iVar1,0x10000 - iVar2,
                            (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f));
      FUN_143c25360(&local_res8,uVar3,uVar6 + iVar7);
      local_res8 = local_res8 + local_res20;
      local_resc = local_resc + local_res24;
      iVar4 = FUN_143c2afe0(piVar8,&local_res8,0);
      if (iVar4 != 0) {
        return;
      }
      FUN_143c25360(&local_res8,uVar3,iVar7 - uVar6);
      local_res8 = local_res8 + local_res20;
      local_resc = local_resc + local_res24;
      iVar4 = FUN_143c2afe0(piVar8,&local_res8,0);
      if (iVar4 != 0) {
        return;
      }
      if (local_res18 != 0) {
        return;
      }
    }
    else {
LAB_143c2b49b:
      uVar3 = FUN_143c20070(param_1[0xf],local_res8);
      FUN_143c25360(&local_res8,uVar3,iVar7);
      local_res8 = local_res8 + param_1[2];
      local_resc = local_resc + param_1[3];
      iVar4 = FUN_143c2afe0(piVar8,&local_res8,0);
      if (iVar4 != 0) {
        return;
      }
      if (local_res18 != 0) {
        return;
      }
      iVar1 = param_1[0xf];
    }
    FUN_143c25360(&local_res8,iVar1,param_1[1] + uVar6);
    local_res8 = local_res8 + param_1[2];
    iVar4 = param_1[3];
  }
  local_resc = local_resc + iVar4;
  FUN_143c2afe0(piVar8,&local_res8,0);
  return;
}



// FUNCTION 143c2b620 FUN_143c2b620 body=121 status=ok
// SIG undefined FUN_143c2b620(void)

undefined8 FUN_143c2b620(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_143c1fe00(*param_1,param_1[1]);
  if (iVar1 != 0) {
    uVar2 = FUN_143c2b2c0(param_1,iVar1 < 0,param_2);
    if ((int)uVar2 == 0) {
      uVar2 = FUN_143c2b3c0(param_1,iVar1 >= 0,param_2);
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 143c2b6a0 FUN_143c2b6a0 body=349 status=ok
// SIG undefined FUN_143c2b6a0(void)

void FUN_143c2b6a0(longlong param_1,int param_2,undefined4 param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int local_res8;
  int local_resc;
  int local_res20;
  int local_res24;
  
  FUN_143c25360(&local_res20,*(undefined4 *)(param_1 + 0x3c),param_2 + 0x5a0000);
  local_res8 = *(int *)(param_1 + 8) + local_res20;
  local_resc = local_res24 + *(int *)(param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (-1 < (int)uVar2) {
    uVar3 = *(uint *)(param_1 + 0x40);
    if (uVar2 + 1 < uVar3) {
      *(uint *)(param_1 + 0x40) = uVar3 - 1;
      *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (ulonglong)uVar2 * 8) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar3 - 1) * 8);
      pbVar1 = (byte *)((ulonglong)uVar2 + *(longlong *)(param_1 + 0x50));
      *pbVar1 = *pbVar1 | 4;
      pbVar1 = (byte *)((ulonglong)(uVar3 - 2) + *(longlong *)(param_1 + 0x50));
      *pbVar1 = *pbVar1 | 8;
    }
    else {
      *(uint *)(param_1 + 0x40) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x58) = 0;
  iVar4 = FUN_143c2afe0(param_1 + 0x40,&local_res8,0);
  if (iVar4 == 0) {
    local_res8 = *(int *)(param_1 + 8) - local_res20;
    uVar2 = *(uint *)(param_1 + 0x8c);
    local_resc = *(int *)(param_1 + 0xc) - local_res24;
    if (-1 < (int)uVar2) {
      uVar3 = *(uint *)(param_1 + 0x70);
      if (uVar2 + 1 < uVar3) {
        *(uint *)(param_1 + 0x70) = uVar3 - 1;
        *(undefined8 *)(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar2 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar3 - 1) * 8);
        pbVar1 = (byte *)((ulonglong)uVar2 + *(longlong *)(param_1 + 0x80));
        *pbVar1 = *pbVar1 | 4;
        pbVar1 = (byte *)((ulonglong)(uVar3 - 2) + *(longlong *)(param_1 + 0x80));
        *pbVar1 = *pbVar1 | 8;
      }
      else {
        *(uint *)(param_1 + 0x70) = uVar2;
      }
      *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x88) = 0;
    }
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x70);
    *(undefined1 *)(param_1 + 0x88) = 0;
    FUN_143c2afe0(param_1 + 0x70,&local_res8,0);
    *(int *)(param_1 + 0x18) = param_2;
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x24) = param_3;
  }
  return;
}



// FUNCTION 143c2b800 FUN_143c2b800 body=194 status=ok
// SIG undefined FUN_143c2b800(void)

undefined4 FUN_143c2b800(undefined8 *param_1,char *param_2)

{
  long lVar1;
  FILE *_File;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0x28;
  }
  param_1[3] = param_2;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  _File = _guard_xfg_dispatch_icall_nop(param_2,"rb");
  if (_File == (FILE *)0x0) {
    return 1;
  }
  _guard_xfg_dispatch_icall_nop(_File,0,2);
  lVar1 = _guard_xfg_dispatch_icall_nop(_File);
  *(long *)(param_1 + 1) = lVar1;
  if (lVar1 == 0) {
    _guard_xfg_dispatch_icall_nop(_File);
    return 0x51;
  }
  _guard_xfg_dispatch_icall_nop(_File,0,0);
  param_1[2] = _File;
  param_1[4] = FUN_143c2b900;
  param_1[5] = FUN_143c2b8d0;
  return 0;
}



// FUNCTION 143c2b8d0 FUN_143c2b8d0 body=36 status=ok
// SIG undefined FUN_143c2b8d0(void)

void FUN_143c2b8d0(undefined8 *param_1)

{
  _guard_xfg_dispatch_icall_nop((FILE *)param_1[2]);
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 143c2b900 FUN_143c2b900 body=100 status=ok
// SIG undefined FUN_143c2b900(void)

size_t FUN_143c2b900(longlong param_1,uint param_2,void *param_3,uint param_4)

{
  FILE *_File;
  size_t sVar1;
  
  if ((param_4 == 0) && (*(uint *)(param_1 + 8) < param_2)) {
    return 1;
  }
  _File = *(FILE **)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0xc) != param_2) {
    _guard_xfg_dispatch_icall_nop(_File,param_2,0);
  }
  sVar1 = _guard_xfg_dispatch_icall_nop(param_3,1,(ulonglong)param_4,_File);
  return sVar1;
}



// FUNCTION 143c2b970 FUN_143c2b970 body=114 status=ok
// SIG undefined FUN_143c2b970(void)

undefined8 FUN_143c2b970(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(uint *)(param_1 + 0x38) = (uint)*(ushort *)(param_2 + 0x68);
  iVar2 = FUN_143c24190(param_2,0x756e6963);
  if (iVar2 == 0) {
    FUN_143c2dfa0(param_1,param_2);
    FUN_143c2da90(param_1,param_2);
    FUN_143c2d9f0(param_1,param_2);
  }
  FUN_143c244d0(param_2,uVar1);
  return 0;
}



// FUNCTION 143c2b9f0 af_cjk_metrics_scale body=66 status=ok
// SIG undefined af_cjk_metrics_scale(void)

void af_cjk_metrics_scale(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  uVar4 = param_2[6];
  uVar5 = param_2[7];
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  FUN_143c2e2d0(uVar1,uVar2,0);
  FUN_143c2e2d0(param_1,param_2,1);
  return;
}



// FUNCTION 143c2bae0 FUN_143c2bae0 body=485 status=ok
// SIG undefined FUN_143c2bae0(void)

ulonglong FUN_143c2bae0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ushort *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined1 local_58 [64];
  
  uVar2 = FUN_143c2efb0();
  if ((int)uVar2 == 0) {
    if (((*(int *)(param_3 + 0x20) == 1) && ((*(byte *)(param_1 + 0x1288) & 8) == 0)) ||
       (uVar2 = uVar2 & 0xffffffff, (*(byte *)(param_1 + 0x1288) & 1) == 0)) {
      uVar1 = FUN_143c2d640(param_1,0);
      if (uVar1 == 0) {
        FUN_143c2d6e0(param_1,0);
        uVar1 = FUN_143c2d2b0(param_1,0);
      }
      if (uVar1 != 0) {
        return (ulonglong)uVar1;
      }
      FUN_143c2d150(param_1,param_3,0);
      uVar2 = 0;
    }
    if ((*(byte *)(param_1 + 0x1288) & 2) == 0) {
      uVar1 = FUN_143c2d640(param_1,1);
      if (uVar1 == 0) {
        FUN_143c2d6e0(param_1,1);
        uVar1 = FUN_143c2d2b0(param_1,1);
      }
      if (uVar1 != 0) {
        return (ulonglong)uVar1;
      }
      FUN_143c2d150(param_1,param_3,1);
      uVar2 = 0;
    }
    iVar5 = 0;
    do {
      if (iVar5 == 0) {
        if ((*(uint *)(param_1 + 0x1288) & 1) == 0) {
          if ((*(int *)(param_3 + 0x20) != 1) || ((*(uint *)(param_1 + 0x1288) & 8) != 0))
          goto LAB_143c2bc1b;
          FUN_143c32090(local_58,param_1,0,local_res20,local_res18);
          FUN_143c2f720(param_1,0,local_res20[0],local_res18[0]);
        }
      }
      else if ((iVar5 == 1) && ((*(byte *)(param_1 + 0x1288) & 2) == 0)) {
LAB_143c2bc1b:
        FUN_143c2cca0(param_1,iVar5);
        FUN_143c2c9e0(param_1,iVar5);
        FUN_143c2e9c0(param_1,iVar5);
        FUN_143c2ebb0(param_1,iVar5);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    puVar3 = *(ushort **)(param_1 + 0x20);
    puVar6 = *(undefined4 **)(param_2 + 8);
    pcVar4 = *(char **)(param_2 + 0x10);
    puVar7 = puVar3 + (longlong)*(int *)(param_1 + 0x1c) * 0x18;
    for (; puVar3 < puVar7; puVar3 = puVar3 + 0x18) {
      *puVar6 = *(undefined4 *)(puVar3 + 8);
      puVar6[1] = *(undefined4 *)(puVar3 + 10);
      if ((*puVar3 & 1) == 0) {
        *pcVar4 = ((*puVar3 & 2) != 0) + '\x01';
      }
      else {
        *pcVar4 = '\0';
      }
      puVar6 = puVar6 + 2;
      pcVar4 = pcVar4 + 1;
    }
  }
  return uVar2;
}



// FUNCTION 143c2bcd0 FUN_143c2bcd0 body=400 status=ok
// SIG undefined FUN_143c2bcd0(void)

ulonglong FUN_143c2bcd0(longlong param_1,char *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong local_res8;
  
  iVar2 = _guard_xfg_dispatch_icall_nop(param_2,"fallback-script");
  if (iVar2 != 0) {
    iVar2 = _guard_xfg_dispatch_icall_nop(param_2,"default-script");
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x1c) = (int)*param_3;
      return 0;
    }
    iVar2 = _guard_xfg_dispatch_icall_nop(param_2,"increase-x-height");
    uVar5 = 0;
    if (iVar2 == 0) {
      lVar1 = *param_3;
      if (lVar1 == 0) {
        return 0x23;
      }
      local_res8 = *(longlong *)(lVar1 + 0xb8);
      if (local_res8 == 0) {
        uVar3 = FUN_143c2e810(lVar1,&local_res8,param_1);
        uVar5 = (ulonglong)uVar3;
        if (uVar3 == 0) {
          *(longlong *)(lVar1 + 0xb8) = local_res8;
          *(code **)(lVar1 + 0xc0) = FUN_143c2e610;
        }
      }
      if ((int)uVar5 == 0) {
        *(int *)(local_res8 + 0x18) = (int)param_3[1];
      }
      return uVar5;
    }
    do {
      uVar6 = uVar5 + 1;
      if (param_2[uVar5] != "warping"[uVar5]) {
        return 0xc;
      }
      uVar5 = uVar6;
    } while (uVar6 != 8);
    *(char *)(param_1 + 0x20) = (char)*param_3;
    return 0;
  }
  puVar4 = &DAT_145d21af8;
  uVar6 = 0;
  uVar5 = uVar6;
  while ((*(int *)(puVar4 + 8) != (int)*param_3 || (*(int *)(puVar4 + 0x10) != 10))) {
    uVar5 = (ulonglong)((int)uVar5 + 1);
    puVar4 = (&PTR_DAT_145d21f90)[uVar5];
    if (puVar4 == (undefined *)0x0) {
LAB_143c2bd32:
      if ((&PTR_DAT_145d21f90)[uVar5] == (undefined *)0x0) {
        uVar6 = 6;
      }
      return uVar6;
    }
  }
  *(int *)(param_1 + 0x18) = (int)uVar5;
  goto LAB_143c2bd32;
}



// FUNCTION 143c2be60 FUN_143c2be60 body=424 status=ok
// SIG undefined FUN_143c2be60(void)

/* WARNING: Removing unreachable block (ram,0x000143c2bfef) */

int FUN_143c2be60(longlong param_1,char *param_2,longlong *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = *(undefined1 *)(param_1 + 0x20);
  iVar4 = _guard_xfg_dispatch_icall_nop(param_2,"glyph-to-script-map");
  if (iVar4 == 0) {
    lVar5 = *param_3;
    if (lVar5 != 0) {
      local_res8 = *(longlong *)(lVar5 + 0xb8);
      if (local_res8 == 0) {
        iVar4 = FUN_143c2e810(lVar5,&local_res8,param_1);
        if (iVar4 != 0) {
          return iVar4;
        }
        *(longlong *)(lVar5 + 0xb8) = local_res8;
        *(code **)(lVar5 + 0xc0) = FUN_143c2e610;
      }
      param_3[1] = *(longlong *)(local_res8 + 0x10);
      return 0;
    }
  }
  else {
    iVar4 = _guard_xfg_dispatch_icall_nop(param_2,"fallback-script");
    if (iVar4 == 0) {
      *(undefined4 *)param_3 = *(undefined4 *)((&PTR_DAT_145d21f90)[uVar2] + 8);
      return 0;
    }
    iVar4 = _guard_xfg_dispatch_icall_nop(param_2,"default-script");
    if (iVar4 == 0) {
      *(undefined4 *)param_3 = uVar3;
      return 0;
    }
    iVar4 = _guard_xfg_dispatch_icall_nop(param_2,"increase-x-height");
    if (iVar4 != 0) {
      lVar5 = 0;
      do {
        lVar6 = lVar5 + 1;
        if (param_2[lVar5] != "warping"[lVar5]) {
          return 0xc;
        }
        lVar5 = lVar6;
      } while (lVar6 != 8);
      *(undefined1 *)param_3 = uVar1;
      return 0;
    }
    lVar5 = *param_3;
    if (lVar5 != 0) {
      local_res8 = *(longlong *)(lVar5 + 0xb8);
      if (local_res8 == 0) {
        iVar4 = FUN_143c2e810(lVar5,&local_res8,param_1);
        if (iVar4 != 0) {
          return iVar4;
        }
        *(longlong *)(lVar5 + 0xb8) = local_res8;
        *(code **)(lVar5 + 0xc0) = FUN_143c2e610;
      }
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(local_res8 + 0x18);
      return 0;
    }
  }
  return 0x23;
}



// FUNCTION 143c2c040 FUN_143c2c040 body=214 status=ok
// SIG undefined FUN_143c2c040(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_143c2c040(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_2588 [32];
  undefined4 local_2568;
  undefined8 local_2558;
  undefined8 uStack_2550;
  undefined8 *local_2548;
  undefined8 local_2508 [1180];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143c2c052;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2588;
  uVar1 = **(undefined8 **)(param_1 + 8);
  _guard_xfg_dispatch_icall_nop(local_2508,0,0x12a0);
  local_2508[0] = uVar1;
  _guard_xfg_dispatch_icall_nop(&local_2558,0,0x50);
  local_2548 = local_2508;
  local_2568 = param_5;
  uVar2 = FUN_143c31d00(&local_2558,param_1,*(undefined8 *)(param_2 + 8),param_4);
  local_2548 = (undefined8 *)0x0;
  local_2558 = 0;
  uStack_2550 = 0;
  FUN_143c2eec0(local_2508);
  return uVar2;
}



// FUNCTION 143c2c120 FUN_143c2c120 body=167 status=ok
// SIG undefined FUN_143c2c120(void)

undefined8 FUN_143c2c120(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  lVar2 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 0x1290) = param_2;
  uVar4 = *(uint *)(param_2 + 0x24);
  *(uint *)(param_1 + 0x1288) = uVar4;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x660);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x664);
  iVar1 = *(int *)(param_2 + 0x20);
  uVar3 = (uint)(iVar1 - 2U < 2);
  if ((iVar1 - 2U & 0xfffffffd) == 0) {
    uVar3 = uVar3 | 2;
  }
  if (iVar1 != 1) {
    uVar3 = uVar3 | 4;
  }
  if (iVar1 == 2) {
    uVar3 = uVar3 | 8;
LAB_143c2c193:
    if ((*(byte *)(lVar2 + 0xc) & 1) == 0) goto LAB_143c2c19c;
  }
  else if (iVar1 != 1) goto LAB_143c2c193;
  uVar4 = uVar4 | 1;
LAB_143c2c19c:
  if (*(char *)(*(longlong *)(*(longlong *)(param_2 + 0x30) + 0x1a8) + 0x20) == '\0') {
    uVar4 = uVar4 | 8;
  }
  *(uint *)(param_1 + 0x1288) = uVar4;
  *(uint *)(param_1 + 0x128c) = uVar3;
  return 0;
}



// FUNCTION 143c2c1d0 FUN_143c2c1d0 body=116 status=ok
// SIG undefined FUN_143c2c1d0(void)

undefined8 FUN_143c2c1d0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(uint *)(param_1 + 0x38) = (uint)*(ushort *)(param_2 + 0x68);
  iVar2 = FUN_143c24190(param_2,0x756e6963);
  if (iVar2 == 0) {
    FUN_143c2dfa0(param_1,param_2);
    FUN_143c2d9f0(param_1,param_2);
  }
  else {
    *(undefined8 *)(param_2 + 0x88) = 0;
  }
  FUN_143c244d0(param_2,uVar1);
  return 0;
}



// FUNCTION 143c2c270 FUN_143c2c270 body=114 status=ok
// SIG undefined FUN_143c2c270(void)

undefined8 FUN_143c2c270(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(uint *)(param_1 + 0x38) = (uint)*(ushort *)(param_2 + 0x68);
  iVar2 = FUN_143c24190(param_2,0x756e6963);
  if (iVar2 == 0) {
    FUN_143c2dfa0(param_1,param_2);
    FUN_143c30db0(param_1,param_2);
    FUN_143c2d9f0(param_1,param_2);
  }
  FUN_143c244d0(param_2,uVar1);
  return 0;
}



// FUNCTION 143c2c2f0 FUN_143c2c2f0 body=70 status=ok
// SIG undefined FUN_143c2c2f0(void)

void FUN_143c2c2f0(longlong param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x1c);
  FUN_143c316e0(param_1,param_2,0);
  FUN_143c316e0(param_1,param_2,1);
  return;
}



// FUNCTION 143c2c340 FUN_143c2c340 body=496 status=ok
// SIG undefined FUN_143c2c340(void)

ulonglong FUN_143c2c340(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ushort *puVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  ushort *puVar9;
  undefined4 local_res20 [2];
  undefined4 local_68 [2];
  undefined1 local_60 [72];
  
  uVar4 = FUN_143c2efb0();
  if ((int)uVar4 == 0) {
    if (((*(int *)(param_3 + 0x20) == 1) && ((*(byte *)(param_1 + 0x1288) & 8) == 0)) ||
       (uVar4 = uVar4 & 0xffffffff, (*(byte *)(param_1 + 0x1288) & 1) == 0)) {
      uVar1 = *(undefined4 *)(param_3 + 0x44);
      uVar3 = FUN_143c30840(param_1,0);
      if (uVar3 == 0) {
        FUN_143c30bd0(param_1,uVar1,param_3 + 0x48,0);
        uVar3 = FUN_143c30510(param_1,0);
      }
      uVar4 = (ulonglong)uVar3;
      if (uVar3 != 0) {
        return uVar4;
      }
    }
    if ((*(byte *)(param_1 + 0x1288) & 2) == 0) {
      uVar1 = *(undefined4 *)(param_3 + 0x668);
      uVar3 = FUN_143c30840(param_1,1);
      if (uVar3 == 0) {
        FUN_143c30bd0(param_1,uVar1,param_3 + 0x66c,1);
        uVar3 = FUN_143c30510(param_1,1);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      FUN_143c30340(param_1,param_3);
      uVar4 = 0;
    }
    iVar7 = 0;
    do {
      if (iVar7 == 0) {
        if ((*(int *)(param_3 + 0x20) == 1) && ((*(byte *)(param_1 + 0x1288) & 8) == 0)) {
          FUN_143c32090(local_60,param_1,0,local_68,local_res20);
          FUN_143c2f720(param_1,0,local_68[0],local_res20[0]);
        }
        else {
          bVar2 = *(byte *)(param_1 + 0x1288) & 1;
joined_r0x000143c2c485:
          if (bVar2 == 0) {
            FUN_143c2fd20(param_1,iVar7);
            FUN_143c2e8c0(param_1,iVar7);
            FUN_143c2e9c0(param_1,iVar7);
            FUN_143c2ebb0(param_1,iVar7);
          }
        }
      }
      else if (iVar7 == 1) {
        bVar2 = *(byte *)(param_1 + 0x1288) & 2;
        goto joined_r0x000143c2c485;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    puVar5 = *(ushort **)(param_1 + 0x20);
    puVar8 = *(undefined4 **)(param_2 + 8);
    pcVar6 = *(char **)(param_2 + 0x10);
    puVar9 = puVar5 + (longlong)*(int *)(param_1 + 0x1c) * 0x18;
    for (; puVar5 < puVar9; puVar5 = puVar5 + 0x18) {
      *puVar8 = *(undefined4 *)(puVar5 + 8);
      puVar8[1] = *(undefined4 *)(puVar5 + 10);
      if ((*puVar5 & 1) == 0) {
        *pcVar6 = ((*puVar5 & 2) != 0) + '\x01';
      }
      else {
        *pcVar6 = '\0';
      }
      puVar8 = puVar8 + 2;
      pcVar6 = pcVar6 + 1;
    }
  }
  return uVar4;
}



// FUNCTION 143c2c560 FUN_143c2c560 body=129 status=ok
// SIG undefined FUN_143c2c560(void)

ulonglong FUN_143c2c560(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ulonglong uVar6;
  
  uVar1 = FUN_143c2efb0();
  uVar6 = uVar1 & 0xffffffff;
  if ((int)uVar1 == 0) {
    puVar4 = *(ushort **)(param_1 + 0x20);
    puVar3 = *(undefined4 **)(param_2 + 8);
    pcVar2 = *(char **)(param_2 + 0x10);
    puVar5 = puVar4 + (longlong)*(int *)(param_1 + 0x1c) * 0x18;
    for (; puVar4 < puVar5; puVar4 = puVar4 + 0x18) {
      *puVar3 = *(undefined4 *)(puVar4 + 8);
      puVar3[1] = *(undefined4 *)(puVar4 + 10);
      if ((*puVar4 & 1) == 0) {
        *pcVar2 = ((*puVar4 & 2) != 0) + '\x01';
      }
      else {
        *pcVar2 = '\0';
      }
      puVar3 = puVar3 + 2;
      pcVar2 = pcVar2 + 1;
      uVar1 = uVar6;
    }
  }
  return uVar1;
}



// FUNCTION 143c2c5f0 FUN_143c2c5f0 body=586 status=ok
// SIG undefined FUN_143c2c5f0(void)

int FUN_143c2c5f0(longlong param_1,int param_2,int param_3,undefined8 param_4,undefined8 *param_5)

{
  int iVar1;
  short *psVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  short *psVar6;
  undefined8 *puVar7;
  short *psVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  short *psVar13;
  undefined8 *puVar14;
  int iVar15;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (*(int *)(param_1 + 0x10) < 0xc) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0xc;
      *(longlong *)(param_1 + 0x18) = param_1 + 0x5c8;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 <= *(int *)(param_1 + 0x10)) {
      if (0x1c71c70 < iVar1) {
        *param_5 = 0;
        return 0x40;
      }
      iVar15 = iVar1 + 4 + (iVar1 >> 2);
      if ((iVar15 < iVar1) || (0x1c71c71 < iVar15)) {
        iVar15 = 0x1c71c71;
      }
      if (*(undefined8 **)(param_1 + 0x18) == (undefined8 *)(param_1 + 0x5c8)) {
        puVar9 = (undefined8 *)FUN_143c27410(param_4,0x48,0,iVar15,0,local_res8);
        *(undefined8 **)(param_1 + 0x18) = puVar9;
        if (local_res8[0] != 0) {
          *param_5 = 0;
          return local_res8[0];
        }
        lVar12 = 6;
        puVar7 = (undefined8 *)(param_1 + 0x5c8);
        do {
          puVar14 = puVar7;
          puVar10 = puVar9;
          uVar11 = puVar14[1];
          *puVar10 = *puVar14;
          puVar10[1] = uVar11;
          uVar11 = puVar14[3];
          puVar10[2] = puVar14[2];
          puVar10[3] = uVar11;
          uVar11 = puVar14[5];
          puVar10[4] = puVar14[4];
          puVar10[5] = uVar11;
          uVar11 = puVar14[7];
          puVar10[6] = puVar14[6];
          puVar10[7] = uVar11;
          uVar11 = puVar14[9];
          puVar10[8] = puVar14[8];
          puVar10[9] = uVar11;
          uVar11 = puVar14[0xb];
          puVar10[10] = puVar14[10];
          puVar10[0xb] = uVar11;
          uVar11 = puVar14[0xd];
          puVar10[0xc] = puVar14[0xc];
          puVar10[0xd] = uVar11;
          uVar11 = puVar14[0xf];
          puVar10[0xe] = puVar14[0xe];
          puVar10[0xf] = uVar11;
          lVar12 = lVar12 + -1;
          puVar9 = puVar10 + 0x10;
          puVar7 = puVar14 + 0x10;
        } while (lVar12 != 0);
        uVar11 = puVar14[0x11];
        puVar10[0x10] = puVar14[0x10];
        puVar10[0x11] = uVar11;
        uVar11 = puVar14[0x13];
        puVar10[0x12] = puVar14[0x12];
        puVar10[0x13] = uVar11;
        uVar11 = puVar14[0x15];
        puVar10[0x14] = puVar14[0x14];
        puVar10[0x15] = uVar11;
        uVar11 = puVar14[0x17];
        puVar10[0x16] = puVar14[0x16];
        puVar10[0x17] = uVar11;
        uVar11 = puVar14[0x19];
        puVar10[0x18] = puVar14[0x18];
        puVar10[0x19] = uVar11;
        uVar11 = puVar14[0x1b];
        puVar10[0x1a] = puVar14[0x1a];
        puVar10[0x1b] = uVar11;
        *(int *)(param_1 + 0x14) = iVar15;
      }
      else {
        uVar11 = FUN_143c27410(param_4,0x48,iVar1,iVar15,*(undefined8 **)(param_1 + 0x18),local_res8
                              );
        *(undefined8 *)(param_1 + 0x18) = uVar11;
        if (local_res8[0] != 0) {
          *param_5 = 0;
          return local_res8[0];
        }
        *(int *)(param_1 + 0x14) = iVar15;
      }
    }
  }
  psVar2 = *(short **)(param_1 + 0x18);
  psVar13 = psVar2 + (longlong)*(int *)(param_1 + 0x10) * 0x24;
  psVar6 = psVar13;
  for (; psVar2 < psVar13; psVar13 = psVar13 + -0x24) {
    psVar8 = psVar6 + -0x24;
    if ((*psVar8 < param_2) || ((*psVar8 == param_2 && (param_3 == *(int *)(param_1 + 0x20)))))
    break;
    uVar11 = *(undefined8 *)(psVar6 + -0x20);
    uVar3 = *(undefined8 *)(psVar6 + -0x1c);
    uVar4 = *(undefined8 *)(psVar6 + -0x18);
    *(undefined8 *)psVar13 = *(undefined8 *)psVar8;
    *(undefined8 *)(psVar13 + 4) = uVar11;
    uVar11 = *(undefined8 *)(psVar6 + -0x14);
    uVar5 = *(undefined8 *)(psVar6 + -0x10);
    *(undefined8 *)(psVar13 + 8) = uVar3;
    *(undefined8 *)(psVar13 + 0xc) = uVar4;
    uVar3 = *(undefined8 *)(psVar6 + -0xc);
    uVar4 = *(undefined8 *)(psVar6 + -8);
    *(undefined8 *)(psVar13 + 0x10) = uVar11;
    *(undefined8 *)(psVar13 + 0x14) = uVar5;
    uVar11 = *(undefined8 *)(psVar6 + -4);
    *(undefined8 *)(psVar13 + 0x18) = uVar3;
    *(undefined8 *)(psVar13 + 0x1c) = uVar4;
    *(undefined8 *)(psVar13 + 0x20) = uVar11;
    psVar6 = psVar8;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *param_5 = psVar13;
  return local_res8[0];
}



// FUNCTION 143c2c840 FUN_143c2c840 body=416 status=ok
// SIG undefined FUN_143c2c840(void)

int FUN_143c2c840(int *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (*param_1 < 0x12) {
    if (*(longlong *)(param_1 + 2) == 0) {
      param_1[1] = 0x12;
      *(int **)(param_1 + 2) = param_1 + 10;
    }
  }
  else {
    iVar1 = param_1[1];
    if (iVar1 <= *param_1) {
      if (0x1999998 < iVar1) {
        *param_3 = 0;
        return 0x40;
      }
      iVar8 = iVar1 + 4 + (iVar1 >> 2);
      if ((iVar8 < iVar1) || (0x1999999 < iVar8)) {
        iVar8 = 0x1999999;
      }
      if (*(int **)(param_1 + 2) == param_1 + 10) {
        puVar3 = (undefined8 *)FUN_143c27410(param_2,0x50,0,iVar8,0,local_res8);
        *(undefined8 **)(param_1 + 2) = puVar3;
        if (local_res8[0] != 0) {
          *param_3 = 0;
          return local_res8[0];
        }
        lVar6 = 0xb;
        piVar2 = param_1 + 10;
        do {
          piVar7 = piVar2;
          puVar4 = puVar3;
          uVar5 = *(undefined8 *)(piVar7 + 2);
          *puVar4 = *(undefined8 *)piVar7;
          puVar4[1] = uVar5;
          uVar5 = *(undefined8 *)(piVar7 + 6);
          puVar4[2] = *(undefined8 *)(piVar7 + 4);
          puVar4[3] = uVar5;
          uVar5 = *(undefined8 *)(piVar7 + 10);
          puVar4[4] = *(undefined8 *)(piVar7 + 8);
          puVar4[5] = uVar5;
          uVar5 = *(undefined8 *)(piVar7 + 0xe);
          puVar4[6] = *(undefined8 *)(piVar7 + 0xc);
          puVar4[7] = uVar5;
          uVar5 = *(undefined8 *)(piVar7 + 0x12);
          puVar4[8] = *(undefined8 *)(piVar7 + 0x10);
          puVar4[9] = uVar5;
          uVar5 = *(undefined8 *)(piVar7 + 0x16);
          puVar4[10] = *(undefined8 *)(piVar7 + 0x14);
          puVar4[0xb] = uVar5;
          uVar5 = *(undefined8 *)(piVar7 + 0x1a);
          puVar4[0xc] = *(undefined8 *)(piVar7 + 0x18);
          puVar4[0xd] = uVar5;
          uVar5 = *(undefined8 *)(piVar7 + 0x1e);
          puVar4[0xe] = *(undefined8 *)(piVar7 + 0x1c);
          puVar4[0xf] = uVar5;
          lVar6 = lVar6 + -1;
          puVar3 = puVar4 + 0x10;
          piVar2 = piVar7 + 0x20;
        } while (lVar6 != 0);
        uVar5 = *(undefined8 *)(piVar7 + 0x22);
        puVar4[0x10] = *(undefined8 *)(piVar7 + 0x20);
        puVar4[0x11] = uVar5;
        uVar5 = *(undefined8 *)(piVar7 + 0x26);
        puVar4[0x12] = *(undefined8 *)(piVar7 + 0x24);
        puVar4[0x13] = uVar5;
        param_1[1] = iVar8;
      }
      else {
        uVar5 = FUN_143c27410(param_2,0x50,iVar1,iVar8,*(int **)(param_1 + 2),local_res8);
        *(undefined8 *)(param_1 + 2) = uVar5;
        if (local_res8[0] != 0) {
          *param_3 = 0;
          return local_res8[0];
        }
        param_1[1] = iVar8;
      }
    }
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  *param_3 = (longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 2);
  return 0;
}



// FUNCTION 143c2c9e0 FUN_143c2c9e0 body=243 status=ok
// SIG undefined FUN_143c2c9e0(void)

void FUN_143c2c9e0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  byte bVar5;
  bool bVar6;
  ushort *puVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  
  uVar4 = *(ulonglong *)((longlong)param_2 * 0x928 + 0x50 + param_1);
  uVar1 = uVar4 + (longlong)*(int *)((longlong)param_2 * 0x928 + 0x48 + param_1) * 0x48;
  if (param_2 == 0) {
    bVar5 = *(byte *)(param_1 + 0x128c) & 1;
joined_r0x000143c2ca62:
    if (bVar5 != 0) {
      bVar6 = true;
      goto LAB_143c2ca11;
    }
  }
  else if (param_2 == 1) {
    bVar5 = *(byte *)(param_1 + 0x128c) & 2;
    goto joined_r0x000143c2ca62;
  }
  bVar6 = false;
LAB_143c2ca11:
  if (uVar4 < uVar1) {
    piVar10 = (int *)(uVar4 + 8);
    lVar8 = ((uVar1 - uVar4) - 1) / 0x48 + 1;
    do {
      lVar9 = *(longlong *)(piVar10 + 0xc);
      if (bVar6) {
        do {
          puVar7 = *(ushort **)(lVar9 + 0x40);
          while( true ) {
            iVar2 = *piVar10;
            if (param_2 == 0) {
              *puVar7 = *puVar7 | 4;
              *(int *)(puVar7 + 8) = iVar2;
            }
            else {
              *puVar7 = *puVar7 | 8;
              *(int *)(puVar7 + 10) = iVar2;
            }
            if (puVar7 == *(ushort **)(lVar9 + 0x48)) break;
            puVar7 = *(ushort **)(puVar7 + 0x10);
          }
          lVar9 = *(longlong *)(lVar9 + 0x18);
        } while (lVar9 != *(longlong *)(piVar10 + 0xc));
      }
      else {
        iVar2 = *piVar10;
        iVar3 = piVar10[-1];
        do {
          puVar7 = *(ushort **)(lVar9 + 0x40);
          while( true ) {
            if (param_2 == 0) {
              *(int *)(puVar7 + 8) = *(int *)(puVar7 + 8) + (iVar2 - iVar3);
              *puVar7 = *puVar7 | 4;
            }
            else {
              *(int *)(puVar7 + 10) = *(int *)(puVar7 + 10) + (iVar2 - iVar3);
              *puVar7 = *puVar7 | 8;
            }
            if (puVar7 == *(ushort **)(lVar9 + 0x48)) break;
            puVar7 = *(ushort **)(puVar7 + 0x10);
          }
          lVar9 = *(longlong *)(lVar9 + 0x18);
        } while (lVar9 != *(longlong *)(piVar10 + 0xc));
      }
      piVar10 = piVar10 + 0x12;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 143c2cae0 FUN_143c2cae0 body=436 status=ok
// SIG undefined FUN_143c2cae0(void)

uint FUN_143c2cae0(longlong param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar6 = *(uint *)(param_1 + 0x128c);
  lVar4 = *(longlong *)(param_1 + 0x1290) + (longlong)param_2 * 0x624;
  if ((uVar6 & 4) == 0) {
    return param_3;
  }
  bVar9 = (int)param_3 < 0;
  if (bVar9) {
    param_3 = -param_3;
  }
  if (param_2 != 1) {
    uVar8 = uVar6 & 1;
  }
  else {
    uVar8 = uVar6 & 2;
  }
  if (uVar8 == 0) {
    if (*(int *)(lVar4 + 0x44) != 0) {
      uVar6 = *(uint *)(lVar4 + 0x4c);
      iVar3 = param_3 - uVar6;
      if (iVar3 < 0) {
        iVar3 = uVar6 - param_3;
      }
      if (iVar3 < 0x28) {
        param_3 = uVar6;
        if ((int)uVar6 < 0x30) {
          param_3 = 0x30;
        }
        goto LAB_143c2cc7a;
      }
    }
    if ((int)param_3 < 0x36) {
      param_3 = param_3 + (int)(0x36 - param_3) / 2;
    }
    else if ((int)param_3 < 0xc0) {
      uVar6 = param_3 & 0xffffffc0;
      param_3 = param_3 & 0x3f;
      if (param_3 < 10) {
        param_3 = uVar6 + param_3;
      }
      else if (param_3 < 0x16) {
        param_3 = uVar6 + 10;
      }
      else if ((param_3 < 0x2a) || (0x35 < param_3)) {
        param_3 = uVar6 + param_3;
      }
      else {
        param_3 = uVar6 + 0x36;
      }
    }
    goto LAB_143c2cc7a;
  }
  iVar3 = 0x62;
  uVar8 = param_3;
  if (*(uint *)(lVar4 + 0x44) != 0) {
    puVar5 = (uint *)(lVar4 + 0x4c);
    uVar7 = (ulonglong)*(uint *)(lVar4 + 0x44);
    do {
      iVar1 = param_3 - *puVar5;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar1 < iVar3) {
        iVar3 = iVar1;
        uVar8 = *puVar5;
      }
      puVar5 = puVar5 + 3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar2 = uVar8 + 0x20 & 0xffffffc0;
  if ((int)param_3 < (int)uVar8) {
    if ((int)(uVar2 - 0x30) < (int)param_3) {
      param_3 = uVar8;
    }
  }
  else if ((int)param_3 < (int)(uVar2 + 0x30)) {
    param_3 = uVar8;
  }
  if (param_2 != 1) {
    if ((uVar6 & 8) == 0) {
      if ((int)param_3 < 0x30) {
        param_3 = (int)(param_3 + 0x40) >> 1;
        goto LAB_143c2cc7a;
      }
      if ((int)param_3 < 0x80) {
        param_3 = param_3 + 0x16;
        goto LAB_143c2cc76;
      }
    }
    else if ((int)param_3 < 0x40) goto LAB_143c2cc4c;
    param_3 = param_3 + 0x20;
  }
  else {
    if ((int)param_3 < 0x40) {
LAB_143c2cc4c:
      param_3 = 0x40;
      goto LAB_143c2cc7a;
    }
    param_3 = param_3 + 0x10;
  }
LAB_143c2cc76:
  param_3 = param_3 & 0xffffffc0;
LAB_143c2cc7a:
  if (bVar9) {
    param_3 = -param_3;
  }
  return param_3;
}



// FUNCTION 143c2cca0 FUN_143c2cca0 body=1188 status=ok
// SIG undefined FUN_143c2cca0(void)

byte * FUN_143c2cca0(longlong param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  short sVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  longlong lVar14;
  longlong lVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  int local_res20;
  undefined4 local_58;
  int local_54;
  
  pbVar17 = (byte *)0x0;
  local_54 = 0;
  pbVar4 = *(byte **)((longlong)param_2 * 0x928 + 0x50 + param_1);
  bVar8 = false;
  local_res20 = 0;
  pbVar1 = pbVar4 + (longlong)*(int *)((longlong)param_2 * 0x928 + 0x48 + param_1) * 0x48;
  local_58 = 0;
  pbVar16 = pbVar4;
  iVar19 = 0;
  if (pbVar4 < pbVar1) {
    do {
      if ((pbVar16[0xc] & 4) == 0) {
        lVar14 = *(longlong *)(pbVar16 + 0x18);
        pbVar13 = *(byte **)(pbVar16 + 0x20);
        pbVar12 = pbVar16;
        if (((lVar14 != 0) ||
            ((pbVar13 != (byte *)0x0 &&
             (lVar14 = *(longlong *)(pbVar13 + 0x18), pbVar12 = pbVar13, pbVar13 = pbVar16,
             lVar14 != 0)))) && (pbVar12 != (byte *)0x0)) {
          iVar19 = *(int *)(lVar14 + 8);
          pbVar12[0xc] = pbVar12[0xc] | 4;
          *(int *)(pbVar12 + 8) = iVar19;
          if ((pbVar13 != (byte *)0x0) && (*(longlong *)(pbVar13 + 0x18) == 0)) {
            bVar2 = pbVar13[0xc];
            iVar9 = FUN_143c2cae0(param_1,param_2,*(int *)(pbVar13 + 4) - *(int *)(pbVar12 + 4),
                                  pbVar12[0xc],bVar2);
            *(int *)(pbVar13 + 8) = iVar9 + iVar19;
            pbVar13[0xc] = bVar2 | 4;
          }
          if (pbVar17 == (byte *)0x0) {
            pbVar17 = pbVar16;
          }
        }
      }
      pbVar16 = pbVar16 + 0x48;
    } while (pbVar16 < pbVar1);
    bVar7 = false;
    iVar19 = local_54;
    if (pbVar4 < pbVar1) {
      pbVar16 = pbVar4 + 0xc;
      do {
        bVar2 = *pbVar16;
        pbVar13 = pbVar17;
        if ((bVar2 & 4) == 0) {
          pbVar12 = *(byte **)(pbVar16 + 0x14);
          if (pbVar12 == (byte *)0x0) {
            iVar19 = iVar19 + 1;
          }
          else if ((bVar7) &&
                  ((*(int *)(pbVar16 + -4) < local_54 + 0x40 ||
                   (*(int *)(pbVar12 + 8) < local_54 + 0x40)))) {
            iVar19 = iVar19 + 1;
          }
          else if (*(longlong *)(pbVar12 + 0x18) == 0) {
            pbVar13 = pbVar16 + -0xc;
            if (pbVar12 < pbVar13) {
              local_54 = FUN_143c2cae0(param_1,param_2,
                                       *(int *)(pbVar16 + -8) - *(int *)(pbVar12 + 4),pbVar12[0xc],
                                       bVar2);
              local_54 = local_54 + *(int *)(pbVar12 + 8);
              *(int *)(pbVar16 + -4) = local_54;
              *pbVar16 = bVar2 | 4;
              pbVar13 = pbVar17;
            }
            else {
              if ((param_2 == 1) || (pbVar17 != (byte *)0x0)) {
                FUN_143c2f7f0(param_1,pbVar13,pbVar12,local_58,param_2);
              }
              else {
                local_58 = FUN_143c2f7f0(param_1,pbVar13,pbVar12,0,0);
              }
              *pbVar16 = *pbVar16 | 4;
              pbVar12[0xc] = pbVar12[0xc] | 4;
              local_54 = *(int *)(pbVar12 + 8);
            }
            bVar7 = true;
            bVar8 = true;
            local_res20 = local_54;
          }
          else {
            iVar10 = FUN_143c2cae0(param_1,param_2,*(int *)(pbVar16 + -8) - *(int *)(pbVar12 + 4),
                                   pbVar12[0xc],bVar2);
            iVar9 = *(int *)(pbVar12 + 8);
            *pbVar16 = bVar2 | 4;
            *(int *)(pbVar16 + -4) = iVar10 + iVar9;
            local_54 = local_res20;
            bVar7 = bVar8;
          }
        }
        pbVar12 = pbVar16 + 0x3c;
        pbVar16 = pbVar16 + 0x48;
        pbVar17 = pbVar13;
      } while (pbVar12 < pbVar1);
    }
  }
  lVar15 = (longlong)pbVar1 - (longlong)pbVar4;
  lVar14 = lVar15 / 0x12 + (lVar15 >> 0x3f);
  pbVar16 = (byte *)-(lVar14 >> 0x3f);
  pbVar17 = pbVar16 + (lVar14 >> 2);
  if (param_2 == 0) {
    if (pbVar17 == &DAT_00000006) {
      pbVar13 = pbVar4 + 0x90;
      pbVar12 = pbVar4 + 0x120;
      pbVar18 = pbVar4;
    }
    else {
      if (pbVar17 != &DAT_0000000c) goto LAB_143c2d00e;
      pbVar13 = pbVar4 + 0x168;
      pbVar12 = pbVar4 + 0x288;
      pbVar18 = pbVar4 + 0x48;
    }
    iVar9 = (*(int *)(pbVar13 + 4) * 2 - *(int *)(pbVar12 + 4)) - *(int *)(pbVar18 + 4);
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    pbVar16 = pbVar18 + 0x48;
    if ((*(byte **)(pbVar18 + 0x20) == pbVar16) &&
       (pbVar16 = pbVar13 + 0x48, *(byte **)(pbVar13 + 0x20) == pbVar16)) {
      pbVar5 = *(byte **)(pbVar12 + 0x20);
      pbVar16 = pbVar12 + 0x48;
      if ((pbVar5 == pbVar16) && (iVar9 < 8)) {
        iVar9 = *(int *)(pbVar18 + 8) + *(int *)(pbVar13 + 8) * -2 + *(int *)(pbVar12 + 8);
        *(int *)(pbVar12 + 8) = *(int *)(pbVar12 + 8) - iVar9;
        if (pbVar5 != (byte *)0x0) {
          *(int *)(pbVar5 + 8) = *(int *)(pbVar5 + 8) - iVar9;
        }
        if (pbVar17 == &DAT_0000000c) {
          *(int *)(pbVar4 + 0x248) = *(int *)(pbVar4 + 0x248) - iVar9;
          *(int *)(pbVar4 + 800) = *(int *)(pbVar4 + 800) - iVar9;
        }
        pbVar12[0xc] = pbVar12[0xc] | 4;
        pbVar16 = *(byte **)(pbVar12 + 0x20);
        if (pbVar16 != (byte *)0x0) {
          pbVar16[0xc] = pbVar16[0xc] | 4;
        }
      }
    }
  }
LAB_143c2d00e:
  if (iVar19 != 0) {
    if (pbVar4 < pbVar1) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = lVar15 - 1U;
      pbVar16 = SUB168(ZEXT816(0xe38e38e38e38e38f) * auVar6,0);
      pbVar17 = pbVar4 + 0x28;
      lVar14 = (lVar15 - 1U) / 0x48 + 1;
      do {
        if (((pbVar17[-0x1c] & 4) == 0) && (lVar15 = *(longlong *)pbVar17, lVar15 != 0)) {
          uVar11 = (*(int *)(pbVar17 + -0x24) - *(int *)(lVar15 + 4)) + *(int *)(lVar15 + 8);
          pbVar16 = (byte *)(ulonglong)uVar11;
          *(uint *)(pbVar17 + -0x20) = uVar11;
          iVar19 = iVar19 + -1;
          pbVar17[-0x1c] = pbVar17[-0x1c] | 4;
        }
        pbVar17 = pbVar17 + 0x48;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    if ((iVar19 != 0) && (pbVar4 < pbVar1)) {
      pbVar17 = pbVar4 + -0x48;
      do {
        pbVar16 = pbVar17;
        if ((pbVar17[0x54] & 4) == 0) {
          for (; (pbVar4 <= pbVar16 && ((pbVar16[0xc] & 4) == 0)); pbVar16 = pbVar16 + -0x48) {
          }
          for (pbVar13 = pbVar17 + 0x90; (pbVar13 < pbVar1 && ((pbVar13[0xc] & 4) == 0));
              pbVar13 = pbVar13 + 0x48) {
          }
          if (pbVar16 < pbVar4) {
            if (pbVar13 < pbVar1) {
              *(int *)(pbVar17 + 0x50) =
                   (*(int *)(pbVar17 + 0x4c) - *(int *)(pbVar13 + 4)) + *(int *)(pbVar13 + 8);
            }
          }
          else {
            if (pbVar13 < pbVar1) {
              sVar3 = *(short *)pbVar16;
              if (*(short *)pbVar13 != sVar3) {
                iVar19 = FUN_143c21f00((int)*(short *)(pbVar17 + 0x48) - (int)sVar3,
                                       *(int *)(pbVar13 + 8) - *(int *)(pbVar16 + 8),
                                       (int)*(short *)pbVar13 - (int)sVar3);
                goto LAB_143c2d121;
              }
              iVar19 = *(int *)(pbVar16 + 8);
            }
            else {
              iVar19 = *(int *)(pbVar17 + 0x4c) - *(int *)(pbVar16 + 4);
LAB_143c2d121:
              iVar19 = iVar19 + *(int *)(pbVar16 + 8);
            }
            *(int *)(pbVar17 + 0x50) = iVar19;
          }
        }
        pbVar16 = pbVar17 + 0x90;
        pbVar17 = pbVar17 + 0x48;
      } while (pbVar16 < pbVar1);
    }
  }
  return pbVar16;
}



// FUNCTION 143c2d150 FUN_143c2d150 body=342 status=ok
// SIG undefined FUN_143c2d150(void)

void FUN_143c2d150(longlong param_1,longlong param_2,int param_3)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  short *psVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  int *piVar13;
  
  param_1 = (longlong)param_3 * 0x928 + param_1;
  psVar8 = *(short **)(param_1 + 0x50);
  lVar12 = (longlong)param_3 * 0x624 + param_2;
  uVar2 = *(undefined4 *)(lVar12 + 0x3c);
  psVar1 = psVar8 + (longlong)*(int *)(param_1 + 0x48) * 0x24;
  iVar3 = FUN_143c22100((ulonglong)*(uint *)(param_2 + 0x38) / 0x28,uVar2);
  if (0x20 < iVar3) {
    iVar3 = 0x20;
  }
  for (; psVar8 < psVar1; psVar8 = psVar8 + 0x24) {
    piVar13 = (int *)0x0;
    uVar10 = 0;
    iVar7 = iVar3;
    if (*(int *)(lVar12 + 0x114) != 0) {
      do {
        piVar6 = (int *)(lVar12 + 0x118 + uVar10 * 0x1c);
        if (((piVar6[6] & 1U) != 0) &&
           (((int)*(char *)((longlong)psVar8 + 0xd) == *(int *)(param_1 + 0x58)) !=
            (bool)((byte)((uint)piVar6[6] >> 1) & 1))) {
          iVar4 = (int)*psVar8;
          iVar5 = iVar4 - *piVar6;
          if (iVar5 < 0) {
            iVar5 = *piVar6 - iVar4;
          }
          iVar11 = iVar4 - piVar6[3];
          if (iVar11 < 0) {
            iVar11 = piVar6[3] - iVar4;
          }
          if (iVar11 < iVar5) {
            piVar6 = piVar6 + 3;
          }
          iVar4 = iVar4 - *piVar6;
          if (iVar4 < 0) {
            iVar4 = -iVar4;
          }
          iVar5 = FUN_143c22100(iVar4,uVar2);
          if (iVar5 < iVar7) {
            piVar13 = piVar6;
            iVar7 = iVar5;
          }
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(lVar12 + 0x114));
      if (piVar13 != (int *)0x0) {
        *(int **)(psVar8 + 0xc) = piVar13;
      }
    }
  }
  return;
}



// FUNCTION 143c2d2b0 FUN_143c2d2b0 body=897 status=ok
// SIG undefined FUN_143c2d2b0(void)

undefined8 FUN_143c2d2b0(undefined8 *param_1,int param_2)

{
  undefined1 *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  short *psVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  longlong lVar15;
  short *psVar16;
  longlong lVar17;
  byte *pbVar18;
  int iVar19;
  int iVar20;
  short *psVar21;
  short *psVar22;
  undefined4 uVar23;
  ulonglong uVar24;
  short *local_res20;
  
  uVar5 = *param_1;
  lVar17 = (longlong)param_2;
  iVar14 = *(int *)(param_1 + lVar17 * 0x125 + 7);
  psVar10 = (short *)param_1[lVar17 * 0x125 + 8];
  lVar15 = param_1[0x252] + 0x3c + lVar17 * 0x624;
  *(undefined4 *)(param_1 + lVar17 * 0x125 + 9) = 0;
  if (param_2 == 0) {
    uVar23 = *(undefined4 *)(param_1 + 1);
  }
  else {
    uVar23 = *(undefined4 *)(param_1 + 2);
  }
  iVar7 = FUN_143c22100(*(undefined4 *)(lVar15 + 0xcc),uVar23);
  if (iVar7 < 0x11) {
    iVar7 = *(int *)(lVar15 + 0xcc);
  }
  else {
    iVar7 = FUN_143c20070(0x10,uVar23);
  }
  if (psVar10 < psVar10 + (longlong)iVar14 * 0x28) {
    psVar22 = psVar10 + 1;
    do {
      psVar16 = (short *)0x0;
      iVar20 = 0xffff;
      if ((int)*(uint *)(param_1 + lVar17 * 0x125 + 9) < 1) {
LAB_143c2d439:
        uVar9 = FUN_143c2c5f0(param_1 + lVar17 * 0x125 + 7,(int)*psVar22,
                              (int)*(char *)((longlong)psVar22 + -1),uVar5,&local_res20);
        psVar16 = local_res20;
        if ((int)uVar9 != 0) {
          return uVar9;
        }
        psVar21 = psVar22 + -1;
        local_res20[0] = 0;
        local_res20[1] = 0;
        local_res20[2] = 0;
        local_res20[3] = 0;
        local_res20[4] = 0;
        local_res20[5] = 0;
        local_res20[6] = 0;
        local_res20[7] = 0;
        local_res20[8] = 0;
        local_res20[9] = 0;
        local_res20[10] = 0;
        local_res20[0xb] = 0;
        local_res20[0xc] = 0;
        local_res20[0xd] = 0;
        local_res20[0xe] = 0;
        local_res20[0xf] = 0;
        local_res20[0x10] = 0;
        local_res20[0x11] = 0;
        local_res20[0x12] = 0;
        local_res20[0x13] = 0;
        local_res20[0x14] = 0;
        local_res20[0x15] = 0;
        local_res20[0x16] = 0;
        local_res20[0x17] = 0;
        local_res20[0x18] = 0;
        local_res20[0x19] = 0;
        local_res20[0x1a] = 0;
        local_res20[0x1b] = 0;
        *(short **)(local_res20 + 0x1c) = psVar21;
        *(short **)(local_res20 + 0x20) = psVar21;
        *(undefined1 *)((longlong)local_res20 + 0xd) = *(undefined1 *)((longlong)psVar22 + -1);
        *local_res20 = *psVar22;
        uVar8 = FUN_143c22100((int)*psVar22,uVar23);
        *(undefined4 *)(psVar16 + 2) = uVar8;
        *(undefined4 *)(psVar16 + 4) = uVar8;
        *(short **)(psVar22 + 0xb) = psVar21;
      }
      else {
        uVar24 = (ulonglong)*(uint *)(param_1 + lVar17 * 0x125 + 9);
        psVar21 = (short *)param_1[lVar17 * 0x125 + 10];
        do {
          if (*(char *)((longlong)psVar21 + 0xd) == *(char *)((longlong)psVar22 + -1)) {
            iVar19 = (int)*psVar22 - (int)*psVar21;
            if (iVar19 < 0) {
              iVar19 = -iVar19;
            }
            if ((iVar19 < iVar7) && (iVar19 < iVar20)) {
              if (*(longlong *)(psVar22 + 0xf) != 0) {
                iVar11 = 0;
                lVar15 = *(longlong *)(psVar21 + 0x1c);
                do {
                  if (*(longlong *)(lVar15 + 0x20) != 0) {
                    sVar2 = *(short *)(*(longlong *)(lVar15 + 0x20) + 2);
                    sVar3 = *(short *)(*(longlong *)(psVar22 + 0xf) + 2);
                    sVar4 = sVar2;
                    if (sVar2 < sVar3) {
                      sVar4 = sVar3;
                      sVar3 = sVar2;
                    }
                    iVar11 = (int)sVar4 - (int)sVar3;
                    if (iVar7 <= iVar11) goto LAB_143c2d3fd;
                  }
                  lVar15 = *(longlong *)(lVar15 + 0x18);
                } while (lVar15 != *(longlong *)(psVar21 + 0x1c));
                if (iVar7 <= iVar11) goto LAB_143c2d3fd;
              }
              psVar16 = psVar21;
              iVar20 = iVar19;
            }
          }
LAB_143c2d3fd:
          psVar21 = psVar21 + 0x24;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
        if (psVar16 == (short *)0x0) goto LAB_143c2d439;
        *(undefined8 *)(psVar22 + 0xb) = *(undefined8 *)(psVar16 + 0x1c);
        *(short **)(*(longlong *)(psVar16 + 0x20) + 0x18) = psVar22 + -1;
        *(short **)(psVar16 + 0x20) = psVar22 + -1;
      }
      psVar16 = psVar22 + 0x27;
      psVar22 = psVar22 + 0x28;
    } while (psVar16 < psVar10 + (longlong)iVar14 * 0x28);
  }
  puVar13 = (undefined1 *)param_1[lVar17 * 0x125 + 10];
  puVar1 = puVar13 + (longlong)*(int *)(param_1 + lVar17 * 0x125 + 9) * 0x48;
  puVar12 = puVar13;
  if (puVar13 < puVar1) {
    do {
      lVar15 = *(longlong *)(puVar12 + 0x38);
      if (lVar15 != 0) {
        do {
          *(undefined1 **)(lVar15 + 0x10) = puVar12;
          lVar15 = *(longlong *)(lVar15 + 0x18);
        } while (lVar15 != *(longlong *)(puVar12 + 0x38));
      }
      puVar12 = puVar12 + 0x48;
    } while (puVar12 < puVar1);
    if (puVar13 < puVar1) {
      puVar13 = puVar13 + 0xc;
      do {
        pbVar18 = *(byte **)(puVar13 + 0x2c);
        iVar14 = 0;
        iVar7 = 0;
        do {
          if ((*pbVar18 & 1) == 0) {
            iVar7 = iVar7 + 1;
          }
          else {
            iVar14 = iVar14 + 1;
          }
          lVar15 = *(longlong *)(pbVar18 + 0x28);
          if ((lVar15 == 0) || (*(undefined1 **)(lVar15 + 0x10) == puVar13 + -0xc)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((*(longlong *)(pbVar18 + 0x20) != 0) || (bVar6)) {
            psVar10 = *(short **)(puVar13 + 0x14);
            lVar17 = *(longlong *)(pbVar18 + 0x20);
            if (bVar6) {
              psVar10 = *(short **)(puVar13 + 0x1c);
              lVar17 = lVar15;
            }
            if (psVar10 == (short *)0x0) {
LAB_143c2d5be:
              psVar10 = *(short **)(lVar17 + 0x10);
            }
            else {
              iVar20 = (int)*(short *)(puVar13 + -0xc) - (int)*psVar10;
              if (iVar20 < 0) {
                iVar20 = -iVar20;
              }
              sVar2 = *(short *)(lVar17 + 2);
              sVar3 = *(short *)(pbVar18 + 2);
              sVar4 = sVar2;
              if (sVar2 < sVar3) {
                sVar4 = sVar3;
                sVar3 = sVar2;
              }
              if ((int)sVar4 - (int)sVar3 < iVar20) goto LAB_143c2d5be;
            }
            if (bVar6) {
              *(short **)(puVar13 + 0x1c) = psVar10;
              *(byte *)(psVar10 + 6) = *(byte *)(psVar10 + 6) | 2;
            }
            else {
              *(short **)(puVar13 + 0x14) = psVar10;
            }
          }
          pbVar18 = *(byte **)(pbVar18 + 0x18);
        } while (pbVar18 != *(byte **)(puVar13 + 0x2c));
        *puVar13 = 0;
        if (0 < iVar14) {
          *puVar13 = iVar7 <= iVar14;
        }
        if ((*(longlong *)(puVar13 + 0x1c) != 0) && (*(longlong *)(puVar13 + 0x14) != 0)) {
          *(undefined8 *)(puVar13 + 0x1c) = 0;
        }
        puVar12 = puVar13 + 0x3c;
        puVar13 = puVar13 + 0x48;
      } while (puVar12 < puVar1);
    }
  }
  return 0;
}



// FUNCTION 143c2d640 FUN_143c2d640 body=151 status=ok
// SIG undefined FUN_143c2d640(void)

undefined8 FUN_143c2d640(longlong param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  ushort *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar5 = *(byte **)((longlong)param_2 * 0x928 + 0x40 + param_1);
  pbVar6 = pbVar5 + (longlong)*(int *)((longlong)param_2 * 0x928 + 0x38 + param_1) * 0x50;
  uVar3 = FUN_143c30840();
  if ((int)uVar3 == 0) {
    for (; pbVar5 < pbVar6; pbVar5 = pbVar5 + 0x50) {
      puVar4 = *(ushort **)(pbVar5 + 0x40);
      uVar1 = *puVar4;
      *pbVar5 = *pbVar5 & 0xfe;
      if (puVar4 != *(ushort **)(pbVar5 + 0x48)) {
        do {
          uVar2 = uVar1 & 3;
          puVar4 = *(ushort **)(puVar4 + 0x10);
          uVar1 = *puVar4;
          if ((uVar2 == 0) && ((uVar1 & 3) == 0)) goto LAB_143c2d6c1;
        } while (puVar4 != *(ushort **)(pbVar5 + 0x48));
        *pbVar5 = *pbVar5 | 1;
      }
LAB_143c2d6c1:
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143c2d6e0 FUN_143c2d6e0 body=770 status=ok
// SIG undefined FUN_143c2d6e0(void)

void FUN_143c2d6e0(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int *piVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  char *pcVar14;
  short *psVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  
  lVar13 = (longlong)param_2 * 0x928;
  plVar12 = *(longlong **)(lVar13 + 0x40 + param_1);
  iVar4 = *(int *)(lVar13 + 0x58 + param_1);
  plVar18 = plVar12 + (longlong)*(int *)(lVar13 + 0x38 + param_1) * 10;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x1290) + 0x38) * 8;
  if (param_2 == 0) {
    uVar5 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x10);
  }
  iVar8 = FUN_143c20070(0xc0,uVar5);
  if (plVar12 < plVar18) {
    pcVar14 = (char *)((longlong)plVar12 + 1);
    do {
      if (*pcVar14 == iVar4) {
        piVar10 = (int *)((longlong)plVar12 + 4);
        do {
          if (((piVar10 + -1 != (int *)(pcVar14 + -1)) &&
              ((int)*(char *)((longlong)piVar10 + -3) + (int)*pcVar14 == 0)) &&
             (iVar17 = (int)*(short *)((longlong)piVar10 + -2) - (int)*(short *)(pcVar14 + 1),
             -1 < iVar17)) {
            iVar3 = (int)*(short *)(pcVar14 + 3);
            if ((int)*(short *)(pcVar14 + 3) < (int)(short)*piVar10) {
              iVar3 = (int)(short)*piVar10;
            }
            iVar16 = (int)*(short *)(pcVar14 + 5);
            if ((int)*(short *)((longlong)piVar10 + 2) < (int)*(short *)(pcVar14 + 5)) {
              iVar16 = (int)*(short *)((longlong)piVar10 + 2);
            }
            iVar16 = iVar16 - iVar3;
            if ((int)((iVar7 >> 0x1f & 0x7ffU) + iVar7) >> 0xb <= iVar16) {
              iVar3 = iVar17 * 8;
              if ((iVar3 < *(int *)(pcVar14 + 0x33) * 9) &&
                 ((iVar3 < *(int *)(pcVar14 + 0x33) * 7 || (*(int *)(pcVar14 + 0x37) < iVar16)))) {
                *(int *)(pcVar14 + 0x33) = iVar17;
                *(int *)(pcVar14 + 0x37) = iVar16;
                *(int **)(pcVar14 + 0x1f) = piVar10 + -1;
              }
              if ((iVar3 < piVar10[0xc] * 9) &&
                 ((iVar3 < piVar10[0xc] * 7 || (piVar10[0xd] < iVar16)))) {
                piVar10[0xc] = iVar17;
                piVar10[0xd] = iVar16;
                *(char **)(piVar10 + 7) = pcVar14 + -1;
              }
            }
          }
          plVar9 = (longlong *)(piVar10 + 0x13);
          piVar10 = piVar10 + 0x14;
        } while (plVar9 < plVar18);
      }
      plVar9 = (longlong *)(pcVar14 + 0x4f);
      pcVar14 = pcVar14 + 0x50;
    } while (plVar9 < plVar18);
  }
  if (plVar12 < plVar18) {
    piVar10 = (int *)((longlong)plVar12 + 0x34);
    do {
      lVar13 = *(longlong *)(piVar10 + -5);
      if ((((lVar13 != 0) && (piVar1 = piVar10 + -0xd, *(int **)(lVar13 + 0x20) == piVar1)) &&
          (*(short *)((longlong)piVar10 + -0x32) < *(short *)(lVar13 + 2))) && (*piVar10 < iVar8)) {
        psVar15 = (short *)((longlong)plVar12 + 2);
        do {
          if (((*psVar15 <= *(short *)((longlong)piVar10 + -0x32)) &&
              (piVar2 = (int *)(psVar15 + -1), piVar1 != piVar2)) &&
             ((piVar6 = *(int **)(psVar15 + 0xf), piVar6 != (int *)0x0 &&
              (*(int **)(piVar6 + 8) == piVar2)))) {
            if ((*(short *)(lVar13 + 2) <= *(short *)((longlong)piVar6 + 2)) &&
               ((*(short *)((longlong)piVar10 + -0x32) != *psVar15 ||
                (*(short *)(lVar13 + 2) != *(short *)((longlong)piVar6 + 2))))) {
              if ((*piVar10 < *(int *)(psVar15 + 0x19)) && (*(int *)(psVar15 + 0x19) < *piVar10 * 4)
                 ) {
                if (piVar10[1] < *(int *)(psVar15 + 0x1b) * 3) {
                  *(undefined8 *)(lVar13 + 0x20) = 0;
                  piVar10[-5] = 0;
                  piVar10[-4] = 0;
                  break;
                }
                plVar9 = plVar12 + 4;
                lVar11 = (ulonglong)((longlong)plVar18 + (-1 - (longlong)plVar12)) / 0x50 + 1;
                do {
                  if ((int *)*plVar9 == piVar2) {
                    plVar9[1] = lVar13;
LAB_143c2d93a:
                    *plVar9 = 0;
                  }
                  else if ((int *)*plVar9 == piVar6) {
                    plVar9[1] = (longlong)piVar1;
                    goto LAB_143c2d93a;
                  }
                  plVar9 = plVar9 + 10;
                  lVar11 = lVar11 + -1;
                } while (lVar11 != 0);
              }
            }
          }
          plVar9 = (longlong *)(psVar15 + 0x27);
          psVar15 = psVar15 + 0x28;
        } while (plVar9 < plVar18);
      }
      plVar9 = (longlong *)(piVar10 + 7);
      piVar10 = piVar10 + 0x14;
    } while (plVar9 < plVar18);
  }
  if (plVar12 < plVar18) {
    plVar12 = plVar12 + 4;
    do {
      lVar13 = *plVar12;
      if ((lVar13 != 0) &&
         (*(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + 1,
         *(longlong **)(lVar13 + 0x20) != plVar12 + -4)) {
        *plVar12 = 0;
        if ((*(int *)(lVar13 + 0x34) < iVar8) ||
           (*(int *)((longlong)plVar12 + 0x14) < *(int *)(lVar13 + 0x34) * 4)) {
          plVar12[1] = *(longlong *)(lVar13 + 0x20);
        }
        else {
          *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + -1;
        }
      }
      plVar9 = plVar12 + 6;
      plVar12 = plVar12 + 10;
    } while (plVar9 < plVar18);
  }
  return;
}



// FUNCTION 143c2d9f0 FUN_143c2d9f0 body=159 status=ok
// SIG undefined FUN_143c2d9f0(void)

void FUN_143c2d9f0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_res8 [2];
  
  bVar1 = false;
  iVar5 = 0;
  uVar4 = 0x30;
  iVar2 = local_res8[0];
  do {
    if (param_1 != 0) {
      iVar2 = FT_Get_Char_Index(**(undefined8 **)(param_1 + 0x30),uVar4);
    }
    if ((iVar2 != 0) && (iVar3 = FUN_143c20630(param_2,iVar2,0x803,local_res8), iVar3 == 0)) {
      if (bVar1) {
        if (local_res8[0] != iVar5) {
          *(undefined1 *)(param_1 + 0x28) = 0;
          return;
        }
      }
      else {
        bVar1 = true;
        iVar5 = local_res8[0];
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x3a);
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 143c2da90 FUN_143c2da90 body=1281 status=ok
// SIG undefined FUN_143c2da90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c2da90(longlong *param_1,longlong param_2)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_258 [32];
  longlong *local_238;
  uint local_230;
  undefined *local_228;
  longlong local_220;
  longlong *local_218;
  short local_210;
  short sStack_20e;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 local_200;
  longlong lStack_1f8;
  int local_1e8 [52];
  int local_118 [52];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  local_228 = &DAT_145d215e0 + (longlong)*(int *)(*param_1 + 0xc) * 8;
  iVar13 = *(int *)(&DAT_145d215e0 + (longlong)*(int *)(*param_1 + 0xc) * 8);
  local_238 = param_1;
  local_220 = param_2;
joined_r0x000143c2dadb:
  if (iVar13 == 0x2f7) {
    return;
  }
  local_218 = (longlong *)((longlong)param_1 + 0x3c);
  pbVar10 = &DAT_145d212e0 + iVar13;
  if ((local_228[4] & 2) == 0) {
    local_218 = param_1 + 0xcc;
  }
  uVar18 = 0;
  uVar16 = 0;
  bVar4 = true;
  do {
    local_230 = (uint)uVar16;
    uVar19 = uVar16;
    while( true ) {
      do {
        do {
          while( true ) {
            bVar1 = *pbVar10;
            uVar17 = (uint)uVar18;
            if (bVar1 == 0) {
              uVar8 = (uint)uVar19;
              if ((uVar8 == 0) && (uVar17 == 0)) goto LAB_143c2df21;
              uVar16 = 1;
              if (1 < uVar17) goto LAB_143c2ddb0;
              goto LAB_143c2ddf7;
            }
            uVar8 = (uint)bVar1;
            pbVar10 = pbVar10 + 1;
            if (0x7f < bVar1) {
              uVar8 = (uint)bVar1;
              if (bVar1 < 0xe0) {
                iVar13 = 1;
                uVar8 = uVar8 & 0x1f;
              }
              else if (uVar8 < 0xf0) {
                iVar13 = 2;
                uVar8 = uVar8 & 0xf;
              }
              else {
                iVar13 = 3;
                uVar8 = uVar8 & 7;
              }
              do {
                bVar1 = *pbVar10;
                pbVar10 = pbVar10 + 1;
                uVar8 = (int)(char)bVar1 & 0x3fU | uVar8 << 6;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
            if (uVar8 != 0x7c) break;
            bVar4 = false;
          }
          iVar13 = FT_Get_Char_Index(*(undefined8 *)param_1[6]);
          param_1 = local_238;
        } while (iVar13 == 0);
        iVar13 = FUN_143c216b0(param_2);
        lVar12 = *(longlong *)(param_2 + 0x78);
        uStack_20c = *(undefined4 *)(lVar12 + 0x9c);
        uStack_208 = *(undefined4 *)(lVar12 + 0xa0);
        uStack_204 = *(undefined4 *)(lVar12 + 0xa4);
        lVar5 = *(longlong *)(lVar12 + 0xa0);
        local_200 = *(undefined8 *)(lVar12 + 0xa8);
        lStack_1f8 = *(longlong *)(lVar12 + 0xb0);
        local_210 = (short)*(undefined4 *)(lVar12 + 0x98);
        sStack_20e = (short)((uint)*(undefined4 *)(lVar12 + 0x98) >> 0x10);
        param_1 = local_238;
      } while ((iVar13 != 0) || (sStack_20e < 1));
      iVar14 = -1;
      iVar13 = 0;
      iVar6 = 0;
      lVar12 = 0;
      if (0 < (longlong)local_210) {
        do {
          sVar2 = *(short *)(lStack_1f8 + lVar12 * 2);
          lVar11 = (longlong)sVar2;
          if (iVar6 < sVar2) {
            uVar3 = *(ushort *)(local_228 + 4);
            if ((uVar3 & 2) == 0) {
              lVar7 = (longlong)iVar6;
              if ((uVar3 & 1) == 0) {
                if (lVar7 <= lVar11) {
                  piVar15 = (int *)(lVar5 + 4 + lVar7 * 8);
                  lVar11 = (lVar11 - lVar7) + 1;
                  do {
                    if ((iVar14 < 0) || (*piVar15 < iVar13)) {
                      iVar13 = *piVar15;
                      iVar14 = iVar6;
                    }
                    iVar6 = iVar6 + 1;
                    piVar15 = piVar15 + 2;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
              }
              else if (lVar7 <= lVar11) {
                piVar15 = (int *)(lVar5 + 4 + lVar7 * 8);
                lVar11 = (lVar11 - lVar7) + 1;
                do {
                  if ((iVar14 < 0) || (iVar13 < *piVar15)) {
                    iVar13 = *piVar15;
                    iVar14 = iVar6;
                  }
                  iVar6 = iVar6 + 1;
                  piVar15 = piVar15 + 2;
                  lVar11 = lVar11 + -1;
                } while (lVar11 != 0);
              }
            }
            else {
              lVar7 = (longlong)iVar6;
              if ((uVar3 & 1) == 0) {
                for (; lVar7 <= lVar11; lVar7 = lVar7 + 1) {
                  if ((iVar14 < 0) || (*(int *)(lVar5 + lVar7 * 8) < iVar13)) {
                    iVar13 = *(int *)(lVar5 + lVar7 * 8);
                    iVar14 = iVar6;
                  }
                  iVar6 = iVar6 + 1;
                }
              }
              else {
                for (; lVar7 <= lVar11; lVar7 = lVar7 + 1) {
                  if ((iVar14 < 0) || (iVar13 < *(int *)(lVar5 + lVar7 * 8))) {
                    iVar13 = *(int *)(lVar5 + lVar7 * 8);
                    iVar14 = iVar6;
                  }
                  iVar6 = iVar6 + 1;
                }
              }
            }
          }
          lVar12 = lVar12 + 1;
          iVar6 = sVar2 + 1;
        } while (lVar12 < local_210);
        uVar19 = (ulonglong)local_230;
      }
      param_2 = local_220;
      if (!bVar4) break;
      local_1e8[uVar18] = iVar13;
      uVar18 = (ulonglong)(uVar17 + 1);
    }
    uVar16 = (ulonglong)((int)uVar19 + 1);
    local_118[uVar19] = iVar13;
  } while( true );
LAB_143c2ddb0:
  do {
    iVar13 = (int)uVar16;
    if (iVar13 != 0) {
      piVar15 = local_1e8 + uVar16;
      do {
        iVar6 = *piVar15;
        uVar9 = (int)uVar16 - 1;
        uVar16 = (ulonglong)uVar9;
        if (local_1e8[uVar16] <= iVar6) break;
        *piVar15 = local_1e8[uVar16];
        piVar15 = piVar15 + -1;
        local_1e8[uVar16] = iVar6;
      } while (uVar9 != 0);
    }
    uVar9 = iVar13 + 1;
    uVar16 = (ulonglong)uVar9;
  } while (uVar9 < uVar17);
LAB_143c2ddf7:
  uVar16 = 1;
  if (1 < uVar8) {
    do {
      iVar13 = (int)uVar16;
      if (iVar13 != 0) {
        piVar15 = local_118 + uVar16;
        do {
          iVar6 = *piVar15;
          uVar9 = (int)uVar16 - 1;
          uVar16 = (ulonglong)uVar9;
          if (local_118[uVar16] <= iVar6) break;
          *piVar15 = local_118[uVar16];
          piVar15 = piVar15 + -1;
          local_118[uVar16] = iVar6;
        } while (uVar9 != 0);
      }
      uVar9 = iVar13 + 1;
      uVar16 = (ulonglong)uVar9;
    } while (uVar9 < uVar8);
  }
  piVar15 = (int *)((longlong)local_218 + (ulonglong)*(uint *)(local_218 + 0x1b) * 0x1c + 0xdc);
  *(uint *)(local_218 + 0x1b) = *(uint *)(local_218 + 0x1b) + 1;
  if (uVar8 == 0) {
    iVar13 = local_1e8[uVar18 >> 1];
    piVar15[3] = iVar13;
    *piVar15 = iVar13;
  }
  else if (uVar17 == 0) {
    iVar13 = local_118[uVar19 >> 1];
    piVar15[3] = iVar13;
    *piVar15 = iVar13;
  }
  else {
    *piVar15 = local_1e8[uVar18 >> 1];
    piVar15[3] = local_118[uVar19 >> 1];
  }
  iVar13 = *piVar15;
  if ((piVar15[3] != iVar13) && ((ushort)(piVar15[3] < iVar13) != (*(ushort *)(local_228 + 4) & 1)))
  {
    iVar13 = (piVar15[3] + iVar13) / 2;
    piVar15[3] = iVar13;
    *piVar15 = iVar13;
  }
  piVar15[6] = 0;
  iVar13 = piVar15[6];
  if ((local_228[4] & 1) != 0) {
    iVar13 = 2;
  }
  piVar15[6] = iVar13;
  param_1 = local_238;
LAB_143c2df21:
  iVar13 = *(int *)(local_228 + 8);
  local_228 = local_228 + 8;
  goto joined_r0x000143c2dadb;
}



// FUNCTION 143c2dfa0 FUN_143c2dfa0 body=812 status=ok
// SIG undefined FUN_143c2dfa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143c2dfa0(longlong *param_1,longlong param_2)

{
  undefined *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  undefined1 auStack_31d8 [32];
  undefined4 local_31b8 [4];
  undefined1 local_31a8 [8];
  longlong local_31a0;
  undefined8 local_3198;
  undefined8 uStack_3190;
  undefined8 local_3188;
  undefined4 local_3170;
  undefined8 local_2518 [7];
  int local_24e0 [1172];
  undefined4 local_1290;
  undefined1 *local_1288;
  ulonglong local_38;
  ulonglong uVar8;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_31d8;
  _guard_xfg_dispatch_icall_nop(local_2518,0,0x12a0);
  local_2518[0] = *(undefined8 *)(param_2 + 0x98);
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0xcd) = 0;
  puVar1 = (&PTR_DAT_145d21a40)[*(int *)(*param_1 + 8)];
  iVar3 = FT_Get_Char_Index(*(undefined8 *)param_1[6],*(undefined4 *)(puVar1 + 0x10));
  if ((((iVar3 != 0) ||
       ((*(int *)(puVar1 + 0x14) != 0 &&
        ((iVar3 = FT_Get_Char_Index(*(undefined8 *)param_1[6]), iVar3 != 0 ||
         ((*(int *)(puVar1 + 0x18) != 0 &&
          (iVar3 = FT_Get_Char_Index(*(undefined8 *)param_1[6]), iVar3 != 0)))))))) &&
      (iVar3 = FUN_143c216b0(param_2,iVar3,1), iVar3 == 0)) &&
     (lVar9 = *(longlong *)(param_2 + 0x78), 0 < *(short *)(lVar9 + 0x9a))) {
    _guard_xfg_dispatch_icall_nop(local_31a8,0,0xc88);
    local_3170 = (undefined4)param_1[7];
    local_1288 = local_31a8;
    local_3198 = 0x1000000010000;
    uStack_3190 = 0;
    local_3188 = 0;
    local_1290 = 0;
    local_31a0 = param_2;
    iVar3 = FUN_143c2efb0(local_2518,lVar9 + 0x98);
    if (iVar3 == 0) {
      lVar9 = (longlong)param_1 + 0x3c;
      piVar11 = local_24e0;
      uVar8 = 0;
      do {
        local_31b8[0] = 0;
        iVar3 = FUN_143c30840(local_2518,uVar8);
        if (iVar3 != 0) break;
        FUN_143c30bd0(local_2518,0,0,uVar8);
        uVar4 = *(ulonglong *)(piVar11 + 2);
        uVar10 = (longlong)*piVar11 * 0x50 + uVar4;
        uVar6 = 0;
        if (uVar4 < uVar10) {
          do {
            uVar2 = *(ulonglong *)(uVar4 + 0x20);
            if (((uVar2 != 0) && (*(ulonglong *)(uVar2 + 0x20) == uVar4)) && (uVar4 < uVar2)) {
              iVar3 = (int)*(short *)(uVar4 + 2) - (int)*(short *)(uVar2 + 2);
              if (iVar3 < 0) {
                iVar3 = -iVar3;
              }
              if ((uint)uVar6 < 0x10) {
                lVar5 = uVar6 + 1;
                uVar6 = (ulonglong)((uint)uVar6 + 1);
                *(int *)(lVar9 + lVar5 * 0xc) = iVar3;
              }
            }
            uVar4 = uVar4 + 0x50;
          } while (uVar4 < uVar10);
          local_31b8[0] = (undefined4)uVar6;
        }
        FUN_143c31e80(local_31b8,lVar9 + 0xc);
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        *(undefined4 *)(lVar9 + 8) = local_31b8[0];
        piVar11 = piVar11 + 0x24a;
        lVar9 = lVar9 + 0x624;
      } while ((int)uVar7 < 2);
    }
  }
  if (*(int *)((longlong)param_1 + 0x44) == 0) {
    iVar3 = (int)param_1[7] * 0x32;
    iVar3 = (int)((iVar3 >> 0x1f & 0x7ffU) + iVar3) >> 0xb;
  }
  else {
    iVar3 = (int)param_1[9];
  }
  *(int *)((longlong)param_1 + 0x10c) = iVar3;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(int *)(param_1 + 0x21) = iVar3 / 5;
  if ((int)param_1[0xcd] == 0) {
    iVar3 = (int)param_1[7] * 0x32;
    iVar3 = (int)((iVar3 >> 0x1f & 0x7ffU) + iVar3) >> 0xb;
  }
  else {
    iVar3 = *(int *)((longlong)param_1 + 0x66c);
  }
  *(int *)((longlong)param_1 + 0x72c) = iVar3 / 5;
  *(int *)(param_1 + 0xe6) = iVar3;
  *(undefined1 *)((longlong)param_1 + 0x734) = 0;
  FUN_143c2eec0(local_2518);
  return;
}



// FUNCTION 143c2e2d0 FUN_143c2e2d0 body=317 status=ok
// SIG undefined FUN_143c2e2d0(void)

void FUN_143c2e2d0(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (param_3 == 0) {
    iVar5 = *(int *)(param_2 + 8);
    iVar7 = *(int *)(param_2 + 0x10);
  }
  else {
    iVar5 = *(int *)(param_2 + 0xc);
    iVar7 = *(int *)(param_2 + 0x14);
  }
  param_1 = (longlong)param_3 * 0x624 + param_1;
  if ((*(int *)(param_1 + 0x658) != iVar5) || (*(int *)(param_1 + 0x65c) != iVar7)) {
    uVar6 = 0;
    *(int *)(param_1 + 0x658) = iVar5;
    *(int *)(param_1 + 0x65c) = iVar7;
    *(int *)(param_1 + 0x3c) = iVar5;
    *(int *)(param_1 + 0x40) = iVar7;
    if (*(int *)(param_1 + 0x114) != 0) {
      do {
        piVar4 = (int *)(param_1 + 0x118 + (ulonglong)uVar6 * 0x1c);
        iVar1 = FUN_143c22100(*piVar4,iVar5);
        piVar4[1] = iVar1 + iVar7;
        piVar4[2] = iVar1 + iVar7;
        iVar1 = FUN_143c22100(piVar4[3],iVar5);
        piVar4[6] = piVar4[6] & 0xfffffffe;
        piVar4[4] = iVar1 + iVar7;
        piVar4[5] = iVar1 + iVar7;
        iVar1 = FUN_143c22100(*piVar4 - piVar4[3],iVar5);
        if (iVar1 + 0x30U < 0x61) {
          uVar3 = piVar4[1] + 0x20U & 0xffffffc0;
          piVar4[2] = uVar3;
          iVar2 = FUN_143c20070(uVar3,iVar5);
          iVar2 = iVar2 - piVar4[3];
          iVar1 = iVar2;
          if (iVar2 < 0) {
            iVar1 = -iVar2;
          }
          iVar1 = FUN_143c22100(iVar1,iVar5);
          if (iVar1 < 0x20) {
            uVar3 = 0;
          }
          else {
            uVar3 = iVar1 + 0x20U & 0xffffffc0;
          }
          if (iVar2 < 0) {
            uVar3 = -uVar3;
          }
          piVar4[6] = piVar4[6] | 1;
          piVar4[5] = piVar4[2] - uVar3;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x114));
    }
  }
  return;
}



// FUNCTION 143c2e410 FUN_143c2e410 body=511 status=ok
// SIG undefined FUN_143c2e410(void)

undefined8 FUN_143c2e410(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined **ppuVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  byte bVar11;
  ulonglong uVar12;
  byte *_Dst;
  uint local_res8 [2];
  
  lVar2 = *param_1;
  _Dst = (byte *)param_1[2];
  uVar3 = *(undefined8 *)(lVar2 + 0x88);
  _guard_xfg_dispatch_icall_nop(_Dst,0x7f,(longlong)(int)param_1[1]);
  iVar4 = FUN_143c24190(lVar2,0x756e6963);
  uVar12 = 0;
  if (iVar4 == 0) {
    ppuVar7 = &PTR_DAT_145d21f90;
    uVar10 = uVar12;
    do {
      piVar9 = *(int **)((&PTR_DAT_145d21a40)[*(int *)(*ppuVar7 + 8)] + 8);
      if ((piVar9 != (int *)0x0) && (*(int *)(*ppuVar7 + 0x10) == 10)) {
        iVar4 = *piVar9;
        while (iVar4 != 0) {
          local_res8[0] = FT_Get_Char_Index(lVar2,iVar4);
          if (((local_res8[0] != 0) && (local_res8[0] < *(uint *)(param_1 + 1))) &&
             (_Dst[local_res8[0]] == 0x7f)) {
            _Dst[local_res8[0]] = (byte)uVar10;
          }
          for (uVar5 = FT_Get_Next_Char(lVar2,iVar4,local_res8);
              (local_res8[0] != 0 && (uVar5 <= (uint)piVar9[1]));
              uVar5 = FT_Get_Next_Char(lVar2,uVar5,local_res8)) {
            if ((local_res8[0] < *(uint *)(param_1 + 1)) && (_Dst[local_res8[0]] == 0x7f)) {
              _Dst[local_res8[0]] = (byte)uVar10;
            }
          }
          piVar1 = piVar9 + 2;
          piVar9 = piVar9 + 2;
          iVar4 = *piVar1;
        }
      }
      uVar10 = (ulonglong)((int)uVar10 + 1);
      ppuVar7 = &PTR_DAT_145d21f90 + uVar10;
      uVar8 = uVar12;
    } while ((&PTR_DAT_145d21f90)[uVar10] != (undefined *)0x0);
    do {
      uVar8 = (ulonglong)((int)uVar8 + 1);
    } while ((&PTR_DAT_145d21f90)[uVar8] != (undefined *)0x0);
    uVar5 = 0x30;
    do {
      uVar6 = FT_Get_Char_Index(lVar2,uVar5);
      if ((uVar6 != 0) && (uVar6 < *(uint *)(param_1 + 1))) {
        _Dst[uVar6] = _Dst[uVar6] | 0x80;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x3a);
  }
  if ((*(int *)(param_1[0x35] + 0x18) != 0x7f) && (0 < (int)param_1[1])) {
    do {
      if ((*_Dst & 0x7f) == 0x7f) {
        bVar11 = *_Dst & 0x80;
        *_Dst = bVar11;
        *_Dst = *(byte *)(param_1[0x35] + 0x18) | bVar11;
      }
      uVar5 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar5;
      _Dst = _Dst + 1;
    } while ((int)uVar5 < (int)param_1[1]);
  }
  FUN_143c244d0(lVar2,uVar3);
  return 0;
}



// FUNCTION 143c2e610 FUN_143c2e610 body=200 status=ok
// SIG undefined FUN_143c2e610(void)

void FUN_143c2e610(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    plVar2 = param_1 + 4;
    lVar3 = 0x31;
    uVar1 = *(undefined8 *)(*param_1 + 0x98);
    do {
      if (*plVar2 != 0) {
        if (*(code **)((&PTR_DAT_145d21758)
                       [*(int *)(*(longlong *)
                                  (((longlong)&UNK_145d21f70 - (longlong)param_1) + (longlong)plVar2
                                  ) + 4)] + 0x20) != (code *)0x0) {
          (**(code **)((&PTR_DAT_145d21758)
                       [*(int *)(*(longlong *)
                                  (((longlong)&UNK_145d21f70 - (longlong)param_1) + (longlong)plVar2
                                  ) + 4)] + 0x20))();
        }
        ft_mem_free(uVar1,*plVar2);
        *plVar2 = 0;
      }
      plVar2 = plVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[2] = 0;
    *param_1 = 0;
    ft_mem_free(uVar1,param_1);
  }
  return;
}



// FUNCTION 143c2e6e0 FUN_143c2e6e0 body=298 status=ok
// SIG undefined FUN_143c2e6e0(void)

int FUN_143c2e6e0(longlong *param_1,uint param_2,uint param_3,longlong *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int local_res10 [2];
  
  local_res10[0] = 0;
  if (param_2 < *(uint *)(param_1 + 1)) {
    if ((param_3 == 0x21) || (0x30 < (int)(param_3 + 1))) {
      param_3 = *(byte *)(param_1[2] + (ulonglong)param_2) & 0x7f;
    }
    lVar5 = (longlong)(int)param_3;
    plVar4 = (longlong *)param_1[lVar5 + 4];
    puVar1 = (&PTR_DAT_145d21f90)[lVar5];
    puVar2 = (&PTR_DAT_145d21758)[*(int *)(puVar1 + 4)];
    iVar6 = 0;
    if (plVar4 == (longlong *)0x0) {
      uVar3 = *(undefined8 *)(*param_1 + 0x98);
      plVar4 = (longlong *)FUN_143c271e0(uVar3,*(undefined4 *)(puVar2 + 8),local_res10);
      iVar6 = local_res10[0];
      if (local_res10[0] == 0) {
        *plVar4 = (longlong)puVar1;
        plVar4[6] = (longlong)param_1;
        if ((*(code **)(puVar2 + 0x10) == (code *)0x0) ||
           (local_res10[0] = (**(code **)(puVar2 + 0x10))(plVar4,*param_1), iVar6 = local_res10[0],
           local_res10[0] == 0)) {
          param_1[lVar5 + 4] = (longlong)plVar4;
        }
        else {
          if (*(code **)(puVar2 + 0x20) != (code *)0x0) {
            (**(code **)(puVar2 + 0x20))(plVar4);
          }
          ft_mem_free(uVar3,plVar4);
          plVar4 = (longlong *)0x0;
          iVar6 = local_res10[0];
        }
      }
    }
    *param_4 = (longlong)plVar4;
    return iVar6;
  }
  *param_4 = 0;
  return 6;
}



// FUNCTION 143c2e810 FUN_143c2e810 body=165 status=ok
// SIG undefined FUN_143c2e810(void)

int FUN_143c2e810(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int local_res8 [2];
  
  plVar1 = (longlong *)
           FUN_143c271e0(*(undefined8 *)(param_1 + 0x98),*(int *)(param_1 + 0x10) + 0x1b0,local_res8
                        );
  if (local_res8[0] == 0) {
    *plVar1 = param_1;
    *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(param_1 + 0x10);
    plVar1[2] = (longlong)(plVar1 + 0x36);
    plVar1[0x35] = param_3;
    local_res8[0] = FUN_143c2e410(plVar1);
    if (local_res8[0] != 0) {
      FUN_143c2e610(plVar1);
      *param_2 = 0;
      return local_res8[0];
    }
    *(undefined4 *)(plVar1 + 3) = 0;
    local_res8[0] = 0;
  }
  *param_2 = (longlong)plVar1;
  return local_res8[0];
}



// FUNCTION 143c2e8c0 FUN_143c2e8c0 body=255 status=ok
// SIG undefined FUN_143c2e8c0(void)

ushort * FUN_143c2e8c0(longlong param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ushort *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  
  puVar8 = (ushort *)(longlong)*(int *)((longlong)param_2 * 0x928 + 0x38 + param_1);
  uVar10 = *(ulonglong *)((longlong)param_2 * 0x928 + 0x40 + param_1);
  uVar9 = (longlong)puVar8 * 0x50 + uVar10;
  if (param_2 == 0) {
    if (uVar10 < uVar9) {
      puVar12 = (undefined8 *)(uVar10 + 0x48);
      uVar10 = (uVar9 - uVar10) - 1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar10;
      puVar8 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar6,0);
      lVar11 = uVar10 / 0x50 + 1;
      do {
        lVar3 = puVar12[-7];
        if (lVar3 != 0) {
          puVar4 = (ushort *)puVar12[-1];
          puVar5 = (ushort *)*puVar12;
          uVar1 = *(uint *)(lVar3 + 8);
          *puVar4 = *puVar4 | 4;
          *(uint *)(puVar4 + 8) = uVar1;
          while (puVar8 = (ushort *)(ulonglong)uVar1, puVar4 != puVar5) {
            puVar4 = *(ushort **)(puVar4 + 0x10);
            uVar1 = *(uint *)(lVar3 + 8);
            *(uint *)(puVar4 + 8) = uVar1;
            *puVar4 = *puVar4 | 4;
          }
        }
        puVar12 = puVar12 + 10;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      return puVar8;
    }
  }
  else if (uVar10 < uVar9) {
    puVar12 = (undefined8 *)(uVar10 + 0x48);
    uVar10 = (uVar9 - uVar10) - 1;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar10;
    puVar8 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar7,0);
    lVar11 = uVar10 / 0x50 + 1;
    do {
      lVar3 = puVar12[-7];
      if (lVar3 != 0) {
        puVar8 = (ushort *)puVar12[-1];
        puVar4 = (ushort *)*puVar12;
        uVar2 = *(undefined4 *)(lVar3 + 8);
        *puVar8 = *puVar8 | 8;
        *(undefined4 *)(puVar8 + 10) = uVar2;
        while (puVar8 != puVar4) {
          puVar8 = *(ushort **)(puVar8 + 0x10);
          *(undefined4 *)(puVar8 + 10) = *(undefined4 *)(lVar3 + 8);
          *puVar8 = *puVar8 | 8;
        }
      }
      puVar12 = puVar12 + 10;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return puVar8;
}



// FUNCTION 143c2e9c0 FUN_143c2e9c0 body=483 status=ok
// SIG undefined FUN_143c2e9c0(void)

void FUN_143c2e9c0(longlong param_1,int param_2)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  short *psVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  short *psVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  ushort uVar15;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  piVar5 = *(int **)(param_1 + 0x20);
  psVar6 = *(short **)((longlong)param_2 * 0x928 + 0x50 + param_1);
  psVar2 = psVar6 + (longlong)*(int *)((longlong)param_2 * 0x928 + 0x48 + param_1) * 0x24;
  uVar15 = 8;
  if (param_2 == 0) {
    uVar15 = 4;
  }
  if ((psVar6 < psVar2) && (piVar5 < piVar5 + (longlong)iVar4 * 0xc)) {
    piVar14 = piVar5 + 2;
    do {
      if (((uVar15 & *(ushort *)(piVar14 + -2)) == 0) && ((*(ushort *)(piVar14 + -2) & 0x10) == 0))
      {
        if (param_2 == 1) {
          sVar3 = *(short *)((longlong)piVar14 + 6);
          iVar7 = *piVar14;
        }
        else {
          sVar3 = (short)piVar14[1];
          iVar7 = piVar14[-1];
        }
        iVar13 = (int)sVar3;
        if (*psVar6 - iVar13 < 0) {
          if (iVar13 - psVar2[-0x24] < 0) {
            lVar9 = 0;
            lVar10 = ((longlong)psVar2 - (longlong)psVar6) / 0x12 +
                     ((longlong)psVar2 - (longlong)psVar6 >> 0x3f);
            lVar10 = (lVar10 >> 2) - (lVar10 >> 0x3f);
            if (lVar10 < 9) {
              psVar11 = psVar6;
              if (0 < lVar10) {
                do {
                  if (iVar13 <= *psVar11) break;
                  lVar9 = lVar9 + 1;
                  psVar11 = psVar11 + 0x24;
                } while (lVar9 < lVar10);
              }
              if (psVar6[lVar9 * 0x24] == iVar13) {
                iVar7 = *(int *)(psVar6 + lVar9 * 0x24 + 4);
                goto LAB_143c2eb5d;
              }
            }
            else if (0 < lVar10) {
              do {
                lVar12 = lVar10 + lVar9 >> 1;
                if (psVar6[lVar12 * 0x24] <= iVar13) {
                  if (iVar13 <= psVar6[lVar12 * 0x24]) {
                    iVar7 = *(int *)(psVar6 + lVar12 * 0x24 + 4);
                    goto LAB_143c2eb5d;
                  }
                  lVar9 = lVar12 + 1;
                  lVar12 = lVar10;
                }
                lVar10 = lVar12;
              } while (lVar9 < lVar12);
            }
            psVar11 = psVar6 + lVar9 * 0x24;
            if (*(int *)(psVar6 + lVar9 * 0x24 + -0x1c) == 0) {
              uVar8 = FUN_143c20070(*(int *)(psVar11 + 4) - *(int *)(psVar11 + -0x20),
                                    (int)*psVar11 - (int)psVar11[-0x24]);
              *(undefined4 *)(psVar11 + -0x1c) = uVar8;
            }
            iVar7 = FUN_143c22100(iVar13 - psVar11[-0x24],*(undefined4 *)(psVar11 + -0x1c));
            iVar7 = iVar7 + *(int *)(psVar11 + -0x20);
          }
          else {
            iVar7 = (*(int *)(psVar2 + -0x20) - *(int *)(psVar2 + -0x22)) + iVar7;
          }
        }
        else {
          iVar7 = (*(int *)(psVar6 + 4) - *(int *)(psVar6 + 2)) + iVar7;
        }
LAB_143c2eb5d:
        if (param_2 == 0) {
          piVar14[2] = iVar7;
        }
        else {
          piVar14[3] = iVar7;
        }
        *(ushort *)(piVar14 + -2) = *(ushort *)(piVar14 + -2) | uVar15;
      }
      piVar1 = piVar14 + 10;
      piVar14 = piVar14 + 0xc;
    } while (piVar1 < piVar5 + (longlong)iVar4 * 0xc);
  }
  return;
}



// FUNCTION 143c2ebb0 FUN_143c2ebb0 body=774 status=ok
// SIG undefined FUN_143c2ebb0(void)

void FUN_143c2ebb0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  longlong lVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort uVar9;
  int iVar10;
  undefined8 *puVar11;
  ushort *puVar12;
  
  puVar2 = *(ushort **)(param_1 + 0x20);
  puVar11 = *(undefined8 **)(param_1 + 0x30);
  puVar12 = puVar2 + (longlong)*(int *)(param_1 + 0x1c) * 0x18;
  puVar1 = puVar11 + *(int *)(param_1 + 0x2c);
  if (param_2 == 0) {
    uVar9 = 4;
    if (puVar2 < puVar12) {
      puVar5 = puVar2 + 0xc;
      lVar6 = (ulonglong)((longlong)puVar12 + (-1 - (longlong)puVar2)) / 0x30 + 1;
      do {
        *(undefined4 *)puVar5 = *(undefined4 *)(puVar5 + -4);
        *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar5 + -10);
        puVar5 = puVar5 + 0x18;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  else {
    uVar9 = 8;
    if (puVar2 < puVar12) {
      puVar5 = puVar2 + 0xc;
      lVar6 = (ulonglong)((longlong)puVar12 + (-1 - (longlong)puVar2)) / 0x30 + 1;
      do {
        *(undefined4 *)puVar5 = *(undefined4 *)(puVar5 + -2);
        *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar5 + -8);
        puVar5 = puVar5 + 0x18;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  do {
    if (puVar1 <= puVar11) {
      if (param_2 == 0) {
        if (puVar2 < puVar12) {
          puVar5 = puVar2 + 8;
          lVar6 = (ulonglong)((longlong)puVar12 + (-1 - (longlong)puVar2)) / 0x30 + 1;
          do {
            *(undefined4 *)puVar5 = *(undefined4 *)(puVar5 + 4);
            puVar5 = puVar5 + 0x18;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
          return;
        }
      }
      else if (puVar2 < puVar12) {
        puVar5 = puVar2 + 10;
        lVar6 = (ulonglong)((longlong)puVar12 + (-1 - (longlong)puVar2)) / 0x30 + 1;
        do {
          *(undefined4 *)puVar5 = *(undefined4 *)(puVar5 + 2);
          puVar5 = puVar5 + 0x18;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      return;
    }
    puVar5 = (ushort *)*puVar11;
    puVar3 = *(ushort **)(puVar5 + 0x14);
    for (puVar7 = puVar5; puVar7 <= puVar3; puVar7 = puVar7 + 0x18) {
      puVar8 = puVar7;
      if ((uVar9 & *puVar7) != 0) goto joined_r0x000143c2ecf3;
    }
LAB_143c2edf4:
    puVar11 = puVar11 + 1;
  } while( true );
joined_r0x000143c2ecf3:
  puVar4 = puVar8;
  if (puVar4 < puVar3) goto LAB_143c2ed00;
  goto LAB_143c2ed14;
LAB_143c2ed00:
  puVar8 = puVar4 + 0x18;
  if ((uVar9 & puVar4[0x18]) == 0) {
LAB_143c2ed14:
    puVar8 = puVar4 + 0x18;
    while( true ) {
      if (puVar3 < puVar8) {
        if (puVar4 == puVar7) {
          iVar10 = *(int *)(puVar7 + 0xc) - *(int *)(puVar7 + 0xe);
          if (iVar10 != 0) {
            if (puVar5 < puVar7) {
              lVar6 = (ulonglong)((longlong)puVar7 + (-1 - (longlong)puVar5)) / 0x30 + 1;
              puVar5 = puVar5 + 0xc;
              do {
                *(int *)puVar5 = *(int *)(puVar5 + 2) + iVar10;
                lVar6 = lVar6 + -1;
                puVar5 = puVar5 + 0x18;
              } while (lVar6 != 0);
            }
            while (puVar7 = puVar7 + 0x18, puVar7 <= puVar3) {
              *(int *)(puVar7 + 0xc) = *(int *)(puVar7 + 0xe) + iVar10;
            }
          }
        }
        else {
          if (puVar4 < puVar3) {
            FUN_143c2f9c0(puVar4 + 0x18,puVar3,puVar4,puVar7);
          }
          if (puVar2 < puVar7) {
            FUN_143c2f9c0(puVar5,puVar7 + -0x18,puVar4,puVar7);
          }
        }
        goto LAB_143c2edf4;
      }
      if ((uVar9 & *puVar8) != 0) break;
      puVar8 = puVar8 + 0x18;
    }
    FUN_143c2f9c0(puVar4 + 0x18,puVar8 + -0x18,puVar4,puVar8);
  }
  goto joined_r0x000143c2ecf3;
}



// FUNCTION 143c2eec0 FUN_143c2eec0 body=233 status=ok
// SIG undefined FUN_143c2eec0(void)

void FUN_143c2eec0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = *param_1, lVar1 != 0)) {
    plVar2 = param_1 + 8;
    lVar3 = 2;
    do {
      *(undefined4 *)(plVar2 + -1) = 0;
      *(undefined4 *)((longlong)plVar2 + -4) = 0;
      if ((longlong *)*plVar2 != plVar2 + 4) {
        ft_mem_free(lVar1);
        *plVar2 = 0;
      }
      plVar2[1] = 0;
      if ((longlong *)plVar2[2] != plVar2 + 0xb8) {
        ft_mem_free(lVar1);
        plVar2[2] = 0;
      }
      plVar2 = plVar2 + 0x125;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if ((longlong *)param_1[6] != param_1 + 0x254) {
      ft_mem_free(lVar1);
      param_1[6] = 0;
    }
    param_1[5] = 0;
    if ((longlong *)param_1[4] != param_1 + 0x25c) {
      ft_mem_free(lVar1);
      param_1[4] = 0;
    }
    param_1[3] = 0;
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143c2efb0 FUN_143c2efb0 body=1898 status=ok
// SIG undefined FUN_143c2efb0(void)

int FUN_143c2efb0(undefined8 *param_1,short *param_2)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ushort *puVar6;
  short sVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  short *psVar11;
  uint uVar12;
  ushort *puVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  short *psVar18;
  short *psVar19;
  undefined8 *puVar20;
  char *pcVar21;
  undefined1 uVar22;
  ushort *puVar23;
  uint uVar24;
  ushort *puVar25;
  ushort *puVar26;
  short *psVar27;
  longlong lVar28;
  int iVar29;
  short *psVar30;
  undefined4 *puVar31;
  int local_res10 [2];
  ulonglong local_res18;
  ulonglong local_res20;
  
  iVar29 = 0;
  uVar3 = *(undefined4 *)(param_1 + 2);
  uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  uVar10 = *param_1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x12e) = 0;
  uVar12 = (uint)*param_2;
  local_res10[0] = 0;
  local_res18 = CONCAT44(local_res18._4_4_,*(undefined4 *)(param_1 + 1));
  local_res20 = CONCAT44(local_res20._4_4_,uVar4);
  if (uVar12 < 9) {
    if (param_1[6] == 0) {
      *(undefined4 *)(param_1 + 5) = 8;
      param_1[6] = param_1 + 0x254;
    }
  }
  else if (*(uint *)(param_1 + 5) < uVar12) {
    if ((undefined8 *)param_1[6] == param_1 + 0x254) {
      param_1[6] = 0;
    }
    uVar12 = uVar12 + 3 & 0xfffffffc;
    uVar9 = FUN_143c27410(uVar10,8,*(uint *)(param_1 + 5),uVar12,param_1[6],local_res10);
    param_1[6] = uVar9;
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    *(uint *)(param_1 + 5) = uVar12;
  }
  sVar7 = param_2[1];
  uVar12 = (int)sVar7 + 2;
  if (uVar12 < 0x61) {
    if (param_1[4] == 0) {
      *(undefined4 *)(param_1 + 3) = 0x60;
      param_1[4] = param_1 + 0x25c;
    }
  }
  else if (*(uint *)(param_1 + 3) < uVar12) {
    if ((undefined8 *)param_1[4] == param_1 + 0x25c) {
      param_1[4] = 0;
    }
    uVar12 = (int)sVar7 + 0xbU & 0xfffffff8;
    uVar10 = FUN_143c27410(uVar10,0x30,*(uint *)(param_1 + 3),uVar12,param_1[4],local_res10);
    param_1[4] = uVar10;
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    *(uint *)(param_1 + 3) = uVar12;
  }
  *(int *)((longlong)param_1 + 0x1c) = (int)param_2[1];
  *(int *)((longlong)param_1 + 0x2c) = (int)*param_2;
  *(undefined4 *)(param_1 + 0xb) = 2;
  *(undefined4 *)(param_1 + 0x130) = 0xffffffff;
  iVar8 = FUN_143c22fb0(param_2);
  if (iVar8 == 1) {
    *(undefined4 *)(param_1 + 0xb) = 0xfffffffe;
    *(undefined4 *)(param_1 + 0x130) = 1;
  }
  psVar18 = (short *)param_1[4];
  *(undefined4 *)(param_1 + 1) = (undefined4)local_res18;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  *(int *)((longlong)param_1 + 0x14) = iVar5;
  param_1[0x253] = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    puVar31 = *(undefined4 **)(param_2 + 4);
    pbVar17 = *(byte **)(param_2 + 8);
    psVar27 = psVar18 + (longlong)*(int *)((longlong)param_1 + 0x1c) * 0x18;
    psVar19 = psVar18 + (longlong)**(short **)(param_2 + 0xc) * 0x18;
    if (psVar18 < psVar27) {
      lVar28 = 0;
      pcVar21 = (char *)((longlong)psVar18 + 3);
      psVar30 = psVar19;
      do {
        pcVar21[-1] = '\x04';
        pcVar21[0] = '\x04';
        *(undefined2 *)(pcVar21 + 9) = *(undefined2 *)puVar31;
        *(undefined2 *)(pcVar21 + 0xb) = *(undefined2 *)(puVar31 + 1);
        iVar8 = FUN_143c22100(*puVar31,(undefined4)local_res18);
        *(int *)(pcVar21 + 0xd) = (int)local_res20 + iVar8;
        *(int *)(pcVar21 + 1) = (int)local_res20 + iVar8;
        iVar8 = FUN_143c22100(puVar31[1],uVar3);
        iVar8 = iVar5 + iVar8;
        *(int *)(pcVar21 + 0x11) = iVar8;
        *(int *)(pcVar21 + 5) = iVar8;
        if ((*pbVar17 & 3) == 0) {
          sVar7 = 1;
        }
        else if ((*pbVar17 & 3) == 2) {
          sVar7 = 2;
        }
        else {
          sVar7 = 0;
        }
        psVar11 = (short *)(pcVar21 + -3);
        *(short **)(pcVar21 + 0x25) = psVar30;
        *psVar11 = sVar7;
        *(short **)(psVar30 + 0x10) = psVar11;
        psVar30 = psVar11;
        if (psVar11 == psVar19) {
          iVar29 = iVar29 + 1;
          lVar28 = lVar28 + 2;
          if (iVar29 < *param_2) {
            psVar19 = psVar18 + (longlong)*(short *)(lVar28 + *(longlong *)(param_2 + 0xc)) * 0x18;
            psVar30 = psVar19;
          }
        }
        puVar31 = puVar31 + 2;
        pbVar17 = pbVar17 + 1;
        psVar11 = (short *)(pcVar21 + 0x2d);
        pcVar21 = pcVar21 + 0x30;
      } while (psVar11 < psVar27);
    }
    puVar16 = (undefined8 *)param_1[6];
    puVar20 = puVar16 + *(int *)((longlong)param_1 + 0x2c);
    sVar7 = 0;
    psVar19 = *(short **)(param_2 + 0xc);
    for (; puVar16 < puVar20; puVar16 = puVar16 + 1) {
      *puVar16 = psVar18 + (longlong)sVar7 * 0x18;
      sVar7 = *psVar19 + 1;
      psVar19 = psVar19 + 1;
    }
    puVar20 = (undefined8 *)param_1[6];
    local_res18 = 0;
    uVar2 = *(ushort *)(*(longlong *)(param_1[0x252] + 8) + 0x68);
    uVar12 = (uint)uVar2 + (uint)uVar2 * 4 >> 9;
    local_res20 = (ulonglong)
                  ((longlong)(puVar20 + *(int *)((longlong)param_1 + 0x2c)) +
                  (7 - (longlong)puVar20)) >> 3;
    if (puVar20 + *(int *)((longlong)param_1 + 0x2c) < puVar20) {
      local_res20 = 0;
    }
    if (local_res20 != 0) {
      do {
        puVar25 = (ushort *)*puVar20;
        puVar26 = puVar25;
        puVar13 = *(ushort **)(puVar25 + 0x14);
        while ((puVar13 != puVar25 &&
               (uVar14 = (int)(short)puVar26[7] - (int)(short)puVar13[7] >> 0x1f,
               uVar15 = (int)(short)puVar26[6] - (int)(short)puVar13[6] >> 0x1f,
               (int)((((int)(short)puVar26[7] - (int)(short)puVar13[7] ^ uVar14) - uVar14) +
                    (((int)(short)puVar26[6] - (int)(short)puVar13[6] ^ uVar15) - uVar15)) <
               (int)(uVar12 * 2 + -1)))) {
          puVar26 = puVar13;
          puVar13 = *(ushort **)(puVar13 + 0x14);
        }
        puVar26[0xc] = 0;
        puVar26[0xd] = 0;
        puVar25 = puVar26 + 0xc;
        puVar26[0xe] = 0;
        puVar26[0xf] = 0;
        uVar15 = 0;
        uVar14 = 0;
        puVar13 = puVar26;
        puVar23 = puVar26;
        do {
          puVar6 = *(ushort **)(puVar23 + 0x10);
          uVar15 = uVar15 + ((int)(short)puVar6[6] - (int)(short)puVar23[6]);
          uVar14 = uVar14 + ((int)(short)puVar6[7] - (int)(short)puVar23[7]);
          if ((int)(((uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f)) +
                   ((uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f))) < (int)uVar12) {
            *puVar6 = *puVar6 | 0x10;
          }
          else {
            iVar5 = (int)(((longlong)puVar6 - (longlong)puVar13) / 0x30);
            *(int *)puVar25 = iVar5;
            *(int *)(puVar6 + 0xe) = -iVar5;
            if ((int)uVar14 < (int)uVar15) {
              uVar24 = uVar15;
              uVar22 = 1;
              if ((int)uVar14 < (int)-uVar15) {
                uVar24 = -uVar14;
                uVar14 = uVar15;
                uVar22 = 0xfe;
              }
            }
            else if ((int)uVar14 < (int)-uVar15) {
              uVar24 = -uVar15;
              uVar22 = 0xff;
            }
            else {
              uVar24 = uVar14;
              uVar14 = uVar15;
              uVar22 = 2;
            }
            if ((int)uVar24 <= (int)(((uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f)) * 0xe)
               ) {
              uVar22 = 4;
            }
            *(undefined1 *)((longlong)puVar13 + 3) = uVar22;
            for (puVar13 = *(ushort **)(puVar13 + 0x10); puVar13 != puVar6;
                puVar13 = *(ushort **)(puVar13 + 0x10)) {
              *(undefined1 *)(puVar13 + 1) = uVar22;
              *(undefined1 *)((longlong)puVar13 + 3) = uVar22;
            }
            *(undefined1 *)(puVar6 + 1) = uVar22;
            puVar25 = puVar13 + 0xc;
            uVar15 = 0;
            uVar14 = 0;
            iVar5 = (int)(((longlong)puVar26 - (longlong)puVar13) / 0x30);
            *(int *)puVar25 = iVar5;
            *(int *)(puVar26 + 0xe) = -iVar5;
          }
          puVar23 = puVar6;
        } while (puVar6 != puVar26);
        puVar20 = puVar20 + 1;
        local_res18 = local_res18 + 1;
      } while (local_res18 < local_res20);
    }
    if (psVar18 < psVar27) {
      pcVar21 = (char *)((longlong)psVar18 + 3);
      do {
        puVar25 = (ushort *)(pcVar21 + -3);
        if ((((*(ushort *)(pcVar21 + -3) & 0x10) == 0) && (pcVar21[-1] == '\x04')) &&
           (*pcVar21 == '\x04')) {
          iVar5 = *(int *)(pcVar21 + 0x15);
          puVar26 = puVar25 + (longlong)*(int *)(pcVar21 + 0x19) * 0x18;
          if ((-1 < ((int)*(short *)(pcVar21 + 9) - (int)(short)puVar26[6] ^
                    (int)(short)puVar25[(longlong)iVar5 * 0x18 + 6] - (int)*(short *)(pcVar21 + 9)))
             && (-1 < ((int)*(short *)(pcVar21 + 0xb) - (int)(short)puVar26[7] ^
                      (int)(short)puVar25[(longlong)iVar5 * 0x18 + 7] -
                      (int)*(short *)(pcVar21 + 0xb)))) {
            *puVar25 = *(ushort *)(pcVar21 + -3) | 0x10;
            iVar29 = (int)((longlong)
                           ((longlong)puVar25 + ((longlong)iVar5 * 0x30 - (longlong)puVar26)) / 0x30
                          );
            *(int *)(puVar26 + 0xc) = iVar29;
            *(int *)(puVar25 + (longlong)iVar5 * 0x18 + 0xe) = -iVar29;
          }
        }
        psVar19 = (short *)(pcVar21 + 0x2d);
        pcVar21 = pcVar21 + 0x30;
      } while (psVar19 < psVar27);
      if (psVar18 < psVar27) {
        psVar18 = psVar18 + 7;
        do {
          puVar25 = (ushort *)(psVar18 + -7);
          if ((psVar18[-7] & 0x10U) == 0) {
            if ((psVar18[-7] & 3U) == 0) {
              cVar1 = *(char *)((longlong)psVar18 + -0xb);
              if (cVar1 == (char)psVar18[-6]) {
                if (cVar1 == '\x04') {
                  iVar5 = *(int *)(psVar18 + 5);
                  puVar26 = puVar25 + (longlong)*(int *)(psVar18 + 7) * 0x18;
                  iVar29 = FUN_143c26760((int)psVar18[-1] - (int)(short)puVar26[6],
                                         (int)*psVar18 - (int)(short)puVar26[7],
                                         (int)(short)puVar25[(longlong)iVar5 * 0x18 + 6] -
                                         (int)psVar18[-1],
                                         (int)(short)puVar25[(longlong)iVar5 * 0x18 + 7] -
                                         (int)*psVar18);
                  if (iVar29 == 0) goto LAB_143c2f6f1;
                  iVar29 = (int)(((longlong)puVar25 + ((longlong)iVar5 * 0x30 - (longlong)puVar26))
                                / 0x30);
                  *(int *)(puVar26 + 0xc) = iVar29;
                  *(int *)(puVar25 + (longlong)iVar5 * 0x18 + 0xe) = -iVar29;
                }
              }
              else if ((int)(char)psVar18[-6] != -(int)cVar1) goto LAB_143c2f6f1;
            }
            *puVar25 = *puVar25 | 0x10;
          }
LAB_143c2f6f1:
          psVar19 = psVar18 + 0x11;
          psVar18 = psVar18 + 0x18;
        } while (psVar19 < psVar27);
      }
    }
  }
  return local_res10[0];
}


