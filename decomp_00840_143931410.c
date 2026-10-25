// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143931410 FUN_143931410 body=33 status=ok
// SIG undefined FUN_143931410(void)

undefined8 * FUN_143931410(undefined8 *param_1)

{
  FUN_143e17780();
  *param_1 = Iex::IoExc::vftable;
  return param_1;
}



// FUNCTION 143931440 FUN_143931440 body=281 status=ok
// SIG undefined FUN_143931440(void)

undefined8 *
FUN_143931440(undefined8 *param_1,undefined8 param_2,longlong param_3,int param_4,int param_5,
             int param_6)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int *piVar4;
  int local_res20 [2];
  
  FBinaryArchiveFormatter::FBinaryArchiveFormatter();
  *param_1 = Imf::_anon_747B182C::LineBufferTask::vftable;
  param_1[2] = param_3;
  lVar2 = *(longlong *)
           (*(longlong *)(param_3 + 0x108) +
           ((ulonglong)(longlong)param_4 %
           (ulonglong)(*(longlong *)(param_3 + 0x110) - *(longlong *)(param_3 + 0x108) >> 3)) * 8);
  param_1[3] = lVar2;
  FUN_14394c790(lVar2 + 0x60);
  puVar3 = (undefined8 *)param_1[3];
  if (*(char *)(puVar3 + 7) == '\0') {
    puVar3[3] = *puVar3;
    *(int *)(param_1[3] + 0x20) =
         *(int *)(param_1[2] + 0x120) * param_4 + *(int *)(param_1[2] + 0x74);
    local_res20[0] = *(int *)(param_1[2] + 0x120) + *(int *)(param_1[3] + 0x20) + -1;
    piVar1 = (int *)(param_1[2] + 0x78);
    piVar4 = local_res20;
    if (*piVar1 < local_res20[0]) {
      piVar4 = piVar1;
    }
    *(int *)(param_1[3] + 0x24) = *piVar4;
    *(undefined1 *)(param_1[3] + 0x38) = 1;
  }
  piVar1 = (int *)(param_1[3] + 0x20);
  piVar4 = &param_5;
  if (param_5 <= *piVar1) {
    piVar4 = piVar1;
  }
  *(int *)(param_1[3] + 0x28) = *piVar4;
  piVar1 = (int *)(param_1[3] + 0x24);
  piVar4 = &param_6;
  if (*piVar1 <= param_6) {
    piVar4 = piVar1;
  }
  *(int *)(param_1[3] + 0x2c) = *piVar4;
  return param_1;
}



// FUNCTION 143931560 FUN_143931560 body=33 status=ok
// SIG undefined FUN_143931560(void)

undefined8 * FUN_143931560(undefined8 *param_1)

{
  FUN_143e17780();
  *param_1 = Iex::LogicExc::vftable;
  return param_1;
}



// FUNCTION 143931590 FUN_143931590 body=154 status=ok
// SIG undefined FUN_143931590(void)

undefined8 *
FUN_143931590(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = Imf::OutputFile::vftable;
  lVar1 = operator_new(0x130);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_1439312c0(lVar1,0,param_4);
  }
  param_1[1] = uVar2;
  FUN_14392e600(param_3,0);
  *(undefined8 *)(param_1[1] + 0xe8) = param_2;
  FUN_1439325b0(param_1,param_3);
  return param_1;
}



// FUNCTION 143931630 FUN_143931630 body=52 status=ok
// SIG undefined FUN_143931630(void)

void FUN_143931630(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_143931100(lVar1,param_1[2] - lVar1 >> 3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 143931670 FUN_143931670 body=75 status=ok
// SIG undefined FUN_143931670(void)

void FUN_143931670(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_143931170(lVar1,(param_1[2] - lVar1) / 0x30);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1439316c0 FUN_1439316c0 body=1150 status=ok
// SIG undefined FUN_1439316c0(void)

/* WARNING: Removing unreachable block (ram,0x000143931808) */

void FUN_1439316c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  
  *param_1 = Imf::OutputFile::Data::vftable;
  if ((*(char *)(param_1 + 0x1e) != '\0') &&
     (puVar1 = (undefined8 *)param_1[0x1d], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  uVar5 = 0;
  if ((longlong)(param_1[0x22] - param_1[0x21]) >> 3 != 0) {
    do {
      puVar1 = *(undefined8 **)(param_1[0x21] + uVar5 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)puVar1[6];
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        FUN_14394c500(puVar1 + 0xc);
        if (0xf < (ulonglong)puVar1[0xb]) {
          uVar3 = puVar1[8];
          uVar4 = uVar3;
          if (0xfff < puVar1[0xb] + 1) {
            if ((uVar3 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            uVar4 = *(ulonglong *)(uVar3 - 8);
            if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            if (uVar3 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            if (0x27 < uVar3 - uVar4) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(uVar4);
        }
        puVar1[0xb] = 0xf;
        puVar1[10] = 0;
        *(undefined1 *)(puVar1 + 8) = 0;
        FMemory::operator_delete(*puVar1);
        FMemory::operator_delete(puVar1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)((longlong)(param_1[0x22] - param_1[0x21]) >> 3));
  }
  uVar5 = param_1[0x21];
  if (uVar5 != 0) {
    uVar3 = (longlong)(param_1[0x23] - uVar5) >> 3;
    if (0x1fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar5;
    if (0xfff < uVar3 * 8) {
      if ((uVar5 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar5 - 8);
      if (uVar5 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar5 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar5 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
  }
  uVar5 = param_1[0x1a];
  if (uVar5 != 0) {
    uVar3 = (longlong)(param_1[0x1c] - uVar5) / 0x30;
    if (0x555555555555555 < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar5;
    if (0xfff < uVar3 * 0x30) {
      if ((uVar5 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar5 - 8);
      if (uVar5 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar5 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar5 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
  }
  uVar5 = param_1[0x16];
  if (uVar5 != 0) {
    uVar3 = (longlong)(param_1[0x18] - uVar5) >> 3;
    if (0x1fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar5;
    if (0xfff < uVar3 * 8) {
      if ((uVar5 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar5 - 8);
      if (uVar5 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar5 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar5 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  uVar5 = param_1[0x13];
  if (uVar5 != 0) {
    uVar3 = (longlong)(param_1[0x15] - uVar5) >> 3;
    if (0x1fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar5;
    if (0xfff < uVar3 * 8) {
      if ((uVar5 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar5 - 8);
      if (uVar5 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar5 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar5 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  uVar5 = param_1[0x10];
  if (uVar5 != 0) {
    uVar3 = (longlong)(param_1[0x12] - uVar5) >> 3;
    if (0x1fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar5;
    if (0xfff < uVar3 * 8) {
      if ((uVar5 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar5 - 8);
      if (uVar5 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar5 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar5 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::erase(param_1 + 10,local_res8,*(undefined8 *)param_1[10],(undefined8 *)param_1[10]);
  FMemory::operator_delete(param_1[10]);
  FUN_143929ce0(param_1 + 6);
  FUN_14394c300(param_1);
  return;
}



// FUNCTION 143931b60 FUN_143931b60 body=124 status=ok
// SIG undefined FUN_143931b60(void)

void FUN_143931b60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = Imf::OutputFile::vftable;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0xf8) != 0) {
      (**(code **)(**(longlong **)(lVar1 + 0xe8) + 0x18))();
      FUN_1439333a0(*(undefined8 *)(param_1[1] + 0xe8),param_1[1] + 0x80,param_3,param_4,uVar3);
    }
    puVar2 = (undefined8 *)param_1[1];
    if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143931bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 143931bf0 FUN_143931bf0 body=442 status=ok
// SIG undefined FUN_143931bf0(void)

longlong * FUN_143931bf0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 local_res8;
  
  if (param_1 != param_2) {
    puVar1 = (undefined8 *)param_2[1];
    puVar7 = (undefined8 *)*param_2;
    if (puVar7 == puVar1) {
      param_1[1] = *param_1;
    }
    else {
      lVar5 = ((longlong)puVar1 - (longlong)puVar7) / 6 +
              ((longlong)puVar1 - (longlong)puVar7 >> 0x3f);
      uVar6 = (lVar5 >> 3) - (lVar5 >> 0x3f);
      puVar2 = (undefined8 *)*param_1;
      lVar5 = (param_1[1] - (longlong)puVar2) / 6 + (param_1[1] - (longlong)puVar2 >> 0x3f);
      uVar8 = (lVar5 >> 3) - (lVar5 >> 0x3f);
      if (uVar8 < uVar6) {
        local_res8 = SUB81(param_1,0);
        if ((ulonglong)((param_1[2] - (longlong)puVar2) / 0x30) < uVar6) {
          if (puVar2 != (undefined8 *)0x0) {
            FUN_143931170(puVar2);
          }
          cVar4 = std::vector<FTransform,std::allocator<FTransform>_>::_Buy
                            (param_1,(param_2[1] - *param_2) / 0x30);
          if (cVar4 == '\0') {
            return param_1;
          }
          lVar5 = FUN_1439311e0(*param_2,param_2[1],*param_1,param_1,local_res8);
          param_1[1] = lVar5;
          return param_1;
        }
        FUN_143931020(puVar7,puVar7 + uVar8 * 6);
        lVar5 = FUN_1439311e0(puVar7 + uVar8 * 6,param_2[1],param_1[1],param_1,local_res8);
      }
      else {
        for (; puVar7 != puVar1; puVar7 = puVar7 + 6) {
          uVar3 = puVar7[1];
          *puVar2 = *puVar7;
          puVar2[1] = uVar3;
          uVar3 = puVar7[3];
          puVar2[2] = puVar7[2];
          puVar2[3] = uVar3;
          uVar3 = puVar7[5];
          puVar2[4] = puVar7[4];
          puVar2[5] = uVar3;
          puVar2 = puVar2 + 6;
        }
        lVar5 = ((param_2[1] - *param_2) / 0x30) * 0x30 + *param_1;
      }
      param_1[1] = lVar5;
    }
  }
  return param_1;
}



// FUNCTION 143931db0 FUN_143931db0 body=47 status=ok
// SIG undefined FUN_143931db0(void)

undefined8 FUN_143931db0(undefined8 param_1,uint param_2)

{
  FUN_1439316c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143931de0 FUN_143931de0 body=86 status=ok
// SIG undefined FUN_143931de0(void)

undefined8 * FUN_143931de0(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::_anon_747B182C::LineBufferTask::vftable;
  FUN_14394c610(param_1[3] + 0x60);
  FUN_14394b9a0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143931e40 FUN_143931e40 body=47 status=ok
// SIG undefined FUN_143931e40(void)

undefined8 FUN_143931e40(undefined8 param_1,uint param_2)

{
  FUN_143931b60();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143931e70 _Buy body=102 status=ok
// SIG undefined _Buy(void)

undefined8
std::vector<FTransform,std::allocator<FTransform>_>::_Buy(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0x555555555555555 < param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    lVar1 = allocator<FTransform>::allocate();
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = param_2 * 0x30 + lVar1;
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143931ee0 FUN_143931ee0 body=146 status=ok
// SIG undefined FUN_143931ee0(void)

void FUN_143931ee0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  
  _Dst = (void *)std::allocator<wchar_t_const_*___ptr64>::allocate();
  memmove(_Dst,(void *)*param_1,(param_1[1] - *param_1 >> 3) * 8);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 != 0) {
    FUN_143931100(lVar1,param_1[2] - lVar1 >> 3);
  }
  param_1[2] = (longlong)((longlong)_Dst + param_2 * 8);
  param_1[1] = (longlong)((longlong)_Dst + (lVar2 - lVar1 >> 3) * 8);
  *param_1 = (longlong)_Dst;
  return;
}



// FUNCTION 143931f80 FUN_143931f80 body=215 status=ok
// SIG undefined FUN_143931f80(void)

void FUN_143931f80(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  lVar2 = std::allocator<FTransform>::allocate();
  local_res8 = (undefined1)lVar2;
  FUN_1439311e0(*param_1,param_1[1],lVar2,param_1,0,local_res8,uVar4);
  lVar1 = *param_1;
  lVar3 = (param_1[1] - lVar1) / 6 + (param_1[1] - lVar1 >> 0x3f);
  if (lVar1 != 0) {
    FUN_143931170(lVar1,(param_1[2] - lVar1) / 0x30);
  }
  param_1[2] = param_2 * 0x30 + lVar2;
  param_1[1] = ((lVar3 >> 3) - (lVar3 >> 0x3f)) * 0x30 + lVar2;
  *param_1 = lVar2;
  return;
}



// FUNCTION 143932060 allocate body=124 status=ok
// SIG undefined allocate(void)

ulonglong std::allocator<FTransform>::allocate(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (0x555555555555555 < param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    param_2 = param_2 * 0x30;
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



// FUNCTION 1439320e0 FUN_1439320e0 body=456 status=ok
// SIG undefined FUN_1439320e0(void)

void FUN_1439320e0(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong local_res8;
  longlong local_38 [2];
  
  if (*(int *)(param_1 + 0x68) == 0) {
    iVar10 = 1;
    iVar4 = param_3;
    if (param_3 < *(int *)(param_1 + 0x74)) {
      iVar4 = *(int *)(param_1 + 0x74);
    }
    if (*(int *)(param_1 + 0x78) < param_4) {
      param_4 = *(int *)(param_1 + 0x78);
    }
    param_4 = param_4 + 1;
  }
  else {
    iVar4 = param_4;
    if (*(int *)(param_1 + 0x78) < param_4) {
      iVar4 = *(int *)(param_1 + 0x78);
    }
    if (param_3 < *(int *)(param_1 + 0x74)) {
      param_3 = *(int *)(param_1 + 0x74);
    }
    param_4 = param_3 + -1;
    iVar10 = -1;
  }
  for (; iVar4 != param_4; iVar4 = iVar4 + iVar10) {
    uVar5 = 0;
    local_res8 = *(longlong *)
                  (*(longlong *)(param_1 + 0xb0) + (longlong)(iVar4 - *(int *)(param_1 + 0x74)) * 8)
                 + *param_2;
    lVar3 = *(longlong *)(param_1 + 0xd8) - *(longlong *)(param_1 + 0xd0);
    lVar1 = lVar3 >> 0x3f;
    if (lVar3 / 0x30 + lVar1 != lVar1) {
      uVar8 = 0;
      local_38[0] = local_res8;
      do {
        puVar9 = (undefined4 *)(uVar8 * 0x30 + *(longlong *)(param_1 + 0xd0));
        iVar7 = puVar9[9];
        if (iVar4 < 0) {
          if (iVar7 < 0) {
            iVar6 = (-1 - iVar7) - iVar4;
          }
          else {
            iVar6 = (iVar7 - iVar4) + -1;
          }
          iVar6 = -(iVar6 / iVar7);
        }
        else {
          iVar6 = iVar4 / iVar7;
        }
        if (iVar4 == iVar6 * iVar7) {
          iVar7 = *(int *)(param_1 + 0x6c);
          iVar6 = puVar9[8];
          if (iVar7 < 0) {
            if (iVar6 < 0) {
              iVar7 = (-1 - iVar7) - iVar6;
            }
            else {
              iVar7 = (iVar6 - iVar7) + -1;
            }
            iVar7 = -(iVar7 / iVar6);
          }
          else {
            iVar7 = iVar7 / iVar6;
          }
          iVar2 = *(int *)(param_1 + 0x70);
          if (iVar2 < 0) {
            if (iVar6 < 0) {
              iVar2 = (-1 - iVar2) - iVar6;
            }
            else {
              iVar2 = (iVar6 - iVar2) + -1;
            }
            iVar2 = -(iVar2 / iVar6);
          }
          else {
            iVar2 = iVar2 / iVar6;
          }
          FUN_14393d490(local_38,&local_res8,*puVar9,(longlong)((iVar2 - iVar7) + 1));
        }
        uVar5 = uVar5 + 1;
        uVar8 = (ulonglong)uVar5;
      } while (uVar8 < (ulonglong)
                       ((*(longlong *)(param_1 + 0xd8) - *(longlong *)(param_1 + 0xd0)) / 0x30));
    }
  }
  return;
}



// FUNCTION 1439322b0 FUN_1439322b0 body=757 status=ok
// SIG undefined FUN_1439322b0(void)

void FUN_1439322b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong local_res10;
  longlong local_res18 [2];
  undefined8 uVar16;
  
  uVar16 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x68) == 0) {
    iVar8 = *(int *)(lVar1 + 0x28);
    iVar15 = *(int *)(lVar1 + 0x2c) + 1;
    iVar14 = 1;
  }
  else {
    iVar8 = *(int *)(lVar1 + 0x2c);
    iVar15 = *(int *)(lVar1 + 0x28) + -1;
    iVar14 = -1;
  }
  for (; iVar8 != iVar15; iVar8 = iVar8 + iVar14) {
    local_res10 = *(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xb0) +
                   (longlong)(iVar8 - *(int *)(*(longlong *)(param_1 + 0x10) + 0x74)) * 8) +
                  **(longlong **)(param_1 + 0x18);
    uVar9 = 0;
    while( true ) {
      lVar1 = *(longlong *)(param_1 + 0x10);
      if ((ulonglong)((*(longlong *)(lVar1 + 0xd8) - *(longlong *)(lVar1 + 0xd0)) / 0x30) <= uVar9)
      break;
      puVar12 = (undefined4 *)(uVar9 * 0x30 + *(longlong *)(lVar1 + 0xd0));
      iVar6 = puVar12[9];
      if (iVar8 < 0) {
        if (iVar6 < 0) {
          iVar10 = (-1 - iVar6) - iVar8;
        }
        else {
          iVar10 = (iVar6 - iVar8) + -1;
        }
        iVar10 = -(iVar10 / iVar6);
      }
      else {
        iVar10 = iVar8 / iVar6;
      }
      if (iVar8 == iVar10 * iVar6) {
        iVar10 = puVar12[8];
        iVar13 = *(int *)(lVar1 + 0x6c);
        if (iVar13 < 0) {
          if (iVar10 < 0) {
            iVar13 = (-1 - iVar13) - iVar10;
          }
          else {
            iVar13 = (iVar10 - iVar13) + -1;
          }
          iVar13 = -(iVar13 / iVar10);
        }
        else {
          iVar13 = iVar13 / iVar10;
        }
        iVar11 = *(int *)(lVar1 + 0x70);
        if (iVar11 < 0) {
          if (iVar10 < 0) {
            iVar11 = (-1 - iVar11) - iVar10;
          }
          else {
            iVar11 = (iVar10 - iVar11) + -1;
          }
          iVar11 = -(iVar11 / iVar10);
        }
        else {
          iVar11 = iVar11 / iVar10;
        }
        if (*(char *)(puVar12 + 10) == '\0') {
          if (iVar8 < 0) {
            if (iVar6 < 0) {
              iVar10 = (-1 - iVar6) - iVar8;
            }
            else {
              iVar10 = (iVar6 - iVar8) + -1;
            }
            iVar6 = -(iVar10 / iVar6);
          }
          else {
            iVar6 = iVar8 / iVar6;
          }
          lVar7 = *(longlong *)(puVar12 + 6) * (longlong)iVar6 + *(longlong *)(puVar12 + 2);
          lVar2 = *(longlong *)(puVar12 + 4);
          local_res18[0] = iVar13 * lVar2 + lVar7;
          FUN_14393d650(&local_res10,local_res18,iVar11 * lVar2 + lVar7,lVar2,
                        *(undefined4 *)(lVar1 + 200),*puVar12,uVar16);
        }
        else {
          FUN_14393e0f0(&local_res10,*(undefined4 *)(lVar1 + 200),*puVar12,
                        (longlong)((iVar11 - iVar13) + 1));
        }
      }
      uVar9 = (ulonglong)((int)uVar9 + 1);
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0x18) < local_res10) {
      *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0x18) = local_res10;
    }
  }
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  if ((iVar8 < *(int *)(puVar3 + 4)) || (*(int *)((longlong)puVar3 + 0x24) < iVar8)) {
    puVar3[1] = *puVar3;
    piVar4 = *(int **)(param_1 + 0x18);
    piVar4[4] = piVar4[6] - *piVar4;
    lVar1 = *(longlong *)(param_1 + 0x18);
    plVar5 = *(longlong **)(lVar1 + 0x30);
    if (plVar5 != (longlong *)0x0) {
      iVar8 = (**(code **)(*plVar5 + 0x18))
                        (plVar5,*(undefined8 *)(lVar1 + 8),*(undefined4 *)(lVar1 + 0x10),
                         *(undefined4 *)(lVar1 + 0x20),&local_res10);
      lVar1 = *(longlong *)(param_1 + 0x18);
      if (iVar8 < *(int *)(lVar1 + 0x10)) {
        *(int *)(lVar1 + 0x10) = iVar8;
        *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 8) = local_res10;
      }
      else if (*(int *)(*(longlong *)(param_1 + 0x10) + 200) == 0) {
        FUN_1439320e0(*(longlong *)(param_1 + 0x10),lVar1,*(undefined4 *)(lVar1 + 0x20),
                      *(undefined4 *)(lVar1 + 0x24),*(int *)(lVar1 + 0x10));
      }
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x38) = 0;
  }
  return;
}



// FUNCTION 1439325b0 FUN_1439325b0 body=739 status=ok
// SIG undefined FUN_1439325b0(void)

void FUN_1439325b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  FUN_143929f70(*(longlong *)(param_1 + 8) + 0x30);
  puVar4 = (undefined4 *)UEngine::SeamlessTravelHandlerForWorld(param_2);
  piVar5 = (int *)UEngine::SeamlessTravelHandlerForWorld(param_2);
  if (*piVar5 == 0) {
    uVar3 = puVar4[1];
  }
  else {
    uVar3 = puVar4[3];
  }
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x60) = uVar3;
  *(int *)(*(longlong *)(param_1 + 8) + 100) = (puVar4[3] - puVar4[1]) + 1;
  puVar6 = (undefined4 *)UEngine::SeamlessTravelHandlerForWorld(param_2);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x68) = *puVar6;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x6c) = *puVar4;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x70) = puVar4[2];
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x74) = puVar4[1];
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x78) = puVar4[3];
  lVar7 = FUN_14393d2d0(*(longlong *)(param_1 + 8) + 0x30,*(longlong *)(param_1 + 8) + 0x98);
  puVar11 = (undefined8 *)0x0;
  puVar12 = puVar11;
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x110) -
      *(longlong *)(*(longlong *)(param_1 + 8) + 0x108) >> 3 != 0) {
    do {
      puVar8 = (undefined8 *)operator_new(0x70);
      puVar10 = puVar11;
      if (puVar8 != (undefined8 *)0x0) {
        lVar2 = *(longlong *)(param_1 + 8);
        puVar6 = (undefined4 *)UEngine::SeamlessTravelHandlerForWorld(lVar2 + 0x30);
        uVar9 = FUN_143937f20(*puVar6,lVar7,lVar2 + 0x30);
        *puVar8 = 0;
        puVar8[1] = 0;
        *(undefined4 *)(puVar8 + 2) = 0;
        puVar8[6] = uVar9;
        *(undefined2 *)(puVar8 + 7) = 0;
        puVar8[0xb] = 0xf;
        puVar8[10] = 0;
        *(undefined1 *)(puVar8 + 8) = 0;
        FUN_14394c360(puVar8 + 0xc,1);
        puVar10 = puVar8;
      }
      *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x108) + (longlong)puVar12 * 8) =
           puVar10;
      puVar12 = (undefined8 *)((longlong)puVar12 + 1);
    } while (puVar12 < (undefined8 *)
                       (*(longlong *)(*(longlong *)(param_1 + 8) + 0x110) -
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x108) >> 3));
  }
  lVar2 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x108);
  uVar3 = FUN_14393e0d0(*(undefined8 *)(lVar2 + 0x30));
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 200) = uVar3;
  uVar3 = FUN_14393e3d0(*(undefined8 *)(lVar2 + 0x30));
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x120) = uVar3;
  *(longlong *)(*(longlong *)(param_1 + 8) + 0x128) =
       *(int *)(*(longlong *)(param_1 + 8) + 0x120) * lVar7;
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x110) -
      *(longlong *)(*(longlong *)(param_1 + 8) + 0x108) >> 3 != 0) {
    do {
      puVar12 = *(undefined8 **)
                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0x108) + (longlong)puVar11 * 8);
      uVar9 = operator_new((longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x128));
      FMemory::operator_delete(*puVar12);
      *puVar12 = uVar9;
      puVar11 = (undefined8 *)((longlong)puVar11 + 1);
    } while (puVar11 < (undefined8 *)
                       (*(longlong *)(*(longlong *)(param_1 + 8) + 0x110) -
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x108) >> 3));
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0x120);
  FUN_1439328a0(*(longlong *)(param_1 + 8) + 0x80,
                (longlong)(((iVar1 - puVar4[1]) + puVar4[3]) / iVar1));
  lVar7 = *(longlong *)(param_1 + 8);
  FUN_14393e470(lVar7 + 0x98,*(undefined4 *)(lVar7 + 0x120),lVar7 + 0xb0);
  uVar9 = FUN_14392fa40(*(longlong *)(param_1 + 8) + 0x30,
                        *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xe8),0);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48) = uVar9;
  uVar9 = FUN_1439333a0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xe8),
                        *(longlong *)(param_1 + 8) + 0x80);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xf8) = uVar9;
  uVar9 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0xe8) + 0x10))();
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x100) = uVar9;
  return;
}



// FUNCTION 1439328a0 FUN_1439328a0 body=250 status=ok
// SIG undefined FUN_1439328a0(void)

