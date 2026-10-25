// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143646290 FUN_143646290 body=33 status=ok
// SIG undefined FUN_143646290(void)

undefined8 * FUN_143646290(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1436462c0 FUN_1436462c0 body=214 status=ok
// SIG undefined FUN_1436462c0(void)

undefined8 * FUN_1436462c0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b59400);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b59400);
    *puVar2 = &PTR_FUN_145b59980;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1436463a0 UInterpTrackInstFloatAnimBPParam body=46 status=ok
// SIG undefined UInterpTrackInstFloatAnimBPParam(void)

undefined8 * UInterpTrackInstFloatAnimBPParam::UInterpTrackInstFloatAnimBPParam(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b599f8;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 1436463e0 FUN_1436463e0 body=33 status=ok
// SIG undefined FUN_1436463e0(void)

undefined8 * FUN_1436463e0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b59ab8;
  return param_1;
}



// FUNCTION 143646410 FUN_143646410 body=179 status=ok
// SIG undefined FUN_143646410(void)

void FUN_143646410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b599f8;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar1[10] = 0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1436464d0 FUN_1436464d0 body=33 status=ok
// SIG undefined FUN_1436464d0(void)

undefined8 * FUN_1436464d0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143646500 FUN_143646500 body=214 status=ok
// SIG undefined FUN_143646500(void)

undefined8 * FUN_143646500(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b594c0);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b594c0);
    *puVar2 = &PTR_FUN_145b59ab8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1436465e0 FUN_1436465e0 body=121 status=ok
// SIG undefined FUN_1436465e0(void)

void FUN_1436465e0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x58);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x58) = uVar1 - 1;
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x40);
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      *(ulonglong *)(param_1 + 0x40) = uVar1 - 1;
      FUN_1435b9dc0(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435b9dc0(param_1);
  return;
}



// FUNCTION 143646660 FUN_143646660 body=136 status=ok
// SIG undefined FUN_143646660(void)

longlong FUN_143646660(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x40);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x40) = uVar1 - 1;
    }
  }
  FUN_1435b9dc0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1436466f0 FUN_1436466f0 body=89 status=ok
// SIG undefined FUN_1436466f0(void)

undefined8 FUN_1436466f0(undefined8 param_1,ulonglong param_2)

{
  FUN_1436465e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 143646750 FUN_143646750 body=136 status=ok
// SIG undefined FUN_143646750(void)

longlong FUN_143646750(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x40);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x40) = uVar1 - 1;
    }
  }
  FUN_1435b9dc0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1436467e0 FUN_1436467e0 body=33 status=ok
// SIG undefined FUN_1436467e0(void)

undefined8 * FUN_1436467e0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143646810 FUN_143646810 body=250 status=ok
// SIG undefined FUN_143646810(void)

undefined8 * FUN_143646810(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b59b60);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b59b60);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23ad8;
    puVar5[10] = "deflate";
    puVar5[0xb] = &DAT_145b59be8;
  }
  return param_1;
}



// FUNCTION 143646910 FUN_143646910 body=55 status=ok
// SIG undefined FUN_143646910(void)

undefined8 * FUN_143646910(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = "deflate";
  param_1[0xb] = &DAT_145b59be8;
  return param_1;
}



// FUNCTION 143646950 FUN_143646950 body=456 status=ok
// SIG undefined FUN_143646950(void)

undefined8 FUN_143646950(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x220) = 1;
    return 0;
  }
  if (*(int *)(param_1 + 0x380) == 2) {
    *(undefined4 *)(param_1 + 0x220) = 0x24;
    return 0;
  }
  if (*(int *)(param_1 + 0x380) == 3) {
    *(undefined4 *)(param_1 + 0x220) = 0x21;
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x40) - lVar1 < (longlong)param_2) {
    iVar3 = *(int *)(param_1 + 0x30);
    param_2 = ((int)lVar1 - iVar3) + param_2;
    if (-1 < param_2) {
      pvVar4 = *(void **)(param_1 + 0x10);
      iVar6 = iVar3 - *(int *)(param_1 + 0x10);
      iVar2 = iVar6;
      if (0x400 < iVar6) {
        iVar2 = 0x400;
      }
      param_2 = param_2 + iVar2;
      if ((longlong)param_2 <= *(longlong *)(param_1 + 0x40) - (longlong)pvVar4) {
        if ((longlong)iVar2 < *(longlong *)(param_1 + 0x30) - (longlong)pvVar4) {
          lVar7 = (longlong)(iVar6 - iVar2);
          memmove(pvVar4,(void *)(lVar7 + (longlong)pvVar4),
                  ((longlong)iVar2 - *(longlong *)(param_1 + 0x30)) + lVar1);
          *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) - lVar7;
          *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) - lVar7;
        }
LAB_143646ad4:
        *(undefined8 *)(param_1 + 0x230) = 0;
        *(undefined8 *)(param_1 + 0x228) = 0;
        *(undefined8 *)(param_1 + 0x238) = 0;
        goto LAB_143646aeb;
      }
      iVar3 = *(int *)(param_1 + 0x40) - iVar3;
      if (iVar3 == 0) {
        iVar3 = 0x400;
      }
      do {
        iVar3 = iVar3 * 2;
        if (param_2 <= iVar3) {
          if (0 < iVar3) {
            pvVar4 = (void *)(**(code **)(param_1 + 0x18))((longlong)iVar3);
            if (pvVar4 != (void *)0x0) {
              lVar1 = *(longlong *)(param_1 + 0x30);
              *(longlong *)(param_1 + 0x40) = (longlong)pvVar4 + (longlong)iVar3;
              if (lVar1 == 0) {
                *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + (longlong)pvVar4;
                *(void **)(param_1 + 0x30) = pvVar4;
              }
              else {
                iVar3 = (int)lVar1 - *(int *)(param_1 + 0x10);
                if (0x400 < iVar3) {
                  iVar3 = 0x400;
                }
                lVar7 = (longlong)iVar3;
                _guard_xfg_dispatch_icall_nop
                          (pvVar4,(void *)(-iVar3 + lVar1),
                           (*(longlong *)(param_1 + 0x38) - lVar1) + lVar7);
                (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x10));
                *(longlong *)(param_1 + 0x38) =
                     (longlong)pvVar4 +
                     *(longlong *)(param_1 + 0x38) + (lVar7 - *(longlong *)(param_1 + 0x30));
                *(longlong *)(param_1 + 0x30) = lVar7 + (longlong)pvVar4;
              }
              *(void **)(param_1 + 0x10) = pvVar4;
              goto LAB_143646ad4;
            }
          }
          break;
        }
      } while (0 < iVar3);
    }
    *(undefined4 *)(param_1 + 0x220) = 1;
    uVar5 = 0;
  }
  else {
LAB_143646aeb:
    uVar5 = *(undefined8 *)(param_1 + 0x38);
  }
  return uVar5;
}



// FUNCTION 143646b20 FUN_143646b20 body=26 status=ok
// SIG undefined FUN_143646b20(void)

longlong FUN_143646b20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x228) != 0) {
    return (ulonglong)(uint)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x50)) +
           *(longlong *)(param_1 + 0x228);
  }
  return 0xffffffff;
}



// FUNCTION 143646b40 FUN_143646b40 body=7 status=ok
// SIG undefined FUN_143646b40(void)

undefined4 FUN_143646b40(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x220);
}



// FUNCTION 143646b50 FUN_143646b50 body=379 status=ok
// SIG undefined FUN_143646b50(void)

undefined8 FUN_143646b50(longlong param_1,void *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  void *_Dst;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x380);
  if (iVar2 == 0) {
    if ((*(longlong *)(param_1 + 0x378) == 0) && (cVar1 = FUN_14364d640(param_1), cVar1 == '\0')) {
      *(undefined4 *)(param_1 + 0x220) = 1;
      return 0;
    }
  }
  else {
    if (iVar2 == 2) {
      *(undefined4 *)(param_1 + 0x220) = 0x24;
      return 0;
    }
    if (iVar2 == 3) {
      *(undefined4 *)(param_1 + 0x220) = 0x21;
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x380) = 1;
  if (param_3 == 0) {
    *(char *)(param_1 + 900) = (char)param_4;
    if (param_4 != 0) {
      *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x38);
      iVar2 = (**(code **)(param_1 + 0x218))
                        (param_1,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                         param_1 + 0x30);
      *(int *)(param_1 + 0x220) = iVar2;
      if (iVar2 != 0) {
        *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_1 + 0x228);
        *(code **)(param_1 + 0x218) = FUN_143646b40;
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x380);
      if (-1 < iVar2) {
        if (iVar2 < 2) {
          *(undefined4 *)(param_1 + 0x380) = 2;
        }
        else if (iVar2 == 3) {
          (**(code **)(*(longlong *)(param_1 + 0x120) + 0x68))
                    (*(longlong *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x238),
                     *(undefined8 *)(param_1 + 0x30),param_1 + 0x300);
          *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_1 + 0x30);
          return 2;
        }
      }
    }
    return 1;
  }
  _Dst = (void *)FUN_143646950(param_1,param_3);
  if (_Dst == (void *)0x0) {
    return 0;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,param_2,(longlong)param_3);
  uVar3 = FUN_143646cd0(param_1,param_3,param_4);
  return uVar3;
}



// FUNCTION 143646cd0 FUN_143646cd0 body=333 status=ok
// SIG undefined FUN_143646cd0(void)

undefined4 FUN_143646cd0(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x380);
  uVar3 = 1;
  if (iVar2 == 0) {
    if ((*(longlong *)(param_1 + 0x378) == 0) && (cVar1 = FUN_14364d640(param_1), cVar1 == '\0')) {
      *(undefined4 *)(param_1 + 0x220) = 1;
      return 0;
    }
  }
  else {
    if (iVar2 == 2) {
      *(undefined4 *)(param_1 + 0x220) = 0x24;
      return 0;
    }
    if (iVar2 == 3) {
      *(undefined4 *)(param_1 + 0x220) = 0x21;
      return 0;
    }
  }
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + (longlong)param_2;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + param_2;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x380) = 1;
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_1 + 0x30);
  *(char *)(param_1 + 900) = (char)param_3;
  iVar2 = (**(code **)(param_1 + 0x218))
                    (param_1,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                     param_1 + 0x30);
  *(int *)(param_1 + 0x220) = iVar2;
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x380);
    if (-1 < iVar2) {
      if (iVar2 < 2) {
        if (param_3 != 0) {
          *(undefined4 *)(param_1 + 0x380) = 2;
          return 1;
        }
      }
      else if (iVar2 == 3) {
        uVar3 = 2;
      }
    }
    (**(code **)(*(longlong *)(param_1 + 0x120) + 0x68))
              (*(longlong *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x238),
               *(undefined8 *)(param_1 + 0x30),param_1 + 0x300);
    *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_1 + 0x228);
    *(code **)(param_1 + 0x218) = FUN_143646b40;
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143646e20 FUN_143646e20 body=13 status=ok
// SIG undefined FUN_143646e20(void)

void FUN_143646e20(undefined8 param_1)

{
  FUN_14364bcf0(param_1,0,0,0);
  return;
}



// FUNCTION 143646e30 FUN_143646e30 body=541 status=ok
// SIG undefined FUN_143646e30(void)

void FUN_143646e30(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_1 == 0) {
    return;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x2b8);
  do {
    puVar4 = puVar3;
    if (puVar3 == (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x2c0);
      if (puVar4 == (undefined8 *)0x0) {
        lVar1 = *(longlong *)(param_1 + 0x240);
        do {
          lVar2 = lVar1;
          if (lVar1 == 0) {
            lVar2 = *(longlong *)(param_1 + 0x248);
            if (lVar2 == 0) {
              lVar1 = *(longlong *)(param_1 + 0x2d0);
              while (lVar1 != 0) {
                lVar2 = *(longlong *)(lVar1 + 8);
                (**(code **)(param_1 + 0x28))(*(undefined8 *)(lVar1 + 0x20));
                (**(code **)(param_1 + 0x28))(lVar1);
                lVar1 = lVar2;
              }
              lVar1 = *(longlong *)(param_1 + 0x2c8);
              while (lVar1 != 0) {
                lVar2 = *(longlong *)(lVar1 + 8);
                (**(code **)(param_1 + 0x28))(*(undefined8 *)(lVar1 + 0x20));
                (**(code **)(param_1 + 0x28))(lVar1);
                lVar1 = lVar2;
              }
              puVar3 = *(undefined8 **)(param_1 + 0x308);
              while (puVar3 != (undefined8 *)0x0) {
                puVar3 = (undefined8 *)*puVar3;
                (**(code **)(*(longlong *)(param_1 + 0x330) + 0x10))();
              }
              puVar3 = *(undefined8 **)(param_1 + 0x310);
              while (puVar3 != (undefined8 *)0x0) {
                puVar3 = (undefined8 *)*puVar3;
                (**(code **)(*(longlong *)(param_1 + 0x330) + 0x10))();
              }
              puVar3 = *(undefined8 **)(param_1 + 0x338);
              while (puVar3 != (undefined8 *)0x0) {
                puVar3 = (undefined8 *)*puVar3;
                (**(code **)(*(longlong *)(param_1 + 0x360) + 0x10))();
              }
              puVar3 = *(undefined8 **)(param_1 + 0x340);
              while (puVar3 != (undefined8 *)0x0) {
                puVar3 = (undefined8 *)*puVar3;
                (**(code **)(*(longlong *)(param_1 + 0x360) + 0x10))();
              }
              if ((*(char *)(param_1 + 0x388) == '\0') && (*(longlong *)(param_1 + 0x2a8) != 0)) {
                FUN_14364a7f0(*(longlong *)(param_1 + 0x2a8),*(longlong *)(param_1 + 0x378) == 0,
                              param_1 + 0x18);
              }
              (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x2e8));
              (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x368));
              (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x10));
              (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x58));
              (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x2f0));
              (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x1d8));
              if (*(code **)(param_1 + 0x1f0) != (code *)0x0) {
                (**(code **)(param_1 + 0x1f0))(*(undefined8 *)(param_1 + 0x1e0));
              }
              (**(code **)(param_1 + 0x28))(param_1);
              return;
            }
            *(undefined8 *)(param_1 + 0x248) = 0;
          }
          lVar1 = *(longlong *)(lVar2 + 0x10);
          (**(code **)(param_1 + 0x28))(lVar2);
        } while( true );
      }
      *(undefined8 *)(param_1 + 0x2c0) = 0;
    }
    puVar3 = (undefined8 *)*puVar4;
    (**(code **)(param_1 + 0x28))(puVar4[8]);
    lVar1 = puVar4[10];
    while (lVar1 != 0) {
      lVar2 = *(longlong *)(lVar1 + 8);
      (**(code **)(param_1 + 0x28))(*(undefined8 *)(lVar1 + 0x20));
      (**(code **)(param_1 + 0x28))(lVar1);
      lVar1 = lVar2;
    }
    (**(code **)(param_1 + 0x28))(puVar4);
  } while( true );
}



// FUNCTION 143647050 FUN_143647050 body=5 status=ok
// SIG undefined FUN_143647050(void)

void FUN_143647050(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x78) = param_2;
  return;
}



// FUNCTION 143647060 Seek body=8 status=ok
// SIG undefined Seek(void)

void FArchiveFileWriterDummy::Seek(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x88) = param_2;
  return;
}



// FUNCTION 143647070 FUN_143647070 body=15 status=ok
// SIG undefined FUN_143647070(void)

void FUN_143647070(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xa0) = param_2;
  *(undefined1 *)(param_1 + 0x250) = 0;
  return;
}



// FUNCTION 143647080 FUN_143647080 body=15 status=ok
// SIG undefined FUN_143647080(void)

void FUN_143647080(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  return;
}



// FUNCTION 143647090 FUN_143647090 body=9 status=ok
// SIG undefined FUN_143647090(void)

void FUN_143647090(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



// FUNCTION 1436470a0 FUN_1436470a0 body=8 status=ok
// SIG undefined FUN_1436470a0(void)

void FUN_1436470a0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x80) = param_2;
  return;
}



// FUNCTION 1436470b0 FUN_1436470b0 body=17 status=ok
// SIG undefined FUN_1436470b0(void)

void FUN_1436470b0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (param_1[1] == lVar1) {
    param_1[1] = param_2;
  }
  return;
}



// FUNCTION 1436470d0 FUN_1436470d0 body=8 status=ok
// SIG undefined FUN_1436470d0(void)

void FUN_1436470d0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x118) = param_2;
  return;
}



// FUNCTION 1436470e0 FUN_1436470e0 body=107 status=ok
// SIG undefined FUN_1436470e0(void)

undefined8 FUN_1436470e0(longlong param_1,char param_2)

{
  if (*(int *)(param_1 + 0x380) == 2) {
    *(undefined4 *)(param_1 + 0x220) = 0x24;
    return 0;
  }
  if (*(int *)(param_1 + 0x380) == 3) {
    if (param_2 != '\0') {
      *(undefined4 *)(param_1 + 0x220) = 0x21;
      return 0;
    }
  }
  else if (param_2 != '\0') {
    if (*(char *)(param_1 + 0x388) != '\0') {
      *(undefined4 *)(param_1 + 0x220) = 0x25;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x380) = 3;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x380) = 2;
  return 1;
}



// FUNCTION 143647150 FUN_143647150 body=639 status=ok
// SIG undefined FUN_143647150(void)

undefined8
FUN_143647150(longlong param_1,longlong *param_2,longlong param_3,char *param_4,undefined8 *param_5)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  bool bVar8;
  char cVar9;
  char *pcVar10;
  
  cVar9 = '\0';
  bVar8 = true;
  bVar1 = true;
  if (*param_4 == '\0') {
    if (*param_2 != 0) {
      return 0x1c;
    }
  }
  else {
    pcVar5 = (char *)*param_2;
    if ((((pcVar5 != (char *)0x0) && (*pcVar5 == 'x')) && (pcVar5[1] == 'm')) && (pcVar5[2] == 'l'))
    {
      if (((pcVar5[3] == 'n') && (pcVar5[4] == 's')) && (pcVar5[5] == '\0')) {
        return 0x27;
      }
      cVar9 = '\0';
      if (pcVar5[3] == '\0') {
        cVar9 = '\x01';
      }
    }
  }
  pcVar10 = (char *)0x0;
  uVar6 = 0;
  pcVar5 = pcVar10;
  pcVar7 = pcVar10;
  if (*param_4 != '\0') {
    do {
      if ((bVar8) &&
         ((0x24 < (longlong)pcVar5 || (pcVar5[(longlong)param_4] != pcVar5[0x145b59e58])))) {
        bVar8 = false;
      }
      if (((cVar9 == '\0') && (bVar1)) &&
         ((0x1d < (longlong)pcVar5 || (pcVar5[(longlong)param_4] != pcVar5[0x145b59e80])))) {
        bVar1 = false;
      }
      pcVar5 = pcVar5 + 1;
      uVar6 = (int)pcVar7 + 1;
      pcVar7 = (char *)(ulonglong)uVar6;
    } while (pcVar5[(longlong)param_4] != '\0');
    if ((bVar8) && (uVar6 == 0x24)) {
      cVar4 = '\x01';
      goto LAB_143647268;
    }
  }
  cVar4 = '\0';
LAB_143647268:
  if ((bVar1) && (uVar6 == 0x1d)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (cVar9 != cVar4) {
    if (cVar9 != '\0') {
      return 0x26;
    }
    return 0x28;
  }
  if (bVar1) {
    return 0x28;
  }
  if (*(char *)(param_1 + 0x374) != '\0') {
    uVar6 = uVar6 + 1;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x2d0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(param_1 + 0x18))(0x30);
    if (puVar3 == (undefined8 *)0x0) {
      return 1;
    }
    lVar2 = (**(code **)(param_1 + 0x18))((longlong)(int)(uVar6 + 0x18));
    puVar3[4] = lVar2;
    if (lVar2 == 0) {
      (**(code **)(param_1 + 0x28))(puVar3);
      return 1;
    }
    *(uint *)((longlong)puVar3 + 0x2c) = uVar6 + 0x18;
  }
  else {
    if (*(int *)((longlong)puVar3 + 0x2c) < (int)uVar6) {
      lVar2 = (**(code **)(param_1 + 0x20))(puVar3[4],(longlong)(int)(uVar6 + 0x18));
      if (lVar2 == 0) {
        return 1;
      }
      puVar3[4] = lVar2;
      *(uint *)((longlong)puVar3 + 0x2c) = uVar6 + 0x18;
    }
    *(undefined8 *)(param_1 + 0x2d0) = puVar3[1];
  }
  *(uint *)(puVar3 + 5) = uVar6;
  _guard_xfg_dispatch_icall_nop((void *)puVar3[4],param_4,(longlong)(int)uVar6);
  if (*(char *)(param_1 + 0x374) != '\0') {
    *(char *)(((longlong)(int)uVar6 - 1U) + puVar3[4]) = *(char *)(param_1 + 0x374);
  }
  *puVar3 = param_2;
  puVar3[3] = param_3;
  puVar3[2] = param_2[1];
  if ((*param_4 == '\0') && (param_2 == (longlong *)(*(longlong *)(param_1 + 0x2a8) + 0x130))) {
    param_2[1] = 0;
  }
  else {
    param_2[1] = (longlong)puVar3;
  }
  puVar3[1] = *param_5;
  *param_5 = puVar3;
  if ((param_3 != 0) && (*(code **)(param_1 + 200) != (code *)0x0)) {
    if (param_2[1] != 0) {
      pcVar10 = param_4;
    }
    (**(code **)(param_1 + 200))(*(undefined8 *)(param_1 + 8),*param_2,pcVar10);
  }
  return 0;
}



// FUNCTION 1436473d0 FUN_1436473d0 body=1153 status=ok
// SIG undefined FUN_1436473d0(void)

int FUN_1436473d0(longlong param_1,longlong param_2,char param_3,longlong param_4,undefined8 param_5
                 ,longlong param_6)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  longlong local_res10;
  char local_res18;
  longlong local_28;
  longlong local_20;
  
  local_20 = *(longlong *)(param_1 + 0x2a8);
  local_res18 = param_3;
  iVar3 = (**(code **)(param_2 + 0x20))(param_2,param_4,param_5,&local_28);
  while (iVar3 + 4U < 0x2c) {
    switch(iVar3 + 4U) {
    case 0:
      return 0;
    case 1:
      local_28 = *(int *)(param_2 + 0x88) + param_4;
    case 0xb:
    case 0x2b:
      if ((local_res18 != '\0') ||
         ((*(longlong *)(param_6 + 0x18) != *(longlong *)(param_6 + 0x20) &&
          (*(char *)(*(longlong *)(param_6 + 0x18) + -1) != ' ')))) {
        if ((*(longlong *)(param_6 + 0x18) == *(longlong *)(param_6 + 0x10)) &&
           (cVar2 = FUN_14364c790(param_6), cVar2 == '\0')) {
          return 1;
        }
        **(undefined1 **)(param_6 + 0x18) = 0x20;
        *(longlong *)(param_6 + 0x18) = *(longlong *)(param_6 + 0x18) + 1;
      }
      break;
    default:
      goto switchD_14364743b_caseD_2;
    case 3:
      if (param_2 == *(longlong *)(param_1 + 0x120)) {
        *(longlong *)(param_1 + 0x228) = param_4;
      }
      return 4;
    case 4:
      if (param_2 == *(longlong *)(param_1 + 0x120)) {
        *(longlong *)(param_1 + 0x228) = local_28;
      }
      return 4;
    case 10:
      lVar5 = FUN_14364c120(param_6,param_2,param_4,local_28);
      if (lVar5 == 0) {
        return 1;
      }
      break;
    case 0xd:
      uVar4 = (**(code **)(param_2 + 0x60))
                        (param_2,*(int *)(param_2 + 0x88) + param_4,
                         local_28 - *(int *)(param_2 + 0x88));
      local_res10 = CONCAT44(local_res10._4_4_,uVar4);
      if ((char)uVar4 == '\0') {
        lVar5 = FUN_14364c120(param_1 + 0x338,param_2,*(int *)(param_2 + 0x88) + param_4,
                              local_28 - *(int *)(param_2 + 0x88));
        if (lVar5 == 0) {
          return 1;
        }
        if ((*(longlong *)(param_1 + 0x350) == *(longlong *)(param_1 + 0x348)) &&
           (cVar2 = FUN_14364c790(), cVar2 == '\0')) {
          return 1;
        }
        **(undefined1 **)(param_1 + 0x350) = 0;
        *(longlong *)(param_1 + 0x350) = *(longlong *)(param_1 + 0x350) + 1;
        if (*(longlong *)(param_1 + 0x358) == 0) {
          return 1;
        }
        local_res10 = FUN_14364b780(param_1,local_20,*(longlong *)(param_1 + 0x358),0);
        *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_1 + 0x358);
        if (param_6 == local_20 + 0xa0) {
          if (*(int *)(param_1 + 0x20c) != 0) {
            if (*(char *)(local_20 + 0x102) == '\0') {
              bVar6 = *(char *)(local_20 + 0x101) != '\0';
            }
            else {
              bVar6 = *(longlong *)(param_1 + 0x240) != 0;
            }
LAB_14364767e:
            if (!bVar6) goto LAB_143647687;
          }
          if (local_res10 == 0) break;
        }
        else {
          if (*(char *)(local_20 + 0x101) != '\0') {
            bVar6 = *(char *)(local_20 + 0x102) == '\0';
            goto LAB_14364767e;
          }
LAB_143647687:
          if (local_res10 == 0) {
            return 0xb;
          }
          if (*(char *)(local_res10 + 0x3a) == '\0') {
            return 0x18;
          }
        }
        if (*(char *)(local_res10 + 0x38) != '\0') {
          if (param_2 == *(longlong *)(param_1 + 0x120)) {
            *(longlong *)(param_1 + 0x228) = param_4;
          }
          return 0xc;
        }
        if (*(longlong *)(local_res10 + 0x30) != 0) {
          if (param_2 == *(longlong *)(param_1 + 0x120)) {
            *(longlong *)(param_1 + 0x228) = param_4;
          }
          return 0xf;
        }
        lVar5 = *(longlong *)(local_res10 + 8);
        if (lVar5 == 0) {
          if (param_2 == *(longlong *)(param_1 + 0x120)) {
            *(longlong *)(param_1 + 0x228) = param_4;
          }
          return 0x10;
        }
        *(undefined1 *)(local_res10 + 0x38) = 1;
        iVar3 = FUN_1436473d0(param_1,*(undefined8 *)(param_1 + 0x1c0),local_res18,lVar5,
                              *(int *)(local_res10 + 0x10) + lVar5,param_6);
        *(undefined1 *)(local_res10 + 0x38) = 0;
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      else {
        if ((*(longlong *)(param_6 + 0x18) == *(longlong *)(param_6 + 0x10)) &&
           (cVar2 = FUN_14364c790(param_6), cVar2 == '\0')) {
          return 1;
        }
        **(undefined1 **)(param_6 + 0x18) = (char)local_res10;
        *(longlong *)(param_6 + 0x18) = *(longlong *)(param_6 + 0x18) + 1;
      }
      break;
    case 0xe:
      iVar3 = (**(code **)(param_2 + 0x58))(param_2,param_4);
      if (iVar3 < 0) {
LAB_14364773e:
        if (param_2 == *(longlong *)(param_1 + 0x120)) {
          *(longlong *)(param_1 + 0x228) = param_4;
        }
        return 0xe;
      }
      if (((local_res18 != '\0') || (iVar3 != 0x20)) ||
         ((*(longlong *)(param_6 + 0x18) != *(longlong *)(param_6 + 0x20) &&
          (*(char *)(*(longlong *)(param_6 + 0x18) + -1) != ' ')))) {
        iVar3 = FUN_143654cb0(iVar3,local_res8);
        local_res10 = CONCAT44(local_res10._4_4_,iVar3);
        if (iVar3 == 0) goto LAB_14364773e;
        lVar5 = 0;
        if (0 < iVar3) {
          do {
            if ((*(longlong *)(param_6 + 0x18) == *(longlong *)(param_6 + 0x10)) &&
               (cVar2 = FUN_14364c790(param_6), cVar2 == '\0')) {
              return 1;
            }
            puVar1 = local_res8 + lVar5;
            lVar5 = lVar5 + 1;
            **(undefined1 **)(param_6 + 0x18) = *puVar1;
            *(longlong *)(param_6 + 0x18) = *(longlong *)(param_6 + 0x18) + 1;
          } while (lVar5 < (int)local_res10);
        }
      }
    }
    param_4 = local_28;
    iVar3 = (**(code **)(param_2 + 0x20))(param_2,local_28,param_5,&local_28);
  }
switchD_14364743b_caseD_2:
  if (param_2 == *(longlong *)(param_1 + 0x120)) {
    *(longlong *)(param_1 + 0x228) = param_4;
  }
  return 0x17;
}



// FUNCTION 1436478b0 FUN_1436478b0 body=144 status=ok
// SIG undefined FUN_1436478b0(void)

longlong FUN_1436478b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_res8;
  longlong local_res10;
  
  lVar1 = *(longlong *)(param_1 + 0x2a8);
  lVar2 = (**(code **)(param_1 + 0x18))
                    ((longlong)(*(int *)(lVar1 + 0x158) * 0x20 + *(int *)(lVar1 + 0x150)));
  if (lVar2 == 0) {
    return 0;
  }
  local_res8 = (ulonglong)*(uint *)(lVar1 + 0x158) * 0x20 + lVar2;
  local_res10 = lVar2 + 0x20;
  FUN_143647940(param_1,0,lVar2,&local_res10,&local_res8);
  return lVar2;
}



// FUNCTION 143647940 FUN_143647940 body=310 status=ok
// SIG undefined FUN_143647940(void)

void FUN_143647940(longlong param_1,int param_2,int *param_3,longlong *param_4,longlong *param_5)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  longlong lVar7;
  ulonglong uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x2a8);
  lVar7 = (longlong)param_2 * 0x20;
  iVar4 = *(int *)(lVar7 + *(longlong *)(lVar2 + 0x148));
  *param_3 = iVar4;
  param_3[1] = *(int *)(*(longlong *)(lVar2 + 0x148) + 4 + lVar7);
  if (iVar4 == 4) {
    *(longlong *)(param_3 + 2) = *param_5;
    pcVar3 = *(char **)(*(longlong *)(lVar2 + 0x148) + 8 + lVar7);
    *(char *)*param_5 = *pcVar3;
    *param_5 = *param_5 + 1;
    cVar1 = *pcVar3;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      *(char *)*param_5 = *pcVar3;
      *param_5 = *param_5 + 1;
      cVar1 = *pcVar3;
    }
    param_3[4] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    return;
  }
  uVar6 = 0;
  uVar5 = *(uint *)(*(longlong *)(lVar2 + 0x148) + 0x18 + lVar7);
  param_3[4] = uVar5;
  *(longlong *)(param_3 + 6) = *param_4;
  *param_4 = *param_4 + (ulonglong)uVar5 * 0x20;
  iVar4 = *(int *)(*(longlong *)(lVar2 + 0x148) + 0x10 + lVar7);
  if (param_3[4] != 0) {
    do {
      FUN_143647940(param_1,iVar4,uVar6 * 0x20 + *(longlong *)(param_3 + 6),param_4,param_5);
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x1c + *(longlong *)(lVar2 + 0x148));
    } while (uVar5 < (uint)param_3[4]);
  }
  param_3[2] = 0;
  param_3[3] = 0;
  return;
}



// FUNCTION 143647a80 FUN_143647a80 body=263 status=ok
// SIG undefined FUN_143647a80(void)

ulonglong FUN_143647a80(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong local_res10;
  
  local_res10 = param_2;
  uVar3 = FUN_143647d00(param_1,*(undefined8 *)(param_1 + 0x120),&local_res10,param_3,param_4,
                        *(char *)(param_1 + 900) == '\0');
  if ((int)uVar3 == 0) {
    if (local_res10 != 0) {
      if (*(longlong *)(param_1 + 0x378) != 0) {
        *(code **)(param_1 + 0x218) = FUN_14364ac40;
        uVar3 = FUN_14364ac40(param_1,local_res10,param_3,param_4);
        return uVar3;
      }
      *(code **)(param_1 + 0x218) = FUN_143647b90;
      uVar2 = FUN_143648030(param_1,0,*(undefined8 *)(param_1 + 0x120),local_res10,param_3,param_4,
                            *(char *)(param_1 + 900) == '\0');
      uVar3 = (ulonglong)uVar2;
      if (uVar2 == 0) {
        cVar1 = FUN_14364e580(param_1);
        if (cVar1 == '\0') {
          uVar3 = 1;
        }
      }
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143647b90 FUN_143647b90 body=88 status=ok
// SIG undefined FUN_143647b90(void)

int FUN_143647b90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_143648030(param_1,0,*(undefined8 *)(param_1 + 0x120),param_2,param_3,param_4,
                        *(char *)(param_1 + 900) == '\0');
  if ((iVar2 == 0) && (cVar1 = FUN_14364e580(param_1), cVar1 == '\0')) {
    return 1;
  }
  return iVar2;
}



// FUNCTION 143647bf0 FUN_143647bf0 body=266 status=ok
// SIG undefined FUN_143647bf0(void)

undefined8
FUN_143647bf0(longlong param_1,longlong param_2,char param_3,char param_4,longlong param_5,
             longlong param_6)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  if ((param_5 != 0) || (param_4 != '\0')) {
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      plVar1 = *(longlong **)(param_1 + 0x20);
      do {
        if (param_2 == *plVar1) {
          return 1;
        }
        iVar5 = iVar5 + 1;
        plVar1 = plVar1 + 3;
      } while (iVar5 < *(int *)(param_1 + 0x18));
    }
    if (((param_4 != '\0') && (*(longlong *)(param_1 + 0x10) == 0)) &&
       (*(char *)(param_2 + 0x11) == '\0')) {
      *(longlong *)(param_1 + 0x10) = param_2;
    }
  }
  iVar5 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x18) == iVar5) {
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0x1c) = 8;
      lVar2 = (**(code **)(param_6 + 0x18))(0xc0);
      *(longlong *)(param_1 + 0x20) = lVar2;
      if (lVar2 != 0) goto LAB_143647cb4;
    }
    else {
      lVar2 = (**(code **)(param_6 + 0x20))
                        (*(undefined8 *)(param_1 + 0x20),(longlong)(iVar5 * 2) * 0x18);
      if (lVar2 != 0) {
        *(int *)(param_1 + 0x1c) = iVar5 * 2;
        *(longlong *)(param_1 + 0x20) = lVar2;
        goto LAB_143647cb4;
      }
    }
    uVar4 = 0;
  }
  else {
LAB_143647cb4:
    lVar3 = (longlong)*(int *)(param_1 + 0x18);
    lVar2 = *(longlong *)(param_1 + 0x20);
    *(longlong *)(lVar2 + lVar3 * 0x18) = param_2;
    *(longlong *)(lVar2 + 0x10 + lVar3 * 0x18) = param_5;
    *(char *)(lVar2 + 8 + lVar3 * 0x18) = param_3;
    if (param_3 == '\0') {
      *(undefined1 *)(param_2 + 0x10) = 1;
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 143647d00 FUN_143647d00 body=725 status=ok
// SIG undefined FUN_143647d00(void)

undefined8
FUN_143647d00(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,char param_6)

{
  code *pcVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined8 local_res20;
  undefined8 local_58 [3];
  
  local_58[0] = *param_3;
  if (param_2 == *(longlong *)(param_1 + 0x120)) {
    puVar6 = (undefined8 *)(param_1 + 0x228);
    *puVar6 = local_58[0];
    puVar5 = (undefined8 *)(param_1 + 0x230);
  }
  else {
    puVar6 = *(undefined8 **)(param_1 + 0x240);
    puVar5 = puVar6 + 1;
  }
  *puVar6 = local_58[0];
  *param_3 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  iVar3 = (**(code **)(param_2 + 0x10))(param_2,local_58[0],param_4,&local_res10);
  *puVar5 = local_res10;
  while (iVar3 + 4U < 0x2d) {
    switch(iVar3 + 4U) {
    case 0:
    case 3:
      if (param_6 == '\0') {
        return 0x14;
      }
      goto LAB_143647fa9;
    default:
      goto switchD_143647da4_caseD_1;
    case 2:
      if (param_6 == '\0') {
        return 6;
      }
LAB_143647fa9:
      *param_5 = local_58[0];
      return 0;
    case 4:
      uVar4 = 4;
      goto LAB_143647f1d;
    case 10:
      pcVar1 = *(code **)(param_1 + 0x78);
      if (pcVar1 == (code *)0x0) {
        param_4 = local_res20;
        if (*(longlong *)(param_1 + 0xa0) != 0) {
          FUN_14364d010(param_1,param_2,local_58[0],local_res10);
          param_4 = local_res20;
        }
      }
      else if (*(char *)(param_2 + 0x8c) == '\0') {
        local_res8 = *(undefined8 *)(param_1 + 0x58);
        iVar3 = (**(code **)(param_2 + 0x78))
                          (param_2,local_58,local_res10,&local_res8,*(undefined8 *)(param_1 + 0x60))
        ;
        *puVar5 = local_res10;
        (*pcVar1)(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                  (int)local_res8 - *(int *)(param_1 + 0x58));
        while ((param_4 = local_res20, iVar3 != 0 && (iVar3 != 1))) {
          *puVar6 = local_58[0];
          local_res8 = *(undefined8 *)(param_1 + 0x58);
          iVar3 = (**(code **)(param_2 + 0x78))
                            (param_2,local_58,local_res10,&local_res8,
                             *(undefined8 *)(param_1 + 0x60));
          *puVar5 = local_res10;
          (*pcVar1)(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                    (int)local_res8 - *(int *)(param_1 + 0x58));
        }
      }
      else {
        (*pcVar1)(*(undefined8 *)(param_1 + 8),local_58[0],(int)local_res10 - (int)local_58[0]);
        param_4 = local_res20;
      }
      break;
    case 0xb:
      if (*(code **)(param_1 + 0x78) == (code *)0x0) {
        if (*(longlong *)(param_1 + 0xa0) != 0) {
          FUN_14364d010(param_1,param_2,local_58[0],local_res10);
        }
      }
      else {
        uVar2 = (ulonglong)local_res8 >> 8;
        local_res8 = CONCAT71((int7)uVar2,10);
        (**(code **)(param_1 + 0x78))(*(undefined8 *)(param_1 + 8),&local_res8,1);
      }
      break;
    case 0x2c:
      if (*(code **)(param_1 + 0x98) == (code *)0x0) {
        if (*(longlong *)(param_1 + 0xa0) != 0) {
          FUN_14364d010(param_1,param_2,local_58[0],local_res10);
        }
      }
      else {
        (**(code **)(param_1 + 0x98))(*(undefined8 *)(param_1 + 8));
      }
      *local_res18 = local_res10;
      *param_5 = local_res10;
      if (*(int *)(param_1 + 0x380) != 2) {
        return 0;
      }
      return 0x23;
    }
    *puVar6 = local_res10;
    if (*(int *)(param_1 + 0x380) == 2) {
      return 0x23;
    }
    if (*(int *)(param_1 + 0x380) == 3) {
      *param_5 = local_res10;
      return 0;
    }
    local_58[0] = local_res10;
    iVar3 = (**(code **)(param_2 + 0x10))(param_2,local_res10,param_4,&local_res10);
    *puVar5 = local_res10;
  }
switchD_143647da4_caseD_1:
  uVar4 = 0x17;
LAB_143647f1d:
  *puVar6 = local_res10;
  return uVar4;
}



// FUNCTION 143648030 FUN_143648030 body=3096 status=ok
// SIG undefined FUN_143648030(void)

undefined8
FUN_143648030(longlong param_1,int param_2,longlong param_3,longlong param_4,longlong param_5,
             longlong *param_6,char param_7)

{
  undefined8 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  char *pcVar12;
  char *pcVar13;
  longlong lVar14;
  void *_Buf2;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 local_res8;
  int local_res10;
  longlong *local_res18;
  longlong local_res20;
  longlong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined1 local_90 [8];
  longlong local_88;
  longlong *local_80;
  longlong local_78 [7];
  
  local_88 = *(longlong *)(param_1 + 0x2a8);
  if (param_3 == *(longlong *)(param_1 + 0x120)) {
    plVar15 = (longlong *)(param_1 + 0x228);
    plVar16 = (longlong *)(param_1 + 0x230);
  }
  else {
    plVar15 = *(longlong **)(param_1 + 0x240);
    plVar16 = plVar15 + 1;
  }
  *plVar15 = param_4;
  local_res10 = param_2;
  local_res20 = param_4;
  local_98 = plVar16;
  local_80 = plVar15;
  do {
    lVar11 = local_88;
    iVar7 = local_res10;
    local_a8 = local_res20;
    uVar5 = (**(code **)(param_3 + 8))(param_3,local_res20,param_5,&local_a8);
    *plVar16 = local_a8;
    switch(uVar5) {
    case 0:
      *plVar15 = local_a8;
      return 4;
    case 1:
    case 2:
      puVar9 = *(undefined8 **)(param_1 + 0x2c0);
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)(**(code **)(param_1 + 0x18))(0x58);
        if (puVar9 == (undefined8 *)0x0) {
          return 1;
        }
        lVar11 = (**(code **)(param_1 + 0x18))();
        puVar9[8] = lVar11;
        if (lVar11 == 0) {
          (**(code **)(param_1 + 0x28))(puVar9);
          return 1;
        }
        puVar9[9] = lVar11 + 0x20;
      }
      else {
        *(undefined8 *)(param_1 + 0x2c0) = *puVar9;
      }
      puVar9[10] = 0;
      *puVar9 = *(undefined8 *)(param_1 + 0x2b8);
      *(undefined8 **)(param_1 + 0x2b8) = puVar9;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[1] = *(int *)(param_3 + 0x88) + local_res20;
      uVar5 = (**(code **)(param_3 + 0x40))(param_3);
      *(undefined4 *)(puVar9 + 2) = uVar5;
      *(int *)(param_1 + 0x254) = *(int *)(param_1 + 0x254) + 1;
      local_res18 = (longlong *)puVar9[1];
      lVar11 = (longlong)*(int *)(puVar9 + 2) + (longlong)local_res18;
      local_a0 = (undefined1 *)puVar9[8];
      iVar6 = (**(code **)(param_3 + 0x78))(param_3,&local_res18,lVar11,&local_a0,puVar9[9] + -1);
      iVar7 = (int)local_a0 - *(int *)(puVar9 + 8);
      while ((iVar6 != 0 && (iVar6 != 1))) {
        lVar14 = (longlong)((*(int *)(puVar9 + 9) - *(int *)(puVar9 + 8)) * 2);
        lVar8 = (**(code **)(param_1 + 0x20))(puVar9[8],lVar14);
        if (lVar8 == 0) {
          return 1;
        }
        puVar9[8] = lVar8;
        puVar9[9] = lVar8 + lVar14;
        local_a0 = (undefined1 *)(iVar7 + lVar8);
        iVar6 = (**(code **)(param_3 + 0x78))(param_3,&local_res18,lVar11,&local_a0,puVar9[9] + -1);
        iVar7 = (int)local_a0 - *(int *)(puVar9 + 8);
      }
      puVar9[3] = puVar9[8];
      *(int *)(puVar9 + 6) = iVar7;
      *local_a0 = 0;
      uVar10 = FUN_14364d740(param_1,param_3,local_res20,puVar9 + 3,puVar9 + 10);
      if ((int)uVar10 != 0) {
        return uVar10;
      }
      if (*(code **)(param_1 + 0x68) == (code *)0x0) {
        if (*(longlong *)(param_1 + 0xa0) != 0) {
          FUN_14364d010(param_1,param_3,local_res20,local_a8);
        }
      }
      else {
        (**(code **)(param_1 + 0x68))
                  (*(undefined8 *)(param_1 + 8),puVar9[3],*(undefined8 *)(param_1 + 0x2e8));
      }
      if (*(longlong *)(param_1 + 0x310) == 0) {
        *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x308);
      }
      else {
        puVar9 = *(undefined8 **)(param_1 + 0x308);
        while (puVar9 != (undefined8 *)0x0) {
          puVar1 = (undefined8 *)*puVar9;
          *puVar9 = *(undefined8 *)(param_1 + 0x310);
          *(undefined8 **)(param_1 + 0x310) = puVar9;
          puVar9 = puVar1;
        }
      }
      *(undefined8 *)(param_1 + 0x308) = 0;
      *(undefined8 *)(param_1 + 0x328) = 0;
      *(undefined8 *)(param_1 + 800) = 0;
      *(undefined8 *)(param_1 + 0x318) = 0;
      plVar15 = local_80;
      plVar16 = local_98;
      break;
    case 3:
    case 4:
      lVar8 = *(int *)(param_3 + 0x88) + local_res20;
      local_res18 = (longlong *)0x0;
      iVar7 = (**(code **)(param_3 + 0x40))(param_3,lVar8);
      lVar11 = param_1 + 0x308;
      lVar8 = FUN_14364c120(lVar11,param_3,lVar8,iVar7 + lVar8);
      if (lVar8 == 0) {
        return 1;
      }
      if ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318)) &&
         (cVar4 = FUN_14364c790(lVar11), cVar4 == '\0')) {
        return 1;
      }
      **(undefined1 **)(param_1 + 800) = 0;
      local_78[0] = *(longlong *)(param_1 + 0x328);
      *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
      if (local_78[0] == 0) {
        return 1;
      }
      *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 800);
      uVar10 = FUN_14364d740(param_1,param_3,local_res20,local_78,&local_res18);
      lVar8 = local_78[0];
      if ((int)uVar10 != 0) {
        return uVar10;
      }
      *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 800);
      pcVar3 = *(code **)(param_1 + 0x68);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(*(undefined8 *)(param_1 + 8),local_78[0],*(undefined8 *)(param_1 + 0x2e8));
      }
      if (*(longlong *)(param_1 + 0x70) == 0) {
        if ((pcVar3 == (code *)0x0) && (*(longlong *)(param_1 + 0xa0) != 0)) {
          FUN_14364d010(param_1,param_3,local_res20,local_a8);
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x68) != 0) {
          *plVar15 = *local_98;
        }
        (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 8),lVar8);
      }
      FUN_14364c540(lVar11);
      plVar16 = local_res18;
      while (plVar16 != (longlong *)0x0) {
        if (*(code **)(param_1 + 0xd0) != (code *)0x0) {
          (**(code **)(param_1 + 0xd0))(*(undefined8 *)(param_1 + 8),*(undefined8 *)*plVar16);
        }
        plVar2 = (longlong *)plVar16[1];
        plVar16[1] = *(longlong *)(param_1 + 0x2d0);
        *(longlong **)(param_1 + 0x2d0) = plVar16;
        *(longlong *)(*plVar16 + 8) = plVar16[2];
        plVar16 = plVar2;
      }
      iVar7 = *(int *)(param_1 + 0x254);
      plVar16 = local_98;
      goto joined_r0x0001436487f3;
    case 5:
      if (*(int *)(param_1 + 0x254) == iVar7) {
        return 0xd;
      }
      puVar9 = *(undefined8 **)(param_1 + 0x2b8);
      *(undefined8 *)(param_1 + 0x2b8) = *puVar9;
      *puVar9 = *(undefined8 *)(param_1 + 0x2c0);
      *(undefined8 **)(param_1 + 0x2c0) = puVar9;
      _Buf2 = (void *)(*(int *)(param_3 + 0x88) * 2 + local_res20);
      iVar7 = (**(code **)(param_3 + 0x40))(param_3,_Buf2);
      if ((iVar7 != *(int *)(puVar9 + 2)) ||
         (iVar7 = _guard_xfg_dispatch_icall_nop((void *)puVar9[1],_Buf2,(longlong)iVar7), iVar7 != 0
         )) {
        *plVar15 = (longlong)_Buf2;
        return 7;
      }
      *(int *)(param_1 + 0x254) = *(int *)(param_1 + 0x254) + -1;
      if (*(longlong *)(param_1 + 0x70) == 0) {
        if (*(longlong *)(param_1 + 0xa0) != 0) {
          FUN_14364d010(param_1,param_3,local_res20,local_a8);
        }
      }
      else {
        pcVar12 = (char *)puVar9[4];
        if ((*(char *)(param_1 + 0x1d0) != '\0') && (pcVar12 != (char *)0x0)) {
          pcVar13 = (char *)((longlong)*(int *)((longlong)puVar9 + 0x34) + puVar9[3]);
          cVar4 = *pcVar12;
          while (cVar4 != '\0') {
            pcVar12 = pcVar12 + 1;
            *pcVar13 = cVar4;
            pcVar13 = pcVar13 + 1;
            cVar4 = *pcVar12;
          }
          pcVar12 = (char *)puVar9[5];
          if ((*(char *)(param_1 + 0x1d1) != '\0') && (pcVar12 != (char *)0x0)) {
            *pcVar13 = *(char *)(param_1 + 0x374);
            cVar4 = *pcVar12;
            while (pcVar13 = pcVar13 + 1, cVar4 != '\0') {
              *pcVar13 = cVar4;
              pcVar12 = pcVar12 + 1;
              cVar4 = *pcVar12;
            }
          }
          *pcVar13 = '\0';
        }
        (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 8),puVar9[3]);
      }
      lVar11 = puVar9[10];
      while (lVar11 != 0) {
        plVar2 = (longlong *)puVar9[10];
        if (*(code **)(param_1 + 0xd0) != (code *)0x0) {
          (**(code **)(param_1 + 0xd0))(*(undefined8 *)(param_1 + 8),*(undefined8 *)*plVar2);
        }
        puVar9[10] = *(undefined8 *)(puVar9[10] + 8);
        plVar2[1] = *(longlong *)(param_1 + 0x2d0);
        *(longlong **)(param_1 + 0x2d0) = plVar2;
        *(longlong *)(*plVar2 + 8) = plVar2[2];
        lVar11 = puVar9[10];
      }
      iVar7 = *(int *)(param_1 + 0x254);
joined_r0x0001436487f3:
      if (iVar7 == 0) {
        uVar10 = FUN_14364aa30(param_1,local_a8,param_5,param_6);
        return uVar10;
      }
      break;
    case 6:
      pcVar3 = *(code **)(param_1 + 0x78);
      if (pcVar3 == (code *)0x0) goto switchD_1436480df_default;
      if (*(char *)(param_3 + 0x8c) == '\0') {
        local_res18 = *(longlong **)(param_1 + 0x58);
        iVar7 = (**(code **)(param_3 + 0x78))
                          (param_3,&local_res20,local_a8,&local_res18,
                           *(undefined8 *)(param_1 + 0x60));
        *plVar16 = local_res20;
        (*pcVar3)(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                  (int)local_res18 - *(int *)(param_1 + 0x58));
        while ((iVar7 != 0 && (iVar7 != 1))) {
          *plVar15 = local_res20;
          local_res18 = *(longlong **)(param_1 + 0x58);
          iVar7 = (**(code **)(param_3 + 0x78))
                            (param_3,&local_res20,local_a8,&local_res18,
                             *(undefined8 *)(param_1 + 0x60));
          *plVar16 = local_res20;
          (*pcVar3)(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                    (int)local_res18 - *(int *)(param_1 + 0x58));
        }
      }
      else {
        (*pcVar3)(*(undefined8 *)(param_1 + 8),local_res20,(int)local_a8 - (int)local_res20);
      }
      break;
    case 7:
      if (*(code **)(param_1 + 0x78) == (code *)0x0) goto switchD_1436480df_default;
      local_res18 = (longlong *)CONCAT71(local_res18._1_7_,10);
      (**(code **)(param_1 + 0x78))(*(undefined8 *)(param_1 + 8),&local_res18,1);
      break;
    case 8:
      if (*(code **)(param_1 + 0x90) == (code *)0x0) {
        if (*(longlong *)(param_1 + 0xa0) != 0) {
          FUN_14364d010(param_1,param_3,local_res20,local_a8);
        }
      }
      else {
        (**(code **)(param_1 + 0x90))(*(undefined8 *)(param_1 + 8));
      }
      uVar10 = FUN_143647d00(param_1,param_3,&local_a8,param_5,param_6,param_7);
      if ((int)uVar10 != 0) {
        return uVar10;
      }
      if (local_a8 == 0) {
        *(code **)(param_1 + 0x218) = FUN_143647a80;
        return 0;
      }
      break;
    case 9:
      cVar4 = (**(code **)(param_3 + 0x60))
                        (param_3,local_res20 + *(int *)(param_3 + 0x88),
                         local_a8 - *(int *)(param_3 + 0x88));
      local_res8 = CONCAT71(local_res8._1_7_,cVar4);
      if (cVar4 == '\0') {
        lVar8 = FUN_14364c120(lVar11 + 0xa0,param_3,local_res20 + *(int *)(param_3 + 0x88),
                              local_a8 - *(int *)(param_3 + 0x88));
        if (lVar8 == 0) {
          return 1;
        }
        if ((*(longlong *)(lVar11 + 0xb8) == *(longlong *)(lVar11 + 0xb0)) &&
           (cVar4 = FUN_14364c790(lVar11 + 0xa0), cVar4 == '\0')) {
          return 1;
        }
        **(undefined1 **)(lVar11 + 0xb8) = 0;
        *(longlong *)(lVar11 + 0xb8) = *(longlong *)(lVar11 + 0xb8) + 1;
        lVar11 = *(longlong *)(lVar11 + 0xc0);
        if (lVar11 == 0) {
          return 1;
        }
        puVar9 = (undefined8 *)FUN_14364b780(param_1,local_88,lVar11,0);
        *(undefined8 *)(local_88 + 0xb8) = *(undefined8 *)(local_88 + 0xc0);
        if ((*(char *)(local_88 + 0x101) == '\0') || (*(char *)(local_88 + 0x102) != '\0')) {
          if (puVar9 == (undefined8 *)0x0) {
            return 0xb;
          }
          if (*(char *)((longlong)puVar9 + 0x3a) == '\0') {
            return 0x18;
          }
        }
        else if (puVar9 == (undefined8 *)0x0) {
          if (*(code **)(param_1 + 0xf0) == (code *)0x0) goto switchD_1436480df_default;
          (**(code **)(param_1 + 0xf0))(*(undefined8 *)(param_1 + 8),lVar11,0);
          break;
        }
        if (*(char *)(puVar9 + 7) != '\0') {
          return 0xc;
        }
        if (puVar9[6] != 0) {
          return 0xf;
        }
        if (puVar9[1] == 0) {
          if (*(longlong *)(param_1 + 0xe0) == 0) goto switchD_1436480df_default;
          *(undefined1 *)(puVar9 + 7) = 1;
          lVar11 = FUN_14364af20(param_1);
          *(undefined1 *)(puVar9 + 7) = 0;
          if (lVar11 == 0) {
            return 1;
          }
          iVar7 = (**(code **)(param_1 + 0xe0))
                            (*(undefined8 *)(param_1 + 0xe8),lVar11,puVar9[4],puVar9[3],puVar9[5]);
          if (iVar7 == 0) {
            return 0x15;
          }
          *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x328);
        }
        else if (*(char *)(param_1 + 0x250) == '\0') {
          if (*(code **)(param_1 + 0xf0) == (code *)0x0) goto switchD_1436480df_default;
          (**(code **)(param_1 + 0xf0))(*(undefined8 *)(param_1 + 8),*puVar9,0);
        }
        else {
          uVar10 = FUN_14364c990(param_1,puVar9,0);
          if ((int)uVar10 != 0) {
            return uVar10;
          }
        }
      }
      else {
        if (*(code **)(param_1 + 0x78) == (code *)0x0) goto switchD_1436480df_default;
        (**(code **)(param_1 + 0x78))(*(undefined8 *)(param_1 + 8),&local_res8,1);
      }
      break;
    case 10:
      iVar7 = (**(code **)(param_3 + 0x58))(param_3,local_res20);
      if (iVar7 < 0) {
        return 0xe;
      }
      if (*(longlong *)(param_1 + 0x78) == 0) goto switchD_1436480df_default;
      uVar5 = FUN_143654cb0(iVar7,local_90);
      (**(code **)(param_1 + 0x78))(*(undefined8 *)(param_1 + 8),local_90,uVar5);
      break;
    case 0xb:
      iVar7 = FUN_14364d100(param_1,param_3,local_res20,local_a8);
      goto joined_r0x0001436489ec;
    case 0xc:
      return 0x11;
    case 0xd:
      iVar7 = FUN_14364cef0(param_1,param_3,local_res20,local_a8);
joined_r0x0001436489ec:
      if (iVar7 == 0) {
        return 1;
      }
      break;
    case 0xfffffffb:
      if (param_7 == '\0') {
        if (*(code **)(param_1 + 0x78) == (code *)0x0) {
          if (*(longlong *)(param_1 + 0xa0) != 0) {
            FUN_14364d010(param_1,param_3,local_res20,param_5);
          }
        }
        else if (*(char *)(param_3 + 0x8c) == '\0') {
          local_res8 = *(undefined8 *)(param_1 + 0x58);
          (**(code **)(param_3 + 0x78))
                    (param_3,&local_res20,param_5,&local_res8,*(undefined8 *)(param_1 + 0x60));
          (**(code **)(param_1 + 0x78))
                    (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                     (int)local_res8 - *(int *)(param_1 + 0x58));
        }
        else {
          (**(code **)(param_1 + 0x78))
                    (*(undefined8 *)(param_1 + 8),local_res20,(int)param_5 - (int)local_res20);
        }
        if (iVar7 == 0) {
          *plVar15 = param_5;
          return 3;
        }
        if (*(int *)(param_1 + 0x254) != iVar7) {
          *plVar15 = param_5;
          return 0xd;
        }
LAB_143648b05:
        *param_6 = param_5;
        return 0;
      }
      goto LAB_143648aa5;
    case 0xfffffffc:
      if (param_7 == '\0') {
        if (iVar7 < 1) {
          return 3;
        }
        if (*(int *)(param_1 + 0x254) != iVar7) {
          return 0xd;
        }
      }
      goto LAB_143648aa5;
    case 0xfffffffd:
      if (param_7 == '\0') {
        *plVar16 = param_5;
        if (*(code **)(param_1 + 0x78) == (code *)0x0) {
          if (*(longlong *)(param_1 + 0xa0) != 0) {
            FUN_14364d010(param_1,param_3,local_res20,param_5);
          }
        }
        else {
          local_res8 = CONCAT71(local_res8._1_7_,10);
          (**(code **)(param_1 + 0x78))(*(undefined8 *)(param_1 + 8),&local_res8,1);
        }
        if (iVar7 == 0) {
          return 3;
        }
        if (*(int *)(param_1 + 0x254) != iVar7) {
          return 0xd;
        }
        goto LAB_143648b05;
      }
      goto LAB_143648aa5;
    case 0xfffffffe:
      if (param_7 == '\0') {
        return 6;
      }
      goto LAB_143648aa5;
    case 0xffffffff:
      if (param_7 == '\0') {
        return 5;
      }
LAB_143648aa5:
      *param_6 = local_res20;
      return 0;
    default:
switchD_1436480df_default:
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        FUN_14364d010(param_1,param_3,local_res20,local_a8);
      }
    }
    local_res20 = local_a8;
    *plVar15 = local_a8;
    if (*(int *)(param_1 + 0x380) == 2) {
      return 0x23;
    }
    if (*(int *)(param_1 + 0x380) == 3) {
      *param_6 = local_a8;
      return 0;
    }
  } while( true );
}



// FUNCTION 143648ca0 FUN_143648ca0 body=293 status=ok
// SIG undefined FUN_143648ca0(void)

undefined8
FUN_143648ca0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,char param_6)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_res8;
  
  uVar1 = *param_3;
  if (param_2 == *(longlong *)(param_1 + 0x120)) {
    puVar3 = (undefined8 *)(param_1 + 0x228);
    *puVar3 = uVar1;
    puVar4 = (undefined8 *)(param_1 + 0x230);
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 0x240);
    puVar4 = puVar3 + 1;
  }
  *puVar3 = uVar1;
  *param_3 = 0;
  iVar2 = (**(code **)(param_2 + 0x18))(param_2,uVar1,param_4,&local_res8);
  *puVar4 = local_res8;
  if (iVar2 != -4) {
    if (iVar2 == -2) {
      if (param_6 == '\0') {
        return 6;
      }
      goto LAB_143648d8f;
    }
    if (iVar2 != -1) {
      if (iVar2 == 0) {
        *puVar3 = local_res8;
        return 4;
      }
      if (iVar2 != 0x2a) {
        *puVar3 = local_res8;
        return 0x17;
      }
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        FUN_14364d010(param_1,param_2,uVar1,local_res8);
      }
      *param_3 = local_res8;
      *param_5 = local_res8;
      if (*(int *)(param_1 + 0x380) != 2) {
        return 0;
      }
      return 0x23;
    }
  }
  if (param_6 == '\0') {
    return 2;
  }
LAB_143648d8f:
  *param_5 = uVar1;
  return 0;
}



// FUNCTION 143648dd0 FUN_143648dd0 body=6125 status=ok
// SIG undefined FUN_143648dd0(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_143648dd0(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4,
                       int param_5,longlong param_6,longlong *param_7,char param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 uVar17;
  char *pcVar18;
  bool bVar19;
  uint uVar20;
  undefined4 uVar21;
  
  lVar1 = *(longlong *)(param_1 + 0x2a8);
  if (param_2 == *(undefined8 **)(param_1 + 0x120)) {
    plVar15 = (longlong *)(param_1 + 0x228);
    plVar16 = (longlong *)(param_1 + 0x230);
  }
  else {
    plVar15 = *(longlong **)(param_1 + 0x240);
    plVar16 = plVar15 + 1;
  }
  do {
    *plVar15 = param_3;
    bVar19 = true;
    *plVar16 = param_6;
    if (param_5 < 1) {
      if ((param_8 != '\0') && (param_5 != 0)) {
LAB_14364a3b6:
        *param_7 = param_3;
        return 0;
      }
      if (param_5 == -0xf) {
        param_5 = 0xf;
      }
      else {
        if (param_5 == -4) {
          if ((param_2 == *(undefined8 **)(param_1 + 0x120)) ||
             (*(char *)(*(longlong *)(param_1 + 0x240) + 0x24) != '\0')) {
            if ((*(char *)(param_1 + 0x388) == '\0') &&
               (param_2 == *(undefined8 **)(param_1 + 0x120))) {
              return 3;
            }
            iVar5 = (**(code **)(param_1 + 0x1f8))
                              (param_1 + 0x1f8,0xfffffffc,param_4,param_4,param_2);
            if (iVar5 == -1) {
              return 0x1d;
            }
          }
          goto LAB_14364a3b6;
        }
        if (param_5 == -2) {
          return 6;
        }
        if (param_5 == -1) {
          return 5;
        }
        if (param_5 == 0) {
          *plVar15 = param_6;
          return 4;
        }
        param_5 = -param_5;
        param_6 = param_4;
      }
    }
    puVar13 = param_2;
    iVar5 = (**(code **)(param_1 + 0x1f8))(param_1 + 0x1f8,param_5,param_3,param_6,param_2);
    uVar20 = (uint)((ulonglong)puVar13 >> 0x20);
    switch(iVar5) {
    case 0:
      plVar8 = param_7;
      if (param_5 != 0xe) goto switchD_143648ec0_default;
      break;
    case 1:
      uVar17 = 0;
      goto LAB_143648ec4;
    case 2:
      if (*(char *)(param_1 + 0x389) != '\0') {
        uVar14 = *(undefined1 *)(lVar1 + 0x101);
        *(undefined1 *)(lVar1 + 0x101) = 1;
        if ((*(int *)(param_1 + 0x38c) != 0) && (*(longlong *)(param_1 + 0xe0) != 0)) {
          lVar9 = FUN_14364b780(param_1,lVar1 + 0x108,&DAT_145b59bf0,0x40);
          if (lVar9 == 0) {
            return 1;
          }
          *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(param_1 + 0x2b0);
          *(undefined1 *)(lVar1 + 0x103) = 0;
          iVar5 = (**(code **)(param_1 + 0xe0))
                            (*(undefined8 *)(param_1 + 0xe8),0,*(undefined8 *)(lVar9 + 0x20),
                             *(undefined8 *)(lVar9 + 0x18),*(undefined8 *)(lVar9 + 0x28));
          if (iVar5 == 0) {
            return 0x15;
          }
          if (*(char *)(lVar1 + 0x103) == '\0') {
            *(undefined1 *)(lVar1 + 0x101) = uVar14;
          }
          else if (((*(char *)(lVar1 + 0x102) == '\0') &&
                   (*(code **)(param_1 + 0xd8) != (code *)0x0)) &&
                  (iVar5 = (**(code **)(param_1 + 0xd8))(*(undefined8 *)(param_1 + 8)), iVar5 == 0))
          {
            return 0x16;
          }
        }
      }
      *(code **)(param_1 + 0x218) = FUN_143647b90;
      uVar11 = FUN_143647b90(param_1,param_3,param_4,param_7);
      return uVar11;
    case 3:
      lVar9 = *(longlong *)(param_1 + 0xa8);
      goto joined_r0x00014364a348;
    case 4:
      if (*(longlong *)(param_1 + 0xa8) == 0) {
        *(undefined8 *)(param_1 + 0x268) = 0;
      }
      else {
        lVar9 = FUN_14364c940(param_1 + 0x308,param_2,param_3,param_6);
        *(longlong *)(param_1 + 0x260) = lVar9;
        if (lVar9 == 0) {
          return 1;
        }
        *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 800);
        bVar19 = false;
        *(undefined8 *)(param_1 + 0x270) = 0;
        *(undefined8 *)(param_1 + 0x268) = 0;
      }
      goto LAB_14364a2d5;
    case 5:
      *(undefined1 *)(param_1 + 0x389) = 0;
      *(undefined1 *)(lVar1 + 0x101) = 1;
      if (*(longlong *)(param_1 + 0xa8) == 0) {
        *(undefined **)(param_1 + 0x268) = &DAT_145b59bf0;
      }
      else {
        lVar9 = FUN_14364c940(param_1 + 0x308,param_2,*(int *)(param_2 + 0x11) + param_3,
                              param_6 - *(int *)(param_2 + 0x11));
        *(longlong *)(param_1 + 0x268) = lVar9;
        if (lVar9 == 0) {
          return 1;
        }
        *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 800);
        bVar19 = false;
      }
      if (((*(char *)(lVar1 + 0x102) == '\0') && (*(int *)(param_1 + 0x38c) == 0)) &&
         ((*(code **)(param_1 + 0xd8) != (code *)0x0 &&
          (iVar5 = (**(code **)(param_1 + 0xd8))(*(undefined8 *)(param_1 + 8)), iVar5 == 0)))) {
        return 0x16;
      }
      if (*(longlong *)(param_1 + 600) == 0) {
        lVar9 = FUN_14364b780(param_1,lVar1 + 0x108,&DAT_145b59bf0,0x40);
        *(longlong *)(param_1 + 600) = lVar9;
        if (lVar9 == 0) {
          return 1;
        }
        *(undefined8 *)(lVar9 + 0x28) = 0;
      }
    case 0xd:
      if ((*(char *)(lVar1 + 0x100) != '\0') && (*(longlong *)(param_1 + 600) != 0)) {
        uVar17 = FUN_14364c940(lVar1 + 0xa0,param_2,*(int *)(param_2 + 0x11) + param_3,
                               param_6 - *(int *)(param_2 + 0x11));
        *(undefined8 *)(*(longlong *)(param_1 + 600) + 0x18) = uVar17;
        if (*(longlong *)(*(longlong *)(param_1 + 600) + 0x18) == 0) {
          return 1;
        }
        *(undefined8 *)(*(longlong *)(param_1 + 600) + 0x20) = *(undefined8 *)(param_1 + 0x2b0);
LAB_1436490c4:
        *(undefined8 *)(lVar1 + 0xc0) = *(undefined8 *)(lVar1 + 0xb8);
        plVar8 = param_7;
        if (*(longlong *)(param_1 + 0x110) != 0) break;
      }
      goto LAB_14364a2d5;
    case 6:
      *(undefined1 *)(param_1 + 0x389) = 0;
      lVar9 = FUN_14364b780(param_1,lVar1 + 0x108,&DAT_145b59bf0,0x40);
      *(longlong *)(param_1 + 600) = lVar9;
      if (lVar9 == 0) {
        return 1;
      }
      *(undefined1 *)(lVar1 + 0x101) = 1;
      if (*(longlong *)(param_1 + 0xa8) == 0) goto switchD_143648ec0_caseD_e;
      iVar5 = (*(code *)param_2[0xe])(param_2,param_3,param_6,plVar15);
      if (iVar5 == 0) {
        return 0x20;
      }
      lVar9 = FUN_14364c940(param_1 + 0x308,param_2,*(int *)(param_2 + 0x11) + param_3,
                            param_6 - *(int *)(param_2 + 0x11));
      if (lVar9 == 0) {
        return 1;
      }
      FUN_14364bc80(lVar9);
      bVar19 = false;
      *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 800);
      *(longlong *)(param_1 + 0x270) = lVar9;
      goto LAB_143649069;
    case 7:
      if (*(code **)(param_1 + 0xa8) == (code *)0x0) goto switchD_143648ec0_default;
      (**(code **)(param_1 + 0xa8))
                (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x260),
                 *(undefined8 *)(param_1 + 0x268),*(undefined8 *)(param_1 + 0x270),
                 CONCAT44(uVar20,1));
      *(undefined8 *)(param_1 + 0x260) = 0;
      FUN_14364c540(param_1 + 0x308);
      plVar8 = param_7;
      break;
    case 8:
      lVar9 = *(longlong *)(param_1 + 0x260);
      if (lVar9 != 0) {
        (**(code **)(param_1 + 0xa8))
                  (*(undefined8 *)(param_1 + 8),lVar9,*(undefined8 *)(param_1 + 0x268),
                   *(undefined8 *)(param_1 + 0x270),(ulonglong)uVar20 << 0x20);
        FUN_14364c540(param_1 + 0x308);
      }
      bVar19 = lVar9 == 0;
      if ((*(longlong *)(param_1 + 0x268) != 0) || (*(char *)(param_1 + 0x389) != '\0')) {
        uVar14 = *(undefined1 *)(lVar1 + 0x101);
        *(undefined1 *)(lVar1 + 0x101) = 1;
        if ((*(int *)(param_1 + 0x38c) != 0) && (*(longlong *)(param_1 + 0xe0) != 0)) {
          lVar9 = FUN_14364b780(param_1,lVar1 + 0x108,&DAT_145b59bf0,0x40);
          if (lVar9 == 0) {
            return 1;
          }
          if (*(char *)(param_1 + 0x389) != '\0') {
            *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(param_1 + 0x2b0);
          }
          *(undefined1 *)(lVar1 + 0x103) = 0;
          iVar5 = (**(code **)(param_1 + 0xe0))
                            (*(undefined8 *)(param_1 + 0xe8),0,*(undefined8 *)(lVar9 + 0x20),
                             *(undefined8 *)(lVar9 + 0x18),*(undefined8 *)(lVar9 + 0x28));
          if (iVar5 == 0) {
            return 0x15;
          }
          if (*(char *)(lVar1 + 0x103) == '\0') {
            if (*(longlong *)(param_1 + 0x268) == 0) {
              *(undefined1 *)(lVar1 + 0x101) = uVar14;
            }
          }
          else if (((*(char *)(lVar1 + 0x102) == '\0') &&
                   (*(code **)(param_1 + 0xd8) != (code *)0x0)) &&
                  (iVar5 = (**(code **)(param_1 + 0xd8))(*(undefined8 *)(param_1 + 8)), iVar5 == 0))
          {
            return 0x16;
          }
        }
        *(undefined1 *)(param_1 + 0x389) = 0;
      }
      if (*(code **)(param_1 + 0xb0) == (code *)0x0) goto LAB_14364a2d5;
      (**(code **)(param_1 + 0xb0))(*(undefined8 *)(param_1 + 8));
      plVar8 = param_7;
      break;
    case 9:
      iVar5 = (*(code *)param_2[0xc])(param_2,param_3,param_6);
      if (iVar5 == 0) {
        if (*(char *)(lVar1 + 0x100) != '\0') {
          lVar9 = FUN_14364c940(lVar1 + 0xa0,param_2,param_3,param_6);
          if (lVar9 == 0) {
            return 1;
          }
          plVar8 = (longlong *)FUN_14364b780(param_1,lVar1,lVar9,0x40);
          *(longlong **)(param_1 + 600) = plVar8;
          if (plVar8 == (longlong *)0x0) {
            return 1;
          }
          if (*plVar8 == lVar9) {
            *(undefined8 *)(lVar1 + 0xc0) = *(undefined8 *)(lVar1 + 0xb8);
            *(undefined8 *)(*(longlong *)(param_1 + 600) + 0x28) = 0;
            *(undefined1 *)(*(longlong *)(param_1 + 600) + 0x39) = 0;
            goto LAB_143649a77;
          }
        }
        goto LAB_143649a35;
      }
      *(undefined8 *)(param_1 + 600) = 0;
    default:
switchD_143648ec0_default:
      plVar8 = param_7;
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        FUN_14364d010(param_1,param_2,param_3,param_6);
        plVar8 = param_7;
      }
      break;
    case 10:
      if (*(char *)(lVar1 + 0x100) != '\0') {
        lVar9 = FUN_14364c940(lVar1 + 0xa0,param_2,param_3,param_6);
        if (lVar9 == 0) {
          return 1;
        }
        plVar8 = (longlong *)FUN_14364b780(param_1,lVar1 + 0x108,lVar9,0x40);
        *(longlong **)(param_1 + 600) = plVar8;
        if (plVar8 == (longlong *)0x0) {
          return 1;
        }
        if (*plVar8 == lVar9) {
          *(undefined8 *)(lVar1 + 0xc0) = *(undefined8 *)(lVar1 + 0xb8);
          *(undefined8 *)(*(longlong *)(param_1 + 600) + 0x28) = 0;
          *(undefined1 *)(*(longlong *)(param_1 + 600) + 0x39) = 1;
LAB_143649a77:
          if ((*(longlong *)(param_1 + 0x378) != 0) ||
             (uVar14 = 1, *(longlong *)(param_1 + 0x240) != 0)) {
            uVar14 = 0;
          }
          *(undefined1 *)(*(longlong *)(param_1 + 600) + 0x3a) = uVar14;
          lVar9 = *(longlong *)(param_1 + 0x110);
          goto joined_r0x00014364a348;
        }
      }
LAB_143649a35:
      *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(lVar1 + 0xc0);
      *(undefined8 *)(param_1 + 600) = 0;
      goto switchD_143648ec0_default;
    case 0xb:
      if (*(char *)(lVar1 + 0x100) != '\0') {
        lVar9 = *(longlong *)(param_1 + 0x110);
        goto joined_r0x00014364a348;
      }
      goto switchD_143648ec0_default;
    case 0xc:
      if (*(char *)(lVar1 + 0x100) != '\0') {
        uVar6 = FUN_14364e130(param_1,param_2,*(int *)(param_2 + 0x11) + param_3,
                              param_6 - *(int *)(param_2 + 0x11));
        if (*(longlong *)(param_1 + 600) == 0) {
          *(undefined8 *)(lVar1 + 0xe8) = *(undefined8 *)(lVar1 + 0xf0);
        }
        else {
          *(undefined8 *)(*(longlong *)(param_1 + 600) + 8) = *(undefined8 *)(lVar1 + 0xf0);
          *(int *)(*(longlong *)(param_1 + 600) + 0x10) =
               *(int *)(lVar1 + 0xe8) - *(int *)(lVar1 + 0xf0);
          *(undefined8 *)(lVar1 + 0xf0) = *(undefined8 *)(lVar1 + 0xe8);
          if (*(longlong *)(param_1 + 0x110) != 0) {
            *plVar16 = param_3;
            puVar13 = *(undefined8 **)(param_1 + 600);
            (**(code **)(param_1 + 0x110))
                      (*(undefined8 *)(param_1 + 8),*puVar13,
                       *(undefined1 *)((longlong)puVar13 + 0x39),puVar13[1],
                       CONCAT44(uVar20,*(undefined4 *)(puVar13 + 2)),
                       *(undefined8 *)(param_1 + 0x2b0),0,0,0);
            bVar19 = false;
          }
        }
        if (uVar6 != 0) {
          return (ulonglong)uVar6;
        }
        goto LAB_14364a2d5;
      }
      goto switchD_143648ec0_default;
    case 0xe:
switchD_143648ec0_caseD_e:
      iVar5 = (*(code *)param_2[0xe])(param_2,param_3,param_6,plVar15);
      if (iVar5 == 0) {
        return 0x20;
      }
LAB_143649069:
      if ((*(char *)(lVar1 + 0x100) == '\0') || (*(longlong *)(param_1 + 600) == 0))
      goto LAB_14364a2d5;
      lVar9 = FUN_14364c940(lVar1 + 0xa0,param_2,*(int *)(param_2 + 0x11) + param_3,
                            param_6 - *(int *)(param_2 + 0x11));
      if (lVar9 == 0) {
        return 1;
      }
      FUN_14364bc80(lVar9);
      *(longlong *)(*(longlong *)(param_1 + 600) + 0x28) = lVar9;
      goto LAB_1436490c4;
    case 0xf:
      if (((*(char *)(lVar1 + 0x100) == '\0') || (*(longlong *)(param_1 + 600) == 0)) ||
         (*(longlong *)(param_1 + 0x110) == 0)) goto switchD_143648ec0_default;
      *plVar16 = param_3;
      puVar13 = *(undefined8 **)(param_1 + 600);
      (**(code **)(param_1 + 0x110))
                (*(undefined8 *)(param_1 + 8),*puVar13,*(undefined1 *)((longlong)puVar13 + 0x39),0,
                 (ulonglong)uVar20 << 0x20,puVar13[4],puVar13[3],puVar13[5],0);
      plVar8 = param_7;
      break;
    case 0x10:
      if ((*(char *)(lVar1 + 0x100) == '\0') || (*(longlong *)(param_1 + 600) == 0))
      goto switchD_143648ec0_default;
      uVar17 = FUN_14364c940(lVar1 + 0xa0,param_2,param_3,param_6);
      *(undefined8 *)(*(longlong *)(param_1 + 600) + 0x30) = uVar17;
      if (*(longlong *)(*(longlong *)(param_1 + 600) + 0x30) == 0) {
        return 1;
      }
      *(undefined8 *)(lVar1 + 0xc0) = *(undefined8 *)(lVar1 + 0xb8);
      if (*(longlong *)(param_1 + 0xb8) == 0) {
        if (*(longlong *)(param_1 + 0x110) == 0) goto switchD_143648ec0_default;
        *plVar16 = param_3;
        puVar3 = *(undefined8 **)(param_1 + 600);
        (**(code **)(param_1 + 0x110))
                  (*(undefined8 *)(param_1 + 8),*puVar3,0,0,(ulonglong)puVar13 & 0xffffffff00000000,
                   puVar3[4],puVar3[3],puVar3[5],puVar3[6]);
        plVar8 = param_7;
      }
      else {
        *plVar16 = param_3;
        puVar13 = *(undefined8 **)(param_1 + 600);
        (**(code **)(param_1 + 0xb8))
                  (*(undefined8 *)(param_1 + 8),*puVar13,puVar13[4],puVar13[3],puVar13[5],puVar13[6]
                  );
        plVar8 = param_7;
      }
      break;
    case 0x11:
      lVar9 = *(longlong *)(param_1 + 0xc0);
joined_r0x00014364a348:
      plVar8 = param_7;
      if (lVar9 == 0) goto switchD_143648ec0_default;
      break;
    case 0x12:
      *(undefined8 *)(param_1 + 0x288) = 0;
      *(undefined8 *)(param_1 + 0x280) = 0;
      if (*(longlong *)(param_1 + 0xc0) == 0) goto switchD_143648ec0_default;
      lVar9 = FUN_14364c940(param_1 + 0x308,param_2,param_3,param_6);
      *(longlong *)(param_1 + 0x280) = lVar9;
      if (lVar9 == 0) {
        return 1;
      }
      *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 800);
      plVar8 = param_7;
      break;
    case 0x13:
      if ((*(longlong *)(param_1 + 0x280) != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
        lVar9 = FUN_14364c940(param_1 + 0x308,param_2,*(int *)(param_2 + 0x11) + param_3,
                              param_6 - *(int *)(param_2 + 0x11));
        if (lVar9 == 0) {
          return 1;
        }
LAB_143649c42:
        *plVar16 = param_3;
        (**(code **)(param_1 + 0xc0))
                  (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x280),
                   *(undefined8 *)(param_1 + 0x2b0),lVar9,*(undefined8 *)(param_1 + 0x288));
        bVar19 = false;
      }
      goto LAB_143649c70;
    case 0x14:
      if ((*(longlong *)(param_1 + 0x288) != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
        lVar9 = 0;
        goto LAB_143649c42;
      }
LAB_143649c70:
      FUN_14364c540(param_1 + 0x308);
      goto LAB_14364a2d5;
    case 0x15:
      iVar5 = (*(code *)param_2[0xe])(param_2,param_3,param_6,plVar15);
      if (iVar5 == 0) {
        return 0x20;
      }
      if (*(longlong *)(param_1 + 0x280) == 0) goto switchD_143648ec0_default;
      lVar9 = FUN_14364c940(param_1 + 0x308,param_2,*(int *)(param_2 + 0x11) + param_3,
                            param_6 - *(int *)(param_2 + 0x11));
      if (lVar9 == 0) {
        return 1;
      }
      FUN_14364bc80(lVar9);
      *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 800);
      *(longlong *)(param_1 + 0x288) = lVar9;
      plVar8 = param_7;
      break;
    case 0x16:
      lVar9 = FUN_14364aca0(param_1,param_2,param_3,param_6);
      *(longlong *)(param_1 + 0x298) = lVar9;
      if (lVar9 == 0) {
        return 1;
      }
      *(undefined2 *)(param_1 + 0x2a0) = 0;
      pcVar18 = (char *)0x0;
      goto LAB_1436492d5;
    case 0x17:
      *(undefined1 *)(param_1 + 0x2a0) = 1;
      pcVar18 = "CDATA";
      goto LAB_1436492d5;
    case 0x18:
      *(undefined1 *)(param_1 + 0x2a1) = 1;
      pcVar18 = "ID";
      goto LAB_1436492d5;
    case 0x19:
      pcVar18 = "IDREF";
      goto LAB_1436492d5;
    case 0x1a:
      pcVar18 = "IDREFS";
      goto LAB_1436492d5;
    case 0x1b:
      pcVar18 = "ENTITY";
      goto LAB_1436492d5;
    case 0x1c:
      pcVar18 = "ENTITIES";
      goto LAB_1436492d5;
    case 0x1d:
      pcVar18 = "NMTOKEN";
      goto LAB_1436492d5;
    case 0x1e:
      pcVar18 = "NMTOKENS";
LAB_1436492d5:
      *(char **)(param_1 + 0x278) = pcVar18;
switchD_143648ec0_caseD_21:
      if (*(char *)(lVar1 + 0x100) != '\0') {
        lVar9 = *(longlong *)(param_1 + 0x108);
joined_r0x00014364a21c:
        plVar8 = param_7;
        if (lVar9 != 0) break;
      }
      goto switchD_143648ec0_default;
    case 0x1f:
    case 0x20:
      if ((*(char *)(lVar1 + 0x100) == '\0') || (*(longlong *)(param_1 + 0x108) == 0))
      goto switchD_143648ec0_default;
      if (*(longlong *)(param_1 + 0x278) == 0) {
        pcVar18 = "(";
        if (iVar5 == 0x20) {
          pcVar18 = "NOTATION(";
        }
      }
      else {
        pcVar18 = "|";
      }
      lVar9 = FUN_14364c350(param_1 + 0x308,pcVar18);
      if (lVar9 == 0) {
        return 1;
      }
      lVar9 = FUN_14364c120(param_1 + 0x308,param_2,param_3,param_6);
      if (lVar9 == 0) {
        return 1;
      }
      *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x328);
      plVar8 = param_7;
      break;
    case 0x21:
      goto switchD_143648ec0_caseD_21;
    case 0x22:
      lVar9 = FUN_14364b2a0(param_1,param_2,param_3,param_6);
      *(longlong *)(param_1 + 0x290) = lVar9;
      if (lVar9 == 0) {
        return 1;
      }
      goto switchD_143648ec0_caseD_21;
    case 0x23:
    case 0x24:
      if (*(char *)(lVar1 + 0x100) != '\0') {
        uVar17 = 0;
        lVar9 = param_1;
        iVar7 = FUN_143647bf0(*(undefined8 *)(param_1 + 0x290),*(undefined8 *)(param_1 + 0x298),
                              *(undefined1 *)(param_1 + 0x2a0),*(undefined1 *)(param_1 + 0x2a1),0,
                              param_1);
        uVar21 = (undefined4)((ulonglong)lVar9 >> 0x20);
        if (iVar7 == 0) {
          return 1;
        }
        if ((*(longlong *)(param_1 + 0x108) != 0) &&
           (pcVar18 = *(char **)(param_1 + 0x278), pcVar18 != (char *)0x0)) {
          if ((*pcVar18 == '(') || ((*pcVar18 == 'N' && (pcVar18[1] == 'O')))) {
            if ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318)) &&
               (cVar4 = FUN_14364c790(param_1 + 0x308), cVar4 == '\0')) {
              return 1;
            }
            **(undefined1 **)(param_1 + 800) = 0x29;
            *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
            if ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318)) &&
               (cVar4 = FUN_14364c790(param_1 + 0x308), cVar4 == '\0')) {
              return 1;
            }
            **(undefined1 **)(param_1 + 800) = 0;
            uVar2 = *(undefined8 *)(param_1 + 0x328);
            *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
            *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 800);
            *(undefined8 *)(param_1 + 0x278) = uVar2;
          }
          bVar19 = iVar5 == 0x24;
LAB_14364948f:
          *plVar16 = param_3;
          (**(code **)(param_1 + 0x108))
                    (*(undefined8 *)(param_1 + 8),**(undefined8 **)(param_1 + 0x290),
                     **(undefined8 **)(param_1 + 0x298),*(undefined8 *)(param_1 + 0x278),uVar17,
                     CONCAT44(uVar21,(uint)bVar19));
          FUN_14364c540(param_1 + 0x308);
          plVar8 = param_7;
          break;
        }
      }
      goto switchD_143648ec0_default;
    case 0x25:
    case 0x26:
      if (*(char *)(lVar1 + 0x100) != '\0') {
        uVar11 = FUN_14364d6b0(param_1,param_2,*(undefined1 *)(param_1 + 0x2a0),
                               *(int *)(param_2 + 0x11) + param_3,param_6 - *(int *)(param_2 + 0x11)
                               ,lVar1 + 0xa0);
        if ((int)uVar11 != 0) {
          return uVar11;
        }
        uVar17 = *(undefined8 *)(lVar1 + 0xc0);
        *(undefined8 *)(lVar1 + 0xc0) = *(undefined8 *)(lVar1 + 0xb8);
        lVar9 = param_1;
        iVar7 = FUN_143647bf0(*(undefined8 *)(param_1 + 0x290),*(undefined8 *)(param_1 + 0x298),
                              *(undefined1 *)(param_1 + 0x2a0),0,uVar17,param_1);
        uVar21 = (undefined4)((ulonglong)lVar9 >> 0x20);
        if (iVar7 == 0) {
          return 1;
        }
        if ((*(longlong *)(param_1 + 0x108) != 0) &&
           (pcVar18 = *(char **)(param_1 + 0x278), pcVar18 != (char *)0x0)) {
          if ((*pcVar18 == '(') || ((*pcVar18 == 'N' && (pcVar18[1] == 'O')))) {
            if ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318)) &&
               (cVar4 = FUN_14364c790(param_1 + 0x308), cVar4 == '\0')) {
              return 1;
            }
            **(undefined1 **)(param_1 + 800) = 0x29;
            *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
            if ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318)) &&
               (cVar4 = FUN_14364c790(param_1 + 0x308), cVar4 == '\0')) {
              return 1;
            }
            **(undefined1 **)(param_1 + 800) = 0;
            uVar2 = *(undefined8 *)(param_1 + 0x328);
            *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
            *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 800);
            *(undefined8 *)(param_1 + 0x278) = uVar2;
          }
          bVar19 = iVar5 == 0x26;
          goto LAB_14364948f;
        }
      }
      goto switchD_143648ec0_default;
    case 0x27:
      lVar9 = *(longlong *)(param_1 + 0x100);
      goto joined_r0x00014364a21c;
    case 0x28:
      if (*(longlong *)(param_1 + 0x100) == 0) goto switchD_143648ec0_default;
      lVar9 = FUN_14364b2a0(param_1,param_2,param_3,param_6);
      *(longlong *)(param_1 + 0x290) = lVar9;
      if (lVar9 == 0) {
        return 1;
      }
      *(undefined1 *)(lVar1 + 0x140) = 1;
      *(undefined8 *)(lVar1 + 0x158) = 0;
      plVar8 = param_7;
      break;
    case 0x29:
    case 0x2a:
      if (*(char *)(lVar1 + 0x140) == '\0') goto switchD_143648ec0_default;
      if (*(longlong *)(param_1 + 0x100) != 0) {
        piVar12 = (int *)(**(code **)(param_1 + 0x18))(0x20);
        if (piVar12 == (int *)0x0) {
          return 1;
        }
        piVar12[1] = 0;
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[6] = 0;
        piVar12[7] = 0;
        *piVar12 = (iVar5 == 0x29) + 1;
        *plVar16 = param_3;
        (**(code **)(param_1 + 0x100))
                  (*(undefined8 *)(param_1 + 8),**(undefined8 **)(param_1 + 0x290));
        bVar19 = false;
      }
      goto LAB_14364a2ce;
    case 0x2b:
      if (*(char *)(lVar1 + 0x140) != '\0') {
        *(undefined4 *)
         ((longlong)
          *(int *)(*(longlong *)(lVar1 + 0x160) + -4 + (longlong)*(int *)(lVar1 + 0x15c) * 4) * 0x20
         + *(longlong *)(lVar1 + 0x148)) = 3;
        lVar9 = *(longlong *)(param_1 + 0x100);
        goto joined_r0x00014364a21c;
      }
      goto switchD_143648ec0_default;
    case 0x2c:
      uVar20 = *(uint *)(param_1 + 0x370);
      if (uVar20 <= *(uint *)(param_1 + 0x200)) {
        if (uVar20 == 0) {
          *(undefined4 *)(param_1 + 0x370) = 0x20;
          lVar9 = (**(code **)(param_1 + 0x18))(0x20);
          *(longlong *)(param_1 + 0x368) = lVar9;
          if (lVar9 == 0) {
            return 1;
          }
        }
        else {
          *(uint *)(param_1 + 0x370) = uVar20 * 2;
          lVar9 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x368),uVar20 * 2);
          if (lVar9 == 0) {
            return 1;
          }
          *(longlong *)(param_1 + 0x368) = lVar9;
          if (*(longlong *)(lVar1 + 0x160) != 0) {
            lVar9 = (**(code **)(param_1 + 0x20))
                              (*(longlong *)(lVar1 + 0x160),
                               (ulonglong)*(uint *)(param_1 + 0x370) << 2);
            if (lVar9 == 0) {
              return 1;
            }
            *(longlong *)(lVar1 + 0x160) = lVar9;
          }
        }
      }
      *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x200) + *(longlong *)(param_1 + 0x368)) = 0;
      if (*(char *)(lVar1 + 0x140) != '\0') {
        iVar5 = FUN_14364baf0(param_1);
        if (iVar5 < 0) {
          return 1;
        }
        *(int *)(*(longlong *)(lVar1 + 0x160) + (longlong)*(int *)(lVar1 + 0x15c) * 4) = iVar5;
        *(int *)(lVar1 + 0x15c) = *(int *)(lVar1 + 0x15c) + 1;
        *(undefined4 *)((longlong)iVar5 * 0x20 + *(longlong *)(lVar1 + 0x148)) = 6;
        lVar9 = *(longlong *)(param_1 + 0x100);
        goto joined_r0x00014364a21c;
      }
      goto switchD_143648ec0_default;
    case 0x2d:
      uVar21 = 0;
      goto LAB_14364a246;
    case 0x2e:
      uVar21 = 2;
      goto LAB_14364a246;
    case 0x2f:
      uVar21 = 1;
      goto LAB_14364a246;
    case 0x30:
      uVar21 = 3;
LAB_14364a246:
      if (*(char *)(lVar1 + 0x140) != '\0') {
        bVar19 = *(longlong *)(param_1 + 0x100) == 0;
        *(int *)(lVar1 + 0x15c) = *(int *)(lVar1 + 0x15c) + -1;
        *(undefined4 *)
         ((longlong)*(int *)(*(longlong *)(lVar1 + 0x160) + (longlong)*(int *)(lVar1 + 0x15c) * 4) *
          0x20 + 4 + *(longlong *)(lVar1 + 0x148)) = uVar21;
        if (*(int *)(lVar1 + 0x15c) == 0) {
          if (!bVar19) {
            lVar9 = FUN_1436478b0(param_1);
            if (lVar9 == 0) {
              return 1;
            }
            *plVar16 = param_3;
            (**(code **)(param_1 + 0x100))
                      (*(undefined8 *)(param_1 + 8),**(undefined8 **)(param_1 + 0x290),lVar9);
          }
          *(undefined4 *)(lVar1 + 0x150) = 0;
LAB_14364a2ce:
          *(undefined1 *)(lVar1 + 0x140) = 0;
        }
        goto LAB_14364a2d5;
      }
      goto switchD_143648ec0_default;
    case 0x31:
      cVar4 = *(char *)((ulonglong)*(uint *)(param_1 + 0x200) + *(longlong *)(param_1 + 0x368));
      if (cVar4 == ',') {
        return 2;
      }
      if ((*(char *)(lVar1 + 0x140) != '\0') && (cVar4 == '\0')) {
        lVar9 = (longlong)
                *(int *)(*(longlong *)(lVar1 + 0x160) + -4 + (longlong)*(int *)(lVar1 + 0x15c) * 4)
                * 0x20;
        if (*(int *)(lVar9 + *(longlong *)(lVar1 + 0x148)) != 3) {
          *(undefined4 *)(lVar9 + *(longlong *)(lVar1 + 0x148)) = 5;
          bVar19 = true;
          if (*(longlong *)(param_1 + 0x100) != 0) {
            bVar19 = false;
          }
        }
      }
      *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x200) + *(longlong *)(param_1 + 0x368)) = 0x7c
      ;
LAB_14364a2d5:
      plVar8 = param_7;
      if (bVar19) goto switchD_143648ec0_default;
      break;
    case 0x32:
      if (*(char *)((ulonglong)*(uint *)(param_1 + 0x200) + *(longlong *)(param_1 + 0x368)) == '|')
      {
        return 2;
      }
      *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x200) + *(longlong *)(param_1 + 0x368)) = 0x2c
      ;
      if (*(char *)(lVar1 + 0x140) != '\0') {
        lVar9 = *(longlong *)(param_1 + 0x100);
        goto joined_r0x00014364a21c;
      }
      goto switchD_143648ec0_default;
    case 0x33:
      iVar5 = 0;
      goto LAB_14364a183;
    case 0x34:
      iVar5 = 2;
      goto LAB_14364a183;
    case 0x35:
      iVar5 = 1;
      goto LAB_14364a183;
    case 0x36:
      iVar5 = 3;
LAB_14364a183:
      if (*(char *)(lVar1 + 0x140) == '\0') goto switchD_143648ec0_default;
      lVar9 = param_6;
      if (iVar5 != 0) {
        lVar9 = param_6 - *(int *)(param_2 + 0x11);
      }
      iVar7 = FUN_14364baf0(param_1);
      if (iVar7 < 0) {
        return 1;
      }
      lVar10 = (longlong)iVar7 * 0x20;
      *(undefined4 *)(lVar10 + *(longlong *)(lVar1 + 0x148)) = 4;
      *(int *)(lVar10 + 4 + *(longlong *)(lVar1 + 0x148)) = iVar5;
      puVar13 = (undefined8 *)FUN_14364b2a0(param_1,param_2,param_3,lVar9);
      if (puVar13 == (undefined8 *)0x0) {
        return 1;
      }
      pcVar18 = (char *)*puVar13;
      *(char **)(lVar10 + 8 + *(longlong *)(lVar1 + 0x148)) = pcVar18;
      iVar5 = 0;
      do {
        cVar4 = *pcVar18;
        pcVar18 = pcVar18 + 1;
        iVar5 = iVar5 + 1;
      } while (cVar4 != '\0');
      *(int *)(lVar1 + 0x150) = *(int *)(lVar1 + 0x150) + iVar5;
      lVar9 = *(longlong *)(param_1 + 0x100);
      goto joined_r0x00014364a21c;
    case 0x37:
      iVar5 = FUN_14364d100(param_1,param_2,param_3,param_6);
      goto joined_r0x00014364a310;
    case 0x38:
      iVar5 = FUN_14364cef0(param_1,param_2,param_3,param_6);
joined_r0x00014364a310:
      plVar8 = param_7;
      if (iVar5 == 0) {
        return 1;
      }
      break;
    case 0x39:
      uVar17 = 1;
LAB_143648ec4:
      uVar11 = FUN_14364cb10(param_1,uVar17,param_3,param_6);
      if ((int)uVar11 != 0) {
        return uVar11;
      }
      param_2 = *(undefined8 **)(param_1 + 0x120);
      plVar8 = param_7;
      break;
    case 0x3a:
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        FUN_14364d010(param_1,param_2,param_3,param_6);
      }
      plVar8 = param_7;
      uVar11 = FUN_143648ca0(param_1,param_2,&param_6,param_4,param_7,param_8);
      if ((int)uVar11 != 0) {
        return uVar11;
      }
      if (param_6 == 0) {
        *(code **)(param_1 + 0x218) = FUN_14364b500;
        return 0;
      }
      break;
    case 0x3b:
    case 0x3c:
      *(undefined1 *)(lVar1 + 0x101) = 1;
      if (*(int *)(param_1 + 0x38c) == 0) {
        *(undefined1 *)(lVar1 + 0x100) = *(undefined1 *)(lVar1 + 0x102);
LAB_143649ecd:
        if (((*(char *)(lVar1 + 0x102) == '\0') && (*(code **)(param_1 + 0xd8) != (code *)0x0)) &&
           (iVar5 = (**(code **)(param_1 + 0xd8))(*(undefined8 *)(param_1 + 8)), iVar5 == 0)) {
          return 0x16;
        }
        goto LAB_14364a2d5;
      }
      lVar9 = FUN_14364c940(lVar1 + 0xa0,param_2,*(int *)(param_2 + 0x11) + param_3,
                            param_6 - *(int *)(param_2 + 0x11));
      if (lVar9 == 0) {
        return 1;
      }
      lVar10 = FUN_14364b780(param_1,lVar1 + 0x108,lVar9,0);
      *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(lVar1 + 0xc0);
      if (*(int *)(param_1 + 0x20c) == 0) {
LAB_143649fbd:
        if (lVar10 == 0) {
          *(undefined1 *)(lVar1 + 0x100) = *(undefined1 *)(lVar1 + 0x102);
          if ((iVar5 != 0x3c) || (*(code **)(param_1 + 0xf0) == (code *)0x0))
          goto switchD_143648ec0_default;
          (**(code **)(param_1 + 0xf0))(*(undefined8 *)(param_1 + 8),lVar9,1);
          plVar8 = param_7;
          break;
        }
      }
      else {
        if (*(char *)(lVar1 + 0x102) == '\0') {
          bVar19 = *(char *)(lVar1 + 0x101) == '\0';
        }
        else {
          bVar19 = *(longlong *)(param_1 + 0x240) == 0;
        }
        if (!bVar19) goto LAB_143649fbd;
        if (lVar10 == 0) {
          return 0xb;
        }
        if (*(char *)(lVar10 + 0x3a) == '\0') {
          return 0x18;
        }
      }
      if (*(char *)(lVar10 + 0x38) != '\0') {
        return 0xc;
      }
      if (*(longlong *)(lVar10 + 8) == 0) {
        if (*(longlong *)(param_1 + 0xe0) == 0) {
          *(undefined1 *)(lVar1 + 0x100) = *(undefined1 *)(lVar1 + 0x102);
          goto switchD_143648ec0_default;
        }
        *(undefined1 *)(lVar1 + 0x103) = 0;
        *(undefined1 *)(lVar10 + 0x38) = 1;
        iVar5 = (**(code **)(param_1 + 0xe0))
                          (*(undefined8 *)(param_1 + 0xe8),0,*(undefined8 *)(lVar10 + 0x20),
                           *(undefined8 *)(lVar10 + 0x18),*(undefined8 *)(lVar10 + 0x28));
        *(undefined1 *)(lVar10 + 0x38) = 0;
        if (iVar5 == 0) {
          return 0x15;
        }
        bVar19 = false;
        if (*(char *)(lVar1 + 0x103) != '\0') goto LAB_143649ecd;
        *(undefined1 *)(lVar1 + 0x100) = *(undefined1 *)(lVar1 + 0x102);
        plVar8 = param_7;
      }
      else {
        uVar11 = FUN_14364c990(param_1,lVar10,iVar5 == 0x3c);
        plVar8 = param_7;
        if ((int)uVar11 != 0) {
          return uVar11;
        }
      }
      break;
    case -1:
      if (param_5 == 0xc) {
        return 0x11;
      }
      if (param_5 != 0x1c) {
        return 2;
      }
      return 10;
    }
    param_3 = param_6;
    if (*(int *)(param_1 + 0x380) == 2) {
      return 0x23;
    }
    if (*(int *)(param_1 + 0x380) == 3) {
      *plVar8 = param_6;
      return 0;
    }
    param_5 = (*(code *)*param_2)(param_2,param_6,param_4,&param_6);
  } while( true );
}



// FUNCTION 14364a6c0 FUN_14364a6c0 body=298 status=ok
// SIG undefined FUN_14364a6c0(void)

void FUN_14364a6c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)*param_1)();
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  puVar1[0x19] = param_1;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[4] = param_1;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[5] = 0;
  puVar1[9] = param_1;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[10] = 0;
  puVar1[0xe] = param_1;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0xf] = 0;
  puVar1[0x13] = param_1;
  *(undefined4 *)(puVar1 + 0x20) = 1;
  *(undefined1 *)(puVar1 + 0x22) = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x21] = 0;
  puVar1[0x25] = param_1;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  *(undefined1 *)(puVar1 + 0x28) = 0;
  puVar1[0x2c] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2a] = 0;
  return;
}



// FUNCTION 14364a7f0 FUN_14364a7f0 body=571 status=ok
// SIG undefined FUN_14364a7f0(void)

void FUN_14364a7f0(longlong *param_1,char param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  plVar4 = (longlong *)param_1[5];
  plVar1 = plVar4 + param_1[7];
  while (plVar4 != plVar1) {
    while( true ) {
      lVar2 = *plVar4;
      plVar4 = plVar4 + 1;
      if (lVar2 != 0) break;
      if (plVar4 == plVar1) goto LAB_14364a845;
    }
    if (*(int *)(lVar2 + 0x1c) != 0) {
      (**(code **)(param_3 + 0x10))(*(undefined8 *)(lVar2 + 0x20));
    }
  }
LAB_14364a845:
  uVar5 = 0;
  uVar6 = uVar5;
  if (param_1[2] != 0) {
    do {
      (**(code **)(param_1[4] + 0x10))(*(undefined8 *)(*param_1 + uVar6 * 8));
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)param_1[2]);
  }
  (**(code **)(param_1[4] + 0x10))(*param_1);
  uVar6 = uVar5;
  if (param_1[0x23] != 0) {
    do {
      (**(code **)(param_1[0x25] + 0x10))(*(undefined8 *)(param_1[0x21] + uVar6 * 8));
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)param_1[0x23]);
  }
  (**(code **)(param_1[0x25] + 0x10))(param_1[0x21]);
  uVar6 = uVar5;
  if (param_1[7] != 0) {
    do {
      (**(code **)(param_1[9] + 0x10))(*(undefined8 *)(param_1[5] + uVar6 * 8));
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)param_1[7]);
  }
  (**(code **)(param_1[9] + 0x10))(param_1[5]);
  uVar6 = uVar5;
  if (param_1[0xc] != 0) {
    do {
      (**(code **)(param_1[0xe] + 0x10))(*(undefined8 *)(param_1[10] + uVar6 * 8));
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)param_1[0xc]);
  }
  (**(code **)(param_1[0xe] + 0x10))(param_1[10]);
  if (param_1[0x11] != 0) {
    do {
      (**(code **)(param_1[0x13] + 0x10))(*(undefined8 *)(param_1[0xf] + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)param_1[0x11]);
  }
  (**(code **)(param_1[0x13] + 0x10))(param_1[0xf]);
  puVar3 = (undefined8 *)param_1[0x14];
  while (puVar3 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar3;
    (**(code **)(param_1[0x19] + 0x10))();
  }
  puVar3 = (undefined8 *)param_1[0x15];
  while (puVar3 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar3;
    (**(code **)(param_1[0x19] + 0x10))();
  }
  puVar3 = (undefined8 *)param_1[0x1a];
  while (puVar3 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar3;
    (**(code **)(param_1[0x1f] + 0x10))();
  }
  puVar3 = (undefined8 *)param_1[0x1b];
  while (puVar3 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar3;
    (**(code **)(param_1[0x1f] + 0x10))();
  }
  if (param_2 != '\0') {
    (**(code **)(param_3 + 0x10))(param_1[0x2c]);
    (**(code **)(param_3 + 0x10))(param_1[0x29]);
  }
                    /* WARNING: Could not recover jumptable at 0x00014364aa12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_1);
  return;
}



// FUNCTION 14364aa30 FUN_14364aa30 body=455 status=ok
// SIG undefined FUN_14364aa30(void)

undefined8 FUN_14364aa30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  *(undefined8 *)(param_1 + 0x228) = param_2;
  *(code **)(param_1 + 0x218) = FUN_14364aa30;
  local_res8 = 0;
  iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x120))
                    (*(undefined8 **)(param_1 + 0x120),param_2,param_3,&local_res8);
  *(undefined8 *)(param_1 + 0x230) = local_res8;
joined_r0x00014364aa8f:
  if (0x1e < iVar1 + 0xfU) {
LAB_14364ab6a:
    return 9;
  }
  switch(iVar1 + 0xfU) {
  case 0:
    if ((*(longlong *)(param_1 + 0xa0) != 0) &&
       (FUN_14364d010(param_1,*(undefined8 *)(param_1 + 0x120),param_2,local_res8),
       *(int *)(param_1 + 0x380) == 2)) {
      return 0x23;
    }
    goto LAB_14364abb8;
  default:
    goto LAB_14364ab6a;
  case 0xb:
    break;
  case 0xd:
    if (*(char *)(param_1 + 900) != '\0') {
      return 6;
    }
    break;
  case 0xe:
    if (*(char *)(param_1 + 900) != '\0') {
      return 5;
    }
    break;
  case 0xf:
    *(undefined8 *)(param_1 + 0x228) = local_res8;
    return 4;
  case 0x1a:
    iVar1 = FUN_14364d100(param_1,*(undefined8 *)(param_1 + 0x120),param_2,local_res8);
    goto LAB_14364ab05;
  case 0x1c:
    iVar1 = FUN_14364cef0(param_1,*(undefined8 *)(param_1 + 0x120),param_2,local_res8);
LAB_14364ab05:
    uVar2 = local_res8;
    if (iVar1 == 0) {
      return 1;
    }
LAB_14364ab0e:
    *(undefined8 *)(param_1 + 0x228) = uVar2;
    if (*(int *)(param_1 + 0x380) == 2) {
      return 0x23;
    }
    local_res8 = uVar2;
    if (*(int *)(param_1 + 0x380) == 3) {
LAB_14364abb8:
      *param_4 = local_res8;
      return 0;
    }
    local_res8 = 0;
    iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x120))
                      (*(undefined8 **)(param_1 + 0x120),uVar2,param_3,&local_res8);
    *(undefined8 *)(param_1 + 0x230) = local_res8;
    param_2 = uVar2;
    goto joined_r0x00014364aa8f;
  case 0x1e:
    uVar2 = local_res8;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_14364d010(param_1,*(undefined8 *)(param_1 + 0x120),param_2,local_res8);
      uVar2 = local_res8;
    }
    goto LAB_14364ab0e;
  }
  *param_4 = param_2;
  return 0;
}



// FUNCTION 14364ac40 FUN_14364ac40 body=91 status=ok
// SIG undefined FUN_14364ac40(void)

int FUN_14364ac40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_143648030(param_1,1,*(undefined8 *)(param_1 + 0x120),param_2,param_3,param_4,
                        *(char *)(param_1 + 900) == '\0');
  if ((iVar2 == 0) && (cVar1 = FUN_14364e580(param_1), cVar1 == '\0')) {
    return 1;
  }
  return iVar2;
}



// FUNCTION 14364aca0 FUN_14364aca0 body=636 status=ok
// SIG undefined FUN_14364aca0(void)

undefined8 *
FUN_14364aca0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  char *pcVar9;
  longlong lVar10;
  
  lVar2 = *(longlong *)(param_1 + 0x2a8);
  if ((*(longlong *)(lVar2 + 0xb8) == *(longlong *)(lVar2 + 0xb0)) &&
     (cVar3 = FUN_14364c790(lVar2 + 0xa0), cVar3 == '\0')) {
    return (undefined8 *)0x0;
  }
  lVar6 = lVar2 + 0xa0;
  **(undefined1 **)(lVar2 + 0xb8) = 0;
  *(longlong *)(lVar2 + 0xb8) = *(longlong *)(lVar2 + 0xb8) + 1;
  lVar4 = FUN_14364c120(lVar6,param_2,param_3,param_4);
  if ((lVar4 != 0) &&
     ((*(longlong *)(lVar2 + 0xb8) != *(longlong *)(lVar2 + 0xb0) ||
      (cVar3 = FUN_14364c790(lVar6), cVar3 != '\0')))) {
    **(undefined1 **)(lVar2 + 0xb8) = 0;
    *(longlong *)(lVar2 + 0xb8) = *(longlong *)(lVar2 + 0xb8) + 1;
    lVar4 = *(longlong *)(lVar2 + 0xc0);
    if (lVar4 != 0) {
      pcVar9 = (char *)(lVar4 + 1);
      puVar5 = (undefined8 *)FUN_14364b780(param_1,lVar2 + 0x50,pcVar9,0x18);
      if (puVar5 != (undefined8 *)0x0) {
        if ((char *)*puVar5 != pcVar9) {
          lVar6 = *(longlong *)(lVar2 + 0xc0);
LAB_14364ad8b:
          *(longlong *)(lVar2 + 0xb8) = lVar6;
          return puVar5;
        }
        *(undefined8 *)(lVar2 + 0xc0) = *(undefined8 *)(lVar2 + 0xb8);
        if (*(char *)(param_1 + 0x1d0) == '\0') {
          return puVar5;
        }
        cVar3 = *pcVar9;
        if ((((cVar3 == 'x') && (*(char *)(lVar4 + 2) == 'm')) && (*(char *)(lVar4 + 3) == 'l')) &&
           ((*(char *)(lVar4 + 4) == 'n' && (*(char *)(lVar4 + 5) == 's')))) {
          if (*(char *)(lVar4 + 6) == '\0') {
            *(undefined1 *)((longlong)puVar5 + 0x11) = 1;
            puVar5[1] = lVar2 + 0x130;
            return puVar5;
          }
          if (*(char *)(lVar4 + 6) == ':') {
            uVar7 = FUN_14364b780(param_1,lVar2 + 0x78,lVar4 + 7,0x10);
            puVar5[1] = uVar7;
            *(undefined1 *)((longlong)puVar5 + 0x11) = 1;
            return puVar5;
          }
        }
        if (cVar3 == '\0') {
          return puVar5;
        }
        lVar10 = 0;
        lVar4 = lVar10;
        while (cVar3 != ':') {
          cVar3 = pcVar9[lVar4 + 1];
          lVar4 = lVar4 + 1;
          if (cVar3 == '\0') {
            return puVar5;
          }
        }
        if (0 < lVar4) {
          do {
            if ((*(longlong *)(lVar2 + 0xb8) == *(longlong *)(lVar2 + 0xb0)) &&
               (cVar3 = FUN_14364c790(lVar6), cVar3 == '\0')) {
              return (undefined8 *)0x0;
            }
            pcVar1 = pcVar9 + lVar10;
            lVar10 = lVar10 + 1;
            **(char **)(lVar2 + 0xb8) = *pcVar1;
            *(longlong *)(lVar2 + 0xb8) = *(longlong *)(lVar2 + 0xb8) + 1;
          } while (lVar10 < lVar4);
        }
        if ((*(longlong *)(lVar2 + 0xb8) != *(longlong *)(lVar2 + 0xb0)) ||
           (cVar3 = FUN_14364c790(lVar6), cVar3 != '\0')) {
          **(undefined1 **)(lVar2 + 0xb8) = 0;
          *(longlong *)(lVar2 + 0xb8) = *(longlong *)(lVar2 + 0xb8) + 1;
          plVar8 = (longlong *)
                   FUN_14364b780(param_1,lVar2 + 0x78,*(undefined8 *)(lVar2 + 0xc0),0x10);
          puVar5[1] = plVar8;
          if (plVar8 != (longlong *)0x0) {
            lVar6 = *(longlong *)(lVar2 + 0xc0);
            if (*plVar8 == lVar6) {
              *(undefined8 *)(lVar2 + 0xc0) = *(undefined8 *)(lVar2 + 0xb8);
              return puVar5;
            }
            goto LAB_14364ad8b;
          }
        }
      }
      return (undefined8 *)0x0;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14364af20 FUN_14364af20 body=891 status=ok
// SIG undefined FUN_14364af20(void)

undefined8 FUN_14364af20(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  char *pcVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  puVar2 = *(undefined8 **)(param_1 + 0x2a8);
  bVar4 = false;
  if (puVar2[0x27] != 0) {
    if ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318)) &&
       (cVar5 = FUN_14364c790(param_1 + 0x308), cVar5 == '\0')) {
      return 0;
    }
    **(undefined1 **)(param_1 + 800) = 0x3d;
    *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
    lVar7 = *(longlong *)(param_1 + 800);
    iVar8 = *(int *)(puVar2[0x27] + 0x28);
    if (*(char *)(param_1 + 0x374) != '\0') {
      iVar8 = iVar8 + -1;
    }
    lVar10 = 0;
    if (0 < iVar8) {
      do {
        if ((lVar7 == *(longlong *)(param_1 + 0x318)) &&
           (cVar5 = FUN_14364c790(param_1 + 0x308), cVar5 == '\0')) {
          return 0;
        }
        puVar1 = (undefined1 *)(lVar10 + *(longlong *)(puVar2[0x27] + 0x20));
        lVar10 = lVar10 + 1;
        **(undefined1 **)(param_1 + 800) = *puVar1;
        *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
        lVar7 = *(longlong *)(param_1 + 800);
      } while (lVar10 < iVar8);
    }
    bVar4 = true;
  }
  puVar11 = (undefined8 *)puVar2[0xf];
  puVar12 = puVar11 + puVar2[0x11];
  while (puVar11 != puVar12) {
    while( true ) {
      puVar3 = (undefined8 *)*puVar11;
      puVar11 = puVar11 + 1;
      if (puVar3 != (undefined8 *)0x0) break;
      if (puVar11 == puVar12) goto LAB_14364b041;
    }
    if (puVar3[1] != 0) {
      if (bVar4) {
        if ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318)) &&
           (cVar5 = FUN_14364c790(param_1 + 0x308), cVar5 == '\0')) goto LAB_14364b09d;
        **(undefined1 **)(param_1 + 800) = 0xc;
        *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
      }
      pcVar9 = (char *)*puVar3;
      cVar5 = *pcVar9;
      while (cVar5 != '\0') {
        if ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318)) &&
           (cVar5 = FUN_14364c790(param_1 + 0x308), cVar5 == '\0')) goto LAB_14364b09d;
        cVar5 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        **(char **)(param_1 + 800) = cVar5;
        *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
        cVar5 = *pcVar9;
      }
      if ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318)) &&
         (cVar5 = FUN_14364c790(param_1 + 0x308), cVar5 == '\0')) goto LAB_14364b09d;
      **(undefined1 **)(param_1 + 800) = 0x3d;
      *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
      lVar7 = *(longlong *)(param_1 + 800);
      iVar8 = *(int *)(puVar3[1] + 0x28);
      if (*(char *)(param_1 + 0x374) != '\0') {
        iVar8 = iVar8 + -1;
      }
      lVar10 = 0;
      if (0 < iVar8) {
        do {
          if ((lVar7 == *(longlong *)(param_1 + 0x318)) &&
             (cVar5 = FUN_14364c790(param_1 + 0x308), cVar5 == '\0')) goto LAB_14364b09d;
          puVar1 = (undefined1 *)(lVar10 + *(longlong *)(puVar3[1] + 0x20));
          lVar10 = lVar10 + 1;
          **(undefined1 **)(param_1 + 800) = *puVar1;
          *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
          lVar7 = *(longlong *)(param_1 + 800);
        } while (lVar10 < iVar8);
      }
      bVar4 = true;
    }
  }
LAB_14364b041:
  puVar12 = (undefined8 *)*puVar2;
  puVar2 = puVar12 + puVar2[2];
  while (puVar12 != puVar2) {
    while( true ) {
      puVar11 = (undefined8 *)*puVar12;
      puVar12 = puVar12 + 1;
      if (puVar11 != (undefined8 *)0x0) break;
      if (puVar12 == puVar2) goto LAB_14364b075;
    }
    if (*(char *)(puVar11 + 7) != '\0') {
      if (bVar4) {
        if ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318)) &&
           (cVar5 = FUN_14364c790(param_1 + 0x308), cVar5 == '\0')) goto LAB_14364b09d;
        **(undefined1 **)(param_1 + 800) = 0xc;
        *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
      }
      pcVar9 = (char *)*puVar11;
      cVar5 = *pcVar9;
      while (cVar5 != '\0') {
        if ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318)) &&
           (cVar5 = FUN_14364c790(param_1 + 0x308), cVar5 == '\0')) goto LAB_14364b09d;
        cVar5 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        **(char **)(param_1 + 800) = cVar5;
        *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
        cVar5 = *pcVar9;
      }
      bVar4 = true;
    }
  }
LAB_14364b075:
  if ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318)) &&
     (cVar5 = FUN_14364c790(param_1 + 0x308), cVar5 == '\0')) {
LAB_14364b09d:
    uVar6 = 0;
  }
  else {
    **(undefined1 **)(param_1 + 800) = 0;
    *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
    uVar6 = *(undefined8 *)(param_1 + 0x328);
  }
  return uVar6;
}



// FUNCTION 14364b2a0 FUN_14364b2a0 body=206 status=ok
// SIG undefined FUN_14364b2a0(void)

longlong * FUN_14364b2a0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x2a8);
  lVar4 = FUN_14364c120(lVar1 + 0xa0);
  if ((lVar4 != 0) &&
     ((*(longlong *)(lVar1 + 0xb8) != *(longlong *)(lVar1 + 0xb0) ||
      (cVar2 = FUN_14364c790(lVar1 + 0xa0), cVar2 != '\0')))) {
    **(undefined1 **)(lVar1 + 0xb8) = 0;
    *(longlong *)(lVar1 + 0xb8) = *(longlong *)(lVar1 + 0xb8) + 1;
    lVar4 = *(longlong *)(lVar1 + 0xc0);
    if ((lVar4 != 0) &&
       (plVar5 = (longlong *)FUN_14364b780(param_1,lVar1 + 0x28,lVar4,0x28),
       plVar5 != (longlong *)0x0)) {
      if (*plVar5 != lVar4) {
        *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(lVar1 + 0xc0);
        return plVar5;
      }
      *(undefined8 *)(lVar1 + 0xc0) = *(undefined8 *)(lVar1 + 0xb8);
      iVar3 = FUN_14364d500(param_1,plVar5);
      if (iVar3 != 0) {
        return plVar5;
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 14364b370 FUN_14364b370 body=389 status=ok
// SIG undefined FUN_14364b370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14364b370(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  undefined1 auStack_458 [32];
  undefined8 local_438 [128];
  undefined8 local_38;
  undefined8 local_30;
  code *local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_458;
  pcVar3 = *(code **)(param_1 + 0xf8);
  if (pcVar3 != (code *)0x0) {
    lVar4 = 0x10;
    puVar2 = local_438;
    do {
      *puVar2 = 0xffffffffffffffff;
      puVar2[1] = 0xffffffffffffffff;
      puVar2[2] = 0xffffffffffffffff;
      puVar2[3] = 0xffffffffffffffff;
      puVar2[4] = 0xffffffffffffffff;
      puVar2[5] = 0xffffffffffffffff;
      puVar2[6] = 0xffffffffffffffff;
      puVar2[7] = 0xffffffffffffffff;
      lVar4 = lVar4 + -1;
      puVar2 = puVar2 + 8;
    } while (lVar4 != 0);
    local_30 = 0;
    local_38 = 0;
    local_28 = (code *)0x0;
    iVar1 = (*pcVar3)(*(undefined8 *)(param_1 + 0x1e8),param_2,local_438);
    if (iVar1 != 0) {
      iVar1 = FUN_143654ca0();
      lVar4 = (**(code **)(param_1 + 0x18))((longlong)iVar1);
      *(longlong *)(param_1 + 0x1d8) = lVar4;
      if (lVar4 == 0) {
        if (local_28 != (code *)0x0) {
          (*local_28)(local_38);
        }
        return 1;
      }
      pcVar3 = FUN_143654890;
      if (*(char *)(param_1 + 0x1d0) != '\0') {
        pcVar3 = FUN_143654ba0;
      }
      lVar4 = (*pcVar3)(lVar4,local_438,local_30,local_38);
      if (lVar4 != 0) {
        *(undefined8 *)(param_1 + 0x1e0) = local_38;
        *(longlong *)(param_1 + 0x120) = lVar4;
        *(code **)(param_1 + 0x1f0) = local_28;
        return 0;
      }
    }
    if (local_28 != (code *)0x0) {
      (*local_28)(local_38);
    }
  }
  return 0x12;
}



// FUNCTION 14364b500 FUN_14364b500 body=143 status=ok
// SIG undefined FUN_14364b500(void)

undefined8 FUN_14364b500(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_res10;
  
  local_res10 = param_2;
  uVar1 = FUN_143648ca0(param_1,*(undefined8 *)(param_1 + 0x120),&local_res10,param_3,param_4,
                        *(char *)(param_1 + 900) == '\0');
  if ((int)uVar1 == 0) {
    if (local_res10 != 0) {
      *(code **)(param_1 + 0x218) = FUN_14364ce60;
      uVar1 = FUN_14364ce60(param_1,local_res10,param_3,param_4);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14364b590 FUN_14364b590 body=487 status=ok
// SIG undefined FUN_14364b590(void)

undefined8 FUN_14364b590(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar9;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong in_stack_ffffffffffffffc8;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar1 = *(longlong *)(param_1 + 0x240);
  if (lVar1 == 0) {
    return 0x17;
  }
  lVar2 = *(longlong *)(lVar1 + 0x18);
  lVar6 = (longlong)*(int *)(lVar2 + 0x14) + *(longlong *)(lVar2 + 8);
  lVar5 = (longlong)*(int *)(lVar2 + 0x10) + *(longlong *)(lVar2 + 8);
  if (*(char *)(lVar2 + 0x39) == '\0') {
    lVar8 = lVar5;
    uVar4 = FUN_143648030(param_1,*(undefined4 *)(lVar1 + 0x20),*(undefined8 *)(param_1 + 0x1c0),
                          lVar6,lVar5,&local_res8,in_stack_ffffffffffffffc8 & 0xffffffffffffff00);
    uVar9 = (undefined4)((ulonglong)lVar8 >> 0x20);
  }
  else {
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x1c0))
                      (*(undefined8 **)(param_1 + 0x1c0),lVar6,lVar5,&local_res8);
    uVar7 = CONCAT44(uVar9,uVar3);
    uVar4 = FUN_143648dd0(param_1,*(undefined8 *)(param_1 + 0x1c0),lVar6,lVar5,uVar7,local_res8,
                          &local_res8,0);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
  }
  if ((int)uVar4 == 0) {
    if ((lVar5 == local_res8) || (*(int *)(param_1 + 0x380) != 3)) {
      *(undefined1 *)(lVar2 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(lVar1 + 0x10);
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + 0x248);
      *(longlong *)(param_1 + 0x248) = lVar1;
      if (*(char *)(lVar2 + 0x39) == '\0') {
        *(code **)(param_1 + 0x218) = FUN_143647b90;
        uVar4 = FUN_143648030(param_1,*(longlong *)(param_1 + 0x378) != 0,
                              *(undefined8 *)(param_1 + 0x120),param_2,param_3,param_4,
                              *(char *)(param_1 + 900) == '\0');
      }
      else {
        *(code **)(param_1 + 0x218) = FUN_14364ce60;
        uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x120))
                          (*(undefined8 **)(param_1 + 0x120),param_2,param_3,&local_res8);
        uVar4 = FUN_143648dd0(param_1,*(undefined8 *)(param_1 + 0x120),param_2,param_3,
                              CONCAT44(uVar9,uVar3),local_res8,param_4,
                              *(char *)(param_1 + 900) == '\0');
      }
    }
    else {
      *(int *)(lVar2 + 0x14) = (int)local_res8 - *(int *)(lVar2 + 8);
      uVar4 = 0;
    }
  }
  return uVar4;
}



// FUNCTION 14364b780 FUN_14364b780 body=880 status=ok
// SIG undefined FUN_14364b780(void)

undefined8 FUN_14364b780(longlong param_1,longlong *param_2,byte *param_3,size_t param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  byte bVar4;
  void *pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  byte *pbVar10;
  longlong lVar11;
  byte bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  
  lVar17 = param_2[2];
  if (lVar17 == 0) {
    if (param_4 == 0) {
      return 0;
    }
    *(undefined1 *)(param_2 + 1) = 6;
    param_2[2] = 0x40;
    pvVar5 = (void *)(**(code **)param_2[4])(0x200);
    *param_2 = (longlong)pvVar5;
    if (pvVar5 == (void *)0x0) {
      param_2[2] = 0;
      return 0;
    }
    _guard_xfg_dispatch_icall_nop(pvVar5,0,0x200);
    uVar9 = *(uint *)(param_1 + 0x390);
    bVar2 = *param_3;
    pbVar1 = param_3;
    while (bVar2 != 0) {
      pbVar1 = pbVar1 + 1;
      uVar9 = uVar9 * 0xf4243 ^ (uint)bVar2;
      bVar2 = *pbVar1;
    }
    uVar13 = (ulonglong)((int)param_2[2] - 1U & uVar9);
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x390);
    bVar2 = *param_3;
    bVar12 = bVar2;
    pbVar1 = param_3;
    while (bVar12 != 0) {
      pbVar1 = pbVar1 + 1;
      uVar9 = uVar9 * 0xf4243 ^ (uint)bVar12;
      bVar12 = *pbVar1;
    }
    lVar11 = *param_2;
    uVar16 = (int)lVar17 - 1;
    bVar12 = 0;
    uVar13 = (ulonglong)(uVar16 & uVar9);
    lVar6 = *(longlong *)(lVar11 + uVar13 * 8);
    while (lVar6 != 0) {
      pbVar1 = (byte *)**(undefined8 **)(lVar11 + uVar13 * 8);
      if (bVar2 == *pbVar1) {
        pbVar10 = pbVar1;
        bVar4 = bVar2;
        do {
          if (bVar4 == 0) {
            return *(undefined8 *)(lVar11 + uVar13 * 8);
          }
          bVar4 = pbVar10[(longlong)(param_3 + (1 - (longlong)pbVar1))];
          pbVar10 = pbVar10 + 1;
        } while (bVar4 == *pbVar10);
      }
      if (bVar12 == 0) {
        bVar12 = (byte)((~uVar16 & uVar9) >> ((char)param_2[1] - 1U & 0x1f)) & (byte)(uVar16 >> 2) |
                 1;
      }
      uVar7 = (ulonglong)bVar12;
      if (uVar13 < uVar7) {
        lVar6 = lVar17 - uVar7;
      }
      else {
        lVar6 = -uVar7;
      }
      uVar13 = uVar13 + lVar6;
      lVar6 = *(longlong *)(lVar11 + uVar13 * 8);
    }
    if (param_4 == 0) {
      return 0;
    }
    bVar2 = *(byte *)(param_2 + 1);
    if ((ulonglong)param_2[3] >> (bVar2 - 1 & 0x3f) != 0) {
      lVar17 = 1L << (bVar2 + 1 & 0x3f);
      uVar16 = (int)lVar17 - 1;
      pvVar5 = (void *)(**(code **)param_2[4])(lVar17 * 8);
      if (pvVar5 == (void *)0x0) {
        return 0;
      }
      _guard_xfg_dispatch_icall_nop(pvVar5,0,lVar17 * 8);
      uVar13 = 0;
      if (param_2[2] != 0) {
        do {
          puVar3 = *(undefined8 **)(*param_2 + uVar13 * 8);
          if (puVar3 != (undefined8 *)0x0) {
            pbVar1 = (byte *)*puVar3;
            uVar15 = *(uint *)(param_1 + 0x390);
            bVar12 = *pbVar1;
            while (bVar12 != 0) {
              pbVar1 = pbVar1 + 1;
              uVar15 = uVar15 * 0xf4243 ^ (uint)bVar12;
              bVar12 = *pbVar1;
            }
            bVar12 = 0;
            uVar7 = (ulonglong)(uVar15 & uVar16);
            lVar11 = *(longlong *)((longlong)pvVar5 + uVar7 * 8);
            while (lVar11 != 0) {
              if (bVar12 == 0) {
                bVar12 = (byte)((~uVar16 & uVar15) >> (bVar2 & 0x1f)) & (byte)(uVar16 >> 2) | 1;
              }
              uVar14 = (ulonglong)bVar12;
              if (uVar7 < uVar14) {
                lVar11 = lVar17 - uVar14;
              }
              else {
                lVar11 = -uVar14;
              }
              uVar7 = uVar7 + lVar11;
              lVar11 = *(longlong *)((longlong)pvVar5 + uVar7 * 8);
            }
            *(undefined8 **)((longlong)pvVar5 + uVar7 * 8) = puVar3;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < (ulonglong)param_2[2]);
      }
      (**(code **)(param_2[4] + 0x10))(*param_2);
      bVar12 = 0;
      uVar13 = (ulonglong)(uVar16 & uVar9);
      *param_2 = (longlong)pvVar5;
      *(byte *)(param_2 + 1) = bVar2 + 1;
      param_2[2] = lVar17;
      lVar11 = *(longlong *)((longlong)pvVar5 + uVar13 * 8);
      while (lVar11 != 0) {
        if (bVar12 == 0) {
          bVar12 = (byte)((~uVar16 & uVar9) >> (bVar2 & 0x1f)) & (byte)(uVar16 >> 2) | 1;
        }
        uVar7 = (ulonglong)bVar12;
        if (uVar13 < uVar7) {
          lVar11 = lVar17 - uVar7;
        }
        else {
          lVar11 = -uVar7;
        }
        uVar13 = uVar13 + lVar11;
        lVar11 = *(longlong *)((longlong)pvVar5 + uVar13 * 8);
      }
    }
  }
  lVar17 = uVar13 * 8;
  uVar8 = (**(code **)param_2[4])(param_4);
  *(undefined8 *)(lVar17 + *param_2) = uVar8;
  if (*(void **)(lVar17 + *param_2) == (void *)0x0) {
    return 0;
  }
  _guard_xfg_dispatch_icall_nop(*(void **)(lVar17 + *param_2),0,param_4);
  **(undefined8 **)(lVar17 + *param_2) = param_3;
  param_2[3] = param_2[3] + 1;
  return *(undefined8 *)(lVar17 + *param_2);
}



// FUNCTION 14364baf0 FUN_14364baf0 body=308 status=ok
// SIG undefined FUN_14364baf0(void)

int FUN_14364baf0(longlong param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x2a8);
  if (*(longlong *)(lVar5 + 0x160) == 0) {
    puVar2 = (undefined4 *)(**(code **)(param_1 + 0x18))((ulonglong)*(uint *)(param_1 + 0x370) << 2)
    ;
    *(undefined4 **)(lVar5 + 0x160) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return -1;
    }
    *puVar2 = 0;
  }
  if (*(uint *)(lVar5 + 0x154) <= *(uint *)(lVar5 + 0x158)) {
    if (*(longlong *)(lVar5 + 0x148) == 0) {
      lVar3 = (**(code **)(param_1 + 0x18))(0x400);
      if (lVar3 == 0) {
        return -1;
      }
      *(undefined4 *)(lVar5 + 0x154) = 0x20;
    }
    else {
      lVar3 = (**(code **)(param_1 + 0x20))
                        (*(longlong *)(lVar5 + 0x148),(ulonglong)(*(uint *)(lVar5 + 0x154) * 2) << 5
                        );
      if (lVar3 == 0) {
        return -1;
      }
      *(int *)(lVar5 + 0x154) = *(int *)(lVar5 + 0x154) * 2;
    }
    *(longlong *)(lVar5 + 0x148) = lVar3;
  }
  iVar1 = *(int *)(lVar5 + 0x158);
  lVar3 = *(longlong *)(lVar5 + 0x148);
  lVar4 = (longlong)iVar1 * 0x20 + lVar3;
  *(int *)(lVar5 + 0x158) = iVar1 + 1;
  if (*(int *)(lVar5 + 0x15c) != 0) {
    lVar5 = (longlong)
            *(int *)(*(longlong *)(lVar5 + 0x160) + -4 + (longlong)*(int *)(lVar5 + 0x15c) * 4) *
            0x20 + lVar3;
    if (*(int *)(lVar5 + 0x14) != 0) {
      *(int *)((longlong)*(int *)(lVar5 + 0x14) * 0x20 + 0x1c + lVar3) = iVar1;
    }
    if (*(int *)(lVar5 + 0x18) == 0) {
      *(int *)(lVar5 + 0x10) = iVar1;
    }
    *(int *)(lVar5 + 0x14) = iVar1;
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
  }
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  return iVar1;
}



// FUNCTION 14364bc30 FUN_14364bc30 body=73 status=ok
// SIG undefined FUN_14364bc30(void)

void FUN_14364bc30(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    while (pcVar2 = param_1, cVar1 != '\r') {
      cVar1 = param_1[1];
      param_1 = param_1 + 1;
      if (cVar1 == '\0') {
        return;
      }
    }
    do {
      if (*pcVar2 == '\r') {
        *param_1 = '\n';
        pcVar2 = pcVar2 + 1;
        if (*pcVar2 == '\n') goto LAB_14364bc6d;
      }
      else {
        *param_1 = *pcVar2;
LAB_14364bc6d:
        pcVar2 = pcVar2 + 1;
      }
      param_1 = param_1 + 1;
    } while (*pcVar2 != '\0');
    *param_1 = '\0';
  }
  return;
}



// FUNCTION 14364bc80 FUN_14364bc80 body=107 status=ok
// SIG undefined FUN_14364bc80(void)

void FUN_14364bc80(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = param_1;
  pbVar3 = param_1;
  if (*param_1 == 0) {
    *param_1 = 0;
    return;
  }
  do {
    bVar1 = *pbVar3;
    if ((bVar1 < 0x21) && ((0x100002400U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) {
      if ((pbVar2 != param_1) && (pbVar2[-1] != 0x20)) {
        *pbVar2 = 0x20;
        goto LAB_14364bcc7;
      }
    }
    else {
      *pbVar2 = bVar1;
LAB_14364bcc7:
      pbVar2 = pbVar2 + 1;
    }
    pbVar3 = pbVar3 + 1;
    if (*pbVar3 == 0) {
      if ((pbVar2 != param_1) && (pbVar2[-1] == 0x20)) {
        pbVar2 = pbVar2 + -1;
      }
      *pbVar2 = 0;
      return;
    }
  } while( true );
}



// FUNCTION 14364bcf0 FUN_14364bcf0 body=570 status=ok
// SIG undefined FUN_14364bcf0(void)

void * FUN_14364bcf0(longlong param_1,undefined8 *param_2,undefined1 *param_3,longlong param_4)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_2 == (undefined8 *)0x0) {
    pvVar1 = malloc(0x398);
    if (pvVar1 == (void *)0x0) {
      return (void *)0x0;
    }
    puVar4 = (undefined8 *)((longlong)pvVar1 + 0x18);
    *puVar4 = malloc_exref;
    *(code **)((longlong)pvVar1 + 0x20) = realloc_exref;
    *(code **)((longlong)pvVar1 + 0x28) = free_exref;
  }
  else {
    pvVar1 = (void *)(*(code *)*param_2)();
    if (pvVar1 == (void *)0x0) {
      return (void *)0x0;
    }
    puVar4 = (undefined8 *)((longlong)pvVar1 + 0x18);
    *puVar4 = *param_2;
    *(undefined8 *)((longlong)pvVar1 + 0x20) = param_2[1];
    *(undefined8 *)((longlong)pvVar1 + 0x28) = param_2[2];
  }
  *(undefined4 *)((longlong)pvVar1 + 0x2d8) = 0x10;
  *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
  *(undefined8 *)((longlong)pvVar1 + 0x40) = 0;
  lVar2 = (*(code *)*puVar4)(0x200);
  *(longlong *)((longlong)pvVar1 + 0x2e8) = lVar2;
  if (lVar2 == 0) {
    (**(code **)((longlong)pvVar1 + 0x28))(pvVar1);
    return (void *)0x0;
  }
  lVar2 = (*(code *)*puVar4)(0x400);
  *(longlong *)((longlong)pvVar1 + 0x58) = lVar2;
  if (lVar2 == 0) {
LAB_14364beca:
    (**(code **)((longlong)pvVar1 + 0x28))(*(undefined8 *)((longlong)pvVar1 + 0x2e8));
    (**(code **)((longlong)pvVar1 + 0x28))(pvVar1);
    pvVar1 = (void *)0x0;
  }
  else {
    *(longlong *)((longlong)pvVar1 + 0x60) = lVar2 + 0x400;
    if (param_4 == 0) {
      lVar2 = FUN_14364a6c0(puVar4);
      *(longlong *)((longlong)pvVar1 + 0x2a8) = lVar2;
      if (lVar2 == 0) {
        (**(code **)((longlong)pvVar1 + 0x28))(*(undefined8 *)((longlong)pvVar1 + 0x58));
        goto LAB_14364beca;
      }
    }
    else {
      *(longlong *)((longlong)pvVar1 + 0x2a8) = param_4;
    }
    *(undefined8 *)((longlong)pvVar1 + 0x2d0) = 0;
    *(undefined8 *)((longlong)pvVar1 + 0x2c0) = 0;
    *(undefined8 *)((longlong)pvVar1 + 0x248) = 0;
    *(undefined4 *)((longlong)pvVar1 + 0x370) = 0;
    *(undefined8 *)((longlong)pvVar1 + 0x368) = 0;
    *(undefined8 *)((longlong)pvVar1 + 0xf8) = 0;
    *(undefined8 *)((longlong)pvVar1 + 0x1e8) = 0;
    *(undefined1 *)((longlong)pvVar1 + 0x374) = 0x21;
    *(undefined2 *)((longlong)pvVar1 + 0x1d0) = 0;
    *(undefined8 *)((longlong)pvVar1 + 0x2f0) = 0;
    *(undefined4 *)((longlong)pvVar1 + 0x2f8) = 0;
    *(undefined1 *)((longlong)pvVar1 + 0x2fc) = 0;
    *(undefined8 *)((longlong)pvVar1 + 0x308) = 0;
    *(undefined8 *)((longlong)pvVar1 + 0x310) = 0;
    *(undefined8 *)((longlong)pvVar1 + 0x328) = 0;
    *(undefined8 *)((longlong)pvVar1 + 800) = 0;
    *(undefined8 *)((longlong)pvVar1 + 0x318) = 0;
    *(undefined8 **)((longlong)pvVar1 + 0x330) = puVar4;
    *(undefined8 *)((longlong)pvVar1 + 0x338) = 0;
    *(undefined8 *)((longlong)pvVar1 + 0x340) = 0;
    *(undefined8 *)((longlong)pvVar1 + 0x358) = 0;
    *(undefined8 *)((longlong)pvVar1 + 0x350) = 0;
    *(undefined8 *)((longlong)pvVar1 + 0x348) = 0;
    *(undefined8 **)((longlong)pvVar1 + 0x360) = puVar4;
    FUN_14364bf30(pvVar1,param_1);
    if ((param_1 == 0) || (*(longlong *)((longlong)pvVar1 + 0x1c8) != 0)) {
      if (param_3 == (undefined1 *)0x0) {
        uVar3 = FUN_143654790();
        *(undefined8 *)((longlong)pvVar1 + 0x1c0) = uVar3;
      }
      else {
        *(undefined1 *)((longlong)pvVar1 + 0x1d0) = 1;
        uVar3 = FUN_1436547a0();
        *(undefined8 *)((longlong)pvVar1 + 0x1c0) = uVar3;
        *(undefined1 *)((longlong)pvVar1 + 0x374) = *param_3;
      }
    }
    else {
      FUN_143646e30(pvVar1);
      pvVar1 = (void *)0x0;
    }
  }
  return pvVar1;
}



// FUNCTION 14364bf30 FUN_14364bf30 body=491 status=ok
// SIG undefined FUN_14364bf30(void)

void FUN_14364bf30(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  param_1[0x43] = FUN_14364cdc0;
  FUN_14365c780(param_1 + 0x3f);
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_14364c5a0(param_1 + 0x61,param_2);
  }
  param_1[0x39] = uVar1;
  param_1[0x56] = 0;
  FUN_1436547b0(param_1 + 0x25,param_1 + 0x24,0);
  param_1[6] = param_1[2];
  param_1[7] = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
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
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  param_1[0x1d] = param_1;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x57] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3c] = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38c) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 1;
  *(undefined2 *)(param_1 + 0x71) = 0;
  return;
}



// FUNCTION 14364c120 FUN_14364c120 body=560 status=ok
// SIG undefined FUN_14364c120(void)

longlong FUN_14364c120(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined8 local_res18;
  
  local_res18 = param_3;
  if ((param_1[3] == 0) && (cVar1 = FUN_14364c790(), cVar1 == '\0')) {
    return 0;
  }
  iVar2 = (**(code **)(param_2 + 0x78))(param_2,&local_res18,param_4,param_1 + 3,param_1[2]);
  do {
    if ((iVar2 == 0) || (iVar2 == 1)) {
      return param_1[4];
    }
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) {
LAB_14364c235:
      lVar3 = *param_1;
      if ((lVar3 == 0) || (param_1[4] != lVar3 + 0xc)) {
        iVar2 = (int)param_1[2] - (int)param_1[4];
        if (iVar2 < 0) {
          return 0;
        }
        iVar5 = 0x400;
        if (0x3ff < iVar2) {
          iVar5 = iVar2 * 2;
        }
        lVar6 = (longlong)iVar5;
        plVar4 = (longlong *)(**(code **)param_1[5])(lVar6 + 0xc);
        if (plVar4 == (longlong *)0x0) {
          return 0;
        }
        *(int *)(plVar4 + 1) = iVar5;
        *plVar4 = *param_1;
        _Src = (void *)param_1[4];
        *param_1 = (longlong)plVar4;
        if ((void *)param_1[3] != _Src) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)plVar4 + 0xc),_Src,param_1[3] - (longlong)_Src);
        }
        param_1[3] = (longlong)plVar4 + param_1[3] + (0xc - param_1[4]);
        param_1[4] = (longlong)plVar4 + 0xc;
        lVar3 = (longlong)plVar4 + 0xc;
      }
      else {
        iVar2 = ((int)param_1[2] - (int)param_1[4]) * 2;
        if (iVar2 < 0) {
          return 0;
        }
        lVar6 = (longlong)iVar2;
        lVar3 = (**(code **)(param_1[5] + 8))(lVar3,lVar6 + 0xc);
        if (lVar3 == 0) {
          return 0;
        }
        *param_1 = lVar3;
        *(int *)(lVar3 + 8) = iVar2;
        param_1[3] = param_1[3] + (*param_1 - param_1[4]) + 0xc;
        lVar3 = *param_1 + 0xc;
        param_1[4] = lVar3;
      }
      lVar3 = lVar3 + lVar6;
    }
    else if (param_1[4] == 0) {
      *param_1 = (longlong)plVar4;
      param_1[1] = *plVar4;
      *plVar4 = 0;
      lVar6 = *param_1 + 0xc;
      param_1[4] = lVar6;
      lVar3 = *(int *)(*param_1 + 8) + lVar6;
      param_1[3] = lVar6;
    }
    else {
      if ((longlong)(int)plVar4[1] <= param_1[2] - param_1[4]) goto LAB_14364c235;
      lVar3 = *plVar4;
      *plVar4 = *param_1;
      lVar6 = param_1[1];
      param_1[1] = lVar3;
      *param_1 = lVar6;
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar6 + 0xc),(void *)param_1[4],param_1[2] - param_1[4]);
      lVar3 = *param_1;
      param_1[3] = param_1[3] + (lVar3 - param_1[4]) + 0xc;
      param_1[4] = lVar3 + 0xc;
      lVar3 = (longlong)*(int *)(lVar3 + 8) + lVar3 + 0xc;
    }
    param_1[2] = lVar3;
    iVar2 = (**(code **)(param_2 + 0x78))(param_2,&local_res18,param_4,param_1 + 3,lVar3);
  } while( true );
}



// FUNCTION 14364c350 FUN_14364c350 body=484 status=ok
// SIG undefined FUN_14364c350(void)

longlong FUN_14364c350(longlong *param_1,char *param_2)

{
  longlong lVar1;
  char cVar2;
  void *_Src;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  cVar2 = *param_2;
  do {
    if (cVar2 == '\0') {
      return param_1[4];
    }
    if (param_1[3] == param_1[2]) {
      plVar5 = (longlong *)param_1[1];
      if (plVar5 == (longlong *)0x0) {
LAB_14364c426:
        lVar4 = *param_1;
        if ((lVar4 == 0) || (param_1[4] != lVar4 + 0xc)) {
          iVar3 = (int)param_1[2] - (int)param_1[4];
          if (iVar3 < 0) {
            return 0;
          }
          iVar6 = 0x400;
          if (0x3ff < iVar3) {
            iVar6 = iVar3 * 2;
          }
          plVar5 = (longlong *)(**(code **)param_1[5])((longlong)iVar6 + 0xc);
          if (plVar5 == (longlong *)0x0) {
            return 0;
          }
          *(int *)(plVar5 + 1) = iVar6;
          *plVar5 = *param_1;
          _Src = (void *)param_1[4];
          *param_1 = (longlong)plVar5;
          if ((void *)param_1[3] != _Src) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)plVar5 + 0xc),_Src,param_1[3] - (longlong)_Src);
          }
          param_1[3] = (longlong)plVar5 + param_1[3] + (0xc - param_1[4]);
          param_1[4] = (longlong)plVar5 + 0xc;
          lVar4 = (longlong)iVar6 + 0xc + (longlong)plVar5;
        }
        else {
          iVar3 = ((int)param_1[2] - (int)param_1[4]) * 2;
          if (iVar3 < 0) {
            return 0;
          }
          lVar4 = (**(code **)(param_1[5] + 8))(lVar4,(longlong)iVar3 + 0xc);
          if (lVar4 == 0) {
            return 0;
          }
          *param_1 = lVar4;
          *(int *)(lVar4 + 8) = iVar3;
          param_1[3] = param_1[3] + (*param_1 - param_1[4]) + 0xc;
          lVar4 = *param_1 + 0xc;
          param_1[4] = lVar4;
          lVar4 = lVar4 + iVar3;
        }
      }
      else if (param_1[4] == 0) {
        *param_1 = (longlong)plVar5;
        param_1[1] = *plVar5;
        *plVar5 = 0;
        lVar1 = *param_1 + 0xc;
        param_1[4] = lVar1;
        lVar4 = *(int *)(*param_1 + 8) + lVar1;
        param_1[3] = lVar1;
      }
      else {
        if ((longlong)(int)plVar5[1] <= param_1[2] - param_1[4]) goto LAB_14364c426;
        lVar4 = *plVar5;
        *plVar5 = *param_1;
        lVar1 = param_1[1];
        param_1[1] = lVar4;
        *param_1 = lVar1;
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar1 + 0xc),(void *)param_1[4],param_1[2] - param_1[4]);
        lVar4 = *param_1;
        param_1[3] = param_1[3] + (lVar4 - param_1[4]) + 0xc;
        param_1[4] = lVar4 + 0xc;
        lVar4 = (longlong)*(int *)(lVar4 + 8) + lVar4 + 0xc;
      }
      param_1[2] = lVar4;
    }
    cVar2 = *param_2;
    param_2 = param_2 + 1;
    *(char *)param_1[3] = cVar2;
    param_1[3] = param_1[3] + 1;
    cVar2 = *param_2;
  } while( true );
}



// FUNCTION 14364c540 FUN_14364c540 body=88 status=ok
// SIG undefined FUN_14364c540(void)

void FUN_14364c540(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1[1] == 0) {
    param_1[1] = *param_1;
    *param_1 = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  puVar2 = (undefined8 *)*param_1;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = param_1[1];
    param_1[1] = puVar2;
    puVar2 = puVar1;
  }
  *param_1 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 14364c5a0 FUN_14364c5a0 body=485 status=ok
// SIG undefined FUN_14364c5a0(void)

longlong FUN_14364c5a0(longlong *param_1,char *param_2)

{
  longlong lVar1;
  char cVar2;
  void *_Src;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  do {
    if (param_1[3] == param_1[2]) {
      plVar5 = (longlong *)param_1[1];
      if (plVar5 == (longlong *)0x0) {
LAB_14364c668:
        lVar4 = *param_1;
        if ((lVar4 == 0) || (param_1[4] != lVar4 + 0xc)) {
          iVar3 = (int)param_1[2] - (int)param_1[4];
          if (iVar3 < 0) {
            return 0;
          }
          iVar6 = 0x400;
          if (0x3ff < iVar3) {
            iVar6 = iVar3 * 2;
          }
          plVar5 = (longlong *)(**(code **)param_1[5])((longlong)iVar6 + 0xc);
          if (plVar5 == (longlong *)0x0) {
            return 0;
          }
          *(int *)(plVar5 + 1) = iVar6;
          *plVar5 = *param_1;
          _Src = (void *)param_1[4];
          *param_1 = (longlong)plVar5;
          if ((void *)param_1[3] != _Src) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)plVar5 + 0xc),_Src,param_1[3] - (longlong)_Src);
          }
          param_1[3] = (longlong)plVar5 + param_1[3] + (0xc - param_1[4]);
          param_1[4] = (longlong)plVar5 + 0xc;
          lVar4 = (longlong)iVar6 + 0xc + (longlong)plVar5;
        }
        else {
          iVar3 = ((int)param_1[2] - (int)param_1[4]) * 2;
          if (iVar3 < 0) {
            return 0;
          }
          lVar4 = (**(code **)(param_1[5] + 8))(lVar4,(longlong)iVar3 + 0xc);
          if (lVar4 == 0) {
            return 0;
          }
          *param_1 = lVar4;
          *(int *)(lVar4 + 8) = iVar3;
          param_1[3] = param_1[3] + (*param_1 - param_1[4]) + 0xc;
          lVar4 = *param_1 + 0xc;
          param_1[4] = lVar4;
          lVar4 = lVar4 + iVar3;
        }
      }
      else if (param_1[4] == 0) {
        *param_1 = (longlong)plVar5;
        param_1[1] = *plVar5;
        *plVar5 = 0;
        lVar1 = *param_1 + 0xc;
        param_1[4] = lVar1;
        lVar4 = *(int *)(*param_1 + 8) + lVar1;
        param_1[3] = lVar1;
      }
      else {
        if ((longlong)(int)plVar5[1] <= param_1[2] - param_1[4]) goto LAB_14364c668;
        lVar4 = *plVar5;
        *plVar5 = *param_1;
        lVar1 = param_1[1];
        param_1[1] = lVar4;
        *param_1 = lVar1;
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar1 + 0xc),(void *)param_1[4],param_1[2] - param_1[4]);
        lVar4 = *param_1;
        param_1[3] = param_1[3] + (lVar4 - param_1[4]) + 0xc;
        param_1[4] = lVar4 + 0xc;
        lVar4 = (longlong)*(int *)(lVar4 + 8) + lVar4 + 0xc;
      }
      param_1[2] = lVar4;
    }
    *(char *)param_1[3] = *param_2;
    param_1[3] = param_1[3] + 1;
    cVar2 = *param_2;
    param_2 = param_2 + 1;
    if (cVar2 == '\0') {
      lVar4 = param_1[4];
      param_1[4] = param_1[3];
      return lVar4;
    }
  } while( true );
}



// FUNCTION 14364c790 FUN_14364c790 body=421 status=ok
// SIG undefined FUN_14364c790(void)

ulonglong FUN_14364c790(longlong *param_1)

{
  void *_Src;
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar4;
  
  plVar5 = (longlong *)param_1[1];
  if (plVar5 != (longlong *)0x0) {
    if (param_1[4] == 0) {
      *param_1 = (longlong)plVar5;
      param_1[1] = *plVar5;
      *plVar5 = 0;
      lVar3 = *param_1 + 0xc;
      param_1[4] = lVar3;
      lVar2 = *(int *)(*param_1 + 8) + lVar3;
      param_1[3] = lVar3;
      param_1[2] = lVar2;
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
    if (param_1[2] - param_1[4] < (longlong)(int)plVar5[1]) {
      lVar3 = *plVar5;
      *plVar5 = *param_1;
      lVar2 = param_1[1];
      param_1[1] = lVar3;
      *param_1 = lVar2;
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar2 + 0xc),(void *)param_1[4],param_1[2] - param_1[4]);
      lVar3 = *param_1;
      param_1[3] = param_1[3] + (lVar3 - param_1[4]) + 0xc;
      param_1[4] = lVar3 + 0xc;
      lVar3 = (longlong)*(int *)(lVar3 + 8) + lVar3 + 0xc;
      param_1[2] = lVar3;
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
  }
  lVar3 = *param_1;
  if ((lVar3 == 0) || (uVar4 = lVar3 + 0xc, param_1[4] != uVar4)) {
    uVar1 = (int)param_1[2] - (int)param_1[4];
    uVar4 = (ulonglong)uVar1;
    if (-1 < (int)uVar1) {
      iVar6 = 0x400;
      if (0x3ff < (int)uVar1) {
        iVar6 = uVar1 * 2;
      }
      plVar5 = (longlong *)(**(code **)param_1[5])((longlong)iVar6 + 0xc);
      uVar4 = 0;
      if (plVar5 != (longlong *)0x0) {
        *(int *)(plVar5 + 1) = iVar6;
        *plVar5 = *param_1;
        _Src = (void *)param_1[4];
        *param_1 = (longlong)plVar5;
        if ((void *)param_1[3] != _Src) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)plVar5 + 0xc),_Src,param_1[3] - (longlong)_Src);
        }
        param_1[3] = (longlong)plVar5 + param_1[3] + (0xc - param_1[4]);
        param_1[4] = (longlong)plVar5 + 0xc;
        lVar3 = (longlong)iVar6 + 0xc + (longlong)plVar5;
        goto LAB_14364c91a;
      }
    }
  }
  else {
    iVar6 = ((int)param_1[2] - (int)param_1[4]) * 2;
    if (-1 < iVar6) {
      lVar3 = (**(code **)(param_1[5] + 8))(lVar3,(longlong)iVar6 + 0xc);
      uVar4 = 0;
      if (lVar3 != 0) {
        *param_1 = lVar3;
        *(int *)(lVar3 + 8) = iVar6;
        param_1[3] = param_1[3] + (*param_1 - param_1[4]) + 0xc;
        lVar3 = *param_1 + 0xc;
        param_1[4] = lVar3;
        lVar3 = lVar3 + iVar6;
LAB_14364c91a:
        param_1[2] = lVar3;
        return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14364c940 FUN_14364c940 body=70 status=ok
// SIG undefined FUN_14364c940(void)

undefined8 FUN_14364c940(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_14364c120();
  if (lVar2 == 0) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x18) == *(longlong *)(param_1 + 0x10)) &&
     (cVar1 = FUN_14364c790(param_1), cVar1 == '\0')) {
    return 0;
  }
  **(undefined1 **)(param_1 + 0x18) = 0;
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 14364c990 FUN_14364c990 body=375 status=ok
// SIG undefined FUN_14364c990(void)

int FUN_14364c990(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar6;
  ulonglong in_stack_ffffffffffffffd8;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  puVar4 = *(undefined8 **)(param_1 + 0x248);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(**(code **)(param_1 + 0x18))();
    if (puVar4 == (undefined8 *)0x0) {
      return 1;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x248) = puVar4[2];
  }
  *(undefined1 *)(param_2 + 0x38) = 1;
  *(undefined4 *)(param_2 + 0x14) = 0;
  puVar4[2] = *(undefined8 *)(param_1 + 0x240);
  *(undefined8 **)(param_1 + 0x240) = puVar4;
  puVar4[3] = param_2;
  uVar2 = *(undefined4 *)(param_1 + 0x254);
  *(undefined1 *)((longlong)puVar4 + 0x24) = param_3;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *puVar4 = 0;
  puVar4[1] = 0;
  lVar1 = *(longlong *)(param_2 + 8);
  lVar5 = *(int *)(param_2 + 0x10) + lVar1;
  if (*(char *)(param_2 + 0x39) == '\0') {
    iVar3 = FUN_143648030(param_1,*(undefined4 *)(param_1 + 0x254),*(undefined8 *)(param_1 + 0x1c0),
                          lVar1,lVar5,&local_res8,in_stack_ffffffffffffffd8 & 0xffffffffffffff00);
  }
  else {
    uVar2 = (*(code *)**(undefined8 **)(param_1 + 0x1c0))
                      (*(undefined8 **)(param_1 + 0x1c0),lVar1,lVar5,&local_res8);
    iVar3 = FUN_143648dd0(param_1,*(undefined8 *)(param_1 + 0x1c0),lVar1,lVar5,CONCAT44(uVar6,uVar2)
                          ,local_res8,&local_res8,0);
  }
  if (iVar3 == 0) {
    if ((lVar5 == local_res8) || (*(int *)(param_1 + 0x380) != 3)) {
      *(undefined1 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x240) = puVar4[2];
      puVar4[2] = *(undefined8 *)(param_1 + 0x248);
      *(undefined8 **)(param_1 + 0x248) = puVar4;
    }
    else {
      *(int *)(param_2 + 0x14) = (int)local_res8 - (int)lVar1;
      *(code **)(param_1 + 0x218) = FUN_14364b590;
    }
  }
  return iVar3;
}



// FUNCTION 14364cb10 FUN_14364cb10 body=685 status=ok
// SIG undefined FUN_14364cb10(void)

int FUN_14364cb10(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int local_res8 [2];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  local_res8[0] = -1;
  plVar1 = (longlong *)(param_1 + 0x228);
  lVar6 = 0;
  local_48 = 0;
  local_38 = 0;
  pcVar4 = FUN_143654bc0;
  local_40 = 0;
  if (*(char *)(param_1 + 0x1d0) != '\0') {
    pcVar4 = FUN_143654c30;
  }
  iVar3 = (*pcVar4)(param_2,*(undefined8 *)(param_1 + 0x120),param_3,param_4,plVar1,&local_40,
                    &local_30,&local_48,&local_38,local_res8);
  if (iVar3 == 0) {
    return (param_2 != 0) + 0x1e;
  }
  if (((param_2 == 0) && (local_res8[0] == 1)) &&
     (*(undefined1 *)(*(longlong *)(param_1 + 0x2a8) + 0x102) = 1, *(int *)(param_1 + 0x38c) == 1))
  {
    *(undefined4 *)(param_1 + 0x38c) = 0;
  }
  if (*(longlong *)(param_1 + 0x118) == 0) {
    lVar5 = lVar6;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_14364d010(param_1,*(undefined8 *)(param_1 + 0x120),param_3,param_4);
      lVar5 = 0;
    }
LAB_14364ccd7:
    if (*(longlong *)(param_1 + 0x1c8) == 0) {
      if (local_38 == 0) {
        if (local_48 != 0) {
          if (lVar6 != 0) {
LAB_14364cd8d:
            iVar3 = FUN_14364b370(param_1,lVar6);
            FUN_14364c540(param_1 + 0x338);
            if (iVar3 != 0x12) {
              return iVar3;
            }
            *plVar1 = local_48;
            return 0x12;
          }
          iVar3 = (**(code **)(*(longlong *)(param_1 + 0x120) + 0x40))
                            (*(longlong *)(param_1 + 0x120));
          lVar6 = FUN_14364c940(param_1 + 0x338,*(undefined8 *)(param_1 + 0x120),local_48,
                                iVar3 + local_48);
          if (lVar6 != 0) goto LAB_14364cd8d;
          goto LAB_14364ccb2;
        }
      }
      else {
        if (*(int *)(local_38 + 0x88) != *(int *)(*(longlong *)(param_1 + 0x120) + 0x88)) {
          *plVar1 = local_48;
          return 0x13;
        }
        *(longlong *)(param_1 + 0x120) = local_38;
      }
    }
    if ((lVar6 != 0) || (lVar5 != 0)) {
      FUN_14364c540(param_1 + 0x338);
    }
    iVar3 = 0;
  }
  else {
    lVar7 = lVar6;
    if (local_48 == 0) {
LAB_14364cc64:
      if ((local_40 == 0) ||
         (lVar6 = FUN_14364c940(param_1 + 0x338,*(longlong *)(param_1 + 0x120),local_40,
                                local_30 - *(int *)(*(longlong *)(param_1 + 0x120) + 0x88)),
         lVar6 != 0)) {
        (**(code **)(param_1 + 0x118))(*(undefined8 *)(param_1 + 8),lVar6,lVar7,local_res8[0]);
        lVar5 = lVar6;
        lVar6 = lVar7;
        goto LAB_14364ccd7;
      }
    }
    else {
      iVar3 = (**(code **)(*(longlong *)(param_1 + 0x120) + 0x40))(*(longlong *)(param_1 + 0x120));
      lVar5 = FUN_14364c120(param_1 + 0x338,*(undefined8 *)(param_1 + 0x120),local_48,
                            iVar3 + local_48);
      if ((lVar5 != 0) &&
         ((*(longlong *)(param_1 + 0x350) != *(longlong *)(param_1 + 0x348) ||
          (cVar2 = FUN_14364c790(param_1 + 0x338), cVar2 != '\0')))) {
        **(undefined1 **)(param_1 + 0x350) = 0;
        *(longlong *)(param_1 + 0x350) = *(longlong *)(param_1 + 0x350) + 1;
        lVar7 = *(longlong *)(param_1 + 0x358);
        if (lVar7 != 0) {
          *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_1 + 0x350);
          goto LAB_14364cc64;
        }
      }
    }
LAB_14364ccb2:
    iVar3 = 1;
  }
  return iVar3;
}



// FUNCTION 14364cdc0 FUN_14364cdc0 body=155 status=ok
// SIG undefined FUN_14364cdc0(void)

void FUN_14364cdc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = FUN_1436547b0;
  if (*(char *)(param_1 + 0x1d0) != '\0') {
    pcVar2 = FUN_143654820;
  }
  iVar1 = (*pcVar2)(param_1 + 0x128,param_1 + 0x120,*(undefined8 *)(param_1 + 0x1c8));
  if ((iVar1 == 0) && (iVar1 = FUN_14364b370(param_1,*(undefined8 *)(param_1 + 0x1c8)), iVar1 != 0))
  {
    return;
  }
  *(code **)(param_1 + 0x218) = FUN_14364ce60;
  FUN_14364ce60(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14364ce60 FUN_14364ce60 body=131 status=ok
// SIG undefined FUN_14364ce60(void)

void FUN_14364ce60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 local_res8;
  
  local_res8 = param_2;
  uVar1 = (*(code *)**(undefined8 **)(param_1 + 0x120))
                    (*(undefined8 **)(param_1 + 0x120),param_2,param_3,&local_res8);
  FUN_143648dd0(param_1,*(undefined8 *)(param_1 + 0x120),param_2,param_3,uVar1,local_res8,param_4,
                *(char *)(param_1 + 900) == '\0');
  return;
}



// FUNCTION 14364cef0 FUN_14364cef0 body=282 status=ok
// SIG undefined FUN_14364cef0(void)

undefined8 FUN_14364cef0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  char *pcVar2;
  char cVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_14364d010();
    }
    return 1;
  }
  lVar1 = param_1 + 0x308;
  lVar4 = FUN_14364c120(lVar1,param_2,*(int *)(param_2 + 0x88) * 4 + param_3,
                        param_4 - *(int *)(param_2 + 0x88) * 3);
  if ((lVar4 != 0) &&
     ((*(longlong *)(param_1 + 800) != *(longlong *)(param_1 + 0x318) ||
      (cVar3 = FUN_14364c790(lVar1), cVar3 != '\0')))) {
    **(undefined1 **)(param_1 + 800) = 0;
    *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
    pcVar2 = *(char **)(param_1 + 0x328);
    if (pcVar2 != (char *)0x0) {
      cVar3 = *pcVar2;
      pcVar5 = pcVar2;
      while (cVar3 != '\0') {
        pcVar6 = pcVar5;
        if (cVar3 == '\r') goto LAB_14364cfb0;
        pcVar6 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        cVar3 = *pcVar6;
      }
      goto LAB_14364cfd8;
    }
  }
  return 0;
LAB_14364cfb0:
  do {
    if (*pcVar5 == '\r') {
      *pcVar6 = '\n';
      pcVar5 = pcVar5 + 1;
      if (*pcVar5 == '\n') goto LAB_14364cfcd;
    }
    else {
      *pcVar6 = *pcVar5;
LAB_14364cfcd:
      pcVar5 = pcVar5 + 1;
    }
    pcVar6 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  *pcVar6 = '\0';
LAB_14364cfd8:
  (**(code **)(param_1 + 0x88))(*(undefined8 *)(param_1 + 8),pcVar2);
  FUN_14364c540(lVar1);
  return 1;
}



// FUNCTION 14364d010 FUN_14364d010 body=232 status=ok
// SIG undefined FUN_14364d010(void)

void FUN_14364d010(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (*(char *)(param_2 + 0x8c) != '\0') {
    (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 8),param_3,(int)param_4 - (int)param_3);
    return;
  }
  if (param_2 == *(longlong *)(param_1 + 0x120)) {
    puVar2 = (undefined8 *)(param_1 + 0x228);
    puVar3 = (undefined8 *)(param_1 + 0x230);
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x240);
    puVar3 = puVar2 + 1;
  }
  do {
    local_res10 = *(undefined8 *)(param_1 + 0x58);
    iVar1 = (**(code **)(param_2 + 0x78))
                      (param_2,local_res18,param_4,&local_res10,*(undefined8 *)(param_1 + 0x60));
    *puVar3 = local_res18[0];
    (**(code **)(param_1 + 0xa0))
              (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
               (int)local_res10 - *(int *)(param_1 + 0x58));
    *puVar2 = local_res18[0];
    if (iVar1 == 0) {
      return;
    }
  } while (iVar1 != 1);
  return;
}



// FUNCTION 14364d100 FUN_14364d100 body=353 status=ok
// SIG undefined FUN_14364d100(void)

undefined8 FUN_14364d100(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_14364d010();
    }
    return 1;
  }
  param_3 = param_3 + *(int *)(param_2 + 0x88) * 2;
  iVar4 = (**(code **)(param_2 + 0x40))(param_2,param_3);
  lVar1 = param_1 + 0x308;
  lVar5 = FUN_14364c120(lVar1,param_2,param_3,iVar4 + param_3);
  if ((lVar5 != 0) &&
     ((*(longlong *)(param_1 + 800) != *(longlong *)(param_1 + 0x318) ||
      (cVar3 = FUN_14364c790(lVar1), cVar3 != '\0')))) {
    **(undefined1 **)(param_1 + 800) = 0;
    *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
    lVar5 = *(longlong *)(param_1 + 0x328);
    if (lVar5 != 0) {
      *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 800);
      iVar2 = *(int *)(param_2 + 0x88);
      uVar6 = (**(code **)(param_2 + 0x48))(param_2,iVar4 + param_3);
      lVar7 = FUN_14364c120(lVar1,param_2,uVar6,param_4 - iVar2 * 2);
      if ((lVar7 != 0) &&
         ((*(longlong *)(param_1 + 800) != *(longlong *)(param_1 + 0x318) ||
          (cVar3 = FUN_14364c790(lVar1), cVar3 != '\0')))) {
        **(undefined1 **)(param_1 + 800) = 0;
        *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
        if (*(longlong *)(param_1 + 0x328) != 0) {
          FUN_14364bc30(*(longlong *)(param_1 + 0x328));
          (**(code **)(param_1 + 0x80))(*(undefined8 *)(param_1 + 8),lVar5);
          FUN_14364c540(lVar1);
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14364d270 FUN_14364d270 body=655 status=ok
// SIG undefined FUN_14364d270(void)

undefined8 FUN_14364d270(longlong param_1,char *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char *pcVar6;
  
  cVar2 = *param_2;
  lVar1 = *(longlong *)(param_1 + 0x2a8);
  pcVar6 = param_2;
  do {
    if (cVar2 == '\0') {
      return 1;
    }
    cVar2 = *param_2;
    if ((cVar2 == '\f') || (cVar2 == '\0')) {
      if ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318)) &&
         (cVar2 = FUN_14364c790(param_1 + 0x308), cVar2 == '\0')) {
        return 0;
      }
      **(undefined1 **)(param_1 + 800) = 0;
      *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
      lVar5 = FUN_14364b780(param_1,lVar1,*(undefined8 *)(param_1 + 0x328),0);
      if (lVar5 != 0) {
        *(undefined1 *)(lVar5 + 0x38) = 1;
      }
      if (*param_2 != '\0') {
        param_2 = param_2 + 1;
      }
      *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x328);
      pcVar6 = param_2;
    }
    else if (cVar2 == '=') {
      if (*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x328)) {
        plVar4 = (longlong *)(lVar1 + 0x130);
      }
      else {
        if ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318)) &&
           (cVar2 = FUN_14364c790(param_1 + 0x308), cVar2 == '\0')) {
          return 0;
        }
        **(undefined1 **)(param_1 + 800) = 0;
        *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
        plVar4 = (longlong *)
                 FUN_14364b780(param_1,lVar1 + 0x78,*(undefined8 *)(param_1 + 0x328),0x10);
        if (plVar4 == (longlong *)0x0) {
          return 0;
        }
        if (*plVar4 == *(longlong *)(param_1 + 0x328)) {
          lVar5 = FUN_14364c5a0(lVar1 + 0xa0);
          *plVar4 = lVar5;
          if (lVar5 == 0) {
            return 0;
          }
        }
        *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x328);
      }
      pcVar6 = param_2 + 1;
      param_2 = param_2 + 1;
      cVar2 = *pcVar6;
      while ((cVar2 != '\f' && (cVar2 != '\0'))) {
        if ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318)) &&
           (cVar2 = FUN_14364c790(param_1 + 0x308), cVar2 == '\0')) {
          return 0;
        }
        cVar2 = *param_2;
        param_2 = param_2 + 1;
        **(char **)(param_1 + 800) = cVar2;
        *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
        cVar2 = *param_2;
      }
      if ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318)) &&
         (cVar2 = FUN_14364c790(param_1 + 0x308), cVar2 == '\0')) {
        return 0;
      }
      **(undefined1 **)(param_1 + 800) = 0;
      *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
      iVar3 = FUN_143647150(param_1,plVar4,0,*(undefined8 *)(param_1 + 0x328),param_1 + 0x2c8);
      if (iVar3 != 0) {
        return 0;
      }
      *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x328);
      pcVar6 = param_2;
      if (*param_2 != '\0') {
        param_2 = param_2 + 1;
        pcVar6 = param_2;
      }
    }
    else {
      if ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318)) &&
         (cVar2 = FUN_14364c790(param_1 + 0x308), cVar2 == '\0')) {
        return 0;
      }
      **(char **)(param_1 + 800) = *param_2;
      *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
      param_2 = param_2 + 1;
    }
    cVar2 = *pcVar6;
  } while( true );
}



// FUNCTION 14364d500 FUN_14364d500 body=316 status=ok
// SIG undefined FUN_14364d500(void)

undefined8 FUN_14364d500(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = (char *)*param_2;
  lVar1 = *(longlong *)(param_1 + 0x2a8);
  cVar2 = *pcVar4;
  do {
    if (cVar2 == '\0') {
      return 1;
    }
    if (cVar2 == ':') {
      for (pcVar5 = (char *)*param_2; pcVar5 != pcVar4; pcVar5 = pcVar5 + 1) {
        if ((*(longlong *)(lVar1 + 0xb8) == *(longlong *)(lVar1 + 0xb0)) &&
           (cVar2 = FUN_14364c790(lVar1 + 0xa0), cVar2 == '\0')) {
          return 0;
        }
        **(char **)(lVar1 + 0xb8) = *pcVar5;
        *(longlong *)(lVar1 + 0xb8) = *(longlong *)(lVar1 + 0xb8) + 1;
      }
      if ((*(longlong *)(lVar1 + 0xb8) == *(longlong *)(lVar1 + 0xb0)) &&
         (cVar2 = FUN_14364c790(lVar1 + 0xa0), cVar2 == '\0')) {
        return 0;
      }
      **(undefined1 **)(lVar1 + 0xb8) = 0;
      *(longlong *)(lVar1 + 0xb8) = *(longlong *)(lVar1 + 0xb8) + 1;
      plVar3 = (longlong *)FUN_14364b780(param_1,lVar1 + 0x78,*(undefined8 *)(lVar1 + 0xc0),0x10);
      if (plVar3 == (longlong *)0x0) {
        return 0;
      }
      if (*plVar3 == *(longlong *)(lVar1 + 0xc0)) {
        *(undefined8 *)(lVar1 + 0xc0) = *(undefined8 *)(lVar1 + 0xb8);
      }
      else {
        *(longlong *)(lVar1 + 0xb8) = *(longlong *)(lVar1 + 0xc0);
      }
      param_2[1] = plVar3;
    }
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 1;
  } while( true );
}



// FUNCTION 14364d640 FUN_14364d640 body=106 status=ok
// SIG undefined FUN_14364d640(void)

undefined8 FUN_14364d640(longlong param_1)

{
  DWORD DVar1;
  undefined8 uVar2;
  _FILETIME local_res8;
  
  if (*(int *)(param_1 + 0x390) == 0) {
    GetSystemTimeAsFileTime(&local_res8);
    DVar1 = GetCurrentProcessId();
    *(DWORD *)(param_1 + 0x390) =
         (DVar1 ^ (uint)param_1 ^ local_res8.dwLowDateTime ^ local_res8.dwHighDateTime) * 0x7fffffff
    ;
  }
  if (*(char *)(param_1 + 0x1d0) != '\0') {
    uVar2 = FUN_14364d270(param_1,"xml=http://www.w3.org/XML/1998/namespace");
    return uVar2;
  }
  return 1;
}



// FUNCTION 14364d6b0 FUN_14364d6b0 body=132 status=ok
// SIG undefined FUN_14364d6b0(void)

undefined8
FUN_14364d6b0(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  uVar2 = FUN_1436473d0();
  if ((int)uVar2 == 0) {
    if (((param_3 == '\0') && (*(longlong *)(param_6 + 0x18) != *(longlong *)(param_6 + 0x20))) &&
       (pcVar3 = (char *)(*(longlong *)(param_6 + 0x18) + -1), *pcVar3 == ' ')) {
      *(char **)(param_6 + 0x18) = pcVar3;
    }
    if (*(longlong *)(param_6 + 0x18) == *(longlong *)(param_6 + 0x10)) {
      cVar1 = FUN_14364c790(param_6);
      if (cVar1 == '\0') {
        return 1;
      }
    }
    **(undefined1 **)(param_6 + 0x18) = 0;
    *(longlong *)(param_6 + 0x18) = *(longlong *)(param_6 + 0x18) + 1;
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14364d740 FUN_14364d740 body=2539 status=ok
// SIG undefined FUN_14364d740(void)

undefined8
FUN_14364d740(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  char *pcVar16;
  void *pvVar17;
  undefined8 *puVar18;
  char *pcVar19;
  byte bVar20;
  longlong *plVar21;
  ulonglong uVar22;
  byte *pbVar23;
  undefined1 uVar24;
  longlong *plVar25;
  int iVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  int local_res8;
  uint local_78;
  longlong local_70;
  longlong local_68;
  longlong local_58;
  
  lVar1 = *(longlong *)(param_1 + 0x2a8);
  uVar22 = 0;
  local_res8 = 0;
  local_68 = FUN_14364b780(param_1,lVar1 + 0x28,*param_4,0);
  if ((local_68 == 0) &&
     (((lVar9 = FUN_14364c5a0(lVar1 + 0xa0,*param_4), lVar9 == 0 ||
       (local_68 = FUN_14364b780(param_1,lVar1 + 0x28,lVar9,0x28), local_68 == 0)) ||
      ((*(char *)(param_1 + 0x1d0) != '\0' && (iVar6 = FUN_14364d500(param_1,local_68), iVar6 == 0))
      )))) {
LAB_14364da97:
    uVar13 = 1;
  }
  else {
    iVar6 = *(int *)(local_68 + 0x18);
    lVar9 = (longlong)iVar6;
    iVar7 = (**(code **)(param_2 + 0x50))
                      (param_2,param_3,*(undefined4 *)(param_1 + 0x2d8),
                       *(undefined8 *)(param_1 + 0x2e8));
    iVar26 = *(int *)(param_1 + 0x2d8);
    iVar6 = iVar7 + iVar6;
    if (iVar26 < iVar6) {
      iVar6 = iVar6 + 0x10;
      *(int *)(param_1 + 0x2d8) = iVar6;
      lVar10 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x2e8),(longlong)iVar6 << 5);
      if (lVar10 == 0) goto LAB_14364da97;
      *(longlong *)(param_1 + 0x2e8) = lVar10;
      if (iVar26 < iVar7) {
        (**(code **)(param_2 + 0x50))(param_2,param_3,iVar7,lVar10);
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x2e8);
    local_78 = 0;
    if (0 < iVar7) {
      local_70 = 0;
      plVar21 = plVar2;
      uVar27 = uVar22;
      do {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x2e8) + uVar27);
        iVar6 = (**(code **)(param_2 + 0x40))(param_2,lVar10);
        plVar11 = (longlong *)FUN_14364aca0(param_1,param_2,lVar10,iVar6 + lVar10);
        if (plVar11 == (longlong *)0x0) goto LAB_14364da97;
        if (*(char *)(*plVar11 + -1) != '\0') {
          if (param_2 == *(longlong *)(param_1 + 0x120)) {
            *(undefined8 *)(param_1 + 0x228) =
                 *(undefined8 *)((longlong)(int)local_78 * 0x20 + *(longlong *)(param_1 + 0x2e8));
          }
          return 8;
        }
        *(undefined1 *)(*plVar11 + -1) = 1;
        *plVar21 = *plVar11;
        lVar10 = *(longlong *)(param_1 + 0x2e8) + uVar27;
        if (*(char *)(lVar10 + 0x18) == '\0') {
          uVar24 = 1;
          if (((char)plVar11[2] != '\0') && (lVar12 = 0, 0 < lVar9)) {
            puVar18 = *(undefined8 **)(local_68 + 0x20);
            do {
              if (plVar11 == (longlong *)*puVar18) {
                uVar24 = *(undefined1 *)(*(undefined8 **)(local_68 + 0x20) + lVar12 * 3 + 1);
                break;
              }
              lVar12 = lVar12 + 1;
              puVar18 = puVar18 + 3;
            } while (lVar12 < lVar9);
          }
          uVar13 = FUN_14364d6b0(param_1,param_2,uVar24,*(undefined8 *)(lVar10 + 8),
                                 *(undefined8 *)(lVar10 + 0x10),param_1 + 0x308);
          if ((int)uVar13 != 0) {
            return uVar13;
          }
          plVar21[1] = *(longlong *)(param_1 + 0x328);
        }
        else {
          lVar10 = FUN_14364c120(param_1 + 0x308,param_2,*(undefined8 *)(lVar10 + 8),
                                 *(undefined8 *)(lVar10 + 0x10));
          if ((lVar10 == 0) ||
             ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318) &&
              (cVar5 = FUN_14364c790(param_1 + 0x308), cVar5 == '\0')))) {
            plVar21[1] = 0;
            goto LAB_14364da97;
          }
          **(undefined1 **)(param_1 + 800) = 0;
          *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
          lVar10 = *(longlong *)(param_1 + 0x328);
          plVar21[1] = lVar10;
          if (lVar10 == 0) goto LAB_14364da97;
        }
        *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 800);
        if (plVar11[1] == 0) {
          uVar22 = (ulonglong)((int)uVar22 + 2);
          plVar21 = plVar21 + 2;
        }
        else if (*(char *)((longlong)plVar11 + 0x11) == '\0') {
          uVar22 = (ulonglong)((int)uVar22 + 2);
          plVar21 = plVar21 + 2;
          local_res8 = local_res8 + 1;
          *(undefined1 *)(*plVar11 + -1) = 2;
        }
        else {
          uVar13 = FUN_143647150(param_1,plVar11[1],plVar11,plVar21[1],param_5);
          if ((int)uVar13 != 0) {
            return uVar13;
          }
        }
        local_78 = local_78 + 1;
        local_70 = local_70 + 1;
        uVar27 = uVar27 + 0x20;
      } while (local_70 < iVar7);
    }
    uVar27 = 0;
    iVar6 = (int)uVar22;
    *(int *)(param_1 + 0x2dc) = iVar6;
    if ((*(longlong **)(local_68 + 0x10) == (longlong *)0x0) ||
       (lVar10 = **(longlong **)(local_68 + 0x10), *(char *)(lVar10 + -1) == '\0')) {
      *(undefined4 *)(param_1 + 0x2e0) = 0xffffffff;
    }
    else {
      uVar14 = uVar27;
      uVar29 = uVar27;
      if (0 < iVar6) {
        do {
          if (plVar2[uVar14] == lVar10) {
            *(int *)(param_1 + 0x2e0) = (int)uVar29;
            break;
          }
          uVar14 = uVar14 + 2;
          uVar29 = (ulonglong)((int)uVar29 + 2);
        } while ((longlong)uVar14 < (longlong)iVar6);
      }
    }
    if (0 < lVar9) {
      plVar21 = plVar2 + iVar6;
      uVar14 = uVar27;
      uVar29 = uVar27;
      do {
        plVar25 = (longlong *)(*(longlong *)(local_68 + 0x20) + uVar29);
        plVar11 = (longlong *)*plVar25;
        lVar10 = *plVar11;
        if ((*(char *)(lVar10 + -1) == '\0') && (plVar25[2] != 0)) {
          if (plVar11[1] == 0) {
            *(undefined1 *)(lVar10 + -1) = 1;
          }
          else {
            if (*(char *)((longlong)plVar11 + 0x11) != '\0') {
              uVar13 = FUN_143647150(param_1);
              if ((int)uVar13 != 0) {
                return uVar13;
              }
              goto LAB_14364db74;
            }
            local_res8 = local_res8 + 1;
            *(undefined1 *)(lVar10 + -1) = 2;
          }
          uVar22 = (ulonglong)((int)uVar22 + 2);
          *plVar21 = *(longlong *)*plVar25;
          plVar21[1] = plVar25[2];
          plVar21 = plVar21 + 2;
        }
LAB_14364db74:
        iVar6 = (int)uVar22;
        uVar14 = uVar14 + 1;
        uVar29 = uVar29 + 0x18;
      } while ((longlong)uVar14 < lVar9);
    }
    lVar9 = (longlong)iVar6;
    local_78 = 0;
    plVar2[lVar9] = 0;
    if (local_res8 != 0) {
      bVar20 = *(byte *)(param_1 + 0x2fc);
      iVar26 = *(int *)(param_1 + 0x2f8);
      iVar7 = 1 << (bVar20 & 0x1f);
      if (local_res8 * 2 >> (bVar20 & 0x1f) == 0) {
        if (iVar26 == 0) goto LAB_14364dc42;
      }
      else {
        do {
          bVar4 = bVar20 & 0x1f;
          bVar20 = bVar20 + 1;
        } while (local_res8 >> bVar4 != 0);
        *(byte *)(param_1 + 0x2fc) = bVar20;
        if (bVar20 < 3) {
          *(undefined1 *)(param_1 + 0x2fc) = 3;
        }
        iVar7 = 1 << (*(byte *)(param_1 + 0x2fc) & 0x1f);
        lVar10 = (**(code **)(param_1 + 0x20))
                           (*(undefined8 *)(param_1 + 0x2f0),(longlong)iVar7 << 4);
        if (lVar10 == 0) goto LAB_14364da97;
        *(longlong *)(param_1 + 0x2f0) = lVar10;
LAB_14364dc42:
        iVar26 = -1;
        lVar10 = (longlong)iVar7;
        if (iVar7 != 0) {
          lVar12 = lVar10 << 4;
          do {
            lVar12 = lVar12 + -0x10;
            *(undefined4 *)(lVar12 + *(longlong *)(param_1 + 0x2f0)) = 0xffffffff;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
      }
      uVar27 = 0;
      iVar26 = iVar26 + -1;
      *(int *)(param_1 + 0x2f8) = iVar26;
      if (0 < iVar6) {
        local_58 = 0;
        do {
          uVar22 = 0;
          pbVar23 = (byte *)plVar2[local_58];
          if (pbVar23[-1] == 2) {
            uVar30 = *(uint *)(param_1 + 0x390);
            pbVar23[-1] = 0;
            lVar10 = FUN_14364b780(param_1,lVar1 + 0x50,pbVar23,0);
            if ((lVar10 == 0) || (*(longlong *)(lVar10 + 8) == 0)) goto LAB_14364da97;
            puVar18 = *(undefined8 **)(*(longlong *)(lVar10 + 8) + 8);
            if (puVar18 == (undefined8 *)0x0) {
              return 0x1b;
            }
            uVar27 = uVar22;
            if (0 < *(int *)(puVar18 + 5)) {
              do {
                bVar20 = *(byte *)(uVar22 + puVar18[4]);
                if ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318)) &&
                   (cVar5 = FUN_14364c790(param_1 + 0x308), cVar5 == '\0')) goto LAB_14364da97;
                uVar28 = (int)uVar27 + 1;
                uVar27 = (ulonglong)uVar28;
                uVar22 = uVar22 + 1;
                **(byte **)(param_1 + 800) = bVar20;
                *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
                uVar30 = uVar30 * 0xf4243 ^ (uint)bVar20;
              } while ((int)uVar28 < *(int *)(puVar18 + 5));
            }
            do {
              bVar20 = *pbVar23;
              pbVar23 = pbVar23 + 1;
            } while (bVar20 != 0x3a);
            do {
              bVar20 = *pbVar23;
              if ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318)) &&
                 (cVar5 = FUN_14364c790(param_1 + 0x308), cVar5 == '\0')) goto LAB_14364da97;
              **(byte **)(param_1 + 800) = *pbVar23;
              *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
              lVar10 = *(longlong *)(param_1 + 800);
              uVar30 = uVar30 * 0xf4243 ^ (uint)bVar20;
              bVar20 = *pbVar23;
              pbVar23 = pbVar23 + 1;
            } while (bVar20 != 0);
            bVar20 = 0;
            lVar12 = *(longlong *)(param_1 + 0x2f0);
            uVar28 = iVar7 - 1U & uVar30;
            lVar15 = (longlong)(int)uVar28 * 0x10;
            iVar6 = *(int *)(lVar15 + lVar12);
            while (iVar6 == iVar26) {
              if (uVar30 == *(uint *)(lVar12 + 4 + lVar15)) {
                pcVar16 = *(char **)(param_1 + 0x328);
                pcVar19 = *(char **)(lVar12 + lVar15 + 8);
                cVar5 = *pcVar16;
                if (cVar5 == *pcVar19) {
                  lVar15 = (longlong)pcVar19 - (longlong)pcVar16;
                  do {
                    if (cVar5 == '\0') {
                      return 8;
                    }
                    cVar5 = pcVar16[1];
                    pcVar16 = pcVar16 + 1;
                  } while (cVar5 == pcVar16[lVar15]);
                }
                if (*pcVar16 == '\0') {
                  return 8;
                }
              }
              if (bVar20 == 0) {
                bVar20 = (byte)((~(iVar7 - 1U) & uVar30) >> (*(char *)(param_1 + 0x2fc) - 1U & 0x1f)
                               ) & (byte)(iVar7 - 1U >> 2) | 1;
              }
              if ((int)uVar28 < (int)(uint)bVar20) {
                iVar6 = iVar7 - (uint)bVar20;
              }
              else {
                iVar6 = -(uint)bVar20;
              }
              uVar28 = uVar28 + iVar6;
              lVar15 = (longlong)(int)uVar28 * 0x10;
              iVar6 = *(int *)(lVar15 + lVar12);
            }
            if (*(char *)(param_1 + 0x1d1) != '\0') {
              *(undefined1 *)(lVar10 + -1) = *(undefined1 *)(param_1 + 0x374);
              pcVar16 = *(char **)*puVar18;
              do {
                if ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318)) &&
                   (cVar5 = FUN_14364c790(param_1 + 0x308), cVar5 == '\0')) goto LAB_14364da97;
                **(char **)(param_1 + 800) = *pcVar16;
                *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
                cVar5 = *pcVar16;
                pcVar16 = pcVar16 + 1;
                lVar10 = *(longlong *)(param_1 + 800);
              } while (cVar5 != '\0');
            }
            lVar12 = *(longlong *)(param_1 + 0x328);
            *(longlong *)(param_1 + 0x328) = lVar10;
            lVar10 = (longlong)(int)uVar28;
            plVar2[local_58] = lVar12;
            local_res8 = local_res8 + -1;
            *(int *)(*(longlong *)(param_1 + 0x2f0) + lVar10 * 0x10) = iVar26;
            *(uint *)(*(longlong *)(param_1 + 0x2f0) + 4 + lVar10 * 0x10) = uVar30;
            *(longlong *)(*(longlong *)(param_1 + 0x2f0) + 8 + lVar10 * 0x10) = lVar12;
            if (local_res8 == 0) {
              uVar27 = (ulonglong)(local_78 + 2);
              break;
            }
          }
          else {
            pbVar23[-1] = 0;
            local_78 = (uint)uVar27;
          }
          local_78 = local_78 + 2;
          uVar27 = (ulonglong)local_78;
          local_58 = local_58 + 2;
        } while (local_58 < lVar9);
      }
    }
    for (lVar10 = (longlong)(int)uVar27; lVar10 < lVar9; lVar10 = lVar10 + 2) {
      *(undefined1 *)(plVar2[lVar10] + -1) = 0;
    }
    for (lVar9 = *param_5; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 8)) {
      *(undefined1 *)(**(longlong **)(lVar9 + 0x18) + -1) = 0;
    }
    if (*(char *)(param_1 + 0x1d0) != '\0') {
      if (*(longlong *)(local_68 + 8) == 0) {
        puVar18 = *(undefined8 **)(lVar1 + 0x138);
        if (puVar18 == (undefined8 *)0x0) goto LAB_14364e111;
        pcVar16 = (char *)*param_4;
      }
      else {
        puVar18 = *(undefined8 **)(*(longlong *)(local_68 + 8) + 8);
        if (puVar18 == (undefined8 *)0x0) {
          return 0x1b;
        }
        pcVar16 = (char *)*param_4;
        do {
          cVar5 = *pcVar16;
          pcVar16 = pcVar16 + 1;
        } while (cVar5 != ':');
      }
      iVar6 = 0;
      if ((*(char *)(param_1 + 0x1d1) != '\0') &&
         (pcVar19 = *(char **)*puVar18, iVar26 = 0, pcVar19 != (char *)0x0)) {
        do {
          cVar5 = *pcVar19;
          pcVar19 = pcVar19 + 1;
          iVar6 = iVar26 + 1;
          iVar26 = iVar6;
        } while (cVar5 != '\0');
      }
      param_4[1] = pcVar16;
      *(undefined4 *)((longlong)param_4 + 0x1c) = *(undefined4 *)(puVar18 + 5);
      param_4[2] = *(undefined8 *)*puVar18;
      *(int *)(param_4 + 4) = iVar6;
      pcVar19 = pcVar16;
      iVar26 = 0;
      do {
        iVar7 = iVar26;
        cVar5 = *pcVar19;
        pcVar19 = pcVar19 + 1;
        iVar26 = iVar7 + 1;
      } while (cVar5 != '\0');
      iVar8 = *(int *)(puVar18 + 5) + iVar6 + iVar26;
      if (*(int *)((longlong)puVar18 + 0x2c) < iVar8) {
        iVar8 = iVar8 + 0x18;
        pvVar17 = (void *)(**(code **)(param_1 + 0x18))((longlong)iVar8);
        if (pvVar17 == (void *)0x0) goto LAB_14364da97;
        *(int *)((longlong)puVar18 + 0x2c) = iVar8;
        _guard_xfg_dispatch_icall_nop(pvVar17,(void *)puVar18[4],(longlong)*(int *)(puVar18 + 5));
        for (puVar3 = *(undefined8 **)(param_1 + 0x2b8); puVar3 != (undefined8 *)0x0;
            puVar3 = (undefined8 *)*puVar3) {
          if (puVar3[3] == puVar18[4]) {
            puVar3[3] = pvVar17;
          }
        }
        (**(code **)(param_1 + 0x28))(puVar18[4]);
        puVar18[4] = pvVar17;
      }
      pvVar17 = (void *)((longlong)*(int *)(puVar18 + 5) + puVar18[4]);
      _guard_xfg_dispatch_icall_nop(pvVar17,pcVar16,(longlong)iVar26);
      if (iVar6 != 0) {
        *(undefined1 *)((longlong)pvVar17 + (longlong)iVar7) = *(undefined1 *)(param_1 + 0x374);
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar7 + 1 + (longlong)pvVar17),*(void **)*puVar18,
                   (longlong)iVar6);
      }
      *param_4 = puVar18[4];
    }
LAB_14364e111:
    uVar13 = 0;
  }
  return uVar13;
}



// FUNCTION 14364e130 FUN_14364e130 body=1025 status=ok
// SIG undefined FUN_14364e130(void)

int FUN_14364e130(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong local_28;
  longlong local_20;
  
  iVar8 = 0;
  lVar4 = *(longlong *)(param_1 + 0x2a8);
  plVar1 = (longlong *)(lVar4 + 0xd0);
  uVar3 = *(undefined4 *)(param_1 + 0x210);
  *(undefined4 *)(param_1 + 0x210) = 1;
  local_res10 = param_2;
  local_20 = lVar4;
  if ((*plVar1 == 0) && (cVar5 = FUN_14364c790(plVar1), cVar5 == '\0')) {
    return 1;
  }
LAB_14364e1a1:
  do {
    uVar6 = (**(code **)(local_res10 + 0x28))(local_res10,param_3,param_4,&local_28);
    switch(uVar6) {
    case 0:
      if (local_res10 == *(longlong *)(param_1 + 0x120)) {
        *(longlong *)(param_1 + 0x228) = local_28;
      }
      iVar8 = 4;
      goto LAB_14364e515;
    case 6:
    case 9:
      lVar9 = FUN_14364c120(plVar1,local_res10,param_3,local_28);
      param_3 = local_28;
      if (lVar9 == 0) goto LAB_14364e38f;
      break;
    case 10:
      iVar7 = (**(code **)(local_res10 + 0x58))(local_res10,param_3);
      if ((iVar7 < 0) || (iVar7 = FUN_143654cb0(iVar7,local_res8), iVar7 == 0)) {
        if (local_res10 == *(longlong *)(param_1 + 0x120)) {
          *(longlong *)(param_1 + 0x228) = param_3;
        }
        iVar8 = 0xe;
        goto LAB_14364e515;
      }
      lVar9 = 0;
      param_3 = local_28;
      if (0 < iVar7) {
        do {
          if ((*(longlong *)(lVar4 + 0xe0) == *(longlong *)(lVar4 + 0xe8)) &&
             (cVar5 = FUN_14364c790(plVar1), cVar5 == '\0')) goto LAB_14364e38f;
          puVar2 = local_res8 + lVar9;
          lVar9 = lVar9 + 1;
          **(undefined1 **)(lVar4 + 0xe8) = *puVar2;
          *(longlong *)(lVar4 + 0xe8) = *(longlong *)(lVar4 + 0xe8) + 1;
          param_3 = local_28;
        } while (lVar9 < iVar7);
      }
      break;
    case 0x1c:
      if ((*(char *)(param_1 + 0x388) == '\0') && (local_res10 == *(longlong *)(param_1 + 0x120))) {
        *(longlong *)(param_1 + 0x228) = param_3;
        iVar8 = 10;
        goto LAB_14364e515;
      }
      lVar9 = FUN_14364c120(param_1 + 0x308,local_res10,*(int *)(local_res10 + 0x88) + param_3,
                            local_28 - *(int *)(local_res10 + 0x88));
      if ((lVar9 == 0) ||
         ((*(longlong *)(param_1 + 800) == *(longlong *)(param_1 + 0x318) &&
          (cVar5 = FUN_14364c790(), cVar5 == '\0')))) goto LAB_14364e38f;
      **(undefined1 **)(param_1 + 800) = 0;
      *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
      if (*(longlong *)(param_1 + 0x328) == 0) goto LAB_14364e38f;
      lVar10 = FUN_14364b780(param_1,local_20 + 0x108,*(longlong *)(param_1 + 0x328),0);
      lVar9 = local_20;
      *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x328);
      if (lVar10 == 0) {
        *(undefined1 *)(local_20 + 0x100) = *(undefined1 *)(local_20 + 0x102);
        goto LAB_14364e515;
      }
      if (*(char *)(lVar10 + 0x38) != '\0') {
        if (local_res10 == *(longlong *)(param_1 + 0x120)) {
          *(longlong *)(param_1 + 0x228) = param_3;
        }
        iVar8 = 0xc;
        goto LAB_14364e515;
      }
      if (*(longlong *)(lVar10 + 0x18) == 0) goto LAB_14364e336;
      if (*(longlong *)(param_1 + 0xe0) == 0) {
        *(undefined1 *)(local_20 + 0x100) = *(undefined1 *)(local_20 + 0x102);
        param_3 = local_28;
      }
      else {
        *(undefined1 *)(local_20 + 0x103) = 0;
        *(undefined1 *)(lVar10 + 0x38) = 1;
        iVar7 = (**(code **)(param_1 + 0xe0))
                          (*(undefined8 *)(param_1 + 0xe8),0,*(undefined8 *)(lVar10 + 0x20),
                           *(undefined8 *)(lVar10 + 0x18),*(undefined8 *)(lVar10 + 0x28));
        *(undefined1 *)(lVar10 + 0x38) = 0;
        if (iVar7 == 0) {
          iVar8 = 0x15;
          goto LAB_14364e515;
        }
        param_3 = local_28;
        if (*(char *)(lVar9 + 0x103) == '\0') {
          *(undefined1 *)(lVar9 + 0x100) = *(undefined1 *)(lVar9 + 0x102);
        }
      }
      break;
    case 0xfffffffc:
      iVar8 = 0;
      goto LAB_14364e515;
    case 0xfffffffd:
      local_28 = *(int *)(local_res10 + 0x88) + param_3;
    case 7:
      if ((*(longlong *)(lVar4 + 0xe0) == *(longlong *)(lVar4 + 0xe8)) &&
         (cVar5 = FUN_14364c790(plVar1), cVar5 == '\0')) {
LAB_14364e38f:
        iVar8 = 1;
        goto LAB_14364e515;
      }
      **(undefined1 **)(lVar4 + 0xe8) = 10;
      *(longlong *)(lVar4 + 0xe8) = *(longlong *)(lVar4 + 0xe8) + 1;
      param_3 = local_28;
      break;
    default:
      if (local_res10 == *(longlong *)(param_1 + 0x120)) {
        *(longlong *)(param_1 + 0x228) = param_3;
      }
      iVar8 = 0x17;
      goto LAB_14364e515;
    case 0xffffffff:
      if (local_res10 == *(longlong *)(param_1 + 0x120)) {
        *(longlong *)(param_1 + 0x228) = param_3;
      }
      iVar8 = 4;
      goto LAB_14364e515;
    }
  } while( true );
LAB_14364e336:
  *(undefined1 *)(lVar10 + 0x38) = 1;
  iVar8 = FUN_14364e130(param_1,*(undefined8 *)(param_1 + 0x1c0),*(longlong *)(lVar10 + 8),
                        (longlong)*(int *)(lVar10 + 0x10) + *(longlong *)(lVar10 + 8));
  *(undefined1 *)(lVar10 + 0x38) = 0;
  param_3 = local_28;
  if (iVar8 != 0) {
LAB_14364e515:
    *(undefined4 *)(param_1 + 0x210) = uVar3;
    return iVar8;
  }
  goto LAB_14364e1a1;
}



// FUNCTION 14364e580 FUN_14364e580 body=214 status=ok
// SIG undefined FUN_14364e580(void)

undefined8 FUN_14364e580(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  longlong lVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x2b8);
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      return 1;
    }
    lVar2 = puVar1[8];
    iVar3 = *(int *)(puVar1 + 6) + 1;
    _Dst = (void *)(lVar2 + iVar3);
    if ((void *)puVar1[1] == _Dst) break;
    lVar4 = (longlong)(iVar3 + *(int *)(puVar1 + 2));
    if (puVar1[9] - lVar2 < lVar4) {
      lVar2 = (**(code **)(param_1 + 0x20))(lVar2,lVar4);
      if (lVar2 == 0) {
        return 0;
      }
      if (puVar1[3] == puVar1[8]) {
        puVar1[3] = lVar2;
      }
      if (puVar1[4] != 0) {
        puVar1[4] = (puVar1[4] - puVar1[8]) + lVar2;
      }
      puVar1[8] = lVar2;
      puVar1[9] = lVar4 + lVar2;
      _Dst = (void *)(iVar3 + lVar2);
    }
    _guard_xfg_dispatch_icall_nop(_Dst,(void *)puVar1[1],(longlong)*(int *)(puVar1 + 2));
    puVar1[1] = _Dst;
    puVar1 = (undefined8 *)*puVar1;
  }
  return 1;
}



// FUNCTION 14364e660 FUN_14364e660 body=422 status=ok
// SIG undefined FUN_14364e660(void)

undefined1
FUN_14364e660(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong *param_4,
             byte *param_5)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined1 uVar8;
  
  pbVar6 = (byte *)*param_2;
  pbVar4 = pbVar6 + (param_3 - (longlong)pbVar6 & 0xfffffffffffffffe);
  if (pbVar6 < pbVar4) {
    lVar7 = (longlong)pbVar4 - (longlong)pbVar6;
    do {
      bVar1 = pbVar6[1];
      bVar5 = *pbVar6;
      if (bVar1 == 0) {
        if (0x7f < bVar5) goto LAB_14364e79b;
        pbVar2 = (byte *)*param_4;
        if (pbVar2 == param_5) goto LAB_14364e794;
LAB_14364e7c8:
        *pbVar2 = bVar5;
      }
      else {
        if (bVar1 < 8) {
LAB_14364e79b:
          pbVar2 = (byte *)*param_4;
          if (1 < (longlong)param_5 - (longlong)pbVar2) {
            bVar1 = bVar1 | 0xf0;
LAB_14364e7ac:
            *pbVar2 = bVar1 << 2 | bVar5 >> 6;
            *param_4 = *param_4 + 1;
            pbVar2 = (byte *)*param_4;
            bVar5 = bVar5 & 0x3f | 0x80;
            goto LAB_14364e7c8;
          }
LAB_14364e794:
          uVar8 = 2;
          goto LAB_14364e7e7;
        }
        if (3 < (byte)(bVar1 + 0x28)) {
          if ((longlong)param_5 - *param_4 < 3) goto LAB_14364e794;
          *(byte *)*param_4 = bVar1 >> 4 | 0xe0;
          *param_4 = *param_4 + 1;
          pbVar2 = (byte *)*param_4;
          bVar1 = bVar1 & 0xf | 0xe0;
          goto LAB_14364e7ac;
        }
        if ((longlong)param_5 - *param_4 < 4) goto LAB_14364e794;
        if (lVar7 < 4) {
          uVar8 = 1;
          goto LAB_14364e7e7;
        }
        lVar7 = lVar7 + -2;
        iVar3 = ((bVar1 & 3) << 2 | (uint)(bVar5 >> 6)) + 1;
        *(byte *)*param_4 = (byte)(iVar3 >> 2) | 0xf0;
        *param_4 = *param_4 + 1;
        *(byte *)*param_4 = ((byte)iVar3 & 3 | 0xf8) << 4 | bVar5 >> 2 & 0xf;
        *param_4 = *param_4 + 1;
        bVar1 = pbVar6[2];
        *(byte *)*param_4 = ((bVar5 & 3 | 0xf8) << 2 | pbVar6[3] & 3) << 2 | bVar1 >> 6;
        *param_4 = *param_4 + 1;
        *(byte *)*param_4 = bVar1 & 0x3f | 0x80;
        pbVar6 = pbVar6 + 2;
      }
      *param_4 = *param_4 + 1;
      pbVar6 = pbVar6 + 2;
      lVar7 = lVar7 + -2;
    } while (pbVar6 < pbVar4);
  }
  uVar8 = pbVar6 < pbVar4;
LAB_14364e7e7:
  *param_2 = pbVar6;
  return uVar8;
}



// FUNCTION 14364e810 FUN_14364e810 body=1857 status=ok
// SIG undefined FUN_14364e810(void)

ulonglong FUN_14364e810(longlong param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  longlong lVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  if (((longlong)param_3 - (longlong)param_2 & 1U) != 0) {
    uVar4 = (longlong)param_3 - (longlong)param_2 & 0xfffffffffffffffe;
    if (uVar4 == 0) {
      return 0xffffffff;
    }
    param_3 = param_2 + uVar4;
  }
  bVar1 = param_2[1];
  if (bVar1 == 0) {
    uVar5 = *(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1);
  }
  else if (bVar1 < 0xd8) {
LAB_14364e892:
    uVar5 = 0x1d;
  }
  else if (bVar1 < 0xdc) {
    uVar5 = 7;
  }
  else if (bVar1 < 0xe0) {
    uVar5 = 8;
  }
  else {
    if ((bVar1 != 0xff) || (1 < (byte)(*param_2 + 2))) goto LAB_14364e892;
    uVar5 = 0;
  }
  pbVar8 = param_2;
  switch(uVar5) {
  case 2:
    pbVar8 = param_2 + 2;
    if ((longlong)param_3 - (longlong)pbVar8 < 2) {
      return 0xffffffff;
    }
    if (param_2[3] == 0) {
      uVar2 = (uint)*(byte *)((ulonglong)*pbVar8 + 0x90 + param_1);
    }
    else {
      uVar2 = FUN_14365c390(param_2[3],*pbVar8);
    }
    switch(uVar2) {
    case 5:
    case 6:
    case 7:
    case 0x16:
    case 0x18:
    case 0x1d:
      *param_4 = pbVar8 + -2;
      return 0x1d;
    case 0xf:
      uVar4 = FUN_143659790(param_1,pbVar8 + 2,param_3);
      return uVar4;
    case 0x10:
      uVar4 = FUN_1436586e0(param_1,pbVar8 + 2,param_3);
      return uVar4;
    }
    break;
  case 4:
    pbVar8 = param_2 + 2;
    if ((longlong)param_3 - (longlong)pbVar8 < 2) {
      return 0xffffffe6;
    }
    if ((param_2[3] == 0) && (*pbVar8 == 0x5d)) {
      if ((longlong)param_3 - (longlong)pbVar8 < 4) {
        return 0xffffffff;
      }
      if ((param_2[5] == 0) && (param_2[4] == 0x3e)) {
        *param_4 = param_2 + 6;
        return 0x22;
      }
    }
    *param_4 = pbVar8;
    return 0x1a;
  case 5:
    if ((longlong)param_3 - (longlong)param_2 < 2) {
      return 0xfffffffe;
    }
    break;
  case 6:
    if ((longlong)param_3 - (longlong)param_2 < 3) {
      return 0xfffffffe;
    }
    break;
  case 7:
    if ((longlong)param_3 - (longlong)param_2 < 4) {
      return 0xfffffffe;
    }
    break;
  case 9:
    if (param_2 + 2 == param_3) {
      *param_4 = param_3;
      return 0xfffffff1;
    }
  case 10:
  case 0x15:
    param_2 = param_2 + 2;
    for (lVar6 = (longlong)param_3 - (longlong)param_2; 1 < lVar6; lVar6 = lVar6 + -2) {
      if (param_2[1] == 0) {
        uVar2 = (uint)*(byte *)((ulonglong)*param_2 + 0x90 + param_1);
      }
      else {
        uVar2 = FUN_14365c390(param_2[1],*param_2);
      }
      if (uVar2 == 9) {
        if (param_2 + 2 == param_3) break;
      }
      else if ((uVar2 != 10) && (uVar2 != 0x15)) break;
      param_2 = param_2 + 2;
    }
    *param_4 = param_2;
    return 0xf;
  case 0xb:
    *param_4 = param_2 + 2;
    return 0x11;
  case 0xc:
    uVar4 = FUN_143658ce0(0xc,param_1,param_2 + 2,param_3,param_4);
    return uVar4;
  case 0xd:
    uVar4 = FUN_143658ce0(0xd,param_1,param_2 + 2,param_3,param_4);
    return uVar4;
  case 0x13:
    uVar4 = FUN_143659c50(param_1,param_2 + 2,param_3);
    return uVar4;
  case 0x14:
    *param_4 = param_2 + 2;
    return 0x19;
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
switchD_14364e8c2_caseD_17:
    uVar2 = 0x13;
    goto LAB_14364ed36;
  case 0x1d:
    uVar4 = (ulonglong)(*param_2 >> 5);
    uVar2 = 1 << (*param_2 & 0x1f);
    if ((*(uint *)(&DAT_145b5bfa0 + (uVar4 + (ulonglong)(byte)(&DAT_145b5c4a0)[bVar1] * 8) * 4) &
        uVar2) == 0) {
      if ((*(uint *)(&DAT_145b5bfa0 + (uVar4 + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar1] * 8) * 4) &
          uVar2) == 0) break;
      goto switchD_14364e8c2_caseD_17;
    }
  case 0x16:
  case 0x18:
    uVar2 = 0x12;
LAB_14364ed36:
    lVar6 = (longlong)param_3 - (longlong)(param_2 + 2);
    pbVar8 = param_2 + 2;
joined_r0x00014364ed4e:
    if (1 < lVar6) {
      bVar1 = pbVar8[1];
      if (bVar1 == 0) {
        uVar5 = *(undefined1 *)((ulonglong)*pbVar8 + 0x90 + param_1);
      }
      else if (bVar1 < 0xd8) {
LAB_14364ed9b:
        uVar5 = 0x1d;
      }
      else if (bVar1 < 0xdc) {
        uVar5 = 7;
      }
      else if (bVar1 < 0xe0) {
        uVar5 = 8;
      }
      else {
        if ((bVar1 != 0xff) || (1 < (byte)(*pbVar8 + 2))) goto LAB_14364ed9b;
        uVar5 = 0;
      }
      pbVar9 = pbVar8;
      switch(uVar5) {
      case 5:
switchD_14364edc3_caseD_5:
        if ((longlong)param_3 - (longlong)pbVar9 < 2) {
          return 0xfffffffe;
        }
        break;
      case 6:
switchD_14364edc3_caseD_6:
        if ((longlong)param_3 - (longlong)pbVar9 < 3) {
          return 0xfffffffe;
        }
        break;
      case 7:
switchD_14364edc3_caseD_7:
        if ((longlong)param_3 - (longlong)pbVar9 < 4) {
          return 0xfffffffe;
        }
        break;
      case 9:
      case 10:
      case 0xb:
      case 0x14:
      case 0x15:
      case 0x1e:
      case 0x20:
      case 0x23:
      case 0x24:
        *param_4 = pbVar8;
        goto LAB_14364edf4;
      case 0xf:
        if (uVar2 != 0x13) {
          *param_4 = pbVar8 + 2;
          return 0x1e;
        }
        break;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        goto switchD_14364edc3_caseD_16;
      case 0x17:
        pbVar9 = pbVar8 + 2;
        lVar6 = lVar6 + -2;
        if (uVar2 != 0x12) goto code_r0x00014364edde;
        if (lVar6 < 2) {
          return 0xffffffff;
        }
        bVar1 = pbVar8[3];
        uVar2 = 0x29;
        if (bVar1 == 0) {
          bVar7 = *pbVar9;
          uVar3 = (uint)*(byte *)((ulonglong)bVar7 + 0x90 + param_1);
        }
        else {
          bVar7 = *pbVar9;
          uVar3 = FUN_14365c390(bVar1,bVar7);
        }
        switch(uVar3) {
        case 5:
          goto switchD_14364edc3_caseD_5;
        case 6:
          goto switchD_14364edc3_caseD_6;
        case 7:
          goto switchD_14364edc3_caseD_7;
        case 0x16:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
          goto switchD_14364edc3_caseD_16;
        case 0x1d:
          goto LAB_14364ee71;
        }
        goto switchD_14364ee67_caseD_8;
      case 0x1d:
        bVar7 = *pbVar8;
LAB_14364ee71:
        if ((*(uint *)(&DAT_145b5bfa0 +
                      ((ulonglong)(bVar7 >> 5) + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar1] * 8) * 4)
             >> (bVar7 & 0x1f) & 1) == 0) break;
        goto switchD_14364edc3_caseD_16;
      case 0x21:
        if (uVar2 != 0x13) {
          *param_4 = pbVar8 + 2;
          return 0x1f;
        }
        break;
      case 0x22:
        if (uVar2 != 0x13) {
          *param_4 = pbVar8 + 2;
          return 0x20;
        }
      }
      *param_4 = pbVar9;
      return 0;
    }
    uVar2 = -uVar2;
LAB_14364edf4:
    return (ulonglong)uVar2;
  case 0x1e:
    uVar4 = FUN_1436594a0(param_1,param_2 + 2,param_3);
    return uVar4;
  case 0x1f:
    *param_4 = param_2 + 2;
    return 0x17;
  case 0x20:
    pbVar8 = param_2 + 2;
    if ((longlong)param_3 - (longlong)pbVar8 < 2) {
      return 0xffffffe8;
    }
    if (param_2[3] == 0) {
      uVar2 = (uint)*(byte *)((ulonglong)*pbVar8 + 0x90 + param_1);
    }
    else {
      uVar2 = FUN_14365c390(param_2[3],*pbVar8);
    }
    switch(uVar2) {
    case 9:
    case 10:
    case 0xb:
    case 0x15:
    case 0x20:
    case 0x23:
    case 0x24:
      *param_4 = pbVar8;
      return 0x18;
    case 0xf:
      *param_4 = pbVar8 + 2;
      return 0x23;
    case 0x21:
      *param_4 = pbVar8 + 2;
      return 0x24;
    case 0x22:
      *param_4 = pbVar8 + 2;
      return 0x25;
    }
    break;
  case 0x23:
    *param_4 = param_2 + 2;
    return 0x26;
  case 0x24:
    *param_4 = param_2 + 2;
    return 0x15;
  }
  *param_4 = pbVar8;
  return 0;
code_r0x00014364edde:
  pbVar8 = pbVar9;
  if (uVar2 == 0x29) {
switchD_14364ee67_caseD_8:
    uVar2 = 0x13;
    pbVar8 = pbVar9;
  }
  goto joined_r0x00014364ed4e;
switchD_14364edc3_caseD_16:
  lVar6 = lVar6 + -2;
  pbVar8 = pbVar9 + 2;
  goto joined_r0x00014364ed4e;
}



// FUNCTION 14364f0c0 FUN_14364f0c0 body=145 status=ok
// SIG undefined FUN_14364f0c0(void)

undefined8
FUN_14364f0c0(undefined8 param_1,ulonglong *param_2,longlong param_3,ulonglong *param_4,
             undefined2 *param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar1 = *param_2;
  uVar3 = 0;
  uVar4 = (param_3 - uVar1 & 0xfffffffffffffffe) + uVar1;
  if (((longlong)((longlong)param_5 - *param_4 & 0xfffffffffffffffe) < (longlong)(uVar4 - uVar1)) &&
     ((*(byte *)(uVar4 - 1) & 0xf8) == 0xd8)) {
    uVar4 = uVar4 - 2;
    uVar3 = 1;
  }
  while ((uVar1 < uVar4 && ((undefined2 *)*param_4 < param_5))) {
    *(undefined2 *)*param_4 = *(undefined2 *)*param_2;
    *param_4 = *param_4 + 2;
    *param_2 = *param_2 + 2;
    uVar1 = *param_2;
  }
  if (((undefined2 *)*param_4 != param_5) || (uVar2 = 2, uVar4 <= *param_2)) {
    uVar2 = uVar3;
  }
  return uVar2;
}



// FUNCTION 14364f160 FUN_14364f160 body=422 status=ok
// SIG undefined FUN_14364f160(void)

undefined1
FUN_14364f160(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong *param_4,
             byte *param_5)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined1 uVar8;
  
  pbVar6 = (byte *)*param_2;
  pbVar4 = pbVar6 + (param_3 - (longlong)pbVar6 & 0xfffffffffffffffe);
  if (pbVar6 < pbVar4) {
    lVar7 = (longlong)pbVar4 - (longlong)pbVar6;
    do {
      bVar1 = *pbVar6;
      bVar5 = pbVar6[1];
      if (bVar1 == 0) {
        if (0x7f < bVar5) goto LAB_14364f29b;
        pbVar2 = (byte *)*param_4;
        if (pbVar2 == param_5) goto LAB_14364f294;
LAB_14364f2c8:
        *pbVar2 = bVar5;
      }
      else {
        if (bVar1 < 8) {
LAB_14364f29b:
          pbVar2 = (byte *)*param_4;
          if (1 < (longlong)param_5 - (longlong)pbVar2) {
            bVar1 = bVar1 | 0xf0;
LAB_14364f2ac:
            *pbVar2 = bVar1 << 2 | bVar5 >> 6;
            *param_4 = *param_4 + 1;
            pbVar2 = (byte *)*param_4;
            bVar5 = bVar5 & 0x3f | 0x80;
            goto LAB_14364f2c8;
          }
LAB_14364f294:
          uVar8 = 2;
          goto LAB_14364f2e7;
        }
        if (3 < (byte)(bVar1 + 0x28)) {
          if ((longlong)param_5 - *param_4 < 3) goto LAB_14364f294;
          *(byte *)*param_4 = bVar1 >> 4 | 0xe0;
          *param_4 = *param_4 + 1;
          pbVar2 = (byte *)*param_4;
          bVar1 = bVar1 & 0xf | 0xe0;
          goto LAB_14364f2ac;
        }
        if ((longlong)param_5 - *param_4 < 4) goto LAB_14364f294;
        if (lVar7 < 4) {
          uVar8 = 1;
          goto LAB_14364f2e7;
        }
        lVar7 = lVar7 + -2;
        iVar3 = ((bVar1 & 3) << 2 | (uint)(bVar5 >> 6)) + 1;
        *(byte *)*param_4 = (byte)(iVar3 >> 2) | 0xf0;
        *param_4 = *param_4 + 1;
        *(byte *)*param_4 = ((byte)iVar3 & 3 | 0xf8) << 4 | bVar5 >> 2 & 0xf;
        *param_4 = *param_4 + 1;
        bVar1 = pbVar6[3];
        *(byte *)*param_4 = ((bVar5 & 3 | 0xf8) << 2 | pbVar6[2] & 3) << 2 | bVar1 >> 6;
        *param_4 = *param_4 + 1;
        *(byte *)*param_4 = bVar1 & 0x3f | 0x80;
        pbVar6 = pbVar6 + 2;
      }
      *param_4 = *param_4 + 1;
      pbVar6 = pbVar6 + 2;
      lVar7 = lVar7 + -2;
    } while (pbVar6 < pbVar4);
  }
  uVar8 = pbVar6 < pbVar4;
LAB_14364f2e7:
  *param_2 = pbVar6;
  return uVar8;
}



// FUNCTION 14364f310 FUN_14364f310 body=618 status=ok
// SIG undefined FUN_14364f310(void)

undefined8 FUN_14364f310(longlong param_1,byte *param_2,byte *param_3,longlong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  longlong lVar4;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
  case 0:
  case 1:
  case 8:
    *param_4 = (longlong)param_2;
    uVar2 = 0;
    break;
  case 2:
    uVar2 = FUN_14365af80(param_1,param_2 + 1);
    break;
  case 3:
    uVar2 = FUN_14365bdb0(param_1,param_2 + 1);
    break;
  case 4:
    pbVar3 = param_2 + 1;
    if ((longlong)param_3 - (longlong)pbVar3 < 1) {
      return 0xfffffffb;
    }
    if (*pbVar3 == 0x5d) {
      pbVar3 = param_2 + 2;
      if ((longlong)param_3 - (longlong)pbVar3 < 1) {
        return 0xfffffffb;
      }
      if (*pbVar3 == 0x3e) {
        *param_4 = (longlong)pbVar3;
        return 0;
      }
      pbVar3 = param_2 + 1;
    }
    goto LAB_14364f493;
  case 5:
    if ((longlong)param_3 - (longlong)param_2 < 2) {
      return 0xfffffffe;
    }
    iVar1 = (**(code **)(param_1 + 0x1c0))(param_1);
    if (iVar1 == 0) {
      pbVar3 = param_2 + 2;
      goto LAB_14364f493;
    }
LAB_14364f431:
    uVar2 = 0;
    goto LAB_14364f552;
  case 6:
    if ((longlong)param_3 - (longlong)param_2 < 3) {
      return 0xfffffffe;
    }
    iVar1 = (**(code **)(param_1 + 0x1c8))(param_1);
    if (iVar1 != 0) goto LAB_14364f431;
    pbVar3 = param_2 + 3;
    goto LAB_14364f493;
  case 7:
    if ((longlong)param_3 - (longlong)param_2 < 4) {
      return 0xfffffffe;
    }
    iVar1 = (**(code **)(param_1 + 0x1d0))(param_1);
    if (iVar1 != 0) goto LAB_14364f431;
    pbVar3 = param_2 + 4;
    goto LAB_14364f493;
  case 9:
    pbVar3 = param_2 + 1;
    if ((longlong)param_3 - (longlong)pbVar3 < 1) {
      uVar2 = 0xfffffffd;
    }
    else {
      if (*(char *)((ulonglong)*pbVar3 + 0x90 + param_1) == '\n') {
        pbVar3 = param_2 + 2;
      }
      *param_4 = (longlong)pbVar3;
      uVar2 = 7;
    }
    break;
  case 10:
    *param_4 = (longlong)(param_2 + 1);
    uVar2 = 7;
    break;
  default:
    pbVar3 = param_2 + 1;
LAB_14364f493:
    lVar4 = (longlong)param_3 - (longlong)pbVar3;
    param_2 = pbVar3;
joined_r0x00014364f49a:
    while (0 < lVar4) {
      switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 8:
      case 9:
      case 10:
        goto switchD_14364f4bf_caseD_0;
      case 4:
        if (lVar4 < 2) goto switchD_14364f4bf_caseD_0;
        if (param_2[1] == 0x5d) {
          if (lVar4 < 3) goto switchD_14364f4bf_caseD_0;
          if (param_2[2] == 0x3e) {
            *param_4 = (longlong)(param_2 + 2);
            return 0;
          }
        }
      default:
        param_2 = param_2 + 1;
        lVar4 = lVar4 + -1;
        break;
      case 5:
        if ((lVar4 < 2) || (iVar1 = (**(code **)(param_1 + 0x1c0))(param_1,param_2), iVar1 != 0))
        goto switchD_14364f4bf_caseD_0;
        param_2 = param_2 + 2;
        lVar4 = lVar4 + -2;
        break;
      case 6:
        if ((lVar4 < 3) || (iVar1 = (**(code **)(param_1 + 0x1c8))(param_1,param_2), iVar1 != 0))
        goto switchD_14364f4bf_caseD_0;
        param_2 = param_2 + 3;
        lVar4 = lVar4 + -3;
        break;
      case 7:
        if ((3 < lVar4) && (iVar1 = (**(code **)(param_1 + 0x1d0))(param_1,param_2), iVar1 == 0))
        goto code_r0x00014364f51b;
        goto switchD_14364f4bf_caseD_0;
      }
    }
switchD_14364f4bf_caseD_0:
    uVar2 = 6;
LAB_14364f552:
    *param_4 = (longlong)param_2;
  }
  return uVar2;
code_r0x00014364f51b:
  param_2 = param_2 + 4;
  lVar4 = lVar4 + -4;
  goto joined_r0x00014364f49a;
}



// FUNCTION 14364f5e0 FUN_14364f5e0 body=145 status=ok
// SIG undefined FUN_14364f5e0(void)

undefined8
FUN_14364f5e0(undefined8 param_1,ulonglong *param_2,longlong param_3,ulonglong *param_4,
             undefined2 *param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar1 = *param_2;
  uVar3 = 0;
  uVar4 = (param_3 - uVar1 & 0xfffffffffffffffe) + uVar1;
  if (((longlong)((longlong)param_5 - *param_4 & 0xfffffffffffffffe) < (longlong)(uVar4 - uVar1)) &&
     ((*(byte *)(uVar4 - 2) & 0xf8) == 0xd8)) {
    uVar4 = uVar4 - 2;
    uVar3 = 1;
  }
  while ((uVar1 < uVar4 && ((undefined2 *)*param_4 < param_5))) {
    *(undefined2 *)*param_4 = CONCAT11(*(undefined1 *)*param_2,((undefined1 *)*param_2)[1]);
    *param_4 = *param_4 + 2;
    *param_2 = *param_2 + 2;
    uVar1 = *param_2;
  }
  if (((undefined2 *)*param_4 != param_5) || (uVar2 = 2, uVar4 <= *param_2)) {
    uVar2 = uVar3;
  }
  return uVar2;
}



// FUNCTION 14364f680 FUN_14364f680 body=413 status=ok
// SIG undefined FUN_14364f680(void)

undefined8 FUN_14364f680(longlong param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  lVar5 = (longlong)param_3 - (longlong)param_2;
  pbVar6 = param_2;
  if (lVar5 < 2) {
    return 0xffffffff;
  }
  do {
    bVar1 = pbVar6[1];
    if (bVar1 == 0) {
      uVar4 = *(undefined1 *)((ulonglong)*pbVar6 + 0x90 + param_1);
    }
    else if (bVar1 < 0xd8) {
LAB_14364f703:
      uVar4 = 0x1d;
    }
    else if (bVar1 < 0xdc) {
      uVar4 = 7;
    }
    else if (bVar1 < 0xe0) {
      uVar4 = 8;
    }
    else {
      if ((bVar1 != 0xff) || (1 < (byte)(*pbVar6 + 2))) goto LAB_14364f703;
      uVar4 = 0;
    }
    switch(uVar4) {
    case 2:
      *param_4 = pbVar6;
      return 0;
    case 3:
      if (pbVar6 == param_2) {
        uVar3 = FUN_143659f10(param_1,pbVar6 + 2);
        return uVar3;
      }
      goto LAB_14364f745;
    default:
      pbVar6 = pbVar6 + 2;
      lVar5 = lVar5 + -2;
      break;
    case 6:
      pbVar6 = pbVar6 + 3;
      lVar5 = lVar5 + -3;
      break;
    case 7:
      pbVar6 = pbVar6 + 4;
      lVar5 = lVar5 + -4;
      break;
    case 9:
      if (pbVar6 == param_2) {
        pbVar7 = pbVar6 + 2;
        if ((longlong)param_3 - (longlong)pbVar7 < 2) {
          return 0xfffffffd;
        }
        if (pbVar6[3] == 0) {
          uVar2 = (uint)*(byte *)((ulonglong)*pbVar7 + 0x90 + param_1);
        }
        else {
          uVar2 = FUN_14365c390(pbVar6[3],*pbVar7);
        }
        if (uVar2 == 10) {
          pbVar7 = pbVar7 + 2;
        }
        *param_4 = pbVar7;
        return 7;
      }
      goto LAB_14364f745;
    case 10:
      if (pbVar6 == param_2) {
        *param_4 = pbVar6 + 2;
        return 7;
      }
      goto LAB_14364f745;
    case 0x15:
      if (pbVar6 == param_2) {
        *param_4 = pbVar6 + 2;
        return 0x27;
      }
      goto LAB_14364f745;
    }
  } while (1 < lVar5);
LAB_14364f745:
  *param_4 = pbVar6;
  return 6;
}



// FUNCTION 14364f870 FUN_14364f870 body=440 status=ok
// SIG undefined FUN_14364f870(void)

ulonglong FUN_14364f870(longlong param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  lVar5 = (longlong)param_3 - (longlong)param_2;
  if (lVar5 < 2) {
    return 0xffffffff;
  }
  pbVar6 = param_2;
  do {
    bVar1 = pbVar6[1];
    if (bVar1 == 0) {
      uVar4 = *(undefined1 *)((ulonglong)*pbVar6 + 0x90 + param_1);
    }
    else if (bVar1 < 0xd8) {
LAB_14364f904:
      uVar4 = 0x1d;
    }
    else if (bVar1 < 0xdc) {
      uVar4 = 7;
    }
    else if (bVar1 < 0xe0) {
      uVar4 = 8;
    }
    else {
      if ((bVar1 != 0xff) || (1 < (byte)(*pbVar6 + 2))) goto LAB_14364f904;
      uVar4 = 0;
    }
    pbVar7 = pbVar6;
    switch(uVar4) {
    case 3:
      if (pbVar6 == param_2) {
        uVar3 = FUN_143659f10(param_1,pbVar6 + 2);
        return uVar3;
      }
      goto LAB_14364f94e;
    default:
      pbVar6 = pbVar6 + 2;
      lVar5 = lVar5 + -2;
      break;
    case 6:
      pbVar6 = pbVar6 + 3;
      lVar5 = lVar5 + -3;
      break;
    case 7:
      pbVar6 = pbVar6 + 4;
      lVar5 = lVar5 + -4;
      break;
    case 9:
      if (pbVar6 == param_2) {
        pbVar7 = pbVar6 + 2;
        if ((longlong)param_3 - (longlong)pbVar7 < 2) {
          return 0xfffffffd;
        }
        if (pbVar6[3] == 0) {
          uVar2 = (uint)*(byte *)((ulonglong)*pbVar7 + 0x90 + param_1);
        }
        else {
          uVar2 = FUN_14365c390(pbVar6[3],*pbVar7);
        }
        if (uVar2 == 10) {
          pbVar7 = pbVar7 + 2;
        }
        uVar3 = 7;
        goto LAB_14364f953;
      }
      goto LAB_14364f94e;
    case 10:
      if (pbVar6 == param_2) {
        pbVar7 = pbVar6 + 2;
        uVar3 = 7;
        goto LAB_14364f953;
      }
      goto LAB_14364f94e;
    case 0x1e:
      if (pbVar6 == param_2) {
        uVar2 = FUN_1436594a0(param_1,pbVar6 + 2);
        uVar3 = (ulonglong)uVar2;
        if (uVar2 == 0x16) {
          uVar3 = 0;
        }
        return uVar3;
      }
      goto LAB_14364f94e;
    }
    pbVar7 = pbVar6;
  } while (1 < lVar5);
LAB_14364f94e:
  uVar3 = 6;
LAB_14364f953:
  *param_4 = pbVar7;
  return uVar3;
}



// FUNCTION 14364fb80 FUN_14364fb80 body=157 status=ok
// SIG undefined FUN_14364fb80(void)

undefined8 FUN_14364fb80(longlong param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  
  if (((longlong)param_3 - (longlong)param_2 & 1U) != 0) {
    param_3 = param_2 + ((longlong)param_3 - (longlong)param_2 & 0xfffffffffffffffe);
  }
  lVar4 = (longlong)param_3 - (longlong)param_2;
  do {
    if (lVar4 < 2) {
      return 0xffffffff;
    }
    bVar1 = param_2[1];
    if (bVar1 == 0) {
      bVar1 = *(byte *)((ulonglong)*param_2 + 0x90 + param_1);
      uVar3 = (uint)bVar1;
      if (bVar1 < 9) goto LAB_14364fc0e;
    }
    else if (0xd7 < bVar1) {
      if (bVar1 < 0xdc) {
        uVar3 = 7;
LAB_14364fc0e:
                    /* WARNING: Could not recover jumptable at 0x00014364fc1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_14364fd24)[(int)uVar3]))
                          (IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_14364fd24)[(int)uVar3]);
        return uVar2;
      }
      if (bVar1 < 0xe0) {
        uVar3 = 8;
        goto LAB_14364fc0e;
      }
      if ((bVar1 == 0xff) && ((byte)(*param_2 + 2) < 2)) {
        uVar3 = 0;
        goto LAB_14364fc0e;
      }
    }
    param_2 = param_2 + 2;
    lVar4 = lVar4 + -2;
  } while( true );
}



// FUNCTION 14364fde0 FUN_14364fde0 body=288 status=ok
// SIG undefined FUN_14364fde0(void)

undefined8 FUN_14364fde0(longlong param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  if (((longlong)param_3 - (longlong)param_2 & 1U) != 0) {
    uVar2 = (longlong)param_3 - (longlong)param_2 & 0xfffffffffffffffe;
    if (uVar2 == 0) {
      return 0xffffffff;
    }
    param_3 = param_2 + uVar2;
  }
  bVar1 = *param_2;
  if (bVar1 == 0) {
    bVar1 = *(byte *)((ulonglong)param_2[1] + 0x90 + param_1);
    uVar4 = (uint)bVar1;
    if (bVar1 < 0xb) {
LAB_14364fe9e:
                    /* WARNING: Could not recover jumptable at 0x00014364feab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_14365009c)[(int)uVar4]))
                        (IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_14365009c)[(int)uVar4]);
      return uVar3;
    }
  }
  else if (0xd7 < bVar1) {
    if (bVar1 < 0xdc) {
      uVar4 = 7;
    }
    else if (bVar1 < 0xe0) {
      uVar4 = 8;
    }
    else {
      if ((bVar1 != 0xff) || (1 < (byte)(param_2[1] + 2))) goto LAB_14364fe35;
      uVar4 = 0;
    }
    goto LAB_14364fe9e;
  }
LAB_14364fe35:
  param_2 = param_2 + 2;
  lVar5 = (longlong)param_3 - (longlong)param_2;
  do {
    if (lVar5 < 2) {
      *param_4 = param_2;
      return 6;
    }
    bVar1 = *param_2;
    if (bVar1 == 0) {
      bVar1 = *(byte *)((ulonglong)param_2[1] + 0x90 + param_1);
      uVar4 = (uint)bVar1;
      if (bVar1 < 0xb) goto LAB_143650007;
    }
    else if (0xd7 < bVar1) {
      if (bVar1 < 0xdc) {
        uVar4 = 7;
LAB_143650007:
                    /* WARNING: Could not recover jumptable at 0x000143650014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_1436500c8)[(int)uVar4]))
                          (IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_1436500c8)[(int)uVar4]);
        return uVar3;
      }
      if (bVar1 < 0xe0) {
        uVar4 = 8;
        goto LAB_143650007;
      }
      if ((bVar1 == 0xff) && ((byte)(param_2[1] + 2) < 2)) {
        uVar4 = 0;
        goto LAB_143650007;
      }
    }
    param_2 = param_2 + 2;
    lVar5 = lVar5 + -2;
  } while( true );
}



// FUNCTION 143650170 FUN_143650170 body=233 status=ok
// SIG undefined FUN_143650170(void)

undefined8 FUN_143650170(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  byte *pbVar4;
  longlong lVar5;
  
  pbVar4 = (byte *)(param_2 + 2);
  lVar5 = (param_3 + -2) - (longlong)pbVar4;
  do {
    if (lVar5 < 2) {
      return 1;
    }
    bVar1 = pbVar4[1];
    if (bVar1 == 0) {
      uVar3 = *(undefined1 *)((ulonglong)*pbVar4 + 0x90 + param_1);
    }
    else if (bVar1 < 0xd8) {
LAB_1436501dd:
      uVar3 = 0x1d;
    }
    else if (bVar1 < 0xdc) {
      uVar3 = 7;
    }
    else if (bVar1 < 0xe0) {
      uVar3 = 8;
    }
    else {
      if ((bVar1 != 0xff) || (1 < (byte)(*pbVar4 + 2))) goto LAB_1436501dd;
      uVar3 = 0;
    }
    switch(uVar3) {
    case 9:
    case 10:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1b:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
      break;
    default:
switchD_1436501ff_caseD_b:
      if ((bVar1 != 0) || ((*pbVar4 != 0x24 && (*pbVar4 != 0x40)))) {
LAB_14365020b:
        *param_4 = pbVar4;
        return 0;
      }
      break;
    case 0x15:
      if ((bVar1 == 0) && (*pbVar4 == 9)) goto LAB_14365020b;
      break;
    case 0x16:
    case 0x1a:
      if (bVar1 == 0) {
        bVar2 = *pbVar4;
      }
      else {
        bVar2 = 0xff;
      }
      if ((bVar2 & 0x80) != 0) goto switchD_1436501ff_caseD_b;
    }
    pbVar4 = pbVar4 + 2;
    lVar5 = lVar5 + -2;
  } while( true );
}



// FUNCTION 1436502f0 FUN_1436502f0 body=1334 status=ok
// SIG undefined FUN_1436502f0(void)

ulonglong FUN_1436502f0(longlong param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
  uint uVar6;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
  case 2:
    if ((longlong)param_3 - (longlong)(param_2 + 1) < 1) {
      return 0xffffffff;
    }
    switch(*(undefined1 *)((ulonglong)param_2[1] + 0x90 + param_1)) {
    case 5:
    case 6:
    case 7:
    case 0x16:
    case 0x18:
    case 0x1d:
      uVar3 = 0x1d;
      *param_4 = param_2;
      break;
    default:
switchD_14365054a_caseD_c:
      *param_4 = param_2 + 1;
      goto LAB_14365080d;
    case 0xf:
      uVar3 = FUN_14365b730(param_1,param_2 + 2);
      break;
    case 0x10:
      uVar3 = FUN_14365aa10(param_1,param_2 + 2);
    }
    break;
  default:
    *param_4 = param_2;
    goto LAB_14365080d;
  case 4:
    pbVar4 = param_2 + 1;
    if ((longlong)param_3 - (longlong)pbVar4 < 1) {
      return 0xffffffe6;
    }
    if (*pbVar4 == 0x5d) {
      if ((longlong)param_3 - (longlong)pbVar4 < 2) {
        return 0xffffffff;
      }
      if (param_2[2] == 0x3e) {
        *param_4 = param_2 + 3;
        return 0x22;
      }
    }
    *param_4 = pbVar4;
    uVar3 = 0x1a;
    break;
  case 5:
    if ((longlong)param_3 - (longlong)param_2 < 2) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_1 + 0x1a8))(param_1);
    if (iVar2 != 0) {
      param_2 = param_2 + 2;
      uVar6 = 0x12;
      goto LAB_143650698;
    }
    iVar2 = (**(code **)(param_1 + 400))(param_1,param_2);
    if (iVar2 != 0) {
      param_2 = param_2 + 2;
      goto LAB_143650692;
    }
switchD_1436506cf_caseD_8:
    *param_4 = param_2;
LAB_14365080d:
    uVar3 = 0;
    break;
  case 6:
    if ((longlong)param_3 - (longlong)param_2 < 3) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_1 + 0x1b0))(param_1);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(param_1 + 0x198))(param_1,param_2);
      if (iVar2 == 0) goto switchD_1436506cf_caseD_8;
      param_2 = param_2 + 3;
      goto LAB_143650692;
    }
    param_2 = param_2 + 3;
    uVar6 = 0x12;
    goto LAB_143650698;
  case 7:
    if ((longlong)param_3 - (longlong)param_2 < 4) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_1 + 0x1b8))(param_1);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(param_1 + 0x1a0))(param_1,param_2);
      if (iVar2 == 0) goto switchD_1436506cf_caseD_8;
      param_2 = param_2 + 4;
      goto LAB_143650692;
    }
    param_2 = param_2 + 4;
    uVar6 = 0x12;
    goto LAB_143650698;
  case 9:
    if (param_2 + 1 == param_3) {
      *param_4 = param_3;
      return 0xfffffff1;
    }
  case 10:
  case 0x15:
    pbVar4 = param_2 + 1;
    lVar5 = (longlong)param_3 - (longlong)pbVar4;
    if (0 < lVar5) {
      param_2 = param_2 + 2;
      do {
        cVar1 = *(char *)((ulonglong)*pbVar4 + 0x90 + param_1);
        if (cVar1 == '\t') {
          if (param_2 == param_3) break;
        }
        else if ((cVar1 != '\n') && (cVar1 != '\x15')) break;
        pbVar4 = pbVar4 + 1;
        param_2 = param_2 + 1;
        lVar5 = lVar5 + -1;
      } while (0 < lVar5);
    }
    *param_4 = pbVar4;
    uVar3 = 0xf;
    break;
  case 0xb:
    uVar3 = 0x11;
    *param_4 = param_2 + 1;
    break;
  case 0xc:
    uVar3 = FUN_14365adf0(0xc,param_1,param_2 + 1,param_3,param_4);
    break;
  case 0xd:
    uVar3 = FUN_14365adf0(0xd,param_1,param_2 + 1,param_3,param_4);
    break;
  case 0x13:
    uVar3 = FUN_14365bb70(param_1,param_2 + 1);
    break;
  case 0x14:
    uVar3 = 0x19;
    *param_4 = param_2 + 1;
    break;
  case 0x16:
  case 0x18:
    uVar6 = 0x12;
    param_2 = param_2 + 1;
    goto LAB_143650698;
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
    param_2 = param_2 + 1;
LAB_143650692:
    uVar6 = 0x13;
LAB_143650698:
    lVar5 = (longlong)param_3 - (longlong)param_2;
joined_r0x00014365069f:
    while (0 < lVar5) {
      switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
      case 5:
switchD_1436506cf_caseD_5:
        if (lVar5 < 2) {
          return 0xfffffffe;
        }
        iVar2 = (**(code **)(param_1 + 400))(param_1,param_2);
        if (iVar2 == 0) goto switchD_1436506cf_caseD_8;
        param_2 = param_2 + 2;
        lVar5 = lVar5 + -2;
        break;
      case 6:
switchD_1436506cf_caseD_6:
        if (lVar5 < 3) {
          return 0xfffffffe;
        }
        iVar2 = (**(code **)(param_1 + 0x198))(param_1,param_2);
        if (iVar2 == 0) goto switchD_1436506cf_caseD_8;
        param_2 = param_2 + 3;
        lVar5 = lVar5 + -3;
        break;
      case 7:
switchD_1436506cf_caseD_7:
        if (lVar5 < 4) {
          return 0xfffffffe;
        }
        iVar2 = (**(code **)(param_1 + 0x1a0))(param_1,param_2);
        if (iVar2 == 0) goto switchD_1436506cf_caseD_8;
        param_2 = param_2 + 4;
        lVar5 = lVar5 + -4;
        break;
      default:
        goto switchD_1436506cf_caseD_8;
      case 9:
      case 10:
      case 0xb:
      case 0x14:
      case 0x15:
      case 0x1e:
      case 0x20:
      case 0x23:
      case 0x24:
        *param_4 = param_2;
        return (ulonglong)uVar6;
      case 0xf:
        if (uVar6 != 0x13) {
          *param_4 = param_2 + 1;
          return 0x1e;
        }
        goto switchD_1436506cf_caseD_8;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
switchD_1436506cf_caseD_16:
        param_2 = param_2 + 1;
        lVar5 = lVar5 + -1;
        break;
      case 0x17:
        param_2 = param_2 + 1;
        lVar5 = lVar5 + -1;
        if (uVar6 != 0x12) goto code_r0x000143650705;
        if (lVar5 < 1) {
          return 0xffffffff;
        }
        uVar6 = 0x29;
        switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
        case 5:
          goto switchD_1436506cf_caseD_5;
        case 6:
          goto switchD_1436506cf_caseD_6;
        case 7:
          goto switchD_1436506cf_caseD_7;
        default:
          goto switchD_14365075c_caseD_8;
        case 0x16:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
          goto switchD_1436506cf_caseD_16;
        case 0x1d:
          goto switchD_1436506cf_caseD_8;
        }
      case 0x21:
        if (uVar6 != 0x13) {
          *param_4 = param_2 + 1;
          return 0x1f;
        }
        goto switchD_1436506cf_caseD_8;
      case 0x22:
        if (uVar6 != 0x13) {
          *param_4 = param_2 + 1;
          return 0x20;
        }
        goto switchD_1436506cf_caseD_8;
      }
    }
    uVar3 = (ulonglong)-uVar6;
    break;
  case 0x1e:
    uVar3 = FUN_14365b4e0(param_1,param_2 + 1);
    break;
  case 0x1f:
    uVar3 = 0x17;
    *param_4 = param_2 + 1;
    break;
  case 0x20:
    pbVar4 = param_2 + 1;
    if ((longlong)param_3 - (longlong)pbVar4 < 1) {
      return 0xffffffe8;
    }
    switch(*(undefined1 *)((ulonglong)*pbVar4 + 0x90 + param_1)) {
    case 9:
    case 10:
    case 0xb:
    case 0x15:
    case 0x20:
    case 0x23:
    case 0x24:
      *param_4 = pbVar4;
      uVar3 = 0x18;
      break;
    default:
      goto switchD_14365054a_caseD_c;
    case 0xf:
      uVar3 = 0x23;
      *param_4 = param_2 + 2;
      break;
    case 0x21:
      uVar3 = 0x24;
      *param_4 = param_2 + 2;
      break;
    case 0x22:
      uVar3 = 0x25;
      *param_4 = param_2 + 2;
    }
    break;
  case 0x23:
    uVar3 = 0x26;
    *param_4 = param_2 + 1;
    break;
  case 0x24:
    uVar3 = 0x15;
    *param_4 = param_2 + 1;
  }
  return uVar3;
code_r0x000143650705:
  if (uVar6 == 0x29) {
switchD_14365075c_caseD_8:
    uVar6 = 0x13;
  }
  goto joined_r0x00014365069f;
}



// FUNCTION 143650990 FUN_143650990 body=664 status=ok
// SIG undefined FUN_143650990(void)

int FUN_143650990(longlong param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  byte *pbVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  byte *pbVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  bool bVar12;
  
  iVar5 = 0;
  lVar6 = (longlong)param_3;
  uVar11 = 0;
  pbVar8 = (byte *)(param_2 + 2);
  pbVar4 = (byte *)(param_2 + 4);
  lVar7 = 0;
  uVar10 = 1;
LAB_1436509d0:
  bVar1 = pbVar8[1];
  if (bVar1 == 0) {
    uVar3 = *(undefined1 *)((ulonglong)*pbVar8 + 0x90 + param_1);
  }
  else if (bVar1 < 0xd8) {
LAB_143650a18:
    uVar3 = 0x1d;
  }
  else if (bVar1 < 0xdc) {
    uVar3 = 7;
  }
  else if (bVar1 < 0xe0) {
    uVar3 = 8;
  }
  else {
    if ((bVar1 != 0xff) || (1 < (byte)(*pbVar8 + 2))) goto LAB_143650a18;
    uVar3 = 0;
  }
  iVar9 = (int)uVar10;
  switch(uVar3) {
  case 3:
switchD_143650a37_caseD_3:
    if (lVar7 < lVar6) {
      pbVar8 = pbVar8 + 2;
      *(undefined1 *)(param_4 + 3) = 0;
      pbVar4 = pbVar4 + 2;
      goto LAB_1436509d0;
    }
    break;
  case 5:
  case 0x16:
  case 0x18:
  case 0x1d:
    if (iVar9 == 0) {
      if (lVar7 < lVar6) {
        *param_4 = pbVar8;
        *(undefined1 *)(param_4 + 3) = 1;
      }
      pbVar8 = pbVar8 + 2;
      uVar10 = 1;
      pbVar4 = pbVar4 + 2;
      goto LAB_1436509d0;
    }
    break;
  case 6:
    if (iVar9 == 0) {
      if (lVar7 < lVar6) {
        *param_4 = pbVar8;
        *(undefined1 *)(param_4 + 3) = 1;
      }
      uVar10 = 1;
    }
    pbVar8 = pbVar8 + 3;
    pbVar4 = pbVar4 + 3;
    goto LAB_1436509d0;
  case 7:
    if (iVar9 == 0) {
      if (lVar7 < lVar6) {
        *param_4 = pbVar8;
        *(undefined1 *)(param_4 + 3) = 1;
      }
      uVar10 = 1;
    }
    pbVar8 = pbVar8 + 4;
    pbVar4 = pbVar4 + 4;
    goto LAB_1436509d0;
  case 9:
  case 10:
    if (iVar9 == 1) {
      uVar10 = 0;
      pbVar8 = pbVar8 + 2;
      pbVar4 = pbVar4 + 2;
      goto LAB_1436509d0;
    }
    if (iVar9 == 2) goto switchD_143650a37_caseD_3;
    break;
  case 0xb:
  case 0x11:
    if (iVar9 != 2) {
      return iVar5;
    }
    break;
  case 0xc:
    if (iVar9 == 2) {
      bVar12 = uVar11 == 0xc;
      goto LAB_143650ae4;
    }
    if (lVar7 < lVar6) {
      param_4[1] = pbVar4;
    }
    uVar10 = 2;
    pbVar8 = pbVar8 + 2;
    pbVar4 = pbVar4 + 2;
    uVar11 = 0xc;
    goto LAB_1436509d0;
  case 0xd:
    if (iVar9 != 2) {
      if (lVar7 < lVar6) {
        param_4[1] = pbVar4;
      }
      uVar10 = 2;
      pbVar8 = pbVar8 + 2;
      pbVar4 = pbVar4 + 2;
      uVar11 = 0xd;
      goto LAB_1436509d0;
    }
    bVar12 = uVar11 == 0xd;
LAB_143650ae4:
    if (bVar12) {
      uVar10 = 0;
      if (lVar7 < lVar6) {
        param_4[2] = pbVar8;
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 1;
      param_4 = param_4 + 4;
      pbVar8 = pbVar8 + 2;
      pbVar4 = pbVar4 + 2;
      goto LAB_1436509d0;
    }
    break;
  case 0x15:
    if (iVar9 == 1) {
      uVar10 = 0;
      pbVar8 = pbVar8 + 2;
      pbVar4 = pbVar4 + 2;
    }
    else {
      if (((iVar9 != 2) || (lVar6 <= lVar7)) || (*(char *)(param_4 + 3) == '\0')) break;
      if (((pbVar8 != (byte *)param_4[1]) && (bVar1 == 0)) && (*pbVar8 == 0x20)) {
        if (pbVar8[3] == 0) {
          if (*pbVar4 == 0x20) goto LAB_143650baf;
          uVar2 = (uint)*(byte *)((ulonglong)*pbVar4 + 0x90 + param_1);
        }
        else {
          uVar2 = FUN_14365c390(pbVar8[3],*pbVar4);
        }
        if (uVar2 != uVar11) break;
      }
LAB_143650baf:
      pbVar8 = pbVar8 + 2;
      *(undefined1 *)(param_4 + 3) = 0;
      pbVar4 = pbVar4 + 2;
    }
    goto LAB_1436509d0;
  }
  pbVar8 = pbVar8 + 2;
  pbVar4 = pbVar4 + 2;
  goto LAB_1436509d0;
}



// FUNCTION 143650ca0 FUN_143650ca0 body=288 status=ok
// SIG undefined FUN_143650ca0(void)

undefined8 FUN_143650ca0(longlong param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  if (((longlong)param_3 - (longlong)param_2 & 1U) != 0) {
    uVar2 = (longlong)param_3 - (longlong)param_2 & 0xfffffffffffffffe;
    if (uVar2 == 0) {
      return 0xffffffff;
    }
    param_3 = param_2 + uVar2;
  }
  bVar1 = param_2[1];
  if (bVar1 == 0) {
    bVar1 = *(byte *)((ulonglong)*param_2 + 0x90 + param_1);
    uVar4 = (uint)bVar1;
    if (bVar1 < 0xb) {
LAB_143650d5d:
                    /* WARNING: Could not recover jumptable at 0x000143650d6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_143650efc)[(int)uVar4]))
                        (IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_143650efc)[(int)uVar4]);
      return uVar3;
    }
  }
  else if (0xd7 < bVar1) {
    if (bVar1 < 0xdc) {
      uVar4 = 7;
    }
    else if (bVar1 < 0xe0) {
      uVar4 = 8;
    }
    else {
      if ((bVar1 != 0xff) || (1 < (byte)(*param_2 + 2))) goto LAB_143650cf6;
      uVar4 = 0;
    }
    goto LAB_143650d5d;
  }
LAB_143650cf6:
  param_2 = param_2 + 2;
  lVar5 = (longlong)param_3 - (longlong)param_2;
  do {
    if (lVar5 < 2) {
      *param_4 = param_2;
      return 6;
    }
    bVar1 = param_2[1];
    if (bVar1 == 0) {
      bVar1 = *(byte *)((ulonglong)*param_2 + 0x90 + param_1);
      uVar4 = (uint)bVar1;
      if (bVar1 < 0xb) goto LAB_143650ead;
    }
    else if (0xd7 < bVar1) {
      if (bVar1 < 0xdc) {
        uVar4 = 7;
LAB_143650ead:
                    /* WARNING: Could not recover jumptable at 0x000143650ebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_143650f28)[(int)uVar4]))
                          (IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_143650f28)[(int)uVar4]);
        return uVar3;
      }
      if (bVar1 < 0xe0) {
        uVar4 = 8;
        goto LAB_143650ead;
      }
      if ((bVar1 == 0xff) && ((byte)(*param_2 + 2) < 2)) {
        uVar4 = 0;
        goto LAB_143650ead;
      }
    }
    param_2 = param_2 + 2;
    lVar5 = lVar5 + -2;
  } while( true );
}



// FUNCTION 143650f60 FUN_143650f60 body=289 status=ok
// SIG undefined FUN_143650f60(void)

uint FUN_143650f60(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  pcVar1 = (char *)(param_2 + 4);
  uVar3 = 0;
  if ((*(char *)(param_2 + 5) == '\0') && (*pcVar1 == 'x')) {
    pcVar1 = (char *)(param_2 + 6);
    do {
      if (pcVar1[1] == '\0') {
        if (*pcVar1 == ';') goto LAB_143651034;
        iVar4 = (int)*pcVar1;
      }
      else {
        iVar4 = -1;
      }
      switch(iVar4 - 0x30U) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        uVar3 = uVar3 << 4 | iVar4 - 0x30U;
        break;
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
        iVar2 = uVar3 * 0x10 + -0x37;
        goto LAB_143650fe0;
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
        iVar2 = uVar3 * 0x10 + -0x57;
LAB_143650fe0:
        uVar3 = iVar2 + iVar4;
      }
      if (0x10ffff < (int)uVar3) {
        return 0xffffffff;
      }
      pcVar1 = pcVar1 + 2;
    } while( true );
  }
  do {
    if (pcVar1[1] == '\0') {
      if (*pcVar1 == ';') {
LAB_143651034:
        iVar4 = (int)uVar3 >> 8;
        if (iVar4 == 0) {
          if ((&DAT_145b5ba90)[(int)uVar3] == '\0') {
            return 0xffffffff;
          }
        }
        else if (0xd7 < iVar4) {
          if (iVar4 < 0xe0) {
            return 0xffffffff;
          }
          if ((iVar4 == 0xff) && (uVar3 - 0xfffe < 2)) {
            return 0xffffffff;
          }
        }
        return uVar3;
      }
      iVar4 = (int)*pcVar1;
    }
    else {
      iVar4 = -1;
    }
    uVar3 = iVar4 + (uVar3 * 5 + -0x18) * 2;
    if (0x10ffff < (int)uVar3) {
      return 0xffffffff;
    }
    pcVar1 = pcVar1 + 2;
  } while( true );
}



// FUNCTION 143651370 FUN_143651370 body=330 status=ok
// SIG undefined FUN_143651370(void)

undefined8 FUN_143651370(longlong param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  longlong lVar4;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  lVar4 = (longlong)param_3 - (longlong)param_2;
  pbVar2 = param_2;
  if (lVar4 < 1) {
    return 0xffffffff;
  }
  do {
    switch(*(undefined1 *)((ulonglong)*pbVar2 + 0x90 + param_1)) {
    case 2:
      *param_4 = pbVar2;
      return 0;
    case 3:
      if (pbVar2 == param_2) {
        uVar1 = FUN_14365bdb0(param_1,pbVar2 + 1,param_3);
        return uVar1;
      }
      goto LAB_1436513fc;
    default:
      pbVar2 = pbVar2 + 1;
      lVar4 = lVar4 + -1;
      break;
    case 5:
      pbVar2 = pbVar2 + 2;
      lVar4 = lVar4 + -2;
      break;
    case 6:
      pbVar2 = pbVar2 + 3;
      lVar4 = lVar4 + -3;
      break;
    case 7:
      pbVar2 = pbVar2 + 4;
      lVar4 = lVar4 + -4;
      break;
    case 9:
      if (pbVar2 == param_2) {
        pbVar3 = pbVar2 + 1;
        if ((longlong)param_3 - (longlong)pbVar3 < 1) {
          return 0xfffffffd;
        }
        if (*(char *)((ulonglong)*pbVar3 + 0x90 + param_1) == '\n') {
          pbVar3 = pbVar2 + 2;
        }
        *param_4 = pbVar3;
        return 7;
      }
      goto LAB_1436513fc;
    case 10:
      if (pbVar2 == param_2) {
        *param_4 = pbVar2 + 1;
        return 7;
      }
      goto LAB_1436513fc;
    case 0x15:
      if (pbVar2 == param_2) {
        *param_4 = pbVar2 + 1;
        return 0x27;
      }
      goto LAB_1436513fc;
    }
  } while (0 < lVar4);
LAB_1436513fc:
  *param_4 = pbVar2;
  return 6;
}



// FUNCTION 143651550 FUN_143651550 body=359 status=ok
// SIG undefined FUN_143651550(void)

ulonglong FUN_143651550(longlong param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  lVar5 = (longlong)param_3 - (longlong)param_2;
  pbVar3 = param_2;
  if (lVar5 < 1) {
    return 0xffffffff;
  }
  do {
    switch(*(undefined1 *)((ulonglong)*pbVar3 + 0x90 + param_1)) {
    case 3:
      if (pbVar3 == param_2) {
        uVar2 = FUN_14365bdb0(param_1,pbVar3 + 1,param_3);
        return uVar2;
      }
      goto LAB_1436515e5;
    default:
      pbVar3 = pbVar3 + 1;
      lVar5 = lVar5 + -1;
      break;
    case 5:
      pbVar3 = pbVar3 + 2;
      lVar5 = lVar5 + -2;
      break;
    case 6:
      pbVar3 = pbVar3 + 3;
      lVar5 = lVar5 + -3;
      break;
    case 7:
      pbVar3 = pbVar3 + 4;
      lVar5 = lVar5 + -4;
      break;
    case 9:
      if (pbVar3 == param_2) {
        pbVar4 = pbVar3 + 1;
        if ((longlong)param_3 - (longlong)pbVar4 < 1) {
          return 0xfffffffd;
        }
        if (*(char *)((ulonglong)*pbVar4 + 0x90 + param_1) == '\n') {
          pbVar4 = pbVar3 + 2;
        }
        *param_4 = pbVar4;
        return 7;
      }
      goto LAB_1436515e5;
    case 10:
      if (pbVar3 == param_2) {
        *param_4 = pbVar3 + 1;
        return 7;
      }
      goto LAB_1436515e5;
    case 0x1e:
      if (pbVar3 == param_2) {
        uVar1 = FUN_14365b4e0(param_1,pbVar3 + 1,param_3);
        uVar2 = (ulonglong)uVar1;
        if (uVar1 == 0x16) {
          uVar2 = 0;
        }
        return uVar2;
      }
      goto LAB_1436515e5;
    }
  } while (0 < lVar5);
LAB_1436515e5:
  *param_4 = pbVar3;
  return 6;
}



// FUNCTION 1436517c0 FUN_1436517c0 body=1872 status=ok
// SIG undefined FUN_1436517c0(void)

ulonglong FUN_1436517c0(longlong param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  longlong lVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  if (((longlong)param_3 - (longlong)param_2 & 1U) != 0) {
    uVar4 = (longlong)param_3 - (longlong)param_2 & 0xfffffffffffffffe;
    if (uVar4 == 0) {
      return 0xffffffff;
    }
    param_3 = param_2 + uVar4;
  }
  bVar1 = *param_2;
  if (bVar1 == 0) {
    uVar5 = *(undefined1 *)((ulonglong)param_2[1] + 0x90 + param_1);
  }
  else if (bVar1 < 0xd8) {
LAB_143651843:
    uVar5 = 0x1d;
  }
  else if (bVar1 < 0xdc) {
    uVar5 = 7;
  }
  else if (bVar1 < 0xe0) {
    uVar5 = 8;
  }
  else {
    if ((bVar1 != 0xff) || (1 < (byte)(param_2[1] + 2))) goto LAB_143651843;
    uVar5 = 0;
  }
  pbVar8 = param_2;
  switch(uVar5) {
  case 2:
    pbVar8 = param_2 + 2;
    if ((longlong)param_3 - (longlong)pbVar8 < 2) {
      return 0xffffffff;
    }
    if (*pbVar8 == 0) {
      uVar2 = (uint)*(byte *)((ulonglong)param_2[3] + 0x90 + param_1);
    }
    else {
      uVar2 = FUN_14365c390(*pbVar8,param_2[3]);
    }
    switch(uVar2) {
    case 5:
    case 6:
    case 7:
    case 0x16:
    case 0x18:
    case 0x1d:
      *param_4 = pbVar8 + -2;
      return 0x1d;
    case 0xf:
      uVar4 = FUN_143656720(param_1,pbVar8 + 2,param_3);
      return uVar4;
    case 0x10:
      uVar4 = FUN_143655660(param_1,pbVar8 + 2,param_3);
      return uVar4;
    }
    break;
  case 4:
    pbVar8 = param_2 + 2;
    if ((longlong)param_3 - (longlong)pbVar8 < 2) {
      return 0xffffffe6;
    }
    if ((*pbVar8 == 0) && (param_2[3] == 0x5d)) {
      if ((longlong)param_3 - (longlong)pbVar8 < 4) {
        return 0xffffffff;
      }
      if ((param_2[4] == 0) && (param_2[5] == 0x3e)) {
        *param_4 = param_2 + 6;
        return 0x22;
      }
    }
    *param_4 = pbVar8;
    return 0x1a;
  case 5:
    if ((longlong)param_3 - (longlong)param_2 < 2) {
      return 0xfffffffe;
    }
    break;
  case 6:
    if ((longlong)param_3 - (longlong)param_2 < 3) {
      return 0xfffffffe;
    }
    break;
  case 7:
    if ((longlong)param_3 - (longlong)param_2 < 4) {
      return 0xfffffffe;
    }
    break;
  case 9:
    if (param_2 + 2 == param_3) {
      *param_4 = param_3;
      return 0xfffffff1;
    }
  case 10:
  case 0x15:
    param_2 = param_2 + 2;
    for (lVar6 = (longlong)param_3 - (longlong)param_2; 1 < lVar6; lVar6 = lVar6 + -2) {
      if (*param_2 == 0) {
        uVar2 = (uint)*(byte *)((ulonglong)param_2[1] + 0x90 + param_1);
      }
      else {
        uVar2 = FUN_14365c390(*param_2,param_2[1]);
      }
      if (uVar2 == 9) {
        if (param_2 + 2 == param_3) break;
      }
      else if ((uVar2 != 10) && (uVar2 != 0x15)) break;
      param_2 = param_2 + 2;
    }
    *param_4 = param_2;
    return 0xf;
  case 0xb:
    *param_4 = param_2 + 2;
    return 0x11;
  case 0xc:
    uVar4 = FUN_143655c70(0xc,param_1,param_2 + 2,param_3,param_4);
    return uVar4;
  case 0xd:
    uVar4 = FUN_143655c70(0xd,param_1,param_2 + 2,param_3,param_4);
    return uVar4;
  case 0x13:
    uVar4 = FUN_143656be0(param_1,param_2 + 2,param_3);
    return uVar4;
  case 0x14:
    *param_4 = param_2 + 2;
    return 0x19;
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
switchD_143651873_caseD_17:
    uVar2 = 0x13;
    goto LAB_143651cf2;
  case 0x1d:
    uVar4 = (ulonglong)(param_2[1] >> 5);
    uVar2 = 1 << (param_2[1] & 0x1f);
    if ((*(uint *)(&DAT_145b5bfa0 + (uVar4 + (ulonglong)(byte)(&DAT_145b5c4a0)[bVar1] * 8) * 4) &
        uVar2) == 0) {
      if ((*(uint *)(&DAT_145b5bfa0 + (uVar4 + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar1] * 8) * 4) &
          uVar2) == 0) break;
      goto switchD_143651873_caseD_17;
    }
  case 0x16:
  case 0x18:
    uVar2 = 0x12;
LAB_143651cf2:
    lVar6 = (longlong)param_3 - (longlong)(param_2 + 2);
    pbVar8 = param_2 + 2;
joined_r0x000143651d0a:
    if (1 < lVar6) {
      bVar1 = *pbVar8;
      if (bVar1 == 0) {
        uVar5 = *(undefined1 *)((ulonglong)pbVar8[1] + 0x90 + param_1);
      }
      else if (bVar1 < 0xd8) {
LAB_143651d58:
        uVar5 = 0x1d;
      }
      else if (bVar1 < 0xdc) {
        uVar5 = 7;
      }
      else if (bVar1 < 0xe0) {
        uVar5 = 8;
      }
      else {
        if ((bVar1 != 0xff) || (1 < (byte)(pbVar8[1] + 2))) goto LAB_143651d58;
        uVar5 = 0;
      }
      pbVar9 = pbVar8;
      switch(uVar5) {
      case 5:
switchD_143651d80_caseD_5:
        if ((longlong)param_3 - (longlong)pbVar9 < 2) {
          return 0xfffffffe;
        }
        break;
      case 6:
switchD_143651d80_caseD_6:
        if ((longlong)param_3 - (longlong)pbVar9 < 3) {
          return 0xfffffffe;
        }
        break;
      case 7:
switchD_143651d80_caseD_7:
        if ((longlong)param_3 - (longlong)pbVar9 < 4) {
          return 0xfffffffe;
        }
        break;
      case 9:
      case 10:
      case 0xb:
      case 0x14:
      case 0x15:
      case 0x1e:
      case 0x20:
      case 0x23:
      case 0x24:
        *param_4 = pbVar8;
        goto LAB_143651db2;
      case 0xf:
        if (uVar2 != 0x13) {
          *param_4 = pbVar8 + 2;
          return 0x1e;
        }
        break;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        goto switchD_143651d80_caseD_16;
      case 0x17:
        pbVar9 = pbVar8 + 2;
        lVar6 = lVar6 + -2;
        if (uVar2 != 0x12) goto code_r0x000143651d9c;
        if (lVar6 < 2) {
          return 0xffffffff;
        }
        bVar1 = *pbVar9;
        uVar2 = 0x29;
        if (bVar1 == 0) {
          bVar7 = pbVar8[3];
          uVar3 = (uint)*(byte *)((ulonglong)bVar7 + 0x90 + param_1);
        }
        else {
          bVar7 = pbVar8[3];
          uVar3 = FUN_14365c390(bVar1,bVar7);
        }
        switch(uVar3) {
        case 5:
          goto switchD_143651d80_caseD_5;
        case 6:
          goto switchD_143651d80_caseD_6;
        case 7:
          goto switchD_143651d80_caseD_7;
        case 0x16:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
          goto switchD_143651d80_caseD_16;
        case 0x1d:
          goto LAB_143651e30;
        }
        goto switchD_143651e26_caseD_8;
      case 0x1d:
        bVar7 = pbVar8[1];
LAB_143651e30:
        if ((*(uint *)(&DAT_145b5bfa0 +
                      ((ulonglong)(bVar7 >> 5) + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar1] * 8) * 4)
             >> (bVar7 & 0x1f) & 1) == 0) break;
        goto switchD_143651d80_caseD_16;
      case 0x21:
        if (uVar2 != 0x13) {
          *param_4 = pbVar8 + 2;
          return 0x1f;
        }
        break;
      case 0x22:
        if (uVar2 != 0x13) {
          *param_4 = pbVar8 + 2;
          return 0x20;
        }
      }
      *param_4 = pbVar9;
      return 0;
    }
    uVar2 = -uVar2;
LAB_143651db2:
    return (ulonglong)uVar2;
  case 0x1e:
    uVar4 = FUN_143656430(param_1,param_2 + 2,param_3);
    return uVar4;
  case 0x1f:
    *param_4 = param_2 + 2;
    return 0x17;
  case 0x20:
    pbVar8 = param_2 + 2;
    if ((longlong)param_3 - (longlong)pbVar8 < 2) {
      return 0xffffffe8;
    }
    if (*pbVar8 == 0) {
      uVar2 = (uint)*(byte *)((ulonglong)param_2[3] + 0x90 + param_1);
    }
    else {
      uVar2 = FUN_14365c390(*pbVar8,param_2[3]);
    }
    switch(uVar2) {
    case 9:
    case 10:
    case 0xb:
    case 0x15:
    case 0x20:
    case 0x23:
    case 0x24:
      *param_4 = pbVar8;
      return 0x18;
    case 0xf:
      *param_4 = pbVar8 + 2;
      return 0x23;
    case 0x21:
      *param_4 = pbVar8 + 2;
      return 0x24;
    case 0x22:
      *param_4 = pbVar8 + 2;
      return 0x25;
    }
    break;
  case 0x23:
    *param_4 = param_2 + 2;
    return 0x26;
  case 0x24:
    *param_4 = param_2 + 2;
    return 0x15;
  }
  *param_4 = pbVar8;
  return 0;
code_r0x000143651d9c:
  pbVar8 = pbVar9;
  if (uVar2 == 0x29) {
switchD_143651e26_caseD_8:
    uVar2 = 0x13;
    pbVar8 = pbVar9;
  }
  goto joined_r0x000143651d0a;
switchD_143651d80_caseD_16:
  lVar6 = lVar6 + -2;
  pbVar8 = pbVar9 + 2;
  goto joined_r0x000143651d0a;
}



// FUNCTION 1436520b0 FUN_1436520b0 body=376 status=ok
// SIG undefined FUN_1436520b0(void)

undefined8 FUN_1436520b0(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  lVar1 = param_3 - (longlong)param_2;
  do {
    pbVar3 = param_2;
    lVar5 = lVar1;
    if (lVar5 < 1) {
      return 0xffffffff;
    }
    switch(*(undefined1 *)((ulonglong)*pbVar3 + 0x90 + param_1)) {
    case 0:
    case 1:
    case 8:
      *param_4 = pbVar3;
      return 0;
    case 2:
      if (lVar5 + -1 < 1) {
        return 0xffffffff;
      }
      lVar1 = lVar5 + -1;
      param_2 = pbVar3 + 1;
      if (pbVar3[1] != 0x21) break;
      pbVar3 = pbVar3 + 2;
      lVar5 = lVar5 + -2;
      if (lVar5 < 1) {
        return 0xffffffff;
      }
      lVar1 = lVar5;
      param_2 = pbVar3;
      if (*pbVar3 != 0x5b) break;
      iVar4 = iVar4 + 1;
    default:
      lVar1 = lVar5 + -1;
      param_2 = pbVar3 + 1;
      break;
    case 4:
      if (lVar5 + -1 < 1) {
        return 0xffffffff;
      }
      lVar1 = lVar5 + -1;
      param_2 = pbVar3 + 1;
      if (pbVar3[1] == 0x5d) {
        if (lVar5 + -2 < 1) {
          return 0xffffffff;
        }
        lVar1 = lVar5 + -2;
        param_2 = pbVar3 + 2;
        if (pbVar3[2] == 0x3e) {
          if (iVar4 == 0) {
            *param_4 = pbVar3 + 3;
            return 0x2a;
          }
          iVar4 = iVar4 + -1;
          lVar1 = lVar5 + -3;
          param_2 = pbVar3 + 3;
        }
      }
      break;
    case 5:
      if (lVar5 < 2) {
        return 0xfffffffe;
      }
      iVar2 = (**(code **)(param_1 + 0x1c0))(param_1,pbVar3);
      if (iVar2 != 0) goto LAB_143652209;
      lVar1 = lVar5 + -2;
      param_2 = pbVar3 + 2;
      break;
    case 6:
      if (lVar5 < 3) {
        return 0xfffffffe;
      }
      iVar2 = (**(code **)(param_1 + 0x1c8))(param_1,pbVar3);
      if (iVar2 != 0) {
LAB_143652209:
        *param_4 = pbVar3;
        return 0;
      }
      lVar1 = lVar5 + -3;
      param_2 = pbVar3 + 3;
      break;
    case 7:
      if (lVar5 < 4) {
        return 0xfffffffe;
      }
      iVar2 = (**(code **)(param_1 + 0x1d0))(param_1,pbVar3);
      if (iVar2 != 0) goto LAB_143652209;
      lVar1 = lVar5 + -4;
      param_2 = pbVar3 + 4;
    }
  } while( true );
}



// FUNCTION 143652370 FUN_143652370 body=150 status=ok
// SIG undefined FUN_143652370(void)

undefined8 FUN_143652370(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  
  pbVar2 = (byte *)(param_2 + 1);
  lVar3 = (param_3 + -1) - (longlong)pbVar2;
  do {
    if (lVar3 < 1) {
      return 1;
    }
    bVar1 = *pbVar2;
    switch(*(undefined1 *)((ulonglong)bVar1 + 0x90 + param_1)) {
    case 9:
    case 10:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1b:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
      break;
    default:
switchD_1436523c9_caseD_b:
      if ((bVar1 != 0x24) && (bVar1 != 0x40)) {
LAB_1436523d1:
        *param_4 = pbVar2;
        return 0;
      }
      break;
    case 0x15:
      if (bVar1 == 9) goto LAB_1436523d1;
      break;
    case 0x16:
    case 0x1a:
      if ((char)bVar1 < '\0') goto switchD_1436523c9_caseD_b;
    }
    pbVar2 = pbVar2 + 1;
    lVar3 = lVar3 + -1;
  } while( true );
}



// FUNCTION 143652440 FUN_143652440 body=543 status=ok
// SIG undefined FUN_143652440(void)

undefined8 FUN_143652440(longlong param_1,byte *param_2,byte *param_3,longlong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  longlong lVar4;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
  case 0:
  case 1:
  case 8:
    *param_4 = (longlong)param_2;
    return 0;
  default:
    pbVar3 = param_2 + 1;
    break;
  case 4:
    pbVar3 = param_2 + 1;
    if ((longlong)param_3 - (longlong)pbVar3 < 1) {
      return 0xffffffff;
    }
    if (*pbVar3 == 0x5d) {
      if ((longlong)param_3 - (longlong)(param_2 + 2) < 1) {
        return 0xffffffff;
      }
      if (param_2[2] == 0x3e) {
        *param_4 = (longlong)(param_2 + 3);
        return 0x28;
      }
      pbVar3 = param_2 + 1;
    }
    break;
  case 5:
    if ((longlong)param_3 - (longlong)param_2 < 2) {
      return 0xfffffffe;
    }
    iVar1 = (**(code **)(param_1 + 0x1c0))(param_1);
    if (iVar1 != 0) {
LAB_14365253c:
      uVar2 = 0;
      goto LAB_143652642;
    }
    pbVar3 = param_2 + 2;
    break;
  case 6:
    if ((longlong)param_3 - (longlong)param_2 < 3) {
      return 0xfffffffe;
    }
    iVar1 = (**(code **)(param_1 + 0x1c8))(param_1);
    if (iVar1 != 0) goto LAB_14365253c;
    pbVar3 = param_2 + 3;
    break;
  case 7:
    if ((longlong)param_3 - (longlong)param_2 < 4) {
      return 0xfffffffe;
    }
    iVar1 = (**(code **)(param_1 + 0x1d0))(param_1);
    if (iVar1 != 0) goto LAB_14365253c;
    pbVar3 = param_2 + 4;
    break;
  case 9:
    pbVar3 = param_2 + 1;
    if ((longlong)param_3 - (longlong)pbVar3 < 1) {
      return 0xffffffff;
    }
    if (*(char *)((ulonglong)*pbVar3 + 0x90 + param_1) == '\n') {
      pbVar3 = param_2 + 2;
    }
    *param_4 = (longlong)pbVar3;
    return 7;
  case 10:
    *param_4 = (longlong)(param_2 + 1);
    return 7;
  }
  lVar4 = (longlong)param_3 - (longlong)pbVar3;
  param_2 = pbVar3;
  while (0 < lVar4) {
    switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
    case 0:
    case 1:
    case 4:
    case 8:
    case 9:
    case 10:
      goto switchD_1436525cb_caseD_0;
    default:
      param_2 = param_2 + 1;
      lVar4 = lVar4 + -1;
      break;
    case 5:
      if ((lVar4 < 2) || (iVar1 = (**(code **)(param_1 + 0x1c0))(param_1,param_2), iVar1 != 0))
      goto switchD_1436525cb_caseD_0;
      param_2 = param_2 + 2;
      lVar4 = lVar4 + -2;
      break;
    case 6:
      if ((lVar4 < 3) || (iVar1 = (**(code **)(param_1 + 0x1c8))(param_1,param_2), iVar1 != 0))
      goto switchD_1436525cb_caseD_0;
      param_2 = param_2 + 3;
      lVar4 = lVar4 + -3;
      break;
    case 7:
      if ((lVar4 < 4) || (iVar1 = (**(code **)(param_1 + 0x1d0))(param_1,param_2), iVar1 != 0))
      goto switchD_1436525cb_caseD_0;
      param_2 = param_2 + 4;
      lVar4 = lVar4 + -4;
    }
  }
switchD_1436525cb_caseD_0:
  uVar2 = 6;
LAB_143652642:
  *param_4 = (longlong)param_2;
  return uVar2;
}



// FUNCTION 1436526c0 FUN_1436526c0 body=559 status=ok
// SIG undefined FUN_1436526c0(void)

int FUN_1436526c0(longlong param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  iVar3 = 0;
  lVar4 = (longlong)param_3;
  pbVar1 = (byte *)(param_2 + 1);
  cVar2 = '\0';
  lVar7 = 0;
  iVar6 = 1;
  pbVar5 = (byte *)(param_2 + 2);
LAB_143652700:
  switch(*(undefined1 *)((ulonglong)*pbVar1 + 0x90 + param_1)) {
  case 3:
switchD_143652725_caseD_3:
    if (lVar7 < lVar4) {
      pbVar1 = pbVar1 + 1;
      *(undefined1 *)(param_4 + 3) = 0;
      pbVar5 = pbVar5 + 1;
      goto LAB_143652700;
    }
    break;
  case 5:
    if (iVar6 == 0) {
      if (lVar7 < lVar4) {
        *param_4 = pbVar1;
        *(undefined1 *)(param_4 + 3) = 1;
      }
      iVar6 = 1;
    }
    pbVar1 = pbVar1 + 2;
    pbVar5 = pbVar5 + 2;
    goto LAB_143652700;
  case 6:
    if (iVar6 == 0) {
      if (lVar7 < lVar4) {
        *param_4 = pbVar1;
        *(undefined1 *)(param_4 + 3) = 1;
      }
      iVar6 = 1;
    }
    pbVar1 = pbVar1 + 3;
    pbVar5 = pbVar5 + 3;
    goto LAB_143652700;
  case 7:
    if (iVar6 == 0) {
      if (lVar7 < lVar4) {
        *param_4 = pbVar1;
        *(undefined1 *)(param_4 + 3) = 1;
      }
      iVar6 = 1;
    }
    pbVar1 = pbVar1 + 4;
    pbVar5 = pbVar5 + 4;
    goto LAB_143652700;
  case 9:
  case 10:
    if (iVar6 == 1) {
      iVar6 = 0;
      pbVar1 = pbVar1 + 1;
      pbVar5 = pbVar5 + 1;
      goto LAB_143652700;
    }
    if (iVar6 == 2) goto switchD_143652725_caseD_3;
    break;
  case 0xb:
  case 0x11:
    if (iVar6 != 2) {
      return iVar3;
    }
    break;
  case 0xc:
    if (iVar6 == 2) {
      bVar8 = cVar2 == '\f';
      goto LAB_1436527ed;
    }
    if (lVar7 < lVar4) {
      param_4[1] = pbVar5;
    }
    cVar2 = '\f';
    pbVar1 = pbVar1 + 1;
    pbVar5 = pbVar5 + 1;
    iVar6 = 2;
    goto LAB_143652700;
  case 0xd:
    if (iVar6 != 2) {
      if (lVar7 < lVar4) {
        param_4[1] = pbVar5;
      }
      cVar2 = '\r';
      pbVar1 = pbVar1 + 1;
      pbVar5 = pbVar5 + 1;
      iVar6 = 2;
      goto LAB_143652700;
    }
    bVar8 = cVar2 == '\r';
LAB_1436527ed:
    if (bVar8) {
      iVar6 = 0;
      if (lVar7 < lVar4) {
        param_4[2] = pbVar1;
      }
      iVar3 = iVar3 + 1;
      lVar7 = lVar7 + 1;
      param_4 = param_4 + 4;
      pbVar1 = pbVar1 + 1;
      pbVar5 = pbVar5 + 1;
      goto LAB_143652700;
    }
    break;
  case 0x15:
    if (iVar6 == 1) {
      iVar6 = 0;
      pbVar1 = pbVar1 + 1;
      pbVar5 = pbVar5 + 1;
      goto LAB_143652700;
    }
    if ((((iVar6 == 2) && (lVar7 < lVar4)) && (*(char *)(param_4 + 3) != '\0')) &&
       (((pbVar1 == (byte *)param_4[1] || (*pbVar1 != 0x20)) ||
        ((*pbVar5 == 0x20 || (*(char *)((ulonglong)*pbVar5 + 0x90 + param_1) == cVar2)))))) {
      pbVar1 = pbVar1 + 1;
      *(undefined1 *)(param_4 + 3) = 0;
      pbVar5 = pbVar5 + 1;
      goto LAB_143652700;
    }
    break;
  case 0x16:
  case 0x18:
  case 0x1d:
    if (iVar6 != 0) break;
    if (lVar7 < lVar4) {
      *param_4 = pbVar1;
      *(undefined1 *)(param_4 + 3) = 1;
    }
    pbVar1 = pbVar1 + 1;
    iVar6 = 1;
    pbVar5 = pbVar5 + 1;
    goto LAB_143652700;
  }
  pbVar1 = pbVar1 + 1;
  pbVar5 = pbVar5 + 1;
  goto LAB_143652700;
}



// FUNCTION 143652960 FUN_143652960 body=415 status=ok
// SIG undefined FUN_143652960(void)

undefined8 FUN_143652960(longlong param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  lVar5 = (longlong)param_3 - (longlong)param_2;
  pbVar6 = param_2;
  if (lVar5 < 2) {
    return 0xffffffff;
  }
  do {
    bVar1 = *pbVar6;
    if (bVar1 == 0) {
      uVar4 = *(undefined1 *)((ulonglong)pbVar6[1] + 0x90 + param_1);
    }
    else if (bVar1 < 0xd8) {
LAB_1436529e4:
      uVar4 = 0x1d;
    }
    else if (bVar1 < 0xdc) {
      uVar4 = 7;
    }
    else if (bVar1 < 0xe0) {
      uVar4 = 8;
    }
    else {
      if ((bVar1 != 0xff) || (1 < (byte)(pbVar6[1] + 2))) goto LAB_1436529e4;
      uVar4 = 0;
    }
    switch(uVar4) {
    case 2:
      *param_4 = pbVar6;
      return 0;
    case 3:
      if (pbVar6 == param_2) {
        uVar3 = FUN_143656ea0(param_1,pbVar6 + 2);
        return uVar3;
      }
      goto LAB_143652a26;
    default:
      pbVar6 = pbVar6 + 2;
      lVar5 = lVar5 + -2;
      break;
    case 6:
      pbVar6 = pbVar6 + 3;
      lVar5 = lVar5 + -3;
      break;
    case 7:
      pbVar6 = pbVar6 + 4;
      lVar5 = lVar5 + -4;
      break;
    case 9:
      if (pbVar6 == param_2) {
        pbVar7 = pbVar6 + 2;
        if ((longlong)param_3 - (longlong)pbVar7 < 2) {
          return 0xfffffffd;
        }
        if (*pbVar7 == 0) {
          uVar2 = (uint)*(byte *)((ulonglong)pbVar6[3] + 0x90 + param_1);
        }
        else {
          uVar2 = FUN_14365c390(*pbVar7,pbVar6[3]);
        }
        if (uVar2 == 10) {
          pbVar7 = pbVar7 + 2;
        }
        *param_4 = pbVar7;
        return 7;
      }
      goto LAB_143652a26;
    case 10:
      if (pbVar6 == param_2) {
        *param_4 = pbVar6 + 2;
        return 7;
      }
      goto LAB_143652a26;
    case 0x15:
      if (pbVar6 == param_2) {
        *param_4 = pbVar6 + 2;
        return 0x27;
      }
      goto LAB_143652a26;
    }
  } while (1 < lVar5);
LAB_143652a26:
  *param_4 = pbVar6;
  return 6;
}



// FUNCTION 143652c90 FUN_143652c90 body=434 status=ok
// SIG undefined FUN_143652c90(void)

ulonglong FUN_143652c90(longlong param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  lVar5 = (longlong)param_3 - (longlong)param_2;
  if (lVar5 < 2) {
    return 0xffffffff;
  }
  pbVar6 = param_2;
  do {
    bVar1 = *pbVar6;
    if (bVar1 == 0) {
      uVar4 = *(undefined1 *)((ulonglong)pbVar6[1] + 0x90 + param_1);
    }
    else if (bVar1 < 0xd8) {
LAB_143652d1d:
      uVar4 = 0x1d;
    }
    else if (bVar1 < 0xdc) {
      uVar4 = 7;
    }
    else if (bVar1 < 0xe0) {
      uVar4 = 8;
    }
    else {
      if ((bVar1 != 0xff) || (1 < (byte)(pbVar6[1] + 2))) goto LAB_143652d1d;
      uVar4 = 0;
    }
    pbVar7 = pbVar6;
    switch(uVar4) {
    case 3:
      if (pbVar6 == param_2) {
        uVar3 = FUN_143656ea0(param_1,pbVar6 + 2);
        return uVar3;
      }
      goto LAB_143652d67;
    default:
      pbVar6 = pbVar6 + 2;
      lVar5 = lVar5 + -2;
      break;
    case 6:
      pbVar6 = pbVar6 + 3;
      lVar5 = lVar5 + -3;
      break;
    case 7:
      pbVar6 = pbVar6 + 4;
      lVar5 = lVar5 + -4;
      break;
    case 9:
      if (pbVar6 == param_2) {
        pbVar7 = pbVar6 + 2;
        if ((longlong)param_3 - (longlong)pbVar7 < 2) {
          return 0xfffffffd;
        }
        if (*pbVar7 == 0) {
          uVar2 = (uint)*(byte *)((ulonglong)pbVar6[3] + 0x90 + param_1);
        }
        else {
          uVar2 = FUN_14365c390(*pbVar7,pbVar6[3]);
        }
        if (uVar2 == 10) {
          pbVar7 = pbVar7 + 2;
        }
        uVar3 = 7;
        goto LAB_143652d6c;
      }
      goto LAB_143652d67;
    case 10:
      if (pbVar6 == param_2) {
        pbVar7 = pbVar6 + 2;
        uVar3 = 7;
        goto LAB_143652d6c;
      }
      goto LAB_143652d67;
    case 0x1e:
      if (pbVar6 == param_2) {
        uVar2 = FUN_143656430(param_1,pbVar6 + 2);
        uVar3 = (ulonglong)uVar2;
        if (uVar2 == 0x16) {
          uVar3 = 0;
        }
        return uVar3;
      }
      goto LAB_143652d67;
    }
    pbVar7 = pbVar6;
  } while (1 < lVar5);
LAB_143652d67:
  uVar3 = 6;
LAB_143652d6c:
  *param_4 = pbVar7;
  return uVar3;
}



// FUNCTION 143653010 FUN_143653010 body=158 status=ok
// SIG undefined FUN_143653010(void)

undefined8 FUN_143653010(longlong param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  
  if (((longlong)param_3 - (longlong)param_2 & 1U) != 0) {
    param_3 = param_2 + ((longlong)param_3 - (longlong)param_2 & 0xfffffffffffffffe);
  }
  lVar4 = (longlong)param_3 - (longlong)param_2;
  do {
    if (lVar4 < 2) {
      return 0xffffffff;
    }
    bVar1 = *param_2;
    if (bVar1 == 0) {
      bVar1 = *(byte *)((ulonglong)param_2[1] + 0x90 + param_1);
      uVar3 = (uint)bVar1;
      if (bVar1 < 9) goto LAB_14365309f;
    }
    else if (0xd7 < bVar1) {
      if (bVar1 < 0xdc) {
        uVar3 = 7;
LAB_14365309f:
                    /* WARNING: Could not recover jumptable at 0x0001436530ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_1436531b4)[(int)uVar3]))
                          (IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_1436531b4)[(int)uVar3]);
        return uVar2;
      }
      if (bVar1 < 0xe0) {
        uVar3 = 8;
        goto LAB_14365309f;
      }
      if ((bVar1 == 0xff) && ((byte)(param_2[1] + 2) < 2)) {
        uVar3 = 0;
        goto LAB_14365309f;
      }
    }
    param_2 = param_2 + 2;
    lVar4 = lVar4 + -2;
  } while( true );
}



// FUNCTION 143653220 FUN_143653220 body=237 status=ok
// SIG undefined FUN_143653220(void)

undefined8 FUN_143653220(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  byte *pbVar4;
  longlong lVar5;
  
  pbVar4 = (byte *)(param_2 + 2);
  lVar5 = (param_3 + -2) - (longlong)pbVar4;
  do {
    if (lVar5 < 2) {
      return 1;
    }
    bVar1 = *pbVar4;
    if (bVar1 == 0) {
      uVar3 = *(undefined1 *)((ulonglong)pbVar4[1] + 0x90 + param_1);
    }
    else if (bVar1 < 0xd8) {
LAB_14365328e:
      uVar3 = 0x1d;
    }
    else if (bVar1 < 0xdc) {
      uVar3 = 7;
    }
    else if (bVar1 < 0xe0) {
      uVar3 = 8;
    }
    else {
      if ((bVar1 != 0xff) || (1 < (byte)(pbVar4[1] + 2))) goto LAB_14365328e;
      uVar3 = 0;
    }
    switch(uVar3) {
    case 9:
    case 10:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1b:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
      break;
    default:
switchD_1436532b0_caseD_b:
      if ((bVar1 != 0) || ((pbVar4[1] != 0x24 && (pbVar4[1] != 0x40)))) {
LAB_1436532bd:
        *param_4 = pbVar4;
        return 0;
      }
      break;
    case 0x15:
      if ((bVar1 == 0) && (pbVar4[1] == 9)) goto LAB_1436532bd;
      break;
    case 0x16:
    case 0x1a:
      if (bVar1 == 0) {
        bVar2 = pbVar4[1];
      }
      else {
        bVar2 = 0xff;
      }
      if ((bVar2 & 0x80) != 0) goto switchD_1436532b0_caseD_b;
    }
    pbVar4 = pbVar4 + 2;
    lVar5 = lVar5 + -2;
  } while( true );
}



// FUNCTION 143653410 FUN_143653410 body=644 status=ok
// SIG undefined FUN_143653410(void)

int FUN_143653410(longlong param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  byte *pbVar9;
  int iVar10;
  undefined8 uVar11;
  bool bVar12;
  
  iVar6 = 0;
  lVar7 = (longlong)param_3;
  uVar5 = 0;
  pbVar9 = (byte *)(param_2 + 2);
  pcVar8 = (char *)(param_2 + 4);
  lVar4 = 0;
  uVar11 = 1;
LAB_143653447:
  bVar1 = *pbVar9;
  if (bVar1 == 0) {
    uVar3 = *(undefined1 *)((ulonglong)pbVar9[1] + 0x90 + param_1);
  }
  else if (bVar1 < 0xd8) {
LAB_143653490:
    uVar3 = 0x1d;
  }
  else if (bVar1 < 0xdc) {
    uVar3 = 7;
  }
  else if (bVar1 < 0xe0) {
    uVar3 = 8;
  }
  else {
    if ((bVar1 != 0xff) || (1 < (byte)(pbVar9[1] + 2))) goto LAB_143653490;
    uVar3 = 0;
  }
  iVar10 = (int)uVar11;
  switch(uVar3) {
  case 3:
switchD_1436534af_caseD_3:
    if (lVar4 < lVar7) {
      pbVar9 = pbVar9 + 2;
      *(undefined1 *)(param_4 + 3) = 0;
      pcVar8 = pcVar8 + 2;
      goto LAB_143653447;
    }
    break;
  case 5:
  case 0x16:
  case 0x18:
  case 0x1d:
    if (iVar10 == 0) {
      if (lVar4 < lVar7) {
        *param_4 = pbVar9;
        *(undefined1 *)(param_4 + 3) = 1;
      }
      pbVar9 = pbVar9 + 2;
      uVar11 = 1;
      pcVar8 = pcVar8 + 2;
      goto LAB_143653447;
    }
    break;
  case 6:
    if (iVar10 == 0) {
      if (lVar4 < lVar7) {
        *param_4 = pbVar9;
        *(undefined1 *)(param_4 + 3) = 1;
      }
      uVar11 = 1;
    }
    pbVar9 = pbVar9 + 3;
    pcVar8 = pcVar8 + 3;
    goto LAB_143653447;
  case 7:
    if (iVar10 == 0) {
      if (lVar4 < lVar7) {
        *param_4 = pbVar9;
        *(undefined1 *)(param_4 + 3) = 1;
      }
      uVar11 = 1;
    }
    pbVar9 = pbVar9 + 4;
    pcVar8 = pcVar8 + 4;
    goto LAB_143653447;
  case 9:
  case 10:
    if (iVar10 == 1) {
      uVar11 = 0;
      pbVar9 = pbVar9 + 2;
      pcVar8 = pcVar8 + 2;
      goto LAB_143653447;
    }
    if (iVar10 == 2) goto switchD_1436534af_caseD_3;
    break;
  case 0xb:
  case 0x11:
    if (iVar10 != 2) {
      return iVar6;
    }
    break;
  case 0xc:
    if (iVar10 == 2) {
      bVar12 = uVar5 == 0xc;
      goto LAB_14365355a;
    }
    if (lVar4 < lVar7) {
      param_4[1] = pcVar8;
    }
    uVar5 = 0xc;
    pbVar9 = pbVar9 + 2;
    pcVar8 = pcVar8 + 2;
    uVar11 = 2;
    goto LAB_143653447;
  case 0xd:
    if (iVar10 != 2) {
      if (lVar4 < lVar7) {
        param_4[1] = pcVar8;
      }
      uVar5 = 0xd;
      pbVar9 = pbVar9 + 2;
      pcVar8 = pcVar8 + 2;
      uVar11 = 2;
      goto LAB_143653447;
    }
    bVar12 = uVar5 == 0xd;
LAB_14365355a:
    if (bVar12) {
      uVar11 = 0;
      if (lVar4 < lVar7) {
        param_4[2] = pbVar9;
      }
      iVar6 = iVar6 + 1;
      lVar4 = lVar4 + 1;
      param_4 = param_4 + 4;
      pbVar9 = pbVar9 + 2;
      pcVar8 = pcVar8 + 2;
      goto LAB_143653447;
    }
    break;
  case 0x15:
    if (iVar10 == 1) {
      uVar11 = 0;
      pbVar9 = pbVar9 + 2;
      pcVar8 = pcVar8 + 2;
    }
    else {
      if (((iVar10 != 2) || (lVar7 <= lVar4)) || (*(char *)(param_4 + 3) == '\0')) break;
      if (((pbVar9 != (byte *)param_4[1]) && (bVar1 == 0)) && (pbVar9[1] == 0x20)) {
        if (*pcVar8 == '\0') {
          if (pbVar9[3] == 0x20) goto LAB_143653621;
          uVar2 = (uint)*(byte *)((ulonglong)pbVar9[3] + 0x90 + param_1);
        }
        else {
          uVar2 = FUN_14365c390(*pcVar8,pbVar9[3]);
        }
        if (uVar2 != uVar5) break;
      }
LAB_143653621:
      pbVar9 = pbVar9 + 2;
      *(undefined1 *)(param_4 + 3) = 0;
      pcVar8 = pcVar8 + 2;
    }
    goto LAB_143653447;
  }
  pbVar9 = pbVar9 + 2;
  pcVar8 = pcVar8 + 2;
  goto LAB_143653447;
}



// FUNCTION 143653700 FUN_143653700 body=290 status=ok
// SIG undefined FUN_143653700(void)

undefined8 FUN_143653700(longlong param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  if (((longlong)param_3 - (longlong)param_2 & 1U) != 0) {
    uVar2 = (longlong)param_3 - (longlong)param_2 & 0xfffffffffffffffe;
    if (uVar2 == 0) {
      return 0xffffffff;
    }
    param_3 = param_2 + uVar2;
  }
  bVar1 = *param_2;
  if (bVar1 == 0) {
    bVar1 = *(byte *)((ulonglong)param_2[1] + 0x90 + param_1);
    uVar4 = (uint)bVar1;
    if (bVar1 < 0xb) {
LAB_1436537be:
                    /* WARNING: Could not recover jumptable at 0x0001436537cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_143653960)[(int)uVar4]))
                        (IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_143653960)[(int)uVar4]);
      return uVar3;
    }
  }
  else if (0xd7 < bVar1) {
    if (bVar1 < 0xdc) {
      uVar4 = 7;
    }
    else if (bVar1 < 0xe0) {
      uVar4 = 8;
    }
    else {
      if ((bVar1 != 0xff) || (1 < (byte)(param_2[1] + 2))) goto LAB_143653756;
      uVar4 = 0;
    }
    goto LAB_1436537be;
  }
LAB_143653756:
  param_2 = param_2 + 2;
  lVar5 = (longlong)param_3 - (longlong)param_2;
  do {
    if (lVar5 < 2) {
      *param_4 = param_2;
      return 6;
    }
    bVar1 = *param_2;
    if (bVar1 == 0) {
      bVar1 = *(byte *)((ulonglong)param_2[1] + 0x90 + param_1);
      uVar4 = (uint)bVar1;
      if (bVar1 < 0xb) goto LAB_143653910;
    }
    else if (0xd7 < bVar1) {
      if (bVar1 < 0xdc) {
        uVar4 = 7;
LAB_143653910:
                    /* WARNING: Could not recover jumptable at 0x00014365391e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_14365398c)[(int)uVar4]))
                          (IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_14365398c)[(int)uVar4]);
        return uVar3;
      }
      if (bVar1 < 0xe0) {
        uVar4 = 8;
        goto LAB_143653910;
      }
      if ((bVar1 == 0xff) && ((byte)(param_2[1] + 2) < 2)) {
        uVar4 = 0;
        goto LAB_143653910;
      }
    }
    param_2 = param_2 + 2;
    lVar5 = lVar5 + -2;
  } while( true );
}



// FUNCTION 143653a80 FUN_143653a80 body=286 status=ok
// SIG undefined FUN_143653a80(void)

undefined8 FUN_143653a80(longlong param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  if (((longlong)param_3 - (longlong)param_2 & 1U) != 0) {
    uVar2 = (longlong)param_3 - (longlong)param_2 & 0xfffffffffffffffe;
    if (uVar2 == 0) {
      return 0xffffffff;
    }
    param_3 = param_2 + uVar2;
  }
  bVar1 = param_2[1];
  if (bVar1 == 0) {
    bVar1 = *(byte *)((ulonglong)*param_2 + 0x90 + param_1);
    uVar4 = (uint)bVar1;
    if (bVar1 < 0xb) {
LAB_143653b3d:
                    /* WARNING: Could not recover jumptable at 0x000143653b4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_143653d40)[(int)uVar4]))
                        (IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_143653d40)[(int)uVar4]);
      return uVar3;
    }
  }
  else if (0xd7 < bVar1) {
    if (bVar1 < 0xdc) {
      uVar4 = 7;
    }
    else if (bVar1 < 0xe0) {
      uVar4 = 8;
    }
    else {
      if ((bVar1 != 0xff) || (1 < (byte)(*param_2 + 2))) goto LAB_143653ad5;
      uVar4 = 0;
    }
    goto LAB_143653b3d;
  }
LAB_143653ad5:
  param_2 = param_2 + 2;
  lVar5 = (longlong)param_3 - (longlong)param_2;
  do {
    if (lVar5 < 2) {
      *param_4 = param_2;
      return 6;
    }
    bVar1 = param_2[1];
    if (bVar1 == 0) {
      bVar1 = *(byte *)((ulonglong)*param_2 + 0x90 + param_1);
      uVar4 = (uint)bVar1;
      if (bVar1 < 0xb) goto LAB_143653ca4;
    }
    else if (0xd7 < bVar1) {
      if (bVar1 < 0xdc) {
        uVar4 = 7;
LAB_143653ca4:
                    /* WARNING: Could not recover jumptable at 0x000143653cb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_143653d6c)[(int)uVar4]))
                          (IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_143653d6c)[(int)uVar4]);
        return uVar3;
      }
      if (bVar1 < 0xe0) {
        uVar4 = 8;
        goto LAB_143653ca4;
      }
      if ((bVar1 == 0xff) && ((byte)(*param_2 + 2) < 2)) {
        uVar4 = 0;
        goto LAB_143653ca4;
      }
    }
    param_2 = param_2 + 2;
    lVar5 = lVar5 + -2;
  } while( true );
}



// FUNCTION 143653da0 FUN_143653da0 body=275 status=ok
// SIG undefined FUN_143653da0(void)

uint FUN_143653da0(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  pcVar1 = (char *)(param_2 + 4);
  uVar3 = 0;
  if ((*pcVar1 == '\0') && (*(char *)(param_2 + 5) == 'x')) {
    pcVar1 = (char *)(param_2 + 6);
    do {
      if (*pcVar1 == '\0') {
        if (pcVar1[1] == ';') goto LAB_143653e66;
        iVar4 = (int)pcVar1[1];
      }
      else {
        iVar4 = -1;
      }
      switch(iVar4 - 0x30U) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        uVar3 = uVar3 << 4 | iVar4 - 0x30U;
        break;
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
        iVar2 = uVar3 * 0x10 + -0x37;
        goto LAB_143653e1c;
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
        iVar2 = uVar3 * 0x10 + -0x57;
LAB_143653e1c:
        uVar3 = iVar2 + iVar4;
      }
      if (0x10ffff < (int)uVar3) {
        return 0xffffffff;
      }
      pcVar1 = pcVar1 + 2;
    } while( true );
  }
  do {
    if (*pcVar1 == '\0') {
      if (pcVar1[1] == ';') {
LAB_143653e66:
        iVar4 = (int)uVar3 >> 8;
        if (iVar4 == 0) {
          if ((&DAT_145b5ba90)[(int)uVar3] == '\0') {
            return 0xffffffff;
          }
        }
        else if (0xd7 < iVar4) {
          if (iVar4 < 0xe0) {
            return 0xffffffff;
          }
          if ((iVar4 == 0xff) && (uVar3 - 0xfffe < 2)) {
            return 0xffffffff;
          }
        }
        return uVar3;
      }
      iVar4 = (int)pcVar1[1];
    }
    else {
      iVar4 = -1;
    }
    uVar3 = iVar4 + (uVar3 * 5 + -0x18) * 2;
    if (0x10ffff < (int)uVar3) {
      return 0xffffffff;
    }
    pcVar1 = pcVar1 + 2;
  } while( true );
}



// FUNCTION 143653f00 FUN_143653f00 body=171 status=ok
// SIG undefined FUN_143653f00(void)

undefined8
FUN_143653f00(undefined8 param_1,undefined8 *param_2,undefined1 *param_3,undefined8 *param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *local_res18;
  
  puVar5 = (undefined1 *)*param_4;
  puVar3 = (undefined1 *)*param_2;
  uVar4 = 0;
  if ((longlong)param_5 - (longlong)puVar5 < (longlong)param_3 - (longlong)puVar3) {
    local_res18 = param_5 + ((longlong)puVar3 - (longlong)puVar5);
    uVar4 = 2;
    FUN_143654d50(puVar3,&local_res18);
    param_3 = local_res18;
  }
  for (; (puVar3 < param_3 && (puVar5 < param_5)); puVar5 = puVar5 + 1) {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *puVar5 = uVar1;
  }
  *param_2 = puVar3;
  *param_4 = puVar5;
  if ((puVar5 != param_5) || (uVar2 = 2, param_3 <= puVar3)) {
    uVar2 = uVar4;
  }
  return uVar2;
}



// FUNCTION 1436540e0 FUN_1436540e0 body=485 status=ok
// SIG undefined FUN_1436540e0(void)

undefined8
FUN_1436540e0(longlong param_1,undefined8 *param_2,byte *param_3,longlong *param_4,ushort *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  byte *pbVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ushort *puVar11;
  longlong lVar12;
  
  pbVar7 = (byte *)*param_2;
  uVar9 = 0;
  puVar11 = (ushort *)*param_4;
  if (pbVar7 < param_3) {
    lVar12 = (longlong)param_3 - (longlong)pbVar7;
    uVar10 = (longlong)param_5 - (longlong)puVar11;
    do {
      if (param_5 <= puVar11) break;
      bVar4 = *pbVar7;
      cVar5 = *(char *)((ulonglong)bVar4 + 0x90 + param_1);
      if (cVar5 == '\x05') {
        if (lVar12 < 2) {
          uVar9 = 1;
        }
        else {
          pbVar1 = pbVar7 + 1;
          pbVar7 = pbVar7 + 2;
          *puVar11 = (short)(char)(bVar4 & 0x1f) << 6 | (short)(char)(*pbVar1 & 0x3f);
          lVar6 = -2;
LAB_143654283:
          lVar12 = lVar12 + lVar6;
          puVar11 = puVar11 + 1;
          uVar10 = uVar10 - 2;
        }
      }
      else if (cVar5 == '\x06') {
        if (2 < lVar12) {
          pbVar1 = pbVar7 + 1;
          pbVar2 = pbVar7 + 2;
          pbVar7 = pbVar7 + 3;
          *puVar11 = ((short)(char)(*pbVar1 & 0x3f) | (short)(char)bVar4 << 6) << 6 |
                     (short)(char)(*pbVar2 & 0x3f);
          lVar6 = -3;
          goto LAB_143654283;
        }
        uVar9 = 1;
      }
      else if (cVar5 == '\a') {
        if ((longlong)(uVar10 & 0xfffffffffffffffe) < 4) {
          uVar9 = 2;
          break;
        }
        if (lVar12 < 4) {
          uVar9 = 1;
          break;
        }
        pbVar1 = pbVar7 + 1;
        uVar10 = uVar10 - 4;
        pbVar2 = pbVar7 + 2;
        pbVar3 = pbVar7 + 3;
        pbVar7 = pbVar7 + 4;
        uVar8 = (((((int)(char)bVar4 & 7U) << 6 | (int)(char)*pbVar1 & 0x3fU) << 6 |
                 (int)(char)*pbVar2 & 0x3fU) << 6 | (int)(char)*pbVar3 & 0x3fU) - 0x10000;
        *puVar11 = (ushort)(uVar8 >> 10) | 0xd800;
        puVar11[1] = (ushort)uVar8 & 0x3ff | 0xdc00;
        puVar11 = puVar11 + 2;
        lVar12 = lVar12 + -4;
      }
      else {
        uVar10 = uVar10 - 2;
        *puVar11 = (short)(char)bVar4;
        pbVar7 = pbVar7 + 1;
        puVar11 = puVar11 + 1;
        lVar12 = lVar12 + -1;
      }
    } while (pbVar7 < param_3);
  }
  *param_2 = pbVar7;
  *param_4 = (longlong)puVar11;
  return uVar9;
}



// FUNCTION 143654790 FUN_143654790 body=8 status=ok
// SIG undefined FUN_143654790(void)

undefined ** FUN_143654790(void)

{
  return &PTR_FUN_145b5b640;
}



// FUNCTION 1436547a0 FUN_1436547a0 body=8 status=ok
// SIG undefined FUN_1436547a0(void)

undefined ** FUN_1436547a0(void)

{
  return &PTR_FUN_145b5b460;
}



// FUNCTION 1436547b0 FUN_1436547b0 body=106 status=ok
// SIG undefined FUN_1436547b0(void)

undefined8 FUN_1436547b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_143657780(param_3);
  if (iVar1 == -1) {
    return 0;
  }
  *(char *)((longlong)param_1 + 0x8d) = (char)iVar1;
  *param_1 = FUN_143657b70;
  param_1[1] = FUN_143657810;
  param_1[0xd] = &DAT_143657e50;
  param_1[0x12] = param_2;
  *param_2 = param_1;
  return 1;
}



// FUNCTION 143654820 FUN_143654820 body=106 status=ok
// SIG undefined FUN_143654820(void)

undefined8 FUN_143654820(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_143657780(param_3);
  if (iVar1 == -1) {
    return 0;
  }
  *(char *)((longlong)param_1 + 0x8d) = (char)iVar1;
  *param_1 = FUN_143657ce0;
  param_1[1] = FUN_1436579c0;
  param_1[0xd] = &DAT_143657e50;
  param_1[0x12] = param_2;
  *param_2 = param_1;
  return 1;
}



// FUNCTION 143654890 FUN_143654890 body=775 status=ok
// SIG undefined FUN_143654890(void)

undefined1 * FUN_143654890(undefined1 *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  byte bVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  undefined2 *puVar14;
  
  lVar12 = 0xec;
  puVar6 = param_1;
  do {
    *puVar6 = puVar6[(longlong)&DAT_145b5ba00 - (longlong)param_1];
    puVar6[1] = puVar6[(longlong)&DAT_145b5ba01 - (longlong)param_1];
    puVar6 = puVar6 + 2;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  uVar9 = 0;
  uVar5 = uVar9;
  uVar7 = uVar9;
  do {
    if ((((&DAT_145b5ba90)[uVar5] != '\x1c') && ((&DAT_145b5ba90)[uVar5] != '\0')) &&
       (*(int *)(param_2 + uVar5 * 4) != (int)uVar7)) {
      return (undefined1 *)0x0;
    }
    uVar7 = (ulonglong)((int)uVar7 + 1);
    uVar5 = uVar5 + 1;
  } while ((longlong)uVar5 < 0x80);
  puVar10 = (undefined2 *)(param_1 + 1000);
  puVar14 = (undefined2 *)(param_1 + 0x1e8);
  uVar5 = uVar9;
  do {
    iVar2 = *(int *)((param_2 - (longlong)param_1) + -1000 + (longlong)puVar10);
    lVar12 = (longlong)iVar2;
    iVar13 = (int)uVar5;
    if (iVar2 == -1) {
      param_1[uVar9 + 0x90] = 1;
      *puVar14 = 0xffff;
      *puVar10 = 1;
    }
    else {
      bVar8 = (byte)iVar2;
      if (iVar2 < 0) {
        if (iVar2 < -4) {
          return (undefined1 *)0x0;
        }
        param_1[uVar9 + 0x90] = '\x03' - bVar8;
        *(undefined1 *)puVar10 = 0;
        *puVar14 = 0;
      }
      else {
        if (iVar2 < 0x80) {
          cVar1 = (&DAT_145b5ba90)[lVar12];
          if (((cVar1 != '\x1c') && (cVar1 != '\0')) && (iVar2 != iVar13)) {
            return (undefined1 *)0x0;
          }
          param_1[uVar9 + 0x90] = cVar1;
          *(byte *)((longlong)puVar10 + 1) = bVar8;
          if (iVar2 == 0) {
            lVar12 = 0xffff;
          }
          *(undefined1 *)puVar10 = 1;
        }
        else {
          iVar4 = iVar2 >> 8;
          if (iVar4 == 0) {
            if ((&DAT_145b5ba90)[lVar12] == '\0') goto LAB_143654a61;
          }
          else if ((0xd7 < iVar4) && ((iVar4 < 0xe0 || ((iVar4 == 0xff && (iVar2 - 0xfffeU < 2))))))
          {
LAB_143654a61:
            param_1[uVar9 + 0x90] = 0;
            *puVar14 = 0xffff;
            *puVar10 = 1;
            goto LAB_143654ad1;
          }
          if (0xffff < iVar2) {
            return (undefined1 *)0x0;
          }
          uVar5 = (ulonglong)((uint)(lVar12 >> 5) & 7);
          uVar11 = 1 << (bVar8 & 0x1f);
          if ((*(uint *)(&DAT_145b5bfa0 +
                        (uVar5 + (ulonglong)(byte)(&DAT_145b5c4a0)[lVar12 >> 8] * 8) * 4) & uVar11)
              == 0) {
            uVar3 = 0x1c;
            if ((*(uint *)(&DAT_145b5bfa0 +
                          (uVar5 + (ulonglong)(byte)(&DAT_145b5c5a0)[lVar12 >> 8] * 8) * 4) & uVar11
                ) != 0) {
              uVar3 = 0x1a;
            }
            param_1[uVar9 + 0x90] = uVar3;
          }
          else {
            param_1[uVar9 + 0x90] = 0x16;
          }
          uVar3 = FUN_143654cb0(iVar2,param_1 + (longlong)iVar13 * 4 + 0x3e9);
          *(undefined1 *)puVar10 = uVar3;
        }
        *puVar14 = (short)lVar12;
      }
    }
LAB_143654ad1:
    uVar5 = (ulonglong)(iVar13 + 1U);
    uVar9 = uVar9 + 1;
    puVar14 = puVar14 + 1;
    puVar10 = puVar10 + 2;
    if (0xff < (int)(iVar13 + 1U)) {
      *(undefined8 *)(param_1 + 0x1e0) = param_4;
      *(longlong *)(param_1 + 0x1d8) = param_3;
      if (param_3 != 0) {
        *(code **)(param_1 + 400) = FUN_14365c440;
        *(code **)(param_1 + 0x198) = FUN_14365c440;
        *(code **)(param_1 + 0x1a0) = FUN_14365c440;
        *(code **)(param_1 + 0x1a8) = FUN_14365c4b0;
        *(code **)(param_1 + 0x1b0) = FUN_14365c4b0;
        *(code **)(param_1 + 0x1b8) = FUN_14365c4b0;
        *(code **)(param_1 + 0x1c0) = FUN_14365c3d0;
        *(code **)(param_1 + 0x1c8) = FUN_14365c3d0;
        *(code **)(param_1 + 0x1d0) = FUN_14365c3d0;
      }
      *(code **)(param_1 + 0x78) = FUN_14365c5e0;
      *(code **)(param_1 + 0x80) = FUN_14365c520;
      return param_1;
    }
  } while( true );
}



// FUNCTION 143654ba0 FUN_143654ba0 body=26 status=ok
// SIG undefined FUN_143654ba0(void)

void FUN_143654ba0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_143654890();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0xca) = 0x17;
  }
  return;
}



// FUNCTION 143654bc0 FUN_143654bc0 body=108 status=ok
// SIG undefined FUN_143654bc0(void)

void FUN_143654bc0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  FUN_1436571d0(FUN_1436574e0,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                param_9,param_10);
  return;
}



// FUNCTION 143654c30 FUN_143654c30 body=108 status=ok
// SIG undefined FUN_143654c30(void)

void FUN_143654c30(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  FUN_1436571d0(FUN_143657630,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                param_9,param_10);
  return;
}



// FUNCTION 143654ca0 FUN_143654ca0 body=6 status=ok
// SIG undefined FUN_143654ca0(void)

undefined8 FUN_143654ca0(void)

{
  return 0x7e8;
}



// FUNCTION 143654cb0 FUN_143654cb0 body=159 status=ok
// SIG undefined FUN_143654cb0(void)

undefined8 FUN_143654cb0(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  if (-1 < param_1) {
    bVar3 = (byte)param_1;
    if (param_1 < 0x80) {
      *param_2 = bVar3;
      return 1;
    }
    bVar1 = (byte)(param_1 >> 6);
    if (param_1 < 0x800) {
      *param_2 = bVar1 | 0xc0;
      param_2[1] = bVar3 & 0x3f | 0x80;
      return 2;
    }
    bVar2 = (byte)(param_1 >> 0xc);
    if (param_1 < 0x10000) {
      *param_2 = bVar2 | 0xe0;
      param_2[1] = bVar1 & 0x3f | 0x80;
      param_2[2] = bVar3 & 0x3f | 0x80;
      return 3;
    }
    if (param_1 < 0x110000) {
      *param_2 = (byte)(param_1 >> 0x12) | 0xf0;
      param_2[1] = bVar2 & 0x3f | 0x80;
      param_2[2] = bVar1 & 0x3f | 0x80;
      param_2[3] = bVar3 & 0x3f | 0x80;
      return 4;
    }
  }
  return 0;
}



// FUNCTION 143654d50 FUN_143654d50 body=143 status=ok
// SIG undefined FUN_143654d50(void)

void FUN_143654d50(ulonglong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = *param_2;
  lVar3 = 0;
  if (uVar4 <= param_1) {
LAB_143654dcc:
    *param_2 = uVar4;
    return;
  }
  do {
    bVar2 = *(byte *)(uVar4 - 1);
    uVar1 = uVar4 - 1;
    if ((bVar2 & 0xf8) == 0xf0) {
      if (3 < lVar3 + 1U) {
        uVar4 = uVar4 + 3;
        goto LAB_143654dcc;
      }
      lVar3 = 0;
    }
    else if ((bVar2 & 0xf0) == 0xe0) {
      if (2 < lVar3 + 1U) {
        *param_2 = uVar4 + 2;
        return;
      }
      lVar3 = 0;
    }
    else if ((bVar2 & 0xe0) == 0xc0) {
      if (1 < lVar3 + 1U) {
        *param_2 = uVar4 + 1;
        return;
      }
      lVar3 = 0;
    }
    else if (-1 < (char)bVar2) goto LAB_143654dcc;
    lVar3 = lVar3 + 1;
    uVar4 = uVar1;
    if (uVar1 <= param_1) {
      *param_2 = uVar1;
      return;
    }
  } while( true );
}



// FUNCTION 143654de0 FUN_143654de0 body=1365 status=ok
// SIG undefined FUN_143654de0(void)

int FUN_143654de0(longlong param_1,byte *param_2,longlong param_3,longlong *param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  byte bVar8;
  ulonglong uVar9;
  byte *pbVar10;
  byte *local_res10;
  
  bVar2 = false;
joined_r0x000143654e10:
  lVar7 = param_3 - (longlong)param_2;
  if (lVar7 < 2) {
    return -1;
  }
  bVar1 = *param_2;
  if (bVar1 == 0) {
    uVar5 = *(undefined1 *)((ulonglong)param_2[1] + 0x90 + param_1);
  }
  else if (bVar1 < 0xd8) {
LAB_143654e6b:
    uVar5 = 0x1d;
  }
  else if (bVar1 < 0xdc) {
    uVar5 = 7;
  }
  else if (bVar1 < 0xe0) {
    uVar5 = 8;
  }
  else {
    if ((bVar1 != 0xff) || (1 < (byte)(param_2[1] + 2))) goto LAB_143654e6b;
    uVar5 = 0;
  }
  pbVar10 = param_2;
  switch(uVar5) {
  case 5:
switchD_143654e93_caseD_5:
    if (param_3 - (longlong)param_2 < 2) {
      return -2;
    }
    break;
  case 6:
switchD_143654e93_caseD_6:
    if (param_3 - (longlong)param_2 < 3) {
      return -2;
    }
    break;
  case 7:
switchD_143654e93_caseD_7:
    if (param_3 - (longlong)param_2 < 4) {
      return -2;
    }
    break;
  default:
    goto switchD_143654e93_caseD_8;
  case 9:
  case 10:
  case 0x15:
switchD_143654e93_caseD_9:
    param_2 = pbVar10 + 2;
    lVar7 = lVar7 + -2;
    if (lVar7 < 2) {
      return -1;
    }
    bVar1 = *param_2;
    if (bVar1 == 0) {
      uVar3 = (uint)*(byte *)((ulonglong)pbVar10[3] + 0x90 + param_1);
    }
    else if (bVar1 < 0xd8) {
LAB_143654f86:
      uVar3 = 0x1d;
    }
    else if (bVar1 < 0xdc) {
      uVar3 = 7;
    }
    else if (bVar1 < 0xe0) {
      uVar3 = 8;
    }
    else {
      if ((bVar1 != 0xff) || (1 < (byte)(pbVar10[3] + 2))) goto LAB_143654f86;
      uVar3 = 0;
    }
    if (uVar3 != 0xe) {
      pbVar10 = param_2;
      if ((1 < uVar3 - 9) && (uVar3 != 0x15)) goto switchD_143654e93_caseD_8;
      goto switchD_143654e93_caseD_9;
    }
  case 0xe:
    bVar2 = false;
    lVar7 = param_3 - (longlong)param_2;
    do {
      local_res10 = param_2 + 2;
      lVar7 = lVar7 + -2;
      if (lVar7 < 2) {
        return -1;
      }
      bVar1 = *local_res10;
      if (bVar1 == 0) {
        uVar3 = (uint)*(byte *)((ulonglong)param_2[3] + 0x90 + param_1);
      }
      else if (bVar1 < 0xd8) {
LAB_143655006:
        uVar3 = 0x1d;
      }
      else if (bVar1 < 0xdc) {
        uVar3 = 7;
      }
      else if (bVar1 < 0xe0) {
        uVar3 = 8;
      }
      else {
        if ((bVar1 != 0xff) || (1 < (byte)(param_2[3] + 2))) goto LAB_143655006;
        uVar3 = 0;
      }
      if (uVar3 - 0xc < 2) {
switchD_1436550b0_caseD_4:
        local_res10 = local_res10 + 2;
        do {
          lVar7 = param_3 - (longlong)local_res10;
          if (lVar7 < 2) {
            return -1;
          }
          bVar1 = *local_res10;
          if (bVar1 == 0) {
            uVar6 = (uint)*(byte *)((ulonglong)local_res10[1] + 0x90 + param_1);
          }
          else if (bVar1 < 0xd8) {
LAB_143655094:
            uVar6 = 0x1d;
          }
          else if (bVar1 < 0xdc) {
            uVar6 = 7;
          }
          else if (bVar1 < 0xe0) {
            uVar6 = 8;
          }
          else {
            if ((bVar1 != 0xff) || (1 < (byte)(local_res10[1] + 2))) goto LAB_143655094;
            uVar6 = 0;
          }
          if (uVar6 == uVar3) {
            param_2 = local_res10 + 2;
            lVar7 = param_3 - (longlong)param_2;
            if (lVar7 < 2) {
              return -1;
            }
            bVar1 = *param_2;
            if (bVar1 != 0) {
              if ((((0xd7 < bVar1) && (0xdb < bVar1)) && (0xdf < bVar1)) && (bVar1 == 0xff)) {
                *param_4 = (longlong)param_2;
                return 0;
              }
              goto switchD_143654e93_caseD_8;
            }
            bVar1 = *(byte *)((ulonglong)local_res10[3] + 0x90 + param_1);
            if (bVar1 < 9) goto switchD_143654e93_caseD_8;
            pbVar10 = param_2;
            if (bVar1 < 0xb) goto switchD_1436551de_caseD_9;
            if (bVar1 == 0xb) goto switchD_1436551de_caseD_b;
            if (bVar1 == 0x11) goto switchD_1436551de_caseD_11;
            if (bVar1 != 0x15) goto switchD_143654e93_caseD_8;
            goto switchD_1436551de_caseD_9;
          }
          param_2 = local_res10;
          switch(uVar6) {
          case 0:
          case 1:
          case 2:
          case 8:
            goto switchD_143654e93_caseD_8;
          case 3:
            iVar4 = FUN_143656ea0(param_1,local_res10 + 2,param_3,&local_res10);
            if (iVar4 < 1) {
              if (iVar4 == 0) {
                *param_4 = (longlong)local_res10;
                return 0;
              }
              return iVar4;
            }
            break;
          default:
            goto switchD_1436550b0_caseD_4;
          case 6:
            if (lVar7 < 3) {
              return -2;
            }
            local_res10 = local_res10 + 3;
            break;
          case 7:
            if (lVar7 < 4) {
              return -2;
            }
            local_res10 = local_res10 + 4;
          }
        } while( true );
      }
      param_2 = local_res10;
      if ((1 < uVar3 - 9) && (uVar3 != 0x15)) {
        *param_4 = (longlong)local_res10;
        return 0;
      }
    } while( true );
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
    goto switchD_143654e93_caseD_16;
  case 0x17:
    if (bVar2) break;
    pbVar10 = param_2 + 2;
    bVar2 = true;
    if (param_3 - (longlong)pbVar10 < 2) {
      return -1;
    }
    uVar9 = (ulonglong)*pbVar10;
    if (*pbVar10 == 0) {
      bVar8 = param_2[3];
      uVar3 = (uint)*(byte *)((ulonglong)bVar8 + 0x90 + param_1);
      param_2 = pbVar10;
    }
    else {
      bVar8 = param_2[3];
      uVar3 = FUN_14365c390(uVar9,bVar8);
      param_2 = pbVar10;
    }
    switch(uVar3) {
    case 5:
      goto switchD_143654e93_caseD_5;
    case 6:
      goto switchD_143654e93_caseD_6;
    case 7:
      goto switchD_143654e93_caseD_7;
    default:
      goto switchD_143654e93_caseD_8;
    case 0x16:
    case 0x18:
      goto switchD_143654e93_caseD_16;
    case 0x1d:
      bVar1 = (&DAT_145b5c4a0)[uVar9 & 0xff];
      goto LAB_1436551f2;
    }
  case 0x1d:
    bVar1 = (&DAT_145b5c5a0)[bVar1];
LAB_1436551ed:
    bVar8 = param_2[1];
LAB_1436551f2:
    if ((*(uint *)(&DAT_145b5bfa0 + ((ulonglong)(bVar8 >> 5) + (ulonglong)bVar1 * 8) * 4) >>
         (bVar8 & 0x1f) & 1) == 0) {
switchD_143654e93_caseD_8:
      *param_4 = (longlong)param_2;
      return 0;
    }
    goto switchD_143654e93_caseD_16;
  }
  goto LAB_143655308;
  do {
    pbVar10 = param_2;
    switch(uVar5) {
    case 5:
      if (param_3 - (longlong)param_2 < 2) {
        return -2;
      }
      goto switchD_143654e93_caseD_8;
    case 6:
      if (param_3 - (longlong)param_2 < 3) {
        return -2;
      }
      goto switchD_143654e93_caseD_8;
    case 7:
      if (param_3 - (longlong)param_2 < 4) {
        return -2;
      }
    default:
      goto switchD_143654e93_caseD_8;
    case 9:
    case 10:
    case 0x15:
switchD_1436551de_caseD_9:
      param_2 = pbVar10 + 2;
      lVar7 = lVar7 + -2;
      if (lVar7 < 2) {
        return -1;
      }
      bVar1 = *param_2;
      if (bVar1 == 0) {
        uVar5 = *(undefined1 *)((ulonglong)pbVar10[3] + 0x90 + param_1);
      }
      else if (bVar1 < 0xd8) {
LAB_1436551b6:
        uVar5 = 0x1d;
      }
      else if (bVar1 < 0xdc) {
        uVar5 = 7;
      }
      else if (bVar1 < 0xe0) {
        uVar5 = 8;
      }
      else {
        if ((bVar1 != 0xff) || (1 < (byte)(pbVar10[3] + 2))) goto LAB_1436551b6;
        uVar5 = 0;
      }
      break;
    case 0xb:
      goto switchD_1436551de_caseD_b;
    case 0x11:
      goto switchD_1436551de_caseD_11;
    case 0x16:
    case 0x18:
      goto switchD_143654e93_caseD_16;
    case 0x1d:
      bVar1 = (&DAT_145b5c4a0)[*param_2];
      goto LAB_1436551ed;
    }
  } while( true );
switchD_143654e93_caseD_16:
  param_2 = param_2 + 2;
  goto joined_r0x000143654e10;
switchD_1436551de_caseD_b:
  *param_4 = (longlong)(param_2 + 2);
  return 1;
switchD_1436551de_caseD_11:
  param_2 = pbVar10 + 2;
  if (param_3 - (longlong)param_2 < 2) {
    return -1;
  }
  if ((*param_2 == 0) && (pbVar10[3] == 0x3e)) {
    *param_4 = (longlong)(pbVar10 + 4);
    return 3;
  }
LAB_143655308:
  *param_4 = (longlong)param_2;
  return 0;
}



// FUNCTION 1436554e0 FUN_1436554e0 body=323 status=ok
// SIG undefined FUN_1436554e0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000145050001) overlaps instruction at (ram,0x000145050000)
    */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_1436554e0(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar10;
  char cVar11;
  byte bVar13;
  byte *pbVar12;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  longlong lVar14;
  longlong in_FS_OFFSET;
  char *unaff_retaddr;
  int *piVar9;
  
  if (param_3 - (longlong)param_2 < 2) {
    IMAGE_DOS_HEADER_140000000.e_magic[0] = 'M';
    IMAGE_DOS_HEADER_140000000.e_program[4] = 0;
    return 0xffffffff;
  }
  if ((*param_2 == 0) && (param_2[1] == 0x2d)) {
    lVar14 = param_3 - (longlong)(param_2 + 2);
    pbVar12 = param_2 + 2;
joined_r0x000143655515:
    do {
      pbVar3 = pbVar12;
      if (lVar14 < 2) {
        IMAGE_DOS_HEADER_140000000.e_magic[0] = 'M';
        IMAGE_DOS_HEADER_140000000.e_program[4] = 0;
        return 0xffffffff;
      }
      bVar5 = *pbVar3;
      if (bVar5 != 0) {
        if (0xd7 < bVar5) {
          if (bVar5 < 0xdc) {
            uVar7 = 7;
          }
          else if (bVar5 < 0xe0) {
            uVar7 = 8;
          }
          else {
            if ((bVar5 != 0xff) || (1 < (byte)(pbVar3[1] + 2))) goto switchD_14365558f_caseD_5;
            uVar7 = 0;
          }
          goto LAB_14365557a;
        }
        goto switchD_14365558f_caseD_5;
      }
      bVar5 = *(byte *)((ulonglong)pbVar3[1] + 0x90 + param_1);
      uVar7 = (uint)bVar5;
      if (0x1b < bVar5) goto switchD_14365558f_caseD_5;
LAB_14365557a:
      bVar5 = *(byte *)((longlong)&UINT_14365563c + (longlong)(int)uVar7);
      piVar9 = (int *)(ulonglong)bVar5;
      pcVar10 = IMAGE_DOS_HEADER_140000000.e_magic +
                (&switchD_14365558f::switchdataD_143655624)[(longlong)piVar9];
      bVar13 = (byte)((ulonglong)pbVar3 >> 8);
      param_2 = pbVar3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar5) {
      case 0:
        goto switchD_14365558f_caseD_0;
      case 1:
        if (lVar14 < 2) {
          IMAGE_DOS_HEADER_140000000.e_magic[0] = 'M';
          IMAGE_DOS_HEADER_140000000.e_program[4] = 0;
          return 0xfffffffe;
        }
      case 5:
switchD_14365558f_caseD_5:
        lVar14 = lVar14 + -2;
        pbVar12 = pbVar3 + 2;
        break;
      case 2:
        if (lVar14 < 3) {
          IMAGE_DOS_HEADER_140000000.e_magic[0] = 'M';
          IMAGE_DOS_HEADER_140000000.e_program[4] = 0;
          return 0xfffffffe;
        }
        lVar14 = lVar14 + -3;
        pbVar12 = pbVar3 + 3;
        break;
      case 3:
        if (lVar14 < 4) {
          IMAGE_DOS_HEADER_140000000.e_magic[0] = 'M';
          IMAGE_DOS_HEADER_140000000.e_program[4] = 0;
          return 0xfffffffe;
        }
        lVar14 = lVar14 + -4;
        pbVar12 = pbVar3 + 4;
        break;
      case 4:
        goto switchD_14365558f_caseD_4;
      case 6:
                    /* WARNING: Read-only address (ram,0x000140000044) is written */
        IMAGE_DOS_HEADER_140000000.e_program[4] = 0;
        *piVar9 = *piVar9 + (uint)bVar5;
        iVar4 = *piVar9;
        *(byte *)piVar9 = (char)*piVar9 + bVar5;
        if (SCARRY1((char)iVar4,bVar5)) {
          *(char *)piVar9 = (char)*piVar9;
          *(char *)((longlong)piVar9 + 0x77) = *(char *)((longlong)piVar9 + 0x77);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 7:
        uVar8 = (ulonglong)(uint)DAT_146b46300;
        if (uVar8 == 0) {
          FUN_1417866a0(&DAT_146b46300,&PTR_Z_Construct_UPackage__Script_Engine_14677f950);
          uVar8 = CONCAT44(DAT_146b46300._4_4_,(uint)DAT_146b46300);
        }
        return uVar8;
      case 8:
        IMAGE_DOS_HEADER_140000000.e_magic[0] = 'M';
        IMAGE_DOS_HEADER_140000000.e_program[4] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        *(byte *)piVar9 = (char)*piVar9 + bVar5;
        *(char *)((longlong)piVar9 + 0x141793b) = *(char *)((longlong)piVar9 + 0x141793b);
        *(byte *)piVar9 = (char)*piVar9 + bVar5;
        uVar7 = in(0x33);
        piVar9 = (int *)(ulonglong)uVar7;
        *piVar9 = *piVar9 + uVar7;
        iVar4 = *piVar9;
        cVar6 = (char)uVar7;
        *(char *)piVar9 = (char)*piVar9 + cVar6;
        if (SCARRY1((char)iVar4,cVar6)) {
          *piVar9 = *piVar9 + uVar7;
          *(char *)piVar9 = (char)*piVar9 + cVar6;
          uVar7 = (uint)CONCAT71((uint7)(uint3)(uVar7 >> 8),0xc5) ^ *(uint *)(pbVar3 + 1);
          pcVar10 = (char *)(ulonglong)uVar7;
          *pcVar10 = *pcVar10 + (char)uVar7;
          pcVar10[0x77] = pcVar10[0x77] + (char)(uVar7 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar7 = uVar7 ^ *(uint *)(pbVar3 + 1);
        bVar5 = (byte)uVar7;
        *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + bVar5;
        cVar6 = bVar5 + bVar13;
        uVar2 = CONCAT31((int3)(uVar7 >> 8),cVar6);
        piVar9 = (int *)(ulonglong)uVar2;
        if (!CARRY1(bVar5,bVar13)) {
          *(char *)((longlong)piVar9 + 0x77) =
               *(char *)((longlong)piVar9 + 0x77) + (char)(uVar7 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *piVar9 = *piVar9 + uVar2;
        *(char *)piVar9 = (char)*piVar9 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xc:
        *(byte *)piVar9 = (char)*piVar9 + bVar5;
                    /* WARNING: Read-only address (ram,0x000140000000) is written */
        IMAGE_DOS_HEADER_140000000.e_magic[0] = 'M';
        uVar1 = in((short)pbVar3);
        *unaff_RDI = uVar1;
        cVar11 = (char)((ulonglong)pcVar10 >> 8);
        *pcVar10 = *pcVar10 + cVar11;
        *(char *)(unaff_RSI + 0xff00000000) = *(char *)(unaff_RSI + 0xff00000000) + cVar11;
        *pcVar10 = *pcVar10 + cVar11;
        *(char *)(in_FS_OFFSET + (longlong)piVar9) =
             *(char *)(in_FS_OFFSET + (longlong)piVar9) + bVar5;
        *(byte *)piVar9 = (char)*piVar9 + bVar5;
        *(byte *)piVar9 = (char)*piVar9 + bVar5;
        *unaff_retaddr = *unaff_retaddr + bVar5;
        *(char *)(lVar14 + (longlong)piVar9) = *(char *)(lVar14 + (longlong)piVar9) + (char)param_3;
        *pcVar10 = *pcVar10;
        cVar6 = in((short)pbVar3);
        *unaff_retaddr = cVar6;
        *pcVar10 = *pcVar10 + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    } while( true );
  }
switchD_14365558f_caseD_0:
  *param_4 = param_2;
  return 0;
switchD_14365558f_caseD_4:
  pbVar12 = pbVar3 + 2;
  lVar14 = lVar14 + -2;
  if (lVar14 < 2) {
    IMAGE_DOS_HEADER_140000000.e_magic[0] = 'M';
    IMAGE_DOS_HEADER_140000000.e_program[4] = 0;
    return 0xffffffff;
  }
  if ((*pbVar12 != 0) || (pbVar3[3] != 0x2d)) goto joined_r0x000143655515;
  param_2 = pbVar3 + 4;
  if (param_3 - (longlong)param_2 < 2) {
    IMAGE_DOS_HEADER_140000000.e_magic[0] = 'M';
    IMAGE_DOS_HEADER_140000000.e_program[4] = 0;
    return 0xffffffff;
  }
  if ((*param_2 == 0) && (pbVar3[5] == 0x3e)) {
    *param_4 = pbVar3 + 6;
    return 0xd;
  }
  goto switchD_14365558f_caseD_0;
}



// FUNCTION 143655660 FUN_143655660 body=408 status=ok
// SIG undefined FUN_143655660(void)

undefined8 FUN_143655660(longlong param_1,char *param_2,longlong param_3,longlong *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  byte *pbVar6;
  
  if (param_3 - (longlong)param_2 < 2) {
    return 0xffffffff;
  }
  if (*param_2 == '\0') {
    bVar1 = *(byte *)((ulonglong)(byte)param_2[1] + 0x90 + param_1);
    if (bVar1 == 0x14) {
      *param_4 = (longlong)(param_2 + 2);
      return 0x21;
    }
    if ((bVar1 - 0x16 & 0xfffffffd) == 0) {
      pbVar6 = (byte *)(param_2 + 2);
      lVar5 = param_3 - (longlong)pbVar6;
      do {
        if (lVar5 < 2) {
          return 0xffffffff;
        }
        bVar1 = *pbVar6;
        if (bVar1 == 0) {
          uVar4 = *(undefined1 *)((ulonglong)pbVar6[1] + 0x90 + param_1);
        }
        else if (bVar1 < 0xd8) {
LAB_143655726:
          uVar4 = 0x1d;
        }
        else if (bVar1 < 0xdc) {
          uVar4 = 7;
        }
        else if (bVar1 < 0xe0) {
          uVar4 = 8;
        }
        else {
          if ((bVar1 != 0xff) || (1 < (byte)(pbVar6[1] + 2))) goto LAB_143655726;
          uVar4 = 0;
        }
        switch(uVar4) {
        default:
switchD_14365574c_caseD_b:
          *param_4 = (longlong)pbVar6;
          return 0;
        case 0x16:
        case 0x18:
          pbVar6 = pbVar6 + 2;
          lVar5 = lVar5 + -2;
          break;
        case 0x1e:
          if (param_3 - (longlong)pbVar6 < 4) {
            return 0xffffffff;
          }
          if (pbVar6[2] == 0) {
            uVar2 = (uint)*(byte *)((ulonglong)pbVar6[3] + 0x90 + param_1);
          }
          else {
            uVar2 = FUN_14365c390(pbVar6[2],pbVar6[3]);
          }
          if ((uVar2 < 0x1f) && ((0x40200600U >> (uVar2 & 0x1f) & 1) != 0))
          goto switchD_14365574c_caseD_b;
        case 9:
        case 10:
        case 0x15:
          *param_4 = (longlong)pbVar6;
          return 0x10;
        }
      } while( true );
    }
    if (bVar1 == 0x1b) {
      uVar3 = FUN_1436554e0(param_1,param_2 + 2);
      return uVar3;
    }
  }
  *param_4 = (longlong)param_2;
  return 0;
}



// FUNCTION 143655820 FUN_143655820 body=753 status=ok
// SIG undefined FUN_143655820(void)

undefined8 FUN_143655820(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  lVar4 = param_3 - (longlong)param_2;
  if (lVar4 < 2) {
    return 0xffffffff;
  }
  bVar1 = *param_2;
  if (bVar1 == 0) {
    uVar3 = *(undefined1 *)((ulonglong)param_2[1] + 0x90 + param_1);
  }
  else if (bVar1 < 0xd8) {
LAB_14365589b:
    uVar3 = 0x1d;
  }
  else if (bVar1 < 0xdc) {
    uVar3 = 7;
  }
  else if (bVar1 < 0xe0) {
    uVar3 = 8;
  }
  else {
    if ((bVar1 != 0xff) || (1 < (byte)(param_2[1] + 2))) goto LAB_14365589b;
    uVar3 = 0;
  }
  switch(uVar3) {
  case 6:
    if (lVar4 < 3) {
      return 0xfffffffe;
    }
    break;
  case 7:
    if (lVar4 < 4) {
      return 0xfffffffe;
    }
    break;
  case 0x16:
  case 0x18:
switchD_1436558cd_caseD_16:
    param_2 = param_2 + 2;
    lVar4 = param_3 - (longlong)param_2;
    do {
      if (lVar4 < 2) {
        return 0xffffffff;
      }
      bVar1 = *param_2;
      if (bVar1 == 0) {
        uVar3 = *(undefined1 *)((ulonglong)param_2[1] + 0x90 + param_1);
      }
      else if (bVar1 < 0xd8) {
LAB_14365595b:
        uVar3 = 0x1d;
      }
      else if (bVar1 < 0xdc) {
        uVar3 = 7;
      }
      else if (bVar1 < 0xe0) {
        uVar3 = 8;
      }
      else {
        if ((bVar1 != 0xff) || (1 < (byte)(param_2[1] + 2))) goto LAB_14365595b;
        uVar3 = 0;
      }
      switch(uVar3) {
      case 5:
        if (param_3 - (longlong)param_2 < 2) {
          return 0xfffffffe;
        }
        goto switchD_1436558cd_caseD_5;
      case 6:
        if (param_3 - (longlong)param_2 < 3) {
          return 0xfffffffe;
        }
        goto switchD_1436558cd_caseD_5;
      case 7:
        if (param_3 - (longlong)param_2 < 4) {
          return 0xfffffffe;
        }
      default:
        goto switchD_1436558cd_caseD_5;
      case 9:
      case 10:
      case 0x15:
        param_2 = param_2 + 2;
        param_3 = param_3 - (longlong)param_2;
        if (param_3 < 2) {
          return 0xffffffff;
        }
        goto LAB_143655a50;
      case 0xb:
        goto switchD_143655981_caseD_b;
      case 0x1d:
        if ((*(uint *)(&DAT_145b5bfa0 +
                      ((ulonglong)(param_2[1] >> 5) + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar1] * 8)
                      * 4) >> (param_2[1] & 0x1f) & 1) == 0) goto switchD_1436558cd_caseD_5;
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        param_2 = param_2 + 2;
        lVar4 = lVar4 + -2;
      }
    } while( true );
  case 0x1d:
    if ((*(uint *)(&DAT_145b5bfa0 +
                  ((ulonglong)(param_2[1] >> 5) + (ulonglong)(byte)(&DAT_145b5c4a0)[bVar1] * 8) * 4)
         >> (param_2[1] & 0x1f) & 1) != 0) goto switchD_1436558cd_caseD_16;
  }
switchD_1436558cd_caseD_5:
  *param_4 = param_2;
  return 0;
LAB_143655a50:
  if (*param_2 == 0) {
    uVar2 = (uint)*(byte *)((ulonglong)param_2[1] + 0x90 + param_1);
  }
  else {
    uVar2 = FUN_14365c390(*param_2,param_2[1]);
  }
  if ((int)uVar2 < 9) goto switchD_1436558cd_caseD_5;
  if (10 < (int)uVar2) {
    if (uVar2 == 0xb) {
switchD_143655981_caseD_b:
      *param_4 = param_2 + 2;
      return 5;
    }
    if (uVar2 != 0x15) goto switchD_1436558cd_caseD_5;
  }
  param_2 = param_2 + 2;
  param_3 = param_3 + -2;
  if (param_3 < 2) {
    return 0xffffffff;
  }
  goto LAB_143655a50;
}



// FUNCTION 143655b90 FUN_143655b90 body=221 status=ok
// SIG undefined FUN_143655b90(void)

undefined8 FUN_143655b90(longlong param_1,byte *param_2,longlong param_3,longlong *param_4)

{
  byte bVar1;
  uint uVar2;
  
  if (param_3 - (longlong)param_2 < 2) {
    return 0xffffffff;
  }
  bVar1 = *param_2;
  if (bVar1 == 0) {
    uVar2 = (uint)*(byte *)((ulonglong)param_2[1] + 0x90 + param_1);
    goto LAB_143655be6;
  }
  if (0xd7 < bVar1) {
    if (bVar1 < 0xdc) {
      uVar2 = 7;
      goto LAB_143655be6;
    }
    if (bVar1 < 0xe0) {
      uVar2 = 8;
      goto LAB_143655be6;
    }
    if ((bVar1 == 0xff) && ((byte)(param_2[1] + 2) < 2)) {
      uVar2 = 0;
      goto LAB_143655be6;
    }
  }
  uVar2 = 0x1d;
LAB_143655be6:
  if (uVar2 - 0x18 < 2) {
    param_2 = param_2 + 2;
    param_3 = param_3 - (longlong)param_2;
    do {
      if (param_3 < 2) {
        return 0xffffffff;
      }
      bVar1 = *param_2;
      if (bVar1 == 0) {
        bVar1 = *(byte *)((ulonglong)param_2[1] + 0x90 + param_1);
        uVar2 = (uint)bVar1;
        if (bVar1 == 0x12) {
          *param_4 = (longlong)(param_2 + 2);
          return 10;
        }
      }
      else if (bVar1 < 0xd8) {
LAB_143655c4c:
        uVar2 = 0x1d;
      }
      else if (bVar1 < 0xdc) {
        uVar2 = 7;
      }
      else if (bVar1 < 0xe0) {
        uVar2 = 8;
      }
      else {
        if ((bVar1 != 0xff) || (1 < (byte)(param_2[1] + 2))) goto LAB_143655c4c;
        uVar2 = 0;
      }
      if (1 < uVar2 - 0x18) break;
      param_2 = param_2 + 2;
      param_3 = param_3 + -2;
    } while( true );
  }
  *param_4 = (longlong)param_2;
  return 0;
}



// FUNCTION 143655c70 FUN_143655c70 body=341 status=ok
// SIG undefined FUN_143655c70(void)

undefined8
FUN_143655c70(uint param_1,longlong param_2,byte *param_3,longlong param_4,undefined8 *param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = param_4 - (longlong)param_3;
  do {
    pbVar2 = param_3;
    if (lVar4 < 2) {
      return 0xffffffff;
    }
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      uVar3 = (uint)*(byte *)((ulonglong)pbVar2[1] + 0x90 + param_2);
    }
    else if (bVar1 < 0xd8) {
LAB_143655cd7:
      uVar3 = 0x1d;
    }
    else if (bVar1 < 0xdc) {
      uVar3 = 7;
    }
    else if (bVar1 < 0xe0) {
      uVar3 = 8;
    }
    else {
      if ((bVar1 != 0xff) || (1 < (byte)(pbVar2[1] + 2))) goto LAB_143655cd7;
      uVar3 = 0;
    }
    switch(uVar3) {
    case 0:
    case 1:
    case 8:
      *param_5 = pbVar2;
      return 0;
    case 5:
      if (lVar4 < 2) {
        return 0xfffffffe;
      }
    default:
      lVar4 = lVar4 + -2;
      param_3 = pbVar2 + 2;
      break;
    case 6:
      if (lVar4 < 3) {
        return 0xfffffffe;
      }
      lVar4 = lVar4 + -3;
      param_3 = pbVar2 + 3;
      break;
    case 7:
      if (lVar4 < 4) {
        return 0xfffffffe;
      }
      lVar4 = lVar4 + -4;
      param_3 = pbVar2 + 4;
      break;
    case 0xc:
    case 0xd:
      param_3 = pbVar2 + 2;
      lVar4 = lVar4 + -2;
      if (uVar3 == param_1) {
        if (param_4 - (longlong)param_3 < 2) {
          return 0xffffffe5;
        }
        *param_5 = param_3;
        if (*param_3 == 0) {
          uVar3 = (uint)*(byte *)((ulonglong)pbVar2[3] + 0x90 + param_2);
        }
        else {
          uVar3 = FUN_14365c390(*param_3,pbVar2[3]);
        }
        if ((uVar3 < 0x1f) && ((0x40300e00U >> (uVar3 & 0x1f) & 1) != 0)) {
          return 0x1b;
        }
        return 0;
      }
    }
  } while( true );
}



// FUNCTION 143655e00 FUN_143655e00 body=1298 status=ok
// SIG undefined FUN_143655e00(void)

undefined8 FUN_143655e00(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  
  lVar5 = param_3 - (longlong)param_2;
  if (lVar5 < 2) {
    return 0xffffffff;
  }
  bVar1 = *param_2;
  if (bVar1 == 0) {
    uVar4 = *(undefined1 *)((ulonglong)param_2[1] + 0x90 + param_1);
  }
  else if (bVar1 < 0xd8) {
LAB_143655e75:
    uVar4 = 0x1d;
  }
  else if (bVar1 < 0xdc) {
    uVar4 = 7;
  }
  else if (bVar1 < 0xe0) {
    uVar4 = 8;
  }
  else {
    if ((bVar1 != 0xff) || (1 < (byte)(param_2[1] + 2))) goto LAB_143655e75;
    uVar4 = 0;
  }
  switch(uVar4) {
  case 6:
    if (lVar5 < 3) {
      return 0xfffffffe;
    }
    break;
  case 7:
    if (lVar5 < 4) {
      return 0xfffffffe;
    }
    break;
  case 0xf:
    uVar3 = FUN_143656720(param_1,param_2 + 2);
    return uVar3;
  case 0x10:
    pbVar7 = param_2 + 2;
    if (param_3 - (longlong)pbVar7 < 2) {
      return 0xffffffff;
    }
    if (*pbVar7 == 0) {
      uVar2 = (uint)*(byte *)((ulonglong)param_2[3] + 0x90 + param_1);
    }
    else {
      uVar2 = FUN_14365c390(*pbVar7,param_2[3]);
    }
    if (uVar2 == 0x14) {
      pbVar7 = pbVar7 + 2;
      if (param_3 - (longlong)pbVar7 < 0xc) {
        return 0xffffffff;
      }
      lVar5 = 0;
      while ((*pbVar7 == 0 && (pbVar7[1] == (&DAT_145b5c6a8)[lVar5]))) {
        lVar5 = lVar5 + 1;
        pbVar7 = pbVar7 + 2;
        if (5 < lVar5) {
          *param_4 = pbVar7;
          return 8;
        }
      }
      *param_4 = pbVar7;
      return 0;
    }
    param_2 = pbVar7;
    if (uVar2 == 0x1b) {
      uVar3 = FUN_1436554e0(param_1,pbVar7 + 2);
      return uVar3;
    }
    break;
  case 0x11:
    uVar3 = FUN_143655820(param_1,param_2 + 2);
    return uVar3;
  case 0x16:
  case 0x18:
switchD_143655ea9_caseD_16:
    param_2 = param_2 + 2;
    bVar8 = false;
    lVar5 = param_3 - (longlong)param_2;
    if (lVar5 < 2) {
      return 0xffffffff;
    }
    do {
      bVar1 = *param_2;
      if (bVar1 == 0) {
        uVar4 = *(undefined1 *)((ulonglong)param_2[1] + 0x90 + param_1);
      }
      else if (bVar1 < 0xd8) {
LAB_143655f45:
        uVar4 = 0x1d;
      }
      else if (bVar1 < 0xdc) {
        uVar4 = 7;
      }
      else if (bVar1 < 0xe0) {
        uVar4 = 8;
      }
      else {
        if ((bVar1 != 0xff) || (1 < (byte)(param_2[1] + 2))) goto LAB_143655f45;
        uVar4 = 0;
      }
      pbVar7 = param_2;
      switch(uVar4) {
      case 5:
        goto switchD_143655f64_caseD_5;
      case 6:
        goto switchD_143655f64_caseD_6;
      case 7:
        goto switchD_143655f64_caseD_7;
      default:
        goto switchD_143655f64_caseD_8;
      case 9:
      case 10:
      case 0x15:
        pbVar7 = param_2 + 2;
        lVar5 = param_3 - (longlong)pbVar7;
        if (lVar5 < 2) {
          return 0xffffffff;
        }
        goto LAB_143656062;
      case 0xb:
        goto switchD_143655f64_caseD_b;
      case 0x11:
        goto switchD_143655f64_caseD_11;
      case 0x17:
        if (!bVar8) {
          pbVar7 = param_2 + 2;
          lVar5 = lVar5 + -2;
          bVar8 = true;
          if (lVar5 < 2) {
            return 0xffffffff;
          }
          bVar1 = *pbVar7;
          if (bVar1 == 0) {
            uVar6 = (ulonglong)param_2[3];
            uVar2 = (uint)*(byte *)(uVar6 + 0x90 + param_1);
          }
          else {
            uVar6 = (ulonglong)param_2[3];
            uVar2 = FUN_14365c390(bVar1,uVar6);
          }
          switch(uVar2) {
          case 5:
            goto switchD_143655f64_caseD_5;
          case 6:
            goto switchD_143655f64_caseD_6;
          case 7:
            goto switchD_143655f64_caseD_7;
          default:
            break;
          case 0x16:
          case 0x18:
            goto switchD_143655f64_caseD_16;
          case 0x1d:
            uVar2 = *(uint *)(&DAT_145b5bfa0 +
                             (((uVar6 & 0xff) >> 5) + (ulonglong)(byte)(&DAT_145b5c4a0)[bVar1] * 8)
                             * 4) >> ((uint)uVar6 & 0x1f);
            goto LAB_143656032;
          }
        }
        goto switchD_143655f64_caseD_8;
      case 0x1d:
        uVar2 = *(uint *)(&DAT_145b5bfa0 +
                         ((ulonglong)(param_2[1] >> 5) +
                         (ulonglong)(byte)(&DAT_145b5c5a0)[bVar1] * 8) * 4) >> (param_2[1] & 0x1f);
LAB_143656032:
        if ((uVar2 & 1) == 0) goto switchD_143655f64_caseD_8;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
switchD_143655f64_caseD_16:
        param_2 = pbVar7 + 2;
        lVar5 = lVar5 + -2;
        if (lVar5 < 2) {
          return 0xffffffff;
        }
      }
    } while( true );
  case 0x1d:
    if ((*(uint *)(&DAT_145b5bfa0 +
                  ((ulonglong)(param_2[1] >> 5) + (ulonglong)(byte)(&DAT_145b5c4a0)[bVar1] * 8) * 4)
         >> (param_2[1] & 0x1f) & 1) != 0) goto switchD_143655ea9_caseD_16;
  }
  *param_4 = param_2;
  return 0;
switchD_143655f64_caseD_11:
  pbVar7 = param_2 + 2;
  if (param_3 - (longlong)pbVar7 < 2) {
    return 0xffffffff;
  }
  if ((*pbVar7 == 0) && (param_2[3] == 0x3e)) {
    *param_4 = param_2 + 4;
    return 4;
  }
  goto switchD_143655f64_caseD_8;
switchD_1436560cb_caseD_9:
  pbVar7 = pbVar7 + 2;
  lVar5 = lVar5 + -2;
  if (lVar5 < 2) {
    return 0xffffffff;
  }
  goto LAB_143656062;
switchD_143655f64_caseD_7:
  bVar9 = SBORROW8(param_3 - (longlong)pbVar7,4);
  bVar8 = (param_3 - (longlong)pbVar7) + -4 < 0;
  goto LAB_14365612b;
switchD_143655f64_caseD_6:
  bVar9 = SBORROW8(param_3 - (longlong)pbVar7,3);
  bVar8 = (param_3 - (longlong)pbVar7) + -3 < 0;
  goto LAB_14365612b;
switchD_143655f64_caseD_b:
  *param_4 = pbVar7 + 2;
  return 2;
LAB_143656062:
  bVar1 = *pbVar7;
  if (bVar1 == 0) {
    uVar4 = *(undefined1 *)((ulonglong)pbVar7[1] + 0x90 + param_1);
  }
  else if (bVar1 < 0xd8) {
LAB_1436560a3:
    uVar4 = 0x1d;
  }
  else if (bVar1 < 0xdc) {
    uVar4 = 7;
  }
  else if (bVar1 < 0xe0) {
    uVar4 = 8;
  }
  else {
    if ((bVar1 != 0xff) || (1 < (byte)(pbVar7[1] + 2))) goto LAB_1436560a3;
    uVar4 = 0;
  }
  param_2 = pbVar7;
  switch(uVar4) {
  case 5:
    goto switchD_143655f64_caseD_5;
  case 6:
    goto switchD_143655f64_caseD_6;
  case 7:
    goto switchD_143655f64_caseD_7;
  default:
    goto switchD_143655f64_caseD_8;
  case 9:
  case 10:
  case 0x15:
    goto switchD_1436560cb_caseD_9;
  case 0xb:
    goto switchD_143655f64_caseD_b;
  case 0x11:
    goto switchD_143655f64_caseD_11;
  case 0x16:
  case 0x18:
    break;
  case 0x1d:
    if ((*(uint *)(&DAT_145b5bfa0 +
                  ((ulonglong)(pbVar7[1] >> 5) + (ulonglong)(byte)(&DAT_145b5c4a0)[*pbVar7] * 8) * 4
                  ) >> (pbVar7[1] & 0x1f) & 1) == 0) goto switchD_143655f64_caseD_8;
  }
  uVar3 = FUN_143654de0(param_1,pbVar7 + 2,param_3);
  return uVar3;
switchD_143655f64_caseD_5:
  bVar9 = SBORROW8(param_3 - (longlong)pbVar7,2);
  bVar8 = (param_3 - (longlong)pbVar7) + -2 < 0;
LAB_14365612b:
  if (bVar9 == bVar8) {
switchD_143655f64_caseD_8:
    *param_4 = pbVar7;
    uVar3 = 0;
  }
  else {
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}



// FUNCTION 143656430 FUN_143656430 body=629 status=ok
// SIG undefined FUN_143656430(void)

undefined8 FUN_143656430(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = param_3 - (longlong)param_2;
  if (lVar3 < 2) {
    return 0xffffffff;
  }
  bVar1 = *param_2;
  if (bVar1 == 0) {
    uVar2 = *(undefined1 *)((ulonglong)param_2[1] + 0x90 + param_1);
    goto LAB_1436564a0;
  }
  if (0xd7 < bVar1) {
    if (bVar1 < 0xdc) {
      uVar2 = 7;
      goto LAB_1436564a0;
    }
    if (bVar1 < 0xe0) {
      uVar2 = 8;
      goto LAB_1436564a0;
    }
    if ((bVar1 == 0xff) && ((byte)(param_2[1] + 2) < 2)) {
      uVar2 = 0;
      goto LAB_1436564a0;
    }
  }
  uVar2 = 0x1d;
LAB_1436564a0:
  switch(uVar2) {
  case 6:
    if (lVar3 < 3) {
      return 0xfffffffe;
    }
    break;
  case 7:
    if (lVar3 < 4) {
      return 0xfffffffe;
    }
    break;
  case 9:
  case 10:
  case 0x15:
  case 0x1e:
    *param_4 = param_2;
    return 0x16;
  case 0x1d:
    if ((*(uint *)(&DAT_145b5bfa0 +
                  ((ulonglong)(param_2[1] >> 5) + (ulonglong)(byte)(&DAT_145b5c4a0)[bVar1] * 8) * 4)
         >> (param_2[1] & 0x1f) & 1) == 0) {
switchD_14365658c_caseD_8:
      *param_4 = param_2;
      return 0;
    }
  case 0x16:
  case 0x18:
    param_2 = param_2 + 2;
    lVar3 = param_3 - (longlong)param_2;
    do {
      if (lVar3 < 2) {
        return 0xffffffff;
      }
      bVar1 = *param_2;
      if (bVar1 == 0) {
        uVar2 = *(undefined1 *)((ulonglong)param_2[1] + 0x90 + param_1);
      }
      else if (bVar1 < 0xd8) {
LAB_14365656a:
        uVar2 = 0x1d;
      }
      else if (bVar1 < 0xdc) {
        uVar2 = 7;
      }
      else if (bVar1 < 0xe0) {
        uVar2 = 8;
      }
      else {
        if ((bVar1 != 0xff) || (1 < (byte)(param_2[1] + 2))) goto LAB_14365656a;
        uVar2 = 0;
      }
      switch(uVar2) {
      case 5:
        if (param_3 - (longlong)param_2 < 2) {
          return 0xfffffffe;
        }
        goto switchD_14365658c_caseD_8;
      case 6:
        if (param_3 - (longlong)param_2 < 3) {
          return 0xfffffffe;
        }
        goto switchD_14365658c_caseD_8;
      case 7:
        if (param_3 - (longlong)param_2 < 4) {
          return 0xfffffffe;
        }
      default:
        goto switchD_14365658c_caseD_8;
      case 0x12:
        *param_4 = param_2 + 2;
        return 0x1c;
      case 0x1d:
        if ((*(uint *)(&DAT_145b5bfa0 +
                      ((ulonglong)(param_2[1] >> 5) + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar1] * 8)
                      * 4) >> (param_2[1] & 0x1f) & 1) == 0) goto switchD_14365658c_caseD_8;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        param_2 = param_2 + 2;
        lVar3 = lVar3 + -2;
      }
    } while( true );
  }
  *param_4 = param_2;
  return 0;
}



// FUNCTION 143656720 FUN_143656720 body=1038 status=ok
// SIG undefined FUN_143656720(void)

ulonglong FUN_143656720(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  
  lVar4 = param_3 - (longlong)param_2;
  if (lVar4 < 2) {
    return 0xffffffff;
  }
  bVar1 = *param_2;
  bVar9 = false;
  if (bVar1 == 0) {
    uVar3 = *(undefined1 *)((ulonglong)param_2[1] + 0x90 + param_1);
  }
  else if (bVar1 < 0xd8) {
LAB_14365679d:
    uVar3 = 0x1d;
  }
  else if (bVar1 < 0xdc) {
    uVar3 = 7;
  }
  else if (bVar1 < 0xe0) {
    uVar3 = 8;
  }
  else {
    if ((bVar1 != 0xff) || (1 < (byte)(param_2[1] + 2))) goto LAB_14365679d;
    uVar3 = 0;
  }
  switch(uVar3) {
  case 6:
    if (lVar4 < 3) {
      return 0xfffffffe;
    }
    break;
  case 7:
    if (lVar4 < 4) {
      return 0xfffffffe;
    }
    break;
  case 0x16:
  case 0x18:
switchD_1436567d1_caseD_16:
    pbVar7 = param_2 + 2;
    lVar4 = param_3 - (longlong)pbVar7;
    pbVar5 = pbVar7;
    if (lVar4 < 2) {
      return 0xffffffff;
    }
LAB_143656826:
    bVar1 = *pbVar5;
    if (bVar1 == 0) {
      uVar3 = *(undefined1 *)((ulonglong)pbVar5[1] + 0x90 + param_1);
    }
    else if (bVar1 < 0xd8) {
LAB_14365686f:
      uVar3 = 0x1d;
    }
    else if (bVar1 < 0xdc) {
      uVar3 = 7;
    }
    else if (bVar1 < 0xe0) {
      uVar3 = 8;
    }
    else {
      if ((bVar1 != 0xff) || (1 < (byte)(pbVar5[1] + 2))) goto LAB_14365686f;
      uVar3 = 0;
    }
    pbVar6 = pbVar5;
    switch(uVar3) {
    case 5:
      bVar10 = SBORROW8(param_3 - (longlong)pbVar5,2);
      bVar9 = (param_3 - (longlong)pbVar5) + -2 < 0;
      break;
    case 6:
      bVar10 = SBORROW8(param_3 - (longlong)pbVar5,3);
      bVar9 = (param_3 - (longlong)pbVar5) + -3 < 0;
      break;
    case 7:
      bVar10 = SBORROW8(param_3 - (longlong)pbVar5,4);
      bVar9 = (param_3 - (longlong)pbVar5) + -4 < 0;
      break;
    default:
      goto switchD_143656897_caseD_8;
    case 9:
    case 10:
    case 0x15:
      uVar8 = 0xb;
      if (((longlong)pbVar5 - (longlong)param_2 == 6) && (*param_2 == 0)) {
        if (param_2[1] == 0x58) {
          bVar9 = true;
        }
        else if (param_2[1] != 0x78) goto LAB_14365698c;
        if (*pbVar7 == 0) {
          if (param_2[3] == 0x4d) {
            bVar9 = true;
          }
          else if (param_2[3] != 0x6d) goto LAB_14365698c;
          if (param_2[4] == 0) {
            if (param_2[5] == 0x4c) goto switchD_143656897_caseD_8;
            if (param_2[5] == 0x6c) {
              if (bVar9) goto switchD_143656897_caseD_8;
              uVar8 = 0xc;
            }
          }
        }
      }
LAB_14365698c:
      pbVar6 = pbVar5 + 2;
      param_3 = param_3 - (longlong)pbVar6;
      if (param_3 < 2) {
        return 0xffffffff;
      }
      goto LAB_1436569a0;
    case 0xf:
      uVar8 = 0xb;
      if (((longlong)pbVar5 - (longlong)param_2 == 6) && (*param_2 == 0)) {
        if (param_2[1] == 0x58) {
          bVar9 = true;
        }
        else if (param_2[1] != 0x78) goto LAB_143656aa6;
        if (*pbVar7 == 0) {
          if (param_2[3] == 0x4d) {
            bVar9 = true;
          }
          else if (param_2[3] != 0x6d) goto LAB_143656aa6;
          if (param_2[4] == 0) {
            if (param_2[5] == 0x4c) goto switchD_143656897_caseD_8;
            if (param_2[5] == 0x6c) {
              if (bVar9) goto switchD_143656897_caseD_8;
              uVar8 = 0xc;
            }
          }
        }
      }
LAB_143656aa6:
      pbVar6 = pbVar5 + 2;
      if (param_3 - (longlong)pbVar6 < 2) {
        return 0xffffffff;
      }
      if ((*pbVar6 != 0) || (pbVar5[3] != 0x3e)) goto switchD_143656897_caseD_8;
      goto LAB_143656ac4;
    case 0x16:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
      goto switchD_143656897_caseD_16;
    case 0x1d:
      if ((*(uint *)(&DAT_145b5bfa0 +
                    ((ulonglong)(pbVar5[1] >> 5) + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar1] * 8) * 4
                    ) >> (pbVar5[1] & 0x1f) & 1) != 0) goto switchD_143656897_caseD_16;
      goto switchD_143656897_caseD_8;
    }
    if (bVar10 != bVar9) {
      return 0xfffffffe;
    }
    goto switchD_143656897_caseD_8;
  case 0x1d:
    if ((*(uint *)(&DAT_145b5bfa0 +
                  ((ulonglong)(param_2[1] >> 5) + (ulonglong)(byte)(&DAT_145b5c4a0)[bVar1] * 8) * 4)
         >> (param_2[1] & 0x1f) & 1) != 0) goto switchD_1436567d1_caseD_16;
  }
  *param_4 = param_2;
  return 0;
switchD_143656897_caseD_16:
  pbVar5 = pbVar5 + 2;
  lVar4 = lVar4 + -2;
  if (lVar4 < 2) {
    return 0xffffffff;
  }
  goto LAB_143656826;
LAB_1436569a0:
  if (*pbVar6 == 0) {
    uVar2 = (uint)*(byte *)((ulonglong)pbVar6[1] + 0x90 + param_1);
    pbVar7 = pbVar6;
  }
  else {
    uVar2 = FUN_14365c390(*pbVar6,pbVar6[1]);
    pbVar7 = pbVar6;
  }
  pbVar6 = pbVar7;
  switch(uVar2) {
  case 0:
  case 1:
  case 8:
switchD_143656897_caseD_8:
    *param_4 = pbVar6;
    return 0;
  case 5:
    if (param_3 < 2) {
      return 0xfffffffe;
    }
  default:
    pbVar6 = pbVar7 + 2;
    param_3 = param_3 + -2;
    break;
  case 6:
    if (param_3 < 3) {
      return 0xfffffffe;
    }
    pbVar6 = pbVar7 + 3;
    param_3 = param_3 + -3;
    break;
  case 7:
    if (param_3 < 4) {
      return 0xfffffffe;
    }
    pbVar6 = pbVar7 + 4;
    param_3 = param_3 + -4;
    break;
  case 0xf:
    pbVar6 = pbVar7 + 2;
    param_3 = param_3 + -2;
    if (param_3 < 2) {
      return 0xffffffff;
    }
    if ((*pbVar6 == 0) && (pbVar7[3] == 0x3e)) {
LAB_143656ac4:
      *param_4 = pbVar6 + 2;
      return uVar8 & 0xffffffff;
    }
  }
  if (param_3 < 2) {
    return 0xffffffff;
  }
  goto LAB_1436569a0;
}



// FUNCTION 143656be0 FUN_143656be0 body=590 status=ok
// SIG undefined FUN_143656be0(void)

undefined8 FUN_143656be0(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = param_3 - (longlong)param_2;
  if (lVar3 < 2) {
    return 0xffffffff;
  }
  bVar1 = *param_2;
  if (bVar1 == 0) {
    uVar2 = *(undefined1 *)((ulonglong)param_2[1] + 0x90 + param_1);
    goto LAB_143656c50;
  }
  if (0xd7 < bVar1) {
    if (bVar1 < 0xdc) {
      uVar2 = 7;
      goto LAB_143656c50;
    }
    if (bVar1 < 0xe0) {
      uVar2 = 8;
      goto LAB_143656c50;
    }
    if ((bVar1 == 0xff) && ((byte)(param_2[1] + 2) < 2)) {
      uVar2 = 0;
      goto LAB_143656c50;
    }
  }
  uVar2 = 0x1d;
LAB_143656c50:
  switch(uVar2) {
  case 6:
    if (lVar3 < 3) {
      return 0xfffffffe;
    }
    break;
  case 7:
    if (lVar3 < 4) {
      return 0xfffffffe;
    }
    break;
  case 0x1d:
    if ((*(uint *)(&DAT_145b5bfa0 +
                  ((ulonglong)(param_2[1] >> 5) + (ulonglong)(byte)(&DAT_145b5c4a0)[bVar1] * 8) * 4)
         >> (param_2[1] & 0x1f) & 1) == 0) {
switchD_143656d3c_caseD_8:
      *param_4 = param_2;
      return 0;
    }
  case 0x16:
  case 0x18:
    param_2 = param_2 + 2;
    lVar3 = param_3 - (longlong)param_2;
    do {
      if (lVar3 < 2) {
        return 0xffffffec;
      }
      bVar1 = *param_2;
      if (bVar1 == 0) {
        uVar2 = *(undefined1 *)((ulonglong)param_2[1] + 0x90 + param_1);
      }
      else if (bVar1 < 0xd8) {
LAB_143656d1a:
        uVar2 = 0x1d;
      }
      else if (bVar1 < 0xdc) {
        uVar2 = 7;
      }
      else if (bVar1 < 0xe0) {
        uVar2 = 8;
      }
      else {
        if ((bVar1 != 0xff) || (1 < (byte)(param_2[1] + 2))) goto LAB_143656d1a;
        uVar2 = 0;
      }
      switch(uVar2) {
      case 5:
        if (param_3 - (longlong)param_2 < 2) {
          return 0xfffffffe;
        }
        goto switchD_143656d3c_caseD_8;
      case 6:
        if (param_3 - (longlong)param_2 < 3) {
          return 0xfffffffe;
        }
        goto switchD_143656d3c_caseD_8;
      case 7:
        if (param_3 - (longlong)param_2 < 4) {
          return 0xfffffffe;
        }
      default:
        goto switchD_143656d3c_caseD_8;
      case 9:
      case 10:
      case 0xb:
      case 0x15:
      case 0x1e:
      case 0x20:
      case 0x24:
        *param_4 = param_2;
        return 0x14;
      case 0x1d:
        if ((*(uint *)(&DAT_145b5bfa0 +
                      ((ulonglong)(param_2[1] >> 5) + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar1] * 8)
                      * 4) >> (param_2[1] & 0x1f) & 1) == 0) goto switchD_143656d3c_caseD_8;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        param_2 = param_2 + 2;
        lVar3 = lVar3 + -2;
      }
    } while( true );
  }
  *param_4 = param_2;
  return 0;
}



// FUNCTION 143656ea0 FUN_143656ea0 body=886 status=ok
// SIG undefined FUN_143656ea0(void)

undefined8 FUN_143656ea0(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  byte *pbVar5;
  longlong lVar6;
  
  lVar6 = param_3 - (longlong)param_2;
  if (lVar6 < 2) {
    return 0xffffffff;
  }
  bVar2 = *param_2;
  if (bVar2 == 0) {
    uVar4 = *(undefined1 *)((ulonglong)param_2[1] + 0x90 + param_1);
    goto LAB_143656f18;
  }
  if (0xd7 < bVar2) {
    if (bVar2 < 0xdc) {
      uVar4 = 7;
      goto LAB_143656f18;
    }
    if (bVar2 < 0xe0) {
      uVar4 = 8;
      goto LAB_143656f18;
    }
    if ((bVar2 == 0xff) && ((byte)(param_2[1] + 2) < 2)) {
      uVar4 = 0;
      goto LAB_143656f18;
    }
  }
  uVar4 = 0x1d;
LAB_143656f18:
  switch(uVar4) {
  case 6:
    if (lVar6 < 3) {
      return 0xfffffffe;
    }
    break;
  case 7:
    if (lVar6 < 4) {
      return 0xfffffffe;
    }
    break;
  case 0x13:
    pbVar5 = param_2 + 2;
    if (param_3 - (longlong)pbVar5 < 2) {
      return 0xffffffff;
    }
    if (*pbVar5 == 0) {
      if (param_2[3] == 0x78) {
        uVar3 = FUN_143655b90(param_1,param_2 + 4);
        return uVar3;
      }
      if (*(char *)((ulonglong)param_2[3] + 0x90 + param_1) == '\x19') {
        param_2 = param_2 + 4;
        param_3 = param_3 - (longlong)param_2;
        while( true ) {
          if (param_3 < 2) {
            return 0xffffffff;
          }
          if (*param_2 != 0) break;
          cVar1 = *(char *)((ulonglong)param_2[1] + 0x90 + param_1);
          if (cVar1 == '\x12') {
            *param_4 = param_2 + 2;
            return 10;
          }
          if (cVar1 != '\x19') break;
          param_2 = param_2 + 2;
          param_3 = param_3 + -2;
        }
        *param_4 = param_2;
        return 0;
      }
    }
    *param_4 = pbVar5;
    return 0;
  case 0x1d:
    if ((*(uint *)(&DAT_145b5bfa0 +
                  ((ulonglong)(param_2[1] >> 5) + (ulonglong)(byte)(&DAT_145b5c4a0)[bVar2] * 8) * 4)
         >> (param_2[1] & 0x1f) & 1) == 0) {
switchD_14365700f_caseD_8:
      *param_4 = param_2;
      return 0;
    }
  case 0x16:
  case 0x18:
    param_2 = param_2 + 2;
    lVar6 = param_3 - (longlong)param_2;
    do {
      if (lVar6 < 2) {
        return 0xffffffff;
      }
      bVar2 = *param_2;
      if (bVar2 == 0) {
        uVar4 = *(undefined1 *)((ulonglong)param_2[1] + 0x90 + param_1);
      }
      else if (bVar2 < 0xd8) {
LAB_143656fe9:
        uVar4 = 0x1d;
      }
      else if (bVar2 < 0xdc) {
        uVar4 = 7;
      }
      else if (bVar2 < 0xe0) {
        uVar4 = 8;
      }
      else {
        if ((bVar2 != 0xff) || (1 < (byte)(param_2[1] + 2))) goto LAB_143656fe9;
        uVar4 = 0;
      }
      switch(uVar4) {
      case 5:
        if (param_3 - (longlong)param_2 < 2) {
          return 0xfffffffe;
        }
        goto switchD_14365700f_caseD_8;
      case 6:
        if (param_3 - (longlong)param_2 < 3) {
          return 0xfffffffe;
        }
        goto switchD_14365700f_caseD_8;
      case 7:
        if (param_3 - (longlong)param_2 < 4) {
          return 0xfffffffe;
        }
      default:
        goto switchD_14365700f_caseD_8;
      case 0x12:
        *param_4 = param_2 + 2;
        return 9;
      case 0x1d:
        if ((*(uint *)(&DAT_145b5bfa0 +
                      ((ulonglong)(param_2[1] >> 5) + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar2] * 8)
                      * 4) >> (param_2[1] & 0x1f) & 1) == 0) goto switchD_14365700f_caseD_8;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        param_2 = param_2 + 2;
        lVar6 = lVar6 + -2;
      }
    } while( true );
  }
  *param_4 = param_2;
  return 0;
}



// FUNCTION 1436571d0 FUN_1436571d0 body=784 status=ok
// SIG undefined FUN_1436571d0(void)

undefined8
FUN_1436571d0(code *param_1,int param_2,longlong param_3,longlong param_4,longlong param_5,
             longlong *param_6,longlong *param_7,longlong *param_8,longlong *param_9,
             undefined8 *param_10,undefined4 *param_11)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res18;
  longlong local_res20;
  undefined8 local_48;
  longlong local_40;
  
  local_40 = 0;
  local_res18 = 0;
  local_res20 = *(int *)(param_3 + 0x88) * 5 + param_4;
  param_5 = param_5 - *(int *)(param_3 + 0x88) * 2;
  local_48 = 0;
  iVar2 = FUN_14365c000(param_3,local_res20,param_5,&local_res18,&local_48,&local_40,&local_res20);
  uVar3 = local_48;
  lVar5 = local_res18;
  if ((iVar2 == 0) || (local_res18 == 0)) {
    *param_6 = local_res20;
    return 0;
  }
  iVar2 = (**(code **)(param_3 + 0x38))(param_3,local_res18,local_48,"version");
  if (iVar2 == 0) {
    if (param_2 == 0) goto LAB_14365728b;
  }
  else {
    if (param_7 != (longlong *)0x0) {
      *param_7 = local_40;
    }
    if (param_8 != (longlong *)0x0) {
      *param_8 = local_res20;
    }
    iVar2 = FUN_14365c000(param_3,local_res20,param_5,&local_res18,&local_48,&local_40,&local_res20)
    ;
    if (iVar2 == 0) goto LAB_14365730b;
    lVar5 = local_res18;
    uVar3 = local_48;
    if (local_res18 == 0) {
      if (param_2 == 0) {
        return 1;
      }
      goto LAB_14365730b;
    }
  }
  iVar2 = (**(code **)(param_3 + 0x38))(param_3,lVar5,uVar3,"encoding");
  lVar6 = local_40;
  if (iVar2 != 0) {
    iVar2 = FUN_14365c340(param_3,local_40,param_5);
    lVar1 = local_res20;
    if ((0x19 < iVar2 - 0x61U) && (lVar5 = lVar6, 0x19 < iVar2 - 0x41U)) goto LAB_14365728b;
    if (param_9 != (longlong *)0x0) {
      *param_9 = lVar6;
    }
    if (param_10 != (undefined8 *)0x0) {
      uVar3 = (*param_1)(param_3,lVar6,local_res20 - *(int *)(param_3 + 0x88));
      *param_10 = uVar3;
    }
    iVar2 = FUN_14365c000(param_3,lVar1,param_5,&local_res18,&local_48,&local_40,&local_res20);
    if (iVar2 == 0) {
LAB_14365730b:
      *param_6 = local_res20;
      return 0;
    }
    lVar5 = local_res18;
    uVar3 = local_48;
    if (local_res18 == 0) {
      return 1;
    }
  }
  iVar2 = (**(code **)(param_3 + 0x38))(param_3,lVar5,uVar3,"standalone");
  lVar1 = local_40;
  lVar6 = local_res20;
  if ((iVar2 != 0) && (param_2 == 0)) {
    iVar2 = (**(code **)(param_3 + 0x38))
                      (param_3,local_40,local_res20 - *(int *)(param_3 + 0x88),&DAT_145b5a854);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(param_3 + 0x38))
                        (param_3,lVar1,lVar6 - *(int *)(param_3 + 0x88),&DAT_145b5a858);
      if (iVar2 == 0) {
        *param_6 = lVar1;
        return 0;
      }
      if (param_11 != (undefined4 *)0x0) {
        *param_11 = 0;
      }
    }
    else if (param_11 != (undefined4 *)0x0) {
      *param_11 = 1;
    }
    while ((uVar4 = FUN_14365c340(param_3,lVar6,param_5), (uint)uVar4 < 0x21 &&
           ((0x100002600U >> (uVar4 & 0x3f) & 1) != 0))) {
      lVar6 = lVar6 + *(int *)(param_3 + 0x88);
    }
    lVar5 = lVar6;
    if (lVar6 == param_5) {
      return 1;
    }
  }
LAB_14365728b:
  *param_6 = lVar5;
  return 0;
}



// FUNCTION 1436574e0 FUN_1436574e0 body=333 status=ok
// SIG undefined FUN_1436574e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * FUN_1436574e0(undefined *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  ulonglong uVar4;
  char *pcVar5;
  undefined **ppuVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  longlong local_b8;
  char *local_b0;
  char local_a8 [127];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b0 = local_a8;
  local_c8 = &local_29;
  local_b8 = param_2;
  (**(code **)(param_1 + 0x78))(param_1,&local_b8,param_3,&local_b0);
  if (local_b8 == param_3) {
    uVar8 = 0;
    *local_b0 = '\0';
    uVar4 = uVar8;
    do {
      cVar2 = local_a8[uVar4];
      cVar3 = (&DAT_145b5a884)[uVar4];
      uVar4 = uVar4 + 1;
      if ((byte)(cVar2 + 0x9fU) < 0x1a) {
        cVar2 = cVar2 + -0x20;
      }
      if ((byte)(cVar3 + 0x9fU) < 0x1a) {
        cVar3 = cVar3 + -0x20;
      }
      if (cVar2 != cVar3) goto LAB_14365759d;
    } while (cVar2 != '\0');
    if (*(int *)(param_1 + 0x88) != 2) {
LAB_14365759d:
      ppuVar6 = &PTR_DAT_145b5c6b0;
      do {
        pcVar5 = *ppuVar6;
        lVar1 = -(longlong)pcVar5;
        while( true ) {
          cVar2 = pcVar5[(longlong)(local_a8 + lVar1)];
          cVar3 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          if ((byte)(cVar2 + 0x9fU) < 0x1a) {
            cVar2 = cVar2 + -0x20;
          }
          if ((byte)(cVar3 + 0x9fU) < 0x1a) {
            cVar3 = cVar3 + -0x20;
          }
          iVar7 = (int)uVar8;
          if (cVar2 != cVar3) break;
          if (cVar2 == '\0') {
            if (iVar7 != -1) {
              return (&PTR_DAT_145b5a8b0)[iVar7];
            }
            goto LAB_143657609;
          }
        }
        uVar8 = (ulonglong)(iVar7 + 1);
        ppuVar6 = ppuVar6 + 1;
      } while ((longlong)ppuVar6 < 0x145b5c6e0);
LAB_143657609:
      param_1 = (undefined *)0x0;
    }
  }
  else {
    param_1 = (undefined *)0x0;
  }
  return param_1;
}



// FUNCTION 143657630 FUN_143657630 body=333 status=ok
// SIG undefined FUN_143657630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * FUN_143657630(undefined *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  ulonglong uVar4;
  char *pcVar5;
  undefined **ppuVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  longlong local_b8;
  char *local_b0;
  char local_a8 [127];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b0 = local_a8;
  local_c8 = &local_29;
  local_b8 = param_2;
  (**(code **)(param_1 + 0x78))(param_1,&local_b8,param_3,&local_b0);
  if (local_b8 == param_3) {
    uVar8 = 0;
    *local_b0 = '\0';
    uVar4 = uVar8;
    do {
      cVar2 = local_a8[uVar4];
      cVar3 = (&DAT_145b5a884)[uVar4];
      uVar4 = uVar4 + 1;
      if ((byte)(cVar2 + 0x9fU) < 0x1a) {
        cVar2 = cVar2 + -0x20;
      }
      if ((byte)(cVar3 + 0x9fU) < 0x1a) {
        cVar3 = cVar3 + -0x20;
      }
      if (cVar2 != cVar3) goto LAB_1436576ed;
    } while (cVar2 != '\0');
    if (*(int *)(param_1 + 0x88) != 2) {
LAB_1436576ed:
      ppuVar6 = &PTR_DAT_145b5c6b0;
      do {
        pcVar5 = *ppuVar6;
        lVar1 = -(longlong)pcVar5;
        while( true ) {
          cVar2 = pcVar5[(longlong)(local_a8 + lVar1)];
          cVar3 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          if ((byte)(cVar2 + 0x9fU) < 0x1a) {
            cVar2 = cVar2 + -0x20;
          }
          if ((byte)(cVar3 + 0x9fU) < 0x1a) {
            cVar3 = cVar3 + -0x20;
          }
          iVar7 = (int)uVar8;
          if (cVar2 != cVar3) break;
          if (cVar2 == '\0') {
            if (iVar7 != -1) {
              return (&PTR_PTR_145b5a8e8)[iVar7];
            }
            goto LAB_143657759;
          }
        }
        uVar8 = (ulonglong)(iVar7 + 1);
        ppuVar6 = ppuVar6 + 1;
      } while ((longlong)ppuVar6 < 0x145b5c6e0);
LAB_143657759:
      param_1 = (undefined *)0x0;
    }
  }
  else {
    param_1 = (undefined *)0x0;
  }
  return param_1;
}



// FUNCTION 143657780 FUN_143657780 body=138 status=ok
// SIG undefined FUN_143657780(void)

int FUN_143657780(longlong param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  undefined **ppuVar5;
  int iVar6;
  
  if (param_1 == 0) {
    return 6;
  }
  ppuVar5 = &PTR_DAT_145b5c6b0;
  iVar6 = 0;
  do {
    pcVar3 = *ppuVar5;
    lVar4 = param_1 - (longlong)pcVar3;
    while( true ) {
      cVar1 = pcVar3[lVar4];
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        cVar1 = cVar1 + -0x20;
      }
      if ((byte)(cVar2 + 0x9fU) < 0x1a) {
        cVar2 = cVar2 + -0x20;
      }
      if (cVar1 != cVar2) break;
      if (cVar1 == '\0') {
        return iVar6;
      }
    }
    iVar6 = iVar6 + 1;
    ppuVar5 = ppuVar5 + 1;
    if (0x145b5c6df < (longlong)ppuVar5) {
      return -1;
    }
  } while( true );
}



// FUNCTION 143657810 FUN_143657810 body=420 status=ok
// SIG undefined FUN_143657810(void)

undefined8 FUN_143657810(longlong param_1,byte *param_2,byte *param_3,longlong *param_4)

{
  byte bVar1;
  longlong *plVar2;
  undefined *puVar3;
  short sVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  plVar2 = *(longlong **)(param_1 + 0x90);
  if (param_2 + 1 == param_3) {
    if (((((byte)(*(char *)(param_1 + 0x8d) - 3U) < 3) || (bVar1 = *param_2, bVar1 == 0)) ||
        (bVar1 == 0x3c)) ||
       (((bVar1 == 0xef || ((byte)(bVar1 + 2) < 2)) && (*(char *)(param_1 + 0x8d) != '\0')))) {
      return 0xffffffff;
    }
  }
  else {
    sVar4 = CONCAT11(*param_2,param_2[1]);
    if (sVar4 == 0x3c00) {
      if (1 < (byte)(*(char *)(param_1 + 0x8d) - 3U)) {
        *plVar2 = (longlong)&PTR_FUN_145b5ab00;
        if (param_3 <= param_2) {
          return 0xfffffffc;
        }
        if (((longlong)param_3 - (longlong)param_2 & 1U) != 0) {
          uVar5 = (longlong)param_3 - (longlong)param_2 & 0xfffffffffffffffe;
          if (uVar5 == 0) {
            return 0xffffffff;
          }
          param_3 = param_2 + uVar5;
        }
        bVar1 = param_2[1];
        if (bVar1 == 0) {
          uVar7 = (uint)(byte)(&UNK_145b5ab90)[*param_2];
          if ((byte)(&UNK_145b5ab90)[*param_2] < 0xb) {
LAB_143653b3d:
                    /* WARNING: Could not recover jumptable at 0x000143653b4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar6 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                              (uint)(&DAT_143653d40)[(int)uVar7]))
                              (IMAGE_DOS_HEADER_140000000.e_magic +
                               (uint)(&DAT_143653d40)[(int)uVar7]);
            return uVar6;
          }
        }
        else if (0xd7 < bVar1) {
          if (bVar1 < 0xdc) {
            uVar7 = 7;
          }
          else if (bVar1 < 0xe0) {
            uVar7 = 8;
          }
          else {
            if ((bVar1 != 0xff) || (1 < (byte)(*param_2 + 2))) goto LAB_143653ad5;
            uVar7 = 0;
          }
          goto LAB_143653b3d;
        }
LAB_143653ad5:
        param_2 = param_2 + 2;
        lVar8 = (longlong)param_3 - (longlong)param_2;
        do {
          if (lVar8 < 2) {
            *param_4 = (longlong)param_2;
            return 6;
          }
          bVar1 = param_2[1];
          if (bVar1 == 0) {
            uVar7 = (uint)(byte)(&UNK_145b5ab90)[*param_2];
            if ((byte)(&UNK_145b5ab90)[*param_2] < 0xb) goto LAB_143653ca4;
          }
          else if (0xd7 < bVar1) {
            if (bVar1 < 0xdc) {
              uVar7 = 7;
LAB_143653ca4:
                    /* WARNING: Could not recover jumptable at 0x000143653cb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar6 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                                (uint)(&DAT_143653d6c)[(int)uVar7]))
                                (IMAGE_DOS_HEADER_140000000.e_magic +
                                 (uint)(&DAT_143653d6c)[(int)uVar7]);
              return uVar6;
            }
            if (bVar1 < 0xe0) {
              uVar7 = 8;
              goto LAB_143653ca4;
            }
            if ((bVar1 == 0xff) && ((byte)(*param_2 + 2) < 2)) {
              uVar7 = 0;
              goto LAB_143653ca4;
            }
          }
          param_2 = param_2 + 2;
          lVar8 = lVar8 + -2;
        } while( true );
      }
    }
    else if (sVar4 == -0x1045) {
      if ((*(char *)(param_1 + 0x8d) != '\0') && (2 < (int)*(char *)(param_1 + 0x8d) - 3U)) {
        if (param_2 + 2 == param_3) {
          return 0xffffffff;
        }
        if (param_2[2] == 0xbf) {
          *param_4 = (longlong)(param_2 + 3);
          *plVar2 = (longlong)&PTR_FUN_145b5b280;
          return 0xe;
        }
      }
    }
    else if (sVar4 == -0x101) {
      if (*(char *)(param_1 + 0x8d) != '\0') {
        *param_4 = (longlong)(param_2 + 2);
        *plVar2 = (longlong)&PTR_FUN_145b5a660;
        return 0xe;
      }
    }
    else if (sVar4 == -2) {
      if (*(char *)(param_1 + 0x8d) != '\0') {
        *param_4 = (longlong)(param_2 + 2);
        *plVar2 = (longlong)&PTR_FUN_145b5ab00;
        return 0xe;
      }
    }
    else if ((*param_2 == 0) && (*(char *)(param_1 + 0x8d) != '\x05')) {
      *plVar2 = (longlong)&PTR_FUN_145b5a660;
      if (param_3 <= param_2) {
        return 0xfffffffc;
      }
      if (((longlong)param_3 - (longlong)param_2 & 1U) != 0) {
        uVar5 = (longlong)param_3 - (longlong)param_2 & 0xfffffffffffffffe;
        if (uVar5 == 0) {
          return 0xffffffff;
        }
        param_3 = param_2 + uVar5;
      }
      bVar1 = *param_2;
      if (bVar1 == 0) {
        uVar7 = (uint)(byte)(&UNK_145b5a6f0)[param_2[1]];
        if ((byte)(&UNK_145b5a6f0)[param_2[1]] < 0xb) {
LAB_14364fe9e:
                    /* WARNING: Could not recover jumptable at 0x00014364feab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_14365009c)[(int)uVar7]
                            ))(IMAGE_DOS_HEADER_140000000.e_magic +
                               (uint)(&DAT_14365009c)[(int)uVar7]);
          return uVar6;
        }
      }
      else if (0xd7 < bVar1) {
        if (bVar1 < 0xdc) {
          uVar7 = 7;
        }
        else if (bVar1 < 0xe0) {
          uVar7 = 8;
        }
        else {
          if ((bVar1 != 0xff) || (1 < (byte)(param_2[1] + 2))) goto LAB_14364fe35;
          uVar7 = 0;
        }
        goto LAB_14364fe9e;
      }
LAB_14364fe35:
      param_2 = param_2 + 2;
      lVar8 = (longlong)param_3 - (longlong)param_2;
      do {
        if (lVar8 < 2) {
          *param_4 = (longlong)param_2;
          return 6;
        }
        bVar1 = *param_2;
        if (bVar1 == 0) {
          uVar7 = (uint)(byte)(&UNK_145b5a6f0)[param_2[1]];
          if ((byte)(&UNK_145b5a6f0)[param_2[1]] < 0xb) goto LAB_143650007;
        }
        else if (0xd7 < bVar1) {
          if (bVar1 < 0xdc) {
            uVar7 = 7;
LAB_143650007:
                    /* WARNING: Could not recover jumptable at 0x000143650014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar6 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                              (uint)(&DAT_1436500c8)[(int)uVar7]))
                              (IMAGE_DOS_HEADER_140000000.e_magic +
                               (uint)(&DAT_1436500c8)[(int)uVar7]);
            return uVar6;
          }
          if (bVar1 < 0xe0) {
            uVar7 = 8;
            goto LAB_143650007;
          }
          if ((bVar1 == 0xff) && ((byte)(param_2[1] + 2) < 2)) {
            uVar7 = 0;
            goto LAB_143650007;
          }
        }
        param_2 = param_2 + 2;
        lVar8 = lVar8 + -2;
      } while( true );
    }
  }
  puVar3 = (&PTR_DAT_145b5a8b0)[*(char *)(param_1 + 0x8d)];
  *plVar2 = (longlong)puVar3;
                    /* WARNING: Could not emulate address calculation at 0x0001436579b0 */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(puVar3 + 8))(puVar3,param_2,param_3,param_4);
  return uVar6;
}



// FUNCTION 1436579c0 FUN_1436579c0 body=420 status=ok
// SIG undefined FUN_1436579c0(void)

undefined8 FUN_1436579c0(longlong param_1,byte *param_2,byte *param_3,longlong *param_4)

{
  byte bVar1;
  longlong *plVar2;
  undefined *puVar3;
  short sVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  plVar2 = *(longlong **)(param_1 + 0x90);
  if (param_2 + 1 == param_3) {
    if (((((byte)(*(char *)(param_1 + 0x8d) - 3U) < 3) || (bVar1 = *param_2, bVar1 == 0)) ||
        (bVar1 == 0x3c)) ||
       (((bVar1 == 0xef || ((byte)(bVar1 + 2) < 2)) && (*(char *)(param_1 + 0x8d) != '\0')))) {
      return 0xffffffff;
    }
  }
  else {
    sVar4 = CONCAT11(*param_2,param_2[1]);
    if (sVar4 == 0x3c00) {
      if (1 < (byte)(*(char *)(param_1 + 0x8d) - 3U)) {
        *plVar2 = (longlong)&PTR_FUN_145b5a920;
        if (param_3 <= param_2) {
          return 0xfffffffc;
        }
        if (((longlong)param_3 - (longlong)param_2 & 1U) != 0) {
          uVar5 = (longlong)param_3 - (longlong)param_2 & 0xfffffffffffffffe;
          if (uVar5 == 0) {
            return 0xffffffff;
          }
          param_3 = param_2 + uVar5;
        }
        bVar1 = param_2[1];
        if (bVar1 == 0) {
          uVar7 = (uint)(byte)(&UNK_145b5a9b0)[*param_2];
          if ((byte)(&UNK_145b5a9b0)[*param_2] < 0xb) {
LAB_143653b3d:
                    /* WARNING: Could not recover jumptable at 0x000143653b4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar6 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                              (uint)(&DAT_143653d40)[(int)uVar7]))
                              (IMAGE_DOS_HEADER_140000000.e_magic +
                               (uint)(&DAT_143653d40)[(int)uVar7]);
            return uVar6;
          }
        }
        else if (0xd7 < bVar1) {
          if (bVar1 < 0xdc) {
            uVar7 = 7;
          }
          else if (bVar1 < 0xe0) {
            uVar7 = 8;
          }
          else {
            if ((bVar1 != 0xff) || (1 < (byte)(*param_2 + 2))) goto LAB_143653ad5;
            uVar7 = 0;
          }
          goto LAB_143653b3d;
        }
LAB_143653ad5:
        param_2 = param_2 + 2;
        lVar8 = (longlong)param_3 - (longlong)param_2;
        do {
          if (lVar8 < 2) {
            *param_4 = (longlong)param_2;
            return 6;
          }
          bVar1 = param_2[1];
          if (bVar1 == 0) {
            uVar7 = (uint)(byte)(&UNK_145b5a9b0)[*param_2];
            if ((byte)(&UNK_145b5a9b0)[*param_2] < 0xb) goto LAB_143653ca4;
          }
          else if (0xd7 < bVar1) {
            if (bVar1 < 0xdc) {
              uVar7 = 7;
LAB_143653ca4:
                    /* WARNING: Could not recover jumptable at 0x000143653cb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar6 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                                (uint)(&DAT_143653d6c)[(int)uVar7]))
                                (IMAGE_DOS_HEADER_140000000.e_magic +
                                 (uint)(&DAT_143653d6c)[(int)uVar7]);
              return uVar6;
            }
            if (bVar1 < 0xe0) {
              uVar7 = 8;
              goto LAB_143653ca4;
            }
            if ((bVar1 == 0xff) && ((byte)(*param_2 + 2) < 2)) {
              uVar7 = 0;
              goto LAB_143653ca4;
            }
          }
          param_2 = param_2 + 2;
          lVar8 = lVar8 + -2;
        } while( true );
      }
    }
    else if (sVar4 == -0x1045) {
      if ((*(char *)(param_1 + 0x8d) != '\0') && (2 < (int)*(char *)(param_1 + 0x8d) - 3U)) {
        if (param_2 + 2 == param_3) {
          return 0xffffffff;
        }
        if (param_2[2] == 0xbf) {
          *param_4 = (longlong)(param_2 + 3);
          *plVar2 = (longlong)&PTR_FUN_145b5b0a0;
          return 0xe;
        }
      }
    }
    else if (sVar4 == -0x101) {
      if (*(char *)(param_1 + 0x8d) != '\0') {
        *param_4 = (longlong)(param_2 + 2);
        *plVar2 = (longlong)&PTR_FUN_145b5a480;
        return 0xe;
      }
    }
    else if (sVar4 == -2) {
      if (*(char *)(param_1 + 0x8d) != '\0') {
        *param_4 = (longlong)(param_2 + 2);
        *plVar2 = (longlong)&PTR_FUN_145b5a920;
        return 0xe;
      }
    }
    else if ((*param_2 == 0) && (*(char *)(param_1 + 0x8d) != '\x05')) {
      *plVar2 = (longlong)&PTR_FUN_145b5a480;
      if (param_3 <= param_2) {
        return 0xfffffffc;
      }
      if (((longlong)param_3 - (longlong)param_2 & 1U) != 0) {
        uVar5 = (longlong)param_3 - (longlong)param_2 & 0xfffffffffffffffe;
        if (uVar5 == 0) {
          return 0xffffffff;
        }
        param_3 = param_2 + uVar5;
      }
      bVar1 = *param_2;
      if (bVar1 == 0) {
        uVar7 = (uint)(byte)(&UNK_145b5a510)[param_2[1]];
        if ((byte)(&UNK_145b5a510)[param_2[1]] < 0xb) {
LAB_14364fe9e:
                    /* WARNING: Could not recover jumptable at 0x00014364feab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + (uint)(&DAT_14365009c)[(int)uVar7]
                            ))(IMAGE_DOS_HEADER_140000000.e_magic +
                               (uint)(&DAT_14365009c)[(int)uVar7]);
          return uVar6;
        }
      }
      else if (0xd7 < bVar1) {
        if (bVar1 < 0xdc) {
          uVar7 = 7;
        }
        else if (bVar1 < 0xe0) {
          uVar7 = 8;
        }
        else {
          if ((bVar1 != 0xff) || (1 < (byte)(param_2[1] + 2))) goto LAB_14364fe35;
          uVar7 = 0;
        }
        goto LAB_14364fe9e;
      }
LAB_14364fe35:
      param_2 = param_2 + 2;
      lVar8 = (longlong)param_3 - (longlong)param_2;
      do {
        if (lVar8 < 2) {
          *param_4 = (longlong)param_2;
          return 6;
        }
        bVar1 = *param_2;
        if (bVar1 == 0) {
          uVar7 = (uint)(byte)(&UNK_145b5a510)[param_2[1]];
          if ((byte)(&UNK_145b5a510)[param_2[1]] < 0xb) goto LAB_143650007;
        }
        else if (0xd7 < bVar1) {
          if (bVar1 < 0xdc) {
            uVar7 = 7;
LAB_143650007:
                    /* WARNING: Could not recover jumptable at 0x000143650014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar6 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                              (uint)(&DAT_1436500c8)[(int)uVar7]))
                              (IMAGE_DOS_HEADER_140000000.e_magic +
                               (uint)(&DAT_1436500c8)[(int)uVar7]);
            return uVar6;
          }
          if (bVar1 < 0xe0) {
            uVar7 = 8;
            goto LAB_143650007;
          }
          if ((bVar1 == 0xff) && ((byte)(param_2[1] + 2) < 2)) {
            uVar7 = 0;
            goto LAB_143650007;
          }
        }
        param_2 = param_2 + 2;
        lVar8 = lVar8 + -2;
      } while( true );
    }
  }
  puVar3 = (&PTR_PTR_145b5a8e8)[*(char *)(param_1 + 0x8d)];
  *plVar2 = (longlong)puVar3;
                    /* WARNING: Could not emulate address calculation at 0x000143657b60 */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(puVar3 + 8))(puVar3,param_2,param_3,param_4);
  return uVar6;
}



// FUNCTION 143657b70 FUN_143657b70 body=368 status=ok
// SIG undefined FUN_143657b70(void)

ulonglong FUN_143657b70(longlong param_1,byte *param_2,byte *param_3,longlong *param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  longlong lVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x90);
  if (param_2 + 1 == param_3) {
    if (((((byte)(*(char *)(param_1 + 0x8d) - 3U) < 3) || (bVar1 = *param_2, bVar1 == 0)) ||
        (bVar1 == 0x3c)) || ((bVar1 == 0xef || (0xfd < bVar1)))) {
      return 0xffffffff;
    }
LAB_143657cbb:
    puVar3 = (undefined8 *)(&PTR_DAT_145b5a8b0)[*(char *)(param_1 + 0x8d)];
    *puVar2 = puVar3;
                    /* WARNING: Could not emulate address calculation at 0x000143657cdd */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*(code *)*puVar3)(puVar3);
    return uVar7;
  }
  bVar1 = param_2[1];
  sVar4 = CONCAT11(*param_2,bVar1);
  if (sVar4 != 0x3c00) {
    if (sVar4 == -0x1045) {
      if (param_2 + 2 == param_3) {
        return 0xffffffff;
      }
      if (param_2[2] == 0xbf) {
        *param_4 = (longlong)(param_2 + 3);
        *puVar2 = &PTR_FUN_145b5b280;
        return 0xe;
      }
      goto LAB_143657cbb;
    }
    if (sVar4 == -0x101) {
      *param_4 = (longlong)(param_2 + 2);
      *puVar2 = &PTR_FUN_145b5a660;
      return 0xe;
    }
    if (sVar4 == -2) {
      *param_4 = (longlong)(param_2 + 2);
      *puVar2 = &PTR_FUN_145b5ab00;
      return 0xe;
    }
    if (*param_2 != 0) {
      if (bVar1 != 0) goto LAB_143657cbb;
      goto LAB_143657c29;
    }
    *puVar2 = &PTR_FUN_145b5a660;
    if (param_3 <= param_2) {
      return 0xfffffffc;
    }
    if (((longlong)param_3 - (longlong)param_2 & 1U) != 0) {
      uVar7 = (longlong)param_3 - (longlong)param_2 & 0xfffffffffffffffe;
      if (uVar7 == 0) {
        return 0xffffffff;
      }
      param_3 = param_2 + uVar7;
    }
    bVar1 = *param_2;
    if (bVar1 == 0) {
      uVar8 = (&UNK_145b5a6f0)[param_2[1]];
    }
    else if (bVar1 < 0xd8) {
LAB_143651843:
      uVar8 = 0x1d;
    }
    else if (bVar1 < 0xdc) {
      uVar8 = 7;
    }
    else if (bVar1 < 0xe0) {
      uVar8 = 8;
    }
    else {
      if ((bVar1 != 0xff) || (1 < (byte)(param_2[1] + 2))) goto LAB_143651843;
      uVar8 = 0;
    }
    pbVar11 = param_2;
    switch(uVar8) {
    case 2:
      pbVar11 = param_2 + 2;
      if ((longlong)param_3 - (longlong)pbVar11 < 2) {
        return 0xffffffff;
      }
      if (*pbVar11 == 0) {
        uVar5 = (uint)(byte)(&UNK_145b5a6f0)[param_2[3]];
      }
      else {
        uVar5 = FUN_14365c390(*pbVar11,param_2[3]);
      }
      switch(uVar5) {
      case 5:
      case 6:
      case 7:
      case 0x16:
      case 0x18:
      case 0x1d:
        *param_4 = (longlong)(pbVar11 + -2);
        return 0x1d;
      case 0xf:
        uVar7 = FUN_143656720(&PTR_FUN_145b5a660,pbVar11 + 2,param_3);
        return uVar7;
      case 0x10:
        uVar7 = FUN_143655660(&PTR_FUN_145b5a660,pbVar11 + 2,param_3);
        return uVar7;
      }
      break;
    case 4:
      pbVar11 = param_2 + 2;
      if ((longlong)param_3 - (longlong)pbVar11 < 2) {
        return 0xffffffe6;
      }
      if ((*pbVar11 == 0) && (param_2[3] == 0x5d)) {
        if ((longlong)param_3 - (longlong)pbVar11 < 4) {
          return 0xffffffff;
        }
        if ((param_2[4] == 0) && (param_2[5] == 0x3e)) {
          *param_4 = (longlong)(param_2 + 6);
          return 0x22;
        }
      }
      *param_4 = (longlong)pbVar11;
      return 0x1a;
    case 5:
      if ((longlong)param_3 - (longlong)param_2 < 2) {
        return 0xfffffffe;
      }
      break;
    case 6:
      if ((longlong)param_3 - (longlong)param_2 < 3) {
        return 0xfffffffe;
      }
      break;
    case 7:
      if ((longlong)param_3 - (longlong)param_2 < 4) {
        return 0xfffffffe;
      }
      break;
    case 9:
      if (param_2 + 2 == param_3) {
        *param_4 = (longlong)param_3;
        return 0xfffffff1;
      }
    case 10:
    case 0x15:
      param_2 = param_2 + 2;
      for (lVar9 = (longlong)param_3 - (longlong)param_2; 1 < lVar9; lVar9 = lVar9 + -2) {
        if (*param_2 == 0) {
          uVar5 = (uint)(byte)(&UNK_145b5a6f0)[param_2[1]];
        }
        else {
          uVar5 = FUN_14365c390(*param_2,param_2[1]);
        }
        if (uVar5 == 9) {
          if (param_2 + 2 == param_3) break;
        }
        else if ((uVar5 != 10) && (uVar5 != 0x15)) break;
        param_2 = param_2 + 2;
      }
      *param_4 = (longlong)param_2;
      return 0xf;
    case 0xb:
      *param_4 = (longlong)(param_2 + 2);
      return 0x11;
    case 0xc:
      uVar7 = FUN_143655c70(0xc,&PTR_FUN_145b5a660,param_2 + 2,param_3,param_4);
      return uVar7;
    case 0xd:
      uVar7 = FUN_143655c70(0xd,&PTR_FUN_145b5a660,param_2 + 2,param_3,param_4);
      return uVar7;
    case 0x13:
      uVar7 = FUN_143656be0(&PTR_FUN_145b5a660,param_2 + 2,param_3);
      return uVar7;
    case 0x14:
      *param_4 = (longlong)(param_2 + 2);
      return 0x19;
    case 0x17:
    case 0x19:
    case 0x1a:
    case 0x1b:
switchD_143651873_caseD_17:
      uVar5 = 0x13;
      goto LAB_143651cf2;
    case 0x1d:
      uVar7 = (ulonglong)(param_2[1] >> 5);
      uVar5 = 1 << (param_2[1] & 0x1f);
      if ((*(uint *)(&DAT_145b5bfa0 + (uVar7 + (ulonglong)(byte)(&DAT_145b5c4a0)[bVar1] * 8) * 4) &
          uVar5) == 0) {
        if ((*(uint *)(&DAT_145b5bfa0 + (uVar7 + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar1] * 8) * 4)
            & uVar5) == 0) break;
        goto switchD_143651873_caseD_17;
      }
    case 0x16:
    case 0x18:
      uVar5 = 0x12;
LAB_143651cf2:
      lVar9 = (longlong)param_3 - (longlong)(param_2 + 2);
      pbVar11 = param_2 + 2;
joined_r0x000143651d0a:
      if (1 < lVar9) {
        bVar1 = *pbVar11;
        if (bVar1 == 0) {
          uVar8 = (&UNK_145b5a6f0)[pbVar11[1]];
        }
        else if (bVar1 < 0xd8) {
LAB_143651d58:
          uVar8 = 0x1d;
        }
        else if (bVar1 < 0xdc) {
          uVar8 = 7;
        }
        else if (bVar1 < 0xe0) {
          uVar8 = 8;
        }
        else {
          if ((bVar1 != 0xff) || (1 < (byte)(pbVar11[1] + 2))) goto LAB_143651d58;
          uVar8 = 0;
        }
        pbVar12 = pbVar11;
        switch(uVar8) {
        case 5:
switchD_143651d80_caseD_5:
          if ((longlong)param_3 - (longlong)pbVar12 < 2) {
            return 0xfffffffe;
          }
          break;
        case 6:
switchD_143651d80_caseD_6:
          if ((longlong)param_3 - (longlong)pbVar12 < 3) {
            return 0xfffffffe;
          }
          break;
        case 7:
switchD_143651d80_caseD_7:
          if ((longlong)param_3 - (longlong)pbVar12 < 4) {
            return 0xfffffffe;
          }
          break;
        case 9:
        case 10:
        case 0xb:
        case 0x14:
        case 0x15:
        case 0x1e:
        case 0x20:
        case 0x23:
        case 0x24:
          *param_4 = (longlong)pbVar11;
          goto LAB_143651db2;
        case 0xf:
          if (uVar5 != 0x13) {
            *param_4 = (longlong)(pbVar11 + 2);
            return 0x1e;
          }
          break;
        case 0x16:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
          goto switchD_143651d80_caseD_16;
        case 0x17:
          pbVar12 = pbVar11 + 2;
          lVar9 = lVar9 + -2;
          if (uVar5 != 0x12) goto code_r0x000143651d9c;
          if (lVar9 < 2) {
            return 0xffffffff;
          }
          bVar1 = *pbVar12;
          uVar5 = 0x29;
          if (bVar1 == 0) {
            bVar10 = pbVar11[3];
            uVar6 = (uint)(byte)(&UNK_145b5a6f0)[bVar10];
          }
          else {
            bVar10 = pbVar11[3];
            uVar6 = FUN_14365c390(bVar1,bVar10);
          }
          switch(uVar6) {
          case 5:
            goto switchD_143651d80_caseD_5;
          case 6:
            goto switchD_143651d80_caseD_6;
          case 7:
            goto switchD_143651d80_caseD_7;
          case 0x16:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
            goto switchD_143651d80_caseD_16;
          case 0x1d:
            goto LAB_143651e30;
          }
          goto switchD_143651e26_caseD_8;
        case 0x1d:
          bVar10 = pbVar11[1];
LAB_143651e30:
          if ((*(uint *)(&DAT_145b5bfa0 +
                        ((ulonglong)(bVar10 >> 5) + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar1] * 8) *
                        4) >> (bVar10 & 0x1f) & 1) == 0) break;
          goto switchD_143651d80_caseD_16;
        case 0x21:
          if (uVar5 != 0x13) {
            *param_4 = (longlong)(pbVar11 + 2);
            return 0x1f;
          }
          break;
        case 0x22:
          if (uVar5 != 0x13) {
            *param_4 = (longlong)(pbVar11 + 2);
            return 0x20;
          }
        }
        *param_4 = (longlong)pbVar12;
        return 0;
      }
      uVar5 = -uVar5;
LAB_143651db2:
      return (ulonglong)uVar5;
    case 0x1e:
      uVar7 = FUN_143656430(&PTR_FUN_145b5a660,param_2 + 2,param_3);
      return uVar7;
    case 0x1f:
      *param_4 = (longlong)(param_2 + 2);
      return 0x17;
    case 0x20:
      pbVar11 = param_2 + 2;
      if ((longlong)param_3 - (longlong)pbVar11 < 2) {
        return 0xffffffe8;
      }
      if (*pbVar11 == 0) {
        uVar5 = (uint)(byte)(&UNK_145b5a6f0)[param_2[3]];
      }
      else {
        uVar5 = FUN_14365c390(*pbVar11,param_2[3]);
      }
      switch(uVar5) {
      case 9:
      case 10:
      case 0xb:
      case 0x15:
      case 0x20:
      case 0x23:
      case 0x24:
        *param_4 = (longlong)pbVar11;
        return 0x18;
      case 0xf:
        *param_4 = (longlong)(pbVar11 + 2);
        return 0x23;
      case 0x21:
        *param_4 = (longlong)(pbVar11 + 2);
        return 0x24;
      case 0x22:
        *param_4 = (longlong)(pbVar11 + 2);
        return 0x25;
      }
      break;
    case 0x23:
      *param_4 = (longlong)(param_2 + 2);
      return 0x26;
    case 0x24:
      *param_4 = (longlong)(param_2 + 2);
      return 0x15;
    }
    *param_4 = (longlong)pbVar11;
    return 0;
  }
LAB_143657c29:
  *puVar2 = &PTR_FUN_145b5ab00;
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  if (((longlong)param_3 - (longlong)param_2 & 1U) != 0) {
    uVar7 = (longlong)param_3 - (longlong)param_2 & 0xfffffffffffffffe;
    if (uVar7 == 0) {
      return 0xffffffff;
    }
    param_3 = param_2 + uVar7;
  }
  bVar1 = param_2[1];
  if (bVar1 == 0) {
    uVar8 = (&UNK_145b5ab90)[*param_2];
  }
  else if (bVar1 < 0xd8) {
LAB_14364e892:
    uVar8 = 0x1d;
  }
  else if (bVar1 < 0xdc) {
    uVar8 = 7;
  }
  else if (bVar1 < 0xe0) {
    uVar8 = 8;
  }
  else {
    if ((bVar1 != 0xff) || (1 < (byte)(*param_2 + 2))) goto LAB_14364e892;
    uVar8 = 0;
  }
  pbVar11 = param_2;
  switch(uVar8) {
  case 2:
    pbVar11 = param_2 + 2;
    if ((longlong)param_3 - (longlong)pbVar11 < 2) {
      return 0xffffffff;
    }
    if (param_2[3] == 0) {
      uVar5 = (uint)(byte)(&UNK_145b5ab90)[*pbVar11];
    }
    else {
      uVar5 = FUN_14365c390(param_2[3],*pbVar11);
    }
    switch(uVar5) {
    case 5:
    case 6:
    case 7:
    case 0x16:
    case 0x18:
    case 0x1d:
      *param_4 = (longlong)(pbVar11 + -2);
      return 0x1d;
    case 0xf:
      uVar7 = FUN_143659790(&PTR_FUN_145b5ab00,pbVar11 + 2,param_3);
      return uVar7;
    case 0x10:
      uVar7 = FUN_1436586e0(&PTR_FUN_145b5ab00,pbVar11 + 2,param_3);
      return uVar7;
    }
    break;
  case 4:
    pbVar11 = param_2 + 2;
    if ((longlong)param_3 - (longlong)pbVar11 < 2) {
      return 0xffffffe6;
    }
    if ((param_2[3] == 0) && (*pbVar11 == 0x5d)) {
      if ((longlong)param_3 - (longlong)pbVar11 < 4) {
        return 0xffffffff;
      }
      if ((param_2[5] == 0) && (param_2[4] == 0x3e)) {
        *param_4 = (longlong)(param_2 + 6);
        return 0x22;
      }
    }
    *param_4 = (longlong)pbVar11;
    return 0x1a;
  case 5:
    if ((longlong)param_3 - (longlong)param_2 < 2) {
      return 0xfffffffe;
    }
    break;
  case 6:
    if ((longlong)param_3 - (longlong)param_2 < 3) {
      return 0xfffffffe;
    }
    break;
  case 7:
    if ((longlong)param_3 - (longlong)param_2 < 4) {
      return 0xfffffffe;
    }
    break;
  case 9:
    if (param_2 + 2 == param_3) {
      *param_4 = (longlong)param_3;
      return 0xfffffff1;
    }
  case 10:
  case 0x15:
    param_2 = param_2 + 2;
    for (lVar9 = (longlong)param_3 - (longlong)param_2; 1 < lVar9; lVar9 = lVar9 + -2) {
      if (param_2[1] == 0) {
        uVar5 = (uint)(byte)(&UNK_145b5ab90)[*param_2];
      }
      else {
        uVar5 = FUN_14365c390(param_2[1],*param_2);
      }
      if (uVar5 == 9) {
        if (param_2 + 2 == param_3) break;
      }
      else if ((uVar5 != 10) && (uVar5 != 0x15)) break;
      param_2 = param_2 + 2;
    }
    *param_4 = (longlong)param_2;
    return 0xf;
  case 0xb:
    *param_4 = (longlong)(param_2 + 2);
    return 0x11;
  case 0xc:
    uVar7 = FUN_143658ce0(0xc,&PTR_FUN_145b5ab00,param_2 + 2,param_3,param_4);
    return uVar7;
  case 0xd:
    uVar7 = FUN_143658ce0(0xd,&PTR_FUN_145b5ab00,param_2 + 2,param_3,param_4);
    return uVar7;
  case 0x13:
    uVar7 = FUN_143659c50(&PTR_FUN_145b5ab00,param_2 + 2,param_3);
    return uVar7;
  case 0x14:
    *param_4 = (longlong)(param_2 + 2);
    return 0x19;
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
switchD_14364e8c2_caseD_17:
    uVar5 = 0x13;
    goto LAB_14364ed36;
  case 0x1d:
    uVar7 = (ulonglong)(*param_2 >> 5);
    uVar5 = 1 << (*param_2 & 0x1f);
    if ((*(uint *)(&DAT_145b5bfa0 + (uVar7 + (ulonglong)(byte)(&DAT_145b5c4a0)[bVar1] * 8) * 4) &
        uVar5) == 0) {
      if ((*(uint *)(&DAT_145b5bfa0 + (uVar7 + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar1] * 8) * 4) &
          uVar5) == 0) break;
      goto switchD_14364e8c2_caseD_17;
    }
  case 0x16:
  case 0x18:
    uVar5 = 0x12;
LAB_14364ed36:
    lVar9 = (longlong)param_3 - (longlong)(param_2 + 2);
    pbVar11 = param_2 + 2;
joined_r0x00014364ed4e:
    if (1 < lVar9) {
      bVar1 = pbVar11[1];
      if (bVar1 == 0) {
        uVar8 = (&UNK_145b5ab90)[*pbVar11];
      }
      else if (bVar1 < 0xd8) {
LAB_14364ed9b:
        uVar8 = 0x1d;
      }
      else if (bVar1 < 0xdc) {
        uVar8 = 7;
      }
      else if (bVar1 < 0xe0) {
        uVar8 = 8;
      }
      else {
        if ((bVar1 != 0xff) || (1 < (byte)(*pbVar11 + 2))) goto LAB_14364ed9b;
        uVar8 = 0;
      }
      pbVar12 = pbVar11;
      switch(uVar8) {
      case 5:
switchD_14364edc3_caseD_5:
        if ((longlong)param_3 - (longlong)pbVar12 < 2) {
          return 0xfffffffe;
        }
        break;
      case 6:
switchD_14364edc3_caseD_6:
        if ((longlong)param_3 - (longlong)pbVar12 < 3) {
          return 0xfffffffe;
        }
        break;
      case 7:
switchD_14364edc3_caseD_7:
        if ((longlong)param_3 - (longlong)pbVar12 < 4) {
          return 0xfffffffe;
        }
        break;
      case 9:
      case 10:
      case 0xb:
      case 0x14:
      case 0x15:
      case 0x1e:
      case 0x20:
      case 0x23:
      case 0x24:
        *param_4 = (longlong)pbVar11;
        goto LAB_14364edf4;
      case 0xf:
        if (uVar5 != 0x13) {
          *param_4 = (longlong)(pbVar11 + 2);
          return 0x1e;
        }
        break;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        goto switchD_14364edc3_caseD_16;
      case 0x17:
        pbVar12 = pbVar11 + 2;
        lVar9 = lVar9 + -2;
        if (uVar5 != 0x12) goto code_r0x00014364edde;
        if (lVar9 < 2) {
          return 0xffffffff;
        }
        bVar1 = pbVar11[3];
        uVar5 = 0x29;
        if (bVar1 == 0) {
          bVar10 = *pbVar12;
          uVar6 = (uint)(byte)(&UNK_145b5ab90)[bVar10];
        }
        else {
          bVar10 = *pbVar12;
          uVar6 = FUN_14365c390(bVar1,bVar10);
        }
        switch(uVar6) {
        case 5:
          goto switchD_14364edc3_caseD_5;
        case 6:
          goto switchD_14364edc3_caseD_6;
        case 7:
          goto switchD_14364edc3_caseD_7;
        case 0x16:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
          goto switchD_14364edc3_caseD_16;
        case 0x1d:
          goto LAB_14364ee71;
        }
        goto switchD_14364ee67_caseD_8;
      case 0x1d:
        bVar10 = *pbVar11;
LAB_14364ee71:
        if ((*(uint *)(&DAT_145b5bfa0 +
                      ((ulonglong)(bVar10 >> 5) + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar1] * 8) * 4)
             >> (bVar10 & 0x1f) & 1) == 0) break;
        goto switchD_14364edc3_caseD_16;
      case 0x21:
        if (uVar5 != 0x13) {
          *param_4 = (longlong)(pbVar11 + 2);
          return 0x1f;
        }
        break;
      case 0x22:
        if (uVar5 != 0x13) {
          *param_4 = (longlong)(pbVar11 + 2);
          return 0x20;
        }
      }
      *param_4 = (longlong)pbVar12;
      return 0;
    }
    uVar5 = -uVar5;
LAB_14364edf4:
    return (ulonglong)uVar5;
  case 0x1e:
    uVar7 = FUN_1436594a0(&PTR_FUN_145b5ab00,param_2 + 2,param_3);
    return uVar7;
  case 0x1f:
    *param_4 = (longlong)(param_2 + 2);
    return 0x17;
  case 0x20:
    pbVar11 = param_2 + 2;
    if ((longlong)param_3 - (longlong)pbVar11 < 2) {
      return 0xffffffe8;
    }
    if (param_2[3] == 0) {
      uVar5 = (uint)(byte)(&UNK_145b5ab90)[*pbVar11];
    }
    else {
      uVar5 = FUN_14365c390(param_2[3],*pbVar11);
    }
    switch(uVar5) {
    case 9:
    case 10:
    case 0xb:
    case 0x15:
    case 0x20:
    case 0x23:
    case 0x24:
      *param_4 = (longlong)pbVar11;
      return 0x18;
    case 0xf:
      *param_4 = (longlong)(pbVar11 + 2);
      return 0x23;
    case 0x21:
      *param_4 = (longlong)(pbVar11 + 2);
      return 0x24;
    case 0x22:
      *param_4 = (longlong)(pbVar11 + 2);
      return 0x25;
    }
    break;
  case 0x23:
    *param_4 = (longlong)(param_2 + 2);
    return 0x26;
  case 0x24:
    *param_4 = (longlong)(param_2 + 2);
    return 0x15;
  }
  *param_4 = (longlong)pbVar11;
  return 0;
code_r0x000143651d9c:
  pbVar11 = pbVar12;
  if (uVar5 == 0x29) {
switchD_143651e26_caseD_8:
    uVar5 = 0x13;
    pbVar11 = pbVar12;
  }
  goto joined_r0x000143651d0a;
switchD_143651d80_caseD_16:
  lVar9 = lVar9 + -2;
  pbVar11 = pbVar12 + 2;
  goto joined_r0x000143651d0a;
code_r0x00014364edde:
  pbVar11 = pbVar12;
  if (uVar5 == 0x29) {
switchD_14364ee67_caseD_8:
    uVar5 = 0x13;
    pbVar11 = pbVar12;
  }
  goto joined_r0x00014364ed4e;
switchD_14364edc3_caseD_16:
  lVar9 = lVar9 + -2;
  pbVar11 = pbVar12 + 2;
  goto joined_r0x00014364ed4e;
}



// FUNCTION 143657ce0 FUN_143657ce0 body=368 status=ok
// SIG undefined FUN_143657ce0(void)

ulonglong FUN_143657ce0(longlong param_1,byte *param_2,byte *param_3,longlong *param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  longlong lVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x90);
  if (param_2 + 1 == param_3) {
    if (((((byte)(*(char *)(param_1 + 0x8d) - 3U) < 3) || (bVar1 = *param_2, bVar1 == 0)) ||
        (bVar1 == 0x3c)) || ((bVar1 == 0xef || (0xfd < bVar1)))) {
      return 0xffffffff;
    }
LAB_143657e2b:
    puVar3 = (undefined8 *)(&PTR_PTR_145b5a8e8)[*(char *)(param_1 + 0x8d)];
    *puVar2 = puVar3;
                    /* WARNING: Could not emulate address calculation at 0x000143657e4d */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*(code *)*puVar3)(puVar3);
    return uVar7;
  }
  bVar1 = param_2[1];
  sVar4 = CONCAT11(*param_2,bVar1);
  if (sVar4 != 0x3c00) {
    if (sVar4 == -0x1045) {
      if (param_2 + 2 == param_3) {
        return 0xffffffff;
      }
      if (param_2[2] == 0xbf) {
        *param_4 = (longlong)(param_2 + 3);
        *puVar2 = &PTR_FUN_145b5b0a0;
        return 0xe;
      }
      goto LAB_143657e2b;
    }
    if (sVar4 == -0x101) {
      *param_4 = (longlong)(param_2 + 2);
      *puVar2 = &PTR_FUN_145b5a480;
      return 0xe;
    }
    if (sVar4 == -2) {
      *param_4 = (longlong)(param_2 + 2);
      *puVar2 = &PTR_FUN_145b5a920;
      return 0xe;
    }
    if (*param_2 != 0) {
      if (bVar1 != 0) goto LAB_143657e2b;
      goto LAB_143657d99;
    }
    *puVar2 = &PTR_FUN_145b5a480;
    if (param_3 <= param_2) {
      return 0xfffffffc;
    }
    if (((longlong)param_3 - (longlong)param_2 & 1U) != 0) {
      uVar7 = (longlong)param_3 - (longlong)param_2 & 0xfffffffffffffffe;
      if (uVar7 == 0) {
        return 0xffffffff;
      }
      param_3 = param_2 + uVar7;
    }
    bVar1 = *param_2;
    if (bVar1 == 0) {
      uVar8 = (&UNK_145b5a510)[param_2[1]];
    }
    else if (bVar1 < 0xd8) {
LAB_143651843:
      uVar8 = 0x1d;
    }
    else if (bVar1 < 0xdc) {
      uVar8 = 7;
    }
    else if (bVar1 < 0xe0) {
      uVar8 = 8;
    }
    else {
      if ((bVar1 != 0xff) || (1 < (byte)(param_2[1] + 2))) goto LAB_143651843;
      uVar8 = 0;
    }
    pbVar11 = param_2;
    switch(uVar8) {
    case 2:
      pbVar11 = param_2 + 2;
      if ((longlong)param_3 - (longlong)pbVar11 < 2) {
        return 0xffffffff;
      }
      if (*pbVar11 == 0) {
        uVar5 = (uint)(byte)(&UNK_145b5a510)[param_2[3]];
      }
      else {
        uVar5 = FUN_14365c390(*pbVar11,param_2[3]);
      }
      switch(uVar5) {
      case 5:
      case 6:
      case 7:
      case 0x16:
      case 0x18:
      case 0x1d:
        *param_4 = (longlong)(pbVar11 + -2);
        return 0x1d;
      case 0xf:
        uVar7 = FUN_143656720(&PTR_FUN_145b5a480,pbVar11 + 2,param_3);
        return uVar7;
      case 0x10:
        uVar7 = FUN_143655660(&PTR_FUN_145b5a480,pbVar11 + 2,param_3);
        return uVar7;
      }
      break;
    case 4:
      pbVar11 = param_2 + 2;
      if ((longlong)param_3 - (longlong)pbVar11 < 2) {
        return 0xffffffe6;
      }
      if ((*pbVar11 == 0) && (param_2[3] == 0x5d)) {
        if ((longlong)param_3 - (longlong)pbVar11 < 4) {
          return 0xffffffff;
        }
        if ((param_2[4] == 0) && (param_2[5] == 0x3e)) {
          *param_4 = (longlong)(param_2 + 6);
          return 0x22;
        }
      }
      *param_4 = (longlong)pbVar11;
      return 0x1a;
    case 5:
      if ((longlong)param_3 - (longlong)param_2 < 2) {
        return 0xfffffffe;
      }
      break;
    case 6:
      if ((longlong)param_3 - (longlong)param_2 < 3) {
        return 0xfffffffe;
      }
      break;
    case 7:
      if ((longlong)param_3 - (longlong)param_2 < 4) {
        return 0xfffffffe;
      }
      break;
    case 9:
      if (param_2 + 2 == param_3) {
        *param_4 = (longlong)param_3;
        return 0xfffffff1;
      }
    case 10:
    case 0x15:
      param_2 = param_2 + 2;
      for (lVar9 = (longlong)param_3 - (longlong)param_2; 1 < lVar9; lVar9 = lVar9 + -2) {
        if (*param_2 == 0) {
          uVar5 = (uint)(byte)(&UNK_145b5a510)[param_2[1]];
        }
        else {
          uVar5 = FUN_14365c390(*param_2,param_2[1]);
        }
        if (uVar5 == 9) {
          if (param_2 + 2 == param_3) break;
        }
        else if ((uVar5 != 10) && (uVar5 != 0x15)) break;
        param_2 = param_2 + 2;
      }
      *param_4 = (longlong)param_2;
      return 0xf;
    case 0xb:
      *param_4 = (longlong)(param_2 + 2);
      return 0x11;
    case 0xc:
      uVar7 = FUN_143655c70(0xc,&PTR_FUN_145b5a480,param_2 + 2,param_3,param_4);
      return uVar7;
    case 0xd:
      uVar7 = FUN_143655c70(0xd,&PTR_FUN_145b5a480,param_2 + 2,param_3,param_4);
      return uVar7;
    case 0x13:
      uVar7 = FUN_143656be0(&PTR_FUN_145b5a480,param_2 + 2,param_3);
      return uVar7;
    case 0x14:
      *param_4 = (longlong)(param_2 + 2);
      return 0x19;
    case 0x17:
    case 0x19:
    case 0x1a:
    case 0x1b:
switchD_143651873_caseD_17:
      uVar5 = 0x13;
      goto LAB_143651cf2;
    case 0x1d:
      uVar7 = (ulonglong)(param_2[1] >> 5);
      uVar5 = 1 << (param_2[1] & 0x1f);
      if ((*(uint *)(&DAT_145b5bfa0 + (uVar7 + (ulonglong)(byte)(&DAT_145b5c4a0)[bVar1] * 8) * 4) &
          uVar5) == 0) {
        if ((*(uint *)(&DAT_145b5bfa0 + (uVar7 + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar1] * 8) * 4)
            & uVar5) == 0) break;
        goto switchD_143651873_caseD_17;
      }
    case 0x16:
    case 0x18:
      uVar5 = 0x12;
LAB_143651cf2:
      lVar9 = (longlong)param_3 - (longlong)(param_2 + 2);
      pbVar11 = param_2 + 2;
joined_r0x000143651d0a:
      if (1 < lVar9) {
        bVar1 = *pbVar11;
        if (bVar1 == 0) {
          uVar8 = (&UNK_145b5a510)[pbVar11[1]];
        }
        else if (bVar1 < 0xd8) {
LAB_143651d58:
          uVar8 = 0x1d;
        }
        else if (bVar1 < 0xdc) {
          uVar8 = 7;
        }
        else if (bVar1 < 0xe0) {
          uVar8 = 8;
        }
        else {
          if ((bVar1 != 0xff) || (1 < (byte)(pbVar11[1] + 2))) goto LAB_143651d58;
          uVar8 = 0;
        }
        pbVar12 = pbVar11;
        switch(uVar8) {
        case 5:
switchD_143651d80_caseD_5:
          if ((longlong)param_3 - (longlong)pbVar12 < 2) {
            return 0xfffffffe;
          }
          break;
        case 6:
switchD_143651d80_caseD_6:
          if ((longlong)param_3 - (longlong)pbVar12 < 3) {
            return 0xfffffffe;
          }
          break;
        case 7:
switchD_143651d80_caseD_7:
          if ((longlong)param_3 - (longlong)pbVar12 < 4) {
            return 0xfffffffe;
          }
          break;
        case 9:
        case 10:
        case 0xb:
        case 0x14:
        case 0x15:
        case 0x1e:
        case 0x20:
        case 0x23:
        case 0x24:
          *param_4 = (longlong)pbVar11;
          goto LAB_143651db2;
        case 0xf:
          if (uVar5 != 0x13) {
            *param_4 = (longlong)(pbVar11 + 2);
            return 0x1e;
          }
          break;
        case 0x16:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
          goto switchD_143651d80_caseD_16;
        case 0x17:
          pbVar12 = pbVar11 + 2;
          lVar9 = lVar9 + -2;
          if (uVar5 != 0x12) goto code_r0x000143651d9c;
          if (lVar9 < 2) {
            return 0xffffffff;
          }
          bVar1 = *pbVar12;
          uVar5 = 0x29;
          if (bVar1 == 0) {
            bVar10 = pbVar11[3];
            uVar6 = (uint)(byte)(&UNK_145b5a510)[bVar10];
          }
          else {
            bVar10 = pbVar11[3];
            uVar6 = FUN_14365c390(bVar1,bVar10);
          }
          switch(uVar6) {
          case 5:
            goto switchD_143651d80_caseD_5;
          case 6:
            goto switchD_143651d80_caseD_6;
          case 7:
            goto switchD_143651d80_caseD_7;
          case 0x16:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
            goto switchD_143651d80_caseD_16;
          case 0x1d:
            goto LAB_143651e30;
          }
          goto switchD_143651e26_caseD_8;
        case 0x1d:
          bVar10 = pbVar11[1];
LAB_143651e30:
          if ((*(uint *)(&DAT_145b5bfa0 +
                        ((ulonglong)(bVar10 >> 5) + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar1] * 8) *
                        4) >> (bVar10 & 0x1f) & 1) == 0) break;
          goto switchD_143651d80_caseD_16;
        case 0x21:
          if (uVar5 != 0x13) {
            *param_4 = (longlong)(pbVar11 + 2);
            return 0x1f;
          }
          break;
        case 0x22:
          if (uVar5 != 0x13) {
            *param_4 = (longlong)(pbVar11 + 2);
            return 0x20;
          }
        }
        *param_4 = (longlong)pbVar12;
        return 0;
      }
      uVar5 = -uVar5;
LAB_143651db2:
      return (ulonglong)uVar5;
    case 0x1e:
      uVar7 = FUN_143656430(&PTR_FUN_145b5a480,param_2 + 2,param_3);
      return uVar7;
    case 0x1f:
      *param_4 = (longlong)(param_2 + 2);
      return 0x17;
    case 0x20:
      pbVar11 = param_2 + 2;
      if ((longlong)param_3 - (longlong)pbVar11 < 2) {
        return 0xffffffe8;
      }
      if (*pbVar11 == 0) {
        uVar5 = (uint)(byte)(&UNK_145b5a510)[param_2[3]];
      }
      else {
        uVar5 = FUN_14365c390(*pbVar11,param_2[3]);
      }
      switch(uVar5) {
      case 9:
      case 10:
      case 0xb:
      case 0x15:
      case 0x20:
      case 0x23:
      case 0x24:
        *param_4 = (longlong)pbVar11;
        return 0x18;
      case 0xf:
        *param_4 = (longlong)(pbVar11 + 2);
        return 0x23;
      case 0x21:
        *param_4 = (longlong)(pbVar11 + 2);
        return 0x24;
      case 0x22:
        *param_4 = (longlong)(pbVar11 + 2);
        return 0x25;
      }
      break;
    case 0x23:
      *param_4 = (longlong)(param_2 + 2);
      return 0x26;
    case 0x24:
      *param_4 = (longlong)(param_2 + 2);
      return 0x15;
    }
    *param_4 = (longlong)pbVar11;
    return 0;
  }
LAB_143657d99:
  *puVar2 = &PTR_FUN_145b5a920;
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  if (((longlong)param_3 - (longlong)param_2 & 1U) != 0) {
    uVar7 = (longlong)param_3 - (longlong)param_2 & 0xfffffffffffffffe;
    if (uVar7 == 0) {
      return 0xffffffff;
    }
    param_3 = param_2 + uVar7;
  }
  bVar1 = param_2[1];
  if (bVar1 == 0) {
    uVar8 = (&UNK_145b5a9b0)[*param_2];
  }
  else if (bVar1 < 0xd8) {
LAB_14364e892:
    uVar8 = 0x1d;
  }
  else if (bVar1 < 0xdc) {
    uVar8 = 7;
  }
  else if (bVar1 < 0xe0) {
    uVar8 = 8;
  }
  else {
    if ((bVar1 != 0xff) || (1 < (byte)(*param_2 + 2))) goto LAB_14364e892;
    uVar8 = 0;
  }
  pbVar11 = param_2;
  switch(uVar8) {
  case 2:
    pbVar11 = param_2 + 2;
    if ((longlong)param_3 - (longlong)pbVar11 < 2) {
      return 0xffffffff;
    }
    if (param_2[3] == 0) {
      uVar5 = (uint)(byte)(&UNK_145b5a9b0)[*pbVar11];
    }
    else {
      uVar5 = FUN_14365c390(param_2[3],*pbVar11);
    }
    switch(uVar5) {
    case 5:
    case 6:
    case 7:
    case 0x16:
    case 0x18:
    case 0x1d:
      *param_4 = (longlong)(pbVar11 + -2);
      return 0x1d;
    case 0xf:
      uVar7 = FUN_143659790(&PTR_FUN_145b5a920,pbVar11 + 2,param_3);
      return uVar7;
    case 0x10:
      uVar7 = FUN_1436586e0(&PTR_FUN_145b5a920,pbVar11 + 2,param_3);
      return uVar7;
    }
    break;
  case 4:
    pbVar11 = param_2 + 2;
    if ((longlong)param_3 - (longlong)pbVar11 < 2) {
      return 0xffffffe6;
    }
    if ((param_2[3] == 0) && (*pbVar11 == 0x5d)) {
      if ((longlong)param_3 - (longlong)pbVar11 < 4) {
        return 0xffffffff;
      }
      if ((param_2[5] == 0) && (param_2[4] == 0x3e)) {
        *param_4 = (longlong)(param_2 + 6);
        return 0x22;
      }
    }
    *param_4 = (longlong)pbVar11;
    return 0x1a;
  case 5:
    if ((longlong)param_3 - (longlong)param_2 < 2) {
      return 0xfffffffe;
    }
    break;
  case 6:
    if ((longlong)param_3 - (longlong)param_2 < 3) {
      return 0xfffffffe;
    }
    break;
  case 7:
    if ((longlong)param_3 - (longlong)param_2 < 4) {
      return 0xfffffffe;
    }
    break;
  case 9:
    if (param_2 + 2 == param_3) {
      *param_4 = (longlong)param_3;
      return 0xfffffff1;
    }
  case 10:
  case 0x15:
    param_2 = param_2 + 2;
    for (lVar9 = (longlong)param_3 - (longlong)param_2; 1 < lVar9; lVar9 = lVar9 + -2) {
      if (param_2[1] == 0) {
        uVar5 = (uint)(byte)(&UNK_145b5a9b0)[*param_2];
      }
      else {
        uVar5 = FUN_14365c390(param_2[1],*param_2);
      }
      if (uVar5 == 9) {
        if (param_2 + 2 == param_3) break;
      }
      else if ((uVar5 != 10) && (uVar5 != 0x15)) break;
      param_2 = param_2 + 2;
    }
    *param_4 = (longlong)param_2;
    return 0xf;
  case 0xb:
    *param_4 = (longlong)(param_2 + 2);
    return 0x11;
  case 0xc:
    uVar7 = FUN_143658ce0(0xc,&PTR_FUN_145b5a920,param_2 + 2,param_3,param_4);
    return uVar7;
  case 0xd:
    uVar7 = FUN_143658ce0(0xd,&PTR_FUN_145b5a920,param_2 + 2,param_3,param_4);
    return uVar7;
  case 0x13:
    uVar7 = FUN_143659c50(&PTR_FUN_145b5a920,param_2 + 2,param_3);
    return uVar7;
  case 0x14:
    *param_4 = (longlong)(param_2 + 2);
    return 0x19;
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
switchD_14364e8c2_caseD_17:
    uVar5 = 0x13;
    goto LAB_14364ed36;
  case 0x1d:
    uVar7 = (ulonglong)(*param_2 >> 5);
    uVar5 = 1 << (*param_2 & 0x1f);
    if ((*(uint *)(&DAT_145b5bfa0 + (uVar7 + (ulonglong)(byte)(&DAT_145b5c4a0)[bVar1] * 8) * 4) &
        uVar5) == 0) {
      if ((*(uint *)(&DAT_145b5bfa0 + (uVar7 + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar1] * 8) * 4) &
          uVar5) == 0) break;
      goto switchD_14364e8c2_caseD_17;
    }
  case 0x16:
  case 0x18:
    uVar5 = 0x12;
LAB_14364ed36:
    lVar9 = (longlong)param_3 - (longlong)(param_2 + 2);
    pbVar11 = param_2 + 2;
joined_r0x00014364ed4e:
    if (1 < lVar9) {
      bVar1 = pbVar11[1];
      if (bVar1 == 0) {
        uVar8 = (&UNK_145b5a9b0)[*pbVar11];
      }
      else if (bVar1 < 0xd8) {
LAB_14364ed9b:
        uVar8 = 0x1d;
      }
      else if (bVar1 < 0xdc) {
        uVar8 = 7;
      }
      else if (bVar1 < 0xe0) {
        uVar8 = 8;
      }
      else {
        if ((bVar1 != 0xff) || (1 < (byte)(*pbVar11 + 2))) goto LAB_14364ed9b;
        uVar8 = 0;
      }
      pbVar12 = pbVar11;
      switch(uVar8) {
      case 5:
switchD_14364edc3_caseD_5:
        if ((longlong)param_3 - (longlong)pbVar12 < 2) {
          return 0xfffffffe;
        }
        break;
      case 6:
switchD_14364edc3_caseD_6:
        if ((longlong)param_3 - (longlong)pbVar12 < 3) {
          return 0xfffffffe;
        }
        break;
      case 7:
switchD_14364edc3_caseD_7:
        if ((longlong)param_3 - (longlong)pbVar12 < 4) {
          return 0xfffffffe;
        }
        break;
      case 9:
      case 10:
      case 0xb:
      case 0x14:
      case 0x15:
      case 0x1e:
      case 0x20:
      case 0x23:
      case 0x24:
        *param_4 = (longlong)pbVar11;
        goto LAB_14364edf4;
      case 0xf:
        if (uVar5 != 0x13) {
          *param_4 = (longlong)(pbVar11 + 2);
          return 0x1e;
        }
        break;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        goto switchD_14364edc3_caseD_16;
      case 0x17:
        pbVar12 = pbVar11 + 2;
        lVar9 = lVar9 + -2;
        if (uVar5 != 0x12) goto code_r0x00014364edde;
        if (lVar9 < 2) {
          return 0xffffffff;
        }
        bVar1 = pbVar11[3];
        uVar5 = 0x29;
        if (bVar1 == 0) {
          bVar10 = *pbVar12;
          uVar6 = (uint)(byte)(&UNK_145b5a9b0)[bVar10];
        }
        else {
          bVar10 = *pbVar12;
          uVar6 = FUN_14365c390(bVar1,bVar10);
        }
        switch(uVar6) {
        case 5:
          goto switchD_14364edc3_caseD_5;
        case 6:
          goto switchD_14364edc3_caseD_6;
        case 7:
          goto switchD_14364edc3_caseD_7;
        case 0x16:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
          goto switchD_14364edc3_caseD_16;
        case 0x1d:
          goto LAB_14364ee71;
        }
        goto switchD_14364ee67_caseD_8;
      case 0x1d:
        bVar10 = *pbVar11;
LAB_14364ee71:
        if ((*(uint *)(&DAT_145b5bfa0 +
                      ((ulonglong)(bVar10 >> 5) + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar1] * 8) * 4)
             >> (bVar10 & 0x1f) & 1) == 0) break;
        goto switchD_14364edc3_caseD_16;
      case 0x21:
        if (uVar5 != 0x13) {
          *param_4 = (longlong)(pbVar11 + 2);
          return 0x1f;
        }
        break;
      case 0x22:
        if (uVar5 != 0x13) {
          *param_4 = (longlong)(pbVar11 + 2);
          return 0x20;
        }
      }
      *param_4 = (longlong)pbVar12;
      return 0;
    }
    uVar5 = -uVar5;
LAB_14364edf4:
    return (ulonglong)uVar5;
  case 0x1e:
    uVar7 = FUN_1436594a0(&PTR_FUN_145b5a920,param_2 + 2,param_3);
    return uVar7;
  case 0x1f:
    *param_4 = (longlong)(param_2 + 2);
    return 0x17;
  case 0x20:
    pbVar11 = param_2 + 2;
    if ((longlong)param_3 - (longlong)pbVar11 < 2) {
      return 0xffffffe8;
    }
    if (param_2[3] == 0) {
      uVar5 = (uint)(byte)(&UNK_145b5a9b0)[*pbVar11];
    }
    else {
      uVar5 = FUN_14365c390(param_2[3],*pbVar11);
    }
    switch(uVar5) {
    case 9:
    case 10:
    case 0xb:
    case 0x15:
    case 0x20:
    case 0x23:
    case 0x24:
      *param_4 = (longlong)pbVar11;
      return 0x18;
    case 0xf:
      *param_4 = (longlong)(pbVar11 + 2);
      return 0x23;
    case 0x21:
      *param_4 = (longlong)(pbVar11 + 2);
      return 0x24;
    case 0x22:
      *param_4 = (longlong)(pbVar11 + 2);
      return 0x25;
    }
    break;
  case 0x23:
    *param_4 = (longlong)(param_2 + 2);
    return 0x26;
  case 0x24:
    *param_4 = (longlong)(param_2 + 2);
    return 0x15;
  }
  *param_4 = (longlong)pbVar11;
  return 0;
code_r0x000143651d9c:
  pbVar11 = pbVar12;
  if (uVar5 == 0x29) {
switchD_143651e26_caseD_8:
    uVar5 = 0x13;
    pbVar11 = pbVar12;
  }
  goto joined_r0x000143651d0a;
switchD_143651d80_caseD_16:
  lVar9 = lVar9 + -2;
  pbVar11 = pbVar12 + 2;
  goto joined_r0x000143651d0a;
code_r0x00014364edde:
  pbVar11 = pbVar12;
  if (uVar5 == 0x29) {
switchD_14364ee67_caseD_8:
    uVar5 = 0x13;
    pbVar11 = pbVar12;
  }
  goto joined_r0x00014364ed4e;
switchD_14364edc3_caseD_16:
  lVar9 = lVar9 + -2;
  pbVar11 = pbVar12 + 2;
  goto joined_r0x00014364ed4e;
}



// FUNCTION 143657e60 FUN_143657e60 body=1361 status=ok
// SIG undefined FUN_143657e60(void)

int FUN_143657e60(longlong param_1,byte *param_2,longlong param_3,longlong *param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  byte bVar8;
  ulonglong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *local_res10;
  
  bVar2 = false;
joined_r0x000143657e90:
  lVar7 = param_3 - (longlong)param_2;
  if (lVar7 < 2) {
    return -1;
  }
  bVar1 = param_2[1];
  if (bVar1 == 0) {
    uVar5 = *(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1);
  }
  else if (bVar1 < 0xd8) {
LAB_143657eea:
    uVar5 = 0x1d;
  }
  else if (bVar1 < 0xdc) {
    uVar5 = 7;
  }
  else if (bVar1 < 0xe0) {
    uVar5 = 8;
  }
  else {
    if ((bVar1 != 0xff) || (1 < (byte)(*param_2 + 2))) goto LAB_143657eea;
    uVar5 = 0;
  }
  pbVar10 = param_2;
  switch(uVar5) {
  case 5:
switchD_143657f12_caseD_5:
    if (param_3 - (longlong)param_2 < 2) {
      return -2;
    }
    break;
  case 6:
switchD_143657f12_caseD_6:
    if (param_3 - (longlong)param_2 < 3) {
      return -2;
    }
    break;
  case 7:
switchD_143657f12_caseD_7:
    if (param_3 - (longlong)param_2 < 4) {
      return -2;
    }
    break;
  default:
    goto switchD_143657f12_caseD_8;
  case 9:
  case 10:
  case 0x15:
switchD_143657f12_caseD_9:
    param_2 = pbVar10 + 2;
    lVar7 = lVar7 + -2;
    if (lVar7 < 2) {
      return -1;
    }
    bVar1 = pbVar10[3];
    if (bVar1 == 0) {
      uVar3 = (uint)*(byte *)((ulonglong)*param_2 + 0x90 + param_1);
    }
    else if (bVar1 < 0xd8) {
LAB_143658005:
      uVar3 = 0x1d;
    }
    else if (bVar1 < 0xdc) {
      uVar3 = 7;
    }
    else if (bVar1 < 0xe0) {
      uVar3 = 8;
    }
    else {
      if ((bVar1 != 0xff) || (1 < (byte)(*param_2 + 2))) goto LAB_143658005;
      uVar3 = 0;
    }
    if (uVar3 != 0xe) {
      pbVar10 = param_2;
      if ((1 < uVar3 - 9) && (uVar3 != 0x15)) goto switchD_143657f12_caseD_8;
      goto switchD_143657f12_caseD_9;
    }
  case 0xe:
    bVar2 = false;
    lVar7 = param_3 - (longlong)param_2;
    do {
      local_res10 = param_2 + 2;
      lVar7 = lVar7 + -2;
      if (lVar7 < 2) {
        return -1;
      }
      bVar1 = param_2[3];
      if (bVar1 == 0) {
        uVar3 = (uint)*(byte *)((ulonglong)*local_res10 + 0x90 + param_1);
      }
      else if (bVar1 < 0xd8) {
LAB_143658085:
        uVar3 = 0x1d;
      }
      else if (bVar1 < 0xdc) {
        uVar3 = 7;
      }
      else if (bVar1 < 0xe0) {
        uVar3 = 8;
      }
      else {
        if ((bVar1 != 0xff) || (1 < (byte)(*local_res10 + 2))) goto LAB_143658085;
        uVar3 = 0;
      }
      if (uVar3 - 0xc < 2) {
switchD_14365812f_caseD_4:
        local_res10 = local_res10 + 2;
        do {
          lVar7 = param_3 - (longlong)local_res10;
          if (lVar7 < 2) {
            return -1;
          }
          bVar1 = local_res10[1];
          if (bVar1 == 0) {
            uVar6 = (uint)*(byte *)((ulonglong)*local_res10 + 0x90 + param_1);
          }
          else if (bVar1 < 0xd8) {
LAB_143658113:
            uVar6 = 0x1d;
          }
          else if (bVar1 < 0xdc) {
            uVar6 = 7;
          }
          else if (bVar1 < 0xe0) {
            uVar6 = 8;
          }
          else {
            if ((bVar1 != 0xff) || (1 < (byte)(*local_res10 + 2))) goto LAB_143658113;
            uVar6 = 0;
          }
          if (uVar6 == uVar3) {
            param_2 = local_res10 + 2;
            lVar7 = param_3 - (longlong)param_2;
            if (lVar7 < 2) {
              return -1;
            }
            bVar1 = local_res10[3];
            if (bVar1 != 0) {
              if ((((0xd7 < bVar1) && (0xdb < bVar1)) && (0xdf < bVar1)) && (bVar1 == 0xff)) {
                *param_4 = (longlong)param_2;
                return 0;
              }
              goto switchD_143657f12_caseD_8;
            }
            bVar1 = *(byte *)((ulonglong)*param_2 + 0x90 + param_1);
            if (bVar1 < 9) goto switchD_143657f12_caseD_8;
            if (bVar1 < 0xb) goto switchD_14365825d_caseD_9;
            if (bVar1 == 0xb) goto switchD_14365825d_caseD_b;
            pbVar10 = param_2;
            if (bVar1 == 0x11) goto switchD_14365825d_caseD_11;
            if (bVar1 != 0x15) goto switchD_143657f12_caseD_8;
            goto switchD_14365825d_caseD_9;
          }
          param_2 = local_res10;
          switch(uVar6) {
          case 0:
          case 1:
          case 2:
          case 8:
            goto switchD_143657f12_caseD_8;
          case 3:
            iVar4 = FUN_143659f10(param_1,local_res10 + 2,param_3,&local_res10);
            if (iVar4 < 1) {
              if (iVar4 == 0) {
                *param_4 = (longlong)local_res10;
                return 0;
              }
              return iVar4;
            }
            break;
          default:
            goto switchD_14365812f_caseD_4;
          case 6:
            if (lVar7 < 3) {
              return -2;
            }
            local_res10 = local_res10 + 3;
            break;
          case 7:
            if (lVar7 < 4) {
              return -2;
            }
            local_res10 = local_res10 + 4;
          }
        } while( true );
      }
      param_2 = local_res10;
      if ((1 < uVar3 - 9) && (uVar3 != 0x15)) {
        *param_4 = (longlong)local_res10;
        return 0;
      }
    } while( true );
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
    goto switchD_143657f12_caseD_16;
  case 0x17:
    if (bVar2) break;
    pbVar10 = param_2 + 2;
    bVar2 = true;
    if (param_3 - (longlong)pbVar10 < 2) {
      return -1;
    }
    uVar9 = (ulonglong)param_2[3];
    if (param_2[3] == 0) {
      bVar8 = *pbVar10;
      uVar3 = (uint)*(byte *)((ulonglong)bVar8 + 0x90 + param_1);
      param_2 = pbVar10;
    }
    else {
      bVar8 = *pbVar10;
      uVar3 = FUN_14365c390(uVar9,bVar8);
      param_2 = pbVar10;
    }
    switch(uVar3) {
    case 5:
      goto switchD_143657f12_caseD_5;
    case 6:
      goto switchD_143657f12_caseD_6;
    case 7:
      goto switchD_143657f12_caseD_7;
    default:
      goto switchD_143657f12_caseD_8;
    case 0x16:
    case 0x18:
      goto switchD_143657f12_caseD_16;
    case 0x1d:
      bVar1 = (&DAT_145b5c4a0)[uVar9 & 0xff];
      goto LAB_143658271;
    }
  case 0x1d:
    bVar1 = (&DAT_145b5c5a0)[bVar1];
LAB_14365826d:
    bVar8 = *param_2;
LAB_143658271:
    if ((*(uint *)(&DAT_145b5bfa0 + ((ulonglong)(bVar8 >> 5) + (ulonglong)bVar1 * 8) * 4) >>
         (bVar8 & 0x1f) & 1) == 0) {
switchD_143657f12_caseD_8:
      *param_4 = (longlong)param_2;
      return 0;
    }
    goto switchD_143657f12_caseD_16;
  }
  goto LAB_143658386;
  do {
    pbVar10 = param_2;
    switch(uVar5) {
    case 5:
      if (param_3 - (longlong)param_2 < 2) {
        return -2;
      }
      goto switchD_143657f12_caseD_8;
    case 6:
      if (param_3 - (longlong)param_2 < 3) {
        return -2;
      }
      goto switchD_143657f12_caseD_8;
    case 7:
      if (param_3 - (longlong)param_2 < 4) {
        return -2;
      }
    default:
      goto switchD_143657f12_caseD_8;
    case 9:
    case 10:
    case 0x15:
switchD_14365825d_caseD_9:
      pbVar11 = param_2;
      param_2 = pbVar11 + 2;
      lVar7 = lVar7 + -2;
      if (lVar7 < 2) {
        return -1;
      }
      bVar1 = pbVar11[3];
      if (bVar1 == 0) {
        uVar5 = *(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1);
      }
      else if (bVar1 < 0xd8) {
LAB_143658235:
        uVar5 = 0x1d;
      }
      else if (bVar1 < 0xdc) {
        uVar5 = 7;
      }
      else if (bVar1 < 0xe0) {
        uVar5 = 8;
      }
      else {
        if ((bVar1 != 0xff) || (1 < (byte)(*param_2 + 2))) goto LAB_143658235;
        uVar5 = 0;
      }
      break;
    case 0xb:
      goto switchD_14365825d_caseD_b;
    case 0x11:
      goto switchD_14365825d_caseD_11;
    case 0x16:
    case 0x18:
      goto switchD_143657f12_caseD_16;
    case 0x1d:
      bVar1 = (&DAT_145b5c4a0)[pbVar11[3]];
      goto LAB_14365826d;
    }
  } while( true );
switchD_143657f12_caseD_16:
  param_2 = param_2 + 2;
  goto joined_r0x000143657e90;
switchD_14365825d_caseD_b:
  *param_4 = (longlong)(param_2 + 2);
  return 1;
switchD_14365825d_caseD_11:
  param_2 = pbVar10 + 2;
  if (param_3 - (longlong)param_2 < 2) {
    return -1;
  }
  if ((pbVar10[3] == 0) && (*param_2 == 0x3e)) {
    *param_4 = (longlong)(pbVar10 + 4);
    return 3;
  }
LAB_143658386:
  *param_4 = (longlong)param_2;
  return 0;
}



// FUNCTION 143658560 FUN_143658560 body=433 status=ok
// SIG undefined FUN_143658560(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000145050001) overlaps instruction at (ram,0x000145050000)
    */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_143658560(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar10;
  char cVar11;
  byte bVar13;
  byte *pbVar12;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  longlong lVar14;
  longlong in_FS_OFFSET;
  char *unaff_retaddr;
  int *piVar9;
  
  if (param_3 - (longlong)param_2 < 2) {
    IMAGE_DOS_HEADER_140000000.e_magic[0] = 'M';
    IMAGE_DOS_HEADER_140000000.e_program[4] = 0;
    return 0xffffffff;
  }
  if ((param_2[1] == 0) && (*param_2 == 0x2d)) {
    lVar14 = param_3 - (longlong)(param_2 + 2);
    pbVar12 = param_2 + 2;
joined_r0x000143658595:
    do {
      pbVar3 = pbVar12;
      if (lVar14 < 2) {
        IMAGE_DOS_HEADER_140000000.e_magic[0] = 'M';
        IMAGE_DOS_HEADER_140000000.e_program[4] = 0;
        return 0xffffffff;
      }
      bVar5 = pbVar3[1];
      if (bVar5 != 0) {
        if (0xd7 < bVar5) {
          if (bVar5 < 0xdc) {
            uVar7 = 7;
          }
          else if (bVar5 < 0xe0) {
            uVar7 = 8;
          }
          else {
            if ((bVar5 != 0xff) || (1 < (byte)(*pbVar3 + 2))) goto switchD_14365860e_caseD_5;
            uVar7 = 0;
          }
          goto LAB_1436585f9;
        }
        goto switchD_14365860e_caseD_5;
      }
      bVar5 = *(byte *)((ulonglong)*pbVar3 + 0x90 + param_1);
      uVar7 = (uint)bVar5;
      if (0x1b < bVar5) goto switchD_14365860e_caseD_5;
LAB_1436585f9:
      bVar5 = *(byte *)((longlong)&UINT_1436586b8 + (longlong)(int)uVar7);
      piVar9 = (int *)(ulonglong)bVar5;
      pcVar10 = IMAGE_DOS_HEADER_140000000.e_magic +
                (&switchD_14365860e::switchdataD_1436586a0)[(longlong)piVar9];
      bVar13 = (byte)((ulonglong)pbVar3 >> 8);
      param_2 = pbVar3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar5) {
      case 0:
        goto switchD_14365860e_caseD_0;
      case 1:
        if (lVar14 < 2) {
          IMAGE_DOS_HEADER_140000000.e_magic[0] = 'M';
          IMAGE_DOS_HEADER_140000000.e_program[4] = 0;
          return 0xfffffffe;
        }
      case 5:
switchD_14365860e_caseD_5:
        lVar14 = lVar14 + -2;
        pbVar12 = pbVar3 + 2;
        break;
      case 2:
        if (lVar14 < 3) {
          IMAGE_DOS_HEADER_140000000.e_magic[0] = 'M';
          IMAGE_DOS_HEADER_140000000.e_program[4] = 0;
          return 0xfffffffe;
        }
        lVar14 = lVar14 + -3;
        pbVar12 = pbVar3 + 3;
        break;
      case 3:
        if (lVar14 < 4) {
          IMAGE_DOS_HEADER_140000000.e_magic[0] = 'M';
          IMAGE_DOS_HEADER_140000000.e_program[4] = 0;
          return 0xfffffffe;
        }
        lVar14 = lVar14 + -4;
        pbVar12 = pbVar3 + 4;
        break;
      case 4:
        goto switchD_14365860e_caseD_4;
      case 6:
                    /* WARNING: Read-only address (ram,0x000140000044) is written */
        IMAGE_DOS_HEADER_140000000.e_program[4] = 0;
        *piVar9 = *piVar9 + (uint)bVar5;
        iVar4 = *piVar9;
        *(byte *)piVar9 = (char)*piVar9 + bVar5;
        if (SCARRY1((char)iVar4,bVar5)) {
          *(char *)piVar9 = (char)*piVar9;
          *(char *)((longlong)piVar9 + 0x77) = *(char *)((longlong)piVar9 + 0x77);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 7:
        uVar8 = (ulonglong)(uint)DAT_146b46300;
        if (uVar8 == 0) {
          FUN_1417866a0(&DAT_146b46300,&PTR_Z_Construct_UPackage__Script_Engine_14677f950);
          uVar8 = CONCAT44(DAT_146b46300._4_4_,(uint)DAT_146b46300);
        }
        return uVar8;
      case 8:
        IMAGE_DOS_HEADER_140000000.e_magic[0] = 'M';
        IMAGE_DOS_HEADER_140000000.e_program[4] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        *(byte *)piVar9 = (char)*piVar9 + bVar5;
        *(char *)((longlong)piVar9 + 0x141793b) = *(char *)((longlong)piVar9 + 0x141793b);
        *(byte *)piVar9 = (char)*piVar9 + bVar5;
        uVar7 = in(0x33);
        piVar9 = (int *)(ulonglong)uVar7;
        *piVar9 = *piVar9 + uVar7;
        iVar4 = *piVar9;
        cVar6 = (char)uVar7;
        *(char *)piVar9 = (char)*piVar9 + cVar6;
        if (SCARRY1((char)iVar4,cVar6)) {
          *piVar9 = *piVar9 + uVar7;
          *(char *)piVar9 = (char)*piVar9 + cVar6;
          uVar7 = (uint)CONCAT71((uint7)(uint3)(uVar7 >> 8),0xc5) ^ *(uint *)(pbVar3 + 1);
          pcVar10 = (char *)(ulonglong)uVar7;
          *pcVar10 = *pcVar10 + (char)uVar7;
          pcVar10[0x77] = pcVar10[0x77] + (char)(uVar7 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar7 = uVar7 ^ *(uint *)(pbVar3 + 1);
        bVar5 = (byte)uVar7;
        *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + bVar5;
        cVar6 = bVar5 + bVar13;
        uVar2 = CONCAT31((int3)(uVar7 >> 8),cVar6);
        piVar9 = (int *)(ulonglong)uVar2;
        if (!CARRY1(bVar5,bVar13)) {
          *(char *)((longlong)piVar9 + 0x77) =
               *(char *)((longlong)piVar9 + 0x77) + (char)(uVar7 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *piVar9 = *piVar9 + uVar2;
        *(char *)piVar9 = (char)*piVar9 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xc:
        *(byte *)piVar9 = (char)*piVar9 + bVar5;
                    /* WARNING: Read-only address (ram,0x000140000000) is written */
        IMAGE_DOS_HEADER_140000000.e_magic[0] = 'M';
        uVar1 = in((short)pbVar3);
        *unaff_RDI = uVar1;
        cVar11 = (char)((ulonglong)pcVar10 >> 8);
        *pcVar10 = *pcVar10 + cVar11;
        *(char *)(unaff_RSI + 0xff00000000) = *(char *)(unaff_RSI + 0xff00000000) + cVar11;
        *pcVar10 = *pcVar10 + cVar11;
        *(char *)(in_FS_OFFSET + (longlong)piVar9) =
             *(char *)(in_FS_OFFSET + (longlong)piVar9) + bVar5;
        *(byte *)piVar9 = (char)*piVar9 + bVar5;
        *(byte *)piVar9 = (char)*piVar9 + bVar5;
        *unaff_retaddr = *unaff_retaddr + bVar5;
        *(char *)(lVar14 + (longlong)piVar9) = *(char *)(lVar14 + (longlong)piVar9) + (char)param_3;
        *pcVar10 = *pcVar10;
        cVar6 = in((short)pbVar3);
        *unaff_retaddr = cVar6;
        *pcVar10 = *pcVar10 + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    } while( true );
  }
switchD_14365860e_caseD_0:
  *param_4 = param_2;
  return 0;
switchD_14365860e_caseD_4:
  pbVar12 = pbVar3 + 2;
  lVar14 = lVar14 + -2;
  if (lVar14 < 2) {
    IMAGE_DOS_HEADER_140000000.e_magic[0] = 'M';
    IMAGE_DOS_HEADER_140000000.e_program[4] = 0;
    return 0xffffffff;
  }
  if ((pbVar3[3] != 0) || (*pbVar12 != 0x2d)) goto joined_r0x000143658595;
  param_2 = pbVar3 + 4;
  if (param_3 - (longlong)param_2 < 2) {
    IMAGE_DOS_HEADER_140000000.e_magic[0] = 'M';
    IMAGE_DOS_HEADER_140000000.e_program[4] = 0;
    return 0xffffffff;
  }
  if ((pbVar3[5] == 0) && (*param_2 == 0x3e)) {
    *param_4 = pbVar3 + 6;
    return 0xd;
  }
  goto switchD_14365860e_caseD_0;
}



// FUNCTION 1436586e0 FUN_1436586e0 body=406 status=ok
// SIG undefined FUN_1436586e0(void)

undefined8 FUN_1436586e0(longlong param_1,byte *param_2,longlong param_3,longlong *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  if (param_3 - (longlong)param_2 < 2) {
    return 0xffffffff;
  }
  if (param_2[1] == 0) {
    bVar1 = *(byte *)((ulonglong)*param_2 + 0x90 + param_1);
    if (bVar1 == 0x14) {
      *param_4 = (longlong)(param_2 + 2);
      return 0x21;
    }
    if ((bVar1 - 0x16 & 0xfffffffd) == 0) {
      param_2 = param_2 + 2;
      lVar5 = param_3 - (longlong)param_2;
      do {
        if (lVar5 < 2) {
          return 0xffffffff;
        }
        bVar1 = param_2[1];
        if (bVar1 == 0) {
          uVar4 = *(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1);
        }
        else if (bVar1 < 0xd8) {
LAB_1436587a5:
          uVar4 = 0x1d;
        }
        else if (bVar1 < 0xdc) {
          uVar4 = 7;
        }
        else if (bVar1 < 0xe0) {
          uVar4 = 8;
        }
        else {
          if ((bVar1 != 0xff) || (1 < (byte)(*param_2 + 2))) goto LAB_1436587a5;
          uVar4 = 0;
        }
        switch(uVar4) {
        default:
switchD_1436587cb_caseD_b:
          *param_4 = (longlong)param_2;
          return 0;
        case 0x16:
        case 0x18:
          param_2 = param_2 + 2;
          lVar5 = lVar5 + -2;
          break;
        case 0x1e:
          if (param_3 - (longlong)param_2 < 4) {
            return 0xffffffff;
          }
          if (param_2[3] == 0) {
            uVar2 = (uint)*(byte *)((ulonglong)param_2[2] + 0x90 + param_1);
          }
          else {
            uVar2 = FUN_14365c390(param_2[3],param_2[2]);
          }
          if ((uVar2 < 0x1f) && ((0x40200600U >> (uVar2 & 0x1f) & 1) != 0))
          goto switchD_1436587cb_caseD_b;
        case 9:
        case 10:
        case 0x15:
          *param_4 = (longlong)param_2;
          return 0x10;
        }
      } while( true );
    }
    if (bVar1 == 0x1b) {
      uVar3 = FUN_143658560(param_1,param_2 + 2);
      return uVar3;
    }
  }
  *param_4 = (longlong)param_2;
  return 0;
}



// FUNCTION 1436588a0 FUN_1436588a0 body=752 status=ok
// SIG undefined FUN_1436588a0(void)

undefined8 FUN_1436588a0(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  lVar4 = param_3 - (longlong)param_2;
  if (lVar4 < 2) {
    return 0xffffffff;
  }
  bVar1 = param_2[1];
  if (bVar1 == 0) {
    uVar3 = *(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1);
  }
  else if (bVar1 < 0xd8) {
LAB_14365891a:
    uVar3 = 0x1d;
  }
  else if (bVar1 < 0xdc) {
    uVar3 = 7;
  }
  else if (bVar1 < 0xe0) {
    uVar3 = 8;
  }
  else {
    if ((bVar1 != 0xff) || (1 < (byte)(*param_2 + 2))) goto LAB_14365891a;
    uVar3 = 0;
  }
  switch(uVar3) {
  case 6:
    if (lVar4 < 3) {
      return 0xfffffffe;
    }
    break;
  case 7:
    if (lVar4 < 4) {
      return 0xfffffffe;
    }
    break;
  case 0x16:
  case 0x18:
switchD_14365894c_caseD_16:
    param_2 = param_2 + 2;
    lVar4 = param_3 - (longlong)param_2;
    do {
      if (lVar4 < 2) {
        return 0xffffffff;
      }
      bVar1 = param_2[1];
      if (bVar1 == 0) {
        uVar3 = *(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1);
      }
      else if (bVar1 < 0xd8) {
LAB_1436589d8:
        uVar3 = 0x1d;
      }
      else if (bVar1 < 0xdc) {
        uVar3 = 7;
      }
      else if (bVar1 < 0xe0) {
        uVar3 = 8;
      }
      else {
        if ((bVar1 != 0xff) || (1 < (byte)(*param_2 + 2))) goto LAB_1436589d8;
        uVar3 = 0;
      }
      switch(uVar3) {
      case 5:
        if (param_3 - (longlong)param_2 < 2) {
          return 0xfffffffe;
        }
        goto switchD_14365894c_caseD_5;
      case 6:
        if (param_3 - (longlong)param_2 < 3) {
          return 0xfffffffe;
        }
        goto switchD_14365894c_caseD_5;
      case 7:
        if (param_3 - (longlong)param_2 < 4) {
          return 0xfffffffe;
        }
      default:
        goto switchD_14365894c_caseD_5;
      case 9:
      case 10:
      case 0x15:
        param_2 = param_2 + 2;
        param_3 = param_3 - (longlong)param_2;
        if (param_3 < 2) {
          return 0xffffffff;
        }
        goto LAB_143658ad0;
      case 0xb:
        goto switchD_1436589fe_caseD_b;
      case 0x1d:
        if ((*(uint *)(&DAT_145b5bfa0 +
                      ((ulonglong)(*param_2 >> 5) + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar1] * 8) *
                      4) >> (*param_2 & 0x1f) & 1) == 0) goto switchD_14365894c_caseD_5;
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        param_2 = param_2 + 2;
        lVar4 = lVar4 + -2;
      }
    } while( true );
  case 0x1d:
    if ((*(uint *)(&DAT_145b5bfa0 +
                  ((ulonglong)(*param_2 >> 5) + (ulonglong)(byte)(&DAT_145b5c4a0)[bVar1] * 8) * 4)
         >> (*param_2 & 0x1f) & 1) != 0) goto switchD_14365894c_caseD_16;
  }
switchD_14365894c_caseD_5:
  *param_4 = param_2;
  return 0;
LAB_143658ad0:
  if (param_2[1] == 0) {
    uVar2 = (uint)*(byte *)((ulonglong)*param_2 + 0x90 + param_1);
  }
  else {
    uVar2 = FUN_14365c390(param_2[1],*param_2);
  }
  if ((int)uVar2 < 9) goto switchD_14365894c_caseD_5;
  if (10 < (int)uVar2) {
    if (uVar2 == 0xb) {
switchD_1436589fe_caseD_b:
      *param_4 = param_2 + 2;
      return 5;
    }
    if (uVar2 != 0x15) goto switchD_14365894c_caseD_5;
  }
  param_2 = param_2 + 2;
  param_3 = param_3 + -2;
  if (param_3 < 2) {
    return 0xffffffff;
  }
  goto LAB_143658ad0;
}



// FUNCTION 143658c00 FUN_143658c00 body=219 status=ok
// SIG undefined FUN_143658c00(void)

undefined8 FUN_143658c00(longlong param_1,byte *param_2,longlong param_3,longlong *param_4)

{
  byte bVar1;
  uint uVar2;
  
  if (param_3 - (longlong)param_2 < 2) {
    return 0xffffffff;
  }
  bVar1 = param_2[1];
  if (bVar1 == 0) {
    uVar2 = (uint)*(byte *)((ulonglong)*param_2 + 0x90 + param_1);
    goto LAB_143658c55;
  }
  if (0xd7 < bVar1) {
    if (bVar1 < 0xdc) {
      uVar2 = 7;
      goto LAB_143658c55;
    }
    if (bVar1 < 0xe0) {
      uVar2 = 8;
      goto LAB_143658c55;
    }
    if ((bVar1 == 0xff) && ((byte)(*param_2 + 2) < 2)) {
      uVar2 = 0;
      goto LAB_143658c55;
    }
  }
  uVar2 = 0x1d;
LAB_143658c55:
  if (uVar2 - 0x18 < 2) {
    param_2 = param_2 + 2;
    param_3 = param_3 - (longlong)param_2;
    do {
      if (param_3 < 2) {
        return 0xffffffff;
      }
      bVar1 = param_2[1];
      if (bVar1 == 0) {
        bVar1 = *(byte *)((ulonglong)*param_2 + 0x90 + param_1);
        uVar2 = (uint)bVar1;
        if (bVar1 == 0x12) {
          *param_4 = (longlong)(param_2 + 2);
          return 10;
        }
      }
      else if (bVar1 < 0xd8) {
LAB_143658cba:
        uVar2 = 0x1d;
      }
      else if (bVar1 < 0xdc) {
        uVar2 = 7;
      }
      else if (bVar1 < 0xe0) {
        uVar2 = 8;
      }
      else {
        if ((bVar1 != 0xff) || (1 < (byte)(*param_2 + 2))) goto LAB_143658cba;
        uVar2 = 0;
      }
      if (1 < uVar2 - 0x18) break;
      param_2 = param_2 + 2;
      param_3 = param_3 + -2;
    } while( true );
  }
  *param_4 = (longlong)param_2;
  return 0;
}



// FUNCTION 143658ce0 FUN_143658ce0 body=339 status=ok
// SIG undefined FUN_143658ce0(void)

undefined8
FUN_143658ce0(uint param_1,longlong param_2,byte *param_3,longlong param_4,undefined8 *param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = param_4 - (longlong)param_3;
  do {
    pbVar2 = param_3;
    if (lVar4 < 2) {
      return 0xffffffff;
    }
    bVar1 = pbVar2[1];
    if (bVar1 == 0) {
      uVar3 = (uint)*(byte *)((ulonglong)*pbVar2 + 0x90 + param_2);
    }
    else if (bVar1 < 0xd8) {
LAB_143658d46:
      uVar3 = 0x1d;
    }
    else if (bVar1 < 0xdc) {
      uVar3 = 7;
    }
    else if (bVar1 < 0xe0) {
      uVar3 = 8;
    }
    else {
      if ((bVar1 != 0xff) || (1 < (byte)(*pbVar2 + 2))) goto LAB_143658d46;
      uVar3 = 0;
    }
    switch(uVar3) {
    case 0:
    case 1:
    case 8:
      *param_5 = pbVar2;
      return 0;
    case 5:
      if (lVar4 < 2) {
        return 0xfffffffe;
      }
    default:
      lVar4 = lVar4 + -2;
      param_3 = pbVar2 + 2;
      break;
    case 6:
      if (lVar4 < 3) {
        return 0xfffffffe;
      }
      lVar4 = lVar4 + -3;
      param_3 = pbVar2 + 3;
      break;
    case 7:
      if (lVar4 < 4) {
        return 0xfffffffe;
      }
      lVar4 = lVar4 + -4;
      param_3 = pbVar2 + 4;
      break;
    case 0xc:
    case 0xd:
      param_3 = pbVar2 + 2;
      lVar4 = lVar4 + -2;
      if (uVar3 == param_1) {
        if (param_4 - (longlong)param_3 < 2) {
          return 0xffffffe5;
        }
        *param_5 = param_3;
        if (pbVar2[3] == 0) {
          uVar3 = (uint)*(byte *)((ulonglong)*param_3 + 0x90 + param_2);
        }
        else {
          uVar3 = FUN_14365c390(pbVar2[3],*param_3);
        }
        if ((uVar3 < 0x1f) && ((0x40300e00U >> (uVar3 & 0x1f) & 1) != 0)) {
          return 0x1b;
        }
        return 0;
      }
    }
  } while( true );
}



// FUNCTION 143658e70 FUN_143658e70 body=1294 status=ok
// SIG undefined FUN_143658e70(void)

undefined8 FUN_143658e70(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  
  lVar5 = param_3 - (longlong)param_2;
  if (lVar5 < 2) {
    return 0xffffffff;
  }
  bVar1 = param_2[1];
  if (bVar1 == 0) {
    uVar4 = *(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1);
  }
  else if (bVar1 < 0xd8) {
LAB_143658ee4:
    uVar4 = 0x1d;
  }
  else if (bVar1 < 0xdc) {
    uVar4 = 7;
  }
  else if (bVar1 < 0xe0) {
    uVar4 = 8;
  }
  else {
    if ((bVar1 != 0xff) || (1 < (byte)(*param_2 + 2))) goto LAB_143658ee4;
    uVar4 = 0;
  }
  switch(uVar4) {
  case 6:
    if (lVar5 < 3) {
      return 0xfffffffe;
    }
    break;
  case 7:
    if (lVar5 < 4) {
      return 0xfffffffe;
    }
    break;
  case 0xf:
    uVar3 = FUN_143659790(param_1,param_2 + 2);
    return uVar3;
  case 0x10:
    pbVar7 = param_2 + 2;
    if (param_3 - (longlong)pbVar7 < 2) {
      return 0xffffffff;
    }
    if (param_2[3] == 0) {
      uVar2 = (uint)*(byte *)((ulonglong)*pbVar7 + 0x90 + param_1);
    }
    else {
      uVar2 = FUN_14365c390(param_2[3],*pbVar7);
    }
    if (uVar2 == 0x14) {
      pbVar7 = pbVar7 + 2;
      if (param_3 - (longlong)pbVar7 < 0xc) {
        return 0xffffffff;
      }
      lVar5 = 0;
      while ((pbVar7[1] == 0 && (*pbVar7 == (&DAT_145b5c6a0)[lVar5]))) {
        lVar5 = lVar5 + 1;
        pbVar7 = pbVar7 + 2;
        if (5 < lVar5) {
          *param_4 = pbVar7;
          return 8;
        }
      }
      *param_4 = pbVar7;
      return 0;
    }
    param_2 = pbVar7;
    if (uVar2 == 0x1b) {
      uVar3 = FUN_143658560(param_1,pbVar7 + 2);
      return uVar3;
    }
    break;
  case 0x11:
    uVar3 = FUN_1436588a0(param_1,param_2 + 2);
    return uVar3;
  case 0x16:
  case 0x18:
switchD_143658f18_caseD_16:
    param_2 = param_2 + 2;
    bVar8 = false;
    lVar5 = param_3 - (longlong)param_2;
    if (lVar5 < 2) {
      return 0xffffffff;
    }
    do {
      bVar1 = param_2[1];
      if (bVar1 == 0) {
        uVar4 = *(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1);
      }
      else if (bVar1 < 0xd8) {
LAB_143658fb4:
        uVar4 = 0x1d;
      }
      else if (bVar1 < 0xdc) {
        uVar4 = 7;
      }
      else if (bVar1 < 0xe0) {
        uVar4 = 8;
      }
      else {
        if ((bVar1 != 0xff) || (1 < (byte)(*param_2 + 2))) goto LAB_143658fb4;
        uVar4 = 0;
      }
      pbVar7 = param_2;
      switch(uVar4) {
      case 5:
        goto switchD_143658fd3_caseD_5;
      case 6:
        goto switchD_143658fd3_caseD_6;
      case 7:
        goto switchD_143658fd3_caseD_7;
      default:
        goto switchD_143658fd3_caseD_8;
      case 9:
      case 10:
      case 0x15:
        pbVar7 = param_2 + 2;
        lVar5 = param_3 - (longlong)pbVar7;
        if (lVar5 < 2) {
          return 0xffffffff;
        }
        goto LAB_1436590d0;
      case 0xb:
        goto switchD_143658fd3_caseD_b;
      case 0x11:
        goto switchD_143658fd3_caseD_11;
      case 0x17:
        if (!bVar8) {
          pbVar7 = param_2 + 2;
          lVar5 = lVar5 + -2;
          bVar8 = true;
          if (lVar5 < 2) {
            return 0xffffffff;
          }
          bVar1 = param_2[3];
          if (bVar1 == 0) {
            uVar6 = (ulonglong)*pbVar7;
            uVar2 = (uint)*(byte *)(uVar6 + 0x90 + param_1);
          }
          else {
            uVar6 = (ulonglong)*pbVar7;
            uVar2 = FUN_14365c390(bVar1,uVar6);
          }
          switch(uVar2) {
          case 5:
            goto switchD_143658fd3_caseD_5;
          case 6:
            goto switchD_143658fd3_caseD_6;
          case 7:
            goto switchD_143658fd3_caseD_7;
          default:
            break;
          case 0x16:
          case 0x18:
            goto switchD_143658fd3_caseD_16;
          case 0x1d:
            uVar2 = *(uint *)(&DAT_145b5bfa0 +
                             (((uVar6 & 0xff) >> 5) + (ulonglong)(byte)(&DAT_145b5c4a0)[bVar1] * 8)
                             * 4) >> ((uint)uVar6 & 0x1f);
            goto LAB_14365909f;
          }
        }
        goto switchD_143658fd3_caseD_8;
      case 0x1d:
        uVar2 = *(uint *)(&DAT_145b5bfa0 +
                         ((ulonglong)(*param_2 >> 5) + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar1] * 8)
                         * 4) >> (*param_2 & 0x1f);
LAB_14365909f:
        if ((uVar2 & 1) == 0) goto switchD_143658fd3_caseD_8;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
switchD_143658fd3_caseD_16:
        param_2 = pbVar7 + 2;
        lVar5 = lVar5 + -2;
        if (lVar5 < 2) {
          return 0xffffffff;
        }
      }
    } while( true );
  case 0x1d:
    if ((*(uint *)(&DAT_145b5bfa0 +
                  ((ulonglong)(*param_2 >> 5) + (ulonglong)(byte)(&DAT_145b5c4a0)[bVar1] * 8) * 4)
         >> (*param_2 & 0x1f) & 1) != 0) goto switchD_143658f18_caseD_16;
  }
  *param_4 = param_2;
  return 0;
switchD_143658fd3_caseD_11:
  pbVar7 = param_2 + 2;
  if (param_3 - (longlong)pbVar7 < 2) {
    return 0xffffffff;
  }
  if ((param_2[3] == 0) && (*pbVar7 == 0x3e)) {
    *param_4 = param_2 + 4;
    return 4;
  }
  goto switchD_143658fd3_caseD_8;
switchD_143659138_caseD_9:
  pbVar7 = pbVar7 + 2;
  lVar5 = lVar5 + -2;
  if (lVar5 < 2) {
    return 0xffffffff;
  }
  goto LAB_1436590d0;
switchD_143658fd3_caseD_7:
  bVar9 = SBORROW8(param_3 - (longlong)pbVar7,4);
  bVar8 = (param_3 - (longlong)pbVar7) + -4 < 0;
  goto LAB_143659198;
switchD_143658fd3_caseD_6:
  bVar9 = SBORROW8(param_3 - (longlong)pbVar7,3);
  bVar8 = (param_3 - (longlong)pbVar7) + -3 < 0;
  goto LAB_143659198;
switchD_143658fd3_caseD_b:
  *param_4 = pbVar7 + 2;
  return 2;
LAB_1436590d0:
  bVar1 = pbVar7[1];
  if (bVar1 == 0) {
    uVar4 = *(undefined1 *)((ulonglong)*pbVar7 + 0x90 + param_1);
  }
  else if (bVar1 < 0xd8) {
LAB_143659110:
    uVar4 = 0x1d;
  }
  else if (bVar1 < 0xdc) {
    uVar4 = 7;
  }
  else if (bVar1 < 0xe0) {
    uVar4 = 8;
  }
  else {
    if ((bVar1 != 0xff) || (1 < (byte)(*pbVar7 + 2))) goto LAB_143659110;
    uVar4 = 0;
  }
  param_2 = pbVar7;
  switch(uVar4) {
  case 5:
    goto switchD_143658fd3_caseD_5;
  case 6:
    goto switchD_143658fd3_caseD_6;
  case 7:
    goto switchD_143658fd3_caseD_7;
  default:
    goto switchD_143658fd3_caseD_8;
  case 9:
  case 10:
  case 0x15:
    goto switchD_143659138_caseD_9;
  case 0xb:
    goto switchD_143658fd3_caseD_b;
  case 0x11:
    goto switchD_143658fd3_caseD_11;
  case 0x16:
  case 0x18:
    break;
  case 0x1d:
    if ((*(uint *)(&DAT_145b5bfa0 +
                  ((ulonglong)(*pbVar7 >> 5) + (ulonglong)(byte)(&DAT_145b5c4a0)[pbVar7[1]] * 8) * 4
                  ) >> (*pbVar7 & 0x1f) & 1) == 0) goto switchD_143658fd3_caseD_8;
  }
  uVar3 = FUN_143657e60(param_1,pbVar7 + 2,param_3);
  return uVar3;
switchD_143658fd3_caseD_5:
  bVar9 = SBORROW8(param_3 - (longlong)pbVar7,2);
  bVar8 = (param_3 - (longlong)pbVar7) + -2 < 0;
LAB_143659198:
  if (bVar9 == bVar8) {
switchD_143658fd3_caseD_8:
    *param_4 = pbVar7;
    uVar3 = 0;
  }
  else {
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}



// FUNCTION 1436594a0 FUN_1436594a0 body=626 status=ok
// SIG undefined FUN_1436594a0(void)

undefined8 FUN_1436594a0(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = param_3 - (longlong)param_2;
  if (lVar3 < 2) {
    return 0xffffffff;
  }
  bVar1 = param_2[1];
  if (bVar1 == 0) {
    uVar2 = *(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1);
    goto LAB_14365950f;
  }
  if (0xd7 < bVar1) {
    if (bVar1 < 0xdc) {
      uVar2 = 7;
      goto LAB_14365950f;
    }
    if (bVar1 < 0xe0) {
      uVar2 = 8;
      goto LAB_14365950f;
    }
    if ((bVar1 == 0xff) && ((byte)(*param_2 + 2) < 2)) {
      uVar2 = 0;
      goto LAB_14365950f;
    }
  }
  uVar2 = 0x1d;
LAB_14365950f:
  switch(uVar2) {
  case 6:
    if (lVar3 < 3) {
      return 0xfffffffe;
    }
    break;
  case 7:
    if (lVar3 < 4) {
      return 0xfffffffe;
    }
    break;
  case 9:
  case 10:
  case 0x15:
  case 0x1e:
    *param_4 = param_2;
    return 0x16;
  case 0x1d:
    if ((*(uint *)(&DAT_145b5bfa0 +
                  ((ulonglong)(*param_2 >> 5) + (ulonglong)(byte)(&DAT_145b5c4a0)[bVar1] * 8) * 4)
         >> (*param_2 & 0x1f) & 1) == 0) {
switchD_1436595fa_caseD_8:
      *param_4 = param_2;
      return 0;
    }
  case 0x16:
  case 0x18:
    param_2 = param_2 + 2;
    lVar3 = param_3 - (longlong)param_2;
    do {
      if (lVar3 < 2) {
        return 0xffffffff;
      }
      bVar1 = param_2[1];
      if (bVar1 == 0) {
        uVar2 = *(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1);
      }
      else if (bVar1 < 0xd8) {
LAB_1436595d8:
        uVar2 = 0x1d;
      }
      else if (bVar1 < 0xdc) {
        uVar2 = 7;
      }
      else if (bVar1 < 0xe0) {
        uVar2 = 8;
      }
      else {
        if ((bVar1 != 0xff) || (1 < (byte)(*param_2 + 2))) goto LAB_1436595d8;
        uVar2 = 0;
      }
      switch(uVar2) {
      case 5:
        if (param_3 - (longlong)param_2 < 2) {
          return 0xfffffffe;
        }
        goto switchD_1436595fa_caseD_8;
      case 6:
        if (param_3 - (longlong)param_2 < 3) {
          return 0xfffffffe;
        }
        goto switchD_1436595fa_caseD_8;
      case 7:
        if (param_3 - (longlong)param_2 < 4) {
          return 0xfffffffe;
        }
      default:
        goto switchD_1436595fa_caseD_8;
      case 0x12:
        *param_4 = param_2 + 2;
        return 0x1c;
      case 0x1d:
        if ((*(uint *)(&DAT_145b5bfa0 +
                      ((ulonglong)(*param_2 >> 5) + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar1] * 8) *
                      4) >> (*param_2 & 0x1f) & 1) == 0) goto switchD_1436595fa_caseD_8;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        param_2 = param_2 + 2;
        lVar3 = lVar3 + -2;
      }
    } while( true );
  }
  *param_4 = param_2;
  return 0;
}



// FUNCTION 143659790 FUN_143659790 body=1037 status=ok
// SIG undefined FUN_143659790(void)

ulonglong FUN_143659790(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  
  lVar5 = param_3 - (longlong)param_2;
  if (lVar5 < 2) {
    return 0xffffffff;
  }
  bVar2 = param_2[1];
  bVar9 = false;
  if (bVar2 == 0) {
    uVar4 = *(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1);
  }
  else if (bVar2 < 0xd8) {
LAB_14365980c:
    uVar4 = 0x1d;
  }
  else if (bVar2 < 0xdc) {
    uVar4 = 7;
  }
  else if (bVar2 < 0xe0) {
    uVar4 = 8;
  }
  else {
    if ((bVar2 != 0xff) || (1 < (byte)(*param_2 + 2))) goto LAB_14365980c;
    uVar4 = 0;
  }
  switch(uVar4) {
  case 6:
    if (lVar5 < 3) {
      return 0xfffffffe;
    }
    break;
  case 7:
    if (lVar5 < 4) {
      return 0xfffffffe;
    }
    break;
  case 0x16:
  case 0x18:
switchD_143659840_caseD_16:
    pbVar7 = param_2 + 2;
    lVar5 = param_3 - (longlong)pbVar7;
    pbVar6 = pbVar7;
    if (lVar5 < 2) {
      return 0xffffffff;
    }
LAB_143659894:
    bVar2 = pbVar6[1];
    if (bVar2 == 0) {
      uVar4 = *(undefined1 *)((ulonglong)*pbVar6 + 0x90 + param_1);
    }
    else if (bVar2 < 0xd8) {
LAB_1436598dc:
      uVar4 = 0x1d;
    }
    else if (bVar2 < 0xdc) {
      uVar4 = 7;
    }
    else if (bVar2 < 0xe0) {
      uVar4 = 8;
    }
    else {
      if ((bVar2 != 0xff) || (1 < (byte)(*pbVar6 + 2))) goto LAB_1436598dc;
      uVar4 = 0;
    }
    switch(uVar4) {
    case 5:
      bVar10 = SBORROW8(param_3 - (longlong)pbVar6,2);
      bVar9 = (param_3 - (longlong)pbVar6) + -2 < 0;
      break;
    case 6:
      bVar10 = SBORROW8(param_3 - (longlong)pbVar6,3);
      bVar9 = (param_3 - (longlong)pbVar6) + -3 < 0;
      break;
    case 7:
      bVar10 = SBORROW8(param_3 - (longlong)pbVar6,4);
      bVar9 = (param_3 - (longlong)pbVar6) + -4 < 0;
      break;
    default:
      goto switchD_143659904_caseD_8;
    case 9:
    case 10:
    case 0x15:
      uVar8 = 0xb;
      if (((longlong)pbVar6 - (longlong)param_2 == 6) && (param_2[1] == 0)) {
        if (*param_2 == 0x58) {
          bVar9 = true;
        }
        else if (*param_2 != 0x78) goto LAB_1436599f8;
        if (param_2[3] == 0) {
          if (*pbVar7 == 0x4d) {
            bVar9 = true;
          }
          else if (*pbVar7 != 0x6d) goto LAB_1436599f8;
          if (param_2[5] == 0) {
            if (param_2[4] == 0x4c) goto switchD_143659904_caseD_8;
            if (param_2[4] == 0x6c) {
              if (bVar9) goto switchD_143659904_caseD_8;
              uVar8 = 0xc;
            }
          }
        }
      }
LAB_1436599f8:
      pbVar7 = pbVar6 + 2;
      param_3 = param_3 - (longlong)pbVar7;
      if (param_3 < 2) {
        return 0xffffffff;
      }
      goto LAB_143659a10;
    case 0xf:
      uVar8 = 0xb;
      if (((longlong)pbVar6 - (longlong)param_2 == 6) && (param_2[1] == 0)) {
        if (*param_2 == 0x58) {
          bVar9 = true;
        }
        else if (*param_2 != 0x78) goto LAB_143659b15;
        if (param_2[3] == 0) {
          if (*pbVar7 == 0x4d) {
            bVar9 = true;
          }
          else if (*pbVar7 != 0x6d) goto LAB_143659b15;
          if (param_2[5] == 0) {
            if (param_2[4] == 0x4c) goto switchD_143659904_caseD_8;
            if (param_2[4] == 0x6c) {
              if (bVar9) goto switchD_143659904_caseD_8;
              uVar8 = 0xc;
            }
          }
        }
      }
LAB_143659b15:
      pbVar7 = pbVar6 + 2;
      if (param_3 - (longlong)pbVar7 < 2) {
        return 0xffffffff;
      }
      pbVar1 = pbVar6 + 3;
      pbVar6 = pbVar7;
      if ((*pbVar1 != 0) || (*pbVar7 != 0x3e)) goto switchD_143659904_caseD_8;
      goto LAB_143659b33;
    case 0x16:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
      goto switchD_143659904_caseD_16;
    case 0x1d:
      if ((*(uint *)(&DAT_145b5bfa0 +
                    ((ulonglong)(*pbVar6 >> 5) + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar2] * 8) * 4)
           >> (*pbVar6 & 0x1f) & 1) != 0) goto switchD_143659904_caseD_16;
      goto switchD_143659904_caseD_8;
    }
    if (bVar10 != bVar9) {
      return 0xfffffffe;
    }
    goto switchD_143659904_caseD_8;
  case 0x1d:
    if ((*(uint *)(&DAT_145b5bfa0 +
                  ((ulonglong)(*param_2 >> 5) + (ulonglong)(byte)(&DAT_145b5c4a0)[bVar2] * 8) * 4)
         >> (*param_2 & 0x1f) & 1) != 0) goto switchD_143659840_caseD_16;
  }
  *param_4 = param_2;
  return 0;
switchD_143659904_caseD_16:
  pbVar6 = pbVar6 + 2;
  lVar5 = lVar5 + -2;
  if (lVar5 < 2) {
    return 0xffffffff;
  }
  goto LAB_143659894;
LAB_143659a10:
  if (pbVar7[1] == 0) {
    uVar3 = (uint)*(byte *)((ulonglong)*pbVar7 + 0x90 + param_1);
    pbVar6 = pbVar7;
  }
  else {
    uVar3 = FUN_14365c390(pbVar7[1],*pbVar7);
    pbVar6 = pbVar7;
  }
  switch(uVar3) {
  case 0:
  case 1:
  case 8:
switchD_143659904_caseD_8:
    *param_4 = pbVar6;
    return 0;
  case 5:
    if (param_3 < 2) {
      return 0xfffffffe;
    }
  default:
    pbVar7 = pbVar6 + 2;
    param_3 = param_3 + -2;
    break;
  case 6:
    if (param_3 < 3) {
      return 0xfffffffe;
    }
    pbVar7 = pbVar6 + 3;
    param_3 = param_3 + -3;
    break;
  case 7:
    if (param_3 < 4) {
      return 0xfffffffe;
    }
    pbVar7 = pbVar6 + 4;
    param_3 = param_3 + -4;
    break;
  case 0xf:
    pbVar7 = pbVar6 + 2;
    param_3 = param_3 + -2;
    if (param_3 < 2) {
      return 0xffffffff;
    }
    if ((pbVar6[3] == 0) && (*pbVar7 == 0x3e)) {
LAB_143659b33:
      *param_4 = pbVar7 + 2;
      return uVar8 & 0xffffffff;
    }
  }
  if (param_3 < 2) {
    return 0xffffffff;
  }
  goto LAB_143659a10;
}



// FUNCTION 143659c50 FUN_143659c50 body=587 status=ok
// SIG undefined FUN_143659c50(void)

undefined8 FUN_143659c50(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = param_3 - (longlong)param_2;
  if (lVar3 < 2) {
    return 0xffffffff;
  }
  bVar1 = param_2[1];
  if (bVar1 == 0) {
    uVar2 = *(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1);
    goto LAB_143659cbf;
  }
  if (0xd7 < bVar1) {
    if (bVar1 < 0xdc) {
      uVar2 = 7;
      goto LAB_143659cbf;
    }
    if (bVar1 < 0xe0) {
      uVar2 = 8;
      goto LAB_143659cbf;
    }
    if ((bVar1 == 0xff) && ((byte)(*param_2 + 2) < 2)) {
      uVar2 = 0;
      goto LAB_143659cbf;
    }
  }
  uVar2 = 0x1d;
LAB_143659cbf:
  switch(uVar2) {
  case 6:
    if (lVar3 < 3) {
      return 0xfffffffe;
    }
    break;
  case 7:
    if (lVar3 < 4) {
      return 0xfffffffe;
    }
    break;
  case 0x1d:
    if ((*(uint *)(&DAT_145b5bfa0 +
                  ((ulonglong)(*param_2 >> 5) + (ulonglong)(byte)(&DAT_145b5c4a0)[bVar1] * 8) * 4)
         >> (*param_2 & 0x1f) & 1) == 0) {
switchD_143659daa_caseD_8:
      *param_4 = param_2;
      return 0;
    }
  case 0x16:
  case 0x18:
    param_2 = param_2 + 2;
    lVar3 = param_3 - (longlong)param_2;
    do {
      if (lVar3 < 2) {
        return 0xffffffec;
      }
      bVar1 = param_2[1];
      if (bVar1 == 0) {
        uVar2 = *(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1);
      }
      else if (bVar1 < 0xd8) {
LAB_143659d88:
        uVar2 = 0x1d;
      }
      else if (bVar1 < 0xdc) {
        uVar2 = 7;
      }
      else if (bVar1 < 0xe0) {
        uVar2 = 8;
      }
      else {
        if ((bVar1 != 0xff) || (1 < (byte)(*param_2 + 2))) goto LAB_143659d88;
        uVar2 = 0;
      }
      switch(uVar2) {
      case 5:
        if (param_3 - (longlong)param_2 < 2) {
          return 0xfffffffe;
        }
        goto switchD_143659daa_caseD_8;
      case 6:
        if (param_3 - (longlong)param_2 < 3) {
          return 0xfffffffe;
        }
        goto switchD_143659daa_caseD_8;
      case 7:
        if (param_3 - (longlong)param_2 < 4) {
          return 0xfffffffe;
        }
      default:
        goto switchD_143659daa_caseD_8;
      case 9:
      case 10:
      case 0xb:
      case 0x15:
      case 0x1e:
      case 0x20:
      case 0x24:
        *param_4 = param_2;
        return 0x14;
      case 0x1d:
        if ((*(uint *)(&DAT_145b5bfa0 +
                      ((ulonglong)(*param_2 >> 5) + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar1] * 8) *
                      4) >> (*param_2 & 0x1f) & 1) == 0) goto switchD_143659daa_caseD_8;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        param_2 = param_2 + 2;
        lVar3 = lVar3 + -2;
      }
    } while( true );
  }
  *param_4 = param_2;
  return 0;
}



// FUNCTION 143659f10 FUN_143659f10 body=884 status=ok
// SIG undefined FUN_143659f10(void)

undefined8 FUN_143659f10(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  byte *pbVar5;
  longlong lVar6;
  
  lVar6 = param_3 - (longlong)param_2;
  if (lVar6 < 2) {
    return 0xffffffff;
  }
  bVar2 = param_2[1];
  if (bVar2 == 0) {
    uVar4 = *(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1);
    goto LAB_143659f87;
  }
  if (0xd7 < bVar2) {
    if (bVar2 < 0xdc) {
      uVar4 = 7;
      goto LAB_143659f87;
    }
    if (bVar2 < 0xe0) {
      uVar4 = 8;
      goto LAB_143659f87;
    }
    if ((bVar2 == 0xff) && ((byte)(*param_2 + 2) < 2)) {
      uVar4 = 0;
      goto LAB_143659f87;
    }
  }
  uVar4 = 0x1d;
LAB_143659f87:
  switch(uVar4) {
  case 6:
    if (lVar6 < 3) {
      return 0xfffffffe;
    }
    break;
  case 7:
    if (lVar6 < 4) {
      return 0xfffffffe;
    }
    break;
  case 0x13:
    pbVar5 = param_2 + 2;
    if (param_3 - (longlong)pbVar5 < 2) {
      return 0xffffffff;
    }
    if (param_2[3] == 0) {
      if (*pbVar5 == 0x78) {
        uVar3 = FUN_143658c00(param_1,param_2 + 4);
        return uVar3;
      }
      if (*(char *)((ulonglong)*pbVar5 + 0x90 + param_1) == '\x19') {
        param_2 = param_2 + 4;
        param_3 = param_3 - (longlong)param_2;
        while( true ) {
          if (param_3 < 2) {
            return 0xffffffff;
          }
          if (param_2[1] != 0) break;
          cVar1 = *(char *)((ulonglong)*param_2 + 0x90 + param_1);
          if (cVar1 == '\x12') {
            *param_4 = param_2 + 2;
            return 10;
          }
          if (cVar1 != '\x19') break;
          param_2 = param_2 + 2;
          param_3 = param_3 + -2;
        }
        *param_4 = param_2;
        return 0;
      }
    }
    *param_4 = pbVar5;
    return 0;
  case 0x1d:
    if ((*(uint *)(&DAT_145b5bfa0 +
                  ((ulonglong)(*param_2 >> 5) + (ulonglong)(byte)(&DAT_145b5c4a0)[bVar2] * 8) * 4)
         >> (*param_2 & 0x1f) & 1) == 0) {
switchD_14365a07e_caseD_8:
      *param_4 = param_2;
      return 0;
    }
  case 0x16:
  case 0x18:
    param_2 = param_2 + 2;
    lVar6 = param_3 - (longlong)param_2;
    do {
      if (lVar6 < 2) {
        return 0xffffffff;
      }
      bVar2 = param_2[1];
      if (bVar2 == 0) {
        uVar4 = *(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1);
      }
      else if (bVar2 < 0xd8) {
LAB_14365a058:
        uVar4 = 0x1d;
      }
      else if (bVar2 < 0xdc) {
        uVar4 = 7;
      }
      else if (bVar2 < 0xe0) {
        uVar4 = 8;
      }
      else {
        if ((bVar2 != 0xff) || (1 < (byte)(*param_2 + 2))) goto LAB_14365a058;
        uVar4 = 0;
      }
      switch(uVar4) {
      case 5:
        if (param_3 - (longlong)param_2 < 2) {
          return 0xfffffffe;
        }
        goto switchD_14365a07e_caseD_8;
      case 6:
        if (param_3 - (longlong)param_2 < 3) {
          return 0xfffffffe;
        }
        goto switchD_14365a07e_caseD_8;
      case 7:
        if (param_3 - (longlong)param_2 < 4) {
          return 0xfffffffe;
        }
      default:
        goto switchD_14365a07e_caseD_8;
      case 0x12:
        *param_4 = param_2 + 2;
        return 9;
      case 0x1d:
        if ((*(uint *)(&DAT_145b5bfa0 +
                      ((ulonglong)(*param_2 >> 5) + (ulonglong)(byte)(&DAT_145b5c5a0)[bVar2] * 8) *
                      4) >> (*param_2 & 0x1f) & 1) == 0) goto switchD_14365a07e_caseD_8;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        param_2 = param_2 + 2;
        lVar6 = lVar6 + -2;
      }
    } while( true );
  }
  *param_4 = param_2;
  return 0;
}



// FUNCTION 14365a230 FUN_14365a230 body=1145 status=ok
// SIG undefined FUN_14365a230(void)

int FUN_14365a230(longlong param_1,byte *param_2,longlong param_3,longlong *param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  longlong lVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *local_res10;
  
  bVar3 = false;
  pbVar4 = local_res10;
joined_r0x00014365a25f:
  if (param_3 - (longlong)param_2 < 1) {
    return -1;
  }
  pbVar7 = param_2;
  local_res10 = param_2;
  switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
  case 5:
    if (param_3 - (longlong)param_2 < 2) {
      return -2;
    }
    local_res10 = pbVar4;
    iVar5 = (**(code **)(param_1 + 400))(param_1,param_2);
    if (iVar5 == 0) break;
    param_2 = param_2 + 2;
    pbVar4 = local_res10;
    goto joined_r0x00014365a25f;
  case 6:
    if (param_3 - (longlong)param_2 < 3) {
      return -2;
    }
    local_res10 = pbVar4;
    iVar5 = (**(code **)(param_1 + 0x198))(param_1,param_2);
    if (iVar5 != 0) {
      param_2 = param_2 + 3;
      pbVar4 = local_res10;
      goto joined_r0x00014365a25f;
    }
    break;
  case 7:
    if (param_3 - (longlong)param_2 < 4) {
      return -2;
    }
    local_res10 = pbVar4;
    iVar5 = (**(code **)(param_1 + 0x1a0))(param_1,param_2);
LAB_14365a62d:
    if (iVar5 != 0) {
      param_2 = pbVar7 + 4;
      pbVar4 = local_res10;
      goto joined_r0x00014365a25f;
    }
    break;
  case 9:
  case 10:
  case 0x15:
    lVar6 = param_3 - (longlong)param_2;
    while( true ) {
      local_res10 = local_res10 + 1;
      lVar6 = lVar6 + -1;
      if (lVar6 < 1) {
        return -1;
      }
      bVar1 = *(byte *)((ulonglong)*local_res10 + 0x90 + param_1);
      if (bVar1 == 0xe) break;
      if ((1 < bVar1 - 9) && (pbVar7 = local_res10, bVar1 != 0x15)) goto switchD_14365a29e_caseD_8;
    }
  case 0xe:
    bVar3 = false;
    lVar6 = param_3 - (longlong)local_res10;
    while( true ) {
      local_res10 = local_res10 + 1;
      lVar6 = lVar6 + -1;
      if (lVar6 < 1) {
        return -1;
      }
      bVar1 = *(byte *)((ulonglong)*local_res10 + 0x90 + param_1);
      if (bVar1 - 0xc < 2) break;
      if ((1 < bVar1 - 9) && (bVar1 != 0x15)) {
        *param_4 = (longlong)local_res10;
        return 0;
      }
    }
switchD_14365a493_caseD_4:
    local_res10 = local_res10 + 1;
    do {
      pbVar7 = local_res10;
      lVar6 = param_3 - (longlong)local_res10;
      if (lVar6 < 1) {
        return -1;
      }
      bVar2 = *(byte *)((ulonglong)*local_res10 + 0x90 + param_1);
      if (bVar2 == bVar1) {
        pbVar7 = local_res10 + 1;
        lVar6 = param_3 - (longlong)pbVar7;
        if (lVar6 < 1) {
          return -1;
        }
        bVar1 = *(byte *)((ulonglong)*pbVar7 + 0x90 + param_1);
        if (bVar1 < 9) break;
        if (bVar1 < 0xb) goto switchD_14365a5be_caseD_9;
        if (bVar1 == 0xb) goto switchD_14365a5be_caseD_b;
        pbVar8 = pbVar7;
        if (bVar1 == 0x11) goto switchD_14365a5be_caseD_11;
        if (bVar1 == 0x15) goto switchD_14365a5be_caseD_9;
        break;
      }
      switch(bVar2) {
      case 0:
      case 1:
      case 2:
      case 8:
        goto switchD_14365a29e_caseD_8;
      case 3:
        iVar5 = FUN_14365bdb0(param_1,local_res10 + 1,param_3,&local_res10);
        if (iVar5 < 1) {
          if (iVar5 == 0) {
            *param_4 = (longlong)local_res10;
            return 0;
          }
          return iVar5;
        }
        break;
      default:
        goto switchD_14365a493_caseD_4;
      case 5:
        if (lVar6 < 2) {
          return -2;
        }
        iVar5 = (**(code **)(param_1 + 0x1c0))(param_1,local_res10);
        if (iVar5 != 0) goto switchD_14365a29e_caseD_8;
        local_res10 = pbVar7 + 2;
        break;
      case 6:
        if (lVar6 < 3) {
          return -2;
        }
        iVar5 = (**(code **)(param_1 + 0x1c8))(param_1,local_res10);
        if (iVar5 != 0) goto switchD_14365a29e_caseD_8;
        local_res10 = pbVar7 + 3;
        break;
      case 7:
        if (lVar6 < 4) {
          return -2;
        }
        iVar5 = (**(code **)(param_1 + 0x1d0))(param_1,local_res10);
        if (iVar5 != 0) goto switchD_14365a29e_caseD_8;
        local_res10 = pbVar7 + 4;
      }
    } while( true );
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
switchD_14365a29e_caseD_16:
    local_res10 = pbVar4;
    param_2 = pbVar7 + 1;
    pbVar4 = local_res10;
    goto joined_r0x00014365a25f;
  case 0x17:
    if (bVar3) break;
    pbVar7 = param_2 + 1;
    lVar6 = param_3 - (longlong)pbVar7;
    bVar3 = true;
    if (lVar6 < 1) {
      return -1;
    }
    switch(*(undefined1 *)((ulonglong)*pbVar7 + 0x90 + param_1)) {
    case 5:
      if (lVar6 < 2) {
        return -2;
      }
      local_res10 = pbVar4;
      iVar5 = (**(code **)(param_1 + 0x1a8))(param_1,pbVar7);
      if (iVar5 != 0) {
        param_2 = param_2 + 3;
        pbVar4 = local_res10;
        goto joined_r0x00014365a25f;
      }
      break;
    case 6:
      if (lVar6 < 3) {
        return -2;
      }
      local_res10 = pbVar4;
      iVar5 = (**(code **)(param_1 + 0x1b0))(param_1,pbVar7);
      if (iVar5 == 0) break;
      param_2 = param_2 + 4;
      pbVar4 = local_res10;
      goto joined_r0x00014365a25f;
    case 7:
      local_res10 = pbVar4;
LAB_14365a61f:
      if (lVar6 < 4) {
        return -2;
      }
      iVar5 = (**(code **)(param_1 + 0x1b8))(param_1,pbVar7);
      goto LAB_14365a62d;
    case 0x16:
    case 0x18:
      goto switchD_14365a29e_caseD_16;
    }
  }
switchD_14365a29e_caseD_8:
  *param_4 = (longlong)pbVar7;
  return 0;
  do {
    pbVar8 = pbVar7;
    pbVar4 = local_res10;
    switch(*(undefined1 *)((ulonglong)*pbVar7 + 0x90 + param_1)) {
    case 5:
      goto switchD_14365a5be_caseD_5;
    case 6:
      if (param_3 - (longlong)pbVar7 < 3) {
        return -2;
      }
      iVar5 = (**(code **)(param_1 + 0x1b0))(param_1,pbVar7);
      if (iVar5 == 0) goto switchD_14365a29e_caseD_8;
      param_2 = param_2 + 4;
      pbVar4 = local_res10;
      goto joined_r0x00014365a25f;
    case 7:
      lVar6 = param_3 - (longlong)pbVar7;
      goto LAB_14365a61f;
    default:
      goto switchD_14365a29e_caseD_8;
    case 9:
    case 10:
    case 0x15:
switchD_14365a5be_caseD_9:
      param_2 = pbVar7;
      pbVar7 = param_2 + 1;
      lVar6 = lVar6 + -1;
      if (lVar6 < 1) {
        return -1;
      }
      break;
    case 0xb:
      goto switchD_14365a5be_caseD_b;
    case 0x11:
      goto switchD_14365a5be_caseD_11;
    case 0x16:
    case 0x18:
      goto switchD_14365a29e_caseD_16;
    }
  } while( true );
switchD_14365a5be_caseD_11:
  pbVar7 = pbVar8 + 1;
  if (param_3 - (longlong)pbVar7 < 1) {
    return -1;
  }
  if (*pbVar7 == 0x3e) {
    *param_4 = (longlong)(pbVar8 + 2);
    return 3;
  }
  goto switchD_14365a29e_caseD_8;
switchD_14365a5be_caseD_5:
  if (param_3 - (longlong)pbVar7 < 2) {
    return -2;
  }
  iVar5 = (**(code **)(param_1 + 0x1a8))(param_1,pbVar7);
  if (iVar5 != 0) {
    param_2 = param_2 + 3;
    pbVar4 = local_res10;
    goto joined_r0x00014365a25f;
  }
  goto switchD_14365a29e_caseD_8;
switchD_14365a5be_caseD_b:
  *param_4 = (longlong)(pbVar7 + 1);
  return 1;
}



// FUNCTION 14365a790 FUN_14365a790 body=211 status=ok
// SIG undefined FUN_14365a790(void)

undefined8 FUN_14365a790(longlong param_1,byte *param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  byte *pbVar2;
  
  if (0 < param_3 - (longlong)param_2) {
    if (*param_2 == 0x78) {
      pbVar2 = param_2 + 1;
      if (0 < param_3 - (longlong)pbVar2) {
        if (1 < (byte)(*(char *)((ulonglong)*pbVar2 + 0x90 + param_1) - 0x18U)) goto LAB_14365a816;
        pbVar2 = param_2 + 2;
        for (param_3 = param_3 - (longlong)pbVar2; 0 < param_3; param_3 = param_3 + -1) {
          cVar1 = *(char *)((ulonglong)*pbVar2 + 0x90 + param_1);
          if (cVar1 == '\x12') goto LAB_14365a856;
          if (1 < (byte)(cVar1 - 0x18U)) goto LAB_14365a816;
          pbVar2 = pbVar2 + 1;
        }
      }
    }
    else {
      pbVar2 = param_2;
      if (*(char *)((ulonglong)*param_2 + 0x90 + param_1) != '\x19') {
LAB_14365a816:
        *param_4 = (longlong)pbVar2;
        return 0;
      }
      pbVar2 = param_2 + 1;
      param_3 = param_3 - (longlong)pbVar2;
      if (0 < param_3) {
        while (cVar1 = *(char *)((ulonglong)*pbVar2 + 0x90 + param_1), cVar1 != '\x12') {
          if (cVar1 != '\x19') goto LAB_14365a816;
          pbVar2 = pbVar2 + 1;
          param_3 = param_3 + -1;
          if (param_3 < 1) {
            return 0xffffffff;
          }
        }
LAB_14365a856:
        *param_4 = (longlong)(pbVar2 + 1);
        return 10;
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 14365a870 FUN_14365a870 body=356 status=ok
// SIG undefined FUN_14365a870(void)

undefined8 FUN_14365a870(longlong param_1,char *param_2,longlong param_3,longlong *param_4)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  longlong lVar4;
  
  if (param_3 - (longlong)param_2 < 1) {
    return 0xffffffff;
  }
  if (*param_2 != '-') {
    *param_4 = (longlong)param_2;
    return 0;
  }
  lVar4 = param_3 - (longlong)(param_2 + 1);
  pbVar3 = (byte *)(param_2 + 1);
joined_r0x00014365a8c0:
  pbVar1 = pbVar3;
  if (lVar4 < 1) {
    return 0xffffffff;
  }
  pbVar3 = pbVar1;
  switch(*(undefined1 *)((ulonglong)*pbVar1 + 0x90 + param_1)) {
  case 0:
  case 1:
  case 8:
    goto switchD_14365a8f8_caseD_0;
  default:
    lVar4 = lVar4 + -1;
    pbVar3 = pbVar1 + 1;
    goto joined_r0x00014365a8c0;
  case 5:
    if (1 < lVar4) {
      iVar2 = (**(code **)(param_1 + 0x1c0))(param_1,pbVar1);
      if (iVar2 != 0) goto switchD_14365a8f8_caseD_0;
      lVar4 = lVar4 + -2;
      pbVar3 = pbVar1 + 2;
      goto joined_r0x00014365a8c0;
    }
    break;
  case 6:
    if (2 < lVar4) {
      iVar2 = (**(code **)(param_1 + 0x1c8))(param_1,pbVar1);
      if (iVar2 != 0) goto switchD_14365a8f8_caseD_0;
      lVar4 = lVar4 + -3;
      pbVar3 = pbVar1 + 3;
      goto joined_r0x00014365a8c0;
    }
    break;
  case 7:
    if (3 < lVar4) {
      iVar2 = (**(code **)(param_1 + 0x1d0))(param_1,pbVar1);
      if (iVar2 != 0) goto switchD_14365a8f8_caseD_0;
      lVar4 = lVar4 + -4;
      pbVar3 = pbVar1 + 4;
      goto joined_r0x00014365a8c0;
    }
    break;
  case 0x1b:
    goto switchD_14365a8f8_caseD_1b;
  }
  return 0xfffffffe;
switchD_14365a8f8_caseD_1b:
  lVar4 = lVar4 + -1;
  if (lVar4 < 1) {
    return 0xffffffff;
  }
  pbVar3 = pbVar1 + 1;
  if (pbVar1[1] == 0x2d) {
    pbVar3 = pbVar1 + 2;
    if (param_3 - (longlong)pbVar3 < 1) {
      return 0xffffffff;
    }
    if (*pbVar3 == 0x3e) {
      *param_4 = (longlong)(pbVar1 + 3);
      return 0xd;
    }
switchD_14365a8f8_caseD_0:
    *param_4 = (longlong)pbVar3;
    return 0;
  }
  goto joined_r0x00014365a8c0;
}



// FUNCTION 14365aa10 FUN_14365aa10 body=267 status=ok
// SIG undefined FUN_14365aa10(void)

undefined8 FUN_14365aa10(longlong param_1,byte *param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 - (longlong)param_2 < 1) {
    return 0xffffffff;
  }
  cVar1 = *(char *)((ulonglong)*param_2 + 0x90 + param_1);
  if (cVar1 == '\x14') {
    *param_4 = (longlong)(param_2 + 1);
    return 0x21;
  }
  if ((cVar1 - 0x16U & 0xfd) != 0) {
    if (cVar1 == '\x1b') {
      uVar3 = FUN_14365a870(param_1,param_2 + 1);
      return uVar3;
    }
    *param_4 = (longlong)param_2;
    return 0;
  }
  param_2 = param_2 + 1;
  lVar4 = param_3 - (longlong)param_2;
  do {
    if (lVar4 < 1) {
      return 0xffffffff;
    }
    switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
    default:
switchD_14365aaa9_caseD_b:
      *param_4 = (longlong)param_2;
      return 0;
    case 0x16:
    case 0x18:
      param_2 = param_2 + 1;
      lVar4 = lVar4 + -1;
      break;
    case 0x1e:
      if (param_3 - (longlong)param_2 < 2) {
        return 0xffffffff;
      }
      bVar2 = *(byte *)((ulonglong)param_2[1] + 0x90 + param_1);
      if ((bVar2 < 0x1f) && ((0x40200600U >> (bVar2 & 0x1f) & 1) != 0))
      goto switchD_14365aaa9_caseD_b;
    case 9:
    case 10:
    case 0x15:
      *param_4 = (longlong)param_2;
      return 0x10;
    }
  } while( true );
}



// FUNCTION 14365ab50 FUN_14365ab50 body=545 status=ok
// SIG undefined FUN_14365ab50(void)

undefined8 FUN_14365ab50(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = param_3 - (longlong)param_2;
  if (lVar3 < 1) {
    return 0xffffffff;
  }
  switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
  case 5:
    if (lVar3 < 2) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_1 + 0x1a8))(param_1,param_2);
    if (iVar2 == 0) {
LAB_14365ac25:
      *param_4 = param_2;
      return 0;
    }
    param_2 = param_2 + 2;
    break;
  case 6:
    if (lVar3 < 3) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_1 + 0x1b0))(param_1,param_2);
    if (iVar2 == 0) goto LAB_14365ac25;
    param_2 = param_2 + 3;
    break;
  case 7:
    if (lVar3 < 4) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_1 + 0x1b8))(param_1,param_2);
    if (iVar2 == 0) goto LAB_14365ac25;
    param_2 = param_2 + 4;
    break;
  default:
    *param_4 = param_2;
    return 0;
  case 0x16:
  case 0x18:
    param_2 = param_2 + 1;
  }
  lVar3 = param_3 - (longlong)param_2;
joined_r0x00014365ac42:
  if (lVar3 < 1) {
    return 0xffffffff;
  }
  switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
  case 5:
    if (1 < lVar3) {
      iVar2 = (**(code **)(param_1 + 400))(param_1,param_2);
      if (iVar2 == 0) goto switchD_14365ac7e_caseD_8;
      param_2 = param_2 + 2;
      lVar3 = lVar3 + -2;
      goto joined_r0x00014365ac42;
    }
    break;
  case 6:
    if (2 < lVar3) {
      iVar2 = (**(code **)(param_1 + 0x198))(param_1,param_2);
      if (iVar2 == 0) goto switchD_14365ac7e_caseD_8;
      param_2 = param_2 + 3;
      lVar3 = lVar3 + -3;
      goto joined_r0x00014365ac42;
    }
    break;
  case 7:
    if (3 < lVar3) {
      iVar2 = (**(code **)(param_1 + 0x1a0))(param_1,param_2);
      if (iVar2 == 0) goto switchD_14365ac7e_caseD_8;
      param_2 = param_2 + 4;
      lVar3 = lVar3 + -4;
      goto joined_r0x00014365ac42;
    }
    break;
  default:
    goto switchD_14365ac7e_caseD_8;
  case 9:
  case 10:
  case 0x15:
    param_2 = param_2 + 1;
    param_3 = param_3 - (longlong)param_2;
    if (param_3 < 1) {
      return 0xffffffff;
    }
    goto LAB_14365ad30;
  case 0xb:
    goto switchD_14365ac7e_caseD_b;
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
    goto switchD_14365ac7e_caseD_16;
  }
  return 0xfffffffe;
switchD_14365ac7e_caseD_16:
  param_2 = param_2 + 1;
  lVar3 = lVar3 + -1;
  goto joined_r0x00014365ac42;
LAB_14365ad30:
  bVar1 = *(byte *)((ulonglong)*param_2 + 0x90 + param_1);
  if (bVar1 < 9) {
switchD_14365ac7e_caseD_8:
    *param_4 = param_2;
    return 0;
  }
  if (10 < bVar1) {
    if (bVar1 == 0xb) {
switchD_14365ac7e_caseD_b:
      *param_4 = param_2 + 1;
      return 5;
    }
    if (bVar1 != 0x15) goto switchD_14365ac7e_caseD_8;
  }
  param_2 = param_2 + 1;
  param_3 = param_3 + -1;
  if (param_3 < 1) {
    return 0xffffffff;
  }
  goto LAB_14365ad30;
}



// FUNCTION 14365adf0 FUN_14365adf0 body=336 status=ok
// SIG undefined FUN_14365adf0(void)

undefined8
FUN_14365adf0(uint param_1,longlong param_2,byte *param_3,longlong param_4,undefined8 *param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = param_4 - (longlong)param_3;
joined_r0x00014365ae1e:
  if (lVar4 < 1) {
    return 0xffffffff;
  }
  bVar1 = *(byte *)((ulonglong)*param_3 + 0x90 + param_2);
  switch(bVar1) {
  case 0:
  case 1:
  case 8:
    break;
  default:
    param_3 = param_3 + 1;
    lVar4 = lVar4 + -1;
    goto joined_r0x00014365ae1e;
  case 5:
    if (lVar4 < 2) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_2 + 0x1c0))(param_2,param_3);
    if (iVar2 == 0) {
      param_3 = param_3 + 2;
      lVar4 = lVar4 + -2;
      goto joined_r0x00014365ae1e;
    }
    break;
  case 6:
    if (lVar4 < 3) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_2 + 0x1c8))(param_2,param_3);
    if (iVar2 == 0) {
      param_3 = param_3 + 3;
      lVar4 = lVar4 + -3;
      goto joined_r0x00014365ae1e;
    }
    break;
  case 7:
    if (lVar4 < 4) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_2 + 0x1d0))(param_2,param_3);
    if (iVar2 == 0) {
      param_3 = param_3 + 4;
      lVar4 = lVar4 + -4;
      goto joined_r0x00014365ae1e;
    }
    break;
  case 0xc:
  case 0xd:
    goto switchD_14365ae4f_caseD_c;
  }
  *param_5 = param_3;
  goto LAB_14365af0c;
switchD_14365ae4f_caseD_c:
  param_3 = param_3 + 1;
  lVar4 = lVar4 + -1;
  if (bVar1 == param_1) {
    if (param_4 - (longlong)param_3 < 1) {
      uVar3 = 0xffffffe5;
    }
    else {
      *param_5 = param_3;
      bVar1 = *(byte *)((ulonglong)*param_3 + 0x90 + param_2);
      if ((bVar1 < 0x1f) && ((0x40300e00U >> (bVar1 & 0x1f) & 1) != 0)) {
        uVar3 = 0x1b;
      }
      else {
LAB_14365af0c:
        uVar3 = 0;
      }
    }
    return uVar3;
  }
  goto joined_r0x00014365ae1e;
}



// FUNCTION 14365af80 FUN_14365af80 body=1082 status=ok
// SIG undefined FUN_14365af80(void)

longlong FUN_14365af80(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  
  lVar4 = param_3 - (longlong)param_2;
  if (lVar4 < 1) {
    return 0xffffffff;
  }
  pbVar5 = param_2;
  switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
  case 5:
    if (lVar4 < 2) {
      return 0xfffffffe;
    }
    iVar3 = (**(code **)(param_1 + 0x1a8))(param_1,param_2);
    if (iVar3 == 0) {
LAB_14365b052:
      *param_4 = param_2;
      return 0;
    }
    param_2 = param_2 + 2;
    break;
  case 6:
    if (lVar4 < 3) {
      return 0xfffffffe;
    }
    iVar3 = (**(code **)(param_1 + 0x1b0))(param_1,param_2);
    if (iVar3 == 0) goto LAB_14365b052;
    param_2 = param_2 + 3;
    break;
  case 7:
    if (lVar4 < 4) {
      return 0xfffffffe;
    }
    iVar3 = (**(code **)(param_1 + 0x1b8))(param_1,param_2);
    if (iVar3 == 0) goto LAB_14365b052;
    param_2 = param_2 + 4;
    break;
  case 0xf:
    lVar4 = FUN_14365b730(param_1,param_2 + 1);
    return lVar4;
  case 0x10:
    pbVar5 = param_2 + 1;
    if (param_3 - (longlong)pbVar5 < 1) {
      return 0xffffffff;
    }
    cVar1 = *(char *)((ulonglong)*pbVar5 + 0x90 + param_1);
    if (cVar1 == '\x14') {
      param_2 = param_2 + 2;
      if (param_3 - (longlong)param_2 < 6) {
        return 0xffffffff;
      }
      lVar6 = 0;
      lVar4 = lVar6;
      do {
        if (*param_2 != (&DAT_145b5bf98)[lVar4]) goto LAB_14365b38e;
        lVar4 = lVar4 + 1;
        param_2 = param_2 + 1;
      } while (lVar4 < 6);
      lVar6 = 8;
LAB_14365b38e:
      *param_4 = param_2;
      return lVar6;
    }
    if (cVar1 == '\x1b') {
      lVar4 = FUN_14365a870(param_1,param_2 + 2);
      return lVar4;
    }
  default:
    *param_4 = pbVar5;
    return 0;
  case 0x11:
    lVar4 = FUN_14365ab50(param_1,param_2 + 1);
    return lVar4;
  case 0x16:
  case 0x18:
    param_2 = param_2 + 1;
  }
  bVar2 = false;
  lVar4 = param_3 - (longlong)param_2;
  if (lVar4 < 1) {
    return 0xffffffff;
  }
LAB_14365b080:
  pbVar5 = param_2;
  switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
  case 5:
    if (lVar4 < 2) {
      return 0xfffffffe;
    }
    iVar3 = (**(code **)(param_1 + 400))(param_1,param_2);
    goto LAB_14365b162;
  case 6:
    if (lVar4 < 3) {
      return 0xfffffffe;
    }
    iVar3 = (**(code **)(param_1 + 0x198))(param_1,param_2);
LAB_14365b18a:
    if (iVar3 == 0) goto switchD_14365b0a5_caseD_8;
    param_2 = param_2 + 3;
    lVar4 = lVar4 + -3;
    break;
  case 7:
    if (lVar4 < 4) {
      return 0xfffffffe;
    }
    iVar3 = (**(code **)(param_1 + 0x1a0))(param_1,param_2);
LAB_14365b1b2:
    if (iVar3 == 0) goto switchD_14365b0a5_caseD_8;
    param_2 = param_2 + 4;
    lVar4 = lVar4 + -4;
    break;
  default:
    goto switchD_14365b0a5_caseD_8;
  case 9:
  case 10:
  case 0x15:
    param_2 = param_2 + 1;
    lVar4 = param_3 - (longlong)param_2;
    if (lVar4 < 1) {
      return 0xffffffff;
    }
    goto LAB_14365b200;
  case 0xb:
    goto switchD_14365b0a5_caseD_b;
  case 0x11:
    goto switchD_14365b0a5_caseD_11;
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
switchD_14365b0a5_caseD_16:
    param_2 = param_2 + 1;
    lVar4 = lVar4 + -1;
    break;
  case 0x17:
    if (!bVar2) {
      bVar2 = true;
      param_2 = param_2 + 1;
      lVar4 = lVar4 + -1;
      if (lVar4 < 1) {
        return 0xffffffff;
      }
      switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
      case 5:
        goto switchD_14365b142_caseD_5;
      case 6:
        if (lVar4 < 3) {
          return 0xfffffffe;
        }
        iVar3 = (**(code **)(param_1 + 0x1b0))(param_1,param_2);
        goto LAB_14365b18a;
      case 7:
        if (lVar4 < 4) {
          return 0xfffffffe;
        }
        iVar3 = (**(code **)(param_1 + 0x1b8))(param_1,param_2);
        goto LAB_14365b1b2;
      default:
        break;
      case 0x16:
      case 0x18:
        goto switchD_14365b0a5_caseD_16;
      }
    }
    goto switchD_14365b0a5_caseD_8;
  }
LAB_14365b1c2:
  if (lVar4 < 1) {
    return 0xffffffff;
  }
  goto LAB_14365b080;
switchD_14365b142_caseD_5:
  if (lVar4 < 2) {
    return 0xfffffffe;
  }
  iVar3 = (**(code **)(param_1 + 0x1a8))(param_1,param_2);
LAB_14365b162:
  if (iVar3 == 0) goto switchD_14365b0a5_caseD_8;
  param_2 = param_2 + 2;
  lVar4 = lVar4 + -2;
  goto LAB_14365b1c2;
switchD_14365b22e_caseD_9:
  param_2 = param_2 + 1;
  lVar4 = lVar4 + -1;
  if (lVar4 < 1) {
    return 0xffffffff;
  }
LAB_14365b200:
  pbVar5 = param_2;
  switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
  case 5:
    if (param_3 - (longlong)param_2 < 2) {
      return 0xfffffffe;
    }
    iVar3 = (**(code **)(param_1 + 0x1a8))(param_1,param_2);
    if (iVar3 == 0) goto switchD_14365b0a5_caseD_8;
    param_2 = param_2 + 2;
    break;
  case 6:
    if (param_3 - (longlong)param_2 < 3) {
      return 0xfffffffe;
    }
    iVar3 = (**(code **)(param_1 + 0x1b0))(param_1,param_2);
    if (iVar3 == 0) goto switchD_14365b0a5_caseD_8;
    param_2 = param_2 + 3;
    break;
  case 7:
    if (param_3 - (longlong)param_2 < 4) {
      return 0xfffffffe;
    }
    iVar3 = (**(code **)(param_1 + 0x1b8))(param_1,param_2);
    if (iVar3 == 0) goto switchD_14365b0a5_caseD_8;
    param_2 = param_2 + 4;
    break;
  case 9:
  case 10:
  case 0x15:
    goto switchD_14365b22e_caseD_9;
  case 0xb:
switchD_14365b0a5_caseD_b:
    *param_4 = param_2 + 1;
    return 2;
  case 0x11:
switchD_14365b0a5_caseD_11:
    param_2 = pbVar5 + 1;
    if (param_3 - (longlong)param_2 < 1) {
      return 0xffffffff;
    }
    if (*param_2 == 0x3e) {
      *param_4 = pbVar5 + 2;
      return 4;
    }
  default:
switchD_14365b0a5_caseD_8:
    *param_4 = param_2;
    return 0;
  case 0x16:
  case 0x18:
    param_2 = param_2 + 1;
  }
  lVar4 = FUN_14365a230(param_1,param_2,param_3,param_4);
  return lVar4;
}



// FUNCTION 14365b4e0 FUN_14365b4e0 body=473 status=ok
// SIG undefined FUN_14365b4e0(void)

undefined8 FUN_14365b4e0(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = param_3 - (longlong)param_2;
  if (lVar2 < 1) {
    return 0xffffffff;
  }
  switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
  case 5:
    if (lVar2 < 2) {
      return 0xfffffffe;
    }
    iVar1 = (**(code **)(param_1 + 0x1a8))(param_1,param_2);
    if (iVar1 == 0) {
switchD_14365b5f8_caseD_8:
      *param_4 = param_2;
      return 0;
    }
    param_2 = param_2 + 2;
    break;
  case 6:
    if (lVar2 < 3) {
      return 0xfffffffe;
    }
    iVar1 = (**(code **)(param_1 + 0x1b0))(param_1,param_2);
    if (iVar1 == 0) goto switchD_14365b5f8_caseD_8;
    param_2 = param_2 + 3;
    break;
  case 7:
    if (lVar2 < 4) {
      return 0xfffffffe;
    }
    iVar1 = (**(code **)(param_1 + 0x1b8))(param_1,param_2);
    if (iVar1 == 0) goto switchD_14365b5f8_caseD_8;
    param_2 = param_2 + 4;
    break;
  default:
    *param_4 = param_2;
    return 0;
  case 9:
  case 10:
  case 0x15:
  case 0x1e:
    *param_4 = param_2;
    return 0x16;
  case 0x16:
  case 0x18:
    param_2 = param_2 + 1;
  }
  param_3 = param_3 - (longlong)param_2;
  do {
    if (param_3 < 1) {
      return 0xffffffff;
    }
    switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
    case 5:
      if (param_3 < 2) {
        return 0xfffffffe;
      }
      iVar1 = (**(code **)(param_1 + 400))(param_1,param_2);
      if (iVar1 == 0) goto switchD_14365b5f8_caseD_8;
      param_2 = param_2 + 2;
      param_3 = param_3 + -2;
      break;
    case 6:
      if (param_3 < 3) {
        return 0xfffffffe;
      }
      iVar1 = (**(code **)(param_1 + 0x198))(param_1,param_2);
      if (iVar1 == 0) goto switchD_14365b5f8_caseD_8;
      param_2 = param_2 + 3;
      param_3 = param_3 + -3;
      break;
    case 7:
      if (param_3 < 4) {
        return 0xfffffffe;
      }
      iVar1 = (**(code **)(param_1 + 0x1a0))(param_1,param_2);
      if (iVar1 == 0) goto switchD_14365b5f8_caseD_8;
      param_2 = param_2 + 4;
      param_3 = param_3 + -4;
      break;
    default:
      goto switchD_14365b5f8_caseD_8;
    case 0x12:
      *param_4 = param_2 + 1;
      return 0x1c;
    case 0x16:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    }
  } while( true );
}



// FUNCTION 14365b730 FUN_14365b730 body=899 status=ok
// SIG undefined FUN_14365b730(void)

undefined4 FUN_14365b730(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined4 uVar5;
  
  lVar3 = param_3 - (longlong)param_2;
  if (lVar3 < 1) {
    return 0xffffffff;
  }
  switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
  case 5:
    if (lVar3 < 2) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_1 + 0x1a8))(param_1,param_2);
    if (iVar2 == 0) {
LAB_14365b805:
      *param_4 = param_2;
      return 0;
    }
    pbVar4 = param_2 + 2;
    break;
  case 6:
    if (lVar3 < 3) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_1 + 0x1b0))(param_1,param_2);
    if (iVar2 == 0) goto LAB_14365b805;
    pbVar4 = param_2 + 3;
    break;
  case 7:
    if (lVar3 < 4) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_1 + 0x1b8))(param_1,param_2);
    if (iVar2 == 0) goto LAB_14365b805;
    pbVar4 = param_2 + 4;
    break;
  default:
    *param_4 = param_2;
    return 0;
  case 0x16:
  case 0x18:
    pbVar4 = param_2 + 1;
  }
  lVar3 = param_3 - (longlong)pbVar4;
  do {
    if (lVar3 < 1) {
      return 0xffffffff;
    }
    switch(*(undefined1 *)((ulonglong)*pbVar4 + 0x90 + param_1)) {
    case 5:
      if (lVar3 < 2) {
        return 0xfffffffe;
      }
      iVar2 = (**(code **)(param_1 + 400))(param_1,pbVar4);
      if (iVar2 == 0) goto switchD_14365b85e_caseD_8;
      pbVar4 = pbVar4 + 2;
      lVar3 = lVar3 + -2;
      break;
    case 6:
      if (lVar3 < 3) {
        return 0xfffffffe;
      }
      iVar2 = (**(code **)(param_1 + 0x198))(param_1,pbVar4);
      if (iVar2 == 0) goto switchD_14365b85e_caseD_8;
      pbVar4 = pbVar4 + 3;
      lVar3 = lVar3 + -3;
      break;
    case 7:
      if (lVar3 < 4) {
        return 0xfffffffe;
      }
      iVar2 = (**(code **)(param_1 + 0x1a0))(param_1,pbVar4);
      if (iVar2 == 0) goto switchD_14365b85e_caseD_8;
      pbVar4 = pbVar4 + 4;
      lVar3 = lVar3 + -4;
      break;
    default:
      goto switchD_14365b85e_caseD_8;
    case 9:
    case 10:
    case 0x15:
      bVar1 = false;
      uVar5 = 0xb;
      if ((longlong)pbVar4 - (longlong)param_2 == 3) {
        if (*param_2 == 0x58) {
          bVar1 = true;
        }
        else if (*param_2 != 0x78) goto LAB_14365b95d;
        uVar5 = 0xb;
        if (param_2[1] == 0x4d) {
          bVar1 = true;
        }
        else if (param_2[1] != 0x6d) goto LAB_14365b95d;
        if (param_2[2] == 0x4c) goto switchD_14365b85e_caseD_8;
        if (param_2[2] == 0x6c) {
          if (bVar1) goto switchD_14365b85e_caseD_8;
          uVar5 = 0xc;
        }
      }
LAB_14365b95d:
      pbVar4 = pbVar4 + 1;
      param_3 = param_3 - (longlong)pbVar4;
      goto joined_r0x00014365b967;
    case 0xf:
      bVar1 = false;
      uVar5 = 0xb;
      if ((longlong)pbVar4 - (longlong)param_2 == 3) {
        if (*param_2 == 0x58) {
          bVar1 = true;
        }
        else if (*param_2 != 0x78) goto LAB_14365ba87;
        uVar5 = 0xb;
        if (param_2[1] == 0x4d) {
          bVar1 = true;
        }
        else if (param_2[1] != 0x6d) goto LAB_14365ba87;
        if (param_2[2] == 0x4c) goto switchD_14365b85e_caseD_8;
        if (param_2[2] == 0x6c) {
          if (bVar1) goto switchD_14365b85e_caseD_8;
          uVar5 = 0xc;
        }
      }
LAB_14365ba87:
      pbVar4 = pbVar4 + 1;
      if (param_3 - (longlong)pbVar4 < 1) {
        return 0xffffffff;
      }
      if (*pbVar4 != 0x3e) goto switchD_14365b85e_caseD_8;
      goto LAB_14365ba9c;
    case 0x16:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
      pbVar4 = pbVar4 + 1;
      lVar3 = lVar3 + -1;
    }
  } while( true );
joined_r0x00014365b967:
  if (param_3 < 1) {
    return 0xffffffff;
  }
  switch(*(undefined1 *)((ulonglong)*pbVar4 + 0x90 + param_1)) {
  case 0:
  case 1:
  case 8:
switchD_14365b85e_caseD_8:
    *param_4 = pbVar4;
    return 0;
  default:
    pbVar4 = pbVar4 + 1;
    param_3 = param_3 + -1;
    break;
  case 5:
    if (param_3 < 2) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_1 + 0x1c0))(param_1,pbVar4);
    if (iVar2 != 0) goto switchD_14365b85e_caseD_8;
    pbVar4 = pbVar4 + 2;
    param_3 = param_3 + -2;
    break;
  case 6:
    if (param_3 < 3) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_1 + 0x1c8))(param_1,pbVar4);
    if (iVar2 != 0) goto switchD_14365b85e_caseD_8;
    pbVar4 = pbVar4 + 3;
    param_3 = param_3 + -3;
    break;
  case 7:
    if (param_3 < 4) {
      return 0xfffffffe;
    }
    iVar2 = (**(code **)(param_1 + 0x1d0))(param_1,pbVar4);
    if (iVar2 != 0) goto switchD_14365b85e_caseD_8;
    pbVar4 = pbVar4 + 4;
    param_3 = param_3 + -4;
    break;
  case 0xf:
    pbVar4 = pbVar4 + 1;
    param_3 = param_3 + -1;
    if (param_3 < 1) {
      return 0xffffffff;
    }
    if (*pbVar4 == 0x3e) {
LAB_14365ba9c:
      *param_4 = pbVar4 + 1;
      return uVar5;
    }
  }
  goto joined_r0x00014365b967;
}



// FUNCTION 14365bb70 FUN_14365bb70 body=462 status=ok
// SIG undefined FUN_14365bb70(void)

undefined8 FUN_14365bb70(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = param_3 - (longlong)param_2;
  if (lVar2 < 1) {
    return 0xffffffff;
  }
  switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
  case 5:
    if (lVar2 < 2) {
      return 0xfffffffe;
    }
    iVar1 = (**(code **)(param_1 + 0x1a8))(param_1,param_2);
    if (iVar1 == 0) {
switchD_14365bc88_caseD_8:
      *param_4 = param_2;
      return 0;
    }
    param_2 = param_2 + 2;
    break;
  case 6:
    if (lVar2 < 3) {
      return 0xfffffffe;
    }
    iVar1 = (**(code **)(param_1 + 0x1b0))(param_1,param_2);
    if (iVar1 == 0) goto switchD_14365bc88_caseD_8;
    param_2 = param_2 + 3;
    break;
  case 7:
    if (lVar2 < 4) {
      return 0xfffffffe;
    }
    iVar1 = (**(code **)(param_1 + 0x1b8))(param_1,param_2);
    if (iVar1 == 0) goto switchD_14365bc88_caseD_8;
    param_2 = param_2 + 4;
    break;
  default:
    *param_4 = param_2;
    return 0;
  case 0x16:
  case 0x18:
    param_2 = param_2 + 1;
  }
  param_3 = param_3 - (longlong)param_2;
  do {
    if (param_3 < 1) {
      return 0xffffffec;
    }
    switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
    case 5:
      if (param_3 < 2) {
        return 0xfffffffe;
      }
      iVar1 = (**(code **)(param_1 + 400))(param_1,param_2);
      if (iVar1 == 0) goto switchD_14365bc88_caseD_8;
      param_2 = param_2 + 2;
      param_3 = param_3 + -2;
      break;
    case 6:
      if (param_3 < 3) {
        return 0xfffffffe;
      }
      iVar1 = (**(code **)(param_1 + 0x198))(param_1,param_2);
      if (iVar1 == 0) goto switchD_14365bc88_caseD_8;
      param_2 = param_2 + 3;
      param_3 = param_3 + -3;
      break;
    case 7:
      if (param_3 < 4) {
        return 0xfffffffe;
      }
      iVar1 = (**(code **)(param_1 + 0x1a0))(param_1,param_2);
      if (iVar1 == 0) goto switchD_14365bc88_caseD_8;
      param_2 = param_2 + 4;
      param_3 = param_3 + -4;
      break;
    default:
      goto switchD_14365bc88_caseD_8;
    case 9:
    case 10:
    case 0xb:
    case 0x15:
    case 0x1e:
    case 0x20:
    case 0x24:
      *param_4 = param_2;
      return 0x14;
    case 0x16:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    }
  } while( true );
}



// FUNCTION 14365bdb0 FUN_14365bdb0 body=477 status=ok
// SIG undefined FUN_14365bdb0(void)

undefined8 FUN_14365bdb0(longlong param_1,byte *param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = param_3 - (longlong)param_2;
  if (lVar3 < 1) {
    return 0xffffffff;
  }
  switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
  case 5:
    if (lVar3 < 2) {
      return 0xfffffffe;
    }
    iVar1 = (**(code **)(param_1 + 0x1a8))(param_1,param_2);
    if (iVar1 == 0) {
switchD_14365bec8_caseD_8:
      *param_4 = param_2;
      return 0;
    }
    param_2 = param_2 + 2;
    break;
  case 6:
    if (lVar3 < 3) {
      return 0xfffffffe;
    }
    iVar1 = (**(code **)(param_1 + 0x1b0))(param_1,param_2);
    if (iVar1 == 0) goto switchD_14365bec8_caseD_8;
    param_2 = param_2 + 3;
    break;
  case 7:
    if (lVar3 < 4) {
      return 0xfffffffe;
    }
    iVar1 = (**(code **)(param_1 + 0x1b8))(param_1,param_2);
    if (iVar1 == 0) goto switchD_14365bec8_caseD_8;
    param_2 = param_2 + 4;
    break;
  default:
    *param_4 = param_2;
    return 0;
  case 0x13:
    uVar2 = FUN_14365a790(param_1,param_2 + 1);
    return uVar2;
  case 0x16:
  case 0x18:
    param_2 = param_2 + 1;
  }
  param_3 = param_3 - (longlong)param_2;
  do {
    if (param_3 < 1) {
      return 0xffffffff;
    }
    switch(*(undefined1 *)((ulonglong)*param_2 + 0x90 + param_1)) {
    case 5:
      if (param_3 < 2) {
        return 0xfffffffe;
      }
      iVar1 = (**(code **)(param_1 + 400))(param_1,param_2);
      if (iVar1 == 0) goto switchD_14365bec8_caseD_8;
      param_2 = param_2 + 2;
      param_3 = param_3 + -2;
      break;
    case 6:
      if (param_3 < 3) {
        return 0xfffffffe;
      }
      iVar1 = (**(code **)(param_1 + 0x198))(param_1,param_2);
      if (iVar1 == 0) goto switchD_14365bec8_caseD_8;
      param_2 = param_2 + 3;
      param_3 = param_3 + -3;
      break;
    case 7:
      if (param_3 < 4) {
        return 0xfffffffe;
      }
      iVar1 = (**(code **)(param_1 + 0x1a0))(param_1,param_2);
      if (iVar1 == 0) goto switchD_14365bec8_caseD_8;
      param_2 = param_2 + 4;
      param_3 = param_3 + -4;
      break;
    default:
      goto switchD_14365bec8_caseD_8;
    case 0x12:
      *param_4 = param_2 + 1;
      return 9;
    case 0x16:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    }
  } while( true );
}



// FUNCTION 14365c000 FUN_14365c000 body=830 status=ok
// SIG undefined FUN_14365c000(void)

undefined8
FUN_14365c000(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,longlong *param_5
             ,longlong *param_6,longlong *param_7)

{
  uint uVar1;
  int iVar2;
  byte *local_res10;
  longlong local_res18 [2];
  byte local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  byte local_34;
  byte local_33;
  byte local_32;
  undefined1 local_31 [9];
  
  if (param_2 == param_3) {
    *param_4 = 0;
    return 1;
  }
  local_res10 = &local_38;
  local_res18[0] = param_2;
  (**(code **)(param_1 + 0x78))(param_1,local_res18,param_3,&local_res10,&local_37);
  if (((local_res10 != &local_38) && (local_38 < 0x21)) &&
     ((0x100002600U >> ((longlong)(char)local_38 & 0x3fU) & 1) != 0)) {
    do {
      param_2 = param_2 + *(int *)(param_1 + 0x88);
      local_res10 = &local_37;
      local_res18[0] = param_2;
      (**(code **)(param_1 + 0x78))(param_1,local_res18,param_3,&local_res10,&local_36);
      if ((local_res10 == &local_37) || (0x20 < local_37)) break;
    } while ((0x100002600U >> ((longlong)(char)local_37 & 0x3fU) & 1) != 0);
    if (param_2 == param_3) {
      *param_4 = 0;
      return 1;
    }
    *param_4 = param_2;
    while( true ) {
      local_res10 = &local_36;
      local_res18[0] = param_2;
      (**(code **)(param_1 + 0x78))(param_1,local_res18,param_3,&local_res10,&local_35);
      if ((local_res10 == &local_36) || (local_36 == 0xff)) break;
      if (local_36 == 0x3d) {
        *param_5 = param_2;
        goto LAB_14365c1df;
      }
      if ((local_36 < 0x21) && ((0x100002600U >> ((longlong)(char)local_36 & 0x3fU) & 1) != 0)) {
        *param_5 = param_2;
        goto LAB_14365c170;
      }
      param_2 = param_2 + *(int *)(param_1 + 0x88);
    }
  }
  goto LAB_14365c1bf;
  while ((local_35 < 0x21 && ((0x100002600U >> ((longlong)(char)local_35 & 0x3fU) & 1) != 0))) {
LAB_14365c170:
    param_2 = param_2 + *(int *)(param_1 + 0x88);
    local_res10 = &local_35;
    local_res18[0] = param_2;
    (**(code **)(param_1 + 0x78))(param_1,local_res18,param_3,&local_res10,&local_34);
    if (local_res10 == &local_35) goto LAB_14365c1bf;
  }
  if (local_35 == 0x3d) {
LAB_14365c1df:
    if (param_2 != *param_4) {
      param_2 = param_2 + *(int *)(param_1 + 0x88);
      local_res10 = &local_34;
      local_res18[0] = param_2;
      (**(code **)(param_1 + 0x78))(param_1,local_res18,param_3,&local_res10,&local_33);
      if (local_res10 == &local_34) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = (uint)(char)local_34;
      }
      while ((uVar1 < 0x21 && ((0x100002600U >> ((longlong)(int)uVar1 & 0x3fU) & 1) != 0))) {
        param_2 = param_2 + *(int *)(param_1 + 0x88);
        local_res10 = &local_33;
        local_res18[0] = param_2;
        (**(code **)(param_1 + 0x78))(param_1,local_res18,param_3,&local_res10,&local_32);
        if (local_res10 == &local_33) {
          uVar1 = 0xffffffff;
        }
        else {
          uVar1 = (uint)(char)local_33;
        }
      }
      if ((uVar1 == 0x22) || (uVar1 == 0x27)) {
        param_2 = param_2 + *(int *)(param_1 + 0x88);
        *param_6 = param_2;
        while( true ) {
          local_res10 = &local_32;
          local_res18[0] = param_2;
          (**(code **)(param_1 + 0x78))(param_1,local_res18,param_3,&local_res10,local_31);
          if (local_res10 == &local_32) {
            iVar2 = -1;
          }
          else {
            iVar2 = (int)(char)local_32;
          }
          if (iVar2 == (char)uVar1) {
            *param_7 = *(int *)(param_1 + 0x88) + param_2;
            return 1;
          }
          if ((0x19 < iVar2 - 0x61U) &&
             ((0x32 < iVar2 - 0x2dU ||
              ((0x43ffffff01ffbU >> ((ulonglong)(iVar2 - 0x2dU) & 0x3f) & 1) == 0)))) break;
          param_2 = param_2 + *(int *)(param_1 + 0x88);
        }
      }
    }
  }
LAB_14365c1bf:
  *param_7 = param_2;
  return 0;
}



// FUNCTION 14365c340 FUN_14365c340 body=74 status=ok
// SIG undefined FUN_14365c340(void)

int FUN_14365c340(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char *local_res8;
  undefined8 local_res10 [3];
  char local_18;
  undefined1 local_17 [23];
  
  local_res8 = &local_18;
  local_res10[0] = param_2;
  (**(code **)(param_1 + 0x78))(param_1,local_res10,param_3,&local_res8,local_17);
  if (local_res8 == &local_18) {
    return -1;
  }
  return (int)local_18;
}



// FUNCTION 14365c390 FUN_14365c390 body=49 status=ok
// SIG undefined FUN_14365c390(void)

undefined8 FUN_14365c390(byte param_1,char param_2)

{
  if (0xd7 < param_1) {
    if (param_1 < 0xdc) {
      return 7;
    }
    if (param_1 < 0xe0) {
      return 8;
    }
    if ((param_1 == 0xff) && ((byte)(param_2 + 2U) < 2)) {
      return 0;
    }
  }
  return 0x1d;
}



// FUNCTION 14365c3d0 FUN_14365c3d0 body=109 status=ok
// SIG undefined FUN_14365c3d0(void)

undefined8 FUN_14365c3d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(param_1 + 0x1d8))(*(undefined8 *)(param_1 + 0x1e0));
  if (((longlong)iVar1 & 0xffff0000U) == 0) {
    iVar2 = iVar1 >> 8;
    if (iVar2 == 0) {
      if ((&DAT_145b5ba90)[iVar1] == '\0') {
        return 1;
      }
    }
    else if (0xd7 < iVar2) {
      if (iVar2 < 0xe0) {
        return 1;
      }
      if ((iVar2 == 0xff) && (iVar1 - 0xfffeU < 2)) {
        return 1;
      }
    }
    if (-1 < iVar1) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14365c440 FUN_14365c440 body=106 status=ok
// SIG undefined FUN_14365c440(void)

uint FUN_14365c440(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (**(code **)(param_1 + 0x1d8))(*(undefined8 *)(param_1 + 0x1e0));
  uVar2 = (ulonglong)iVar1;
  if ((uVar2 & 0xffff0000) != 0) {
    return 0;
  }
  return *(uint *)(&DAT_145b5bfa0 +
                  ((ulonglong)((uint)((longlong)uVar2 >> 5) & 7) +
                  (ulonglong)(byte)(&DAT_145b5c5a0)[(longlong)uVar2 >> 8] * 8) * 4) &
         1 << ((byte)iVar1 & 0x1f);
}



// FUNCTION 14365c4b0 FUN_14365c4b0 body=106 status=ok
// SIG undefined FUN_14365c4b0(void)

uint FUN_14365c4b0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (**(code **)(param_1 + 0x1d8))(*(undefined8 *)(param_1 + 0x1e0));
  uVar2 = (ulonglong)iVar1;
  if ((uVar2 & 0xffff0000) != 0) {
    return 0;
  }
  return *(uint *)(&DAT_145b5bfa0 +
                  ((ulonglong)((uint)((longlong)uVar2 >> 5) & 7) +
                  (ulonglong)(byte)(&DAT_145b5c4a0)[(longlong)uVar2 >> 8] * 8) * 4) &
         1 << ((byte)iVar1 & 0x1f);
}



// FUNCTION 14365c520 FUN_14365c520 body=188 status=ok
// SIG undefined FUN_14365c520(void)

undefined8
FUN_14365c520(longlong param_1,ulonglong *param_2,ulonglong param_3,ulonglong *param_4,
             ulonglong param_5)

{
  ulonglong uVar1;
  short sVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  while (uVar1 < param_3) {
    uVar1 = *param_4;
    if (param_5 <= uVar1) goto LAB_14365c5b1;
    sVar2 = *(short *)(param_1 + 0x1e8 + (ulonglong)*(byte *)*param_2 * 2);
    if (sVar2 == 0) {
      sVar2 = (**(code **)(param_1 + 0x1d8))(*(undefined8 *)(param_1 + 0x1e0));
      *param_2 = (ulonglong)
                 ((byte *)*param_2 +
                 (int)(*(byte *)((ulonglong)*(byte *)*param_2 + 0x90 + param_1) - 3));
    }
    else {
      *param_2 = (ulonglong)((byte *)*param_2 + 1);
    }
    *(short *)*param_4 = sVar2;
    *param_4 = *param_4 + 2;
    uVar1 = *param_2;
  }
  uVar1 = *param_4;
LAB_14365c5b1:
  if ((uVar1 == param_5) && (*param_2 < param_3)) {
    uVar3 = 2;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 14365c5e0 FUN_14365c5e0 body=411 status=ok
// SIG undefined FUN_14365c5e0(void)

undefined8
FUN_14365c5e0(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,longlong param_5
             )

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  byte local_res8;
  byte local_res9;
  byte local_resa;
  byte local_resb;
  
  lVar2 = *param_2;
  do {
    if (lVar2 == param_3) {
      return 0;
    }
    lVar2 = param_1 + (ulonglong)*(byte *)*param_2 * 4;
    cVar1 = *(char *)(lVar2 + 1000);
    uVar9 = (ulonglong)cVar1;
    pbVar10 = (byte *)(lVar2 + 0x3e9);
    if (cVar1 == '\0') {
      iVar4 = (**(code **)(param_1 + 0x1d8))(*(undefined8 *)(param_1 + 0x1e0));
      if (iVar4 < 0) {
LAB_14365c6f3:
        uVar9 = 0;
      }
      else {
        bVar3 = (byte)iVar4;
        if (iVar4 < 0x80) {
          local_res8 = bVar3;
          uVar9 = 1;
        }
        else {
          bVar6 = (byte)(iVar4 >> 6);
          if (iVar4 < 0x800) {
            uVar9 = 2;
            local_res8 = bVar6 | 0xc0;
            local_res9 = bVar3 & 0x3f | 0x80;
          }
          else {
            bVar7 = (byte)(iVar4 >> 0xc);
            if (iVar4 < 0x10000) {
              uVar9 = 3;
              local_res8 = bVar7 | 0xe0;
              local_res9 = bVar6 & 0x3f | 0x80;
              local_resa = bVar3 & 0x3f | 0x80;
            }
            else {
              if (0x10ffff < iVar4) goto LAB_14365c6f3;
              uVar9 = 4;
              local_res8 = (byte)(iVar4 >> 0x12) | 0xf0;
              local_res9 = bVar7 & 0x3f | 0x80;
              local_resa = bVar6 & 0x3f | 0x80;
              local_resb = bVar3 & 0x3f | 0x80;
            }
          }
        }
      }
      if (param_5 - *param_4 < (longlong)(int)uVar9) {
        return 2;
      }
      pbVar10 = &local_res8;
      pbVar5 = (byte *)*param_2 +
               (int)(*(byte *)((ulonglong)*(byte *)*param_2 + 0x90 + param_1) - 3);
    }
    else {
      if (param_5 - *param_4 < (longlong)uVar9) {
        return 2;
      }
      pbVar5 = (byte *)*param_2 + 1;
    }
    *param_2 = (longlong)pbVar5;
    do {
      bVar3 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      *(byte *)*param_4 = bVar3;
      *param_4 = *param_4 + 1;
      uVar8 = (int)uVar9 - 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 != 0);
    lVar2 = *param_2;
  } while( true );
}



// FUNCTION 14365c780 FUN_14365c780 body=26 status=ok
// SIG undefined FUN_14365c780(void)

void FUN_14365c780(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  *param_1 = FUN_14365df40;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



// FUNCTION 14365c860 FUN_14365c860 body=285 status=ok
// SIG undefined FUN_14365c860(void)

int FUN_14365c860(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 longlong param_5)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  
  if (param_2 == 0xf) {
    return 0x21;
  }
  if (param_2 == 0x12) {
    ppuVar2 = &PTR_s_CDATA_145b5c7b0;
    iVar3 = 0;
    do {
      iVar1 = (**(code **)(param_5 + 0x38))(param_5,param_3,param_4,*ppuVar2);
      if (iVar1 != 0) {
        *param_1 = FUN_14365caf0;
        return iVar3 + 0x17;
      }
      iVar3 = iVar3 + 1;
      ppuVar2 = ppuVar2 + 1;
    } while ((longlong)ppuVar2 < 0x145b5c7f0);
    iVar3 = (**(code **)(param_5 + 0x38))(param_5,param_3,param_4,"NOTATION");
    if (iVar3 == 0) goto LAB_14365c936;
    *param_1 = &LAB_14365ca20;
  }
  else {
    if (param_2 != 0x17) {
LAB_14365c936:
      if ((*(int *)((longlong)param_1 + 0x14) == 0) && (param_2 == 0x1c)) {
        return 0x3b;
      }
      *param_1 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                 ::GetBoundProgramCounterForTimerManager;
      return -1;
    }
    *param_1 = &LAB_14365c980;
  }
  return 0x21;
}



// FUNCTION 14365caf0 FUN_14365caf0 body=296 status=ok
// SIG undefined FUN_14365caf0(void)

undefined4
FUN_14365caf0(undefined8 *param_1,int param_2,longlong param_3,undefined8 param_4,longlong param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0xf) {
    return 0x21;
  }
  if (param_2 == 0x14) {
    iVar1 = (**(code **)(param_5 + 0x38))
                      (param_5,*(int *)(param_5 + 0x88) + param_3,param_4,"IMPLIED");
    if (iVar1 != 0) {
      *param_1 = &LAB_14365c7f0;
      return 0x23;
    }
    iVar1 = (**(code **)(param_5 + 0x38))
                      (param_5,*(int *)(param_5 + 0x88) + param_3,param_4,"REQUIRED");
    if (iVar1 != 0) {
      *param_1 = &LAB_14365c7f0;
      return 0x24;
    }
    iVar1 = (**(code **)(param_5 + 0x38))
                      (param_5,*(int *)(param_5 + 0x88) + param_3,param_4,"FIXED");
    if (iVar1 != 0) {
      *param_1 = &LAB_14365cc20;
      return 0x21;
    }
  }
  else if (param_2 == 0x1b) {
    *param_1 = &LAB_14365c7f0;
    return 0x25;
  }
  if ((*(int *)((longlong)param_1 + 0x14) == 0) && (param_2 == 0x1c)) {
    uVar2 = 0x3b;
  }
  else {
    *param_1 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
               ::GetBoundProgramCounterForTimerManager;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 14365cc60 FUN_14365cc60 body=185 status=ok
// SIG undefined FUN_14365cc60(void)

undefined4
FUN_14365cc60(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,longlong param_5
             )

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  if (param_2 == 0xf) {
    return 0;
  }
  if (param_2 == 0x12) {
    iVar1 = (**(code **)(param_5 + 0x38))(param_5,param_3,param_4,"INCLUDE");
    if (iVar1 == 0) {
      iVar1 = (**(code **)(param_5 + 0x38))(param_5,param_3,param_4,"IGNORE");
      if (iVar1 == 0) goto LAB_14365ccf6;
      puVar3 = &LAB_14365cd60;
    }
    else {
      puVar3 = &LAB_14365cd20;
    }
    *param_1 = puVar3;
    uVar2 = 0;
  }
  else {
LAB_14365ccf6:
    if ((*(int *)((longlong)param_1 + 0x14) == 0) && (param_2 == 0x1c)) {
      uVar2 = 0x3b;
    }
    else {
      *param_1 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                 ::GetBoundProgramCounterForTimerManager;
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



// FUNCTION 14365ce40 FUN_14365ce40 body=244 status=ok
// SIG undefined FUN_14365ce40(void)

undefined4
FUN_14365ce40(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,longlong param_5
             )

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  if (param_2 == 0xf) {
    return 3;
  }
  if (param_2 == 0x11) {
    *param_1 = &LAB_14365e200;
    return 8;
  }
  if (param_2 == 0x12) {
    iVar1 = (**(code **)(param_5 + 0x38))(param_5,param_3,param_4,"SYSTEM");
    if (iVar1 == 0) {
      iVar1 = (**(code **)(param_5 + 0x38))(param_5,param_3,param_4,"PUBLIC");
      if (iVar1 == 0) goto LAB_14365cefd;
      puVar3 = &LAB_14365cf40;
    }
    else {
      puVar3 = &LAB_14365cf80;
    }
    *param_1 = puVar3;
    uVar2 = 3;
  }
  else {
    if (param_2 == 0x19) {
      *param_1 = FUN_14365db70;
      return 7;
    }
LAB_14365cefd:
    if ((*(int *)((longlong)param_1 + 0x14) == 0) && (param_2 == 0x1c)) {
      uVar2 = 0x3b;
    }
    else {
      *param_1 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                 ::GetBoundProgramCounterForTimerManager;
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



// FUNCTION 14365d0b0 FUN_14365d0b0 body=253 status=ok
// SIG undefined FUN_14365d0b0(void)

undefined4
FUN_14365d0b0(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,longlong param_5
             )

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0xf) {
    return 0x27;
  }
  if (param_2 == 0x12) {
    iVar1 = (**(code **)(param_5 + 0x38))(param_5,param_3,param_4,"EMPTY");
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0x27;
      *param_1 = &LAB_14365cda0;
      return 0x2a;
    }
    iVar1 = (**(code **)(param_5 + 0x38))(param_5,param_3,param_4,&DAT_145b5c6e0);
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0x27;
      *param_1 = &LAB_14365cda0;
      return 0x29;
    }
  }
  else if (param_2 == 0x17) {
    *(undefined4 *)(param_1 + 1) = 1;
    *param_1 = FUN_14365d1b0;
    return 0x2c;
  }
  if ((*(int *)((longlong)param_1 + 0x14) == 0) && (param_2 == 0x1c)) {
    uVar2 = 0x3b;
  }
  else {
    *param_1 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
               ::GetBoundProgramCounterForTimerManager;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 14365d1b0 FUN_14365d1b0 body=328 status=ok
// SIG undefined FUN_14365d1b0(void)

undefined4
FUN_14365d1b0(undefined8 *param_1,int param_2,longlong param_3,undefined8 param_4,longlong param_5)

{
  int iVar1;
  
  switch(param_2) {
  case 0xf:
    return 0x27;
  case 0x12:
  case 0x29:
    *param_1 = &LAB_14365d540;
    return 0x33;
  case 0x14:
    iVar1 = (**(code **)(param_5 + 0x38))
                      (param_5,*(int *)(param_5 + 0x88) + param_3,param_4,"PCDATA");
    if (iVar1 != 0) {
      *param_1 = &LAB_14365d340;
      return 0x2b;
    }
    break;
  case 0x17:
    *(undefined4 *)(param_1 + 1) = 2;
    *param_1 = &LAB_14365d470;
    return 0x2c;
  case 0x1e:
    *param_1 = &LAB_14365d540;
    return 0x35;
  case 0x1f:
    *param_1 = &LAB_14365d540;
    return 0x34;
  case 0x20:
    *param_1 = &LAB_14365d540;
    return 0x36;
  }
  if ((*(int *)((longlong)param_1 + 0x14) == 0) && (param_2 == 0x1c)) {
    return 0x3b;
  }
  *param_1 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
             ::GetBoundProgramCounterForTimerManager;
  return 0xffffffff;
}



// FUNCTION 14365d740 FUN_14365d740 body=218 status=ok
// SIG undefined FUN_14365d740(void)

undefined4
FUN_14365d740(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,longlong param_5
             )

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  if (param_2 == 0xf) {
    return 0xb;
  }
  if (param_2 == 0x12) {
    iVar1 = (**(code **)(param_5 + 0x38))(param_5,param_3,param_4,"SYSTEM");
    if (iVar1 == 0) {
      iVar1 = (**(code **)(param_5 + 0x38))(param_5,param_3,param_4,"PUBLIC");
      if (iVar1 == 0) goto LAB_14365d7f4;
      puVar3 = &LAB_14365d820;
    }
    else {
      puVar3 = &LAB_14365d860;
    }
    *param_1 = puVar3;
    uVar2 = 0xb;
  }
  else {
    if (param_2 == 0x1b) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0xb;
      *param_1 = &LAB_14365cda0;
      return 0xc;
    }
LAB_14365d7f4:
    if ((*(int *)((longlong)param_1 + 0x14) == 0) && (param_2 == 0x1c)) {
      uVar2 = 0x3b;
    }
    else {
      *param_1 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                 ::GetBoundProgramCounterForTimerManager;
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



// FUNCTION 14365d8a0 FUN_14365d8a0 body=182 status=ok
// SIG undefined FUN_14365d8a0(void)

undefined4
FUN_14365d8a0(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,longlong param_5
             )

{
  int iVar1;
  code *pcVar2;
  
  if (param_2 == 0xf) {
    return 0xb;
  }
  if (param_2 == 0x11) {
    pcVar2 = (code *)&LAB_14365db10;
    if (*(int *)((longlong)param_1 + 0x14) != 0) {
      pcVar2 = FUN_14365db70;
    }
    *param_1 = pcVar2;
    return 0xf;
  }
  if ((param_2 == 0x12) &&
     (iVar1 = (**(code **)(param_5 + 0x38))(param_5,param_3,param_4,"NDATA"), iVar1 != 0)) {
    *param_1 = &LAB_14365d960;
    return 0xb;
  }
  if ((*(int *)((longlong)param_1 + 0x14) == 0) && (param_2 == 0x1c)) {
    return 0x3b;
  }
  *param_1 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
             ::GetBoundProgramCounterForTimerManager;
  return 0xffffffff;
}



// FUNCTION 14365d9b0 FUN_14365d9b0 body=218 status=ok
// SIG undefined FUN_14365d9b0(void)

undefined4
FUN_14365d9b0(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,longlong param_5
             )

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  if (param_2 == 0xf) {
    return 0xb;
  }
  if (param_2 == 0x12) {
    iVar1 = (**(code **)(param_5 + 0x38))(param_5,param_3,param_4,"SYSTEM");
    if (iVar1 == 0) {
      iVar1 = (**(code **)(param_5 + 0x38))(param_5,param_3,param_4,"PUBLIC");
      if (iVar1 == 0) goto LAB_14365da64;
      puVar3 = &LAB_14365da90;
    }
    else {
      puVar3 = &LAB_14365dad0;
    }
    *param_1 = puVar3;
    uVar2 = 0xb;
  }
  else {
    if (param_2 == 0x1b) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0xb;
      *param_1 = &LAB_14365cda0;
      return 0xc;
    }
LAB_14365da64:
    if ((*(int *)((longlong)param_1 + 0x14) == 0) && (param_2 == 0x1c)) {
      uVar2 = 0x3b;
    }
    else {
      *param_1 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                 ::GetBoundProgramCounterForTimerManager;
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



// FUNCTION 14365db70 FUN_14365db70 body=396 status=ok
// SIG undefined FUN_14365db70(void)

undefined4
FUN_14365db70(undefined8 *param_1,int param_2,longlong param_3,undefined8 param_4,longlong param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(param_2) {
  case 0xb:
    uVar2 = 0x37;
    break;
  case 0xd:
    uVar2 = 0x38;
    break;
  case 0x10:
    iVar1 = (**(code **)(param_5 + 0x38))
                      (param_5,*(int *)(param_5 + 0x88) * 2 + param_3,param_4,"ENTITY");
    if (iVar1 != 0) {
      *param_1 = &LAB_14365d660;
      return 0xb;
    }
    iVar1 = (**(code **)(param_5 + 0x38))
                      (param_5,*(int *)(param_5 + 0x88) * 2 + param_3,param_4,"ATTLIST");
    if (iVar1 != 0) {
      *param_1 = &LAB_14365c7a0;
      return 0x21;
    }
    iVar1 = (**(code **)(param_5 + 0x38))
                      (param_5,*(int *)(param_5 + 0x88) * 2 + param_3,param_4,"ELEMENT");
    if (iVar1 != 0) {
      *param_1 = &LAB_14365d060;
      return 0x27;
    }
    iVar1 = (**(code **)(param_5 + 0x38))
                      (param_5,*(int *)(param_5 + 0x88) * 2 + param_3,param_4,"NOTATION");
    if (iVar1 != 0) {
      *param_1 = &LAB_14365dd40;
      return 0x11;
    }
  default:
    if ((*(int *)((longlong)param_1 + 0x14) == 0) && (param_2 == 0x1c)) {
      uVar2 = 0x3b;
    }
    else {
      *param_1 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                 ::GetBoundProgramCounterForTimerManager;
      uVar2 = 0xffffffff;
    }
    break;
  case 0x1a:
    *param_1 = &LAB_14365d020;
    uVar2 = 3;
    break;
  case 0x1c:
    uVar2 = 0x3c;
    break;
  case -4:
  case 0xf:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14365dd80 FUN_14365dd80 body=191 status=ok
// SIG undefined FUN_14365dd80(void)

undefined4
FUN_14365dd80(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,longlong param_5
             )

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  if (param_2 == 0xf) {
    return 0x11;
  }
  if (param_2 == 0x12) {
    iVar1 = (**(code **)(param_5 + 0x38))(param_5,param_3,param_4,"SYSTEM");
    if (iVar1 == 0) {
      iVar1 = (**(code **)(param_5 + 0x38))(param_5,param_3,param_4,"PUBLIC");
      if (iVar1 == 0) goto LAB_14365de19;
      puVar3 = &LAB_14365de40;
    }
    else {
      puVar3 = &LAB_14365de80;
    }
    *param_1 = puVar3;
    uVar2 = 0x11;
  }
  else {
LAB_14365de19:
    if ((*(int *)((longlong)param_1 + 0x14) == 0) && (param_2 == 0x1c)) {
      uVar2 = 0x3b;
    }
    else {
      *param_1 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                 ::GetBoundProgramCounterForTimerManager;
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



// FUNCTION 14365df40 FUN_14365df40 body=296 status=ok
// SIG undefined FUN_14365df40(void)

undefined4
FUN_14365df40(undefined8 *param_1,int param_2,longlong param_3,undefined8 param_4,longlong param_5)

{
  int iVar1;
  
  switch(param_2) {
  case 0xb:
    *param_1 = FUN_14365e0c0;
    return 0x37;
  case 0xc:
    *param_1 = FUN_14365e0c0;
    return 1;
  case 0xd:
    *param_1 = FUN_14365e0c0;
    return 0x38;
  case 0xe:
    return 0;
  case 0xf:
    *param_1 = FUN_14365e0c0;
    return 0;
  case 0x10:
    iVar1 = (**(code **)(param_5 + 0x38))
                      (param_5,*(int *)(param_5 + 0x88) * 2 + param_3,param_4,"DOCTYPE");
    if (iVar1 != 0) {
      *param_1 = &LAB_14365cdf0;
      return 3;
    }
    break;
  case 0x1d:
    *param_1 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
               ::GetBoundProgramCounterForTimerManager;
    return 2;
  }
  if ((*(int *)((longlong)param_1 + 0x14) == 0) && (param_2 == 0x1c)) {
    return 0x3b;
  }
  *param_1 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
             ::GetBoundProgramCounterForTimerManager;
  return 0xffffffff;
}



// FUNCTION 14365e0c0 FUN_14365e0c0 body=240 status=ok
// SIG undefined FUN_14365e0c0(void)

undefined4
FUN_14365e0c0(undefined8 *param_1,int param_2,longlong param_3,undefined8 param_4,longlong param_5)

{
  int iVar1;
  
  switch(param_2) {
  case 0xb:
    return 0x37;
  case 0xd:
    return 0x38;
  case 0xe:
  case 0xf:
    return 0;
  case 0x10:
    iVar1 = (**(code **)(param_5 + 0x38))
                      (param_5,*(int *)(param_5 + 0x88) * 2 + param_3,param_4,"DOCTYPE");
    if (iVar1 != 0) {
      *param_1 = &LAB_14365cdf0;
      return 3;
    }
    break;
  case 0x1d:
    *param_1 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
               ::GetBoundProgramCounterForTimerManager;
    return 2;
  }
  if ((*(int *)((longlong)param_1 + 0x14) == 0) && (param_2 == 0x1c)) {
    return 0x3b;
  }
  *param_1 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
             ::GetBoundProgramCounterForTimerManager;
  return 0xffffffff;
}



// FUNCTION 14365e260 FUN_14365e260 body=434 status=ok
// SIG undefined FUN_14365e260(void)

void FUN_14365e260(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  iVar1 = (int)param_1[7];
  if (iVar1 == 1) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 1;
    *(undefined4 *)(param_1 + 8) = 1;
    goto LAB_14365e3bb;
  }
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      if (((char)param_1[0x2d] == '\0') || (*(char *)((longlong)param_1 + 0x169) == '\0')) {
        *(undefined4 *)((longlong)param_1 + 0x3c) = 4;
        *(undefined4 *)(param_1 + 8) = 4;
      }
      else {
        if (*(char *)((longlong)param_1 + 0x169) != '\x02') {
          *(undefined4 *)(*param_1 + 0x28) = 0x74;
          *(uint *)(*param_1 + 0x2c) = (uint)*(byte *)((longlong)param_1 + 0x169);
          (**(code **)(*param_1 + 8))(param_1,0xffffffff);
        }
        *(undefined4 *)((longlong)param_1 + 0x3c) = 5;
        *(undefined4 *)(param_1 + 8) = 4;
      }
    }
    else {
      *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
    }
    goto LAB_14365e3bb;
  }
  if ((char)param_1[0x2c] == '\0') {
    if ((char)param_1[0x2d] == '\0') {
      piVar4 = (int *)param_1[0x24];
      iVar1 = *piVar4;
      iVar2 = piVar4[0x18];
      iVar3 = piVar4[0x30];
      if (iVar1 == 1) {
        if ((iVar2 == 2) && (iVar3 == 3)) goto LAB_14365e37d;
      }
      else if (((iVar1 == 0x52) && (iVar2 == 0x47)) && (iVar3 == 0x42)) goto LAB_14365e39d;
      lVar5 = *param_1;
      *(int *)(lVar5 + 0x34) = iVar3;
      uVar6 = 1;
      *(int *)(lVar5 + 0x2c) = iVar1;
      *(int *)(lVar5 + 0x30) = iVar2;
      *(undefined4 *)(*param_1 + 0x28) = 0x71;
    }
    else {
      if (*(char *)((longlong)param_1 + 0x169) == '\0') {
LAB_14365e39d:
        *(undefined4 *)((longlong)param_1 + 0x3c) = 2;
        *(undefined4 *)(param_1 + 8) = 2;
        goto LAB_14365e3bb;
      }
      if (*(char *)((longlong)param_1 + 0x169) == '\x01') goto LAB_14365e37d;
      uVar6 = 0xffffffff;
      *(undefined4 *)(*param_1 + 0x28) = 0x74;
      *(uint *)(*param_1 + 0x2c) = (uint)*(byte *)((longlong)param_1 + 0x169);
    }
    (**(code **)(*param_1 + 8))(param_1,uVar6);
  }
LAB_14365e37d:
  *(undefined4 *)((longlong)param_1 + 0x3c) = 3;
  *(undefined4 *)(param_1 + 8) = 2;
LAB_14365e3bb:
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_1 + 0x204);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)((longlong)param_1 + 0x204);
  param_1[10] = 0x3ff0000000000000;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x62) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 2;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x100;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((longlong)param_1 + 0x72) = 0;
  return;
}



// FUNCTION 14365e420 FUN_14365e420 body=296 status=ok
// SIG undefined FUN_14365e420(void)

void FUN_14365e420(longlong *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  param_1[1] = 0;
  if (param_2 != 0x50) {
    *(undefined4 *)(*param_1 + 0x28) = 0xd;
    *(undefined4 *)(*param_1 + 0x2c) = 0x50;
    *(int *)(*param_1 + 0x30) = param_2;
    (**(code **)*param_1)();
  }
  if (param_3 != 0x270) {
    *(undefined4 *)(*param_1 + 0x28) = 0x16;
    *(undefined4 *)(*param_1 + 0x2c) = 0x270;
    *(int *)(*param_1 + 0x30) = (int)param_3;
    (**(code **)*param_1)(param_1);
  }
  lVar1 = *param_1;
  lVar2 = param_1[3];
  _guard_xfg_dispatch_icall_nop(param_1,0,0x270);
  *param_1 = lVar1;
  param_1[3] = lVar2;
  *(undefined1 *)(param_1 + 4) = 1;
  FUN_143662720(param_1);
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x22] = 0;
  param_1[0x2e] = 0;
  FUN_143660320(param_1);
  FUN_143661520(param_1);
  *(undefined4 *)((longlong)param_1 + 0x24) = 200;
  return;
}



// FUNCTION 14365e550 thunk_FUN_143660dd0 body=5 status=ok
// SIG undefined thunk_FUN_143660dd0(void)

void thunk_FUN_143660dd0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 8) + 0x48))(param_1,1);
    if (*(char *)(param_1 + 0x20) != '\0') {
      *(undefined4 *)(param_1 + 0x24) = 200;
      *(undefined8 *)(param_1 + 0x170) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x24) = 100;
  }
  return;
}



// FUNCTION 14365e560 FUN_14365e560 body=193 status=ok
// SIG undefined FUN_14365e560(void)

ulonglong FUN_14365e560(longlong *param_1)

{
  ulonglong uVar1;
  
  switch(*(undefined4 *)((longlong)param_1 + 0x24)) {
  case 200:
    (**(code **)(param_1[0x47] + 8))(param_1);
    (**(code **)(param_1[5] + 0x10))(param_1);
    *(undefined4 *)((longlong)param_1 + 0x24) = 0xc9;
switchD_14365e58d_caseD_c9:
    uVar1 = (**(code **)param_1[0x47])(param_1);
    if ((int)uVar1 == 1) {
      FUN_14365e260(param_1);
      *(undefined4 *)((longlong)param_1 + 0x24) = 0xca;
      uVar1 = uVar1 & 0xffffffff;
    }
    return uVar1;
  case 0xc9:
    goto switchD_14365e58d_caseD_c9;
  case 0xca:
    return 1;
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
                    /* WARNING: Could not recover jumptable at 0x00014365e5fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)param_1[0x47])(param_1);
    return uVar1;
  default:
    *(undefined4 *)(*param_1 + 0x28) = 0x15;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)(param_1);
    return 0;
  }
}



// FUNCTION 14365e650 thunk_FUN_143660e60 body=5 status=ok
// SIG undefined thunk_FUN_143660e60(void)

void thunk_FUN_143660e60(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 8) + 0x50))();
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



// FUNCTION 14365e660 FUN_14365e660 body=208 status=ok
// SIG undefined FUN_14365e660(void)

undefined8 FUN_14365e660(longlong *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if ((iVar2 - 0xcdU < 2) && ((char)param_1[0xb] == '\0')) {
    if (*(uint *)(param_1 + 0x13) < *(uint *)(param_1 + 0xf)) {
      *(undefined4 *)(*param_1 + 0x28) = 0x45;
      (**(code **)*param_1)(param_1);
    }
    (**(code **)(param_1[0x43] + 8))(param_1);
    *(undefined4 *)((longlong)param_1 + 0x24) = 0xd2;
  }
  else if (iVar2 == 0xcf) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0xd2;
  }
  else if (iVar2 != 0xd2) {
    *(undefined4 *)(*param_1 + 0x28) = 0x15;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)(param_1);
  }
  cVar1 = *(char *)(param_1[0x47] + 0x21);
  while( true ) {
    if (cVar1 != '\0') {
      (**(code **)(param_1[5] + 0x30))(param_1);
      FUN_143660dd0(param_1);
      return 1;
    }
    iVar2 = (**(code **)param_1[0x47])(param_1);
    if (iVar2 == 0) break;
    cVar1 = *(char *)(param_1[0x47] + 0x21);
  }
  return 0;
}



// FUNCTION 14365e730 FUN_14365e730 body=137 status=ok
// SIG undefined FUN_14365e730(void)

undefined8 FUN_14365e730(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  
  if (1 < *(int *)((longlong)param_1 + 0x24) - 200U) {
    *(undefined4 *)(*param_1 + 0x28) = 0x15;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)();
  }
  uVar1 = FUN_14365e560(param_1);
  if ((int)uVar1 == 1) {
    uVar1 = 1;
  }
  else if ((int)uVar1 == 2) {
    if (param_2 != '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x35;
      (**(code **)*param_1)(param_1);
    }
    FUN_143660dd0(param_1);
    return 2;
  }
  return uVar1;
}



// FUNCTION 14365e7c0 FUN_14365e7c0 body=198 status=ok
// SIG undefined FUN_14365e7c0(void)

int FUN_14365e7c0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x24) != 0xcd) {
    *(undefined4 *)(*param_1 + 0x28) = 0x15;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)();
  }
  if (*(uint *)(param_1 + 0xf) <= *(uint *)(param_1 + 0x13)) {
    *(undefined4 *)(*param_1 + 0x28) = 0x7e;
    (**(code **)(*param_1 + 8))(param_1,0xffffffff);
    return 0;
  }
  if (param_1[2] != 0) {
    *(uint *)(param_1[2] + 8) = *(uint *)(param_1 + 0x13);
    *(int *)(param_1[2] + 0xc) = (int)param_1[0xf];
    (**(code **)param_1[2])(param_1);
  }
  local_res8[0] = 0;
  (**(code **)(param_1[0x44] + 8))(param_1,param_2,local_res8,param_3);
  *(int *)(param_1 + 0x13) = (int)param_1[0x13] + local_res8[0];
  return local_res8[0];
}



// FUNCTION 14365e890 FUN_14365e890 body=244 status=ok
// SIG undefined FUN_14365e890(void)

undefined4 FUN_14365e890(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)((longlong)param_1 + 0x24) == 0xca) {
    FUN_143662cc0();
    if ((char)param_1[0xb] != '\0') {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0xcf;
      return 1;
    }
    *(undefined4 *)((longlong)param_1 + 0x24) = 0xcb;
  }
  if (*(int *)((longlong)param_1 + 0x24) == 0xcb) {
    if (*(char *)(param_1[0x47] + 0x20) != '\0') {
      while( true ) {
        if ((undefined8 *)param_1[2] != (undefined8 *)0x0) {
          (**(code **)param_1[2])(param_1);
        }
        iVar2 = (**(code **)param_1[0x47])(param_1);
        if (iVar2 == 0) {
          return 0;
        }
        if (iVar2 == 2) break;
        lVar1 = param_1[2];
        if ((lVar1 != 0) && ((iVar2 - 1U & 0xfffffffd) == 0)) {
          *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
          iVar2 = *(int *)(param_1[2] + 0xc);
          if (iVar2 <= *(int *)(lVar1 + 8)) {
            *(int *)(param_1[2] + 0xc) = (int)param_1[0x31] + iVar2;
          }
        }
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_1 + 0x9c);
    uVar3 = FUN_14365e990(param_1);
    return uVar3;
  }
  if (*(int *)((longlong)param_1 + 0x24) != 0xcc) {
    *(undefined4 *)(*param_1 + 0x28) = 0x15;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)(param_1);
  }
  uVar3 = FUN_14365e990(param_1);
  return uVar3;
}



// FUNCTION 14365e990 FUN_14365e990 body=265 status=ok
// SIG undefined FUN_14365e990(void)

longlong FUN_14365e990(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x24) != 0xcc) {
    (*(code *)**(undefined8 **)(param_1 + 0x218))();
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0xcc;
  }
  lVar3 = *(longlong *)(param_1 + 0x218);
  cVar1 = *(char *)(lVar3 + 0x10);
  do {
    if (cVar1 == '\0') {
      *(uint *)(param_1 + 0x24) = (*(char *)(param_1 + 0x59) != '\0') + 0xcd;
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
    uVar4 = *(uint *)(param_1 + 0x98);
    if (uVar4 < *(uint *)(param_1 + 0x78)) {
      do {
        if (*(longlong *)(param_1 + 0x10) != 0) {
          *(uint *)(*(longlong *)(param_1 + 0x10) + 8) = uVar4;
          *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xc) = *(undefined4 *)(param_1 + 0x78);
          (*(code *)**(undefined8 **)(param_1 + 0x10))(param_1);
        }
        uVar2 = *(uint *)(param_1 + 0x98);
        (**(code **)(*(longlong *)(param_1 + 0x220) + 8))(param_1,0,param_1 + 0x98,0);
        uVar4 = *(uint *)(param_1 + 0x98);
        if (uVar4 == uVar2) {
          return (ulonglong)(uint3)(uVar4 >> 8) << 8;
        }
      } while (uVar4 < *(uint *)(param_1 + 0x78));
    }
    (**(code **)(*(longlong *)(param_1 + 0x218) + 8))(param_1);
    (*(code *)**(undefined8 **)(param_1 + 0x218))(param_1);
    *(undefined4 *)(param_1 + 0x98) = 0;
    lVar3 = *(longlong *)(param_1 + 0x218);
    cVar1 = *(char *)(lVar3 + 0x10);
  } while( true );
}



// FUNCTION 14365eaa0 FUN_14365eaa0 body=209 status=ok
// SIG undefined FUN_14365eaa0(void)

undefined8 FUN_14365eaa0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)((longlong)param_1 + 0x24) == 0xca) {
    FUN_14365eb80();
    *(undefined4 *)((longlong)param_1 + 0x24) = 0xd1;
  }
  if (*(int *)((longlong)param_1 + 0x24) == 0xd1) {
    while( true ) {
      if ((undefined8 *)param_1[2] != (undefined8 *)0x0) {
        (**(code **)param_1[2])(param_1);
      }
      iVar2 = (**(code **)param_1[0x47])(param_1);
      if (iVar2 == 0) {
        return 0;
      }
      if (iVar2 == 2) break;
      lVar1 = param_1[2];
      if ((lVar1 != 0) && ((iVar2 - 1U & 0xfffffffd) == 0)) {
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        iVar2 = *(int *)(param_1[2] + 0xc);
        if (iVar2 <= *(int *)(lVar1 + 8)) {
          *(int *)(param_1[2] + 0xc) = (int)param_1[0x31] + iVar2;
        }
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x24) = 0xd2;
  }
  if (((*(int *)((longlong)param_1 + 0x24) == 0xd2) || (*(int *)((longlong)param_1 + 0x24) == 0xcf))
     && ((char)param_1[0xb] != '\0')) {
    return *(undefined8 *)(param_1[0x45] + 0x20);
  }
  *(undefined4 *)(*param_1 + 0x28) = 0x15;
  *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
  (**(code **)*param_1)(param_1);
  return 0;
}



// FUNCTION 14365eb80 FUN_14365eb80 body=175 status=ok
// SIG undefined FUN_14365eb80(void)

void FUN_14365eb80(longlong param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x58) = 1;
  FUN_143661580();
  if (*(char *)(param_1 + 0x12a) == '\0') {
    FUN_143665c90(param_1);
  }
  else {
    FUN_1436676d0();
  }
  FUN_143664350(param_1,1);
  (**(code **)(*(longlong *)(param_1 + 8) + 0x30))(param_1);
  (**(code **)(*(longlong *)(param_1 + 0x238) + 0x10))(param_1);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (*(char *)(param_1 + 0x129) == '\0') {
      if (*(char *)(*(longlong *)(param_1 + 0x238) + 0x20) == '\0') {
        iVar1 = 1;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x38);
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x38) * 3 + 2;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(int *)(*(longlong *)(param_1 + 0x10) + 0xc) = *(int *)(param_1 + 0x188) * iVar1;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x14) = 1;
  }
  return;
}



// FUNCTION 14365ec30 FUN_14365ec30 body=625 status=ok
// SIG undefined FUN_14365ec30(void)

void FUN_14365ec30(longlong *param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  
  param_4 = param_3 + param_4;
  if ((((param_3 < 0xe) || (*param_2 != 'J')) || (param_2[1] != 'F')) ||
     (((param_2[2] != 'I' || (param_2[3] != 'F')) || (param_2[4] != '\0')))) {
    if (((param_3 < 6) || (*param_2 != 'J')) ||
       ((param_2[1] != 'F' || (((param_2[2] != 'X' || (param_2[3] != 'X')) || (param_2[4] != '\0')))
        ))) {
      *(undefined4 *)(*param_1 + 0x28) = 0x4f;
      *(int *)(*param_1 + 0x2c) = param_4;
      lVar2 = *param_1;
    }
    else {
      cVar1 = param_2[5];
      lVar2 = *param_1;
      if (cVar1 == '\x10') {
        *(undefined4 *)(lVar2 + 0x28) = 0x6e;
        *(int *)(*param_1 + 0x2c) = param_4;
        lVar2 = *param_1;
      }
      else if (cVar1 == '\x11') {
        *(undefined4 *)(lVar2 + 0x28) = 0x6f;
        *(int *)(*param_1 + 0x2c) = param_4;
        lVar2 = *param_1;
      }
      else if (cVar1 == '\x13') {
        *(undefined4 *)(lVar2 + 0x28) = 0x70;
        *(int *)(*param_1 + 0x2c) = param_4;
        lVar2 = *param_1;
      }
      else {
        *(undefined4 *)(lVar2 + 0x28) = 0x5b;
        *(uint *)(*param_1 + 0x2c) = (uint)(byte)param_2[5];
        *(int *)(*param_1 + 0x30) = param_4;
        lVar2 = *param_1;
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x2c) = 1;
    cVar1 = param_2[5];
    *(char *)((longlong)param_1 + 0x161) = cVar1;
    *(char *)((longlong)param_1 + 0x162) = param_2[6];
    *(char *)((longlong)param_1 + 0x163) = param_2[7];
    *(ushort *)((longlong)param_1 + 0x164) =
         (ushort)(byte)param_2[8] * 0x100 + (ushort)(byte)param_2[9];
    *(ushort *)((longlong)param_1 + 0x166) =
         (ushort)(byte)param_2[10] * 0x100 + (ushort)(byte)param_2[0xb];
    if (cVar1 != '\x01') {
      *(undefined4 *)(*param_1 + 0x28) = 0x7a;
      *(uint *)(*param_1 + 0x2c) = (uint)*(byte *)((longlong)param_1 + 0x161);
      *(uint *)(*param_1 + 0x30) = (uint)*(byte *)((longlong)param_1 + 0x162);
      (**(code **)(*param_1 + 8))(param_1,0xffffffff);
    }
    lVar2 = *param_1;
    *(uint *)(lVar2 + 0x2c) = (uint)*(byte *)((longlong)param_1 + 0x161);
    *(uint *)(lVar2 + 0x30) = (uint)*(byte *)((longlong)param_1 + 0x162);
    *(uint *)(lVar2 + 0x34) = (uint)*(ushort *)((longlong)param_1 + 0x164);
    *(uint *)(lVar2 + 0x38) = (uint)*(ushort *)((longlong)param_1 + 0x166);
    *(uint *)(lVar2 + 0x3c) = (uint)*(byte *)((longlong)param_1 + 0x163);
    *(undefined4 *)(*param_1 + 0x28) = 0x59;
    (**(code **)(*param_1 + 8))(param_1,1);
    if (param_2[0xd] != '\0' || param_2[0xc] != '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x5c;
      *(uint *)(*param_1 + 0x2c) = (uint)(byte)param_2[0xc];
      *(uint *)(*param_1 + 0x30) = (uint)(byte)param_2[0xd];
      (**(code **)(*param_1 + 8))(param_1,1);
    }
    if (param_4 + -0xe == (uint)(byte)param_2[0xd] * (uint)(byte)param_2[0xc] * 3) {
      return;
    }
    *(undefined4 *)(*param_1 + 0x28) = 0x5a;
    *(int *)(*param_1 + 0x2c) = param_4 + -0xe;
    lVar2 = *param_1;
  }
  (**(code **)(lVar2 + 8))(param_1,1);
  return;
}



// FUNCTION 14365eeb0 FUN_14365eeb0 body=224 status=ok
// SIG undefined FUN_14365eeb0(void)

void FUN_14365eeb0(longlong *param_1,char *param_2,uint param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  
  if ((((0xb < param_3) && (*param_2 == 'A')) && (param_2[1] == 'd')) &&
     (((param_2[2] == 'o' && (param_2[3] == 'b')) && (param_2[4] == 'e')))) {
    bVar1 = param_2[9];
    bVar2 = param_2[10];
    bVar3 = param_2[0xb];
    lVar6 = *param_1;
    bVar4 = param_2[5];
    bVar5 = param_2[6];
    *(uint *)(lVar6 + 0x30) = (uint)(byte)param_2[7] * 0x100 + (uint)(byte)param_2[8];
    *(uint *)(lVar6 + 0x2c) = (uint)bVar4 * 0x100 + (uint)bVar5;
    *(uint *)(lVar6 + 0x34) = (uint)bVar1 * 0x100 + (uint)bVar2;
    *(uint *)(lVar6 + 0x38) = (uint)bVar3;
    *(undefined4 *)(*param_1 + 0x28) = 0x4e;
    (**(code **)(*param_1 + 8))(param_1,1);
    *(byte *)((longlong)param_1 + 0x169) = bVar3;
    *(undefined1 *)(param_1 + 0x2d) = 1;
    return;
  }
  *(undefined4 *)(*param_1 + 0x28) = 0x50;
  *(uint *)(*param_1 + 0x2c) = param_3 + param_4;
                    /* WARNING: Could not recover jumptable at 0x00014365ef8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,1);
  return;
}



// FUNCTION 14365ef90 FUN_14365ef90 body=197 status=ok
// SIG undefined FUN_14365ef90(void)

undefined1 FUN_14365ef90(longlong *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  byte *pbVar5;
  longlong lVar6;
  
  puVar2 = (undefined8 *)param_1[5];
  lVar6 = puVar2[1];
  pbVar5 = (byte *)*puVar2;
  if (lVar6 == 0) {
    cVar3 = (*(code *)puVar2[3])();
    if (cVar3 == '\0') {
      return 0;
    }
    pbVar5 = (byte *)*puVar2;
    lVar6 = puVar2[1];
  }
  bVar1 = *pbVar5;
  pbVar5 = pbVar5 + 1;
  lVar6 = lVar6 + -1;
  if (lVar6 == 0) {
    cVar3 = (*(code *)puVar2[3])(param_1);
    if (cVar3 == '\0') {
      return 0;
    }
    pbVar5 = (byte *)*puVar2;
    lVar6 = puVar2[1];
  }
  uVar4 = (uint)*pbVar5;
  if ((bVar1 != 0xff) || (uVar4 != 0xd8)) {
    *(undefined4 *)(*param_1 + 0x28) = 0x37;
    *(uint *)(*param_1 + 0x2c) = (uint)bVar1;
    *(uint *)(*param_1 + 0x30) = uVar4;
    (**(code **)*param_1)(param_1);
  }
  *(uint *)((longlong)param_1 + 0x214) = uVar4;
  *puVar2 = pbVar5 + 1;
  puVar2[1] = lVar6 + -1;
  return 1;
}



// FUNCTION 14365f060 FUN_14365f060 body=443 status=ok
// SIG undefined FUN_14365f060(void)

undefined1 FUN_14365f060(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  char cVar4;
  byte bVar5;
  byte *pbVar6;
  longlong lVar7;
  int iVar8;
  
  puVar3 = (undefined8 *)param_1[5];
  lVar7 = puVar3[1];
  pbVar6 = (byte *)*puVar3;
  if (lVar7 == 0) {
    cVar4 = (*(code *)puVar3[3])();
    if (cVar4 == '\0') {
      return 0;
    }
    pbVar6 = (byte *)*puVar3;
    lVar7 = puVar3[1];
  }
  bVar1 = *pbVar6;
  pbVar6 = pbVar6 + 1;
  lVar7 = lVar7 + -1;
  if (lVar7 == 0) {
    cVar4 = (*(code *)puVar3[3])(param_1);
    if (cVar4 == '\0') {
      return 0;
    }
    pbVar6 = (byte *)*puVar3;
    lVar7 = puVar3[1];
  }
  iVar8 = (uint)bVar1 * 0x100 + -2 + (uint)*pbVar6;
  do {
    pbVar6 = pbVar6 + 1;
    lVar7 = lVar7 + -1;
    if (iVar8 < 1) {
      if (iVar8 != 0) {
        *(undefined4 *)(*param_1 + 0x28) = 0xc;
        (**(code **)*param_1)(param_1);
      }
      *puVar3 = pbVar6;
      puVar3[1] = lVar7;
      return 1;
    }
    if (lVar7 == 0) {
      cVar4 = (*(code *)puVar3[3])(param_1);
      if (cVar4 == '\0') {
        return 0;
      }
      pbVar6 = (byte *)*puVar3;
      lVar7 = puVar3[1];
    }
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      cVar4 = (*(code *)puVar3[3])(param_1);
      if (cVar4 == '\0') {
        return 0;
      }
      pbVar6 = (byte *)*puVar3;
      lVar7 = puVar3[1];
    }
    bVar2 = *pbVar6;
    iVar8 = iVar8 + -2;
    *(undefined4 *)(*param_1 + 0x28) = 0x51;
    *(uint *)(*param_1 + 0x2c) = (uint)bVar1;
    *(uint *)(*param_1 + 0x30) = (uint)bVar2;
    (**(code **)(*param_1 + 8))(param_1,1);
    if (0x1f < bVar1) {
      *(undefined4 *)(*param_1 + 0x28) = 0x1d;
      *(uint *)(*param_1 + 0x2c) = (uint)bVar1;
      (**(code **)*param_1)(param_1);
    }
    if (bVar1 < 0x10) {
      *(byte *)((ulonglong)bVar1 + 299 + (longlong)param_1) = bVar2 & 0xf;
      bVar5 = (byte)((int)(uint)bVar2 >> 4);
      *(byte *)((ulonglong)bVar1 + 0x13b + (longlong)param_1) = bVar5;
      if (bVar5 < (bVar2 & 0xf)) {
        *(undefined4 *)(*param_1 + 0x28) = 0x1e;
        *(uint *)(*param_1 + 0x2c) = (uint)bVar2;
        (**(code **)*param_1)(param_1);
      }
    }
    else {
      *(byte *)((longlong)(int)(bVar1 - 0x10) + 0x14b + (longlong)param_1) = bVar2;
    }
  } while( true );
}



// FUNCTION 14365f220 FUN_14365f220 body=890 status=ok
// SIG undefined FUN_14365f220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_14365f220(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  longlong lVar15;
  longlong lVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  undefined1 auStack_178 [32];
  int local_158;
  byte local_150 [24];
  byte local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  puVar3 = (undefined8 *)param_1[5];
  lVar15 = puVar3[1];
  pbVar17 = (byte *)*puVar3;
  if (lVar15 == 0) {
    cVar12 = (*(code *)puVar3[3])();
    if (cVar12 == '\0') {
      return 0;
    }
    pbVar17 = (byte *)*puVar3;
    lVar15 = puVar3[1];
  }
  bVar1 = *pbVar17;
  pbVar17 = pbVar17 + 1;
  lVar15 = lVar15 + -1;
  if (lVar15 == 0) {
    cVar12 = (*(code *)puVar3[3])(param_1);
    if (cVar12 == '\0') {
      return 0;
    }
    pbVar17 = (byte *)*puVar3;
    lVar15 = puVar3[1];
  }
  iVar19 = (uint)bVar1 * 0x100 + -2 + (uint)*pbVar17;
  lVar15 = lVar15 + -1;
  pbVar17 = pbVar17 + 1;
  do {
    if (iVar19 < 0x11) {
      if (iVar19 != 0) {
        *(undefined4 *)(*param_1 + 0x28) = 0xc;
        (**(code **)*param_1)(param_1);
      }
      *puVar3 = pbVar17;
      puVar3[1] = lVar15;
      return 1;
    }
    if (lVar15 == 0) {
      cVar12 = (*(code *)puVar3[3])(param_1);
      if (cVar12 == '\0') {
        return 0;
      }
      pbVar17 = (byte *)*puVar3;
      lVar15 = puVar3[1];
    }
    bVar1 = *pbVar17;
    uVar18 = (uint)bVar1;
    lVar15 = lVar15 + -1;
    pbVar17 = pbVar17 + 1;
    *(undefined4 *)(*param_1 + 0x28) = 0x52;
    *(uint *)(*param_1 + 0x2c) = (uint)bVar1;
    (**(code **)(*param_1 + 8))(param_1,1);
    iVar20 = 0;
    local_150[0] = 0;
    lVar16 = 1;
    do {
      if (lVar15 == 0) {
        cVar12 = (*(code *)puVar3[3])(param_1);
        if (cVar12 == '\0') {
          return 0;
        }
        pbVar17 = (byte *)*puVar3;
        lVar15 = puVar3[1];
      }
      bVar2 = *pbVar17;
      lVar15 = lVar15 + -1;
      local_150[lVar16] = bVar2;
      pbVar17 = pbVar17 + 1;
      lVar16 = lVar16 + 1;
      iVar20 = iVar20 + (uint)bVar2;
    } while (lVar16 < 0x11);
    lVar16 = *param_1;
    *(uint *)(lVar16 + 0x2c) = (uint)local_150[1];
    *(uint *)(lVar16 + 0x30) = (uint)local_150[2];
    *(uint *)(lVar16 + 0x34) = (uint)local_150[3];
    *(uint *)(lVar16 + 0x38) = (uint)local_150[4];
    *(uint *)(lVar16 + 0x3c) = (uint)local_150[5];
    *(uint *)(lVar16 + 0x40) = (uint)local_150[6];
    *(uint *)(lVar16 + 0x44) = (uint)local_150[7];
    *(uint *)(lVar16 + 0x48) = (uint)local_150[8];
    *(undefined4 *)(*param_1 + 0x28) = 0x58;
    local_158 = iVar19 + -0x11;
    (**(code **)(*param_1 + 8))(param_1,2);
    lVar16 = *param_1;
    *(uint *)(lVar16 + 0x2c) = (uint)local_150[9];
    *(uint *)(lVar16 + 0x30) = (uint)local_150[10];
    *(uint *)(lVar16 + 0x34) = (uint)local_150[0xb];
    *(uint *)(lVar16 + 0x38) = (uint)local_150[0xc];
    *(uint *)(lVar16 + 0x3c) = (uint)local_150[0xd];
    *(uint *)(lVar16 + 0x40) = (uint)local_150[0xe];
    *(uint *)(lVar16 + 0x44) = (uint)local_150[0xf];
    *(uint *)(lVar16 + 0x48) = (uint)local_150[0x10];
    *(undefined4 *)(*param_1 + 0x28) = 0x58;
    (**(code **)(*param_1 + 8))(param_1,2);
    if ((0x100 < iVar20) || (iVar19 + -0x11 < iVar20)) {
      *(undefined4 *)(*param_1 + 0x28) = 9;
      (**(code **)*param_1)(param_1);
    }
    lVar16 = 0;
    if (0 < iVar20) {
      do {
        if (lVar15 == 0) {
          cVar12 = (*(code *)puVar3[3])(param_1);
          if (cVar12 == '\0') {
            return 0;
          }
          pbVar17 = (byte *)*puVar3;
          lVar15 = puVar3[1];
        }
        lVar15 = lVar15 + -1;
        local_138[lVar16] = *pbVar17;
        pbVar17 = pbVar17 + 1;
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar20);
    }
    iVar19 = local_158 - iVar20;
    if ((bVar1 & 0x10) == 0) {
      lVar16 = (ulonglong)bVar1 + 0x1b;
    }
    else {
      uVar18 = bVar1 - 0x10;
      lVar16 = (longlong)(int)uVar18 + 0x1f;
    }
    plVar21 = param_1 + lVar16;
    if (3 < uVar18) {
      *(undefined4 *)(*param_1 + 0x28) = 0x1f;
      *(uint *)(*param_1 + 0x2c) = uVar18;
      (**(code **)*param_1)(param_1);
    }
    if (*plVar21 == 0) {
      lVar16 = FUN_143660e20(param_1);
      *plVar21 = lVar16;
    }
    puVar13 = (undefined8 *)*plVar21;
    lVar16 = 2;
    *puVar13 = CONCAT17(local_150[7],
                        CONCAT16(local_150[6],
                                 CONCAT15(local_150[5],
                                          CONCAT14(local_150[4],
                                                   CONCAT13(local_150[3],
                                                            CONCAT12(local_150[2],
                                                                     CONCAT11(local_150[1],
                                                                              local_150[0])))))));
    puVar13[1] = CONCAT17(local_150[0xf],
                          CONCAT16(local_150[0xe],
                                   CONCAT15(local_150[0xd],
                                            CONCAT14(local_150[0xc],
                                                     CONCAT13(local_150[0xb],
                                                              CONCAT12(local_150[10],
                                                                       CONCAT11(local_150[9],
                                                                                local_150[8])))))));
    *(byte *)(puVar13 + 2) = local_150[0x10];
    puVar13 = (undefined8 *)(*plVar21 + 0x11);
    pbVar14 = local_138;
    do {
      uVar8 = *(undefined8 *)(pbVar14 + 8);
      uVar9 = *(undefined8 *)(pbVar14 + 0x10);
      uVar10 = *(undefined8 *)(pbVar14 + 0x18);
      *puVar13 = *(undefined8 *)pbVar14;
      puVar13[1] = uVar8;
      uVar8 = *(undefined8 *)(pbVar14 + 0x20);
      uVar11 = *(undefined8 *)(pbVar14 + 0x28);
      puVar13[2] = uVar9;
      puVar13[3] = uVar10;
      uVar9 = *(undefined8 *)(pbVar14 + 0x30);
      uVar10 = *(undefined8 *)(pbVar14 + 0x38);
      puVar13[4] = uVar8;
      puVar13[5] = uVar11;
      uVar8 = *(undefined8 *)(pbVar14 + 0x40);
      uVar11 = *(undefined8 *)(pbVar14 + 0x48);
      puVar13[6] = uVar9;
      puVar13[7] = uVar10;
      uVar9 = *(undefined8 *)(pbVar14 + 0x50);
      uVar10 = *(undefined8 *)(pbVar14 + 0x58);
      puVar13[8] = uVar8;
      puVar13[9] = uVar11;
      uVar4 = *(undefined4 *)(pbVar14 + 0x60);
      uVar5 = *(undefined4 *)(pbVar14 + 100);
      uVar6 = *(undefined4 *)(pbVar14 + 0x68);
      uVar7 = *(undefined4 *)(pbVar14 + 0x6c);
      puVar13[10] = uVar9;
      puVar13[0xb] = uVar10;
      uVar8 = *(undefined8 *)(pbVar14 + 0x70);
      uVar9 = *(undefined8 *)(pbVar14 + 0x78);
      *(undefined4 *)(puVar13 + 0xc) = uVar4;
      *(undefined4 *)((longlong)puVar13 + 100) = uVar5;
      *(undefined4 *)(puVar13 + 0xd) = uVar6;
      *(undefined4 *)((longlong)puVar13 + 0x6c) = uVar7;
      puVar13[0xe] = uVar8;
      puVar13[0xf] = uVar9;
      lVar16 = lVar16 + -1;
      puVar13 = puVar13 + 0x10;
      pbVar14 = pbVar14 + 0x80;
    } while (lVar16 != 0);
  } while( true );
}



// FUNCTION 14365f5a0 FUN_14365f5a0 body=855 status=ok
// SIG undefined FUN_14365f5a0(void)

undefined1 FUN_14365f5a0(longlong *param_1)

{
  int *piVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ushort uVar14;
  uint uVar15;
  undefined2 *puVar16;
  ushort *puVar17;
  int iVar18;
  int iVar19;
  
  puVar3 = (undefined8 *)param_1[5];
  lVar10 = puVar3[1];
  pbVar12 = (byte *)*puVar3;
  if (lVar10 == 0) {
    cVar5 = (*(code *)puVar3[3])();
    if (cVar5 == '\0') {
      return 0;
    }
    pbVar12 = (byte *)*puVar3;
    lVar10 = puVar3[1];
  }
  bVar2 = *pbVar12;
  pbVar12 = pbVar12 + 1;
  lVar10 = lVar10 + -1;
  if (lVar10 == 0) {
    cVar5 = (*(code *)puVar3[3])(param_1);
    if (cVar5 == '\0') {
      return 0;
    }
    pbVar12 = (byte *)*puVar3;
    lVar10 = puVar3[1];
  }
  lVar10 = lVar10 + -1;
  pbVar13 = pbVar12 + 1;
  iVar18 = (uint)bVar2 * 0x100 + -2 + (uint)*pbVar12;
  do {
    if (iVar18 < 1) {
      if (iVar18 != 0) {
        *(undefined4 *)(*param_1 + 0x28) = 0xc;
        (**(code **)*param_1)(param_1);
      }
      *puVar3 = pbVar13;
      puVar3[1] = lVar10;
      return 1;
    }
    iVar19 = iVar18 + -1;
    if (lVar10 == 0) {
      cVar5 = (*(code *)puVar3[3])(param_1);
      if (cVar5 == '\0') {
        return 0;
      }
      pbVar13 = (byte *)*puVar3;
      lVar10 = puVar3[1];
    }
    bVar2 = *pbVar13 >> 4;
    uVar11 = (uint)bVar2;
    uVar15 = *pbVar13 & 0xf;
    lVar10 = lVar10 + -1;
    pbVar13 = pbVar13 + 1;
    *(undefined4 *)(*param_1 + 0x28) = 0x53;
    *(uint *)(*param_1 + 0x2c) = uVar15;
    *(uint *)(*param_1 + 0x30) = uVar11;
    (**(code **)(*param_1 + 8))(param_1,1);
    if (3 < uVar15) {
      *(undefined4 *)(*param_1 + 0x28) = 0x20;
      *(uint *)(*param_1 + 0x2c) = uVar15;
      (**(code **)*param_1)(param_1);
    }
    puVar6 = (undefined2 *)param_1[(ulonglong)uVar15 + 0x17];
    if (puVar6 == (undefined2 *)0x0) {
      puVar6 = (undefined2 *)FUN_143660e40(param_1);
      param_1[(ulonglong)uVar15 + 0x17] = (longlong)puVar6;
    }
    if (bVar2 == 0) {
      if (0x3f < iVar19) goto LAB_14365f717;
      puVar16 = puVar6;
      for (lVar8 = 0x40; iVar9 = iVar19, lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar16 = 1;
        puVar16 = puVar16 + 1;
      }
    }
    else if (iVar19 < 0x80) {
      puVar16 = puVar6;
      for (lVar8 = 0x40; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar16 = 1;
        puVar16 = puVar16 + 1;
      }
      iVar9 = iVar19 >> 1;
    }
    else {
LAB_14365f717:
      iVar9 = 0x40;
    }
    switch(iVar9) {
    case 4:
      puVar7 = (undefined4 *)&DAT_145b5e880;
      break;
    default:
      puVar7 = (undefined4 *)&DAT_145b5e3c0;
      break;
    case 9:
      puVar7 = (undefined4 *)&DAT_145b5e810;
      break;
    case 0x10:
      puVar7 = (undefined4 *)&DAT_145b5e790;
      break;
    case 0x19:
      puVar7 = (undefined4 *)&DAT_145b5e6e0;
      break;
    case 0x24:
      puVar7 = (undefined4 *)&DAT_145b5e610;
      break;
    case 0x31:
      puVar7 = &DAT_145b5e500;
    }
    lVar8 = 0;
    if (0 < iVar9) {
      do {
        if (uVar11 == 0) {
          if (lVar10 == 0) {
            cVar5 = (*(code *)puVar3[3])(param_1);
            if (cVar5 == '\0') {
              return 0;
            }
            pbVar13 = (byte *)*puVar3;
            lVar10 = puVar3[1];
          }
          uVar14 = (ushort)*pbVar13;
        }
        else {
          if (lVar10 == 0) {
            cVar5 = (*(code *)puVar3[3])(param_1);
            if (cVar5 == '\0') {
              return 0;
            }
            pbVar13 = (byte *)*puVar3;
            lVar10 = puVar3[1];
          }
          bVar2 = *pbVar13;
          pbVar13 = pbVar13 + 1;
          lVar10 = lVar10 + -1;
          if (lVar10 == 0) {
            cVar5 = (*(code *)puVar3[3])(param_1);
            if (cVar5 == '\0') {
              return 0;
            }
            pbVar13 = (byte *)*puVar3;
            lVar10 = puVar3[1];
          }
          uVar14 = (ushort)bVar2 * 0x100 + (ushort)*pbVar13;
        }
        pbVar13 = pbVar13 + 1;
        lVar10 = lVar10 + -1;
        piVar1 = puVar7 + lVar8;
        lVar8 = lVar8 + 1;
        puVar6[*piVar1] = uVar14;
      } while (lVar8 < iVar9);
    }
    if (1 < *(int *)(*param_1 + 0x7c)) {
      puVar17 = puVar6 + 2;
      lVar8 = 8;
      do {
        lVar4 = *param_1;
        *(uint *)(lVar4 + 0x2c) = (uint)puVar17[-2];
        *(uint *)(lVar4 + 0x30) = (uint)puVar17[-1];
        *(uint *)(lVar4 + 0x34) = (uint)*puVar17;
        *(uint *)(lVar4 + 0x38) = (uint)puVar17[1];
        *(uint *)(lVar4 + 0x3c) = (uint)puVar17[2];
        *(uint *)(lVar4 + 0x40) = (uint)puVar17[3];
        *(uint *)(lVar4 + 0x44) = (uint)puVar17[4];
        *(uint *)(lVar4 + 0x48) = (uint)puVar17[5];
        *(undefined4 *)(*param_1 + 0x28) = 0x5f;
        (**(code **)(*param_1 + 8))(param_1,2);
        puVar17 = puVar17 + 8;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    iVar18 = (iVar19 - iVar9) - iVar9;
    if (uVar11 == 0) {
      iVar18 = iVar19 - iVar9;
    }
  } while( true );
}



// FUNCTION 14365f950 FUN_14365f950 body=273 status=ok
// SIG undefined FUN_14365f950(void)

ulonglong FUN_14365f950(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  longlong lVar7;
  
  plVar2 = (longlong *)param_1[5];
  lVar7 = plVar2[1];
  pbVar5 = (byte *)*plVar2;
  if (lVar7 == 0) {
    uVar3 = (*(code *)plVar2[3])();
    if ((char)uVar3 == '\0') {
      return uVar3;
    }
    pbVar5 = (byte *)*plVar2;
    lVar7 = plVar2[1];
  }
  bVar1 = *pbVar5;
  pbVar5 = pbVar5 + 1;
  lVar7 = lVar7 + -1;
  if (lVar7 == 0) {
    uVar3 = (*(code *)plVar2[3])(param_1);
    if ((char)uVar3 != '\0') {
      pbVar5 = (byte *)*plVar2;
      lVar7 = plVar2[1];
      goto LAB_14365f9af;
    }
LAB_14365fa00:
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
LAB_14365f9af:
    lVar7 = lVar7 + -1;
    pbVar6 = pbVar5 + 1;
    if ((uint)*pbVar5 + (uint)bVar1 * 0x100 != 4) {
      *(undefined4 *)(*param_1 + 0x28) = 0xc;
      (**(code **)*param_1)(param_1);
    }
    if (lVar7 == 0) {
      uVar3 = (*(code *)plVar2[3])(param_1);
      if ((char)uVar3 == '\0') goto LAB_14365fa00;
      pbVar6 = (byte *)*plVar2;
      lVar7 = plVar2[1];
    }
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      uVar3 = (*(code *)plVar2[3])(param_1);
      if ((char)uVar3 == '\0') goto LAB_14365fa00;
      pbVar6 = (byte *)*plVar2;
      lVar7 = plVar2[1];
    }
    iVar4 = (uint)bVar1 * 0x100 + (uint)*pbVar6;
    *(undefined4 *)(*param_1 + 0x28) = 0x54;
    *(int *)(*param_1 + 0x2c) = iVar4;
    (**(code **)(*param_1 + 8))(param_1,1);
    *(int *)((longlong)param_1 + 0x15c) = iVar4;
    *plVar2 = (longlong)(pbVar6 + 1);
    plVar2[1] = lVar7 + -1;
    uVar3 = CONCAT71((int7)((ulonglong)(lVar7 + -1) >> 8),1);
  }
  return uVar3;
}



// FUNCTION 14365fa70 FUN_14365fa70 body=396 status=ok
// SIG undefined FUN_14365fa70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_14365fa70(longlong *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_68 [32];
  byte local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  puVar2 = (undefined8 *)param_1[5];
  lVar4 = puVar2[1];
  pbVar7 = (byte *)*puVar2;
  if (lVar4 == 0) {
    cVar3 = (*(code *)puVar2[3])();
    if (cVar3 == '\0') {
      return 0;
    }
    pbVar7 = (byte *)*puVar2;
    lVar4 = puVar2[1];
  }
  bVar1 = *pbVar7;
  pbVar7 = pbVar7 + 1;
  lVar4 = lVar4 + -1;
  if (lVar4 == 0) {
    cVar3 = (*(code *)puVar2[3])(param_1);
    if (cVar3 == '\0') {
      return 0;
    }
    pbVar7 = (byte *)*puVar2;
    lVar4 = puVar2[1];
  }
  lVar4 = lVar4 + -1;
  pbVar8 = pbVar7 + 1;
  uVar5 = (uint)bVar1 * 0x100 + -2 + (uint)*pbVar7;
  uVar10 = 0;
  if ((int)uVar5 < 0xe) {
    uVar9 = 0;
    if (0 < (int)uVar5) {
      uVar9 = uVar5;
    }
    if (uVar9 == 0) goto LAB_14365fb4e;
  }
  else {
    uVar9 = 0xe;
  }
  pbVar7 = local_48;
  do {
    if (lVar4 == 0) {
      cVar3 = (*(code *)puVar2[3])(param_1);
      if (cVar3 == '\0') {
        return 0;
      }
      pbVar8 = (byte *)*puVar2;
      lVar4 = puVar2[1];
    }
    lVar4 = lVar4 + -1;
    *pbVar7 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = pbVar7 + 1;
    uVar10 = uVar10 + 1;
  } while (uVar10 < uVar9);
LAB_14365fb4e:
  iVar6 = uVar5 - uVar9;
  if (*(int *)((longlong)param_1 + 0x214) == 0xe0) {
    FUN_14365ec30(param_1,local_48,uVar9,iVar6);
  }
  else if (*(int *)((longlong)param_1 + 0x214) == 0xee) {
    FUN_14365eeb0(param_1,local_48,uVar9,iVar6);
  }
  else {
    *(undefined4 *)(*param_1 + 0x28) = 0x46;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x214);
    (**(code **)*param_1)(param_1);
  }
  *puVar2 = pbVar8;
  puVar2[1] = lVar4;
  if (0 < iVar6) {
    (**(code **)(param_1[5] + 0x20))(param_1,iVar6);
  }
  return 1;
}



// FUNCTION 14365fc00 FUN_14365fc00 body=828 status=ok
// SIG undefined FUN_14365fc00(void)

ulonglong FUN_14365fc00(longlong *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint *puVar10;
  
  puVar3 = (undefined8 *)param_1[5];
  lVar6 = puVar3[1];
  pbVar8 = (byte *)*puVar3;
  *(undefined1 *)(param_1 + 0x25) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x129) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x12a) = param_4;
  if (lVar6 == 0) {
    uVar4 = (*(code *)puVar3[3])();
    if ((char)uVar4 == '\0') {
      return uVar4;
    }
    pbVar8 = (byte *)*puVar3;
    lVar6 = puVar3[1];
  }
  bVar1 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  lVar6 = lVar6 + -1;
  if (lVar6 == 0) {
    uVar4 = (*(code *)puVar3[3])(param_1);
    if ((char)uVar4 != '\0') {
      pbVar8 = (byte *)*puVar3;
      lVar6 = puVar3[1];
      goto LAB_14365fc79;
    }
LAB_14365fd47:
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
LAB_14365fc79:
    bVar2 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      uVar4 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_14365fd47;
      pbVar8 = (byte *)*puVar3;
      lVar6 = puVar3[1];
    }
    pbVar9 = pbVar8 + 1;
    *(uint *)(param_1 + 0x23) = (uint)*pbVar8;
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      uVar4 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_14365fd47;
      pbVar9 = (byte *)*puVar3;
      lVar6 = puVar3[1];
    }
    pbVar8 = pbVar9 + 1;
    *(uint *)((longlong)param_1 + 0x34) = (uint)*pbVar9 << 8;
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      uVar4 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_14365fd47;
      pbVar8 = (byte *)*puVar3;
      lVar6 = puVar3[1];
    }
    pbVar9 = pbVar8 + 1;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + (uint)*pbVar8;
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      uVar4 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_14365fd47;
      pbVar9 = (byte *)*puVar3;
      lVar6 = puVar3[1];
    }
    pbVar8 = pbVar9 + 1;
    *(uint *)(param_1 + 6) = (uint)*pbVar9 << 8;
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      uVar4 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_14365fd47;
      pbVar8 = (byte *)*puVar3;
      lVar6 = puVar3[1];
    }
    pbVar9 = pbVar8 + 1;
    *(uint *)(param_1 + 6) = (int)param_1[6] + (uint)*pbVar8;
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      uVar4 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_14365fd47;
      pbVar9 = (byte *)*puVar3;
      lVar6 = puVar3[1];
    }
    lVar5 = *param_1;
    lVar6 = lVar6 + -1;
    *(uint *)(param_1 + 7) = (uint)*pbVar9;
    pbVar9 = pbVar9 + 1;
    *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x214);
    *(int *)(lVar5 + 0x30) = (int)param_1[6];
    *(undefined4 *)(lVar5 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x34);
    *(int *)(lVar5 + 0x38) = (int)param_1[7];
    *(undefined4 *)(*param_1 + 0x28) = 0x66;
    (**(code **)(*param_1 + 8))(param_1,1);
    if (*(char *)(param_1[0x48] + 0x19) != '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x3c;
      (**(code **)*param_1)(param_1);
    }
    if (((*(int *)((longlong)param_1 + 0x34) == 0) || ((int)param_1[6] == 0)) ||
       ((int)param_1[7] < 1)) {
      *(undefined4 *)(*param_1 + 0x28) = 0x21;
      (**(code **)*param_1)(param_1);
    }
    if ((uint)bVar1 * 0x100 + (uint)bVar2 + -8 != (int)param_1[7] * 3) {
      *(undefined4 *)(*param_1 + 0x28) = 0xc;
      (**(code **)*param_1)(param_1);
    }
    if (param_1[0x24] == 0) {
      lVar5 = (**(code **)param_1[1])(param_1,1,(longlong)(int)param_1[7] * 0x60);
      param_1[0x24] = lVar5;
    }
    puVar10 = (uint *)param_1[0x24];
    uVar7 = 0;
    if (0 < (int)param_1[7]) {
      do {
        puVar10[1] = uVar7;
        if (lVar6 == 0) {
          uVar4 = (*(code *)puVar3[3])(param_1);
          if ((char)uVar4 == '\0') goto LAB_14365ff38;
          pbVar9 = (byte *)*puVar3;
          lVar6 = puVar3[1];
        }
        pbVar8 = pbVar9 + 1;
        *puVar10 = (uint)*pbVar9;
        lVar6 = lVar6 + -1;
        if (lVar6 == 0) {
          uVar4 = (*(code *)puVar3[3])(param_1);
          if ((char)uVar4 == '\0') goto LAB_14365ff38;
          pbVar8 = (byte *)*puVar3;
          lVar6 = puVar3[1];
        }
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        puVar10[2] = (uint)(bVar1 >> 4);
        puVar10[3] = bVar1 & 0xf;
        lVar6 = lVar6 + -1;
        if (lVar6 == 0) {
          uVar4 = (*(code *)puVar3[3])(param_1);
          if ((char)uVar4 == '\0') {
LAB_14365ff38:
            return uVar4 & 0xffffffffffffff00;
          }
          pbVar8 = (byte *)*puVar3;
          lVar6 = puVar3[1];
        }
        puVar10[4] = (uint)*pbVar8;
        lVar6 = lVar6 + -1;
        pbVar9 = pbVar8 + 1;
        lVar5 = *param_1;
        *(uint *)(lVar5 + 0x2c) = *puVar10;
        *(uint *)(lVar5 + 0x30) = puVar10[2];
        *(uint *)(lVar5 + 0x34) = puVar10[3];
        *(uint *)(lVar5 + 0x38) = puVar10[4];
        *(undefined4 *)(*param_1 + 0x28) = 0x67;
        (**(code **)(*param_1 + 8))(param_1,1);
        uVar7 = uVar7 + 1;
        puVar10 = puVar10 + 0x18;
      } while ((int)uVar7 < (int)param_1[7]);
    }
    lVar5 = param_1[0x48];
    *(undefined1 *)(lVar5 + 0x19) = 1;
    uVar4 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
    *puVar3 = pbVar9;
    puVar3[1] = lVar6;
  }
  return uVar4;
}



// FUNCTION 14365ff40 FUN_14365ff40 body=176 status=ok
// SIG undefined FUN_14365ff40(void)

undefined8 FUN_14365ff40(longlong *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  *(undefined4 *)(*param_1 + 0x28) = 0x68;
  (**(code **)(*param_1 + 8))(param_1,1);
  if (*(char *)(param_1[0x48] + 0x18) != '\0') {
    *(undefined4 *)(*param_1 + 0x28) = 0x3f;
    (**(code **)*param_1)(param_1);
  }
  puVar1 = (undefined1 *)((longlong)param_1 + 0x13b);
  lVar2 = 0x10;
  do {
    puVar1[-0x10] = 0;
    *puVar1 = 1;
    puVar1[0x10] = 5;
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined2 *)(param_1 + 0x2c) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x169) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x162) = 0x10001;
  *(undefined2 *)((longlong)param_1 + 0x166) = 1;
  *(undefined1 *)(param_1[0x48] + 0x18) = 1;
  return 1;
}



// FUNCTION 14365fff0 FUN_14365fff0 body=803 status=ok
// SIG undefined FUN_14365fff0(void)

ulonglong FUN_14365fff0(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  longlong *local_res8;
  longlong local_res10;
  
  puVar4 = (undefined8 *)param_1[5];
  pbVar9 = (byte *)*puVar4;
  lVar11 = puVar4[1];
  if (*(char *)(param_1[0x48] + 0x19) == '\0') {
    *(undefined4 *)(*param_1 + 0x28) = 0x40;
    (**(code **)*param_1)();
  }
  if (lVar11 == 0) {
    uVar7 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar7 == '\0') {
      return uVar7;
    }
    pbVar9 = (byte *)*puVar4;
    lVar11 = puVar4[1];
  }
  bVar1 = *pbVar9;
  pbVar9 = pbVar9 + 1;
  lVar11 = lVar11 + -1;
  if (lVar11 == 0) {
    uVar7 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar7 == '\0') {
      return uVar7;
    }
    pbVar9 = (byte *)*puVar4;
    lVar11 = puVar4[1];
  }
  bVar2 = *pbVar9;
  pbVar9 = pbVar9 + 1;
  lVar11 = lVar11 + -1;
  if (lVar11 == 0) {
    uVar7 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar7 == '\0') {
      return uVar7;
    }
    pbVar9 = (byte *)*puVar4;
    lVar11 = puVar4[1];
  }
  bVar3 = *pbVar9;
  lVar11 = lVar11 + -1;
  pbVar9 = pbVar9 + 1;
  *(undefined4 *)(*param_1 + 0x28) = 0x69;
  *(uint *)(*param_1 + 0x2c) = (uint)bVar3;
  (**(code **)(*param_1 + 8))(param_1,1);
  uVar12 = (uint)bVar3;
  if ((((uint)bVar2 + (uint)bVar1 * 0x100 != (uint)bVar3 * 2 + 6) || (4 < bVar3)) ||
     ((uVar12 == 0 && (*(byte *)((longlong)param_1 + 0x129) == bVar3)))) {
    *(undefined4 *)(*param_1 + 0x28) = 0xc;
    (**(code **)*param_1)(param_1);
  }
  *(uint *)(param_1 + 0x33) = uVar12;
  local_res10 = 0;
  if (uVar12 != 0) {
    local_res8 = param_1 + 0x34;
    do {
      if (lVar11 == 0) {
        uVar7 = (*(code *)puVar4[3])(param_1);
        if ((char)uVar7 == '\0') goto LAB_143660269;
        pbVar9 = (byte *)*puVar4;
        lVar11 = puVar4[1];
      }
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      lVar11 = lVar11 + -1;
      if (lVar11 == 0) {
        uVar7 = (*(code *)puVar4[3])(param_1);
        if ((char)uVar7 == '\0') goto LAB_143660269;
        pbVar9 = (byte *)*puVar4;
        lVar11 = puVar4[1];
      }
      bVar2 = *pbVar9;
      lVar11 = lVar11 + -1;
      pbVar9 = pbVar9 + 1;
      puVar8 = (uint *)param_1[0x24];
      iVar6 = 0;
      uVar13 = (uint)bVar1;
      if (0 < (int)param_1[7]) {
        do {
          if (uVar13 == *puVar8) goto LAB_1436601b1;
          iVar6 = iVar6 + 1;
          puVar8 = puVar8 + 0x18;
        } while (iVar6 < (int)param_1[7]);
      }
      *(undefined4 *)(*param_1 + 0x28) = 4;
      *(uint *)(*param_1 + 0x2c) = uVar13;
      (**(code **)*param_1)(param_1);
LAB_1436601b1:
      *local_res8 = (longlong)puVar8;
      puVar8[5] = (uint)(bVar2 >> 4);
      puVar8[6] = bVar2 & 0xf;
      lVar5 = *param_1;
      *(uint *)(lVar5 + 0x2c) = uVar13;
      *(uint *)(lVar5 + 0x30) = puVar8[5];
      *(uint *)(lVar5 + 0x34) = puVar8[6];
      *(undefined4 *)(*param_1 + 0x28) = 0x6a;
      (**(code **)(*param_1 + 8))(param_1,1);
      local_res8 = local_res8 + 1;
      local_res10 = local_res10 + 1;
    } while (local_res10 < (longlong)(ulonglong)bVar3);
  }
  if (lVar11 == 0) {
    uVar7 = (*(code *)puVar4[3])(param_1);
    if ((char)uVar7 != '\0') {
      pbVar9 = (byte *)*puVar4;
      lVar11 = puVar4[1];
      goto LAB_143660228;
    }
LAB_143660269:
    uVar7 = uVar7 & 0xffffffffffffff00;
  }
  else {
LAB_143660228:
    pbVar10 = pbVar9 + 1;
    *(uint *)((longlong)param_1 + 500) = (uint)*pbVar9;
    lVar11 = lVar11 + -1;
    if (lVar11 == 0) {
      uVar7 = (*(code *)puVar4[3])(param_1);
      if ((char)uVar7 == '\0') goto LAB_143660269;
      pbVar10 = (byte *)*puVar4;
      lVar11 = puVar4[1];
    }
    pbVar9 = pbVar10 + 1;
    *(uint *)(param_1 + 0x3f) = (uint)*pbVar10;
    lVar11 = lVar11 + -1;
    if (lVar11 == 0) {
      uVar7 = (*(code *)puVar4[3])(param_1);
      if ((char)uVar7 == '\0') goto LAB_143660269;
      pbVar9 = (byte *)*puVar4;
      lVar11 = puVar4[1];
    }
    bVar1 = *pbVar9;
    *(uint *)((longlong)param_1 + 0x1fc) = (uint)(bVar1 >> 4);
    *(uint *)(param_1 + 0x40) = bVar1 & 0xf;
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)((longlong)param_1 + 500);
    *(int *)(lVar5 + 0x30) = (int)param_1[0x3f];
    *(undefined4 *)(lVar5 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x1fc);
    *(int *)(lVar5 + 0x38) = (int)param_1[0x40];
    *(undefined4 *)(*param_1 + 0x28) = 0x6b;
    (**(code **)(*param_1 + 8))(param_1,1);
    lVar5 = param_1[0x48];
    *(undefined4 *)(lVar5 + 0x1c) = 0;
    if (uVar12 != 0) {
      *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + 1;
    }
    *puVar4 = pbVar9 + 1;
    uVar7 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
    puVar4[1] = lVar11 + -1;
  }
  return uVar7;
}



// FUNCTION 143660320 FUN_143660320 body=163 status=ok
// SIG undefined FUN_143660320(void)

void FUN_143660320(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x108);
  *(undefined8 **)(param_1 + 0x240) = puVar1;
  lVar4 = 0x10;
  *puVar1 = FUN_143660a20;
  puVar3 = (undefined4 *)((longlong)puVar1 + 0xb4);
  puVar1[5] = FUN_143660a50;
  puVar1[1] = FUN_143660640;
  puVar1[2] = FUN_143660980;
  puVar2 = puVar1 + 6;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  do {
    *puVar2 = FUN_143660a50;
    puVar2 = puVar2 + 1;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar1[6] = FUN_14365fa70;
  puVar1[0x14] = FUN_14365fa70;
  FUN_143660a20(param_1);
  return;
}



// FUNCTION 1436603d0 FUN_1436603d0 body=279 status=ok
// SIG undefined FUN_1436603d0(void)

undefined8 FUN_1436603d0(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)((longlong)param_1 + 0x214);
  *(undefined4 *)(*param_1 + 0x28) = 0x7c;
  *(int *)(*param_1 + 0x2c) = iVar3;
  *(int *)(*param_1 + 0x30) = param_2;
  (**(code **)(*param_1 + 8))(param_1,0xffffffff);
  do {
    if (iVar3 < 0xc0) {
LAB_143660418:
      iVar2 = 2;
    }
    else if (((iVar3 - 0xd0U < 8) && (iVar3 != (param_2 + 1U & 7) + 0xd0)) &&
            (iVar3 != (param_2 + 2U & 7) + 0xd0)) {
      if ((iVar3 == (param_2 - 1U & 7) + 0xd0) || (iVar3 == (param_2 - 2U & 7) + 0xd0))
      goto LAB_143660418;
      iVar2 = 1;
    }
    else {
      iVar2 = 3;
    }
    *(undefined4 *)(*param_1 + 0x28) = 99;
    *(int *)(*param_1 + 0x2c) = iVar3;
    *(int *)(*param_1 + 0x30) = iVar2;
    (**(code **)(*param_1 + 8))(param_1,4);
    if (iVar2 == 1) {
      *(undefined4 *)((longlong)param_1 + 0x214) = 0;
      return 1;
    }
    if (iVar2 == 2) {
      cVar1 = FUN_1436604f0(param_1);
      if (cVar1 == '\0') {
        return 0;
      }
      iVar3 = *(int *)((longlong)param_1 + 0x214);
    }
    else if (iVar2 == 3) {
      return 1;
    }
  } while( true );
}



// FUNCTION 1436604f0 FUN_1436604f0 body=321 status=ok
// SIG undefined FUN_1436604f0(void)

ulonglong FUN_1436604f0(longlong *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  
  puVar2 = (undefined8 *)param_1[5];
  pbVar6 = (byte *)*puVar2;
  lVar5 = puVar2[1];
  do {
    if (lVar5 == 0) {
      uVar3 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar3 == '\0') {
LAB_1436605c2:
        return uVar3 & 0xffffffffffffff00;
      }
      pbVar6 = (byte *)*puVar2;
      lVar5 = puVar2[1];
    }
    bVar1 = *pbVar6;
    while( true ) {
      pbVar6 = pbVar6 + 1;
      lVar5 = lVar5 + -1;
      if (bVar1 == 0xff) break;
      *(int *)(param_1[0x48] + 0x20) = *(int *)(param_1[0x48] + 0x20) + 1;
      *puVar2 = pbVar6;
      puVar2[1] = lVar5;
      if (lVar5 == 0) {
        uVar3 = (*(code *)puVar2[3])(param_1);
        if ((char)uVar3 == '\0') goto LAB_1436605c2;
        pbVar6 = (byte *)*puVar2;
        lVar5 = puVar2[1];
      }
      bVar1 = *pbVar6;
    }
    do {
      if (lVar5 == 0) {
        uVar3 = (*(code *)puVar2[3])(param_1);
        if ((char)uVar3 == '\0') goto LAB_1436605c2;
        pbVar6 = (byte *)*puVar2;
        lVar5 = puVar2[1];
      }
      bVar1 = *pbVar6;
      lVar5 = lVar5 + -1;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 == 0xff);
    lVar4 = param_1[0x48];
    if (bVar1 != 0) {
      if (*(int *)(lVar4 + 0x20) != 0) {
        *(undefined4 *)(*param_1 + 0x28) = 0x77;
        *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)(param_1[0x48] + 0x20);
        *(uint *)(*param_1 + 0x30) = (uint)bVar1;
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
        lVar4 = param_1[0x48];
        *(undefined4 *)(lVar4 + 0x20) = 0;
      }
      *(uint *)((longlong)param_1 + 0x214) = (uint)bVar1;
      *puVar2 = pbVar6;
      puVar2[1] = lVar5;
      return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    }
    *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 2;
    *puVar2 = pbVar6;
    puVar2[1] = lVar5;
  } while( true );
}



// FUNCTION 143660640 FUN_143660640 body=496 status=ok
// SIG undefined FUN_143660640(void)

undefined8 FUN_143660640(longlong *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
LAB_143660660:
  do {
    if (*(int *)((longlong)param_1 + 0x214) == 0) {
      if (*(char *)(param_1[0x48] + 0x18) == '\0') {
        cVar2 = FUN_14365ef90();
      }
      else {
        cVar2 = FUN_1436604f0(param_1);
      }
      if (cVar2 == '\0') {
        return 0;
      }
    }
    iVar1 = *(int *)((longlong)param_1 + 0x214);
    switch(iVar1) {
    case 1:
    case 0xd0:
    case 0xd1:
    case 0xd2:
    case 0xd3:
    case 0xd4:
    case 0xd5:
    case 0xd6:
    case 0xd7:
      *(undefined4 *)(*param_1 + 0x28) = 0x5e;
      *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x214);
      (**(code **)(*param_1 + 8))(param_1,1);
      *(undefined4 *)((longlong)param_1 + 0x214) = 0;
      goto LAB_143660660;
    default:
      *(undefined4 *)(*param_1 + 0x28) = 0x46;
      goto LAB_1436607c7;
    case 0xc0:
      uVar5 = 0;
      uVar3 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
      uVar4 = 0;
      goto LAB_1436606dc;
    case 0xc1:
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
      goto LAB_1436606dc;
    case 0xc2:
      uVar5 = 0;
      uVar4 = 1;
      uVar3 = 0;
      goto LAB_1436606dc;
    case 0xc3:
    case 0xc5:
    case 0xc6:
    case 199:
    case 200:
    case 0xcb:
    case 0xcd:
    case 0xce:
    case 0xcf:
      *(undefined4 *)(*param_1 + 0x28) = 0x3e;
LAB_1436607c7:
      *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x214);
      (**(code **)*param_1)(param_1);
LAB_1436607db:
      *(undefined4 *)((longlong)param_1 + 0x214) = 0;
      goto LAB_143660660;
    case 0xc4:
      cVar2 = FUN_14365f220(param_1);
      break;
    case 0xc9:
      uVar4 = 0;
      uVar5 = 1;
      uVar3 = 0;
      goto LAB_1436606dc;
    case 0xca:
      uVar5 = 1;
      uVar3 = 0;
      uVar4 = 1;
LAB_1436606dc:
      cVar2 = FUN_14365fc00(param_1,uVar3,uVar4,uVar5);
      break;
    case 0xcc:
      cVar2 = FUN_14365f060(param_1);
      break;
    case 0xd8:
      cVar2 = FUN_14365ff40(param_1);
      if (cVar2 == '\0') {
        return 0;
      }
      goto LAB_1436607db;
    case 0xd9:
      *(undefined4 *)(*param_1 + 0x28) = 0x57;
      (**(code **)(*param_1 + 8))(param_1,1);
      uVar3 = 2;
      goto LAB_14366081a;
    case 0xda:
      cVar2 = FUN_14365fff0(param_1);
      if (cVar2 == '\0') {
        return 0;
      }
      uVar3 = 1;
LAB_14366081a:
      *(undefined4 *)((longlong)param_1 + 0x214) = 0;
      return uVar3;
    case 0xdb:
      cVar2 = FUN_14365f5a0(param_1);
      break;
    case 0xdc:
      cVar2 = FUN_143660a50(param_1);
      break;
    case 0xdd:
      cVar2 = FUN_14365f950(param_1);
      break;
    case 0xe0:
    case 0xe1:
    case 0xe2:
    case 0xe3:
    case 0xe4:
    case 0xe5:
    case 0xe6:
    case 0xe7:
    case 0xe8:
    case 0xe9:
    case 0xea:
    case 0xeb:
    case 0xec:
    case 0xed:
    case 0xee:
    case 0xef:
      cVar2 = (**(code **)(param_1[0x48] + 0x30 + (longlong)(iVar1 + -0xe0) * 8))(param_1);
      break;
    case 0xfe:
      cVar2 = (**(code **)(param_1[0x48] + 0x28))(param_1);
    }
    if (cVar2 == '\0') {
      return 0;
    }
    *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  } while( true );
}



// FUNCTION 143660980 FUN_143660980 body=151 status=ok
// SIG undefined FUN_143660980(void)

ulonglong FUN_143660980(longlong *param_1)

{
  ulonglong uVar1;
  
  if (*(int *)((longlong)param_1 + 0x214) == 0) {
    uVar1 = FUN_1436604f0();
    if ((char)uVar1 == '\0') goto LAB_14366099b;
  }
  if (*(int *)((longlong)param_1 + 0x214) == *(int *)(param_1[0x48] + 0x1c) + 0xd0) {
    *(undefined4 *)(*param_1 + 0x28) = 100;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)(param_1[0x48] + 0x1c);
    (**(code **)(*param_1 + 8))(param_1,3);
    *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  }
  else {
    uVar1 = (**(code **)(param_1[5] + 0x28))(param_1);
    if ((char)uVar1 == '\0') {
LAB_14366099b:
      return uVar1 & 0xffffffffffffff00;
    }
  }
  *(uint *)(param_1[0x48] + 0x1c) = *(int *)(param_1[0x48] + 0x1c) + 1U & 7;
  return 1;
}



// FUNCTION 143660a20 FUN_143660a20 body=43 status=ok
// SIG undefined FUN_143660a20(void)

void FUN_143660a20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  return;
}



// FUNCTION 143660a50 FUN_143660a50 body=211 status=ok
// SIG undefined FUN_143660a50(void)

undefined1 FUN_143660a50(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  byte *pbVar4;
  longlong lVar5;
  int iVar6;
  
  plVar2 = (longlong *)param_1[5];
  lVar5 = plVar2[1];
  pbVar4 = (byte *)*plVar2;
  if (lVar5 == 0) {
    cVar3 = (*(code *)plVar2[3])();
    if (cVar3 == '\0') {
      return 0;
    }
    pbVar4 = (byte *)*plVar2;
    lVar5 = plVar2[1];
  }
  bVar1 = *pbVar4;
  pbVar4 = pbVar4 + 1;
  lVar5 = lVar5 + -1;
  if (lVar5 == 0) {
    cVar3 = (*(code *)plVar2[3])(param_1);
    if (cVar3 == '\0') {
      return 0;
    }
    pbVar4 = (byte *)*plVar2;
    lVar5 = plVar2[1];
  }
  iVar6 = (uint)bVar1 * 0x100 + (*pbVar4 - 2);
  *(undefined4 *)(*param_1 + 0x28) = 0x5d;
  *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x214);
  *(int *)(*param_1 + 0x30) = iVar6;
  (**(code **)(*param_1 + 8))(param_1,1);
  *plVar2 = (longlong)(pbVar4 + 1);
  plVar2[1] = lVar5 + -1;
  if (0 < iVar6) {
    (**(code **)(param_1[5] + 0x20))(param_1,iVar6);
  }
  return 1;
}



// FUNCTION 143660b30 FUN_143660b30 body=66 status=ok
// SIG undefined FUN_143660b30(void)

void FUN_143660b30(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (param_2 < 0) {
    if ((*(int *)(lVar1 + 0x80) == 0) || (2 < *(int *)(lVar1 + 0x7c))) {
      (**(code **)(lVar1 + 0x10))();
    }
    *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + 1;
    return;
  }
  if (param_2 <= *(int *)(lVar1 + 0x7c)) {
                    /* WARNING: Could not recover jumptable at 0x000143660b69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 143660b80 FUN_143660b80 body=33 status=ok
// SIG undefined FUN_143660b80(void)

void FUN_143660b80(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_143660e60(param_1);
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(1);
}



// FUNCTION 143660bb0 FUN_143660bb0 body=223 status=ok
// SIG undefined FUN_143660bb0(void)

void FUN_143660bb0(longlong *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  char *_Format;
  
  lVar4 = *param_1;
  iVar3 = *(int *)(lVar4 + 0x28);
  if ((iVar3 < 1) || (*(int *)(lVar4 + 0x90) < iVar3)) {
    if ((*(longlong *)(lVar4 + 0x98) != 0) &&
       ((*(int *)(lVar4 + 0xa0) <= iVar3 && (iVar3 <= *(int *)(lVar4 + 0xa4))))) {
      _Format = *(char **)(*(longlong *)(lVar4 + 0x98) +
                          (longlong)(iVar3 - *(int *)(lVar4 + 0xa0)) * 8);
      goto LAB_143660c08;
    }
  }
  else {
    _Format = *(char **)(*(longlong *)(lVar4 + 0x88) + (longlong)iVar3 * 8);
LAB_143660c08:
    if (_Format != (char *)0x0) goto LAB_143660c1b;
  }
  *(int *)(lVar4 + 0x2c) = iVar3;
  _Format = (char *)**(undefined8 **)(lVar4 + 0x88);
LAB_143660c1b:
  cVar2 = *_Format;
  pcVar1 = _Format;
  do {
    if (cVar2 == '\0') {
LAB_143660c35:
      sprintf(param_2,_Format,(ulonglong)*(uint *)(lVar4 + 0x2c),(ulonglong)*(uint *)(lVar4 + 0x30),
              *(undefined4 *)(lVar4 + 0x34),*(undefined4 *)(lVar4 + 0x38),
              *(undefined4 *)(lVar4 + 0x3c),*(undefined4 *)(lVar4 + 0x40),
              *(undefined4 *)(lVar4 + 0x44),*(undefined4 *)(lVar4 + 0x48));
      return;
    }
    pcVar1 = pcVar1 + 1;
    if (cVar2 == '%') {
      if (*pcVar1 == 's') {
        sprintf(param_2,_Format,lVar4 + 0x2c);
        return;
      }
      goto LAB_143660c35;
    }
    cVar2 = *pcVar1;
  } while( true );
}



// FUNCTION 143660c90 fwprintf body=68 status=ok
// SIG int fwprintf(FILE * _File, wchar_t * _Format, ...)

int __cdecl fwprintf(FILE *_File,wchar_t *_Format,...)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar1 = (undefined8 *)__local_stdio_printf_options();
  iVar2 = _guard_xfg_dispatch_icall_nop(*puVar1,_File,_Format,0,&local_res18);
  return iVar2;
}



// FUNCTION 143660ce0 FUN_143660ce0 body=105 status=ok
// SIG undefined FUN_143660ce0(void)

undefined8 * FUN_143660ce0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0x12) = 0x7e;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *param_1 = FUN_143660b80;
  param_1[1] = FUN_143660b30;
  param_1[2] = FUN_143660d50;
  param_1[3] = FUN_143660bb0;
  param_1[4] = &LAB_143660db0;
  param_1[0x11] = &PTR_s_Bogus_message_code__d_145b5c7f0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 143660d50 FUN_143660d50 body=90 status=ok
// SIG undefined FUN_143660d50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143660d50(longlong *param_1)

{
  FILE *_File;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [208];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  (**(code **)(*param_1 + 0x18))(param_1,local_e8);
  _File = (FILE *)_guard_xfg_dispatch_icall_nop(2);
  fwprintf(_File,L"猥\n",local_e8);
  return;
}



// FUNCTION 143660dd0 FUN_143660dd0 body=69 status=ok
// SIG undefined FUN_143660dd0(void)

void FUN_143660dd0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 8) + 0x48))(param_1,1);
    if (*(char *)(param_1 + 0x20) != '\0') {
      *(undefined4 *)(param_1 + 0x24) = 200;
      *(undefined8 *)(param_1 + 0x170) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x24) = 100;
  }
  return;
}



// FUNCTION 143660e20 FUN_143660e20 body=30 status=ok
// SIG undefined FUN_143660e20(void)

void FUN_143660e20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x112);
  *(undefined1 *)(lVar1 + 0x111) = 0;
  return;
}



// FUNCTION 143660e40 FUN_143660e40 body=30 status=ok
// SIG undefined FUN_143660e40(void)

void FUN_143660e40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x82);
  *(undefined1 *)(lVar1 + 0x80) = 0;
  return;
}



// FUNCTION 143660e60 FUN_143660e60 body=49 status=ok
// SIG undefined FUN_143660e60(void)

void FUN_143660e60(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 8) + 0x50))();
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



// FUNCTION 143660ea0 FUN_143660ea0 body=288 status=ok
// SIG undefined FUN_143660ea0(void)

undefined8 FUN_143660ea0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = param_1[0x47];
  if (*(char *)(lVar1 + 0x21) != '\0') {
    return 2;
  }
  while( true ) {
    uVar3 = (**(code **)(param_1[0x48] + 8))(param_1);
    iVar2 = (int)uVar3;
    if (iVar2 == 0) {
      return 0;
    }
    if (iVar2 != 1) break;
    if (*(int *)(lVar1 + 0x28) == 0) {
      if (*(char *)(lVar1 + 0x20) == '\0') {
        *(undefined4 *)(*param_1 + 0x28) = 0x24;
        (**(code **)*param_1)(param_1);
      }
      if ((int)param_1[0x33] != 0) {
        FUN_143661d00(param_1);
        return 1;
      }
    }
    else {
      if (*(int *)(lVar1 + 0x28) == 1) {
        FUN_143660fe0(param_1);
      }
      if ((int)param_1[0x33] != 0) {
        *(undefined4 *)(lVar1 + 0x28) = 0;
        return 1;
      }
      *(undefined4 *)(lVar1 + 0x28) = 2;
    }
  }
  if (iVar2 != 2) {
    return uVar3;
  }
  *(undefined1 *)(lVar1 + 0x21) = 1;
  if (*(int *)(lVar1 + 0x28) != 0) {
    if (*(char *)(param_1[0x48] + 0x19) == '\0') {
      return 2;
    }
    *(undefined4 *)(*param_1 + 0x28) = 0x3d;
    (**(code **)*param_1)(param_1);
    return 2;
  }
  if (*(int *)((longlong)param_1 + 0xa4) <= *(int *)((longlong)param_1 + 0x9c)) {
    return 2;
  }
  *(int *)((longlong)param_1 + 0xa4) = *(int *)((longlong)param_1 + 0x9c);
  return 2;
}



// FUNCTION 143660fe0 FUN_143660fe0 body=1046 status=ok
// SIG undefined FUN_143660fe0(void)

void FUN_143660fe0(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  if ((0xffdc < *(int *)((longlong)param_1 + 0x34)) || (0xffdc < (int)param_1[6])) {
    *(undefined4 *)(*param_1 + 0x28) = 0x2a;
    *(undefined4 *)(*param_1 + 0x2c) = 0xffdc;
    (**(code **)*param_1)();
  }
  if ((int)param_1[0x23] != 8) {
    *(undefined4 *)(*param_1 + 0x28) = 0x10;
    *(int *)(*param_1 + 0x2c) = (int)param_1[0x23];
    (**(code **)*param_1)(param_1);
  }
  if (10 < (int)param_1[7]) {
    *(undefined4 *)(*param_1 + 0x28) = 0x1b;
    *(int *)(*param_1 + 0x2c) = (int)param_1[7];
    *(undefined4 *)(*param_1 + 0x30) = 10;
    (**(code **)*param_1)(param_1);
  }
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x2f) = 1;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 1;
  if (0 < (int)param_1[7]) {
    piVar5 = (int *)(param_1[0x24] + 0xc);
    iVar3 = iVar4;
    do {
      if ((3 < piVar5[-1] - 1U) || (3 < *piVar5 - 1U)) {
        *(undefined4 *)(*param_1 + 0x28) = 0x13;
        (**(code **)*param_1)(param_1);
      }
      iVar1 = piVar5[-1];
      if (piVar5[-1] < (int)param_1[0x2f]) {
        iVar1 = (int)param_1[0x2f];
      }
      *(int *)(param_1 + 0x2f) = iVar1;
      iVar1 = *piVar5;
      if (*piVar5 < *(int *)((longlong)param_1 + 0x17c)) {
        iVar1 = *(int *)((longlong)param_1 + 0x17c);
      }
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 0x18;
      *(int *)((longlong)param_1 + 0x17c) = iVar1;
    } while (iVar3 < (int)param_1[7]);
  }
  if (((char)param_1[0x25] != '\0') ||
     ((*(char *)((longlong)param_1 + 0x129) != '\0' && ((int)param_1[0x33] != 0)))) {
switchD_143661159_caseD_3f:
    *(undefined4 *)((longlong)param_1 + 0x204) = 8;
    goto LAB_1436612cf;
  }
  iVar3 = (int)param_1[0x3f];
  if (0xff < iVar3) {
switchD_143661159_caseD_1:
    *(undefined4 *)(*param_1 + 0x28) = 0x11;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 500);
    *(int *)(*param_1 + 0x30) = (int)param_1[0x3f];
    *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x1fc);
    *(int *)(*param_1 + 0x38) = (int)param_1[0x40];
    (**(code **)*param_1)(param_1);
    goto LAB_1436612e7;
  }
  if (iVar3 == 0xff) {
    *(undefined4 *)((longlong)param_1 + 0x204) = 0x10;
    goto LAB_1436612cf;
  }
  switch(iVar3) {
  case 0:
    *(undefined4 *)((longlong)param_1 + 0x204) = 1;
    *(int *)(param_1 + 0x42) = iVar3;
    goto LAB_1436612d9;
  default:
    goto switchD_143661159_caseD_1;
  case 3:
    *(undefined4 *)((longlong)param_1 + 0x204) = 2;
    puVar6 = (undefined4 *)&DAT_145b5e880;
    *(int *)(param_1 + 0x42) = iVar3;
    goto LAB_1436612e0;
  case 8:
    *(undefined4 *)((longlong)param_1 + 0x204) = 3;
    puVar6 = (undefined4 *)&DAT_145b5e810;
    *(int *)(param_1 + 0x42) = iVar3;
    goto LAB_1436612e0;
  case 0xf:
    *(undefined4 *)((longlong)param_1 + 0x204) = 4;
    puVar6 = (undefined4 *)&DAT_145b5e790;
    *(int *)(param_1 + 0x42) = iVar3;
    goto LAB_1436612e0;
  case 0x18:
    *(undefined4 *)((longlong)param_1 + 0x204) = 5;
    puVar6 = (undefined4 *)&DAT_145b5e6e0;
    *(int *)(param_1 + 0x42) = iVar3;
    goto LAB_1436612e0;
  case 0x23:
    *(undefined4 *)((longlong)param_1 + 0x204) = 6;
    puVar6 = (undefined4 *)&DAT_145b5e610;
    *(int *)(param_1 + 0x42) = iVar3;
    goto LAB_1436612e0;
  case 0x30:
    *(undefined4 *)((longlong)param_1 + 0x204) = 7;
    puVar6 = &DAT_145b5e500;
    *(int *)(param_1 + 0x42) = iVar3;
    goto LAB_1436612e0;
  case 0x3f:
    goto switchD_143661159_caseD_3f;
  case 0x50:
    *(undefined4 *)((longlong)param_1 + 0x204) = 9;
    break;
  case 99:
    *(undefined4 *)((longlong)param_1 + 0x204) = 10;
    break;
  case 0x78:
    *(undefined4 *)((longlong)param_1 + 0x204) = 0xb;
    break;
  case 0x8f:
    *(undefined4 *)((longlong)param_1 + 0x204) = 0xc;
    break;
  case 0xa8:
    *(undefined4 *)((longlong)param_1 + 0x204) = 0xd;
    break;
  case 0xc3:
    *(undefined4 *)((longlong)param_1 + 0x204) = 0xe;
    break;
  case 0xe0:
    *(undefined4 *)((longlong)param_1 + 0x204) = 0xf;
  }
LAB_1436612cf:
  *(undefined4 *)(param_1 + 0x42) = 0x3f;
LAB_1436612d9:
  puVar6 = (undefined4 *)&DAT_145b5e3c0;
LAB_1436612e0:
  param_1[0x41] = (longlong)puVar6;
LAB_1436612e7:
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((longlong)param_1 + 0x204);
  *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)((longlong)param_1 + 0x204);
  if (0 < (int)param_1[7]) {
    puVar6 = (undefined4 *)(param_1[0x24] + 0x28);
    do {
      puVar6[-1] = *(undefined4 *)((longlong)param_1 + 0x204);
      *puVar6 = *(undefined4 *)((longlong)param_1 + 0x204);
      uVar2 = FMath::DivideAndRoundUp<int>
                        ((int)param_1[6] * puVar6[-8],
                         *(int *)((longlong)param_1 + 0x204) * (int)param_1[0x2f]);
      puVar6[-3] = uVar2;
      uVar2 = FMath::DivideAndRoundUp<int>
                        (puVar6[-7] * *(int *)((longlong)param_1 + 0x34),
                         *(int *)((longlong)param_1 + 0x204) * *(int *)((longlong)param_1 + 0x17c));
      puVar6[-2] = uVar2;
      uVar2 = FMath::DivideAndRoundUp<int>((int)param_1[6] * puVar6[-8],(int)param_1[0x2f]);
      puVar6[1] = uVar2;
      uVar2 = FMath::DivideAndRoundUp<int>
                        (puVar6[-7] * *(int *)((longlong)param_1 + 0x34),
                         *(undefined4 *)((longlong)param_1 + 0x17c));
      puVar6[2] = uVar2;
      iVar4 = iVar4 + 1;
      *(undefined1 *)(puVar6 + 3) = 1;
      *(undefined8 *)(puVar6 + 10) = 0;
      puVar6 = puVar6 + 0x18;
    } while (iVar4 < (int)param_1[7]);
  }
  uVar2 = FMath::DivideAndRoundUp<int>
                    (*(undefined4 *)((longlong)param_1 + 0x34),
                     *(int *)((longlong)param_1 + 0x204) * *(int *)((longlong)param_1 + 0x17c));
  *(undefined4 *)(param_1 + 0x31) = uVar2;
  if (((int)param_1[0x33] < (int)param_1[7]) || (*(char *)((longlong)param_1 + 0x129) != '\0')) {
    *(undefined1 *)(param_1[0x47] + 0x20) = 1;
  }
  else {
    *(undefined1 *)(param_1[0x47] + 0x20) = 0;
  }
  return;
}



// FUNCTION 143661520 FUN_143661520 body=90 status=ok
// SIG undefined FUN_143661520(void)

void FUN_143661520(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x30);
  *(undefined8 **)(param_1 + 0x238) = puVar1;
  *puVar1 = FUN_143660ea0;
  puVar1[1] = FUN_143661cb0;
  puVar1[2] = FUN_143661d00;
  puVar1[3] = &LAB_143660fc0;
  *(undefined2 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 5) = 1;
  return;
}



// FUNCTION 143661580 FUN_143661580 body=1091 status=ok
// SIG undefined FUN_143661580(void)

void FUN_143661580(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  uVar5 = *(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x204);
  if (uVar1 < uVar5) {
    if (uVar1 * 2 < uVar5) {
      if (uVar5 < uVar1 * 3 || uVar5 + uVar1 * -3 == 0) {
        uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x30) * 3);
        *(undefined4 *)(param_1 + 0x74) = uVar2;
        uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x34) * 3);
        *(undefined4 *)(param_1 + 0x180) = 3;
        *(undefined4 *)(param_1 + 0x184) = 3;
      }
      else if (uVar1 * 4 < uVar5) {
        if (uVar5 < uVar1 * 5 || uVar5 + uVar1 * -5 == 0) {
          uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x30) * 5);
          *(undefined4 *)(param_1 + 0x74) = uVar2;
          uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x34) * 5);
          *(undefined4 *)(param_1 + 0x180) = 5;
          *(undefined4 *)(param_1 + 0x184) = 5;
        }
        else if (uVar5 < uVar1 * 6 || uVar5 + uVar1 * -6 == 0) {
          uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x30) * 6);
          *(undefined4 *)(param_1 + 0x74) = uVar2;
          uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x34) * 6);
          *(undefined4 *)(param_1 + 0x180) = 6;
          *(undefined4 *)(param_1 + 0x184) = 6;
        }
        else if (uVar5 < uVar1 * 7 || uVar5 + uVar1 * -7 == 0) {
          uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x30) * 7);
          *(undefined4 *)(param_1 + 0x74) = uVar2;
          uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x34) * 7);
          *(undefined4 *)(param_1 + 0x180) = 7;
          *(undefined4 *)(param_1 + 0x184) = 7;
        }
        else if (uVar1 * 8 < uVar5) {
          if (uVar5 < uVar1 * 9 || uVar5 + uVar1 * -9 == 0) {
            uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x30) * 9);
            *(undefined4 *)(param_1 + 0x74) = uVar2;
            uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x34) * 9);
            *(undefined4 *)(param_1 + 0x180) = 9;
            *(undefined4 *)(param_1 + 0x184) = 9;
          }
          else if (uVar5 < uVar1 * 10 || uVar5 + uVar1 * -10 == 0) {
            uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x30) * 10);
            *(undefined4 *)(param_1 + 0x74) = uVar2;
            uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x34) * 10);
            *(undefined4 *)(param_1 + 0x180) = 10;
            *(undefined4 *)(param_1 + 0x184) = 10;
          }
          else if (uVar5 < uVar1 * 0xb || uVar5 + uVar1 * -0xb == 0) {
            uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x30) * 0xb);
            *(undefined4 *)(param_1 + 0x74) = uVar2;
            uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x34) * 0xb);
            *(undefined4 *)(param_1 + 0x180) = 0xb;
            *(undefined4 *)(param_1 + 0x184) = 0xb;
          }
          else if (uVar5 < uVar1 * 0xc || uVar5 + uVar1 * -0xc == 0) {
            uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x30) * 0xc);
            *(undefined4 *)(param_1 + 0x74) = uVar2;
            uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x34) * 0xc);
            *(undefined4 *)(param_1 + 0x180) = 0xc;
            *(undefined4 *)(param_1 + 0x184) = 0xc;
          }
          else if (uVar5 < uVar1 * 0xd || uVar5 + uVar1 * -0xd == 0) {
            uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x30) * 0xd);
            *(undefined4 *)(param_1 + 0x74) = uVar2;
            uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x34) * 0xd);
            *(undefined4 *)(param_1 + 0x180) = 0xd;
            *(undefined4 *)(param_1 + 0x184) = 0xd;
          }
          else if (uVar5 < uVar1 * 0xe || uVar5 + uVar1 * -0xe == 0) {
            uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x30) * 0xe);
            *(undefined4 *)(param_1 + 0x74) = uVar2;
            uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x34) * 0xe);
            *(undefined4 *)(param_1 + 0x180) = 0xe;
            *(undefined4 *)(param_1 + 0x184) = 0xe;
          }
          else if (uVar5 < uVar1 * 0xf || uVar5 + uVar1 * -0xf == 0) {
            uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x30) * 0xf);
            *(undefined4 *)(param_1 + 0x74) = uVar2;
            uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x34) * 0xf);
            *(undefined4 *)(param_1 + 0x180) = 0xf;
            *(undefined4 *)(param_1 + 0x184) = 0xf;
          }
          else {
            uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x30) << 4);
            *(undefined4 *)(param_1 + 0x74) = uVar2;
            uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x34) << 4);
            *(undefined4 *)(param_1 + 0x180) = 0x10;
            *(undefined4 *)(param_1 + 0x184) = 0x10;
          }
        }
        else {
          uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x30) << 3);
          *(undefined4 *)(param_1 + 0x74) = uVar2;
          uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x34) << 3);
          *(undefined4 *)(param_1 + 0x180) = 8;
          *(undefined4 *)(param_1 + 0x184) = 8;
        }
      }
      else {
        uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x30) << 2);
        *(undefined4 *)(param_1 + 0x74) = uVar2;
        uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x34) << 2);
        *(undefined4 *)(param_1 + 0x180) = 4;
        *(undefined4 *)(param_1 + 0x184) = 4;
      }
    }
    else {
      uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x30) * 2);
      *(undefined4 *)(param_1 + 0x74) = uVar2;
      uVar2 = FMath::DivideAndRoundUp<int>(*(int *)(param_1 + 0x34) * 2);
      *(undefined4 *)(param_1 + 0x180) = 2;
      *(undefined4 *)(param_1 + 0x184) = 2;
    }
  }
  else {
    uVar2 = FMath::DivideAndRoundUp<int>(*(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    uVar2 = FMath::DivideAndRoundUp<int>(*(undefined4 *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x180) = 1;
    *(undefined4 *)(param_1 + 0x184) = 1;
  }
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  if (0 < *(int *)(param_1 + 0x38)) {
    puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0x120) + 0x28);
    do {
      iVar4 = iVar4 + 1;
      puVar3[-1] = *(undefined4 *)(param_1 + 0x180);
      *puVar3 = *(undefined4 *)(param_1 + 0x184);
      puVar3 = puVar3 + 0x18;
    } while (iVar4 < *(int *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 1436619d0 FUN_1436619d0 body=263 status=ok
// SIG undefined FUN_1436619d0(void)

void FUN_1436619d0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  
  iVar9 = 0;
  if (0 < (int)param_1[0x33]) {
    plVar10 = param_1 + 0x34;
    do {
      lVar2 = *plVar10;
      if (*(longlong *)(lVar2 + 0x50) == 0) {
        uVar1 = *(uint *)(lVar2 + 0x10);
        if ((3 < uVar1) || (param_1[(longlong)(int)uVar1 + 0x17] == 0)) {
          *(undefined4 *)(*param_1 + 0x28) = 0x36;
          *(uint *)(*param_1 + 0x2c) = uVar1;
          (**(code **)*param_1)(param_1);
        }
        puVar8 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x82);
        puVar3 = (undefined8 *)param_1[(longlong)(int)uVar1 + 0x17];
        uVar7 = puVar3[1];
        *puVar8 = *puVar3;
        puVar8[1] = uVar7;
        uVar7 = puVar3[3];
        puVar8[2] = puVar3[2];
        puVar8[3] = uVar7;
        uVar7 = puVar3[5];
        puVar8[4] = puVar3[4];
        puVar8[5] = uVar7;
        uVar7 = puVar3[7];
        puVar8[6] = puVar3[6];
        puVar8[7] = uVar7;
        uVar7 = puVar3[9];
        puVar8[8] = puVar3[8];
        puVar8[9] = uVar7;
        uVar7 = puVar3[0xb];
        puVar8[10] = puVar3[10];
        puVar8[0xb] = uVar7;
        uVar4 = *(undefined4 *)((longlong)puVar3 + 100);
        uVar5 = *(undefined4 *)(puVar3 + 0xd);
        uVar6 = *(undefined4 *)((longlong)puVar3 + 0x6c);
        *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(puVar3 + 0xc);
        *(undefined4 *)((longlong)puVar8 + 100) = uVar4;
        *(undefined4 *)(puVar8 + 0xd) = uVar5;
        *(undefined4 *)((longlong)puVar8 + 0x6c) = uVar6;
        uVar4 = *(undefined4 *)((longlong)puVar3 + 0x74);
        uVar5 = *(undefined4 *)(puVar3 + 0xf);
        uVar6 = *(undefined4 *)((longlong)puVar3 + 0x7c);
        *(undefined4 *)(puVar8 + 0xe) = *(undefined4 *)(puVar3 + 0xe);
        *(undefined4 *)((longlong)puVar8 + 0x74) = uVar4;
        *(undefined4 *)(puVar8 + 0xf) = uVar5;
        *(undefined4 *)((longlong)puVar8 + 0x7c) = uVar6;
        *(undefined2 *)(puVar8 + 0x10) = *(undefined2 *)(puVar3 + 0x10);
        *(undefined8 **)(lVar2 + 0x50) = puVar8;
      }
      iVar9 = iVar9 + 1;
      plVar10 = plVar10 + 1;
    } while (iVar9 < (int)param_1[0x33]);
  }
  return;
}



// FUNCTION 143661ae0 FUN_143661ae0 body=449 status=ok
// SIG undefined FUN_143661ae0(void)

ulonglong FUN_143661ae0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  
  if ((int)param_1[0x33] == 1) {
    lVar2 = param_1[0x34];
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar2 + 0x1c);
    *(undefined4 *)((longlong)param_1 + 0x1c4) = *(undefined4 *)(lVar2 + 0x20);
    *(undefined4 *)(lVar2 + 0x44) = *(undefined4 *)(lVar2 + 0x24);
    uVar6 = *(uint *)(lVar2 + 0x20);
    uVar1 = *(uint *)(lVar2 + 0xc);
    uVar5 = uVar6 % uVar1;
    *(undefined4 *)(lVar2 + 0x38) = 1;
    *(undefined4 *)(lVar2 + 0x3c) = 1;
    *(undefined4 *)(lVar2 + 0x40) = 1;
    if (uVar5 == 0) {
      uVar5 = *(uint *)(lVar2 + 0xc);
    }
    *(uint *)(lVar2 + 0x4c) = uVar5;
    *(undefined4 *)(lVar2 + 0x48) = 1;
    param_1[0x39] = 1;
    return (ulonglong)uVar6 / (ulonglong)uVar1;
  }
  if (3 < (int)param_1[0x33] - 1U) {
    *(undefined4 *)(*param_1 + 0x28) = 0x1b;
    *(int *)(*param_1 + 0x2c) = (int)param_1[0x33];
    *(undefined4 *)(*param_1 + 0x30) = 4;
    (**(code **)*param_1)(param_1);
  }
  uVar3 = FMath::DivideAndRoundUp<int>
                    ((int)param_1[6],(int)param_1[0x2f] * *(int *)((longlong)param_1 + 0x204));
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  uVar4 = FMath::DivideAndRoundUp<int>(*(undefined4 *)((longlong)param_1 + 0x34));
  iVar7 = 0;
  *(int *)((longlong)param_1 + 0x1c4) = (int)uVar4;
  *(undefined4 *)(param_1 + 0x39) = 0;
  if (0 < (int)param_1[0x33]) {
    plVar9 = param_1 + 0x34;
    do {
      lVar2 = *plVar9;
      uVar6 = *(uint *)(lVar2 + 8);
      uVar1 = *(uint *)(lVar2 + 0xc);
      iVar8 = uVar1 * uVar6;
      *(uint *)(lVar2 + 0x38) = uVar6;
      *(uint *)(lVar2 + 0x3c) = uVar1;
      *(uint *)(lVar2 + 0x44) = *(int *)(lVar2 + 0x24) * uVar6;
      uVar5 = *(uint *)(lVar2 + 0x1c) % uVar6;
      *(int *)(lVar2 + 0x40) = iVar8;
      if (uVar5 == 0) {
        uVar5 = uVar6;
      }
      *(uint *)(lVar2 + 0x48) = uVar5;
      uVar4 = (ulonglong)*(uint *)(lVar2 + 0x20) / (ulonglong)uVar1;
      uVar6 = (uint)((ulonglong)*(uint *)(lVar2 + 0x20) % (ulonglong)uVar1);
      if (uVar6 == 0) {
        uVar6 = uVar1;
      }
      *(uint *)(lVar2 + 0x4c) = uVar6;
      if (10 < (int)param_1[0x39] + iVar8) {
        *(undefined4 *)(*param_1 + 0x28) = 0xe;
        uVar4 = (**(code **)*param_1)(param_1);
      }
      for (; 0 < iVar8; iVar8 = iVar8 + -1) {
        uVar4 = (ulonglong)(int)param_1[0x39];
        *(int *)((longlong)param_1 + uVar4 * 4 + 0x1cc) = iVar7;
        *(int *)(param_1 + 0x39) = (int)param_1[0x39] + 1;
      }
      iVar7 = iVar7 + 1;
      plVar9 = plVar9 + 1;
    } while (iVar7 < (int)param_1[0x33]);
  }
  return uVar4;
}



// FUNCTION 143661cb0 FUN_143661cb0 body=77 status=ok
// SIG undefined FUN_143661cb0(void)

void FUN_143661cb0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0x47];
  *puVar1 = FUN_143660ea0;
  *(undefined2 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 5) = 1;
  (**(code **)(*param_1 + 0x20))(param_1);
  (**(code **)param_1[0x48])(param_1);
  param_1[0x16] = 0;
  return;
}



// FUNCTION 143661d00 FUN_143661d00 body=73 status=ok
// SIG undefined FUN_143661d00(void)

void FUN_143661d00(longlong param_1)

{
  FUN_143661ae0();
  FUN_1436619d0(param_1);
  (*(code *)**(undefined8 **)(param_1 + 0x248))(param_1);
  (*(code *)**(undefined8 **)(param_1 + 0x228))(param_1);
  **(undefined8 **)(param_1 + 0x238) = *(undefined8 *)(*(longlong *)(param_1 + 0x228) + 8);
  return;
}



// FUNCTION 143661d50 __local_stdio_scanf_options body=8 status=ok
// SIG undefined __local_stdio_scanf_options(void)

undefined * __local_stdio_scanf_options(void)

{
  return &DAT_146bcd220;
}



// FUNCTION 143661d60 FUN_143661d60 body=356 status=ok
// SIG undefined FUN_143661d60(void)

longlong FUN_143661d60(longlong *param_1,longlong *param_2,uint param_3,uint param_4,char param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar5 = param_3 + param_4;
  if (((*(uint *)(param_2 + 1) < uVar5) || (*(uint *)(param_2 + 2) < param_4)) || (*param_2 == 0)) {
    *(undefined4 *)(*param_1 + 0x28) = 0x17;
    (**(code **)*param_1)();
  }
  if ((param_3 < *(uint *)((longlong)param_2 + 0x1c)) ||
     (*(uint *)((longlong)param_2 + 0x1c) + *(int *)((longlong)param_2 + 0x14) < uVar5)) {
    if (*(char *)((longlong)param_2 + 0x26) == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x47;
      (**(code **)*param_1)(param_1);
    }
    if (*(char *)((longlong)param_2 + 0x25) != '\0') {
      FUN_143662450(param_1,param_2,1);
      *(undefined1 *)((longlong)param_2 + 0x25) = 0;
    }
    if (*(uint *)((longlong)param_2 + 0x1c) < param_3) {
      *(uint *)((longlong)param_2 + 0x1c) = param_3;
    }
    else {
      iVar3 = uVar5 - *(int *)((longlong)param_2 + 0x14);
      iVar2 = 0;
      if (-1 < iVar3) {
        iVar2 = iVar3;
      }
      *(int *)((longlong)param_2 + 0x1c) = iVar2;
    }
    FUN_143662450(param_1,param_2,0);
  }
  uVar4 = *(uint *)(param_2 + 4);
  if (uVar4 < uVar5) {
    if ((uVar4 < param_3) && (uVar4 = param_3, param_5 != '\0')) {
      *(undefined4 *)(*param_1 + 0x28) = 0x17;
      (**(code **)*param_1)(param_1);
    }
    if (param_5 != '\0') {
      *(uint *)(param_2 + 4) = uVar5;
    }
    if (*(char *)((longlong)param_2 + 0x24) != '\0') {
      uVar5 = uVar5 - *(int *)((longlong)param_2 + 0x1c);
      uVar4 = uVar4 - *(int *)((longlong)param_2 + 0x1c);
      uVar1 = *(uint *)((longlong)param_2 + 0xc);
      if (uVar4 < uVar5) {
        lVar7 = (ulonglong)uVar4 * 8;
        uVar6 = (ulonglong)(uVar5 - uVar4);
        do {
          _guard_xfg_dispatch_icall_nop(*(void **)(*param_2 + lVar7),0,(ulonglong)uVar1 << 7);
          lVar7 = lVar7 + 8;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      goto LAB_143661e83;
    }
    if (param_5 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x17;
      (**(code **)*param_1)(param_1);
      goto LAB_143661e8c;
    }
  }
  else {
LAB_143661e83:
    if (param_5 == '\0') goto LAB_143661e8c;
  }
  *(undefined1 *)((longlong)param_2 + 0x25) = 1;
LAB_143661e8c:
  return *param_2 + (ulonglong)(param_3 - *(int *)((longlong)param_2 + 0x1c)) * 8;
}



// FUNCTION 143661ed0 FUN_143661ed0 body=352 status=ok
// SIG undefined FUN_143661ed0(void)

longlong FUN_143661ed0(longlong *param_1,longlong *param_2,uint param_3,uint param_4,char param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar5 = param_3 + param_4;
  if (((*(uint *)(param_2 + 1) < uVar5) || (*(uint *)(param_2 + 2) < param_4)) || (*param_2 == 0)) {
    *(undefined4 *)(*param_1 + 0x28) = 0x17;
    (**(code **)*param_1)();
  }
  if ((param_3 < *(uint *)((longlong)param_2 + 0x1c)) ||
     (*(uint *)((longlong)param_2 + 0x1c) + *(int *)((longlong)param_2 + 0x14) < uVar5)) {
    if (*(char *)((longlong)param_2 + 0x26) == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x47;
      (**(code **)*param_1)(param_1);
    }
    if (*(char *)((longlong)param_2 + 0x25) != '\0') {
      FUN_143662510(param_1,param_2,1);
      *(undefined1 *)((longlong)param_2 + 0x25) = 0;
    }
    if (*(uint *)((longlong)param_2 + 0x1c) < param_3) {
      *(uint *)((longlong)param_2 + 0x1c) = param_3;
    }
    else {
      iVar3 = uVar5 - *(int *)((longlong)param_2 + 0x14);
      iVar2 = 0;
      if (-1 < iVar3) {
        iVar2 = iVar3;
      }
      *(int *)((longlong)param_2 + 0x1c) = iVar2;
    }
    FUN_143662510(param_1,param_2,0);
  }
  uVar4 = *(uint *)(param_2 + 4);
  if (uVar4 < uVar5) {
    if ((uVar4 < param_3) && (uVar4 = param_3, param_5 != '\0')) {
      *(undefined4 *)(*param_1 + 0x28) = 0x17;
      (**(code **)*param_1)(param_1);
    }
    if (param_5 != '\0') {
      *(uint *)(param_2 + 4) = uVar5;
    }
    if (*(char *)((longlong)param_2 + 0x24) != '\0') {
      uVar5 = uVar5 - *(int *)((longlong)param_2 + 0x1c);
      uVar4 = uVar4 - *(int *)((longlong)param_2 + 0x1c);
      uVar1 = *(uint *)((longlong)param_2 + 0xc);
      if (uVar4 < uVar5) {
        lVar7 = (ulonglong)uVar4 * 8;
        uVar6 = (ulonglong)(uVar5 - uVar4);
        do {
          _guard_xfg_dispatch_icall_nop(*(void **)(*param_2 + lVar7),0,(ulonglong)uVar1);
          lVar7 = lVar7 + 8;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      goto LAB_143661ff0;
    }
    if (param_5 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x17;
      (**(code **)*param_1)(param_1);
      goto LAB_143661ff9;
    }
  }
  else {
LAB_143661ff0:
    if (param_5 == '\0') goto LAB_143661ff9;
  }
  *(undefined1 *)((longlong)param_2 + 0x25) = 1;
LAB_143661ff9:
  return *param_2 + (ulonglong)(param_3 - *(int *)((longlong)param_2 + 0x1c)) * 8;
}



// FUNCTION 143662030 FUN_143662030 body=228 status=ok
// SIG undefined FUN_143662030(void)

longlong FUN_143662030(longlong *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar3 = param_1[1];
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)(int)param_3 << 7;
  auVar1 = (ZEXT416(0) << 0x40 | ZEXT816(0x3b9ac9e8)) / auVar1;
  iVar2 = auVar1._0_4_;
  if (iVar2 == 0) {
    *(undefined4 *)(*param_1 + 0x28) = 0x48;
    (**(code **)*param_1)();
  }
  uVar8 = (ulonglong)param_4;
  if (iVar2 < (int)param_4) {
    uVar8 = auVar1._0_8_;
  }
  *(int *)(lVar3 + 0x94) = (int)uVar8;
  lVar3 = FUN_1436622e0(param_1,param_2,(ulonglong)param_4 << 3);
  uVar7 = 0;
  if (param_4 != 0) {
    do {
      uVar5 = param_4 - (int)uVar7;
      if ((uint)uVar8 < uVar5) {
        uVar5 = (uint)uVar8;
      }
      uVar8 = (ulonglong)uVar5;
      lVar4 = FUN_143662120(param_1,param_2,(ulonglong)uVar5 * (ulonglong)param_3 * 0x80);
      if (uVar5 != 0) {
        uVar6 = uVar8;
        do {
          *(longlong *)(lVar3 + uVar7 * 8) = lVar4;
          uVar7 = (ulonglong)((int)uVar7 + 1);
          lVar4 = lVar4 + (ulonglong)param_3 * 0x80;
          uVar5 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 != 0);
      }
    } while ((uint)uVar7 < param_4);
  }
  return lVar3;
}



// FUNCTION 143662120 FUN_143662120 body=205 status=ok
// SIG undefined FUN_143662120(void)

undefined8 * FUN_143662120(longlong *param_1,uint param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  lVar2 = param_1[1];
  if (0x3b9ac9e8 < param_3) {
    FUN_143662890(param_1,3);
  }
  if ((param_3 & 7) != 0) {
    param_3 = param_3 + (8 - (ulonglong)((uint)param_3 & 7));
  }
  if (1 < param_2) {
    *(undefined4 *)(*param_1 + 0x28) = 0xf;
    *(uint *)(*param_1 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar4 = (undefined8 *)FUN_143667d80(param_1,param_3 + 0x18);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_143662890(param_1,4);
  }
  piVar1 = (int *)(lVar2 + 0x90);
  *piVar1 = *piVar1 + (int)param_3 + 0x18;
  lVar2 = lVar2 + (longlong)(int)param_2 * 8;
  uVar3 = *(undefined8 *)(lVar2 + 0x70);
  puVar4[1] = param_3;
  *puVar4 = uVar3;
  puVar4[2] = 0;
  *(undefined8 **)(lVar2 + 0x70) = puVar4;
  return puVar4 + 3;
}



// FUNCTION 1436621f0 FUN_1436621f0 body=228 status=ok
// SIG undefined FUN_1436621f0(void)

longlong FUN_1436621f0(longlong *param_1,undefined4 param_2,uint param_3,ulonglong param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar3 = param_1[1];
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)(int)param_3;
  auVar1 = (ZEXT416(0) << 0x40 | ZEXT816(0x3b9ac9e8)) / auVar1;
  iVar2 = auVar1._0_4_;
  if (iVar2 == 0) {
    *(undefined4 *)(*param_1 + 0x28) = 0x48;
    (**(code **)*param_1)();
  }
  uVar8 = (uint)param_4;
  uVar9 = param_4 & 0xffffffff;
  if (iVar2 < (int)uVar8) {
    uVar9 = auVar1._0_8_;
  }
  *(int *)(lVar3 + 0x94) = (int)uVar9;
  lVar3 = FUN_1436622e0(param_1,param_2,(param_4 & 0xffffffff) << 3);
  uVar7 = 0;
  if (uVar8 != 0) {
    do {
      uVar5 = uVar8 - (int)uVar7;
      if ((uint)uVar9 < uVar5) {
        uVar5 = (uint)uVar9;
      }
      uVar9 = (ulonglong)uVar5;
      lVar4 = FUN_143662120(param_1,param_2,(ulonglong)uVar5 * (ulonglong)param_3);
      uVar6 = uVar9;
      while (uVar5 != 0) {
        *(longlong *)(lVar3 + uVar7 * 8) = lVar4;
        uVar7 = (ulonglong)((uint)uVar7 + 1);
        lVar4 = lVar4 + (ulonglong)param_3;
        uVar5 = (int)uVar6 - 1;
        uVar6 = (ulonglong)uVar5;
      }
    } while ((uint)uVar7 < uVar8);
  }
  return lVar3;
}



// FUNCTION 1436622e0 FUN_1436622e0 body=364 status=ok
// SIG undefined FUN_1436622e0(void)

longlong FUN_1436622e0(longlong *param_1,uint param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar2 = param_1[1];
  lVar6 = (longlong)(int)param_2;
  if (0x3b9ac9e8 < param_3) {
    FUN_143662890(param_1,1);
  }
  if ((param_3 & 7) != 0) {
    param_3 = param_3 + (8 - (ulonglong)((uint)param_3 & 7));
  }
  if (1 < param_2) {
    *(undefined4 *)(*param_1 + 0x28) = 0xf;
    *(uint *)(*param_1 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar4 = *(undefined8 **)(lVar2 + 0x60 + lVar6 * 8);
  puVar3 = (undefined8 *)0x0;
  while (puVar5 = puVar4, puVar5 != (undefined8 *)0x0) {
    if (param_3 <= (ulonglong)puVar5[2]) goto LAB_14366241c;
    puVar3 = puVar5;
    puVar4 = (undefined8 *)*puVar5;
  }
  lVar1 = param_3 + 0x18;
  if (puVar3 == (undefined8 *)0x0) {
    uVar7 = *(ulonglong *)(&DAT_145b5e000 + lVar6 * 8);
  }
  else {
    uVar7 = *(ulonglong *)(&DAT_145b5e010 + lVar6 * 8);
  }
  if (1000000000U - lVar1 < uVar7) {
    uVar7 = 1000000000U - lVar1;
  }
  puVar5 = (undefined8 *)FUN_143667d80(param_1,uVar7 + lVar1);
  while (puVar5 == (undefined8 *)0x0) {
    uVar7 = uVar7 >> 1;
    if (uVar7 < 0x32) {
      FUN_143662890(param_1,2);
    }
    puVar5 = (undefined8 *)FUN_143667d80(param_1,uVar7 + lVar1);
  }
  *(int *)(lVar2 + 0x90) = *(int *)(lVar2 + 0x90) + (int)uVar7 + (int)lVar1;
  puVar5[2] = uVar7 + param_3;
  *puVar5 = 0;
  puVar5[1] = 0;
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 **)(lVar2 + lVar6 * 8 + 0x60) = puVar5;
  }
  else {
    *puVar3 = puVar5;
  }
LAB_14366241c:
  lVar2 = puVar5[1];
  puVar5[2] = puVar5[2] - param_3;
  puVar5[1] = lVar2 + param_3;
  return (longlong)puVar5 + lVar2 + 0x18;
}



// FUNCTION 143662450 FUN_143662450 body=186 status=ok
// SIG undefined FUN_143662450(void)

void FUN_143662450(undefined8 param_1,longlong *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x14);
  iVar6 = *(int *)((longlong)param_2 + 0xc) * 0x80;
  iVar4 = iVar6 * *(int *)((longlong)param_2 + 0x1c);
  if (0 < iVar1) {
    do {
      iVar3 = iVar1 - iVar5;
      if ((int)param_2[3] < iVar1 - iVar5) {
        iVar3 = (int)param_2[3];
      }
      iVar2 = *(int *)((longlong)param_2 + 0x1c) + iVar5;
      iVar1 = (int)param_2[4] - iVar2;
      if (iVar1 <= iVar3) {
        iVar3 = iVar1;
      }
      iVar2 = (int)param_2[1] - iVar2;
      if (iVar2 <= iVar3) {
        iVar3 = iVar2;
      }
      if (iVar3 < 1) {
        return;
      }
      iVar3 = iVar3 * iVar6;
      if (param_3 == '\0') {
        (*(code *)param_2[6])
                  (param_1,param_2 + 6,*(undefined8 *)(*param_2 + (longlong)iVar5 * 8),iVar4,iVar3);
      }
      else {
        (*(code *)param_2[7])();
      }
      iVar5 = iVar5 + (int)param_2[3];
      iVar4 = iVar4 + iVar3;
      iVar1 = *(int *)((longlong)param_2 + 0x14);
    } while (iVar5 < iVar1);
  }
  return;
}



// FUNCTION 143662510 FUN_143662510 body=186 status=ok
// SIG undefined FUN_143662510(void)

void FUN_143662510(undefined8 param_1,longlong *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  iVar2 = *(int *)((longlong)param_2 + 0x14);
  iVar5 = *(int *)((longlong)param_2 + 0x1c) * iVar1;
  if (0 < iVar2) {
    do {
      iVar4 = iVar2 - iVar6;
      if ((int)param_2[3] < iVar2 - iVar6) {
        iVar4 = (int)param_2[3];
      }
      iVar3 = *(int *)((longlong)param_2 + 0x1c) + iVar6;
      iVar2 = (int)param_2[4] - iVar3;
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
      iVar3 = (int)param_2[1] - iVar3;
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
      if (iVar4 < 1) {
        return;
      }
      iVar4 = iVar4 * iVar1;
      if (param_3 == '\0') {
        (*(code *)param_2[6])
                  (param_1,param_2 + 6,*(undefined8 *)(*param_2 + (longlong)iVar6 * 8),iVar5,iVar4);
      }
      else {
        (*(code *)param_2[7])();
      }
      iVar6 = iVar6 + (int)param_2[3];
      iVar5 = iVar5 + iVar4;
      iVar2 = *(int *)((longlong)param_2 + 0x14);
    } while (iVar6 < iVar2);
  }
  return;
}



// FUNCTION 1436625d0 FUN_1436625d0 body=328 status=ok
// SIG undefined FUN_1436625d0(void)

void FUN_1436625d0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = param_1[1];
  lVar5 = (longlong)(int)param_2;
  if (1 < param_2) {
    *(undefined4 *)(*param_1 + 0x28) = 0xf;
    *(uint *)(*param_1 + 0x2c) = param_2;
    (**(code **)*param_1)();
  }
  if (param_2 == 1) {
    for (lVar4 = *(longlong *)(lVar1 + 0x80); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x28)) {
      if (*(char *)(lVar4 + 0x26) != '\0') {
        *(undefined1 *)(lVar4 + 0x26) = 0;
        (**(code **)(lVar4 + 0x40))(param_1,lVar4 + 0x30);
      }
    }
    lVar4 = *(longlong *)(lVar1 + 0x88);
    *(undefined8 *)(lVar1 + 0x80) = 0;
    for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x28)) {
      if (*(char *)(lVar4 + 0x26) != '\0') {
        *(undefined1 *)(lVar4 + 0x26) = 0;
        (**(code **)(lVar4 + 0x40))(param_1,lVar4 + 0x30);
      }
    }
    *(undefined8 *)(lVar1 + 0x88) = 0;
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x70 + lVar5 * 8);
  *(undefined8 *)(lVar1 + 0x70 + lVar5 * 8) = 0;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    lVar4 = puVar2[1] + puVar2[2] + 0x18;
    FUN_143667d70(param_1,puVar2,lVar4);
    *(int *)(lVar1 + 0x90) = *(int *)(lVar1 + 0x90) - (int)lVar4;
    puVar2 = puVar3;
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x60 + lVar5 * 8);
  *(undefined8 *)(lVar1 + 0x60 + lVar5 * 8) = 0;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    lVar5 = puVar2[1] + puVar2[2] + 0x18;
    FUN_143667d70(param_1,puVar2,lVar5);
    *(int *)(lVar1 + 0x90) = *(int *)(lVar1 + 0x90) - (int)lVar5;
    puVar2 = puVar3;
  }
  return;
}



// FUNCTION 143662720 FUN_143662720 body=365 status=ok
// SIG undefined FUN_143662720(void)

void FUN_143662720(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char local_res8 [8];
  int local_res10 [2];
  
  param_1[1] = 0;
  local_res10[0] =
       TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
       ::GetBoundProgramCounterForTimerManager();
  puVar2 = (undefined8 *)FUN_143667d80(param_1,0x98);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_140447710(param_1);
    *(undefined4 *)(*param_1 + 0x28) = 0x38;
    *(undefined4 *)(*param_1 + 0x2c) = 0;
    (**(code **)*param_1)(param_1);
  }
  *(undefined4 *)((longlong)puVar2 + 0x5c) = 1000000000;
  *puVar2 = FUN_1436622e0;
  puVar2[1] = FUN_143662120;
  puVar2[2] = FUN_1436621f0;
  puVar2[3] = FUN_143662030;
  puVar2[4] = FUN_143662b40;
  puVar2[5] = FUN_143662a90;
  puVar2[6] = FUN_1436628b0;
  puVar2[7] = FUN_143661ed0;
  puVar2[8] = FUN_143661d60;
  puVar2[9] = FUN_1436625d0;
  puVar2[10] = FUN_143662bf0;
  *(int *)(puVar2 + 0xb) = local_res10[0];
  puVar2[0xd] = 0;
  puVar2[0xf] = 0;
  puVar2[0xc] = 0;
  puVar2[0xe] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  *(undefined4 *)(puVar2 + 0x12) = 0x98;
  param_1[1] = (longlong)puVar2;
  pcVar3 = _guard_xfg_dispatch_icall_nop("JPEGMEM");
  if (pcVar3 != (char *)0x0) {
    local_res8[0] = 'x';
    iVar1 = FUN_143662c40(pcVar3,"%ld%c",local_res10,local_res8);
    if (0 < iVar1) {
      if ((local_res8[0] + 0xb3U & 0xdf) == 0) {
        local_res10[0] = local_res10[0] * 1000;
      }
      *(int *)(puVar2 + 0xb) = local_res10[0] * 1000;
    }
  }
  return;
}



// FUNCTION 143662890 FUN_143662890 body=22 status=ok
// SIG undefined FUN_143662890(void)

void FUN_143662890(longlong *param_1,undefined4 param_2)

{
  *(undefined4 *)(*param_1 + 0x28) = 0x38;
  *(undefined4 *)(*param_1 + 0x2c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001436628a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}



// FUNCTION 1436628b0 FUN_1436628b0 body=473 status=ok
// SIG undefined FUN_1436628b0(void)

void FUN_1436628b0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar5 = 0;
  iVar6 = iVar5;
  for (plVar2 = *(longlong **)(lVar1 + 0x80); plVar2 != (longlong *)0x0;
      plVar2 = (longlong *)plVar2[5]) {
    if (*plVar2 == 0) {
      iVar5 = iVar5 + (int)plVar2[2] * *(int *)((longlong)plVar2 + 0xc);
      iVar6 = iVar6 + (int)plVar2[1] * *(int *)((longlong)plVar2 + 0xc);
    }
  }
  for (plVar2 = *(longlong **)(lVar1 + 0x88); plVar2 != (longlong *)0x0;
      plVar2 = (longlong *)plVar2[5]) {
    if (*plVar2 == 0) {
      iVar5 = iVar5 + (int)plVar2[2] * *(int *)((longlong)plVar2 + 0xc) * 0x80;
      iVar6 = iVar6 + (int)plVar2[1] * *(int *)((longlong)plVar2 + 0xc) * 0x80;
    }
  }
  if (0 < iVar5) {
    iVar3 = FUN_143667d90(param_1,iVar5,iVar6,*(undefined4 *)(lVar1 + 0x90));
    if (iVar3 < iVar6) {
      iVar3 = iVar3 / iVar5;
      if (iVar3 < 1) {
        iVar3 = 1;
      }
    }
    else {
      iVar3 = 1000000000;
    }
    for (plVar2 = *(longlong **)(lVar1 + 0x80); plVar2 != (longlong *)0x0;
        plVar2 = (longlong *)plVar2[5]) {
      if (*plVar2 == 0) {
        iVar5 = (int)plVar2[1];
        if ((int)((iVar5 - 1U) / *(uint *)(plVar2 + 2)) < iVar3) {
          *(int *)((longlong)plVar2 + 0x14) = iVar5;
        }
        else {
          *(uint *)((longlong)plVar2 + 0x14) = *(uint *)(plVar2 + 2) * iVar3;
          FUN_143667da0(param_1,plVar2 + 6,*(int *)((longlong)plVar2 + 0xc) * iVar5);
          *(undefined1 *)((longlong)plVar2 + 0x26) = 1;
        }
        lVar4 = FUN_1436621f0(param_1,1,*(undefined4 *)((longlong)plVar2 + 0xc),
                              *(undefined4 *)((longlong)plVar2 + 0x14));
        *plVar2 = lVar4;
        *(undefined4 *)(plVar2 + 3) = *(undefined4 *)(lVar1 + 0x94);
        *(undefined8 *)((longlong)plVar2 + 0x1c) = 0;
        *(undefined1 *)((longlong)plVar2 + 0x25) = 0;
      }
    }
    for (plVar2 = *(longlong **)(lVar1 + 0x88); plVar2 != (longlong *)0x0;
        plVar2 = (longlong *)plVar2[5]) {
      if (*plVar2 == 0) {
        iVar5 = (int)plVar2[1];
        if ((int)((iVar5 - 1U) / *(uint *)(plVar2 + 2)) < iVar3) {
          *(int *)((longlong)plVar2 + 0x14) = iVar5;
        }
        else {
          *(uint *)((longlong)plVar2 + 0x14) = *(uint *)(plVar2 + 2) * iVar3;
          FUN_143667da0(param_1,plVar2 + 6,*(int *)((longlong)plVar2 + 0xc) * iVar5 * 0x80);
          *(undefined1 *)((longlong)plVar2 + 0x26) = 1;
        }
        lVar4 = FUN_143662030(param_1,1,*(undefined4 *)((longlong)plVar2 + 0xc),
                              *(undefined4 *)((longlong)plVar2 + 0x14));
        *plVar2 = lVar4;
        *(undefined4 *)(plVar2 + 3) = *(undefined4 *)(lVar1 + 0x94);
        *(undefined8 *)((longlong)plVar2 + 0x1c) = 0;
        *(undefined1 *)((longlong)plVar2 + 0x25) = 0;
      }
    }
  }
  return;
}



// FUNCTION 143662a90 FUN_143662a90 body=161 status=ok
// SIG undefined FUN_143662a90(void)

void FUN_143662a90(longlong *param_1,int param_2,undefined1 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[1];
  if (param_2 != 1) {
    *(undefined4 *)(*param_1 + 0x28) = 0xf;
    *(int *)(*param_1 + 0x2c) = param_2;
    (**(code **)*param_1)();
  }
  puVar2 = (undefined8 *)FUN_1436622e0(param_1,param_2,0x90);
  *(undefined4 *)(puVar2 + 1) = param_5;
  *(undefined4 *)((longlong)puVar2 + 0xc) = param_4;
  *(undefined4 *)(puVar2 + 2) = param_6;
  *puVar2 = 0;
  *(undefined1 *)((longlong)puVar2 + 0x24) = param_3;
  *(undefined1 *)((longlong)puVar2 + 0x26) = 0;
  puVar2[5] = *(undefined8 *)(lVar1 + 0x88);
  *(undefined8 **)(lVar1 + 0x88) = puVar2;
  return;
}



// FUNCTION 143662b40 FUN_143662b40 body=161 status=ok
// SIG undefined FUN_143662b40(void)

void FUN_143662b40(longlong *param_1,int param_2,undefined1 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[1];
  if (param_2 != 1) {
    *(undefined4 *)(*param_1 + 0x28) = 0xf;
    *(int *)(*param_1 + 0x2c) = param_2;
    (**(code **)*param_1)();
  }
  puVar2 = (undefined8 *)FUN_1436622e0(param_1,param_2,0x90);
  *(undefined4 *)(puVar2 + 1) = param_5;
  *(undefined4 *)((longlong)puVar2 + 0xc) = param_4;
  *(undefined4 *)(puVar2 + 2) = param_6;
  *puVar2 = 0;
  *(undefined1 *)((longlong)puVar2 + 0x24) = param_3;
  *(undefined1 *)((longlong)puVar2 + 0x26) = 0;
  puVar2[5] = *(undefined8 *)(lVar1 + 0x80);
  *(undefined8 **)(lVar1 + 0x80) = puVar2;
  return;
}



// FUNCTION 143662bf0 FUN_143662bf0 body=77 status=ok
// SIG undefined FUN_143662bf0(void)

void FUN_143662bf0(longlong param_1)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    FUN_1436625d0(param_1,iVar1);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_143667d70(param_1,*(undefined8 *)(param_1 + 8),0x98);
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_140447710(param_1);
  return;
}



// FUNCTION 143662c40 FUN_143662c40 body=78 status=ok
// SIG undefined FUN_143662c40(void)

void FUN_143662c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (undefined8 *)__local_stdio_scanf_options();
  _guard_xfg_dispatch_icall_nop(*puVar1,param_1,0xffffffffffffffff,param_2,0,&local_res18);
  return;
}



// FUNCTION 143662c90 FUN_143662c90 body=38 status=ok
// SIG undefined FUN_143662c90(void)

void FUN_143662c90(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x218);
  if (*(char *)(param_1 + 0x62) != '\0') {
    (**(code **)(*(longlong *)(param_1 + 0x268) + 0x10))();
  }
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 143662cc0 FUN_143662cc0 body=69 status=ok
// SIG undefined FUN_143662cc0(void)

void FUN_143662cc0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x30);
  *(undefined8 **)(param_1 + 0x218) = puVar1;
  *puVar1 = FUN_143663150;
  puVar1[1] = FUN_143662c90;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_143662f60(param_1);
  return;
}


