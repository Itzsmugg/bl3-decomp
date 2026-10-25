// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141500f00 `scalar_deleting_destructor' body=127 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong *
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_scalar_deleting_destructor_
          (longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[3];
  if (0xf < uVar1) {
    lVar2 = *param_1;
    uVar4 = uVar1 + 1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar4);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141500f80 FUN_141500f80 body=108 status=ok
// SIG undefined FUN_141500f80(void)

undefined8 * FUN_141500f80(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144c4cc88;
  FUN_141505b50(param_1 + 2,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 3,&DAT_146ba2f50);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141500ff0 FUN_141500ff0 body=85 status=ok
// SIG undefined FUN_141500ff0(void)

undefined8 * FUN_141500ff0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144c4ce08;
  FUN_1414ffbe0(param_1 + 2);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141501050 FUN_141501050 body=92 status=ok
// SIG undefined FUN_141501050(void)

undefined8 * FUN_141501050(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144c4cd48;
  FUN_141505b50(param_1 + 2,&DAT_146ba2f50);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1415010b0 FUN_1415010b0 body=119 status=ok
// SIG undefined FUN_1415010b0(void)

undefined8 * FUN_1415010b0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  FUN_1415008e0(param_1 + 5);
  *param_1 = &PTR_FUN_144c4cf88;
  if (param_1[3] == 0) {
    FUN_141505b50(param_1 + 1,&DAT_146ba2f50);
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141501130 FUN_141501130 body=52 status=ok
// SIG undefined FUN_141501130(void)

undefined8 FUN_141501130(undefined8 param_1,ulonglong param_2)

{
  FUN_143a0e690();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141501170 FUN_141501170 body=43 status=ok
// SIG undefined FUN_141501170(void)

undefined8 * FUN_141501170(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1415011a0 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__144c4cbc8;
  FUN_1415008e0(this + 8);
  *(undefined ***)this = google::protobuf::MessageLite::vftable;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x20);
  }
  return this;
}



// FUNCTION 1415011f0 FUN_1415011f0 body=92 status=ok
// SIG undefined FUN_1415011f0(void)

undefined8 * FUN_1415011f0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144c4ca48;
  FUN_141505b50(param_1 + 2,&DAT_146ba2f50);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141501250 FUN_141501250 body=85 status=ok
// SIG undefined FUN_141501250(void)

undefined8 * FUN_141501250(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144c4cb08;
  thunk_FUN_1439f1360(param_1 + 2);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1415012b0 FUN_1415012b0 body=101 status=ok
// SIG undefined FUN_1415012b0(void)

undefined8 * FUN_1415012b0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144c4c808;
  FUN_141505b50(param_1 + 5,&DAT_146ba2f50);
  FUN_1414ffbe0(param_1 + 2);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141501320 FUN_141501320 body=124 status=ok
// SIG undefined FUN_141501320(void)

undefined8 * FUN_141501320(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_144c4c748;
  FUN_141505b50(param_1 + 2,&DAT_146ba2f50);
  if ((param_1 != &DAT_1468a47f8) &&
     (puVar1 = (undefined8 *)param_1[3], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1415013a0 FUN_1415013a0 body=101 status=ok
// SIG undefined FUN_1415013a0(void)

undefined8 * FUN_1415013a0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144c4c688;
  FUN_141505b50(param_1 + 5,&DAT_146ba2f50);
  thunk_FUN_1439f1360(param_1 + 2);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141501410 FUN_141501410 body=126 status=ok
// SIG undefined FUN_141501410(void)

undefined8 * FUN_141501410(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144c4c8c8;
  FUN_141505b50(param_1 + 8,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 9,&DAT_146ba2f50);
  FUN_1414ffbe0(param_1 + 5);
  FUN_1414ffbe0(param_1 + 2);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141501490 FUN_141501490 body=85 status=ok
// SIG undefined FUN_141501490(void)

undefined8 * FUN_141501490(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144c4c988;
  FUN_1414ffbe0(param_1 + 2);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1415014f0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FMeshParticleVertexFactory::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1415009c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4f8);
  }
  return param_1;
}



// FUNCTION 141501530 FUN_141501530 body=119 status=ok
// SIG undefined FUN_141501530(void)

undefined8 * FUN_141501530(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  FUN_1415008e0(param_1 + 5);
  *param_1 = &PTR_FUN_144c4cf88;
  if (param_1[3] == 0) {
    FUN_141505b50(param_1 + 1,&DAT_146ba2f50);
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1415015b0 FUN_1415015b0 body=108 status=ok
// SIG undefined FUN_1415015b0(void)

undefined8 * FUN_1415015b0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144c4cec8;
  FUN_141505b50(param_1 + 2,&DAT_146ba2f50);
  FUN_141505b50(param_1 + 3,&DAT_146ba2f50);
  FUN_1415008e0(param_1 + 1);
  *param_1 = google::protobuf::MessageLite::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141501620 FUN_141501620 body=246 status=ok
// SIG undefined FUN_141501620(void)

longlong FUN_141501620(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  
  lVar6 = 0;
  lVar4 = lVar6;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    lVar4 = (**(code **)(*param_1 + 0xc0))();
    uVar8 = (uint)*(undefined8 *)(lVar4 + 0x10);
    uVar3 = uVar8 | 1;
    iVar1 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar4 = (longlong)(int)((iVar1 * 9 + 0x49U >> 6) + uVar8) + 1;
  }
  if ((*(uint *)(param_1 + 4) >> 1 & 1) == 0) {
    return lVar4;
  }
  lVar5 = (**(code **)(*param_1 + 200))(param_1);
  if ((*(byte *)(lVar5 + 8) & 1) != 0) {
    lVar6 = FUN_143a19d80(*(ulonglong *)(lVar5 + 8) & 0xfffffffffffffffe);
  }
  if (*(ulonglong *)(lVar5 + 0x10) != 0) {
    uVar7 = *(ulonglong *)(lVar5 + 0x10) | 1;
    lVar2 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    lVar6 = lVar6 + (ulonglong)((int)lVar2 * 9 + 0x49U >> 6) + 1;
  }
  if (*(uint *)(lVar5 + 0x18) != 0) {
    uVar3 = *(uint *)(lVar5 + 0x18) | 1;
    iVar1 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar6 = lVar6 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1;
  }
  *(uint *)(lVar5 + 0x1c) = (uint)lVar6;
  uVar3 = (uint)lVar6 | 1;
  iVar1 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return lVar6 + 1 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + lVar4;
}



// FUNCTION 141501720 FUN_141501720 body=198 status=ok
// SIG undefined FUN_141501720(void)

longlong FUN_141501720(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  if (lVar1 != 0) {
    uVar4 = (uint)lVar1 | 1;
    iVar2 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar1;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
  if (lVar1 != 0) {
    uVar4 = (uint)lVar1 | 1;
    iVar2 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar1;
  }
  uVar4 = *(uint *)(param_1 + 0x20);
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
      *(int *)(param_1 + 0x24) = (int)(lVar3 + 0xb);
      return lVar3 + 0xb;
    }
    iVar2 = 0x1f;
    if ((uVar4 | 1) != 0) {
      for (; (uVar4 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + 1 + (ulonglong)(iVar2 * 9 + 0x49U >> 6);
  }
  *(int *)(param_1 + 0x24) = (int)lVar3;
  return lVar3;
}



// FUNCTION 1415017f0 FUN_1415017f0 body=532 status=ok
// SIG undefined FUN_1415017f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1415017f0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  int local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  lVar5 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar5 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar10 = 0;
  lVar5 = lVar5 + (ulonglong)uVar1;
  uVar9 = 10;
  if (uVar1 != 0) {
    do {
      lVar6 = 0;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar10 * 8);
      if ((*(byte *)(lVar2 + 8) & 1) != 0) {
        lVar6 = FUN_143a19d80(*(ulonglong *)(lVar2 + 8) & 0xfffffffffffffffe);
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x10);
      if (lVar3 != 0) {
        uVar8 = (uint)lVar3 | 1;
        local_48 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> local_48 == 0; local_48 = local_48 + -1) {
          }
        }
        lVar6 = lVar6 + (ulonglong)(local_48 * 9 + 0x49U >> 6) + 1 + lVar3;
      }
      uVar8 = *(uint *)(lVar2 + 0x18);
      if (uVar8 != 0) {
        uVar7 = uVar9;
        if (-1 < (int)uVar8) {
          local_44 = 0x1f;
          if ((uVar8 | 1) != 0) {
            for (; (uVar8 | 1) >> local_44 == 0; local_44 = local_44 + -1) {
            }
          }
          uVar7 = (ulonglong)(local_44 * 9 + 0x49U >> 6);
        }
        lVar6 = lVar6 + 1 + uVar7;
      }
      *(uint *)(lVar2 + 0x1c) = (uint)lVar6;
      uVar8 = (uint)lVar6 | 1;
      uVar10 = uVar10 + 1;
      local_40 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> local_40 == 0; local_40 = local_40 + -1) {
        }
      }
      lVar5 = lVar5 + (ulonglong)(local_40 * 9 + 0x49U >> 6) + lVar6;
    } while (uVar10 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar1 != 0) {
    uVar7 = uVar9;
    if (-1 < (int)uVar1) {
      iVar4 = 0x1f;
      if ((uVar1 | 1) != 0) {
        for (; (uVar1 | 1) >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      uVar7 = (ulonglong)(iVar4 * 9 + 0x49U >> 6);
    }
    lVar5 = lVar5 + 1 + uVar7;
  }
  uVar1 = *(uint *)(param_1 + 0x2c);
  if (uVar1 != 0) {
    uVar7 = uVar9;
    if (-1 < (int)uVar1) {
      iVar4 = 0x1f;
      if ((uVar1 | 1) != 0) {
        for (; (uVar1 | 1) >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      uVar7 = (ulonglong)(iVar4 * 9 + 0x49U >> 6);
    }
    lVar5 = lVar5 + 1 + uVar7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 != 0) {
    uVar7 = uVar9;
    if (-1 < (int)uVar1) {
      iVar4 = 0x1f;
      if ((uVar1 | 1) != 0) {
        for (; (uVar1 | 1) >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      uVar7 = (ulonglong)(iVar4 * 9 + 0x49U >> 6);
    }
    lVar5 = lVar5 + 1 + uVar7;
  }
  uVar1 = *(uint *)(param_1 + 0x34);
  if (uVar1 != 0) {
    if (-1 < (int)uVar1) {
      iVar4 = 0x1f;
      if ((uVar1 | 1) != 0) {
        for (; (uVar1 | 1) >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      uVar9 = (ulonglong)(iVar4 * 9 + 0x49U >> 6);
    }
    lVar5 = lVar5 + 1 + uVar9;
  }
  if (*(ulonglong *)(param_1 + 0x38) != 0) {
    uVar9 = *(ulonglong *)(param_1 + 0x38) | 1;
    lVar2 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    lVar5 = lVar5 + (ulonglong)((int)lVar2 * 9 + 0x49U >> 6) + 1;
  }
  *(int *)(param_1 + 0x40) = (int)lVar5;
  return lVar5;
}



// FUNCTION 141501a10 FUN_141501a10 body=154 status=ok
// SIG undefined FUN_141501a10(void)

longlong FUN_141501a10(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  if (lVar1 != 0) {
    uVar4 = (uint)lVar1 | 1;
    iVar2 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar1;
  }
  uVar4 = *(uint *)(param_1 + 0x18);
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
      *(int *)(param_1 + 0x1c) = (int)(lVar3 + 0xb);
      return lVar3 + 0xb;
    }
    iVar2 = 0x1f;
    if ((uVar4 | 1) != 0) {
      for (; (uVar4 | 1) >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar3 = lVar3 + 1 + (ulonglong)(iVar2 * 9 + 0x49U >> 6);
  }
  *(int *)(param_1 + 0x1c) = (int)lVar3;
  return lVar3;
}



// FUNCTION 141501ab0 FUN_141501ab0 body=123 status=ok
// SIG undefined FUN_141501ab0(void)

longlong FUN_141501ab0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar4 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    uVar5 = *(ulonglong *)(param_1 + 0x10) | 1;
    lVar2 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    lVar4 = lVar4 + (ulonglong)((int)lVar2 * 9 + 0x49U >> 6) + 1;
  }
  if (*(uint *)(param_1 + 0x18) != 0) {
    uVar3 = *(uint *)(param_1 + 0x18) | 1;
    iVar1 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar4 = lVar4 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar4;
  return lVar4;
}



// FUNCTION 141501b30 FUN_141501b30 body=180 status=ok
// SIG undefined FUN_141501b30(void)

void FUN_141501b30(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  uVar4 = uVar8;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar4 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar1 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
  lVar6 = uVar4 + uVar1;
  iVar3 = (int)lVar6;
  iVar2 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
  if (0 < iVar2) {
    do {
      lVar5 = FUN_1439f1d30(param_1 + 0x10,uVar8);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar1 = (uint)*(longlong *)(lVar5 + 0x10) | 1;
      iVar3 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      lVar6 = lVar6 + (ulonglong)(iVar3 * 9 + 0x49U >> 6) + *(longlong *)(lVar5 + 0x10);
      iVar3 = (int)lVar6;
    } while ((int)uVar7 < iVar2);
  }
  iVar2 = iVar3 + 2;
  if (*(char *)(param_1 + 0x28) == '\0') {
    iVar2 = iVar3;
  }
  iVar3 = iVar2 + 2;
  if (*(char *)(param_1 + 0x29) == '\0') {
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x2c) = iVar3;
  return;
}



// FUNCTION 141501bf0 FUN_141501bf0 body=387 status=ok
// SIG undefined FUN_141501bf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141501bf0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  lVar4 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar4 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar8 = 0;
  lVar4 = lVar4 + (ulonglong)uVar3;
  if (uVar3 != 0) {
    do {
      lVar5 = 0;
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar8 * 8);
      if ((*(byte *)(puVar1 + 1) & 1) != 0) {
        lVar5 = FUN_143a19d80(puVar1[1] & 0xfffffffffffffffe);
      }
      lVar6 = *(longlong *)(puVar1[2] + 0x10);
      if (lVar6 != 0) {
        uVar7 = (uint)lVar6 | 1;
        local_48 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> local_48 == 0; local_48 = local_48 + -1) {
          }
        }
        lVar5 = lVar5 + (ulonglong)(local_48 * 9 + 0x49U >> 6) + 1 + lVar6;
      }
      if ((puVar1 != &DAT_1468a47f8) && (puVar1[3] != 0)) {
        lVar6 = FUN_141546c50();
        uVar7 = (uint)lVar6 | 1;
        local_44 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> local_44 == 0; local_44 = local_44 + -1) {
          }
        }
        lVar5 = lVar5 + (ulonglong)(local_44 * 9 + 0x49U >> 6) + 1 + lVar6;
      }
      *(uint *)(puVar1 + 4) = (uint)lVar5;
      uVar7 = (uint)lVar5 | 1;
      uVar8 = uVar8 + 1;
      local_40 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> local_40 == 0; local_40 = local_40 + -1) {
        }
      }
      lVar4 = lVar4 + (ulonglong)(local_40 * 9 + 0x49U >> 6) + lVar5;
    } while (uVar8 < uVar3);
  }
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
  if (lVar5 != 0) {
    uVar3 = (uint)lVar5 | 1;
    iVar2 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar4 = lVar4 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar5;
  }
  *(int *)(param_1 + 0x30) = (int)lVar4;
  return lVar4;
}



// FUNCTION 141501d80 FUN_141501d80 body=159 status=ok
// SIG undefined FUN_141501d80(void)

longlong FUN_141501d80(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar2 = 0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    lVar2 = FUN_143a19d80(param_1[1] & 0xfffffffffffffffe);
  }
  lVar3 = *(longlong *)(param_1[2] + 0x10);
  if (lVar3 != 0) {
    uVar4 = (uint)lVar3 | 1;
    iVar1 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar2 = lVar2 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar3;
  }
  if ((param_1 != &DAT_1468a47f8) && (param_1[3] != 0)) {
    lVar3 = FUN_141546c50();
    uVar4 = (uint)lVar3 | 1;
    iVar1 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    lVar2 = lVar2 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + 1 + lVar3;
  }
  *(int *)(param_1 + 4) = (int)lVar2;
  return lVar2;
}



// FUNCTION 141501e20 FUN_141501e20 body=203 status=ok
// SIG undefined FUN_141501e20(void)

longlong FUN_141501e20(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  uVar4 = uVar8;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar4 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar2 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
  lVar6 = uVar4 + uVar2;
  iVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
  if (0 < iVar3) {
    do {
      lVar5 = FUN_1439f1d30(param_1 + 0x10,uVar8);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar2 = (uint)*(longlong *)(lVar5 + 0x10) | 1;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      lVar6 = lVar6 + (ulonglong)(iVar1 * 9 + 0x49U >> 6) + *(longlong *)(lVar5 + 0x10);
    } while ((int)uVar7 < iVar3);
  }
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
  if (lVar5 != 0) {
    uVar2 = (uint)lVar5 | 1;
    iVar3 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    lVar6 = lVar6 + (ulonglong)(iVar3 * 9 + 0x49U >> 6) + 1 + lVar5;
  }
  *(int *)(param_1 + 0x30) = (int)lVar6;
  return lVar6;
}



// FUNCTION 141501ef0 FUN_141501ef0 body=582 status=ok
// SIG undefined FUN_141501ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141501ef0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [32];
  uint local_58;
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar10 = 0;
  uVar3 = uVar10;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar3 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  local_54 = *(uint *)(param_1 + 0x18);
  lVar7 = uVar3 + local_54;
  local_58 = 0;
  uVar3 = uVar10;
  if (local_54 != 0) {
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar3 * 8);
      uVar3 = uVar10;
      if ((*(byte *)(lVar5 + 8) & 1) != 0) {
        uVar3 = FUN_143a19d80(*(ulonglong *)(lVar5 + 8) & 0xfffffffffffffffe);
      }
      uVar1 = IStreamingManager::GetNumWantingResources(lVar5 + 0x10);
      lVar6 = uVar3 + uVar1;
      iVar2 = IStreamingManager::GetNumWantingResources(lVar5 + 0x10);
      uVar3 = uVar10;
      if (0 < iVar2) {
        do {
          lVar4 = FUN_1439f1d30(lVar5 + 0x10,uVar3);
          uVar8 = (int)uVar3 + 1;
          uVar1 = (uint)*(longlong *)(lVar4 + 0x10) | 1;
          local_50 = 0x1f;
          if (uVar1 != 0) {
            for (; uVar1 >> local_50 == 0; local_50 = local_50 + -1) {
            }
          }
          lVar6 = lVar6 + (ulonglong)(local_50 * 9 + 0x49U >> 6) + *(longlong *)(lVar4 + 0x10);
          uVar3 = (ulonglong)uVar8;
        } while ((int)uVar8 < iVar2);
      }
      lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x28) + 0x10);
      if (lVar4 != 0) {
        uVar1 = (uint)lVar4 | 1;
        local_4c = 0x1f;
        if (uVar1 != 0) {
          for (; uVar1 >> local_4c == 0; local_4c = local_4c + -1) {
          }
        }
        lVar6 = lVar6 + (ulonglong)(local_4c * 9 + 0x49U >> 6) + 1 + lVar4;
      }
      *(uint *)(lVar5 + 0x30) = (uint)lVar6;
      uVar1 = (uint)lVar6 | 1;
      local_48 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> local_48 == 0; local_48 = local_48 + -1) {
        }
      }
      local_58 = local_58 + 1;
      lVar7 = lVar7 + (ulonglong)(local_48 * 9 + 0x49U >> 6) + lVar6;
      uVar3 = (ulonglong)local_58;
    } while (local_58 < local_54);
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  lVar7 = lVar7 + (ulonglong)uVar1;
  if (uVar1 != 0) {
    do {
      lVar5 = FUN_141501bf0(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)uVar10 * 8));
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar8 = (uint)lVar5 | 1;
      local_44 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> local_44 == 0; local_44 = local_44 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_44 * 9 + 0x49U >> 6) + lVar5;
    } while (uVar9 < uVar1);
  }
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
  if (lVar5 != 0) {
    uVar1 = (uint)lVar5 | 1;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar7 = lVar7 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar5;
  }
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
  if (lVar5 != 0) {
    uVar1 = (uint)lVar5 | 1;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    lVar7 = lVar7 + (ulonglong)(iVar2 * 9 + 0x49U >> 6) + 1 + lVar5;
  }
  *(int *)(param_1 + 0x50) = (int)lVar7;
  return lVar7;
}



// FUNCTION 141502140 FUN_141502140 body=171 status=ok
// SIG undefined FUN_141502140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141502140(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_38 [32];
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar7 = 0;
  uVar2 = uVar7;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar2 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  lVar5 = uVar2 + uVar1;
  if (uVar1 != 0) {
    do {
      lVar3 = FUN_141501ef0(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar7 * 8));
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar4 = (uint)lVar3 | 1;
      local_18 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> local_18 == 0; local_18 = local_18 + -1) {
        }
      }
      lVar5 = lVar5 + (ulonglong)(local_18 * 9 + 0x49U >> 6) + lVar3;
    } while (uVar6 < uVar1);
  }
  *(int *)(param_1 + 0x28) = (int)lVar5;
  return lVar5;
}



// FUNCTION 1415021f0 FUN_1415021f0 body=8380 status=ok
// SIG undefined FUN_1415021f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415021f0(undefined8 *param_1)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  uint uVar15;
  longlong *plVar16;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  longlong local_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  ulonglong local_290;
  longlong *local_288;
  longlong local_280;
  undefined8 uStack_278;
  ulonglong local_270;
  longlong *local_268;
  longlong local_260;
  longlong local_258;
  int local_250;
  int local_24c;
  int local_248;
  int local_244;
  int local_240;
  int local_23c;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong lStack_90;
  ulonglong local_88;
  ulonglong local_70;
  undefined1 local_68 [24];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  plVar16 = (longlong *)0x0;
  plVar6 = plVar16;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    plVar6 = (longlong *)FUN_143a19d80(param_1[1] & 0xfffffffffffffffe);
  }
  lVar7 = FUN_1439fa780(param_1 + 2);
  uVar3 = (uint)lVar7;
  if (lVar7 != 0) {
    if ((int)uVar3 < 0) {
      uVar9 = 10;
    }
    else {
      local_e8 = 0x1f;
      if ((uVar3 | 1) != 0) {
        for (; (uVar3 | 1) >> local_e8 == 0; local_e8 = local_e8 + -1) {
        }
      }
      uVar9 = (ulonglong)(local_e8 * 9 + 0x49U >> 6);
    }
    plVar6 = (longlong *)((longlong)plVar6 + uVar9 + 2);
  }
  *(uint *)(param_1 + 4) = uVar3;
  uVar3 = *(uint *)(param_1 + 6);
  lVar7 = (longlong)plVar6 + lVar7 + (ulonglong)(uVar3 * 2);
  plVar6 = plVar16;
  if (uVar3 != 0) {
    do {
      lVar10 = *(longlong *)(param_1[7] + 8 + (longlong)(int)plVar6 * 8);
      plVar8 = plVar16;
      if ((*(byte *)(lVar10 + 8) & 1) != 0) {
        plVar8 = (longlong *)FUN_143a19d80(*(ulonglong *)(lVar10 + 8) & 0xfffffffffffffffe);
      }
      lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x10);
      if (lVar12 != 0) {
        uVar13 = (uint)lVar12 | 1;
        local_e4 = 0x1f;
        if (uVar13 != 0) {
          for (; uVar13 >> local_e4 == 0; local_e4 = local_e4 + -1) {
          }
        }
        plVar8 = (longlong *)
                 ((longlong)plVar8 + (ulonglong)(local_e4 * 9 + 0x49U >> 6) + 1 + lVar12);
      }
      uVar13 = *(uint *)(lVar10 + 0x18);
      if (uVar13 != 0) {
        if ((int)uVar13 < 0) {
          uVar9 = 10;
        }
        else {
          local_e0 = 0x1f;
          if ((uVar13 | 1) != 0) {
            for (; (uVar13 | 1) >> local_e0 == 0; local_e0 = local_e0 + -1) {
            }
          }
          uVar9 = (ulonglong)(local_e0 * 9 + 0x49U >> 6);
        }
        plVar8 = (longlong *)((longlong)plVar8 + uVar9 + 1);
      }
      *(uint *)(lVar10 + 0x1c) = (uint)plVar8;
      uVar13 = (uint)plVar8 | 1;
      uVar15 = (int)plVar6 + 1;
      local_dc = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> local_dc == 0; local_dc = local_dc + -1) {
        }
      }
      lVar7 = (longlong)plVar8 + lVar7 + (ulonglong)(local_dc * 9 + 0x49U >> 6);
      plVar6 = (longlong *)(ulonglong)uVar15;
    } while (uVar15 < uVar3);
  }
  uVar3 = IStreamingManager::GetNumWantingResources(param_1 + 8);
  lVar7 = lVar7 + (ulonglong)uVar3 * 2;
  iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 8);
  plVar6 = plVar16;
  if (0 < iVar4) {
    do {
      lVar10 = FUN_1439f1d30(param_1 + 8,plVar6);
      uVar13 = (int)plVar6 + 1;
      uVar3 = (uint)*(longlong *)(lVar10 + 0x10) | 1;
      local_d8 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> local_d8 == 0; local_d8 = local_d8 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_d8 * 9 + 0x49U >> 6) + *(longlong *)(lVar10 + 0x10);
      plVar6 = (longlong *)(ulonglong)uVar13;
    } while ((int)uVar13 < iVar4);
  }
  uVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0xb);
  lVar7 = lVar7 + (ulonglong)uVar3 * 2;
  iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 0xb);
  plVar6 = plVar16;
  if (0 < iVar4) {
    do {
      lVar10 = FUN_1439f1d30(param_1 + 0xb,plVar6);
      uVar13 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar13;
      uVar3 = (uint)*(longlong *)(lVar10 + 0x10) | 1;
      local_d4 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> local_d4 == 0; local_d4 = local_d4 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_d4 * 9 + 0x49U >> 6) + *(longlong *)(lVar10 + 0x10);
    } while ((int)uVar13 < iVar4);
  }
  uVar3 = (**(code **)(param_1[0xe] + 0x48))(param_1 + 0xe);
  local_288 = (longlong *)0x0;
  lVar7 = lVar7 + (ulonglong)uVar3 * 2;
  local_260 = lVar7;
  lVar10 = (**(code **)(param_1[0xe] + 0x90))(param_1 + 0xe);
  plVar6 = (longlong *)FUN_140d599d0(*(undefined8 *)(lVar10 + 0x10),local_68);
  lVar10 = *plVar6;
  lStack_90 = plVar6[1];
  local_290 = plVar6[2];
  uStack_278._0_4_ = (undefined4)lStack_90;
  uStack_278._4_4_ = (undefined4)((ulonglong)lStack_90 >> 0x20);
  uStack_298 = (undefined4)uStack_278;
  uStack_294 = uStack_278._4_4_;
  local_2a0 = lVar10;
  local_280 = lVar10;
  uStack_278 = lStack_90;
  local_270 = local_290;
  local_98 = lVar10;
  local_88 = local_290;
  (**(code **)(param_1[0xe] + 0x90))(param_1 + 0xe);
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_270 = 0;
  local_a0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  if (lVar10 != 0) {
    local_258 = CONCAT44(uStack_294,uStack_298);
    plVar6 = plVar16;
    uVar9 = local_290;
    lVar10 = local_2a0;
LAB_141502520:
    local_a0 = 0;
    local_b8 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_c0 = 0;
    local_c8 = 0;
    local_270 = 0;
    local_288 = *(longlong **)(lVar10 + 0x20);
    lVar7 = param_1[0x1c];
    local_2a8 = (longlong)local_288 + 0x20;
    if (lVar7 == 0) {
      plVar8 = (longlong *)operator_new(0x40);
      plVar14 = plVar16;
      if (plVar8 != (longlong *)0x0) {
        plVar8[3] = 0;
        plVar8[1] = (longlong)&DAT_146ba2f50;
        plVar8[2] = 0;
        *(undefined4 *)(plVar8 + 4) = 0;
        plVar8[5] = 0;
        goto LAB_1415025b0;
      }
    }
    else {
      if (*(longlong *)(lVar7 + 0x70) != 0) {
        FUN_1439f01b0(lVar7,0,0x40);
      }
      plVar8 = (longlong *)FUN_1439efd10(lVar7,0x40);
      plVar8[3] = lVar7;
      plVar8[1] = (longlong)&DAT_146ba2f50;
      plVar8[2] = 0;
      *(undefined4 *)(plVar8 + 4) = 0;
      plVar8[5] = lVar7;
LAB_1415025b0:
      *plVar8 = (longlong)&PTR_FUN_144c4d370;
      plVar8[6] = (longlong)local_288;
      plVar8[7] = local_2a8;
      *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) | 3;
      plVar14 = plVar8;
    }
    local_288 = plVar14;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)*plVar6)(plVar6,1);
    }
    if ((*(byte *)(plVar14 + 4) & 1) == 0) {
      local_2a8 = 0;
    }
    else {
      lVar7 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      uVar13 = (uint)*(undefined8 *)(lVar7 + 0x10);
      uVar3 = uVar13 | 1;
      local_d0 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> local_d0 == 0; local_d0 = local_d0 + -1) {
        }
      }
      local_2a8 = (longlong)(int)((local_d0 * 9 + 0x49U >> 6) + uVar13) + 1;
    }
    plVar6 = plVar16;
    if ((*(uint *)(plVar14 + 4) >> 1 & 1) != 0) {
      lVar7 = (**(code **)(*plVar14 + 200))(plVar14);
      if ((*(byte *)(lVar7 + 8) & 1) != 0) {
        plVar6 = (longlong *)FUN_143a19d80(*(ulonglong *)(lVar7 + 8) & 0xfffffffffffffffe);
      }
      if (*(ulonglong *)(lVar7 + 0x10) != 0) {
        uVar11 = *(ulonglong *)(lVar7 + 0x10) | 1;
        lVar12 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_250 = (int)lVar12;
        plVar6 = (longlong *)((longlong)plVar6 + (ulonglong)(local_250 * 9 + 0x49U >> 6) + 1);
      }
      if (*(uint *)(lVar7 + 0x18) != 0) {
        uVar3 = *(uint *)(lVar7 + 0x18) | 1;
        local_24c = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> local_24c == 0; local_24c = local_24c + -1) {
          }
        }
        plVar6 = (longlong *)((longlong)plVar6 + (ulonglong)(local_24c * 9 + 0x49U >> 6) + 1);
      }
      *(uint *)(lVar7 + 0x1c) = (uint)plVar6;
      uVar3 = (uint)plVar6 | 1;
      local_248 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> local_248 == 0; local_248 = local_248 + -1) {
        }
      }
      plVar6 = (longlong *)((longlong)plVar6 + (ulonglong)(local_248 * 9 + 0x49U >> 6) + 1);
    }
    uVar3 = (uint)(local_2a8 + (longlong)plVar6) | 1;
    local_244 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> local_244 == 0; local_244 = local_244 + -1) {
      }
    }
    lVar7 = local_260 + (ulonglong)(local_244 * 9 + 0x49U >> 6) + local_2a8 + (longlong)plVar6;
    lVar12 = *(longlong *)(lVar10 + 0x28);
    local_260 = lVar7;
    if (*(longlong *)(lVar10 + 0x28) == 0) {
      local_268 = (longlong *)0x0;
      uVar9 = *(longlong *)(local_258 + 8) - 1U & uVar9;
      lVar12 = *(longlong *)(*(longlong *)(local_258 + 0x20) + uVar9 * 8);
      if (lVar12 != lVar10) {
        if ((lVar12 != 0) &&
           (lVar12 != *(longlong *)(*(longlong *)(local_258 + 0x20) + (uVar9 ^ 1) * 8))) {
          for (lVar12 = *(longlong *)(lVar12 + 0x28); lVar12 != 0;
              lVar12 = *(longlong *)(lVar12 + 0x28)) {
            if (lVar12 == lVar10) goto LAB_1415028ac;
          }
        }
        lVar10 = FUN_140d2cbc0(local_258,local_50,lVar10,&local_268);
        uVar9 = *(ulonglong *)(lVar10 + 0x10);
        lVar10 = *(longlong *)(local_258 + 0x20);
        lVar12 = *(longlong *)(lVar10 + uVar9 * 8);
        local_70 = uVar9;
        if ((lVar12 != 0) && (lVar12 == *(longlong *)(lVar10 + (uVar9 ^ 1) * 8))) {
          plVar6 = (longlong *)local_268[2];
          if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar6 + 0x19);
            local_268 = plVar6;
            plVar6 = (longlong *)*plVar6;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar6 + 0x19);
              local_268 = plVar6;
              plVar6 = (longlong *)*plVar6;
            }
          }
          else {
            cVar1 = *(char *)(local_268[1] + 0x19);
            plVar8 = (longlong *)local_268[1];
            plVar6 = local_268;
            while ((local_268 = plVar8, cVar1 == '\0' && (plVar6 == (longlong *)local_268[2]))) {
              cVar1 = *(char *)(local_268[1] + 0x19);
              plVar8 = (longlong *)local_268[1];
              plVar6 = local_268;
            }
          }
          if (local_268 == *(longlong **)(lVar12 + 8)) {
            uVar9 = uVar9 + 2;
            local_2a0 = 0;
            lVar12 = local_2a0;
            local_290 = uVar9;
            if (uVar9 < *(ulonglong *)(local_258 + 8)) {
              plVar6 = (longlong *)(lVar10 + uVar9 * 8);
              do {
                lVar2 = *plVar6;
                if (lVar2 != 0) {
                  local_290 = uVar9;
                  if (lVar2 != *(longlong *)(lVar10 + (uVar9 ^ 1) * 8)) goto LAB_14150287d;
                  if ((lVar2 != 0) && (lVar2 == *(longlong *)(lVar10 + (uVar9 ^ 1) * 8)))
                  goto LAB_14150288b;
                }
                uVar9 = uVar9 + 1;
                plVar6 = plVar6 + 1;
                local_290 = uVar9;
              } while (uVar9 < *(ulonglong *)(local_258 + 8));
            }
          }
          else {
            lVar12 = local_268[4];
            local_290 = uVar9;
          }
          goto LAB_141502912;
        }
      }
LAB_1415028ac:
      uVar9 = uVar9 + 1;
      local_2a0 = 0;
      lVar12 = local_2a0;
      local_290 = uVar9;
      if (uVar9 < *(ulonglong *)(local_258 + 8)) {
        lVar10 = *(longlong *)(local_258 + 0x20);
        plVar6 = (longlong *)(lVar10 + uVar9 * 8);
        do {
          lVar2 = *plVar6;
          if (lVar2 != 0) {
            local_290 = uVar9;
            if (lVar2 != *(longlong *)(lVar10 + (uVar9 ^ 1) * 8)) goto LAB_14150287d;
            if ((lVar2 != 0) && (lVar2 == *(longlong *)(lVar10 + (uVar9 ^ 1) * 8)))
            goto LAB_14150288b;
          }
          uVar9 = uVar9 + 1;
          plVar6 = plVar6 + 1;
          local_290 = uVar9;
        } while (uVar9 < *(ulonglong *)(local_258 + 8));
      }
    }
    goto LAB_141502912;
  }
LAB_141502974:
  uVar3 = *(uint *)(param_1 + 0x21);
  lVar7 = lVar7 + (ulonglong)(uVar3 * 2);
  plVar6 = plVar16;
  if (uVar3 != 0) {
    do {
      lVar10 = FUN_141501a10(*(undefined8 *)(param_1[0x22] + 8 + (longlong)(int)plVar6 * 8));
      uVar15 = (int)plVar6 + 1;
      uVar13 = (uint)lVar10 | 1;
      local_240 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> local_240 == 0; local_240 = local_240 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_240 * 9 + 0x49U >> 6) + lVar10;
      plVar6 = (longlong *)(ulonglong)uVar15;
    } while (uVar15 < uVar3);
  }
  uVar3 = *(uint *)(param_1 + 0x24);
  lVar7 = lVar7 + (ulonglong)(uVar3 * 2);
  plVar6 = plVar16;
  if (uVar3 != 0) {
    do {
      lVar10 = FUN_141546160(*(undefined8 *)(param_1[0x25] + 8 + (longlong)(int)plVar6 * 8));
      uVar15 = (int)plVar6 + 1;
      uVar13 = (uint)lVar10 | 1;
      local_23c = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> local_23c == 0; local_23c = local_23c + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_23c * 9 + 0x49U >> 6) + lVar10;
      plVar6 = (longlong *)(ulonglong)uVar15;
    } while (uVar15 < uVar3);
  }
  uVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x26);
  lVar7 = (ulonglong)uVar3 * 2 + lVar7;
  iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 0x26);
  plVar6 = plVar16;
  if (0 < iVar4) {
    do {
      lVar10 = FUN_1439f1d30(param_1 + 0x26,plVar6);
      uVar13 = (int)plVar6 + 1;
      uVar3 = (uint)*(longlong *)(lVar10 + 0x10) | 1;
      local_238 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> local_238 == 0; local_238 = local_238 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_238 * 9 + 0x49U >> 6) + *(longlong *)(lVar10 + 0x10);
      plVar6 = (longlong *)(ulonglong)uVar13;
    } while ((int)uVar13 < iVar4);
  }
  uVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x29);
  lVar7 = lVar7 + (ulonglong)uVar3 * 2;
  iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 0x29);
  plVar6 = plVar16;
  if (0 < iVar4) {
    do {
      lVar10 = FUN_1439f1d30(param_1 + 0x29,plVar6);
      uVar13 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar13;
      uVar3 = (uint)*(longlong *)(lVar10 + 0x10) | 1;
      local_234 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> local_234 == 0; local_234 = local_234 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_234 * 9 + 0x49U >> 6) + *(longlong *)(lVar10 + 0x10);
    } while ((int)uVar13 < iVar4);
  }
  uVar3 = *(uint *)(param_1 + 0x2d);
  lVar7 = lVar7 + (ulonglong)(uVar3 * 2);
  plVar6 = plVar16;
  if (uVar3 != 0) {
    do {
      lVar10 = FUN_141546290(*(undefined8 *)(param_1[0x2e] + 8 + (longlong)(int)plVar6 * 8));
      uVar15 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar15;
      uVar13 = (uint)lVar10 | 1;
      local_230 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> local_230 == 0; local_230 = local_230 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_230 * 9 + 0x49U >> 6) + lVar10;
    } while (uVar15 < uVar3);
  }
  uVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x2f);
  lVar7 = lVar7 + (ulonglong)uVar3 * 2;
  iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 0x2f);
  plVar6 = plVar16;
  if (0 < iVar4) {
    do {
      lVar10 = FUN_1439f1d30(param_1 + 0x2f,plVar6);
      uVar13 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar13;
      uVar3 = (uint)*(longlong *)(lVar10 + 0x10) | 1;
      local_22c = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> local_22c == 0; local_22c = local_22c + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_22c * 9 + 0x49U >> 6) + *(longlong *)(lVar10 + 0x10);
    } while ((int)uVar13 < iVar4);
  }
  uVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x32);
  lVar7 = lVar7 + (ulonglong)uVar3 * 2;
  iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 0x32);
  plVar6 = plVar16;
  if (0 < iVar4) {
    do {
      lVar10 = FUN_1439f1d30(param_1 + 0x32,plVar6);
      uVar13 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar13;
      uVar3 = (uint)*(longlong *)(lVar10 + 0x10) | 1;
      local_228 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> local_228 == 0; local_228 = local_228 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_228 * 9 + 0x49U >> 6) + *(longlong *)(lVar10 + 0x10);
    } while ((int)uVar13 < iVar4);
  }
  uVar3 = *(uint *)(param_1 + 0x36);
  lVar7 = (ulonglong)(uVar3 * 2) + lVar7;
  plVar6 = plVar16;
  if (uVar3 != 0) {
    do {
      lVar10 = *(longlong *)(param_1[0x37] + 8 + (longlong)(int)plVar6 * 8);
      plVar8 = plVar16;
      if ((*(byte *)(lVar10 + 8) & 1) != 0) {
        plVar8 = (longlong *)FUN_143a19d80(*(ulonglong *)(lVar10 + 8) & 0xfffffffffffffffe);
      }
      lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x10);
      if (lVar12 != 0) {
        uVar13 = (uint)lVar12 | 1;
        local_224 = 0x1f;
        if (uVar13 != 0) {
          for (; uVar13 >> local_224 == 0; local_224 = local_224 + -1) {
          }
        }
        plVar8 = (longlong *)
                 ((longlong)plVar8 + (ulonglong)(local_224 * 9 + 0x49U >> 6) + 1 + lVar12);
      }
      lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x18) + 0x10);
      if (lVar12 != 0) {
        uVar13 = (uint)lVar12 | 1;
        local_220 = 0x1f;
        if (uVar13 != 0) {
          for (; uVar13 >> local_220 == 0; local_220 = local_220 + -1) {
          }
        }
        plVar8 = (longlong *)
                 ((longlong)plVar8 + (ulonglong)(local_220 * 9 + 0x49U >> 6) + 1 + lVar12);
      }
      uVar13 = *(uint *)(lVar10 + 0x20);
      if (uVar13 != 0) {
        if ((int)uVar13 < 0) {
          uVar9 = 10;
        }
        else {
          local_21c = 0x1f;
          if ((uVar13 | 1) != 0) {
            for (; (uVar13 | 1) >> local_21c == 0; local_21c = local_21c + -1) {
            }
          }
          uVar9 = (ulonglong)(local_21c * 9 + 0x49U >> 6);
        }
        plVar8 = (longlong *)((longlong)plVar8 + uVar9 + 1);
      }
      *(uint *)(lVar10 + 0x24) = (uint)plVar8;
      uVar13 = (uint)plVar8 | 1;
      uVar15 = (int)plVar6 + 1;
      local_218 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> local_218 == 0; local_218 = local_218 + -1) {
        }
      }
      lVar7 = (longlong)plVar8 + lVar7 + (ulonglong)(local_218 * 9 + 0x49U >> 6);
      plVar6 = (longlong *)(ulonglong)uVar15;
    } while (uVar15 < uVar3);
  }
  uVar3 = *(uint *)(param_1 + 0x39);
  lVar7 = lVar7 + (ulonglong)(uVar3 * 2);
  plVar6 = plVar16;
  if (uVar3 != 0) {
    do {
      lVar10 = FUN_141501a10(*(undefined8 *)(param_1[0x3a] + 8 + (longlong)(int)plVar6 * 8));
      uVar15 = (int)plVar6 + 1;
      uVar13 = (uint)lVar10 | 1;
      local_214 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> local_214 == 0; local_214 = local_214 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_214 * 9 + 0x49U >> 6) + lVar10;
      plVar6 = (longlong *)(ulonglong)uVar15;
    } while (uVar15 < uVar3);
  }
  uVar3 = *(uint *)(param_1 + 0x3c);
  lVar7 = lVar7 + (ulonglong)(uVar3 * 2);
  plVar6 = plVar16;
  if (uVar3 != 0) {
    do {
      lVar10 = FUN_141520340(*(undefined8 *)(param_1[0x3d] + 8 + (longlong)(int)plVar6 * 8));
      uVar15 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar15;
      uVar13 = (uint)lVar10 | 1;
      local_210 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> local_210 == 0; local_210 = local_210 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_210 * 9 + 0x49U >> 6) + lVar10;
    } while (uVar15 < uVar3);
  }
  uVar3 = *(uint *)(param_1 + 0x3f);
  lVar7 = lVar7 + (ulonglong)(uVar3 * 2);
  plVar6 = plVar16;
  if (uVar3 != 0) {
    do {
      lVar10 = FUN_141546230(*(undefined8 *)(param_1[0x40] + 8 + (longlong)(int)plVar6 * 8));
      uVar15 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar15;
      uVar13 = (uint)lVar10 | 1;
      local_20c = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> local_20c == 0; local_20c = local_20c + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_20c * 9 + 0x49U >> 6) + lVar10;
    } while (uVar15 < uVar3);
  }
  uVar3 = *(uint *)(param_1 + 0x42);
  lVar7 = lVar7 + (ulonglong)(uVar3 * 2);
  plVar6 = plVar16;
  if (uVar3 != 0) {
    do {
      lVar10 = FUN_141520340(*(undefined8 *)(param_1[0x43] + 8 + (longlong)(int)plVar6 * 8));
      uVar15 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar15;
      uVar13 = (uint)lVar10 | 1;
      local_208 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> local_208 == 0; local_208 = local_208 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_208 * 9 + 0x49U >> 6) + lVar10;
    } while (uVar15 < uVar3);
  }
  uVar3 = *(uint *)(param_1 + 0x45);
  lVar7 = lVar7 + (ulonglong)(uVar3 * 2);
  plVar6 = plVar16;
  if (uVar3 != 0) {
    do {
      lVar10 = FUN_141520340(*(undefined8 *)(param_1[0x46] + 8 + (longlong)(int)plVar6 * 8));
      uVar15 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar15;
      uVar13 = (uint)lVar10 | 1;
      local_204 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> local_204 == 0; local_204 = local_204 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_204 * 9 + 0x49U >> 6) + lVar10;
    } while (uVar15 < uVar3);
  }
  uVar3 = *(uint *)(param_1 + 0x48);
  lVar7 = lVar7 + (ulonglong)(uVar3 * 2);
  plVar6 = plVar16;
  if (uVar3 != 0) {
    do {
      lVar10 = FUN_1415464e0(*(undefined8 *)(param_1[0x49] + 8 + (longlong)(int)plVar6 * 8));
      uVar15 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar15;
      uVar13 = (uint)lVar10 | 1;
      local_200 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> local_200 == 0; local_200 = local_200 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_200 * 9 + 0x49U >> 6) + lVar10;
    } while (uVar15 < uVar3);
  }
  uVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x4a);
  lVar7 = lVar7 + (ulonglong)uVar3 * 2;
  iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 0x4a);
  plVar6 = plVar16;
  if (0 < iVar4) {
    do {
      lVar10 = FUN_1439f1d30(param_1 + 0x4a,plVar6);
      uVar13 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar13;
      uVar3 = (uint)*(longlong *)(lVar10 + 0x10) | 1;
      local_1fc = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> local_1fc == 0; local_1fc = local_1fc + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_1fc * 9 + 0x49U >> 6) + *(longlong *)(lVar10 + 0x10);
    } while ((int)uVar13 < iVar4);
  }
  uVar3 = *(uint *)(param_1 + 0x4e);
  lVar7 = (ulonglong)(uVar3 * 2) + lVar7;
  plVar6 = plVar16;
  if (uVar3 != 0) {
    do {
      lVar10 = FUN_141545ef0(*(undefined8 *)(param_1[0x4f] + 8 + (longlong)(int)plVar6 * 8));
      uVar15 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar15;
      uVar13 = (uint)lVar10 | 1;
      local_1f8 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> local_1f8 == 0; local_1f8 = local_1f8 + -1) {
        }
      }
      lVar7 = lVar7 + (ulonglong)(local_1f8 * 9 + 0x49U >> 6) + lVar10;
    } while (uVar15 < uVar3);
  }
  lVar10 = FUN_1439fa120(param_1 + 0x50);
  uVar3 = (uint)lVar10;
  if (lVar10 != 0) {
    if ((int)uVar3 < 0) {
      uVar9 = 10;
    }
    else {
      local_1f4 = 0x1f;
      if ((uVar3 | 1) != 0) {
        for (; (uVar3 | 1) >> local_1f4 == 0; local_1f4 = local_1f4 + -1) {
        }
      }
      uVar9 = (ulonglong)(local_1f4 * 9 + 0x49U >> 6);
    }
    lVar7 = lVar7 + 2 + uVar9;
  }
  *(uint *)(param_1 + 0x52) = uVar3;
  uVar3 = *(uint *)(param_1 + 0x54);
  lVar10 = (ulonglong)(uVar3 * 2) + lVar7 + lVar10;
  iVar4 = (int)lVar10;
  plVar6 = plVar16;
  if (uVar3 != 0) {
    do {
      lVar7 = *(longlong *)(param_1[0x55] + 8 + (longlong)(int)plVar6 * 8);
      plVar8 = plVar16;
      if ((*(byte *)(lVar7 + 8) & 1) != 0) {
        plVar8 = (longlong *)FUN_143a19d80(*(ulonglong *)(lVar7 + 8) & 0xfffffffffffffffe);
      }
      lVar12 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x10);
      if (lVar12 != 0) {
        uVar13 = (uint)lVar12 | 1;
        local_1f0 = 0x1f;
        if (uVar13 != 0) {
          for (; uVar13 >> local_1f0 == 0; local_1f0 = local_1f0 + -1) {
          }
        }
        plVar8 = (longlong *)
                 ((longlong)plVar8 + (ulonglong)(local_1f0 * 9 + 0x49U >> 6) + 1 + lVar12);
      }
      lVar12 = *(longlong *)(*(longlong *)(lVar7 + 0x18) + 0x10);
      if (lVar12 != 0) {
        uVar13 = (uint)lVar12 | 1;
        local_1ec = 0x1f;
        if (uVar13 != 0) {
          for (; uVar13 >> local_1ec == 0; local_1ec = local_1ec + -1) {
          }
        }
        plVar8 = (longlong *)
                 ((longlong)plVar8 + (ulonglong)(local_1ec * 9 + 0x49U >> 6) + 1 + lVar12);
      }
      plVar14 = (longlong *)((longlong)plVar8 + 2);
      if (*(char *)(lVar7 + 0x20) == '\0') {
        plVar14 = plVar8;
      }
      uVar15 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar15;
      *(uint *)(lVar7 + 0x24) = (uint)plVar14;
      uVar13 = (uint)plVar14 | 1;
      local_1e8 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> local_1e8 == 0; local_1e8 = local_1e8 + -1) {
        }
      }
      lVar10 = (longlong)plVar14 + lVar10 + (ulonglong)(local_1e8 * 9 + 0x49U >> 6);
      iVar4 = (int)lVar10;
    } while (uVar15 < uVar3);
  }
  if (*(longlong *)(param_1[0x56] + 0x10) != 0) {
    uVar3 = (uint)*(longlong *)(param_1[0x56] + 0x10);
    uVar13 = uVar3 | 1;
    local_1e4 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> local_1e4 == 0; local_1e4 = local_1e4 + -1) {
      }
    }
    iVar4 = iVar4 + (local_1e4 * 9 + 0x49U >> 6) + 2 + uVar3;
  }
  if (*(longlong *)(param_1[0x57] + 0x10) != 0) {
    uVar3 = (uint)*(longlong *)(param_1[0x57] + 0x10);
    uVar13 = uVar3 | 1;
    local_1e0 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> local_1e0 == 0; local_1e0 = local_1e0 + -1) {
      }
    }
    iVar4 = iVar4 + (local_1e0 * 9 + 0x49U >> 6) + 2 + uVar3;
  }
  if (param_1 != &DAT_1468a4910) {
    lVar7 = param_1[0x58];
    if (lVar7 != 0) {
      plVar6 = plVar16;
      if ((*(byte *)(lVar7 + 8) & 1) != 0) {
        plVar6 = (longlong *)FUN_143a19d80(*(ulonglong *)(lVar7 + 8) & 0xfffffffffffffffe);
      }
      uVar3 = *(uint *)(lVar7 + 0x18);
      lVar10 = (longlong)plVar6 + (ulonglong)uVar3;
      uVar13 = (uint)lVar10;
      plVar6 = plVar16;
      if (uVar3 != 0) {
        do {
          lVar12 = FUN_141501ef0(*(undefined8 *)
                                  (*(longlong *)(lVar7 + 0x20) + 8 + (longlong)(int)plVar6 * 8));
          uVar15 = (int)plVar6 + 1;
          plVar6 = (longlong *)(ulonglong)uVar15;
          uVar13 = (uint)lVar12 | 1;
          local_1dc = 0x1f;
          if (uVar13 != 0) {
            for (; uVar13 >> local_1dc == 0; local_1dc = local_1dc + -1) {
            }
          }
          lVar10 = lVar10 + (ulonglong)(local_1dc * 9 + 0x49U >> 6) + lVar12;
          uVar13 = (uint)lVar10;
        } while (uVar15 < uVar3);
      }
      *(uint *)(lVar7 + 0x28) = uVar13;
      local_1d8 = 0x1f;
      if ((uVar13 | 1) != 0) {
        for (; (uVar13 | 1) >> local_1d8 == 0; local_1d8 = local_1d8 + -1) {
        }
      }
      iVar4 = iVar4 + 2 + (local_1d8 * 9 + 0x49U >> 6) + uVar13;
    }
    if (param_1 != &DAT_1468a4910) {
      lVar7 = param_1[0x59];
      if (lVar7 != 0) {
        plVar6 = plVar16;
        if ((*(byte *)(lVar7 + 8) & 1) != 0) {
          plVar6 = (longlong *)FUN_143a19d80(*(ulonglong *)(lVar7 + 8) & 0xfffffffffffffffe);
        }
        uVar3 = IStreamingManager::GetNumWantingResources(lVar7 + 0x10);
        lVar10 = (longlong)plVar6 + (ulonglong)uVar3;
        uVar3 = (uint)lVar10;
        iVar5 = IStreamingManager::GetNumWantingResources(lVar7 + 0x10);
        if (0 < iVar5) {
          do {
            lVar12 = FUN_1439f1d30(lVar7 + 0x10,plVar16);
            uVar13 = (int)plVar16 + 1;
            plVar16 = (longlong *)(ulonglong)uVar13;
            uVar3 = (uint)*(longlong *)(lVar12 + 0x10) | 1;
            local_1d4 = 0x1f;
            if (uVar3 != 0) {
              for (; uVar3 >> local_1d4 == 0; local_1d4 = local_1d4 + -1) {
              }
            }
            lVar10 = lVar10 + (ulonglong)(local_1d4 * 9 + 0x49U >> 6) + *(longlong *)(lVar12 + 0x10)
            ;
            uVar3 = (uint)lVar10;
          } while ((int)uVar13 < iVar5);
        }
        uVar13 = uVar3 + 2;
        if (*(char *)(lVar7 + 0x28) == '\0') {
          uVar13 = uVar3;
        }
        uVar3 = uVar13 + 2;
        if (*(char *)(lVar7 + 0x29) == '\0') {
          uVar3 = uVar13;
        }
        *(uint *)(lVar7 + 0x2c) = uVar3;
        local_1d0 = 0x1f;
        if ((uVar3 | 1) != 0) {
          for (; (uVar3 | 1) >> local_1d0 == 0; local_1d0 = local_1d0 + -1) {
          }
        }
        iVar4 = iVar4 + (local_1d0 * 9 + 0x49U >> 6) + 2 + uVar3;
      }
      if (param_1 != &DAT_1468a4910) {
        if (param_1[0x5a] != 0) {
          uVar3 = FUN_1415017f0();
          local_1cc = 0x1f;
          if ((uVar3 | 1) != 0) {
            for (; (uVar3 | 1) >> local_1cc == 0; local_1cc = local_1cc + -1) {
            }
          }
          iVar4 = iVar4 + (local_1cc * 9 + 0x49U >> 6) + 2 + uVar3;
        }
        if ((param_1 != &DAT_1468a4910) && (param_1[0x5b] != 0)) {
          uVar3 = FUN_141546a60();
          iVar5 = 0x1f;
          if ((uVar3 | 1) != 0) {
            for (; (uVar3 | 1) >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2 + uVar3;
        }
      }
    }
  }
  iVar5 = iVar4 + 2;
  if (*(char *)(param_1 + 0x5c) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 2;
  if (*(char *)((longlong)param_1 + 0x2e1) == '\0') {
    iVar4 = iVar5;
  }
  iVar5 = iVar4 + 2;
  if (*(char *)((longlong)param_1 + 0x2e2) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 2;
  if (*(char *)((longlong)param_1 + 0x2e3) == '\0') {
    iVar4 = iVar5;
  }
  iVar5 = iVar4 + 2;
  if (*(char *)((longlong)param_1 + 0x2e4) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 2;
  if (*(char *)((longlong)param_1 + 0x2e5) == '\0') {
    iVar4 = iVar5;
  }
  iVar5 = iVar4 + 2;
  if (*(char *)((longlong)param_1 + 0x2e6) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 2;
  if (*(char *)((longlong)param_1 + 0x2e7) == '\0') {
    iVar4 = iVar5;
  }
  if (*(float *)(param_1 + 0x5d) != 0.0) {
    iVar4 = iVar4 + 5;
  }
  iVar5 = iVar4 + 2;
  if (*(char *)((longlong)param_1 + 0x2ec) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 2;
  if (*(char *)((longlong)param_1 + 0x2ed) == '\0') {
    iVar4 = iVar5;
  }
  iVar5 = iVar4 + 2;
  if (*(char *)((longlong)param_1 + 0x2ee) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 2;
  if (*(char *)((longlong)param_1 + 0x2ef) == '\0') {
    iVar4 = iVar5;
  }
  iVar5 = iVar4 + 2;
  if (*(char *)(param_1 + 0x5e) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 2;
  if (*(char *)((longlong)param_1 + 0x2f1) == '\0') {
    iVar4 = iVar5;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)((longlong)param_1 + 0x2f2) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x2f3) == '\0') {
    iVar4 = iVar5;
  }
  if (*(float *)((longlong)param_1 + 0x2f4) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x5f) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 0x2fc) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x60) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)((longlong)param_1 + 0x304) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x305) == '\0') {
    iVar4 = iVar5;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)((longlong)param_1 + 0x306) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x307) == '\0') {
    iVar4 = iVar5;
  }
  if (*(float *)(param_1 + 0x61) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 0x30c) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x62) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(uint *)((longlong)param_1 + 0x314) != 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0x314) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)(param_1 + 99) != 0) {
    uVar3 = *(uint *)(param_1 + 99) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  uVar3 = *(uint *)((longlong)param_1 + 0x31c);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
      uVar3 = 10;
    }
    else {
      iVar5 = 0x1f;
      if ((uVar3 | 1) != 0) {
        for (; (uVar3 | 1) >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar3 = iVar5 * 9 + 0x49U >> 6;
    }
    iVar4 = iVar4 + 2 + uVar3;
  }
  uVar3 = *(uint *)(param_1 + 100);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
      uVar3 = 10;
    }
    else {
      iVar5 = 0x1f;
      if ((uVar3 | 1) != 0) {
        for (; (uVar3 | 1) >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar3 = iVar5 * 9 + 0x49U >> 6;
    }
    iVar4 = iVar4 + 2 + uVar3;
  }
  uVar3 = *(uint *)((longlong)param_1 + 0x324);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
      uVar3 = 10;
    }
    else {
      iVar5 = 0x1f;
      if ((uVar3 | 1) != 0) {
        for (; (uVar3 | 1) >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar3 = iVar5 * 9 + 0x49U >> 6;
    }
    iVar4 = iVar4 + 2 + uVar3;
  }
  if (*(float *)(param_1 + 0x65) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 0x32c) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x66) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 0x334) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x67) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 0x33c) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x68) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 0x344) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x69) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 0x34c) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x6a) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 0x354) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x6b) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)((longlong)param_1 + 0x35c) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x35d) == '\0') {
    iVar4 = iVar5;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)((longlong)param_1 + 0x35e) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x35f) == '\0') {
    iVar4 = iVar5;
  }
  if (*(float *)(param_1 + 0x6c) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 0x364) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x6d) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 0x36c) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x6e) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 0x374) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x6f) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 0x37c) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x70) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 900) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x71) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 0x38c) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x72) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 0x394) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x73) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 0x39c) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x74) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 0x3a4) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x75) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 0x3ac) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x76) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 0x3b4) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x77) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(uint *)((longlong)param_1 + 0x3bc) != 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0x3bc) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)(param_1 + 0x78) != 0) {
    uVar3 = *(uint *)(param_1 + 0x78) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(float *)((longlong)param_1 + 0x3c4) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x79) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)((longlong)param_1 + 0x3cc) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x3cd) == '\0') {
    iVar4 = iVar5;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)((longlong)param_1 + 0x3ce) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x3cf) == '\0') {
    iVar4 = iVar5;
  }
  if (*(uint *)(param_1 + 0x7a) != 0) {
    uVar3 = *(uint *)(param_1 + 0x7a) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)((longlong)param_1 + 0x3d4) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x3d5) == '\0') {
    iVar4 = iVar5;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)((longlong)param_1 + 0x3d6) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x3d7) == '\0') {
    iVar4 = iVar5;
  }
  if (*(uint *)(param_1 + 0x7b) != 0) {
    uVar3 = *(uint *)(param_1 + 0x7b) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(float *)((longlong)param_1 + 0x3dc) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(uint *)(param_1 + 0x7c) != 0) {
    uVar3 = *(uint *)(param_1 + 0x7c) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)((longlong)param_1 + 0x3e4) != 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0x3e4) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)(param_1 + 0x7d) != 0) {
    uVar3 = *(uint *)(param_1 + 0x7d) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)((longlong)param_1 + 0x3ec) != 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0x3ec) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)(param_1 + 0x7e) != 0) {
    uVar3 = *(uint *)(param_1 + 0x7e) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)((longlong)param_1 + 0x3f4) != 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0x3f4) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  uVar3 = *(uint *)(param_1 + 0x7f);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
      uVar3 = 10;
    }
    else {
      iVar5 = 0x1f;
      if ((uVar3 | 1) != 0) {
        for (; (uVar3 | 1) >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar3 = iVar5 * 9 + 0x49U >> 6;
    }
    iVar4 = iVar4 + 2 + uVar3;
  }
  uVar3 = *(uint *)((longlong)param_1 + 0x3fc);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
      uVar3 = 10;
    }
    else {
      iVar5 = 0x1f;
      if ((uVar3 | 1) != 0) {
        for (; (uVar3 | 1) >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar3 = iVar5 * 9 + 0x49U >> 6;
    }
    iVar4 = iVar4 + 2 + uVar3;
  }
  if (param_1[0x80] != 0) {
    uVar9 = param_1[0x80] | 1;
    lVar7 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar4 = iVar4 + ((int)lVar7 * 9 + 0x49U >> 6) + 2;
  }
  if (param_1[0x81] != 0) {
    uVar9 = param_1[0x81] | 1;
    lVar7 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar4 = iVar4 + ((int)lVar7 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)(param_1 + 0x82) != 0) {
    uVar3 = *(uint *)(param_1 + 0x82) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)((longlong)param_1 + 0x414) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x415) == '\0') {
    iVar4 = iVar5;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)((longlong)param_1 + 0x416) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x417) == '\0') {
    iVar4 = iVar5;
  }
  uVar3 = *(uint *)(param_1 + 0x83);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
      uVar3 = 10;
    }
    else {
      iVar5 = 0x1f;
      if ((uVar3 | 1) != 0) {
        for (; (uVar3 | 1) >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar3 = iVar5 * 9 + 0x49U >> 6;
    }
    iVar4 = iVar4 + 2 + uVar3;
  }
  if (*(float *)((longlong)param_1 + 0x41c) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(uint *)(param_1 + 0x84) != 0) {
    uVar3 = *(uint *)(param_1 + 0x84) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)((longlong)param_1 + 0x424) != 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0x424) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)(param_1 + 0x85) != 0) {
    uVar3 = *(uint *)(param_1 + 0x85) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(float *)((longlong)param_1 + 0x42c) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(uint *)(param_1 + 0x86) != 0) {
    uVar3 = *(uint *)(param_1 + 0x86) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)((longlong)param_1 + 0x434) != 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0x434) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)(param_1 + 0x87) != 0) {
    uVar3 = *(uint *)(param_1 + 0x87) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)((longlong)param_1 + 0x43c) != 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0x43c) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)(param_1 + 0x88) != 0) {
    uVar3 = *(uint *)(param_1 + 0x88) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)((longlong)param_1 + 0x444) != 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0x444) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)(param_1 + 0x89) != 0) {
    uVar3 = *(uint *)(param_1 + 0x89) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)((longlong)param_1 + 0x44c) != 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0x44c) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)(param_1 + 0x8a) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x451) == '\0') {
    iVar4 = iVar5;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)((longlong)param_1 + 0x452) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x453) == '\0') {
    iVar4 = iVar5;
  }
  if (*(uint *)((longlong)param_1 + 0x454) != 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0x454) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)(param_1 + 0x8b) != 0) {
    uVar3 = *(uint *)(param_1 + 0x8b) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)((longlong)param_1 + 0x45c) != 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0x45c) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)(param_1 + 0x8c) != 0) {
    uVar3 = *(uint *)(param_1 + 0x8c) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)((longlong)param_1 + 0x464) != 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0x464) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)(param_1 + 0x8d) != 0) {
    uVar3 = *(uint *)(param_1 + 0x8d) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)((longlong)param_1 + 0x46c) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x46d) == '\0') {
    iVar4 = iVar5;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)((longlong)param_1 + 0x46e) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x46f) == '\0') {
    iVar4 = iVar5;
  }
  if (*(uint *)(param_1 + 0x8e) != 0) {
    uVar3 = *(uint *)(param_1 + 0x8e) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)((longlong)param_1 + 0x474) != 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0x474) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)(param_1 + 0x8f) != 0) {
    uVar3 = *(uint *)(param_1 + 0x8f) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(float *)((longlong)param_1 + 0x47c) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x90) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 0x484) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(uint *)(param_1 + 0x91) != 0) {
    uVar3 = *(uint *)(param_1 + 0x91) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)((longlong)param_1 + 0x48c) != 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0x48c) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  if (*(uint *)(param_1 + 0x92) != 0) {
    uVar3 = *(uint *)(param_1 + 0x92) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)((longlong)param_1 + 0x494) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x495) == '\0') {
    iVar4 = iVar5;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)((longlong)param_1 + 0x496) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x497) == '\0') {
    iVar4 = iVar5;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)(param_1 + 0x93) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x499) == '\0') {
    iVar4 = iVar5;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)((longlong)param_1 + 0x49a) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x49b) == '\0') {
    iVar4 = iVar5;
  }
  uVar3 = *(uint *)((longlong)param_1 + 0x49c);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
      uVar3 = 10;
    }
    else {
      iVar5 = 0x1f;
      if ((uVar3 | 1) != 0) {
        for (; (uVar3 | 1) >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar3 = iVar5 * 9 + 0x49U >> 6;
    }
    iVar4 = iVar4 + 2 + uVar3;
  }
  if (*(float *)(param_1 + 0x94) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  uVar3 = *(uint *)((longlong)param_1 + 0x4a4);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
      uVar3 = 10;
    }
    else {
      iVar5 = 0x1f;
      if ((uVar3 | 1) != 0) {
        for (; (uVar3 | 1) >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar3 = iVar5 * 9 + 0x49U >> 6;
    }
    iVar4 = iVar4 + 2 + uVar3;
  }
  uVar3 = *(uint *)(param_1 + 0x95);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
      uVar3 = 10;
    }
    else {
      iVar5 = 0x1f;
      if ((uVar3 | 1) != 0) {
        for (; (uVar3 | 1) >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar3 = iVar5 * 9 + 0x49U >> 6;
    }
    iVar4 = iVar4 + 2 + uVar3;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)((longlong)param_1 + 0x4ac) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x4ad) == '\0') {
    iVar4 = iVar5;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)((longlong)param_1 + 0x4ae) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x4af) == '\0') {
    iVar4 = iVar5;
  }
  if (*(uint *)(param_1 + 0x96) != 0) {
    uVar3 = *(uint *)(param_1 + 0x96) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  uVar3 = *(uint *)((longlong)param_1 + 0x4b4);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
      uVar3 = 10;
    }
    else {
      iVar5 = 0x1f;
      if ((uVar3 | 1) != 0) {
        for (; (uVar3 | 1) >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar3 = iVar5 * 9 + 0x49U >> 6;
    }
    iVar4 = iVar4 + 2 + uVar3;
  }
  if (*(float *)(param_1 + 0x97) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 0x4bc) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  uVar3 = *(uint *)(param_1 + 0x98);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
      uVar3 = 10;
    }
    else {
      iVar5 = 0x1f;
      if ((uVar3 | 1) != 0) {
        for (; (uVar3 | 1) >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar3 = iVar5 * 9 + 0x49U >> 6;
    }
    iVar4 = iVar4 + 2 + uVar3;
  }
  if (*(float *)((longlong)param_1 + 0x4c4) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)(param_1 + 0x99) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  uVar3 = *(uint *)((longlong)param_1 + 0x4cc);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
      uVar3 = 10;
    }
    else {
      iVar5 = 0x1f;
      if ((uVar3 | 1) != 0) {
        for (; (uVar3 | 1) >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar3 = iVar5 * 9 + 0x49U >> 6;
    }
    iVar4 = iVar4 + 2 + uVar3;
  }
  if (*(float *)(param_1 + 0x9a) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  if (*(float *)((longlong)param_1 + 0x4d4) != 0.0) {
    iVar4 = iVar4 + 6;
  }
  uVar3 = *(uint *)(param_1 + 0x9b);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
      uVar3 = 10;
    }
    else {
      iVar5 = 0x1f;
      if ((uVar3 | 1) != 0) {
        for (; (uVar3 | 1) >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar3 = iVar5 * 9 + 0x49U >> 6;
    }
    iVar4 = iVar4 + 2 + uVar3;
  }
  uVar3 = *(uint *)((longlong)param_1 + 0x4dc);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
      uVar3 = 10;
    }
    else {
      iVar5 = 0x1f;
      if ((uVar3 | 1) != 0) {
        for (; (uVar3 | 1) >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar3 = iVar5 * 9 + 0x49U >> 6;
    }
    iVar4 = iVar4 + 2 + uVar3;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)(param_1 + 0x9c) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x4e1) == '\0') {
    iVar4 = iVar5;
  }
  iVar5 = iVar4 + 3;
  if (*(char *)((longlong)param_1 + 0x4e2) == '\0') {
    iVar5 = iVar4;
  }
  iVar4 = iVar5 + 3;
  if (*(char *)((longlong)param_1 + 0x4e3) == '\0') {
    iVar4 = iVar5;
  }
  if (*(uint *)((longlong)param_1 + 0x4e4) != 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0x4e4) | 1;
    iVar5 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = iVar4 + (iVar5 * 9 + 0x49U >> 6) + 2;
  }
  uVar3 = *(uint *)((longlong)param_1 + 0x4ec);
  iVar5 = iVar4 + 3;
  if (*(char *)(param_1 + 0x9d) == '\0') {
    iVar5 = iVar4;
  }
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
      uVar3 = 10;
    }
    else {
      iVar4 = 0x1f;
      if ((uVar3 | 1) != 0) {
        for (; (uVar3 | 1) >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      uVar3 = iVar4 * 9 + 0x49U >> 6;
    }
    iVar5 = iVar5 + 2 + uVar3;
  }
  *(int *)(param_1 + 0x9e) = iVar5;
  return;
LAB_14150287d:
  uVar9 = local_290;
  lVar12 = *(longlong *)(lVar10 + local_290 * 8);
  goto LAB_141502912;
LAB_14150288b:
  uVar9 = local_290;
  lVar12 = *(longlong *)(**(longlong **)(*(longlong *)(lVar10 + local_290 * 8) + 8) + 0x20);
LAB_141502912:
  local_2a0 = lVar12;
  lVar10 = local_2a0;
  (**(code **)(param_1[0xe] + 0x90))(param_1 + 0xe);
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_270 = 0;
  local_a0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  plVar6 = plVar14;
  if (lVar10 == 0) goto code_r0x000141502963;
  goto LAB_141502520;
code_r0x000141502963:
  if (plVar14 != (longlong *)0x0) {
    (**(code **)*plVar14)(plVar14,1);
  }
  goto LAB_141502974;
}



// FUNCTION 1415042b0 FUN_1415042b0 body=147 status=ok
// SIG undefined FUN_1415042b0(void)

void FUN_1415042b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = 0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    iVar2 = FUN_143a19d80(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  if (lVar1 != 0) {
    uVar3 = (uint)lVar1;
    uVar5 = uVar3 | 1;
    iVar4 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    iVar2 = iVar2 + (iVar4 * 9 + 0x49U >> 6) + 1 + uVar3;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
  if (lVar1 != 0) {
    uVar3 = (uint)lVar1;
    uVar5 = uVar3 | 1;
    iVar4 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    iVar2 = iVar2 + (iVar4 * 9 + 0x49U >> 6) + 1 + uVar3;
  }
  iVar4 = iVar2 + 2;
  if (*(char *)(param_1 + 0x20) == '\0') {
    iVar4 = iVar2;
  }
  *(int *)(param_1 + 0x24) = iVar4;
  return;
}



// FUNCTION 141504360 FUN_141504360 body=102 status=ok
// SIG undefined FUN_141504360(void)

void FUN_141504360(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 != (undefined8 *)&DAT_146ba2f50) {
    puVar2[2] = 0;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined1 *)puVar2 = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined4 *)(lVar1 + 0x18) = 0;
    if (((*(byte *)(lVar1 + 8) & 1) != 0) &&
       (plVar3 = (longlong *)(*(ulonglong *)(lVar1 + 8) & 0xfffffffffffffffe), *plVar3 != plVar3[1])
       ) {
      FUN_1439fbee0();
    }
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffc;
  return;
}



// FUNCTION 1415043d0 FUN_1415043d0 body=45 status=ok
// SIG undefined FUN_1415043d0(void)

void FUN_1415043d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_141504400();
  }
  FUN_141514fd0(param_1 + 0x78);
  FUN_143a124c0(param_1);
  return;
}



// FUNCTION 141504400 FUN_141504400 body=95 status=ok
// SIG undefined FUN_141504400(void)

void FUN_141504400(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x10);
    do {
      (**(code **)(**(longlong **)(lVar2 + 8 + lVar3 * 8) + 0x30))();
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 141504460 FUN_141504460 body=90 status=ok
// SIG undefined FUN_141504460(void)

void FUN_141504460(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (((*(byte *)(param_1 + 8) & 1) == 0) ||
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 == plVar5[1])
     ) {
    return;
  }
  lVar11 = (longlong)(int)(plVar5[1] - *plVar5 >> 4);
  lVar10 = lVar11 << 4;
  do {
    lVar11 = lVar11 + -1;
    lVar10 = lVar10 + -0x10;
    lVar2 = *plVar5;
    iVar1 = *(int *)(lVar2 + 4 + lVar10);
    if (iVar1 == 3) {
      plVar9 = *(longlong **)(lVar2 + 8 + lVar10);
      if (plVar9 != (longlong *)0x0) {
        uVar3 = plVar9[3];
        if (0xf < uVar3) {
          uVar8 = uVar3 + 1;
          lVar2 = *plVar9;
          lVar6 = lVar2;
          if (0xfff < uVar8) {
            uVar8 = uVar3 + 0x28;
            lVar6 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar6,uVar8);
        }
        plVar9[2] = 0;
        plVar9[3] = 0xf;
        *(undefined1 *)plVar9 = 0;
        uVar7 = 0x20;
        goto LAB_1439fbfaf;
      }
    }
    else if ((iVar1 == 4) &&
            (plVar9 = *(longlong **)(lVar2 + 8 + lVar10), plVar9 != (longlong *)0x0)) {
      FUN_1439fbdd0(plVar9);
      FUN_1439fc6f0(plVar9);
      uVar7 = 0x18;
LAB_1439fbfaf:
      FMemory::operator_delete(plVar9,uVar7);
    }
    if (lVar11 < 1) {
      plVar5[1] = *plVar5;
      return;
    }
  } while( true );
}



// FUNCTION 1415044c0 FUN_1415044c0 body=215 status=ok
// SIG undefined FUN_1415044c0(void)

void FUN_1415044c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    lVar6 = 0;
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      *(undefined4 *)(lVar3 + 0x18) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 != plVar5[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 1415045a0 FUN_1415045a0 body=68 status=ok
// SIG undefined FUN_1415045a0(void)

void FUN_1415045a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (((*(byte *)(param_1 + 8) & 1) == 0) ||
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 == plVar5[1])
     ) {
    return;
  }
  lVar11 = (longlong)(int)(plVar5[1] - *plVar5 >> 4);
  lVar10 = lVar11 << 4;
  do {
    lVar11 = lVar11 + -1;
    lVar10 = lVar10 + -0x10;
    lVar2 = *plVar5;
    iVar1 = *(int *)(lVar2 + 4 + lVar10);
    if (iVar1 == 3) {
      plVar9 = *(longlong **)(lVar2 + 8 + lVar10);
      if (plVar9 != (longlong *)0x0) {
        uVar3 = plVar9[3];
        if (0xf < uVar3) {
          uVar8 = uVar3 + 1;
          lVar2 = *plVar9;
          lVar6 = lVar2;
          if (0xfff < uVar8) {
            uVar8 = uVar3 + 0x28;
            lVar6 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar6,uVar8);
        }
        plVar9[2] = 0;
        plVar9[3] = 0xf;
        *(undefined1 *)plVar9 = 0;
        uVar7 = 0x20;
        goto LAB_1439fbfaf;
      }
    }
    else if ((iVar1 == 4) &&
            (plVar9 = *(longlong **)(lVar2 + 8 + lVar10), plVar9 != (longlong *)0x0)) {
      FUN_1439fbdd0(plVar9);
      FUN_1439fc6f0(plVar9);
      uVar7 = 0x18;
LAB_1439fbfaf:
      FMemory::operator_delete(plVar9,uVar7);
    }
    if (lVar11 < 1) {
      plVar5[1] = *plVar5;
      return;
    }
  } while( true );
}



// FUNCTION 141504620 FUN_141504620 body=63 status=ok
// SIG undefined FUN_141504620(void)

void FUN_141504620(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1439f1c30(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0x28) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar1 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar1 != plVar1[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141504660 FUN_141504660 body=269 status=ok
// SIG undefined FUN_141504660(void)

void FUN_141504660(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  lVar6 = 0;
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      puVar4 = *(undefined8 **)(lVar3 + 0x18);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      *(undefined8 *)(lVar3 + 0x18) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 != plVar5[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141504770 FUN_141504770 body=112 status=ok
// SIG undefined FUN_141504770(void)

void FUN_141504770(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
    puVar1[2] = 0;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar1 = (undefined8 *)*puVar1;
    }
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar2 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar2 != plVar2[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 1415047e0 FUN_1415047e0 body=94 status=ok
// SIG undefined FUN_1415047e0(void)

void FUN_1415047e0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  FUN_1439f1c30(param_1 + 0x10);
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
    puVar1[2] = 0;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar1 = (undefined8 *)*puVar1;
    }
    *(undefined1 *)puVar1 = 0;
  }
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar2 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar2 != plVar2[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141504840 FUN_141504840 body=330 status=ok
// SIG undefined FUN_141504840(void)

void FUN_141504840(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x18);
  lVar7 = 0;
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar6 = lVar7;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      FUN_1439f1c30(lVar3 + 0x10);
      puVar4 = *(undefined8 **)(lVar3 + 0x28);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    do {
      FUN_141504660(*(undefined8 *)(lVar2 + 8 + lVar7 * 8));
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x40);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x48);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 != plVar5[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141504990 FUN_141504990 body=127 status=ok
// SIG undefined FUN_141504990(void)

void FUN_141504990(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    lVar4 = 0;
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      FUN_141504840(*(undefined8 *)(lVar2 + 8 + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar3 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar3 != plVar3[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141504a10 FUN_141504a10 body=1274 status=ok
// SIG undefined FUN_141504a10(void)

void FUN_141504a10(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x30);
  lVar7 = 0;
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar6 = lVar7;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      *(undefined4 *)(lVar3 + 0x18) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  FUN_1439f1c30(param_1 + 0x40);
  FUN_1439f1c30(param_1 + 0x58);
  (**(code **)(*(longlong *)(param_1 + 0x70) + 0x50))(param_1 + 0x70);
  iVar1 = *(int *)(param_1 + 0x108);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x110);
    lVar6 = lVar7;
    do {
      FUN_1415045a0(*(undefined8 *)(lVar2 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x120);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x128);
    lVar6 = lVar7;
    do {
      FUN_141525dc0(*(undefined8 *)(lVar2 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  FUN_1439f1c30(param_1 + 0x130);
  FUN_1439f1c30(param_1 + 0x148);
  iVar1 = *(int *)(param_1 + 0x168);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x170);
    lVar6 = lVar7;
    do {
      FUN_141546eb0(*(undefined8 *)(lVar2 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  FUN_1439f1c30(param_1 + 0x178);
  FUN_1439f1c30(param_1 + 400);
  iVar1 = *(int *)(param_1 + 0x1b0);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x1b8);
    lVar6 = lVar7;
    do {
      lVar3 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
      puVar4 = *(undefined8 **)(lVar3 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      puVar4 = *(undefined8 **)(lVar3 + 0x18);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      *(undefined4 *)(lVar3 + 0x20) = 0;
      if (((*(byte *)(lVar3 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x1b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1c8);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x1d0);
    lVar6 = lVar7;
    do {
      FUN_1415045a0(*(undefined8 *)(lVar2 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1e0);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x1e8);
    lVar6 = lVar7;
    do {
      FUN_141524e70(*(undefined8 *)(lVar2 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1f8);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x200);
    lVar6 = lVar7;
    do {
      FUN_141546e80(*(undefined8 *)(lVar2 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x1f8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x210);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x218);
    lVar6 = lVar7;
    do {
      FUN_141524e70(*(undefined8 *)(lVar2 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x210) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x228);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x230);
    lVar6 = lVar7;
    do {
      FUN_141524e70(*(undefined8 *)(lVar2 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x240);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x248);
    lVar6 = lVar7;
    do {
      FUN_141546fb0(*(undefined8 *)(lVar2 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x240) = 0;
  }
  FUN_1439f1c30(param_1 + 0x250);
  iVar1 = *(int *)(param_1 + 0x270);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x278);
    lVar6 = lVar7;
    do {
      FUN_141546d20(*(undefined8 *)(lVar2 + 8 + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar1);
    *(undefined4 *)(param_1 + 0x270) = 0;
  }
  icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(param_1 + 0x280);
  iVar1 = *(int *)(param_1 + 0x2a0);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x2a8);
    do {
      lVar6 = *(longlong *)(lVar2 + 8 + lVar7 * 8);
      puVar4 = *(undefined8 **)(lVar6 + 0x10);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      puVar4 = *(undefined8 **)(lVar6 + 0x18);
      if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
        puVar4[2] = 0;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar4 = 0;
      }
      *(undefined1 *)(lVar6 + 0x20) = 0;
      if (((*(byte *)(lVar6 + 8) & 1) != 0) &&
         (plVar5 = (longlong *)(*(ulonglong *)(lVar6 + 8) & 0xfffffffffffffffe),
         *plVar5 != plVar5[1])) {
        FUN_1439fbee0();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
    *(undefined4 *)(param_1 + 0x2a0) = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x2b0);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x2b8);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  if (*(undefined8 **)(param_1 + 0x2c0) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x2c0))();
  }
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  if (*(undefined8 **)(param_1 + 0x2c8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x2c8))();
  }
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  if (*(undefined8 **)(param_1 + 0x2d0) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x2d0))();
  }
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  if (*(undefined8 **)(param_1 + 0x2d8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x2d8))();
  }
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x2e0),0,0x210);
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 != plVar5[1])
     ) {
    FUN_1439fbee0();
    return;
  }
  return;
}



// FUNCTION 141504f10 FUN_141504f10 body=90 status=ok
// SIG undefined FUN_141504f10(void)

void FUN_141504f10(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  if (puVar4 != (undefined8 *)&DAT_146ba2f50) {
    puVar4[2] = 0;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (((*(byte *)(param_1 + 8) & 1) == 0) ||
     (plVar5 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe), *plVar5 == plVar5[1])
     ) {
    return;
  }
  lVar11 = (longlong)(int)(plVar5[1] - *plVar5 >> 4);
  lVar10 = lVar11 << 4;
  do {
    lVar11 = lVar11 + -1;
    lVar10 = lVar10 + -0x10;
    lVar2 = *plVar5;
    iVar1 = *(int *)(lVar2 + 4 + lVar10);
    if (iVar1 == 3) {
      plVar9 = *(longlong **)(lVar2 + 8 + lVar10);
      if (plVar9 != (longlong *)0x0) {
        uVar3 = plVar9[3];
        if (0xf < uVar3) {
          uVar8 = uVar3 + 1;
          lVar2 = *plVar9;
          lVar6 = lVar2;
          if (0xfff < uVar8) {
            uVar8 = uVar3 + 0x28;
            lVar6 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FMemory::operator_delete(lVar6,uVar8);
        }
        plVar9[2] = 0;
        plVar9[3] = 0xf;
        *(undefined1 *)plVar9 = 0;
        uVar7 = 0x20;
        goto LAB_1439fbfaf;
      }
    }
    else if ((iVar1 == 4) &&
            (plVar9 = *(longlong **)(lVar2 + 8 + lVar10), plVar9 != (longlong *)0x0)) {
      FUN_1439fbdd0(plVar9);
      FUN_1439fc6f0(plVar9);
      uVar7 = 0x18;
LAB_1439fbfaf:
      FMemory::operator_delete(plVar9,uVar7);
    }
    if (lVar11 < 1) {
      plVar5[1] = *plVar5;
      return;
    }
  } while( true );
}



// FUNCTION 141504f70 FUN_141504f70 body=164 status=ok
// SIG undefined FUN_141504f70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_141504f70(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [4];
  longlong local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1415060c0(param_2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_38,uVar1);
  FUN_140d2cbc0(*(undefined8 *)(param_1 + 0x88),local_58,local_38,0);
  if (0xf < local_20) {
    uVar3 = local_20 + 1;
    lVar2 = local_38[0];
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(local_38[0] + -8);
      uVar3 = local_20 + 0x28;
      if (0x1f < (local_38[0] - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar2,uVar3);
  }
  return local_58[0] != 0;
}



// FUNCTION 141505020 FUN_141505020 body=166 status=ok
// SIG undefined FUN_141505020(void)

void FUN_141505020(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141504460();
    if (DAT_1464a0390 != 0) {
      FUN_1439f44f0(&DAT_1464a0390);
    }
    lVar1 = (**(code **)(DAT_1468a46c0 + 0xb8))(&DAT_1468a46c0,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14150a550(param_1);
  }
  return;
}



// FUNCTION 1415050d0 FUN_1415050d0 body=166 status=ok
// SIG undefined FUN_1415050d0(void)

void FUN_1415050d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_1415044c0();
    if (DAT_1464a0438 != 0) {
      FUN_1439f44f0(&DAT_1464a0438);
    }
    lVar1 = (**(code **)(DAT_1468a4720 + 0xb8))(&DAT_1468a4720,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14150a6e0(param_1);
  }
  return;
}



// FUNCTION 141505180 FUN_141505180 body=223 status=ok
// SIG undefined FUN_141505180(void)

void FUN_141505180(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    *(undefined4 *)(param_1 + 3) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a03a8 != 0) {
      FUN_1439f44f0(&DAT_1464a03a8);
    }
    lVar2 = (**(code **)(DAT_1468a4768 + 0xb8))(&DAT_1468a4768,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14150a870(param_1);
  }
  return;
}



// FUNCTION 141505260 FUN_141505260 body=198 status=ok
// SIG undefined FUN_141505260(void)

void FUN_141505260(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a03c0 != 0) {
      FUN_1439f44f0(&DAT_1464a03c0);
    }
    lVar1 = (**(code **)(DAT_1468a4788 + 0xb8))(&DAT_1468a4788,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14150a9d0(param_1);
  }
  return;
}



// FUNCTION 141505330 FUN_141505330 body=223 status=ok
// SIG undefined FUN_141505330(void)

void FUN_141505330(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_2 != param_1) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
      puVar1[2] = 0;
      if (0xf < (ulonglong)puVar1[3]) {
        puVar1 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    *(undefined4 *)(param_1 + 3) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a03d8 != 0) {
      FUN_1439f44f0(&DAT_1464a03d8);
    }
    lVar2 = (**(code **)(DAT_1468a47a8 + 0xb8))(&DAT_1468a47a8,local_38);
    lVar2 = *(longlong *)(lVar2 + 8);
    lVar3 = (**(code **)(*param_2 + 0xb8))(param_2,local_28);
    plVar4 = param_2;
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14150a870(param_1);
  }
  return;
}



// FUNCTION 141505410 FUN_141505410 body=204 status=ok
// SIG undefined FUN_141505410(void)

void FUN_141505410(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_1439f1c30(param_1 + 2);
    *(undefined2 *)(param_1 + 5) = 0;
    if (((*(byte *)(param_1 + 1) & 1) != 0) &&
       (*(longlong *)(param_1[1] & 0xfffffffffffffffeU) !=
        ((longlong *)(param_1[1] & 0xfffffffffffffffeU))[1])) {
      FUN_1439fbee0();
    }
    if (DAT_1464a03f0 != 0) {
      FUN_1439f44f0(&DAT_1464a03f0);
    }
    lVar1 = (**(code **)(DAT_1468a47c8 + 0xb8))(&DAT_1468a47c8,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14150ab80(param_1);
  }
  return;
}



// FUNCTION 1415054e0 FUN_1415054e0 body=166 status=ok
// SIG undefined FUN_1415054e0(void)

void FUN_1415054e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141504660();
    if (DAT_1464a0468 != 0) {
      FUN_1439f44f0(&DAT_1464a0468);
    }
    lVar1 = (**(code **)(DAT_1468a46e8 + 0xb8))(&DAT_1468a46e8,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14150aca0(param_1);
  }
  return;
}



// FUNCTION 141505590 FUN_141505590 body=166 status=ok
// SIG undefined FUN_141505590(void)

void FUN_141505590(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141504770();
    if (DAT_1464a0450 != 0) {
      FUN_1439f44f0(&DAT_1464a0450);
    }
    lVar1 = (**(code **)(DAT_1468a47f8 + 0xb8))(&DAT_1468a47f8,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14150ae60(param_1);
  }
  return;
}



// FUNCTION 141505640 FUN_141505640 body=166 status=ok
// SIG undefined FUN_141505640(void)

void FUN_141505640(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_1415047e0();
    if (DAT_1464a0408 != 0) {
      FUN_1439f44f0(&DAT_1464a0408);
    }
    lVar1 = (**(code **)(DAT_1468a4820 + 0xb8))(&DAT_1468a4820,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14150aff0(param_1);
  }
  return;
}



// FUNCTION 1415056f0 FUN_1415056f0 body=166 status=ok
// SIG undefined FUN_1415056f0(void)

void FUN_1415056f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141504840();
    if (DAT_1464a04b0 != 0) {
      FUN_1439f44f0(&DAT_1464a04b0);
    }
    lVar1 = (**(code **)(DAT_1468a4880 + 0xb8))(&DAT_1468a4880,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14150b160(param_1);
  }
  return;
}



// FUNCTION 1415057a0 FUN_1415057a0 body=166 status=ok
// SIG undefined FUN_1415057a0(void)

void FUN_1415057a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141504990();
    if (DAT_1464a0480 != 0) {
      FUN_1439f44f0(&DAT_1464a0480);
    }
    lVar1 = (**(code **)(DAT_1468a48d8 + 0xb8))(&DAT_1468a48d8,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14150b380(param_1);
  }
  return;
}



// FUNCTION 141505850 FUN_141505850 body=166 status=ok
// SIG undefined FUN_141505850(void)

void FUN_141505850(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141504a10();
    if (DAT_1464a04d0 != 0) {
      FUN_1439f44f0(&DAT_1464a04d0);
    }
    lVar1 = (**(code **)(DAT_1468a4910 + 0xb8))(&DAT_1468a4910,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14150b4c0(param_1);
  }
  return;
}



// FUNCTION 141505900 FUN_141505900 body=166 status=ok
// SIG undefined FUN_141505900(void)

void FUN_141505900(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (param_2 != param_1) {
    FUN_141504f10();
    if (DAT_1464a0420 != 0) {
      FUN_1439f44f0(&DAT_1464a0420);
    }
    lVar1 = (**(code **)(DAT_1468a4858 + 0xb8))(&DAT_1468a4858,local_28);
    lVar1 = *(longlong *)(lVar1 + 8);
    lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
    plVar3 = param_2;
    if (lVar1 != *(longlong *)(lVar2 + 8)) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_143a0c580(param_2,param_1);
      return;
    }
    FUN_14150c8c0(param_1);
  }
  return;
}



// FUNCTION 1415059b0 FUN_1415059b0 body=105 status=ok
// SIG undefined FUN_1415059b0(void)

void FUN_1415059b0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined4 *)*param_2;
  uVar5 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar3;
  puVar2[3] = uVar4;
  *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
  uVar5 = FUN_141515ef0(param_3 + 2);
  FUN_141514070(param_2 + 2,uVar5);
  *(int *)(param_2 + 5) = (int)param_3[5];
                    /* WARNING: Could not recover jumptable at 0x000141505a12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 141505a20 FUN_141505a20 body=109 status=ok
// SIG undefined FUN_141505a20(void)

void FUN_141505a20(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    lVar1 = operator_new(0x20);
    if (lVar1 == 0) {
      *param_1 = 0;
      return;
    }
  }
  else {
    if (*(longlong *)(param_2 + 0x70) != 0) {
      FUN_1439f01b0(param_2,0,0x20);
    }
    lVar1 = FUN_1439efdc0(param_2,0x20,
                          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                          _Tidy_deallocate);
  }
  uVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          basic_string<char,std::char_traits<char>,std::allocator<char>_>(lVar1,param_3);
  *param_1 = uVar2;
  return;
}



// FUNCTION 141505aa0 FUN_141505aa0 body=161 status=ok
// SIG undefined FUN_141505aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_141505aa0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  uVar1 = FUN_1415060c0(param_2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_38,uVar1);
  uVar1 = (**(code **)(*param_1 + 0x98))(param_1);
  lVar2 = FUN_141515950(uVar1,local_38);
  if (0xf < local_20) {
    uVar4 = local_20 + 1;
    lVar3 = local_38[0];
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(local_38[0] + -8);
      uVar4 = local_20 + 0x28;
      if (0x1f < (local_38[0] - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar4);
  }
  return lVar2 != 0;
}



// FUNCTION 141505b50 FUN_141505b50 body=122 status=ok
// SIG undefined FUN_141505b50(void)

void FUN_141505b50(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  plVar1 = (longlong *)*param_1;
  if ((plVar1 != param_2) && (plVar1 != (longlong *)0x0)) {
    uVar2 = plVar1[3];
    if (0xf < uVar2) {
      lVar3 = *plVar1;
      uVar5 = uVar2 + 1;
      lVar4 = lVar3;
      if (0xfff < uVar5) {
        lVar4 = *(longlong *)(lVar3 + -8);
        uVar5 = uVar2 + 0x28;
        if (0x1f < (lVar3 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar4,uVar5);
    }
    plVar1[2] = 0;
    plVar1[3] = 0xf;
    *(undefined1 *)plVar1 = 0;
    FMemory::operator_delete(plVar1,0x20);
    return;
  }
  return;
}



// FUNCTION 141505bd0 FUN_141505bd0 body=126 status=ok
// SIG undefined FUN_141505bd0(void)

void FUN_141505bd0(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = param_2[3];
  if (0xf < uVar1) {
    lVar2 = *param_2;
    uVar4 = uVar1 + 1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar4);
  }
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    FMemory::operator_delete(param_2,0x30);
  }
  return;
}



// FUNCTION 141505c50 FUN_141505c50 body=87 status=ok
// SIG undefined FUN_141505c50(void)

void FUN_141505c50(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  FUN_140d5a080(param_2,local_res8,*(undefined8 *)param_2[1],(undefined8 *)param_2[1]);
  if (*param_2 == 0) {
    FMemory::operator_delete(param_2[1],0x28);
  }
  if (lVar1 == 0) {
    FMemory::operator_delete(param_2,0x18);
  }
  return;
}



// FUNCTION 141505cc0 EraseFromLinkedList body=45 status=ok
// SIG undefined EraseFromLinkedList(void)

longlong google::protobuf::Map<int,MistProto::Text>::InnerMap::EraseFromLinkedList
                   (undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == param_2) {
    return *(longlong *)(param_3 + 0x28);
  }
  uVar1 = EraseFromLinkedList();
  *(undefined8 *)(param_3 + 0x28) = uVar1;
  return param_3;
}



// FUNCTION 141505cf0 FUN_141505cf0 body=40 status=ok
// SIG undefined FUN_141505cf0(void)

ulonglong FUN_141505cf0(ulonglong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = param_1[1];
  if ((*param_1 == uVar1) &&
     ((*(int *)((longlong)param_1 + 0x2c) != 0 ||
      (uVar1 = (ulonglong)(uint)param_1[5], (uint)param_1[3] == (uint)param_1[5])))) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)((longlong)param_1 + 0x24) = 1;
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141505d20 FUN_141505d20 body=153 status=ok
// SIG undefined FUN_141505d20(void)

int FUN_141505d20(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    iVar5 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0xc0))();
    uVar4 = (uint)*(undefined8 *)(lVar3 + 0x10);
    uVar2 = uVar4 | 1;
    iVar5 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar5 = uVar4 + 1 + (iVar5 * 9 + 0x49U >> 6);
  }
  if ((*(uint *)(param_1 + 4) >> 1 & 1) != 0) {
    lVar3 = (**(code **)(*param_1 + 200))(param_1);
    uVar2 = *(uint *)(lVar3 + 0x1c) | 1;
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    return (iVar1 * 9 + 0x49U >> 6) + 1 + *(uint *)(lVar3 + 0x1c) + iVar5;
  }
  return iVar5;
}



// FUNCTION 141505dc0 FUN_141505dc0 body=4 status=ok
// SIG undefined FUN_141505dc0(void)

undefined4 FUN_141505dc0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// FUNCTION 141505de0 FUN_141505de0 body=24 status=ok
// SIG undefined FUN_141505de0(void)

longlong FUN_141505de0(longlong param_1)

{
  FUN_143a12920();
  return param_1 + 0x78;
}



// FUNCTION 141505e00 FUN_141505e00 body=40 status=ok
// SIG undefined FUN_141505e00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141505e00(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0570);
  uVar1 = uRam00000001468a4668;
  *param_2 = _DAT_1468a4660;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141505e30 FUN_141505e30 body=40 status=ok
// SIG undefined FUN_141505e30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141505e30(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0570);
  uVar1 = uRam00000001468a4688;
  *param_2 = _DAT_1468a4680;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141505e60 FUN_141505e60 body=40 status=ok
// SIG undefined FUN_141505e60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141505e60(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0570);
  uVar1 = uRam00000001468a4678;
  *param_2 = _DAT_1468a4670;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141505e90 FUN_141505e90 body=40 status=ok
// SIG undefined FUN_141505e90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141505e90(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0570);
  uVar1 = uRam00000001468a4658;
  *param_2 = _DAT_1468a4650;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141505ec0 FUN_141505ec0 body=40 status=ok
// SIG undefined FUN_141505ec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141505ec0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0570);
  uVar1 = uRam00000001468a4638;
  *param_2 = _DAT_1468a4630;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141505ef0 FUN_141505ef0 body=40 status=ok
// SIG undefined FUN_141505ef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141505ef0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0570);
  uVar1 = uRam00000001468a4648;
  *param_2 = _DAT_1468a4640;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141505f20 FUN_141505f20 body=40 status=ok
// SIG undefined FUN_141505f20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141505f20(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0570);
  uVar1 = uRam00000001468a4608;
  *param_2 = _DAT_1468a4600;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141505f50 FUN_141505f50 body=40 status=ok
// SIG undefined FUN_141505f50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141505f50(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0570);
  uVar1 = uRam00000001468a45f8;
  *param_2 = _DAT_1468a45f0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141505f80 FUN_141505f80 body=40 status=ok
// SIG undefined FUN_141505f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141505f80(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0570);
  uVar1 = uRam00000001468a45e8;
  *param_2 = _DAT_1468a45e0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141505fb0 FUN_141505fb0 body=40 status=ok
// SIG undefined FUN_141505fb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141505fb0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0570);
  uVar1 = uRam00000001468a4618;
  *param_2 = _DAT_1468a4610;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141505fe0 FUN_141505fe0 body=40 status=ok
// SIG undefined FUN_141505fe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141505fe0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0570);
  uVar1 = uRam00000001468a4628;
  *param_2 = _DAT_1468a4620;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141506010 FUN_141506010 body=40 status=ok
// SIG undefined FUN_141506010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141506010(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0570);
  uVar1 = uRam00000001468a46b8;
  *param_2 = _DAT_1468a46b0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141506040 FUN_141506040 body=40 status=ok
// SIG undefined FUN_141506040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141506040(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0570);
  uVar1 = uRam00000001468a46a8;
  *param_2 = _DAT_1468a46a0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141506070 FUN_141506070 body=40 status=ok
// SIG undefined FUN_141506070(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141506070(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143a03010(&DAT_1464a0570);
  uVar1 = uRam00000001468a4698;
  *param_2 = _DAT_1468a4690;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1415060a0 FUN_1415060a0 body=27 status=ok
// SIG undefined FUN_1415060a0(void)

undefined8 FUN_1415060a0(longlong *param_1)

{
  longlong lVar1;
  undefined1 local_18 [24];
  
  lVar1 = (**(code **)(*param_1 + 0xb8))(param_1,local_18);
  return *(undefined8 *)(lVar1 + 8);
}



// FUNCTION 1415060c0 FUN_1415060c0 body=284 status=ok
// SIG undefined FUN_1415060c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1415060c0(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar2 = FUN_141515ef0();
  if (iVar2 != 9) {
    iVar2 = FUN_141515ef0(param_1);
    puVar1 = (&PTR_s_ERROR_145cbee00)[iVar2];
    uVar3 = FUN_1439eeb00(local_50,3,
                          "D:\\Oak\\main\\Engine\\Source\\ThirdParty\\protobuf\\3.7.1\\include\\google/protobuf/map_field.h"
                          ,0x1c0);
    uVar3 = FUN_1439eef00(uVar3,"Protocol Buffer map usage error:\n");
    uVar3 = FUN_1439eef00(uVar3,"MapKey::GetStringValue");
    uVar3 = FUN_1439eef00(uVar3," type does not match\n");
    uVar3 = FUN_1439eef00(uVar3,"  Expected : ");
    uVar3 = FUN_1439eef00(uVar3,"string");
    uVar3 = FUN_1439eef00(uVar3,&DAT_143fc48d8);
    uVar3 = FUN_1439eef00(uVar3,"  Actual   : ");
    uVar3 = FUN_1439eef00(uVar3,puVar1);
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_50);
  }
  return *param_1;
}



// FUNCTION 1415061e0 get_magic body=55 status=ok
// SIG undefined get_magic(void)

undefined1 * OpenMesh::IO::BaseReader::get_magic(undefined8 param_1,undefined1 *param_2)

{
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0xf;
  *param_2 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (param_2,&DAT_143f3f584,0);
  return param_2;
}



// FUNCTION 141506220 FUN_141506220 body=50 status=ok
// SIG undefined FUN_141506220(void)

void FUN_141506220(longlong *param_1,undefined8 *param_2)

{
  FUN_140d25b00(*param_2);
                    /* WARNING: Could not recover jumptable at 0x00014150624b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 141506260 FUN_141506260 body=124 status=ok
// SIG undefined FUN_141506260(void)

void FUN_141506260(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_res8;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar1 = operator_new(0x30);
    if (lVar1 == 0) {
      param_1[2] = 0;
      return;
    }
  }
  else {
    if (*(longlong *)(lVar2 + 0x70) != 0) {
      FUN_1439f01b0(lVar2,0,0x30);
    }
    lVar1 = FUN_1439efdc0(lVar2,0x30,FUN_1414ffc70);
  }
  lVar2 = FUN_1415002e0(lVar1,0,local_res8,lVar2);
  param_1[2] = lVar2;
  return;
}



// FUNCTION 1415062e0 FUN_1415062e0 body=172 status=ok
// SIG undefined FUN_1415062e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415062e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  puVar2 = (undefined8 *)0x0;
  local_54 = 0;
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar2 = puVar1;
  }
  *param_2 = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = FUN_1439eeb00(local_50,3,
                          "D:\\Oak\\main\\Engine\\Source\\ThirdParty\\protobuf\\3.7.1\\include\\google/protobuf/map_field_inl.h"
                          ,0x8e);
    uVar3 = FUN_1439eef00(uVar3,"CHECK failed: map_iter->iter_ != NULL: ");
    FUN_1439eec50(local_58,uVar3);
    DsDevice::~DsDevice(local_50);
  }
  return;
}



// FUNCTION 141506390 FUN_141506390 body=211 status=ok
// SIG undefined FUN_141506390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_141506390(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [4];
  longlong local_48 [3];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_1 + 0x98))();
  uVar2 = FUN_1415060c0(param_2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_48,uVar2);
  FUN_140d2cbc0(*(undefined8 *)(lVar1 + 0x10),local_68,local_48,0);
  if (local_68[0] != 0) {
    lVar1 = *(longlong *)(local_68[0] + 0x20) + 0x20;
  }
  else {
    lVar1 = FUN_140d25830(lVar1,local_48);
  }
  *param_3 = lVar1;
  if (0xf < local_30) {
    uVar3 = local_30 + 1;
    lVar1 = local_48[0];
    if (0xfff < uVar3) {
      lVar1 = *(longlong *)(local_48[0] + -8);
      uVar3 = local_30 + 0x28;
      if (0x1f < (local_48[0] - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar1,uVar3);
  }
  return local_68[0] == 0;
}



// FUNCTION 141506470 FUN_141506470 body=268 status=ok
// SIG undefined FUN_141506470(void)

byte * FUN_141506470(longlong *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  
  uVar1 = (**(code **)(*param_1 + 0xc0))();
  *param_2 = 10;
  pbVar2 = (byte *)FUN_1439f9df0(uVar1,param_2 + 1);
  lVar3 = (**(code **)(*param_1 + 200))(param_1);
  *pbVar2 = 0x12;
  uVar6 = *(uint *)(lVar3 + 0x1c);
  while( true ) {
    pbVar2 = pbVar2 + 1;
    bVar5 = (byte)uVar6;
    if (uVar6 < 0x80) break;
    uVar6 = uVar6 >> 7;
    *pbVar2 = bVar5 | 0x80;
  }
  *pbVar2 = bVar5;
  pbVar7 = pbVar2 + 1;
  uVar6 = *(uint *)(lVar3 + 0x18);
  if (uVar6 != 0) {
    *pbVar7 = 8;
    pbVar2 = pbVar2 + 2;
    for (; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
      *pbVar2 = (byte)uVar6 | 0x80;
      pbVar2 = pbVar2 + 1;
    }
    *pbVar2 = (byte)uVar6;
    pbVar7 = pbVar2 + 1;
  }
  uVar4 = *(ulonglong *)(lVar3 + 0x10);
  if (uVar4 != 0) {
    *pbVar7 = 0x10;
    while( true ) {
      pbVar7 = pbVar7 + 1;
      bVar5 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *pbVar7 = bVar5 | 0x80;
    }
    *pbVar7 = bVar5;
    pbVar7 = pbVar7 + 1;
  }
  if ((*(byte *)(lVar3 + 8) & 1) == 0) {
    return pbVar7;
  }
  pbVar2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe,pbVar7);
  return pbVar2;
}



// FUNCTION 141506580 FUN_141506580 body=249 status=ok
// SIG undefined FUN_141506580(void)

byte * FUN_141506580(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  byte bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,"OakSave.GearSoldByFriendData.gear_serial_number");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  uVar4 = (ulonglong)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) != 0) {
    *param_2 = 0x10;
    while( true ) {
      param_2 = param_2 + 1;
      bVar3 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_2 = bVar3 | 0x80;
    }
    *param_2 = bVar3;
    param_2 = param_2 + 1;
  }
  plVar6 = *(longlong **)(param_1 + 0x18);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,"OakSave.GearSoldByFriendData.friend_net_id");
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *param_2 = 0x1a;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    pbVar5 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return pbVar5;
  }
  return param_2;
}



// FUNCTION 141506680 FUN_141506680 body=651 status=ok
// SIG undefined FUN_141506680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_141506680(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  byte bVar9;
  byte *pbVar10;
  uint uVar11;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar6 = (ulonglong)*(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) != 0) {
    *param_2 = 8;
    while( true ) {
      pbVar10 = param_2 + 1;
      bVar9 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *pbVar10 = bVar9 | 0x80;
      param_2 = pbVar10;
    }
    *pbVar10 = bVar9;
    param_2 = param_2 + 2;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar11 = 0;
  if (uVar2 != 0) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar11 * 8);
      *param_2 = 0x12;
      uVar7 = *(uint *)(lVar3 + 0x1c);
      pbVar10 = param_2;
      while( true ) {
        pbVar5 = pbVar10 + 1;
        bVar9 = (byte)uVar7;
        if (uVar7 < 0x80) break;
        uVar7 = uVar7 >> 7;
        *pbVar5 = bVar9 | 0x80;
        pbVar10 = pbVar5;
      }
      *pbVar5 = bVar9;
      param_2 = pbVar10 + 2;
      uVar6 = (ulonglong)*(int *)(lVar3 + 0x18);
      if (*(int *)(lVar3 + 0x18) != 0) {
        *param_2 = 8;
        pbVar10 = pbVar10 + 3;
        for (; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
          *pbVar10 = (byte)uVar6 | 0x80;
          pbVar10 = pbVar10 + 1;
        }
        *pbVar10 = (byte)uVar6;
        param_2 = pbVar10 + 1;
      }
      plVar8 = *(longlong **)(lVar3 + 0x10);
      puVar1 = (ulonglong *)(plVar8 + 2);
      if (*puVar1 != 0) {
        if (0xf < (ulonglong)plVar8[3]) {
          plVar8 = (longlong *)*plVar8;
        }
        FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,1,
                      "OakSave.GuardianRankRewardSaveGameData.reward_data_path");
        uVar4 = *(undefined8 *)(lVar3 + 0x10);
        *param_2 = 0x12;
        param_2 = (byte *)FUN_1439f9df0(uVar4,param_2 + 1);
      }
      if ((*(byte *)(lVar3 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar3 + 8) & 0xfffffffffffffffe,param_2);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar2);
  }
  uVar6 = (ulonglong)*(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x2c) != 0) {
    *param_2 = 0x18;
    while( true ) {
      param_2 = param_2 + 1;
      bVar9 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *param_2 = bVar9 | 0x80;
    }
    *param_2 = bVar9;
    param_2 = param_2 + 1;
  }
  uVar6 = (ulonglong)*(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x30) != 0) {
    *param_2 = 0x20;
    while( true ) {
      param_2 = param_2 + 1;
      bVar9 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *param_2 = bVar9 | 0x80;
    }
    *param_2 = bVar9;
    param_2 = param_2 + 1;
  }
  uVar6 = (ulonglong)*(int *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x34) != 0) {
    *param_2 = 0x28;
    while( true ) {
      param_2 = param_2 + 1;
      bVar9 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *param_2 = bVar9 | 0x80;
    }
    *param_2 = bVar9;
    param_2 = param_2 + 1;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x38);
  if (uVar6 != 0) {
    *param_2 = 0x30;
    while( true ) {
      param_2 = param_2 + 1;
      bVar9 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *param_2 = bVar9 | 0x80;
    }
    *param_2 = bVar9;
    param_2 = param_2 + 1;
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return param_2;
}



// FUNCTION 141506910 FUN_141506910 body=185 status=ok
// SIG undefined FUN_141506910(void)

byte * FUN_141506910(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  byte bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong *plVar6;
  
  uVar4 = (ulonglong)*(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) != 0) {
    *param_2 = 8;
    while( true ) {
      param_2 = param_2 + 1;
      bVar3 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_2 = bVar3 | 0x80;
    }
    *param_2 = bVar3;
    param_2 = param_2 + 1;
  }
  plVar6 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.GuardianRankRewardSaveGameData.reward_data_path");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 0x12;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    pbVar5 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return pbVar5;
  }
  return param_2;
}



// FUNCTION 141506a70 FUN_141506a70 body=187 status=ok
// SIG undefined FUN_141506a70(void)

byte * FUN_141506a70(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  byte bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.OakProfileLastInventoryFilterInfo.slot_type_id");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  uVar4 = (ulonglong)*(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) != 0) {
    *param_2 = 0x10;
    while( true ) {
      param_2 = param_2 + 1;
      bVar3 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_2 = bVar3 | 0x80;
    }
    *param_2 = bVar3;
    param_2 = param_2 + 1;
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    pbVar5 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return pbVar5;
  }
  return param_2;
}



// FUNCTION 141506b30 FUN_141506b30 body=247 status=ok
// SIG undefined FUN_141506b30(void)

undefined1 * FUN_141506b30(longlong param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  int iVar7;
  
  iVar2 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
  iVar7 = 0;
  if (0 < iVar2) {
    do {
      lVar3 = FUN_1439f1d30(param_1 + 0x10,iVar7);
      uVar1 = *(ulonglong *)(lVar3 + 0x10);
      puVar4 = (undefined8 *)FUN_1439f1d30(param_1 + 0x10,iVar7);
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      FUN_1439fa7f0(puVar4,uVar1 & 0xffffffff,1,"OakSave.OakProfileMenuTutorialInfo.seen_tutorials")
      ;
      uVar5 = FUN_1439f1d30(param_1 + 0x10,iVar7);
      *param_2 = 10;
      param_2 = (undefined1 *)FUN_1439f9df0(uVar5,param_2 + 1);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    *param_2 = 0x10;
    param_2[1] = 1;
    param_2 = param_2 + 2;
  }
  if (*(char *)(param_1 + 0x29) != '\0') {
    *param_2 = 0x18;
    param_2[1] = 1;
    param_2 = param_2 + 2;
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar6 = (undefined1 *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  return puVar6;
}



// FUNCTION 141506c30 FUN_141506c30 body=444 status=ok
// SIG undefined FUN_141506c30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_141506c30(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte bVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  plVar10 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar10 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar10[3]) {
      plVar10 = (longlong *)*plVar10;
    }
    FUN_1439fa7f0(plVar10,*puVar1 & 0xffffffff,1,"OakSave.PlayerInputBinding_Axis.rebind_data_path")
    ;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar3,param_2 + 1);
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar11 = 0;
  if (uVar2 != 0) {
    do {
      puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar11 * 8);
      *param_2 = 0x12;
      uVar8 = *(uint *)(puVar4 + 4);
      pbVar7 = param_2;
      while( true ) {
        pbVar6 = pbVar7 + 1;
        bVar9 = (byte)uVar8;
        if (uVar8 < 0x80) break;
        uVar8 = uVar8 >> 7;
        *pbVar6 = bVar9 | 0x80;
        pbVar7 = pbVar6;
      }
      *pbVar6 = bVar9;
      param_2 = pbVar7 + 2;
      plVar10 = (longlong *)puVar4[2];
      puVar1 = (ulonglong *)(plVar10 + 2);
      if (*puVar1 != 0) {
        if (0xf < (ulonglong)plVar10[3]) {
          plVar10 = (longlong *)*plVar10;
        }
        FUN_1439fa7f0(plVar10,*puVar1 & 0xffffffff,1,"OakSave.PlayerInputBinding_Axis_Key.key_name")
        ;
        uVar3 = puVar4[2];
        *param_2 = 10;
        param_2 = (byte *)FUN_1439f9df0(uVar3,pbVar7 + 3);
      }
      if ((puVar4 != &DAT_1468a47f8) && (lVar5 = puVar4[3], lVar5 != 0)) {
        *param_2 = 0x12;
        uVar8 = *(uint *)(lVar5 + 0x1c);
        while( true ) {
          pbVar7 = param_2 + 1;
          bVar9 = (byte)uVar8;
          if (uVar8 < 0x80) break;
          uVar8 = uVar8 >> 7;
          *pbVar7 = bVar9 | 0x80;
          param_2 = pbVar7;
        }
        *pbVar7 = bVar9;
        param_2 = (byte *)FUN_141549810(lVar5,param_2 + 2);
      }
      if ((*(byte *)(puVar4 + 1) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(puVar4[1] & 0xfffffffffffffffe,param_2);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return param_2;
}



// FUNCTION 141506df0 FUN_141506df0 body=211 status=ok
// SIG undefined FUN_141506df0(void)

byte * FUN_141506df0(undefined8 *param_1,byte *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  byte *pbVar5;
  longlong *plVar6;
  byte bVar7;
  
  plVar6 = (longlong *)param_1[2];
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,"OakSave.PlayerInputBinding_Axis_Key.key_name");
    uVar2 = param_1[2];
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if ((param_1 != &DAT_1468a47f8) && (lVar3 = param_1[3], lVar3 != 0)) {
    *param_2 = 0x12;
    uVar4 = *(uint *)(lVar3 + 0x1c);
    while( true ) {
      param_2 = param_2 + 1;
      bVar7 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_2 = bVar7 | 0x80;
    }
    *param_2 = bVar7;
    param_2 = (byte *)FUN_141549810(lVar3,param_2 + 1);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    pbVar5 = (byte *)FUN_143a1dba0(param_1[1] & 0xfffffffffffffffe,param_2);
    return pbVar5;
  }
  return param_2;
}



// FUNCTION 141506ed0 FUN_141506ed0 body=267 status=ok
// SIG undefined FUN_141506ed0(void)

undefined1 * FUN_141506ed0(longlong param_1,undefined1 *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  int iVar9;
  
  plVar8 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar8 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar8[3]) {
      plVar8 = (longlong *)*plVar8;
    }
    FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,1,"OakSave.PlayerInputBinding_Button.rebind_data_path"
                 );
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    *param_2 = 10;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar6,param_2 + 1);
  }
  iVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
  iVar9 = 0;
  if (0 < iVar3) {
    do {
      lVar4 = FUN_1439f1d30(param_1 + 0x10,iVar9);
      uVar2 = *(ulonglong *)(lVar4 + 0x10);
      puVar5 = (undefined8 *)FUN_1439f1d30(param_1 + 0x10,iVar9);
      if (0xf < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      FUN_1439fa7f0(puVar5,uVar2 & 0xffffffff,1,"OakSave.PlayerInputBinding_Button.key_names");
      uVar6 = FUN_1439f1d30(param_1 + 0x10,iVar9);
      *param_2 = 0x12;
      param_2 = (undefined1 *)FUN_1439f9df0(uVar6,param_2 + 1);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar3);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar7 = (undefined1 *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  return puVar7;
}



// FUNCTION 141506fe0 FUN_141506fe0 body=358 status=ok
// SIG undefined FUN_141506fe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_141506fe0(longlong param_1,byte *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong *plVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  plVar6 = *(longlong **)(param_1 + 0x40);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.PlayerInputBinding_Category.category_data_path");
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *param_2 = 10;
    param_2 = (byte *)FUN_1439f9df0(uVar3,param_2 + 1);
  }
  plVar6 = *(longlong **)(param_1 + 0x48);
  puVar1 = (ulonglong *)(plVar6 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar6[3]) {
      plVar6 = (longlong *)*plVar6;
    }
    FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,1,
                  "OakSave.PlayerInputBinding_Category.context_data_path");
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *param_2 = 0x12;
    param_2 = (byte *)FUN_1439f9df0(uVar3,param_2 + 1);
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar9 = 0;
  uVar8 = 0;
  if (uVar2 != 0) {
    do {
      param_2 = (byte *)FUN_1414fdd70(3,*(undefined8 *)
                                         (*(longlong *)(param_1 + 0x20) + 8 +
                                         (longlong)(int)uVar8 * 8),param_2);
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar2);
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (uVar2 != 0) {
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)uVar9 * 8);
      *param_2 = 0x22;
      uVar8 = *(uint *)(lVar4 + 0x30);
      while( true ) {
        pbVar5 = param_2 + 1;
        bVar7 = (byte)uVar8;
        if (uVar8 < 0x80) break;
        uVar8 = uVar8 >> 7;
        *pbVar5 = bVar7 | 0x80;
        param_2 = pbVar5;
      }
      *pbVar5 = bVar7;
      param_2 = (byte *)FUN_141506c30(lVar4,param_2 + 2);
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return param_2;
}



// FUNCTION 141507150 FUN_141507150 body=176 status=ok
// SIG undefined FUN_141507150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_141507150(longlong param_1,byte *param_2)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar6 * 8);
      *param_2 = 10;
      uVar4 = *(uint *)(lVar2 + 0x50);
      while( true ) {
        pbVar3 = param_2 + 1;
        bVar5 = (byte)uVar4;
        if (uVar4 < 0x80) break;
        uVar4 = uVar4 >> 7;
        *pbVar3 = bVar5 | 0x80;
        param_2 = pbVar3;
      }
      *pbVar3 = bVar5;
      param_2 = (byte *)FUN_141506fe0(lVar2,param_2 + 2);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 141507200 FUN_141507200 body=11168 status=ok
// SIG undefined FUN_141507200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_141507200(undefined8 *param_1,byte *param_2)

{
  ulonglong *puVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x5c) != '\0') {
    param_2 = (byte *)FUN_141514ca0(1,*(char *)(param_1 + 0x5c),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2e1) != '\0') {
    param_2 = (byte *)FUN_141514ca0(2,*(char *)((longlong)param_1 + 0x2e1),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2e2) != '\0') {
    param_2 = (byte *)FUN_141514ca0(3,*(char *)((longlong)param_1 + 0x2e2),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2e3) != '\0') {
    param_2 = (byte *)FUN_141514ca0(4,*(char *)((longlong)param_1 + 0x2e3),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2e4) != '\0') {
    param_2 = (byte *)FUN_141514ca0(5,*(char *)((longlong)param_1 + 0x2e4),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2e5) != '\0') {
    param_2 = (byte *)FUN_141514ca0(6,*(char *)((longlong)param_1 + 0x2e5),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2e6) != '\0') {
    param_2 = (byte *)FUN_141514ca0(7,*(char *)((longlong)param_1 + 0x2e6),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2e7) != '\0') {
    param_2 = (byte *)FUN_141514ca0(8,*(char *)((longlong)param_1 + 0x2e7),param_2);
  }
  fVar2 = *(float *)(param_1 + 0x5d);
  if (fVar2 != 0.0) {
    *param_2 = 0x4d;
    *(float *)(param_2 + 1) = fVar2;
    param_2 = param_2 + 5;
  }
  if (*(char *)((longlong)param_1 + 0x2ec) != '\0') {
    param_2 = (byte *)FUN_141514ca0(10,*(char *)((longlong)param_1 + 0x2ec),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2ed) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xb,*(char *)((longlong)param_1 + 0x2ed),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2ee) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xc,*(char *)((longlong)param_1 + 0x2ee),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2ef) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xd,*(char *)((longlong)param_1 + 0x2ef),param_2);
  }
  if (*(char *)(param_1 + 0x5e) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xe,*(char *)(param_1 + 0x5e),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2f1) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xf,*(char *)((longlong)param_1 + 0x2f1),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2f2) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x10,*(char *)((longlong)param_1 + 0x2f2),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2f3) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x11,*(char *)((longlong)param_1 + 0x2f3),param_2);
  }
  fVar2 = *(float *)((longlong)param_1 + 0x2f4);
  if (fVar2 != 0.0) {
    uVar11 = 0x95;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x5f);
  if (fVar2 != 0.0) {
    uVar11 = 0x9d;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)((longlong)param_1 + 0x2fc);
  if (fVar2 != 0.0) {
    uVar11 = 0xa5;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x60);
  if (fVar2 != 0.0) {
    uVar11 = 0xad;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  if (*(char *)((longlong)param_1 + 0x304) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x16,*(char *)((longlong)param_1 + 0x304),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x305) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x17,*(char *)((longlong)param_1 + 0x305),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x306) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x18,*(char *)((longlong)param_1 + 0x306),param_2);
  }
  fVar2 = *(float *)(param_1 + 0x61);
  if (fVar2 != 0.0) {
    uVar11 = 0xcd;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)((longlong)param_1 + 0x30c);
  if (fVar2 != 0.0) {
    uVar11 = 0xd5;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x62);
  if (fVar2 != 0.0) {
    uVar11 = 0xdd;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  uVar11 = *(uint *)((longlong)param_1 + 0x314);
  if (uVar11 != 0) {
    uVar12 = 0xe0;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar12;
      uVar12 = uVar12 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar12);
    pbVar15[1] = (byte)uVar12;
    pbVar15 = pbVar15 + 2;
    for (; 0x7f < uVar11; uVar11 = uVar11 >> 7) {
      *pbVar15 = (byte)uVar11 | 0x80;
      pbVar15 = pbVar15 + 1;
    }
    *pbVar15 = (byte)uVar11;
    param_2 = pbVar15 + 1;
  }
  if (*(char *)((longlong)param_1 + 0x307) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x1d,*(char *)((longlong)param_1 + 0x307),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x35c) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x22,*(char *)((longlong)param_1 + 0x35c),param_2);
  }
  puVar9 = (undefined8 *)0x0;
  if ((param_1 != &DAT_1468a4910) && (lVar5 = param_1[0x58], lVar5 != 0)) {
    uVar11 = 0x11a;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    pbVar15 = pbVar15 + 2;
    for (uVar11 = *(uint *)(lVar5 + 0x28); 0x7f < uVar11; uVar11 = uVar11 >> 7) {
      *pbVar15 = (byte)uVar11 | 0x80;
      pbVar15 = pbVar15 + 1;
    }
    *pbVar15 = (byte)uVar11;
    uVar11 = *(uint *)(lVar5 + 0x18);
    param_2 = pbVar15 + 1;
    puVar16 = puVar9;
    if (uVar11 != 0) {
      do {
        lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x20) + 8 + (longlong)(int)puVar16 * 8);
        *param_2 = 10;
        uVar12 = *(uint *)(lVar3 + 0x50);
        while( true ) {
          pbVar15 = param_2 + 1;
          bVar10 = (byte)uVar12;
          if (uVar12 < 0x80) break;
          uVar12 = uVar12 >> 7;
          *pbVar15 = bVar10 | 0x80;
          param_2 = pbVar15;
        }
        *pbVar15 = bVar10;
        param_2 = (byte *)FUN_141506fe0(lVar3,param_2 + 2);
        uVar12 = (int)puVar16 + 1;
        puVar16 = (undefined8 *)(ulonglong)uVar12;
      } while (uVar12 < uVar11);
    }
    if ((*(byte *)(lVar5 + 8) & 1) != 0) {
      param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar5 + 8) & 0xfffffffffffffffe,param_2);
    }
  }
  iVar4 = FUN_1439f2ae0(param_1 + 2);
  if (0 < iVar4) {
    uVar11 = 0x122;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    pbVar15 = pbVar15 + 2;
    uVar11 = *(uint *)(param_1 + 4);
    uVar13 = (ulonglong)uVar11;
    while (bVar10 = (byte)uVar13, 0x7f < uVar11) {
      uVar13 = uVar13 >> 7;
      *pbVar15 = bVar10 | 0x80;
      pbVar15 = pbVar15 + 1;
      uVar11 = (uint)uVar13;
    }
    *pbVar15 = bVar10;
    param_2 = pbVar15 + 1;
    iVar4 = FUN_1439f2ae0(param_1 + 2);
    lVar5 = FUN_1405b74e0(param_1 + 2);
    puVar16 = puVar9;
    do {
      for (uVar11 = *(uint *)(lVar5 + (longlong)puVar16 * 4); 0x7f < uVar11; uVar11 = uVar11 >> 7) {
        *param_2 = (byte)uVar11 | 0x80;
        param_2 = param_2 + 1;
      }
      *param_2 = (byte)uVar11;
      puVar16 = (undefined8 *)((longlong)puVar16 + 1);
      param_2 = param_2 + 1;
    } while ((longlong)puVar16 < (longlong)iVar4);
  }
  uVar11 = *(uint *)(param_1 + 99);
  if (uVar11 != 0) {
    uVar12 = 0x128;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar12;
      uVar12 = uVar12 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar12);
    pbVar15[1] = (byte)uVar12;
    pbVar15 = pbVar15 + 2;
    for (; 0x7f < uVar11; uVar11 = uVar11 >> 7) {
      *pbVar15 = (byte)uVar11 | 0x80;
      pbVar15 = pbVar15 + 1;
    }
    *pbVar15 = (byte)uVar11;
    param_2 = pbVar15 + 1;
  }
  uVar13 = (ulonglong)*(int *)((longlong)param_1 + 0x31c);
  if (*(int *)((longlong)param_1 + 0x31c) != 0) {
    uVar11 = 0x130;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    pbVar15 = pbVar15 + 2;
    for (; 0x7f < uVar13; uVar13 = uVar13 >> 7) {
      *pbVar15 = (byte)uVar13 | 0x80;
      pbVar15 = pbVar15 + 1;
    }
    *pbVar15 = (byte)uVar13;
    param_2 = pbVar15 + 1;
  }
  uVar13 = (ulonglong)*(int *)(param_1 + 100);
  if (*(int *)(param_1 + 100) != 0) {
    uVar11 = 0x138;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    pbVar15 = pbVar15 + 2;
    for (; 0x7f < uVar13; uVar13 = uVar13 >> 7) {
      *pbVar15 = (byte)uVar13 | 0x80;
      pbVar15 = pbVar15 + 1;
    }
    *pbVar15 = (byte)uVar13;
    param_2 = pbVar15 + 1;
  }
  uVar13 = (ulonglong)*(int *)((longlong)param_1 + 0x324);
  if (*(int *)((longlong)param_1 + 0x324) != 0) {
    uVar11 = 0x140;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    pbVar15 = pbVar15 + 2;
    for (; 0x7f < uVar13; uVar13 = uVar13 >> 7) {
      *pbVar15 = (byte)uVar13 | 0x80;
      pbVar15 = pbVar15 + 1;
    }
    *pbVar15 = (byte)uVar13;
    param_2 = pbVar15 + 1;
  }
  fVar2 = *(float *)(param_1 + 0x65);
  if (fVar2 != 0.0) {
    uVar11 = 0x14d;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)((longlong)param_1 + 0x32c);
  if (fVar2 != 0.0) {
    uVar11 = 0x155;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x66);
  if (fVar2 != 0.0) {
    uVar11 = 0x15d;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)((longlong)param_1 + 0x334);
  if (fVar2 != 0.0) {
    uVar11 = 0x165;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x67);
  if (fVar2 != 0.0) {
    uVar11 = 0x16d;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)((longlong)param_1 + 0x33c);
  if (fVar2 != 0.0) {
    uVar11 = 0x175;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x68);
  if (fVar2 != 0.0) {
    uVar11 = 0x17d;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)((longlong)param_1 + 0x344);
  if (fVar2 != 0.0) {
    uVar11 = 0x185;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x69);
  if (fVar2 != 0.0) {
    uVar11 = 0x18d;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)((longlong)param_1 + 0x34c);
  if (fVar2 != 0.0) {
    uVar11 = 0x195;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x6a);
  if (fVar2 != 0.0) {
    uVar11 = 0x19d;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)((longlong)param_1 + 0x354);
  if (fVar2 != 0.0) {
    uVar11 = 0x1a5;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x6b);
  if (fVar2 != 0.0) {
    uVar11 = 0x1ad;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x6c);
  if (fVar2 != 0.0) {
    uVar11 = 0x1b5;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)((longlong)param_1 + 0x364);
  if (fVar2 != 0.0) {
    uVar11 = 0x1bd;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x6d);
  if (fVar2 != 0.0) {
    uVar11 = 0x1c5;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)((longlong)param_1 + 0x36c);
  if (fVar2 != 0.0) {
    uVar11 = 0x1cd;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x6e);
  if (fVar2 != 0.0) {
    uVar11 = 0x1d5;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  if (*(char *)((longlong)param_1 + 0x35d) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x3b,*(char *)((longlong)param_1 + 0x35d),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x35e) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x3c,*(char *)((longlong)param_1 + 0x35e),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x35f) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x3d,*(char *)((longlong)param_1 + 0x35f),param_2);
  }
  fVar2 = *(float *)((longlong)param_1 + 0x374);
  if (fVar2 != 0.0) {
    uVar11 = 0x1f5;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x6f);
  if (fVar2 != 0.0) {
    uVar11 = 0x1fd;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)((longlong)param_1 + 0x37c);
  if (fVar2 != 0.0) {
    uVar11 = 0x205;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x70);
  if (fVar2 != 0.0) {
    uVar11 = 0x20d;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)((longlong)param_1 + 900);
  if (fVar2 != 0.0) {
    uVar11 = 0x215;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x71);
  if (fVar2 != 0.0) {
    uVar11 = 0x21d;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)((longlong)param_1 + 0x38c);
  if (fVar2 != 0.0) {
    uVar11 = 0x225;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x72);
  if (fVar2 != 0.0) {
    uVar11 = 0x22d;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)((longlong)param_1 + 0x394);
  if (fVar2 != 0.0) {
    uVar11 = 0x235;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x73);
  if (fVar2 != 0.0) {
    uVar11 = 0x23d;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)((longlong)param_1 + 0x39c);
  if (fVar2 != 0.0) {
    uVar11 = 0x245;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x74);
  if (fVar2 != 0.0) {
    uVar11 = 0x24d;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)((longlong)param_1 + 0x3a4);
  if (fVar2 != 0.0) {
    uVar11 = 0x255;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x75);
  if (fVar2 != 0.0) {
    uVar11 = 0x25d;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)((longlong)param_1 + 0x3ac);
  if (fVar2 != 0.0) {
    uVar11 = 0x265;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x76);
  if (fVar2 != 0.0) {
    uVar11 = 0x26d;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)((longlong)param_1 + 0x3b4);
  if (fVar2 != 0.0) {
    uVar11 = 0x275;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x77);
  if (fVar2 != 0.0) {
    uVar11 = 0x27d;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  if (*(char *)((longlong)param_1 + 0x3cc) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x50,*(char *)((longlong)param_1 + 0x3cc),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x3bc) != 0) {
    param_2 = (byte *)FUN_141514f20(0x51,*(int *)((longlong)param_1 + 0x3bc),param_2);
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    param_2 = (byte *)FUN_141514f20(0x52,*(int *)(param_1 + 0x78),param_2);
  }
  fVar2 = *(float *)((longlong)param_1 + 0x3c4);
  if (fVar2 != 0.0) {
    uVar11 = 0x29d;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  fVar2 = *(float *)(param_1 + 0x79);
  if (fVar2 != 0.0) {
    uVar11 = 0x2a5;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  if (*(char *)((longlong)param_1 + 0x3cd) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x55,*(char *)((longlong)param_1 + 0x3cd),param_2);
  }
  if (*(int *)(param_1 + 0x7a) != 0) {
    param_2 = (byte *)FUN_141514f20(0x56,*(int *)(param_1 + 0x7a),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x3ce) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x57,*(char *)((longlong)param_1 + 0x3ce),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x3cf) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x58,*(char *)((longlong)param_1 + 0x3cf),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x3d4) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x59,*(char *)((longlong)param_1 + 0x3d4),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x3d5) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x5a,*(char *)((longlong)param_1 + 0x3d5),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x3d6) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x5b,*(char *)((longlong)param_1 + 0x3d6),param_2);
  }
  if (*(int *)(param_1 + 0x7b) != 0) {
    param_2 = (byte *)FUN_141514f20(0x5c,*(int *)(param_1 + 0x7b),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x3d7) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x5d,*(char *)((longlong)param_1 + 0x3d7),param_2);
  }
  fVar2 = *(float *)((longlong)param_1 + 0x3dc);
  if (fVar2 != 0.0) {
    uVar11 = 0x2f5;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    *(float *)(pbVar15 + 2) = fVar2;
    param_2 = pbVar15 + 6;
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    param_2 = (byte *)FUN_141514f20(0x5f,*(int *)(param_1 + 0x7c),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x3e4) != 0) {
    param_2 = (byte *)FUN_141514f20(0x60,*(int *)((longlong)param_1 + 0x3e4),param_2);
  }
  if (*(int *)(param_1 + 0x7d) != 0) {
    param_2 = (byte *)FUN_141514f20(0x61,*(int *)(param_1 + 0x7d),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x414) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x62,*(char *)((longlong)param_1 + 0x414),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x415) != '\0') {
    param_2 = (byte *)FUN_141514ca0(99,*(char *)((longlong)param_1 + 0x415),param_2);
  }
  plVar8 = (longlong *)param_1[0x56];
  puVar1 = (ulonglong *)(plVar8 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar8[3]) {
      plVar8 = (longlong *)*plVar8;
    }
    FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,1,"OakSave.Profile.last_status_menu_page");
    param_2 = (byte *)FUN_141514e70(100,param_1[0x56],param_2);
  }
  uVar11 = *(uint *)(param_1 + 6);
  puVar16 = puVar9;
  if (uVar11 != 0) {
    do {
      lVar5 = *(longlong *)(param_1[7] + 8 + (longlong)(int)puVar16 * 8);
      uVar12 = 0x32a;
      do {
        pbVar15 = param_2;
        bVar10 = (byte)uVar12;
        uVar12 = uVar12 >> 7;
        *pbVar15 = bVar10 | 0x80;
        param_2 = pbVar15 + 1;
      } while (0x7f < uVar12);
      pbVar15[1] = (byte)uVar12;
      pbVar15 = pbVar15 + 2;
      for (uVar12 = *(uint *)(lVar5 + 0x1c); 0x7f < uVar12; uVar12 = uVar12 >> 7) {
        *pbVar15 = (byte)uVar12 | 0x80;
        pbVar15 = pbVar15 + 1;
      }
      *pbVar15 = (byte)uVar12;
      param_2 = pbVar15 + 1;
      plVar8 = *(longlong **)(lVar5 + 0x10);
      puVar1 = (ulonglong *)(plVar8 + 2);
      if (*puVar1 != 0) {
        if (0xf < (ulonglong)plVar8[3]) {
          plVar8 = (longlong *)*plVar8;
        }
        FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,1,
                      "OakSave.OakProfileLastInventoryFilterInfo.slot_type_id");
        uVar7 = *(undefined8 *)(lVar5 + 0x10);
        *param_2 = 10;
        param_2 = (byte *)FUN_1439f9df0(uVar7,pbVar15 + 2);
      }
      if (*(int *)(lVar5 + 0x18) != 0) {
        param_2 = (byte *)FUN_141514d80(2,*(int *)(lVar5 + 0x18),param_2);
      }
      if ((*(byte *)(lVar5 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar5 + 8) & 0xfffffffffffffffe,param_2);
      }
      uVar12 = (int)puVar16 + 1;
      puVar16 = (undefined8 *)(ulonglong)uVar12;
    } while (uVar12 < uVar11);
  }
  if ((param_1 != &DAT_1468a4910) && (param_1[0x59] != 0)) {
    param_2 = (byte *)FUN_1414fdb90(0x66,param_1[0x59],param_2);
  }
  if (*(int *)((longlong)param_1 + 0x3ec) != 0) {
    param_2 = (byte *)FUN_141514f20(0x67,*(int *)((longlong)param_1 + 0x3ec),param_2);
  }
  if (*(int *)(param_1 + 0x7e) != 0) {
    param_2 = (byte *)FUN_141514f20(0x68,*(int *)(param_1 + 0x7e),param_2);
  }
  plVar8 = (longlong *)param_1[0x57];
  puVar1 = (ulonglong *)(plVar8 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar8[3]) {
      plVar8 = (longlong *)*plVar8;
    }
    FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,1,"OakSave.Profile.matchmaking_region");
    param_2 = (byte *)FUN_141514e70(0x69,param_1[0x57],param_2);
  }
  if (*(int *)((longlong)param_1 + 0x3f4) != 0) {
    param_2 = (byte *)FUN_141514f20(0x6a,*(int *)((longlong)param_1 + 0x3f4),param_2);
  }
  if (*(int *)(param_1 + 0x7f) != 0) {
    param_2 = (byte *)FUN_141514d80(0x6b,*(int *)(param_1 + 0x7f),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x3fc) != 0) {
    param_2 = (byte *)FUN_141514d80(0x6c,*(int *)((longlong)param_1 + 0x3fc),param_2);
  }
  iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 8);
  puVar16 = puVar9;
  if (0 < iVar4) {
    do {
      lVar5 = FUN_1439f1d30(param_1 + 8,puVar16);
      uVar13 = *(ulonglong *)(lVar5 + 0x10);
      puVar6 = (undefined8 *)FUN_1439f1d30(param_1 + 8,puVar16);
      if (0xf < (ulonglong)puVar6[3]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      FUN_1439fa7f0(puVar6,uVar13 & 0xffffffff,1,"OakSave.Profile.friend_events");
      uVar7 = FUN_1439f1d30(param_1 + 8,puVar16);
      uVar11 = 0x36a;
      do {
        pbVar15 = param_2;
        bVar10 = (byte)uVar11;
        uVar11 = uVar11 >> 7;
        *pbVar15 = bVar10 | 0x80;
        param_2 = pbVar15 + 1;
      } while (0x7f < uVar11);
      pbVar15[1] = (byte)uVar11;
      param_2 = (byte *)FUN_1439f9df0(uVar7,pbVar15 + 2);
      uVar11 = (int)puVar16 + 1;
      puVar16 = (undefined8 *)(ulonglong)uVar11;
    } while ((int)uVar11 < iVar4);
  }
  iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 0xb);
  puVar16 = puVar9;
  if (0 < iVar4) {
    do {
      lVar5 = FUN_1439f1d30(param_1 + 0xb,puVar16);
      uVar13 = *(ulonglong *)(lVar5 + 0x10);
      puVar6 = (undefined8 *)FUN_1439f1d30(param_1 + 0xb,puVar16);
      if (0xf < (ulonglong)puVar6[3]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      FUN_1439fa7f0(puVar6,uVar13 & 0xffffffff,1,"OakSave.Profile.friend_statuses");
      uVar7 = FUN_1439f1d30(param_1 + 0xb,puVar16);
      uVar11 = 0x372;
      do {
        pbVar15 = param_2;
        bVar10 = (byte)uVar11;
        uVar11 = uVar11 >> 7;
        *pbVar15 = bVar10 | 0x80;
        param_2 = pbVar15 + 1;
      } while (0x7f < uVar11);
      pbVar15[1] = (byte)uVar11;
      param_2 = (byte *)FUN_1439f9df0(uVar7,pbVar15 + 2);
      uVar11 = (int)puVar16 + 1;
      puVar16 = (undefined8 *)(ulonglong)uVar11;
    } while ((int)uVar11 < iVar4);
  }
  if (param_1[0x80] != 0) {
    param_2 = (byte *)FUN_141514e10(0x6f,param_1[0x80],param_2);
  }
  if (param_1[0x81] != 0) {
    param_2 = (byte *)FUN_141514e10(0x70,param_1[0x81],param_2);
  }
  if (*(int *)(param_1 + 0x82) != 0) {
    param_2 = (byte *)FUN_141514f20(0x71,*(int *)(param_1 + 0x82),param_2);
  }
  lVar5 = (**(code **)(param_1[0xe] + 0x90))(param_1 + 0xe);
  if (**(longlong **)(lVar5 + 0x10) != 0) {
    lVar5 = (**(code **)(param_1[0xe] + 0x90))(param_1 + 0xe);
    plVar8 = (longlong *)FUN_140d599d0(*(undefined8 *)(lVar5 + 0x10),&local_80);
    lVar5 = *plVar8;
    lVar3 = plVar8[1];
    local_88 = plVar8[2];
    local_80._0_4_ = (undefined4)lVar5;
    local_80._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
    uStack_78._0_4_ = (undefined4)lVar3;
    uStack_78._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
    local_98 = (undefined4)local_80;
    uStack_94 = local_80._4_4_;
    uStack_90 = (undefined4)uStack_78;
    uStack_8c = uStack_78._4_4_;
    local_80 = lVar5;
    uStack_78 = lVar3;
    local_70 = local_88;
    local_58 = local_88;
    (**(code **)(param_1[0xe] + 0x90))(param_1 + 0xe);
    if (lVar5 != 0) {
      lVar5 = CONCAT44(uStack_94,local_98);
      do {
        lVar5 = *(longlong *)(lVar5 + 0x20);
        lVar3 = param_1[0x1c];
        if (lVar3 == 0) {
          puVar16 = (undefined8 *)operator_new(0x40);
          if (puVar16 != (undefined8 *)0x0) {
            puVar16[3] = 0;
            puVar16[1] = &DAT_146ba2f50;
            puVar16[2] = 0;
            *(undefined4 *)(puVar16 + 4) = 0;
            puVar16[5] = 0;
            goto LAB_1415088dd;
          }
          puVar16 = (undefined8 *)0x0;
        }
        else {
          if (*(longlong *)(lVar3 + 0x70) != 0) {
            FUN_1439f01b0(lVar3,0,0x40);
          }
          puVar16 = (undefined8 *)FUN_1439efd10(lVar3,0x40);
          puVar16[3] = lVar3;
          puVar16[1] = &DAT_146ba2f50;
          puVar16[2] = 0;
          *(undefined4 *)(puVar16 + 4) = 0;
          puVar16[5] = lVar3;
LAB_1415088dd:
          *puVar16 = &PTR_FUN_144c4d370;
          puVar16[6] = lVar5;
          puVar16[7] = lVar5 + 0x20;
          *(uint *)(puVar16 + 4) = *(uint *)(puVar16 + 4) | 3;
        }
        if (puVar9 != (undefined8 *)0x0) {
          (**(code **)*puVar9)(puVar9,1);
        }
        param_2 = (byte *)FUN_1414fd7d0(0x85,puVar16,param_2);
        plVar8 = *(longlong **)(CONCAT44(uStack_94,local_98) + 0x20);
        puVar1 = (ulonglong *)(plVar8 + 2);
        if (0xf < (ulonglong)plVar8[3]) {
          plVar8 = (longlong *)*plVar8;
        }
        FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,1,"OakSave.Profile.FriendEncountersEntry.key");
        FUN_140d25b00(&local_98);
        (**(code **)(param_1[0xe] + 0x90))(param_1 + 0xe);
        lVar5 = CONCAT44(uStack_94,local_98);
        puVar9 = puVar16;
      } while (lVar5 != 0);
      if (puVar16 != (undefined8 *)0x0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  uVar13 = 0;
  if (*(int *)(param_1 + 0x83) != 0) {
    param_2 = (byte *)FUN_141514d80(0x86,*(int *)(param_1 + 0x83),param_2);
  }
  uVar11 = *(uint *)(param_1 + 0x21);
  uVar17 = uVar13;
  if (uVar11 != 0) {
    do {
      lVar5 = *(longlong *)(param_1[0x22] + 8 + (longlong)(int)uVar17 * 8);
      uVar12 = 0x43a;
      do {
        pbVar15 = param_2;
        bVar10 = (byte)uVar12;
        uVar12 = uVar12 >> 7;
        *pbVar15 = bVar10 | 0x80;
        param_2 = pbVar15 + 1;
      } while (0x7f < uVar12);
      pbVar15[1] = (byte)uVar12;
      pbVar15 = pbVar15 + 2;
      for (uVar12 = *(uint *)(lVar5 + 0x1c); 0x7f < uVar12; uVar12 = uVar12 >> 7) {
        *pbVar15 = (byte)uVar12 | 0x80;
        pbVar15 = pbVar15 + 1;
      }
      *pbVar15 = (byte)uVar12;
      param_2 = (byte *)FUN_141548a10(lVar5,pbVar15 + 1);
      uVar12 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar12;
    } while (uVar12 < uVar11);
  }
  uVar11 = *(uint *)(param_1 + 0x24);
  uVar17 = uVar13;
  if (uVar11 != 0) {
    do {
      lVar5 = *(longlong *)(param_1[0x25] + 8 + (longlong)(int)uVar17 * 8);
      uVar12 = 0x442;
      do {
        pbVar15 = param_2;
        bVar10 = (byte)uVar12;
        uVar12 = uVar12 >> 7;
        *pbVar15 = bVar10 | 0x80;
        param_2 = pbVar15 + 1;
      } while (0x7f < uVar12);
      pbVar15[1] = (byte)uVar12;
      pbVar15 = pbVar15 + 2;
      for (uVar12 = *(uint *)(lVar5 + 0x18); 0x7f < uVar12; uVar12 = uVar12 >> 7) {
        *pbVar15 = (byte)uVar12 | 0x80;
        pbVar15 = pbVar15 + 1;
      }
      *pbVar15 = (byte)uVar12;
      param_2 = (byte *)FUN_141548ad0(lVar5,pbVar15 + 1);
      uVar12 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar12;
    } while (uVar12 < uVar11);
  }
  iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 0x26);
  uVar17 = uVar13;
  if (0 < iVar4) {
    do {
      uVar7 = FUN_1439f1d30(param_1 + 0x26,uVar17);
      uVar11 = 0x44a;
      do {
        pbVar15 = param_2;
        bVar10 = (byte)uVar11;
        uVar11 = uVar11 >> 7;
        *pbVar15 = bVar10 | 0x80;
        param_2 = pbVar15 + 1;
      } while (0x7f < uVar11);
      pbVar15[1] = (byte)uVar11;
      param_2 = (byte *)FUN_1439f9df0(uVar7,pbVar15 + 2);
      uVar11 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar11;
    } while ((int)uVar11 < iVar4);
  }
  iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 0x29);
  uVar17 = uVar13;
  if (0 < iVar4) {
    do {
      uVar7 = FUN_1439f1d30(param_1 + 0x29,uVar17);
      uVar11 = 0x452;
      do {
        pbVar15 = param_2;
        bVar10 = (byte)uVar11;
        uVar11 = uVar11 >> 7;
        *pbVar15 = bVar10 | 0x80;
        param_2 = pbVar15 + 1;
      } while (0x7f < uVar11);
      pbVar15[1] = (byte)uVar11;
      param_2 = (byte *)FUN_1439f9df0(uVar7,pbVar15 + 2);
      uVar11 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar11;
    } while ((int)uVar11 < iVar4);
  }
  uVar11 = *(uint *)(param_1 + 0x2d);
  uVar17 = uVar13;
  if (uVar11 != 0) {
    do {
      lVar5 = *(longlong *)(param_1[0x2e] + 8 + (longlong)(int)uVar17 * 8);
      uVar12 = 0x45a;
      do {
        pbVar15 = param_2;
        bVar10 = (byte)uVar12;
        uVar12 = uVar12 >> 7;
        *pbVar15 = bVar10 | 0x80;
        param_2 = pbVar15 + 1;
      } while (0x7f < uVar12);
      pbVar15[1] = (byte)uVar12;
      pbVar15 = pbVar15 + 2;
      for (uVar12 = *(uint *)(lVar5 + 0x58); 0x7f < uVar12; uVar12 = uVar12 >> 7) {
        *pbVar15 = (byte)uVar12 | 0x80;
        pbVar15 = pbVar15 + 1;
      }
      *pbVar15 = (byte)uVar12;
      param_2 = (byte *)FUN_141548ce0(lVar5,pbVar15 + 1);
      uVar12 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar12;
    } while (uVar12 < uVar11);
  }
  iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 0x2f);
  uVar17 = uVar13;
  if (0 < iVar4) {
    do {
      lVar5 = FUN_1439f1d30(param_1 + 0x2f,uVar17);
      uVar14 = *(ulonglong *)(lVar5 + 0x10);
      puVar9 = (undefined8 *)FUN_1439f1d30(param_1 + 0x2f,uVar17);
      if (0xf < (ulonglong)puVar9[3]) {
        puVar9 = (undefined8 *)*puVar9;
      }
      FUN_1439fa7f0(puVar9,uVar14 & 0xffffffff,1,"OakSave.Profile.mail_guids");
      uVar7 = FUN_1439f1d30(param_1 + 0x2f,uVar17);
      uVar11 = 0x462;
      do {
        pbVar15 = param_2;
        bVar10 = (byte)uVar11;
        uVar11 = uVar11 >> 7;
        *pbVar15 = bVar10 | 0x80;
        param_2 = pbVar15 + 1;
      } while (0x7f < uVar11);
      pbVar15[1] = (byte)uVar11;
      param_2 = (byte *)FUN_1439f9df0(uVar7,pbVar15 + 2);
      uVar11 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar11;
    } while ((int)uVar11 < iVar4);
  }
  iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 0x32);
  uVar17 = uVar13;
  if (0 < iVar4) {
    do {
      lVar5 = FUN_1439f1d30(param_1 + 0x32,uVar17);
      uVar14 = *(ulonglong *)(lVar5 + 0x10);
      puVar9 = (undefined8 *)FUN_1439f1d30(param_1 + 0x32,uVar17);
      if (0xf < (ulonglong)puVar9[3]) {
        puVar9 = (undefined8 *)*puVar9;
      }
      FUN_1439fa7f0(puVar9,uVar14 & 0xffffffff,1,"OakSave.Profile.unread_mail_guids");
      uVar7 = FUN_1439f1d30(param_1 + 0x32,uVar17);
      uVar11 = 0x46a;
      do {
        pbVar15 = param_2;
        bVar10 = (byte)uVar11;
        uVar11 = uVar11 >> 7;
        *pbVar15 = bVar10 | 0x80;
        param_2 = pbVar15 + 1;
      } while (0x7f < uVar11);
      pbVar15[1] = (byte)uVar11;
      param_2 = (byte *)FUN_1439f9df0(uVar7,pbVar15 + 2);
      uVar11 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar11;
    } while ((int)uVar11 < iVar4);
  }
  uVar11 = *(uint *)(param_1 + 0x36);
  uVar17 = uVar13;
  if (uVar11 != 0) {
    do {
      param_2 = (byte *)FUN_1414fda30(0x8e,*(undefined8 *)
                                            (param_1[0x37] + 8 + (longlong)(int)uVar17 * 8),param_2)
      ;
      uVar12 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar12;
    } while (uVar12 < uVar11);
  }
  uVar11 = *(uint *)(param_1 + 0x39);
  uVar17 = uVar13;
  if (uVar11 != 0) {
    do {
      lVar5 = *(longlong *)(param_1[0x3a] + 8 + (longlong)(int)uVar17 * 8);
      uVar12 = 0x47a;
      do {
        pbVar15 = param_2;
        bVar10 = (byte)uVar12;
        uVar12 = uVar12 >> 7;
        *pbVar15 = bVar10 | 0x80;
        param_2 = pbVar15 + 1;
      } while (0x7f < uVar12);
      pbVar15[1] = (byte)uVar12;
      pbVar15 = pbVar15 + 2;
      for (uVar12 = *(uint *)(lVar5 + 0x1c); 0x7f < uVar12; uVar12 = uVar12 >> 7) {
        *pbVar15 = (byte)uVar12 | 0x80;
        pbVar15 = pbVar15 + 1;
      }
      *pbVar15 = (byte)uVar12;
      param_2 = (byte *)FUN_141548f60(lVar5,pbVar15 + 1);
      uVar12 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar12;
    } while (uVar12 < uVar11);
  }
  uVar11 = *(uint *)(param_1 + 0x3c);
  uVar17 = uVar13;
  if (uVar11 != 0) {
    do {
      lVar5 = *(longlong *)(param_1[0x3d] + 8 + (longlong)(int)uVar17 * 8);
      uVar12 = 0x482;
      do {
        pbVar15 = param_2;
        bVar10 = (byte)uVar12;
        uVar12 = uVar12 >> 7;
        *pbVar15 = bVar10 | 0x80;
        param_2 = pbVar15 + 1;
      } while (0x7f < uVar12);
      pbVar15[1] = (byte)uVar12;
      pbVar15 = pbVar15 + 2;
      for (uVar12 = *(uint *)(lVar5 + 0x1c); 0x7f < uVar12; uVar12 = uVar12 >> 7) {
        *pbVar15 = (byte)uVar12 | 0x80;
        pbVar15 = pbVar15 + 1;
      }
      *pbVar15 = (byte)uVar12;
      param_2 = (byte *)FUN_141548bc0(lVar5,pbVar15 + 1);
      uVar12 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar12;
    } while (uVar12 < uVar11);
  }
  uVar11 = *(uint *)(param_1 + 0x3f);
  uVar17 = uVar13;
  if (uVar11 != 0) {
    do {
      lVar5 = *(longlong *)(param_1[0x40] + 8 + (longlong)(int)uVar17 * 8);
      uVar12 = 0x48a;
      do {
        pbVar15 = param_2;
        bVar10 = (byte)uVar12;
        uVar12 = uVar12 >> 7;
        *pbVar15 = bVar10 | 0x80;
        param_2 = pbVar15 + 1;
      } while (0x7f < uVar12);
      pbVar15[1] = (byte)uVar12;
      pbVar15 = pbVar15 + 2;
      for (uVar12 = *(uint *)(lVar5 + 0x18); 0x7f < uVar12; uVar12 = uVar12 >> 7) {
        *pbVar15 = (byte)uVar12 | 0x80;
        pbVar15 = pbVar15 + 1;
      }
      *pbVar15 = (byte)uVar12;
      param_2 = (byte *)FUN_141548c60(lVar5,pbVar15 + 1);
      uVar12 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar12;
    } while (uVar12 < uVar11);
  }
  if ((param_1 != &DAT_1468a4910) && (lVar5 = param_1[0x5a], lVar5 != 0)) {
    uVar11 = 0x492;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    pbVar15 = pbVar15 + 2;
    for (uVar11 = *(uint *)(lVar5 + 0x40); 0x7f < uVar11; uVar11 = uVar11 >> 7) {
      *pbVar15 = (byte)uVar11 | 0x80;
      pbVar15 = pbVar15 + 1;
    }
    *pbVar15 = (byte)uVar11;
    param_2 = (byte *)FUN_141506680(lVar5,pbVar15 + 1);
  }
  uVar11 = *(uint *)(param_1 + 0x42);
  uVar17 = uVar13;
  if (uVar11 != 0) {
    do {
      lVar5 = *(longlong *)(param_1[0x43] + 8 + (longlong)(int)uVar17 * 8);
      uVar12 = 0x49a;
      do {
        pbVar15 = param_2;
        bVar10 = (byte)uVar12;
        uVar12 = uVar12 >> 7;
        *pbVar15 = bVar10 | 0x80;
        param_2 = pbVar15 + 1;
      } while (0x7f < uVar12);
      pbVar15[1] = (byte)uVar12;
      pbVar15 = pbVar15 + 2;
      for (uVar12 = *(uint *)(lVar5 + 0x1c); 0x7f < uVar12; uVar12 = uVar12 >> 7) {
        *pbVar15 = (byte)uVar12 | 0x80;
        pbVar15 = pbVar15 + 1;
      }
      *pbVar15 = (byte)uVar12;
      param_2 = (byte *)FUN_1415488d0(lVar5,pbVar15 + 1);
      uVar12 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar12;
    } while (uVar12 < uVar11);
  }
  uVar11 = *(uint *)(param_1 + 0x45);
  uVar17 = uVar13;
  if (uVar11 != 0) {
    do {
      lVar5 = *(longlong *)(param_1[0x46] + 8 + (longlong)(int)uVar17 * 8);
      uVar12 = 0x4a2;
      do {
        pbVar15 = param_2;
        bVar10 = (byte)uVar12;
        uVar12 = uVar12 >> 7;
        *pbVar15 = bVar10 | 0x80;
        param_2 = pbVar15 + 1;
      } while (0x7f < uVar12);
      pbVar15[1] = (byte)uVar12;
      pbVar15 = pbVar15 + 2;
      for (uVar12 = *(uint *)(lVar5 + 0x1c); 0x7f < uVar12; uVar12 = uVar12 >> 7) {
        *pbVar15 = (byte)uVar12 | 0x80;
        pbVar15 = pbVar15 + 1;
      }
      *pbVar15 = (byte)uVar12;
      param_2 = (byte *)FUN_141548970(lVar5,pbVar15 + 1);
      uVar12 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar12;
    } while (uVar12 < uVar11);
  }
  if (*(char *)((longlong)param_1 + 0x416) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x96,*(char *)((longlong)param_1 + 0x416),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x417) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x97,*(char *)((longlong)param_1 + 0x417),param_2);
  }
  if (*(char *)(param_1 + 0x8a) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0x98,*(char *)(param_1 + 0x8a),param_2);
  }
  if (*(float *)((longlong)param_1 + 0x41c) != 0.0) {
    param_2 = (byte *)FUN_141514d10(0x99);
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    param_2 = (byte *)FUN_141514f20(0x9a,*(int *)(param_1 + 0x84),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x424) != 0) {
    param_2 = (byte *)FUN_141514f20(0x9b,*(int *)((longlong)param_1 + 0x424),param_2);
  }
  if (*(int *)(param_1 + 0x85) != 0) {
    param_2 = (byte *)FUN_141514f20(0x9c,*(int *)(param_1 + 0x85),param_2);
  }
  if (*(float *)((longlong)param_1 + 0x42c) != 0.0) {
    param_2 = (byte *)FUN_141514d10(0x9d);
  }
  if (*(int *)(param_1 + 0x86) != 0) {
    param_2 = (byte *)FUN_141514f20(0x9e,*(int *)(param_1 + 0x86),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x434) != 0) {
    param_2 = (byte *)FUN_141514f20(0x9f,*(int *)((longlong)param_1 + 0x434),param_2);
  }
  if (*(int *)(param_1 + 0x87) != 0) {
    param_2 = (byte *)FUN_141514f20(0xa0,*(int *)(param_1 + 0x87),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x43c) != 0) {
    param_2 = (byte *)FUN_141514f20(0xa1,*(int *)((longlong)param_1 + 0x43c),param_2);
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    param_2 = (byte *)FUN_141514f20(0xa2,*(int *)(param_1 + 0x88),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x444) != 0) {
    param_2 = (byte *)FUN_141514f20(0xa3,*(int *)((longlong)param_1 + 0x444),param_2);
  }
  if (*(int *)(param_1 + 0x89) != 0) {
    param_2 = (byte *)FUN_141514f20(0xa4,*(int *)(param_1 + 0x89),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x44c) != 0) {
    param_2 = (byte *)FUN_141514f20(0xa5,*(int *)((longlong)param_1 + 0x44c),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x454) != 0) {
    param_2 = (byte *)FUN_141514f20(0xa6,*(int *)((longlong)param_1 + 0x454),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x451) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xa7,*(char *)((longlong)param_1 + 0x451),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x452) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xa8,*(char *)((longlong)param_1 + 0x452),param_2);
  }
  if (*(int *)(param_1 + 0x8b) != 0) {
    param_2 = (byte *)FUN_141514f20(0xa9,*(int *)(param_1 + 0x8b),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x45c) != 0) {
    param_2 = (byte *)FUN_141514f20(0xaa,*(int *)((longlong)param_1 + 0x45c),param_2);
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    param_2 = (byte *)FUN_141514f20(0xab,*(int *)(param_1 + 0x8c),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x464) != 0) {
    param_2 = (byte *)FUN_141514f20(0xac,*(int *)((longlong)param_1 + 0x464),param_2);
  }
  if (*(int *)(param_1 + 0x8d) != 0) {
    param_2 = (byte *)FUN_141514f20(0xad,*(int *)(param_1 + 0x8d),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x453) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xae,*(char *)((longlong)param_1 + 0x453),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x46c) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xaf,*(char *)((longlong)param_1 + 0x46c),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x46d) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xb0,*(char *)((longlong)param_1 + 0x46d),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x46e) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xb1,*(char *)((longlong)param_1 + 0x46e),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x46f) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xb2,*(char *)((longlong)param_1 + 0x46f),param_2);
  }
  if (*(int *)(param_1 + 0x8e) != 0) {
    param_2 = (byte *)FUN_141514f20(0xb3,*(int *)(param_1 + 0x8e),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x474) != 0) {
    param_2 = (byte *)FUN_141514f20(0xb4,*(int *)((longlong)param_1 + 0x474),param_2);
  }
  if (*(int *)(param_1 + 0x8f) != 0) {
    param_2 = (byte *)FUN_141514f20(0xb5,*(int *)(param_1 + 0x8f),param_2);
  }
  if (*(float *)((longlong)param_1 + 0x47c) != 0.0) {
    param_2 = (byte *)FUN_141514d10(0xb6);
  }
  if (*(char *)((longlong)param_1 + 0x494) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xb8,*(char *)((longlong)param_1 + 0x494),param_2);
  }
  if (*(float *)(param_1 + 0x90) != 0.0) {
    param_2 = (byte *)FUN_141514d10(0xbd);
  }
  if (*(float *)((longlong)param_1 + 0x484) != 0.0) {
    param_2 = (byte *)FUN_141514d10(0xbe);
  }
  if (*(int *)(param_1 + 0x91) != 0) {
    param_2 = (byte *)FUN_141514f20(0xbf,*(int *)(param_1 + 0x91),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x48c) != 0) {
    param_2 = (byte *)FUN_141514f20(0xc0,*(int *)((longlong)param_1 + 0x48c),param_2);
  }
  if (*(int *)(param_1 + 0x92) != 0) {
    param_2 = (byte *)FUN_141514f20(0xc1,*(int *)(param_1 + 0x92),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x495) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xc2,*(char *)((longlong)param_1 + 0x495),param_2);
  }
  uVar11 = *(uint *)(param_1 + 0x48);
  uVar17 = uVar13;
  if (uVar11 != 0) {
    do {
      lVar5 = *(longlong *)(param_1[0x49] + 8 + (longlong)(int)uVar17 * 8);
      uVar12 = 0x61a;
      do {
        pbVar15 = param_2;
        bVar10 = (byte)uVar12;
        uVar12 = uVar12 >> 7;
        *pbVar15 = bVar10 | 0x80;
        param_2 = pbVar15 + 1;
      } while (0x7f < uVar12);
      pbVar15[1] = (byte)uVar12;
      pbVar15 = pbVar15 + 2;
      for (uVar12 = *(uint *)(lVar5 + 0x48); 0x7f < uVar12; uVar12 = uVar12 >> 7) {
        *pbVar15 = (byte)uVar12 | 0x80;
        pbVar15 = pbVar15 + 1;
      }
      *pbVar15 = (byte)uVar12;
      param_2 = (byte *)FUN_141549110(lVar5,pbVar15 + 1);
      uVar12 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar12;
    } while (uVar12 < uVar11);
  }
  iVar4 = IStreamingManager::GetNumWantingResources(param_1 + 0x4a);
  uVar17 = uVar13;
  if (0 < iVar4) {
    do {
      lVar5 = FUN_1439f1d30(param_1 + 0x4a,uVar17);
      uVar14 = *(ulonglong *)(lVar5 + 0x10);
      puVar9 = (undefined8 *)FUN_1439f1d30(param_1 + 0x4a,uVar17);
      if (0xf < (ulonglong)puVar9[3]) {
        puVar9 = (undefined8 *)*puVar9;
      }
      FUN_1439fa7f0(puVar9,uVar14 & 0xffffffff,1,"OakSave.Profile.seen_news_items");
      uVar7 = FUN_1439f1d30(param_1 + 0x4a,uVar17);
      uVar11 = 0x622;
      do {
        pbVar15 = param_2;
        bVar10 = (byte)uVar11;
        uVar11 = uVar11 >> 7;
        *pbVar15 = bVar10 | 0x80;
        param_2 = pbVar15 + 1;
      } while (0x7f < uVar11);
      pbVar15[1] = (byte)uVar11;
      param_2 = (byte *)FUN_1439f9df0(uVar7,pbVar15 + 2);
      uVar11 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar11;
    } while ((int)uVar11 < iVar4);
  }
  if (*(char *)((longlong)param_1 + 0x496) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xc5,*(char *)((longlong)param_1 + 0x496),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x497) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xc6,*(char *)((longlong)param_1 + 0x497),param_2);
  }
  if (*(char *)(param_1 + 0x93) != '\0') {
    param_2 = (byte *)FUN_141514ca0(199,*(char *)(param_1 + 0x93),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x499) != '\0') {
    param_2 = (byte *)FUN_141514ca0(200,*(char *)((longlong)param_1 + 0x499),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x49a) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xc9,*(char *)((longlong)param_1 + 0x49a),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x49c) != 0) {
    param_2 = (byte *)FUN_141514d80(0xca,*(int *)((longlong)param_1 + 0x49c),param_2);
  }
  if (*(float *)(param_1 + 0x94) != 0.0) {
    param_2 = (byte *)FUN_141514d10(0xcb);
  }
  if (*(char *)((longlong)param_1 + 0x49b) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xcc,*(char *)((longlong)param_1 + 0x49b),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x4a4) != 0) {
    param_2 = (byte *)FUN_141514d80(0xcd,*(int *)((longlong)param_1 + 0x4a4),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x4ac) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xce,*(char *)((longlong)param_1 + 0x4ac),param_2);
  }
  if (*(int *)(param_1 + 0x95) != 0) {
    param_2 = (byte *)FUN_141514d80(0xcf,*(int *)(param_1 + 0x95),param_2);
  }
  uVar11 = *(uint *)(param_1 + 0x4e);
  uVar17 = uVar13;
  if (uVar11 != 0) {
    do {
      lVar5 = *(longlong *)(param_1[0x4f] + 8 + (longlong)(int)uVar17 * 8);
      uVar12 = 0x682;
      do {
        pbVar15 = param_2;
        bVar10 = (byte)uVar12;
        uVar12 = uVar12 >> 7;
        *pbVar15 = bVar10 | 0x80;
        param_2 = pbVar15 + 1;
      } while (0x7f < uVar12);
      pbVar15[1] = (byte)uVar12;
      pbVar15 = pbVar15 + 2;
      for (uVar12 = *(uint *)(lVar5 + 0x58); 0x7f < uVar12; uVar12 = uVar12 >> 7) {
        *pbVar15 = (byte)uVar12 | 0x80;
        pbVar15 = pbVar15 + 1;
      }
      *pbVar15 = (byte)uVar12;
      param_2 = (byte *)FUN_141548510(lVar5,pbVar15 + 1);
      uVar12 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar12;
    } while (uVar12 < uVar11);
  }
  iVar4 = FUN_1439f2ae0(param_1 + 0x50);
  if (0 < iVar4) {
    uVar11 = 0x68a;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    pbVar15 = pbVar15 + 2;
    uVar11 = *(uint *)(param_1 + 0x52);
    uVar17 = (ulonglong)uVar11;
    while (bVar10 = (byte)uVar17, 0x7f < uVar11) {
      uVar17 = uVar17 >> 7;
      *pbVar15 = bVar10 | 0x80;
      pbVar15 = pbVar15 + 1;
      uVar11 = (uint)uVar17;
    }
    *pbVar15 = bVar10;
    param_2 = pbVar15 + 1;
    iVar4 = FUN_1439f2ae0(param_1 + 0x50);
    lVar5 = FUN_1405b74e0(param_1 + 0x50);
    uVar17 = uVar13;
    do {
      for (uVar14 = (ulonglong)*(int *)(lVar5 + uVar17 * 4); 0x7f < uVar14; uVar14 = uVar14 >> 7) {
        *param_2 = (byte)uVar14 | 0x80;
        param_2 = param_2 + 1;
      }
      *param_2 = (byte)uVar14;
      uVar17 = uVar17 + 1;
      param_2 = param_2 + 1;
    } while ((longlong)uVar17 < (longlong)iVar4);
  }
  if (*(char *)((longlong)param_1 + 0x4ad) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xd2,*(char *)((longlong)param_1 + 0x4ad),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x4ae) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xd3,*(char *)((longlong)param_1 + 0x4ae),param_2);
  }
  if (*(int *)(param_1 + 0x96) != 0) {
    param_2 = (byte *)FUN_141514f20(0xd4,*(int *)(param_1 + 0x96),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x4af) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xd5,*(char *)((longlong)param_1 + 0x4af),param_2);
  }
  uVar11 = *(uint *)(param_1 + 0x54);
  if (uVar11 != 0) {
    do {
      lVar5 = *(longlong *)(param_1[0x55] + 8 + (longlong)(int)uVar13 * 8);
      uVar12 = 0x6b2;
      do {
        pbVar15 = param_2;
        bVar10 = (byte)uVar12;
        uVar12 = uVar12 >> 7;
        *pbVar15 = bVar10 | 0x80;
        param_2 = pbVar15 + 1;
      } while (0x7f < uVar12);
      pbVar15[1] = (byte)uVar12;
      pbVar15 = pbVar15 + 2;
      for (uVar12 = *(uint *)(lVar5 + 0x24); 0x7f < uVar12; uVar12 = uVar12 >> 7) {
        *pbVar15 = (byte)uVar12 | 0x80;
        pbVar15 = pbVar15 + 1;
      }
      *pbVar15 = (byte)uVar12;
      param_2 = pbVar15 + 1;
      plVar8 = *(longlong **)(lVar5 + 0x10);
      puVar1 = (ulonglong *)(plVar8 + 2);
      if (*puVar1 != 0) {
        if (0xf < (ulonglong)plVar8[3]) {
          plVar8 = (longlong *)*plVar8;
        }
        FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,1,"OakSave.RecentlyMetPlayer.shift_player_id");
        param_2 = (byte *)FUN_141514e70(1,*(undefined8 *)(lVar5 + 0x10),param_2);
      }
      plVar8 = *(longlong **)(lVar5 + 0x18);
      puVar1 = (ulonglong *)(plVar8 + 2);
      if (*puVar1 != 0) {
        if (0xf < (ulonglong)plVar8[3]) {
          plVar8 = (longlong *)*plVar8;
        }
        FUN_1439fa7f0(plVar8,*puVar1 & 0xffffffff,1,
                      "OakSave.RecentlyMetPlayer.first_party_player_id");
        param_2 = (byte *)FUN_141514e70(2,*(undefined8 *)(lVar5 + 0x18),param_2);
      }
      if (*(char *)(lVar5 + 0x20) != '\0') {
        param_2 = (byte *)FUN_141514ca0(3,*(char *)(lVar5 + 0x20),param_2);
      }
      if ((*(byte *)(lVar5 + 8) & 1) != 0) {
        param_2 = (byte *)FUN_143a1dba0(*(ulonglong *)(lVar5 + 8) & 0xfffffffffffffffe,param_2);
      }
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
    } while (uVar12 < uVar11);
  }
  if (*(int *)((longlong)param_1 + 0x4b4) != 0) {
    param_2 = (byte *)FUN_141514d80(0xd7,*(int *)((longlong)param_1 + 0x4b4),param_2);
  }
  if (*(float *)(param_1 + 0x97) != 0.0) {
    param_2 = (byte *)FUN_141514d10(0xd8);
  }
  if (*(float *)((longlong)param_1 + 0x4bc) != 0.0) {
    param_2 = (byte *)FUN_141514d10(0xd9);
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    param_2 = (byte *)FUN_141514d80(0xda,*(int *)(param_1 + 0x98),param_2);
  }
  if (*(float *)((longlong)param_1 + 0x4c4) != 0.0) {
    param_2 = (byte *)FUN_141514d10(0xdb);
  }
  if (*(float *)(param_1 + 0x99) != 0.0) {
    param_2 = (byte *)FUN_141514d10(0xdc);
  }
  if (*(int *)((longlong)param_1 + 0x4cc) != 0) {
    param_2 = (byte *)FUN_141514d80(0xdd,*(int *)((longlong)param_1 + 0x4cc),param_2);
  }
  if (*(float *)(param_1 + 0x9a) != 0.0) {
    param_2 = (byte *)FUN_141514d10(0xde);
  }
  if (*(float *)((longlong)param_1 + 0x4d4) != 0.0) {
    param_2 = (byte *)FUN_141514d10(0xdf);
  }
  if (*(int *)(param_1 + 0x9b) != 0) {
    param_2 = (byte *)FUN_141514d80(0xe0,*(int *)(param_1 + 0x9b),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x4dc) != 0) {
    param_2 = (byte *)FUN_141514d80(0xe2,*(int *)((longlong)param_1 + 0x4dc),param_2);
  }
  if (*(char *)(param_1 + 0x9c) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xe3,*(char *)(param_1 + 0x9c),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x4e1) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xe4,*(char *)((longlong)param_1 + 0x4e1),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x4e2) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xe5,*(char *)((longlong)param_1 + 0x4e2),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x4e3) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xe6,*(char *)((longlong)param_1 + 0x4e3),param_2);
  }
  if ((param_1 != &DAT_1468a4910) && (lVar5 = param_1[0x5b], lVar5 != 0)) {
    uVar11 = 0x73a;
    do {
      pbVar15 = param_2;
      bVar10 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar15 = bVar10 | 0x80;
      param_2 = pbVar15 + 1;
    } while (0x7f < uVar11);
    pbVar15[1] = (byte)uVar11;
    pbVar15 = pbVar15 + 2;
    for (uVar11 = *(uint *)(lVar5 + 0x4c); 0x7f < uVar11; uVar11 = uVar11 >> 7) {
      *pbVar15 = (byte)uVar11 | 0x80;
      pbVar15 = pbVar15 + 1;
    }
    *pbVar15 = (byte)uVar11;
    param_2 = (byte *)FUN_1415495c0(lVar5,pbVar15 + 1);
  }
  if (*(int *)((longlong)param_1 + 0x4e4) != 0) {
    param_2 = (byte *)FUN_141514f20(0xe8,*(int *)((longlong)param_1 + 0x4e4),param_2);
  }
  if (*(char *)(param_1 + 0x9d) != '\0') {
    param_2 = (byte *)FUN_141514ca0(0xe9,*(char *)(param_1 + 0x9d),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x4ec) != 0) {
    param_2 = (byte *)FUN_141514d80(0xea,*(int *)((longlong)param_1 + 0x4ec),param_2);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    param_2 = (byte *)FUN_143a1dba0(param_1[1] & 0xfffffffffffffffe,param_2);
  }
  return param_2;
}



// FUNCTION 141509da0 FUN_141509da0 body=210 status=ok
// SIG undefined FUN_141509da0(void)

undefined1 * FUN_141509da0(longlong param_1,undefined1 *param_2)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,"OakSave.RecentlyMetPlayer.shift_player_id");
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 10;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
  puVar1 = (ulonglong *)(plVar4 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    FUN_1439fa7f0(plVar4,*puVar1 & 0xffffffff,1,"OakSave.RecentlyMetPlayer.first_party_player_id");
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *param_2 = 0x12;
    param_2 = (undefined1 *)FUN_1439f9df0(uVar2,param_2 + 1);
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    param_2 = (undefined1 *)FUN_141514ca0(3,*(char *)(param_1 + 0x20),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    puVar3 = (undefined1 *)FUN_143a1dba0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
    return puVar3;
  }
  return param_2;
}



// FUNCTION 141509e80 FUN_141509e80 body=131 status=ok
// SIG undefined FUN_141509e80(void)

void FUN_141509e80(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_28 [32];
  
  lVar3 = (**(code **)(*param_1 + 0x90))();
  puVar4 = (undefined8 *)FUN_140d599d0(*(undefined8 *)(lVar3 + 0x10),local_28);
  uVar1 = puVar4[2];
  puVar2 = (undefined4 *)*param_2;
  local_58 = (undefined4)*puVar4;
  uStack_54 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  uStack_50 = (undefined4)puVar4[1];
  uStack_4c = (undefined4)((ulonglong)puVar4[1] >> 0x20);
  *puVar2 = local_58;
  puVar2[1] = uStack_54;
  puVar2[2] = uStack_50;
  puVar2[3] = uStack_4c;
  *(undefined8 *)(puVar2 + 4) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000141509efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 141509f10 FUN_141509f10 body=53 status=ok
// SIG undefined FUN_141509f10(void)

void FUN_141509f10(longlong *param_1,undefined8 *param_2)

{
  (**(code **)(*param_1 + 0x90))();
  param_2 = (undefined8 *)*param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



// FUNCTION 141509f50 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_141549900(param_2,param_1);
  return;
}



// FUNCTION 141509f60 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_14152ff00(param_2,param_1);
  return;
}



// FUNCTION 141509f70 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_14150a870(param_2,param_1);
  return;
}



// FUNCTION 141509f80 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_14150a550(param_2,param_1);
  return;
}



// FUNCTION 141509f90 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_1415324d0(param_2,param_1);
  return;
}



// FUNCTION 141509fa0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_14154a000(param_2,param_1);
  return;
}



// FUNCTION 141509fb0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_14154a110(param_2,param_1);
  return;
}



// FUNCTION 141509fc0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_14150aca0(param_2,param_1);
  return;
}



// FUNCTION 141509fd0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_14150ae60(param_2,param_1);
  return;
}



// FUNCTION 141509fe0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_14150aff0(param_2,param_1);
  return;
}



// FUNCTION 141509ff0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_14150b160(param_2,param_1);
  return;
}



// FUNCTION 14150a000 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_14150ca60(param_2,param_1);
  return;
}



// FUNCTION 14150a010 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_14150c8c0(param_2,param_1);
  return;
}



// FUNCTION 14150a020 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_14154a560(param_2,param_1);
  return;
}



// FUNCTION 14150a030 FUN_14150a030 body=60 status=ok
// SIG undefined FUN_14150a030(void)

void FUN_14150a030(longlong param_1,longlong param_2)

{
  FUN_143a12920();
  FUN_143a12920(param_2);
  FUN_14150a070(param_1 + 0x70,param_2 + 0x70);
  FUN_143a124c0(param_1);
  return;
}



// FUNCTION 14150a070 FUN_14150a070 body=1240 status=ok
// SIG undefined FUN_14150a070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014150a201) */
/* WARNING: Removing unreachable block (ram,0x00014150a222) */

void FUN_14150a070(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  ulonglong local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulonglong local_108;
  longlong local_100;
  undefined1 local_f8 [32];
  longlong local_d8 [3];
  ulonglong local_c0;
  undefined8 local_b8;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_138 = (longlong *)((ulonglong)local_138 & 0xffffffff00000000);
  local_100 = param_1;
  puVar6 = (undefined8 *)FUN_140d599d0(*(undefined8 *)(param_2 + 0x18),&local_118);
  plVar7 = (longlong *)*puVar6;
  uVar2 = puVar6[1];
  local_108 = puVar6[2];
  local_130._0_4_ = SUB84(plVar7,0);
  local_130._4_4_ = (undefined4)((ulonglong)plVar7 >> 0x20);
  uStack_128._0_4_ = (undefined4)uVar2;
  uStack_128._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uVar10 = local_108;
  local_120 = local_108;
  plVar4 = plVar7;
  local_118 = (undefined4)local_130;
  uStack_114 = local_130._4_4_;
  uStack_110 = (undefined4)uStack_128;
  uStack_10c = uStack_128._4_4_;
joined_r0x00014150a0f7:
  while( true ) {
    do {
      uStack_128 = uVar2;
      local_130 = plVar4;
      plVar5 = plVar7;
      if (plVar5 == (longlong *)0x0) {
        return;
      }
      puVar6 = (undefined8 *)plVar5[4];
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_d8,puVar6);
      local_b8 = 0;
      plVar7 = (longlong *)FUN_140d5a260(uVar2,local_f8,local_d8);
      lVar3 = *plVar7;
      if (0xf < local_c0) {
        uVar13 = local_c0 + 1;
        lVar12 = local_d8[0];
        if (0xfff < uVar13) {
          lVar12 = *(longlong *)(local_d8[0] + -8);
          uVar13 = local_c0 + 0x28;
          if (0x1f < (local_d8[0] - lVar12) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar12,uVar13);
      }
      puVar8 = *(undefined8 **)(lVar3 + 0x20);
      if (puVar8 == (undefined8 *)0x0) {
        lVar12 = *(longlong *)(param_1 + 8);
        if (lVar12 == 0) {
          puVar8 = (undefined8 *)operator_new(0x40);
          if (puVar8 == (undefined8 *)0x0) {
            puVar8 = (undefined8 *)0x0;
          }
          else {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            basic_string<char,std::char_traits<char>,std::allocator<char>_>(puVar8,puVar6);
            puVar8[4] = &PTR__scalar_deleting_destructor__144c4cbc8;
            puVar8[5] = 0;
            puVar8[7] = 0;
            puVar8[6] = 0;
          }
        }
        else {
          if (lVar12 == 0) {
            puVar8 = (undefined8 *)operator_new(0x40);
          }
          else {
            if (*(longlong *)(lVar12 + 0x70) != 0) {
              FUN_1439f01b0(lVar12,0,0x40);
            }
            puVar8 = (undefined8 *)FUN_1439efd10(lVar12,0x40);
          }
          uVar2 = *(undefined8 *)(param_1 + 8);
          puVar8[2] = 0;
          puVar8[3] = 0xf;
          *(undefined1 *)puVar8 = 0;
          FUN_140d1e160(uVar2,puVar8);
          uVar2 = *(undefined8 *)(param_1 + 8);
          puVar8[4] = &PTR__scalar_deleting_destructor__144c4cbc8;
          puVar8[5] = 0;
          puVar8[7] = 0;
          puVar8[6] = 0;
          FUN_140d1e180(uVar2);
          if (puVar8 != puVar6) {
            puVar14 = puVar6;
            if (0xf < (ulonglong)puVar6[3]) {
              puVar14 = (undefined8 *)*puVar6;
            }
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                      (puVar8,puVar14,puVar6[2]);
          }
        }
        *(undefined8 **)(lVar3 + 0x20) = puVar8;
      }
      if (puVar6 + 4 != puVar8 + 4) {
        puVar8[6] = 0;
        *(undefined4 *)(puVar8 + 7) = 0;
        if (((*(byte *)(puVar8 + 5) & 1) != 0) &&
           (*(longlong *)(puVar8[5] & 0xfffffffffffffffe) !=
            ((longlong *)(puVar8[5] & 0xfffffffffffffffe))[1])) {
          FUN_1439fbee0();
        }
        if ((*(byte *)(puVar6 + 5) & 1) != 0) {
          uVar13 = puVar6[5];
          if ((*(byte *)(puVar8 + 5) & 1) == 0) {
            uVar9 = FUN_141515d60(puVar8 + 5);
          }
          else {
            uVar9 = puVar8[5] & 0xfffffffffffffffe;
          }
          FUN_1439fc150(uVar9,uVar13 & 0xfffffffffffffffe);
          param_1 = local_100;
        }
        if (puVar6[6] != 0) {
          puVar8[6] = puVar6[6];
        }
        if (*(int *)(puVar6 + 7) != 0) {
          *(int *)(puVar8 + 7) = *(int *)(puVar6 + 7);
        }
      }
      plVar7 = (longlong *)plVar5[5];
      plVar4 = local_130;
      uVar2 = uStack_128;
    } while (plVar7 != (longlong *)0x0);
    lVar3 = CONCAT44(uStack_10c,uStack_110);
    uVar10 = *(longlong *)(lVar3 + 8) - 1U & uVar10;
    plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x20) + uVar10 * 8);
    local_138 = plVar7;
    if (plVar4 == plVar5) break;
    if ((plVar4 != (longlong *)0x0) &&
       (plVar4 != *(longlong **)(*(longlong *)(lVar3 + 0x20) + (uVar10 ^ 1) * 8))) {
      for (plVar7 = (longlong *)plVar4[5]; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[5]
          ) {
        if (plVar7 == plVar5) goto LAB_14150a4df;
      }
    }
    lVar11 = FUN_140d2cbc0(lVar3,local_f8,plVar5,&local_138);
    lVar12 = *(longlong *)(lVar3 + 0x20);
    uVar10 = *(ulonglong *)(lVar11 + 0x10);
    lVar11 = *(longlong *)(lVar12 + uVar10 * 8);
    local_120 = uVar10;
    if ((lVar11 == 0) || (lVar11 != *(longlong *)(lVar12 + (uVar10 ^ 1) * 8))) break;
    plVar7 = (longlong *)local_138[2];
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar7 + 0x19);
      plVar4 = (longlong *)*plVar7;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar4 + 0x19);
        plVar7 = plVar4;
        plVar4 = (longlong *)*plVar4;
      }
    }
    else {
      cVar1 = *(char *)(local_138[1] + 0x19);
      plVar5 = (longlong *)local_138[1];
      plVar4 = local_138;
      while ((plVar7 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar7[2]))) {
        cVar1 = *(char *)(plVar7[1] + 0x19);
        plVar5 = (longlong *)plVar7[1];
        plVar4 = plVar7;
      }
    }
    if (plVar7 == *(longlong **)(lVar11 + 8)) {
      uVar10 = uVar10 + 2;
      if (*(ulonglong *)(lVar3 + 8) <= uVar10) {
        return;
      }
      plVar7 = (longlong *)(lVar12 + uVar10 * 8);
      do {
        lVar11 = *plVar7;
        if (lVar11 != 0) {
          if (lVar11 != *(longlong *)(lVar12 + (uVar10 ^ 1) * 8)) goto LAB_14150a52b;
          if ((lVar11 != 0) && (lVar11 == *(longlong *)(lVar12 + (uVar10 ^ 1) * 8)))
          goto LAB_14150a4c8;
        }
        uVar10 = uVar10 + 1;
        plVar7 = plVar7 + 1;
        if (*(ulonglong *)(lVar3 + 8) <= uVar10) {
          return;
        }
      } while( true );
    }
    plVar7 = (longlong *)plVar7[4];
    plVar4 = local_130;
    uVar2 = uStack_128;
  }
LAB_14150a4df:
  uVar10 = uVar10 + 1;
  if (*(ulonglong *)(lVar3 + 8) <= uVar10) {
    return;
  }
  lVar12 = *(longlong *)(lVar3 + 0x20);
  plVar7 = (longlong *)(lVar12 + uVar10 * 8);
  do {
    lVar11 = *plVar7;
    if (lVar11 != 0) {
      if (lVar11 != *(longlong *)(lVar12 + (uVar10 ^ 1) * 8)) break;
      if ((lVar11 != 0) && (lVar11 == *(longlong *)(lVar12 + (uVar10 ^ 1) * 8))) goto LAB_14150a4c8;
    }
    uVar10 = uVar10 + 1;
    plVar7 = plVar7 + 1;
    if (*(ulonglong *)(lVar3 + 8) <= uVar10) {
      return;
    }
  } while( true );
LAB_14150a52b:
  plVar7 = *(longlong **)(lVar12 + uVar10 * 8);
  plVar4 = local_130;
  uVar2 = uStack_128;
  goto joined_r0x00014150a0f7;
LAB_14150a4c8:
  plVar7 = *(longlong **)(**(longlong **)(*(longlong *)(lVar12 + uVar10 * 8) + 8) + 0x20);
  plVar4 = local_130;
  uVar2 = uStack_128;
  goto joined_r0x00014150a0f7;
}



// FUNCTION 14150a550 FUN_14150a550 body=236 status=ok
// SIG undefined FUN_14150a550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14150a550(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar3 = FUN_141515d60();
    }
    else {
      uVar3 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar3,uVar1 & 0xfffffffffffffffe);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x10);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x10), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x10);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x18);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x18), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x18);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 14150a640 FUN_14150a640 body=156 status=ok
// SIG undefined FUN_14150a640(void)

void FUN_14150a640(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0390 != 0) {
    FUN_1439f44f0(&DAT_1464a0390);
  }
  lVar1 = (**(code **)(DAT_1468a46c0 + 0xb8))(&DAT_1468a46c0,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14150a550(param_1);
  return;
}



// FUNCTION 14150a6e0 FUN_14150a6e0 body=229 status=ok
// SIG undefined FUN_14150a6e0(void)

void FUN_14150a6e0(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar2 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar4 = FUN_141515d60();
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar4,uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x20);
    uVar5 = FUN_1439f1d40(param_1 + 0x10,iVar1);
    FUN_1414fe370(param_1 + 0x10,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
    if (**(int **)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      **(int **)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  if (*(longlong *)(param_2 + 0x38) != 0) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_2 + 0x38);
  }
  return;
}



// FUNCTION 14150a7d0 FUN_14150a7d0 body=156 status=ok
// SIG undefined FUN_14150a7d0(void)

void FUN_14150a7d0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0438 != 0) {
    FUN_1439f44f0(&DAT_1464a0438);
  }
  lVar1 = (**(code **)(DAT_1468a4720 + 0xb8))(&DAT_1468a4720,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14150a6e0(param_1);
  return;
}



// FUNCTION 14150a870 FUN_14150a870 body=184 status=ok
// SIG undefined FUN_14150a870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14150a870(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar3 = FUN_141515d60();
    }
    else {
      uVar3 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar3,uVar1 & 0xfffffffffffffffe);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x10);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x10), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x10);
    }
    else {
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
    }
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  return;
}



// FUNCTION 14150a930 FUN_14150a930 body=156 status=ok
// SIG undefined FUN_14150a930(void)

void FUN_14150a930(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a03a8 != 0) {
    FUN_1439f44f0(&DAT_1464a03a8);
  }
  lVar1 = (**(code **)(DAT_1468a4768 + 0xb8))(&DAT_1468a4768,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14150a870(param_1);
  return;
}



// FUNCTION 14150a9d0 FUN_14150a9d0 body=109 status=ok
// SIG undefined FUN_14150a9d0(void)

void FUN_14150a9d0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar2 = FUN_141515d60();
    }
    else {
      uVar2 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar2,uVar1 & 0xfffffffffffffffe);
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  return;
}



// FUNCTION 14150aa40 FUN_14150aa40 body=156 status=ok
// SIG undefined FUN_14150aa40(void)

void FUN_14150aa40(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a03c0 != 0) {
    FUN_1439f44f0(&DAT_1464a03c0);
  }
  lVar1 = (**(code **)(DAT_1468a4788 + 0xb8))(&DAT_1468a4788,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14150a9d0(param_1);
  return;
}



// FUNCTION 14150aae0 FUN_14150aae0 body=156 status=ok
// SIG undefined FUN_14150aae0(void)

void FUN_14150aae0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a03d8 != 0) {
    FUN_1439f44f0(&DAT_1464a03d8);
  }
  lVar1 = (**(code **)(DAT_1468a47a8 + 0xb8))(&DAT_1468a47a8,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14150a870(param_1);
  return;
}



// FUNCTION 14150ab80 FUN_14150ab80 body=121 status=ok
// SIG undefined FUN_14150ab80(void)

void FUN_14150ab80(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar2 = FUN_141515d60();
    }
    else {
      uVar2 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar2,uVar1 & 0xfffffffffffffffe);
  }
  FUN_1439f2030(param_1 + 0x10,param_2 + 0x10);
  if (*(char *)(param_2 + 0x28) != '\0') {
    *(char *)(param_1 + 0x28) = *(char *)(param_2 + 0x28);
  }
  if (*(char *)(param_2 + 0x29) != '\0') {
    *(char *)(param_1 + 0x29) = *(char *)(param_2 + 0x29);
  }
  return;
}



// FUNCTION 14150ac00 FUN_14150ac00 body=156 status=ok
// SIG undefined FUN_14150ac00(void)

void FUN_14150ac00(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a03f0 != 0) {
    FUN_1439f44f0(&DAT_1464a03f0);
  }
  lVar1 = (**(code **)(DAT_1468a47c8 + 0xb8))(&DAT_1468a47c8,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14150ab80(param_1);
  return;
}



// FUNCTION 14150aca0 FUN_14150aca0 body=281 status=ok
// SIG undefined FUN_14150aca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14150aca0(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [32];
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar2 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar5 = FUN_141515d60();
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar5,uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x20);
    uVar6 = FUN_1439f1d40(param_1 + 0x10,iVar1);
    local_38 = **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18);
    FUN_1414fe9f0(param_1 + 0x10,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
    if (**(int **)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      **(int **)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    }
  }
  puVar7 = *(undefined8 **)(param_2 + 0x28);
  if ((puVar7[2] != 0) && (puVar4 = *(undefined8 **)(param_1 + 0x28), puVar4 != puVar7)) {
    if (puVar4 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x28);
      return;
    }
    if (0xf < (ulonglong)puVar7[3]) {
      puVar7 = (undefined8 *)*puVar7;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar4,puVar7);
  }
  return;
}



// FUNCTION 14150adc0 FUN_14150adc0 body=156 status=ok
// SIG undefined FUN_14150adc0(void)

void FUN_14150adc0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0468 != 0) {
    FUN_1439f44f0(&DAT_1464a0468);
  }
  lVar1 = (**(code **)(DAT_1468a46e8 + 0xb8))(&DAT_1468a46e8,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14150aca0(param_1);
  return;
}



// FUNCTION 14150ae60 FUN_14150ae60 body=234 status=ok
// SIG undefined FUN_14150ae60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14150ae60(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    uVar1 = param_2[1];
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar4 = FUN_141515d60();
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar4,uVar1 & 0xfffffffffffffffe);
  }
  puVar6 = (undefined8 *)param_2[2];
  if ((puVar6[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x10), puVar2 != puVar6)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x10);
    }
    else {
      if (0xf < (ulonglong)puVar6[3]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar6);
    }
  }
  if ((param_2 != &DAT_1468a47f8) && (lVar3 = param_2[3], lVar3 != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x18);
    if (lVar5 == 0) {
      lVar5 = FUN_141544530();
      *(longlong *)(param_1 + 0x18) = lVar5;
    }
    FUN_14154acf0(lVar5,lVar3);
  }
  return;
}



// FUNCTION 14150af50 FUN_14150af50 body=156 status=ok
// SIG undefined FUN_14150af50(void)

void FUN_14150af50(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0450 != 0) {
    FUN_1439f44f0(&DAT_1464a0450);
  }
  lVar1 = (**(code **)(DAT_1468a47f8 + 0xb8))(&DAT_1468a47f8,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14150ae60(param_1);
  return;
}



// FUNCTION 14150aff0 FUN_14150aff0 body=204 status=ok
// SIG undefined FUN_14150aff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14150aff0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar3 = FUN_141515d60();
    }
    else {
      uVar3 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar3,uVar1 & 0xfffffffffffffffe);
  }
  FUN_1439f2030(param_1 + 0x10,param_2 + 0x10);
  puVar4 = *(undefined8 **)(param_2 + 0x28);
  if ((puVar4[2] != 0) && (puVar2 = *(undefined8 **)(param_1 + 0x28), puVar2 != puVar4)) {
    if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x28);
      return;
    }
    if (0xf < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
  }
  return;
}



// FUNCTION 14150b0c0 FUN_14150b0c0 body=156 status=ok
// SIG undefined FUN_14150b0c0(void)

void FUN_14150b0c0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0408 != 0) {
    FUN_1439f44f0(&DAT_1464a0408);
  }
  lVar1 = (**(code **)(DAT_1468a4820 + 0xb8))(&DAT_1468a4820,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14150aff0(param_1);
  return;
}



// FUNCTION 14150b160 FUN_14150b160 body=372 status=ok
// SIG undefined FUN_14150b160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14150b160(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [32];
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar2 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar5 = FUN_141515d60();
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar5,uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x20);
    uVar6 = FUN_1439f1d40(param_1 + 0x10,iVar1);
    local_38 = **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18);
    FUN_1414feac0(param_1 + 0x10,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
    if (**(int **)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      **(int **)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    }
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x38);
    uVar6 = FUN_1439f1d40(param_1 + 0x28,iVar1);
    local_38 = **(int **)(param_1 + 0x38) - *(int *)(param_1 + 0x30);
    FUN_1414fe920(param_1 + 0x28,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar1;
    if (**(int **)(param_1 + 0x38) < *(int *)(param_1 + 0x30)) {
      **(int **)(param_1 + 0x38) = *(int *)(param_1 + 0x30);
    }
  }
  puVar7 = *(undefined8 **)(param_2 + 0x40);
  if ((puVar7[2] != 0) && (puVar4 = *(undefined8 **)(param_1 + 0x40), puVar4 != puVar7)) {
    if (puVar4 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x40);
    }
    else {
      if (0xf < (ulonglong)puVar7[3]) {
        puVar7 = (undefined8 *)*puVar7;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar4,puVar7);
    }
  }
  puVar7 = *(undefined8 **)(param_2 + 0x48);
  if ((puVar7[2] != 0) && (puVar4 = *(undefined8 **)(param_1 + 0x48), puVar4 != puVar7)) {
    if (puVar4 == (undefined8 *)&DAT_146ba2f50) {
      FUN_140d2a6b0(param_1 + 0x48);
    }
    else {
      if (0xf < (ulonglong)puVar7[3]) {
        puVar7 = (undefined8 *)*puVar7;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar4,puVar7);
    }
  }
  return;
}



// FUNCTION 14150b2e0 FUN_14150b2e0 body=156 status=ok
// SIG undefined FUN_14150b2e0(void)

void FUN_14150b2e0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a04b0 != 0) {
    FUN_1439f44f0(&DAT_1464a04b0);
  }
  lVar1 = (**(code **)(DAT_1468a4880 + 0xb8))(&DAT_1468a4880,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14150b160(param_1);
  return;
}



// FUNCTION 14150b380 FUN_14150b380 body=149 status=ok
// SIG undefined FUN_14150b380(void)

void FUN_14150b380(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar2 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar4 = FUN_141515d60();
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar4,uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x20);
    uVar5 = FUN_1439f1d40(param_1 + 0x10,iVar1);
    FUN_1414feb90(param_1 + 0x10,uVar5,lVar3 + 8,iVar1,
                  **(int **)(param_1 + 0x20) - *(int *)(param_1 + 0x18));
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
    if (**(int **)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      **(int **)(param_1 + 0x20) = *(int *)(param_1 + 0x18);
    }
  }
  return;
}



// FUNCTION 14150b420 FUN_14150b420 body=156 status=ok
// SIG undefined FUN_14150b420(void)

void FUN_14150b420(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0480 != 0) {
    FUN_1439f44f0(&DAT_1464a0480);
  }
  lVar1 = (**(code **)(DAT_1468a48d8 + 0xb8))(&DAT_1468a48d8,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14150b380(param_1);
  return;
}



// FUNCTION 14150b4c0 FUN_14150b4c0 body=4935 status=ok
// SIG undefined FUN_14150b4c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14150b4c0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_58 [32];
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    uVar2 = param_2[1];
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar5 = FUN_141515d60();
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar5,uVar2 & 0xfffffffffffffffe);
  }
  FUN_1439f1f20(param_1 + 0x10,param_2 + 2);
  iVar1 = *(int *)(param_2 + 6);
  if (iVar1 != 0) {
    lVar3 = param_2[7];
    uVar6 = FUN_1439f1d40(param_1 + 0x28,iVar1);
    local_38 = **(int **)(param_1 + 0x38) - *(int *)(param_1 + 0x30);
    FUN_1414fe780(param_1 + 0x28,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar1;
    if (**(int **)(param_1 + 0x38) < *(int *)(param_1 + 0x30)) {
      **(int **)(param_1 + 0x38) = *(int *)(param_1 + 0x30);
    }
  }
  FUN_1439f2030(param_1 + 0x40,param_2 + 8);
  FUN_1439f2030(param_1 + 0x58,param_2 + 0xb);
  (**(code **)(*(longlong *)(param_1 + 0x70) + 0x38))(param_1 + 0x70,param_2 + 0xe);
  iVar1 = *(int *)(param_2 + 0x21);
  if (iVar1 != 0) {
    lVar3 = param_2[0x22];
    uVar6 = FUN_1439f1d40(param_1 + 0x100,iVar1);
    local_38 = **(int **)(param_1 + 0x110) - *(int *)(param_1 + 0x108);
    FUN_1414fe1d0(param_1 + 0x100,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + iVar1;
    if (**(int **)(param_1 + 0x110) < *(int *)(param_1 + 0x108)) {
      **(int **)(param_1 + 0x110) = *(int *)(param_1 + 0x108);
    }
  }
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 != 0) {
    lVar3 = param_2[0x25];
    uVar6 = FUN_1439f1d40(param_1 + 0x118,iVar1);
    local_38 = **(int **)(param_1 + 0x128) - *(int *)(param_1 + 0x120);
    FUN_1414fe440(param_1 + 0x118,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + iVar1;
    if (**(int **)(param_1 + 0x128) < *(int *)(param_1 + 0x120)) {
      **(int **)(param_1 + 0x128) = *(int *)(param_1 + 0x120);
    }
  }
  FUN_1439f2030(param_1 + 0x130,param_2 + 0x26);
  FUN_1439f2030(param_1 + 0x148,param_2 + 0x29);
  iVar1 = *(int *)(param_2 + 0x2d);
  if (iVar1 != 0) {
    lVar3 = param_2[0x2e];
    uVar6 = FUN_1439f1d40(param_1 + 0x160,iVar1);
    local_38 = **(int **)(param_1 + 0x170) - *(int *)(param_1 + 0x168);
    FUN_1414fe6b0(param_1 + 0x160,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + iVar1;
    if (**(int **)(param_1 + 0x170) < *(int *)(param_1 + 0x168)) {
      **(int **)(param_1 + 0x170) = *(int *)(param_1 + 0x168);
    }
  }
  FUN_1439f2030(param_1 + 0x178,param_2 + 0x2f);
  FUN_1439f2030(param_1 + 400,param_2 + 0x32);
  iVar1 = *(int *)(param_2 + 0x36);
  if (iVar1 != 0) {
    lVar3 = param_2[0x37];
    uVar6 = FUN_1439f1d40(param_1 + 0x1a8,iVar1);
    local_38 = **(int **)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1b0);
    FUN_1414fe2a0(param_1 + 0x1a8,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + iVar1;
    if (**(int **)(param_1 + 0x1b8) < *(int *)(param_1 + 0x1b0)) {
      **(int **)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b0);
    }
  }
  iVar1 = *(int *)(param_2 + 0x39);
  if (iVar1 != 0) {
    lVar3 = param_2[0x3a];
    uVar6 = FUN_1439f1d40(param_1 + 0x1c0,iVar1);
    local_38 = **(int **)(param_1 + 0x1d0) - *(int *)(param_1 + 0x1c8);
    FUN_1414fe850(param_1 + 0x1c0,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + iVar1;
    if (**(int **)(param_1 + 0x1d0) < *(int *)(param_1 + 0x1c8)) {
      **(int **)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1c8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x3c);
  if (iVar1 != 0) {
    lVar3 = param_2[0x3d];
    uVar6 = FUN_1439f1d40(param_1 + 0x1d8,iVar1);
    local_38 = **(int **)(param_1 + 0x1e8) - *(int *)(param_1 + 0x1e0);
    FUN_1414fe510(param_1 + 0x1d8,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + iVar1;
    if (**(int **)(param_1 + 0x1e8) < *(int *)(param_1 + 0x1e0)) {
      **(int **)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e0);
    }
  }
  iVar1 = *(int *)(param_2 + 0x3f);
  if (iVar1 != 0) {
    lVar3 = param_2[0x40];
    uVar6 = FUN_1439f1d40(param_1 + 0x1f0,iVar1);
    local_38 = **(int **)(param_1 + 0x200) - *(int *)(param_1 + 0x1f8);
    FUN_1414fe5e0(param_1 + 0x1f0,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + iVar1;
    if (**(int **)(param_1 + 0x200) < *(int *)(param_1 + 0x1f8)) {
      **(int **)(param_1 + 0x200) = *(int *)(param_1 + 0x1f8);
    }
  }
  iVar1 = *(int *)(param_2 + 0x42);
  if (iVar1 != 0) {
    lVar3 = param_2[0x43];
    uVar6 = FUN_1439f1d40(param_1 + 0x208,iVar1);
    local_38 = **(int **)(param_1 + 0x218) - *(int *)(param_1 + 0x210);
    FUN_1414fe030(param_1 + 0x208,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + iVar1;
    if (**(int **)(param_1 + 0x218) < *(int *)(param_1 + 0x210)) {
      **(int **)(param_1 + 0x218) = *(int *)(param_1 + 0x210);
    }
  }
  iVar1 = *(int *)(param_2 + 0x45);
  if (iVar1 != 0) {
    lVar3 = param_2[0x46];
    uVar6 = FUN_1439f1d40(param_1 + 0x220,iVar1);
    local_38 = **(int **)(param_1 + 0x230) - *(int *)(param_1 + 0x228);
    FUN_1414fe100(param_1 + 0x220,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + iVar1;
    if (**(int **)(param_1 + 0x230) < *(int *)(param_1 + 0x228)) {
      **(int **)(param_1 + 0x230) = *(int *)(param_1 + 0x228);
    }
  }
  iVar1 = *(int *)(param_2 + 0x48);
  if (iVar1 != 0) {
    lVar3 = param_2[0x49];
    uVar6 = FUN_1439f1d40(param_1 + 0x238,iVar1);
    local_38 = **(int **)(param_1 + 0x248) - *(int *)(param_1 + 0x240);
    FUN_1414fed30(param_1 + 0x238,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + iVar1;
    if (**(int **)(param_1 + 0x248) < *(int *)(param_1 + 0x240)) {
      **(int **)(param_1 + 0x248) = *(int *)(param_1 + 0x240);
    }
  }
  FUN_1439f2030(param_1 + 0x250,param_2 + 0x4a);
  iVar1 = *(int *)(param_2 + 0x4e);
  if (iVar1 != 0) {
    lVar3 = param_2[0x4f];
    uVar6 = FUN_1439f1d40(param_1 + 0x268,iVar1);
    local_38 = **(int **)(param_1 + 0x278) - *(int *)(param_1 + 0x270);
    FUN_1414fdf60(param_1 + 0x268,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x270) = *(int *)(param_1 + 0x270) + iVar1;
    if (**(int **)(param_1 + 0x278) < *(int *)(param_1 + 0x270)) {
      **(int **)(param_1 + 0x278) = *(int *)(param_1 + 0x270);
    }
  }
  FUN_1439f1f20(param_1 + 0x280,param_2 + 0x50);
  iVar1 = *(int *)(param_2 + 0x54);
  if (iVar1 != 0) {
    lVar3 = param_2[0x55];
    uVar6 = FUN_1439f1d40(param_1 + 0x298,iVar1);
    local_38 = **(int **)(param_1 + 0x2a8) - *(int *)(param_1 + 0x2a0);
    FUN_1414fec60(param_1 + 0x298,uVar6,lVar3 + 8,iVar1);
    *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) + iVar1;
    if (**(int **)(param_1 + 0x2a8) < *(int *)(param_1 + 0x2a0)) {
      **(int **)(param_1 + 0x2a8) = *(int *)(param_1 + 0x2a0);
    }
  }
  puVar8 = (undefined8 *)param_2[0x56];
  if (puVar8[2] != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x2b0);
    if (puVar4 != puVar8) {
      if (puVar4 == (undefined8 *)&DAT_146ba2f50) {
        FUN_140d2a6b0((undefined8 *)(param_1 + 0x2b0));
      }
      else {
        if (0xf < (ulonglong)puVar8[3]) {
          puVar8 = (undefined8 *)*puVar8;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar4,puVar8);
      }
    }
  }
  puVar8 = (undefined8 *)param_2[0x57];
  if (puVar8[2] != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x2b8);
    if (puVar4 != puVar8) {
      if (puVar4 == (undefined8 *)&DAT_146ba2f50) {
        FUN_140d2a6b0((undefined8 *)(param_1 + 0x2b8));
      }
      else {
        if (0xf < (ulonglong)puVar8[3]) {
          puVar8 = (undefined8 *)*puVar8;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar4,puVar8);
      }
    }
  }
  if (param_2 != &DAT_1468a4910) {
    lVar3 = param_2[0x58];
    if (lVar3 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x2c0);
      if (lVar7 == 0) {
        lVar7 = FUN_1414fd580();
        *(longlong *)(param_1 + 0x2c0) = lVar7;
      }
      FUN_14150b380(lVar7,lVar3);
    }
    if (param_2 != &DAT_1468a4910) {
      lVar3 = param_2[0x59];
      if (lVar3 != 0) {
        lVar7 = *(longlong *)(param_1 + 0x2c8);
        if (lVar7 == 0) {
          lVar7 = FUN_1414fd280();
          *(longlong *)(param_1 + 0x2c8) = lVar7;
        }
        FUN_14150ab80(lVar7,lVar3);
      }
      if (param_2 != &DAT_1468a4910) {
        lVar3 = param_2[0x5a];
        if (lVar3 != 0) {
          lVar7 = *(longlong *)(param_1 + 0x2d0);
          if (lVar7 == 0) {
            lVar7 = FUN_1414fd000();
            *(longlong *)(param_1 + 0x2d0) = lVar7;
          }
          FUN_14150a6e0(lVar7,lVar3);
        }
        if ((param_2 != &DAT_1468a4910) && (lVar3 = param_2[0x5b], lVar3 != 0)) {
          lVar7 = *(longlong *)(param_1 + 0x2d8);
          if (lVar7 == 0) {
            lVar7 = FUN_141544480();
            *(longlong *)(param_1 + 0x2d8) = lVar7;
          }
          FUN_14154ab30(lVar7,lVar3);
        }
      }
    }
  }
  if (*(char *)(param_2 + 0x5c) != '\0') {
    *(char *)(param_1 + 0x2e0) = *(char *)(param_2 + 0x5c);
  }
  if (*(char *)((longlong)param_2 + 0x2e1) != '\0') {
    *(char *)(param_1 + 0x2e1) = *(char *)((longlong)param_2 + 0x2e1);
  }
  if (*(char *)((longlong)param_2 + 0x2e2) != '\0') {
    *(char *)(param_1 + 0x2e2) = *(char *)((longlong)param_2 + 0x2e2);
  }
  if (*(char *)((longlong)param_2 + 0x2e3) != '\0') {
    *(char *)(param_1 + 0x2e3) = *(char *)((longlong)param_2 + 0x2e3);
  }
  if (*(char *)((longlong)param_2 + 0x2e4) != '\0') {
    *(char *)(param_1 + 0x2e4) = *(char *)((longlong)param_2 + 0x2e4);
  }
  if (*(char *)((longlong)param_2 + 0x2e5) != '\0') {
    *(char *)(param_1 + 0x2e5) = *(char *)((longlong)param_2 + 0x2e5);
  }
  if (*(char *)((longlong)param_2 + 0x2e6) != '\0') {
    *(char *)(param_1 + 0x2e6) = *(char *)((longlong)param_2 + 0x2e6);
  }
  if (*(char *)((longlong)param_2 + 0x2e7) != '\0') {
    *(char *)(param_1 + 0x2e7) = *(char *)((longlong)param_2 + 0x2e7);
  }
  if (*(float *)(param_2 + 0x5d) != 0.0) {
    *(float *)(param_1 + 0x2e8) = *(float *)(param_2 + 0x5d);
  }
  if (*(char *)((longlong)param_2 + 0x2ec) != '\0') {
    *(char *)(param_1 + 0x2ec) = *(char *)((longlong)param_2 + 0x2ec);
  }
  if (*(char *)((longlong)param_2 + 0x2ed) != '\0') {
    *(char *)(param_1 + 0x2ed) = *(char *)((longlong)param_2 + 0x2ed);
  }
  if (*(char *)((longlong)param_2 + 0x2ee) != '\0') {
    *(char *)(param_1 + 0x2ee) = *(char *)((longlong)param_2 + 0x2ee);
  }
  if (*(char *)((longlong)param_2 + 0x2ef) != '\0') {
    *(char *)(param_1 + 0x2ef) = *(char *)((longlong)param_2 + 0x2ef);
  }
  if (*(char *)(param_2 + 0x5e) != '\0') {
    *(char *)(param_1 + 0x2f0) = *(char *)(param_2 + 0x5e);
  }
  if (*(char *)((longlong)param_2 + 0x2f1) != '\0') {
    *(char *)(param_1 + 0x2f1) = *(char *)((longlong)param_2 + 0x2f1);
  }
  if (*(char *)((longlong)param_2 + 0x2f2) != '\0') {
    *(char *)(param_1 + 0x2f2) = *(char *)((longlong)param_2 + 0x2f2);
  }
  if (*(char *)((longlong)param_2 + 0x2f3) != '\0') {
    *(char *)(param_1 + 0x2f3) = *(char *)((longlong)param_2 + 0x2f3);
  }
  if (*(float *)((longlong)param_2 + 0x2f4) != 0.0) {
    *(float *)(param_1 + 0x2f4) = *(float *)((longlong)param_2 + 0x2f4);
  }
  if (*(float *)(param_2 + 0x5f) != 0.0) {
    *(float *)(param_1 + 0x2f8) = *(float *)(param_2 + 0x5f);
  }
  if (*(float *)((longlong)param_2 + 0x2fc) != 0.0) {
    *(float *)(param_1 + 0x2fc) = *(float *)((longlong)param_2 + 0x2fc);
  }
  if (*(float *)(param_2 + 0x60) != 0.0) {
    *(float *)(param_1 + 0x300) = *(float *)(param_2 + 0x60);
  }
  if (*(char *)((longlong)param_2 + 0x304) != '\0') {
    *(char *)(param_1 + 0x304) = *(char *)((longlong)param_2 + 0x304);
  }
  if (*(char *)((longlong)param_2 + 0x305) != '\0') {
    *(char *)(param_1 + 0x305) = *(char *)((longlong)param_2 + 0x305);
  }
  if (*(char *)((longlong)param_2 + 0x306) != '\0') {
    *(char *)(param_1 + 0x306) = *(char *)((longlong)param_2 + 0x306);
  }
  if (*(char *)((longlong)param_2 + 0x307) != '\0') {
    *(char *)(param_1 + 0x307) = *(char *)((longlong)param_2 + 0x307);
  }
  if (*(float *)(param_2 + 0x61) != 0.0) {
    *(float *)(param_1 + 0x308) = *(float *)(param_2 + 0x61);
  }
  if (*(float *)((longlong)param_2 + 0x30c) != 0.0) {
    *(float *)(param_1 + 0x30c) = *(float *)((longlong)param_2 + 0x30c);
  }
  if (*(float *)(param_2 + 0x62) != 0.0) {
    *(float *)(param_1 + 0x310) = *(float *)(param_2 + 0x62);
  }
  if (*(int *)((longlong)param_2 + 0x314) != 0) {
    *(int *)(param_1 + 0x314) = *(int *)((longlong)param_2 + 0x314);
  }
  if (*(int *)(param_2 + 99) != 0) {
    *(int *)(param_1 + 0x318) = *(int *)(param_2 + 99);
  }
  if (*(int *)((longlong)param_2 + 0x31c) != 0) {
    *(int *)(param_1 + 0x31c) = *(int *)((longlong)param_2 + 0x31c);
  }
  if (*(int *)(param_2 + 100) != 0) {
    *(int *)(param_1 + 800) = *(int *)(param_2 + 100);
  }
  if (*(int *)((longlong)param_2 + 0x324) != 0) {
    *(int *)(param_1 + 0x324) = *(int *)((longlong)param_2 + 0x324);
  }
  if (*(float *)(param_2 + 0x65) != 0.0) {
    *(float *)(param_1 + 0x328) = *(float *)(param_2 + 0x65);
  }
  if (*(float *)((longlong)param_2 + 0x32c) != 0.0) {
    *(float *)(param_1 + 0x32c) = *(float *)((longlong)param_2 + 0x32c);
  }
  if (*(float *)(param_2 + 0x66) != 0.0) {
    *(float *)(param_1 + 0x330) = *(float *)(param_2 + 0x66);
  }
  if (*(float *)((longlong)param_2 + 0x334) != 0.0) {
    *(float *)(param_1 + 0x334) = *(float *)((longlong)param_2 + 0x334);
  }
  if (*(float *)(param_2 + 0x67) != 0.0) {
    *(float *)(param_1 + 0x338) = *(float *)(param_2 + 0x67);
  }
  if (*(float *)((longlong)param_2 + 0x33c) != 0.0) {
    *(float *)(param_1 + 0x33c) = *(float *)((longlong)param_2 + 0x33c);
  }
  if (*(float *)(param_2 + 0x68) != 0.0) {
    *(float *)(param_1 + 0x340) = *(float *)(param_2 + 0x68);
  }
  if (*(float *)((longlong)param_2 + 0x344) != 0.0) {
    *(float *)(param_1 + 0x344) = *(float *)((longlong)param_2 + 0x344);
  }
  if (*(float *)(param_2 + 0x69) != 0.0) {
    *(float *)(param_1 + 0x348) = *(float *)(param_2 + 0x69);
  }
  if (*(float *)((longlong)param_2 + 0x34c) != 0.0) {
    *(float *)(param_1 + 0x34c) = *(float *)((longlong)param_2 + 0x34c);
  }
  if (*(float *)(param_2 + 0x6a) != 0.0) {
    *(float *)(param_1 + 0x350) = *(float *)(param_2 + 0x6a);
  }
  if (*(float *)((longlong)param_2 + 0x354) != 0.0) {
    *(float *)(param_1 + 0x354) = *(float *)((longlong)param_2 + 0x354);
  }
  if (*(float *)(param_2 + 0x6b) != 0.0) {
    *(float *)(param_1 + 0x358) = *(float *)(param_2 + 0x6b);
  }
  if (*(char *)((longlong)param_2 + 0x35c) != '\0') {
    *(char *)(param_1 + 0x35c) = *(char *)((longlong)param_2 + 0x35c);
  }
  if (*(char *)((longlong)param_2 + 0x35d) != '\0') {
    *(char *)(param_1 + 0x35d) = *(char *)((longlong)param_2 + 0x35d);
  }
  if (*(char *)((longlong)param_2 + 0x35e) != '\0') {
    *(char *)(param_1 + 0x35e) = *(char *)((longlong)param_2 + 0x35e);
  }
  if (*(char *)((longlong)param_2 + 0x35f) != '\0') {
    *(char *)(param_1 + 0x35f) = *(char *)((longlong)param_2 + 0x35f);
  }
  if (*(float *)(param_2 + 0x6c) != 0.0) {
    *(float *)(param_1 + 0x360) = *(float *)(param_2 + 0x6c);
  }
  if (*(float *)((longlong)param_2 + 0x364) != 0.0) {
    *(float *)(param_1 + 0x364) = *(float *)((longlong)param_2 + 0x364);
  }
  if (*(float *)(param_2 + 0x6d) != 0.0) {
    *(float *)(param_1 + 0x368) = *(float *)(param_2 + 0x6d);
  }
  if (*(float *)((longlong)param_2 + 0x36c) != 0.0) {
    *(float *)(param_1 + 0x36c) = *(float *)((longlong)param_2 + 0x36c);
  }
  if (*(float *)(param_2 + 0x6e) != 0.0) {
    *(float *)(param_1 + 0x370) = *(float *)(param_2 + 0x6e);
  }
  if (*(float *)((longlong)param_2 + 0x374) != 0.0) {
    *(float *)(param_1 + 0x374) = *(float *)((longlong)param_2 + 0x374);
  }
  if (*(float *)(param_2 + 0x6f) != 0.0) {
    *(float *)(param_1 + 0x378) = *(float *)(param_2 + 0x6f);
  }
  if (*(float *)((longlong)param_2 + 0x37c) != 0.0) {
    *(float *)(param_1 + 0x37c) = *(float *)((longlong)param_2 + 0x37c);
  }
  if (*(float *)(param_2 + 0x70) != 0.0) {
    *(float *)(param_1 + 0x380) = *(float *)(param_2 + 0x70);
  }
  if (*(float *)((longlong)param_2 + 900) != 0.0) {
    *(float *)(param_1 + 900) = *(float *)((longlong)param_2 + 900);
  }
  if (*(float *)(param_2 + 0x71) != 0.0) {
    *(float *)(param_1 + 0x388) = *(float *)(param_2 + 0x71);
  }
  if (*(float *)((longlong)param_2 + 0x38c) != 0.0) {
    *(float *)(param_1 + 0x38c) = *(float *)((longlong)param_2 + 0x38c);
  }
  if (*(float *)(param_2 + 0x72) != 0.0) {
    *(float *)(param_1 + 0x390) = *(float *)(param_2 + 0x72);
  }
  if (*(float *)((longlong)param_2 + 0x394) != 0.0) {
    *(float *)(param_1 + 0x394) = *(float *)((longlong)param_2 + 0x394);
  }
  if (*(float *)(param_2 + 0x73) != 0.0) {
    *(float *)(param_1 + 0x398) = *(float *)(param_2 + 0x73);
  }
  if (*(float *)((longlong)param_2 + 0x39c) != 0.0) {
    *(float *)(param_1 + 0x39c) = *(float *)((longlong)param_2 + 0x39c);
  }
  if (*(float *)(param_2 + 0x74) != 0.0) {
    *(float *)(param_1 + 0x3a0) = *(float *)(param_2 + 0x74);
  }
  if (*(float *)((longlong)param_2 + 0x3a4) != 0.0) {
    *(float *)(param_1 + 0x3a4) = *(float *)((longlong)param_2 + 0x3a4);
  }
  if (*(float *)(param_2 + 0x75) != 0.0) {
    *(float *)(param_1 + 0x3a8) = *(float *)(param_2 + 0x75);
  }
  if (*(float *)((longlong)param_2 + 0x3ac) != 0.0) {
    *(float *)(param_1 + 0x3ac) = *(float *)((longlong)param_2 + 0x3ac);
  }
  if (*(float *)(param_2 + 0x76) != 0.0) {
    *(float *)(param_1 + 0x3b0) = *(float *)(param_2 + 0x76);
  }
  if (*(float *)((longlong)param_2 + 0x3b4) != 0.0) {
    *(float *)(param_1 + 0x3b4) = *(float *)((longlong)param_2 + 0x3b4);
  }
  if (*(float *)(param_2 + 0x77) != 0.0) {
    *(float *)(param_1 + 0x3b8) = *(float *)(param_2 + 0x77);
  }
  if (*(int *)((longlong)param_2 + 0x3bc) != 0) {
    *(int *)(param_1 + 0x3bc) = *(int *)((longlong)param_2 + 0x3bc);
  }
  if (*(int *)(param_2 + 0x78) != 0) {
    *(int *)(param_1 + 0x3c0) = *(int *)(param_2 + 0x78);
  }
  if (*(float *)((longlong)param_2 + 0x3c4) != 0.0) {
    *(float *)(param_1 + 0x3c4) = *(float *)((longlong)param_2 + 0x3c4);
  }
  if (*(float *)(param_2 + 0x79) != 0.0) {
    *(float *)(param_1 + 0x3c8) = *(float *)(param_2 + 0x79);
  }
  if (*(char *)((longlong)param_2 + 0x3cc) != '\0') {
    *(char *)(param_1 + 0x3cc) = *(char *)((longlong)param_2 + 0x3cc);
  }
  if (*(char *)((longlong)param_2 + 0x3cd) != '\0') {
    *(char *)(param_1 + 0x3cd) = *(char *)((longlong)param_2 + 0x3cd);
  }
  if (*(char *)((longlong)param_2 + 0x3ce) != '\0') {
    *(char *)(param_1 + 0x3ce) = *(char *)((longlong)param_2 + 0x3ce);
  }
  if (*(char *)((longlong)param_2 + 0x3cf) != '\0') {
    *(char *)(param_1 + 0x3cf) = *(char *)((longlong)param_2 + 0x3cf);
  }
  if (*(int *)(param_2 + 0x7a) != 0) {
    *(int *)(param_1 + 0x3d0) = *(int *)(param_2 + 0x7a);
  }
  if (*(char *)((longlong)param_2 + 0x3d4) != '\0') {
    *(char *)(param_1 + 0x3d4) = *(char *)((longlong)param_2 + 0x3d4);
  }
  if (*(char *)((longlong)param_2 + 0x3d5) != '\0') {
    *(char *)(param_1 + 0x3d5) = *(char *)((longlong)param_2 + 0x3d5);
  }
  if (*(char *)((longlong)param_2 + 0x3d6) != '\0') {
    *(char *)(param_1 + 0x3d6) = *(char *)((longlong)param_2 + 0x3d6);
  }
  if (*(char *)((longlong)param_2 + 0x3d7) != '\0') {
    *(char *)(param_1 + 0x3d7) = *(char *)((longlong)param_2 + 0x3d7);
  }
  if (*(int *)(param_2 + 0x7b) != 0) {
    *(int *)(param_1 + 0x3d8) = *(int *)(param_2 + 0x7b);
  }
  if (*(float *)((longlong)param_2 + 0x3dc) != 0.0) {
    *(float *)(param_1 + 0x3dc) = *(float *)((longlong)param_2 + 0x3dc);
  }
  if (*(int *)(param_2 + 0x7c) != 0) {
    *(int *)(param_1 + 0x3e0) = *(int *)(param_2 + 0x7c);
  }
  if (*(int *)((longlong)param_2 + 0x3e4) != 0) {
    *(int *)(param_1 + 0x3e4) = *(int *)((longlong)param_2 + 0x3e4);
  }
  if (*(int *)(param_2 + 0x7d) != 0) {
    *(int *)(param_1 + 1000) = *(int *)(param_2 + 0x7d);
  }
  if (*(int *)((longlong)param_2 + 0x3ec) != 0) {
    *(int *)(param_1 + 0x3ec) = *(int *)((longlong)param_2 + 0x3ec);
  }
  if (*(int *)(param_2 + 0x7e) != 0) {
    *(int *)(param_1 + 0x3f0) = *(int *)(param_2 + 0x7e);
  }
  if (*(int *)((longlong)param_2 + 0x3f4) != 0) {
    *(int *)(param_1 + 0x3f4) = *(int *)((longlong)param_2 + 0x3f4);
  }
  if (*(int *)(param_2 + 0x7f) != 0) {
    *(int *)(param_1 + 0x3f8) = *(int *)(param_2 + 0x7f);
  }
  if (*(int *)((longlong)param_2 + 0x3fc) != 0) {
    *(int *)(param_1 + 0x3fc) = *(int *)((longlong)param_2 + 0x3fc);
  }
  if (param_2[0x80] != 0) {
    *(undefined8 *)(param_1 + 0x400) = param_2[0x80];
  }
  if (param_2[0x81] != 0) {
    *(undefined8 *)(param_1 + 0x408) = param_2[0x81];
  }
  if (*(int *)(param_2 + 0x82) != 0) {
    *(int *)(param_1 + 0x410) = *(int *)(param_2 + 0x82);
  }
  if (*(char *)((longlong)param_2 + 0x414) != '\0') {
    *(char *)(param_1 + 0x414) = *(char *)((longlong)param_2 + 0x414);
  }
  if (*(char *)((longlong)param_2 + 0x415) != '\0') {
    *(char *)(param_1 + 0x415) = *(char *)((longlong)param_2 + 0x415);
  }
  if (*(char *)((longlong)param_2 + 0x416) != '\0') {
    *(char *)(param_1 + 0x416) = *(char *)((longlong)param_2 + 0x416);
  }
  if (*(char *)((longlong)param_2 + 0x417) != '\0') {
    *(char *)(param_1 + 0x417) = *(char *)((longlong)param_2 + 0x417);
  }
  if (*(int *)(param_2 + 0x83) != 0) {
    *(int *)(param_1 + 0x418) = *(int *)(param_2 + 0x83);
  }
  if (*(float *)((longlong)param_2 + 0x41c) != 0.0) {
    *(float *)(param_1 + 0x41c) = *(float *)((longlong)param_2 + 0x41c);
  }
  if (*(int *)(param_2 + 0x84) != 0) {
    *(int *)(param_1 + 0x420) = *(int *)(param_2 + 0x84);
  }
  if (*(int *)((longlong)param_2 + 0x424) != 0) {
    *(int *)(param_1 + 0x424) = *(int *)((longlong)param_2 + 0x424);
  }
  if (*(int *)(param_2 + 0x85) != 0) {
    *(int *)(param_1 + 0x428) = *(int *)(param_2 + 0x85);
  }
  if (*(float *)((longlong)param_2 + 0x42c) != 0.0) {
    *(float *)(param_1 + 0x42c) = *(float *)((longlong)param_2 + 0x42c);
  }
  if (*(int *)(param_2 + 0x86) != 0) {
    *(int *)(param_1 + 0x430) = *(int *)(param_2 + 0x86);
  }
  if (*(int *)((longlong)param_2 + 0x434) != 0) {
    *(int *)(param_1 + 0x434) = *(int *)((longlong)param_2 + 0x434);
  }
  if (*(int *)(param_2 + 0x87) != 0) {
    *(int *)(param_1 + 0x438) = *(int *)(param_2 + 0x87);
  }
  if (*(int *)((longlong)param_2 + 0x43c) != 0) {
    *(int *)(param_1 + 0x43c) = *(int *)((longlong)param_2 + 0x43c);
  }
  if (*(int *)(param_2 + 0x88) != 0) {
    *(int *)(param_1 + 0x440) = *(int *)(param_2 + 0x88);
  }
  if (*(int *)((longlong)param_2 + 0x444) != 0) {
    *(int *)(param_1 + 0x444) = *(int *)((longlong)param_2 + 0x444);
  }
  if (*(int *)(param_2 + 0x89) != 0) {
    *(int *)(param_1 + 0x448) = *(int *)(param_2 + 0x89);
  }
  if (*(int *)((longlong)param_2 + 0x44c) != 0) {
    *(int *)(param_1 + 0x44c) = *(int *)((longlong)param_2 + 0x44c);
  }
  if (*(char *)(param_2 + 0x8a) != '\0') {
    *(char *)(param_1 + 0x450) = *(char *)(param_2 + 0x8a);
  }
  if (*(char *)((longlong)param_2 + 0x451) != '\0') {
    *(char *)(param_1 + 0x451) = *(char *)((longlong)param_2 + 0x451);
  }
  if (*(char *)((longlong)param_2 + 0x452) != '\0') {
    *(char *)(param_1 + 0x452) = *(char *)((longlong)param_2 + 0x452);
  }
  if (*(char *)((longlong)param_2 + 0x453) != '\0') {
    *(char *)(param_1 + 0x453) = *(char *)((longlong)param_2 + 0x453);
  }
  if (*(int *)((longlong)param_2 + 0x454) != 0) {
    *(int *)(param_1 + 0x454) = *(int *)((longlong)param_2 + 0x454);
  }
  if (*(int *)(param_2 + 0x8b) != 0) {
    *(int *)(param_1 + 0x458) = *(int *)(param_2 + 0x8b);
  }
  if (*(int *)((longlong)param_2 + 0x45c) != 0) {
    *(int *)(param_1 + 0x45c) = *(int *)((longlong)param_2 + 0x45c);
  }
  if (*(int *)(param_2 + 0x8c) != 0) {
    *(int *)(param_1 + 0x460) = *(int *)(param_2 + 0x8c);
  }
  if (*(int *)((longlong)param_2 + 0x464) != 0) {
    *(int *)(param_1 + 0x464) = *(int *)((longlong)param_2 + 0x464);
  }
  if (*(int *)(param_2 + 0x8d) != 0) {
    *(int *)(param_1 + 0x468) = *(int *)(param_2 + 0x8d);
  }
  if (*(char *)((longlong)param_2 + 0x46c) != '\0') {
    *(char *)(param_1 + 0x46c) = *(char *)((longlong)param_2 + 0x46c);
  }
  if (*(char *)((longlong)param_2 + 0x46d) != '\0') {
    *(char *)(param_1 + 0x46d) = *(char *)((longlong)param_2 + 0x46d);
  }
  if (*(char *)((longlong)param_2 + 0x46e) != '\0') {
    *(char *)(param_1 + 0x46e) = *(char *)((longlong)param_2 + 0x46e);
  }
  if (*(char *)((longlong)param_2 + 0x46f) != '\0') {
    *(char *)(param_1 + 0x46f) = *(char *)((longlong)param_2 + 0x46f);
  }
  if (*(int *)(param_2 + 0x8e) != 0) {
    *(int *)(param_1 + 0x470) = *(int *)(param_2 + 0x8e);
  }
  if (*(int *)((longlong)param_2 + 0x474) != 0) {
    *(int *)(param_1 + 0x474) = *(int *)((longlong)param_2 + 0x474);
  }
  if (*(int *)(param_2 + 0x8f) != 0) {
    *(int *)(param_1 + 0x478) = *(int *)(param_2 + 0x8f);
  }
  if (*(float *)((longlong)param_2 + 0x47c) != 0.0) {
    *(float *)(param_1 + 0x47c) = *(float *)((longlong)param_2 + 0x47c);
  }
  if (*(float *)(param_2 + 0x90) != 0.0) {
    *(float *)(param_1 + 0x480) = *(float *)(param_2 + 0x90);
  }
  if (*(float *)((longlong)param_2 + 0x484) != 0.0) {
    *(float *)(param_1 + 0x484) = *(float *)((longlong)param_2 + 0x484);
  }
  if (*(int *)(param_2 + 0x91) != 0) {
    *(int *)(param_1 + 0x488) = *(int *)(param_2 + 0x91);
  }
  if (*(int *)((longlong)param_2 + 0x48c) != 0) {
    *(int *)(param_1 + 0x48c) = *(int *)((longlong)param_2 + 0x48c);
  }
  if (*(int *)(param_2 + 0x92) != 0) {
    *(int *)(param_1 + 0x490) = *(int *)(param_2 + 0x92);
  }
  if (*(char *)((longlong)param_2 + 0x494) != '\0') {
    *(char *)(param_1 + 0x494) = *(char *)((longlong)param_2 + 0x494);
  }
  if (*(char *)((longlong)param_2 + 0x495) != '\0') {
    *(char *)(param_1 + 0x495) = *(char *)((longlong)param_2 + 0x495);
  }
  if (*(char *)((longlong)param_2 + 0x496) != '\0') {
    *(char *)(param_1 + 0x496) = *(char *)((longlong)param_2 + 0x496);
  }
  if (*(char *)((longlong)param_2 + 0x497) != '\0') {
    *(char *)(param_1 + 0x497) = *(char *)((longlong)param_2 + 0x497);
  }
  if (*(char *)(param_2 + 0x93) != '\0') {
    *(char *)(param_1 + 0x498) = *(char *)(param_2 + 0x93);
  }
  if (*(char *)((longlong)param_2 + 0x499) != '\0') {
    *(char *)(param_1 + 0x499) = *(char *)((longlong)param_2 + 0x499);
  }
  if (*(char *)((longlong)param_2 + 0x49a) != '\0') {
    *(char *)(param_1 + 0x49a) = *(char *)((longlong)param_2 + 0x49a);
  }
  if (*(char *)((longlong)param_2 + 0x49b) != '\0') {
    *(char *)(param_1 + 0x49b) = *(char *)((longlong)param_2 + 0x49b);
  }
  if (*(int *)((longlong)param_2 + 0x49c) != 0) {
    *(int *)(param_1 + 0x49c) = *(int *)((longlong)param_2 + 0x49c);
  }
  if (*(float *)(param_2 + 0x94) != 0.0) {
    *(float *)(param_1 + 0x4a0) = *(float *)(param_2 + 0x94);
  }
  if (*(int *)((longlong)param_2 + 0x4a4) != 0) {
    *(int *)(param_1 + 0x4a4) = *(int *)((longlong)param_2 + 0x4a4);
  }
  if (*(int *)(param_2 + 0x95) != 0) {
    *(int *)(param_1 + 0x4a8) = *(int *)(param_2 + 0x95);
  }
  if (*(char *)((longlong)param_2 + 0x4ac) != '\0') {
    *(char *)(param_1 + 0x4ac) = *(char *)((longlong)param_2 + 0x4ac);
  }
  if (*(char *)((longlong)param_2 + 0x4ad) != '\0') {
    *(char *)(param_1 + 0x4ad) = *(char *)((longlong)param_2 + 0x4ad);
  }
  if (*(char *)((longlong)param_2 + 0x4ae) != '\0') {
    *(char *)(param_1 + 0x4ae) = *(char *)((longlong)param_2 + 0x4ae);
  }
  if (*(char *)((longlong)param_2 + 0x4af) != '\0') {
    *(char *)(param_1 + 0x4af) = *(char *)((longlong)param_2 + 0x4af);
  }
  if (*(int *)(param_2 + 0x96) != 0) {
    *(int *)(param_1 + 0x4b0) = *(int *)(param_2 + 0x96);
  }
  if (*(int *)((longlong)param_2 + 0x4b4) != 0) {
    *(int *)(param_1 + 0x4b4) = *(int *)((longlong)param_2 + 0x4b4);
  }
  if (*(float *)(param_2 + 0x97) != 0.0) {
    *(float *)(param_1 + 0x4b8) = *(float *)(param_2 + 0x97);
  }
  if (*(float *)((longlong)param_2 + 0x4bc) != 0.0) {
    *(float *)(param_1 + 0x4bc) = *(float *)((longlong)param_2 + 0x4bc);
  }
  if (*(int *)(param_2 + 0x98) != 0) {
    *(int *)(param_1 + 0x4c0) = *(int *)(param_2 + 0x98);
  }
  if (*(float *)((longlong)param_2 + 0x4c4) != 0.0) {
    *(float *)(param_1 + 0x4c4) = *(float *)((longlong)param_2 + 0x4c4);
  }
  if (*(float *)(param_2 + 0x99) != 0.0) {
    *(float *)(param_1 + 0x4c8) = *(float *)(param_2 + 0x99);
  }
  if (*(int *)((longlong)param_2 + 0x4cc) != 0) {
    *(int *)(param_1 + 0x4cc) = *(int *)((longlong)param_2 + 0x4cc);
  }
  if (*(float *)(param_2 + 0x9a) != 0.0) {
    *(float *)(param_1 + 0x4d0) = *(float *)(param_2 + 0x9a);
  }
  if (*(float *)((longlong)param_2 + 0x4d4) != 0.0) {
    *(float *)(param_1 + 0x4d4) = *(float *)((longlong)param_2 + 0x4d4);
  }
  if (*(int *)(param_2 + 0x9b) != 0) {
    *(int *)(param_1 + 0x4d8) = *(int *)(param_2 + 0x9b);
  }
  if (*(int *)((longlong)param_2 + 0x4dc) != 0) {
    *(int *)(param_1 + 0x4dc) = *(int *)((longlong)param_2 + 0x4dc);
  }
  if (*(char *)(param_2 + 0x9c) != '\0') {
    *(char *)(param_1 + 0x4e0) = *(char *)(param_2 + 0x9c);
  }
  if (*(char *)((longlong)param_2 + 0x4e1) != '\0') {
    *(char *)(param_1 + 0x4e1) = *(char *)((longlong)param_2 + 0x4e1);
  }
  if (*(char *)((longlong)param_2 + 0x4e2) != '\0') {
    *(char *)(param_1 + 0x4e2) = *(char *)((longlong)param_2 + 0x4e2);
  }
  if (*(char *)((longlong)param_2 + 0x4e3) != '\0') {
    *(char *)(param_1 + 0x4e3) = *(char *)((longlong)param_2 + 0x4e3);
  }
  if (*(int *)((longlong)param_2 + 0x4e4) != 0) {
    *(int *)(param_1 + 0x4e4) = *(int *)((longlong)param_2 + 0x4e4);
  }
  if (*(char *)(param_2 + 0x9d) != '\0') {
    *(char *)(param_1 + 0x4e8) = *(char *)(param_2 + 0x9d);
  }
  if (*(int *)((longlong)param_2 + 0x4ec) != 0) {
    *(int *)(param_1 + 0x4ec) = *(int *)((longlong)param_2 + 0x4ec);
  }
  return;
}



// FUNCTION 14150c810 FUN_14150c810 body=156 status=ok
// SIG undefined FUN_14150c810(void)

void FUN_14150c810(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a04d0 != 0) {
    FUN_1439f44f0(&DAT_1464a04d0);
  }
  lVar1 = (**(code **)(DAT_1468a4910 + 0xb8))(&DAT_1468a4910,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14150b4c0(param_1);
  return;
}



// FUNCTION 14150c8c0 FUN_14150c8c0 body=243 status=ok
// SIG undefined FUN_14150c8c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14150c8c0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    uVar1 = *(ulonglong *)(param_2 + 8);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar3 = FUN_141515d60();
    }
    else {
      uVar3 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    FUN_1439fc150(uVar3,uVar1 & 0xfffffffffffffffe);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x10);
  if (puVar4[2] != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (puVar2 != puVar4) {
      if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10);
      }
      else {
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
      }
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x18);
  if (puVar4[2] != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (puVar2 != puVar4) {
      if (puVar2 == (undefined8 *)&DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x18);
      }
      else {
        if (0xf < (ulonglong)puVar4[3]) {
          puVar4 = (undefined8 *)*puVar4;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(puVar2,puVar4);
      }
    }
  }
  if (*(char *)(param_2 + 0x20) != '\0') {
    *(char *)(param_1 + 0x20) = *(char *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 14150c9c0 FUN_14150c9c0 body=156 status=ok
// SIG undefined FUN_14150c9c0(void)

void FUN_14150c9c0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (DAT_1464a0420 != 0) {
    FUN_1439f44f0(&DAT_1464a0420);
  }
  lVar1 = (**(code **)(DAT_1468a4858 + 0xb8))(&DAT_1468a4858,local_28);
  lVar1 = *(longlong *)(lVar1 + 8);
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2,local_18);
  plVar3 = param_2;
  if (lVar1 != *(longlong *)(lVar2 + 8)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_143a0c580(param_2,param_1);
    return;
  }
  FUN_14150c8c0(param_1);
  return;
}



// FUNCTION 14150ca60 FUN_14150ca60 body=235 status=ok
// SIG undefined FUN_14150ca60(void)

void FUN_14150ca60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(uint *)(param_2 + 4) != 0) {
    if ((*(uint *)(param_2 + 4) & 1) != 0) {
      if (*(undefined **)(param_1 + 8) == &DAT_146ba2f50) {
        FUN_141505a20(param_1 + 8,*(undefined8 *)(param_1 + 0x18),&DAT_146ba2f50);
      }
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      puVar2 = (undefined8 *)(**(code **)(*param_2 + 0xc0))(param_2);
      puVar1 = *(undefined8 **)(param_1 + 8);
      if (puVar1 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(param_1 + 8,uVar3,puVar2);
      }
      else if (puVar1 != puVar2) {
        puVar4 = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          puVar4 = (undefined8 *)*puVar2;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar1,puVar4,puVar2[2]);
      }
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
    }
    if ((*(uint *)(param_2 + 4) >> 1 & 1) != 0) {
      if (*(longlong *)(param_1 + 0x10) == 0) {
        uVar3 = FUN_1414fd160(*(undefined8 *)(param_1 + 0x18));
        *(undefined8 *)(param_1 + 0x10) = uVar3;
      }
      uVar3 = (**(code **)(*param_2 + 200))(param_2);
      FUN_14150a9d0(*(undefined8 *)(param_1 + 0x10),uVar3);
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
    }
  }
  return;
}



// FUNCTION 14150cb50 FUN_14150cb50 body=289 status=ok
// SIG undefined FUN_14150cb50(void)

undefined8 FUN_14150cb50(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  byte bVar5;
  
  do {
    pbVar1 = (byte *)*param_2;
    bVar5 = 0;
    if (pbVar1 < (byte *)param_2[1]) {
      bVar5 = *pbVar1;
      uVar3 = (uint)bVar5;
      if (0x7f < bVar5) goto LAB_14150cb8f;
      *param_2 = (longlong)(pbVar1 + 1);
    }
    else {
LAB_14150cb8f:
      uVar3 = FUN_1439f8c60(param_2,bVar5);
    }
    if (uVar3 == 10) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
      if (*(undefined **)(param_1 + 8) == &DAT_146ba2f50) {
        FUN_141505a20(param_1 + 8,*(undefined8 *)(param_1 + 0x18),&DAT_146ba2f50);
      }
      cVar2 = thunk_FUN_1439fa490(param_2);
      if (cVar2 == '\0') {
        return 0;
      }
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
    }
    else if (uVar3 == 0x12) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        uVar4 = FUN_1414fd160(*(undefined8 *)(param_1 + 0x18));
        *(undefined8 *)(param_1 + 0x10) = uVar4;
      }
      cVar2 = FUN_1414fee20(param_2);
      if (cVar2 == '\0') {
        return 0;
      }
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
      if ((*param_2 == param_2[1]) &&
         ((*(int *)((longlong)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
        *(undefined4 *)(param_2 + 4) = 0;
        *(undefined1 *)((longlong)param_2 + 0x24) = 1;
        return 1;
      }
    }
    else {
      if (uVar3 == 0) {
        return 1;
      }
      if (((byte)uVar3 & 7) == 4) {
        return 1;
      }
      cVar2 = FUN_1439fa560(param_2);
      if (cVar2 == '\0') {
        return 0;
      }
    }
  } while( true );
}



// FUNCTION 14150cc80 FUN_14150cc80 body=626 status=ok
// SIG undefined FUN_14150cc80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_14150cc80(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  pcVar3 = (char *)*param_2;
  if ((pcVar3 < (char *)param_2[1]) && (*pcVar3 == '\n')) {
    *param_2 = (longlong)(pcVar3 + 1);
    cVar11 = thunk_FUN_1439fa490(param_2,param_1 + 0x10);
    if (cVar11 == '\0') {
      return '\0';
    }
    if ((0 < (int)param_2[1] - (int)*param_2) && (*(char *)*param_2 == '\x12')) {
      lVar4 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x10);
      uVar12 = FUN_140d25830(*(longlong *)(param_1 + 8),param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x30) = uVar12;
      if (lVar4 != **(longlong **)(*(longlong *)(param_1 + 8) + 0x10)) {
        if ((int)param_2[1] - (int)*param_2 < 1) {
          FUN_1439f9b60(param_2,1);
        }
        else {
          *param_2 = *param_2 + 1;
        }
        cVar11 = FUN_1414fee20(param_2,*(undefined8 *)(param_1 + 0x30));
        if (cVar11 == '\0') {
          FUN_141515950(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
          return '\0';
        }
        cVar11 = FUN_141505cf0(param_2);
        if (cVar11 != '\0') {
          return '\x01';
        }
        FUN_1415113b0(param_1);
        lVar4 = *(longlong *)(param_1 + 0x38);
        *(uint *)(lVar4 + 0x20) = *(uint *)(lVar4 + 0x20) | 2;
        lVar13 = *(longlong *)(lVar4 + 0x10);
        if (lVar13 == 0) {
          lVar13 = FUN_1414fd160(*(undefined8 *)(lVar4 + 0x18));
          *(longlong *)(lVar4 + 0x10) = lVar13;
        }
        lVar4 = *(longlong *)(param_1 + 0x30);
        if (lVar4 != lVar13) {
          FUN_1415141f0(lVar13 + 8,lVar4 + 8);
          uVar12 = *(undefined8 *)(lVar13 + 0x10);
          *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(lVar4 + 0x10);
          *(undefined8 *)(lVar4 + 0x10) = uVar12;
          uVar2 = *(undefined4 *)(lVar13 + 0x18);
          *(undefined4 *)(lVar13 + 0x18) = *(undefined4 *)(lVar4 + 0x18);
          *(undefined4 *)(lVar4 + 0x18) = uVar2;
        }
        FUN_141515950(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
        lVar4 = *(longlong *)(param_1 + 0x38);
        puVar15 = (undefined8 *)(lVar4 + 8);
        *(uint *)(lVar4 + 0x20) = *(uint *)(lVar4 + 0x20) | 1;
        puVar14 = (undefined8 *)*puVar15;
        if (puVar14 == (undefined8 *)&DAT_146ba2f50) {
          FUN_141505a20(puVar15,*(undefined8 *)(lVar4 + 0x18));
          puVar14 = (undefined8 *)*puVar15;
        }
        uVar2 = *(undefined4 *)(param_1 + 0x14);
        uVar5 = *(undefined4 *)(param_1 + 0x18);
        uVar6 = *(undefined4 *)(param_1 + 0x1c);
        uVar12 = *puVar14;
        uVar7 = puVar14[1];
        uVar8 = puVar14[2];
        uVar9 = puVar14[3];
        *(undefined4 *)puVar14 = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)((longlong)puVar14 + 4) = uVar2;
        *(undefined4 *)(puVar14 + 1) = uVar5;
        *(undefined4 *)((longlong)puVar14 + 0xc) = uVar6;
        uVar10 = *(undefined8 *)(param_1 + 0x28);
        puVar14[2] = *(undefined8 *)(param_1 + 0x20);
        puVar14[3] = uVar10;
        *(undefined8 *)(param_1 + 0x10) = uVar12;
        *(undefined8 *)(param_1 + 0x18) = uVar7;
        *(undefined8 *)(param_1 + 0x20) = uVar8;
        *(undefined8 *)(param_1 + 0x28) = uVar9;
        goto LAB_14150ceb5;
      }
    }
  }
  else {
    puVar1 = (uint *)(param_1 + 0x10);
    local_58 = local_58 & 0xffffff00;
    if (puVar1 != &local_58) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(puVar1)
      ;
      *puVar1 = local_58;
      *(undefined4 *)(param_1 + 0x14) = uStack_54;
      *(undefined4 *)(param_1 + 0x18) = uStack_50;
      *(undefined4 *)(param_1 + 0x1c) = uStack_4c;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0xf;
    }
  }
  FUN_1415113b0(param_1);
  lVar4 = *(longlong *)(param_1 + 0x38);
  puVar15 = (undefined8 *)(lVar4 + 8);
  *(uint *)(lVar4 + 0x20) = *(uint *)(lVar4 + 0x20) | 1;
  puVar14 = (undefined8 *)*puVar15;
  if (puVar14 == (undefined8 *)&DAT_146ba2f50) {
    FUN_141505a20(puVar15,*(undefined8 *)(lVar4 + 0x18));
    puVar14 = (undefined8 *)*puVar15;
  }
  puVar15 = (undefined8 *)(param_1 + 0x10);
  if (puVar14 != puVar15) {
    if (0xf < *(ulonglong *)(param_1 + 0x28)) {
      puVar15 = (undefined8 *)*puVar15;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (puVar14,puVar15,*(undefined8 *)(param_1 + 0x20));
  }
LAB_14150ceb5:
  cVar11 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x50))
                     (*(longlong **)(param_1 + 0x38),param_2);
  if (cVar11 != '\0') {
    FUN_141514be0(param_1);
  }
  return cVar11;
}



// FUNCTION 14150cf00 FUN_14150cf00 body=430 status=ok
// SIG undefined FUN_14150cf00(void)

ulonglong FUN_14150cf00(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined *puVar7;
  char cVar8;
  
LAB_14150cf21:
  pbVar3 = (byte *)*param_2;
  uVar4 = 0;
  if ((pbVar3 < (byte *)param_2[1]) && (uVar4 = (ulonglong)*pbVar3, '\0' < (char)*pbVar3)) {
    pbVar3 = pbVar3 + 1;
    *param_2 = pbVar3;
LAB_14150cf52:
    iVar2 = (int)(uVar4 >> 3);
    cVar8 = (char)uVar4;
    if (iVar2 == 1) {
      if (cVar8 != '\n') goto LAB_14150d062;
      puVar7 = *(undefined **)(param_1 + 0x10);
      if (puVar7 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar7 = *(undefined **)(param_1 + 0x10);
      }
      uVar4 = thunk_FUN_1439fa490(param_2,puVar7);
      if ((char)uVar4 == '\0') goto LAB_14150d093;
      plVar6 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar6 + 2);
      if (0xf < (ulonglong)plVar6[3]) {
        plVar6 = (longlong *)*plVar6;
      }
      uVar4 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                            "OakSave.GearSoldByFriendData.gear_serial_number");
      goto LAB_14150d08b;
    }
    if (iVar2 != 2) {
      if ((iVar2 != 3) || (cVar8 != '\x1a')) goto LAB_14150d062;
      puVar7 = *(undefined **)(param_1 + 0x18);
      if (puVar7 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x18,&DAT_146ba2f50);
        puVar7 = *(undefined **)(param_1 + 0x18);
      }
      uVar4 = thunk_FUN_1439fa490(param_2,puVar7);
      if ((char)uVar4 != '\0') {
        plVar6 = *(longlong **)(param_1 + 0x18);
        puVar1 = (ulonglong *)(plVar6 + 2);
        if (0xf < (ulonglong)plVar6[3]) {
          plVar6 = (longlong *)*plVar6;
        }
        uVar4 = FUN_1439fa7f0(plVar6,*puVar1 & 0xffffffff,0,
                              "OakSave.GearSoldByFriendData.friend_net_id");
        goto LAB_14150d08b;
      }
      goto LAB_14150d093;
    }
    if (cVar8 == '\x10') {
      pbVar3 = (byte *)*param_2;
      uVar5 = 0;
      if ((pbVar3 < (byte *)param_2[1]) && (uVar5 = (uint)*pbVar3, uVar5 < 0x80)) {
        *param_2 = pbVar3 + 1;
        *(uint *)(param_1 + 0x20) = uVar5;
      }
      else {
        uVar4 = FUN_1439f8e20(param_2,uVar5);
        if ((longlong)uVar4 < 0) goto LAB_14150d093;
        *(int *)(param_1 + 0x20) = (int)uVar4;
      }
      goto LAB_14150cf21;
    }
  }
  else {
    uVar5 = FUN_1439f8c60(param_2,uVar4);
    uVar4 = (ulonglong)uVar5;
    pbVar3 = (byte *)(ulonglong)(uVar5 - 1);
    if (uVar5 - 1 < 0x7f) goto LAB_14150cf52;
  }
LAB_14150d062:
  if ((int)uVar4 == 0) {
    return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_141515d60();
  }
  uVar4 = FUN_143a1e1e0(param_2,uVar4);
LAB_14150d08b:
  if ((char)uVar4 == '\0') {
LAB_14150d093:
    return uVar4 & 0xffffffffffffff00;
  }
  goto LAB_14150cf21;
}



// FUNCTION 14150d0b0 FUN_14150d0b0 body=708 status=ok
// SIG undefined FUN_14150d0b0(void)

ulonglong FUN_14150d0b0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  byte bVar8;
  int *piVar9;
  char cVar10;
  undefined4 local_res10;
  int local_res14;
  
LAB_14150d0d0:
  do {
    pbVar2 = (byte *)*param_2;
    uVar7 = 0;
    if (((byte *)param_2[1] <= pbVar2) || (uVar7 = (ulonglong)*pbVar2, (char)*pbVar2 < '\x01')) {
      uVar3 = FUN_1439f8c60(param_2,uVar7);
      uVar7 = (ulonglong)uVar3;
      uVar5 = (ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_14150d102;
      goto LAB_14150d32a;
    }
    *param_2 = pbVar2 + 1;
LAB_14150d102:
    uVar3 = (int)(uVar7 >> 3) - 1;
    uVar5 = (ulonglong)uVar3;
    if (5 < uVar3) goto LAB_14150d32a;
    uVar5 = (ulonglong)(int)uVar3;
    cVar10 = (char)uVar7;
    switch(uVar3) {
    case 0:
      if (cVar10 == '\b') {
        pbVar2 = (byte *)*param_2;
        bVar8 = 0;
        if (pbVar2 < (byte *)param_2[1]) {
          bVar8 = *pbVar2;
          if (bVar8 < 0x80) {
            *param_2 = pbVar2 + 1;
            *(uint *)(param_1 + 0x28) = (uint)bVar8;
            goto LAB_14150d0d0;
          }
        }
        uVar7 = FUN_1439f8e20(param_2,bVar8);
        if ((longlong)uVar7 < 0) goto LAB_14150d35b;
        *(int *)(param_1 + 0x28) = (int)uVar7;
        goto LAB_14150d0d0;
      }
      break;
    case 1:
      if (cVar10 != '\x12') break;
      piVar9 = *(int **)(param_1 + 0x20);
      if (piVar9 == (int *)0x0) {
LAB_14150d199:
        FUN_1439f23d0(param_1 + 0x10,*(int *)(param_1 + 0x1c) + 1);
        piVar9 = *(int **)(param_1 + 0x20);
        iVar4 = *piVar9;
LAB_14150d1ad:
        *piVar9 = iVar4 + 1;
        uVar6 = FUN_1414fd0b0(*(undefined8 *)(param_1 + 0x10));
        *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8)
             = uVar6;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x18);
        iVar4 = *piVar9;
        if (iVar4 <= iVar1) {
          if (iVar4 == *(int *)(param_1 + 0x1c)) goto LAB_14150d199;
          goto LAB_14150d1ad;
        }
        uVar6 = *(undefined8 *)(piVar9 + (longlong)iVar1 * 2 + 2);
        *(int *)(param_1 + 0x18) = iVar1 + 1;
      }
      pbVar2 = (byte *)*param_2;
      if ((pbVar2 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar2, *pbVar2 < 0x80)) {
        *param_2 = pbVar2 + 1;
      }
      else {
        uVar7 = FUN_1439f98b0(param_2);
        uVar5 = uVar7 & 0xffffffff;
        if ((int)uVar7 < 0) goto LAB_14150d35b;
      }
      uVar7 = FUN_1439f8500(param_2,&local_res10,uVar5);
      if ((-1 < local_res14) && (uVar7 = FUN_14150d390(uVar6,param_2), (char)uVar7 != '\0')) {
        uVar7 = FUN_1439f84b0(param_2,local_res10);
        goto LAB_14150d353;
      }
      goto LAB_14150d35b;
    case 2:
      if (cVar10 == '\x18') {
        pbVar2 = (byte *)*param_2;
        bVar8 = 0;
        if (pbVar2 < (byte *)param_2[1]) {
          bVar8 = *pbVar2;
          if (bVar8 < 0x80) {
            *param_2 = pbVar2 + 1;
            *(uint *)(param_1 + 0x2c) = (uint)bVar8;
            goto LAB_14150d0d0;
          }
        }
        uVar7 = FUN_1439f8e20(param_2,bVar8);
        if ((longlong)uVar7 < 0) goto LAB_14150d35b;
        *(int *)(param_1 + 0x2c) = (int)uVar7;
        goto LAB_14150d0d0;
      }
      break;
    case 3:
      if (cVar10 == ' ') {
        pbVar2 = (byte *)*param_2;
        bVar8 = 0;
        if (pbVar2 < (byte *)param_2[1]) {
          bVar8 = *pbVar2;
          if (bVar8 < 0x80) {
            *param_2 = pbVar2 + 1;
            *(uint *)(param_1 + 0x30) = (uint)bVar8;
            goto LAB_14150d0d0;
          }
        }
        uVar7 = FUN_1439f8e20(param_2,bVar8);
        if ((longlong)uVar7 < 0) goto LAB_14150d35b;
        *(int *)(param_1 + 0x30) = (int)uVar7;
        goto LAB_14150d0d0;
      }
      break;
    case 4:
      if (cVar10 == '(') {
        pbVar2 = (byte *)*param_2;
        bVar8 = 0;
        if (pbVar2 < (byte *)param_2[1]) {
          bVar8 = *pbVar2;
          if (bVar8 < 0x80) {
            *param_2 = pbVar2 + 1;
            *(uint *)(param_1 + 0x34) = (uint)bVar8;
            goto LAB_14150d0d0;
          }
        }
        uVar7 = FUN_1439f8e20(param_2,bVar8);
        if ((longlong)uVar7 < 0) goto LAB_14150d35b;
        *(int *)(param_1 + 0x34) = (int)uVar7;
        goto LAB_14150d0d0;
      }
      break;
    case 5:
      if (cVar10 == '0') {
        uVar7 = FUN_1414ff170(param_2,param_1 + 0x38);
        goto LAB_14150d353;
      }
    }
LAB_14150d32a:
    if ((int)uVar7 == 0) {
      return CONCAT71((int7)(uVar5 >> 8),1);
    }
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      uVar5 = FUN_141515d60();
    }
    else {
      uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
    }
    uVar7 = FUN_143a1e1e0(param_2,uVar7,uVar5);
LAB_14150d353:
    if ((char)uVar7 == '\0') {
LAB_14150d35b:
      return uVar7 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14150d390 FUN_14150d390 body=331 status=ok
// SIG undefined FUN_14150d390(void)

ulonglong FUN_14150d390(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined *puVar8;
  
LAB_14150d3b1:
  do {
    pbVar3 = (byte *)*param_2;
    uVar4 = 0;
    if ((pbVar3 < (byte *)param_2[1]) && (uVar4 = (ulonglong)*pbVar3, '\0' < (char)*pbVar3)) {
      pbVar3 = pbVar3 + 1;
      *param_2 = pbVar3;
LAB_14150d3e2:
      iVar2 = (int)(uVar4 >> 3);
      if (iVar2 == 1) {
        if ((char)uVar4 != '\b') goto LAB_14150d48f;
        pbVar3 = (byte *)*param_2;
        uVar6 = 0;
        if ((pbVar3 < (byte *)param_2[1]) && (uVar6 = (uint)*pbVar3, uVar6 < 0x80)) {
          *param_2 = pbVar3 + 1;
          *(uint *)(param_1 + 0x18) = uVar6;
        }
        else {
          uVar4 = FUN_1439f8e20(param_2,uVar6);
          if ((longlong)uVar4 < 0) goto LAB_14150d4c0;
          *(int *)(param_1 + 0x18) = (int)uVar4;
        }
        goto LAB_14150d3b1;
      }
      if ((iVar2 != 2) || ((char)uVar4 != '\x12')) goto LAB_14150d48f;
      puVar8 = *(undefined **)(param_1 + 0x10);
      if (puVar8 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar8 = *(undefined **)(param_1 + 0x10);
      }
      uVar4 = thunk_FUN_1439fa490(param_2,puVar8);
      if ((char)uVar4 == '\0') goto LAB_14150d4c0;
      plVar7 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar7 + 2);
      if (0xf < (ulonglong)plVar7[3]) {
        plVar7 = (longlong *)*plVar7;
      }
      uVar4 = FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,0,
                            "OakSave.GuardianRankRewardSaveGameData.reward_data_path");
    }
    else {
      uVar6 = FUN_1439f8c60(param_2,uVar4);
      uVar4 = (ulonglong)uVar6;
      pbVar3 = (byte *)(ulonglong)(uVar6 - 1);
      if (uVar6 - 1 < 0x7f) goto LAB_14150d3e2;
LAB_14150d48f:
      if ((int)uVar4 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar5 = FUN_141515d60();
      }
      else {
        uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar4 = FUN_143a1e1e0(param_2,uVar4,uVar5);
    }
    if ((char)uVar4 == '\0') {
LAB_14150d4c0:
      return uVar4 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14150d4e0 FUN_14150d4e0 body=332 status=ok
// SIG undefined FUN_14150d4e0(void)

ulonglong FUN_14150d4e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  undefined8 local_18;
  char local_10;
  
LAB_14150d4f5:
  do {
    while( true ) {
      pbVar3 = (byte *)*param_2;
      uVar4 = 0;
      if ((pbVar3 < (byte *)param_2[1]) && (uVar4 = (ulonglong)*pbVar3, '\0' < (char)*pbVar3))
      break;
      uVar2 = FUN_1439f8c60(param_2,uVar4);
      uVar4 = (ulonglong)uVar2;
      pbVar3 = (byte *)(ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_14150d527;
LAB_14150d5d7:
      if ((int)uVar4 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar5 = FUN_141515d60();
      }
      else {
        uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar4 = FUN_143a1e1e0(param_2,uVar4,uVar5);
      if ((char)uVar4 == '\0') {
LAB_14150d608:
        return uVar4 & 0xffffffffffffff00;
      }
    }
    pbVar3 = pbVar3 + 1;
    *param_2 = (longlong)pbVar3;
LAB_14150d527:
    iVar1 = (int)(uVar4 >> 3);
    if (iVar1 != 1) {
      if ((iVar1 != 2) || ((char)uVar4 != '\x10')) goto LAB_14150d5d7;
      pbVar3 = (byte *)*param_2;
      if ((pbVar3 < (byte *)param_2[1]) && (bVar6 = *pbVar3, bVar6 < 0x80)) {
        *param_2 = (longlong)(pbVar3 + 1);
        *(ulonglong *)(param_1 + 0x10) = (ulonglong)bVar6;
      }
      else {
        uVar4 = FUN_1439f8f00(param_2,&local_18);
        if (local_10 == '\0') goto LAB_14150d608;
        *(undefined8 *)(param_1 + 0x10) = local_18;
      }
      goto LAB_14150d4f5;
    }
    if ((char)uVar4 != '\b') goto LAB_14150d5d7;
    bVar6 = 0;
    if ((byte *)*param_2 < (byte *)param_2[1]) {
      bVar6 = *(byte *)*param_2;
      if (bVar6 < 0x80) {
        *(uint *)(param_1 + 0x18) = (uint)bVar6;
        *param_2 = *param_2 + 1;
        goto LAB_14150d4f5;
      }
    }
    uVar4 = FUN_1439f8e20(param_2,bVar6);
    *(int *)(param_1 + 0x18) = (int)uVar4;
    if ((longlong)uVar4 < 0) {
      return uVar4 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14150d630 FUN_14150d630 body=328 status=ok
// SIG undefined FUN_14150d630(void)

ulonglong FUN_14150d630(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  byte bVar6;
  longlong *plVar7;
  undefined *puVar8;
  
LAB_14150d651:
  do {
    pbVar4 = (byte *)*param_2;
    uVar5 = 0;
    if ((pbVar4 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4)) {
      pbVar4 = pbVar4 + 1;
      *param_2 = pbVar4;
LAB_14150d682:
      iVar2 = (int)(uVar5 >> 3);
      if (iVar2 != 1) {
        if ((iVar2 != 2) || ((char)uVar5 != '\x10')) goto LAB_14150d72c;
        pbVar4 = (byte *)*param_2;
        bVar6 = 0;
        if (pbVar4 < (byte *)param_2[1]) {
          bVar6 = *pbVar4;
          if (bVar6 < 0x80) {
            *param_2 = pbVar4 + 1;
            *(uint *)(param_1 + 0x18) = (uint)bVar6;
            goto LAB_14150d651;
          }
        }
        uVar5 = FUN_1439f8e20(param_2,bVar6);
        if ((longlong)uVar5 < 0) goto LAB_14150d75d;
        *(int *)(param_1 + 0x18) = (int)uVar5;
        goto LAB_14150d651;
      }
      if ((char)uVar5 != '\n') goto LAB_14150d72c;
      puVar8 = *(undefined **)(param_1 + 0x10);
      if (puVar8 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar8 = *(undefined **)(param_1 + 0x10);
      }
      uVar5 = thunk_FUN_1439fa490(param_2,puVar8);
      if ((char)uVar5 == '\0') goto LAB_14150d75d;
      plVar7 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar7 + 2);
      if (0xf < (ulonglong)plVar7[3]) {
        plVar7 = (longlong *)*plVar7;
      }
      uVar5 = FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,0,
                            "OakSave.OakProfileLastInventoryFilterInfo.slot_type_id");
    }
    else {
      uVar3 = FUN_1439f8c60(param_2,uVar5);
      uVar5 = (ulonglong)uVar3;
      pbVar4 = (byte *)(ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_14150d682;
LAB_14150d72c:
      if ((int)uVar5 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar5 = FUN_143a1e1e0(param_2,uVar5);
    }
    if ((char)uVar5 == '\0') {
LAB_14150d75d:
      return uVar5 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 14150d780 FUN_14150d780 body=477 status=ok
// SIG undefined FUN_14150d780(void)

ulonglong FUN_14150d780(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  char cVar9;
  longlong local_28;
  char local_20;
  longlong local_18;
  char local_10;
  
LAB_14150d7a0:
  pbVar4 = (byte *)*param_2;
  uVar5 = 0;
  if ((pbVar4 < (byte *)param_2[1]) && (uVar5 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4)) {
    pbVar4 = pbVar4 + 1;
    *param_2 = pbVar4;
LAB_14150d7d2:
    iVar3 = (int)(uVar5 >> 3);
    cVar9 = (char)uVar5;
    if (iVar3 == 1) {
      if (cVar9 != '\n') goto LAB_14150d911;
      uVar6 = FUN_1439f1a80(param_1 + 0x10);
      uVar5 = thunk_FUN_1439fa490(param_2,uVar6);
      if ((char)uVar5 == '\0') goto LAB_14150d942;
      iVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
      lVar7 = FUN_1439f1d30(param_1 + 0x10,iVar3 + -1);
      uVar5 = *(ulonglong *)(lVar7 + 0x10);
      iVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
      puVar8 = (undefined8 *)FUN_1439f1d30(param_1 + 0x10,iVar3 + -1);
      if (0xf < (ulonglong)puVar8[3]) {
        puVar8 = (undefined8 *)*puVar8;
      }
      uVar5 = FUN_1439fa7f0(puVar8,uVar5 & 0xffffffff,0,
                            "OakSave.OakProfileMenuTutorialInfo.seen_tutorials");
      goto LAB_14150d93a;
    }
    if (iVar3 != 2) {
      if ((iVar3 != 3) || (cVar9 != '\x18')) goto LAB_14150d911;
      pbVar4 = (byte *)*param_2;
      if ((pbVar4 < (byte *)param_2[1]) && (bVar1 = *pbVar4, bVar1 < 0x80)) {
        *param_2 = pbVar4 + 1;
        *(bool *)(param_1 + 0x29) = bVar1 != 0;
      }
      else {
        uVar5 = FUN_1439f8f00(param_2,&local_28);
        if (local_20 == '\0') goto LAB_14150d942;
        *(bool *)(param_1 + 0x29) = local_28 != 0;
      }
      goto LAB_14150d7a0;
    }
    if (cVar9 == '\x10') {
      pbVar4 = (byte *)*param_2;
      if ((pbVar4 < (byte *)param_2[1]) && (bVar1 = *pbVar4, bVar1 < 0x80)) {
        *param_2 = pbVar4 + 1;
        *(bool *)(param_1 + 0x28) = bVar1 != 0;
      }
      else {
        uVar5 = FUN_1439f8f00(param_2,&local_18);
        if (local_10 == '\0') goto LAB_14150d942;
        *(bool *)(param_1 + 0x28) = local_18 != 0;
      }
      goto LAB_14150d7a0;
    }
  }
  else {
    uVar2 = FUN_1439f8c60(param_2,uVar5);
    uVar5 = (ulonglong)uVar2;
    pbVar4 = (byte *)(ulonglong)(uVar2 - 1);
    if (uVar2 - 1 < 0x7f) goto LAB_14150d7d2;
  }
LAB_14150d911:
  if ((int)uVar5 == 0) {
    return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_141515d60();
  }
  uVar5 = FUN_143a1e1e0(param_2,uVar5);
LAB_14150d93a:
  if ((char)uVar5 == '\0') {
LAB_14150d942:
    return uVar5 & 0xffffffffffffff00;
  }
  goto LAB_14150d7a0;
}



// FUNCTION 14150d960 FUN_14150d960 body=464 status=ok
// SIG undefined FUN_14150d960(void)

ulonglong FUN_14150d960(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int *piVar8;
  longlong *plVar9;
  undefined *puVar10;
  undefined4 local_res10;
  int local_res14;
  
  do {
    pbVar5 = (byte *)*param_2;
    uVar7 = 0;
    if ((pbVar5 < (byte *)param_2[1]) && (uVar7 = (ulonglong)*pbVar5, '\0' < (char)*pbVar5)) {
      pbVar5 = pbVar5 + 1;
      *param_2 = pbVar5;
LAB_14150d9b2:
      iVar2 = (int)(uVar7 >> 3);
      if (iVar2 == 1) {
        if ((char)uVar7 != '\n') goto LAB_14150dae6;
        puVar10 = *(undefined **)(param_1 + 0x28);
        if (puVar10 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x28,&DAT_146ba2f50);
          puVar10 = *(undefined **)(param_1 + 0x28);
        }
        uVar7 = thunk_FUN_1439fa490(param_2,puVar10);
        if ((char)uVar7 == '\0') break;
        plVar9 = *(longlong **)(param_1 + 0x28);
        puVar1 = (ulonglong *)(plVar9 + 2);
        if (0xf < (ulonglong)plVar9[3]) {
          plVar9 = (longlong *)*plVar9;
        }
        uVar7 = FUN_1439fa7f0(plVar9,*puVar1 & 0xffffffff,0,
                              "OakSave.PlayerInputBinding_Axis.rebind_data_path");
      }
      else {
        if ((iVar2 != 2) || ((char)uVar7 != '\x12')) goto LAB_14150dae6;
        piVar8 = *(int **)(param_1 + 0x20);
        if (piVar8 == (int *)0x0) {
LAB_14150d9f8:
          FUN_1439f23d0(param_1 + 0x10,*(int *)(param_1 + 0x1c) + 1);
          piVar8 = *(int **)(param_1 + 0x20);
          iVar4 = *piVar8;
LAB_14150da0c:
          *piVar8 = iVar4 + 1;
          uVar6 = FUN_1414fd3c0(*(undefined8 *)(param_1 + 0x10));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8) = uVar6;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x18);
          iVar4 = *piVar8;
          if (iVar4 <= iVar2) {
            if (iVar4 == *(int *)(param_1 + 0x1c)) goto LAB_14150d9f8;
            goto LAB_14150da0c;
          }
          uVar6 = *(undefined8 *)(piVar8 + (longlong)iVar2 * 2 + 2);
          *(int *)(param_1 + 0x18) = iVar2 + 1;
        }
        pbVar5 = (byte *)*param_2;
        if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
          *param_2 = pbVar5 + 1;
        }
        else {
          uVar7 = FUN_1439f98b0(param_2);
          if ((int)uVar7 < 0) break;
        }
        uVar7 = FUN_1439f8500(param_2,&local_res10);
        if ((local_res14 < 0) || (uVar7 = FUN_14150db30(uVar6,param_2), (char)uVar7 == '\0')) break;
        uVar7 = FUN_1439f84b0(param_2,local_res10);
      }
    }
    else {
      uVar3 = FUN_1439f8c60(param_2,uVar7);
      uVar7 = (ulonglong)uVar3;
      pbVar5 = (byte *)(ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_14150d9b2;
LAB_14150dae6:
      if ((int)uVar7 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar5 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar7 = FUN_143a1e1e0(param_2,uVar7);
    }
  } while ((char)uVar7 != '\0');
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 14150db30 FUN_14150db30 body=401 status=ok
// SIG undefined FUN_14150db30(void)

ulonglong FUN_14150db30(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined *puVar8;
  undefined4 local_res10;
  int local_res14;
  
  do {
    pbVar4 = (byte *)*param_2;
    uVar6 = 0;
    if ((pbVar4 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4)) {
      pbVar4 = pbVar4 + 1;
      *param_2 = pbVar4;
LAB_14150db83:
      iVar2 = (int)(uVar6 >> 3);
      if (iVar2 == 1) {
        if ((char)uVar6 != '\n') goto LAB_14150dc75;
        puVar8 = *(undefined **)(param_1 + 0x10);
        if (puVar8 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
          puVar8 = *(undefined **)(param_1 + 0x10);
        }
        uVar6 = thunk_FUN_1439fa490(param_2,puVar8);
        if ((char)uVar6 == '\0') break;
        plVar7 = *(longlong **)(param_1 + 0x10);
        puVar1 = (ulonglong *)(plVar7 + 2);
        if (0xf < (ulonglong)plVar7[3]) {
          plVar7 = (longlong *)*plVar7;
        }
        uVar6 = FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,0,
                              "OakSave.PlayerInputBinding_Axis_Key.key_name");
      }
      else {
        if ((iVar2 != 2) || ((char)uVar6 != '\x12')) goto LAB_14150dc75;
        lVar5 = *(longlong *)(param_1 + 0x18);
        if (lVar5 == 0) {
          lVar5 = FUN_141544530(0);
          *(longlong *)(param_1 + 0x18) = lVar5;
        }
        pbVar4 = (byte *)*param_2;
        if ((pbVar4 < (byte *)param_2[1]) && (*pbVar4 < 0x80)) {
          *param_2 = pbVar4 + 1;
        }
        else {
          uVar6 = FUN_1439f98b0(param_2);
          if ((int)uVar6 < 0) break;
        }
        uVar6 = FUN_1439f8500(param_2,&local_res10);
        if ((local_res14 < 0) || (uVar6 = FUN_14154ce00(lVar5,param_2), (char)uVar6 == '\0')) break;
        uVar6 = FUN_1439f84b0(param_2,local_res10);
      }
    }
    else {
      uVar3 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar3;
      pbVar4 = (byte *)(ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_14150db83;
LAB_14150dc75:
      if ((int)uVar6 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar6 = FUN_143a1e1e0(param_2,uVar6);
    }
  } while ((char)uVar6 != '\0');
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 14150dcd0 FUN_14150dcd0 body=392 status=ok
// SIG undefined FUN_14150dcd0(void)

ulonglong FUN_14150dcd0(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined *puVar10;
  
  do {
    pbVar4 = (byte *)*param_2;
    uVar6 = 0;
    if ((pbVar4 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4)) {
      pbVar4 = pbVar4 + 1;
      *param_2 = pbVar4;
LAB_14150dd31:
      iVar3 = (int)(uVar6 >> 3);
      if (iVar3 == 1) {
        if ((char)uVar6 != '\n') goto LAB_14150de06;
        puVar10 = *(undefined **)(param_1 + 0x28);
        if (puVar10 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x28,&DAT_146ba2f50);
          puVar10 = *(undefined **)(param_1 + 0x28);
        }
        uVar6 = thunk_FUN_1439fa490(param_2,puVar10);
        if ((char)uVar6 == '\0') break;
        plVar9 = *(longlong **)(param_1 + 0x28);
        puVar1 = (ulonglong *)(plVar9 + 2);
        if (0xf < (ulonglong)plVar9[3]) {
          plVar9 = (longlong *)*plVar9;
        }
        uVar6 = FUN_1439fa7f0(plVar9,*puVar1 & 0xffffffff,0,
                              "OakSave.PlayerInputBinding_Button.rebind_data_path");
      }
      else {
        if ((iVar3 != 2) || ((char)uVar6 != '\x12')) goto LAB_14150de06;
        uVar5 = FUN_1439f1a80(param_1 + 0x10);
        uVar6 = thunk_FUN_1439fa490(param_2,uVar5);
        if ((char)uVar6 == '\0') break;
        iVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
        lVar7 = FUN_1439f1d30(param_1 + 0x10,iVar3 + -1);
        uVar6 = *(ulonglong *)(lVar7 + 0x10);
        iVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
        puVar8 = (undefined8 *)FUN_1439f1d30(param_1 + 0x10,iVar3 + -1);
        if (0xf < (ulonglong)puVar8[3]) {
          puVar8 = (undefined8 *)*puVar8;
        }
        uVar6 = FUN_1439fa7f0(puVar8,uVar6 & 0xffffffff,0,
                              "OakSave.PlayerInputBinding_Button.key_names");
      }
    }
    else {
      uVar2 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar2;
      pbVar4 = (byte *)(ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_14150dd31;
LAB_14150de06:
      if ((int)uVar6 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar6 = FUN_143a1e1e0(param_2,uVar6);
    }
  } while ((char)uVar6 != '\0');
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 14150de60 FUN_14150de60 body=781 status=ok
// SIG undefined FUN_14150de60(void)

ulonglong FUN_14150de60(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int *piVar8;
  longlong *plVar9;
  undefined *puVar10;
  char cVar11;
  undefined4 local_res10;
  int local_res14;
  undefined4 local_res18;
  int local_res1c;
  
  do {
    pbVar5 = (byte *)*param_2;
    uVar7 = 0;
    if ((pbVar5 < (byte *)param_2[1]) && (uVar7 = (ulonglong)*pbVar5, '\0' < (char)*pbVar5)) {
      pbVar5 = pbVar5 + 1;
      *param_2 = pbVar5;
LAB_14150deb2:
      iVar2 = (int)(uVar7 >> 3);
      cVar11 = (char)uVar7;
      if (iVar2 == 1) {
        if (cVar11 != '\n') goto LAB_14150e123;
        puVar10 = *(undefined **)(param_1 + 0x40);
        if (puVar10 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x40,&DAT_146ba2f50);
          puVar10 = *(undefined **)(param_1 + 0x40);
        }
        uVar7 = thunk_FUN_1439fa490(param_2,puVar10);
        if ((char)uVar7 == '\0') break;
        plVar9 = *(longlong **)(param_1 + 0x40);
        puVar1 = (ulonglong *)(plVar9 + 2);
        if (0xf < (ulonglong)plVar9[3]) {
          plVar9 = (longlong *)*plVar9;
        }
        uVar7 = FUN_1439fa7f0(plVar9,*puVar1 & 0xffffffff,0,
                              "OakSave.PlayerInputBinding_Category.category_data_path");
      }
      else if (iVar2 == 2) {
        if (cVar11 != '\x12') goto LAB_14150e123;
        puVar10 = *(undefined **)(param_1 + 0x48);
        if (puVar10 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x48,&DAT_146ba2f50);
          puVar10 = *(undefined **)(param_1 + 0x48);
        }
        uVar7 = thunk_FUN_1439fa490(param_2,puVar10);
        if ((char)uVar7 == '\0') break;
        plVar9 = *(longlong **)(param_1 + 0x48);
        puVar1 = (ulonglong *)(plVar9 + 2);
        if (0xf < (ulonglong)plVar9[3]) {
          plVar9 = (longlong *)*plVar9;
        }
        uVar7 = FUN_1439fa7f0(plVar9,*puVar1 & 0xffffffff,0,
                              "OakSave.PlayerInputBinding_Category.context_data_path");
      }
      else if (iVar2 == 3) {
        if (cVar11 != '\x1a') goto LAB_14150e123;
        piVar8 = *(int **)(param_1 + 0x20);
        if (piVar8 == (int *)0x0) {
LAB_14150dfda:
          FUN_1439f23d0(param_1 + 0x10,*(int *)(param_1 + 0x1c) + 1);
          piVar8 = *(int **)(param_1 + 0x20);
          iVar4 = *piVar8;
LAB_14150dfee:
          *piVar8 = iVar4 + 1;
          uVar6 = FUN_1414fd470(*(undefined8 *)(param_1 + 0x10));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8) = uVar6;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x18);
          iVar4 = *piVar8;
          if (iVar4 <= iVar2) {
            if (iVar4 == *(int *)(param_1 + 0x1c)) goto LAB_14150dfda;
            goto LAB_14150dfee;
          }
          uVar6 = *(undefined8 *)(piVar8 + (longlong)iVar2 * 2 + 2);
          *(int *)(param_1 + 0x18) = iVar2 + 1;
        }
        pbVar5 = (byte *)*param_2;
        if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
          *param_2 = pbVar5 + 1;
        }
        else {
          uVar7 = FUN_1439f98b0(param_2);
          if ((int)uVar7 < 0) break;
        }
        uVar7 = FUN_1439f8500(param_2,&local_res18);
        if ((local_res1c < 0) || (uVar7 = FUN_14150dcd0(uVar6,param_2), (char)uVar7 == '\0')) break;
        uVar7 = FUN_1439f84b0(param_2,local_res18);
      }
      else {
        if ((iVar2 != 4) || (cVar11 != '\"')) goto LAB_14150e123;
        piVar8 = *(int **)(param_1 + 0x38);
        if (piVar8 == (int *)0x0) {
LAB_14150df0a:
          FUN_1439f23d0(param_1 + 0x28,*(int *)(param_1 + 0x34) + 1);
          piVar8 = *(int **)(param_1 + 0x38);
          iVar4 = *piVar8;
LAB_14150df1e:
          *piVar8 = iVar4 + 1;
          uVar6 = FUN_1414fd320(*(undefined8 *)(param_1 + 0x28));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x38) + 8 + (longlong)*(int *)(param_1 + 0x30) * 8) = uVar6;
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x30);
          iVar4 = *piVar8;
          if (iVar4 <= iVar2) {
            if (iVar4 == *(int *)(param_1 + 0x34)) goto LAB_14150df0a;
            goto LAB_14150df1e;
          }
          uVar6 = *(undefined8 *)(piVar8 + (longlong)iVar2 * 2 + 2);
          *(int *)(param_1 + 0x30) = iVar2 + 1;
        }
        pbVar5 = (byte *)*param_2;
        if ((pbVar5 < (byte *)param_2[1]) && (*pbVar5 < 0x80)) {
          *param_2 = pbVar5 + 1;
        }
        else {
          uVar7 = FUN_1439f98b0(param_2);
          if ((int)uVar7 < 0) break;
        }
        uVar7 = FUN_1439f8500(param_2,&local_res10);
        if ((local_res14 < 0) || (uVar7 = FUN_14150d960(uVar6,param_2), (char)uVar7 == '\0')) break;
        uVar7 = FUN_1439f84b0(param_2,local_res10);
      }
    }
    else {
      uVar3 = FUN_1439f8c60(param_2,uVar7);
      uVar7 = (ulonglong)uVar3;
      pbVar5 = (byte *)(ulonglong)(uVar3 - 1);
      if (uVar3 - 1 < 0x7f) goto LAB_14150deb2;
LAB_14150e123:
      if ((int)uVar7 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar5 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        FUN_141515d60();
      }
      uVar7 = FUN_143a1e1e0(param_2,uVar7);
    }
  } while ((char)uVar7 != '\0');
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 14150e170 FUN_14150e170 body=365 status=ok
// SIG undefined FUN_14150e170(void)

ulonglong FUN_14150e170(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined4 local_res10;
  int local_res14;
  
  do {
    pbVar4 = (byte *)*param_2;
    uVar6 = 0;
    if ((pbVar4 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar4, '\0' < (char)*pbVar4)) {
      pbVar4 = pbVar4 + 1;
      *param_2 = pbVar4;
LAB_14150e1c2:
      if (((int)(uVar6 >> 3) != 1) || ((char)uVar6 != '\n')) goto LAB_14150e291;
      piVar8 = *(int **)(param_1 + 0x20);
      if (piVar8 == (int *)0x0) {
LAB_14150e1ff:
        FUN_1439f23d0(param_1 + 0x10,*(int *)(param_1 + 0x1c) + 1);
        piVar8 = *(int **)(param_1 + 0x20);
        iVar3 = *piVar8;
LAB_14150e213:
        *piVar8 = iVar3 + 1;
        uVar5 = FUN_1414fd520(*(undefined8 *)(param_1 + 0x10));
        *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8)
             = uVar5;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x18);
        iVar3 = *piVar8;
        if (iVar3 <= iVar1) {
          if (iVar3 == *(int *)(param_1 + 0x1c)) goto LAB_14150e1ff;
          goto LAB_14150e213;
        }
        uVar5 = *(undefined8 *)(piVar8 + (longlong)iVar1 * 2 + 2);
        *(int *)(param_1 + 0x18) = iVar1 + 1;
      }
      pbVar4 = (byte *)*param_2;
      if ((pbVar4 < (byte *)param_2[1]) && (uVar7 = (ulonglong)*pbVar4, *pbVar4 < 0x80)) {
        *param_2 = pbVar4 + 1;
      }
      else {
        uVar6 = FUN_1439f98b0(param_2);
        uVar7 = uVar6 & 0xffffffff;
        if ((int)uVar6 < 0) break;
      }
      uVar6 = FUN_1439f8500(param_2,&local_res10,uVar7);
      if ((local_res14 < 0) || (uVar6 = FUN_14150de60(uVar5,param_2), (char)uVar6 == '\0')) break;
      uVar6 = FUN_1439f84b0(param_2,local_res10);
    }
    else {
      uVar2 = FUN_1439f8c60(param_2,uVar6);
      uVar6 = (ulonglong)uVar2;
      pbVar4 = (byte *)(ulonglong)(uVar2 - 1);
      if (uVar2 - 1 < 0x7f) goto LAB_14150e1c2;
LAB_14150e291:
      if ((int)uVar6 == 0) {
        return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
      }
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        uVar7 = FUN_141515d60();
      }
      else {
        uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe;
      }
      uVar6 = FUN_143a1e1e0(param_2,uVar6,uVar7);
    }
  } while ((char)uVar6 != '\0');
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 14150e2e0 FUN_14150e2e0 body=10554 status=ok
// SIG undefined FUN_14150e2e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14150e2e0(longlong param_1,ulonglong *param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  byte bVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  int *piVar18;
  byte bVar19;
  undefined *puVar20;
  char cVar21;
  undefined1 auStack_138 [32];
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  undefined4 local_108;
  int local_104;
  undefined4 local_100;
  int local_fc;
  undefined4 local_f8;
  int local_f4;
  undefined4 local_f0;
  int local_ec;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  int local_dc;
  undefined4 local_d8;
  int local_d4;
  undefined4 local_d0;
  int local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined4 local_c0;
  int local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined4 local_a0;
  int local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  int local_7c;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  ulonglong local_58;
  ulonglong local_50;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
LAB_14150e320:
  do {
    pbVar12 = (byte *)*param_2;
    uVar14 = 0;
    if ((byte *)param_2[1] <= pbVar12) {
LAB_14150e365:
      uVar5 = FUN_1439f8c60(param_2,uVar14);
      uVar14 = (ulonglong)uVar5;
      uVar9 = (ulonglong)(uVar5 - 1);
      if (uVar5 - 1 < 0x3fff) goto LAB_14150e37e;
      goto switchD_14150e39d_caseD_1d;
    }
    bVar19 = *pbVar12;
    uVar14 = (ulonglong)bVar19;
    pbVar1 = pbVar12 + 1;
    if ((char)bVar19 < '\x01') {
      if (pbVar1 < (byte *)param_2[1]) {
        bVar3 = *pbVar1;
        if (0x7f < (~(uint)bVar3 & (uint)bVar19)) {
          *param_2 = (ulonglong)(pbVar12 + 2);
          uVar14 = (ulonglong)((bVar19 - 0x80) + (uint)bVar3 * 0x80);
          goto LAB_14150e37e;
        }
      }
      goto LAB_14150e365;
    }
    *param_2 = (ulonglong)pbVar1;
LAB_14150e37e:
    uVar5 = (int)(uVar14 >> 3) - 1;
    uVar9 = (ulonglong)uVar5;
    if (0xe9 < uVar5) goto switchD_14150e39d_caseD_1d;
    uVar9 = (ulonglong)(int)uVar5;
    cVar21 = (char)uVar14;
    switch(uVar5) {
    case 0:
      if (cVar21 != '\b') break;
      lVar10 = param_1 + 0x2e0;
LAB_14150e3b0:
      uVar14 = FUN_1414ff1c0(param_2,lVar10);
      goto LAB_14150e3b8;
    case 1:
      if (cVar21 == '\x10') {
        lVar10 = param_1 + 0x2e1;
        goto LAB_14150e3b0;
      }
      break;
    case 2:
      if (cVar21 == '\x18') {
        lVar10 = param_1 + 0x2e2;
        goto LAB_14150e3b0;
      }
      break;
    case 3:
      if (cVar21 == ' ') {
        lVar10 = param_1 + 0x2e3;
        goto LAB_14150e3b0;
      }
      break;
    case 4:
      if (cVar21 == '(') {
        lVar10 = param_1 + 0x2e4;
        goto LAB_14150e3b0;
      }
      break;
    case 5:
      if (cVar21 == '0') {
        lVar10 = param_1 + 0x2e5;
        goto LAB_14150e3b0;
      }
      break;
    case 6:
      if (cVar21 == '8') {
        lVar10 = param_1 + 0x2e6;
        goto LAB_14150e3b0;
      }
      break;
    case 7:
      if (cVar21 == '@') {
        lVar10 = param_1 + 0x2e7;
        goto LAB_14150e3b0;
      }
      break;
    case 8:
      if (cVar21 == 'M') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x2e8);
        goto LAB_14150e3b8;
      }
      break;
    case 9:
      if (cVar21 == 'P') {
        lVar10 = param_1 + 0x2ec;
        goto LAB_14150e3b0;
      }
      break;
    case 10:
      if (cVar21 == 'X') {
        lVar10 = param_1 + 0x2ed;
        goto LAB_14150e3b0;
      }
      break;
    case 0xb:
      if (cVar21 == '`') {
        lVar10 = param_1 + 0x2ee;
        goto LAB_14150e3b0;
      }
      break;
    case 0xc:
      if (cVar21 == 'h') {
        lVar10 = param_1 + 0x2ef;
        goto LAB_14150e3b0;
      }
      break;
    case 0xd:
      if (cVar21 == 'p') {
        lVar10 = param_1 + 0x2f0;
        goto LAB_14150e3b0;
      }
      break;
    case 0xe:
      if (cVar21 == 'x') {
        lVar10 = param_1 + 0x2f1;
        goto LAB_14150e3b0;
      }
      break;
    case 0xf:
      if (cVar21 == -0x80) {
        lVar10 = param_1 + 0x2f2;
        goto LAB_14150e3b0;
      }
      break;
    case 0x10:
      if (cVar21 == -0x78) {
        lVar10 = param_1 + 0x2f3;
        goto LAB_14150e3b0;
      }
      break;
    case 0x11:
      if (cVar21 == -0x6b) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x2f4);
        goto LAB_14150e3b8;
      }
      break;
    case 0x12:
      if (cVar21 == -99) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x2f8);
        goto LAB_14150e3b8;
      }
      break;
    case 0x13:
      if (cVar21 == -0x5b) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x2fc);
        goto LAB_14150e3b8;
      }
      break;
    case 0x14:
      if (cVar21 == -0x53) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x300);
        goto LAB_14150e3b8;
      }
      break;
    case 0x15:
      if (cVar21 == -0x50) {
        lVar10 = param_1 + 0x304;
        goto LAB_14150e3b0;
      }
      break;
    case 0x16:
      if (cVar21 == -0x48) {
        lVar10 = param_1 + 0x305;
        goto LAB_14150e3b0;
      }
      break;
    case 0x17:
      if (cVar21 == -0x40) {
        lVar10 = param_1 + 0x306;
        goto LAB_14150e3b0;
      }
      break;
    case 0x18:
      if (cVar21 == -0x33) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x308);
        goto LAB_14150e3b8;
      }
      break;
    case 0x19:
      if (cVar21 == -0x2b) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x30c);
        goto LAB_14150e3b8;
      }
      break;
    case 0x1a:
      if (cVar21 == -0x23) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x310);
        goto LAB_14150e3b8;
      }
      break;
    case 0x1b:
      if (cVar21 == -0x20) {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x314);
        goto LAB_14150e3b8;
      }
      break;
    case 0x1c:
      if (cVar21 == -0x18) {
        lVar10 = param_1 + 0x307;
        goto LAB_14150e3b0;
      }
      break;
    case 0x21:
      if (cVar21 == '\x10') {
        lVar10 = param_1 + 0x35c;
        goto LAB_14150e3b0;
      }
      break;
    case 0x22:
      if (cVar21 == '\x1a') {
        uVar13 = FUN_141515d00(param_1);
        pbVar12 = (byte *)*param_2;
        if ((pbVar12 < (byte *)param_2[1]) && (*pbVar12 < 0x80)) {
          *param_2 = (ulonglong)(pbVar12 + 1);
        }
        else {
          uVar14 = FUN_1439f98b0(param_2);
          if ((int)uVar14 < 0) goto LAB_141510b8d;
        }
        uVar14 = FUN_1439f8500(param_2,&local_108);
        if ((local_104 < 0) || (uVar14 = FUN_14150e170(uVar13,param_2), (char)uVar14 == '\0'))
        goto LAB_141510b8d;
        uVar14 = FUN_1439f84b0(param_2,local_108);
        goto LAB_14150e3b8;
      }
      break;
    case 0x23:
      if (cVar21 == '\"') {
        pbVar12 = (byte *)*param_2;
        if ((pbVar12 < (byte *)param_2[1]) && (uVar9 = (ulonglong)*pbVar12, *pbVar12 < 0x80)) {
          *param_2 = (ulonglong)(pbVar12 + 1);
        }
        else {
          uVar14 = FUN_1439f98b0(param_2);
          uVar9 = uVar14 & 0xffffffff;
          if ((int)uVar14 < 0) goto LAB_141510b8d;
        }
        uVar6 = FUN_1439f89d0(param_2,uVar9);
        iVar7 = FUN_1439f8490(param_2);
        while (0 < iVar7) {
          pbVar12 = (byte *)*param_2;
          bVar19 = 0;
          if (pbVar12 < (byte *)param_2[1]) {
            bVar19 = *pbVar12;
            if (0x7f < bVar19) goto LAB_14150e772;
            *param_2 = (ulonglong)(pbVar12 + 1);
            local_110 = (uint)bVar19;
          }
          else {
LAB_14150e772:
            uVar14 = FUN_1439f8e20(param_2,bVar19);
            local_110 = (uint)uVar14;
            if ((longlong)uVar14 < 0) goto LAB_141510b8d;
          }
          FUN_1439f19c0(param_1 + 0x10);
          iVar7 = FUN_1439f8490(param_2);
        }
        FUN_1439f8990(param_2,uVar6);
      }
      else {
        if (cVar21 != ' ') break;
        pbVar12 = (byte *)*param_2;
        bVar19 = 0;
        if (pbVar12 < (byte *)param_2[1]) {
          bVar19 = *pbVar12;
          if (0x7f < bVar19) goto LAB_14150e7dc;
          *param_2 = (ulonglong)(pbVar12 + 1);
          local_118 = (uint)bVar19;
        }
        else {
LAB_14150e7dc:
          uVar14 = FUN_1439f8e20(param_2,bVar19);
          local_118 = (uint)uVar14;
          if ((longlong)uVar14 < 0) goto LAB_141510b8d;
        }
        FUN_1439f19c0(param_1 + 0x10,&local_118);
        iVar7 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(param_1 + 0x10);
        iVar8 = FUN_1439f2ae0(param_1 + 0x10);
        iVar7 = iVar7 - iVar8;
        while ((((0 < iVar7 && (1 < (int)param_2[1] - (int)*param_2)) &&
                (pcVar4 = (char *)*param_2, *pcVar4 == -0x5e)) && (pcVar4[1] == '\x02'))) {
          pbVar12 = (byte *)(pcVar4 + 2);
          bVar19 = 0;
          *param_2 = (ulonglong)pbVar12;
          if (pbVar12 < (byte *)param_2[1]) {
            bVar19 = *pbVar12;
            if (0x7f < bVar19) goto LAB_14150e86a;
            *param_2 = (ulonglong)(pcVar4 + 3);
            local_118 = (uint)bVar19;
          }
          else {
LAB_14150e86a:
            uVar14 = FUN_1439f8e20(param_2,bVar19);
            local_118 = (uint)uVar14;
            if ((longlong)uVar14 < 0) goto LAB_141510b8d;
          }
          FUN_1439f1be0(param_1 + 0x10);
          iVar7 = iVar7 + -1;
        }
      }
      goto LAB_14150e320;
    case 0x24:
      if (cVar21 == '(') {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x318);
        goto LAB_14150e3b8;
      }
      break;
    case 0x25:
      if (cVar21 == '0') {
        uVar14 = FUN_1414ff090(param_2,param_1 + 0x31c);
        goto LAB_14150e3b8;
      }
      break;
    case 0x26:
      if (cVar21 == '8') {
        uVar14 = FUN_1414ff090(param_2,param_1 + 800);
        goto LAB_14150e3b8;
      }
      break;
    case 0x27:
      if (cVar21 == '@') {
        uVar14 = FUN_1414ff090(param_2,param_1 + 0x324);
        goto LAB_14150e3b8;
      }
      break;
    case 0x28:
      if (cVar21 == 'M') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x328);
        goto LAB_14150e3b8;
      }
      break;
    case 0x29:
      if (cVar21 == 'U') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x32c);
        goto LAB_14150e3b8;
      }
      break;
    case 0x2a:
      if (cVar21 == ']') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x330);
        goto LAB_14150e3b8;
      }
      break;
    case 0x2b:
      if (cVar21 == 'e') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x334);
        goto LAB_14150e3b8;
      }
      break;
    case 0x2c:
      if (cVar21 == 'm') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x338);
        goto LAB_14150e3b8;
      }
      break;
    case 0x2d:
      if (cVar21 == 'u') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x33c);
        goto LAB_14150e3b8;
      }
      break;
    case 0x2e:
      if (cVar21 == '}') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x340);
        goto LAB_14150e3b8;
      }
      break;
    case 0x2f:
      if (cVar21 == -0x7b) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x344);
        goto LAB_14150e3b8;
      }
      break;
    case 0x30:
      if (cVar21 == -0x73) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x348);
        goto LAB_14150e3b8;
      }
      break;
    case 0x31:
      if (cVar21 == -0x6b) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x34c);
        goto LAB_14150e3b8;
      }
      break;
    case 0x32:
      if (cVar21 == -99) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x350);
        goto LAB_14150e3b8;
      }
      break;
    case 0x33:
      if (cVar21 == -0x5b) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x354);
        goto LAB_14150e3b8;
      }
      break;
    case 0x34:
      if (cVar21 == -0x53) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x358);
        goto LAB_14150e3b8;
      }
      break;
    case 0x35:
      if (cVar21 == -0x4b) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x360);
        goto LAB_14150e3b8;
      }
      break;
    case 0x36:
      if (cVar21 == -0x43) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x364);
        goto LAB_14150e3b8;
      }
      break;
    case 0x37:
      if (cVar21 == -0x3b) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x368);
        goto LAB_14150e3b8;
      }
      break;
    case 0x38:
      if (cVar21 == -0x33) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x36c);
        goto LAB_14150e3b8;
      }
      break;
    case 0x39:
      if (cVar21 == -0x2b) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x370);
        goto LAB_14150e3b8;
      }
      break;
    case 0x3a:
      if (cVar21 == -0x28) {
        lVar10 = param_1 + 0x35d;
        goto LAB_14150e3b0;
      }
      break;
    case 0x3b:
      if (cVar21 == -0x20) {
        lVar10 = param_1 + 0x35e;
        goto LAB_14150e3b0;
      }
      break;
    case 0x3c:
      if (cVar21 == -0x18) {
        lVar10 = param_1 + 0x35f;
        goto LAB_14150e3b0;
      }
      break;
    case 0x3d:
      if (cVar21 == -0xb) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x374);
        goto LAB_14150e3b8;
      }
      break;
    case 0x3e:
      if (cVar21 == -3) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x378);
        goto LAB_14150e3b8;
      }
      break;
    case 0x3f:
      if (cVar21 == '\x05') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x37c);
        goto LAB_14150e3b8;
      }
      break;
    case 0x40:
      if (cVar21 == '\r') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x380);
        goto LAB_14150e3b8;
      }
      break;
    case 0x41:
      if (cVar21 == '\x15') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 900);
        goto LAB_14150e3b8;
      }
      break;
    case 0x42:
      if (cVar21 == '\x1d') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x388);
        goto LAB_14150e3b8;
      }
      break;
    case 0x43:
      if (cVar21 == '%') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x38c);
        goto LAB_14150e3b8;
      }
      break;
    case 0x44:
      if (cVar21 == '-') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x390);
        goto LAB_14150e3b8;
      }
      break;
    case 0x45:
      if (cVar21 == '5') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x394);
        goto LAB_14150e3b8;
      }
      break;
    case 0x46:
      if (cVar21 == '=') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x398);
        goto LAB_14150e3b8;
      }
      break;
    case 0x47:
      if (cVar21 == 'E') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x39c);
        goto LAB_14150e3b8;
      }
      break;
    case 0x48:
      if (cVar21 == 'M') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x3a0);
        goto LAB_14150e3b8;
      }
      break;
    case 0x49:
      if (cVar21 == 'U') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x3a4);
        goto LAB_14150e3b8;
      }
      break;
    case 0x4a:
      if (cVar21 == ']') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x3a8);
        goto LAB_14150e3b8;
      }
      break;
    case 0x4b:
      if (cVar21 == 'e') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x3ac);
        goto LAB_14150e3b8;
      }
      break;
    case 0x4c:
      if (cVar21 == 'm') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x3b0);
        goto LAB_14150e3b8;
      }
      break;
    case 0x4d:
      if (cVar21 == 'u') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x3b4);
        goto LAB_14150e3b8;
      }
      break;
    case 0x4e:
      if (cVar21 == '}') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x3b8);
        goto LAB_14150e3b8;
      }
      break;
    case 0x4f:
      if (cVar21 == -0x80) {
        lVar10 = param_1 + 0x3cc;
        goto LAB_14150e3b0;
      }
      break;
    case 0x50:
      if (cVar21 == -0x78) {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x3bc);
        goto LAB_14150e3b8;
      }
      break;
    case 0x51:
      if (cVar21 == -0x70) {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x3c0);
        goto LAB_14150e3b8;
      }
      break;
    case 0x52:
      if (cVar21 == -99) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x3c4);
        goto LAB_14150e3b8;
      }
      break;
    case 0x53:
      if (cVar21 == -0x5b) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x3c8);
        goto LAB_14150e3b8;
      }
      break;
    case 0x54:
      if (cVar21 == -0x58) {
        lVar10 = param_1 + 0x3cd;
        goto LAB_14150e3b0;
      }
      break;
    case 0x55:
      if (cVar21 == -0x50) {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x3d0);
        goto LAB_14150e3b8;
      }
      break;
    case 0x56:
      if (cVar21 == -0x48) {
        lVar10 = param_1 + 0x3ce;
        goto LAB_14150e3b0;
      }
      break;
    case 0x57:
      if (cVar21 == -0x40) {
        lVar10 = param_1 + 0x3cf;
        goto LAB_14150e3b0;
      }
      break;
    case 0x58:
      if (cVar21 == -0x38) {
        lVar10 = param_1 + 0x3d4;
        goto LAB_14150e3b0;
      }
      break;
    case 0x59:
      if (cVar21 == -0x30) {
        lVar10 = param_1 + 0x3d5;
        goto LAB_14150e3b0;
      }
      break;
    case 0x5a:
      if (cVar21 == -0x28) {
        lVar10 = param_1 + 0x3d6;
        goto LAB_14150e3b0;
      }
      break;
    case 0x5b:
      if (cVar21 == -0x20) {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x3d8);
        goto LAB_14150e3b8;
      }
      break;
    case 0x5c:
      if (cVar21 == -0x18) {
        lVar10 = param_1 + 0x3d7;
        goto LAB_14150e3b0;
      }
      break;
    case 0x5d:
      if (cVar21 == -0xb) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x3dc);
        goto LAB_14150e3b8;
      }
      break;
    case 0x5e:
      if (cVar21 == -8) {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x3e0);
        goto LAB_14150e3b8;
      }
      break;
    case 0x5f:
      if (cVar21 == '\0') {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x3e4);
        goto LAB_14150e3b8;
      }
      break;
    case 0x60:
      if (cVar21 == '\b') {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 1000);
        goto LAB_14150e3b8;
      }
      break;
    case 0x61:
      if (cVar21 == '\x10') {
        lVar10 = param_1 + 0x414;
        goto LAB_14150e3b0;
      }
      break;
    case 0x62:
      if (cVar21 == '\x18') {
        lVar10 = param_1 + 0x415;
        goto LAB_14150e3b0;
      }
      break;
    case 99:
      if (cVar21 == '\"') {
        puVar20 = *(undefined **)(param_1 + 0x2b0);
        if (puVar20 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x2b0,&DAT_146ba2f50);
          puVar20 = *(undefined **)(param_1 + 0x2b0);
        }
        uVar14 = thunk_FUN_1439fa490(param_2,puVar20);
        if ((char)uVar14 == '\0') goto LAB_141510b8d;
        plVar16 = *(longlong **)(param_1 + 0x2b0);
        puVar2 = (ulonglong *)(plVar16 + 2);
        if (0xf < (ulonglong)plVar16[3]) {
          plVar16 = (longlong *)*plVar16;
        }
        uVar14 = FUN_1439fa7f0(plVar16,*puVar2 & 0xffffffff,0,
                               "OakSave.Profile.last_status_menu_page");
        goto LAB_14150e3b8;
      }
      break;
    case 100:
      if (cVar21 == '*') {
        piVar18 = *(int **)(param_1 + 0x38);
        if (piVar18 == (int *)0x0) {
LAB_14150f027:
          FUN_1439f23d0(param_1 + 0x28,*(int *)(param_1 + 0x34) + 1);
          piVar18 = *(int **)(param_1 + 0x38);
          iVar8 = *piVar18;
LAB_14150f03b:
          *piVar18 = iVar8 + 1;
          uVar13 = FUN_1414fd1d0(*(undefined8 *)(param_1 + 0x28));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x38) + 8 + (longlong)*(int *)(param_1 + 0x30) * 8) = uVar13;
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x30);
          iVar8 = *piVar18;
          if (iVar8 <= iVar7) {
            if (iVar8 == *(int *)(param_1 + 0x34)) goto LAB_14150f027;
            goto LAB_14150f03b;
          }
          uVar13 = *(undefined8 *)(piVar18 + (longlong)iVar7 * 2 + 2);
          *(int *)(param_1 + 0x30) = iVar7 + 1;
        }
        pbVar12 = (byte *)*param_2;
        if ((pbVar12 < (byte *)param_2[1]) && (*pbVar12 < 0x80)) {
          *param_2 = (ulonglong)(pbVar12 + 1);
        }
        else {
          uVar14 = FUN_1439f98b0(param_2);
          if ((int)uVar14 < 0) goto LAB_141510b8d;
        }
        uVar14 = FUN_1439f8500(param_2,&local_100);
        if ((local_fc < 0) || (uVar14 = FUN_14150d630(uVar13,param_2), (char)uVar14 == '\0')) {
LAB_141510b8d:
          return uVar14 & 0xffffffffffffff00;
        }
        uVar14 = FUN_1439f84b0(param_2,local_100);
        goto LAB_14150e3b8;
      }
      break;
    case 0x65:
      if (cVar21 == '2') {
        uVar13 = FUN_141515d30(param_1);
        pbVar12 = (byte *)*param_2;
        if ((pbVar12 < (byte *)param_2[1]) && (*pbVar12 < 0x80)) {
          *param_2 = (ulonglong)(pbVar12 + 1);
        }
        else {
          uVar14 = FUN_1439f98b0(param_2);
          if ((int)uVar14 < 0) goto LAB_141510b8d;
        }
        uVar14 = FUN_1439f8500(param_2,&local_f8);
        if ((local_f4 < 0) || (uVar14 = FUN_14150d780(uVar13,param_2), (char)uVar14 == '\0'))
        goto LAB_141510b8d;
        uVar14 = FUN_1439f84b0(param_2,local_f8);
        goto LAB_14150e3b8;
      }
      break;
    case 0x66:
      if (cVar21 == '8') {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x3ec);
        goto LAB_14150e3b8;
      }
      break;
    case 0x67:
      if (cVar21 == '@') {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x3f0);
        goto LAB_14150e3b8;
      }
      break;
    case 0x68:
      if (cVar21 == 'J') {
        puVar20 = *(undefined **)(param_1 + 0x2b8);
        if (puVar20 == &DAT_146ba2f50) {
          FUN_140d2a6b0(param_1 + 0x2b8,&DAT_146ba2f50);
          puVar20 = *(undefined **)(param_1 + 0x2b8);
        }
        uVar14 = thunk_FUN_1439fa490(param_2,puVar20);
        if ((char)uVar14 == '\0') goto LAB_141510b8d;
        plVar16 = *(longlong **)(param_1 + 0x2b8);
        puVar2 = (ulonglong *)(plVar16 + 2);
        if (0xf < (ulonglong)plVar16[3]) {
          plVar16 = (longlong *)*plVar16;
        }
        uVar14 = FUN_1439fa7f0(plVar16,*puVar2 & 0xffffffff,0,"OakSave.Profile.matchmaking_region");
        goto LAB_14150e3b8;
      }
      break;
    case 0x69:
      if (cVar21 == 'P') {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x3f4);
        goto LAB_14150e3b8;
      }
      break;
    case 0x6a:
      if (cVar21 == 'X') {
        uVar14 = FUN_1414ff090(param_2,param_1 + 0x3f8);
        goto LAB_14150e3b8;
      }
      break;
    case 0x6b:
      if (cVar21 == '`') {
        uVar14 = FUN_1414ff090(param_2,param_1 + 0x3fc);
        goto LAB_14150e3b8;
      }
      break;
    case 0x6c:
      if (cVar21 == 'j') {
        uVar13 = FUN_1439f1a80(param_1 + 0x40);
        uVar14 = thunk_FUN_1439fa490(param_2,uVar13);
        if ((char)uVar14 == '\0') goto LAB_141510b8d;
        iVar7 = IStreamingManager::GetNumWantingResources(param_1 + 0x40);
        lVar10 = FUN_1439f1d30(param_1 + 0x40,iVar7 + -1);
        uVar14 = *(ulonglong *)(lVar10 + 0x10);
        iVar7 = IStreamingManager::GetNumWantingResources(param_1 + 0x40);
        puVar11 = (undefined8 *)FUN_1439f1d30(param_1 + 0x40,iVar7 + -1);
        if (0xf < (ulonglong)puVar11[3]) {
          puVar11 = (undefined8 *)*puVar11;
        }
        uVar14 = FUN_1439fa7f0(puVar11,uVar14 & 0xffffffff,0,"OakSave.Profile.friend_events");
        goto LAB_14150e3b8;
      }
      break;
    case 0x6d:
      if (cVar21 == 'r') {
        uVar13 = FUN_1439f1a80(param_1 + 0x58);
        uVar14 = thunk_FUN_1439fa490(param_2,uVar13);
        if ((char)uVar14 == '\0') goto LAB_141510b8d;
        iVar7 = IStreamingManager::GetNumWantingResources(param_1 + 0x58);
        lVar10 = FUN_1439f1d30(param_1 + 0x58,iVar7 + -1);
        uVar14 = *(ulonglong *)(lVar10 + 0x10);
        iVar7 = IStreamingManager::GetNumWantingResources(param_1 + 0x58);
        puVar11 = (undefined8 *)FUN_1439f1d30(param_1 + 0x58,iVar7 + -1);
        if (0xf < (ulonglong)puVar11[3]) {
          puVar11 = (undefined8 *)*puVar11;
        }
        uVar14 = FUN_1439fa7f0(puVar11,uVar14 & 0xffffffff,0,"OakSave.Profile.friend_statuses");
        goto LAB_14150e3b8;
      }
      break;
    case 0x6e:
      if (cVar21 == 'x') {
        uVar14 = FUN_1414ff170(param_2,param_1 + 0x400);
        goto LAB_14150e3b8;
      }
      break;
    case 0x6f:
      if (cVar21 == -0x80) {
        uVar14 = FUN_1414ff170(param_2,param_1 + 0x408);
        goto LAB_14150e3b8;
      }
      break;
    case 0x70:
      if (cVar21 == -0x78) {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x410);
        goto LAB_14150e3b8;
      }
      break;
    case 0x84:
      if (cVar21 == '*') {
        local_78 = param_1 + 0x70;
        local_70 = (**(code **)(*(longlong *)(param_1 + 0x70) + 0x98))();
        pbVar12 = (byte *)*param_2;
        local_58 = 0;
        local_50 = 0xf;
        local_68 = 0;
        local_40 = (longlong *)0x0;
        if ((pbVar12 < (byte *)param_2[1]) && (*pbVar12 < 0x80)) {
          *param_2 = (ulonglong)(pbVar12 + 1);
LAB_14150f3fb:
          uVar14 = FUN_1439f8500(param_2,&local_f0);
          if (((local_ec < 0) || (uVar14 = FUN_14150cc80(&local_78,param_2), (char)uVar14 == '\0'))
             || (uVar14 = FUN_1439f84b0(param_2,local_f0), (char)uVar14 == '\0'))
          goto LAB_141510b91;
          puVar17 = &local_68;
          if (0xf < local_50) {
            puVar17 = (undefined1 *)CONCAT71(uStack_67,local_68);
          }
          uVar14 = FUN_1439fa7f0(puVar17,local_58 & 0xffffffff,0,
                                 "OakSave.Profile.FriendEncountersEntry.key");
          if ((char)uVar14 != '\0') {
            if (((local_40 != (longlong *)0x0) &&
                (lVar10 = (**(code **)(*local_40 + 0x20))(), lVar10 == 0)) &&
               (local_40 != (longlong *)0x0)) {
              (**(code **)*local_40)(local_40,1);
            }
            if (0xf < local_50) {
              lVar15 = CONCAT71(uStack_67,local_68);
              uVar14 = local_50 + 1;
              lVar10 = lVar15;
              if (0xfff < uVar14) {
                lVar10 = *(longlong *)(lVar15 + -8);
                uVar14 = local_50 + 0x28;
                if (0x1f < (lVar15 - lVar10) - 8U) goto LAB_141510bea;
              }
              FMemory::operator_delete(lVar10,uVar14);
            }
            goto LAB_14150e320;
          }
          if (((local_40 != (longlong *)0x0) &&
              (uVar14 = (**(code **)(*local_40 + 0x20))(), uVar14 == 0)) &&
             (local_40 != (longlong *)0x0)) {
            uVar14 = (**(code **)*local_40)(local_40,1);
          }
          if (local_50 < 0x10) goto LAB_141510b8d;
          lVar10 = CONCAT71(uStack_67,local_68);
          uVar14 = local_50 + 1;
          if (0xfff < uVar14) {
            lVar15 = lVar10 - *(longlong *)(lVar10 + -8);
            lVar10 = *(longlong *)(lVar10 + -8);
            goto joined_r0x000141510be8;
          }
        }
        else {
          uVar14 = FUN_1439f98b0(param_2);
          if (-1 < (int)uVar14) goto LAB_14150f3fb;
LAB_141510b91:
          if (((local_40 != (longlong *)0x0) &&
              (uVar14 = (**(code **)(*local_40 + 0x20))(), uVar14 == 0)) &&
             (local_40 != (longlong *)0x0)) {
            uVar14 = (**(code **)*local_40)(local_40,1);
          }
          if (local_50 < 0x10) goto LAB_141510b8d;
          lVar10 = CONCAT71(uStack_67,local_68);
          uVar14 = local_50 + 1;
          if (0xfff < uVar14) {
            lVar15 = lVar10 - *(longlong *)(lVar10 + -8);
            lVar10 = *(longlong *)(lVar10 + -8);
joined_r0x000141510be8:
            uVar14 = local_50 + 0x28;
            if (0x1f < lVar15 - 8U) {
LAB_141510bea:
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
        }
        uVar14 = FMemory::operator_delete(lVar10,uVar14);
        goto LAB_141510b8d;
      }
      break;
    case 0x85:
      if (cVar21 == '0') {
        uVar14 = FUN_1414ff090(param_2,param_1 + 0x418);
        goto LAB_14150e3b8;
      }
      break;
    case 0x86:
      if (cVar21 == ':') {
        piVar18 = *(int **)(param_1 + 0x110);
        if (piVar18 == (int *)0x0) {
LAB_14150f522:
          FUN_1439f23d0((undefined8 *)(param_1 + 0x100),*(int *)(param_1 + 0x10c) + 1);
          piVar18 = *(int **)(param_1 + 0x110);
          iVar8 = *piVar18;
LAB_14150f535:
          *piVar18 = iVar8 + 1;
          uVar13 = FUN_141543e40(*(undefined8 *)(param_1 + 0x100));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x110) + 8 + (longlong)*(int *)(param_1 + 0x108) * 8) = uVar13;
          *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x108);
          iVar8 = *piVar18;
          if (iVar8 <= iVar7) {
            if (iVar8 == *(int *)(param_1 + 0x10c)) goto LAB_14150f522;
            goto LAB_14150f535;
          }
          uVar13 = *(undefined8 *)(piVar18 + (longlong)iVar7 * 2 + 2);
          *(int *)(param_1 + 0x108) = iVar7 + 1;
        }
        pbVar12 = (byte *)*param_2;
        if ((pbVar12 < (byte *)param_2[1]) && (*pbVar12 < 0x80)) {
          *param_2 = (ulonglong)(pbVar12 + 1);
        }
        else {
          uVar14 = FUN_1439f98b0(param_2);
          if ((int)uVar14 < 0) goto LAB_141510b8d;
        }
        uVar14 = FUN_1439f8500(param_2,&local_e8);
        if ((local_e4 < 0) || (uVar14 = FUN_14154b660(uVar13,param_2), (char)uVar14 == '\0'))
        goto LAB_141510b8d;
        uVar14 = FUN_1439f84b0(param_2,local_e8);
        goto LAB_14150e3b8;
      }
      break;
    case 0x87:
      if (cVar21 == 'B') {
        piVar18 = *(int **)(param_1 + 0x128);
        if (piVar18 == (int *)0x0) {
LAB_14150f5f7:
          FUN_1439f23d0((undefined8 *)(param_1 + 0x118),*(int *)(param_1 + 0x124) + 1);
          piVar18 = *(int **)(param_1 + 0x128);
          iVar8 = *piVar18;
LAB_14150f60a:
          *piVar18 = iVar8 + 1;
          uVar13 = FUN_141543ef0(*(undefined8 *)(param_1 + 0x118));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x128) + 8 + (longlong)*(int *)(param_1 + 0x120) * 8) = uVar13;
          *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x120);
          iVar8 = *piVar18;
          if (iVar8 <= iVar7) {
            if (iVar8 == *(int *)(param_1 + 0x124)) goto LAB_14150f5f7;
            goto LAB_14150f60a;
          }
          uVar13 = *(undefined8 *)(piVar18 + (longlong)iVar7 * 2 + 2);
          *(int *)(param_1 + 0x120) = iVar7 + 1;
        }
        pbVar12 = (byte *)*param_2;
        if ((pbVar12 < (byte *)param_2[1]) && (*pbVar12 < 0x80)) {
          *param_2 = (ulonglong)(pbVar12 + 1);
        }
        else {
          uVar14 = FUN_1439f98b0(param_2);
          if ((int)uVar14 < 0) goto LAB_141510b8d;
        }
        uVar14 = FUN_1439f8500(param_2,&local_e0);
        if ((local_dc < 0) || (uVar14 = FUN_14154b7b0(uVar13,param_2), (char)uVar14 == '\0'))
        goto LAB_141510b8d;
        uVar14 = FUN_1439f84b0(param_2,local_e0);
        goto LAB_14150e3b8;
      }
      break;
    case 0x88:
      if (cVar21 == 'J') {
        lVar10 = param_1 + 0x130;
LAB_14150f6a7:
        uVar13 = FUN_1439f1a80(lVar10);
        uVar14 = thunk_FUN_1439fa490(param_2,uVar13);
        goto LAB_14150e3b8;
      }
      break;
    case 0x89:
      if (cVar21 == 'R') {
        lVar10 = param_1 + 0x148;
        goto LAB_14150f6a7;
      }
      break;
    case 0x8a:
      if (cVar21 == 'Z') {
        piVar18 = *(int **)(param_1 + 0x170);
        if (piVar18 == (int *)0x0) {
LAB_14150f705:
          FUN_1439f23d0((undefined8 *)(param_1 + 0x160),*(int *)(param_1 + 0x16c) + 1);
          piVar18 = *(int **)(param_1 + 0x170);
          iVar8 = *piVar18;
LAB_14150f718:
          *piVar18 = iVar8 + 1;
          uVar13 = FUN_1415440f0(*(undefined8 *)(param_1 + 0x160));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x170) + 8 + (longlong)*(int *)(param_1 + 0x168) * 8) = uVar13;
          *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + 1;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x168);
          iVar8 = *piVar18;
          if (iVar8 <= iVar7) {
            if (iVar8 == *(int *)(param_1 + 0x16c)) goto LAB_14150f705;
            goto LAB_14150f718;
          }
          uVar13 = *(undefined8 *)(piVar18 + (longlong)iVar7 * 2 + 2);
          *(int *)(param_1 + 0x168) = iVar7 + 1;
        }
        pbVar12 = (byte *)*param_2;
        if ((pbVar12 < (byte *)param_2[1]) && (*pbVar12 < 0x80)) {
          *param_2 = (ulonglong)(pbVar12 + 1);
        }
        else {
          uVar14 = FUN_1439f98b0(param_2);
          if ((int)uVar14 < 0) goto LAB_141510b8d;
        }
        uVar14 = FUN_1439f8500(param_2,&local_d8);
        if ((local_d4 < 0) || (uVar14 = FUN_14154bcc0(uVar13,param_2), (char)uVar14 == '\0'))
        goto LAB_141510b8d;
        uVar14 = FUN_1439f84b0(param_2,local_d8);
        goto LAB_14150e3b8;
      }
      break;
    case 0x8b:
      if (cVar21 == 'b') {
        uVar13 = FUN_1439f1a80(param_1 + 0x178);
        uVar14 = thunk_FUN_1439fa490(param_2,uVar13);
        if ((char)uVar14 == '\0') goto LAB_141510b8d;
        iVar7 = IStreamingManager::GetNumWantingResources(param_1 + 0x178);
        lVar10 = FUN_1439f1d30(param_1 + 0x178,iVar7 + -1);
        uVar14 = *(ulonglong *)(lVar10 + 0x10);
        iVar7 = IStreamingManager::GetNumWantingResources(param_1 + 0x178);
        puVar11 = (undefined8 *)FUN_1439f1d30(param_1 + 0x178,iVar7 + -1);
        if (0xf < (ulonglong)puVar11[3]) {
          puVar11 = (undefined8 *)*puVar11;
        }
        uVar14 = FUN_1439fa7f0(puVar11,uVar14 & 0xffffffff,0,"OakSave.Profile.mail_guids");
        goto LAB_14150e3b8;
      }
      break;
    case 0x8c:
      if (cVar21 == 'j') {
        uVar13 = FUN_1439f1a80(param_1 + 400);
        uVar14 = thunk_FUN_1439fa490(param_2,uVar13);
        if ((char)uVar14 == '\0') goto LAB_141510b8d;
        iVar7 = IStreamingManager::GetNumWantingResources(param_1 + 400);
        lVar10 = FUN_1439f1d30(param_1 + 400,iVar7 + -1);
        uVar14 = *(ulonglong *)(lVar10 + 0x10);
        iVar7 = IStreamingManager::GetNumWantingResources(param_1 + 400);
        puVar11 = (undefined8 *)FUN_1439f1d30(param_1 + 400,iVar7 + -1);
        if (0xf < (ulonglong)puVar11[3]) {
          puVar11 = (undefined8 *)*puVar11;
        }
        uVar14 = FUN_1439fa7f0(puVar11,uVar14 & 0xffffffff,0,"OakSave.Profile.unread_mail_guids");
        goto LAB_14150e3b8;
      }
      break;
    case 0x8d:
      if (cVar21 == 'r') {
        piVar18 = *(int **)(param_1 + 0x1b8);
        if (piVar18 == (int *)0x0) {
LAB_14150f8e8:
          FUN_1439f23d0((undefined8 *)(param_1 + 0x1a8),*(int *)(param_1 + 0x1b4) + 1);
          piVar18 = *(int **)(param_1 + 0x1b8);
          iVar8 = *piVar18;
LAB_14150f8fb:
          *piVar18 = iVar8 + 1;
          uVar13 = FUN_1414fcf50(*(undefined8 *)(param_1 + 0x1a8));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x1b8) + 8 + (longlong)*(int *)(param_1 + 0x1b0) * 8) = uVar13;
          *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x1b0);
          iVar8 = *piVar18;
          if (iVar8 <= iVar7) {
            if (iVar8 == *(int *)(param_1 + 0x1b4)) goto LAB_14150f8e8;
            goto LAB_14150f8fb;
          }
          uVar13 = *(undefined8 *)(piVar18 + (longlong)iVar7 * 2 + 2);
          *(int *)(param_1 + 0x1b0) = iVar7 + 1;
        }
        pbVar12 = (byte *)*param_2;
        if ((pbVar12 < (byte *)param_2[1]) && (*pbVar12 < 0x80)) {
          *param_2 = (ulonglong)(pbVar12 + 1);
        }
        else {
          uVar14 = FUN_1439f98b0(param_2);
          if ((int)uVar14 < 0) goto LAB_141510b8d;
        }
        uVar14 = FUN_1439f8500(param_2,&local_d0);
        if ((local_cc < 0) || (uVar14 = FUN_14150cf00(uVar13,param_2), (char)uVar14 == '\0'))
        goto LAB_141510b8d;
        uVar14 = FUN_1439f84b0(param_2,local_d0);
        goto LAB_14150e3b8;
      }
      break;
    case 0x8e:
      if (cVar21 == 'z') {
        piVar18 = *(int **)(param_1 + 0x1d0);
        if (piVar18 == (int *)0x0) {
LAB_14150f9bd:
          FUN_1439f23d0((undefined8 *)(param_1 + 0x1c0),*(int *)(param_1 + 0x1cc) + 1);
          piVar18 = *(int **)(param_1 + 0x1d0);
          iVar8 = *piVar18;
LAB_14150f9d0:
          *piVar18 = iVar8 + 1;
          uVar13 = FUN_141544150(*(undefined8 *)(param_1 + 0x1c0));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x1d0) + 8 + (longlong)*(int *)(param_1 + 0x1c8) * 8) = uVar13;
          *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + 1;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x1c8);
          iVar8 = *piVar18;
          if (iVar8 <= iVar7) {
            if (iVar8 == *(int *)(param_1 + 0x1cc)) goto LAB_14150f9bd;
            goto LAB_14150f9d0;
          }
          uVar13 = *(undefined8 *)(piVar18 + (longlong)iVar7 * 2 + 2);
          *(int *)(param_1 + 0x1c8) = iVar7 + 1;
        }
        pbVar12 = (byte *)*param_2;
        if ((pbVar12 < (byte *)param_2[1]) && (*pbVar12 < 0x80)) {
          *param_2 = (ulonglong)(pbVar12 + 1);
        }
        else {
          uVar14 = FUN_1439f98b0(param_2);
          if ((int)uVar14 < 0) goto LAB_141510b8d;
        }
        uVar14 = FUN_1439f8500(param_2,&local_c8);
        if ((local_c4 < 0) || (uVar14 = FUN_14154c030(uVar13,param_2), (char)uVar14 == '\0'))
        goto LAB_141510b8d;
        uVar14 = FUN_1439f84b0(param_2,local_c8);
        goto LAB_14150e3b8;
      }
      break;
    case 0x8f:
      if (cVar21 == -0x7e) {
        piVar18 = *(int **)(param_1 + 0x1e8);
        if (piVar18 == (int *)0x0) {
LAB_14150fa92:
          FUN_1439f23d0((undefined8 *)(param_1 + 0x1d8),*(int *)(param_1 + 0x1e4) + 1);
          piVar18 = *(int **)(param_1 + 0x1e8);
          iVar8 = *piVar18;
LAB_14150faa5:
          *piVar18 = iVar8 + 1;
          uVar13 = FUN_141543fd0(*(undefined8 *)(param_1 + 0x1d8));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x1e8) + 8 + (longlong)*(int *)(param_1 + 0x1e0) * 8) = uVar13;
          *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + 1;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x1e0);
          iVar8 = *piVar18;
          if (iVar8 <= iVar7) {
            if (iVar8 == *(int *)(param_1 + 0x1e4)) goto LAB_14150fa92;
            goto LAB_14150faa5;
          }
          uVar13 = *(undefined8 *)(piVar18 + (longlong)iVar7 * 2 + 2);
          *(int *)(param_1 + 0x1e0) = iVar7 + 1;
        }
        pbVar12 = (byte *)*param_2;
        if ((pbVar12 < (byte *)param_2[1]) && (*pbVar12 < 0x80)) {
          *param_2 = (ulonglong)(pbVar12 + 1);
        }
        else {
          uVar14 = FUN_1439f98b0(param_2);
          if ((int)uVar14 < 0) goto LAB_141510b8d;
        }
        uVar14 = FUN_1439f8500(param_2,&local_c0);
        if ((local_bc < 0) || (uVar14 = FUN_14154ba00(uVar13,param_2), (char)uVar14 == '\0'))
        goto LAB_141510b8d;
        uVar14 = FUN_1439f84b0(param_2,local_c0);
        goto LAB_14150e3b8;
      }
      break;
    case 0x90:
      if (cVar21 == -0x76) {
        piVar18 = *(int **)(param_1 + 0x200);
        if (piVar18 == (int *)0x0) {
LAB_14150fb67:
          FUN_1439f23d0((undefined8 *)(param_1 + 0x1f0),*(int *)(param_1 + 0x1fc) + 1);
          piVar18 = *(int **)(param_1 + 0x200);
          iVar8 = *piVar18;
LAB_14150fb7a:
          *piVar18 = iVar8 + 1;
          uVar13 = FUN_141544080(*(undefined8 *)(param_1 + 0x1f0));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x200) + 8 + (longlong)*(int *)(param_1 + 0x1f8) * 8) = uVar13;
          *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + 1;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x1f8);
          iVar8 = *piVar18;
          if (iVar8 <= iVar7) {
            if (iVar8 == *(int *)(param_1 + 0x1fc)) goto LAB_14150fb67;
            goto LAB_14150fb7a;
          }
          uVar13 = *(undefined8 *)(piVar18 + (longlong)iVar7 * 2 + 2);
          *(int *)(param_1 + 0x1f8) = iVar7 + 1;
        }
        pbVar12 = (byte *)*param_2;
        if ((pbVar12 < (byte *)param_2[1]) && (*pbVar12 < 0x80)) {
          *param_2 = (ulonglong)(pbVar12 + 1);
        }
        else {
          uVar14 = FUN_1439f98b0(param_2);
          if ((int)uVar14 < 0) goto LAB_141510b8d;
        }
        uVar14 = FUN_1439f8500(param_2,&local_b8);
        if ((local_b4 < 0) || (uVar14 = FUN_14154bb60(uVar13,param_2), (char)uVar14 == '\0'))
        goto LAB_141510b8d;
        uVar14 = FUN_1439f84b0(param_2,local_b8);
        goto LAB_14150e3b8;
      }
      break;
    case 0x91:
      if (cVar21 == -0x6e) {
        uVar13 = FUN_141515cd0(param_1);
        pbVar12 = (byte *)*param_2;
        if ((pbVar12 < (byte *)param_2[1]) && (*pbVar12 < 0x80)) {
          *param_2 = (ulonglong)(pbVar12 + 1);
        }
        else {
          uVar14 = FUN_1439f98b0(param_2);
          if ((int)uVar14 < 0) goto LAB_141510b8d;
        }
        uVar14 = FUN_1439f8500(param_2,&local_b0);
        if ((local_ac < 0) || (uVar14 = FUN_14150d0b0(uVar13,param_2), (char)uVar14 == '\0'))
        goto LAB_141510b8d;
        uVar14 = FUN_1439f84b0(param_2,local_b0);
        goto LAB_14150e3b8;
      }
      break;
    case 0x92:
      if (cVar21 == -0x66) {
        piVar18 = *(int **)(param_1 + 0x218);
        if (piVar18 == (int *)0x0) {
LAB_14150fcb5:
          FUN_1439f23d0((undefined8 *)(param_1 + 0x208),*(int *)(param_1 + 0x214) + 1);
          piVar18 = *(int **)(param_1 + 0x218);
          iVar8 = *piVar18;
LAB_14150fcc8:
          *piVar18 = iVar8 + 1;
          uVar13 = FUN_141543ce0(*(undefined8 *)(param_1 + 0x208));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x218) + 8 + (longlong)*(int *)(param_1 + 0x210) * 8) = uVar13;
          *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + 1;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x210);
          iVar8 = *piVar18;
          if (iVar8 <= iVar7) {
            if (iVar8 == *(int *)(param_1 + 0x214)) goto LAB_14150fcb5;
            goto LAB_14150fcc8;
          }
          uVar13 = *(undefined8 *)(piVar18 + (longlong)iVar7 * 2 + 2);
          *(int *)(param_1 + 0x210) = iVar7 + 1;
        }
        pbVar12 = (byte *)*param_2;
        if ((pbVar12 < (byte *)param_2[1]) && (*pbVar12 < 0x80)) {
          *param_2 = (ulonglong)(pbVar12 + 1);
        }
        else {
          uVar14 = FUN_1439f98b0(param_2);
          if ((int)uVar14 < 0) goto LAB_141510b8d;
        }
        uVar14 = FUN_1439f8500(param_2,&local_a8);
        if ((local_a4 < 0) || (uVar14 = FUN_14154b3a0(uVar13,param_2), (char)uVar14 == '\0'))
        goto LAB_141510b8d;
        uVar14 = FUN_1439f84b0(param_2,local_a8);
        goto LAB_14150e3b8;
      }
      break;
    case 0x93:
      if (cVar21 == -0x5e) {
        piVar18 = *(int **)(param_1 + 0x230);
        if (piVar18 == (int *)0x0) {
LAB_14150fd87:
          FUN_1439f23d0((undefined8 *)(param_1 + 0x220),*(int *)(param_1 + 0x22c) + 1);
          piVar18 = *(int **)(param_1 + 0x230);
          iVar8 = *piVar18;
LAB_14150fd9a:
          *piVar18 = iVar8 + 1;
          uVar13 = FUN_141543d90(*(undefined8 *)(param_1 + 0x220));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x230) + 8 + (longlong)*(int *)(param_1 + 0x228) * 8) = uVar13;
          *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x228);
          iVar8 = *piVar18;
          if (iVar8 <= iVar7) {
            if (iVar8 == *(int *)(param_1 + 0x22c)) goto LAB_14150fd87;
            goto LAB_14150fd9a;
          }
          uVar13 = *(undefined8 *)(piVar18 + (longlong)iVar7 * 2 + 2);
          *(int *)(param_1 + 0x228) = iVar7 + 1;
        }
        pbVar12 = (byte *)*param_2;
        if ((pbVar12 < (byte *)param_2[1]) && (*pbVar12 < 0x80)) {
          *param_2 = (ulonglong)(pbVar12 + 1);
        }
        else {
          uVar14 = FUN_1439f98b0(param_2);
          if ((int)uVar14 < 0) goto LAB_141510b8d;
        }
        uVar14 = FUN_1439f8500(param_2,&local_a0);
        if ((local_9c < 0) || (uVar14 = FUN_14154b500(uVar13,param_2), (char)uVar14 == '\0'))
        goto LAB_141510b8d;
        uVar14 = FUN_1439f84b0(param_2,local_a0);
        goto LAB_14150e3b8;
      }
      break;
    case 0x95:
      if (cVar21 == -0x50) {
        lVar10 = param_1 + 0x416;
        goto LAB_14150e3b0;
      }
      break;
    case 0x96:
      if (cVar21 == -0x48) {
        lVar10 = param_1 + 0x417;
        goto LAB_14150e3b0;
      }
      break;
    case 0x97:
      if (cVar21 == -0x40) {
        lVar10 = param_1 + 0x450;
        goto LAB_14150e3b0;
      }
      break;
    case 0x98:
      if (cVar21 == -0x33) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x41c);
        goto LAB_14150e3b8;
      }
      break;
    case 0x99:
      if (cVar21 == -0x30) {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x420);
        goto LAB_14150e3b8;
      }
      break;
    case 0x9a:
      if (cVar21 == -0x28) {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x424);
        goto LAB_14150e3b8;
      }
      break;
    case 0x9b:
      if (cVar21 == -0x20) {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x428);
        goto LAB_14150e3b8;
      }
      break;
    case 0x9c:
      if (cVar21 == -0x13) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x42c);
        goto LAB_14150e3b8;
      }
      break;
    case 0x9d:
      if (cVar21 == -0x10) {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x430);
        goto LAB_14150e3b8;
      }
      break;
    case 0x9e:
      if (cVar21 == -8) {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x434);
        goto LAB_14150e3b8;
      }
      break;
    case 0x9f:
      if (cVar21 == '\0') {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x438);
        goto LAB_14150e3b8;
      }
      break;
    case 0xa0:
      if (cVar21 == '\b') {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x43c);
        goto LAB_14150e3b8;
      }
      break;
    case 0xa1:
      if (cVar21 == '\x10') {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x440);
        goto LAB_14150e3b8;
      }
      break;
    case 0xa2:
      if (cVar21 == '\x18') {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x444);
        goto LAB_14150e3b8;
      }
      break;
    case 0xa3:
      if (cVar21 == ' ') {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x448);
        goto LAB_14150e3b8;
      }
      break;
    case 0xa4:
      if (cVar21 == '(') {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x44c);
        goto LAB_14150e3b8;
      }
      break;
    case 0xa5:
      if (cVar21 == '0') {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x454);
        goto LAB_14150e3b8;
      }
      break;
    case 0xa6:
      if (cVar21 == '8') {
        lVar10 = param_1 + 0x451;
        goto LAB_14150e3b0;
      }
      break;
    case 0xa7:
      if (cVar21 == '@') {
        lVar10 = param_1 + 0x452;
        goto LAB_14150e3b0;
      }
      break;
    case 0xa8:
      if (cVar21 == 'H') {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x458);
        goto LAB_14150e3b8;
      }
      break;
    case 0xa9:
      if (cVar21 == 'P') {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x45c);
        goto LAB_14150e3b8;
      }
      break;
    case 0xaa:
      if (cVar21 == 'X') {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x460);
        goto LAB_14150e3b8;
      }
      break;
    case 0xab:
      if (cVar21 == '`') {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x464);
        goto LAB_14150e3b8;
      }
      break;
    case 0xac:
      if (cVar21 == 'h') {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x468);
        goto LAB_14150e3b8;
      }
      break;
    case 0xad:
      if (cVar21 == 'p') {
        lVar10 = param_1 + 0x453;
        goto LAB_14150e3b0;
      }
      break;
    case 0xae:
      if (cVar21 == 'x') {
        lVar10 = param_1 + 0x46c;
        goto LAB_14150e3b0;
      }
      break;
    case 0xaf:
      if (cVar21 == -0x80) {
        lVar10 = param_1 + 0x46d;
        goto LAB_14150e3b0;
      }
      break;
    case 0xb0:
      if (cVar21 == -0x78) {
        lVar10 = param_1 + 0x46e;
        goto LAB_14150e3b0;
      }
      break;
    case 0xb1:
      if (cVar21 == -0x70) {
        lVar10 = param_1 + 0x46f;
        goto LAB_14150e3b0;
      }
      break;
    case 0xb2:
      if (cVar21 == -0x68) {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x470);
        goto LAB_14150e3b8;
      }
      break;
    case 0xb3:
      if (cVar21 == -0x60) {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x474);
        goto LAB_14150e3b8;
      }
      break;
    case 0xb4:
      if (cVar21 == -0x58) {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x478);
        goto LAB_14150e3b8;
      }
      break;
    case 0xb5:
      if (cVar21 == -0x4b) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x47c);
        goto LAB_14150e3b8;
      }
      break;
    case 0xb7:
      if (cVar21 == -0x40) {
        lVar10 = param_1 + 0x494;
        goto LAB_14150e3b0;
      }
      break;
    case 0xbc:
      if (cVar21 == -0x13) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x480);
        goto LAB_14150e3b8;
      }
      break;
    case 0xbd:
      if (cVar21 == -0xb) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x484);
        goto LAB_14150e3b8;
      }
      break;
    case 0xbe:
      if (cVar21 == -8) {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x488);
        goto LAB_14150e3b8;
      }
      break;
    case 0xbf:
      if (cVar21 == '\0') {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x48c);
        goto LAB_14150e3b8;
      }
      break;
    case 0xc0:
      if (cVar21 == '\b') {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x490);
        goto LAB_14150e3b8;
      }
      break;
    case 0xc1:
      if (cVar21 == '\x10') {
        lVar10 = param_1 + 0x495;
        goto LAB_14150e3b0;
      }
      break;
    case 0xc2:
      if (cVar21 == '\x1a') {
        piVar18 = *(int **)(param_1 + 0x248);
        if (piVar18 == (int *)0x0) {
LAB_1415102a7:
          FUN_1439f23d0((undefined8 *)(param_1 + 0x238),*(int *)(param_1 + 0x244) + 1);
          piVar18 = *(int **)(param_1 + 0x248);
          iVar8 = *piVar18;
LAB_1415102ba:
          *piVar18 = iVar8 + 1;
          uVar13 = FUN_141544270(*(undefined8 *)(param_1 + 0x238));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x248) + 8 + (longlong)*(int *)(param_1 + 0x240) * 8) = uVar13;
          *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + 1;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x240);
          iVar8 = *piVar18;
          if (iVar8 <= iVar7) {
            if (iVar8 == *(int *)(param_1 + 0x244)) goto LAB_1415102a7;
            goto LAB_1415102ba;
          }
          uVar13 = *(undefined8 *)(piVar18 + (longlong)iVar7 * 2 + 2);
          *(int *)(param_1 + 0x240) = iVar7 + 1;
        }
        pbVar12 = (byte *)*param_2;
        if ((pbVar12 < (byte *)param_2[1]) && (*pbVar12 < 0x80)) {
          *param_2 = (ulonglong)(pbVar12 + 1);
        }
        else {
          uVar14 = FUN_1439f98b0(param_2);
          if ((int)uVar14 < 0) goto LAB_141510b8d;
        }
        uVar14 = FUN_1439f8500(param_2,&local_98);
        if ((local_94 < 0) || (uVar14 = FUN_14154c390(uVar13,param_2), (char)uVar14 == '\0'))
        goto LAB_141510b8d;
        uVar14 = FUN_1439f84b0(param_2,local_98);
        goto LAB_14150e3b8;
      }
      break;
    case 0xc3:
      if (cVar21 == '\"') {
        uVar13 = FUN_1439f1a80(param_1 + 0x250);
        uVar14 = thunk_FUN_1439fa490(param_2,uVar13);
        if ((char)uVar14 == '\0') goto LAB_141510b8d;
        iVar7 = IStreamingManager::GetNumWantingResources(param_1 + 0x250);
        lVar10 = FUN_1439f1d30(param_1 + 0x250,iVar7 + -1);
        uVar14 = *(ulonglong *)(lVar10 + 0x10);
        iVar7 = IStreamingManager::GetNumWantingResources(param_1 + 0x250);
        puVar11 = (undefined8 *)FUN_1439f1d30(param_1 + 0x250,iVar7 + -1);
        if (0xf < (ulonglong)puVar11[3]) {
          puVar11 = (undefined8 *)*puVar11;
        }
        uVar14 = FUN_1439fa7f0(puVar11,uVar14 & 0xffffffff,0,"OakSave.Profile.seen_news_items");
        goto LAB_14150e3b8;
      }
      break;
    case 0xc4:
      if (cVar21 == '(') {
        lVar10 = param_1 + 0x496;
        goto LAB_14150e3b0;
      }
      break;
    case 0xc5:
      if (cVar21 == '0') {
        lVar10 = param_1 + 0x497;
        goto LAB_14150e3b0;
      }
      break;
    case 0xc6:
      if (cVar21 == '8') {
        lVar10 = param_1 + 0x498;
        goto LAB_14150e3b0;
      }
      break;
    case 199:
      if (cVar21 == '@') {
        lVar10 = param_1 + 0x499;
        goto LAB_14150e3b0;
      }
      break;
    case 200:
      if (cVar21 == 'H') {
        lVar10 = param_1 + 0x49a;
        goto LAB_14150e3b0;
      }
      break;
    case 0xc9:
      if (cVar21 == 'P') {
        uVar14 = FUN_1414ff090(param_2,param_1 + 0x49c);
        goto LAB_14150e3b8;
      }
      break;
    case 0xca:
      if (cVar21 == ']') {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x4a0);
        goto LAB_14150e3b8;
      }
      break;
    case 0xcb:
      if (cVar21 == '`') {
        lVar10 = param_1 + 0x49b;
        goto LAB_14150e3b0;
      }
      break;
    case 0xcc:
      if (cVar21 == 'h') {
        uVar14 = FUN_1414ff090(param_2,param_1 + 0x4a4);
        goto LAB_14150e3b8;
      }
      break;
    case 0xcd:
      if (cVar21 == 'p') {
        lVar10 = param_1 + 0x4ac;
        goto LAB_14150e3b0;
      }
      break;
    case 0xce:
      if (cVar21 == 'x') {
        uVar14 = FUN_1414ff090(param_2,param_1 + 0x4a8);
        goto LAB_14150e3b8;
      }
      break;
    case 0xcf:
      if (cVar21 == -0x7e) {
        piVar18 = *(int **)(param_1 + 0x278);
        if (piVar18 == (int *)0x0) {
LAB_141510512:
          FUN_1439f23d0((undefined8 *)(param_1 + 0x268),*(int *)(param_1 + 0x274) + 1);
          piVar18 = *(int **)(param_1 + 0x278);
          iVar8 = *piVar18;
LAB_141510525:
          *piVar18 = iVar8 + 1;
          uVar13 = FUN_141543bd0(*(undefined8 *)(param_1 + 0x268));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x278) + 8 + (longlong)*(int *)(param_1 + 0x270) * 8) = uVar13;
          *(int *)(param_1 + 0x270) = *(int *)(param_1 + 0x270) + 1;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x270);
          iVar8 = *piVar18;
          if (iVar8 <= iVar7) {
            if (iVar8 == *(int *)(param_1 + 0x274)) goto LAB_141510512;
            goto LAB_141510525;
          }
          uVar13 = *(undefined8 *)(piVar18 + (longlong)iVar7 * 2 + 2);
          *(int *)(param_1 + 0x270) = iVar7 + 1;
        }
        pbVar12 = (byte *)*param_2;
        if ((pbVar12 < (byte *)param_2[1]) && (uVar9 = (ulonglong)*pbVar12, *pbVar12 < 0x80)) {
          *param_2 = (ulonglong)(pbVar12 + 1);
        }
        else {
          uVar14 = FUN_1439f98b0(param_2);
          uVar9 = uVar14 & 0xffffffff;
          if ((int)uVar14 < 0) goto LAB_141510b8d;
        }
        uVar14 = FUN_1439f8500(param_2,&local_90,uVar9);
        if ((local_8c < 0) || (uVar14 = FUN_14154ae20(uVar13,param_2), (char)uVar14 == '\0'))
        goto LAB_141510b8d;
        uVar14 = FUN_1439f84b0(param_2,local_90);
        goto LAB_14150e3b8;
      }
      break;
    case 0xd0:
      if (cVar21 == -0x76) {
        pbVar12 = (byte *)*param_2;
        if ((pbVar12 < (byte *)param_2[1]) && (uVar9 = (ulonglong)*pbVar12, *pbVar12 < 0x80)) {
          *param_2 = (ulonglong)(pbVar12 + 1);
        }
        else {
          uVar14 = FUN_1439f98b0(param_2);
          uVar9 = uVar14 & 0xffffffff;
          if ((int)uVar14 < 0) goto LAB_141510b8d;
        }
        uVar6 = FUN_1439f89d0(param_2,uVar9);
        iVar7 = FUN_1439f8490(param_2);
        while (0 < iVar7) {
          pbVar12 = (byte *)*param_2;
          uVar5 = 0;
          if ((pbVar12 < (byte *)param_2[1]) && (uVar5 = (uint)*pbVar12, *pbVar12 < 0x80)) {
            *param_2 = (ulonglong)(pbVar12 + 1);
          }
          else {
            uVar14 = FUN_1439f8e20(param_2,uVar5);
            uVar5 = (uint)uVar14;
            if ((longlong)uVar14 < 0) goto LAB_141510b8d;
          }
          local_10c = uVar5;
          FUN_1439f19c0(param_1 + 0x280,&local_10c);
          iVar7 = FUN_1439f8490();
        }
        FUN_1439f8990(param_2,uVar6);
        goto LAB_14150e320;
      }
      if (cVar21 == -0x78) {
        pbVar12 = (byte *)*param_2;
        uVar5 = 0;
        if ((pbVar12 < (byte *)param_2[1]) && (uVar5 = (uint)*pbVar12, *pbVar12 < 0x80)) {
          *param_2 = (ulonglong)(pbVar12 + 1);
        }
        else {
          uVar14 = FUN_1439f8e20(param_2,uVar5);
          uVar5 = (uint)uVar14;
          if ((longlong)uVar14 < 0) goto LAB_141510b8d;
        }
        local_114 = uVar5;
        FUN_1439f19c0(param_1 + 0x280,&local_114);
        iVar7 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(param_1 + 0x280);
        iVar8 = FUN_1439f2ae0(param_1 + 0x280);
        iVar7 = iVar7 - iVar8;
        while ((((0 < iVar7 && (1 < (int)param_2[1] - (int)*param_2)) &&
                (pcVar4 = (char *)*param_2, *pcVar4 == -0x76)) && (pcVar4[1] == '\r'))) {
          pbVar12 = (byte *)(pcVar4 + 2);
          uVar5 = 0;
          *param_2 = (ulonglong)pbVar12;
          if ((pbVar12 < (byte *)param_2[1]) && (uVar5 = (uint)*pbVar12, *pbVar12 < 0x80)) {
            *param_2 = (ulonglong)(pcVar4 + 3);
          }
          else {
            uVar14 = FUN_1439f8e20(param_2,uVar5);
            uVar5 = (uint)uVar14;
            if ((longlong)uVar14 < 0) goto LAB_141510b8d;
          }
          local_114 = uVar5;
          FUN_1439f1be0(param_1 + 0x280,&local_114);
          iVar7 = iVar7 + -1;
        }
        goto LAB_14150e320;
      }
      break;
    case 0xd1:
      if (cVar21 == -0x70) {
        lVar10 = param_1 + 0x4ad;
        goto LAB_14150e3b0;
      }
      break;
    case 0xd2:
      if (cVar21 == -0x68) {
        lVar10 = param_1 + 0x4ae;
        goto LAB_14150e3b0;
      }
      break;
    case 0xd3:
      if (cVar21 == -0x60) {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x4b0);
        goto LAB_14150e3b8;
      }
      break;
    case 0xd4:
      if (cVar21 == -0x58) {
        lVar10 = param_1 + 0x4af;
        goto LAB_14150e3b0;
      }
      break;
    case 0xd5:
      if (cVar21 == -0x4e) {
        piVar18 = *(int **)(param_1 + 0x2a8);
        if (piVar18 == (int *)0x0) {
LAB_1415107f2:
          FUN_1439f23d0((undefined8 *)(param_1 + 0x298),*(int *)(param_1 + 0x2a4) + 1);
          piVar18 = *(int **)(param_1 + 0x2a8);
          iVar8 = *piVar18;
LAB_141510805:
          *piVar18 = iVar8 + 1;
          uVar13 = FUN_1414fd720(*(undefined8 *)(param_1 + 0x298));
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x2a8) + 8 + (longlong)*(int *)(param_1 + 0x2a0) * 8) = uVar13;
          *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) + 1;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x2a0);
          iVar8 = *piVar18;
          if (iVar8 <= iVar7) {
            if (iVar8 == *(int *)(param_1 + 0x2a4)) goto LAB_1415107f2;
            goto LAB_141510805;
          }
          uVar13 = *(undefined8 *)(piVar18 + (longlong)iVar7 * 2 + 2);
          *(int *)(param_1 + 0x2a0) = iVar7 + 1;
        }
        pbVar12 = (byte *)*param_2;
        if ((pbVar12 < (byte *)param_2[1]) && (uVar9 = (ulonglong)*pbVar12, *pbVar12 < 0x80)) {
          *param_2 = (ulonglong)(pbVar12 + 1);
        }
        else {
          uVar14 = FUN_1439f98b0(param_2);
          uVar9 = uVar14 & 0xffffffff;
          if ((int)uVar14 < 0) goto LAB_141510b8d;
        }
        uVar14 = FUN_1439f8500(param_2,&local_88,uVar9);
        if ((local_84 < 0) || (uVar14 = FUN_141510fd0(uVar13,param_2), (char)uVar14 == '\0'))
        goto LAB_141510b8d;
        uVar14 = FUN_1439f84b0(param_2,local_88);
        goto LAB_14150e3b8;
      }
      break;
    case 0xd6:
      if (cVar21 == -0x48) {
        uVar14 = FUN_1414ff090(param_2,param_1 + 0x4b4);
        goto LAB_14150e3b8;
      }
      break;
    case 0xd7:
      if (cVar21 == -0x3b) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x4b8);
        goto LAB_14150e3b8;
      }
      break;
    case 0xd8:
      if (cVar21 == -0x33) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x4bc);
        goto LAB_14150e3b8;
      }
      break;
    case 0xd9:
      if (cVar21 == -0x30) {
        uVar14 = FUN_1414ff090(param_2,param_1 + 0x4c0);
        goto LAB_14150e3b8;
      }
      break;
    case 0xda:
      if (cVar21 == -0x23) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x4c4);
        goto LAB_14150e3b8;
      }
      break;
    case 0xdb:
      if (cVar21 == -0x1b) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x4c8);
        goto LAB_14150e3b8;
      }
      break;
    case 0xdc:
      if (cVar21 == -0x18) {
        uVar14 = FUN_1414ff090(param_2,param_1 + 0x4cc);
        goto LAB_14150e3b8;
      }
      break;
    case 0xdd:
      if (cVar21 == -0xb) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x4d0);
        goto LAB_14150e3b8;
      }
      break;
    case 0xde:
      if (cVar21 == -3) {
        uVar14 = FUN_1414ff120(param_2,param_1 + 0x4d4);
        goto LAB_14150e3b8;
      }
      break;
    case 0xdf:
      if (cVar21 == '\0') {
        uVar14 = FUN_1414ff090(param_2,param_1 + 0x4d8);
        goto LAB_14150e3b8;
      }
      break;
    case 0xe1:
      if (cVar21 == '\x10') {
        uVar14 = FUN_1414ff090(param_2,param_1 + 0x4dc);
        goto LAB_14150e3b8;
      }
      break;
    case 0xe2:
      if (cVar21 == '\x18') {
        lVar10 = param_1 + 0x4e0;
        goto LAB_14150e3b0;
      }
      break;
    case 0xe3:
      if (cVar21 == ' ') {
        lVar10 = param_1 + 0x4e1;
        goto LAB_14150e3b0;
      }
      break;
    case 0xe4:
      if (cVar21 == '(') {
        lVar10 = param_1 + 0x4e2;
        goto LAB_14150e3b0;
      }
      break;
    case 0xe5:
      if (cVar21 == '0') {
        lVar10 = param_1 + 0x4e3;
        goto LAB_14150e3b0;
      }
      break;
    case 0xe6:
      if (cVar21 == ':') {
        uVar13 = FUN_141515df0(param_1);
        pbVar12 = (byte *)*param_2;
        if ((pbVar12 < (byte *)param_2[1]) && (uVar14 = (ulonglong)*pbVar12, *pbVar12 < 0x80)) {
          *param_2 = (ulonglong)(pbVar12 + 1);
        }
        else {
          uVar14 = FUN_1439f98b0(param_2);
          if ((int)uVar14 < 0) goto LAB_141510b8d;
        }
        uVar14 = FUN_1439f8500(param_2,&local_80,uVar14 & 0xffffffff);
        if ((local_7c < 0) || (uVar14 = FUN_14154cb10(uVar13,param_2), (char)uVar14 == '\0'))
        goto LAB_141510b8d;
        uVar14 = FUN_1439f84b0(param_2,local_80);
        goto LAB_14150e3b8;
      }
      break;
    case 0xe7:
      if (cVar21 == '@') {
        uVar14 = FUN_1414ff0e0(param_2,param_1 + 0x4e4);
        goto LAB_14150e3b8;
      }
      break;
    case 0xe8:
      if (cVar21 == 'H') {
        lVar10 = param_1 + 0x4e8;
        goto LAB_14150e3b0;
      }
      break;
    case 0xe9:
      if (cVar21 == 'P') {
        uVar14 = FUN_1414ff090(param_2,param_1 + 0x4ec);
        goto LAB_14150e3b8;
      }
    }
switchD_14150e39d_caseD_1d:
    if ((int)uVar14 == 0) {
      return CONCAT71((int7)(uVar9 >> 8),1);
    }
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      FUN_141515d60();
      uVar14 = FUN_143a1e1e0(param_2,uVar14);
    }
    else {
      uVar14 = FUN_143a1e1e0(param_2,uVar14);
    }
LAB_14150e3b8:
    if ((char)uVar14 == '\0') {
      return uVar14;
    }
  } while( true );
}



// FUNCTION 141510fd0 FUN_141510fd0 body=441 status=ok
// SIG undefined FUN_141510fd0(void)

ulonglong FUN_141510fd0(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined *puVar8;
  char cVar9;
  longlong local_18;
  char local_10;
  
LAB_141510ff1:
  pbVar5 = (byte *)*param_2;
  uVar6 = 0;
  if ((pbVar5 < (byte *)param_2[1]) && (uVar6 = (ulonglong)*pbVar5, '\0' < (char)*pbVar5)) {
    pbVar5 = pbVar5 + 1;
    *param_2 = pbVar5;
LAB_141511022:
    iVar3 = (int)(uVar6 >> 3);
    cVar9 = (char)uVar6;
    if (iVar3 == 1) {
      if (cVar9 != '\n') goto LAB_14151113d;
      puVar8 = *(undefined **)(param_1 + 0x10);
      if (puVar8 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x10,&DAT_146ba2f50);
        puVar8 = *(undefined **)(param_1 + 0x10);
      }
      uVar6 = thunk_FUN_1439fa490(param_2,puVar8);
      if ((char)uVar6 == '\0') goto LAB_14151116e;
      plVar7 = *(longlong **)(param_1 + 0x10);
      puVar1 = (ulonglong *)(plVar7 + 2);
      if (0xf < (ulonglong)plVar7[3]) {
        plVar7 = (longlong *)*plVar7;
      }
      uVar6 = FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,0,
                            "OakSave.RecentlyMetPlayer.shift_player_id");
      goto LAB_141511166;
    }
    if (iVar3 != 2) {
      if ((iVar3 != 3) || (cVar9 != '\x18')) goto LAB_14151113d;
      pbVar5 = (byte *)*param_2;
      if ((pbVar5 < (byte *)param_2[1]) && (bVar2 = *pbVar5, bVar2 < 0x80)) {
        *param_2 = pbVar5 + 1;
        *(bool *)(param_1 + 0x20) = bVar2 != 0;
      }
      else {
        uVar6 = FUN_1439f8f00(param_2,&local_18);
        if (local_10 == '\0') goto LAB_14151116e;
        *(bool *)(param_1 + 0x20) = local_18 != 0;
      }
      goto LAB_141510ff1;
    }
    if (cVar9 == '\x12') {
      puVar8 = *(undefined **)(param_1 + 0x18);
      if (puVar8 == &DAT_146ba2f50) {
        FUN_140d2a6b0(param_1 + 0x18,&DAT_146ba2f50);
        puVar8 = *(undefined **)(param_1 + 0x18);
      }
      uVar6 = thunk_FUN_1439fa490(param_2,puVar8);
      if ((char)uVar6 != '\0') {
        plVar7 = *(longlong **)(param_1 + 0x18);
        puVar1 = (ulonglong *)(plVar7 + 2);
        if (0xf < (ulonglong)plVar7[3]) {
          plVar7 = (longlong *)*plVar7;
        }
        uVar6 = FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,0,
                              "OakSave.RecentlyMetPlayer.first_party_player_id");
        goto LAB_141511166;
      }
      goto LAB_14151116e;
    }
  }
  else {
    uVar4 = FUN_1439f8c60(param_2,uVar6);
    uVar6 = (ulonglong)uVar4;
    pbVar5 = (byte *)(ulonglong)(uVar4 - 1);
    if (uVar4 - 1 < 0x7f) goto LAB_141511022;
  }
LAB_14151113d:
  if ((int)uVar6 == 0) {
    return CONCAT71((int7)((ulonglong)pbVar5 >> 8),1);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_141515d60();
  }
  uVar6 = FUN_143a1e1e0(param_2,uVar6);
LAB_141511166:
  if ((char)uVar6 == '\0') {
LAB_14151116e:
    return uVar6 & 0xffffffffffffff00;
  }
  goto LAB_141510ff1;
}



// FUNCTION 141511190 FUN_141511190 body=32 status=ok
// SIG undefined FUN_141511190(void)

longlong FUN_141511190(longlong param_1)

{
  FUN_143a12920();
  FUN_143a124c0(param_1);
  return param_1 + 0x78;
}



// FUNCTION 1415111c0 FUN_1415111c0 body=70 status=ok
// SIG undefined FUN_1415111c0(void)

undefined8 * FUN_1415111c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = &DAT_146ba2f50;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_144c4d058;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1415113b0 FUN_1415113b0 body=112 status=ok
// SIG undefined FUN_1415113b0(void)

undefined8 * FUN_1415113b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(*param_1 + 0x70) != 0) {
    puVar1 = (undefined8 *)FUN_1414fd6a0();
    param_1[7] = (longlong)puVar1;
    return puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = 0;
    puVar1[1] = &DAT_146ba2f50;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_144c4d058;
    param_1[7] = (longlong)puVar1;
    return puVar1;
  }
  param_1[7] = 0;
  return (undefined8 *)0x0;
}



// FUNCTION 141511420 FUN_141511420 body=79 status=ok
// SIG undefined FUN_141511420(void)

void FUN_141511420(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xc0))();
  FUN_1439fb440(1,uVar1,param_2);
  uVar1 = (**(code **)(*param_1 + 200))(param_1);
  FUN_1439fb170(2,uVar1,param_2);
  return;
}



// FUNCTION 141511470 FUN_141511470 body=189 status=ok
// SIG undefined FUN_141511470(void)

void FUN_141511470(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.GearSoldByFriendData.gear_serial_number");
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_1439fac90(2,*(int *)(param_1 + 0x20),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.GearSoldByFriendData.friend_net_id");
    FUN_1439fb5b0(3,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 141511530 FUN_141511530 body=225 status=ok
// SIG undefined FUN_141511530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141511530(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1439fac90(1,*(int *)(param_1 + 0x28),param_2);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_1439fb170(2,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar2 * 8),
                    param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_1439fac90(3,*(int *)(param_1 + 0x2c),param_2);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1439fac90(4,*(int *)(param_1 + 0x30),param_2);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_1439fac90(5,*(int *)(param_1 + 0x34),param_2);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1439fafd0(6,*(longlong *)(param_1 + 0x38),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 141511620 FUN_141511620 body=129 status=ok
// SIG undefined FUN_141511620(void)

void FUN_141511620(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1439fac90(1,*(int *)(param_1 + 0x18),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.GuardianRankRewardSaveGameData.reward_data_path");
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 1415116b0 FUN_1415116b0 body=91 status=ok
// SIG undefined FUN_1415116b0(void)

void FUN_1415116b0(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1439fb720(1,*(int *)(param_1 + 0x18),param_2);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1439fafd0(2,*(longlong *)(param_1 + 0x10),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 141511710 FUN_141511710 body=129 status=ok
// SIG undefined FUN_141511710(void)

void FUN_141511710(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,
                  "OakSave.OakProfileLastInventoryFilterInfo.slot_type_id");
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1439fac90(2,*(int *)(param_1 + 0x18),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 1415117a0 FUN_1415117a0 body=242 status=ok
// SIG undefined FUN_1415117a0(void)

void FUN_1415117a0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar2 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      lVar3 = FUN_1439f1d30(param_1 + 0x10,iVar6);
      uVar1 = *(ulonglong *)(lVar3 + 0x10);
      puVar4 = (undefined8 *)FUN_1439f1d30(param_1 + 0x10,iVar6);
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      FUN_1439fa7f0(puVar4,uVar1 & 0xffffffff,1,"OakSave.OakProfileMenuTutorialInfo.seen_tutorials")
      ;
      uVar5 = FUN_1439f1d30(param_1 + 0x10,iVar6);
      FUN_1439fb440(1,uVar5,param_2);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_1439fa860(2,*(char *)(param_1 + 0x28),param_2);
  }
  if (*(char *)(param_1 + 0x29) != '\0') {
    FUN_1439fa860(3,*(char *)(param_1 + 0x29),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  return;
}



// FUNCTION 1415118a0 FUN_1415118a0 body=191 status=ok
// SIG undefined FUN_1415118a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415118a0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar3 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar3[3]) {
      plVar3 = (longlong *)*plVar3;
    }
    FUN_1439fa7f0(plVar3,*puVar1 & 0xffffffff,1,"OakSave.PlayerInputBinding_Axis.rebind_data_path");
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x28),param_2);
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      FUN_1439fb170(2,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar4 * 8),
                    param_2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 141511960 FUN_141511960 body=143 status=ok
// SIG undefined FUN_141511960(void)

void FUN_141511960(undefined8 *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)param_1[2];
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.PlayerInputBinding_Axis_Key.key_name");
    FUN_1439fb5b0(1,param_1[2],param_2);
  }
  if ((param_1 != &DAT_1468a47f8) && (param_1[3] != 0)) {
    FUN_1439fb170(2,param_1[3],param_2);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    FUN_143a1d7f0(param_1[1] & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 1415119f0 FUN_1415119f0 body=261 status=ok
// SIG undefined FUN_1415119f0(void)

void FUN_1415119f0(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x28);
  puVar1 = (ulonglong *)(plVar7 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar7[3]) {
      plVar7 = (longlong *)*plVar7;
    }
    FUN_1439fa7f0(plVar7,*puVar1 & 0xffffffff,1,"OakSave.PlayerInputBinding_Button.rebind_data_path"
                 );
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x28),param_2);
  }
  iVar3 = IStreamingManager::GetNumWantingResources(param_1 + 0x10);
  iVar8 = 0;
  if (0 < iVar3) {
    do {
      lVar4 = FUN_1439f1d30(param_1 + 0x10,iVar8);
      uVar2 = *(ulonglong *)(lVar4 + 0x10);
      puVar5 = (undefined8 *)FUN_1439f1d30(param_1 + 0x10,iVar8);
      if (0xf < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      FUN_1439fa7f0(puVar5,uVar2 & 0xffffffff,1,"OakSave.PlayerInputBinding_Button.key_names");
      uVar6 = FUN_1439f1d30(param_1 + 0x10,iVar8);
      FUN_1439fb440(2,uVar6,param_2);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar3);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  return;
}



// FUNCTION 141511b00 FUN_141511b00 body=309 status=ok
// SIG undefined FUN_141511b00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141511b00(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x40);
  puVar1 = (ulonglong *)(plVar3 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar3[3]) {
      plVar3 = (longlong *)*plVar3;
    }
    FUN_1439fa7f0(plVar3,*puVar1 & 0xffffffff,1,
                  "OakSave.PlayerInputBinding_Category.category_data_path");
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x40),param_2);
  }
  plVar3 = *(longlong **)(param_1 + 0x48);
  puVar1 = (ulonglong *)(plVar3 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar3[3]) {
      plVar3 = (longlong *)*plVar3;
    }
    FUN_1439fa7f0(plVar3,*puVar1 & 0xffffffff,1,
                  "OakSave.PlayerInputBinding_Category.context_data_path");
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x48),param_2);
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar5 = 0;
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      FUN_1439fb170(3,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar4 * 8),
                    param_2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (uVar2 != 0) {
    do {
      FUN_1439fb170(4,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)uVar5 * 8),
                    param_2);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 141511c40 FUN_141511c40 body=127 status=ok
// SIG undefined FUN_141511c40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141511c40(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_1439fb170(1,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)(int)uVar2 * 8),
                    param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 141511cc0 FUN_141511cc0 body=8630 status=ok
// SIG undefined FUN_141511cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141511cc0(undefined8 *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  char cVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  longlong *plVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  int *piVar14;
  int iVar15;
  byte *pbVar16;
  longlong *plVar17;
  longlong *plVar18;
  byte bVar19;
  ulonglong uVar20;
  longlong *plVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  longlong *plVar25;
  longlong lVar26;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined1 local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong lStack_120;
  ulonglong local_118;
  longlong *local_110;
  longlong lStack_108;
  ulonglong local_100;
  undefined8 *local_f8;
  ulonglong local_e0;
  ulonglong local_c8;
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_138 = param_2;
  local_f8 = param_1;
  if (*(char *)(param_1 + 0x5c) != '\0') {
    FUN_1439fa860(1,*(char *)(param_1 + 0x5c),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2e1) != '\0') {
    FUN_1439fa860(2,*(char *)((longlong)param_1 + 0x2e1),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2e2) != '\0') {
    FUN_1439fa860(3,*(char *)((longlong)param_1 + 0x2e2),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2e3) != '\0') {
    FUN_1439fa860(4,*(char *)((longlong)param_1 + 0x2e3),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2e4) != '\0') {
    FUN_1439fa860(5,*(char *)((longlong)param_1 + 0x2e4),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2e5) != '\0') {
    FUN_1439fa860(6,*(char *)((longlong)param_1 + 0x2e5),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2e6) != '\0') {
    FUN_1439fa860(7,*(char *)((longlong)param_1 + 0x2e6),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2e7) != '\0') {
    FUN_1439fa860(8,*(char *)((longlong)param_1 + 0x2e7),param_2);
  }
  if (*(float *)(param_1 + 0x5d) != 0.0) {
    FUN_1439fae60(9);
  }
  if (*(char *)((longlong)param_1 + 0x2ec) != '\0') {
    FUN_1439fa860(10,*(char *)((longlong)param_1 + 0x2ec),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2ed) != '\0') {
    FUN_1439fa860(0xb,*(char *)((longlong)param_1 + 0x2ed),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2ee) != '\0') {
    FUN_1439fa860(0xc,*(char *)((longlong)param_1 + 0x2ee),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2ef) != '\0') {
    FUN_1439fa860(0xd,*(char *)((longlong)param_1 + 0x2ef),param_2);
  }
  if (*(char *)(param_1 + 0x5e) != '\0') {
    FUN_1439fa860(0xe,*(char *)(param_1 + 0x5e),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2f1) != '\0') {
    FUN_1439fa860(0xf,*(char *)((longlong)param_1 + 0x2f1),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2f2) != '\0') {
    FUN_1439fa860(0x10,*(char *)((longlong)param_1 + 0x2f2),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x2f3) != '\0') {
    FUN_1439fa860(0x11,*(char *)((longlong)param_1 + 0x2f3),param_2);
  }
  if (*(float *)((longlong)param_1 + 0x2f4) != 0.0) {
    FUN_1439fae60(0x12);
  }
  if (*(float *)(param_1 + 0x5f) != 0.0) {
    FUN_1439fae60(0x13);
  }
  if (*(float *)((longlong)param_1 + 0x2fc) != 0.0) {
    FUN_1439fae60(0x14);
  }
  if (*(float *)(param_1 + 0x60) != 0.0) {
    FUN_1439fae60(0x15);
  }
  if (*(char *)((longlong)param_1 + 0x304) != '\0') {
    FUN_1439fa860(0x16,*(char *)((longlong)param_1 + 0x304),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x305) != '\0') {
    FUN_1439fa860(0x17,*(char *)((longlong)param_1 + 0x305),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x306) != '\0') {
    FUN_1439fa860(0x18,*(char *)((longlong)param_1 + 0x306),param_2);
  }
  if (*(float *)(param_1 + 0x61) != 0.0) {
    FUN_1439fae60(0x19);
  }
  if (*(float *)((longlong)param_1 + 0x30c) != 0.0) {
    FUN_1439fae60(0x1a);
  }
  if (*(float *)(param_1 + 0x62) != 0.0) {
    FUN_1439fae60(0x1b);
  }
  if (*(int *)((longlong)param_1 + 0x314) != 0) {
    FUN_1439fb720(0x1c,*(int *)((longlong)param_1 + 0x314),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x307) != '\0') {
    FUN_1439fa860(0x1d,*(char *)((longlong)param_1 + 0x307),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x35c) != '\0') {
    FUN_1439fa860(0x22,*(char *)((longlong)param_1 + 0x35c),param_2);
  }
  if ((param_1 != &DAT_1468a4910) && (param_1[0x58] != 0)) {
    FUN_1439fb170(0x23,param_1[0x58],param_2);
  }
  iVar6 = FUN_1439f2ae0(param_1 + 2);
  if (0 < iVar6) {
    uVar20 = 0x122;
    if ((int)param_2[2] < 5) {
      FUN_1439f9e60(param_2);
    }
    else {
      pbVar3 = (byte *)param_2[1];
      pbVar16 = pbVar3;
      do {
        bVar19 = (byte)uVar20;
        uVar20 = uVar20 >> 7;
        *pbVar16 = bVar19 | 0x80;
        pbVar16 = pbVar16 + 1;
      } while (0x7f < (uint)uVar20);
      *pbVar16 = (byte)uVar20;
      iVar6 = ((int)pbVar16 - (int)pbVar3) + 1;
      param_2[1] = param_2[1] + (longlong)iVar6;
      *(int *)(param_2 + 2) = (int)param_2[2] - iVar6;
    }
    uVar22 = *(uint *)(param_1 + 4);
    uVar20 = (ulonglong)uVar22;
    if ((int)param_2[2] < 5) {
      FUN_1439f9e60(param_2);
    }
    else {
      pbVar3 = (byte *)param_2[1];
      pbVar16 = pbVar3;
      while (bVar19 = (byte)uVar20, 0x7f < uVar22) {
        uVar20 = uVar20 >> 7;
        *pbVar16 = bVar19 | 0x80;
        pbVar16 = pbVar16 + 1;
        uVar22 = (uint)uVar20;
      }
      *pbVar16 = bVar19;
      iVar6 = ((int)pbVar16 - (int)pbVar3) + 1;
      param_2[1] = param_2[1] + (longlong)iVar6;
      *(int *)(param_2 + 2) = (int)param_2[2] - iVar6;
    }
  }
  iVar6 = FUN_1439f2ae0(param_1 + 2);
  plVar18 = (longlong *)0x0;
  plVar17 = plVar18;
  if (0 < iVar6) {
    do {
      puVar7 = (uint *)mu::FPhysicsBody::GetBodyBoneId(param_1 + 2,plVar17);
      uVar22 = *puVar7;
      uVar20 = (ulonglong)uVar22;
      if ((int)param_2[2] < 5) {
        FUN_1439f9e60(param_2);
      }
      else {
        pbVar3 = (byte *)param_2[1];
        pbVar16 = pbVar3;
        while (bVar19 = (byte)uVar20, 0x7f < uVar22) {
          uVar20 = uVar20 >> 7;
          *pbVar16 = bVar19 | 0x80;
          pbVar16 = pbVar16 + 1;
          uVar22 = (uint)uVar20;
        }
        *pbVar16 = bVar19;
        iVar15 = ((int)pbVar16 - (int)pbVar3) + 1;
        param_2[1] = param_2[1] + (longlong)iVar15;
        *(int *)(param_2 + 2) = (int)param_2[2] - iVar15;
      }
      uVar22 = (int)plVar17 + 1;
      plVar17 = (longlong *)(ulonglong)uVar22;
    } while ((int)uVar22 < iVar6);
  }
  if (*(int *)(param_1 + 99) != 0) {
    FUN_1439fb720(0x25,*(int *)(param_1 + 99),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x31c) != 0) {
    FUN_1439fac90(0x26,*(int *)((longlong)param_1 + 0x31c),param_2);
  }
  if (*(int *)(param_1 + 100) != 0) {
    FUN_1439fac90(0x27,*(int *)(param_1 + 100),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x324) != 0) {
    FUN_1439fac90(0x28,*(int *)((longlong)param_1 + 0x324),param_2);
  }
  if (*(float *)(param_1 + 0x65) != 0.0) {
    FUN_1439fae60(0x29);
  }
  if (*(float *)((longlong)param_1 + 0x32c) != 0.0) {
    FUN_1439fae60(0x2a);
  }
  if (*(float *)(param_1 + 0x66) != 0.0) {
    FUN_1439fae60(0x2b);
  }
  if (*(float *)((longlong)param_1 + 0x334) != 0.0) {
    FUN_1439fae60(0x2c);
  }
  if (*(float *)(param_1 + 0x67) != 0.0) {
    FUN_1439fae60(0x2d);
  }
  if (*(float *)((longlong)param_1 + 0x33c) != 0.0) {
    FUN_1439fae60(0x2e);
  }
  if (*(float *)(param_1 + 0x68) != 0.0) {
    FUN_1439fae60(0x2f);
  }
  if (*(float *)((longlong)param_1 + 0x344) != 0.0) {
    FUN_1439fae60(0x30);
  }
  if (*(float *)(param_1 + 0x69) != 0.0) {
    FUN_1439fae60(0x31);
  }
  if (*(float *)((longlong)param_1 + 0x34c) != 0.0) {
    FUN_1439fae60(0x32);
  }
  if (*(float *)(param_1 + 0x6a) != 0.0) {
    FUN_1439fae60(0x33);
  }
  if (*(float *)((longlong)param_1 + 0x354) != 0.0) {
    FUN_1439fae60(0x34);
  }
  if (*(float *)(param_1 + 0x6b) != 0.0) {
    FUN_1439fae60(0x35);
  }
  if (*(float *)(param_1 + 0x6c) != 0.0) {
    FUN_1439fae60(0x36);
  }
  if (*(float *)((longlong)param_1 + 0x364) != 0.0) {
    FUN_1439fae60(0x37);
  }
  if (*(float *)(param_1 + 0x6d) != 0.0) {
    FUN_1439fae60(0x38);
  }
  if (*(float *)((longlong)param_1 + 0x36c) != 0.0) {
    FUN_1439fae60(0x39);
  }
  if (*(float *)(param_1 + 0x6e) != 0.0) {
    FUN_1439fae60(0x3a);
  }
  if (*(char *)((longlong)param_1 + 0x35d) != '\0') {
    FUN_1439fa860(0x3b,*(char *)((longlong)param_1 + 0x35d),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x35e) != '\0') {
    FUN_1439fa860(0x3c,*(char *)((longlong)param_1 + 0x35e),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x35f) != '\0') {
    FUN_1439fa860(0x3d,*(char *)((longlong)param_1 + 0x35f),param_2);
  }
  if (*(float *)((longlong)param_1 + 0x374) != 0.0) {
    FUN_1439fae60(0x3e);
  }
  if (*(float *)(param_1 + 0x6f) != 0.0) {
    FUN_1439fae60(0x3f);
  }
  if (*(float *)((longlong)param_1 + 0x37c) != 0.0) {
    FUN_1439fae60(0x40);
  }
  if (*(float *)(param_1 + 0x70) != 0.0) {
    FUN_1439fae60(0x41);
  }
  if (*(float *)((longlong)param_1 + 900) != 0.0) {
    FUN_1439fae60(0x42);
  }
  if (*(float *)(param_1 + 0x71) != 0.0) {
    FUN_1439fae60(0x43);
  }
  if (*(float *)((longlong)param_1 + 0x38c) != 0.0) {
    FUN_1439fae60(0x44);
  }
  if (*(float *)(param_1 + 0x72) != 0.0) {
    FUN_1439fae60(0x45);
  }
  if (*(float *)((longlong)param_1 + 0x394) != 0.0) {
    FUN_1439fae60(0x46);
  }
  if (*(float *)(param_1 + 0x73) != 0.0) {
    FUN_1439fae60(0x47);
  }
  if (*(float *)((longlong)param_1 + 0x39c) != 0.0) {
    FUN_1439fae60(0x48);
  }
  if (*(float *)(param_1 + 0x74) != 0.0) {
    FUN_1439fae60(0x49);
  }
  if (*(float *)((longlong)param_1 + 0x3a4) != 0.0) {
    FUN_1439fae60(0x4a);
  }
  if (*(float *)(param_1 + 0x75) != 0.0) {
    FUN_1439fae60(0x4b);
  }
  if (*(float *)((longlong)param_1 + 0x3ac) != 0.0) {
    FUN_1439fae60(0x4c);
  }
  if (*(float *)(param_1 + 0x76) != 0.0) {
    FUN_1439fae60(0x4d);
  }
  if (*(float *)((longlong)param_1 + 0x3b4) != 0.0) {
    FUN_1439fae60(0x4e);
  }
  if (*(float *)(param_1 + 0x77) != 0.0) {
    FUN_1439fae60(0x4f);
  }
  if (*(char *)((longlong)param_1 + 0x3cc) != '\0') {
    FUN_1439fa860(0x50,*(char *)((longlong)param_1 + 0x3cc),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x3bc) != 0) {
    FUN_1439fb720(0x51,*(int *)((longlong)param_1 + 0x3bc),param_2);
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_1439fb720(0x52,*(int *)(param_1 + 0x78),param_2);
  }
  if (*(float *)((longlong)param_1 + 0x3c4) != 0.0) {
    FUN_1439fae60(0x53);
  }
  if (*(float *)(param_1 + 0x79) != 0.0) {
    FUN_1439fae60(0x54);
  }
  if (*(char *)((longlong)param_1 + 0x3cd) != '\0') {
    FUN_1439fa860(0x55,*(char *)((longlong)param_1 + 0x3cd),param_2);
  }
  if (*(int *)(param_1 + 0x7a) != 0) {
    FUN_1439fb720(0x56,*(int *)(param_1 + 0x7a),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x3ce) != '\0') {
    FUN_1439fa860(0x57,*(char *)((longlong)param_1 + 0x3ce),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x3cf) != '\0') {
    FUN_1439fa860(0x58,*(char *)((longlong)param_1 + 0x3cf),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x3d4) != '\0') {
    FUN_1439fa860(0x59,*(char *)((longlong)param_1 + 0x3d4),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x3d5) != '\0') {
    FUN_1439fa860(0x5a,*(char *)((longlong)param_1 + 0x3d5),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x3d6) != '\0') {
    FUN_1439fa860(0x5b,*(char *)((longlong)param_1 + 0x3d6),param_2);
  }
  if (*(int *)(param_1 + 0x7b) != 0) {
    FUN_1439fb720(0x5c,*(int *)(param_1 + 0x7b),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x3d7) != '\0') {
    FUN_1439fa860(0x5d,*(char *)((longlong)param_1 + 0x3d7),param_2);
  }
  if (*(float *)((longlong)param_1 + 0x3dc) != 0.0) {
    FUN_1439fae60(0x5e);
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_1439fb720(0x5f,*(int *)(param_1 + 0x7c),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x3e4) != 0) {
    FUN_1439fb720(0x60,*(int *)((longlong)param_1 + 0x3e4),param_2);
  }
  if (*(int *)(param_1 + 0x7d) != 0) {
    FUN_1439fb720(0x61,*(int *)(param_1 + 0x7d),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x414) != '\0') {
    FUN_1439fa860(0x62,*(char *)((longlong)param_1 + 0x414),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x415) != '\0') {
    FUN_1439fa860(99,*(char *)((longlong)param_1 + 0x415),param_2);
  }
  plVar17 = (longlong *)param_1[0x56];
  puVar1 = (ulonglong *)(plVar17 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar17[3]) {
      plVar17 = (longlong *)*plVar17;
    }
    FUN_1439fa7f0(plVar17,*puVar1 & 0xffffffff,1,"OakSave.Profile.last_status_menu_page");
    FUN_1439fb5b0(100,param_1[0x56],param_2);
  }
  uVar22 = *(uint *)(param_1 + 6);
  plVar17 = plVar18;
  if (uVar22 != 0) {
    do {
      FUN_1439fb170(0x65,*(undefined8 *)(param_1[7] + 8 + (longlong)(int)plVar17 * 8),param_2);
      uVar23 = (int)plVar17 + 1;
      plVar17 = (longlong *)(ulonglong)uVar23;
    } while (uVar23 < uVar22);
  }
  if ((param_1 != &DAT_1468a4910) && (param_1[0x59] != 0)) {
    FUN_1439fb170(0x66,param_1[0x59],param_2);
  }
  if (*(int *)((longlong)param_1 + 0x3ec) != 0) {
    FUN_1439fb720(0x67,*(int *)((longlong)param_1 + 0x3ec),param_2);
  }
  if (*(int *)(param_1 + 0x7e) != 0) {
    FUN_1439fb720(0x68,*(int *)(param_1 + 0x7e),param_2);
  }
  plVar17 = (longlong *)param_1[0x57];
  puVar1 = (ulonglong *)(plVar17 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar17[3]) {
      plVar17 = (longlong *)*plVar17;
    }
    FUN_1439fa7f0(plVar17,*puVar1 & 0xffffffff,1,"OakSave.Profile.matchmaking_region");
    FUN_1439fb5b0(0x69,param_1[0x57],param_2);
  }
  if (*(int *)((longlong)param_1 + 0x3f4) != 0) {
    FUN_1439fb720(0x6a,*(int *)((longlong)param_1 + 0x3f4),param_2);
  }
  if (*(int *)(param_1 + 0x7f) != 0) {
    FUN_1439fac90(0x6b,*(int *)(param_1 + 0x7f),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x3fc) != 0) {
    FUN_1439fac90(0x6c,*(int *)((longlong)param_1 + 0x3fc),param_2);
  }
  iVar6 = IStreamingManager::GetNumWantingResources(param_1 + 8);
  plVar17 = plVar18;
  if (0 < iVar6) {
    do {
      lVar8 = FUN_1439f1d30(param_1 + 8,plVar17);
      uVar20 = *(ulonglong *)(lVar8 + 0x10);
      puVar9 = (undefined8 *)FUN_1439f1d30(param_1 + 8,plVar17);
      if (0xf < (ulonglong)puVar9[3]) {
        puVar9 = (undefined8 *)*puVar9;
      }
      FUN_1439fa7f0(puVar9,uVar20 & 0xffffffff,1,"OakSave.Profile.friend_events");
      uVar10 = FUN_1439f1d30(param_1 + 8,plVar17);
      FUN_1439fb440(0x6d,uVar10,param_2);
      uVar22 = (int)plVar17 + 1;
      plVar17 = (longlong *)(ulonglong)uVar22;
    } while ((int)uVar22 < iVar6);
  }
  iVar6 = IStreamingManager::GetNumWantingResources(param_1 + 0xb);
  plVar17 = plVar18;
  if (0 < iVar6) {
    do {
      lVar8 = FUN_1439f1d30(param_1 + 0xb,plVar17);
      uVar20 = *(ulonglong *)(lVar8 + 0x10);
      puVar9 = (undefined8 *)FUN_1439f1d30(param_1 + 0xb,plVar17);
      if (0xf < (ulonglong)puVar9[3]) {
        puVar9 = (undefined8 *)*puVar9;
      }
      FUN_1439fa7f0(puVar9,uVar20 & 0xffffffff,1,"OakSave.Profile.friend_statuses");
      uVar10 = FUN_1439f1d30(param_1 + 0xb,plVar17);
      FUN_1439fb440(0x6e,uVar10,param_2);
      uVar22 = (int)plVar17 + 1;
      plVar17 = (longlong *)(ulonglong)uVar22;
    } while ((int)uVar22 < iVar6);
  }
  if (param_1[0x80] != 0) {
    FUN_1439fafd0(0x6f,param_1[0x80],param_2);
  }
  if (param_1[0x81] != 0) {
    FUN_1439fafd0(0x70,param_1[0x81],param_2);
  }
  if (*(int *)(param_1 + 0x82) != 0) {
    FUN_1439fb720(0x71,*(int *)(param_1 + 0x82),param_2);
  }
  plVar17 = param_1 + 0xe;
  local_148 = plVar17;
  lVar8 = (**(code **)(param_1[0xe] + 0x90))(plVar17);
  if (**(longlong **)(lVar8 + 0x10) != 0) {
    if ((*(char *)((longlong)param_2 + 0x1a) == '\0') ||
       (lVar8 = (**(code **)(*plVar17 + 0x90))(plVar17), **(ulonglong **)(lVar8 + 0x10) < 2)) {
      lVar8 = (**(code **)(*plVar17 + 0x90))(plVar17);
      puVar9 = (undefined8 *)FUN_140d599d0(*(undefined8 *)(lVar8 + 0x10),local_a8);
      plVar13 = (longlong *)*puVar9;
      lStack_120 = puVar9[1];
      local_118 = puVar9[2];
      local_128 = plVar13;
      local_110 = plVar13;
      lStack_108 = lStack_120;
      local_100 = local_118;
      local_c8 = local_118;
      (**(code **)(*plVar17 + 0x90))(plVar17);
      uVar20 = local_118;
      plVar17 = local_128;
      if (plVar13 != (longlong *)0x0) {
        do {
          local_148 = (longlong *)plVar17[4];
          lVar8 = param_1[0x1c];
          local_138 = local_148 + 4;
          if (lVar8 == 0) {
            plVar13 = (longlong *)operator_new(0x40);
            if (plVar13 != (longlong *)0x0) {
              plVar13[3] = 0;
              plVar13[1] = (longlong)&DAT_146ba2f50;
              plVar13[2] = 0;
              *(undefined4 *)(plVar13 + 4) = 0;
              plVar13[5] = 0;
              goto LAB_141512fb4;
            }
            plVar13 = (longlong *)0x0;
          }
          else {
            if (*(longlong *)(lVar8 + 0x70) != 0) {
              FUN_1439f01b0(lVar8,0,0x40);
            }
            plVar13 = (longlong *)FUN_1439efd10(lVar8,0x40);
            plVar13[3] = lVar8;
            plVar13[1] = (longlong)&DAT_146ba2f50;
            plVar13[2] = 0;
            *(undefined4 *)(plVar13 + 4) = 0;
            plVar13[5] = lVar8;
LAB_141512fb4:
            *plVar13 = (longlong)&PTR_FUN_144c4d370;
            plVar13[6] = (longlong)local_148;
            plVar13[7] = (longlong)local_138;
            *(uint *)(plVar13 + 4) = *(uint *)(plVar13 + 4) | 3;
          }
          if (plVar18 != (longlong *)0x0) {
            (**(code **)*plVar18)(plVar18,1);
          }
          FUN_1439fb170(0x85,plVar13,param_2);
          plVar18 = (longlong *)plVar17[4];
          puVar1 = (ulonglong *)(plVar18 + 2);
          if (0xf < (ulonglong)plVar18[3]) {
            plVar18 = (longlong *)*plVar18;
          }
          FUN_1439fa7f0(plVar18,*puVar1 & 0xffffffff,1,"OakSave.Profile.FriendEncountersEntry.key");
          lVar8 = lStack_120;
          plVar18 = (longlong *)plVar17[5];
          if (plVar18 == (longlong *)0x0) {
            local_118 = *(longlong *)(lStack_120 + 8) - 1U & uVar20;
            plVar25 = *(longlong **)(*(longlong *)(lStack_120 + 0x20) + local_118 * 8);
            local_148 = plVar18;
            if (plVar25 != plVar17) {
              if ((plVar25 != (longlong *)0x0) &&
                 (plVar25 != *(longlong **)(*(longlong *)(lStack_120 + 0x20) + (local_118 ^ 1) * 8))
                 ) {
                for (plVar18 = (longlong *)plVar25[5]; plVar18 != (longlong *)0x0;
                    plVar18 = (longlong *)plVar18[5]) {
                  if (plVar18 == plVar17) goto LAB_141513129;
                }
              }
              lVar11 = FUN_140d2cbc0(lStack_120,local_70,plVar17,&local_148);
              uVar20 = *(ulonglong *)(lVar11 + 0x10);
              lVar11 = *(longlong *)(*(longlong *)(lVar8 + 0x20) + uVar20 * 8);
              local_118 = uVar20;
              local_100 = uVar20;
              if ((lVar11 != 0) &&
                 (lVar11 == *(longlong *)(*(longlong *)(lVar8 + 0x20) + (uVar20 ^ 1) * 8))) {
                plVar18 = (longlong *)local_148[2];
                if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
                  cVar2 = *(char *)(*plVar18 + 0x19);
                  plVar17 = (longlong *)*plVar18;
                  while (cVar2 == '\0') {
                    cVar2 = *(char *)(*plVar17 + 0x19);
                    plVar18 = plVar17;
                    plVar17 = (longlong *)*plVar17;
                  }
                }
                else {
                  cVar2 = *(char *)(local_148[1] + 0x19);
                  plVar25 = (longlong *)local_148[1];
                  plVar17 = local_148;
                  while ((plVar18 = plVar25, cVar2 == '\0' && (plVar17 == (longlong *)plVar18[2])))
                  {
                    cVar2 = *(char *)(plVar18[1] + 0x19);
                    plVar25 = (longlong *)plVar18[1];
                    plVar17 = plVar18;
                  }
                }
                if (plVar18 != *(longlong **)(lVar11 + 8)) {
                  plVar18 = (longlong *)plVar18[4];
                  goto LAB_141513158;
                }
              }
            }
LAB_141513129:
            FUN_140d4c050(&local_128);
            uVar20 = local_118;
            plVar18 = local_128;
          }
LAB_141513158:
          local_128 = plVar18;
          plVar17 = local_128;
          (**(code **)(param_1[0xe] + 0x90))(param_1 + 0xe);
          plVar18 = plVar13;
        } while (plVar17 != (longlong *)0x0);
        if (plVar13 != (longlong *)0x0) {
          (**(code **)*plVar13)(plVar13,1);
        }
      }
    }
    else {
      lVar8 = (**(code **)(*plVar17 + 0x90))(plVar17);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = **(ulonglong **)(lVar8 + 0x10);
      uVar10 = SUB168(ZEXT816(8) * auVar4,0);
      if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
        uVar10 = 0xffffffffffffffff;
      }
      lVar11 = operator_new(uVar10);
      local_130 = (longlong *)0x0;
      lVar8 = (**(code **)(*plVar17 + 0x90))(plVar17);
      puVar9 = (undefined8 *)FUN_140d599d0(*(undefined8 *)(lVar8 + 0x10),local_c0);
      plVar13 = (longlong *)*puVar9;
      lStack_120 = puVar9[1];
      local_118 = puVar9[2];
      local_128 = plVar13;
      local_110 = plVar13;
      lStack_108 = lStack_120;
      local_100 = local_118;
      local_e0 = local_118;
      (**(code **)(*plVar17 + 0x90))(plVar17);
      lVar8 = lStack_108;
      plVar17 = local_148;
      uVar20 = local_100;
      plVar25 = plVar18;
      plVar21 = local_110;
      plVar5 = local_130;
      if (plVar13 != (longlong *)0x0) {
LAB_141512b30:
        *(longlong *)(lVar11 + (longlong)plVar25 * 8) = plVar21[4];
        plVar13 = (longlong *)plVar21[5];
        if ((longlong *)plVar21[5] == (longlong *)0x0) {
          uVar20 = *(longlong *)(lVar8 + 8) - 1U & uVar20;
          local_130 = (longlong *)0x0;
          plVar13 = *(longlong **)(*(longlong *)(lVar8 + 0x20) + uVar20 * 8);
          if (plVar13 != plVar21) {
            if ((plVar13 != (longlong *)0x0) &&
               (plVar13 != *(longlong **)(*(longlong *)(lVar8 + 0x20) + (uVar20 ^ 1) * 8))) {
              for (plVar13 = (longlong *)plVar13[5]; plVar13 != (longlong *)0x0;
                  plVar13 = (longlong *)plVar13[5]) {
                if (plVar13 == plVar21) goto LAB_141512ca2;
              }
            }
            lVar12 = FUN_140d2cbc0(lVar8,local_90,plVar21,&local_130);
            lVar26 = *(longlong *)(lVar8 + 0x20);
            uVar20 = *(ulonglong *)(lVar12 + 0x10);
            lVar12 = *(longlong *)(lVar26 + uVar20 * 8);
            local_100 = uVar20;
            if ((lVar12 != 0) && (lVar12 == *(longlong *)(lVar26 + (uVar20 ^ 1) * 8))) {
              plVar13 = (longlong *)local_130[2];
              if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
                cVar2 = *(char *)(*plVar13 + 0x19);
                plVar21 = (longlong *)*plVar13;
                while (cVar2 == '\0') {
                  cVar2 = *(char *)(*plVar21 + 0x19);
                  plVar13 = plVar21;
                  plVar21 = (longlong *)*plVar21;
                }
              }
              else {
                cVar2 = *(char *)(local_130[1] + 0x19);
                plVar5 = (longlong *)local_130[1];
                plVar21 = local_130;
                while ((plVar13 = plVar5, cVar2 == '\0' && (plVar21 == (longlong *)plVar13[2]))) {
                  cVar2 = *(char *)(plVar13[1] + 0x19);
                  plVar5 = (longlong *)plVar13[1];
                  plVar21 = plVar13;
                }
              }
              if (plVar13 == *(longlong **)(lVar12 + 8)) {
                uVar20 = uVar20 + 2;
                plVar13 = plVar18;
                if (uVar20 < *(ulonglong *)(lVar8 + 8)) {
                  plVar21 = (longlong *)(lVar26 + uVar20 * 8);
                  do {
                    lVar12 = *plVar21;
                    if (lVar12 != 0) {
                      if (lVar12 != *(longlong *)(lVar26 + (uVar20 ^ 1) * 8)) goto LAB_141512c85;
                      if ((lVar12 != 0) && (lVar12 == *(longlong *)(lVar26 + (uVar20 ^ 1) * 8)))
                      goto LAB_141512c8b;
                    }
                    uVar20 = uVar20 + 1;
                    plVar21 = plVar21 + 1;
                  } while (uVar20 < *(ulonglong *)(lVar8 + 8));
                }
              }
              else {
                plVar13 = (longlong *)plVar13[4];
              }
              goto LAB_141512cf8;
            }
          }
LAB_141512ca2:
          uVar20 = uVar20 + 1;
          plVar13 = (longlong *)0x0;
          if (uVar20 < *(ulonglong *)(lVar8 + 8)) {
            lVar26 = *(longlong *)(lVar8 + 0x20);
            plVar21 = (longlong *)(lVar26 + uVar20 * 8);
            do {
              lVar12 = *plVar21;
              if (lVar12 != 0) {
                if (lVar12 != *(longlong *)(lVar26 + (uVar20 ^ 1) * 8)) goto LAB_141512c85;
                if ((lVar12 != 0) && (lVar12 == *(longlong *)(lVar26 + (uVar20 ^ 1) * 8)))
                goto LAB_141512c8b;
              }
              uVar20 = uVar20 + 1;
              plVar21 = plVar21 + 1;
            } while (uVar20 < *(ulonglong *)(lVar8 + 8));
          }
        }
        goto LAB_141512cf8;
      }
LAB_141512d24:
      local_130 = plVar5;
      lVar8 = lVar11 + (longlong)plVar25 * 8;
      FUN_1414ff8f0(lVar11,lVar8,lVar8 - lVar11 >> 3,local_140);
      local_148 = (longlong *)0x0;
      plVar17 = plVar18;
      if (plVar25 != (longlong *)0x0) {
        do {
          local_f8 = *(undefined8 **)(lVar11 + (longlong)local_148 * 8);
          lVar8 = param_1[0x1c];
          local_138 = local_f8 + 4;
          if (lVar8 == 0) {
            plVar13 = (longlong *)operator_new(0x40);
            plVar25 = plVar18;
            if (plVar13 != (longlong *)0x0) {
              plVar13[3] = 0;
              plVar13[1] = (longlong)&DAT_146ba2f50;
              plVar13[2] = 0;
              *(undefined4 *)(plVar13 + 4) = 0;
              plVar13[5] = 0;
              goto LAB_141512df2;
            }
          }
          else {
            if (*(longlong *)(lVar8 + 0x70) != 0) {
              FUN_1439f01b0(lVar8,0,0x40);
            }
            plVar13 = (longlong *)FUN_1439efd10(lVar8,0x40);
            plVar13[3] = lVar8;
            plVar13[1] = (longlong)&DAT_146ba2f50;
            plVar13[2] = 0;
            *(undefined4 *)(plVar13 + 4) = 0;
            plVar13[5] = lVar8;
LAB_141512df2:
            *plVar13 = (longlong)&PTR_FUN_144c4d370;
            plVar13[6] = (longlong)local_f8;
            plVar13[7] = (longlong)local_138;
            *(uint *)(plVar13 + 4) = *(uint *)(plVar13 + 4) | 3;
            plVar25 = plVar13;
          }
          if (plVar17 != (longlong *)0x0) {
            (**(code **)*plVar17)(plVar17,1);
          }
          FUN_1439fb170(0x85,plVar25,param_2);
          plVar13 = local_148;
          plVar17 = *(longlong **)(lVar11 + (longlong)local_148 * 8);
          puVar1 = (ulonglong *)(plVar17 + 2);
          if (0xf < (ulonglong)plVar17[3]) {
            plVar17 = (longlong *)*plVar17;
          }
          FUN_1439fa7f0(plVar17,*puVar1 & 0xffffffff,1,"OakSave.Profile.FriendEncountersEntry.key");
          local_148 = (longlong *)((longlong)plVar13 + 1);
          plVar17 = plVar25;
        } while (local_148 < local_130);
        if (plVar25 != (longlong *)0x0) {
          (**(code **)*plVar25)(plVar25,1);
        }
      }
      if (lVar11 != 0) {
        FMemory::operator_delete(lVar11);
      }
    }
  }
  uVar22 = 0;
  if (*(int *)(param_1 + 0x83) != 0) {
    FUN_1439fac90(0x86,*(int *)(param_1 + 0x83),param_2);
  }
  uVar23 = *(uint *)(param_1 + 0x21);
  uVar24 = uVar22;
  if (uVar23 != 0) {
    do {
      FUN_1439fb170(0x87,*(undefined8 *)(param_1[0x22] + 8 + (longlong)(int)uVar24 * 8),param_2);
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar23);
  }
  uVar23 = *(uint *)(param_1 + 0x24);
  uVar24 = uVar22;
  if (uVar23 != 0) {
    do {
      FUN_1439fb170(0x88,*(undefined8 *)(param_1[0x25] + 8 + (longlong)(int)uVar24 * 8),param_2);
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar23);
  }
  iVar6 = IStreamingManager::GetNumWantingResources(param_1 + 0x26);
  uVar23 = uVar22;
  if (0 < iVar6) {
    do {
      uVar10 = FUN_1439f1d30(param_1 + 0x26,uVar23);
      FUN_1439fa930(0x89,uVar10,param_2);
      uVar23 = uVar23 + 1;
    } while ((int)uVar23 < iVar6);
  }
  iVar6 = IStreamingManager::GetNumWantingResources(param_1 + 0x29);
  uVar23 = uVar22;
  if (0 < iVar6) {
    do {
      uVar10 = FUN_1439f1d30(param_1 + 0x29,uVar23);
      FUN_1439fa930(0x8a,uVar10,param_2);
      uVar23 = uVar23 + 1;
    } while ((int)uVar23 < iVar6);
  }
  uVar23 = *(uint *)(param_1 + 0x2d);
  uVar24 = uVar22;
  if (uVar23 != 0) {
    do {
      FUN_1439fb170(0x8b,*(undefined8 *)(param_1[0x2e] + 8 + (longlong)(int)uVar24 * 8),param_2);
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar23);
  }
  iVar6 = IStreamingManager::GetNumWantingResources(param_1 + 0x2f);
  uVar23 = uVar22;
  if (0 < iVar6) {
    do {
      lVar8 = FUN_1439f1d30(param_1 + 0x2f,uVar23);
      uVar20 = *(ulonglong *)(lVar8 + 0x10);
      puVar9 = (undefined8 *)FUN_1439f1d30(param_1 + 0x2f,uVar23);
      if (0xf < (ulonglong)puVar9[3]) {
        puVar9 = (undefined8 *)*puVar9;
      }
      FUN_1439fa7f0(puVar9,uVar20 & 0xffffffff,1,"OakSave.Profile.mail_guids");
      uVar10 = FUN_1439f1d30(param_1 + 0x2f,uVar23);
      FUN_1439fb440(0x8c,uVar10,param_2);
      uVar23 = uVar23 + 1;
    } while ((int)uVar23 < iVar6);
  }
  iVar6 = IStreamingManager::GetNumWantingResources(param_1 + 0x32);
  uVar23 = uVar22;
  if (0 < iVar6) {
    do {
      lVar8 = FUN_1439f1d30(param_1 + 0x32,uVar23);
      uVar20 = *(ulonglong *)(lVar8 + 0x10);
      puVar9 = (undefined8 *)FUN_1439f1d30(param_1 + 0x32,uVar23);
      if (0xf < (ulonglong)puVar9[3]) {
        puVar9 = (undefined8 *)*puVar9;
      }
      FUN_1439fa7f0(puVar9,uVar20 & 0xffffffff,1,"OakSave.Profile.unread_mail_guids");
      uVar10 = FUN_1439f1d30(param_1 + 0x32,uVar23);
      FUN_1439fb440(0x8d,uVar10,param_2);
      uVar23 = uVar23 + 1;
    } while ((int)uVar23 < iVar6);
  }
  uVar23 = *(uint *)(param_1 + 0x36);
  uVar24 = uVar22;
  if (uVar23 != 0) {
    do {
      FUN_1439fb170(0x8e,*(undefined8 *)(param_1[0x37] + 8 + (longlong)(int)uVar24 * 8),param_2);
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar23);
  }
  uVar23 = *(uint *)(param_1 + 0x39);
  uVar24 = uVar22;
  if (uVar23 != 0) {
    do {
      FUN_1439fb170(0x8f,*(undefined8 *)(param_1[0x3a] + 8 + (longlong)(int)uVar24 * 8),param_2);
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar23);
  }
  uVar23 = *(uint *)(param_1 + 0x3c);
  uVar24 = uVar22;
  if (uVar23 != 0) {
    do {
      FUN_1439fb170(0x90,*(undefined8 *)(param_1[0x3d] + 8 + (longlong)(int)uVar24 * 8),param_2);
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar23);
  }
  uVar23 = *(uint *)(param_1 + 0x3f);
  uVar24 = uVar22;
  if (uVar23 != 0) {
    do {
      FUN_1439fb170(0x91,*(undefined8 *)(param_1[0x40] + 8 + (longlong)(int)uVar24 * 8),param_2);
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar23);
  }
  if ((param_1 != &DAT_1468a4910) && (param_1[0x5a] != 0)) {
    FUN_1439fb170(0x92,param_1[0x5a],param_2);
  }
  uVar23 = *(uint *)(param_1 + 0x42);
  uVar24 = uVar22;
  if (uVar23 != 0) {
    do {
      FUN_1439fb170(0x93,*(undefined8 *)(param_1[0x43] + 8 + (longlong)(int)uVar24 * 8),param_2);
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar23);
  }
  uVar23 = *(uint *)(param_1 + 0x45);
  uVar24 = uVar22;
  if (uVar23 != 0) {
    do {
      FUN_1439fb170(0x94,*(undefined8 *)(param_1[0x46] + 8 + (longlong)(int)uVar24 * 8),param_2);
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar23);
  }
  if (*(char *)((longlong)param_1 + 0x416) != '\0') {
    FUN_1439fa860(0x96,*(char *)((longlong)param_1 + 0x416),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x417) != '\0') {
    FUN_1439fa860(0x97,*(char *)((longlong)param_1 + 0x417),param_2);
  }
  if (*(char *)(param_1 + 0x8a) != '\0') {
    FUN_1439fa860(0x98,*(char *)(param_1 + 0x8a),param_2);
  }
  if (*(float *)((longlong)param_1 + 0x41c) != 0.0) {
    FUN_1439fae60(0x99);
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_1439fb720(0x9a,*(int *)(param_1 + 0x84),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x424) != 0) {
    FUN_1439fb720(0x9b,*(int *)((longlong)param_1 + 0x424),param_2);
  }
  if (*(int *)(param_1 + 0x85) != 0) {
    FUN_1439fb720(0x9c,*(int *)(param_1 + 0x85),param_2);
  }
  if (*(float *)((longlong)param_1 + 0x42c) != 0.0) {
    FUN_1439fae60(0x9d);
  }
  if (*(int *)(param_1 + 0x86) != 0) {
    FUN_1439fb720(0x9e,*(int *)(param_1 + 0x86),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x434) != 0) {
    FUN_1439fb720(0x9f,*(int *)((longlong)param_1 + 0x434),param_2);
  }
  if (*(int *)(param_1 + 0x87) != 0) {
    FUN_1439fb720(0xa0,*(int *)(param_1 + 0x87),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x43c) != 0) {
    FUN_1439fb720(0xa1,*(int *)((longlong)param_1 + 0x43c),param_2);
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_1439fb720(0xa2,*(int *)(param_1 + 0x88),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x444) != 0) {
    FUN_1439fb720(0xa3,*(int *)((longlong)param_1 + 0x444),param_2);
  }
  if (*(int *)(param_1 + 0x89) != 0) {
    FUN_1439fb720(0xa4,*(int *)(param_1 + 0x89),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x44c) != 0) {
    FUN_1439fb720(0xa5,*(int *)((longlong)param_1 + 0x44c),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x454) != 0) {
    FUN_1439fb720(0xa6,*(int *)((longlong)param_1 + 0x454),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x451) != '\0') {
    FUN_1439fa860(0xa7,*(char *)((longlong)param_1 + 0x451),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x452) != '\0') {
    FUN_1439fa860(0xa8,*(char *)((longlong)param_1 + 0x452),param_2);
  }
  if (*(int *)(param_1 + 0x8b) != 0) {
    FUN_1439fb720(0xa9,*(int *)(param_1 + 0x8b),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x45c) != 0) {
    FUN_1439fb720(0xaa,*(int *)((longlong)param_1 + 0x45c),param_2);
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_1439fb720(0xab,*(int *)(param_1 + 0x8c),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x464) != 0) {
    FUN_1439fb720(0xac,*(int *)((longlong)param_1 + 0x464),param_2);
  }
  if (*(int *)(param_1 + 0x8d) != 0) {
    FUN_1439fb720(0xad,*(int *)(param_1 + 0x8d),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x453) != '\0') {
    FUN_1439fa860(0xae,*(char *)((longlong)param_1 + 0x453),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x46c) != '\0') {
    FUN_1439fa860(0xaf,*(char *)((longlong)param_1 + 0x46c),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x46d) != '\0') {
    FUN_1439fa860(0xb0,*(char *)((longlong)param_1 + 0x46d),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x46e) != '\0') {
    FUN_1439fa860(0xb1,*(char *)((longlong)param_1 + 0x46e),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x46f) != '\0') {
    FUN_1439fa860(0xb2,*(char *)((longlong)param_1 + 0x46f),param_2);
  }
  if (*(int *)(param_1 + 0x8e) != 0) {
    FUN_1439fb720(0xb3,*(int *)(param_1 + 0x8e),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x474) != 0) {
    FUN_1439fb720(0xb4,*(int *)((longlong)param_1 + 0x474),param_2);
  }
  if (*(int *)(param_1 + 0x8f) != 0) {
    FUN_1439fb720(0xb5,*(int *)(param_1 + 0x8f),param_2);
  }
  if (*(float *)((longlong)param_1 + 0x47c) != 0.0) {
    FUN_1439fae60(0xb6);
  }
  if (*(char *)((longlong)param_1 + 0x494) != '\0') {
    FUN_1439fa860(0xb8,*(char *)((longlong)param_1 + 0x494),param_2);
  }
  if (*(float *)(param_1 + 0x90) != 0.0) {
    FUN_1439fae60(0xbd);
  }
  if (*(float *)((longlong)param_1 + 0x484) != 0.0) {
    FUN_1439fae60(0xbe);
  }
  if (*(int *)(param_1 + 0x91) != 0) {
    FUN_1439fb720(0xbf,*(int *)(param_1 + 0x91),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x48c) != 0) {
    FUN_1439fb720(0xc0,*(int *)((longlong)param_1 + 0x48c),param_2);
  }
  if (*(int *)(param_1 + 0x92) != 0) {
    FUN_1439fb720(0xc1,*(int *)(param_1 + 0x92),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x495) != '\0') {
    FUN_1439fa860(0xc2,*(char *)((longlong)param_1 + 0x495),param_2);
  }
  uVar23 = *(uint *)(param_1 + 0x48);
  uVar24 = uVar22;
  if (uVar23 != 0) {
    do {
      FUN_1439fb170(0xc3,*(undefined8 *)(param_1[0x49] + 8 + (longlong)(int)uVar24 * 8),param_2);
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar23);
  }
  iVar6 = IStreamingManager::GetNumWantingResources(param_1 + 0x4a);
  uVar23 = uVar22;
  if (0 < iVar6) {
    do {
      lVar8 = FUN_1439f1d30(param_1 + 0x4a,uVar23);
      uVar20 = *(ulonglong *)(lVar8 + 0x10);
      puVar9 = (undefined8 *)FUN_1439f1d30(param_1 + 0x4a,uVar23);
      if (0xf < (ulonglong)puVar9[3]) {
        puVar9 = (undefined8 *)*puVar9;
      }
      FUN_1439fa7f0(puVar9,uVar20 & 0xffffffff,1,"OakSave.Profile.seen_news_items");
      uVar10 = FUN_1439f1d30(param_1 + 0x4a,uVar23);
      FUN_1439fb440(0xc4,uVar10,param_2);
      uVar23 = uVar23 + 1;
    } while ((int)uVar23 < iVar6);
  }
  if (*(char *)((longlong)param_1 + 0x496) != '\0') {
    FUN_1439fa860(0xc5,*(char *)((longlong)param_1 + 0x496),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x497) != '\0') {
    FUN_1439fa860(0xc6,*(char *)((longlong)param_1 + 0x497),param_2);
  }
  if (*(char *)(param_1 + 0x93) != '\0') {
    FUN_1439fa860(199,*(char *)(param_1 + 0x93),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x499) != '\0') {
    FUN_1439fa860(200,*(char *)((longlong)param_1 + 0x499),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x49a) != '\0') {
    FUN_1439fa860(0xc9,*(char *)((longlong)param_1 + 0x49a),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x49c) != 0) {
    FUN_1439fac90(0xca,*(int *)((longlong)param_1 + 0x49c),param_2);
  }
  if (*(float *)(param_1 + 0x94) != 0.0) {
    FUN_1439fae60(0xcb);
  }
  if (*(char *)((longlong)param_1 + 0x49b) != '\0') {
    FUN_1439fa860(0xcc,*(char *)((longlong)param_1 + 0x49b),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x4a4) != 0) {
    FUN_1439fac90(0xcd,*(int *)((longlong)param_1 + 0x4a4),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x4ac) != '\0') {
    FUN_1439fa860(0xce,*(char *)((longlong)param_1 + 0x4ac),param_2);
  }
  if (*(int *)(param_1 + 0x95) != 0) {
    FUN_1439fac90(0xcf,*(int *)(param_1 + 0x95),param_2);
  }
  uVar23 = *(uint *)(param_1 + 0x4e);
  uVar24 = uVar22;
  if (uVar23 != 0) {
    do {
      FUN_1439fb170(0xd0,*(undefined8 *)(param_1[0x4f] + 8 + (longlong)(int)uVar24 * 8),param_2);
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar23);
  }
  iVar6 = FUN_1439f2ae0(param_1 + 0x50);
  if (0 < iVar6) {
    FUN_141514ec0(0xd1,2,param_2);
    FUN_141514f80(param_2,*(undefined4 *)(param_1 + 0x52));
  }
  iVar6 = FUN_1439f2ae0(param_1 + 0x50);
  uVar23 = uVar22;
  if (0 < iVar6) {
    do {
      piVar14 = (int *)mu::FPhysicsBody::GetBodyBoneId(param_1 + 0x50,uVar23);
      uVar20 = (ulonglong)*piVar14;
      if ((int)param_2[2] < 10) {
        FUN_1439f9ec0(param_2);
      }
      else {
        pbVar3 = (byte *)param_2[1];
        pbVar16 = pbVar3;
        for (; 0x7f < uVar20; uVar20 = uVar20 >> 7) {
          *pbVar16 = (byte)uVar20 | 0x80;
          pbVar16 = pbVar16 + 1;
        }
        *pbVar16 = (byte)uVar20;
        iVar15 = ((int)pbVar16 - (int)pbVar3) + 1;
        param_2[1] = param_2[1] + (longlong)iVar15;
        *(int *)(param_2 + 2) = (int)param_2[2] - iVar15;
      }
      uVar23 = uVar23 + 1;
    } while ((int)uVar23 < iVar6);
  }
  if (*(char *)((longlong)param_1 + 0x4ad) != '\0') {
    FUN_1439fa860(0xd2,*(char *)((longlong)param_1 + 0x4ad),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x4ae) != '\0') {
    FUN_1439fa860(0xd3,*(char *)((longlong)param_1 + 0x4ae),param_2);
  }
  if (*(int *)(param_1 + 0x96) != 0) {
    FUN_1439fb720(0xd4,*(int *)(param_1 + 0x96),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x4af) != '\0') {
    FUN_1439fa860(0xd5,*(char *)((longlong)param_1 + 0x4af),param_2);
  }
  uVar23 = *(uint *)(param_1 + 0x54);
  if (uVar23 != 0) {
    do {
      FUN_1439fb170(0xd6,*(undefined8 *)(param_1[0x55] + 8 + (longlong)(int)uVar22 * 8),param_2);
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar23);
  }
  if (*(int *)((longlong)param_1 + 0x4b4) != 0) {
    FUN_1439fac90(0xd7,*(int *)((longlong)param_1 + 0x4b4),param_2);
  }
  if (*(float *)(param_1 + 0x97) != 0.0) {
    FUN_1439fae60(0xd8);
  }
  if (*(float *)((longlong)param_1 + 0x4bc) != 0.0) {
    FUN_1439fae60(0xd9);
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_1439fac90(0xda,*(int *)(param_1 + 0x98),param_2);
  }
  if (*(float *)((longlong)param_1 + 0x4c4) != 0.0) {
    FUN_1439fae60(0xdb);
  }
  if (*(float *)(param_1 + 0x99) != 0.0) {
    FUN_1439fae60(0xdc);
  }
  if (*(int *)((longlong)param_1 + 0x4cc) != 0) {
    FUN_1439fac90(0xdd,*(int *)((longlong)param_1 + 0x4cc),param_2);
  }
  if (*(float *)(param_1 + 0x9a) != 0.0) {
    FUN_1439fae60(0xde);
  }
  if (*(float *)((longlong)param_1 + 0x4d4) != 0.0) {
    FUN_1439fae60(0xdf);
  }
  if (*(int *)(param_1 + 0x9b) != 0) {
    FUN_1439fac90(0xe0,*(int *)(param_1 + 0x9b),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x4dc) != 0) {
    FUN_1439fac90(0xe2,*(int *)((longlong)param_1 + 0x4dc),param_2);
  }
  if (*(char *)(param_1 + 0x9c) != '\0') {
    FUN_1439fa860(0xe3,*(char *)(param_1 + 0x9c),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x4e1) != '\0') {
    FUN_1439fa860(0xe4,*(char *)((longlong)param_1 + 0x4e1),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x4e2) != '\0') {
    FUN_1439fa860(0xe5,*(char *)((longlong)param_1 + 0x4e2),param_2);
  }
  if (*(char *)((longlong)param_1 + 0x4e3) != '\0') {
    FUN_1439fa860(0xe6,*(char *)((longlong)param_1 + 0x4e3),param_2);
  }
  if ((param_1 != &DAT_1468a4910) && (param_1[0x5b] != 0)) {
    FUN_1439fb170(0xe7,param_1[0x5b],param_2);
  }
  if (*(int *)((longlong)param_1 + 0x4e4) != 0) {
    FUN_1439fb720(0xe8,*(int *)((longlong)param_1 + 0x4e4),param_2);
  }
  if (*(char *)(param_1 + 0x9d) != '\0') {
    FUN_1439fa860(0xe9,*(char *)(param_1 + 0x9d),param_2);
  }
  if (*(int *)((longlong)param_1 + 0x4ec) != 0) {
    FUN_1439fac90(0xea,*(int *)((longlong)param_1 + 0x4ec),param_2);
  }
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    FUN_143a1d7f0(param_1[1] & 0xfffffffffffffffe,param_2);
  }
  return;
LAB_141512c85:
  plVar13 = *(longlong **)(lVar26 + uVar20 * 8);
  goto LAB_141512cf8;
LAB_141512c8b:
  plVar13 = *(longlong **)(**(longlong **)(*(longlong *)(lVar26 + uVar20 * 8) + 8) + 0x20);
LAB_141512cf8:
  plVar25 = (longlong *)((longlong)plVar25 + 1);
  (**(code **)(*plVar17 + 0x90))(plVar17);
  param_2 = local_138;
  param_1 = local_f8;
  plVar21 = plVar13;
  plVar5 = plVar25;
  if (plVar13 == (longlong *)0x0) goto LAB_141512d24;
  goto LAB_141512b30;
}



// FUNCTION 141513e80 FUN_141513e80 body=190 status=ok
// SIG undefined FUN_141513e80(void)

void FUN_141513e80(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.RecentlyMetPlayer.shift_player_id");
    FUN_1439fb5b0(1,*(undefined8 *)(param_1 + 0x10),param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  puVar1 = (ulonglong *)(plVar2 + 2);
  if (*puVar1 != 0) {
    if (0xf < (ulonglong)plVar2[3]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_1439fa7f0(plVar2,*puVar1 & 0xffffffff,1,"OakSave.RecentlyMetPlayer.first_party_player_id");
    FUN_1439fb5b0(2,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    FUN_1439fa860(3,*(char *)(param_1 + 0x20),param_2);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_143a1d7f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe,param_2);
  }
  return;
}



// FUNCTION 141513f40 BIO_set_shutdown body=4 status=ok
// SIG undefined BIO_set_shutdown(void)

void BIO_set_shutdown(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



// FUNCTION 141513f50 SetPostProcessingQuality body=4 status=ok
// SIG undefined SetPostProcessingQuality(void)

void UGameUserSettings::SetPostProcessingQuality(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



// FUNCTION 141513f70 BIO_set_retry_reason body=4 status=ok
// SIG undefined BIO_set_retry_reason(void)

void BIO_set_retry_reason(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// FUNCTION 141513f80 EC_KEY_set_enc_flags body=4 status=ok
// SIG undefined EC_KEY_set_enc_flags(void)

void EC_KEY_set_enc_flags(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// FUNCTION 141513f90 SetRegisteredNotif body=4 status=ok
// SIG undefined SetRegisteredNotif(void)

void CAkMatrixAwareCtx::SetRegisteredNotif(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 141513fb0 EC_GROUP_set_point_conversion_form body=4 status=ok
// SIG undefined EC_GROUP_set_point_conversion_form(void)

void EC_GROUP_set_point_conversion_form(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



// FUNCTION 141513fd0 FUN_141513fd0 body=154 status=ok
// SIG undefined FUN_141513fd0(void)

void FUN_141513fd0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar1 = *(longlong *)*param_2;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(lVar1 + 0x20);
    if (*(int *)(param_2 + 3) == 9) {
      puVar3 = (undefined8 *)param_2[2];
    }
    else {
      *(undefined4 *)(param_2 + 3) = 9;
      puVar3 = (undefined8 *)operator_new(0x20);
      if (puVar3 == (undefined8 *)0x0) {
        param_2[2] = 0;
      }
      else {
        puVar3[2] = 0;
        puVar3[3] = 0xf;
        *(undefined1 *)puVar3 = 0;
        param_2[2] = puVar3;
      }
    }
    if (puVar3 != puVar2) {
      puVar4 = puVar2;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar4 = (undefined8 *)*puVar2;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (puVar3,puVar4,puVar2[2]);
    }
    param_2[4] = *(longlong *)(lVar1 + 0x20) + 0x20;
  }
  return;
}



// FUNCTION 141514070 FUN_141514070 body=111 status=ok
// SIG undefined FUN_141514070(void)

void FUN_141514070(longlong *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if ((int)param_1[1] != param_2) {
    if (((int)param_1[1] == 9) && (*param_1 != 0)) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _scalar_deleting_destructor_(*param_1,1);
    }
    *(int *)(param_1 + 1) = param_2;
    if (param_2 == 9) {
      puVar1 = (undefined1 *)operator_new(0x20);
      if (puVar1 != (undefined1 *)0x0) {
        *(undefined8 *)(puVar1 + 0x10) = 0;
        *(undefined8 *)(puVar1 + 0x18) = 0xf;
        *puVar1 = 0;
        *param_1 = (longlong)puVar1;
        return;
      }
      *param_1 = 0;
    }
  }
  return;
}



// FUNCTION 1415140e0 FUN_1415140e0 body=229 status=ok
// SIG undefined FUN_1415140e0(void)

longlong FUN_1415140e0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  undefined1 local_20 [24];
  
  uVar5 = 0;
  lVar6 = *(longlong *)(param_1 + 0x10);
  uVar8 = uVar5;
  if (lVar6 != 0) {
    piVar1 = *(int **)(lVar6 + 0x10);
    uVar8 = (longlong)*(int *)(lVar6 + 0xc) << 3;
    if (piVar1 != (int *)0x0) {
      uVar7 = uVar5;
      if (0 < *piVar1) {
        do {
          lVar2 = (**(code **)(**(longlong **)(uVar7 + 8 + (longlong)piVar1) + 0xa0))();
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
          uVar8 = uVar8 + lVar2;
          piVar1 = *(int **)(lVar6 + 0x10);
          uVar7 = uVar7 + 8;
        } while ((int)uVar4 < *piVar1);
      }
      uVar8 = uVar8 + 8;
    }
  }
  lVar6 = uVar8 + 0x18;
  plVar3 = (longlong *)FUN_140d599d0(*(undefined8 *)(param_1 + 0x88),local_20);
  local_38 = *plVar3;
  lStack_30 = plVar3[1];
  local_28 = plVar3[2];
  while (local_38 != 0) {
    lVar2 = (**(code **)(*(longlong *)(*(longlong *)(local_38 + 0x20) + 0x20) + 0xa0))();
    lVar6 = lVar6 + lVar2 + 0x20;
    FUN_141500d20(&local_38);
  }
  return lVar6;
}



// FUNCTION 1415141d0 FUN_1415141d0 body=26 status=ok
// SIG undefined FUN_1415141d0(void)

longlong FUN_1415141d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))();
  return lVar1 + 0x38;
}



// FUNCTION 1415141f0 FUN_1415141f0 body=138 status=ok
// SIG undefined FUN_1415141f0(void)

void FUN_1415141f0(ulonglong *param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  bVar2 = (byte)*param_1;
  if (((bVar2 & 1) != 0) || ((*param_2 & 1) != 0)) {
    if ((*param_2 & 1) == 0) {
      puVar3 = (undefined8 *)FUN_141515d60(param_2);
      bVar2 = (byte)*param_1;
    }
    else {
      puVar3 = (undefined8 *)(*param_2 & 0xfffffffffffffffe);
    }
    if ((bVar2 & 1) == 0) {
      puVar4 = (undefined8 *)FUN_141515d60(param_1);
    }
    else {
      puVar4 = (undefined8 *)(*param_1 & 0xfffffffffffffffe);
    }
    if (puVar4 != puVar3) {
      uVar1 = *puVar4;
      *puVar4 = *puVar3;
      *puVar3 = uVar1;
      uVar1 = puVar4[1];
      puVar4[1] = puVar3[1];
      puVar3[1] = uVar1;
      uVar1 = puVar4[2];
      puVar4[2] = puVar3[2];
      puVar3[2] = uVar1;
    }
  }
  return;
}



// FUNCTION 141514280 FUN_141514280 body=452 status=ok
// SIG undefined FUN_141514280(void)

void FUN_141514280(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  if (*(longlong *)(param_1 + 0x78) == *(longlong *)(param_2 + 0x78)) {
    uVar1 = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)(param_2 + 0x80) = uVar1;
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_2 + 0x88) = uVar2;
  }
  else {
    local_d0 = *(undefined4 *)(param_1 + 0x80);
    local_d8 = 0;
    lVar3 = operator_new(0x30);
    local_c8 = 0;
    if (lVar3 != 0) {
      local_c8 = FUN_1415002e0(lVar3,0,local_res8,0);
    }
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_a8 = 0;
    local_58 = 0;
    local_68 = 0;
    uStack_60 = 0;
    puVar4 = (undefined8 *)FUN_140d599d0(*(undefined8 *)(param_1 + 0x88),local_30);
    local_80 = *puVar4;
    uStack_78 = puVar4[1];
    local_a8 = puVar4[2];
    local_98._0_4_ = (undefined4)local_80;
    local_98._4_4_ = (undefined4)((ulonglong)local_80 >> 0x20);
    uStack_90._0_4_ = (undefined4)uStack_78;
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_78 >> 0x20);
    local_b8 = (undefined4)local_98;
    uStack_b4 = local_98._4_4_;
    uStack_b0 = (undefined4)uStack_90;
    uStack_ac = uStack_90._4_4_;
    local_98 = local_80;
    uStack_90 = uStack_78;
    local_88 = local_a8;
    local_70 = local_a8;
    FUN_1414ffcb0(&local_d8,&local_b8,&local_68);
    FUN_141500c60(param_1 + 0x78,param_2 + 0x78);
    FUN_141500c60(param_2 + 0x78,&local_d8);
    FUN_141514fd0(&local_d8);
    lVar3 = local_c8;
    if ((local_d8 == 0) && (local_c8 != 0)) {
      if (*(longlong *)(local_c8 + 0x20) != 0) {
        FUN_141515150(local_c8);
        if (*(longlong *)(lVar3 + 0x28) == 0) {
          FMemory::operator_delete(*(undefined8 *)(lVar3 + 0x20),*(longlong *)(lVar3 + 8) << 3);
        }
      }
      FMemory::operator_delete(lVar3,0x30);
    }
  }
  uVar1 = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  return;
}



// FUNCTION 141514450 FUN_141514450 body=850 status=ok
// SIG undefined FUN_141514450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141514612) */
/* WARNING: Removing unreachable block (ram,0x000141514637) */

void FUN_141514450(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_128 [32];
  undefined1 local_108 [4];
  undefined4 local_104;
  undefined1 local_100 [32];
  longlong local_e0 [3];
  ulonglong local_c8;
  undefined8 local_c0;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar2 = *(longlong *)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x78);
  local_104 = 0;
  if (lVar2 == 0) {
    uVar5 = FUN_1439eeb00(local_e0,3,
                          "D:\\Oak\\main\\Engine\\Source\\ThirdParty\\protobuf\\3.7.1\\include\\google/protobuf/map_field_inl.h"
                          ,0x143);
    uVar5 = FUN_1439eef00(uVar5,"CHECK failed: this->MapFieldBase::repeated_field_ != NULL: ");
    FUN_1439eec50(local_108,uVar5);
    DsDevice::~DsDevice(local_e0);
  }
  FUN_141514fd0(plVar1);
  puVar13 = (undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8);
  if (*(longlong *)(lVar2 + 0x10) == 0) {
    puVar13 = (undefined8 *)0x0;
  }
  while( true ) {
    puVar10 = (undefined8 *)((longlong)*(int *)(lVar2 + 8) * 8);
    puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8 + (longlong)puVar10);
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      puVar6 = puVar10;
    }
    if (puVar13 == puVar6) break;
    plVar3 = (longlong *)*puVar13;
    puVar6 = (undefined8 *)(**(code **)(*plVar3 + 0xc0))(plVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_e0,puVar6);
    local_c0 = 0;
    plVar7 = (longlong *)FUN_140d5a260(uVar5,local_100,local_e0);
    lVar4 = *plVar7;
    if (0xf < local_c8) {
      uVar11 = local_c8 + 1;
      lVar9 = local_e0[0];
      if (0xfff < uVar11) {
        lVar9 = *(longlong *)(local_e0[0] + -8);
        uVar11 = local_c8 + 0x28;
        if (0x1f < (local_e0[0] - lVar9) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar9,uVar11);
    }
    puVar10 = *(undefined8 **)(lVar4 + 0x20);
    if (puVar10 == (undefined8 *)0x0) {
      lVar9 = *plVar1;
      if (lVar9 == 0) {
        puVar10 = (undefined8 *)operator_new(0x40);
        if (puVar10 == (undefined8 *)0x0) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          basic_string<char,std::char_traits<char>,std::allocator<char>_>(puVar10,puVar6);
          puVar10[4] = &PTR__scalar_deleting_destructor__144c4cbc8;
          puVar10[5] = 0;
          puVar10[7] = 0;
          puVar10[6] = 0;
        }
      }
      else {
        if (lVar9 == 0) {
          puVar10 = (undefined8 *)operator_new(0x40);
        }
        else {
          if (*(longlong *)(lVar9 + 0x70) != 0) {
            FUN_1439f01b0(lVar9,0,0x40);
          }
          puVar10 = (undefined8 *)FUN_1439efd10(lVar9,0x40);
        }
        lVar9 = *plVar1;
        puVar10[2] = 0;
        puVar10[3] = 0xf;
        *(undefined1 *)puVar10 = 0;
        FUN_140d1e160(lVar9,puVar10);
        lVar9 = *plVar1;
        puVar10[4] = &PTR__scalar_deleting_destructor__144c4cbc8;
        puVar10[5] = 0;
        puVar10[7] = 0;
        puVar10[6] = 0;
        FUN_140d1e180(lVar9);
        if (puVar10 != puVar6) {
          puVar12 = puVar6;
          if (0xf < (ulonglong)puVar6[3]) {
            puVar12 = (undefined8 *)*puVar6;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (puVar10,puVar12,puVar6[2]);
        }
      }
      *(undefined8 **)(lVar4 + 0x20) = puVar10;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar3 + 200))(plVar3);
    if (puVar6 != puVar10 + 4) {
      puVar10[6] = 0;
      *(undefined4 *)(puVar10 + 7) = 0;
      if (((*(byte *)(puVar10 + 5) & 1) != 0) &&
         (*(longlong *)(puVar10[5] & 0xfffffffffffffffe) !=
          ((longlong *)(puVar10[5] & 0xfffffffffffffffe))[1])) {
        FUN_1439fbee0();
      }
      if ((*(byte *)(puVar6 + 1) & 1) != 0) {
        uVar11 = puVar6[1];
        if ((*(byte *)(puVar10 + 5) & 1) == 0) {
          uVar8 = FUN_141515d60(puVar10 + 5);
        }
        else {
          uVar8 = puVar10[5] & 0xfffffffffffffffe;
        }
        FUN_1439fc150(uVar8,uVar11 & 0xfffffffffffffffe);
      }
      if (puVar6[2] != 0) {
        puVar10[6] = puVar6[2];
      }
      if (*(int *)(puVar6 + 3) != 0) {
        *(int *)(puVar10 + 7) = *(int *)(puVar6 + 3);
      }
    }
    puVar13 = puVar13 + 1;
  }
  return;
}



// FUNCTION 1415147b0 FUN_1415147b0 body=1070 status=ok
// SIG undefined FUN_1415147b0(void)

void FUN_1415147b0(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  longlong local_58;
  undefined1 local_50 [40];
  
  plVar8 = *(longlong **)(param_1 + 0x10);
  local_58 = param_1;
  if (plVar8 == (longlong *)0x0) {
    lVar10 = *(longlong *)(param_1 + 8);
    if (lVar10 == 0) {
      plVar8 = (longlong *)operator_new(0x18);
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)0x0;
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
      else {
        *plVar8 = 0;
        plVar8[1] = 0;
        plVar8[2] = 0;
        *(longlong **)(param_1 + 0x10) = plVar8;
      }
    }
    else {
      if (*(longlong *)(lVar10 + 0x70) != 0) {
        FUN_1439f01b0(lVar10,0,0x18);
      }
      plVar8 = (longlong *)FUN_1439efdc0(lVar10,0x18,FUN_1414ffbe0);
      *plVar8 = lVar10;
      plVar8[1] = 0;
      plVar8[2] = 0;
      *(longlong **)(param_1 + 0x10) = plVar8;
    }
  }
  FUN_141504400(plVar8);
  plVar9 = (longlong *)FUN_140d599d0(*(undefined8 *)(param_1 + 0x88),&local_70);
  lVar10 = *plVar9;
  lVar3 = plVar9[1];
  local_60 = plVar9[2];
  local_88._0_4_ = (undefined4)lVar10;
  local_88._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
  uStack_80._0_4_ = (undefined4)lVar3;
  uStack_80._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uVar13 = local_60;
  local_78 = local_60;
  lVar11 = lVar10;
  local_70 = (undefined4)local_88;
  uStack_6c = local_88._4_4_;
  uStack_68 = (undefined4)uStack_80;
  uStack_64 = uStack_80._4_4_;
joined_r0x00014151489e:
  while( true ) {
    do {
      uStack_80 = lVar3;
      local_88 = lVar11;
      lVar6 = lVar10;
      if (lVar6 == 0) {
        return;
      }
      lVar10 = (**(code **)(DAT_1468a4e08 + 0x10))(&DAT_1468a4e08,*(undefined8 *)(param_1 + 8));
      FUN_1414fce10(plVar8,lVar10,local_98);
      puVar2 = *(undefined8 **)(lVar6 + 0x20);
      *(uint *)(lVar10 + 0x20) = *(uint *)(lVar10 + 0x20) | 1;
      puVar14 = *(undefined8 **)(lVar10 + 8);
      if (puVar14 == (undefined8 *)&DAT_146ba2f50) {
        FUN_141505a20(lVar10 + 8,*(undefined8 *)(lVar10 + 0x18),&DAT_146ba2f50);
        puVar14 = *(undefined8 **)(lVar10 + 8);
      }
      if (puVar14 != puVar2) {
        puVar15 = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          puVar15 = (undefined8 *)*puVar2;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar14,puVar15,puVar2[2]);
      }
      lVar3 = *(longlong *)(lVar6 + 0x20);
      *(uint *)(lVar10 + 0x20) = *(uint *)(lVar10 + 0x20) | 2;
      lVar11 = *(longlong *)(lVar10 + 0x10);
      if (lVar11 == 0) {
        lVar11 = FUN_1414fd160(*(undefined8 *)(lVar10 + 0x18));
        *(longlong *)(lVar10 + 0x10) = lVar11;
      }
      if (lVar3 + 0x20 != lVar11) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        *(undefined4 *)(lVar11 + 0x18) = 0;
        if (((*(byte *)(lVar11 + 8) & 1) != 0) &&
           (plVar9 = (longlong *)(*(ulonglong *)(lVar11 + 8) & 0xfffffffffffffffe),
           *plVar9 != plVar9[1])) {
          FUN_1439fbee0();
        }
        if ((*(byte *)(lVar3 + 0x28) & 1) != 0) {
          uVar4 = *(ulonglong *)(lVar3 + 0x28);
          if ((*(byte *)(lVar11 + 8) & 1) == 0) {
            uVar12 = FUN_141515d60(lVar11 + 8);
          }
          else {
            uVar12 = *(ulonglong *)(lVar11 + 8) & 0xfffffffffffffffe;
          }
          FUN_1439fc150(uVar12,uVar4 & 0xfffffffffffffffe);
        }
        if (*(longlong *)(lVar3 + 0x30) != 0) {
          *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar3 + 0x30);
        }
        if (*(int *)(lVar3 + 0x38) != 0) {
          *(int *)(lVar11 + 0x18) = *(int *)(lVar3 + 0x38);
        }
      }
      param_1 = local_58;
      lVar10 = *(longlong *)(lVar6 + 0x28);
      lVar11 = local_88;
      lVar3 = uStack_80;
    } while (*(longlong *)(lVar6 + 0x28) != 0);
    lVar3 = CONCAT44(uStack_64,uStack_68);
    local_90 = (longlong *)0x0;
    uVar13 = *(longlong *)(lVar3 + 8) - 1U & uVar13;
    lVar10 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar13 * 8);
    if (lVar10 == lVar6) break;
    if ((lVar10 != 0) && (lVar10 != *(longlong *)(*(longlong *)(lVar3 + 0x20) + (uVar13 ^ 1) * 8)))
    {
      for (lVar10 = *(longlong *)(lVar10 + 0x28); lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x28)
          ) {
        if (lVar10 == lVar6) goto LAB_141514b50;
      }
    }
    lVar11 = FUN_140d2cbc0(lVar3,local_50,lVar6,&local_90);
    lVar10 = *(longlong *)(lVar3 + 0x20);
    uVar13 = *(ulonglong *)(lVar11 + 0x10);
    lVar11 = *(longlong *)(lVar10 + uVar13 * 8);
    local_78 = uVar13;
    if ((lVar11 == 0) || (lVar11 != *(longlong *)(lVar10 + (uVar13 ^ 1) * 8))) break;
    plVar9 = (longlong *)local_90[2];
    if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0x19);
      plVar5 = (longlong *)*plVar9;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x19);
        plVar9 = plVar5;
        plVar5 = (longlong *)*plVar5;
      }
    }
    else {
      cVar1 = *(char *)(local_90[1] + 0x19);
      plVar7 = (longlong *)local_90[1];
      plVar5 = local_90;
      while ((plVar9 = plVar7, cVar1 == '\0' && (plVar5 == (longlong *)plVar9[2]))) {
        cVar1 = *(char *)(plVar9[1] + 0x19);
        plVar7 = (longlong *)plVar9[1];
        plVar5 = plVar9;
      }
    }
    if (plVar9 == *(longlong **)(lVar11 + 8)) {
      uVar13 = uVar13 + 2;
      if (*(ulonglong *)(lVar3 + 8) <= uVar13) {
        return;
      }
      plVar9 = (longlong *)(lVar10 + uVar13 * 8);
      do {
        lVar11 = *plVar9;
        if (lVar11 != 0) {
          if (lVar11 != *(longlong *)(lVar10 + (uVar13 ^ 1) * 8)) goto LAB_141514b99;
          if ((lVar11 != 0) && (lVar11 == *(longlong *)(lVar10 + (uVar13 ^ 1) * 8)))
          goto LAB_141514b39;
        }
        uVar13 = uVar13 + 1;
        plVar9 = plVar9 + 1;
        if (*(ulonglong *)(lVar3 + 8) <= uVar13) {
          return;
        }
      } while( true );
    }
    param_1 = local_58;
    lVar10 = plVar9[4];
    lVar11 = local_88;
    lVar3 = uStack_80;
  }
LAB_141514b50:
  uVar13 = uVar13 + 1;
  if (*(ulonglong *)(lVar3 + 8) <= uVar13) {
    return;
  }
  lVar10 = *(longlong *)(lVar3 + 0x20);
  plVar9 = (longlong *)(lVar10 + uVar13 * 8);
  do {
    lVar11 = *plVar9;
    if (lVar11 != 0) {
      if (lVar11 != *(longlong *)(lVar10 + (uVar13 ^ 1) * 8)) break;
      if ((lVar11 != 0) && (lVar11 == *(longlong *)(lVar10 + (uVar13 ^ 1) * 8))) goto LAB_141514b39;
    }
    uVar13 = uVar13 + 1;
    plVar9 = plVar9 + 1;
    if (*(ulonglong *)(lVar3 + 8) <= uVar13) {
      return;
    }
  } while( true );
LAB_141514b99:
  param_1 = local_58;
  lVar10 = *(longlong *)(lVar10 + uVar13 * 8);
  lVar11 = local_88;
  lVar3 = uStack_80;
  goto joined_r0x00014151489e;
LAB_141514b39:
  param_1 = local_58;
  lVar10 = *(longlong *)(**(longlong **)(*(longlong *)(lVar10 + uVar13 * 8) + 8) + 0x20);
  lVar11 = local_88;
  lVar3 = uStack_80;
  goto joined_r0x00014151489e;
}



// FUNCTION 141514be0 FUN_141514be0 body=180 status=ok
// SIG undefined FUN_141514be0(void)

void FUN_141514be0(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  puVar4 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x38) + 0xc0))();
  puVar1 = (undefined8 *)(param_1 + 0x10);
  if (puVar1 != puVar4) {
    puVar7 = puVar4;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar7 = (undefined8 *)*puVar4;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (puVar1,puVar7,puVar4[2]);
  }
  uVar5 = FUN_140d25830(*(undefined8 *)(param_1 + 8),puVar1);
  lVar3 = *(longlong *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) | 2;
  lVar6 = *(longlong *)(lVar3 + 0x10);
  if (lVar6 == 0) {
    lVar6 = FUN_1414fd160(*(undefined8 *)(lVar3 + 0x18));
    *(longlong *)(lVar3 + 0x10) = lVar6;
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (lVar6 != lVar3) {
    FUN_1415141f0(lVar3 + 8,lVar6 + 8);
    uVar5 = *(undefined8 *)(lVar3 + 0x10);
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar6 + 0x10);
    *(undefined8 *)(lVar6 + 0x10) = uVar5;
    uVar2 = *(undefined4 *)(lVar3 + 0x18);
    *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = uVar2;
  }
  return;
}



// FUNCTION 141514ca0 FUN_141514ca0 body=108 status=ok
// SIG undefined FUN_141514ca0(void)

byte * FUN_141514ca0(int param_1,byte param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  
  for (uVar3 = param_1 * 8; 0x7f < uVar3; uVar3 = uVar3 >> 7) {
    *param_3 = (byte)uVar3 | 0x80;
    param_3 = param_3 + 1;
  }
  uVar2 = (uint)param_2;
  pbVar4 = param_3 + 1;
  *param_3 = (byte)uVar3;
  if (0x7f < param_2) {
    do {
      bVar1 = (byte)uVar2;
      uVar2 = uVar2 >> 7;
      *pbVar4 = bVar1 | 0x80;
      pbVar4 = pbVar4 + 1;
    } while (0x7f < uVar2);
  }
  *pbVar4 = (byte)uVar2;
  return pbVar4 + 1;
}



// FUNCTION 141514d10 FUN_141514d10 body=54 status=ok
// SIG undefined FUN_141514d10(void)

byte * FUN_141514d10(int param_1,undefined4 param_2,byte *param_3)

{
  uint uVar1;
  
  for (uVar1 = param_1 * 8 | 5; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_3 = (byte)uVar1 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar1;
  *(undefined4 *)(param_3 + 1) = param_2;
  return param_3 + 5;
}



// FUNCTION 141514d50 FUN_141514d50 body=46 status=ok
// SIG undefined FUN_141514d50(void)

byte * FUN_141514d50(int param_1,byte *param_2)

{
  ulonglong uVar1;
  
  for (uVar1 = (ulonglong)param_1; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_2 = (byte)uVar1 | 0x80;
    param_2 = param_2 + 1;
  }
  *param_2 = (byte)uVar1;
  return param_2 + 1;
}



// FUNCTION 141514d80 FUN_141514d80 body=94 status=ok
// SIG undefined FUN_141514d80(void)

byte * FUN_141514d80(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2;
  for (uVar2 = param_1 * 8; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *param_3 = (byte)uVar2 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar2;
  while( true ) {
    param_3 = param_3 + 1;
    bVar1 = (byte)uVar3;
    if (uVar3 < 0x80) break;
    uVar3 = uVar3 >> 7;
    *param_3 = bVar1 | 0x80;
  }
  *param_3 = bVar1;
  return param_3 + 1;
}



// FUNCTION 141514de0 FUN_141514de0 body=46 status=ok
// SIG undefined FUN_141514de0(void)

byte * FUN_141514de0(ulonglong param_1,byte *param_2)

{
  for (; 0x7f < param_1; param_1 = param_1 >> 7) {
    *param_2 = (byte)param_1 | 0x80;
    param_2 = param_2 + 1;
  }
  *param_2 = (byte)param_1;
  return param_2 + 1;
}



// FUNCTION 141514e10 FUN_141514e10 body=94 status=ok
// SIG undefined FUN_141514e10(void)

byte * FUN_141514e10(int param_1,ulonglong param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  
  for (uVar1 = param_1 * 8; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_3 = (byte)uVar1 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar1;
  while( true ) {
    param_3 = param_3 + 1;
    bVar2 = (byte)param_2;
    if (param_2 < 0x80) break;
    param_2 = param_2 >> 7;
    *param_3 = bVar2 | 0x80;
  }
  *param_3 = bVar2;
  return param_3 + 1;
}



// FUNCTION 141514e70 FUN_141514e70 body=69 status=ok
// SIG undefined FUN_141514e70(void)

void FUN_141514e70(int param_1,undefined8 param_2,byte *param_3)

{
  uint uVar1;
  
  for (uVar1 = param_1 * 8 | 2; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_3 = (byte)uVar1 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar1;
  FUN_1439f9df0(param_2,param_3 + 1);
  return;
}



// FUNCTION 141514ec0 FUN_141514ec0 body=81 status=ok
// SIG undefined FUN_141514ec0(void)

void FUN_141514ec0(int param_1,uint param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  ulonglong uVar5;
  
  param_2 = param_1 * 8 | param_2;
  uVar5 = (ulonglong)param_2;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_1439f9e60(param_3);
    return;
  }
  pbVar1 = *(byte **)(param_3 + 8);
  pbVar3 = pbVar1;
  while (bVar4 = (byte)uVar5, 0x7f < param_2) {
    uVar5 = uVar5 >> 7;
    *pbVar3 = bVar4 | 0x80;
    pbVar3 = pbVar3 + 1;
    param_2 = (uint)uVar5;
  }
  *pbVar3 = bVar4;
  iVar2 = ((int)pbVar3 - (int)pbVar1) + 1;
  *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) + (longlong)iVar2;
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
  return;
}



// FUNCTION 141514f20 FUN_141514f20 body=92 status=ok
// SIG undefined FUN_141514f20(void)

byte * FUN_141514f20(int param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  
  for (uVar2 = param_1 * 8; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *param_3 = (byte)uVar2 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar2;
  while( true ) {
    param_3 = param_3 + 1;
    bVar1 = (byte)param_2;
    if (param_2 < 0x80) break;
    param_2 = param_2 >> 7;
    *param_3 = bVar1 | 0x80;
  }
  *param_3 = bVar1;
  return param_3 + 1;
}



// FUNCTION 141514f80 FUN_141514f80 body=80 status=ok
// SIG undefined FUN_141514f80(void)

void FUN_141514f80(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  
  if (4 < *(int *)(param_1 + 0x10)) {
    pbVar1 = *(byte **)(param_1 + 8);
    uVar3 = (uint)param_2;
    pbVar5 = pbVar1;
    while (bVar2 = (byte)param_2, 0x7f < uVar3) {
      param_2 = param_2 >> 7 & 0x1ffffff;
      *pbVar5 = bVar2 | 0x80;
      pbVar5 = pbVar5 + 1;
      uVar3 = (uint)param_2;
    }
    *pbVar5 = bVar2;
    iVar4 = ((int)pbVar5 - (int)pbVar1) + 1;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + (longlong)iVar4;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - iVar4;
    return;
  }
  FUN_1439f9e60();
  return;
}



// FUNCTION 141514fd0 FUN_141514fd0 body=379 status=ok
// SIG undefined FUN_141514fd0(void)

void FUN_141514fd0(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  ulonglong uVar8;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_38 [2] [16];
  
  pauVar6 = (undefined1 (*) [16])FUN_140d599d0(param_1[2],local_38);
  auVar1 = *pauVar6;
  local_78 = auVar1._0_4_;
  uStack_74 = auVar1._4_4_;
  uStack_70 = auVar1._8_4_;
  uStack_6c = auVar1._12_4_;
  lVar4 = auVar1._0_8_;
  uVar5 = *(undefined8 *)pauVar6[1];
  do {
    if (lVar4 == 0) {
      return;
    }
    local_68 = uVar5;
    if ((*param_1 == 0) && (plVar2 = *(longlong **)(lVar4 + 0x20), plVar2 != (longlong *)0x0)) {
      plVar2[4] = (longlong)&PTR__scalar_deleting_destructor__144c4cbc8;
      FUN_1415008e0(plVar2 + 5);
      plVar2[4] = (longlong)google::protobuf::MessageLite::vftable;
      uVar3 = plVar2[3];
      if (0xf < uVar3) {
        lVar4 = *plVar2;
        uVar8 = uVar3 + 1;
        lVar7 = lVar4;
        if (0xfff < uVar8) {
          lVar7 = *(longlong *)(lVar4 + -8);
          uVar8 = uVar3 + 0x28;
          if (0x1f < (lVar4 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar7,uVar8);
      }
      plVar2[2] = 0;
      plVar2[3] = 0xf;
      *(undefined1 *)plVar2 = 0;
      FMemory::operator_delete(plVar2,0x40);
    }
    FUN_141500d20(&local_78);
    local_88 = auVar1._0_4_;
    uStack_84 = auVar1._4_4_;
    uStack_80 = auVar1._8_4_;
    uStack_7c = auVar1._12_4_;
    local_58 = local_88;
    uStack_54 = uStack_84;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    local_48 = uVar5;
    FUN_1415159d0(param_1[2],&local_58);
    lVar4 = CONCAT44(uStack_74,local_78);
    auVar1._8_4_ = uStack_70;
    auVar1._0_8_ = lVar4;
    auVar1._12_4_ = uStack_6c;
    uVar5 = local_68;
    local_38[0] = auVar1;
  } while( true );
}



// FUNCTION 141515150 FUN_141515150 body=631 status=ok
// SIG undefined FUN_141515150(void)

void FUN_141515150(undefined8 *param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 local_38 [16];
  
  uVar14 = 0;
  if (param_1[1] != 0) {
    do {
      lVar2 = param_1[4];
      plVar12 = *(longlong **)(lVar2 + uVar14 * 8);
      if ((plVar12 == (longlong *)0x0) || (plVar12 == *(longlong **)(lVar2 + (uVar14 ^ 1) * 8))) {
        if ((plVar12 != (longlong *)0x0) && (plVar12 == *(longlong **)(lVar2 + (uVar14 ^ 1) * 8))) {
          *(undefined8 *)(lVar2 + 8 + uVar14 * 8) = 0;
          *(undefined8 *)(param_1[4] + uVar14 * 8) = 0;
          plVar11 = *(longlong **)plVar12[1];
          do {
            plVar4 = (longlong *)plVar11[2];
            plVar5 = (longlong *)plVar11[4];
            if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
              cVar1 = *(char *)(*plVar4 + 0x19);
              plVar13 = plVar4;
              plVar6 = (longlong *)*plVar4;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar6 + 0x19);
                plVar13 = plVar6;
                plVar6 = (longlong *)*plVar6;
              }
            }
            else {
              cVar1 = *(char *)(plVar11[1] + 0x19);
              plVar7 = (longlong *)plVar11[1];
              plVar6 = plVar11;
              while ((plVar13 = plVar7, cVar1 == '\0' && (plVar6 == (longlong *)plVar13[2]))) {
                cVar1 = *(char *)(plVar13[1] + 0x19);
                plVar7 = (longlong *)plVar13[1];
                plVar6 = plVar13;
              }
            }
            if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
              plVar4 = (longlong *)*plVar4;
              cVar1 = *(char *)((longlong)plVar4 + 0x19);
              while (cVar1 == '\0') {
                plVar4 = (longlong *)*plVar4;
                cVar1 = *(char *)((longlong)plVar4 + 0x19);
              }
            }
            else {
              cVar1 = *(char *)(plVar11[1] + 0x19);
              plVar4 = (longlong *)plVar11[1];
              while ((plVar6 = plVar4, cVar1 == '\0' && (plVar11 == (longlong *)plVar6[2]))) {
                cVar1 = *(char *)(plVar6[1] + 0x19);
                plVar4 = (longlong *)plVar6[1];
                plVar11 = plVar6;
              }
            }
            uVar8 = FUN_140632130(plVar12 + 1);
            if (*plVar12 == 0) {
              FMemory::operator_delete(uVar8,0x28);
            }
            uVar3 = plVar5[3];
            if (0xf < uVar3) {
              lVar2 = *plVar5;
              uVar10 = uVar3 + 1;
              lVar9 = lVar2;
              if (0xfff < uVar10) {
                lVar9 = *(longlong *)(lVar2 + -8);
                uVar10 = uVar3 + 0x28;
                if (0x1f < (lVar2 - lVar9) - 8U) goto LAB_1415153c1;
              }
              FMemory::operator_delete(lVar9,uVar10);
            }
            plVar5[2] = 0;
            plVar5[3] = 0xf;
            *(undefined1 *)plVar5 = 0;
            if (param_1[5] == 0) {
              FMemory::operator_delete(plVar5,0x30);
            }
            plVar5 = (longlong *)plVar12[1];
            plVar11 = plVar13;
          } while (plVar13 != plVar5);
          lVar2 = param_1[5];
          FUN_140d5a080(plVar12,local_38,*plVar5,plVar5);
          if (*plVar12 == 0) {
            FMemory::operator_delete(plVar12[1],0x28);
          }
          if (lVar2 == 0) {
            FMemory::operator_delete(plVar12,0x18);
          }
          uVar14 = uVar14 + 1;
        }
      }
      else {
        *(undefined8 *)(lVar2 + uVar14 * 8) = 0;
        do {
          uVar3 = plVar12[3];
          plVar11 = (longlong *)plVar12[5];
          if (0xf < uVar3) {
            lVar2 = *plVar12;
            uVar10 = uVar3 + 1;
            lVar9 = lVar2;
            if (0xfff < uVar10) {
              lVar9 = *(longlong *)(lVar2 + -8);
              uVar10 = uVar3 + 0x28;
              if (0x1f < (lVar2 - lVar9) - 8U) {
LAB_1415153c1:
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FMemory::operator_delete(lVar9,uVar10);
          }
          plVar12[2] = 0;
          plVar12[3] = 0xf;
          *(undefined1 *)plVar12 = 0;
          if (param_1[5] == 0) {
            FMemory::operator_delete(plVar12,0x30);
          }
          plVar12 = plVar11;
        } while (plVar11 != (longlong *)0x0);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < (ulonglong)param_1[1]);
  }
  param_1[3] = param_1[1];
  *param_1 = 0;
  return;
}



// FUNCTION 1415153d0 FUN_1415153d0 body=97 status=ok
// SIG undefined FUN_1415153d0(void)

void FUN_1415153d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x120);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x128);
    do {
      FUN_141525dc0(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  return;
}



// FUNCTION 141515440 FUN_141515440 body=97 status=ok
// SIG undefined FUN_141515440(void)

void FUN_141515440(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x270);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x278);
    do {
      FUN_141546d20(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x270) = 0;
  }
  return;
}



// FUNCTION 1415154b0 FUN_1415154b0 body=97 status=ok
// SIG undefined FUN_1415154b0(void)

void FUN_1415154b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x168);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x170);
    do {
      FUN_141546eb0(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  return;
}



// FUNCTION 141515520 FUN_141515520 body=97 status=ok
// SIG undefined FUN_141515520(void)

void FUN_141515520(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c8);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x1d0);
    do {
      FUN_1415045a0(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 141515590 FUN_141515590 body=97 status=ok
// SIG undefined FUN_141515590(void)

void FUN_141515590(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x108);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x110);
    do {
      FUN_1415045a0(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  return;
}



// FUNCTION 141515600 FUN_141515600 body=97 status=ok
// SIG undefined FUN_141515600(void)

void FUN_141515600(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x240);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x248);
    do {
      FUN_141546fb0(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x240) = 0;
  }
  return;
}



// FUNCTION 141515670 FUN_141515670 body=97 status=ok
// SIG undefined FUN_141515670(void)

void FUN_141515670(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x210);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x218);
    do {
      FUN_141524e70(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x210) = 0;
  }
  return;
}



// FUNCTION 1415156e0 FUN_1415156e0 body=97 status=ok
// SIG undefined FUN_1415156e0(void)

void FUN_1415156e0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x228);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x230);
    do {
      FUN_141524e70(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  return;
}



// FUNCTION 141515750 FUN_141515750 body=97 status=ok
// SIG undefined FUN_141515750(void)

void FUN_141515750(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x1e0);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x1e8);
    do {
      FUN_141524e70(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 1415157c0 FUN_1415157c0 body=97 status=ok
// SIG undefined FUN_1415157c0(void)

void FUN_1415157c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x1f8);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x200);
    do {
      FUN_141546e80(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x1f8) = 0;
  }
  return;
}



// FUNCTION 141515830 FUN_141515830 body=282 status=ok
// SIG undefined FUN_141515830(void)

longlong * FUN_141515830(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  
  if ((*param_1 == 0) && (plVar1 = *(longlong **)(*param_3 + 0x20), plVar1 != (longlong *)0x0)) {
    plVar1[4] = (longlong)&PTR__scalar_deleting_destructor__144c4cbc8;
    FUN_1415008e0(plVar1 + 5);
    plVar1[4] = (longlong)google::protobuf::MessageLite::vftable;
    uVar2 = plVar1[3];
    if (0xf < uVar2) {
      lVar3 = *plVar1;
      uVar5 = uVar2 + 1;
      lVar4 = lVar3;
      if (0xfff < uVar5) {
        lVar4 = *(longlong *)(lVar3 + -8);
        uVar5 = uVar2 + 0x28;
        if (0x1f < (lVar3 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar4,uVar5);
    }
    plVar1[2] = 0;
    plVar1[3] = 0xf;
    *(undefined1 *)plVar1 = 0;
    FMemory::operator_delete(plVar1,0x40);
  }
  local_28 = *param_3;
  lStack_20 = param_3[1];
  lVar3 = param_3[2];
  FUN_141500d20(param_3);
  local_18 = lVar3;
  FUN_1415159d0(param_1[2],&local_28);
  lVar4 = param_3[1];
  lVar3 = param_3[2];
  *param_2 = *param_3;
  param_2[1] = lVar4;
  param_2[2] = lVar3;
  return param_2;
}



// FUNCTION 141515950 FUN_141515950 body=123 status=ok
// SIG undefined FUN_141515950(void)

undefined8 FUN_141515950(longlong param_1,undefined8 param_2)

{
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_18;
  
  FUN_140d2cbc0(*(undefined8 *)(param_1 + 0x10),&local_28,param_2,0);
  local_38 = local_18;
  if (CONCAT44(uStack_24,local_28) == 0) {
    return 0;
  }
  FUN_141515830(param_1,local_48,&local_28);
  return 1;
}



// FUNCTION 1415159d0 FUN_1415159d0 body=759 status=ok
// SIG undefined FUN_1415159d0(void)

void FUN_1415159d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  char cVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *local_88;
  ulonglong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  undefined1 local_58 [32];
  
  lVar1 = param_2[1];
  lVar2 = *param_2;
  uVar8 = *(longlong *)(lVar1 + 8) - 1U & param_2[2];
  param_2[2] = uVar8;
  local_88 = (undefined8 *)0x0;
  lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x20) + uVar8 * 8);
  if (lVar3 == lVar2) {
LAB_141515a20:
    bVar5 = true;
  }
  else {
    if ((lVar3 != 0) && (lVar3 != *(longlong *)(*(longlong *)(lVar1 + 0x20) + (uVar8 ^ 1) * 8))) {
      for (lVar3 = *(longlong *)(lVar3 + 0x28); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x28)) {
        if (lVar3 == lVar2) goto LAB_141515a20;
      }
    }
    puVar9 = (undefined4 *)FUN_140d2cbc0(lVar1,local_58,lVar2,&local_88);
    lVar1 = *(longlong *)(lVar1 + 0x20);
    local_60 = *(ulonglong *)(puVar9 + 4);
    local_70 = *puVar9;
    uStack_6c = puVar9[1];
    uStack_68 = puVar9[2];
    uStack_64 = puVar9[3];
    param_2[2] = local_60;
    lVar3 = *(longlong *)(lVar1 + local_60 * 8);
    if ((lVar3 == 0) || (lVar3 != *(longlong *)(lVar1 + (local_60 ^ 1) * 8))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
  }
  puVar16 = local_88;
  uVar8 = param_2[2];
  lVar1 = *(longlong *)(param_1[4] + uVar8 * 8);
  local_80 = uVar8;
  local_78 = lVar1;
  if (bVar5) {
    if (lVar1 == lVar2) {
      *(undefined8 *)(param_1[4] + uVar8 * 8) = *(undefined8 *)(lVar1 + 0x28);
    }
    else {
      uVar10 = google::protobuf::Map<int,MistProto::Text>::InnerMap::EraseFromLinkedList
                         (param_1,lVar2);
      *(undefined8 *)(lVar1 + 0x28) = uVar10;
      *(longlong *)(param_1[4] + uVar8 * 8) = lVar1;
    }
  }
  else {
    puVar13 = *(undefined8 **)(lVar1 + 8);
    puVar17 = puVar13 + 1;
    puVar6 = puVar13;
    if (*(char *)((longlong)puVar13[1] + 0x19) == '\0') {
      uVar10 = local_88[4];
      puVar14 = (undefined8 *)puVar13[1];
      local_88 = puVar13;
      do {
        uVar4 = puVar14[4];
        cVar7 = FUN_140d1b780(uVar4,uVar10);
        if (cVar7 == '\0') {
          if ((*(char *)((longlong)puVar13 + 0x19) != '\0') &&
             (cVar7 = FUN_140d1b780(uVar10,uVar4), cVar7 != '\0')) {
            puVar13 = puVar14;
          }
          puVar15 = (undefined8 *)*puVar14;
          local_88 = puVar14;
        }
        else {
          puVar15 = (undefined8 *)puVar14[2];
        }
        puVar14 = puVar15;
        puVar6 = local_88;
      } while (*(char *)((longlong)puVar15 + 0x19) == '\0');
    }
    local_88 = puVar6;
    lVar1 = local_78;
    puVar6 = local_88;
    if (*(char *)((longlong)puVar13 + 0x19) == '\0') {
      puVar17 = puVar13;
    }
    puVar14 = puVar6;
    if (*(char *)((longlong)*puVar17 + 0x19) == '\0') {
      uVar10 = puVar16[4];
      puVar16 = (undefined8 *)*puVar17;
      do {
        cVar7 = FUN_140d1b780(uVar10,puVar16[4]);
        if (cVar7 == '\0') {
          puVar17 = (undefined8 *)puVar16[2];
        }
        else {
          puVar17 = (undefined8 *)*puVar16;
          puVar13 = puVar16;
        }
        puVar16 = puVar17;
      } while (*(char *)((longlong)puVar17 + 0x19) == '\0');
    }
    while (puVar14 != puVar13) {
      puVar16 = (undefined8 *)puVar14[2];
      if (*(char *)((longlong)puVar16 + 0x19) == '\0') {
        cVar7 = *(char *)((longlong)*puVar16 + 0x19);
        puVar14 = puVar16;
        puVar16 = (undefined8 *)*puVar16;
        while (cVar7 == '\0') {
          cVar7 = *(char *)((longlong)*puVar16 + 0x19);
          puVar14 = puVar16;
          puVar16 = (undefined8 *)*puVar16;
        }
      }
      else {
        cVar7 = *(char *)((longlong)puVar14[1] + 0x19);
        puVar17 = (undefined8 *)puVar14[1];
        puVar16 = puVar14;
        while ((puVar14 = puVar17, cVar7 == '\0' && (puVar16 == (undefined8 *)puVar14[2]))) {
          cVar7 = *(char *)((longlong)puVar14[1] + 0x19);
          puVar17 = (undefined8 *)puVar14[1];
          puVar16 = puVar14;
        }
      }
    }
    FUN_140d5a080(lVar1,&local_78,puVar6,puVar13);
    uVar8 = local_80;
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      uVar8 = local_80 & 0xfffffffffffffffe;
      FUN_141505c50(param_1,lVar1);
      *(undefined8 *)(param_1[4] + 8 + uVar8 * 8) = 0;
      *(undefined8 *)(param_1[4] + uVar8 * 8) = 0;
    }
  }
  FUN_141505bd0(param_1,lVar2);
  uVar11 = param_1[3];
  *param_1 = *param_1 + -1;
  if ((uVar8 == uVar11) && (uVar11 < (ulonglong)param_1[1])) {
    plVar12 = (longlong *)(param_1[4] + uVar11 * 8);
    do {
      if (*plVar12 != 0) {
        return;
      }
      uVar11 = uVar11 + 1;
      plVar12 = plVar12 + 1;
      param_1[3] = uVar11;
    } while (uVar11 < (ulonglong)param_1[1]);
  }
  return;
}



// FUNCTION 141515cd0 FUN_141515cd0 body=41 status=ok
// SIG undefined FUN_141515cd0(void)

void FUN_141515cd0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x2d0) == 0) {
    uVar1 = FUN_1414fd000(0);
    *(undefined8 *)(param_1 + 0x2d0) = uVar1;
  }
  return;
}



// FUNCTION 141515d00 FUN_141515d00 body=41 status=ok
// SIG undefined FUN_141515d00(void)

void FUN_141515d00(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x2c0) == 0) {
    uVar1 = FUN_1414fd580(0);
    *(undefined8 *)(param_1 + 0x2c0) = uVar1;
  }
  return;
}



// FUNCTION 141515d30 FUN_141515d30 body=41 status=ok
// SIG undefined FUN_141515d30(void)

void FUN_141515d30(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x2c8) == 0) {
    uVar1 = FUN_1414fd280(0);
    *(undefined8 *)(param_1 + 0x2c8) = uVar1;
  }
  return;
}



// FUNCTION 141515d60 FUN_141515d60 body=139 status=ok
// SIG undefined FUN_141515d60(void)

void FUN_141515d60(ulonglong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  uVar3 = *param_1 & 0xfffffffffffffffe;
  if ((*param_1 & 1) != 0) {
    uVar3 = *(ulonglong *)(uVar3 + 0x18);
  }
  if (uVar3 == 0) {
    puVar1 = (undefined8 *)operator_new();
    puVar2 = (undefined8 *)0x0;
    if (puVar1 == (undefined8 *)0x0) goto LAB_141515dd2;
    puVar1[3] = 0;
  }
  else {
    if (*(longlong *)(uVar3 + 0x70) != 0) {
      FUN_1439f01b0(uVar3,0,0x20);
    }
    puVar1 = (undefined8 *)FUN_1439efdc0(uVar3,0x20,&LAB_1414ffbd0);
  }
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar2 = puVar1;
LAB_141515dd2:
  *param_1 = (ulonglong)puVar2 | 1;
  puVar2[3] = uVar3;
  return;
}



// FUNCTION 141515df0 FUN_141515df0 body=41 status=ok
// SIG undefined FUN_141515df0(void)

void FUN_141515df0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x2d8) == 0) {
    uVar1 = FUN_141544480(0);
    *(undefined8 *)(param_1 + 0x2d8) = uVar1;
  }
  return;
}



// FUNCTION 141515e20 FUN_141515e20 body=161 status=ok
// SIG undefined FUN_141515e20(void)

ulonglong FUN_141515e20(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 local_30 [40];
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar4 = *(longlong *)(uVar1 + 8) - 1U & param_1[2];
  param_1[2] = uVar4;
  uVar3 = *(ulonglong *)(*(longlong *)(uVar1 + 0x20) + uVar4 * 8);
  if (uVar3 != uVar2) {
    if ((uVar3 != 0) && (uVar3 != *(ulonglong *)(*(longlong *)(uVar1 + 0x20) + (uVar4 ^ 1) * 8))) {
      for (uVar4 = *(ulonglong *)(uVar3 + 0x28); uVar4 != 0; uVar4 = *(ulonglong *)(uVar4 + 0x28)) {
        if (uVar4 == uVar2) goto LAB_141515eb9;
      }
    }
    lVar5 = FUN_140d2cbc0(uVar1,local_30,uVar2,param_2);
    uVar1 = *(ulonglong *)(lVar5 + 0x10);
    param_1[2] = uVar1;
    uVar4 = *(ulonglong *)(*(longlong *)(param_1[1] + 0x20) + uVar1 * 8);
    if ((uVar4 != 0) &&
       (uVar4 == *(ulonglong *)(*(longlong *)(param_1[1] + 0x20) + (uVar1 ^ 1) * 8))) {
      return uVar4 & 0xffffffffffffff00;
    }
  }
LAB_141515eb9:
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// FUNCTION 141515ed0 FUN_141515ed0 body=29 status=ok
// SIG undefined FUN_141515ed0(void)

undefined4 FUN_141515ed0(longlong param_1)

{
  FUN_143a12920();
  return **(undefined4 **)(param_1 + 0x88);
}



// FUNCTION 141515ef0 FUN_141515ef0 body=147 status=ok
// SIG undefined FUN_141515ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_141515ef0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    uVar2 = FUN_1439eeb00(local_50,3,
                          "D:\\Oak\\main\\Engine\\Source\\ThirdParty\\protobuf\\3.7.1\\include\\google/protobuf/map_field.h"
                          ,0x184);
    uVar2 = FUN_1439eef00(uVar2,"Protocol Buffer map usage error:\n");
    uVar2 = FUN_1439eef00(uVar2,"MapKey::type MapKey is not initialized. ");
    uVar2 = FUN_1439eef00(uVar2,"Call set methods to initialize MapKey.");
    FUN_1439eec50(local_58,uVar2);
    DsDevice::~DsDevice(local_50);
    iVar1 = *(int *)(param_1 + 8);
  }
  return iVar1;
}



// FUNCTION 141515fb0 FUN_141515fb0 body=128 status=ok
// SIG undefined FUN_141515fb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141515fb0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  _DAT_1468a5e88 = 0;
  DAT_1468a5e80 = &PTR_FUN_144c60140;
  _DAT_1468a5e9c = 0;
  if (DAT_1464a0818 != 0) {
    FUN_1439f44f0(&DAT_1464a0818);
  }
  DAT_1468a5e98 = 0;
  DAT_1468a5e90 = &DAT_146ba2f50;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a5e80);
  return;
}



// FUNCTION 141516030 FUN_141516030 body=123 status=ok
// SIG undefined FUN_141516030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141516030(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  DAT_1468a5ef8 = &PTR_FUN_144c60200;
  _DAT_1468a5f00 = 0;
  _DAT_1468a5f14 = 0;
  if (DAT_1464a0848 != 0) {
    FUN_1439f44f0(&DAT_1464a0848);
  }
  _DAT_1468a5f10 = 0;
  _DAT_1468a5f08 = &DAT_146ba2f50;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a5ef8);
  return;
}



// FUNCTION 1415160b0 FUN_1415160b0 body=127 status=ok
// SIG undefined FUN_1415160b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415160b0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  DAT_1468a5ed0 = &PTR_FUN_144c602c0;
  _DAT_1468a5ed8 = 0;
  _DAT_1468a5ef4 = 0;
  if (DAT_1464a0830 != 0) {
    FUN_1439f44f0(&DAT_1464a0830);
  }
  _DAT_1468a5ee0 = &DAT_146ba2f50;
  _DAT_1468a5ee8 = 0;
  _DAT_1468a5ef0 = 0;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a5ed0);
  return;
}



// FUNCTION 141516130 FUN_141516130 body=59 status=ok
// SIG undefined FUN_141516130(void)

void FUN_141516130(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  FUN_14151ddd0(&DAT_1468a5950);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a5950);
  return;
}



// FUNCTION 141516170 FUN_141516170 body=150 status=ok
// SIG undefined FUN_141516170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141516170(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  DAT_1468a5b88 = &PTR_FUN_144c60440;
  _DAT_1468a5b90 = 0;
  _DAT_1468a5bb8 = 0;
  if (DAT_1464a0980 != 0) {
    FUN_1439f44f0(&DAT_1464a0980);
  }
  _DAT_1468a5b98 = &DAT_146ba2f50;
  _DAT_1468a5ba0 = &DAT_146ba2f50;
  _DAT_1468a5ba8 = (undefined8 *)0x0;
  _DAT_1468a5bb0 = 0;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a5b88);
  _DAT_1468a5ba8 = &DAT_1468a5950;
  return;
}



// FUNCTION 141516210 FUN_141516210 body=133 status=ok
// SIG undefined FUN_141516210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141516210(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  DAT_1468a57c8 = &PTR_FUN_144c60500;
  _DAT_1468a57d0 = 0;
  _DAT_1468a57f0 = 0;
  if (DAT_1464a0698 != 0) {
    FUN_1439f44f0(&DAT_1464a0698);
  }
  _DAT_1468a57d8 = &DAT_146ba2f50;
  _DAT_1468a57e0 = &DAT_146ba2f50;
  _DAT_1468a57e8 = 0;
  DAT_1468a57ec = 0;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a57c8);
  return;
}



// FUNCTION 1415162a0 FUN_1415162a0 body=127 status=ok
// SIG undefined FUN_1415162a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415162a0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  DAT_1468a5af8 = &PTR_FUN_144c605c0;
  _DAT_1468a5b00 = 0;
  _DAT_1468a5b1c = 0;
  if (DAT_1464a0788 != 0) {
    FUN_1439f44f0(&DAT_1464a0788);
  }
  _DAT_1468a5b08 = &DAT_146ba2f50;
  _DAT_1468a5b10 = 0;
  _DAT_1468a5b18 = 0;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a5af8);
  return;
}



// FUNCTION 141516320 FUN_141516320 body=119 status=ok
// SIG undefined FUN_141516320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141516320(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  DAT_1468a5ad0 = &PTR_FUN_144c60680;
  _DAT_1468a5ad8 = 0;
  _DAT_1468a5af0 = 0;
  if (DAT_1464a0770 != 0) {
    FUN_1439f44f0(&DAT_1464a0770);
  }
  _DAT_1468a5ae0 = &DAT_146ba2f50;
  _DAT_1468a5ae8 = &DAT_146ba2f50;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a5ad0);
  return;
}



// FUNCTION 1415163a0 FUN_1415163a0 body=126 status=ok
// SIG undefined FUN_1415163a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415163a0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  DAT_1468a5b58 = &PTR_FUN_144c60740;
  _DAT_1468a5b60 = 0;
  _DAT_1468a5b80 = 0;
  if (DAT_1464a07b8 != 0) {
    FUN_1439f44f0(&DAT_1464a07b8);
  }
  _DAT_1468a5b68 = &DAT_146ba2f50;
  _DAT_1468a5b70 = &DAT_146ba2f50;
  _DAT_1468a5b78 = &DAT_146ba2f50;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a5b58);
  return;
}



// FUNCTION 141516420 FUN_141516420 body=133 status=ok
// SIG undefined FUN_141516420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141516420(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  DAT_1468a5b20 = &PTR_FUN_144c60800;
  _DAT_1468a5b28 = 0;
  _DAT_1468a5b50 = 0;
  if (DAT_1464a07a0 != 0) {
    FUN_1439f44f0(&DAT_1464a07a0);
  }
  _DAT_1468a5b30 = &DAT_146ba2f50;
  _DAT_1468a5b38 = &DAT_146ba2f50;
  _DAT_1468a5b40 = &DAT_146ba2f50;
  _DAT_1468a5b48 = &DAT_146ba2f50;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a5b20);
  return;
}



// FUNCTION 1415164b0 FUN_1415164b0 body=59 status=ok
// SIG undefined FUN_1415164b0(void)

void FUN_1415164b0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  FUN_14151e1c0(&DAT_1468a5c30);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a5c30);
  return;
}



// FUNCTION 1415164f0 FUN_1415164f0 body=59 status=ok
// SIG undefined FUN_1415164f0(void)

void FUN_1415164f0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  FUN_14151df70(&DAT_1468a5a80);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a5a80);
  return;
}



// FUNCTION 141516530 FUN_141516530 body=130 status=ok
// SIG undefined FUN_141516530(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141516530(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  DAT_1468a5a48 = &PTR_FUN_144c60a40;
  _DAT_1468a5a60 = 0;
  _DAT_1468a5a68 = 0;
  _DAT_1468a5a78 = 0;
  _DAT_1468a5a50 = 0;
  uRam00000001468a5a58 = 0;
  if (DAT_1464a0968 != 0) {
    FUN_1439f44f0(&DAT_1464a0968);
  }
  _DAT_1468a5a70 = &DAT_146ba2f50;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a5a48);
  return;
}



// FUNCTION 1415165c0 FUN_1415165c0 body=119 status=ok
// SIG undefined FUN_1415165c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415165c0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  DAT_1468a5138 = &PTR_FUN_144c60b00;
  _DAT_1468a5140 = 0;
  _DAT_1468a5154 = 0;
  if (DAT_1464a05f0 != 0) {
    FUN_1439f44f0(&DAT_1464a05f0);
  }
  DAT_1468a5150 = 0;
  _DAT_1468a5148 = &DAT_146ba2f50;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a5138);
  return;
}



// FUNCTION 141516640 FUN_141516640 body=116 status=ok
// SIG undefined FUN_141516640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141516640(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  DAT_1468a5ea0 = &PTR_FUN_144c60bc0;
  _DAT_1468a5eb8 = 0;
  _DAT_1468a5ec0 = 0;
  _DAT_1468a5ec8 = 0;
  _DAT_1468a5ea8 = 0;
  uRam00000001468a5eb0 = 0;
  if (DAT_1464a09b0 != 0) {
    FUN_1439f44f0(&DAT_1464a09b0);
  }
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a5ea0);
  return;
}



// FUNCTION 1415166c0 FUN_1415166c0 body=128 status=ok
// SIG undefined FUN_1415166c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415166c0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  _DAT_1468a5708 = 0;
  DAT_1468a5700 = &PTR_FUN_144c60c80;
  _DAT_1468a571c = 0;
  if (DAT_1464a0668 != 0) {
    FUN_1439f44f0(&DAT_1464a0668);
  }
  _DAT_1468a5718 = 0;
  _DAT_1468a5710 = &DAT_146ba2f50;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a5700);
  return;
}



// FUNCTION 141516740 FUN_141516740 body=139 status=ok
// SIG undefined FUN_141516740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141516740(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  DAT_1468a5720 = &PTR_FUN_144c60d40;
  _DAT_1468a5728 = 0;
  uRam00000001468a5730 = 0;
  _DAT_1468a5738 = 0;
  _DAT_1468a5740 = 0;
  _DAT_1468a5754 = 0;
  if (DAT_1464a08f0 != 0) {
    FUN_1439f44f0(&DAT_1464a08f0);
  }
  _DAT_1468a5750 = 0;
  _DAT_1468a5748 = &DAT_146ba2f50;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a5720);
  return;
}



// FUNCTION 1415167d0 FUN_1415167d0 body=119 status=ok
// SIG undefined FUN_1415167d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415167d0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  DAT_1468a5758 = &PTR_FUN_144c60e00;
  _DAT_1468a5760 = 0;
  _DAT_1468a5774 = 0;
  if (DAT_1464a0a88 != 0) {
    FUN_1439f44f0(&DAT_1464a0a88);
  }
  DAT_1468a5770 = 0;
  _DAT_1468a5768 = &DAT_146ba2f50;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a5758);
  return;
}



// FUNCTION 141516850 FUN_141516850 body=116 status=ok
// SIG undefined FUN_141516850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141516850(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  DAT_1468a5778 = &PTR_FUN_144c60ec0;
  _DAT_1468a5790 = 0;
  DAT_1468a5798 = 0;
  _DAT_1468a57a0 = 0;
  _DAT_1468a5780 = 0;
  uRam00000001468a5788 = 0;
  if (DAT_1464a0908 != 0) {
    FUN_1439f44f0(&DAT_1464a0908);
  }
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a5778);
  return;
}



// FUNCTION 1415168d0 FUN_1415168d0 body=119 status=ok
// SIG undefined FUN_1415168d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415168d0(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  DAT_1468a5f90 = &PTR_FUN_144c60f80;
  _DAT_1468a5f98 = 0;
  _DAT_1468a5fac = 0;
  if (DAT_1464a0878 != 0) {
    FUN_1439f44f0(&DAT_1464a0878);
  }
  DAT_1468a5fa8 = 0;
  _DAT_1468a5fa0 = &DAT_146ba2f50;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a5f90);
  return;
}



// FUNCTION 141516950 FUN_141516950 body=59 status=ok
// SIG undefined FUN_141516950(void)

void FUN_141516950(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  FUN_14151e0e0(&DAT_1468a5bc0);
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a5bc0);
  return;
}



// FUNCTION 141516990 FUN_141516990 body=157 status=ok
// SIG undefined FUN_141516990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141516990(void)

{
  FUN_1439ef1a0(0x2de219,0x2de218,"D:\\Oak\\main\\OakGame\\Source\\OakGame\\Private\\OakSave.pb.cc")
  ;
  DAT_1468a56d0 = &PTR_FUN_144c61100;
  _DAT_1468a56d8 = 0;
  _DAT_1468a56fc = 0;
  if (DAT_1464a08d8 != 0) {
    FUN_1439f44f0(&DAT_1464a08d8);
  }
  _DAT_1468a56e0 = &DAT_146ba2f50;
  _DAT_1468a56e8 = (undefined8 *)0x0;
  _DAT_1468a56f0 = (undefined8 *)0x0;
  _DAT_1468a56f8 = 0;
  FUN_1439ef0c0(&LAB_1439f43f0,&DAT_1468a56d0);
  _DAT_1468a56e8 = &DAT_1468a6340;
  _DAT_1468a56f0 = &DAT_1468a6340;
  return;
}