void FUN_1439328a0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  lVar3 = param_1[1];
  lVar1 = *param_1;
  uVar2 = lVar3 - lVar1 >> 3;
  if (param_2 < uVar2) {
    param_1[1] = lVar3 + (param_2 - uVar2) * 8;
  }
  else if (uVar2 < param_2) {
    uVar5 = param_2 - uVar2;
    if ((ulonglong)(param_1[2] - lVar3 >> 3) < uVar5) {
      if (0x1fffffffffffffff - uVar2 < uVar5) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      uVar4 = param_1[2] - lVar1 >> 3;
      uVar7 = 0x1fffffffffffffff - (uVar4 >> 1);
      if (uVar7 < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (uVar4 < uVar2 + uVar5) {
        uVar4 = uVar2 + uVar5;
      }
      FUN_143931ee0(param_1,uVar4,uVar7,lVar1,0xfffffffffffffffe);
    }
    puVar6 = (undefined8 *)param_1[1];
    lVar3 = param_2 - ((longlong)puVar6 - *param_1 >> 3);
    if (lVar3 != 0) {
      for (; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
    }
    param_1[1] = param_1[1] + (param_2 - (param_1[1] - *param_1 >> 3)) * 8;
  }
  return;
}



// FUNCTION 1439329a0 FUN_1439329a0 body=2548 status=ok
// SIG undefined FUN_1439329a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439329a0(longlong param_1,longlong param_2)

{
  undefined ***pppuVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined **ppuVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_338 [32];
  longlong *local_318;
  longlong *local_310;
  undefined ***local_308;
  undefined ***pppuStack_300;
  undefined ***local_2f8;
  undefined1 local_2f0;
  longlong local_2e8;
  undefined1 local_2e0 [8];
  undefined8 local_2d8;
  undefined1 local_2d0;
  undefined8 local_2c8;
  int iStack_2bc;
  undefined *local_2b8 [3];
  undefined **local_2a0 [13];
  undefined8 local_238;
  undefined4 local_230;
  basic_ios<char,std::char_traits<char>_> local_220 [100];
  int iStack_1bc;
  undefined *local_1b8 [3];
  undefined **local_1a0 [13];
  undefined8 local_138;
  undefined4 local_130;
  basic_ios<char,std::char_traits<char>_> local_120 [104];
  undefined **local_b8;
  undefined **ppuStack_b0;
  undefined **local_a8;
  undefined **ppuStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  ulonglong local_48;
  
  local_2c8 = 0xfffffffffffffffe;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  pppuVar15 = (undefined ***)0x0;
  local_318 = (longlong *)((ulonglong)local_318 & 0xffffffff00000000);
  local_2d8 = *(undefined8 *)(param_1 + 8);
  FUN_1437125f0();
  local_2d0 = 1;
  uVar8 = UEngine::SeamlessTravelHandlerForWorld(*(longlong *)(param_1 + 8) + 0x30);
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::begin(uVar8,&local_310);
  while (plVar9 = (longlong *)FKey::GetFName(uVar8,&local_318), local_310 != (longlong *)*plVar9) {
    FUN_143930ab0(param_2,&local_2e8,(longlong)local_310 + 0x1c);
    plVar9 = (longlong *)FKey::GetFName(param_2,local_2e0);
    if (local_2e8 != *plVar9) {
      if (*(int *)((longlong)local_310 + 0x11c) != *(int *)(local_2e8 + 0x120)) {
        local_2b8[0] = &DAT_145af0c78;
        local_2b8[2] = &DAT_145af0c80;
        std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                  (local_220);
        local_318 = (longlong *)CONCAT44(local_318._4_4_,1);
        std::basic_iostream<char,std::char_traits<char>_>::
        basic_iostream<char,std::char_traits<char>_>
                  ((basic_iostream<char,std::char_traits<char>_> *)local_2b8,
                   (basic_streambuf<char,std::char_traits<char>_> *)local_2a0);
        *(undefined ***)((longlong)local_2b8 + (longlong)*(int *)(local_2b8[0] + 4)) =
             std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((longlong)&iStack_2bc + (longlong)*(int *)(local_2b8[0] + 4)) =
             *(int *)(local_2b8[0] + 4) + -0x98;
        std::basic_streambuf<char,std::char_traits<char>_>::
        basic_streambuf<char,std::char_traits<char>_>
                  ((basic_streambuf<char,std::char_traits<char>_> *)local_2a0);
        local_2a0[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                       vftable;
        local_238 = 0;
        local_230 = 0;
        uVar8 = FUN_143927860(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xe8));
        plVar9 = local_310;
        uVar10 = std::operator<<<std::char_traits<char>_>(local_2b8 + 2,"Pixel type of \"");
        uVar10 = std::operator<<<std::char_traits<char>_>(uVar10,(longlong)plVar9 + 0x1c);
        uVar10 = std::operator<<<std::char_traits<char>_>(uVar10,"\" channel of output file \"");
        uVar8 = std::operator<<<std::char_traits<char>_>(uVar10,uVar8);
        std::operator<<<std::char_traits<char>_>
                  (uVar8,"\" is not compatible with the frame buffer\'s pixel type.");
        FUN_143e175c0(&local_b8,local_2b8);
        local_b8 = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
        _guard_xfg_dispatch_icall_nop(&local_b8,(ThrowInfo *)&DAT_1461db4d8);
      }
      if (((int)local_310[0x24] != *(int *)(local_2e8 + 0x140)) ||
         (*(int *)((longlong)local_310 + 0x124) != *(int *)(local_2e8 + 0x144))) {
        local_1b8[0] = &DAT_145af0c78;
        local_1b8[2] = &DAT_145af0c80;
        std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                  (local_120);
        local_318 = (longlong *)CONCAT44(local_318._4_4_,2);
        std::basic_iostream<char,std::char_traits<char>_>::
        basic_iostream<char,std::char_traits<char>_>
                  ((basic_iostream<char,std::char_traits<char>_> *)local_1b8,
                   (basic_streambuf<char,std::char_traits<char>_> *)local_1a0);
        *(undefined ***)((longlong)local_1b8 + (longlong)*(int *)(local_1b8[0] + 4)) =
             std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((longlong)&iStack_1bc + (longlong)*(int *)(local_1b8[0] + 4)) =
             *(int *)(local_1b8[0] + 4) + -0x98;
        std::basic_streambuf<char,std::char_traits<char>_>::
        basic_streambuf<char,std::char_traits<char>_>
                  ((basic_streambuf<char,std::char_traits<char>_> *)local_1a0);
        local_1a0[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                       vftable;
        local_138 = 0;
        local_130 = 0;
        uVar8 = FUN_143927860(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xe8));
        plVar9 = local_310;
        uVar10 = std::operator<<<std::char_traits<char>_>
                           (local_1b8 + 2,"X and/or y subsampling factors of \"");
        uVar10 = std::operator<<<std::char_traits<char>_>(uVar10,(longlong)plVar9 + 0x1c);
        uVar10 = std::operator<<<std::char_traits<char>_>(uVar10,"\" channel of output file \"");
        uVar8 = std::operator<<<std::char_traits<char>_>(uVar10,uVar8);
        std::operator<<<std::char_traits<char>_>
                  (uVar8,"\" are not compatible with the frame buffer\'s subsampling factors.");
        FUN_143e175c0(&local_b8,local_1b8);
        local_b8 = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
        _guard_xfg_dispatch_icall_nop(&local_b8,(ThrowInfo *)&DAT_1461db4d8);
      }
    }
    if (*(char *)((longlong)local_310 + 0x19) == '\0') {
      plVar9 = (longlong *)local_310[2];
      if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
        cVar2 = *(char *)(*plVar9 + 0x19);
        local_310 = plVar9;
        plVar9 = (longlong *)*plVar9;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar9 + 0x19);
          local_310 = plVar9;
          plVar9 = (longlong *)*plVar9;
        }
      }
      else {
        cVar2 = *(char *)(local_310[1] + 0x19);
        plVar7 = (longlong *)local_310[1];
        plVar9 = local_310;
        while ((local_310 = plVar7, cVar2 == '\0' && (plVar9 == (longlong *)local_310[2]))) {
          cVar2 = *(char *)(local_310[1] + 0x19);
          plVar7 = (longlong *)local_310[1];
          plVar9 = local_310;
        }
      }
    }
  }
  local_308 = (undefined ***)0x0;
  pppuStack_300 = (undefined ***)0x0;
  local_2f8 = (undefined ***)0x0;
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::begin(uVar8,&local_318);
  plVar9 = (longlong *)FKey::GetFName(uVar8,&local_310);
  pppuVar16 = pppuStack_300;
  pppuVar17 = local_308;
  if (local_318 != (longlong *)*plVar9) {
    do {
      FUN_143930ab0(param_2,&local_2e8,(longlong)local_318 + 0x1c);
      plVar9 = (longlong *)FKey::GetFName(param_2,local_2e0);
      if (local_2e8 == *plVar9) {
        uStack_94 = *(undefined4 *)((longlong)local_318 + 0x124);
        local_98 = (undefined4)local_318[0x24];
        local_b8 = (undefined **)
                   CONCAT44(local_b8._4_4_,*(undefined4 *)((longlong)local_318 + 0x11c));
        ppuStack_b0 = (undefined **)0x0;
        local_a8 = (undefined **)0x0;
        ppuStack_a0 = (undefined **)0x0;
        iStack_90 = CONCAT31(iStack_90._1_3_,1);
        if ((pppuVar16 <= &local_b8) || (&local_b8 < pppuVar17)) {
          if ((pppuVar16 == pppuVar15) &&
             (lVar12 = (longlong)pppuVar15 - (longlong)pppuVar16 >> 0x3f,
             ((longlong)pppuVar15 - (longlong)pppuVar16) / 0x30 + lVar12 == lVar12)) {
            lVar12 = ((longlong)pppuVar16 - (longlong)pppuVar17) / 0x30;
            if (lVar12 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("vector<T> too long");
            }
            uVar19 = lVar12 + 1;
            lVar12 = ((longlong)pppuVar15 - (longlong)pppuVar17) / 6 +
                     ((longlong)pppuVar15 - (longlong)pppuVar17 >> 0x3f);
            uVar18 = (lVar12 >> 3) - (lVar12 >> 0x3f);
            uVar14 = (uVar18 >> 1) + uVar18;
            if (0x555555555555555 - (uVar18 >> 1) < uVar18) {
              uVar14 = 0;
            }
LAB_14393319a:
            if (uVar14 < uVar19) {
              uVar14 = uVar19;
            }
            FUN_143931f80(&local_308,uVar14);
            pppuVar16 = pppuStack_300;
            pppuVar15 = local_2f8;
            pppuVar17 = local_308;
          }
          goto LAB_1439331ba;
        }
        lVar12 = ((longlong)&local_b8 - (longlong)pppuVar17) / 6 +
                 ((longlong)&local_b8 - (longlong)pppuVar17 >> 0x3f);
        lVar12 = (lVar12 >> 3) - (lVar12 >> 0x3f);
        if ((pppuVar16 == pppuVar15) &&
           (lVar13 = (longlong)pppuVar15 - (longlong)pppuVar16 >> 0x3f,
           ((longlong)pppuVar15 - (longlong)pppuVar16) / 0x30 + lVar13 == lVar13)) {
          lVar13 = ((longlong)pppuVar16 - (longlong)pppuVar17) / 0x30;
          if (lVar13 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("vector<T> too long");
          }
          uVar19 = lVar13 + 1;
          lVar13 = ((longlong)pppuVar15 - (longlong)pppuVar17) / 6 +
                   ((longlong)pppuVar15 - (longlong)pppuVar17 >> 0x3f);
          uVar18 = (lVar13 >> 3) - (lVar13 >> 0x3f);
          uVar14 = (uVar18 >> 1) + uVar18;
          if (0x555555555555555 - (uVar18 >> 1) < uVar18) {
            uVar14 = 0;
          }
LAB_143932ed5:
          if (uVar14 < uVar19) {
            uVar14 = uVar19;
          }
          FUN_143931f80(&local_308,uVar14);
          pppuVar16 = pppuStack_300;
          pppuVar15 = local_2f8;
          pppuVar17 = local_308;
        }
LAB_143932ef5:
        if (pppuVar16 != (undefined ***)0x0) {
          ppuVar6 = (pppuVar17 + lVar12 * 6)[1];
          *pppuVar16 = pppuVar17[lVar12 * 6];
          pppuVar16[1] = ppuVar6;
          ppuVar6 = (pppuVar17 + lVar12 * 6 + 2)[1];
          pppuVar16[2] = pppuVar17[lVar12 * 6 + 2];
          pppuVar16[3] = ppuVar6;
          pppuVar1 = pppuVar17 + lVar12 * 6 + 4;
          uVar3 = *(undefined4 *)((longlong)pppuVar1 + 4);
          uVar4 = *(undefined4 *)(pppuVar1 + 1);
          uVar5 = *(undefined4 *)((longlong)pppuVar1 + 0xc);
          *(undefined4 *)(pppuVar16 + 4) = *(undefined4 *)pppuVar1;
          *(undefined4 *)((longlong)pppuVar16 + 0x24) = uVar3;
          *(undefined4 *)(pppuVar16 + 5) = uVar4;
          *(undefined4 *)((longlong)pppuVar16 + 0x2c) = uVar5;
        }
      }
      else {
        uStack_94 = *(undefined4 *)(local_2e8 + 0x144);
        local_98 = *(undefined4 *)(local_2e8 + 0x140);
        ppuStack_a0 = *(undefined ***)(local_2e8 + 0x138);
        local_a8 = *(undefined ***)(local_2e8 + 0x130);
        ppuStack_b0 = *(undefined ***)(local_2e8 + 0x128);
        local_b8 = (undefined **)CONCAT44(local_b8._4_4_,*(undefined4 *)(local_2e8 + 0x120));
        iStack_90 = (uint)iStack_90._1_3_ << 8;
        if ((&local_b8 < pppuVar16) && (pppuVar17 <= &local_b8)) {
          lVar12 = ((longlong)&local_b8 - (longlong)pppuVar17) / 6 +
                   ((longlong)&local_b8 - (longlong)pppuVar17 >> 0x3f);
          lVar12 = (lVar12 >> 3) - (lVar12 >> 0x3f);
          if ((pppuVar16 == pppuVar15) &&
             (lVar13 = (longlong)pppuVar15 - (longlong)pppuVar16 >> 0x3f,
             ((longlong)pppuVar15 - (longlong)pppuVar16) / 0x30 + lVar13 == lVar13)) {
            lVar13 = ((longlong)pppuVar16 - (longlong)pppuVar17) / 0x30;
            if (lVar13 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("vector<T> too long");
            }
            uVar19 = lVar13 + 1;
            lVar13 = ((longlong)pppuVar15 - (longlong)pppuVar17) / 6 +
                     ((longlong)pppuVar15 - (longlong)pppuVar17 >> 0x3f);
            uVar18 = (lVar13 >> 3) - (lVar13 >> 0x3f);
            uVar14 = (uVar18 >> 1) + uVar18;
            if (0x555555555555555 - (uVar18 >> 1) < uVar18) {
              uVar14 = 0;
            }
            goto LAB_143932ed5;
          }
          goto LAB_143932ef5;
        }
        if ((pppuVar16 == pppuVar15) &&
           (lVar12 = (longlong)pppuVar15 - (longlong)pppuVar16 >> 0x3f,
           ((longlong)pppuVar15 - (longlong)pppuVar16) / 0x30 + lVar12 == lVar12)) {
          lVar12 = ((longlong)pppuVar16 - (longlong)pppuVar17) / 0x30;
          if (lVar12 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("vector<T> too long");
          }
          uVar19 = lVar12 + 1;
          lVar12 = ((longlong)pppuVar15 - (longlong)pppuVar17) / 6 +
                   ((longlong)pppuVar15 - (longlong)pppuVar17 >> 0x3f);
          uVar18 = (lVar12 >> 3) - (lVar12 >> 0x3f);
          uVar14 = (uVar18 >> 1) + uVar18;
          if (0x555555555555555 - (uVar18 >> 1) < uVar18) {
            uVar14 = 0;
          }
          goto LAB_14393319a;
        }
LAB_1439331ba:
        if (pppuVar16 != (undefined ***)0x0) {
          *pppuVar16 = local_b8;
          pppuVar16[1] = ppuStack_b0;
          pppuVar16[2] = local_a8;
          pppuVar16[3] = ppuStack_a0;
          *(undefined4 *)(pppuVar16 + 4) = local_98;
          *(undefined4 *)((longlong)pppuVar16 + 0x24) = uStack_94;
          *(int *)(pppuVar16 + 5) = iStack_90;
          *(undefined4 *)((longlong)pppuVar16 + 0x2c) = uStack_8c;
        }
      }
      pppuVar16 = pppuVar16 + 6;
      if (*(char *)((longlong)local_318 + 0x19) == '\0') {
        plVar9 = (longlong *)local_318[2];
        if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar9 + 0x19);
          local_318 = plVar9;
          plVar9 = (longlong *)*plVar9;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*plVar9 + 0x19);
            local_318 = plVar9;
            plVar9 = (longlong *)*plVar9;
          }
        }
        else {
          cVar2 = *(char *)(local_318[1] + 0x19);
          plVar7 = (longlong *)local_318[1];
          plVar9 = local_318;
          while ((local_318 = plVar7, cVar2 == '\0' && (plVar9 == (longlong *)local_318[2]))) {
            cVar2 = *(char *)(local_318[1] + 0x19);
            plVar7 = (longlong *)local_318[1];
            plVar9 = local_318;
          }
        }
      }
      pppuStack_300 = pppuVar16;
      puVar11 = (undefined8 *)FKey::GetFName(uVar8,&local_310);
    } while (local_318 != (longlong *)*puVar11);
  }
  lVar12 = *(longlong *)(param_1 + 8) + 0x50;
  if (lVar12 != param_2) {
    std::
    _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
    ::clear(lVar12);
    FUN_143930f70(lVar12,param_2,local_2f0);
  }
  FUN_143931bf0(*(longlong *)(param_1 + 8) + 0xd0,&local_308);
  if (pppuVar17 != (undefined ***)0x0) {
    uVar19 = ((longlong)pppuVar15 - (longlong)pppuVar17) / 0x30;
    if (0x555555555555555 < uVar19) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    pppuVar15 = pppuVar17;
    if (0xfff < uVar19 * 0x30) {
      if (((ulonglong)pppuVar17 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      pppuVar15 = (undefined ***)pppuVar17[-1];
      if (pppuVar17 <= pppuVar15) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if ((ulonglong)((longlong)pppuVar17 - (longlong)pppuVar15) < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < (ulonglong)((longlong)pppuVar17 - (longlong)pppuVar15)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(pppuVar15);
  }
  FUN_143925920(&local_2d8);
  return;
}



// FUNCTION 1439333a0 FUN_1439333a0 body=339 status=ok
// SIG undefined FUN_1439333a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1439333a0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined8 local_30;
  ulonglong local_28;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  lVar2 = (**(code **)(*param_1 + 0x10))();
  uVar4 = 0;
  if (lVar2 == -1) {
    local_28 = 0xf;
    local_30 = 0;
    local_40 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_40,"Cannot determine current file position (%T).",0x2c);
    FUN_143e19150(&local_40);
    if (0xf < local_28) {
      std::_Wrap_alloc<std::allocator<char>_>::deallocate
                (&local_40,CONCAT71(uStack_3f,local_40),local_28 + 1);
    }
  }
  lVar3 = *param_2;
  if (param_2[1] - lVar3 >> 3 != 0) {
    do {
      uVar1 = *(undefined8 *)(lVar3 + uVar4 * 8);
      local_20 = (undefined1)uVar1;
      local_1f = (undefined1)((ulonglong)uVar1 >> 8);
      local_1e = (undefined1)((ulonglong)uVar1 >> 0x10);
      local_1d = (undefined1)((ulonglong)uVar1 >> 0x18);
      local_1c = (undefined1)((ulonglong)uVar1 >> 0x20);
      local_1b = (undefined1)((ulonglong)uVar1 >> 0x28);
      local_1a = (undefined1)((ulonglong)uVar1 >> 0x30);
      local_19 = (undefined1)((ulonglong)uVar1 >> 0x38);
      (**(code **)(*param_1 + 8))(param_1,&local_20,8);
      uVar4 = (ulonglong)((int)uVar4 + 1);
      lVar3 = *param_2;
    } while (uVar4 < (ulonglong)(param_2[1] - lVar3 >> 3));
  }
  return lVar2;
}



// FUNCTION 143933500 FUN_143933500 body=258 status=ok
// SIG undefined FUN_143933500(void)

void FUN_143933500(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  undefined1 local_res13;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (lVar1 == 0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
  }
  local_res11 = (undefined1)((ulonglong)param_2 >> 8);
  *(longlong *)
   (*(longlong *)(param_1 + 0x80) +
   (longlong)((*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x74)) / *(int *)(param_1 + 0x120)) * 8
   ) = lVar1;
  local_res12 = (undefined1)((ulonglong)param_2 >> 0x10);
  local_res13 = (undefined1)((ulonglong)param_2 >> 0x18);
  local_res10 = (char)param_2;
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 8))(*(longlong **)(param_1 + 0xe8),&local_res10,4);
  local_res10 = (undefined1)param_4;
  local_res11 = (undefined1)((uint)param_4 >> 8);
  local_res12 = (undefined1)((uint)param_4 >> 0x10);
  local_res13 = (undefined1)((uint)param_4 >> 0x18);
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 8))(*(longlong **)(param_1 + 0xe8),&local_res10,4);
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 8))(*(longlong **)(param_1 + 0xe8),param_3,param_4)
  ;
  *(longlong *)(param_1 + 0x100) = (longlong)param_4 + 8 + lVar1;
  return;
}



// FUNCTION 143933610 FUN_143933610 body=1239 status=ok
// SIG undefined FUN_143933610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143933610(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined1 auStack_2d8 [32];
  int local_2b8;
  int local_2b0;
  uint local_2a8;
  uint local_2a4;
  longlong local_2a0;
  int local_298;
  int local_294;
  undefined1 local_290 [8];
  longlong local_288;
  undefined8 local_280;
  undefined1 local_278;
  longlong local_270;
  undefined8 local_268;
  undefined **local_158 [12];
  undefined **local_f8 [12];
  undefined **local_98 [12];
  ulonglong local_38;
  
  local_268 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  local_280 = *(undefined8 *)(param_1 + 8);
  local_278 = 0;
  local_270 = param_1;
  FUN_1437125f0();
  local_278 = 1;
  lVar2 = *(longlong *)(param_1 + 8);
  lVar7 = *(longlong *)(lVar2 + 0xd8) - *(longlong *)(lVar2 + 0xd0);
  lVar3 = lVar7 >> 0x3f;
  if (lVar7 / 0x30 + lVar3 == lVar3) {
    FUN_143e179e0(local_158,"No frame buffer specified as pixel data source.");
    local_158[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_158,(ThrowInfo *)&DAT_1461db4d8);
  }
  lVar3 = (longlong)(*(int *)(lVar2 + 0x60) - *(int *)(lVar2 + 0x74));
  uVar5 = lVar3 / (longlong)*(int *)(lVar2 + 0x120);
  uVar12 = uVar5 & 0xffffffff;
  FUN_14394b830(local_290,lVar3 % (longlong)*(int *)(lVar2 + 0x120) & 0xffffffff);
  lVar2 = *(longlong *)(param_1 + 8);
  iVar11 = *(int *)(lVar2 + 0x60);
  iVar9 = 1;
  iVar14 = (int)uVar5;
  if (*(int *)(lVar2 + 0x68) == 0) {
    local_298 = iVar11;
    iVar4 = (param_2 + -1 + (iVar11 - *(int *)(lVar2 + 0x74))) / *(int *)(lVar2 + 0x120);
    local_2a0 = CONCAT44(local_2a0._4_4_,iVar4);
    iVar16 = param_2 + -1 + iVar11;
    local_294 = iVar16;
    local_2a4 = 1;
    local_2a8 = (iVar4 - iVar14) + 1;
    iVar4 = (int)(*(longlong *)(lVar2 + 0x110) - *(longlong *)(lVar2 + 0x108) >> 3);
    local_288 = CONCAT44(local_288._4_4_,iVar4);
    puVar8 = &local_2a8;
    if (iVar4 <= (int)local_2a8) {
      puVar8 = (uint *)&local_288;
    }
    puVar6 = &local_2a4;
    if (0 < (int)*puVar8) {
      puVar6 = puVar8;
    }
    local_2a4 = *puVar6;
    uVar5 = 0;
    while (iVar4 = (int)uVar5, iVar4 < (int)local_2a4) {
      local_288 = operator_new(0x20);
      uVar5 = 0;
      if (local_288 != 0) {
        local_2b8 = iVar11;
        local_2b0 = iVar16;
        uVar5 = FUN_143931440(local_288,local_290,*(undefined8 *)(param_1 + 8),iVar4 + iVar14);
      }
      FUN_14394bb10(uVar5);
      uVar5 = (ulonglong)(iVar4 + 1);
    }
    uVar17 = local_2a4 + iVar14;
    local_2a8 = (uint)local_2a0 + 1;
  }
  else {
    local_2a8 = (((iVar11 - *(int *)(lVar2 + 0x74)) - param_2) + 1) / *(int *)(lVar2 + 0x120);
    local_294 = iVar11;
    iVar4 = (iVar11 - param_2) + 1;
    local_298 = iVar4;
    local_288 = CONCAT44(local_288._4_4_,1);
    iVar9 = (iVar14 - local_2a8) + 1;
    local_2a0 = CONCAT44(local_2a0._4_4_,iVar9);
    local_2a4 = (uint)(*(longlong *)(lVar2 + 0x110) - *(longlong *)(lVar2 + 0x108) >> 3);
    puVar8 = (uint *)&local_2a0;
    if ((int)local_2a4 <= iVar9) {
      puVar8 = &local_2a4;
    }
    puVar6 = (uint *)&local_288;
    if (0 < (int)*puVar8) {
      puVar6 = puVar8;
    }
    uVar17 = *puVar6;
    uVar5 = 0;
    while (iVar9 = (int)uVar5, iVar9 < (int)uVar17) {
      local_2a0 = operator_new(0x20);
      uVar5 = 0;
      if (local_2a0 != 0) {
        local_2b8 = iVar4;
        local_2b0 = iVar11;
        uVar5 = FUN_143931440(local_2a0,local_290,*(undefined8 *)(param_1 + 8),iVar14 - iVar9);
      }
      FUN_14394bb10(uVar5);
      uVar5 = (ulonglong)(iVar9 + 1);
    }
    uVar17 = iVar14 - uVar17;
    local_2a8 = local_2a8 - 1;
    iVar9 = -1;
  }
  while( true ) {
    uVar5 = 0;
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(int *)(lVar2 + 100) < 1) {
      FUN_143e179e0(local_98,"Tried to write more scan lines than specified by the data window.");
      local_98[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_98,(ThrowInfo *)&DAT_1461db4d8);
    }
    lVar2 = *(longlong *)
             (*(longlong *)(lVar2 + 0x108) +
             ((ulonglong)(longlong)(int)uVar12 %
             (ulonglong)(*(longlong *)(lVar2 + 0x110) - *(longlong *)(lVar2 + 0x108) >> 3)) * 8);
    local_2a0 = lVar2 + 0x60;
    FUN_14394c790(local_2a0);
    iVar11 = (*(int *)(lVar2 + 0x2c) - *(int *)(lVar2 + 0x28)) + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 100);
    *piVar1 = *piVar1 - iVar11;
    if (*(char *)(lVar2 + 0x38) != '\0') break;
    FUN_143933500(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar2 + 0x20),
                  *(undefined8 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0x10));
    uVar15 = (int)uVar12 + iVar9;
    uVar12 = (ulonglong)uVar15;
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x60);
    *piVar1 = *piVar1 + iVar11 * iVar9;
    FUN_14394c610(lVar2 + 0x60);
    if (uVar15 == local_2a8) {
      FUN_14394b9b0(local_290);
      plVar10 = (longlong *)(*(longlong *)(param_1 + 8) + 0x108);
      uVar12 = uVar5;
      uVar13 = uVar5;
      if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x110) - *plVar10 >> 3 != 0) {
        do {
          lVar2 = *(longlong *)(uVar12 + *plVar10);
          if ((*(char *)(lVar2 + 0x39) != '\0') && (uVar5 == 0)) {
            uVar5 = lVar2 + 0x40;
          }
          *(undefined1 *)(lVar2 + 0x39) = 0;
          uVar17 = (int)uVar13 + 1;
          plVar10 = (longlong *)(*(longlong *)(param_1 + 8) + 0x108);
          uVar12 = uVar12 + 8;
          uVar13 = (ulonglong)uVar17;
        } while ((ulonglong)(longlong)(int)uVar17 <
                 (ulonglong)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x110) - *plVar10 >> 3));
        if (uVar5 != 0) {
          FUN_143e17810(local_f8,uVar5);
          local_f8[0] = Iex::IoExc::vftable;
                    /* WARNING: Subroutine does not return */
          _guard_xfg_dispatch_icall_nop(local_f8,(ThrowInfo *)&DAT_1461db6b8);
        }
      }
      FUN_143925920(&local_280);
      return;
    }
    if (uVar17 != local_2a8) {
      local_2a0 = operator_new(0x20);
      if (local_2a0 != 0) {
        local_2b0 = local_294;
        local_2b8 = local_298;
        uVar5 = FUN_143931440(local_2a0,local_290,*(undefined8 *)(param_1 + 8),uVar17);
      }
      FUN_14394bb10(uVar5);
      uVar17 = uVar17 + iVar9;
    }
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x60);
  *piVar1 = *piVar1 + iVar11 * iVar9;
  FUN_14394c610(local_2a0);
  FUN_14394b9b0(local_290);
  FUN_143925920(&local_280);
  return;
}



// FUNCTION 143933af0 FUN_143933af0 body=200 status=ok
// SIG undefined FUN_143933af0(void)

undefined8 * FUN_143933af0(undefined8 *param_1,undefined1 param_2,undefined4 param_3)

{
  undefined8 local_res20;
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_14394c2d0();
  *param_1 = Imf::InputFile::Data::vftable;
  local_res20 = 0;
  FUN_143929ab0(param_1 + 6,0x40,0x40,0x3f800000,&local_res20,0x3f800000,0,3,uVar1);
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = param_2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  uVar1 = FUN_14186c270(param_1 + 0xf);
  param_1[0xf] = uVar1;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13) = param_3;
  return param_1;
}



// FUNCTION 143933bc0 FUN_143933bc0 body=120 status=ok
// SIG undefined FUN_143933bc0(void)

undefined8 * FUN_143933bc0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = Imf::InputFile::vftable;
  lVar1 = operator_new(0xa0);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143933af0(lVar1,0,param_3);
  }
  param_1[1] = uVar2;
  *(undefined8 *)(param_1[1] + 0x48) = param_2;
  FUN_143934470(param_1);
  return param_1;
}



// FUNCTION 143933c40 FUN_143933c40 body=164 status=ok
// SIG undefined FUN_143933c40(void)

undefined8 * FUN_143933c40(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = Imf::InputFile::vftable;
  lVar1 = operator_new(0xa0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_143933af0(lVar1,1,param_3);
  }
  uVar3 = 0;
  param_1[1] = uVar2;
  lVar1 = operator_new(0x38);
  if (lVar1 != 0) {
    uVar3 = FUN_143936550(lVar1,param_2);
  }
  *(undefined8 *)(param_1[1] + 0x48) = uVar3;
  FUN_143934470(param_1);
  return param_1;
}



// FUNCTION 143933cf0 FUN_143933cf0 body=171 status=ok
// SIG undefined FUN_143933cf0(void)

void FUN_143933cf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  
  *param_1 = Imf::InputFile::Data::vftable;
  puVar1 = (undefined8 *)param_1[0xb];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  puVar1 = (undefined8 *)param_1[0xc];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((*(char *)(param_1 + 10) != '\0') &&
     (puVar1 = (undefined8 *)param_1[9], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1439342c0(param_1);
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::erase(param_1 + 0xf,local_res8,*(undefined8 *)param_1[0xf],(undefined8 *)param_1[0xf]);
  FMemory::operator_delete(param_1[0xf]);
  FUN_143929ce0(param_1 + 6);
  FUN_14394c300(param_1);
  return;
}



// FUNCTION 143933da0 FUN_143933da0 body=47 status=ok
// SIG undefined FUN_143933da0(void)

undefined8 FUN_143933da0(undefined8 param_1,uint param_2)

{
  FUN_143933cf0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143933dd0 FUN_143933dd0 body=84 status=ok
// SIG undefined FUN_143933dd0(void)

undefined8 * FUN_143933dd0(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = Imf::InputFile::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143933e30 FUN_143933e30 body=1165 status=ok
// SIG undefined FUN_143933e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143933e30(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  undefined1 *puVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auStack_188 [32];
  uint local_168;
  undefined4 local_160;
  uint local_158;
  int local_154;
  int local_150;
  int local_14c;
  uint local_148;
  longlong *local_140;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  undefined1 local_128 [8];
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined1 local_108 [4];
  int local_104;
  int local_fc;
  int local_f8 [2];
  int local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  longlong lStack_d0;
  int local_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  undefined **local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  iVar16 = param_2;
  if (param_3 < param_2) {
    iVar16 = param_3;
  }
  if (param_2 < param_3) {
    param_2 = param_3;
  }
  local_138 = param_2;
  local_134 = iVar16;
  local_120 = param_1;
  if ((*(int *)(param_1 + 0x6c) <= iVar16) && (param_2 <= *(int *)(param_1 + 0x70))) {
    uVar5 = FUN_143943860(*(undefined8 *)(param_1 + 0x58));
    uVar17 = (ulonglong)(uint)(iVar16 - *(int *)(param_1 + 0x6c)) / (ulonglong)uVar5;
    uVar5 = FUN_143943860(*(undefined8 *)(param_1 + 0x58));
    uVar2 = (ulonglong)(uint)(param_2 - *(int *)(param_1 + 0x6c)) / (ulonglong)uVar5;
    local_158 = (uint)uVar17;
    uVar5 = (uint)uVar2;
    if (*(int *)(param_1 + 0x68) == 1) {
      uVar15 = local_158 - 1;
      local_150 = -1;
      uVar17 = uVar2;
      local_158 = uVar5;
    }
    else {
      uVar15 = uVar5 + 1;
      local_150 = 1;
    }
    local_148 = uVar15;
    FUN_1439415d0(*(undefined8 *)(param_1 + 0x58),local_f8,0);
    if ((uint)uVar17 != uVar15) {
      do {
        uVar5 = (uint)uVar17;
        local_168 = 0;
        FUN_143941650(*(undefined8 *)(param_1 + 0x58),local_108,0,uVar17);
        if (iVar16 < local_104) {
          iVar16 = local_104;
        }
        iVar8 = param_2;
        if (local_fc < param_2) {
          iVar8 = local_fc;
        }
        local_154 = iVar16;
        local_14c = iVar8;
        if (uVar5 != *(uint *)(param_1 + 0x90)) {
          iVar6 = FUN_143941fb0(*(undefined8 *)(param_1 + 0x58),0);
          local_160 = 0;
          local_168 = uVar5;
          FUN_143942580(*(undefined8 *)(param_1 + 0x58),0,iVar6 + -1,uVar17);
          *(uint *)(param_1 + 0x90) = uVar5;
        }
        plVar9 = (longlong *)
                 std::
                 _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
                 ::begin(*(undefined8 *)(param_1 + 0x88),local_b0);
        plVar9 = (longlong *)*plVar9;
        local_140 = plVar9;
        plVar10 = (longlong *)FKey::GetFName(*(undefined8 *)(param_1 + 0x88),local_128);
        if (plVar9 != (longlong *)*plVar10) {
          do {
            local_a8 = (undefined **)plVar9[0x24];
            lStack_a0 = plVar9[0x25];
            local_98 = plVar9[0x26];
            lStack_90 = plVar9[0x27];
            local_88 = (undefined4)plVar9[0x28];
            uStack_84 = *(undefined4 *)((longlong)plVar9 + 0x144);
            uStack_80 = (undefined4)plVar9[0x29];
            uStack_7c = *(undefined4 *)((longlong)plVar9 + 0x14c);
            local_78 = plVar9[0x2a];
            puVar11 = (undefined4 *)FUN_143930850(param_1 + 0x78,plVar9 + 4);
            local_e8 = *puVar11;
            uStack_e4 = puVar11[1];
            uStack_e0 = puVar11[2];
            uStack_dc = puVar11[3];
            local_d8 = *(longlong *)(puVar11 + 4);
            lStack_d0 = *(longlong *)(puVar11 + 6);
            local_c8 = puVar11[8];
            iStack_c4 = puVar11[9];
            uStack_c0 = puVar11[10];
            uStack_bc = puVar11[0xb];
            local_b8 = *(undefined8 *)(puVar11 + 0xc);
            iVar7 = FUN_14393e510(local_e8);
            iVar3 = iStack_c4;
            iVar6 = local_c8;
            lVar22 = (longlong)local_c8;
            iVar18 = local_c8 - local_f8[0];
            iVar21 = local_f8[0];
            while( true ) {
              iVar18 = iVar18 + -1;
              if (iVar21 < 0) {
                iVar14 = iVar18;
                if (local_c8 < 0) {
                  iVar14 = (-1 - local_c8) - iVar21;
                }
                iVar14 = -(iVar14 / local_c8);
              }
              else {
                iVar14 = iVar21 / local_c8;
              }
              if (iVar21 == iVar14 * local_c8) break;
              iVar21 = iVar21 + 1;
            }
            iVar18 = iStack_c4 - local_154;
            while( true ) {
              iVar18 = iVar18 + -1;
              if (iVar16 < 0) {
                iVar14 = iVar18;
                if (iStack_c4 < 0) {
                  iVar14 = (-1 - iStack_c4) - iVar16;
                }
                iVar14 = -(iVar14 / iStack_c4);
              }
              else {
                iVar14 = iVar16 / iStack_c4;
              }
              if (iVar16 == iVar14 * iStack_c4) break;
              iVar16 = iVar16 + 1;
            }
            local_12c = iVar7;
            if (iVar16 <= iVar8) {
              lVar23 = iVar21 * local_98;
              local_110 = lVar23;
              iVar8 = FUN_143934420(iVar21,local_c8);
              local_118 = iVar8 * local_d8;
              local_130 = -iVar3;
              iVar18 = (local_130 - iVar16) + -1;
              do {
                lVar20 = (iVar16 - local_104) * lStack_90 + lVar23 + lStack_a0;
                if (iVar16 < 0) {
                  iVar8 = iVar3 * 2 + iVar18;
                  if (iVar3 < 0) {
                    iVar8 = iVar18;
                  }
                  iVar8 = -(iVar8 / iVar3);
                }
                else {
                  iVar8 = iVar16 / iVar3;
                }
                puVar19 = (undefined1 *)
                          (iVar8 * lStack_d0 + local_118 + CONCAT44(uStack_dc,uStack_e0));
                if (iVar21 <= local_f0) {
                  lVar24 = (longlong)iVar7;
                  iVar8 = iVar21;
                  do {
                    if (lVar24 != 0) {
                      puVar12 = puVar19;
                      lVar23 = lVar24;
                      do {
                        *puVar12 = puVar12[lVar20 - (longlong)puVar19];
                        puVar12 = puVar12 + 1;
                        lVar23 = lVar23 + -1;
                      } while (lVar23 != 0);
                    }
                    puVar19 = puVar19 + local_d8;
                    lVar20 = lVar20 + lVar22 * local_98;
                    iVar8 = iVar8 + iVar6;
                    lVar23 = local_110;
                    iVar7 = local_12c;
                  } while (iVar8 <= local_f0);
                }
                iVar18 = iVar18 + local_130;
                iVar16 = iVar16 + iVar3;
                plVar9 = local_140;
                iVar8 = local_14c;
              } while (iVar16 <= local_14c);
            }
            param_1 = local_120;
            if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
              plVar10 = (longlong *)plVar9[2];
              if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
                cVar1 = *(char *)(*plVar10 + 0x19);
                plVar9 = plVar10;
                plVar10 = (longlong *)*plVar10;
                while (local_140 = plVar9, cVar1 == '\0') {
                  cVar1 = *(char *)(*plVar10 + 0x19);
                  plVar9 = plVar10;
                  plVar10 = (longlong *)*plVar10;
                }
              }
              else {
                cVar1 = *(char *)(plVar9[1] + 0x19);
                plVar4 = (longlong *)plVar9[1];
                plVar10 = plVar9;
                while ((plVar9 = plVar4, local_140 = plVar9, cVar1 == '\0' &&
                       (plVar10 == (longlong *)plVar9[2]))) {
                  cVar1 = *(char *)(plVar9[1] + 0x19);
                  plVar4 = (longlong *)plVar9[1];
                  plVar10 = plVar9;
                }
              }
            }
            puVar13 = (undefined8 *)FKey::GetFName(*(undefined8 *)(local_120 + 0x88),local_128);
            uVar5 = local_158;
            param_2 = local_138;
            iVar16 = local_154;
          } while (plVar9 != (longlong *)*puVar13);
        }
        local_158 = uVar5 + local_150;
        uVar17 = (ulonglong)local_158;
        iVar16 = local_134;
      } while (local_158 != local_148);
    }
    return;
  }
  FUN_143e179e0(&local_a8,"Tried to read scan line outside the image file\'s data window.");
  local_a8 = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(&local_a8,(ThrowInfo *)&DAT_1461db4d8);
}



// FUNCTION 1439342c0 FUN_1439342c0 body=341 status=ok
// SIG undefined FUN_1439342c0(void)

void FUN_1439342c0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *local_res8;
  undefined1 local_res10 [8];
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    std::
    _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
    ::begin(*(longlong *)(param_1 + 0x88),&local_res8);
    plVar4 = (longlong *)FKey::GetFName(*(undefined8 *)(param_1 + 0x88),local_res10);
    if (local_res8 != (longlong *)*plVar4) {
      do {
        iVar2 = (int)local_res8[0x24];
        if (iVar2 == 0) {
LAB_143934324:
          lVar6 = local_res8[0x25] + (longlong)*(int *)(param_1 + 0x94) * 4;
LAB_143934336:
          FMemory::operator_delete(lVar6);
        }
        else {
          if (iVar2 == 1) {
            lVar6 = local_res8[0x25] + (longlong)*(int *)(param_1 + 0x94) * 2;
            goto LAB_143934336;
          }
          if (iVar2 == 2) goto LAB_143934324;
        }
        if (*(char *)((longlong)local_res8 + 0x19) == '\0') {
          plVar4 = (longlong *)local_res8[2];
          if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x19);
            local_res8 = plVar4;
            plVar4 = (longlong *)*plVar4;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar4 + 0x19);
              local_res8 = plVar4;
              plVar4 = (longlong *)*plVar4;
            }
          }
          else {
            cVar1 = *(char *)(local_res8[1] + 0x19);
            plVar3 = (longlong *)local_res8[1];
            plVar4 = local_res8;
            while ((local_res8 = plVar3, cVar1 == '\0' && (plVar4 == (longlong *)local_res8[2]))) {
              cVar1 = *(char *)(local_res8[1] + 0x19);
              plVar3 = (longlong *)local_res8[1];
              plVar4 = local_res8;
            }
          }
        }
        puVar5 = (undefined8 *)FKey::GetFName(*(undefined8 *)(param_1 + 0x88),local_res10);
      } while (local_res8 != (longlong *)*puVar5);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x88);
    if (puVar5 != (undefined8 *)0x0) {
      std::
      _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
      ::erase(puVar5,&local_res8,*(undefined8 *)*puVar5,(undefined8 *)*puVar5);
      FMemory::operator_delete(*puVar5);
      FMemory::operator_delete(puVar5);
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  return;
}



// FUNCTION 143934420 FUN_143934420 body=47 status=ok
// SIG undefined FUN_143934420(void)

ulonglong FUN_143934420(int param_1,int param_2)

{
  if (-1 < param_1) {
    return (longlong)param_1 / (longlong)param_2 & 0xffffffff;
  }
  if (-1 < param_2) {
    return (ulonglong)(uint)-(((param_2 - param_1) + -1) / param_2);
  }
  return (ulonglong)(uint)-(((-1 - param_1) - param_2) / param_2);
}



// FUNCTION 143934450 FUN_143934450 body=13 status=ok
// SIG undefined FUN_143934450(void)

void FUN_143934450(longlong param_1)

{
  FUN_143927860(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48));
  return;
}



// FUNCTION 143934460 OnLiveLinkSourcesChanged body=9 status=ok
// SIG undefined OnLiveLinkSourcesChanged(void)

longlong FLiveLinkClient::OnLiveLinkSourcesChanged(longlong param_1)

{
  return *(longlong *)(param_1 + 8) + 0x30;
}



// FUNCTION 143934470 FUN_143934470 body=266 status=ok
// SIG undefined FUN_143934470(void)

void FUN_143934470(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 8);
  FUN_14392df10(lVar3 + 0x30,*(undefined8 *)(lVar3 + 0x48),lVar3 + 0x40);
  FUN_14392e600(*(longlong *)(param_1 + 8) + 0x30,
                *(uint *)(*(longlong *)(param_1 + 8) + 0x40) >> 9 & 0xffffff01);
  if ((*(uint *)(*(longlong *)(param_1 + 8) + 0x40) >> 9 & 1) == 0) {
    lVar3 = operator_new();
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 8);
      uVar4 = FUN_14393e820(lVar3,lVar1 + 0x30,*(undefined8 *)(lVar1 + 0x48),
                            *(undefined4 *)(lVar1 + 0x98));
    }
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x60) = uVar4;
  }
  else {
    puVar2 = (undefined4 *)UEngine::SeamlessTravelHandlerForWorld(*(longlong *)(param_1 + 8) + 0x30)
    ;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x68) = *puVar2;
    lVar3 = UEngine::SeamlessTravelHandlerForWorld(*(longlong *)(param_1 + 8) + 0x30);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x6c) = *(undefined4 *)(lVar3 + 4);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x70) = *(undefined4 *)(lVar3 + 0xc);
    lVar3 = operator_new();
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 8);
      uVar4 = FUN_143940f80(lVar3,lVar1 + 0x30,*(undefined8 *)(lVar1 + 0x48),
                            *(undefined4 *)(lVar1 + 0x40),*(undefined4 *)(lVar1 + 0x98));
    }
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58) = uVar4;
  }
  return;
}



// FUNCTION 143934580 FUN_143934580 body=8 status=ok
// SIG undefined FUN_143934580(void)

void FUN_143934580(undefined8 param_1,undefined4 param_2)

{
  FUN_143934590(param_1,param_2,param_2);
  return;
}



// FUNCTION 143934590 FUN_143934590 body=114 status=ok
// SIG undefined FUN_143934590(void)

void FUN_143934590(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_20;
  undefined1 local_18;
  
  uVar1 = 0xfffffffffffffffe;
  local_20 = *(longlong *)(param_1 + 8);
  if ((*(uint *)(local_20 + 0x40) >> 9 & 1) == 0) {
    FUN_14393fc90(*(undefined8 *)(local_20 + 0x60));
  }
  else {
    FUN_1437125f0();
    local_18 = 1;
    FUN_143933e30(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,uVar1);
    FUN_143925920(&local_20);
  }
  return;
}



// FUNCTION 143934610 FUN_143934610 body=1317 status=ok
// SIG undefined FUN_143934610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143934610(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined1 local_120;
  longlong *local_118;
  undefined1 local_110;
  longlong *local_108;
  undefined8 *local_100;
  longlong *local_f8;
  longlong local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  longlong local_c8;
  longlong lStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined **local_98 [12];
  ulonglong local_38;
  
  local_e0 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_f0 = *(longlong *)(param_1 + 8);
  if ((*(uint *)(local_f0 + 0x40) >> 9 & 1) == 0) {
    FUN_1439400c0(*(undefined8 *)(local_f0 + 0x60));
  }
  else {
    FUN_1437125f0();
    local_e8 = 1;
    lVar14 = *(longlong *)(param_1 + 8) + 0x78;
    std::
    _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
    ::begin(lVar14,&local_108);
    std::
    _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
    ::begin(param_2,&local_f8);
    plVar10 = (longlong *)FKey::GetFName(lVar14,&local_118);
    if (local_108 != (longlong *)*plVar10) {
      while (plVar10 = (longlong *)FKey::GetFName(param_2,&local_100),
            local_f8 != (longlong *)*plVar10) {
        plVar10 = local_108 + 4;
        lVar5 = 0x20 - (longlong)plVar10;
        do {
          lVar6 = *plVar10;
          cVar1 = *(char *)((longlong)plVar10 + (longlong)local_f8 + lVar5);
          if ((char)lVar6 != cVar1) break;
          plVar10 = (longlong *)((longlong)plVar10 + 1);
        } while (cVar1 != '\0');
        if (((char)lVar6 != cVar1) || ((int)local_108[0x24] != (int)local_f8[0x24])) break;
        if (*(char *)((longlong)local_108 + 0x19) == '\0') {
          plVar10 = (longlong *)local_108[2];
          if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar10 + 0x19);
            local_108 = plVar10;
            plVar10 = (longlong *)*plVar10;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar10 + 0x19);
              local_108 = plVar10;
              plVar10 = (longlong *)*plVar10;
            }
          }
          else {
            cVar1 = *(char *)(local_108[1] + 0x19);
            plVar7 = (longlong *)local_108[1];
            plVar10 = local_108;
            while ((local_108 = plVar7, cVar1 == '\0' && (plVar10 == (longlong *)local_108[2]))) {
              cVar1 = *(char *)(local_108[1] + 0x19);
              plVar7 = (longlong *)local_108[1];
              plVar10 = local_108;
            }
          }
        }
        if (*(char *)((longlong)local_f8 + 0x19) == '\0') {
          plVar10 = (longlong *)local_f8[2];
          if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar10 + 0x19);
            local_f8 = plVar10;
            plVar10 = (longlong *)*plVar10;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar10 + 0x19);
              local_f8 = plVar10;
              plVar10 = (longlong *)*plVar10;
            }
          }
          else {
            cVar1 = *(char *)(local_f8[1] + 0x19);
            plVar7 = (longlong *)local_f8[1];
            plVar10 = local_f8;
            while ((local_f8 = plVar7, cVar1 == '\0' && (plVar10 == (longlong *)local_f8[2]))) {
              cVar1 = *(char *)(local_f8[1] + 0x19);
              plVar7 = (longlong *)local_f8[1];
              plVar10 = local_f8;
            }
          }
        }
        puVar11 = (undefined8 *)FKey::GetFName(lVar14,&local_118);
        if (local_108 == (longlong *)*puVar11) break;
      }
    }
    puVar11 = (undefined8 *)FKey::GetFName(lVar14,&local_100);
    if ((local_108 != (longlong *)*puVar11) ||
       (puVar11 = (undefined8 *)FKey::GetFName(param_2,&local_100), local_f8 != (longlong *)*puVar11
       )) {
      FUN_1439342c0(*(undefined8 *)(param_1 + 8));
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x90) = 0xffffffff;
      piVar12 = (int *)UEngine::SeamlessTravelHandlerForWorld(*(longlong *)(param_1 + 8) + 0x30);
      puVar11 = (undefined8 *)operator_new(0x10);
      local_100 = puVar11;
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        *puVar11 = 0;
        puVar11[1] = 0;
        uVar13 = FUN_14186c270(puVar11);
        *puVar11 = uVar13;
      }
      *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x88) = puVar11;
      *(int *)(*(longlong *)(param_1 + 8) + 0x94) = *piVar12;
      iVar8 = FUN_143943860(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58));
      iVar8 = iVar8 * ((piVar12[2] - *piVar12) + 1);
      std::
      _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
      ::begin(param_2,&local_118);
      while (plVar10 = (longlong *)FKey::GetFName(param_2,&local_100),
            local_118 != (longlong *)*plVar10) {
        local_c8 = local_118[0x26];
        lStack_c0 = local_118[0x27];
        local_b8 = (undefined4)local_118[0x28];
        uStack_b4 = *(undefined4 *)((longlong)local_118 + 0x144);
        uStack_b0 = (undefined4)local_118[0x29];
        uStack_ac = *(undefined4 *)((longlong)local_118 + 0x14c);
        local_a8 = local_118[0x2a];
        iVar9 = (int)local_118[0x24];
        if (iVar9 == 0) {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (longlong)iVar8;
          uVar13 = SUB168(ZEXT816(4) * auVar4,0);
          if (SUB168(ZEXT816(4) * auVar4,8) != 0) {
            uVar13 = 0xffffffffffffffff;
          }
          lVar14 = operator_new(uVar13);
          plVar10 = local_118;
          iVar9 = FUN_143941e70(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58),0);
          lVar14 = lVar14 + (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x94) * -4;
          uVar13 = 0;
LAB_1439349d7:
          local_148 = (longlong)iVar9 << 2;
          uVar15 = 4;
        }
        else {
          if (iVar9 != 1) {
            if (iVar9 != 2) {
              FUN_143e179e0(local_98,"Unknown pixel data type.");
              local_98[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
              _guard_xfg_dispatch_icall_nop(local_98,(ThrowInfo *)&DAT_1461db4d8);
            }
            auVar2._8_8_ = 0;
            auVar2._0_8_ = (longlong)iVar8;
            uVar13 = SUB168(ZEXT816(4) * auVar2,0);
            if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
              uVar13 = 0xffffffffffffffff;
            }
            lVar14 = operator_new(uVar13);
            plVar10 = local_118;
            iVar9 = FUN_143941e70(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58),0);
            lVar14 = lVar14 + (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x94) * -4;
            uVar13 = 2;
            goto LAB_1439349d7;
          }
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (longlong)iVar8;
          uVar13 = SUB168(ZEXT816(2) * auVar3,0);
          if (SUB168(ZEXT816(2) * auVar3,8) != 0) {
            uVar13 = 0xffffffffffffffff;
          }
          lVar14 = operator_new(uVar13);
          plVar10 = local_118;
          iVar9 = FUN_143941e70(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58),0);
          local_148 = (longlong)iVar9 * 2;
          lVar14 = lVar14 + (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x94) * -2;
          uVar15 = 2;
          uVar13 = 1;
        }
        local_120 = 1;
        local_128 = 0;
        local_130 = CONCAT44(uStack_ac,uStack_b0);
        local_138 = 1;
        local_140 = 1;
        uVar13 = FUN_143930720(local_98,uVar13,lVar14,uVar15);
        FUN_143930bc0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x88),plVar10 + 4,uVar13);
        if (*(char *)((longlong)local_118 + 0x19) == '\0') {
          plVar10 = (longlong *)local_118[2];
          if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar10 + 0x19);
            local_118 = plVar10;
            plVar10 = (longlong *)*plVar10;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar10 + 0x19);
              local_118 = plVar10;
              plVar10 = (longlong *)*plVar10;
            }
          }
          else {
            cVar1 = *(char *)(local_118[1] + 0x19);
            plVar7 = (longlong *)local_118[1];
            plVar10 = local_118;
            while ((local_118 = plVar7, cVar1 == '\0' && (plVar10 == (longlong *)local_118[2]))) {
              cVar1 = *(char *)(local_118[1] + 0x19);
              plVar7 = (longlong *)local_118[1];
              plVar10 = local_118;
            }
          }
        }
      }
      FUN_1439429f0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58),
                    *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x88));
    }
    lVar14 = *(longlong *)(param_1 + 8) + 0x78;
    if (lVar14 != param_2) {
      std::
      _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
      ::clear(lVar14);
      FUN_143930f70(lVar14,param_2,local_110);
    }
    FUN_143925920(&local_f0);
  }
  return;
}



// FUNCTION 143934b40 FUN_143934b40 body=61 status=ok
// SIG undefined FUN_143934b40(void)

undefined4 *
FUN_143934b40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = *param_3;
  param_1[3] = param_3[1];
  param_1[4] = *param_4;
  param_1[5] = param_4[1];
  param_1[6] = *param_5;
  param_1[7] = param_5[1];
  return param_1;
}



// FUNCTION 143934b80 FUN_143934b80 body=33 status=ok
// SIG undefined FUN_143934b80(void)

undefined8 * FUN_143934b80(undefined8 *param_1)

{
  FUN_143e17780();
  *param_1 = Iex::MathExc::vftable;
  return param_1;
}



// FUNCTION 143934bb0 FUN_143934bb0 body=619 status=ok
// SIG undefined FUN_143934bb0(void)

float * FUN_143934bb0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar1 = param_2[7];
  fVar13 = param_2[3];
  fVar2 = param_2[1];
  fVar3 = param_2[5];
  fVar11 = (param_2[6] * param_3) / fVar1;
  fVar10 = (((1.0 - param_2[6]) - fVar1) * param_3) / fVar1 + fVar11;
  fVar9 = *param_2 * (fVar3 - fVar13) + param_2[4] * (fVar13 - fVar2) + param_2[2] * (fVar2 - fVar3)
  ;
  fVar8 = (fVar3 - 1.0) * param_3 + fVar10 * fVar3;
  fVar7 = (fVar13 - 1.0) * param_3 + fVar10 * fVar13;
  fVar1 = *param_2;
  fVar4 = *param_2;
  fVar12 = (((fVar3 - fVar13) * fVar11 - fVar8 * param_2[2]) + fVar7 * param_2[4]) / fVar9;
  fVar6 = (fVar2 - 1.0) * param_3 + fVar10 * fVar2;
  fVar10 = param_2[2];
  fVar5 = param_2[4];
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  fVar13 = (((fVar13 - fVar2) * fVar11 - fVar7 * fVar4) + fVar6 * fVar10) / fVar9;
  fVar9 = (((fVar2 - fVar3) * fVar11 + fVar8 * fVar1) - fVar6 * fVar5) / fVar9;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 0.0;
  *param_1 = 1.0;
  param_1[5] = 1.0;
  param_1[10] = 1.0;
  param_1[0xf] = 1.0;
  *param_1 = fVar12 * *param_2;
  param_1[1] = fVar12 * param_2[1];
  param_1[2] = ((1.0 - *param_2) - param_2[1]) * fVar12;
  param_1[4] = fVar9 * param_2[2];
  param_1[5] = fVar9 * param_2[3];
  param_1[6] = ((1.0 - param_2[2]) - param_2[3]) * fVar9;
  param_1[8] = fVar13 * param_2[4];
  param_1[9] = fVar13 * param_2[5];
  param_1[10] = ((1.0 - param_2[4]) - param_2[5]) * fVar13;
  return param_1;
}



// FUNCTION 143934e20 FUN_143934e20 body=130 status=ok
// SIG undefined FUN_143934e20(void)

short * FUN_143934e20(short *param_1,float param_2)

{
  short sVar1;
  
  if (param_2 == 0.0) {
    *param_1 = (short)((uint)param_2 >> 0x10);
    return param_1;
  }
  if (*(short *)(&DAT_145e0ac70 + (ulonglong)((uint)param_2 >> 0x17) * 2) == 0) {
    sVar1 = FUN_143e17490(param_2);
    *param_1 = sVar1;
    return param_1;
  }
  *param_1 = (short)((int)(((uint)param_2 & 0x7fffff) + 0xfff +
                          ((int)((uint)param_2 & 0x7fffff) >> 0xd & 1U)) >> 0xd) +
             *(short *)(&DAT_145e0ac70 + (ulonglong)((uint)param_2 >> 0x17) * 2);
  return param_1;
}



// FUNCTION 143934eb0 FUN_143934eb0 body=147 status=ok
// SIG undefined FUN_143934eb0(void)

ushort * FUN_143934eb0(ushort *param_1,float param_2)

{
  ushort uVar1;
  
  param_2 = param_2 * *(float *)(&DAT_145dcac70 + (ulonglong)*param_1 * 4);
  if (param_2 == 0.0) {
    *param_1 = (ushort)((uint)param_2 >> 0x10);
    return param_1;
  }
  if (*(short *)(&DAT_145e0ac70 + (ulonglong)((uint)param_2 >> 0x17) * 2) == 0) {
    uVar1 = FUN_143e17490(param_2);
    *param_1 = uVar1;
    return param_1;
  }
  *param_1 = (short)((int)(((uint)param_2 & 0x7fffff) + 0xfff +
                          ((int)((uint)param_2 & 0x7fffff) >> 0xd & 1U)) >> 0xd) +
             *(short *)(&DAT_145e0ac70 + (ulonglong)((uint)param_2 >> 0x17) * 2);
  return param_1;
}



// FUNCTION 143934f50 FUN_143934f50 body=596 status=ok
// SIG undefined FUN_143934f50(void)

void FUN_143934f50(float *param_1,int param_2,longlong param_3,longlong param_4)

{
  short sVar1;
  ushort *puVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < param_2) {
    puVar2 = (ushort *)(param_3 + 2);
    param_4 = param_4 - param_3;
    lVar3 = (longlong)param_2;
    do {
      if ((*(float *)(&DAT_145dcac70 + (ulonglong)puVar2[-1] * 4) == 0.0) &&
         (*(float *)(&DAT_145dcac70 + (ulonglong)puVar2[1] * 4) == 0.0)) {
        *(ushort *)(param_4 + -2 + (longlong)puVar2) = *puVar2;
        *(ushort *)(param_4 + (longlong)puVar2) = *puVar2;
        *(ushort *)(param_4 + 2 + (longlong)puVar2) = *puVar2;
      }
      else {
        fVar5 = *(float *)(&DAT_145dcac70 + (ulonglong)*puVar2 * 4);
        fVar4 = (*(float *)(&DAT_145dcac70 + (ulonglong)puVar2[-1] * 4) + 1.0) * fVar5;
        fVar6 = (*(float *)(&DAT_145dcac70 + (ulonglong)puVar2[1] * 4) + 1.0) * fVar5;
        fVar5 = ((fVar5 - fVar4 * *param_1) - fVar6 * param_1[2]) / param_1[1];
        if (fVar4 == 0.0) {
          sVar1 = (short)((uint)fVar4 >> 0x10);
        }
        else if (*(short *)(&DAT_145e0ac70 + (ulonglong)((uint)fVar4 >> 0x17) * 2) == 0) {
          sVar1 = FUN_143e17490(fVar4);
        }
        else {
          sVar1 = (short)((int)(((uint)fVar4 & 0x7fffff) + 0xfff +
                               ((int)((uint)fVar4 & 0x7fffff) >> 0xd & 1U)) >> 0xd) +
                  *(short *)(&DAT_145e0ac70 + (ulonglong)((uint)fVar4 >> 0x17) * 2);
        }
        *(short *)(param_4 + -2 + (longlong)puVar2) = sVar1;
        if (fVar5 == 0.0) {
          sVar1 = (short)((uint)fVar5 >> 0x10);
        }
        else if (*(short *)(&DAT_145e0ac70 + (ulonglong)((uint)fVar5 >> 0x17) * 2) == 0) {
          sVar1 = FUN_143e17490(fVar5);
        }
        else {
          sVar1 = (short)((int)(((uint)fVar5 & 0x7fffff) + 0xfff +
                               ((int)((uint)fVar5 & 0x7fffff) >> 0xd & 1U)) >> 0xd) +
                  *(short *)(&DAT_145e0ac70 + (ulonglong)((uint)fVar5 >> 0x17) * 2);
        }
        *(short *)(param_4 + (longlong)puVar2) = sVar1;
        if (fVar6 == 0.0) {
          sVar1 = (short)((uint)fVar6 >> 0x10);
        }
        else if (*(short *)(&DAT_145e0ac70 + (ulonglong)((uint)fVar6 >> 0x17) * 2) == 0) {
          sVar1 = FUN_143e17490(fVar6);
        }
        else {
          sVar1 = (short)((int)(((uint)fVar6 & 0x7fffff) + 0xfff +
                               ((int)((uint)fVar6 & 0x7fffff) >> 0xd & 1U)) >> 0xd) +
                  *(short *)(&DAT_145e0ac70 + (ulonglong)((uint)fVar6 >> 0x17) * 2);
        }
        *(short *)(param_4 + 2 + (longlong)puVar2) = sVar1;
      }
      *(ushort *)(param_4 + 4 + (longlong)puVar2) = puVar2[2];
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1439351b0 FUN_1439351b0 body=153 status=ok
// SIG undefined FUN_1439351b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_1439351b0(float *param_1,undefined8 *param_2)

{
  float fVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [4];
  float local_54;
  float local_44;
  float local_34;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78 = *param_2;
  uStack_70 = param_2[1];
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  FUN_143934bb0(local_58,&local_78,0x3f800000);
  fVar1 = local_44 + local_54 + local_34;
  *param_1 = local_54 / fVar1;
  param_1[1] = local_44 / fVar1;
  param_1[2] = local_34 / fVar1;
  return param_1;
}



// FUNCTION 143935250 FUN_143935250 body=613 status=ok
// SIG undefined FUN_143935250(void)

void FUN_143935250(ushort *param_1,float param_2,float *param_3,ushort *param_4)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  float fVar5;
  float fVar6;
  
  puVar1 = param_1 + 2;
  puVar4 = param_1 + 1;
  if (*(float *)(&DAT_145dcac70 + (ulonglong)param_1[1] * 4) <=
      *(float *)(&DAT_145dcac70 + (ulonglong)param_1[2] * 4) &&
      *(float *)(&DAT_145dcac70 + (ulonglong)param_1[2] * 4) !=
      *(float *)(&DAT_145dcac70 + (ulonglong)param_1[1] * 4)) {
    puVar4 = puVar1;
  }
  puVar3 = param_1;
  if (*(float *)(&DAT_145dcac70 + (ulonglong)*param_1 * 4) <
      *(float *)(&DAT_145dcac70 + (ulonglong)*puVar4 * 4)) {
    puVar3 = puVar4;
  }
  fVar6 = *(float *)(&DAT_145dcac70 + (ulonglong)*puVar3 * 4);
  fVar5 = fVar6 - (fVar6 - *(float *)(&DAT_145dcac70 + (ulonglong)*param_1 * 4)) * param_2;
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  FUN_143934e20(param_4,fVar5);
  fVar5 = fVar6 - (fVar6 - *(float *)(&DAT_145dcac70 + (ulonglong)param_1[1] * 4)) * param_2;
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  FUN_143934e20(param_4 + 1,fVar5);
  fVar6 = fVar6 - (fVar6 - *(float *)(&DAT_145dcac70 + (ulonglong)*puVar1 * 4)) * param_2;
  if (fVar6 < 0.0) {
    fVar6 = 0.0;
  }
  FUN_143934e20(param_4 + 2,fVar6);
  param_4[3] = param_1[3];
  fVar6 = param_3[1] * *(float *)(&DAT_145dcac70 + (ulonglong)param_4[1] * 4) +
          *(float *)(&DAT_145dcac70 + (ulonglong)*param_4 * 4) * *param_3 +
          param_3[2] * *(float *)(&DAT_145dcac70 + (ulonglong)param_4[2] * 4);
  if (0.0 < fVar6) {
    fVar6 = (*param_3 * *(float *)(&DAT_145dcac70 + (ulonglong)*param_1 * 4) +
             param_3[1] * *(float *)(&DAT_145dcac70 + (ulonglong)param_1[1] * 4) +
            param_3[2] * *(float *)(&DAT_145dcac70 + (ulonglong)*puVar1 * 4)) / fVar6;
    fVar5 = fVar6 * *(float *)(&DAT_145dcac70 + (ulonglong)*param_4 * 4);
    if (fVar5 == 0.0) {
      uVar2 = (ushort)((uint)fVar5 >> 0x10);
    }
    else if (*(short *)(&DAT_145e0ac70 + (ulonglong)((uint)fVar5 >> 0x17) * 2) == 0) {
      uVar2 = FUN_143e17490(fVar5);
    }
    else {
      uVar2 = (short)((int)(((uint)fVar5 & 0x7fffff) + 0xfff +
                           ((int)((uint)fVar5 & 0x7fffff) >> 0xd & 1U)) >> 0xd) +
              *(short *)(&DAT_145e0ac70 + (ulonglong)((uint)fVar5 >> 0x17) * 2);
    }
    *param_4 = uVar2;
    FUN_143934eb0(param_4 + 1,fVar6);
    FUN_143934eb0(param_4 + 2,fVar6);
  }
  return;
}



// FUNCTION 1439354c0 FUN_1439354c0 body=480 status=ok
// SIG undefined FUN_1439354c0(void)

void FUN_1439354c0(undefined8 param_1,int param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar1 = (longlong)param_2;
  fVar5 = (float)FUN_143936050(*param_3);
  fVar6 = (float)FUN_143936050(param_3[2]);
  if (0 < param_2) {
    iVar3 = 1;
    puVar4 = (undefined2 *)(param_4 + 4);
    fVar8 = fVar5;
    fVar7 = fVar6;
    do {
      fVar10 = fVar6;
      fVar9 = fVar5;
      fVar5 = fVar9;
      fVar6 = fVar10;
      if (iVar3 + -1 < param_2 + -1) {
        fVar5 = (float)FUN_143936050(*param_3 + (longlong)iVar3 * 8);
        fVar6 = (float)FUN_143936050(param_3[2] + (longlong)iVar3 * 8);
      }
      fVar8 = (fVar8 + fVar5 + fVar7 + fVar6) * 0.25;
      if (1.0 <= fVar8) {
        fVar8 = 1.0;
      }
      puVar2 = (undefined2 *)((longlong)puVar4 + param_3[1] + (-4 - param_4));
      fVar7 = (float)FUN_143936050(puVar2);
      if (fVar7 <= fVar8) {
LAB_143935622:
        puVar4[-2] = *puVar2;
        puVar4[-1] = puVar2[1];
        *puVar4 = puVar2[2];
        puVar4[1] = puVar2[3];
      }
      else {
        fVar8 = 1.0 - (1.0 - fVar8) * 0.25;
        if (1.0 <= fVar8) {
          fVar8 = 1.0;
        }
        if (fVar7 <= fVar8) goto LAB_143935622;
        FUN_143935250(puVar2,fVar8 / fVar7,param_1,puVar4 + -2);
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 4;
      lVar1 = lVar1 + -1;
      fVar8 = fVar9;
      fVar7 = fVar10;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1439356a0 FUN_1439356a0 body=1185 status=ok
// SIG undefined FUN_1439356a0(void)

void FUN_1439356a0(int param_1,longlong param_2,longlong param_3)

{
  undefined2 uVar1;
  short sVar2;
  ushort *puVar3;
  longlong lVar4;
  byte bVar5;
  float fVar6;
  
  bVar5 = 0;
  if (0xd < (longlong)(param_1 + 0xd)) {
    param_3 = param_3 - param_2;
    puVar3 = (ushort *)(param_2 + 0x14);
    lVar4 = (longlong)(param_1 + 0xd) + -0xd;
    do {
      if ((bool)(bVar5 & 1)) {
        fVar6 = (((((((((((*(float *)(&DAT_145dcac70 + (ulonglong)puVar3[-10] * 4) * 0.002128 -
                          *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[-2] * 4) * 0.00754) +
                         *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[6] * 4) * 0.019597) -
                        *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0xe] * 4) * 0.043159) +
                       *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0x16] * 4) * 0.087929) -
                      *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0x1e] * 4) * 0.186077) +
                      *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0x26] * 4) * 0.627123 +
                     *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0x2e] * 4) * 0.627123) -
                    *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0x36] * 4) * 0.186077) +
                   *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0x3e] * 4) * 0.087929) -
                  *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0x46] * 4) * 0.043159) +
                 *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0x4e] * 4) * 0.019597) -
                *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0x56] * 4) * 0.00754) +
                *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0x5e] * 4) * 0.002128;
        if (fVar6 == 0.0) {
          sVar2 = (short)((uint)fVar6 >> 0x10);
        }
        else if (*(short *)(&DAT_145e0ac70 + (ulonglong)((uint)fVar6 >> 0x17) * 2) == 0) {
          sVar2 = FUN_143e17490(fVar6);
        }
        else {
          sVar2 = (short)((int)(((uint)fVar6 & 0x7fffff) + 0xfff +
                               ((int)((uint)fVar6 & 0x7fffff) >> 0xd & 1U)) >> 0xd) +
                  *(short *)(&DAT_145e0ac70 + (ulonglong)((uint)fVar6 >> 0x17) * 2);
        }
        *(short *)(param_3 + -0x14 + (longlong)puVar3) = sVar2;
        fVar6 = (((((((((((*(float *)(&DAT_145dcac70 + (ulonglong)puVar3[-8] * 4) * 0.002128 -
                          *(float *)(&DAT_145dcac70 + (ulonglong)*puVar3 * 4) * 0.00754) +
                         *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[8] * 4) * 0.019597) -
                        *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0x10] * 4) * 0.043159) +
                       *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0x18] * 4) * 0.087929) -
                      *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0x20] * 4) * 0.186077) +
                      *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0x28] * 4) * 0.627123 +
                     *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0x30] * 4) * 0.627123) -
                    *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0x38] * 4) * 0.186077) +
                   *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0x40] * 4) * 0.087929) -
                  *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0x48] * 4) * 0.043159) +
                 *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0x50] * 4) * 0.019597) -
                *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0x58] * 4) * 0.00754) +
                *(float *)(&DAT_145dcac70 + (ulonglong)puVar3[0x60] * 4) * 0.002128;
        if (fVar6 == 0.0) {
          *(short *)(param_3 + -0x10 + (longlong)puVar3) = (short)((uint)fVar6 >> 0x10);
        }
        else if (*(short *)(&DAT_145e0ac70 + (ulonglong)((uint)fVar6 >> 0x17) * 2) == 0) {
          uVar1 = FUN_143e17490(fVar6);
          *(undefined2 *)(param_3 + -0x10 + (longlong)puVar3) = uVar1;
        }
        else {
          *(short *)(param_3 + -0x10 + (longlong)puVar3) =
               (short)((int)(((uint)fVar6 & 0x7fffff) + 0xfff +
                            ((int)((uint)fVar6 & 0x7fffff) >> 0xd & 1U)) >> 0xd) +
               *(short *)(&DAT_145e0ac70 + (ulonglong)((uint)fVar6 >> 0x17) * 2);
        }
      }
      else {
        *(ushort *)(param_3 + -0x14 + (longlong)puVar3) = puVar3[0x2a];
        *(ushort *)(param_3 + -0x10 + (longlong)puVar3) = puVar3[0x2c];
      }
      bVar5 = bVar5 + 1;
      *(ushort *)(param_3 + -0x12 + (longlong)puVar3) = puVar3[0x2b];
      *(ushort *)(param_3 + -0xe + (longlong)puVar3) = puVar3[0x2d];
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 143935b50 FUN_143935b50 body=1268 status=ok
// SIG undefined FUN_143935b50(void)

void FUN_143935b50(int param_1,longlong *param_2,longlong param_3)

{
  short sVar1;
  longlong lVar2;
  float fVar3;
  
  if (0 < param_1) {
    lVar2 = 0;
    do {
      fVar3 = (((((((((((*(float *)(&DAT_145dcac70 +
                                   (ulonglong)*(ushort *)(*param_2 + lVar2 * 8) * 4) * 0.002128 -
                        *(float *)(&DAT_145dcac70 +
                                  (ulonglong)*(ushort *)(param_2[2] + lVar2 * 8) * 4) * 0.00754) +
                       *(float *)(&DAT_145dcac70 +
                                 (ulonglong)*(ushort *)(param_2[4] + lVar2 * 8) * 4) * 0.019597) -
                      *(float *)(&DAT_145dcac70 + (ulonglong)*(ushort *)(param_2[6] + lVar2 * 8) * 4
                                ) * 0.043159) +
                     *(float *)(&DAT_145dcac70 + (ulonglong)*(ushort *)(param_2[8] + lVar2 * 8) * 4)
                     * 0.087929) -
                    *(float *)(&DAT_145dcac70 + (ulonglong)*(ushort *)(param_2[10] + lVar2 * 8) * 4)
                    * 0.186077) +
                    *(float *)(&DAT_145dcac70 + (ulonglong)*(ushort *)(param_2[0xc] + lVar2 * 8) * 4
                              ) * 0.627123 +
                   *(float *)(&DAT_145dcac70 + (ulonglong)*(ushort *)(param_2[0xe] + lVar2 * 8) * 4)
                   * 0.627123) -
                  *(float *)(&DAT_145dcac70 + (ulonglong)*(ushort *)(param_2[0x10] + lVar2 * 8) * 4)
                  * 0.186077) +
                 *(float *)(&DAT_145dcac70 + (ulonglong)*(ushort *)(param_2[0x12] + lVar2 * 8) * 4)
                 * 0.087929) -
                *(float *)(&DAT_145dcac70 + (ulonglong)*(ushort *)(param_2[0x14] + lVar2 * 8) * 4) *
                0.043159) +
               *(float *)(&DAT_145dcac70 + (ulonglong)*(ushort *)(param_2[0x16] + lVar2 * 8) * 4) *
               0.019597) -
              *(float *)(&DAT_145dcac70 + (ulonglong)*(ushort *)(param_2[0x18] + lVar2 * 8) * 4) *
              0.00754) +
              *(float *)(&DAT_145dcac70 + (ulonglong)*(ushort *)(param_2[0x1a] + lVar2 * 8) * 4) *
              0.002128;
      if (fVar3 == 0.0) {
        sVar1 = (short)((uint)fVar3 >> 0x10);
      }
      else if (*(short *)(&DAT_145e0ac70 + (ulonglong)((uint)fVar3 >> 0x17) * 2) == 0) {
        sVar1 = FUN_143e17490(fVar3);
      }
      else {
        sVar1 = (short)((int)(((uint)fVar3 & 0x7fffff) + 0xfff +
                             ((int)((uint)fVar3 & 0x7fffff) >> 0xd & 1U)) >> 0xd) +
                *(short *)(&DAT_145e0ac70 + (ulonglong)((uint)fVar3 >> 0x17) * 2);
      }
      *(short *)(param_3 + lVar2 * 8) = sVar1;
      fVar3 = (((((((((((*(float *)(&DAT_145dcac70 +
                                   (ulonglong)*(ushort *)(*param_2 + 4 + lVar2 * 8) * 4) * 0.002128
                        - *(float *)(&DAT_145dcac70 +
                                    (ulonglong)*(ushort *)(param_2[2] + 4 + lVar2 * 8) * 4) *
                          0.00754) +
                       *(float *)(&DAT_145dcac70 +
                                 (ulonglong)*(ushort *)(param_2[4] + 4 + lVar2 * 8) * 4) * 0.019597)
                      - *(float *)(&DAT_145dcac70 +
                                  (ulonglong)*(ushort *)(param_2[6] + 4 + lVar2 * 8) * 4) * 0.043159
                      ) + *(float *)(&DAT_145dcac70 +
                                    (ulonglong)*(ushort *)(param_2[8] + 4 + lVar2 * 8) * 4) *
                          0.087929) -
                    *(float *)(&DAT_145dcac70 +
                              (ulonglong)*(ushort *)(param_2[10] + 4 + lVar2 * 8) * 4) * 0.186077) +
                    *(float *)(&DAT_145dcac70 +
                              (ulonglong)*(ushort *)(param_2[0xc] + 4 + lVar2 * 8) * 4) * 0.627123 +
                   *(float *)(&DAT_145dcac70 +
                             (ulonglong)*(ushort *)(param_2[0xe] + 4 + lVar2 * 8) * 4) * 0.627123) -
                  *(float *)(&DAT_145dcac70 +
                            (ulonglong)*(ushort *)(param_2[0x10] + 4 + lVar2 * 8) * 4) * 0.186077) +
                 *(float *)(&DAT_145dcac70 +
                           (ulonglong)*(ushort *)(param_2[0x12] + 4 + lVar2 * 8) * 4) * 0.087929) -
                *(float *)(&DAT_145dcac70 +
                          (ulonglong)*(ushort *)(param_2[0x14] + 4 + lVar2 * 8) * 4) * 0.043159) +
               *(float *)(&DAT_145dcac70 + (ulonglong)*(ushort *)(param_2[0x16] + 4 + lVar2 * 8) * 4
                         ) * 0.019597) -
              *(float *)(&DAT_145dcac70 + (ulonglong)*(ushort *)(param_2[0x18] + 4 + lVar2 * 8) * 4)
              * 0.00754) +
              *(float *)(&DAT_145dcac70 + (ulonglong)*(ushort *)(param_2[0x1a] + 4 + lVar2 * 8) * 4)
              * 0.002128;
      if (fVar3 == 0.0) {
        sVar1 = (short)((uint)fVar3 >> 0x10);
      }
      else if (*(short *)(&DAT_145e0ac70 + (ulonglong)((uint)fVar3 >> 0x17) * 2) == 0) {
        sVar1 = FUN_143e17490(fVar3);
      }
      else {
        sVar1 = (short)((int)(((uint)fVar3 & 0x7fffff) + 0xfff +
                             ((int)((uint)fVar3 & 0x7fffff) >> 0xd & 1U)) >> 0xd) +
                *(short *)(&DAT_145e0ac70 + (ulonglong)((uint)fVar3 >> 0x17) * 2);
      }
      *(short *)(param_3 + 4 + lVar2 * 8) = sVar1;
      *(undefined2 *)(param_3 + 2 + lVar2 * 8) = *(undefined2 *)(param_2[0xd] + 2 + lVar2 * 8);
      *(undefined2 *)(param_3 + 6 + lVar2 * 8) = *(undefined2 *)(param_2[0xd] + 6 + lVar2 * 8);
      lVar2 = lVar2 + 1;
    } while (lVar2 < param_1);
  }
  return;
}



// FUNCTION 143936050 FUN_143936050 body=151 status=ok
// SIG undefined FUN_143936050(void)

float FUN_143936050(ushort *param_1)

{
  ushort *puVar1;
  float fVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  float fVar6;
  
  puVar1 = param_1 + 2;
  puVar5 = param_1 + 1;
  fVar2 = *(float *)(&DAT_145dcac70 + (ulonglong)*param_1 * 4);
  puVar4 = puVar5;
  if (*(float *)(&DAT_145dcac70 + (ulonglong)param_1[1] * 4) <=
      *(float *)(&DAT_145dcac70 + (ulonglong)param_1[2] * 4) &&
      *(float *)(&DAT_145dcac70 + (ulonglong)param_1[2] * 4) !=
      *(float *)(&DAT_145dcac70 + (ulonglong)param_1[1] * 4)) {
    puVar4 = puVar1;
  }
  puVar3 = param_1;
  if (fVar2 < *(float *)(&DAT_145dcac70 + (ulonglong)*puVar4 * 4)) {
    puVar3 = puVar4;
  }
  fVar6 = 0.0;
  if (*(float *)(&DAT_145dcac70 + (ulonglong)*puVar1 * 4) <=
      *(float *)(&DAT_145dcac70 + (ulonglong)*puVar5 * 4) &&
      *(float *)(&DAT_145dcac70 + (ulonglong)*puVar5 * 4) !=
      *(float *)(&DAT_145dcac70 + (ulonglong)*puVar1 * 4)) {
    puVar5 = puVar1;
  }
  if (0.0 < *(float *)(&DAT_145dcac70 + (ulonglong)*puVar3 * 4)) {
    if (*(float *)(&DAT_145dcac70 + (ulonglong)*puVar5 * 4) <= fVar2 &&
        fVar2 != *(float *)(&DAT_145dcac70 + (ulonglong)*puVar5 * 4)) {
      param_1 = puVar5;
    }
    fVar6 = 1.0 - *(float *)(&DAT_145dcac70 + (ulonglong)*param_1 * 4) /
                  *(float *)(&DAT_145dcac70 + (ulonglong)*puVar3 * 4);
  }
  return fVar6;
}



// FUNCTION 1439360f0 findTypedAttribute<Imf::TypedAttribute<enum_Imf::Compression>_> body=256 status=ok
// SIG undefined findTypedAttribute<Imf::TypedAttribute<enum_Imf::Compression>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
Imf::Header::findTypedAttribute<Imf::TypedAttribute<enum_Imf::Compression>_>
          (longlong *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  byte local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  strncpy((char *)local_118,param_2,0xff);
  puVar3 = (undefined8 *)*param_1;
  local_19 = 0;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar10 = puVar3;
  puVar9 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar5 = (byte *)(puVar9 + 4);
    lVar4 = -(longlong)pbVar5;
    do {
      bVar2 = *pbVar5;
      uVar7 = (uint)pbVar5[(longlong)(local_118 + lVar4)];
      if (bVar2 != uVar7) break;
      pbVar5 = pbVar5 + 1;
    } while (uVar7 != 0);
    if ((int)(bVar2 - uVar7) < 0) {
      puVar8 = (undefined8 *)puVar9[2];
      puVar9 = puVar10;
    }
    else {
      puVar8 = (undefined8 *)*puVar9;
    }
    puVar10 = puVar9;
    puVar9 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if (puVar10 != puVar3) {
    pbVar5 = local_118;
    lVar4 = 0x20 - (longlong)pbVar5;
    do {
      bVar2 = *pbVar5;
      uVar7 = (uint)pbVar5[(longlong)puVar10 + lVar4];
      if (bVar2 != uVar7) break;
      pbVar5 = pbVar5 + 1;
    } while (uVar7 != 0);
    if (-1 < (int)(bVar2 - uVar7)) goto LAB_1439361aa;
  }
  puVar10 = puVar3;
LAB_1439361aa:
  if (puVar10 == puVar3) {
    uVar6 = 0;
  }
  else {
    local_128 = 0;
    uVar6 = ::_guard_xfg_dispatch_icall_nop
                      (puVar10[0x24],0,&Attribute::RTTI_Type_Descriptor,
                       &TypedAttribute<Imf::Chromaticities>::RTTI_Type_Descriptor);
  }
  return uVar6;
}



// FUNCTION 1439361f0 SeamlessTravelHandlerForWorld body=18 status=ok
// SIG undefined SeamlessTravelHandlerForWorld(void)

longlong UEngine::SeamlessTravelHandlerForWorld(void)

{
  longlong lVar1;
  
  lVar1 = FUN_143936210();
  return lVar1 + 8;
}



// FUNCTION 143936210 FUN_143936210 body=144 status=ok
// SIG undefined FUN_143936210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143936210(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_14392a1b0(param_1,"chromaticities");
  local_88 = 0;
  lVar2 = _guard_xfg_dispatch_icall_nop
                    (uVar1,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::TypedAttribute<Imf::Chromaticities>::RTTI_Type_Descriptor);
  if (lVar2 != 0) {
    return;
  }
  FUN_143e179e0(local_78,"Unexpected attribute type.");
  local_78[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 1439362b0 FUN_1439362b0 body=27 status=ok
// SIG undefined FUN_1439362b0(void)

bool FUN_1439362b0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = Imf::Header::findTypedAttribute<Imf::TypedAttribute<enum_Imf::Compression>_>
                    (param_1,"chromaticities");
  return lVar1 != 0;
}



// FUNCTION 1439362d0 FUN_1439362d0 body=275 status=ok
// SIG undefined FUN_1439362d0(void)

facet * FUN_1439362d0(locale *param_1)

{
  longlong lVar1;
  __uint64 _Var2;
  _Locimp *p_Var3;
  facet *pfVar4;
  _Lockit local_res8 [8];
  facet *local_res10;
  undefined **local_20;
  char *local_18;
  undefined8 local_10;
  
  std::_Lockit::_Lockit(local_res8,0);
  local_res10 = DAT_146b95d88;
  _Var2 = std::locale::id::operator_unsigned___int64((id *)id_exref);
  lVar1 = *(longlong *)(param_1 + 8);
  if (_Var2 < *(ulonglong *)(lVar1 + 0x18)) {
    pfVar4 = *(facet **)(*(longlong *)(lVar1 + 0x10) + _Var2 * 8);
    if (pfVar4 != (facet *)0x0) goto LAB_1439363c6;
  }
  else {
    pfVar4 = (facet *)0x0;
  }
  if (*(char *)(lVar1 + 0x24) == '\0') {
LAB_14393634f:
    if (pfVar4 != (facet *)0x0) goto LAB_1439363c6;
  }
  else {
    p_Var3 = std::locale::_Getgloballocale();
    if (_Var2 < *(ulonglong *)(p_Var3 + 0x18)) {
      pfVar4 = *(facet **)(*(longlong *)(p_Var3 + 0x10) + _Var2 * 8);
      goto LAB_14393634f;
    }
  }
  pfVar4 = local_res10;
  if (local_res10 == (facet *)0x0) {
    _Var2 = std::codecvt<char,char,_Mbstatet>::_Getcat(&local_res10,param_1);
    pfVar4 = local_res10;
    if (_Var2 == 0xffffffffffffffff) {
      local_10 = 0;
      local_18 = "bad cast";
      local_20 = std::bad_cast::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(&local_20,(ThrowInfo *)&DAT_1461db848);
    }
    DAT_146b95d88 = local_res10;
    (**(code **)(*(longlong *)local_res10 + 8))(local_res10);
    std::_Facet_Register(pfVar4);
  }
LAB_1439363c6:
  std::_Lockit::~_Lockit(local_res8);
  return pfVar4;
}



// FUNCTION 1439363f0 FUN_1439363f0 body=303 status=ok
// SIG undefined FUN_1439363f0(void)

basic_istream<char,std::char_traits<char>_> *
FUN_1439363f0(basic_istream<char,std::char_traits<char>_> *param_1,undefined8 param_2,uint param_3,
             undefined4 param_4,int param_5)

{
  basic_streambuf<char,std::char_traits<char>_> *this;
  longlong lVar1;
  undefined8 uVar2;
  basic_streambuf<char,std::char_traits<char>_> *pbVar3;
  
  uVar2 = 0xfffffffffffffffe;
  if (param_5 != 0) {
    *(undefined **)param_1 = &DAT_145c64e20;
    *(code **)(param_1 + 0xb0) = _vftable__exref;
    *(code **)(param_1 + 0xb0) = _vftable__exref;
  }
  this = (basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 0x10);
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (param_1,this,false);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0xb0;
  pbVar3 = this;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this);
  *(undefined ***)this = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  param_1[0x8c] = (basic_istream<char,std::char_traits<char>_>)0x0;
  param_1[0x81] = (basic_istream<char,std::char_traits<char>_>)0x0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(this);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x84) = DAT_146b95d80;
  *(undefined8 *)(param_1 + 0x78) = 0;
  lVar1 = FUN_1439370d0(this,param_2,param_3 | 1,param_4,uVar2,pbVar3);
  if (lVar1 == 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (param_1 + *(int *)(*(longlong *)param_1 + 4)),2,false);
  }
  return param_1;
}



// FUNCTION 143936520 FUN_143936520 body=33 status=ok
// SIG undefined FUN_143936520(void)

undefined8 * FUN_143936520(undefined8 *param_1)

{
  FUN_143e17780();
  *param_1 = Iex::ErrnoExc::vftable;
  return param_1;
}



// FUNCTION 143936550 FUN_143936550 body=273 status=ok
// SIG undefined FUN_143936550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143936550(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_48 = param_1;
  FUN_143927610();
  *param_1 = Imf::StdIFStream::vftable;
  local_40 = operator_new(0x110);
  if (local_40 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    local_58 = 1;
    plVar1 = (longlong *)FUN_1439363f0(local_40,param_2,0x20);
  }
  param_1[5] = plVar1;
  *(undefined1 *)(param_1 + 6) = 1;
  puVar2 = (undefined8 *)((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1);
  if ((*(byte *)(puVar2 + 2) & 6) != 0) {
    (**(code **)*puVar2)(puVar2,1);
    local_18 = 0xf;
    local_20 = 0;
    local_30 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (&local_30,&DAT_145c64d28,3);
    FUN_143e19150(&local_30);
    if (0xf < local_18) {
      std::_Wrap_alloc<std::allocator<char>_>::deallocate
                (&local_30,CONCAT71(uStack_2f,local_30),local_18 + 1);
    }
  }
  return param_1;
}



// FUNCTION 143936670 FUN_143936670 body=73 status=ok
// SIG undefined FUN_143936670(void)

undefined8 *
FUN_143936670(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143927690(param_1,"(string)",param_3,param_4,0xfffffffffffffffe);
  *param_1 = Imf::StdOSStream::vftable;
  std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::
  basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>(param_1 + 5,2,1);
  return param_1;
}



// FUNCTION 1439366c0 FUN_1439366c0 body=64 status=ok
// SIG undefined FUN_1439366c0(void)

undefined8 * FUN_1439366c0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::bad_cast::vftable;
  return param_1;
}



// FUNCTION 143936700 ~basic_filebuf<char,std::char_traits<char>_> body=115 status=ok
// SIG undefined ~basic_filebuf<char,std::char_traits<char>_>(void)

void std::basic_filebuf<char,std::char_traits<char>_>::~basic_filebuf<char,std::char_traits<char>_>
               (basic_streambuf<char,std::char_traits<char>_> *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined ***)param_1 = vftable;
  if ((*(longlong *)(param_1 + 0x80) != 0) &&
     ((basic_streambuf<char,std::char_traits<char>_> *)**(longlong **)(param_1 + 0x18) ==
      param_1 + 0x70)) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    lVar2 = *(longlong *)(param_1 + 0x88);
    **(longlong **)(param_1 + 0x18) = lVar2;
    **(longlong **)(param_1 + 0x38) = lVar2;
    **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar2;
  }
  if (param_1[0x7c] != (basic_streambuf<char,std::char_traits<char>_>)0x0) {
    close((int)param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014393676c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (param_1);
  return;
}



// FUNCTION 143936780 FUN_143936780 body=126 status=ok
// SIG undefined FUN_143936780(void)

void FUN_143936780(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0xb0) + 4) + -0xb0 + param_1) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0xb0) + 4);
  *(int *)((longlong)iVar1 + -0xb4 + param_1) = iVar1 + -0xb0;
  std::basic_filebuf<char,std::char_traits<char>_>::~basic_filebuf<char,std::char_traits<char>_>
            (param_1 + -0xa0);
  *(code **)((longlong)*(int *)(*(longlong *)(param_1 + -0xb0) + 4) + -0xb0 + param_1) =
       _vftable__exref;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0xb0) + 4);
  *(int *)((longlong)iVar1 + -0xb4 + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 143936800 ~locale body=57 status=ok
// SIG undefined ~locale(void)

void std::locale::~locale(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143936831. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14393683c FUN_14393683c body=12 status=ok
// SIG undefined FUN_14393683c(void)

void FUN_14393683c(longlong param_1)

{
  FUN_143936880(param_1 - *(int *)(param_1 + -4));
  return;
}



// FUNCTION 143936850 FUN_143936850 body=47 status=ok
// SIG undefined FUN_143936850(void)

undefined8 FUN_143936850(undefined8 param_1,uint param_2)

{
  std::basic_filebuf<char,std::char_traits<char>_>::~basic_filebuf<char,std::char_traits<char>_>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143936880 FUN_143936880 body=123 status=ok
// SIG undefined FUN_143936880(void)

ios_base * FUN_143936880(ios_base *param_1,uint param_2)

{
  FUN_143936780(param_1);
  *(code **)param_1 = _vftable__exref;
  *(code **)param_1 = _vftable__exref;
  std::ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1 + -0xb0);
  }
  return param_1 + -0xb0;
}



// FUNCTION 143936900 FUN_143936900 body=109 status=ok
// SIG undefined FUN_143936900(void)

undefined8 * FUN_143936900(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = Imf::StdIFStream::vftable;
  if ((*(char *)(param_1 + 6) != '\0') &&
     (plVar1 = (longlong *)param_1[5], plVar1 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4));
    (**(code **)*puVar2)(puVar2,1,(longlong)*(int *)(*plVar1 + 4),param_4,0xfffffffffffffffe);
  }
  FUN_1439276e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143936970 FUN_143936970 body=128 status=ok
// SIG undefined FUN_143936970(void)

longlong FUN_143936970(longlong param_1,uint param_2)

{
  std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>(param_1 + 0xb0);
  *(code **)(param_1 + 0xb0) = _vftable__exref;
  *(code **)(param_1 + 0xb0) = _vftable__exref;
  std::ios_base::_Ios_base_dtor((ios_base *)(param_1 + 0xb0));
  FUN_143927730(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 1439369f0 FUN_1439369f0 body=62 status=ok
// SIG undefined FUN_1439369f0(void)

undefined8 * FUN_1439369f0(undefined8 *param_1,uint param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143936a30 FUN_143936a30 body=555 status=ok
// SIG undefined FUN_143936a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143936aac) */

ulonglong FUN_143936a30(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  size_t sVar3;
  char ****ppppcVar4;
  size_t _Count;
  undefined1 auStackY_88 [32];
  char *local_58;
  undefined8 local_50;
  char ***local_48;
  undefined1 local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_50 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStackY_88;
  if ((param_1[0xd] == 0) || (*(char *)((longlong)param_1 + 0x71) == '\0')) {
    uVar2 = CONCAT71((int7)(local_28 >> 8),1);
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    if ((int)uVar2 == -1) {
      uVar2 = uVar2 & 0xffffffffffffff00;
    }
    else {
      local_30 = 0xf;
      local_48 = (char ***)0x0;
      local_38 = 8;
      local_40 = 0;
LAB_143936ac0:
      ppppcVar4 = &local_48;
      if (0xf < local_30) {
        ppppcVar4 = (char ****)local_48;
      }
      iVar1 = std::codecvt<char,char,_Mbstatet>::unshift
                        ((codecvt<char,char,_Mbstatet> *)param_1[0xd],
                         (_Mbstatet *)((longlong)param_1 + 0x74),(char *)ppppcVar4,
                         (char *)((longlong)ppppcVar4 + local_38),&local_58);
      if (iVar1 == 0) {
        *(undefined1 *)((longlong)param_1 + 0x71) = 0;
LAB_143936b07:
        ppppcVar4 = &local_48;
        if (0xf < local_30) {
          ppppcVar4 = (char ****)local_48;
        }
        _Count = (longlong)local_58 - (longlong)ppppcVar4;
        if (_Count != 0) {
          ppppcVar4 = &local_48;
          if (0xf < local_30) {
            ppppcVar4 = (char ****)local_48;
          }
          sVar3 = fwrite(ppppcVar4,1,_Count,(FILE *)param_1[0x10]);
          if (_Count != sVar3) goto LAB_143936bfc;
        }
        if (*(char *)((longlong)param_1 + 0x71) == '\0') goto LAB_143936c1c;
        if (_Count == 0) {
          if (-local_38 - 1 < 9) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("string too long");
          }
          uVar2 = local_38 + 8;
          if (uVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("string too long");
          }
          if (local_30 < uVar2) {
            FUN_143263050(&local_48,uVar2);
            if (uVar2 == 0) goto LAB_143936ac0;
          }
          else if (uVar2 == 0) {
            local_38 = 0;
            ppppcVar4 = &local_48;
            if (0xf < local_30) {
              ppppcVar4 = (char ****)local_48;
            }
            *(undefined1 *)ppppcVar4 = 0;
            goto LAB_143936ac0;
          }
          ppppcVar4 = &local_48;
          if (0xf < local_30) {
            ppppcVar4 = (char ****)local_48;
          }
          *(undefined8 *)((longlong)ppppcVar4 + local_38) = 0;
          ppppcVar4 = &local_48;
          if (0xf < local_30) {
            ppppcVar4 = (char ****)local_48;
          }
          local_38 = uVar2;
          *(undefined1 *)((longlong)ppppcVar4 + uVar2) = 0;
        }
        goto LAB_143936ac0;
      }
      if (iVar1 == 1) goto LAB_143936b07;
      if (iVar1 != 3) {
LAB_143936bfc:
        uVar2 = 0;
        goto LAB_143936c1e;
      }
LAB_143936c1c:
      uVar2 = 1;
LAB_143936c1e:
      if (0xf < local_30) {
        std::_Wrap_alloc<std::allocator<char>_>::deallocate(&local_48,local_48,local_30 + 1);
      }
    }
  }
  return uVar2;
}



// FUNCTION 143936c60 FUN_143936c60 body=20 status=ok
// SIG undefined FUN_143936c60(void)

void FUN_143936c60(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000143936c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _lock_file();
    return;
  }
  return;
}



// FUNCTION 143936c80 _Reset_back body=48 status=ok
// SIG undefined _Reset_back(void)

void std::basic_filebuf<char,std::char_traits<char>_>::_Reset_back(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
    lVar1 = *(longlong *)(param_1 + 0x88);
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    **(longlong **)(param_1 + 0x18) = lVar1;
    **(longlong **)(param_1 + 0x38) = lVar1;
    **(int **)(param_1 + 0x50) = (int)uVar2 - (int)lVar1;
  }
  return;
}



// FUNCTION 143936cb0 _Set_back body=73 status=ok
// SIG void _Set_back(basic_filebuf<char,std::char_traits<char>_> * this)

/* Library Function - Single Match
    private: void __cdecl std::basic_filebuf<char,struct std::char_traits<char> >::_Set_back(void)
   __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::_Set_back
          (basic_filebuf<char,std::char_traits<char>_> *this)

{
  basic_filebuf<char,std::char_traits<char>_> *pbVar1;
  basic_filebuf<char,std::char_traits<char>_> *pbVar2;
  
  pbVar2 = (basic_filebuf<char,std::char_traits<char>_> *)**(longlong **)(this + 0x18);
  pbVar1 = this + 0x70;
  if (pbVar2 != pbVar1) {
    *(basic_filebuf<char,std::char_traits<char>_> **)(this + 0x88) = pbVar2;
    *(longlong *)(this + 0x90) = (longlong)**(int **)(this + 0x50) + **(longlong **)(this + 0x38);
  }
  **(longlong **)(this + 0x18) = (longlong)pbVar1;
  **(longlong **)(this + 0x38) = (longlong)pbVar1;
  **(int **)(this + 0x50) = ((int)this - (int)pbVar1) + 0x71;
  return;
}



// FUNCTION 143936d00 FUN_143936d00 body=20 status=ok
// SIG undefined FUN_143936d00(void)

void FUN_143936d00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000143936d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _unlock_file();
    return;
  }
  return;
}



// FUNCTION 143936d20 FUN_143936d20 body=220 status=ok
// SIG undefined FUN_143936d20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143936d20(longlong *param_1)

{
  int *piVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined8 local_90;
  ulonglong local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_a8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if ((*(byte *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) & 6) != 0) {
    piVar1 = _errno();
    if (*piVar1 != 0) {
      local_88 = 0xf;
      local_90 = 0;
      local_a0 = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (&local_a0,&DAT_145c64d28,3);
      FUN_143e19150(&local_a0);
      if (0xf < local_88) {
        std::_Wrap_alloc<std::allocator<char>_>::deallocate
                  (&local_a0,CONCAT71(uStack_9f,local_a0),local_88 + 1);
      }
    }
    FUN_143e179e0(local_78,"File output failed.");
    local_78[0] = Iex::ErrnoExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db7d0);
  }
  return;
}



// FUNCTION 143936e00 FUN_143936e00 body=466 status=ok
// SIG undefined FUN_143936e00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143936e00(longlong *param_1,__int64 param_2)

{
  __int64 _Var1;
  int *piVar2;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar4;
  ulonglong uVar5;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined *local_1a8 [3];
  undefined **local_190 [13];
  undefined8 local_128;
  undefined4 local_120;
  code *local_110;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined8 local_98;
  ulonglong local_90;
  undefined **local_88 [13];
  ulonglong local_20;
  
  local_1b0 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_1b8 = 0;
  if ((*(byte *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) & 6) == 0) {
    uVar5 = CONCAT71((int7)((ulonglong)*param_1 >> 8),1);
  }
  else {
    piVar2 = _errno();
    if (*piVar2 != 0) {
      local_90 = 0xf;
      local_98 = 0;
      local_a8 = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (&local_a8,&DAT_145c64d28,3);
      piVar2 = (int *)FUN_143e19150(&local_a8);
      if (0xf < local_90) {
        piVar2 = (int *)std::_Wrap_alloc<std::allocator<char>_>::deallocate
                                  (&local_a8,CONCAT71(uStack_a7,local_a8),local_90 + 1);
      }
    }
    if (param_1[1] < param_2) {
      local_1a8[0] = &DAT_145af0c78;
      local_1a8[2] = &DAT_145af0c80;
      local_110 = _vftable__exref;
      local_1b8 = 1;
      std::basic_iostream<char,std::char_traits<char>_>::
      basic_iostream<char,std::char_traits<char>_>
                ((basic_iostream<char,std::char_traits<char>_> *)local_1a8,
                 (basic_streambuf<char,std::char_traits<char>_> *)local_190);
      *(undefined ***)((longlong)local_1a8 + (longlong)*(int *)(local_1a8[0] + 4)) =
           std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((longlong)local_1a8 + (longlong)*(int *)(local_1a8[0] + 4) + -4) =
           *(int *)(local_1a8[0] + 4) + -0x98;
      std::basic_streambuf<char,std::char_traits<char>_>::
      basic_streambuf<char,std::char_traits<char>_>
                ((basic_streambuf<char,std::char_traits<char>_> *)local_190);
      local_190[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                     vftable;
      local_128 = 0;
      local_120 = 0;
      _Var1 = param_1[1];
      pbVar3 = (basic_ostream<char,std::char_traits<char>_> *)
               std::operator<<<std::char_traits<char>_>(local_1a8 + 2,"Early end of file: read ");
      pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar3,_Var1);
      pbVar3 = (basic_ostream<char,std::char_traits<char>_> *)
               std::operator<<<std::char_traits<char>_>(pbVar4," out of ");
      pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar3,param_2);
      std::operator<<<std::char_traits<char>_>(pbVar4," requested bytes.");
      FUN_143e175c0(local_88,local_1a8);
      local_88[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db5c8);
    }
    uVar5 = (ulonglong)piVar2 & 0xffffffffffffff00;
  }
  return uVar5;
}



// FUNCTION 143936fe0 FUN_143936fe0 body=26 status=ok
// SIG undefined FUN_143936fe0(void)

void FUN_143936fe0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143936ff3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ios<char,std::char_traits<char>_>::clear
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)*(int *)(**(longlong **)(param_1 + 0x28) + 4) +
             (longlong)*(longlong **)(param_1 + 0x28)),0,false);
  return;
}



// FUNCTION 143937000 close body=127 status=ok
// SIG int close(int _FileHandle)

int __cdecl std::basic_filebuf<char,std::char_traits<char>_>::close(int _FileHandle)

{
  char cVar1;
  int iVar2;
  undefined4 in_register_0000000c;
  basic_streambuf<char,std::char_traits<char>_> *this;
  basic_streambuf<char,std::char_traits<char>_> *pbVar3;
  int iVar4;
  
  this = (basic_streambuf<char,std::char_traits<char>_> *)CONCAT44(in_register_0000000c,_FileHandle)
  ;
  if (*(longlong *)(this + 0x80) == 0) {
    iVar4 = 0;
  }
  else {
    cVar1 = FUN_143936a30();
    pbVar3 = this;
    if (cVar1 == '\0') {
      pbVar3 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    }
    iVar4 = (int)pbVar3;
    iVar2 = fclose(*(FILE **)(this + 0x80));
    if (iVar2 != 0) {
      iVar4 = 0;
    }
  }
  this[0x7c] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
  this[0x71] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(this);
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x74) = DAT_146b95d80;
  *(undefined8 *)(this + 0x68) = 0;
  return iVar4;
}



// FUNCTION 143937080 imbue body=80 status=ok
// SIG undefined imbue(void)

void std::basic_filebuf<char,std::char_traits<char>_>::imbue
               (basic_streambuf<char,std::char_traits<char>_> *param_1,undefined8 param_2)

{
  bool bVar1;
  codecvt_base *this;
  
  this = (codecvt_base *)FUN_1439362d0(param_2);
  bVar1 = std::codecvt_base::always_noconv(this);
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    return;
  }
  *(codecvt_base **)(param_1 + 0x68) = this;
                    /* WARNING: Could not recover jumptable at 0x0001439370c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(param_1);
  return;
}



// FUNCTION 1439370d0 FUN_1439370d0 body=285 status=ok
// SIG undefined FUN_1439370d0(void)

basic_streambuf<char,std::char_traits<char>_> *
FUN_1439370d0(basic_streambuf<char,std::char_traits<char>_> *param_1,char *param_2,int param_3,
             int param_4)

{
  bool bVar1;
  _iobuf *p_Var2;
  undefined8 uVar3;
  codecvt_base *this;
  undefined8 local_res8;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if ((*(longlong *)(param_1 + 0x80) == 0) &&
     (p_Var2 = std::_Fiopen(param_2,param_3,param_4), p_Var2 != (_iobuf *)0x0)) {
    param_1[0x7c] = (basic_streambuf<char,std::char_traits<char>_>)0x1;
    param_1[0x71] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
    std::basic_streambuf<char,std::char_traits<char>_>::_Init(param_1);
    local_res8 = 0;
    local_28 = 0;
    local_20[0] = 0;
    _get_stream_buffer_pointers(p_Var2,&local_res8,&local_28,local_20);
    *(undefined8 *)(param_1 + 0x18) = local_res8;
    *(undefined8 *)(param_1 + 0x20) = local_res8;
    *(undefined8 *)(param_1 + 0x38) = local_28;
    *(undefined8 *)(param_1 + 0x40) = local_28;
    *(undefined8 *)(param_1 + 0x50) = local_20[0];
    *(undefined8 *)(param_1 + 0x58) = local_20[0];
    *(_iobuf **)(param_1 + 0x80) = p_Var2;
    *(undefined8 *)(param_1 + 0x74) = DAT_146b95d80;
    *(undefined8 *)(param_1 + 0x68) = 0;
    uVar3 = std::basic_streambuf<char,std::char_traits<char>_>::getloc(param_1);
    this = (codecvt_base *)FUN_1439362d0(uVar3);
    bVar1 = std::codecvt_base::always_noconv(this);
    if (bVar1) {
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    else {
      *(codecvt_base **)(param_1 + 0x68) = this;
      std::basic_streambuf<char,std::char_traits<char>_>::_Init(param_1);
    }
    std::locale::~locale(local_20);
    return param_1;
  }
  return (basic_streambuf<char,std::char_traits<char>_> *)0x0;
}



// FUNCTION 1439371f0 FUN_1439371f0 body=594 status=ok
// SIG undefined FUN_1439371f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001439372f6) */

int FUN_1439371f0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  char *******pppppppcVar7;
  size_t sVar8;
  size_t _Count;
  undefined1 auStackY_a8 [32];
  char local_68;
  char local_67 [7];
  char *local_60;
  char *local_58;
  undefined8 local_50;
  char ******local_48;
  undefined1 local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_50 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStackY_a8;
  if (param_2 == -1) {
    return 0;
  }
  uVar1 = **(ulonglong **)(param_1 + 0x40);
  local_68 = (char)param_2;
  if (uVar1 != 0) {
    iVar5 = **(int **)(param_1 + 0x58);
    if (uVar1 < uVar1 + (longlong)iVar5) {
      **(int **)(param_1 + 0x58) = iVar5 + -1;
      pcVar2 = (char *)**(longlong **)(param_1 + 0x40);
      **(longlong **)(param_1 + 0x40) = (longlong)(pcVar2 + 1);
      *pcVar2 = local_68;
      return param_2;
    }
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return -1;
  }
  if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    lVar4 = *(longlong *)(param_1 + 0x88);
    **(longlong **)(param_1 + 0x18) = lVar4;
    **(longlong **)(param_1 + 0x38) = lVar4;
    **(int **)(param_1 + 0x50) = (int)uVar3 - (int)lVar4;
  }
  if (*(longlong *)(param_1 + 0x68) == 0) {
    iVar5 = fputc((int)local_68,*(FILE **)(param_1 + 0x80));
    if (iVar5 == -1) {
      return -1;
    }
    return param_2;
  }
  local_30 = 0xf;
  local_48 = (char ******)0x0;
  local_38 = 8;
  local_40 = 0;
LAB_143937301:
  pppppppcVar7 = &local_48;
  if (0xf < local_30) {
    pppppppcVar7 = (char *******)local_48;
  }
  iVar5 = std::codecvt<char,char,_Mbstatet>::out
                    (*(codecvt<char,char,_Mbstatet> **)(param_1 + 0x68),
                     (_Mbstatet *)(param_1 + 0x74),&local_68,local_67,&local_60,(char *)pppppppcVar7
                     ,(char *)((longlong)pppppppcVar7 + local_38),&local_58);
  if (iVar5 < 0) goto LAB_143937403;
  if (iVar5 < 2) {
    pppppppcVar7 = &local_48;
    if (0xf < local_30) {
      pppppppcVar7 = (char *******)local_48;
    }
    _Count = (longlong)local_58 - (longlong)pppppppcVar7;
    if (_Count != 0) {
      pppppppcVar7 = &local_48;
      if (0xf < local_30) {
        pppppppcVar7 = (char *******)local_48;
      }
      sVar8 = fwrite(pppppppcVar7,1,_Count,*(FILE **)(param_1 + 0x80));
      if (_Count != sVar8) goto LAB_143937403;
    }
    *(undefined1 *)(param_1 + 0x71) = 1;
    iVar5 = param_2;
    if (local_60 == &local_68) goto code_r0x0001439373b3;
  }
  else {
    if (iVar5 != 3) goto LAB_143937403;
    iVar6 = fputc((int)local_68,*(FILE **)(param_1 + 0x80));
    iVar5 = -1;
    if (iVar6 != -1) {
      iVar5 = param_2;
    }
  }
  goto LAB_143937406;
code_r0x0001439373b3:
  if (_Count == 0) {
    if (0x1f < local_38) {
LAB_143937403:
      iVar5 = -1;
LAB_143937406:
      if (0xf < local_30) {
        std::_Wrap_alloc<std::allocator<char>_>::deallocate(&local_48,local_48,local_30 + 1);
      }
      return iVar5;
    }
    FUN_143928450(&local_48,8,0);
  }
  goto LAB_143937301;
}



// FUNCTION 143937450 FUN_143937450 body=169 status=ok
// SIG undefined FUN_143937450(void)

uint FUN_143937450(basic_filebuf<char,std::char_traits<char>_> *param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = **(ulonglong **)(param_1 + 0x38);
  if (((uVar1 != 0) && (**(ulonglong **)(param_1 + 0x18) < uVar1)) &&
     ((param_2 == 0xffffffff || (*(byte *)(uVar1 - 1) == param_2)))) {
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
    **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -1;
    uVar2 = 0;
    if (param_2 != 0xffffffff) {
      uVar2 = param_2;
    }
    return uVar2;
  }
  if ((*(FILE **)(param_1 + 0x80) != (FILE *)0x0) && (param_2 != 0xffffffff)) {
    if ((*(longlong *)(param_1 + 0x68) == 0) &&
       (iVar3 = ungetc(param_2 & 0xff,*(FILE **)(param_1 + 0x80)), iVar3 != -1)) {
      return param_2;
    }
    if ((basic_filebuf<char,std::char_traits<char>_> *)**(longlong **)(param_1 + 0x38) !=
        param_1 + 0x70) {
      param_1[0x70] = SUB41(param_2,0);
      std::basic_filebuf<char,std::char_traits<char>_>::_Set_back(param_1);
      return param_2;
    }
  }
  return 0xffffffff;
}



// FUNCTION 143937500 FUN_143937500 body=170 status=ok
// SIG undefined FUN_143937500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143937500(longlong param_1,char *param_2,int param_3)

{
  int *piVar1;
  undefined1 auStack_a8 [32];
  undefined **local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if ((*(byte *)((longlong)*(int *)(**(longlong **)(param_1 + 0x28) + 4) + 0x10 +
                (longlong)*(longlong **)(param_1 + 0x28)) & 6) == 0) {
    piVar1 = _errno();
    *piVar1 = 0;
    std::basic_istream<char,std::char_traits<char>_>::read
              (*(basic_istream<char,std::char_traits<char>_> **)(param_1 + 0x28),param_2,
               (longlong)param_3);
    FUN_143936e00(*(undefined8 *)(param_1 + 0x28),(longlong)param_3);
    return;
  }
  FUN_143e179e0(local_88,"Unexpected end of file.");
  local_88[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db5c8);
}



// FUNCTION 1439375b0 FUN_1439375b0 body=74 status=ok
// SIG undefined FUN_1439375b0(void)

void FUN_1439375b0(longlong param_1,undefined8 param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = 0;
  uStack_18 = 0;
  local_28 = param_2;
  std::basic_istream<char,std::char_traits<char>_>::seekg
            (*(basic_istream<char,std::char_traits<char>_> **)(param_1 + 0x28),&local_28);
  FUN_143936e00(*(undefined8 *)(param_1 + 0x28),0);
  return;
}



// FUNCTION 143937600 FUN_143937600 body=216 status=ok
// SIG undefined FUN_143937600(void)

undefined8 * FUN_143937600(longlong param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  fpos_t local_res8;
  
  if (((**(longlong **)(param_1 + 0x38) == param_1 + 0x70) && (param_4 == 1)) &&
     (*(longlong *)(param_1 + 0x68) == 0)) {
    param_3 = param_3 + -1;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar1 = FUN_143936a30();
    if (cVar1 != '\0') {
      if ((param_3 != 0) || (param_4 != 1)) {
        iVar2 = _fseeki64(*(FILE **)(param_1 + 0x80),param_3,param_4);
        if (iVar2 != 0) goto LAB_1439376a5;
      }
      iVar2 = fgetpos(*(FILE **)(param_1 + 0x80),&local_res8);
      if (iVar2 == 0) {
        std::basic_filebuf<char,std::char_traits<char>_>::_Reset_back(param_1);
        uVar3 = *(undefined8 *)(param_1 + 0x74);
        param_2[1] = local_res8;
        *param_2 = 0;
        goto LAB_1439376bc;
      }
    }
  }
LAB_1439376a5:
  uVar3 = 0;
  *param_2 = *(undefined8 *)_BADOFF_exref;
  param_2[1] = 0;
LAB_1439376bc:
  param_2[2] = uVar3;
  return param_2;
}



// FUNCTION 1439376e0 FUN_1439376e0 body=71 status=ok
// SIG undefined FUN_1439376e0(void)

void FUN_1439376e0(longlong param_1,undefined8 param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = 0;
  uStack_18 = 0;
  local_28 = param_2;
  std::basic_ostream<char,std::char_traits<char>_>::seekp
            ((basic_ostream<char,std::char_traits<char>_> *)(param_1 + 0x28),&local_28);
  FUN_143936d20((basic_ostream<char,std::char_traits<char>_> *)(param_1 + 0x28));
  return;
}



// FUNCTION 143937730 FUN_143937730 body=224 status=ok
// SIG undefined FUN_143937730(void)

undefined8 * FUN_143937730(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong _Offset;
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_res8;
  
  local_res8 = param_3[1];
  _Offset = *param_3;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar1 = FUN_143936a30();
    if (cVar1 != '\0') {
      iVar2 = fsetpos(*(FILE **)(param_1 + 0x80),&local_res8);
      if (iVar2 == 0) {
        if (_Offset != 0) {
          iVar2 = _fseeki64(*(FILE **)(param_1 + 0x80),_Offset,1);
          if (iVar2 != 0) goto LAB_1439377dc;
        }
        iVar2 = fgetpos(*(FILE **)(param_1 + 0x80),&local_res8);
        if (iVar2 == 0) {
          *(longlong *)(param_1 + 0x74) = param_3[2];
          std::basic_filebuf<char,std::char_traits<char>_>::_Reset_back(param_1);
          uVar3 = *(undefined8 *)(param_1 + 0x74);
          param_2[1] = local_res8;
          *param_2 = 0;
          goto LAB_1439377f3;
        }
      }
    }
  }
LAB_1439377dc:
  uVar3 = 0;
  *param_2 = *(undefined8 *)_BADOFF_exref;
  param_2[1] = 0;
LAB_1439377f3:
  param_2[2] = uVar3;
  return param_2;
}



// FUNCTION 143937810 FUN_143937810 body=231 status=ok
// SIG undefined FUN_143937810(void)

basic_streambuf<char,std::char_traits<char>_> *
FUN_143937810(basic_streambuf<char,std::char_traits<char>_> *param_1,char *param_2,size_t param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_res8;
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  if (*(FILE **)(param_1 + 0x80) != (FILE *)0x0) {
    if ((param_2 != (char *)0x0) || (iVar2 = 4, param_3 != 0)) {
      iVar2 = 0;
    }
    iVar2 = setvbuf(*(FILE **)(param_1 + 0x80),param_2,iVar2,param_3);
    if (iVar2 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x80);
      param_1[0x7c] = (basic_streambuf<char,std::char_traits<char>_>)0x1;
      param_1[0x71] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
      std::basic_streambuf<char,std::char_traits<char>_>::_Init(param_1);
      if (lVar1 != 0) {
        local_res8 = 0;
        local_res20 = 0;
        local_18[0] = 0;
        _get_stream_buffer_pointers(lVar1,&local_res8,&local_res20,local_18);
        *(undefined8 *)(param_1 + 0x18) = local_res8;
        *(undefined8 *)(param_1 + 0x20) = local_res8;
        *(undefined8 *)(param_1 + 0x38) = local_res20;
        *(undefined8 *)(param_1 + 0x40) = local_res20;
        *(undefined8 *)(param_1 + 0x50) = local_18[0];
        *(undefined8 *)(param_1 + 0x58) = local_18[0];
      }
      *(longlong *)(param_1 + 0x80) = lVar1;
      *(undefined8 *)(param_1 + 0x74) = DAT_146b95d80;
      *(undefined8 *)(param_1 + 0x68) = 0;
      return param_1;
    }
  }
  return (basic_streambuf<char,std::char_traits<char>_> *)0x0;
}



// FUNCTION 143937900 FUN_143937900 body=67 status=ok
// SIG undefined FUN_143937900(void)

undefined8 FUN_143937900(longlong *param_1)

{
  int iVar1;
  
  if (param_1[0x10] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    if (iVar1 != -1) {
      iVar1 = fflush((FILE *)param_1[0x10]);
      if (iVar1 < 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}



// FUNCTION 143937950 FUN_143937950 body=34 status=ok
// SIG undefined FUN_143937950(void)

longlong FUN_143937950(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           std::basic_istream<char,std::char_traits<char>_>::tellg
                     (*(basic_istream<char,std::char_traits<char>_> **)(param_1 + 0x28));
  return plVar1[1] + *plVar1;
}



// FUNCTION 143937980 FUN_143937980 body=34 status=ok
// SIG undefined FUN_143937980(void)

longlong FUN_143937980(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           std::basic_ostream<char,std::char_traits<char>_>::tellp
                     ((basic_ostream<char,std::char_traits<char>_> *)(param_1 + 0x28));
  return plVar1[1] + *plVar1;
}



// FUNCTION 1439379b0 FUN_1439379b0 body=881 status=ok
// SIG undefined FUN_1439379b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143937cac) */

ulonglong FUN_1439379b0(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  byte *pbVar6;
  int *piVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined1 auStackY_a8 [32];
  byte local_68;
  char local_67 [7];
  char *local_60;
  byte *local_58;
  undefined8 local_50;
  byte local_48;
  undefined7 uStack_47;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_50 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStackY_a8;
  uVar5 = **(ulonglong **)(param_1 + 0x38);
  if (uVar5 != 0) {
    iVar4 = **(int **)(param_1 + 0x50);
    if (uVar5 < uVar5 + (longlong)iVar4) {
      **(int **)(param_1 + 0x50) = iVar4 + -1;
      pbVar6 = (byte *)**(longlong **)(param_1 + 0x38);
      **(longlong **)(param_1 + 0x38) = (longlong)(pbVar6 + 1);
      return (ulonglong)*pbVar6;
    }
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      uVar2 = *(undefined8 *)(param_1 + 0x90);
      lVar9 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar9;
      **(longlong **)(param_1 + 0x38) = lVar9;
      **(int **)(param_1 + 0x50) = (int)uVar2 - (int)lVar9;
    }
    if (*(longlong *)(param_1 + 0x68) == 0) {
      uVar3 = fgetc(*(FILE **)(param_1 + 0x80));
      if (uVar3 == 0xffffffff) {
        uVar5 = 0xffffffffffffffff;
      }
      else {
        uVar5 = (ulonglong)(uVar3 & 0xff);
      }
    }
    else {
      local_30 = 0xf;
      local_38 = 0;
      local_48 = 0;
      iVar4 = fgetc(*(FILE **)(param_1 + 0x80));
      uVar5 = 0xffffffffffffffff;
LAB_143937aae:
      if (iVar4 != -1) {
        if (-local_38 - 1 < 2) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("string too long");
        }
        uVar1 = local_38 + 1;
        if (uVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("string too long");
        }
        if (local_30 < uVar1) {
          FUN_143263050(&local_48,uVar1,local_38);
LAB_143937b0e:
          if (uVar1 != 0) goto LAB_143937b1b;
        }
        else {
          if (uVar1 == 0) {
            local_38 = 0;
            pbVar6 = &local_48;
            if (0xf < local_30) {
              pbVar6 = (byte *)CONCAT71(uStack_47,local_48);
            }
            *pbVar6 = 0;
            goto LAB_143937b0e;
          }
LAB_143937b1b:
          pbVar6 = &local_48;
          if (0xf < local_30) {
            pbVar6 = (byte *)CONCAT71(uStack_47,local_48);
          }
          pbVar6[local_38] = (byte)iVar4;
          pbVar6 = &local_48;
          if (0xf < local_30) {
            pbVar6 = (byte *)CONCAT71(uStack_47,local_48);
          }
          local_38 = uVar1;
          pbVar6[uVar1] = 0;
        }
        pbVar6 = &local_48;
        if (0xf < local_30) {
          pbVar6 = (byte *)CONCAT71(uStack_47,local_48);
        }
        pbVar8 = &local_48;
        if (0xf < local_30) {
          pbVar8 = (byte *)CONCAT71(uStack_47,local_48);
        }
        iVar4 = std::codecvt<char,char,_Mbstatet>::in
                          (*(codecvt<char,char,_Mbstatet> **)(param_1 + 0x68),
                           (_Mbstatet *)(param_1 + 0x74),(char *)pbVar8,(char *)(pbVar6 + local_38),
                           &local_60,(char *)&local_68,local_67,(char **)&local_58);
        if (-1 < iVar4) {
          if (iVar4 < 2) {
            if (local_58 == &local_68) {
              pbVar6 = &local_48;
              if (0xf < local_30) {
                pbVar6 = (byte *)CONCAT71(uStack_47,local_48);
              }
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
                        (&local_48,0,(longlong)local_60 - (longlong)pbVar6);
              goto LAB_143937bdf;
            }
            pbVar6 = (byte *)CONCAT71(uStack_47,local_48);
            pbVar8 = &local_48;
            if (0xf < local_30) {
              pbVar8 = pbVar6;
            }
            iVar4 = ((int)pbVar8 - (int)local_60) + (int)local_38;
            lVar9 = (longlong)iVar4;
            if (0 < iVar4) {
              do {
                lVar9 = lVar9 + -1;
                ungetc((int)local_60[lVar9],*(FILE **)(param_1 + 0x80));
              } while (0 < lVar9);
              pbVar6 = (byte *)CONCAT71(uStack_47,local_48);
            }
            uVar5 = (ulonglong)local_68;
            goto LAB_143937c99;
          }
          if (iVar4 == 3) {
            if (local_38 == 0) goto LAB_143937bdf;
            pbVar6 = (byte *)CONCAT71(uStack_47,local_48);
            if (local_30 < 0x10) {
              pbVar8 = &local_48;
LAB_143937c27:
              local_68 = *pbVar8;
            }
            else {
              pbVar8 = pbVar6;
              if (pbVar6 != (byte *)0x0) goto LAB_143937c27;
              local_68 = 0;
              piVar7 = _errno();
              *piVar7 = 0x16;
              _invalid_parameter_noinfo();
              pbVar6 = (byte *)CONCAT71(uStack_47,local_48);
            }
            uVar5 = (ulonglong)local_68;
            goto LAB_143937c99;
          }
        }
      }
      pbVar6 = (byte *)CONCAT71(uStack_47,local_48);
LAB_143937c99:
      if (0xf < local_30) {
        pbVar8 = pbVar6;
        if (0xfff < local_30 + 1) {
          if ((local_48 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          pbVar8 = *(byte **)(pbVar6 + -8);
          if (pbVar6 <= pbVar8) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          if ((ulonglong)((longlong)pbVar6 - (longlong)pbVar8) < 8) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          if (0x27 < (ulonglong)((longlong)pbVar6 - (longlong)pbVar8)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(pbVar8);
      }
    }
    uVar5 = uVar5 & 0xffffffff;
  }
  return uVar5;
LAB_143937bdf:
  iVar4 = fgetc(*(FILE **)(param_1 + 0x80));
  goto LAB_143937aae;
}



// FUNCTION 143937d30 FUN_143937d30 body=103 status=ok
// SIG undefined FUN_143937d30(void)

uint FUN_143937d30(longlong *param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = *(byte **)param_1[7];
  if ((pbVar1 != (byte *)0x0) && (pbVar1 < pbVar1 + *(int *)param_1[10])) {
    return (uint)*pbVar1;
  }
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  if (uVar2 == 0xffffffff) {
    return 0xffffffff;
  }
  (**(code **)(*param_1 + 0x20))(param_1,uVar2);
  return uVar2;
}



// FUNCTION 143937da0 FUN_143937da0 body=76 status=ok
// SIG undefined FUN_143937da0(void)

void FUN_143937da0(longlong param_1,char *param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = _errno();
  *piVar1 = 0;
  std::basic_ostream<char,std::char_traits<char>_>::write
            ((basic_ostream<char,std::char_traits<char>_> *)(param_1 + 0x28),param_2,
             (longlong)param_3);
  FUN_143936d20(param_1 + 0x28);
  return;
}



// FUNCTION 143937df0 FUN_143937df0 body=124 status=ok
// SIG undefined FUN_143937df0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143937df0(ulonglong param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if ((param_1 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_1,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < param_2)) {
    FUN_143e179e0(local_78,"Integer multiplication overflow.");
    local_78[0] = Iex::OverflowExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db8a8);
  }
  return param_1 * param_2;
}



// FUNCTION 143937e70 FBinaryArchiveFormatter body=18 status=ok
// SIG undefined FBinaryArchiveFormatter(void)

undefined8 *
FBinaryArchiveFormatter::FBinaryArchiveFormatter(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = Imf::Compressor::vftable;
  return param_1;
}



// FUNCTION 143937e90 FUN_143937e90 body=33 status=ok
// SIG undefined FUN_143937e90(void)

undefined8 * FUN_143937e90(undefined8 *param_1)

{
  FUN_143e17780();
  *param_1 = Iex::OverflowExc::vftable;
  return param_1;
}



// FUNCTION 143937ec0 FUN_143937ec0 body=11 status=ok
// SIG undefined FUN_143937ec0(void)

void FUN_143937ec0(undefined8 *param_1)

{
  *param_1 = Imf::Compressor::vftable;
  return;
}



// FUNCTION 143937ed0 FUN_143937ed0 body=38 status=ok
// SIG undefined FUN_143937ed0(void)

undefined8 * FUN_143937ed0(undefined8 *param_1,byte param_2)

{
  *param_1 = Imf::Compressor::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete();
  }
  return param_1;
}



// FUNCTION 143937f00 FUN_143937f00 body=11 status=ok
// SIG undefined FUN_143937f00(void)

void FUN_143937f00(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143937f07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



// FUNCTION 143937f10 FUN_143937f10 body=7 status=ok
// SIG undefined FUN_143937f10(void)

bool FUN_143937f10(uint param_1)

{
  return param_1 < 8;
}



// FUNCTION 143937f20 FUN_143937f20 body=389 status=ok
// SIG undefined FUN_143937f20(void)

undefined8 FUN_143937f20(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  switch(param_1) {
  case 1:
    lVar1 = operator_new(0x28);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_143943870(lVar1,param_3,param_2);
    }
    break;
  case 2:
    lVar1 = operator_new(0x28);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_143943d40(lVar1,param_3,param_2,1);
    }
    break;
  case 3:
    lVar1 = operator_new(0x28);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_143943d40(lVar1,param_3,param_2,0x10);
    }
    break;
  case 4:
    lVar1 = operator_new(0x58);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_143944170(lVar1,param_3,param_2,0x20);
    }
    break;
  case 5:
    lVar1 = operator_new(0x40);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_143945240(lVar1,param_3,param_2,0x10);
    }
    break;
  case 6:
    lVar1 = operator_new(0x58);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_143945e10(lVar1,param_3,param_2,0x20,0);
    }
    break;
  case 7:
    lVar1 = operator_new(0x58);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_143945e10(lVar1,param_3,param_2,0x20,1);
    }
    break;
  default:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1439380d0 FUN_1439380d0 body=365 status=ok
// SIG undefined FUN_1439380d0(void)

undefined8
FUN_1439380d0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  switch(param_1) {
  case 1:
    lVar1 = operator_new(0x28);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_143937df0(param_2,param_3);
      uVar2 = FUN_143943870(lVar1,param_4,uVar2);
    }
    break;
  case 2:
  case 3:
    lVar1 = operator_new(0x28);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_143943d40(lVar1,param_4,param_2,param_3);
    }
    break;
  case 4:
    lVar1 = operator_new(0x58);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_143944170(lVar1,param_4,param_2,param_3);
    }
    break;
  case 5:
    lVar1 = operator_new(0x40);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_143945240(lVar1,param_4,param_2,param_3);
    }
    break;
  case 6:
    lVar1 = operator_new(0x58);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_143945e10(lVar1,param_4,param_2,param_3,0);
    }
    break;
  case 7:
    lVar1 = operator_new(0x58);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_143945e10(lVar1,param_4,param_2,param_3,1);
    }
    break;
  default:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143938260 FUN_143938260 body=11 status=ok
// SIG undefined FUN_143938260(void)

void FUN_143938260(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143938267. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}



// FUNCTION 143938270 FUN_143938270 body=55 status=ok
// SIG undefined FUN_143938270(void)

void FUN_143938270(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_143938800();
  *(undefined2 *)(lVar2 + 0x18) = 0;
  if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
    uVar1 = param_2[1];
    *(undefined8 *)(lVar2 + 0x20) = *param_2;
    *(undefined8 *)(lVar2 + 0x28) = uVar1;
  }
  return;
}



// FUNCTION 1439382b0 FUN_1439382b0 body=710 status=ok
// SIG undefined FUN_1439382b0(void)

undefined8 *
FUN_1439382b0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (0x555555555555553 < (ulonglong)param_1[1]) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  plVar5 = (longlong *)FUN_143938270(param_1,param_5);
  param_1[1] = param_1[1] + 1;
  plVar5[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = plVar5;
    *(longlong **)*param_1 = plVar5;
    *(longlong **)(*param_1 + 0x10) = plVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar5;
    if (param_4 == *(undefined8 **)(*param_1 + 0x10)) {
      *(longlong **)(*param_1 + 0x10) = plVar5;
    }
  }
  else {
    *param_4 = plVar5;
    if (param_4 == *(undefined8 **)*param_1) {
      *(longlong **)*param_1 = plVar5;
    }
  }
  cVar1 = *(char *)(plVar5[1] + 0x18);
  plVar6 = plVar5;
  do {
    if (cVar1 != '\0') {
      lVar2 = *(longlong *)(*param_1 + 8);
      *param_2 = plVar5;
      *(undefined1 *)(lVar2 + 0x18) = 1;
      return param_2;
    }
    plVar7 = (longlong *)plVar6[1];
    plVar8 = *(longlong **)plVar7[1];
    if (plVar7 == plVar8) {
      lVar2 = ((longlong *)plVar7[1])[2];
      if (*(char *)(lVar2 + 0x18) == '\0') {
        *(undefined1 *)(plVar7 + 3) = 1;
        *(undefined1 *)(lVar2 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar6[1] + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar7[2]) {
          plVar6 = (longlong *)plVar7[2];
          plVar7[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x19) == '\0') {
            *(longlong **)(*plVar6 + 8) = plVar7;
          }
          plVar6[1] = plVar7[1];
          if (plVar7 == *(longlong **)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar6;
          }
          else {
            plVar8 = (longlong *)plVar7[1];
            if (plVar7 == (longlong *)*plVar8) {
              *plVar8 = (longlong)plVar6;
            }
            else {
              plVar8[2] = (longlong)plVar6;
            }
          }
          *plVar6 = (longlong)plVar7;
          plVar7[1] = (longlong)plVar6;
          plVar6 = plVar7;
        }
        *(undefined1 *)(plVar6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar6[1] + 8);
        plVar8 = (longlong *)*plVar7;
        *plVar7 = plVar8[2];
        if (*(char *)(plVar8[2] + 0x19) == '\0') {
          *(longlong **)(plVar8[2] + 8) = plVar7;
        }
        plVar8[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
          plVar8[2] = (longlong)plVar7;
        }
        else {
          plVar3 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar3[2]) {
            plVar3[2] = (longlong)plVar8;
            plVar8[2] = (longlong)plVar7;
          }
          else {
            *plVar3 = (longlong)plVar8;
            plVar8[2] = (longlong)plVar7;
          }
        }
LAB_14393853e:
        plVar7[1] = (longlong)plVar8;
      }
    }
    else {
      if ((char)plVar8[3] != '\0') {
        if (plVar6 == (longlong *)*plVar7) {
          lVar2 = *plVar7;
          *plVar7 = *(longlong *)(lVar2 + 0x10);
          if (*(char *)(*(longlong *)(lVar2 + 0x10) + 0x19) == '\0') {
            *(longlong **)(*(longlong *)(lVar2 + 0x10) + 8) = plVar7;
          }
          *(longlong *)(lVar2 + 8) = plVar7[1];
          if (plVar7 == *(longlong **)(*param_1 + 8)) {
            *(longlong *)(*param_1 + 8) = lVar2;
          }
          else {
            plVar6 = (longlong *)plVar7[1];
            if (plVar7 == (longlong *)plVar6[2]) {
              plVar6[2] = lVar2;
            }
            else {
              *plVar6 = lVar2;
            }
          }
          *(longlong **)(lVar2 + 0x10) = plVar7;
          plVar7[1] = lVar2;
          plVar6 = plVar7;
        }
        *(undefined1 *)(plVar6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar6[1] + 8);
        plVar8 = (longlong *)plVar7[2];
        plVar7[2] = *plVar8;
        if (*(char *)(*plVar8 + 0x19) == '\0') {
          *(longlong **)(*plVar8 + 8) = plVar7;
        }
        plVar8[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
        }
        else {
          puVar4 = (undefined8 *)plVar7[1];
          if (plVar7 == (longlong *)*puVar4) {
            *puVar4 = plVar8;
          }
          else {
            puVar4[2] = plVar8;
          }
        }
        *plVar8 = (longlong)plVar7;
        goto LAB_14393853e;
      }
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(plVar8 + 3) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      plVar6 = *(longlong **)(plVar6[1] + 8);
    }
    cVar1 = *(char *)(plVar6[1] + 0x18);
  } while( true );
}



// FUNCTION 143938580 FUN_143938580 body=472 status=ok
// SIG undefined FUN_143938580(void)

undefined8 *
FUN_143938580(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             undefined1 param_5)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 local_res8 [8];
  
  puVar5 = (undefined8 *)*param_1;
  uVar9 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  puVar11 = puVar5;
  if (*(char *)((longlong)puVar5[1] + 0x19) == '\0') {
    pbVar8 = (byte *)*param_4;
    puVar6 = (undefined8 *)puVar5[1];
    do {
      puVar11 = puVar6;
      if ((char)param_3 == '\0') {
        pbVar4 = pbVar8;
        do {
          bVar1 = *pbVar4;
          uVar7 = (uint)pbVar4[puVar11[4] - (longlong)pbVar8];
          if (bVar1 != uVar7) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar7 != 0);
        uVar9 = CONCAT71((int7)((ulonglong)(puVar11[4] - (longlong)pbVar8) >> 8),
                         (int)(bVar1 - uVar7) < 0);
      }
      else {
        pbVar4 = (byte *)puVar11[4];
        lVar10 = (longlong)pbVar8 - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar7 = (uint)pbVar4[lVar10];
          if (bVar1 != uVar7) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar7 != 0);
        uVar9 = CONCAT71((int7)((ulonglong)lVar10 >> 8),-1 < (int)(bVar1 - uVar7));
      }
      if ((char)uVar9 == '\0') {
        puVar6 = (undefined8 *)puVar11[2];
      }
      else {
        puVar6 = (undefined8 *)*puVar11;
      }
    } while (*(char *)((longlong)puVar6 + 0x19) == '\0');
  }
  puVar6 = puVar11;
  if ((char)uVar9 != '\0') {
    if (puVar11 == (undefined8 *)*puVar5) {
      puVar5 = (undefined8 *)
               FUN_1439382b0(param_1,local_res8,CONCAT71((int7)((ulonglong)uVar9 >> 8),1),puVar11,
                             param_4,param_5,0xfffffffffffffffe);
      *param_2 = *puVar5;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)puVar11 + 0x19) == '\0') {
      puVar6 = (undefined8 *)*puVar11;
      if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
        cVar2 = *(char *)((longlong)puVar6[2] + 0x19);
        puVar5 = (undefined8 *)puVar6[2];
        while (cVar2 == '\0') {
          cVar2 = *(char *)((longlong)puVar5[2] + 0x19);
          puVar6 = puVar5;
          puVar5 = (undefined8 *)puVar5[2];
        }
      }
      else {
        cVar2 = *(char *)((longlong)puVar11[1] + 0x19);
        puVar5 = (undefined8 *)puVar11[1];
        puVar6 = puVar11;
        while ((puVar3 = puVar5, cVar2 == '\0' && (puVar6 == (undefined8 *)*puVar3))) {
          cVar2 = *(char *)((longlong)puVar3[1] + 0x19);
          puVar5 = (undefined8 *)puVar3[1];
          puVar6 = puVar3;
        }
        if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
          puVar6 = puVar3;
        }
      }
    }
    else {
      puVar6 = (undefined8 *)puVar11[2];
    }
  }
  pbVar8 = (byte *)puVar6[4];
  lVar10 = *param_4 - (longlong)pbVar8;
  do {
    bVar1 = *pbVar8;
    uVar7 = (uint)pbVar8[lVar10];
    if (bVar1 != uVar7) break;
    pbVar8 = pbVar8 + 1;
  } while (uVar7 != 0);
  if ((int)(bVar1 - uVar7) < 0) {
    puVar5 = (undefined8 *)
             FUN_1439382b0(param_1,local_res8,uVar9,puVar11,param_4,param_5,0xfffffffffffffffe);
    *param_2 = *puVar5;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    *param_2 = puVar6;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143938760 FUN_143938760 body=14 status=ok
// SIG undefined FUN_143938760(void)

undefined8 * FUN_143938760(undefined8 *param_1)

{
  *param_1 = Imf::Attribute::vftable;
  return param_1;
}



// FUNCTION 143938770 FUN_143938770 body=11 status=ok
// SIG undefined FUN_143938770(void)

void FUN_143938770(undefined8 *param_1)

{
  *param_1 = Imf::Attribute::vftable;
  return;
}



// FUNCTION 143938780 FUN_143938780 body=38 status=ok
// SIG undefined FUN_143938780(void)

undefined8 * FUN_143938780(undefined8 *param_1,byte param_2)

{
  *param_1 = Imf::Attribute::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete();
  }
  return param_1;
}



// FUNCTION 1439387b0 _Buyheadnode body=77 status=ok
// SIG undefined _Buyheadnode(void)

void std::
     _Tree_alloc<0,std::_Tree_base_types<std::pair<google::protobuf::FieldDescriptor_const_*___ptr64_const,google::protobuf::TextFormat::FieldValuePrinter_const_*___ptr64>,std::allocator<std::pair<google::protobuf::FieldDescriptor_const_*___ptr64_const,google::protobuf::TextFormat::FieldValuePrinter_const_*___ptr64>_>_>_>
     ::_Buyheadnode(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x30);
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



// FUNCTION 143938800 FUN_143938800 body=92 status=ok
// SIG undefined FUN_143938800(void)

undefined8 * FUN_143938800(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
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



// FUNCTION 143938860 FUN_143938860 body=208 status=ok
// SIG undefined FUN_143938860(void)

bool FUN_143938860(byte *param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong *plVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *local_res10;
  longlong *local_18;
  undefined1 local_10;
  
  plVar5 = (longlong *)FUN_143938d70();
  local_18 = plVar5 + 2;
  FUN_1437125f0();
  puVar3 = (undefined8 *)*plVar5;
  local_10 = 1;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  local_res10 = puVar3;
  puVar9 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar6 = (byte *)puVar9[4];
    lVar8 = (longlong)param_1 - (longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar4 = (uint)pbVar6[lVar8];
      if (bVar2 != uVar4) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar4 != 0);
    if ((int)(bVar2 - uVar4) < 0) {
      puVar7 = (undefined8 *)puVar9[2];
      puVar9 = local_res10;
    }
    else {
      puVar7 = (undefined8 *)*puVar9;
    }
    local_res10 = puVar9;
    puVar9 = puVar7;
    cVar1 = *(char *)((longlong)puVar7 + 0x19);
  }
  if (local_res10 != puVar3) {
    lVar8 = local_res10[4] - (longlong)param_1;
    do {
      bVar2 = *param_1;
      uVar4 = (uint)param_1[lVar8];
      if (bVar2 != uVar4) break;
      param_1 = param_1 + 1;
    } while (uVar4 != 0);
    if (-1 < (int)(bVar2 - uVar4)) goto LAB_143938910;
  }
  local_res10 = puVar3;
LAB_143938910:
  FUN_143925920(&local_18);
  return local_res10 != puVar3;
}



// FUNCTION 143938930 FUN_143938930 body=533 status=ok
// SIG undefined FUN_143938930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143938930(byte *param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  longlong *local_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined *local_178 [3];
  undefined **local_160 [13];
  undefined8 local_f8;
  undefined4 local_f0;
  code *local_e0;
  undefined **local_78 [13];
  ulonglong local_10;
  
  local_180 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_198 = 0;
  plVar4 = (longlong *)FUN_143938d70();
  local_190 = plVar4 + 2;
  FUN_1437125f0();
  local_188 = 1;
  puVar3 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar11 = puVar3;
  puVar10 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar6 = (byte *)puVar10[4];
    lVar9 = (longlong)param_1 - (longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar7 = (uint)pbVar6[lVar9];
      if (bVar2 != uVar7) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    if ((int)(bVar2 - uVar7) < 0) {
      puVar8 = (undefined8 *)puVar10[2];
      puVar10 = puVar11;
    }
    else {
      puVar8 = (undefined8 *)*puVar10;
    }
    puVar11 = puVar10;
    puVar10 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if (puVar11 != puVar3) {
    pbVar6 = param_1;
    do {
      bVar2 = *pbVar6;
      uVar7 = (uint)pbVar6[puVar11[4] - (longlong)param_1];
      if (bVar2 != uVar7) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    if (-1 < (int)(bVar2 - uVar7)) goto LAB_143938a0d;
  }
  puVar11 = puVar3;
LAB_143938a0d:
  if (puVar11 == puVar3) {
    local_178[0] = &DAT_145af0c78;
    local_178[2] = &DAT_145af0c80;
    local_e0 = _vftable__exref;
    local_198 = 1;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)local_178,
               (basic_streambuf<char,std::char_traits<char>_> *)local_160);
    *(undefined ***)((longlong)local_178 + (longlong)*(int *)(local_178[0] + 4)) =
         std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)local_178 + (longlong)*(int *)(local_178[0] + 4) + -4) =
         *(int *)(local_178[0] + 4) + -0x98;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)local_160);
    local_160[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_f8 = 0;
    local_f0 = 0;
    uVar5 = std::operator<<<std::char_traits<char>_>
                      (local_178 + 2,"Cannot create image file attribute of unknown type \"");
    uVar5 = std::operator<<<std::char_traits<char>_>(uVar5,param_1);
    std::operator<<<std::char_traits<char>_>(uVar5,&DAT_145c62598);
    FUN_143e175c0(local_78,local_178);
    local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
  }
  uVar5 = (*(code *)puVar11[5])();
  FUN_143925920(&local_190);
  return uVar5;
}



// FUNCTION 143938b50 FUN_143938b50 body=542 status=ok
// SIG undefined FUN_143938b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143938b50(byte *param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  byte *pbVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  undefined1 local_1b8;
  undefined4 local_1b4;
  byte *local_1b0;
  undefined8 local_1a8;
  longlong *local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined1 local_188 [12];
  int iStack_17c;
  undefined *local_178 [3];
  undefined **local_160 [13];
  undefined8 local_f8;
  undefined4 local_f0;
  code *local_e0;
  undefined **local_78 [13];
  ulonglong local_10;
  
  local_190 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  local_1b4 = 0;
  plVar4 = (longlong *)FUN_143938d70();
  local_1a0 = plVar4 + 2;
  FUN_1437125f0();
  local_198 = 1;
  puVar3 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar11 = puVar3;
  puVar10 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar5 = (byte *)puVar10[4];
    lVar9 = (longlong)param_1 - (longlong)pbVar5;
    do {
      bVar2 = *pbVar5;
      uVar7 = (uint)pbVar5[lVar9];
      if (bVar2 != uVar7) break;
      pbVar5 = pbVar5 + 1;
    } while (uVar7 != 0);
    if ((int)(bVar2 - uVar7) < 0) {
      puVar8 = (undefined8 *)puVar10[2];
      puVar10 = puVar11;
    }
    else {
      puVar8 = (undefined8 *)*puVar10;
    }
    puVar11 = puVar10;
    puVar10 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if (puVar11 != puVar3) {
    pbVar5 = param_1;
    do {
      bVar2 = *pbVar5;
      uVar7 = (uint)pbVar5[puVar11[4] - (longlong)param_1];
      if (bVar2 != uVar7) break;
      pbVar5 = pbVar5 + 1;
    } while (uVar7 != 0);
    if (-1 < (int)(bVar2 - uVar7)) goto LAB_143938c2d;
  }
  puVar11 = puVar3;
LAB_143938c2d:
  if (puVar11 == puVar3) {
    local_1c8 = local_1b8;
    local_1b0 = param_1;
    local_1a8 = param_2;
    FUN_143938580(plVar4,local_188,0,&local_1b0);
    FUN_143925920(&local_1a0);
    return;
  }
  local_178[0] = &DAT_145af0c78;
  local_178[2] = &DAT_145af0c80;
  local_e0 = _vftable__exref;
  local_1b4 = 1;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_178,
             (basic_streambuf<char,std::char_traits<char>_> *)local_160);
  *(undefined ***)((longlong)local_178 + (longlong)*(int *)(local_178[0] + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_17c + (longlong)*(int *)(local_178[0] + 4)) =
       *(int *)(local_178[0] + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_160);
  local_160[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_f8 = 0;
  local_f0 = 0;
  uVar6 = std::operator<<<std::char_traits<char>_>
                    (local_178 + 2,"Cannot register image file attribute type \"");
  uVar6 = std::operator<<<std::char_traits<char>_>(uVar6,param_1);
  std::operator<<<std::char_traits<char>_>(uVar6,"\". The type has already been registered.");
  FUN_143e175c0(local_78,local_178);
  local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
}



// FUNCTION 143938d70 FUN_143938d70 body=245 status=ok
// SIG undefined FUN_143938d70(void)

undefined8 * FUN_143938d70(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *local_20;
  undefined1 local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b95dc0) && (_Init_thread_header(&DAT_146b95dc0), DAT_146b95dc0 == -1))
  {
    FUN_14394c2d0(&DAT_146b95d90);
    atexit((_func_5014 *)&LAB_143ec5dd0);
    _Init_thread_footer(&DAT_146b95dc0);
  }
  local_20 = &DAT_146b95d90;
  FUN_1437125f0(&DAT_146b95d90);
  local_18 = 1;
  if (DAT_146b95dc8 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)operator_new(0x40);
    if (puVar1 == (undefined8 *)0x0) {
      DAT_146b95dc8 = (undefined8 *)0x0;
    }
    else {
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      uVar2 = std::
              _Tree_alloc<0,std::_Tree_base_types<std::pair<google::protobuf::FieldDescriptor_const_*___ptr64_const,google::protobuf::TextFormat::FieldValuePrinter_const_*___ptr64>,std::allocator<std::pair<google::protobuf::FieldDescriptor_const_*___ptr64_const,google::protobuf::TextFormat::FieldValuePrinter_const_*___ptr64>_>_>_>
              ::_Buyheadnode(puVar1);
      *puVar1 = uVar2;
      FUN_14394c2d0(puVar1 + 2);
      DAT_146b95dc8 = puVar1;
    }
  }
  puVar1 = DAT_146b95dc8;
  FUN_143925920(&local_20);
  return puVar1;
}



// FUNCTION 143938e70 FUN_143938e70 body=267 status=ok
// SIG undefined FUN_143938e70(void)

void FUN_143938e70(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0xc) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x10) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x14) = local_res8[0];
  return;
}



// FUNCTION 143938f80 FUN_143938f80 body=315 status=ok
// SIG undefined FUN_143938f80(void)

void FUN_143938f80(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0xc) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x10) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x14) = local_res8[0];
  return;
}



// FUNCTION 1439390c0 FUN_1439390c0 body=8 status=ok
// SIG undefined FUN_1439390c0(void)

char * FUN_1439390c0(void)

{
  return "box2i";
}



// FUNCTION 1439390d0 FUN_1439390d0 body=8 status=ok
// SIG undefined FUN_1439390d0(void)

char * FUN_1439390d0(void)

{
  return "box2f";
}



// FUNCTION 1439390e0 FUN_1439390e0 body=241 status=ok
// SIG undefined FUN_1439390e0(void)

void FUN_1439390e0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  return;
}



// FUNCTION 1439391e0 FUN_1439391e0 body=289 status=ok
// SIG undefined FUN_1439391e0(void)

void FUN_1439391e0(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 8);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0xc);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x10);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x14);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  return;
}



// FUNCTION 143939310 FUN_143939310 body=442 status=ok
// SIG undefined FUN_143939310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143939310(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_578 [32];
  undefined1 local_558;
  char local_548 [4];
  undefined1 local_544;
  undefined1 local_543;
  undefined1 local_542;
  undefined1 local_541;
  undefined1 local_540;
  undefined3 local_53f;
  undefined4 local_53c;
  undefined1 local_538 [16];
  char local_528 [256];
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_578;
  do {
    pcVar3 = local_528;
    iVar4 = 0xff;
    do {
      (**(code **)(*param_2 + 0x10))(param_2,pcVar3,1);
      if (*pcVar3 == '\0') break;
      pcVar3 = pcVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    if (local_528[0] == '\0') {
      return;
    }
    FUN_143929340(local_528,"channel name");
    (**(code **)(*param_2 + 0x10))(param_2,&local_53c,4);
    uVar1 = local_53c;
    (**(code **)(*param_2 + 0x10))(param_2,local_548,1);
    bVar5 = local_548[0] != '\0';
    (**(code **)(*param_2 + 0x10))(param_2,local_428,3);
    (**(code **)(*param_2 + 0x10))(param_2,&local_544,4);
    (**(code **)(*param_2 + 0x10))(param_2,&local_540,4);
    local_558 = bVar5;
    uVar2 = FUN_143928200(local_538,uVar1,
                          CONCAT31(CONCAT21(CONCAT11(local_541,local_542),local_543),local_544),
                          CONCAT31(local_53f,local_540));
    FUN_1439287c0(param_1 + 8,local_528,uVar2);
  } while( true );
}



// FUNCTION 1439394d0 FUN_1439394d0 body=8 status=ok
// SIG undefined FUN_1439394d0(void)

char * FUN_1439394d0(void)

{
  return "chlist";
}



// FUNCTION 1439394e0 FUN_1439394e0 body=495 status=ok
// SIG undefined FUN_1439394e0(void)

void FUN_1439394e0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char *pcVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  undefined1 local_res13;
  undefined1 local_res20;
  undefined1 local_res21;
  undefined1 local_res22;
  undefined1 local_res23;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  longlong *local_30;
  undefined1 local_28 [16];
  
  param_1 = param_1 + 8;
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::begin(param_1,&local_30);
  plVar4 = (longlong *)FKey::GetFName(param_1,local_28);
  if (local_30 != (longlong *)*plVar4) {
    do {
      pcVar6 = (char *)((longlong)local_30 + 0x1c);
      cVar1 = *(char *)((longlong)local_30 + 0x1c);
      while (cVar1 != '\0') {
        (**(code **)(*param_2 + 8))(param_2,pcVar6,1);
        pcVar6 = pcVar6 + 1;
        cVar1 = *pcVar6;
      }
      (**(code **)(*param_2 + 8))(param_2,pcVar6,1);
      uVar2 = *(undefined4 *)((longlong)local_30 + 0x11c);
      local_res11 = (undefined1)((uint)uVar2 >> 8);
      local_res10 = (undefined1)uVar2;
      local_res12 = (undefined1)((uint)uVar2 >> 0x10);
      local_res13 = (undefined1)((uint)uVar2 >> 0x18);
      (**(code **)(*param_2 + 8))(param_2,&local_res10,4);
      local_res8[0] = (char)local_30[0x25] != '\0';
      (**(code **)(*param_2 + 8))(param_2,local_res8,1);
      lVar7 = 3;
      do {
        local_res8[0] = 0;
        (**(code **)(*param_2 + 8))(param_2,local_res8,1);
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      uVar2 = (undefined4)local_30[0x24];
      local_res21 = (undefined1)((uint)uVar2 >> 8);
      local_res20 = (undefined1)uVar2;
      local_res22 = (undefined1)((uint)uVar2 >> 0x10);
      local_res23 = (undefined1)((uint)uVar2 >> 0x18);
      (**(code **)(*param_2 + 8))(param_2,&local_res20,4);
      uVar2 = *(undefined4 *)((longlong)local_30 + 0x124);
      local_37 = (undefined1)((uint)uVar2 >> 8);
      local_38 = (undefined1)uVar2;
      local_36 = (undefined1)((uint)uVar2 >> 0x10);
      local_35 = (undefined1)((uint)uVar2 >> 0x18);
      (**(code **)(*param_2 + 8))(param_2,&local_38,4);
      if (*(char *)((longlong)local_30 + 0x19) == '\0') {
        plVar4 = (longlong *)local_30[2];
        if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x19);
          local_30 = plVar4;
          plVar4 = (longlong *)*plVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x19);
            local_30 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar1 = *(char *)(local_30[1] + 0x19);
          plVar3 = (longlong *)local_30[1];
          plVar4 = local_30;
          while ((local_30 = plVar3, cVar1 == '\0' && (plVar4 == (longlong *)local_30[2]))) {
            cVar1 = *(char *)(local_30[1] + 0x19);
            plVar3 = (longlong *)local_30[1];
            plVar4 = local_30;
          }
        }
      }
      puVar5 = (undefined8 *)FKey::GetFName(param_1,local_28);
    } while (local_30 != (longlong *)*puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x0001439396cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2,&DAT_145af3922,1);
  return;
}



// FUNCTION 1439396d0 FUN_1439396d0 body=552 status=ok
// SIG undefined FUN_1439396d0(void)

void FUN_1439396d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0xc) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x10) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x14) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x18) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x20) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x24) = local_res8[0];
  return;
}



// FUNCTION 143939900 FUN_143939900 body=8 status=ok
// SIG undefined FUN_143939900(void)

char * FUN_143939900(void)

{
  return "chromaticities";
}



// FUNCTION 143939910 FUN_143939910 body=502 status=ok
// SIG undefined FUN_143939910(void)

void FUN_143939910(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 8);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0xc);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x10);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x14);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x18);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x1c);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x20);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x24);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  return;
}



// FUNCTION 143939b10 FUN_143939b10 body=46 status=ok
// SIG undefined FUN_143939b10(void)

void FUN_143939b10(longlong param_1,longlong *param_2)

{
  byte local_res8 [32];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,1);
  *(uint *)(param_1 + 8) = (uint)local_res8[0];
  return;
}



// FUNCTION 143939b40 FUN_143939b40 body=8 status=ok
// SIG undefined FUN_143939b40(void)

char * FUN_143939b40(void)

{
  return "compression";
}



// FUNCTION 143939b50 FUN_143939b50 body=40 status=ok
// SIG undefined FUN_143939b50(void)

void FUN_143939b50(longlong param_1,longlong *param_2)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = *(undefined1 *)(param_1 + 8);
  (**(code **)(*param_2 + 8))(param_2,local_res8,1);
  return;
}



// FUNCTION 143939b80 FUN_143939b80 body=8 status=ok
// SIG undefined FUN_143939b80(void)

char * FUN_143939b80(void)

{
  return "double";
}



// FUNCTION 143939b90 FUN_143939b90 body=8 status=ok
// SIG undefined FUN_143939b90(void)

char * FUN_143939b90(void)

{
  return "envmap";
}



// FUNCTION 143939ba0 name body=8 status=ok
// SIG undefined name(void)

char * pqxx::string_traits<float>::name(void)

{
  return "float";
}



// FUNCTION 143939bb0 FUN_143939bb0 body=8 status=ok
// SIG undefined FUN_143939bb0(void)

undefined1 * FUN_143939bb0(void)

{
  return &DAT_145af6ba4;
}



// FUNCTION 143939bc0 FUN_143939bc0 body=493 status=ok
// SIG undefined FUN_143939bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143939bc0(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7,uint param_8)

{
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (99 < param_2) {
    FUN_143e179e0(local_78,"Invalid key code film manufacturer code (must be between 0 and 99).");
    local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
  }
  *param_1 = param_2;
  if (99 < param_3) {
    FUN_143e179e0(local_78,"Invalid key code film type (must be between 0 and 99).");
    local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
  }
  param_1[1] = param_3;
  if (999999 < param_4) {
    FUN_143e179e0(local_78,"Invalid key code prefix (must be between 0 and 999999).");
    local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
  }
  param_1[2] = param_4;
  if (param_5 < 10000) {
    param_1[3] = param_5;
    if (0x77 < param_6) {
      FUN_143e179e0(local_78,"Invalid key code perforation offset (must be between 0 and 119).");
      local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
    }
    param_1[4] = param_6;
    if (param_7 - 1 < 0xf) {
      param_1[5] = param_7;
      if (param_8 - 0x14 < 0x65) {
        param_1[6] = param_8;
        return;
      }
      FUN_143e179e0(local_78,
                    "Invalid key code number of perforations per count (must be between 20 and 120)."
                   );
      local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
    }
    FUN_143e179e0(local_78,
                  "Invalid key code number of perforations per frame (must be between 1 and 15).");
    local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
  }
  FUN_143e179e0(local_78,"Invalid key code count (must be between 0 and 9999).");
  local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
}



// FUNCTION 143939dc0 FUN_143939dc0 body=44 status=ok
// SIG undefined FUN_143939dc0(void)

undefined4 * FUN_143939dc0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return param_1;
}



// FUNCTION 143939df0 FUN_143939df0 body=106 status=ok
// SIG undefined FUN_143939df0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143939df0(longlong param_1,uint param_2)

{
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (param_2 < 10000) {
    *(uint *)(param_1 + 0xc) = param_2;
    return;
  }
  FUN_143e179e0(local_78,"Invalid key code count (must be between 0 and 9999).");
  local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
}



// FUNCTION 143939e60 FUN_143939e60 body=102 status=ok
// SIG undefined FUN_143939e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143939e60(uint *param_1,uint param_2)

{
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (param_2 < 100) {
    *param_1 = param_2;
    return;
  }
  FUN_143e179e0(local_78,"Invalid key code film manufacturer code (must be between 0 and 99).");
  local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
}



// FUNCTION 143939ed0 FUN_143939ed0 body=103 status=ok
// SIG undefined FUN_143939ed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143939ed0(longlong param_1,uint param_2)

{
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (param_2 < 100) {
    *(uint *)(param_1 + 4) = param_2;
    return;
  }
  FUN_143e179e0(local_78,"Invalid key code film type (must be between 0 and 99).");
  local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
}



// FUNCTION 143939f40 FUN_143939f40 body=103 status=ok
// SIG undefined FUN_143939f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143939f40(longlong param_1,uint param_2)

{
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (param_2 < 0x78) {
    *(uint *)(param_1 + 0x10) = param_2;
    return;
  }
  FUN_143e179e0(local_78,"Invalid key code perforation offset (must be between 0 and 119).");
  local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
}



// FUNCTION 143939fb0 FUN_143939fb0 body=106 status=ok
// SIG undefined FUN_143939fb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143939fb0(longlong param_1,int param_2)

{
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (param_2 - 0x14U < 0x65) {
    *(int *)(param_1 + 0x18) = param_2;
    return;
  }
  FUN_143e179e0(local_78,
                "Invalid key code number of perforations per count (must be between 20 and 120).");
  local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
}



// FUNCTION 14393a020 FUN_14393a020 body=106 status=ok
// SIG undefined FUN_14393a020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14393a020(longlong param_1,int param_2)

{
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (param_2 - 1U < 0xf) {
    *(int *)(param_1 + 0x14) = param_2;
    return;
  }
  FUN_143e179e0(local_78,
                "Invalid key code number of perforations per frame (must be between 1 and 15).");
  local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
}



// FUNCTION 14393a090 FUN_14393a090 body=106 status=ok
// SIG undefined FUN_14393a090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14393a090(longlong param_1,uint param_2)

{
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (param_2 < 1000000) {
    *(uint *)(param_1 + 8) = param_2;
    return;
  }
  FUN_143e179e0(local_78,"Invalid key code prefix (must be between 0 and 999999).");
  local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
}



// FUNCTION 14393a100 FUN_14393a100 body=449 status=ok
// SIG undefined FUN_14393a100(void)

void FUN_14393a100(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  param_1 = param_1 + 8;
  FUN_143939e60(param_1,local_res8[0]);
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  FUN_143939ed0(param_1,local_res8[0]);
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  FUN_14393a090(param_1,local_res8[0]);
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  FUN_143939df0(param_1,local_res8[0]);
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  FUN_143939f40(param_1,local_res8[0]);
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  FUN_14393a020(param_1,local_res8[0]);
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  FUN_143939fb0(param_1,local_res8[0]);
  return;
}



// FUNCTION 14393a2d0 FUN_14393a2d0 body=8 status=ok
// SIG undefined FUN_14393a2d0(void)

char * FUN_14393a2d0(void)

{
  return "keycode";
}



// FUNCTION 14393a2e0 FUN_14393a2e0 body=405 status=ok
// SIG undefined FUN_14393a2e0(void)

void FUN_14393a2e0(longlong param_1,longlong *param_2)

{
  WriteBytesMem *this;
  undefined4 uVar1;
  long lVar2;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  this = (WriteBytesMem *)(param_1 + 8);
  uVar1 = FRollingHash::GetWindowSize(this);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(this);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = IStreamingManager::GetNumWantingResources(this);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = IStreamingManager::GetNumWantingResourcesID(this);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(this);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = FUN_141548160(this);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  lVar2 = AK::WriteBytesMem::Count(this);
  local_res8 = (undefined1)lVar2;
  local_res9 = (undefined1)((uint)lVar2 >> 8);
  local_resb = (undefined1)((uint)lVar2 >> 0x18);
  local_resa = (undefined1)((uint)lVar2 >> 0x10);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  return;
}



// FUNCTION 14393a480 FUN_14393a480 body=8 status=ok
// SIG undefined FUN_14393a480(void)

char * FUN_14393a480(void)

{
  return "lineOrder";
}



// FUNCTION 14393a490 FUN_14393a490 body=615 status=ok
// SIG undefined FUN_14393a490(void)

void FUN_14393a490(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0xc) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x10) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x14) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x18) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x20) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x24) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x28) = local_res8[0];
  return;
}



// FUNCTION 14393a700 FUN_14393a700 body=134 status=ok
// SIG undefined FUN_14393a700(void)

void FUN_14393a700(longlong param_1,undefined8 param_2)

{
  FUN_143929700(param_2,param_1 + 8);
  FUN_143929700(param_2,param_1 + 0x10);
  FUN_143929700(param_2,param_1 + 0x18);
  FUN_143929700(param_2,param_1 + 0x20);
  FUN_143929700(param_2,param_1 + 0x28);
  FUN_143929700(param_2,param_1 + 0x30);
  FUN_143929700(param_2,param_1 + 0x38);
  FUN_143929700(param_2,param_1 + 0x40);
  FUN_143929700(param_2,param_1 + 0x48);
  return;
}



// FUNCTION 14393a790 FUN_14393a790 body=1056 status=ok
// SIG undefined FUN_14393a790(void)

void FUN_14393a790(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0xc) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x10) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x14) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x18) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x20) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x24) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x28) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x2c) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x30) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x34) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x38) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x3c) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x40) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x44) = local_res8[0];
  return;
}



// FUNCTION 14393abb0 FUN_14393abb0 body=221 status=ok
// SIG undefined FUN_14393abb0(void)

void FUN_14393abb0(longlong param_1,undefined8 param_2)

{
  FUN_143929700(param_2,param_1 + 8);
  FUN_143929700(param_2,param_1 + 0x10);
  FUN_143929700(param_2,param_1 + 0x18);
  FUN_143929700(param_2,param_1 + 0x20);
  FUN_143929700(param_2,param_1 + 0x28);
  FUN_143929700(param_2,param_1 + 0x30);
  FUN_143929700(param_2,param_1 + 0x38);
  FUN_143929700(param_2,param_1 + 0x40);
  FUN_143929700(param_2,param_1 + 0x48);
  FUN_143929700(param_2,param_1 + 0x50);
  FUN_143929700(param_2,param_1 + 0x58);
  FUN_143929700(param_2,param_1 + 0x60);
  FUN_143929700(param_2,param_1 + 0x68);
  FUN_143929700(param_2,param_1 + 0x70);
  FUN_143929700(param_2,param_1 + 0x78);
  FUN_143929700(param_2,param_1 + 0x80);
  return;
}



// FUNCTION 14393ac90 FUN_14393ac90 body=8 status=ok
// SIG undefined FUN_14393ac90(void)

undefined * FUN_14393ac90(void)

{
  return &DAT_145c65318;
}



// FUNCTION 14393aca0 FUN_14393aca0 body=8 status=ok
// SIG undefined FUN_14393aca0(void)

undefined * FUN_14393aca0(void)

{
  return &DAT_145c65320;
}



// FUNCTION 14393acb0 FUN_14393acb0 body=8 status=ok
// SIG undefined FUN_14393acb0(void)

undefined * FUN_14393acb0(void)

{
  return &DAT_145c65328;
}



// FUNCTION 14393acc0 FUN_14393acc0 body=8 status=ok
// SIG undefined FUN_14393acc0(void)

undefined * FUN_14393acc0(void)

{
  return &DAT_145c65330;
}



// FUNCTION 14393acd0 FUN_14393acd0 body=559 status=ok
// SIG undefined FUN_14393acd0(void)

void FUN_14393acd0(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 8);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0xc);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x10);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x14);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x18);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x1c);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x20);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x24);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x28);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  return;
}



// FUNCTION 14393af00 FUN_14393af00 body=143 status=ok
// SIG undefined FUN_14393af00(void)

void FUN_14393af00(longlong param_1,undefined8 param_2)

{
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 8));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x10));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x18));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x20));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x28));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x30));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x38));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x40));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x48));
  return;
}



// FUNCTION 14393af90 FUN_14393af90 body=958 status=ok
// SIG undefined FUN_14393af90(void)

void FUN_14393af90(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 8);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0xc);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x10);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x14);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x18);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x1c);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x20);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x24);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x28);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x2c);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x30);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x34);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x38);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x3c);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x40);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x44);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  return;
}



// FUNCTION 14393b350 FUN_14393b350 body=237 status=ok
// SIG undefined FUN_14393b350(void)

void FUN_14393b350(longlong param_1,undefined8 param_2)

{
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 8));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x10));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x18));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x20));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x28));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x30));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x38));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x40));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x48));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x50));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x58));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x60));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x68));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x70));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x78));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x80));
  return;
}



// FUNCTION 14393b440 FUN_14393b440 body=206 status=ok
// SIG undefined FUN_14393b440(void)

undefined8 * FUN_14393b440(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *_Dst;
  char *pcVar4;
  char *pcVar5;
  
  FUN_143938760();
  *param_1 = Imf::OpaqueAttribute::vftable;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(*(longlong *)(param_2 + 8) + lVar2) != '\0');
  uVar3 = operator_new((longlong)((int)lVar2 + 1));
  param_1[1] = uVar3;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  uVar3 = operator_new((longlong)*(int *)(param_2 + 0x10));
  param_1[3] = uVar3;
  pcVar4 = *(char **)(param_2 + 8);
  pcVar5 = (char *)param_1[1];
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  _Dst = (void *)operator_new((longlong)*(int *)(param_2 + 0x10));
  FMemory::operator_delete(param_1[3]);
  param_1[3] = _Dst;
  _guard_xfg_dispatch_icall_nop(_Dst,*(void **)(param_2 + 0x18),(longlong)*(int *)(param_2 + 0x10));
  return param_1;
}



// FUNCTION 14393b510 FUN_14393b510 body=127 status=ok
// SIG undefined FUN_14393b510(void)

undefined8 * FUN_14393b510(undefined8 *param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  FUN_143938760();
  *param_1 = Imf::OpaqueAttribute::vftable;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (param_2[lVar2] != '\0');
  uVar3 = operator_new((longlong)((int)lVar2 + 1));
  param_1[1] = uVar3;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  pcVar4 = (char *)param_1[1];
  do {
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    param_2 = param_2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  return param_1;
}



// FUNCTION 14393b590 FUN_14393b590 body=78 status=ok
// SIG undefined FUN_14393b590(void)

undefined8 * FUN_14393b590(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::OpaqueAttribute::vftable;
  FMemory::operator_delete(param_1[3]);
  FMemory::operator_delete(param_1[1]);
  FUN_143938770(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14393b5e0 FUN_14393b5e0 body=60 status=ok
// SIG undefined FUN_14393b5e0(void)

undefined8
FUN_14393b5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  lVar1 = operator_new(0x20);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14393b440(lVar1,param_1,param_3,param_4,uVar2);
  }
  return uVar2;
}



// FUNCTION 14393b620 FUN_14393b620 body=509 status=ok
// SIG undefined FUN_14393b620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14393b620(longlong param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  void *_Dst;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_198;
  undefined8 local_190;
  undefined *local_188 [3];
  undefined **local_170 [13];
  undefined8 local_108;
  undefined4 local_100;
  code *local_f0;
  undefined **local_88 [13];
  ulonglong local_20;
  
  local_190 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_198 = 0;
  local_1a8 = 0;
  lVar3 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&Imf::Attribute::RTTI_Type_Descriptor,
                     &Imf::OpaqueAttribute::RTTI_Type_Descriptor);
  if (lVar3 != 0) {
    pcVar7 = *(char **)(param_1 + 8);
    lVar8 = *(longlong *)(lVar3 + 8) - (longlong)pcVar7;
    do {
      cVar1 = *pcVar7;
      cVar2 = pcVar7[lVar8];
      if (cVar1 != cVar2) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      _Dst = (void *)operator_new((longlong)*(int *)(lVar3 + 0x10));
      FMemory::operator_delete(*(undefined8 *)(param_1 + 0x18));
      *(void **)(param_1 + 0x18) = _Dst;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar3 + 0x10);
      _guard_xfg_dispatch_icall_nop(_Dst,*(void **)(lVar3 + 0x18),(longlong)*(int *)(lVar3 + 0x10));
      return;
    }
  }
  local_188[0] = &DAT_145af0c78;
  local_188[2] = &DAT_145af0c80;
  local_f0 = _vftable__exref;
  local_198 = 1;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_188,
             (basic_streambuf<char,std::char_traits<char>_> *)local_170);
  *(undefined ***)((longlong)local_188 + (longlong)*(int *)(local_188[0] + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)local_188 + (longlong)*(int *)(local_188[0] + 4) + -4) =
       *(int *)(local_188[0] + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_170);
  local_170[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_108 = 0;
  local_100 = 0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar4 = (**(code **)(*param_2 + 8))(param_2);
  uVar5 = std::operator<<<std::char_traits<char>_>
                    (local_188 + 2,"Cannot copy the value of an image file attribute of type \"");
  uVar4 = std::operator<<<std::char_traits<char>_>(uVar5,uVar4);
  uVar4 = std::operator<<<std::char_traits<char>_>(uVar4,"\" to an attribute of type \"");
  uVar6 = std::operator<<<std::char_traits<char>_>(uVar4,uVar6);
  std::operator<<<std::char_traits<char>_>(uVar6,&DAT_145c62598);
  FUN_143e175c0(local_88,local_188);
  local_88[0] = Iex::TypeExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_88,(ThrowInfo *)&DAT_1461db640);
}



// FUNCTION 14393b820 FUN_14393b820 body=94 status=ok
// SIG undefined FUN_14393b820(void)

void FUN_14393b820(longlong param_1,longlong *param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = operator_new((longlong)param_3);
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(int *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00014393b87a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,uVar1,param_3);
  return;
}



// FUNCTION 14393b880 FUN_14393b880 body=21 status=ok
// SIG undefined FUN_14393b880(void)

void FUN_14393b880(longlong param_1,longlong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014393b891. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))
            (param_2,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10));
  return;
}



// FUNCTION 14393b8a0 FUN_14393b8a0 body=118 status=ok
// SIG undefined FUN_14393b8a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14393b8a0(uint param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  if ((ulonglong)param_1 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0)) {
    return (ulonglong)param_1;
  }
  FUN_143e179e0(local_78,"Integer multiplication overflow.");
  local_78[0] = Iex::OverflowExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db8a8);
}



// FUNCTION 14393b920 FUN_14393b920 body=120 status=ok
// SIG undefined FUN_14393b920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14393b920(uint param_1,uint param_2)

{
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if ((param_1 != 0) && ((uint)(0xffffffff / (ulonglong)param_1) < param_2)) {
    FUN_143e179e0(local_78,"Integer multiplication overflow.");
    local_78[0] = Iex::OverflowExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db8a8);
  }
  return param_1 * param_2;
}



// FUNCTION 14393b9a0 FUN_14393b9a0 body=283 status=ok
// SIG undefined FUN_14393b9a0(void)

int * FUN_14393b9a0(int *param_1,int param_2,int param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar2 = FUN_14393b920(param_2,param_3);
  uVar3 = FUN_14393b8a0(uVar2,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar4 = SUB168(ZEXT816(4) * auVar1,0);
  if (SUB168(ZEXT816(4) * auVar1,8) != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  uVar5 = operator_new(uVar4);
  uVar9 = 0;
  uVar6 = uVar9;
  if ((uVar5 != 0) && (uVar6 = uVar5, uVar3 != 0)) {
    lVar7 = uVar5 + 2;
    do {
      *(undefined4 *)(lVar7 + -2) = 0xff000000;
      lVar7 = lVar7 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *(ulonglong *)(param_1 + 2) = uVar6;
  if (param_4 == 0) {
    if (param_1[1] * *param_1 != 0) {
      do {
        uVar8 = (int)uVar9 + 1;
        *(undefined4 *)(*(longlong *)(param_1 + 2) + uVar9 * 4) = 0xff000000;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < (uint)(param_1[1] * *param_1));
    }
  }
  else if (param_1[1] * *param_1 != 0) {
    do {
      uVar8 = (int)uVar9 + 1;
      *(undefined4 *)(uVar9 * 4 + *(longlong *)(param_1 + 2)) = *(undefined4 *)(uVar9 * 4 + param_4)
      ;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 < (uint)(param_1[1] * *param_1));
    return param_1;
  }
  return param_1;
}



// FUNCTION 14393bac0 GetFilter body=9 status=ok
// SIG undefined GetFilter(void)

void Scaleform::Render::FilterState::GetFilter(longlong param_1)

{
  FMemory::operator_delete(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 14393bad0 FUN_14393bad0 body=190 status=ok
// SIG undefined FUN_14393bad0(void)

int * FUN_14393bad0(int *param_1,int *param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  
  FMemory::operator_delete(*(undefined8 *)(param_1 + 2));
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar6 = CONCAT44(0,param_2[1] * *param_2);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar6;
  uVar2 = SUB168(ZEXT816(4) * auVar1,0);
  if (SUB168(ZEXT816(4) * auVar1,8) != 0) {
    uVar2 = 0xffffffffffffffff;
  }
  uVar3 = operator_new(uVar2);
  uVar4 = 0;
  if ((uVar3 != 0) && (uVar4 = uVar3, uVar6 != 0)) {
    lVar5 = uVar3 + 2;
    do {
      *(undefined4 *)(lVar5 + -2) = 0xff000000;
      lVar5 = lVar5 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  *(ulonglong *)(param_1 + 2) = uVar4;
  uVar6 = 0;
  if (param_1[1] * *param_1 != 0) {
    do {
      uVar7 = (int)uVar6 + 1;
      *(undefined4 *)(uVar6 * 4 + *(longlong *)(param_1 + 2)) =
           *(undefined4 *)(uVar6 * 4 + *(longlong *)(param_2 + 2));
      uVar6 = (ulonglong)uVar7;
    } while (uVar7 < (uint)(param_1[1] * *param_1));
  }
  return param_1;
}



// FUNCTION 14393bb90 FUN_14393bb90 body=339 status=ok
// SIG undefined FUN_14393bb90(void)

void FUN_14393bb90(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  int local_20;
  int local_1c;
  longlong local_18;
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4,param_4,0xfffffffffffffffe);
  uVar1 = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  FUN_14393b9a0(&local_20,uVar1,local_res8[0],0);
  if (0 < local_1c * local_20) {
    lVar3 = local_18 + 2;
    uVar2 = (ulonglong)(uint)(local_1c * local_20);
    do {
      (**(code **)(*param_2 + 0x10))(param_2,lVar3 + -2,1);
      (**(code **)(*param_2 + 0x10))(param_2,lVar3 + -1,1);
      (**(code **)(*param_2 + 0x10))(param_2,lVar3,1);
      (**(code **)(*param_2 + 0x10))(param_2,lVar3 + 1,1);
      lVar3 = lVar3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  FUN_14393bad0(param_1 + 8,&local_20);
  Scaleform::Render::FilterState::GetFilter(&local_20);
  return;
}



// FUNCTION 14393bcf0 FUN_14393bcf0 body=8 status=ok
// SIG undefined FUN_14393bcf0(void)

char * FUN_14393bcf0(void)

{
  return "preview";
}



// FUNCTION 14393bd00 FUN_14393bd00 body=284 status=ok
// SIG undefined FUN_14393bd00(void)

void FUN_14393bd00(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  iVar2 = *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8);
  lVar3 = (longlong)iVar2;
  if (0 < iVar2) {
    puVar4 = (undefined1 *)(*(longlong *)(param_1 + 0x10) + 2);
    do {
      local_res8 = puVar4[-2];
      (**(code **)(*param_2 + 8))(param_2,&local_res8,1);
      local_res8 = puVar4[-1];
      (**(code **)(*param_2 + 8))(param_2,&local_res8,1);
      local_res8 = *puVar4;
      (**(code **)(*param_2 + 8))(param_2,&local_res8,1);
      local_res8 = puVar4[1];
      (**(code **)(*param_2 + 8))(param_2,&local_res8,1);
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14393be20 FUN_14393be20 body=151 status=ok
// SIG undefined FUN_14393be20(void)

void FUN_14393be20(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0xc) = local_res8[0];
  return;
}



// FUNCTION 14393bec0 FUN_14393bec0 body=8 status=ok
// SIG undefined FUN_14393bec0(void)

char * FUN_14393bec0(void)

{
  return "rational";
}



// FUNCTION 14393bed0 FUN_14393bed0 body=137 status=ok
// SIG undefined FUN_14393bed0(void)

void FUN_14393bed0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  return;
}



// FUNCTION 14393bf60 FUN_14393bf60 body=161 status=ok
// SIG undefined FUN_14393bf60(void)

longlong * FUN_14393bf60(longlong param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 8);
  uVar4 = (ulonglong)param_3;
  uVar3 = (ulonglong)(int)param_3;
  if (*(ulonglong *)(param_1 + 0x18) < uVar3) {
    plVar2 = (longlong *)FUN_143928450(plVar1,uVar3 - *(ulonglong *)(param_1 + 0x18),0);
  }
  else {
    *(ulonglong *)(param_1 + 0x18) = uVar3;
    if (*(ulonglong *)(param_1 + 0x20) < 0x10) {
      *(undefined1 *)((longlong)plVar1 + uVar3) = 0;
      plVar2 = plVar1;
    }
    else {
      plVar2 = (longlong *)*plVar1;
      *(undefined1 *)((longlong)plVar2 + uVar3) = 0;
    }
  }
  if (0 < (int)param_3) {
    lVar5 = 0;
    do {
      plVar2 = plVar1;
      if (0xf < *(ulonglong *)(param_1 + 0x20)) {
        plVar2 = (longlong *)*plVar1;
      }
      plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,lVar5 + (longlong)plVar2,1);
      lVar5 = lVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return plVar2;
}



// FUNCTION 14393c010 name body=8 status=ok
// SIG undefined name(void)

char * pqxx::string_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
       name(void)

{
  return "string";
}



// FUNCTION 14393c020 FUN_14393c020 body=110 status=ok
// SIG undefined FUN_14393c020(void)

void FUN_14393c020(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  iVar1 = *(int *)(param_1 + 0x18);
  lVar3 = 0;
  if (0 < (longlong)iVar1) {
    do {
      puVar2 = (undefined8 *)(param_1 + 8);
      if (0xf < *(ulonglong *)(param_1 + 0x20)) {
        puVar2 = *(undefined8 **)(param_1 + 8);
      }
      local_res8[0] = *(undefined1 *)((longlong)puVar2 + lVar3);
      (**(code **)(*param_2 + 8))(param_2,local_res8,1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  return;
}



// FUNCTION 14393c090 FUN_14393c090 body=180 status=ok
// SIG undefined FUN_14393c090(void)

undefined8 * FUN_14393c090(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    if (param_3 != (undefined8 *)0x0) {
      param_3[3] = 0xf;
      param_3[2] = 0;
      *(undefined1 *)param_3 = 0;
      if ((ulonglong)param_1[3] < 0x10) {
        if (param_1[2] + 1 != 0) {
          memmove(param_3,param_1,param_1[2] + 1);
        }
      }
      else {
        *param_3 = *param_1;
        *param_1 = 0;
      }
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_1[3] = 0xf;
      param_1[2] = 0;
      *(undefined1 *)param_1 = 0;
    }
    param_3 = param_3 + 4;
  }
  return param_3;
}



// FUNCTION 14393c150 FUN_14393c150 body=183 status=ok
// SIG undefined FUN_14393c150(void)

void FUN_14393c150(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  lVar3 = std::allocator<CefRect>::allocate();
  local_res8 = SUB81(param_1,0);
  FUN_14393c090(*param_1,param_1[1],lVar3,param_1,0,local_res8,uVar4);
  lVar1 = param_1[1];
  lVar2 = *param_1;
  if (lVar2 != 0) {
    FUN_143928a40(lVar2,lVar1,param_1,(ulonglong)param_1 & 0xff);
    std::allocator<CefRect>::deallocate(param_1,*param_1,param_1[2] - *param_1 >> 5);
  }
  param_1[2] = param_2 * 0x20 + lVar3;
  param_1[1] = (lVar1 - lVar2 & 0xffffffffffffffe0U) + lVar3;
  *param_1 = lVar3;
  return;
}



// FUNCTION 14393c210 FUN_14393c210 body=129 status=ok
// SIG undefined FUN_14393c210(void)

void FUN_14393c210(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 <= (ulonglong)(param_1[2] - param_1[1] >> 5)) {
    return;
  }
  lVar2 = param_1[1] - *param_1 >> 5;
  if (0x7ffffffffffffffU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  param_2 = lVar2 + param_2;
  uVar3 = param_1[2] - *param_1 >> 5;
  uVar1 = (uVar3 >> 1) + uVar3;
  if (0x7ffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar1 = 0;
  }
  if (uVar1 < param_2) {
    uVar1 = param_2;
  }
  FUN_14393c150(param_1,uVar1);
  return;
}



// FUNCTION 14393c2a0 push_back body=217 status=ok
// SIG undefined push_back(void)

void std::
     vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
     ::push_back(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  
  uVar1 = param_1[1];
  if ((param_2 < uVar1) && (uVar2 = *param_1, uVar2 <= param_2)) {
    if (uVar1 == param_1[2]) {
      FUN_14393c210(param_1,1,param_3,param_4,0xfffffffffffffffe);
    }
    uVar1 = *param_1;
    puVar3 = (undefined1 *)param_1[1];
    if (puVar3 != (undefined1 *)0x0) {
      *(undefined8 *)(puVar3 + 0x18) = 0xf;
      *(undefined8 *)(puVar3 + 0x10) = 0;
      *puVar3 = 0;
      basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (puVar3,(param_2 - uVar2 & 0xffffffffffffffe0) + uVar1,0,0xffffffffffffffff);
    }
  }
  else {
    if (uVar1 == param_1[2]) {
      FUN_14393c210(param_1,1,param_3,param_4,0xfffffffffffffffe);
    }
    puVar3 = (undefined1 *)param_1[1];
    if (puVar3 != (undefined1 *)0x0) {
      *(undefined8 *)(puVar3 + 0x18) = 0xf;
      *(undefined8 *)(puVar3 + 0x10) = 0;
      *puVar3 = 0;
      basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (puVar3,param_2,0,0xffffffffffffffff);
    }
  }
  param_1[1] = param_1[1] + 0x20;
  return;
}



// FUNCTION 14393c380 FUN_14393c380 body=523 status=ok
// SIG undefined FUN_14393c380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014393c558) */

void FUN_14393c380(longlong param_1,longlong *param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  int local_68 [2];
  undefined8 local_60;
  byte local_58;
  undefined7 uStack_57;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  if (0 < param_3) {
    local_60 = 0xfffffffffffffffe;
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
    iVar5 = 0;
    do {
      (**(code **)(*param_2 + 0x10))(param_2,local_68,4);
      iVar2 = local_68[0];
      local_40 = 0xf;
      local_48 = 0;
      local_58 = 0;
      uVar4 = (ulonglong)local_68[0];
      if (local_68[0] == 0) {
        local_58 = 0;
        local_48 = uVar4;
LAB_14393c4b5:
        pbVar3 = (byte *)CONCAT71(uStack_57,local_58);
        if (local_40 < 0x10) goto LAB_14393c4c0;
      }
      else {
        if (uVar4 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("string too long");
        }
        if (local_68[0] != 0) {
          if (uVar4 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("string too long");
          }
          if (uVar4 < 0x10) {
            if (local_68[0] == 0) {
              local_58 = 0;
            }
          }
          else {
            FUN_143263050(&local_58,uVar4,0);
          }
          if (uVar4 == 1) {
            pbVar3 = &local_58;
            if (0xf < local_40) {
              pbVar3 = (byte *)CONCAT71(uStack_57,local_58);
            }
            pbVar3[local_48] = 0;
          }
          else {
            pbVar3 = &local_58;
            if (0xf < local_40) {
              pbVar3 = (byte *)CONCAT71(uStack_57,local_58);
            }
            _guard_xfg_dispatch_icall_nop(pbVar3 + local_48,0,uVar4);
          }
          pbVar3 = &local_58;
          if (0xf < local_40) {
            pbVar3 = (byte *)CONCAT71(uStack_57,local_58);
          }
          local_48 = uVar4;
          pbVar3[uVar4] = 0;
          goto LAB_14393c4b5;
        }
LAB_14393c4c0:
        pbVar3 = &local_58;
      }
      (**(code **)(*param_2 + 0x10))(param_2,pbVar3,iVar2);
      iVar5 = iVar5 + 4 + iVar2;
      std::
      vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
      ::push_back(param_1 + 8,&local_58);
      if (0xf < local_40) {
        uVar1 = CONCAT71(uStack_57,local_58);
        uVar4 = uVar1;
        if (0xfff < local_40 + 1) {
          if ((local_58 & 0x1f) != 0) {
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
    } while (iVar5 < param_3);
  }
  return;
}



// FUNCTION 14393c5a0 FUN_14393c5a0 body=8 status=ok
// SIG undefined FUN_14393c5a0(void)

char * FUN_14393c5a0(void)

{
  return "stringvector";
}



// FUNCTION 14393c5b0 FUN_14393c5b0 body=166 status=ok
// SIG undefined FUN_14393c5b0(void)

void FUN_14393c5b0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  iVar2 = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 5);
  lVar5 = (longlong)iVar2;
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      uVar1 = *(undefined4 *)(lVar4 + 0x10 + *(longlong *)(param_1 + 8));
      local_res9 = (undefined1)((uint)uVar1 >> 8);
      local_resa = (undefined1)((uint)uVar1 >> 0x10);
      local_resb = (undefined1)((uint)uVar1 >> 0x18);
      local_res8 = (undefined1)uVar1;
      (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 8) + lVar4);
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      (**(code **)(*param_2 + 8))(param_2,puVar3,uVar1);
      lVar4 = lVar4 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 14393c660 FUN_14393c660 body=190 status=ok
// SIG undefined FUN_14393c660(void)

void FUN_14393c660(longlong param_1,longlong *param_2)

{
  byte local_res8 [8];
  undefined4 local_res10 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res10,4);
  *(undefined4 *)(param_1 + 8) = local_res10[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res10,4);
  *(undefined4 *)(param_1 + 0xc) = local_res10[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,1);
  *(uint *)(param_1 + 0x14) = (uint)(local_res8[0] >> 4);
  *(uint *)(param_1 + 0x10) = local_res8[0] & 0xf;
  return;
}



// FUNCTION 14393c720 FUN_14393c720 body=8 status=ok
// SIG undefined FUN_14393c720(void)

char * FUN_14393c720(void)

{
  return "tiledesc";
}



// FUNCTION 14393c730 FUN_14393c730 body=171 status=ok
// SIG undefined FUN_14393c730(void)

void FUN_14393c730(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  byte local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  local_res8 = (byte)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  local_res8 = (byte)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  local_res8 = *(char *)(param_1 + 0x14) << 4 | *(byte *)(param_1 + 0x10);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,1);
  return;
}



// FUNCTION 14393c7e0 FUN_14393c7e0 body=77 status=ok
// SIG undefined FUN_14393c7e0(void)

void FUN_14393c7e0(uint *param_1,uint param_2,int param_3)

{
  if (param_3 == 1) {
    *param_1 = param_2 & 0x3f7f7fbf;
    if ((param_2 >> 0xf & 1) != 0) {
      *param_1 = param_2 & 0x3f7f7fbf | 0x800000;
    }
    if ((param_2 >> 0x17 & 1) != 0) {
      *param_1 = *param_1 | 0x80000000;
    }
    if ((param_2 >> 0x1e & 1) != 0) {
      *param_1 = *param_1 | 0x40000000;
    }
    if ((int)param_2 < 0) {
      *param_1 = *param_1 | 0x8000;
      return;
    }
  }
  else {
    if (param_3 == 2) {
      param_2 = param_2 & 0xffffff3f;
    }
    *param_1 = param_2;
  }
  return;
}



// FUNCTION 14393c830 FUN_14393c830 body=4 status=ok
// SIG undefined FUN_14393c830(void)

void FUN_14393c830(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



// FUNCTION 14393c840 FUN_14393c840 body=52 status=ok
// SIG undefined FUN_14393c840(void)

uint FUN_14393c840(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 1) {
    uVar1 = *param_1;
    return uVar1 >> 8 & 0x808000 | (uVar1 & 0xffff8000) << 0x10 | uVar1 & 0x7f7f7fbf;
  }
  uVar1 = *param_1;
  if (param_2 == 2) {
    uVar1 = uVar1 & 0xffffff3f;
  }
  return uVar1;
}



// FUNCTION 14393c880 FUN_14393c880 body=157 status=ok
// SIG undefined FUN_14393c880(void)

void FUN_14393c880(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  FUN_14393c7e0(param_1 + 8,local_res8[0],0);
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  FUN_14393c830(param_1 + 8,local_res8[0]);
  return;
}



// FUNCTION 14393c920 FUN_14393c920 body=8 status=ok
// SIG undefined FUN_14393c920(void)

char * FUN_14393c920(void)

{
  return "timecode";
}



// FUNCTION 14393c930 FUN_14393c930 body=150 status=ok
// SIG undefined FUN_14393c930(void)

void FUN_14393c930(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  uVar1 = FUN_14393c840(param_1 + 8,0);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(param_1 + 8);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  return;
}



// FUNCTION 14393c9d0 FUN_14393c9d0 body=151 status=ok
// SIG undefined FUN_14393c9d0(void)

void FUN_14393c9d0(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0xc) = local_res8[0];
  return;
}



// FUNCTION 14393ca70 FUN_14393ca70 body=175 status=ok
// SIG undefined FUN_14393ca70(void)

void FUN_14393ca70(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0xc) = local_res8[0];
  return;
}



// FUNCTION 14393cb20 FUN_14393cb20 body=50 status=ok
// SIG undefined FUN_14393cb20(void)

void FUN_14393cb20(longlong param_1,undefined8 param_2)

{
  FUN_143929700(param_2,param_1 + 8);
  FUN_143929700(param_2,param_1 + 0x10);
  return;
}



// FUNCTION 14393cb60 FUN_14393cb60 body=209 status=ok
// SIG undefined FUN_14393cb60(void)

void FUN_14393cb60(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0xc) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x10) = local_res8[0];
  return;
}



// FUNCTION 14393cc40 FUN_14393cc40 body=245 status=ok
// SIG undefined FUN_14393cc40(void)

void FUN_14393cc40(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  lVar1 = *param_2;
  *(undefined4 *)(param_1 + 0xc) = local_res8[0];
  (**(code **)(lVar1 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x10) = local_res8[0];
  return;
}



// FUNCTION 14393cd40 FUN_14393cd40 body=62 status=ok
// SIG undefined FUN_14393cd40(void)

void FUN_14393cd40(longlong param_1,undefined8 param_2)

{
  FUN_143929700(param_2,param_1 + 8);
  FUN_143929700(param_2,param_1 + 0x10);
  FUN_143929700(param_2,param_1 + 0x18);
  return;
}



// FUNCTION 14393cd80 FUN_14393cd80 body=8 status=ok
// SIG undefined FUN_14393cd80(void)

undefined * FUN_14393cd80(void)

{
  return &DAT_145c65574;
}



// FUNCTION 14393cd90 FUN_14393cd90 body=8 status=ok
// SIG undefined FUN_14393cd90(void)

undefined * FUN_14393cd90(void)

{
  return &DAT_145c65578;
}



// FUNCTION 14393cda0 FUN_14393cda0 body=8 status=ok
// SIG undefined FUN_14393cda0(void)

undefined * FUN_14393cda0(void)

{
  return &DAT_145c6557c;
}



// FUNCTION 14393cdb0 FUN_14393cdb0 body=8 status=ok
// SIG undefined FUN_14393cdb0(void)

undefined * FUN_14393cdb0(void)

{
  return &DAT_145c65580;
}



// FUNCTION 14393cdc0 FUN_14393cdc0 body=8 status=ok
// SIG undefined FUN_14393cdc0(void)

undefined * FUN_14393cdc0(void)

{
  return &DAT_145c65584;
}



// FUNCTION 14393cdd0 FUN_14393cdd0 body=8 status=ok
// SIG undefined FUN_14393cdd0(void)

undefined * FUN_14393cdd0(void)

{
  return &DAT_145c65588;
}



// FUNCTION 14393cde0 FUN_14393cde0 body=137 status=ok
// SIG undefined FUN_14393cde0(void)

void FUN_14393cde0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  return;
}



// FUNCTION 14393ce70 FUN_14393ce70 body=161 status=ok
// SIG undefined FUN_14393ce70(void)

void FUN_14393ce70(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 8);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0xc);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  return;
}



// FUNCTION 14393cf20 FUN_14393cf20 body=52 status=ok
// SIG undefined FUN_14393cf20(void)

void FUN_14393cf20(longlong param_1,undefined8 param_2)

{
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 8));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 14393cf60 FUN_14393cf60 body=189 status=ok
// SIG undefined FUN_14393cf60(void)

void FUN_14393cf60(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  return;
}



// FUNCTION 14393d020 FUN_14393d020 body=225 status=ok
// SIG undefined FUN_14393d020(void)

void FUN_14393d020(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 8);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0xc);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x10);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  return;
}



// FUNCTION 14393d110 FUN_14393d110 body=65 status=ok
// SIG undefined FUN_14393d110(void)

void FUN_14393d110(longlong param_1,undefined8 param_2)

{
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 8));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x10));
  FUN_1439297a0(param_2,*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 14393d160 FUN_14393d160 body=81 status=ok
// SIG undefined FUN_14393d160(void)

void FUN_14393d160(longlong *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_res10 [6];
  
  iVar2 = 4;
  puVar3 = local_res10;
  do {
    puVar1 = (undefined1 *)*param_1;
    *(undefined1 *)puVar3 = *puVar1;
    *param_1 = (longlong)(puVar1 + 1);
    iVar2 = iVar2 + -1;
    puVar3 = (undefined4 *)((longlong)puVar3 + 1);
  } while (iVar2 != 0);
  *param_2 = local_res10[0];
  return;
}



// FUNCTION 14393d1c0 FUN_14393d1c0 body=82 status=ok
// SIG undefined FUN_14393d1c0(void)

void FUN_14393d1c0(longlong *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_res10 [6];
  
  iVar3 = 4;
  puVar2 = local_res10;
  do {
    puVar1 = (undefined1 *)*param_1;
    *(undefined1 *)puVar2 = *puVar1;
    *param_1 = (longlong)(puVar1 + 1);
    iVar3 = iVar3 + -1;
    puVar2 = (undefined4 *)((longlong)puVar2 + 1);
  } while (iVar3 != 0);
  *param_2 = local_res10[0];
  return;
}



// FUNCTION 14393d220 FUN_14393d220 body=172 status=ok
// SIG undefined FUN_14393d220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14393d220(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (0x3ff < (int)param_2) {
    lVar1 = *param_1;
    uVar3 = (ulonglong)(param_2 >> 10);
    param_2 = param_2 + (param_2 >> 10) * -0x400;
    do {
      iVar2 = 0x400;
      do {
        lVar1 = lVar1 + 1;
        *param_1 = lVar1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (0 < (int)param_2) {
    for (; param_2 != 0; param_2 = param_2 - 1) {
      *param_1 = *param_1 + 1;
    }
  }
  return;
}



// FUNCTION 14393d2d0 FUN_14393d2d0 body=439 status=ok
// SIG undefined FUN_14393d2d0(void)

ulonglong FUN_14393d2d0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  longlong *local_res18;
  undefined1 local_res20 [8];
  
  piVar8 = (int *)UEngine::SeamlessTravelHandlerForWorld();
  uVar9 = UEngine::SeamlessTravelHandlerForWorld(param_1);
  FUN_1439328a0(param_2,(longlong)((piVar8[3] - piVar8[1]) + 1));
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::begin(uVar9,&local_res18);
  plVar10 = (longlong *)FKey::GetFName(uVar9,local_res20);
  uVar13 = 0;
  if (local_res18 != (longlong *)*plVar10) {
    do {
      plVar10 = local_res18;
      iVar7 = FUN_14393e510(*(undefined4 *)((longlong)local_res18 + 0x11c));
      iVar2 = piVar8[2];
      iVar3 = *piVar8;
      iVar15 = piVar8[1];
      lVar5 = plVar10[0x24];
      uVar14 = uVar13;
      if (iVar15 <= piVar8[3]) {
        do {
          iVar4 = *(int *)((longlong)local_res18 + 0x124);
          if (iVar15 < 0) {
            if (iVar4 < 0) {
              iVar16 = (-1 - iVar4) - iVar15;
            }
            else {
              iVar16 = (iVar4 - iVar15) + -1;
            }
            iVar16 = -(iVar16 / iVar4);
          }
          else {
            iVar16 = iVar15 / iVar4;
          }
          if (iVar15 == iVar16 * iVar4) {
            *(longlong *)(*param_2 + uVar14) =
                 *(longlong *)(*param_2 + uVar14) +
                 (longlong)((iVar7 * ((iVar2 - iVar3) + 1)) / (int)lVar5);
          }
          iVar15 = iVar15 + 1;
          uVar14 = uVar14 + 8;
        } while (iVar15 <= piVar8[3]);
      }
      if (*(char *)((longlong)local_res18 + 0x19) == '\0') {
        plVar10 = (longlong *)local_res18[2];
        if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar10 + 0x19);
          local_res18 = plVar10;
          plVar10 = (longlong *)*plVar10;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar10 + 0x19);
            local_res18 = plVar10;
            plVar10 = (longlong *)*plVar10;
          }
        }
        else {
          cVar1 = *(char *)(local_res18[1] + 0x19);
          plVar6 = (longlong *)local_res18[1];
          plVar10 = local_res18;
          while ((local_res18 = plVar6, cVar1 == '\0' && (plVar10 == (longlong *)local_res18[2]))) {
            cVar1 = *(char *)(local_res18[1] + 0x19);
            plVar6 = (longlong *)local_res18[1];
            plVar10 = local_res18;
          }
        }
      }
      puVar11 = (undefined8 *)FKey::GetFName(uVar9,local_res20);
    } while (local_res18 != (longlong *)*puVar11);
  }
  if (piVar8[1] <= piVar8[3]) {
    puVar12 = (ulonglong *)*param_2;
    uVar14 = (ulonglong)((piVar8[3] - piVar8[1]) + 1);
    do {
      if (uVar13 < *puVar12) {
        uVar13 = *puVar12;
      }
      puVar12 = puVar12 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return uVar13;
}



// FUNCTION 14393d490 FUN_14393d490 body=443 status=ok
// SIG undefined FUN_14393d490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14393d490(longlong *param_1,longlong *param_2,int param_3,ulonglong param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (param_3 == 0) {
    iVar5 = 0;
    if (param_4 != 0) {
      do {
        puVar3 = local_88;
        iVar4 = 4;
        uVar2 = *(undefined4 *)*param_2;
        local_88[1] = (char)((uint)uVar2 >> 8);
        local_88[0] = (char)uVar2;
        local_88[3] = (char)((uint)uVar2 >> 0x18);
        local_88[2] = (char)((uint)uVar2 >> 0x10);
        do {
          uVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          *(undefined1 *)*param_1 = uVar1;
          *param_1 = *param_1 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        *param_2 = *param_2 + 4;
        iVar5 = iVar5 + 1;
      } while ((ulonglong)(longlong)iVar5 < param_4);
    }
  }
  else if (param_3 == 1) {
    iVar5 = 0;
    if (param_4 != 0) {
      do {
        puVar3 = local_88;
        iVar4 = 2;
        local_88[0] = (char)*(undefined2 *)*param_2;
        local_88[1] = (char)((ushort)*(undefined2 *)*param_2 >> 8);
        do {
          uVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          *(undefined1 *)*param_1 = uVar1;
          *param_1 = *param_1 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        *param_2 = *param_2 + 2;
        iVar5 = iVar5 + 1;
      } while ((ulonglong)(longlong)iVar5 < param_4);
    }
  }
  else {
    if (param_3 != 2) {
      FUN_143e179e0(local_78,"Unknown pixel data type.");
      local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
    }
    iVar5 = 0;
    if (param_4 != 0) {
      do {
        puVar3 = local_88;
        iVar4 = 4;
        local_84 = *(undefined4 *)*param_2;
        local_88[1] = (char)((uint)local_84 >> 8);
        local_88[0] = (char)local_84;
        local_88[3] = (char)((uint)local_84 >> 0x18);
        local_88[2] = (char)((uint)local_84 >> 0x10);
        do {
          uVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          *(undefined1 *)*param_1 = uVar1;
          *param_1 = *param_1 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        *param_2 = *param_2 + 4;
        iVar5 = iVar5 + 1;
      } while ((ulonglong)(longlong)iVar5 < param_4);
    }
  }
  return;
}



// FUNCTION 14393d650 FUN_14393d650 body=696 status=ok
// SIG undefined FUN_14393d650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14393d650(longlong *param_1,ulonglong *param_2,ulonglong param_3,longlong param_4,
                  int param_5,int param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (param_5 == 1) {
    if (param_6 == 0) {
      uVar3 = *param_2;
      while (uVar3 <= param_3) {
        puVar4 = local_88;
        iVar5 = 4;
        uVar2 = *(undefined4 *)*param_2;
        local_88[1] = (char)((uint)uVar2 >> 8);
        local_88[0] = (char)uVar2;
        local_88[3] = (char)((uint)uVar2 >> 0x18);
        local_88[2] = (char)((uint)uVar2 >> 0x10);
        do {
          uVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          *(undefined1 *)*param_1 = uVar1;
          *param_1 = *param_1 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        *param_2 = *param_2 + param_4;
        uVar3 = *param_2;
      }
    }
    else if (param_6 == 1) {
      uVar3 = *param_2;
      while (uVar3 <= param_3) {
        puVar4 = local_88;
        iVar5 = 2;
        local_88[0] = (char)*(undefined2 *)*param_2;
        local_88[1] = (char)((ushort)*(undefined2 *)*param_2 >> 8);
        do {
          uVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          *(undefined1 *)*param_1 = uVar1;
          *param_1 = *param_1 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        *param_2 = *param_2 + param_4;
        uVar3 = *param_2;
      }
    }
    else {
      if (param_6 != 2) {
        FUN_143e179e0(local_78,"Unknown pixel data type.");
        local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
        _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
      }
      uVar3 = *param_2;
      while (uVar3 <= param_3) {
        puVar4 = local_88;
        iVar5 = 4;
        local_84 = *(undefined4 *)*param_2;
        local_88[1] = (char)((uint)local_84 >> 8);
        local_88[0] = (char)local_84;
        local_88[3] = (char)((uint)local_84 >> 0x18);
        local_88[2] = (char)((uint)local_84 >> 0x10);
        do {
          uVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          *(undefined1 *)*param_1 = uVar1;
          *param_1 = *param_1 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        *param_2 = *param_2 + param_4;
        uVar3 = *param_2;
      }
    }
  }
  else if (param_6 == 0) {
    uVar3 = *param_2;
    while (uVar3 <= param_3) {
      *(undefined1 *)*param_1 = *(undefined1 *)*param_2;
      *param_1 = *param_1 + 1;
      *(undefined1 *)*param_1 = *(undefined1 *)(*param_2 + 1);
      *param_1 = *param_1 + 1;
      *(undefined1 *)*param_1 = *(undefined1 *)(*param_2 + 2);
      *param_1 = *param_1 + 1;
      *(undefined1 *)*param_1 = *(undefined1 *)(*param_2 + 3);
      *param_1 = *param_1 + 1;
      *param_2 = *param_2 + param_4;
      uVar3 = *param_2;
    }
  }
  else if (param_6 == 1) {
    uVar3 = *param_2;
    while (uVar3 <= param_3) {
      *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
      *param_1 = *param_1 + 2;
      *param_2 = *param_2 + param_4;
      uVar3 = *param_2;
    }
  }
  else {
    if (param_6 != 2) {
      FUN_143e179e0(local_78,"Unknown pixel data type.");
      local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
    }
    uVar3 = *param_2;
    while (uVar3 <= param_3) {
      *(undefined1 *)*param_1 = *(undefined1 *)*param_2;
      *param_1 = *param_1 + 1;
      *(undefined1 *)*param_1 = *(undefined1 *)(*param_2 + 1);
      *param_1 = *param_1 + 1;
      *(undefined1 *)*param_1 = *(undefined1 *)(*param_2 + 2);
      *param_1 = *param_1 + 1;
      *(undefined1 *)*param_1 = *(undefined1 *)(*param_2 + 3);
      *param_1 = *param_1 + 1;
      *param_2 = *param_2 + param_4;
      uVar3 = *param_2;
    }
  }
  return;
}



// FUNCTION 14393d910 FUN_14393d910 body=1969 status=ok
// SIG undefined FUN_14393d910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14393d910(longlong *param_1,float *param_2,float *param_3,longlong param_4,char param_5,
                  double param_6,int param_7,int param_8,int param_9)

{
  undefined1 *puVar1;
  float fVar2;
  short *psVar3;
  short sVar4;
  uint *puVar5;
  float *pfVar6;
  int iVar7;
  undefined1 auStack_c8 [32];
  float local_a8;
  uint local_a4;
  float local_a0;
  undefined **local_98 [12];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (param_5 == '\0') {
    if (param_7 == 1) {
      if (param_8 == 0) {
        if (param_9 == 0) {
          for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
            FUN_14393d160(param_1,param_2);
          }
        }
        else if (param_9 == 1) {
          for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
            iVar7 = 2;
            puVar5 = &local_a4;
            do {
              puVar1 = (undefined1 *)*param_1;
              *(undefined1 *)puVar5 = *puVar1;
              *param_1 = (longlong)(puVar1 + 1);
              iVar7 = iVar7 + -1;
              puVar5 = (uint *)((longlong)puVar5 + 1);
            } while (iVar7 != 0);
            fVar2 = (float)FUN_1439478e0((ushort)local_a4);
            *param_2 = fVar2;
          }
        }
        else if (param_9 == 2) {
          for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
            iVar7 = 4;
            pfVar6 = &local_a8;
            do {
              puVar1 = (undefined1 *)*param_1;
              *(undefined1 *)pfVar6 = *puVar1;
              *param_1 = (longlong)(puVar1 + 1);
              iVar7 = iVar7 + -1;
              pfVar6 = (float *)((longlong)pfVar6 + 1);
            } while (iVar7 != 0);
            local_a0 = local_a8;
            fVar2 = (float)FUN_143947880(local_a8);
            *param_2 = fVar2;
          }
        }
      }
      else if (param_8 == 1) {
        if (param_9 == 0) {
          for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
            iVar7 = 4;
            pfVar6 = &local_a8;
            do {
              puVar1 = (undefined1 *)*param_1;
              *(undefined1 *)pfVar6 = *puVar1;
              *param_1 = (longlong)(puVar1 + 1);
              iVar7 = iVar7 + -1;
              pfVar6 = (float *)((longlong)pfVar6 + 1);
            } while (iVar7 != 0);
            psVar3 = (short *)FUN_143947930(&local_a4,local_a8);
            *(short *)param_2 = *psVar3;
          }
        }
        else if (param_9 == 1) {
          for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
            iVar7 = 2;
            puVar5 = &local_a4;
            do {
              puVar1 = (undefined1 *)*param_1;
              *(undefined1 *)puVar5 = *puVar1;
              *param_1 = (longlong)(puVar1 + 1);
              iVar7 = iVar7 + -1;
              puVar5 = (uint *)((longlong)puVar5 + 1);
            } while (iVar7 != 0);
            *(ushort *)param_2 = (ushort)local_a4;
          }
        }
        else if (param_9 == 2) {
          for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
            iVar7 = 4;
            pfVar6 = &local_a8;
            do {
              puVar1 = (undefined1 *)*param_1;
              *(undefined1 *)pfVar6 = *puVar1;
              *param_1 = (longlong)(puVar1 + 1);
              iVar7 = iVar7 + -1;
              pfVar6 = (float *)((longlong)pfVar6 + 1);
            } while (iVar7 != 0);
            local_a0 = local_a8;
            psVar3 = (short *)FUN_143947810(&local_a4,local_a8);
            *(short *)param_2 = *psVar3;
          }
        }
      }
      else {
        if (param_8 != 2) {
          FUN_143e179e0(local_98,"Unknown pixel data type.");
          local_98[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
          _guard_xfg_dispatch_icall_nop(local_98,(ThrowInfo *)&DAT_1461db4d8);
        }
        if (param_9 == 0) {
          for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
            iVar7 = 4;
            puVar5 = &local_a4;
            do {
              puVar1 = (undefined1 *)*param_1;
              *(undefined1 *)puVar5 = *puVar1;
              *param_1 = (longlong)(puVar1 + 1);
              iVar7 = iVar7 + -1;
              puVar5 = (uint *)((longlong)puVar5 + 1);
            } while (iVar7 != 0);
            *param_2 = (float)local_a4;
          }
        }
        else if (param_9 == 1) {
          for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
            iVar7 = 2;
            puVar5 = &local_a4;
            do {
              puVar1 = (undefined1 *)*param_1;
              *(undefined1 *)puVar5 = *puVar1;
              *param_1 = (longlong)(puVar1 + 1);
              iVar7 = iVar7 + -1;
              puVar5 = (uint *)((longlong)puVar5 + 1);
            } while (iVar7 != 0);
            *param_2 = *(float *)(&DAT_145dcac70 + (ulonglong)(ushort)local_a4 * 4);
          }
        }
        else if (param_9 == 2) {
          for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
            FUN_14393d1c0(param_1,param_2);
          }
        }
      }
    }
    else if (param_8 == 0) {
      if (param_9 == 0) {
        if (param_2 <= param_3) {
          psVar3 = (short *)((longlong)param_2 + 2);
          do {
            *(undefined1 *)(psVar3 + -1) = *(undefined1 *)*param_1;
            *(undefined1 *)((longlong)psVar3 + -1) = *(undefined1 *)(*param_1 + 1);
            *(undefined1 *)psVar3 = *(undefined1 *)(*param_1 + 2);
            *(undefined1 *)((longlong)psVar3 + 1) = *(undefined1 *)(*param_1 + 3);
            psVar3 = (short *)((longlong)psVar3 + param_4);
            *param_1 = *param_1 + 4;
          } while (psVar3 + -1 <= param_3);
        }
      }
      else if (param_9 == 1) {
        for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
          fVar2 = (float)FUN_1439478e0(*(undefined2 *)*param_1);
          *param_2 = fVar2;
          *param_1 = *param_1 + 2;
        }
      }
      else if (param_9 == 2) {
        for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
          local_a0 = *(float *)*param_1;
          fVar2 = (float)FUN_143947880(local_a0);
          *param_2 = fVar2;
          *param_1 = *param_1 + 4;
        }
      }
    }
    else if (param_8 == 1) {
      if (param_9 == 0) {
        for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
          psVar3 = (short *)FUN_143947930(&local_a4,*(undefined4 *)*param_1);
          *(short *)param_2 = *psVar3;
          *param_1 = *param_1 + 4;
        }
      }
      else if (param_9 == 1) {
        for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
          *(short *)param_2 = *(short *)*param_1;
          *param_1 = *param_1 + 2;
        }
      }
      else if (param_9 == 2) {
        for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
          local_a0 = *(float *)*param_1;
          psVar3 = (short *)FUN_143947810(&local_a4,local_a0);
          *(short *)param_2 = *psVar3;
          *param_1 = *param_1 + 4;
        }
      }
    }
    else {
      if (param_8 != 2) {
        FUN_143e179e0(local_98,"Unknown pixel data type.");
        local_98[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
        _guard_xfg_dispatch_icall_nop(local_98,(ThrowInfo *)&DAT_1461db4d8);
      }
      if (param_9 == 0) {
        for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
          *param_2 = (float)*(uint *)*param_1;
          *param_1 = *param_1 + 4;
        }
      }
      else if (param_9 == 1) {
        for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
          *param_2 = *(float *)(&DAT_145dcac70 + (ulonglong)*(ushort *)*param_1 * 4);
          *param_1 = *param_1 + 2;
        }
      }
      else if ((param_9 == 2) && (param_2 <= param_3)) {
        psVar3 = (short *)((longlong)param_2 + 2);
        do {
          *(undefined1 *)(psVar3 + -1) = *(undefined1 *)*param_1;
          *(undefined1 *)((longlong)psVar3 + -1) = *(undefined1 *)(*param_1 + 1);
          *(undefined1 *)psVar3 = *(undefined1 *)(*param_1 + 2);
          *(undefined1 *)((longlong)psVar3 + 1) = *(undefined1 *)(*param_1 + 3);
          psVar3 = (short *)((longlong)psVar3 + param_4);
          *param_1 = *param_1 + 4;
        } while (psVar3 + -1 <= param_3);
      }
    }
  }
  else if (param_8 == 0) {
    for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
      *param_2 = (float)(longlong)param_6;
    }
  }
  else if (param_8 == 1) {
    local_a8 = (float)param_6;
    if (local_a8 == 0.0) {
      sVar4 = (short)((uint)local_a8 >> 0x10);
    }
    else if (*(short *)(&DAT_145e0ac70 + (ulonglong)((uint)local_a8 >> 0x17) * 2) == 0) {
      sVar4 = FUN_143e17490(local_a8);
    }
    else {
      sVar4 = (short)((int)(((uint)local_a8 & 0x7fffff) + 0xfff +
                           ((int)((uint)local_a8 & 0x7fffff) >> 0xd & 1U)) >> 0xd) +
              *(short *)(&DAT_145e0ac70 + (ulonglong)((uint)local_a8 >> 0x17) * 2);
    }
    for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
      *(short *)param_2 = sVar4;
    }
  }
  else {
    if (param_8 != 2) {
      FUN_143e179e0(local_98,"Unknown pixel data type.");
      local_98[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_98,(ThrowInfo *)&DAT_1461db4d8);
    }
    for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
      *param_2 = (float)param_6;
    }
  }
  return;
}



// FUNCTION 14393e0d0 FUN_14393e0d0 body=18 status=ok
// SIG undefined FUN_14393e0d0(void)

undefined8 FUN_14393e0d0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014393e0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x10))();
    return uVar1;
  }
  return 1;
}



// FUNCTION 14393e0f0 FUN_14393e0f0 body=724 status=ok
// SIG undefined FUN_14393e0f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14393e0f0(longlong *param_1,int param_2,int param_3,ulonglong param_4)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (param_2 == 1) {
    if (param_3 == 0) {
      iVar3 = 0;
      if (param_4 != 0) {
        local_88 = 0;
        do {
          puVar2 = &local_88;
          iVar4 = 4;
          do {
            uVar1 = *(undefined1 *)puVar2;
            puVar2 = (undefined4 *)((longlong)puVar2 + 1);
            *(undefined1 *)*param_1 = uVar1;
            *param_1 = *param_1 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          iVar3 = iVar3 + 1;
        } while ((ulonglong)(longlong)iVar3 < param_4);
      }
    }
    else if (param_3 == 1) {
      iVar3 = 0;
      if (param_4 != 0) {
        do {
          puVar2 = &local_88;
          local_88._0_2_ = 0;
          local_88._2_2_ = 0;
          iVar4 = 2;
          do {
            uVar1 = *(undefined1 *)puVar2;
            puVar2 = (undefined4 *)((longlong)puVar2 + 1);
            *(undefined1 *)*param_1 = uVar1;
            *param_1 = *param_1 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          iVar3 = iVar3 + 1;
        } while ((ulonglong)(longlong)iVar3 < param_4);
      }
    }
    else {
      if (param_3 != 2) {
        FUN_143e179e0(local_78,"Unknown pixel data type.");
        local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
        _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
      }
      iVar3 = 0;
      if (param_4 != 0) {
        do {
          puVar2 = &local_88;
          iVar4 = 4;
          local_88 = 0;
          do {
            uVar1 = *(undefined1 *)puVar2;
            puVar2 = (undefined4 *)((longlong)puVar2 + 1);
            *(undefined1 *)*param_1 = uVar1;
            *param_1 = *param_1 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          iVar3 = iVar3 + 1;
        } while ((ulonglong)(longlong)iVar3 < param_4);
      }
    }
  }
  else if (param_3 == 0) {
    iVar3 = 0;
    if (param_4 != 0) {
      do {
        iVar3 = iVar3 + 1;
        *(undefined1 *)*param_1 = 0;
        *param_1 = *param_1 + 1;
        *(undefined1 *)*param_1 = 0;
        *param_1 = *param_1 + 1;
        *(undefined1 *)*param_1 = 0;
        *param_1 = *param_1 + 1;
        *(undefined1 *)*param_1 = 0;
        *param_1 = *param_1 + 1;
      } while ((ulonglong)(longlong)iVar3 < param_4);
    }
  }
  else if (param_3 == 1) {
    iVar3 = 0;
    if (param_4 != 0) {
      do {
        iVar3 = iVar3 + 1;
        *(undefined2 *)*param_1 = 0;
        *param_1 = *param_1 + 2;
      } while ((ulonglong)(longlong)iVar3 < param_4);
    }
  }
  else {
    if (param_3 != 2) {
      FUN_143e179e0(local_78,"Unknown pixel data type.");
      local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
    }
    iVar3 = 0;
    if (param_4 != 0) {
      do {
        iVar3 = iVar3 + 1;
        *(undefined1 *)*param_1 = 0;
        *param_1 = *param_1 + 1;
        *(undefined1 *)*param_1 = 0;
        *param_1 = *param_1 + 1;
        *(undefined1 *)*param_1 = 0;
        *param_1 = *param_1 + 1;
        *(undefined1 *)*param_1 = 0;
        *param_1 = *param_1 + 1;
      } while ((ulonglong)(longlong)iVar3 < param_4);
    }
  }
  return;
}



// FUNCTION 14393e3d0 FUN_14393e3d0 body=18 status=ok
// SIG undefined FUN_14393e3d0(void)

undefined8 FUN_14393e3d0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014393e3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 8))();
    return uVar1;
  }
  return 1;
}



// FUNCTION 14393e3f0 FUN_14393e3f0 body=127 status=ok
// SIG undefined FUN_14393e3f0(void)

int FUN_14393e3f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    if (param_1 < 0) {
      iVar1 = (-1 - param_1) - param_2;
    }
    else {
      iVar1 = (param_1 - param_2) + -1;
    }
    iVar1 = -(iVar1 / param_1);
  }
  else {
    iVar1 = param_2 / param_1;
  }
  if (param_3 < 0) {
    if (param_1 < 0) {
      param_3 = (-1 - param_1) - param_3;
    }
    else {
      param_3 = (param_1 - param_3) + -1;
    }
    param_3 = -(param_3 / param_1);
  }
  else {
    param_3 = param_3 / param_1;
  }
  return ((uint)(param_2 <= iVar1 * param_1) - iVar1) + param_3;
}



// FUNCTION 14393e470 FUN_14393e470 body=150 status=ok
// SIG undefined FUN_14393e470(void)

void FUN_14393e470(longlong *param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  FUN_1439328a0(param_3,param_1[1] - *param_1 >> 3);
  uVar6 = 0;
  uVar2 = uVar6;
  uVar3 = uVar6;
  uVar5 = uVar6;
  if (param_1[1] - *param_1 >> 3 != 0) {
    do {
      if ((int)uVar5 % param_2 == 0) {
        uVar3 = uVar6;
      }
      uVar4 = (int)uVar5 + 1;
      *(ulonglong *)(uVar2 + *param_3) = uVar3;
      plVar1 = (longlong *)(uVar2 + *param_1);
      uVar2 = uVar2 + 8;
      uVar3 = uVar3 + *plVar1;
      uVar5 = (ulonglong)uVar4;
    } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  return;
}



// FUNCTION 14393e510 FUN_14393e510 body=145 status=ok
// SIG undefined FUN_14393e510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14393e510(int param_1)

{
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    if (param_1 == 1) {
      return 2;
    }
    if (param_1 != 2) {
      FUN_143e179e0(local_78,"Unknown pixel type.");
      local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
    }
  }
  return 4;
}



// FUNCTION 14393e5b0 FUN_14393e5b0 body=130 status=ok
// SIG undefined FUN_14393e5b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14393e5b0(undefined8 param_1,int param_2,int param_3)

{
  undefined1 auStack_98 [32];
  undefined **local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if (param_2 == 1) {
      param_3 = param_3 * 2;
      goto LAB_14393e5e7;
    }
    if (param_2 != 2) {
      FUN_143e179e0(local_78,"Unknown pixel data type.");
      local_78[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop(local_78,(ThrowInfo *)&DAT_1461db4d8);
    }
  }
  param_3 = param_3 * 4;
LAB_14393e5e7:
  FUN_14393d220(param_1,param_3);
  return;
}



// FUNCTION 14393e640 FUN_14393e640 body=69 status=ok
// SIG undefined FUN_14393e640(void)

undefined8 * FUN_14393e640(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    uVar1 = param_1[1];
    *param_3 = *param_1;
    param_3[1] = uVar1;
    uVar1 = param_1[3];
    param_3[2] = param_1[2];
    param_3[3] = uVar1;
    uVar1 = param_1[5];
    param_3[4] = param_1[4];
    param_3[5] = uVar1;
    param_3[6] = param_1[6];
    param_3 = param_3 + 7;
  }
  return param_3;
}



// FUNCTION 14393e690 FUN_14393e690 body=80 status=ok
// SIG undefined FUN_14393e690(void)

undefined8 * FUN_14393e690(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    if (param_3 != (undefined8 *)0x0) {
      uVar1 = param_1[1];
      *param_3 = *param_1;
      param_3[1] = uVar1;
      uVar1 = param_1[3];
      param_3[2] = param_1[2];
      param_3[3] = uVar1;
      uVar1 = param_1[5];
      param_3[4] = param_1[4];
      param_3[5] = uVar1;
      param_3[6] = param_1[6];
    }
    param_3 = param_3 + 7;
  }
  return param_3;
}



// FUNCTION 14393e6e0 FUN_14393e6e0 body=311 status=ok
// SIG undefined FUN_14393e6e0(void)

undefined8 * FUN_14393e6e0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int local_res10 [6];
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_14394c2d0();
  *param_1 = Imf::ScanLineInputFile::Data::vftable;
  local_res10[0] = 0;
  local_res10[1] = 0;
  FUN_143929ab0(param_1 + 6,0x40,0x40,0x3f800000,local_res10,0x3f800000,0,3,uVar2);
  param_1[9] = 0;
  param_1[10] = 0;
  uVar2 = FUN_14186c270(param_1 + 9);
  param_1[9] = uVar2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = param_2;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  local_res10[2] = param_3 * 2;
  local_res10[0] = 1;
  piVar1 = local_res10 + 2;
  if (param_3 * 2 < 2) {
    piVar1 = local_res10;
  }
  FUN_1439328a0(param_1 + 0x1c,(longlong)*piVar1);
  return param_1;
}



// FUNCTION 14393e820 FUN_14393e820 body=685 status=ok
// SIG undefined FUN_14393e820(void)

undefined8 *
FUN_14393e820(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  *param_1 = Imf::ScanLineInputFile::vftable;
  lVar5 = operator_new(0x108);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_14393e6e0(lVar5,param_3,param_4);
  }
  param_1[1] = lVar5;
  FUN_143929f70(lVar5 + 0x30,param_2);
  puVar6 = (undefined4 *)UEngine::SeamlessTravelHandlerForWorld(param_1[1] + 0x30);
  *(undefined4 *)(param_1[1] + 0x58) = *puVar6;
  puVar6 = (undefined4 *)UEngine::SeamlessTravelHandlerForWorld(param_1[1] + 0x30);
  *(undefined4 *)(param_1[1] + 0x5c) = *puVar6;
  *(undefined4 *)(param_1[1] + 0x60) = puVar6[2];
  *(undefined4 *)(param_1[1] + 100) = puVar6[1];
  *(undefined4 *)(param_1[1] + 0x68) = puVar6[3];
  lVar5 = FUN_14393d2d0(param_1[1] + 0x30,param_1[1] + 0x90);
  puVar11 = (undefined8 *)0x0;
  for (puVar12 = puVar11; lVar2 = param_1[1],
      puVar12 < (undefined8 *)(*(longlong *)(lVar2 + 0xe8) - *(longlong *)(lVar2 + 0xe0) >> 3);
      puVar12 = (undefined8 *)((longlong)puVar12 + 1)) {
    puVar7 = (undefined8 *)operator_new(0x68);
    puVar10 = puVar11;
    if (puVar7 != (undefined8 *)0x0) {
      puVar8 = (undefined4 *)UEngine::SeamlessTravelHandlerForWorld(param_1[1] + 0x30);
      uVar9 = FUN_143937f20(*puVar8,lVar5,param_1[1] + 0x30);
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined4 *)(puVar7 + 2) = 0;
      puVar7[4] = uVar9;
      uVar4 = FUN_14393e0d0(uVar9);
      *(undefined4 *)(puVar7 + 5) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0x2c) = 0xffffffff;
      *(undefined1 *)(puVar7 + 6) = 0;
      puVar7[10] = 0xf;
      puVar7[9] = 0;
      *(undefined1 *)(puVar7 + 7) = 0;
      FUN_14394c360(puVar7 + 0xb,1);
      puVar10 = puVar7;
    }
    *(undefined8 **)(*(longlong *)(param_1[1] + 0xe0) + (longlong)puVar12 * 8) = puVar10;
  }
  uVar4 = FUN_14393e3d0(*(undefined8 *)(**(longlong **)(lVar2 + 0xe0) + 0x20));
  *(undefined4 *)(param_1[1] + 0xf8) = uVar4;
  *(longlong *)(param_1[1] + 0x100) = *(int *)(param_1[1] + 0xf8) * lVar5;
  cVar3 = (**(code **)(**(longlong **)(param_1[1] + 0xd8) + 8))();
  if (cVar3 == '\0') {
    for (; lVar5 = param_1[1],
        puVar11 < (undefined8 *)(*(longlong *)(lVar5 + 0xe8) - *(longlong *)(lVar5 + 0xe0) >> 3);
        puVar11 = (undefined8 *)((longlong)puVar11 + 1)) {
      uVar9 = operator_new(*(undefined8 *)(lVar5 + 0x100));
      *(undefined8 *)(*(longlong *)(*(longlong *)(param_1[1] + 0xe0) + (longlong)puVar11 * 8) + 8) =
           uVar9;
    }
  }
  *(int *)(param_1[1] + 0x8c) = *(int *)(param_1[1] + 100) + -1;
  lVar5 = param_1[1];
  FUN_14393e470(lVar5 + 0x90,*(undefined4 *)(lVar5 + 0xf8),lVar5 + 0xa8);
  iVar1 = *(int *)(param_1[1] + 0xf8);
  FUN_1439328a0(param_1[1] + 0x70,(longlong)(((puVar6[3] - puVar6[1]) + iVar1) / iVar1));
  lVar5 = param_1[1];
  FUN_14393f920(*(undefined8 *)(lVar5 + 0xd8),*(undefined4 *)(lVar5 + 0x58),lVar5 + 0x70,
                lVar5 + 0x88);
  return param_1;
}



// FUNCTION 14393ead0 FUN_14393ead0 body=81 status=ok
// SIG undefined FUN_14393ead0(void)

void FUN_14393ead0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    std::allocator<SDoorInfo>::deallocate(param_1,lVar1,(param_1[2] - lVar1) / 0x38);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14393eb30 FUN_14393eb30 body=1092 status=ok
// SIG undefined FUN_14393eb30(void)

/* WARNING: Removing unreachable block (ram,0x00014393ec4f) */

void FUN_14393eb30(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  
  *param_1 = Imf::ScanLineInputFile::Data::vftable;
  uVar5 = 0;
  if ((longlong)(param_1[0x1d] - param_1[0x1c]) >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(param_1[0x1c] + uVar5 * 8);
      if (lVar1 != 0) {
        puVar2 = *(undefined8 **)(lVar1 + 0x20);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        FUN_14394c500(lVar1 + 0x58);
        if (0xf < *(ulonglong *)(lVar1 + 0x50)) {
          uVar3 = *(ulonglong *)(lVar1 + 0x38);
          uVar4 = uVar3;
          if (0xfff < *(ulonglong *)(lVar1 + 0x50) + 1) {
            if ((uVar3 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            uVar4 = *(ulonglong *)(uVar3 - 8);
            if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            if (uVar3 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            if (0x27 < uVar3 - uVar4) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(uVar4);
        }
        *(undefined8 *)(lVar1 + 0x50) = 0xf;
        *(undefined8 *)(lVar1 + 0x48) = 0;
        *(undefined1 *)(lVar1 + 0x38) = 0;
        FMemory::operator_delete(lVar1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)((longlong)(param_1[0x1d] - param_1[0x1c]) >> 3));
  }
  uVar5 = param_1[0x1c];
  if (uVar5 != 0) {
    uVar3 = (longlong)(param_1[0x1e] - uVar5) >> 3;
    if (0x1fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar5;
    if (0xfff < uVar3 * 8) {
      if ((uVar5 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar5 - 8);
      if (uVar5 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar5 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar5 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  uVar5 = param_1[0x18];
  if (uVar5 != 0) {
    uVar3 = (longlong)(param_1[0x1a] - uVar5) / 0x38;
    if (0x492492492492492 < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar5;
    if (0xfff < uVar3 * 0x38) {
      if ((uVar5 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar5 - 8);
      if (uVar5 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar5 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar5 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
  }
  uVar5 = param_1[0x15];
  if (uVar5 != 0) {
    uVar3 = (longlong)(param_1[0x17] - uVar5) >> 3;
    if (0x1fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar5;
    if (0xfff < uVar3 * 8) {
      if ((uVar5 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar5 - 8);
      if (uVar5 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar5 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar5 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  uVar5 = param_1[0x12];
  if (uVar5 != 0) {
    uVar3 = (longlong)(param_1[0x14] - uVar5) >> 3;
    if (0x1fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar5;
    if (0xfff < uVar3 * 8) {
      if ((uVar5 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar5 - 8);
      if (uVar5 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar5 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar5 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  uVar5 = param_1[0xe];
  if (uVar5 != 0) {
    uVar3 = (longlong)(param_1[0x10] - uVar5) >> 3;
    if (0x1fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar5;
    if (0xfff < uVar3 * 8) {
      if ((uVar5 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar5 - 8);
      if (uVar5 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar5 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar5 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
  }
  std::
  _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
  ::erase(param_1 + 9,local_res8,*(undefined8 *)param_1[9],(undefined8 *)param_1[9]);
  FMemory::operator_delete(param_1[9]);
  FUN_143929ce0(param_1 + 6);
  FUN_14394c300(param_1);
  return;
}



// FUNCTION 14393efa0 FUN_14393efa0 body=182 status=ok
// SIG undefined FUN_14393efa0(void)

void FUN_14393efa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = Imf::ScanLineInputFile::vftable;
  cVar2 = (**(code **)(**(longlong **)(param_1[1] + 0xd8) + 8))();
  if ((cVar2 == '\0') &&
     (uVar3 = 0, *(longlong *)(param_1[1] + 0xe8) - *(longlong *)(param_1[1] + 0xe0) >> 3 != 0)) {
    do {
      FMemory::operator_delete
                (*(undefined8 *)(*(longlong *)(*(longlong *)(param_1[1] + 0xe0) + uVar3 * 8) + 8));
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulonglong)
                     (*(longlong *)(param_1[1] + 0xe8) - *(longlong *)(param_1[1] + 0xe0) >> 3));
  }
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,uVar4);
  }
  return;
}



// FUNCTION 14393f060 FUN_14393f060 body=403 status=ok
// SIG undefined FUN_14393f060(void)

longlong * FUN_14393f060(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8;
  
  if (param_1 != param_2) {
    lVar6 = *param_2;
    lVar7 = param_2[1];
    if (lVar6 == lVar7) {
      param_1[1] = *param_1;
    }
    else {
      uVar3 = (lVar7 - lVar6) / 0x38;
      lVar1 = *param_1;
      uVar4 = (param_1[1] - lVar1) / 0x38;
      if (uVar4 < uVar3) {
        uVar2 = (param_1[2] - lVar1) / 0x38;
        local_res8 = SUB81(param_1,0);
        if (uVar2 < uVar3) {
          if (lVar1 != 0) {
            std::allocator<SDoorInfo>::deallocate(param_1,lVar1,uVar2);
          }
          cVar5 = FUN_14393f2c0(param_1,(param_2[1] - *param_2) / 0x38);
          if (cVar5 == '\0') {
            return param_1;
          }
          lVar6 = FUN_14393e690(*param_2,param_2[1],*param_1,param_1,local_res8);
          param_1[1] = lVar6;
          return param_1;
        }
        lVar7 = uVar4 * 0x38 + lVar6;
        FUN_14393e640(lVar6,lVar7,lVar1);
        lVar6 = FUN_14393e690(lVar7,param_2[1],param_1[1],param_1,local_res8);
      }
      else {
        FUN_14393e640(lVar6,lVar7,lVar1);
        lVar6 = ((param_2[1] - *param_2) / 0x38) * 0x38 + *param_1;
      }
      param_1[1] = lVar6;
    }
  }
  return param_1;
}



// FUNCTION 14393f200 FUN_14393f200 body=47 status=ok
// SIG undefined FUN_14393f200(void)

undefined8 FUN_14393f200(undefined8 param_1,uint param_2)

{
  FUN_14393eb30();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14393f230 FUN_14393f230 body=86 status=ok
// SIG undefined FUN_14393f230(void)

undefined8 * FUN_14393f230(undefined8 *param_1,uint param_2)

{
  *param_1 = Imf::_anon_04A4D5E4::LineBufferTask::vftable;
  FUN_14394c610(param_1[3] + 0x58);
  FUN_14394b9a0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14393f290 FUN_14393f290 body=47 status=ok
// SIG undefined FUN_14393f290(void)

undefined8 FUN_14393f290(undefined8 param_1,uint param_2)

{
  FUN_14393efa0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 14393f2c0 FUN_14393f2c0 body=98 status=ok
// SIG undefined FUN_14393f2c0(void)

undefined8 FUN_14393f2c0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0x492492492492492 < param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    lVar1 = std::allocator<SDoorInfo>::allocate();
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = param_2 * 0x38 + lVar1;
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14393f330 FUN_14393f330 body=215 status=ok
// SIG undefined FUN_14393f330(void)

void FUN_14393f330(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  lVar3 = std::allocator<SDoorInfo>::allocate();
  local_res8 = SUB81(param_1,0);
  FUN_14393e690(*param_1,param_1[1],lVar3,param_1,0,local_res8,uVar4);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 != 0) {
    std::allocator<SDoorInfo>::deallocate(param_1,lVar1,(param_1[2] - lVar1) / 0x38);
  }
  param_1[2] = param_2 * 0x38 + lVar3;
  param_1[1] = ((lVar2 - lVar1) / 0x38) * 0x38 + lVar3;
  *param_1 = lVar3;
  return;
}



// FUNCTION 14393f410 allocate body=120 status=ok
// SIG undefined allocate(void)

ulonglong std::allocator<SDoorInfo>::allocate(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (0x492492492492492 < param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    param_2 = param_2 * 0x38;
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



// FUNCTION 14393f490 deallocate body=105 status=ok
// SIG undefined deallocate(void)

void std::allocator<SDoorInfo>::deallocate(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (0x492492492492492 < param_3) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar1 = param_2;
  if (0xfff < param_3 * 0x38) {
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



// FUNCTION 14393f500 FUN_14393f500 body=757 status=ok
// SIG undefined FUN_14393f500(void)

void FUN_14393f500(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  longlong local_res10;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (*plVar1 == 0) {
    iVar9 = 0;
    lVar2 = *(longlong *)(param_1 + 0x10);
    plVar6 = plVar1 + 3;
    if (*(int *)(lVar2 + 0x68) < (int)plVar1[3]) {
      plVar6 = (longlong *)(lVar2 + 0x68);
    }
    iVar14 = *(int *)((longlong)plVar1 + 0x14) - *(int *)(lVar2 + 100);
    iVar12 = (int)*plVar6 - *(int *)(lVar2 + 100);
    if (iVar14 <= iVar12) {
      piVar8 = (int *)(*(longlong *)(lVar2 + 0x90) + (longlong)iVar14 * 8);
      uVar5 = (ulonglong)((iVar12 - iVar14) + 1);
      do {
        iVar9 = iVar9 + *piVar8;
        piVar8 = piVar8 + 2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (((longlong *)plVar1[4] == (longlong *)0x0) || (iVar9 <= (int)plVar1[2])) {
      *(undefined4 *)(plVar1 + 5) = 1;
      **(undefined8 **)(param_1 + 0x18) = (*(undefined8 **)(param_1 + 0x18))[1];
    }
    else {
      uVar3 = (**(code **)(*(longlong *)plVar1[4] + 0x10))();
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x28) = uVar3;
      lVar2 = *(longlong *)(param_1 + 0x18);
      uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x20) + 0x28))
                        (*(longlong **)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 8),
                         *(undefined4 *)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 0x14),lVar2);
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x10) = uVar3;
    }
  }
  iVar9 = 1;
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x58) == 0) {
    iVar12 = *(int *)(param_1 + 0x20);
    iVar14 = *(int *)(param_1 + 0x24) + 1;
  }
  else {
    iVar12 = *(int *)(param_1 + 0x24);
    iVar14 = *(int *)(param_1 + 0x20) + -1;
    iVar9 = -1;
  }
  for (; iVar12 != iVar14; iVar12 = iVar12 + iVar9) {
    local_res10 = *(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa8) +
                   (longlong)(iVar12 - *(int *)(*(longlong *)(param_1 + 0x10) + 100)) * 8) +
                  **(longlong **)(param_1 + 0x18);
    uVar5 = 0;
    while( true ) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      if ((ulonglong)((*(longlong *)(lVar2 + 200) - *(longlong *)(lVar2 + 0xc0)) / 0x38) <= uVar5)
      break;
      puVar13 = (undefined4 *)(uVar5 * 0x38 + *(longlong *)(lVar2 + 0xc0));
      iVar4 = puVar13[9];
      if (iVar12 < 0) {
        if (iVar4 < 0) {
          iVar10 = (-1 - iVar4) - iVar12;
        }
        else {
          iVar10 = (iVar4 - iVar12) + -1;
        }
        iVar10 = -(iVar10 / iVar4);
      }
      else {
        iVar10 = iVar12 / iVar4;
      }
      if (iVar12 == iVar10 * iVar4) {
        iVar10 = puVar13[8];
        iVar15 = *(int *)(lVar2 + 0x5c);
        if (iVar15 < 0) {
          if (iVar10 < 0) {
            iVar15 = (-1 - iVar15) - iVar10;
          }
          else {
            iVar15 = (iVar10 - iVar15) + -1;
          }
          iVar15 = -(iVar15 / iVar10);
        }
        else {
          iVar15 = iVar15 / iVar10;
        }
        iVar11 = *(int *)(lVar2 + 0x60);
        if (iVar11 < 0) {
          if (iVar10 < 0) {
            iVar11 = (-1 - iVar11) - iVar10;
          }
          else {
            iVar11 = (iVar10 - iVar11) + -1;
          }
          iVar11 = -(iVar11 / iVar10);
        }
        else {
          iVar11 = iVar11 / iVar10;
        }
        if (*(char *)((longlong)puVar13 + 0x29) == '\0') {
          if (iVar12 < 0) {
            if (iVar4 < 0) {
              iVar10 = (-1 - iVar4) - iVar12;
            }
            else {
              iVar10 = (iVar4 - iVar12) + -1;
            }
            iVar4 = -(iVar10 / iVar4);
          }
          else {
            iVar4 = iVar12 / iVar4;
          }
          lVar7 = *(longlong *)(puVar13 + 6) * (longlong)iVar4 + *(longlong *)(puVar13 + 2);
          lVar2 = *(longlong *)(puVar13 + 4);
          FUN_14393d910(&local_res10,iVar15 * lVar2 + lVar7,iVar11 * lVar2 + lVar7,lVar2,
                        *(undefined1 *)(puVar13 + 10),*(undefined8 *)(puVar13 + 0xc),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x28),*puVar13,puVar13[1]);
        }
        else {
          FUN_14393e5b0(&local_res10,puVar13[1],(longlong)((iVar11 - iVar15) + 1));
        }
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
    }
  }
  return;
}



// FUNCTION 14393f800 FUN_14393f800 body=286 status=ok
// SIG undefined FUN_14393f800(void)

undefined8 * FUN_14393f800(undefined8 param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  int iVar5;
  int local_res20 [2];
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  puVar2 = *(undefined8 **)
            (*(longlong *)(param_2 + 0xe0) +
            ((ulonglong)(longlong)param_3 %
            (ulonglong)(*(longlong *)(param_2 + 0xe8) - *(longlong *)(param_2 + 0xe0) >> 3)) * 8);
  local_res20[0] = param_4;
  FUN_14394c790(puVar2 + 0xb);
  if (*(int *)((longlong)puVar2 + 0x2c) != param_3) {
    iVar5 = *(int *)(param_2 + 0xf8) * param_3 + *(int *)(param_2 + 100);
    *(int *)((longlong)puVar2 + 0x14) = iVar5;
    *(int *)(puVar2 + 3) = *(int *)(param_2 + 0xf8) + -1 + iVar5;
    *(int *)((longlong)puVar2 + 0x2c) = param_3;
    *puVar2 = 0;
    FUN_14393f9e0(param_2,iVar5,puVar2 + 1,puVar2 + 2,uVar6);
  }
  piVar4 = local_res20;
  if (param_4 <= *(int *)((longlong)puVar2 + 0x14)) {
    piVar4 = (int *)((longlong)puVar2 + 0x14);
  }
  iVar5 = *piVar4;
  piVar4 = &param_5;
  if (*(int *)(puVar2 + 3) <= param_5) {
    piVar4 = (int *)(puVar2 + 3);
  }
  iVar1 = *piVar4;
  puVar3 = (undefined8 *)operator_new(0x28);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FBinaryArchiveFormatter::FBinaryArchiveFormatter(puVar3,param_1);
    *puVar3 = Imf::_anon_04A4D5E4::LineBufferTask::vftable;
    puVar3[2] = param_2;
    puVar3[3] = puVar2;
    *(int *)(puVar3 + 4) = iVar5;
    *(int *)((longlong)puVar3 + 0x24) = iVar1;
  }
  return puVar3;
}



// FUNCTION 14393f920 FUN_14393f920 body=189 status=ok
// SIG undefined FUN_14393f920(void)

void FUN_14393f920(undefined8 param_1,undefined4 param_2,longlong *param_3,undefined1 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = *param_3;
  uVar2 = 0;
  uVar1 = uVar2;
  if (param_3[1] - lVar3 >> 3 != 0) {
    do {
      FUN_143929700(param_1,lVar3 + uVar1 * 8);
      lVar3 = *param_3;
      uVar1 = (ulonglong)((int)uVar1 + 1);
    } while (uVar1 < (ulonglong)(param_3[1] - lVar3 >> 3));
  }
  *param_4 = 1;
  uVar1 = param_3[1] - *param_3 >> 3;
  if (uVar1 != 0) {
    do {
      if (*(longlong *)(*param_3 + uVar2 * 8) == 0) {
        *param_4 = 0;
        FUN_14393ff30(param_1,param_2,param_3);
        return;
      }
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < uVar1);
  }
  return;
}



// FUNCTION 14393f9e0 FUN_14393f9e0 body=673 status=ok
// SIG undefined FUN_14393f9e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14393f9e0(longlong param_1,int param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  char cVar2;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  undefined8 uVar4;
  undefined1 auStack_1c8 [32];
  int local_1a8;
  int local_1a4 [3];
  undefined *local_198 [3];
  undefined **local_180 [13];
  undefined8 local_118;
  undefined4 local_110;
  code *local_100;
  undefined **local_98 [13];
  ulonglong local_30;
  
  local_1a4[1] = -2;
  local_1a4[2] = -1;
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_1a8 = 0;
  if (*(longlong *)
       (*(longlong *)(param_1 + 0x70) +
       (longlong)((param_2 - *(int *)(param_1 + 100)) / *(int *)(param_1 + 0xf8)) * 8) == 0) {
    local_198[0] = &DAT_145af0c78;
    local_198[2] = &DAT_145af0c80;
    local_100 = _vftable__exref;
    local_1a8 = 1;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)local_198,
               (basic_streambuf<char,std::char_traits<char>_> *)local_180);
    *(undefined ***)((longlong)local_198 + (longlong)*(int *)(local_198[0] + 4)) =
         std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)local_198 + (longlong)*(int *)(local_198[0] + 4) + -4) =
         *(int *)(local_198[0] + 4) + -0x98;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)local_180);
    local_180[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_118 = 0;
    local_110 = 0;
    this = (basic_ostream<char,std::char_traits<char>_> *)
           std::operator<<<std::char_traits<char>_>(local_198 + 2,"Scan line ");
    pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,param_2);
    std::operator<<<std::char_traits<char>_>(pbVar3," is missing.");
    FUN_143e175c0(local_98,local_198);
    local_98[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_98,(ThrowInfo *)&DAT_1461db5c8);
  }
  if (*(int *)(param_1 + 0x8c) != param_2) {
    (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))();
  }
  (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x10))(*(longlong **)(param_1 + 0xd8),&local_1a8,4)
  ;
  (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x10))(*(longlong **)(param_1 + 0xd8),local_1a4,4);
  *param_4 = local_1a4[0];
  if (local_1a8 != param_2) {
    FUN_143e179e0(local_98,"Unexpected data block y coordinate.");
    local_98[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_98,(ThrowInfo *)&DAT_1461db5c8);
  }
  if (*(int *)(param_1 + 0x100) < local_1a4[0]) {
    FUN_143e179e0(local_98,"Unexpected data block length.");
    local_98[0] = Iex::InputExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_98,(ThrowInfo *)&DAT_1461db5c8);
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 8))();
  plVar1 = *(longlong **)(param_1 + 0xd8);
  if (cVar2 == '\0') {
    (**(code **)(*plVar1 + 0x10))(plVar1,*param_3,*param_4);
  }
  else {
    uVar4 = (**(code **)(*plVar1 + 0x18))(plVar1,*param_4);
    *param_3 = uVar4;
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0xf8) + param_2;
  }
  else {
    *(int *)(param_1 + 0x8c) = param_2 - *(int *)(param_1 + 0xf8);
  }
  return;
}



// FUNCTION 14393fc90 FUN_14393fc90 body=662 status=ok
// SIG undefined FUN_14393fc90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14393fc90(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_2c8 [32];
  int local_2a8;
  int local_298 [2];
  int local_290 [2];
  longlong local_288;
  undefined8 local_280;
  undefined1 local_278;
  undefined8 local_268;
  undefined **local_158 [12];
  undefined **local_f8 [12];
  undefined **local_98 [12];
  ulonglong local_38;
  
  local_268 = 0xfffffffffffffffe;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_280 = *(undefined8 *)(param_1 + 8);
  local_278 = 0;
  local_298[0] = param_2;
  local_290[0] = param_3;
  local_288 = param_1;
  FUN_1437125f0();
  local_278 = 1;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar7 = *(longlong *)(lVar3 + 200) - *(longlong *)(lVar3 + 0xc0);
  lVar4 = lVar7 >> 0x3f;
  if (lVar7 / 0x38 + lVar4 == lVar4) {
    FUN_143e179e0(local_98,"No frame buffer specified as pixel data destination.");
    local_98[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(local_98,(ThrowInfo *)&DAT_1461db4d8);
  }
  piVar5 = local_290;
  if (param_2 <= param_3) {
    piVar5 = local_298;
  }
  iVar1 = *piVar5;
  piVar5 = local_290;
  if (param_3 <= param_2) {
    piVar5 = local_298;
  }
  iVar2 = *piVar5;
  iVar10 = *(int *)(lVar3 + 100);
  if ((iVar10 <= iVar1) && (iVar2 <= *(int *)(lVar3 + 0x68))) {
    iVar14 = *(int *)(lVar3 + 0xf8);
    if (*(int *)(lVar3 + 0x58) == 0) {
      uVar9 = (longlong)(iVar1 - iVar10) / (longlong)iVar14;
      uVar11 = (longlong)(iVar2 - iVar10) % (longlong)iVar14;
      iVar10 = (iVar2 - iVar10) / iVar14 + 1;
      iVar14 = 1;
    }
    else {
      uVar9 = (longlong)(iVar2 - iVar10) / (longlong)iVar14;
      uVar11 = (longlong)(iVar1 - iVar10) % (longlong)iVar14;
      iVar10 = (iVar1 - iVar10) / iVar14 + -1;
      iVar14 = -1;
    }
    FUN_14394b830(local_298,uVar11 & 0xffffffff);
    for (uVar9 = uVar9 & 0xffffffff; (int)uVar9 != iVar10;
        uVar9 = (ulonglong)(uint)((int)uVar9 + iVar14)) {
      local_2a8 = iVar2;
      uVar6 = FUN_14393f800(local_298,*(undefined8 *)(param_1 + 8),uVar9,iVar1);
      FUN_14394bb10(uVar6);
    }
    FUN_14394b9b0(local_298);
    uVar9 = 0;
    plVar8 = (longlong *)(*(longlong *)(param_1 + 8) + 0xe0);
    uVar11 = uVar9;
    uVar13 = uVar9;
    if (*(longlong *)(*(longlong *)(param_1 + 8) + 0xe8) - *plVar8 >> 3 != 0) {
      do {
        lVar3 = *(longlong *)(uVar11 + *plVar8);
        if ((*(char *)(lVar3 + 0x30) != '\0') && (uVar9 == 0)) {
          uVar9 = lVar3 + 0x38;
        }
        *(undefined1 *)(lVar3 + 0x30) = 0;
        uVar12 = (int)uVar13 + 1;
        plVar8 = (longlong *)(*(longlong *)(param_1 + 8) + 0xe0);
        uVar11 = uVar11 + 8;
        uVar13 = (ulonglong)uVar12;
      } while ((ulonglong)(longlong)(int)uVar12 <
               (ulonglong)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xe8) - *plVar8 >> 3));
      if (uVar9 != 0) {
        FUN_143e17810(local_158,uVar9);
        local_158[0] = Iex::IoExc::vftable;
                    /* WARNING: Subroutine does not return */
        _guard_xfg_dispatch_icall_nop(local_158,(ThrowInfo *)&DAT_1461db6b8);
      }
    }
    FUN_143925920(&local_280);
    return;
  }
  FUN_143e179e0(local_f8,"Tried to read scan line outside the image file\'s data window.");
  local_f8[0] = Iex::ArgExc::vftable;
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_f8,(ThrowInfo *)&DAT_1461db4d8);
}


