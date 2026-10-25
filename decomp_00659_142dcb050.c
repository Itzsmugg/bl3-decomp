// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142dcb050 FUN_142dcb050 body=915 status=ok
// SIG undefined FUN_142dcb050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142dcb050(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_418 [32];
  undefined8 local_3f8 [2];
  undefined1 local_3e8 [32];
  float afStack_3c8 [220];
  ulonglong local_58;
  
  uVar3 = DAT_1468387a8 ^ (ulonglong)auStack_418;
  if (param_2 != (longlong *)0x0) {
    local_58 = uVar3;
    lVar4 = FUN_1428dfc70();
    iVar1 = *(int *)(lVar4 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(param_2[2] + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(param_2[2] + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)uVar3 != '\0') {
      plVar5 = (longlong *)(**(code **)(*param_2 + 0x668))(param_2);
      uVar3 = 0;
      if (plVar5 != (longlong *)0x0) {
        uVar6 = FUN_142e79600();
        lVar4 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
        uVar3 = 0;
        if (lVar4 != 0) {
          lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          if ((*(int *)(lVar8 + 0x38) < DAT_146859258) &&
             (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1)) {
            DAT_146859248 = 0xff;
            FName::FName(&DAT_146859250,L"Invalid",1);
            _Init_thread_footer(&DAT_146859258);
          }
          if (DAT_1466ad900 == DAT_146859248) {
            plVar5 = (longlong *)UGameplayTask_SpawnActor::GetPrivateStaticClass();
            lVar7 = plVar5[0x1f];
            if (lVar7 == 0) {
              (**(code **)(*plVar5 + 0x368))(plVar5);
              lVar7 = plVar5[0x1f];
            }
            DAT_1466ad900 = *(byte *)(lVar7 + 0x48);
            _DAT_1466ad908 = *(undefined8 *)(lVar7 + 0x50);
          }
          if ((*(int *)(lVar8 + 0x38) < DAT_146859258) &&
             (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1)) {
            DAT_146859248 = 0xff;
            FName::FName(&DAT_146859250,L"Invalid",1);
            _Init_thread_footer(&DAT_146859258);
          }
          if (DAT_1466ad910 == DAT_146859248) {
            plVar5 = (longlong *)FUN_142df53d0();
            lVar8 = plVar5[0x1f];
            if (lVar8 == 0) {
              (**(code **)(*plVar5 + 0x368))(plVar5);
              lVar8 = plVar5[0x1f];
            }
            DAT_1466ad910 = *(byte *)(lVar8 + 0x48);
            _DAT_1466ad918 = *(undefined8 *)(lVar8 + 0x50);
          }
          local_3f8[0] = 0xffffffffffffffff;
          fVar11 = (float)FUN_142de77e0(param_1 + 0x88,param_2,0,local_3f8);
          iVar1 = *(int *)(lVar4 + 0x7540);
          iVar9 = 0;
          if (iVar1 < 1) {
            return 0;
          }
          do {
            FUN_142dc1ad0(local_3e8);
            iVar10 = iVar9;
            if (((iVar9 < 0) && (iVar10 = iVar9 + *(int *)(lVar4 + 0x7540), iVar10 < 0)) ||
               (*(int *)(lVar4 + 0x7540) <= iVar10)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              lVar8 = *(longlong *)(lVar4 + 0x7538);
              if (*(longlong *)(lVar4 + 0x7538) == 0) {
                lVar8 = lVar4 + 0x338;
              }
              FUN_142cb3d70(local_3e8,lVar8 + (longlong)iVar10 * 0x390);
              fVar13 = 3.4028235e+38;
              if (DAT_1466ad900 < 8) {
                if (afStack_3c8[(ulonglong)DAT_1466ad900 * 0x1a + 2] <= 0.0) {
                  fVar12 = 3.4028235e+38;
                }
                else {
                  fVar12 = afStack_3c8[(ulonglong)DAT_1466ad900 * 0x1a];
                }
                if (fVar12 < fVar11) {
                  return 1;
                }
              }
              if (DAT_1466ad910 < 8) {
                if (0.0 < afStack_3c8[(ulonglong)DAT_1466ad910 * 0x1a + 2]) {
                  fVar13 = afStack_3c8[(ulonglong)DAT_1466ad910 * 0x1a];
                }
                if (fVar13 < fVar11) {
                  return 1;
                }
              }
            }
            iVar9 = iVar9 + 1;
            if (iVar1 <= iVar9) {
              return 0;
            }
          } while( true );
        }
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142dcb3f0 FUN_142dcb3f0 body=751 status=ok
// SIG undefined FUN_142dcb3f0(void)

bool FUN_142dcb3f0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  float extraout_XMM0_Da;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined8 local_res10;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  
  uVar3 = 0;
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = (**(code **)(*param_2 + 0x678))(param_2);
    }
  }
  lVar2 = FUN_142ddddc0(uVar3);
  lVar4 = FUN_142dddd00(uVar3);
  if (((lVar2 != 0) && (lVar4 != 0)) && (0 < *(int *)(lVar2 + 0x7540))) {
    lVar7 = *(longlong *)(lVar2 + 0x7538);
    if (*(longlong *)(lVar2 + 0x7538) == 0) {
      lVar7 = lVar2 + 0x338;
    }
    plVar5 = (longlong *)FWeakObjectPtr::Get(lVar7);
    if (plVar5 != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(*plVar5 + 0x690))(plVar5);
      if (plVar6 != (longlong *)0x0) {
        plVar5 = plVar6;
      }
      if (plVar5 != (longlong *)0x0) {
        uVar3 = FUN_142e39920();
        lVar2 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar3);
        if (lVar2 != 0) {
          uVar3 = FUN_142ced280(lVar2,&local_78,1);
          FRotator::Vector(uVar3,&local_58);
          FUN_142ced180(lVar2,&local_68,1);
          FUN_142dd0240(lVar4,&local_78);
          local_78 = local_78 - local_68;
          local_74 = local_74 - local_64;
          local_70 = local_70 - local_60;
          fVar8 = local_78 * local_78 + local_74 * local_74 + local_70 * local_70;
          fVar10 = local_78;
          fVar9 = local_74;
          fVar11 = local_70;
          if ((fVar8 != 1.0) &&
             (fVar10 = DAT_1468b5d90, fVar9 = DAT_1468b5d94, fVar11 = DAT_1468b5d98, 1e-08 <= fVar8)
             ) {
            auVar12 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
            fVar11 = auVar12._0_4_;
            fVar11 = fVar11 + fVar11 * (0.5 - fVar8 * 0.5 * fVar11 * fVar11);
            fVar11 = fVar11 + fVar11 * (0.5 - fVar8 * 0.5 * fVar11 * fVar11);
            fVar10 = fVar11 * local_78;
            fVar9 = fVar11 * local_74;
            fVar11 = fVar11 * local_70;
          }
          fVar9 = local_58 * fVar10 + local_54 * fVar9 + local_50 * fVar11;
          fVar10 = -1.0;
          if ((-1.0 <= fVar9) && (fVar10 = fVar9, 1.0 <= fVar9)) {
            fVar10 = 1.0;
          }
          local_res10 = 0xffffffffffffffff;
          fVar10 = _guard_xfg_dispatch_icall_nop(fVar10);
          FUN_142de77e0(param_1 + 0x88,param_2,0,&local_res10);
          return fVar10 * 57.295776 <= extraout_XMM0_Da;
        }
      }
    }
  }
  return false;
}



// FUNCTION 142dcb6e0 FUN_142dcb6e0 body=555 status=ok
// SIG undefined FUN_142dcb6e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142dcb6e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined1 auStack_408 [32];
  undefined8 local_3e8 [2];
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  uVar4 = DAT_1468387a8 ^ (ulonglong)auStack_408;
  if (param_2 != (longlong *)0x0) {
    local_48 = uVar4;
    lVar5 = FUN_1428dfc70();
    iVar1 = *(int *)(lVar5 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(param_2[2] + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(param_2[2] + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar5 + 0x88)) {
      uVar4 = uVar4 & 0xffffffffffffff00;
    }
    else {
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)uVar4 != '\0') {
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x668))(param_2);
      uVar4 = 0;
      if (plVar6 != (longlong *)0x0) {
        uVar7 = FUN_142e79600();
        lVar5 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
        uVar4 = 0;
        if (lVar5 != 0) {
          local_3e8[0] = 0xffffffffffffffff;
          bVar11 = 0;
          uVar12 = FUN_142de77e0(param_1 + 0x88,param_2,0,local_3e8);
          if (*(char *)(param_1 + 0x118) == '\0') {
            FUN_142dc1ad0(local_3d8);
            if (0 < *(int *)(lVar5 + 0x7540)) {
              lVar8 = *(longlong *)(lVar5 + 0x7538);
              if (*(longlong *)(lVar5 + 0x7538) == 0) {
                lVar8 = lVar5 + 0x338;
              }
              FUN_142cb3d70(local_3d8,lVar8);
              cVar3 = FUN_142dda710(param_1,local_3d8,uVar12);
              if (cVar3 != '\0') {
LAB_142dcb8bf:
                bVar11 = 1;
                goto LAB_142dcb8c7;
              }
            }
            bVar11 = 0;
          }
          else {
            iVar1 = *(int *)(lVar5 + 0x7540);
            iVar9 = 0;
            if (0 < iVar1) {
              do {
                FUN_142dc1ad0(local_3d8);
                iVar10 = iVar9;
                if (((iVar9 < 0) && (iVar10 = iVar9 + *(int *)(lVar5 + 0x7540), iVar10 < 0)) ||
                   (*(int *)(lVar5 + 0x7540) <= iVar10)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  lVar8 = *(longlong *)(lVar5 + 0x7538);
                  if (*(longlong *)(lVar5 + 0x7538) == 0) {
                    lVar8 = lVar5 + 0x338;
                  }
                  FUN_142cb3d70(local_3d8,lVar8 + (longlong)iVar10 * 0x390);
                  cVar3 = FUN_142dda710(param_1,local_3d8,uVar12);
                  if (cVar3 != '\0') goto LAB_142dcb8bf;
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 < iVar1);
            }
          }
LAB_142dcb8c7:
          return (ulonglong)bVar11;
        }
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 142dcb910 FUN_142dcb910 body=104 status=ok
// SIG undefined FUN_142dcb910(void)

void FUN_142dcb910(longlong param_1,undefined1 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000142dcb975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 142dcb980 FUN_142dcb980 body=143 status=ok
// SIG undefined FUN_142dcb980(void)

bool FUN_142dcb980(longlong param_1,undefined1 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4,param_5);
  }
  return lVar1 != 0;
}



// FUNCTION 142dcba10 FUN_142dcba10 body=329 status=ok
// SIG undefined FUN_142dcba10(void)

void FUN_142dcba10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b34978) {
    _Init_thread_header(&DAT_146b34978);
    if (DAT_146b34978 == -1) {
      FName::FName(&DAT_146b34970,L"Stance",1);
      _Init_thread_footer(&DAT_146b34978);
    }
  }
  if (*(char *)(param_1 + 0x84) != '\0') {
    FUN_142d8f400(param_2,DAT_146b34970);
  }
  if (*(char *)(param_1 + 0x85) != '\0') {
    FUN_142d8fae0(param_2,DAT_146b34970);
  }
  if (*(char *)(param_1 + 0x86) != '\0') {
    FUN_142d8f450(param_2,DAT_146b34970);
  }
  if (*(char *)(param_1 + 0x87) != '\0') {
    FUN_142d8f540(param_2,DAT_146b34970);
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_142d6f980(param_2,0);
    return;
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    lVar2 = UAnimNotifyState::GetPrivateStaticClass();
    lVar1 = *(longlong *)(param_1 + 0x98);
    lVar3 = lVar1;
    if (lVar1 != 0) {
      while (lVar3 != lVar2) {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        if (lVar3 == 0) {
          return;
        }
      }
      if (lVar1 != 0) {
        FUN_142d6d070(param_2);
      }
    }
  }
  return;
}



// FUNCTION 142dcbb60 FUN_142dcbb60 body=351 status=ok
// SIG undefined FUN_142dcbb60(void)

void FUN_142dcbb60(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  iVar4 = (int)param_1[0xea8];
  plVar1 = param_1 + 0x67;
  lVar5 = 0;
  if (iVar4 < 1) {
    cVar3 = '\0';
  }
  else {
    plVar7 = (longlong *)param_1[0xea7];
    if ((longlong *)param_1[0xea7] == (longlong *)0x0) {
      plVar7 = plVar1;
    }
    cVar3 = FWeakObjectPtr::IsStale(plVar7,1,0);
    iVar4 = (int)param_1[0xea8];
  }
  if (0 < iVar4) {
    plVar7 = (longlong *)param_1[0xea7];
    if ((longlong *)param_1[0xea7] == (longlong *)0x0) {
      plVar7 = plVar1;
    }
    lVar5 = FWeakObjectPtr::Get(plVar7);
  }
  lVar6 = FWeakObjectPtr::Get(param_2);
  lVar2 = param_1[0xea8];
  *(undefined4 *)(param_1 + 0xea8) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x7544)) {
    FUN_142dd9f30(plVar1,0);
  }
  iVar4 = (int)param_1[0xea8];
  *(int *)(param_1 + 0xea8) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x7544) < iVar4 + 1) {
    FUN_142dd9e90(plVar1,iVar4);
  }
  plVar7 = (longlong *)param_1[0xea7];
  if ((longlong *)param_1[0xea7] == (longlong *)0x0) {
    plVar7 = plVar1;
  }
  FUN_140726d20(plVar7 + (longlong)iVar4 * 0x72,param_2);
  iVar4 = FUN_14233f450(param_1);
  if ((iVar4 != 3) && (lVar6 != lVar5)) {
    FUN_142e7adb0(param_1,lVar6);
  }
  if ((((int)lVar2 != (int)param_1[0xea8]) || (lVar5 != lVar6)) || (cVar3 != '\0')) {
    (**(code **)(*param_1 + 0x408))(param_1,(int)lVar2);
  }
  return;
}



// FUNCTION 142dcbcc0 thunk_FUN_142ddddc0 body=5 status=ok
// SIG undefined thunk_FUN_142ddddc0(void)

longlong thunk_FUN_142ddddc0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 != (longlong *)0x0) {
    lVar3 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return param_1[0x127];
    }
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return param_1[0x122];
    }
    uVar4 = FUN_142e79600();
    lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar4);
    if (lVar3 != 0) {
      return lVar3;
    }
    lVar3 = FUN_1429d7ab0();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (plVar1 = (longlong *)param_1[0x92], plVar1 != (longlong *)0x0)) {
      uVar4 = FUN_142e79600();
      lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    lVar3 = FUN_14291fb80();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (plVar1 = (longlong *)param_1[0x91], plVar1 != (longlong *)0x0)) {
      uVar4 = FUN_142e79600();
      lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 142dcbcd0 FUN_142dcbcd0 body=300 status=ok
// SIG undefined FUN_142dcbcd0(void)

int * FUN_142dcbcd0(longlong param_1,int *param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x108) != *(int *)(param_1 + 300)) {
    iVar4 = (int)(param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    lVar1 = *(longlong *)(param_1 + 0x150);
    if (*(longlong *)(param_1 + 0x150) == 0) {
      lVar1 = param_1 + 0x130;
    }
    iVar4 = *(int *)(lVar1 + (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf))
                             & (longlong)*(int *)(param_1 + 0x158) - 1U) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar1 = param_1;
      }
      do {
        if (*(ulonglong *)(lVar1 + (longlong)iVar4 * 0x10) == param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)(lVar1 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142dcbe00 FUN_142dcbe00 body=494 status=ok
// SIG undefined FUN_142dcbe00(void)

ulonglong FUN_142dcbe00(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  ulonglong in_RAX;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int7 iVar8;
  longlong lVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  
  iVar4 = *(int *)(param_1 + 0x30);
  if (iVar4 < 1) goto LAB_142dcbe47;
  bVar1 = *(byte *)(param_1 + 0x37);
  in_RAX = 0;
  if (bVar1 != 0) {
    if (bVar1 < 3) {
      in_RAX = *(ulonglong *)(param_3 + 8);
      if ((in_RAX != 0) && (*(char *)(in_RAX + 0x48) == '\0')) goto LAB_142dcbe47;
    }
    else if ((bVar1 < 5) && (*(char *)(param_2 + 0x18) == '\x01')) goto LAB_142dcbe47;
  }
  if ((*(char *)(param_1 + 0x35) != '\0') && (*(char *)(param_2 + 0x18) == '\x01'))
  goto LAB_142dcbe47;
  if (*(char *)(param_1 + 0x34) == '\0') {
    bVar10 = SBORROW4(*(int *)(param_3 + 0x50),iVar4);
    iVar4 = *(int *)(param_3 + 0x50) - iVar4;
  }
  else {
    uVar5 = FWeakObjectPtr::Get(param_2 + 8,1);
    in_RAX = FUN_142dceab0(param_3,uVar5);
    bVar10 = SBORROW4((int)in_RAX,*(int *)(param_1 + 0x30));
    iVar4 = (int)in_RAX - *(int *)(param_1 + 0x30);
  }
  bVar10 = bVar10 != iVar4 < 0;
  lVar6 = CONCAT71((int7)(in_RAX >> 8),bVar10);
  if (bVar10) goto LAB_142dcbfe7;
  in_RAX = FUN_142dda4d0(param_1,param_2,param_3);
  iVar4 = (int)in_RAX;
  if ((iVar4 < 0) || (*(int *)(param_3 + 0x50) <= iVar4)) goto LAB_142dcbe47;
  cVar2 = *(char *)(param_1 + 0x37);
  lVar3 = *(longlong *)(param_3 + 0x48);
  fVar12 = 3.4028235e+38;
  uVar7 = (ulonglong)iVar4;
  if (cVar2 != '\0') {
    iVar8 = (int7)(int3)(in_RAX >> 8);
    if (cVar2 == '\x01') {
      bVar10 = *(float *)(param_2 + 0x30) < *(float *)(lVar3 + 0x30 + uVar7 * 0x48);
LAB_142dcbf71:
      in_RAX = CONCAT71(iVar8,bVar10);
    }
    else {
      if (cVar2 == '\x02') {
        bVar10 = *(float *)(lVar3 + 0x30 + uVar7 * 0x48) < *(float *)(param_2 + 0x30);
        goto LAB_142dcbf71;
      }
      if (cVar2 == '\x03') {
        if (*(char *)(lVar3 + 0x18 + uVar7 * 0x48) == '\0') {
          bVar10 = (*(float *)(lVar3 + 0x3c + uVar7 * 0x48) +
                   *(float *)(lVar3 + 0x1c + uVar7 * 0x48)) - *(float *)(param_3 + 0x58) <
                   *(float *)(param_2 + 0x1c);
        }
        else {
          bVar10 = 3.4028235e+38 < *(float *)(param_2 + 0x1c);
        }
        goto LAB_142dcbf71;
      }
      in_RAX = uVar7;
      if (cVar2 != '\x04') goto LAB_142dcbe47;
      if (*(char *)(lVar3 + 0x18 + uVar7 * 0x48) == '\0') {
        fVar11 = (*(float *)(lVar3 + 0x3c + uVar7 * 0x48) + *(float *)(lVar3 + 0x1c + uVar7 * 0x48))
                 - *(float *)(param_3 + 0x58);
        in_RAX = CONCAT71(iVar8,*(float *)(param_2 + 0x1c) <= fVar11 &&
                                fVar11 != *(float *)(param_2 + 0x1c));
      }
      else {
        in_RAX = CONCAT71(iVar8,*(float *)(param_2 + 0x1c) <= 3.4028235e+38 &&
                                *(float *)(param_2 + 0x1c) != 3.4028235e+38);
      }
    }
    if ((char)in_RAX == '\0') {
LAB_142dcbe47:
      return in_RAX & 0xffffffffffffff00;
    }
  }
  iVar4 = (int)param_4[1];
  lVar9 = (longlong)iVar4;
  *(int *)(param_4 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_4 + 0xc) < iVar4 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_4,iVar4);
  }
  lVar6 = *param_4;
  *(undefined4 *)(lVar6 + lVar9 * 0xc) = *(undefined4 *)(lVar3 + 0x38 + uVar7 * 0x48);
  *(undefined8 *)(lVar6 + 4 + lVar9 * 0xc) = 0;
  lVar6 = *param_4;
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (*(char *)(lVar3 + 0x18 + uVar7 * 0x48) == '\0') {
      fVar12 = (*(float *)(lVar3 + 0x3c + uVar7 * 0x48) + *(float *)(lVar3 + 0x1c + uVar7 * 0x48)) -
               *(float *)(param_3 + 0x58);
    }
    *(float *)(lVar6 + 4 + lVar9 * 0xc) =
         fVar12 * *(float *)(param_1 + 0x3c) + *(float *)(lVar6 + 4 + lVar9 * 0xc);
  }
LAB_142dcbfe7:
  return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
}



// FUNCTION 142dcbff0 FUN_142dcbff0 body=92 status=ok
// SIG undefined FUN_142dcbff0(void)

undefined8 FUN_142dcbff0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [8];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x218),local_res8);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x218) + (longlong)local_res8[0] * 0x18);
  }
  puVar1 = puVar2 + 1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar1;
}



// FUNCTION 142dcc050 FUN_142dcc050 body=532 status=ok
// SIG undefined FUN_142dcc050(void)

undefined8 FUN_142dcc050(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
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
  plVar2 = (longlong *)(param_1 + 0x218);
  uVar3 = *(uint *)(param_1 + 0x240);
  puVar1 = (uint *)(param_1 + 0x228);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0x238);
    if (*(uint **)(param_1 + 0x238) == (uint *)0x0) {
      puVar10 = puVar1;
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
      if (bVar5) goto LAB_142dcc12d;
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
LAB_142dcc12d:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x240);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar9 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar10 = *(uint **)(param_1 + 0x238);
    if (*(uint **)(param_1 + 0x238) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = puVar10[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_142dcc1f3;
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
LAB_142dcc1f3:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    if (*(longlong *)(*plVar2 + 8 + (longlong)(int)uStack_4c * 0x18) == param_2) {
      return *(undefined8 *)(*plVar2 + (longlong)(int)uStack_4c * 0x18);
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return 0;
}



// FUNCTION 142dcc290 FUN_142dcc290 body=88 status=ok
// SIG undefined FUN_142dcc290(void)

void FUN_142dcc290(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(longlong **)(param_1 + 0x118) != (longlong *)0x0) &&
     (lVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x668))(), lVar1 != 0)) {
    uVar2 = UDamageableInterface::GetPrivateStaticClass();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x48))(plVar3,param_2);
    }
  }
  return;
}



// FUNCTION 142dcc2f0 FUN_142dcc2f0 body=1089 status=ok
// SIG undefined FUN_142dcc2f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142dcc2f0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong **pplVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 local_res18 [16];
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_68;
  longlong *local_60 [5];
  
  plVar7 = (longlong *)*param_2;
  plVar14 = (longlong *)0x0;
  if (0 < (int)plVar7[0x11]) {
    plVar10 = (longlong *)plVar7[0x10];
    if ((longlong *)plVar7[0x10] == (longlong *)0x0) {
      plVar10 = plVar7;
    }
    if (plVar10 != (longlong *)0x0) {
      if ((short)plVar10[3] == 0x28) {
        plVar10 = (longlong *)*plVar10;
        if (plVar10 != (longlong *)0x0) {
          lVar5 = UObject::GetPrivateStaticClass();
          if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) goto LAB_142dcc383;
        }
      }
      else if ((short)plVar10[3] == 0x27) {
        local_88 = (longlong *)*plVar10;
        uStack_80 = (undefined4)plVar10[1];
        uStack_7c = *(undefined4 *)((longlong)plVar10 + 0xc);
        plVar10 = (longlong *)FHardwareCursor::GetHandle(&local_88);
        goto LAB_142dcc383;
      }
    }
  }
  plVar10 = plVar14;
LAB_142dcc383:
  if (plVar10 != (longlong *)0x0) {
    uVar6 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
    lVar5 = (**(code **)(*plVar10 + 0x628))(plVar10,uVar6);
    if (lVar5 != 0) {
      plVar7 = (longlong *)FUN_1407ca3d0(param_2[2],*(undefined8 *)(*param_2 + 0x90));
      FUN_14217e740(&local_88);
      FUN_142194380(&local_88,0x28,0,0,0);
      local_88 = plVar10;
      FUN_1421923f0(&local_68,DAT_146b347f8,&local_88);
      if ((DAT_146b34840 == '\0') &&
         (puVar8 = (undefined8 *)FUN_142dcc740(), puVar8 != &DAT_146b34828)) {
        DAT_146b34828._0_4_ = *(undefined4 *)puVar8;
        DAT_146b34828._4_4_ = *(undefined4 *)((longlong)puVar8 + 4);
        _DAT_146b34830 = *(undefined4 *)(puVar8 + 1);
        uRam0000000146b34834 = *(undefined4 *)((longlong)puVar8 + 0xc);
        _DAT_146b34838 = puVar8[2];
        DAT_146b34840 = '\x01';
      }
      FUN_140bfb300(plVar7,&DAT_146b34830,&local_68);
      FUN_14217f430(&local_68);
      FUN_14217f430(&local_88);
      FUN_14217e740(&local_88);
      FUN_142194380(&local_88,0x28,0,0,0);
      local_88 = plVar10;
      FUN_1421923f0(&local_68,DAT_146b34800,&local_88);
      if ((DAT_146b34840 == '\0') &&
         (puVar8 = (undefined8 *)FUN_142dcc740(), puVar8 != &DAT_146b34828)) {
        DAT_146b34828._0_4_ = *(undefined4 *)puVar8;
        DAT_146b34828._4_4_ = *(undefined4 *)((longlong)puVar8 + 4);
        _DAT_146b34830 = *(undefined4 *)(puVar8 + 1);
        uRam0000000146b34834 = *(undefined4 *)((longlong)puVar8 + 0xc);
        _DAT_146b34838 = puVar8[2];
        DAT_146b34840 = '\x01';
      }
      FUN_140bfb300(plVar7,&DAT_146b34838,&local_68);
      FUN_14217f430(&local_68);
      FUN_14217f430(&local_88);
      plVar10 = *(longlong **)(lVar5 + 0x178);
      plVar15 = plVar10 + (longlong)*(int *)(lVar5 + 0x180) * 2;
      for (; plVar10 != plVar15; plVar10 = plVar10 + 2) {
        if (*plVar10 != 0) {
          uVar6 = *(undefined8 *)(*plVar10 + 0x18);
          if ((DAT_146b34840 == '\0') &&
             (puVar8 = (undefined8 *)FUN_142dcc740(), puVar8 != &DAT_146b34828)) {
            DAT_146b34828._0_4_ = *(undefined4 *)puVar8;
            DAT_146b34828._4_4_ = *(undefined4 *)((longlong)puVar8 + 4);
            _DAT_146b34830 = *(undefined4 *)(puVar8 + 1);
            uRam0000000146b34834 = *(undefined4 *)((longlong)puVar8 + 0xc);
            _DAT_146b34838 = puVar8[2];
            DAT_146b34840 = '\x01';
          }
          plVar9 = (longlong *)
                   FUN_14218dc00(CONCAT44(DAT_146b34828._4_4_,(undefined4)DAT_146b34828),local_res18
                                 ,uVar6,0);
          if ((*(longlong *)*plVar9 == 0) || (cVar4 = FUN_1407ce010(), cVar4 == '\0')) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            plVar12 = (longlong *)*plVar7;
            plVar1 = plVar12 + (longlong)(int)plVar7[1] * 5;
            plVar13 = plVar14;
            if (plVar12 != plVar1) {
              do {
                if ((*(longlong *)*plVar12 == *(longlong *)*plVar9) &&
                   (*(longlong *)(((longlong *)*plVar12)[1] + 0x28) ==
                    *(longlong *)(((longlong *)*plVar9)[1] + 0x28))) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                plVar13 = plVar12;
              } while ((!bVar3) && (plVar12 = plVar12 + 5, plVar13 = plVar14, plVar12 != plVar1));
            }
            if (plVar13 == (longlong *)0x0) {
              local_68 = *plVar9;
              FUN_14217e740(local_60);
              FUN_142194380(local_60,0xe,0,1,0);
              local_60[0]._0_4_ = (undefined4)plVar10[1];
              iVar2 = (int)plVar7[1];
              *(int *)(plVar7 + 1) = iVar2 + 1;
              if (*(int *)((longlong)plVar7 + 0xc) < iVar2 + 1) {
                TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar7,iVar2);
              }
              plVar9 = (longlong *)(*plVar7 + (longlong)iVar2 * 0x28);
              *plVar9 = local_68;
              FUN_14217e5b0(plVar9 + 1,local_60);
              pplVar11 = local_60;
            }
            else {
              FUN_14217e740(&local_88);
              FUN_142194380(&local_88,0xe,0,1,0);
              local_88 = (longlong *)CONCAT44(local_88._4_4_,(int)plVar10[1]);
              FUN_14217f450(plVar13 + 1,&local_88);
              pplVar11 = &local_88;
            }
            FUN_14217f430(pplVar11);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142dcc740 FUN_142dcc740 body=388 status=ok
// SIG undefined FUN_142dcc740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142dcc740(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_38 [2];
  longlong local_28;
  longlong local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b348e0) {
    _Init_thread_header(&DAT_146b348e0);
    if (DAT_146b348e0 == -1) {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"GameStats",1);
      uVar2 = FUN_14217c7e0(local_38,L"gbxtelemetry",L"GameStats",&DAT_1458a607c);
      FUN_14217c110(&DAT_146b348c8,*puVar1,uVar2);
      if (local_18 != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      FUN_14217bd20(&DAT_146b348d0);
      FUN_14217bd20(&DAT_146b348d8);
      uVar2 = DAT_146b348c8;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"player_id",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_146b348c8;
      _DAT_146b348d0 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"player_character_guid",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      _DAT_146b348d8 = *puVar1;
      _Init_thread_footer(&DAT_146b348e0);
      return &DAT_146b348c8;
    }
  }
  return &DAT_146b348c8;
}



// FUNCTION 142dcc8d0 FUN_142dcc8d0 body=1070 status=ok
// SIG undefined FUN_142dcc8d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142dcc8d0(float *param_1,undefined1 *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_1c8 [32];
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float local_190;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_160;
  float local_154;
  undefined1 local_150 [192];
  ulonglong local_90;
  int local_88;
  undefined4 local_84;
  ulonglong local_80;
  undefined1 *puVar7;
  
  local_80 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  *(undefined8 *)(param_1 + 3) = _DAT_1468b5d90;
  fVar10 = DAT_1468b5d98;
  param_1[5] = DAT_1468b5d98;
  *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 3);
  param_1[2] = fVar10;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_14223c460(param_2,1);
  if (param_2 != (undefined1 *)0x0) {
    lVar5 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    puVar8 = param_2;
    if (bVar3) goto LAB_142dcc99a;
  }
  puVar8 = (undefined1 *)0x0;
LAB_142dcc99a:
  local_84 = 0;
  local_90 = 0;
  local_88 = 0;
  if (param_2 != (undefined1 *)0x0) {
    FUN_140725150(param_2,local_150,0);
  }
  puVar7 = local_150;
  if (local_90 != 0) {
    puVar7 = (undefined1 *)0x0;
  }
  plVar6 = (longlong *)((ulonglong)puVar7 | local_90);
  plVar1 = plVar6 + local_88;
  do {
    if (plVar6 == plVar1) {
      FUN_14223c460(param_2,0);
      fVar10 = (param_1[3] - *param_1) * 0.5;
      local_190 = (float)CONCAT31(local_190._1_3_,1);
      fVar11 = (param_1[4] - param_1[1]) * 0.5;
      fVar12 = (param_1[5] - param_1[2]) * 0.5;
      fStack_19c = fVar10 + fVar10 + *param_1;
      fStack_198 = fVar11 + fVar11 + param_1[1];
      fStack_1a0 = fVar12 + fVar12 + param_1[2];
      fStack_194 = fVar12 + fStack_1a0;
      fStack_1a0 = fStack_1a0 - fVar12;
      *param_1 = (fVar10 + *param_1) - fVar10;
      param_1[1] = (fVar11 + param_1[1]) - fVar11;
      param_1[2] = fStack_1a0;
      param_1[3] = fStack_19c;
      *(ulonglong *)(param_1 + 4) = CONCAT44(fStack_194,fStack_198);
      param_1[6] = local_190;
      if (local_90 != 0) {
        local_160 = fStack_1a0;
        local_154 = fStack_194;
        FMemory::Free();
      }
      return param_1;
    }
    plVar2 = (longlong *)*plVar6;
    if (((*(byte *)(plVar2 + 0x17) & 1) != 0) &&
       ((param_3 == '\0' || (iVar4 = (**(code **)(*plVar2 + 0x4e8))(plVar2), iVar4 - 2U < 2)))) {
      if (puVar8 != (undefined1 *)0x0) {
        lVar5 = FUN_142912e90();
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((!bVar3) || (plVar2[3] != DAT_146aefb00)) goto LAB_142dccba0;
      }
      lVar5 = FUN_142a0cc80();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_1423b4660(plVar2);
      }
      (**(code **)(*plVar2 + 0x4a8))(plVar2,&local_188,&DAT_1468b5b70);
      fStack_19c = local_188 + local_17c;
      fStack_198 = local_184 + local_178;
      local_1a8 = local_188 - local_17c;
      fStack_1a4 = local_184 - local_178;
      local_190 = (float)CONCAT31(local_190._1_3_,1);
      fStack_194 = local_180 + local_174;
      fStack_1a0 = local_180 - local_174;
      if (*(char *)(param_1 + 6) == '\0') {
        *param_1 = local_1a8;
        param_1[1] = fStack_1a4;
        param_1[2] = fStack_1a0;
        param_1[3] = fStack_19c;
        *(ulonglong *)(param_1 + 4) = CONCAT44(fStack_194,fStack_198);
        param_1[6] = local_190;
      }
      else {
        fVar10 = *param_1;
        if (local_1a8 <= *param_1) {
          fVar10 = local_1a8;
        }
        fVar11 = fStack_1a4;
        if (param_1[1] <= fStack_1a4) {
          fVar11 = param_1[1];
        }
        fVar12 = fStack_19c;
        if (fStack_19c <= param_1[3]) {
          fVar12 = param_1[3];
        }
        fVar9 = param_1[5];
        if (param_1[5] <= fStack_194) {
          fVar9 = fStack_194;
        }
        *param_1 = fVar10;
        fVar10 = param_1[2];
        if (fStack_1a0 <= param_1[2]) {
          fVar10 = fStack_1a0;
        }
        param_1[1] = fVar11;
        param_1[3] = fVar12;
        param_1[5] = fVar9;
        param_1[2] = fVar10;
        fVar10 = param_1[4];
        if (param_1[4] <= fStack_198) {
          fVar10 = fStack_198;
        }
        param_1[4] = fVar10;
      }
    }
LAB_142dccba0:
    plVar6 = plVar6 + 1;
  } while( true );
}



// FUNCTION 142dccd00 FUN_142dccd00 body=322 status=ok
// SIG undefined FUN_142dccd00(void)

longlong FUN_142dccd00(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  lVar2 = (**(code **)(*param_1 + 0x670))();
  if (lVar2 != 0) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142dccdda;
  }
  lVar2 = AHeoCon::GetPrivateStaticClass();
  if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (lVar2 = param_1[0x138], lVar2 != 0)) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
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
LAB_142dccdda:
      return *(longlong *)(lVar2 + 0x848);
    }
  }
  lVar2 = (**(code **)(*param_1 + 0x678))(param_1);
  if (lVar2 != 0) {
    lVar3 = AHeoCon::GetPrivateStaticClass();
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



// FUNCTION 142dcce50 FUN_142dcce50 body=552 status=ok
// SIG undefined FUN_142dcce50(void)

undefined8 *
FUN_142dcce50(longlong param_1,undefined8 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  void *pvVar8;
  float fVar9;
  float fVar10;
  undefined1 local_b8 [88];
  undefined8 local_60;
  undefined4 local_58;
  
  *param_3 = 0;
  *param_4 = 0;
  cVar3 = FUN_142dd38f0();
  if (cVar3 == '\0') {
    FUN_140772210(local_b8);
    uVar4 = (ulonglong)_tls_index;
    uVar6 = 0;
    cVar3 = -1;
    fVar10 = 3.4028235e+38;
    pvVar8 = ThreadLocalStoragePointer;
    do {
      lVar7 = uVar6 * 0x68;
      if ((*(uint *)(lVar7 + 100 + param_1) >> 5 & 1) == 0) {
        cVar1 = *(char *)(lVar7 + 0x50 + param_1);
        if (*(int *)(*(longlong *)((longlong)pvVar8 + uVar4 * 8) + 0x38) < DAT_146859258) {
          _Init_thread_header(&DAT_146859258);
          if (DAT_146859258 == -1) {
            DAT_146859248 = -1;
            FName::FName(&DAT_146859250,L"Invalid",1);
            _Init_thread_footer(&DAT_146859258);
          }
          uVar4 = (ulonglong)_tls_index;
          pvVar8 = ThreadLocalStoragePointer;
        }
        if ((cVar1 != DAT_146859248) &&
           ((uVar2 = *(uint *)(lVar7 + 100 + param_1), (uVar2 >> 1 & 1) != 0 ||
            ((uVar2 >> 2 & 1) == 0)))) {
          if (*(float *)(lVar7 + 0x28 + param_1) <= 0.0) {
            fVar9 = 3.4028235e+38;
          }
          else {
            fVar9 = *(float *)(lVar7 + 0x20 + param_1);
          }
          if (fVar9 < fVar10) {
            fVar10 = fVar9;
            cVar3 = (char)uVar6;
          }
        }
      }
      bVar5 = (char)uVar6 + 1;
      uVar6 = (ulonglong)bVar5;
    } while (bVar5 < 8);
    if (cVar3 < '\0') {
      FUN_142dcd3a0(param_1,param_2,param_3);
    }
    else {
      FUN_1407263c0(local_b8,param_1 + 0x20 + (longlong)cVar3 * 0x68);
      *param_4 = 1;
      *param_2 = local_60;
      *(undefined4 *)(param_2 + 1) = local_58;
    }
    return param_2;
  }
  *param_3 = 1;
  FUN_142dd0990(param_1,param_2);
  return param_2;
}



// FUNCTION 142dcd080 FUN_142dcd080 body=641 status=ok
// SIG undefined FUN_142dcd080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142dcd080(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  void *pvVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  undefined8 *local_res18;
  undefined1 local_c8 [16];
  undefined1 local_b8 [88];
  undefined8 local_60;
  undefined4 local_58;
  
  *param_3 = _DAT_1468b5d90;
  *(undefined4 *)(param_3 + 1) = DAT_1468b5d98;
  local_res18 = param_3;
  cVar3 = FUN_142dd38f0(param_2);
  if (cVar3 == '\0') {
    FUN_140772210(local_b8);
    uVar9 = 0;
    fVar13 = 3.4028235e+38;
    cVar3 = -1;
    uVar11 = (ulonglong)_tls_index;
    pvVar7 = ThreadLocalStoragePointer;
    do {
      lVar10 = uVar9 * 0x68;
      if ((*(uint *)(lVar10 + 100 + param_2) >> 5 & 1) == 0) {
        cVar1 = *(char *)(lVar10 + 0x50 + param_2);
        if ((*(int *)(*(longlong *)((longlong)pvVar7 + uVar11 * 8) + 0x38) < DAT_146859258) &&
           (_Init_thread_header(&DAT_146859258), pvVar7 = ThreadLocalStoragePointer,
           DAT_146859258 == -1)) {
          DAT_146859248 = -1;
          FName::FName(&DAT_146859250,L"Invalid",1);
          _Init_thread_footer(&DAT_146859258);
          pvVar7 = ThreadLocalStoragePointer;
        }
        if ((cVar1 != DAT_146859248) &&
           ((uVar2 = *(uint *)(lVar10 + 100 + param_2), (uVar2 >> 1 & 1) != 0 ||
            ((uVar2 >> 2 & 1) == 0)))) {
          if (*(float *)(lVar10 + 0x28 + param_2) <= 0.0) {
            fVar12 = 3.4028235e+38;
          }
          else {
            fVar12 = *(float *)(lVar10 + 0x20 + param_2);
          }
          if (fVar12 < fVar13) {
            fVar13 = fVar12;
            cVar3 = (char)uVar9;
          }
        }
      }
      param_3 = local_res18;
      bVar8 = (char)uVar9 + 1;
      uVar9 = (ulonglong)bVar8;
    } while (bVar8 < 8);
    if (cVar3 < '\0') {
      FUN_142dcd3a0(param_2,param_1,&local_res18);
    }
    else {
      FUN_1407263c0(local_b8,param_2 + 0x20 + (longlong)cVar3 * 0x68);
      *param_1 = local_60;
      *(undefined4 *)(param_1 + 1) = local_58;
    }
  }
  else {
    FUN_142dd0990(param_2,param_1);
  }
  cVar3 = FUN_142dd38f0(param_2);
  if ((cVar3 != '\0') &&
     (plVar4 = (longlong *)FWeakObjectPtr::Get(param_2), plVar4 != (longlong *)0x0)) {
    plVar5 = (longlong *)(**(code **)(*plVar4 + 0x690))(plVar4);
    if (plVar5 != (longlong *)0x0) {
      plVar4 = plVar5;
    }
    if (plVar4 != (longlong *)0x0) {
      puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x308))(plVar4,local_c8);
      *param_3 = *puVar6;
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar6 + 1);
    }
  }
  return param_1;
}



// FUNCTION 142dcd310 FUN_142dcd310 body=135 status=ok
// SIG undefined FUN_142dcd310(void)

undefined8 * FUN_142dcd310(longlong param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  if (((param_4 < 0) && (param_4 = param_4 + *(int *)(param_1 + 0x7540), param_4 < 0)) ||
     (*(int *)(param_1 + 0x7540) <= param_4)) {
    local_10 = DAT_1466ad8f8;
    puVar2 = &local_18;
    local_18 = DAT_1466ad8f0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x7538);
    if (*(longlong *)(param_1 + 0x7538) == 0) {
      lVar3 = param_1 + 0x338;
    }
    puVar2 = (undefined8 *)FUN_142dcd080(&local_18,lVar3 + (longlong)param_4 * 0x390);
  }
  uVar1 = *(undefined4 *)(puVar2 + 1);
  *param_2 = *puVar2;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 142dcd3a0 FUN_142dcd3a0 body=297 status=ok
// SIG undefined FUN_142dcd3a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142dcd3a0(longlong param_1,undefined8 *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 local_78 [48];
  char local_48;
  uint local_34;
  undefined8 local_20;
  undefined4 local_18;
  
  *param_3 = 0;
  cVar1 = FUN_142dd38f0();
  if (cVar1 != '\0') {
    *param_3 = 1;
    FUN_142dd0990(param_1,param_2);
    return param_2;
  }
  FUN_140772210(local_78);
  if (*(byte *)(param_1 + 0x368) < 8) {
    FUN_1407263c0(local_78,param_1 + 0x20 + (ulonglong)*(byte *)(param_1 + 0x368) * 0x68);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146859258) &&
       (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1)) {
      DAT_146859248 = -1;
      FName::FName(&DAT_146859250,L"Invalid",1);
      _Init_thread_footer(&DAT_146859258);
    }
    if ((local_48 != DAT_146859248) && ((local_34 >> 2 & 1) == 0)) {
      *param_2 = local_20;
      goto LAB_142dcd468;
    }
  }
  *param_2 = _DAT_1468b5d90;
  local_18 = DAT_1468b5d98;
LAB_142dcd468:
  *(undefined4 *)(param_2 + 1) = local_18;
  return param_2;
}



// FUNCTION 142dcd4d0 FUN_142dcd4d0 body=398 status=ok
// SIG undefined FUN_142dcd4d0(void)

undefined8 *
FUN_142dcd4d0(longlong param_1,undefined8 *param_2,undefined4 *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 local_res18 [16];
  longlong local_28 [2];
  
  if ((param_3 == (undefined4 *)0x0) && (param_4 == (longlong *)0x0)) {
    FUN_142dcd3a0(param_1,param_2,local_res18);
    return param_2;
  }
  if (*(byte *)(param_1 + 0x368) < 8) {
    if (param_3 != (undefined4 *)0x0) {
      lVar2 = (ulonglong)*(byte *)(param_1 + 0x368) * 0x68;
      if (*(float *)(lVar2 + 0x28 + param_1) <= 0.0) {
        uVar3 = 0x7f7fffff;
      }
      else {
        uVar3 = *(undefined4 *)(lVar2 + 0x20 + param_1);
      }
      *param_3 = uVar3;
    }
    if (param_4 != (longlong *)0x0) {
      plVar1 = (longlong *)FName::ToString(param_1 + 0x370,local_28);
      if (param_4 != plVar1) {
        if (*param_4 != 0) {
          FMemory::Free();
        }
        *param_4 = *plVar1;
        *plVar1 = 0;
        *(int *)(param_4 + 1) = (int)plVar1[1];
        *(undefined4 *)((longlong)param_4 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
        plVar1[1] = 0;
      }
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      local_28[0] = 0;
      local_28[1] = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      FGenericPlatformString::Memcpy(local_28[0],L"Default__AISense_",0x24);
      FString::RemoveFromStart(param_4,local_28,1);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
    lVar2 = (ulonglong)*(byte *)(param_1 + 0x368) * 0x68;
    *param_2 = *(undefined8 *)(lVar2 + 0x2c + param_1);
    uVar3 = *(undefined4 *)(lVar2 + 0x34 + param_1);
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0x7f7fffff;
    }
    if ((param_4 != (longlong *)0x0) &&
       (*(undefined4 *)(param_4 + 1) = 0, *(int *)((longlong)param_4 + 0xc) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,0);
    }
    *param_2 = DAT_1466ad8f0;
    uVar3 = DAT_1466ad8f8;
  }
  *(undefined4 *)(param_2 + 1) = uVar3;
  return param_2;
}



// FUNCTION 142dcd660 FUN_142dcd660 body=125 status=ok
// SIG undefined FUN_142dcd660(void)

longlong * FUN_142dcd660(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (((-1 < param_2) || (param_2 = param_2 + *(int *)(param_1 + 0x7540), -1 < param_2)) &&
     (param_2 < *(int *)(param_1 + 0x7540))) {
    lVar3 = *(longlong *)(param_1 + 0x7538);
    if (*(longlong *)(param_1 + 0x7538) == 0) {
      lVar3 = param_1 + 0x338;
    }
    plVar1 = (longlong *)FWeakObjectPtr::Get((longlong)param_2 * 0x390 + lVar3);
    if (plVar1 != (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*plVar1 + 0x690))(plVar1);
      if (plVar2 != (longlong *)0x0) {
        plVar1 = plVar2;
      }
    }
    return plVar1;
  }
  return (longlong *)0x0;
}



// FUNCTION 142dcd6e0 FUN_142dcd6e0 body=91 status=ok
// SIG undefined FUN_142dcd6e0(void)

undefined8 FUN_142dcd6e0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  if (((-1 < param_3) || (param_3 = param_3 + *(int *)(param_1 + 0x7540), -1 < param_3)) &&
     (param_3 < *(int *)(param_1 + 0x7540))) {
    lVar1 = *(longlong *)(param_1 + 0x7538);
    if (*(longlong *)(param_1 + 0x7538) == 0) {
      lVar1 = param_1 + 0x338;
    }
    FUN_142cb3d70(param_2,lVar1 + (longlong)param_3 * 0x390);
    return 1;
  }
  return 0;
}



// FUNCTION 142dcd740 FUN_142dcd740 body=143 status=ok
// SIG undefined FUN_142dcd740(void)

undefined8 * FUN_142dcd740(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined1 local_res18 [16];
  undefined8 local_18;
  undefined4 local_10;
  
  if (((param_3 < 0) && (param_3 = param_3 + *(int *)(param_1 + 0x7540), param_3 < 0)) ||
     (*(int *)(param_1 + 0x7540) <= param_3)) {
    local_18 = DAT_1466ad8f0;
    local_10 = DAT_1466ad8f8;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x7538);
    if (*(longlong *)(param_1 + 0x7538) == 0) {
      lVar1 = param_1 + 0x338;
    }
    FUN_142dcd3a0(lVar1 + (longlong)param_3 * 0x390,&local_18,local_res18);
  }
  *param_2 = local_18;
  *(undefined4 *)(param_2 + 1) = local_10;
  return param_2;
}



// FUNCTION 142dcd7d0 FUN_142dcd7d0 body=76 status=ok
// SIG undefined FUN_142dcd7d0(void)

undefined8 FUN_142dcd7d0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (((-1 < param_2) || (param_2 = param_2 + *(int *)(param_1 + 0x7540), -1 < param_2)) &&
     (param_2 < *(int *)(param_1 + 0x7540))) {
    lVar2 = *(longlong *)(param_1 + 0x7538);
    if (*(longlong *)(param_1 + 0x7538) == 0) {
      lVar2 = param_1 + 0x338;
    }
    uVar1 = FWeakObjectPtr::Get((longlong)param_2 * 0x390 + lVar2 + 0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 142dcd820 FUN_142dcd820 body=131 status=ok
// SIG undefined FUN_142dcd820(void)

longlong FUN_142dcd820(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x7538);
  if (*(longlong *)(param_1 + 0x7538) == 0) {
    lVar2 = param_1 + 0x338;
  }
  lVar3 = (longlong)*(int *)(param_1 + 0x7540) * 0x390 + lVar2;
  do {
    if (lVar2 == lVar3) {
      return 0;
    }
    lVar1 = FWeakObjectPtr::Get(lVar2);
    if ((lVar1 != 0) && ((*(byte *)(lVar2 + 0x38c) & 1) != 0)) {
      if ((*(byte *)(lVar2 + 0x38c) & 4) != 0) {
        return lVar1;
      }
      if (param_2 == '\0') {
        return lVar1;
      }
    }
    lVar2 = lVar2 + 0x390;
  } while( true );
}



// FUNCTION 142dcd8b0 FUN_142dcd8b0 body=322 status=ok
// SIG undefined FUN_142dcd8b0(void)

void FUN_142dcd8b0(longlong param_1,int *param_2,int *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (*(int *)(param_1 + 0x108) == 0) {
    *param_2 = 1;
    *param_3 = 1;
    return;
  }
  uVar10 = 0;
  *param_3 = 0;
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    puVar8 = *(ulonglong **)(param_1 + 0x100);
    uVar9 = (longlong)*(int *)(param_1 + 0x108) & 0x1fffffffffffffff;
    if (puVar8 + *(int *)(param_1 + 0x108) < puVar8) {
      uVar9 = uVar10;
    }
    uVar7 = uVar10;
    if (uVar9 != 0) {
LAB_142dcd940:
      uVar1 = *puVar8;
      if (uVar1 != 0) {
        uVar2 = FUN_142dfdfe0();
        uVar4 = uVar1;
        do {
          if (uVar4 == uVar2) {
            *param_3 = *param_3 + 1;
            uVar2 = FUN_142dfdfe0();
            uVar4 = uVar1;
            goto LAB_142dcd970;
          }
          uVar4 = *(ulonglong *)(uVar4 + 0x30);
        } while (uVar4 != 0);
      }
      goto LAB_142dcd9bf;
    }
  }
  return;
  while (uVar4 = *(ulonglong *)(uVar4 + 0x30), uVar6 = uVar10, uVar4 != 0) {
LAB_142dcd970:
    uVar6 = uVar1;
    if (uVar4 == uVar2) break;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x1c8);
  lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x1d0) * 0x80 + lVar3;
  for (; lVar3 != lVar5; lVar3 = lVar3 + 0x80) {
    if (*(ulonglong *)(lVar3 + 8) == uVar6) {
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0x51) != '\0')) {
        *param_2 = *param_2 + 1;
      }
      break;
    }
  }
LAB_142dcd9bf:
  puVar8 = puVar8 + 1;
  uVar7 = uVar7 + 1;
  if (uVar7 == uVar9) {
    return;
  }
  goto LAB_142dcd940;
}



// FUNCTION 142dcda00 FUN_142dcda00 body=56 status=ok
// SIG undefined FUN_142dcda00(void)

void FUN_142dcda00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_142dcdc10();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x280))(plVar1,param_3,param_4);
  }
  return;
}



// FUNCTION 142dcda40 FUN_142dcda40 body=297 status=ok
// SIG undefined FUN_142dcda40(void)

void FUN_142dcda40(longlong param_1,longlong *param_2,longlong param_3,int *param_4,int *param_5,
                  char param_6)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  *param_4 = 0;
  *param_5 = 0;
LAB_142dcda85:
  do {
    if ((iVar5 < 0) || (*(int *)(param_1 + 0x1d0) <= iVar5)) {
      if (*param_2 != 0) {
        FMemory::Free();
        return;
      }
      return;
    }
    lVar4 = (longlong)iVar5 * 0x80 + *(longlong *)(param_1 + 0x1c8);
    lVar2 = FUN_142dcdb70(lVar4);
    if ((lVar2 != 0) && ((param_6 == '\0' || (*(char *)(lVar2 + 0x8a) == '\0')))) {
      if ((int)param_2[1] == 0) {
LAB_142dcdaf5:
        if ((*(char *)(lVar2 + 0xe1) == '\0') &&
           ((param_3 == 0 || (*(longlong *)(lVar2 + 0xd8) == param_3)))) {
          if (*(char *)(lVar4 + 0x51) != '\0') {
            *param_4 = *param_4 + 1;
          }
          if ((*(char *)(lVar4 + 0x50) != '\0') && (*(char *)(lVar4 + 0x7a) != '\0')) {
            *param_5 = *param_5 + 1;
          }
        }
      }
      else {
        plVar3 = (longlong *)*param_2;
        plVar1 = plVar3 + (int)param_2[1];
        if (plVar3 != plVar1) {
          do {
            if (*plVar3 == *(longlong *)(lVar2 + 0x90)) goto LAB_142dcdaf5;
            plVar3 = plVar3 + 1;
          } while (plVar3 != plVar1);
          iVar5 = iVar5 + 1;
          goto LAB_142dcda85;
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



// FUNCTION 142dcdb70 FUN_142dcdb70 body=159 status=ok
// SIG undefined FUN_142dcdb70(void)

longlong FUN_142dcdb70(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x68) == 0) {
    plVar1 = *(longlong **)(param_1 + 8);
    lVar4 = 0;
    if (plVar1 != (longlong *)0x0) {
      lVar5 = plVar1[0x1f];
      if (lVar5 == 0) {
        (**(code **)(*plVar1 + 0x368))(plVar1);
        lVar5 = plVar1[0x1f];
        if (lVar5 == 0) {
          return 0;
        }
      }
      lVar3 = FUN_142dfdfe0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar4 = lVar5;
      }
    }
  }
  return lVar4;
}



// FUNCTION 142dcdc10 FUN_142dcdc10 body=115 status=ok
// SIG undefined FUN_142dcdc10(void)

longlong FUN_142dcdc10(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  lVar2 = (longlong)*(int *)(param_1 + 0x1d0) * 0x80 + lVar1;
  do {
    if (lVar1 == lVar2) {
LAB_142dcdc42:
      if (param_2 == (longlong *)0x0) {
        lVar1 = 0;
      }
      else {
        lVar1 = param_2[0x1f];
        if (lVar1 == 0) {
          (**(code **)(*param_2 + 0x368))(param_2);
          return param_2[0x1f];
        }
      }
      return lVar1;
    }
    if (*(longlong **)(lVar1 + 8) == param_2) {
      if (lVar1 != 0) {
        lVar1 = FUN_142dcdb70();
        return lVar1;
      }
      goto LAB_142dcdc42;
    }
    lVar1 = lVar1 + 0x80;
  } while( true );
}



// FUNCTION 142dcdc90 FUN_142dcdc90 body=50 status=ok
// SIG undefined FUN_142dcdc90(void)

longlong FUN_142dcdc90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  lVar2 = (longlong)*(int *)(param_1 + 0x1d0) * 0x80 + lVar1;
  while( true ) {
    if (lVar1 == lVar2) {
      return 0;
    }
    if (*(longlong *)(lVar1 + 8) == param_2) break;
    lVar1 = lVar1 + 0x80;
  }
  return lVar1;
}



// FUNCTION 142dcdcd0 FUN_142dcdcd0 body=38 status=ok
// SIG undefined FUN_142dcdcd0(void)

undefined8 FUN_142dcdcd0(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = UWorld::GetGameState<APVPGameState>();
    if (lVar1 != 0) {
      return *(undefined8 *)(lVar1 + 0x540);
    }
  }
  return 0;
}



// FUNCTION 142dcdd00 FUN_142dcdd00 body=450 status=ok
// SIG undefined FUN_142dcdd00(void)

ulonglong FUN_142dcdd00(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  lVar5 = *(longlong *)(param_1 + 0x28);
  if (lVar5 == 0) {
    return 0;
  }
  lVar7 = *(longlong *)(lVar5 + 0x1c8);
  lVar4 = (longlong)*(int *)(lVar5 + 0x1d0) * 0x80 + lVar7;
  while( true ) {
    if (lVar7 == lVar4) {
      return 0;
    }
    if (*(longlong *)(lVar7 + 8) == *(longlong *)(param_1 + 0x10)) break;
    lVar7 = lVar7 + 0x80;
  }
  if (lVar7 == 0) {
    return 0;
  }
  lVar4 = FUN_142dcdb70(lVar7);
  if (lVar4 == 0) {
    return 0;
  }
  if (0 < *(int *)(lVar4 + 0xc0)) {
    return (ulonglong)*(uint *)(lVar7 + 0x54);
  }
  if (0 < *(int *)(lVar4 + 0xa8)) {
    lVar5 = *(longlong *)(lVar7 + 0x40);
    uVar11 = 0;
    lVar7 = (longlong)*(int *)(lVar7 + 0x48) * 0x38 + lVar5;
    if (lVar5 == lVar7) {
      return 0;
    }
    do {
      uVar11 = (ulonglong)(uint)((int)uVar11 + *(int *)(lVar5 + 0x30));
      lVar5 = lVar5 + 0x38;
    } while (lVar5 != lVar7);
    return uVar11;
  }
  if (*(char *)(lVar4 + 0x110) == '\0') {
    return 0;
  }
  if (*(int *)(lVar4 + 0x108) < 1) {
    return 0;
  }
  uVar12 = 0;
  puVar10 = *(ulonglong **)(lVar4 + 0x100);
  uVar11 = (longlong)*(int *)(lVar4 + 0x108) & 0x1fffffffffffffff;
  if (puVar10 + *(int *)(lVar4 + 0x108) < puVar10) {
    uVar11 = uVar12;
  }
  uVar9 = uVar12;
  uVar13 = uVar12;
  if (uVar11 == 0) {
    return 0;
  }
LAB_142dcde32:
  uVar1 = *puVar10;
  if (uVar1 != 0) {
    uVar3 = FUN_142dfdfe0();
    uVar6 = uVar1;
    do {
      if (uVar6 == uVar3) {
        uVar3 = FUN_142dfdfe0();
        uVar6 = uVar1;
        goto LAB_142dcde60;
      }
      uVar6 = *(ulonglong *)(uVar6 + 0x30);
    } while (uVar6 != 0);
  }
  goto LAB_142dcde83;
  while (uVar6 = *(ulonglong *)(uVar6 + 0x30), uVar8 = uVar12, uVar6 != 0) {
LAB_142dcde60:
    uVar8 = uVar1;
    if (uVar6 == uVar3) break;
  }
  cVar2 = FUN_142dd3360(lVar5,uVar8);
  if (cVar2 != '\0') {
    uVar13 = (ulonglong)((int)uVar13 + 1);
  }
LAB_142dcde83:
  puVar10 = puVar10 + 1;
  uVar9 = uVar9 + 1;
  if (uVar9 == uVar11) {
    return uVar13;
  }
  goto LAB_142dcde32;
}



// FUNCTION 142dcded0 FUN_142dcded0 body=383 status=ok
// SIG undefined FUN_142dcded0(void)

ulonglong FUN_142dcded0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  lVar6 = *(longlong *)(param_1 + 0x1c8);
  lVar3 = (longlong)*(int *)(param_1 + 0x1d0) * 0x80 + lVar6;
  while( true ) {
    if (lVar6 == lVar3) {
      return 0;
    }
    if (*(longlong *)(lVar6 + 8) == param_2) break;
    lVar6 = lVar6 + 0x80;
  }
  if (lVar6 == 0) {
    return 0;
  }
  lVar3 = FUN_142dcdb70(lVar6);
  if (lVar3 == 0) {
    return 0;
  }
  if (0 < *(int *)(lVar3 + 0xc0)) {
    return (ulonglong)*(uint *)(lVar6 + 0x54);
  }
  if (0 < *(int *)(lVar3 + 0xa8)) {
    lVar3 = *(longlong *)(lVar6 + 0x40);
    uVar10 = 0;
    lVar6 = (longlong)*(int *)(lVar6 + 0x48) * 0x38 + lVar3;
    for (; lVar3 != lVar6; lVar3 = lVar3 + 0x38) {
      uVar10 = uVar10 + *(int *)(lVar3 + 0x30);
    }
    return (ulonglong)uVar10;
  }
  if (*(char *)(lVar3 + 0x110) == '\0') {
    return 0;
  }
  if (*(int *)(lVar3 + 0x108) < 1) {
    return 0;
  }
  uVar11 = 0;
  puVar9 = *(ulonglong **)(lVar3 + 0x100);
  uVar13 = (longlong)*(int *)(lVar3 + 0x108) & 0x1fffffffffffffff;
  if (puVar9 + *(int *)(lVar3 + 0x108) < puVar9) {
    uVar13 = uVar11;
  }
  uVar8 = uVar11;
  uVar12 = uVar11;
  if (uVar13 == 0) {
    return 0;
  }
LAB_142dcdfd2:
  uVar1 = *puVar9;
  if (uVar1 != 0) {
    uVar4 = FUN_142dfdfe0();
    uVar5 = uVar1;
    do {
      if (uVar5 == uVar4) {
        uVar4 = FUN_142dfdfe0();
        uVar5 = uVar1;
        goto LAB_142dce000;
      }
      uVar5 = *(ulonglong *)(uVar5 + 0x30);
    } while (uVar5 != 0);
  }
  goto LAB_142dce023;
  while (uVar5 = *(ulonglong *)(uVar5 + 0x30), uVar7 = uVar11, uVar5 != 0) {
LAB_142dce000:
    uVar7 = uVar1;
    if (uVar5 == uVar4) break;
  }
  cVar2 = FUN_142dd3360(param_1,uVar7);
  if (cVar2 != '\0') {
    uVar12 = (ulonglong)((int)uVar12 + 1);
  }
LAB_142dce023:
  puVar9 = puVar9 + 1;
  uVar8 = uVar8 + 1;
  if (uVar8 == uVar13) {
    return uVar12;
  }
  goto LAB_142dcdfd2;
}



// FUNCTION 142dce050 FUN_142dce050 body=310 status=ok
// SIG undefined FUN_142dce050(void)

int FUN_142dce050(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return -1;
  }
  lVar3 = *(longlong *)(lVar1 + 0x1c8);
  lVar1 = (longlong)*(int *)(lVar1 + 0x1d0) * 0x80 + lVar3;
  if (lVar3 != lVar1) {
    while (*(longlong *)(lVar3 + 8) != *(longlong *)(param_1 + 0x10)) {
      lVar3 = lVar3 + 0x80;
      if (lVar3 == lVar1) {
        return -1;
      }
    }
    if ((lVar3 != 0) && (lVar1 = FUN_142dcdb70(lVar3), lVar1 != 0)) {
      if (*(int *)(lVar1 + 0xc0) < 1) {
        if (0 < *(int *)(lVar1 + 0xa8)) {
          iVar4 = 0;
          lVar1 = FUN_142dcdb70(lVar3);
          if (lVar1 == 0) {
            return 0;
          }
          lVar2 = *(longlong *)(lVar1 + 0xa0);
          lVar1 = (longlong)*(int *)(lVar1 + 0xa8) * 0x30 + lVar2;
          if (lVar2 == lVar1) {
            return 0;
          }
          do {
            if (*(int *)(lVar3 + 0x3c) < *(int *)(lVar2 + 0x10)) {
              iVar4 = iVar4 + *(int *)(*(longlong *)(lVar2 + 8) +
                                      (longlong)*(int *)(lVar3 + 0x3c) * 8);
            }
            lVar2 = lVar2 + 0x30;
          } while (lVar2 != lVar1);
          return iVar4;
        }
        if ((*(char *)(lVar1 + 0x110) != '\0') && (0 < *(int *)(lVar1 + 0x108))) {
          return *(int *)(lVar1 + 0x108);
        }
      }
      else if (*(int *)(lVar3 + 0x3c) < *(int *)(lVar1 + 0xc0)) {
        return *(int *)(*(longlong *)(lVar1 + 0xb8) + (longlong)*(int *)(lVar3 + 0x3c) * 8);
      }
    }
  }
  return -1;
}



// FUNCTION 142dce190 FUN_142dce190 body=256 status=ok
// SIG undefined FUN_142dce190(void)

int FUN_142dce190(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x1c8);
  lVar1 = (longlong)*(int *)(param_1 + 0x1d0) * 0x80 + lVar3;
  if (lVar3 != lVar1) {
    while (*(longlong *)(lVar3 + 8) != param_2) {
      lVar3 = lVar3 + 0x80;
      if (lVar3 == lVar1) {
        return -1;
      }
    }
    if ((lVar3 != 0) && (lVar1 = FUN_142dcdb70(lVar3), lVar1 != 0)) {
      if (*(int *)(lVar1 + 0xc0) < 1) {
        if (0 < *(int *)(lVar1 + 0xa8)) {
          iVar4 = 0;
          lVar1 = FUN_142dcdb70(lVar3);
          iVar5 = iVar4;
          if (lVar1 != 0) {
            lVar2 = *(longlong *)(lVar1 + 0xa0);
            lVar1 = (longlong)*(int *)(lVar1 + 0xa8) * 0x30 + lVar2;
            iVar5 = 0;
            if (lVar2 != lVar1) {
              do {
                if (*(int *)(lVar3 + 0x3c) < *(int *)(lVar2 + 0x10)) {
                  iVar4 = iVar4 + *(int *)(*(longlong *)(lVar2 + 8) +
                                          (longlong)*(int *)(lVar3 + 0x3c) * 8);
                }
                lVar2 = lVar2 + 0x30;
                iVar5 = iVar4;
              } while (lVar2 != lVar1);
            }
          }
          return iVar5;
        }
        if ((*(char *)(lVar1 + 0x110) != '\0') && (0 < *(int *)(lVar1 + 0x108))) {
          return *(int *)(lVar1 + 0x108);
        }
      }
      else if (*(int *)(lVar3 + 0x3c) < *(int *)(lVar1 + 0xc0)) {
        return *(int *)(*(longlong *)(lVar1 + 0xb8) + (longlong)*(int *)(lVar3 + 0x3c) * 8);
      }
    }
  }
  return -1;
}



// FUNCTION 142dce290 FUN_142dce290 body=262 status=ok
// SIG undefined FUN_142dce290(void)

int FUN_142dce290(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 == 0) {
    return -1;
  }
  lVar3 = *(longlong *)(lVar2 + 0x1c8);
  lVar2 = (longlong)*(int *)(lVar2 + 0x1d0) * 0x80 + lVar3;
  while( true ) {
    if (lVar3 == lVar2) {
      return -1;
    }
    if (*(longlong *)(lVar3 + 8) == *(longlong *)(param_1 + 0x10)) break;
    lVar3 = lVar3 + 0x80;
  }
  if (lVar3 == 0) {
    return -1;
  }
  iVar1 = *(int *)(lVar3 + 0x3c);
  iVar4 = iVar1 + -1;
  if (iVar4 < 0) {
    return -1;
  }
  lVar2 = FUN_142dcdb70(lVar3);
  if (lVar2 == 0) {
    return -1;
  }
  if (0 < *(int *)(lVar2 + 0xc0)) {
    if (*(int *)(lVar2 + 0xc0) <= iVar4) {
      return -1;
    }
    return *(int *)(*(longlong *)(lVar2 + 0xb8) + -8 + (longlong)iVar1 * 8);
  }
  if (*(int *)(lVar2 + 0xa8) < 1) {
    return -1;
  }
  iVar5 = 0;
  lVar2 = FUN_142dcdb70(lVar3);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(lVar2 + 0xa0);
    lVar2 = (longlong)*(int *)(lVar2 + 0xa8) * 0x30 + lVar3;
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0x30) {
      if (iVar4 < *(int *)(lVar3 + 0x10)) {
        iVar5 = iVar5 + *(int *)(*(longlong *)(lVar3 + 8) + -8 + (longlong)iVar1 * 8);
      }
    }
    return iVar5;
  }
  return 0;
}



// FUNCTION 142dce3a0 FUN_142dce3a0 body=201 status=ok
// SIG undefined FUN_142dce3a0(void)

undefined4 FUN_142dce3a0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x1c8);
  lVar2 = (longlong)*(int *)(param_1 + 0x1d0) * 0x80 + lVar4;
  while( true ) {
    if (lVar4 == lVar2) {
      return 0xffffffff;
    }
    if (*(longlong *)(lVar4 + 8) == param_2) break;
    lVar4 = lVar4 + 0x80;
  }
  if (lVar4 == 0) {
    return 0xffffffff;
  }
  lVar2 = FUN_142dcdb70(lVar4);
  if (lVar2 == 0) {
    return 0xffffffff;
  }
  plVar3 = *(longlong **)(lVar2 + 0xa0);
  plVar5 = plVar3 + (longlong)*(int *)(lVar2 + 0xa8) * 6;
  if (plVar3 == plVar5) {
    return 0xffffffff;
  }
  do {
    if (*plVar3 == param_3) {
      iVar1 = (int)plVar3[2];
      if (iVar1 < 2) {
        if (iVar1 == 1) {
          return *(undefined4 *)plVar3[1];
        }
      }
      else if (*(int *)(lVar4 + 0x3c) < iVar1) {
        return *(undefined4 *)(plVar3[1] + (longlong)*(int *)(lVar4 + 0x3c) * 8);
      }
    }
    plVar3 = plVar3 + 6;
  } while (plVar3 != plVar5);
  return 0xffffffff;
}



// FUNCTION 142dce470 FUN_142dce470 body=280 status=ok
// SIG undefined FUN_142dce470(void)

undefined4 FUN_142dce470(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong local_res18;
  
  lVar6 = *(longlong *)(param_1 + 0x1c8);
  lVar2 = (longlong)*(int *)(param_1 + 0x1d0) * 0x80 + lVar6;
  while( true ) {
    if (lVar6 == lVar2) {
      return 0;
    }
    if (*(longlong *)(lVar6 + 8) == param_2) break;
    lVar6 = lVar6 + 0x80;
  }
  if (lVar6 == 0) {
    return 0;
  }
  local_res18 = param_3;
  lVar2 = FUN_142dcdb70(lVar6);
  if (lVar2 == 0) {
    return 0;
  }
  plVar4 = *(longlong **)(lVar2 + 0xa0);
  plVar5 = plVar4 + (longlong)*(int *)(lVar2 + 0xa8) * 6;
  do {
    if (plVar4 == plVar5) {
      return 0;
    }
    if (*plVar4 == param_3) {
      if ((char)plVar4[5] == '\0') {
        plVar1 = *(longlong **)(param_1 + 0x118);
        if (plVar1 != (longlong *)0x0) {
          uVar3 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
          lVar2 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
          if (lVar2 != 0) {
            lVar6 = FUN_142dceb30(lVar2,param_3);
            if (lVar6 == 0) {
              return *(undefined4 *)(param_3 + 0x30);
            }
            return *(undefined4 *)(lVar6 + 8);
          }
        }
      }
      else {
        lVar2 = FUN_142dc05f0(lVar6 + 0x40,&local_res18);
        if (lVar2 != 0) {
          return *(undefined4 *)(lVar2 + 0x30);
        }
      }
    }
    plVar4 = plVar4 + 6;
  } while( true );
}



// FUNCTION 142dce590 GetCurrentSupportWeapon body=8 status=ok
// SIG undefined GetCurrentSupportWeapon(void)

undefined8 ATTLCharacterCommon::GetCurrentSupportWeapon(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x970);
}



// FUNCTION 142dce5a0 FUN_142dce5a0 body=816 status=ok
// SIG undefined FUN_142dce5a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_142dce5a0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  float local_100;
  undefined1 local_f8 [32];
  undefined8 local_d8 [12];
  undefined8 *local_78;
  undefined8 local_70;
  ulonglong local_68;
  ulonglong uVar8;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_128 = param_4;
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  iVar3 = 0;
  if (*(int *)(param_1 + 800) < 1) {
LAB_142dce6d3:
    plVar1 = *(longlong **)(param_1 + 0x118);
    if (plVar1 != (longlong *)0x0) {
      lVar7 = plVar1[0x2d];
      if (lVar7 == 0) {
        puVar4 = &local_118;
        local_118 = _DAT_1468b5d90;
        local_110 = DAT_1468b5d98;
      }
      else {
        local_128 = *(undefined8 *)(lVar7 + 0x220);
        local_120 = *(undefined4 *)(lVar7 + 0x228);
        puVar4 = &local_128;
      }
      lVar7 = (**(code **)(*plVar1 + 0x560))(plVar1,local_f8,0);
      uVar8 = local_70;
      lVar10 = (longlong)(int)local_70;
      iVar3 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar3);
      local_100 = (*(float *)(lVar7 + 0x14) + *(float *)(lVar7 + 8)) * 0.5;
      if (local_70._4_4_ < iVar3) {
        TArray<FVector,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                  (local_d8,uVar8 & 0xffffffff);
      }
      puVar5 = local_d8;
      if (local_78 != (undefined8 *)0x0) {
        puVar5 = local_78;
      }
      *(undefined8 *)((longlong)puVar5 + lVar10 * 0xc) = *puVar4;
      *(float *)((longlong)puVar5 + lVar10 * 0xc + 8) = local_100;
      iVar3 = (int)local_70;
    }
    if (iVar3 < 1) {
      *param_2 = _DAT_1468b5d90;
      *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
      goto LAB_142dce87d;
    }
  }
  else {
    FUN_141ddd6a0(local_d8);
    lVar7 = *(longlong *)(param_1 + 0x318);
    if (*(longlong *)(param_1 + 0x318) == 0) {
      lVar7 = param_1 + 0x2b8;
    }
    lVar10 = lVar7 + (longlong)*(int *)(param_1 + 800) * 0x18;
    for (; lVar7 != lVar10; lVar7 = lVar7 + 0x18) {
      cVar2 = FUN_142dcfb90(param_1,lVar7);
      uVar8 = local_70;
      if (cVar2 != '\0') {
        lVar9 = (longlong)(int)local_70;
        iVar3 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar3);
        if (local_70._4_4_ < iVar3) {
          TArray<FVector,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                    (local_d8,uVar8 & 0xffffffff);
        }
        puVar4 = local_d8;
        if (local_78 != (undefined8 *)0x0) {
          puVar4 = local_78;
        }
        *(undefined8 *)((longlong)puVar4 + lVar9 * 0xc) = local_118;
        *(undefined4 *)((longlong)puVar4 + lVar9 * 0xc + 8) = local_110;
      }
      param_4 = local_128;
    }
    iVar3 = (int)local_70;
    if ((int)local_70 < 1) goto LAB_142dce6d3;
  }
  uVar8 = 0;
  puVar4 = local_d8;
  if (local_78 != (undefined8 *)0x0) {
    puVar4 = local_78;
  }
  *param_2 = *puVar4;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar4 + 1);
  if ((1 < iVar3) && (fVar13 = 3.4028235e+38, uVar11 = uVar8, 0 < iVar3)) {
    do {
      puVar4 = local_d8;
      if (local_78 != (undefined8 *)0x0) {
        puVar4 = local_78;
      }
      fVar12 = (float)FMath::PointDistToLine((longlong)puVar4 + (longlong)(int)uVar8 * 0xc,param_4);
      if (fVar12 < fVar13) {
        puVar4 = local_d8;
        if (local_78 != (undefined8 *)0x0) {
          puVar4 = local_78;
        }
        *param_2 = *(undefined8 *)((longlong)puVar4 + uVar11);
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)((longlong)puVar4 + uVar11 + 8);
        fVar13 = fVar12;
      }
      uVar6 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar6;
      uVar11 = uVar11 + 0xc;
    } while ((int)uVar6 < (int)local_70);
  }
LAB_142dce87d:
  if (local_78 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142dce8d0 FUN_142dce8d0 body=59 status=ok
// SIG undefined FUN_142dce8d0(void)

undefined4 FUN_142dce8d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  lVar2 = (longlong)*(int *)(param_1 + 0x1d0) * 0x80 + lVar1;
  while( true ) {
    if (lVar1 == lVar2) {
      return 0;
    }
    if (*(longlong *)(lVar1 + 8) == param_2) break;
    lVar1 = lVar1 + 0x80;
  }
  if (lVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(lVar1 + 0x3c);
}



// FUNCTION 142dce930 FUN_142dce930 body=253 status=ok
// SIG undefined FUN_142dce930(void)

undefined4 FUN_142dce930(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong local_res10;
  
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  local_res10 = param_2;
  lVar1 = FUN_142dcdb70();
  if (lVar1 != 0) {
    plVar3 = *(longlong **)(lVar1 + 0xa0);
    plVar4 = plVar3 + (longlong)*(int *)(lVar1 + 0xa8) * 6;
    for (; plVar3 != plVar4; plVar3 = plVar3 + 6) {
      if (*plVar3 == param_2) {
        if (param_3 != (undefined8 *)0x0) {
          *param_3 = plVar3;
        }
        if (((char)plVar3[5] != '\0') &&
           (lVar1 = FUN_142dc05f0(param_1 + 8,&local_res10), lVar1 != 0)) {
          return *(undefined4 *)(lVar1 + 0x30);
        }
        param_1 = (longlong *)*param_1;
        if (param_1 == (longlong *)0x0) {
          return 0;
        }
        uVar2 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
        lVar1 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
        if (lVar1 == 0) {
          return 0;
        }
        lVar1 = FUN_142dceb30(lVar1,param_2);
        if (lVar1 != 0) {
          return *(undefined4 *)(lVar1 + 8);
        }
        return *(undefined4 *)(param_2 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 142dcea70 FUN_142dcea70 body=50 status=ok
// SIG undefined FUN_142dcea70(void)

longlong FUN_142dcea70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  lVar2 = (longlong)*(int *)(param_1 + 0x1d0) * 0x80 + lVar1;
  while( true ) {
    if (lVar1 == lVar2) {
      return 0;
    }
    if (*(longlong *)(lVar1 + 0x68) == param_2) break;
    lVar1 = lVar1 + 0x80;
  }
  return lVar1;
}



// FUNCTION 142dceab0 FUN_142dceab0 body=95 status=ok
// SIG undefined FUN_142dceab0(void)

undefined4 FUN_142dceab0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar3 = (longlong)*(int *)(param_1 + 0x30) * 0x1c + lVar2;
  while( true ) {
    if (lVar2 == lVar3) {
      return 0;
    }
    cVar1 = FUN_14058c1e0(lVar2,param_2);
    if (cVar1 != '\0') break;
    lVar2 = lVar2 + 0x1c;
  }
  if (lVar2 == 0) {
    return 0;
  }
  return *(undefined4 *)(lVar2 + 0x14);
}



// FUNCTION 142dceb10 FUN_142dceb10 body=19 status=ok
// SIG undefined FUN_142dceb10(void)

void FUN_142dceb10(longlong param_1,byte param_2)

{
  FWeakObjectPtr::Get(param_1 + (ulonglong)param_2 * 8 + 0xe758);
  return;
}



// FUNCTION 142dceb30 FUN_142dceb30 body=156 status=ok
// SIG undefined FUN_142dceb30(void)

longlong * FUN_142dceb30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iStack_10;
  undefined4 uStack_c;
  
  plVar1 = (longlong *)(param_1 + 0x178);
  plVar5 = (longlong *)*plVar1;
  iVar3 = *(int *)(param_1 + 0x180);
  lVar7 = (longlong)iVar3 * 0x10;
  plVar2 = plVar5 + (longlong)iVar3 * 2;
  while( true ) {
    if (plVar5 == plVar2) {
      iVar4 = *(int *)(param_2 + 0x30);
      iVar6 = iVar4;
      if ((*(char *)(param_2 + 0x38) != '\0') &&
         (iVar6 = *(int *)(param_2 + 0x34), *(int *)(param_2 + 0x34) <= iVar4)) {
        iVar6 = iVar4;
      }
      iStack_10 = iVar6;
      if ((*(char *)(param_2 + 0x40) != '\0') &&
         (iStack_10 = *(int *)(param_2 + 0x3c), iVar6 <= *(int *)(param_2 + 0x3c))) {
        iStack_10 = iVar6;
      }
      *(int *)(param_1 + 0x180) = iVar3 + 1;
      if (*(int *)(param_1 + 0x184) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
      }
      plVar2 = (longlong *)(*plVar1 + lVar7);
      *plVar2 = param_2;
      plVar2[1] = CONCAT44(uStack_c,iStack_10);
      return (longlong *)(*plVar1 + lVar7);
    }
    if (*plVar5 == param_2) break;
    plVar5 = plVar5 + 2;
  }
  return plVar5;
}



// FUNCTION 142dcec00 FUN_142dcec00 body=144 status=ok
// SIG undefined FUN_142dcec00(void)

undefined8 * FUN_142dcec00(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  lVar1 = (**(code **)(*param_1 + 0xfd8))();
  if ((lVar1 == 0) || (pwVar3 = L"performance_mode", *(char *)(lVar1 + 0x6b) != '\0')) {
    pwVar3 = L"resolution_mode";
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (*pwVar3 != L'\0') {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (pwVar3[lVar1] != L'\0');
    iVar2 = (int)lVar1 + 1;
    *(int *)(param_2 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Memcpy(*param_2,pwVar3,(longlong)iVar2 * 2);
  }
  return param_2;
}



// FUNCTION 142dcec90 FUN_142dcec90 body=55 status=ok
// SIG undefined FUN_142dcec90(void)

longlong FUN_142dcec90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x180);
  lVar2 = (longlong)*(int *)(param_1 + 0x188) * 0x70 + lVar1;
  while( true ) {
    if (lVar1 == lVar2) {
      return 0;
    }
    if ((*(longlong *)(lVar1 + 8) != 0) && (*(longlong *)(lVar1 + 8) == param_2)) break;
    lVar1 = lVar1 + 0x70;
  }
  if (*(char *)(lVar1 + 0x60) != '\0') {
    return 0;
  }
  return lVar1;
}



// FUNCTION 142dcecd0 FUN_142dcecd0 body=31 status=ok
// SIG undefined FUN_142dcecd0(void)

float FUN_142dcecd0(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\0') {
    return (*(float *)(param_2 + 0x3c) + *(float *)(param_2 + 0x1c)) - *(float *)(param_1 + 0x58);
  }
  return 3.4028235e+38;
}



// FUNCTION 142dcecf0 FUN_142dcecf0 body=248 status=ok
// SIG undefined FUN_142dcecf0(void)

undefined8 FUN_142dcecf0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  do {
    lVar5 = uVar4 * 0x68 + param_1;
    if ((*(uint *)(lVar5 + 100) >> 3 & 1) != 0) {
      cVar2 = *(char *)(lVar5 + 0x50);
      if ((*(int *)(*plVar1 + 0x38) < DAT_146859258) &&
         (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1)) {
        DAT_146859248 = -1;
        FName::FName(&DAT_146859250,L"Invalid",1);
        _Init_thread_footer(&DAT_146859258);
      }
      if ((cVar2 != DAT_146859248) && ((*(uint *)(lVar5 + 100) >> 2 & 1) == 0)) {
        FUN_1407263c0(param_2,lVar5 + 0x20);
        return 1;
      }
    }
    bVar3 = (char)uVar4 + 1;
    uVar4 = (ulonglong)bVar3;
    if (7 < bVar3) {
      return 0;
    }
  } while( true );
}



// FUNCTION 142dcedf0 FUN_142dcedf0 body=126 status=ok
// SIG undefined FUN_142dcedf0(void)

void FUN_142dcedf0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    if ((*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x120) == 0) &&
       (lVar1 = FUN_1423407b0(), lVar1 == 0)) {
      return;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    lVar1 = UWorld::GetGameState<APVPGameState>(lVar1);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x540) != 0)) {
      TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
      ::MultiFind<FDefaultAllocator>
                (*(longlong *)(lVar1 + 0x540) + 0x4a8,*(undefined8 *)(param_1 + 0x10),param_2,0);
    }
  }
  return;
}



// FUNCTION 142dcee70 FUN_142dcee70 body=8 status=ok
// SIG undefined FUN_142dcee70(void)

longlong FUN_142dcee70(longlong param_1)

{
  return param_1 + 0x4a8;
}



// FUNCTION 142dcee80 FUN_142dcee80 body=421 status=ok
// SIG undefined FUN_142dcee80(void)

void FUN_142dcee80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14270aff0();
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar4 < DAT_146b34908) {
    _Init_thread_header(&DAT_146b34908);
    if (DAT_146b34908 == -1) {
      uVar1 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"PrimaryCharacter",1);
      DAT_146b34900 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146b34908);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b34900 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b34900 + 0x40) + (short)iVar3;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b34900 + 0x30));
  }
  if (*piVar4 < DAT_146b34918) {
    _Init_thread_header(&DAT_146b34918);
    if (DAT_146b34918 == -1) {
      uVar1 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"CinematicMode",1);
      DAT_146b34910 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146b34918);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b34910 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b34910 + 0x40) + (short)iVar3;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b34910 + 0x30));
  }
  return;
}



// FUNCTION 142dcf030 FUN_142dcf030 body=232 status=ok
// SIG undefined FUN_142dcf030(void)

void FUN_142dcf030(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b34958) && (_Init_thread_header(&DAT_146b34958), DAT_146b34958 == -1))
  {
    uVar1 = FUN_142e75af0();
    FUN_142e75af0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"StanceState",1);
    DAT_146b34950 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b34958);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b34950 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b34950 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b34950 + 0x30));
  }
  return;
}



// FUNCTION 142dcf120 FUN_142dcf120 body=609 status=ok
// SIG undefined FUN_142dcf120(void)

void FUN_142dcf120(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142dea880();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b349c0) && (_Init_thread_header(&DAT_146b349c0), DAT_146b349c0 == -1)) {
    uVar1 = FUN_142e79d90();
    FUN_142e79d90();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"UntargetableLock",1);
    DAT_146b349b8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b349c0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b349b8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b349b8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b349b8 + 0x30));
  }
  if ((*piVar5 < DAT_146b349d0) && (_Init_thread_header(&DAT_146b349d0), DAT_146b349d0 == -1)) {
    uVar1 = FUN_142e79d90();
    FUN_142e79d90();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"TargetUIName",1);
    DAT_146b349c8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b349d0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b349c8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b349c8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b349c8 + 0x30));
  }
  if ((*piVar5 < DAT_146b349e0) && (_Init_thread_header(&DAT_146b349e0), DAT_146b349e0 == -1)) {
    uVar1 = FUN_142e79d90();
    FUN_142e79d90();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"TargetName",1);
    DAT_146b349d8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b349e0);
  }
  if (0 < *(int *)(DAT_146b349d8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b349d8 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b349d8 + 0x30));
  }
  return;
}



// FUNCTION 142dcf390 FUN_142dcf390 body=8 status=ok
// SIG undefined FUN_142dcf390(void)

longlong FUN_142dcf390(longlong param_1)

{
  return param_1 + 0x1c8;
}



// FUNCTION 142dcf3a0 FUN_142dcf3a0 body=200 status=ok
// SIG undefined FUN_142dcf3a0(void)

undefined8 * FUN_142dcf3a0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined **local_38 [2];
  longlong *local_28;
  longlong local_20;
  
  lVar4 = FUN_14270bb10();
  if (lVar4 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  lVar4 = FUN_142547b50(lVar4,local_38);
  *param_2 = *(undefined8 *)(lVar4 + 8);
  lVar4 = *(longlong *)(lVar4 + 0x10);
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  local_38[0] = &PTR_FUN_143f740c8;
  if (local_20 != 0) {
    FMemory::Free();
  }
  local_38[0] = &PTR_FUN_143f73d18;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142dcf470 FUN_142dcf470 body=115 status=ok
// SIG undefined FUN_142dcf470(void)

int FUN_142dcf470(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  lVar3 = (longlong)*(int *)(param_1 + 0x1d0) * 0x80 + lVar1;
  if (lVar1 != lVar3) {
    while (*(longlong *)(lVar1 + 8) != param_2) {
      lVar1 = lVar1 + 0x80;
      if (lVar1 == lVar3) {
        return 0;
      }
    }
    if (lVar1 != 0) {
      lVar1 = FUN_142dcdb70();
      if (lVar1 != 0) {
        if (0 < *(int *)(lVar1 + 0xa8)) {
          return *(int *)(*(longlong *)(lVar1 + 0xa0) + 0x10);
        }
        iVar2 = 0;
        if (0 < *(int *)(lVar1 + 0xc0)) {
          iVar2 = *(int *)(lVar1 + 0xc0);
        }
      }
    }
  }
  return iVar2;
}



// FUNCTION 142dcf4f0 FUN_142dcf4f0 body=122 status=ok
// SIG undefined FUN_142dcf4f0(void)

undefined8 * FUN_142dcf4f0(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x448);
  puVar1 = puVar3 + (longlong)*(int *)(param_1 + 0x450) * 3;
  while( true ) {
    if (puVar3 == puVar1) {
      return (undefined8 *)(param_1 + 0x438);
    }
    cVar2 = FUN_142c48f90(*puVar3,*(undefined8 *)(param_1 + 0x118),0);
    if (cVar2 != '\0') break;
    puVar3 = puVar3 + 3;
  }
  return puVar3 + 1;
}



// FUNCTION 142dcf570 FUN_142dcf570 body=129 status=ok
// SIG undefined FUN_142dcf570(void)

void FUN_142dcf570(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = param_1 + 0x380;
  cVar3 = FWeakObjectPtr::IsValid(lVar1);
  if (cVar3 != '\0') goto LAB_142dcf5df;
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (lVar5 == 0) {
LAB_142dcf5d2:
    lVar5 = 0;
  }
  else {
    lVar4 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142dcf5d2;
  }
  FWeakObjectPtr::operator=(lVar1,lVar5);
LAB_142dcf5df:
  FWeakObjectPtr::Get(lVar1);
  return;
}



// FUNCTION 142dcf600 FUN_142dcf600 body=489 status=ok
// SIG undefined FUN_142dcf600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142dcf600(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [4];
  undefined1 local_194 [4];
  longlong *local_190;
  undefined1 local_188 [256];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if (cVar2 == '\0') {
    plVar3 = (longlong *)0x0;
  }
  else {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x10);
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x18);
    plVar3 = (longlong *)0x0;
    plVar8 = plVar3;
    if (cVar2 != '\0') {
      lVar5 = FWeakObjectPtr::Get(param_1 + 0x18);
      plVar8 = *(longlong **)(lVar5 + 0x118);
    }
    plVar6 = plVar3;
    if (plVar8 != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(*plVar8 + 0x668))();
    }
    local_88 = 0;
    local_38 = 0;
    local_80 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0xffffffff;
    local_5c = 0;
    local_30 = 0;
    plVar8 = *(longlong **)(lVar4 + 0x358);
    plVar10 = (longlong *)((longlong)*(int *)(lVar4 + 0x360) & 0x1fffffffffffffff);
    if (plVar8 + *(int *)(lVar4 + 0x360) < plVar8) {
      plVar10 = plVar3;
    }
    plVar9 = plVar3;
    if (plVar10 != (longlong *)0x0) {
      do {
        if ((((*plVar8 != 0) &&
             (plVar1 = *(longlong **)(*plVar8 + 0x118), plVar1 != (longlong *)0x0)) &&
            (local_190 = (longlong *)(**(code **)(*plVar1 + 0x668))(), local_190 != (longlong *)0x0)
            ) && (((local_190 != plVar6 && ((*(uint *)((longlong)local_190 + 0x4cc) >> 1 & 1) == 0))
                  && (piVar7 = (int *)FUN_142dcbcd0(local_188,local_198,local_190), *piVar7 == -1)))
           ) {
          FUN_142dc0310(local_188,local_194,&local_190,0);
          plVar3 = (longlong *)(ulonglong)((int)plVar3 + 1);
        }
        plVar8 = plVar8 + 1;
        plVar9 = (longlong *)((longlong)plVar9 + 1);
      } while (plVar9 != plVar10);
    }
    local_30 = 0;
    if (local_38 != 0) {
      FMemory::Free();
    }
    FUN_141208d50(local_188);
  }
  return plVar3;
}



// FUNCTION 142dcf7f0 FUN_142dcf7f0 body=241 status=ok
// SIG undefined FUN_142dcf7f0(void)

int FUN_142dcf7f0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  
  lVar3 = FUN_142dcdb70();
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0xc0);
    if ((0 < iVar2) || (0 < *(int *)(lVar3 + 0xa8))) {
      if (iVar2 == 0) {
        if (*(int *)(lVar3 + 0xa8) == 0) {
          return 0;
        }
        puVar1 = *(undefined8 **)(lVar3 + 0xa0);
        iVar6 = 0;
        iVar2 = FUN_142dce930(param_1,*puVar1,0);
        lVar3 = (longlong)*(int *)(param_1 + 0x3c);
        if (*(int *)(param_1 + 0x3c) < *(int *)(puVar1 + 2)) {
          piVar5 = (int *)(puVar1[1] + lVar3 * 8);
          do {
            if (iVar2 < *piVar5) {
              return iVar6;
            }
            iVar6 = iVar6 + 1;
            lVar3 = lVar3 + 1;
            piVar5 = piVar5 + 2;
          } while (lVar3 < *(int *)(puVar1 + 2));
        }
        return iVar6;
      }
      lVar4 = (longlong)*(int *)(param_1 + 0x3c);
      iVar6 = 0;
      if (*(int *)(param_1 + 0x3c) < iVar2) {
        piVar5 = (int *)(*(longlong *)(lVar3 + 0xb8) + lVar4 * 8);
        do {
          if (*(int *)(param_1 + 0x54) < *piVar5) {
            return iVar6;
          }
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 1;
          piVar5 = piVar5 + 2;
        } while (lVar4 < iVar2);
      }
      return iVar6;
    }
  }
  return 1;
}



// FUNCTION 142dcf8f0 FUN_142dcf8f0 body=165 status=ok
// SIG undefined FUN_142dcf8f0(void)

void FUN_142dcf8f0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 local_18 [16];
  
  if (*(longlong **)(param_1 + -0xa0) != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + -0xa0) + 0x678))();
    if (plVar2 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar2 + 0x780))(plVar2);
      if (cVar1 != '\0') {
        (**(code **)(*plVar2 + 0x610))(plVar2,param_2,local_18);
        return;
      }
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x790))(plVar2,local_18);
      goto LAB_142dcf977;
    }
  }
  puVar3 = (undefined8 *)FUN_142dd0240(param_1 + -0x1b8,local_18);
LAB_142dcf977:
  *param_2 = *puVar3;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar3 + 1);
  return;
}



// FUNCTION 142dcf9a0 FUN_142dcf9a0 body=124 status=ok
// SIG undefined FUN_142dcf9a0(void)

longlong FUN_142dcf9a0(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x858) != 0) {
    return *(longlong *)(param_1 + 0x858);
  }
  uVar2 = FUN_142e5bf30();
  lVar3 = UGameplayStatics::CreateSaveGameObject(uVar2);
  if (lVar3 != 0) {
    lVar4 = FUN_142e5bf30();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142dcfa07;
  }
  lVar3 = 0;
LAB_142dcfa07:
  *(longlong *)(param_1 + 0x858) = lVar3;
  return lVar3;
}



// FUNCTION 142dcfa20 FUN_142dcfa20 body=108 status=ok
// SIG undefined FUN_142dcfa20(void)

void FUN_142dcfa20(undefined8 param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int local_res20 [2];
  int local_18 [4];
  
  FUN_14270dc70(param_1,local_res20,local_18);
  lVar1 = FUN_14270bb10(param_1);
  if (lVar1 != 0) {
    *param_2 = (int)((float)local_res20[0] * *(float *)(lVar1 + 0x78));
    *param_3 = (int)((float)local_18[0] * *(float *)(lVar1 + 0x7c));
  }
  return;
}



// FUNCTION 142dcfa90 FUN_142dcfa90 body=100 status=ok
// SIG undefined FUN_142dcfa90(void)

void FUN_142dcfa90(undefined8 param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  
  FUN_14270dc70();
  lVar1 = FUN_14270bb10(param_1);
  if (lVar1 != 0) {
    *param_2 = (int)((float)*param_2 * *(float *)(lVar1 + 0x80));
    *param_3 = (int)((float)*param_3 * *(float *)(lVar1 + 0x84));
  }
  return;
}



// FUNCTION 142dcfb00 FUN_142dcfb00 body=90 status=ok
// SIG undefined FUN_142dcfb00(void)

undefined8 FUN_142dcfb00(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = UGameplayStatics::GetGameInstance();
  if (lVar2 != 0) {
    lVar3 = FUN_142e4e4a0();
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
      uVar4 = FUN_142d61b30(lVar2);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 142dcfb60 FUN_142dcfb60 body=44 status=ok
// SIG undefined FUN_142dcfb60(void)

bool FUN_142dcfb60(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    return 0 < *(int *)(param_1 + 0x188);
  }
  return false;
}



// FUNCTION 142dcfb90 FUN_142dcfb90 body=199 status=ok
// SIG undefined FUN_142dcfb90(void)

ulonglong FUN_142dcfb90(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  undefined8 *puVar4;
  float extraout_XMM0_Da;
  undefined8 local_res10;
  undefined1 local_18 [16];
  
  if ((*(int *)(param_2 + 8) != 0) || (*(int *)(param_2 + 0xc) != 0)) {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_2);
    in_RAX = 0;
    if (plVar3 != (longlong *)0x0) {
      iVar1 = *(int *)(param_2 + 0x10);
      if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x2b0))) {
        local_res10 = 0xffffffffffffffff;
        in_RAX = FUN_142de77e0((longlong)iVar1 * 0x98 + 0x10 + *(longlong *)(param_1 + 0x2a8),
                               *(undefined8 *)(param_1 + 0x118),0,&local_res10);
        if (extraout_XMM0_Da < 0.5) goto LAB_142dcfc40;
      }
      puVar4 = (undefined8 *)
               (**(code **)(*plVar3 + 0x428))(plVar3,local_18,*(undefined8 *)(param_2 + 8));
      *param_3 = *puVar4;
      uVar2 = *(undefined4 *)(puVar4 + 1);
      *(undefined4 *)(param_3 + 1) = uVar2;
      return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
    }
  }
LAB_142dcfc40:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142dcfc60 FUN_142dcfc60 body=198 status=ok
// SIG undefined FUN_142dcfc60(void)

ulonglong FUN_142dcfc60(undefined8 param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int local_res10 [6];
  
  if ((DAT_146b17150 == 0) || (*(longlong *)(DAT_146b17150 + 0x7b0) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*(byte *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x80);
  }
  local_res10[0] = 0;
  uVar1 = FUN_142710360(param_1,local_res10);
  if (uVar2 < 8) {
    uVar1 = (ulonglong)(int)uVar2;
    switch(uVar1) {
    case 1:
      return 1;
    case 2:
      return 2;
    case 3:
      uVar1 = 3;
      if (local_res10[0] == 0) {
        uVar1 = 1;
      }
      return uVar1;
    case 4:
      uVar1 = 3;
      if (local_res10[0] == 2) {
        uVar1 = 1;
      }
      return uVar1;
    case 5:
      return (ulonglong)(byte)((local_res10[0] != 0) + 2);
    case 6:
      return (ulonglong)(byte)((local_res10[0] != 2) + 2);
    case 7:
      return 3;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142dcfd50 FUN_142dcfd50 body=154 status=ok
// SIG undefined FUN_142dcfd50(void)

longlong FUN_142dcfd50(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x38) * 2;
  while( true ) {
    if (plVar3 == plVar4) {
      plVar3 = *(longlong **)(param_1 + 0x40);
      if (plVar3 == (longlong *)0x0) {
        lVar2 = 0;
      }
      else {
        lVar2 = (**(code **)(*plVar3 + 0x280))(plVar3,param_2);
      }
      return lVar2;
    }
    if ((((*plVar3 != 0) && (plVar3[1] != 0)) &&
        (cVar1 = FUN_142c48f90(*plVar3,param_2,0), cVar1 != '\0')) &&
       (lVar2 = (**(code **)(*(longlong *)plVar3[1] + 0x280))((longlong *)plVar3[1],param_2),
       lVar2 != 0)) break;
    plVar3 = plVar3 + 2;
  }
  return lVar2;
}



// FUNCTION 142dcfdf0 FUN_142dcfdf0 body=137 status=ok
// SIG undefined FUN_142dcfdf0(void)

undefined8 FUN_142dcfdf0(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_res10 [6];
  
  uVar1 = FUN_142e75af0();
  lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x218,local_res10);
  puVar4 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x218) + (longlong)local_res10[0] * 0x18);
  }
  puVar3 = puVar4 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar3;
}



// FUNCTION 142dcfe80 FUN_142dcfe80 body=129 status=ok
// SIG undefined FUN_142dcfe80(void)

undefined4 FUN_142dcfe80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = FUN_142dcdb70();
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0xa8))) {
    plVar3 = *(longlong **)(lVar1 + 0xa0);
    plVar2 = plVar3 + (longlong)*(int *)(lVar1 + 0xa8) * 6;
    for (; plVar3 != plVar2; plVar3 = plVar3 + 6) {
      if (((*plVar3 == param_2) && (0 < (int)plVar3[2])) &&
         (*(int *)(param_1 + 0x3c) < (int)plVar3[2])) {
        return *(undefined4 *)(plVar3[1] + (longlong)*(int *)(param_1 + 0x3c) * 8);
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 142dcff10 FUN_142dcff10 body=109 status=ok
// SIG undefined FUN_142dcff10(void)

undefined4 FUN_142dcff10(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
    if ((lVar2 != 0) && (param_3 != 0)) {
      lVar2 = FUN_142dceb30(lVar2,param_3);
      if (lVar2 != 0) {
        return *(undefined4 *)(lVar2 + 8);
      }
      return *(undefined4 *)(param_3 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 142dcff80 FUN_142dcff80 body=37 status=ok
// SIG undefined FUN_142dcff80(void)

undefined4 FUN_142dcff80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142dceb30();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 8);
  }
  return *(undefined4 *)(param_2 + 0x30);
}



// FUNCTION 142dcffb0 FUN_142dcffb0 body=120 status=ok
// SIG undefined FUN_142dcffb0(void)

longlong * FUN_142dcffb0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (((-1 < param_2) || (param_2 = param_2 + *(int *)(param_1 + 0x7540), -1 < param_2)) &&
     (param_2 < *(int *)(param_1 + 0x7540))) {
    lVar3 = *(longlong *)(param_1 + 0x7538);
    if (*(longlong *)(param_1 + 0x7538) == 0) {
      lVar3 = param_1 + 0x338;
    }
    plVar1 = (longlong *)FWeakObjectPtr::Get(lVar3 + (longlong)param_2 * 0x390);
    if (plVar1 != (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*plVar1 + 0x690))(plVar1);
      if (plVar2 != (longlong *)0x0) {
        plVar1 = plVar2;
      }
    }
    return plVar1;
  }
  return (longlong *)0x0;
}



// FUNCTION 142dd0030 FUN_142dd0030 body=47 status=ok
// SIG undefined FUN_142dd0030(void)

longlong * FUN_142dd0030(void)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FWeakObjectPtr::Get();
  if ((plVar1 != (longlong *)0x0) &&
     (plVar2 = (longlong *)(**(code **)(*plVar1 + 0x690))(plVar1), plVar2 != (longlong *)0x0)) {
    plVar1 = plVar2;
  }
  return plVar1;
}



// FUNCTION 142dd0060 FUN_142dd0060 body=175 status=ok
// SIG undefined FUN_142dd0060(void)

longlong FUN_142dd0060(undefined8 param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  cVar1 = FWeakObjectPtr::IsValid();
  if (cVar1 == '\0') {
    return 0;
  }
  plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
  plVar3 = (longlong *)FWeakObjectPtr::Get(param_1);
  if ((plVar3 != (longlong *)0x0) &&
     (plVar4 = (longlong *)(**(code **)(*plVar3 + 0x690))(plVar3), plVar4 != (longlong *)0x0)) {
    plVar3 = plVar4;
  }
  if ((plVar2 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar2 + 0x668))(plVar2), lVar5 != 0)) {
    return lVar5;
  }
  if ((plVar3 != (longlong *)0x0) && (plVar3 != plVar2)) {
    lVar5 = (**(code **)(*plVar3 + 0x668))(plVar3);
    return lVar5;
  }
  return 0;
}



// FUNCTION 142dd0110 FUN_142dd0110 body=90 status=ok
// SIG undefined FUN_142dd0110(void)

undefined8 FUN_142dd0110(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (((-1 < param_2) || (param_2 = param_2 + *(int *)(param_1 + 0x7540), -1 < param_2)) &&
     (param_2 < *(int *)(param_1 + 0x7540))) {
    lVar1 = *(longlong *)(param_1 + 0x7538);
    if (*(longlong *)(param_1 + 0x7538) == 0) {
      lVar1 = param_1 + 0x338;
    }
    FUN_142cb3d70(param_3,lVar1 + (longlong)param_2 * 0x390);
    return 1;
  }
  return 0;
}



// FUNCTION 142dd0170 FUN_142dd0170 body=206 status=ok
// SIG undefined FUN_142dd0170(void)

undefined8 FUN_142dd0170(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x7538);
  if (*(longlong *)(param_1 + 0x7538) == 0) {
    lVar4 = param_1 + 0x338;
  }
  lVar5 = (longlong)*(int *)(param_1 + 0x7540) * 0x390 + lVar4;
  do {
    if (lVar4 == lVar5) {
      return 0;
    }
    if ((param_2 != (longlong *)0x0) && (cVar1 = FWeakObjectPtr::IsValid(lVar4), cVar1 != '\0')) {
      plVar2 = (longlong *)FWeakObjectPtr::Get(lVar4);
      if (param_2 == plVar2) {
LAB_142dd022f:
        FUN_142cb3d70(param_3,lVar4);
        return 1;
      }
      plVar2 = (longlong *)FWeakObjectPtr::Get(lVar4);
      if ((plVar2 != (longlong *)0x0) &&
         (plVar3 = (longlong *)(**(code **)(*plVar2 + 0x690))(plVar2), plVar3 != (longlong *)0x0)) {
        plVar2 = plVar3;
      }
      if (param_2 == plVar2) goto LAB_142dd022f;
    }
    lVar4 = lVar4 + 0x390;
  } while( true );
}



// FUNCTION 142dd0240 FUN_142dd0240 body=478 status=ok
// SIG undefined FUN_142dd0240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142dd0240(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 local_res8;
  undefined8 local_78;
  float local_70;
  undefined1 local_68 [80];
  
  lVar5 = *(longlong *)(param_1 + 0x318);
  if (*(longlong *)(param_1 + 0x318) == 0) {
    lVar5 = param_1 + 0x2b8;
  }
  lVar1 = lVar5 + (longlong)*(int *)(param_1 + 800) * 0x18;
  local_70 = DAT_1468b5d98;
  uVar7 = _DAT_1468b5d90;
  do {
    _DAT_1468b5d90 = uVar7;
    DAT_1468b5d98 = local_70;
    if (lVar5 == lVar1) {
      plVar3 = *(longlong **)(param_1 + 0x118);
      if (plVar3 != (longlong *)0x0) {
        lVar5 = plVar3[0x2d];
        local_78 = uVar7;
        if (lVar5 != 0) {
          local_78 = *(undefined8 *)(lVar5 + 0x220);
          local_70 = *(float *)(lVar5 + 0x228);
        }
        uVar7 = local_78;
        lVar5 = (**(code **)(*plVar3 + 0x560))(plVar3,local_68,0);
        local_70 = (*(float *)(lVar5 + 0x14) + *(float *)(lVar5 + 8)) * 0.5;
      }
LAB_142dd03f6:
      *param_2 = uVar7;
      *(float *)(param_2 + 1) = local_70;
      return param_2;
    }
    if (((*(int *)(lVar5 + 8) != 0) || (*(int *)(lVar5 + 0xc) != 0)) &&
       (plVar3 = (longlong *)FWeakObjectPtr::Get(lVar5), plVar3 != (longlong *)0x0)) {
      iVar2 = *(int *)(lVar5 + 0x10);
      if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x2b0))) {
        local_res8 = 0xffffffffffffffff;
        fVar6 = (float)FUN_142de77e0((longlong)iVar2 * 0x98 + 0x10 + *(longlong *)(param_1 + 0x2a8),
                                     *(undefined8 *)(param_1 + 0x118),0,&local_res8);
        if (fVar6 < 0.5) goto LAB_142dd030a;
      }
      puVar4 = (undefined8 *)
               (**(code **)(*plVar3 + 0x428))(plVar3,&local_78,*(undefined8 *)(lVar5 + 8));
      uVar7 = *puVar4;
      local_70 = *(float *)(puVar4 + 1);
      goto LAB_142dd03f6;
    }
LAB_142dd030a:
    lVar5 = lVar5 + 0x18;
    local_70 = DAT_1468b5d98;
    uVar7 = _DAT_1468b5d90;
  } while( true );
}



// FUNCTION 142dd0420 FUN_142dd0420 body=213 status=ok
// SIG undefined FUN_142dd0420(void)

ulonglong FUN_142dd0420(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined1 local_28 [16];
  
  lVar5 = *(longlong *)(param_1 + 0x7538);
  if (*(longlong *)(param_1 + 0x7538) == 0) {
    lVar5 = param_1 + 0x338;
  }
  plVar2 = (longlong *)(longlong)*(int *)(param_1 + 0x7540);
  lVar6 = (longlong)plVar2 * 0x390 + lVar5;
  do {
    if (lVar5 == lVar6) {
      return (ulonglong)plVar2 & 0xffffffffffffff00;
    }
    if ((param_2 != (longlong *)0x0) &&
       (plVar2 = (longlong *)FWeakObjectPtr::IsValid(lVar5), (char)plVar2 != '\0')) {
      plVar2 = (longlong *)FWeakObjectPtr::Get(lVar5);
      if (param_2 == plVar2) {
LAB_142dd04cf:
        puVar4 = (undefined8 *)FUN_142dcd3a0(lVar5,local_28,local_res8);
        *param_3 = *puVar4;
        uVar1 = *(undefined4 *)(puVar4 + 1);
        *(undefined4 *)(param_3 + 1) = uVar1;
        return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
      }
      plVar3 = (longlong *)FWeakObjectPtr::Get(lVar5);
      plVar2 = (longlong *)0x0;
      if ((plVar3 != (longlong *)0x0) &&
         (plVar2 = (longlong *)(**(code **)(*plVar3 + 0x690))(plVar3), plVar2 != (longlong *)0x0)) {
        plVar3 = plVar2;
      }
      if (param_2 == plVar3) goto LAB_142dd04cf;
    }
    lVar5 = lVar5 + 0x390;
  } while( true );
}



// FUNCTION 142dd0500 FUN_142dd0500 body=248 status=ok
// SIG undefined FUN_142dd0500(void)

undefined8 FUN_142dd0500(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  lVar4 = *(longlong *)(param_1 + 0x270);
  bVar6 = lVar4 == 0;
  if (bVar6) {
    uVar5 = FText::FText(local_38,param_1 + 0x278);
  }
  else {
    uVar5 = (**(code **)(*(longlong *)(lVar4 + 0x30) + 0x10))(lVar4 + 0x30,local_20);
  }
  FText::FText(param_2,uVar5);
  if (bVar6) {
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  if ((!bVar6) && (local_18 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142dd0600 FUN_142dd0600 body=41 status=ok
// SIG undefined FUN_142dd0600(void)

undefined8 FUN_142dd0600(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FText::ToString(param_1 + 0x278);
  FString::FString(param_2,uVar1);
  return param_2;
}



// FUNCTION 142dd0630 FUN_142dd0630 body=25 status=ok
// SIG undefined FUN_142dd0630(void)

undefined8 FUN_142dd0630(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x270) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142dd063f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x278))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 142dd0650 FUN_142dd0650 body=8 status=ok
// SIG undefined FUN_142dd0650(void)

longlong FUN_142dd0650(longlong param_1)

{
  return param_1 + 0x358;
}



// FUNCTION 142dd0660 FUN_142dd0660 body=187 status=ok
// SIG undefined FUN_142dd0660(void)

void FUN_142dd0660(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x7538);
  if (*(longlong *)(param_1 + 0x7538) == 0) {
    lVar3 = param_1 + 0x338;
  }
  lVar4 = (longlong)*(int *)(param_1 + 0x7540) * 0x390 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x390) {
    lVar2 = FWeakObjectPtr::Get(lVar3);
    if (((lVar2 != 0) && ((*(byte *)(lVar3 + 0x38c) & 1) != 0)) &&
       (((*(byte *)(lVar3 + 0x38c) & 4) != 0 || (param_3 == '\0')))) {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
    }
  }
  return;
}



// FUNCTION 142dd0740 FUN_142dd0740 body=43 status=ok
// SIG undefined FUN_142dd0740(void)

ulonglong FUN_142dd0740(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_142df3580();
  if ((uVar1 != 0) && (*(char *)(uVar1 + 0x68) != '\0')) {
    return (ulonglong)(byte)('\x01' << (*(byte *)(uVar1 + 0x69) & 0x1f));
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142dd0770 FUN_142dd0770 body=42 status=ok
// SIG undefined FUN_142dd0770(void)

int FUN_142dd0770(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142df3580();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x68) != '\0')) {
    return *(byte *)(lVar1 + 0x69) + 0x1c;
  }
  return 0x20;
}



// FUNCTION 142dd07a0 FUN_142dd07a0 body=391 status=ok
// SIG undefined FUN_142dd07a0(void)

float FUN_142dd07a0(longlong param_1)

{
  float fVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)FUN_142df90a0();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  bVar2 = *(byte *)(lVar4 + 0x48);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar4 + 0x38) < DAT_146859258) &&
     (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1)) {
    DAT_146859248 = 0xff;
    FName::FName(&DAT_146859250,L"Invalid",1);
    _Init_thread_footer(&DAT_146859258);
  }
  if ((bVar2 != DAT_146859248) && (bVar2 < 8)) {
    lVar5 = (ulonglong)bVar2 * 0x68;
    bVar2 = *(byte *)(lVar5 + 0x50 + param_1);
    if ((*(int *)(lVar4 + 0x38) < DAT_146859258) &&
       (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1)) {
      DAT_146859248 = 0xff;
      FName::FName(&DAT_146859250,L"Invalid",1);
      _Init_thread_footer(&DAT_146859258);
    }
    if (bVar2 != DAT_146859248) {
      if (*(float *)(lVar5 + 0x28 + param_1) <= 0.0) {
        return 3.4028235e+38;
      }
      fVar1 = *(float *)(lVar5 + 0x20 + param_1);
      if (fVar1 < 3.4028235e+38) {
        return fVar1;
      }
      return 3.4028235e+38;
    }
  }
  return 3.4028235e+38;
}



// FUNCTION 142dd0930 FUN_142dd0930 body=81 status=ok
// SIG undefined FUN_142dd0930(void)

float FUN_142dd0930(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  if (lVar1 != 0) {
    fVar2 = *(float *)(lVar1 + 0x790) - *(float *)(param_1 + 0x268);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    return fVar2;
  }
  fVar2 = 0.0 - *(float *)(param_1 + 0x268);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  return fVar2;
}



// FUNCTION 142dd0990 FUN_142dd0990 body=314 status=ok
// SIG undefined FUN_142dd0990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142dd0990(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1 + 8);
    uVar3 = *(undefined4 *)(lVar4 + 0x224);
    uVar1 = *(undefined4 *)(lVar4 + 0x228);
    *(undefined4 *)param_2 = *(undefined4 *)(lVar4 + 0x220);
    *(undefined4 *)(param_2 + 1) = uVar1;
    *(undefined4 *)((longlong)param_2 + 4) = uVar3;
    return param_2;
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if (cVar2 != '\0') {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x10);
    FUN_142dd0240(uVar5,param_2);
    return param_2;
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1);
  if (cVar2 == '\0') {
    *param_2 = _DAT_1468b5d90;
    uVar3 = DAT_1468b5d98;
  }
  else {
    lVar4 = FWeakObjectPtr::Get(param_1);
    uVar3 = DAT_1468b5d98;
    lVar4 = *(longlong *)(lVar4 + 0x168);
    if (lVar4 == 0) {
      *param_2 = _DAT_1468b5d90;
    }
    else {
      uVar3 = *(undefined4 *)(lVar4 + 0x228);
      *param_2 = *(undefined8 *)(lVar4 + 0x220);
    }
  }
  *(undefined4 *)(param_2 + 1) = uVar3;
  return param_2;
}



// FUNCTION 142dd0ad0 FUN_142dd0ad0 body=634 status=ok
// SIG undefined FUN_142dd0ad0(void)

void FUN_142dd0ad0(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if (param_2 != 0) {
    uVar2 = FUN_142dfdfe0();
    uVar7 = param_2;
    while (uVar7 != uVar2) {
      uVar7 = *(ulonglong *)(uVar7 + 0x30);
      if (uVar7 == 0) {
        return;
      }
    }
    lVar3 = param_1[0x24];
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    uVar7 = 0;
    if (lVar3 != 0) {
      lVar3 = param_1[0x24];
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      lVar3 = UWorld::GetAuthGameMode<ABaseGameMode>(lVar3);
      if (((lVar3 != 0) && (lVar3 = FUN_142d77040(lVar3), lVar3 != 0)) &&
         (lVar3 = *(longlong *)(lVar3 + 0x540), lVar3 != 0)) {
        uVar4 = FUN_142dfdfe0();
        uVar2 = param_2;
        do {
          uVar8 = param_2;
          if (uVar2 == uVar4) break;
          uVar2 = *(ulonglong *)(uVar2 + 0x30);
          uVar8 = uVar7;
        } while (uVar2 != 0);
        FUN_142dd7b80(lVar3,uVar8);
      }
    }
    uVar4 = FUN_142dfdfe0();
    uVar2 = param_2;
    do {
      uVar8 = param_2;
      if (uVar2 == uVar4) break;
      uVar2 = *(ulonglong *)(uVar2 + 0x30);
      uVar8 = uVar7;
    } while (uVar2 != 0);
    plVar1 = param_1 + 0x39;
    uVar2 = uVar7;
    while ((iVar6 = (int)uVar2, -1 < iVar6 && (iVar6 < (int)param_1[0x3a]))) {
      if (*(ulonglong *)((longlong)iVar6 * 0x80 + 8 + *plVar1) == uVar8) {
        uVar4 = FUN_142dfdfe0();
        uVar2 = param_2;
        goto LAB_142dd0be3;
      }
      uVar2 = (ulonglong)(iVar6 + 1);
    }
    iVar6 = (int)param_1[0x3a];
    lVar3 = param_1[0x23];
    *(int *)(param_1 + 0x3a) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0x1d4) < iVar6 + 1) {
      TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow(plVar1,iVar6)
      ;
    }
    lVar9 = (longlong)iVar6 * 0x80 + *plVar1;
    uVar4 = FUN_142dfdfe0();
    uVar2 = param_2;
    do {
      uVar8 = param_2;
      if (uVar2 == uVar4) break;
      uVar2 = *(ulonglong *)(uVar2 + 0x30);
      uVar8 = uVar7;
    } while (uVar2 != 0);
    FUN_142dc1570(lVar9,lVar3,uVar8,0);
    uVar4 = FUN_142dfdfe0();
    uVar2 = param_2;
    do {
      uVar8 = param_2;
      if (uVar2 == uVar4) break;
      uVar2 = *(ulonglong *)(uVar2 + 0x30);
      uVar8 = uVar7;
    } while (uVar2 != 0);
    uVar5 = (**(code **)(*param_1 + 0x438))(param_1,uVar8);
    *(undefined8 *)(lVar9 + 0x58) = uVar5;
    uVar4 = FUN_142dfdfe0();
    uVar2 = param_2;
    do {
      uVar8 = param_2;
      if (uVar2 == uVar4) break;
      uVar2 = *(ulonglong *)(uVar2 + 0x30);
      uVar8 = uVar7;
    } while (uVar2 != 0);
    (**(code **)(*param_1 + 0x450))(param_1,uVar8);
  }
  return;
  while (uVar2 = *(ulonglong *)(uVar2 + 0x30), uVar8 = uVar7, uVar2 != 0) {
LAB_142dd0be3:
    uVar8 = param_2;
    if (uVar2 == uVar4) break;
  }
  lVar3 = FUN_142dcdc10(param_1,uVar8);
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(lVar3 + 0x90) == 0) {
    return;
  }
  uVar4 = FUN_142dfdfe0();
  uVar2 = param_2;
  do {
    uVar8 = param_2;
    if (uVar2 == uVar4) break;
    uVar2 = *(ulonglong *)(uVar2 + 0x30);
    uVar8 = uVar7;
  } while (uVar2 != 0);
  lVar3 = FUN_142dcdc90(param_1,uVar8);
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(lVar3 + 0x68) != 0) {
    return;
  }
  FUN_142dd9100(lVar3,param_1[0x23]);
  return;
}



// FUNCTION 142dd0d50 FUN_142dd0d50 body=298 status=ok
// SIG undefined FUN_142dd0d50(void)

undefined8 FUN_142dd0d50(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  
  iVar8 = 1;
  while (lVar3 = FWeakObjectPtr::Get(param_1 + (longlong)iVar8 + 0x1ceb), lVar3 == 0) {
    iVar8 = iVar8 + -1;
    if (iVar8 < 0) {
      return 0;
    }
  }
  lVar1 = param_1[0x23];
  lVar4 = FUN_142dddd00(lVar3);
  if (lVar4 == 0) {
    return 0;
  }
  if (lVar1 != 0) {
    lVar5 = FUN_14222e270(lVar1);
    if ((lVar5 == 0) && (lVar5 = *(longlong *)(lVar1 + 0x150), lVar5 == 0)) {
      return 0;
    }
    cVar2 = FUN_142dd3a70(lVar4,lVar5);
    if (cVar2 == '\0') {
      return 0;
    }
    uVar6 = FUN_142dc6f30(param_1);
    lVar1 = param_1[0xea8];
    cVar2 = FUN_142dd28e0(param_1,lVar3);
    FUN_142de0610(param_1);
    iVar8 = FUN_14233f450(param_1);
    if (iVar8 != 3) {
      FUN_142e7adb0(param_1,lVar3);
    }
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x408))(param_1,(int)lVar1);
    }
    uVar7 = FUN_142e107c0();
    plVar9 = (longlong *)param_1[0xea7];
    if ((longlong *)param_1[0xea7] == (longlong *)0x0) {
      plVar9 = param_1 + 0x67;
    }
    FUN_142ddff10(param_1,uVar6,plVar9,uVar7);
    return 1;
  }
  return 0;
}



// FUNCTION 142dd0e80 FUN_142dd0e80 body=764 status=ok
// SIG undefined FUN_142dd0e80(void)

char FUN_142dd0e80(longlong *param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  char cVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 local_res8;
  longlong local_res18;
  int local_res20;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  
  cVar9 = '\0';
  if ((((char)param_1[10] == '\0') || (*(char *)((longlong)param_1 + 0x7a) == '\0')) ||
     (local_res18 = param_3, local_res20 = param_4, lVar4 = FUN_142dcdb70(), lVar4 == 0)) {
    return '\0';
  }
  plVar5 = *(longlong **)(lVar4 + 0xa0);
  plVar10 = (longlong *)0x0;
  plVar8 = plVar5 + (longlong)*(int *)(lVar4 + 0xa8) * 6;
  for (; plVar11 = (longlong *)0x0, plVar5 != plVar8; plVar5 = plVar5 + 6) {
    if (*plVar5 == param_3) {
      plVar11 = plVar10;
      if ((char)plVar5[5] == '\0') {
        plVar5 = (longlong *)*param_1;
        param_4 = local_res20;
        if (plVar5 != (longlong *)0x0) {
          uVar6 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
          lVar4 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
          param_4 = local_res20;
          if (lVar4 != 0) {
            lVar4 = FUN_142dceb30(lVar4,param_3);
            param_4 = local_res20;
            if (lVar4 == 0) {
              plVar11 = (longlong *)(ulonglong)*(uint *)(param_3 + 0x30);
            }
            else {
              plVar11 = (longlong *)(ulonglong)*(uint *)(lVar4 + 8);
            }
          }
        }
      }
      else {
        plVar5 = (longlong *)FUN_142dc05f0(param_1 + 8,&local_res18);
        plVar11 = (longlong *)0x0;
        if ((plVar5 != (longlong *)0x0) && (plVar11 = plVar10, *plVar5 == param_3)) {
          plVar8 = (longlong *)((longlong)(int)plVar5[6] + (longlong)param_4);
          plVar11 = (longlong *)0xffffffff80000000;
          if ((-0x80000001 < (longlong)plVar8) &&
             (plVar11 = (longlong *)0x7fffffff, (longlong)plVar8 < 0x7fffffff)) {
            plVar11 = plVar8;
          }
          *(int *)(plVar5 + 6) = (int)plVar11;
        }
      }
      iVar3 = FUN_142dcfe80(param_1,param_3);
      if ((iVar3 == -1) || ((iVar3 <= (int)plVar11 && ((int)plVar11 - param_4 < iVar3)))) {
        cVar9 = '\x01';
      }
      else {
        cVar9 = '\0';
      }
      break;
    }
  }
  plVar5 = (longlong *)*param_1;
  if (plVar5 != (longlong *)0x0) {
    uVar6 = FUN_142e035e0();
    lVar4 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
    if (lVar4 != 0) {
      if ((cVar9 == '\0') || (cVar2 = FUN_142dd2fa0(lVar4,param_1[1]), cVar2 == '\0')) {
        local_res8 = 0;
        FUN_142dc7040(lVar4,param_1[0xd],(ulonglong)plVar11 & 0xffffffff);
      }
      else {
        local_res8 = 1;
      }
      local_58 = param_3;
      lVar7 = FUN_142dcdb70(param_1);
      plVar5 = (longlong *)0x0;
      iVar3 = 0;
      if (lVar7 != 0) {
        plVar8 = *(longlong **)(lVar7 + 0xa0);
        plVar10 = plVar8 + (longlong)*(int *)(lVar7 + 0xa8) * 6;
        for (; plVar5 = (longlong *)0x0, plVar8 != plVar10; plVar8 = plVar8 + 6) {
          if (*plVar8 == param_3) {
            plVar5 = plVar8;
            if (((char)plVar8[5] == '\0') ||
               (lVar7 = FUN_142dc05f0(param_1 + 8,&local_58), lVar7 == 0)) {
              plVar8 = (longlong *)*param_1;
              iVar3 = 0;
              if (plVar8 != (longlong *)0x0) {
                uVar6 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
                lVar7 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar6);
                if (lVar7 != 0) {
                  lVar7 = FUN_142dceb30(lVar7,param_3);
                  if (lVar7 == 0) {
                    iVar3 = *(int *)(param_3 + 0x30);
                  }
                  else {
                    iVar3 = *(int *)(lVar7 + 8);
                  }
                }
              }
            }
            else {
              iVar3 = *(int *)(lVar7 + 0x30);
            }
            break;
          }
        }
      }
      if (((plVar5 == (longlong *)0x0) || ((int)plVar5[2] <= *(int *)((longlong)param_1 + 0x3c))) ||
         (iVar1 = *(int *)(plVar5[1] + 4 + (longlong)*(int *)((longlong)param_1 + 0x3c) * 8),
         iVar1 < 1)) {
        local_3c = true;
      }
      else {
        local_3c = (iVar3 - local_res20) / iVar1 < iVar3 / iVar1;
      }
      local_48 = param_1[1];
      local_3b = local_res8;
      local_50 = lVar4;
      local_40 = (int)plVar11;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (lVar4 + 0x198,&local_50);
    }
  }
  return cVar9;
}



// FUNCTION 142dd1180 FUN_142dd1180 body=233 status=ok
// SIG undefined FUN_142dd1180(void)

ulonglong FUN_142dd1180(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  uint *in_RAX;
  uint *puVar3;
  
  if ((uint *)(param_1 + 0x20) != (uint *)(param_1 + 0x360)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (uint *)(param_1 + 100);
    do {
      uVar2 = puVar3[-5];
      if ((*(int *)(lVar1 + 0x38) < DAT_146859258) &&
         (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1)) {
        DAT_146859248 = -1;
        FName::FName(&DAT_146859250,L"Invalid",1);
        _Init_thread_footer(&DAT_146859258);
      }
      if (((char)uVar2 != DAT_146859248) &&
         ((uVar2 = *puVar3, (uVar2 >> 1 & 1) != 0 || ((uVar2 >> 2 & 1) == 0)))) {
        return CONCAT71((uint7)(uint3)(uVar2 >> 9),1);
      }
      in_RAX = puVar3 + 9;
      puVar3 = puVar3 + 0x1a;
    } while (in_RAX != (uint *)(param_1 + 0x360));
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142dd1270 FUN_142dd1270 body=145 status=ok
// SIG undefined FUN_142dd1270(void)

undefined8 FUN_142dd1270(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((((*(int *)(param_1 + 0x38) < 1) && (*(int *)(param_1 + 0x3c) < 1)) &&
      (*(int *)(param_1 + 0x54) < 1)) && (*(char *)(param_1 + 0x51) == '\0')) {
    lVar2 = FUN_142dcdb70();
    if (lVar2 != 0) {
      puVar3 = *(undefined8 **)(lVar2 + 0xa0);
      puVar4 = puVar3 + (longlong)*(int *)(lVar2 + 0xa8) * 6;
      for (; puVar3 != puVar4; puVar3 = puVar3 + 6) {
        iVar1 = FUN_142dce930(param_1,*puVar3,0);
        if (0 < iVar1) {
          return 1;
        }
      }
    }
    return 0;
  }
  return 1;
}



// FUNCTION 142dd1310 FUN_142dd1310 body=180 status=ok
// SIG undefined FUN_142dd1310(void)

undefined8 FUN_142dd1310(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x7538);
  if (*(longlong *)(param_1 + 0x7538) == 0) {
    lVar4 = param_1 + 0x338;
  }
  lVar5 = (longlong)*(int *)(param_1 + 0x7540) * 0x390 + lVar4;
  do {
    if (lVar4 == lVar5) {
      return 0;
    }
    if ((param_2 != (longlong *)0x0) && (cVar1 = FWeakObjectPtr::IsValid(lVar4), cVar1 != '\0')) {
      plVar2 = (longlong *)FWeakObjectPtr::Get(lVar4);
      if (param_2 == plVar2) {
        return 1;
      }
      plVar2 = (longlong *)FWeakObjectPtr::Get(lVar4);
      if ((plVar2 != (longlong *)0x0) &&
         (plVar3 = (longlong *)(**(code **)(*plVar2 + 0x690))(plVar2), plVar3 != (longlong *)0x0)) {
        plVar2 = plVar3;
      }
      if (param_2 == plVar2) {
        return 1;
      }
    }
    lVar4 = lVar4 + 0x390;
  } while( true );
}



// FUNCTION 142dd13d0 FUN_142dd13d0 body=172 status=ok
// SIG undefined FUN_142dd13d0(void)

void FUN_142dd13d0(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  
  plVar3 = (longlong *)FUN_142dceb30();
  lVar4 = (longlong)(int)plVar3[1] + (longlong)param_3;
  lVar7 = -0x80000000;
  if ((-0x80000001 < lVar4) && (lVar7 = 0x7fffffff, lVar4 < 0x7fffffff)) {
    lVar7 = lVar4;
  }
  lVar4 = *plVar3;
  iVar6 = (int)lVar7;
  *(int *)(plVar3 + 1) = iVar6;
  iVar2 = iVar6;
  if (*(char *)(lVar4 + 0x38) != '\0') {
    iVar2 = *(int *)(lVar4 + 0x34);
    if (*(int *)(lVar4 + 0x34) <= iVar6) {
      iVar2 = iVar6;
    }
    *(int *)(plVar3 + 1) = iVar2;
  }
  if (*(char *)(lVar4 + 0x40) != '\0') {
    iVar6 = *(int *)(lVar4 + 0x3c);
    if (iVar2 <= *(int *)(lVar4 + 0x3c)) {
      iVar6 = iVar2;
    }
    *(int *)(plVar3 + 1) = iVar6;
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x188);
  if (cVar1 != '\0') {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x188);
    FUN_142cbcce0(uVar5,param_2,param_3);
  }
  return;
}



// FUNCTION 142dd1480 FUN_142dd1480 body=143 status=ok
// SIG undefined FUN_142dd1480(void)

void FUN_142dd1480(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  
  plVar4 = (longlong *)FUN_142dceb30();
  lVar1 = *plVar4;
  *(int *)(plVar4 + 1) = param_3;
  iVar6 = param_3;
  if (*(char *)(lVar1 + 0x38) != '\0') {
    iVar6 = *(int *)(lVar1 + 0x34);
    if (*(int *)(lVar1 + 0x34) <= param_3) {
      iVar6 = param_3;
    }
    *(int *)(plVar4 + 1) = iVar6;
  }
  if (*(char *)(lVar1 + 0x40) != '\0') {
    iVar3 = *(int *)(lVar1 + 0x3c);
    if (iVar6 <= *(int *)(lVar1 + 0x3c)) {
      iVar3 = iVar6;
    }
    *(int *)(plVar4 + 1) = iVar3;
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x188);
  if (cVar2 != '\0') {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x188);
    FUN_142cbcf00(uVar5,param_2,param_3);
  }
  return;
}



// FUNCTION 142dd1510 FUN_142dd1510 body=28 status=ok
// SIG undefined FUN_142dd1510(void)

void FUN_142dd1510(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_142dd1580(*(longlong *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 142dd1530 FUN_142dd1530 body=11 status=ok
// SIG undefined FUN_142dd1530(void)

void FUN_142dd1530(undefined8 param_1,undefined8 param_2)

{
  FUN_142dd1580(param_1,param_2,1);
  return;
}



// FUNCTION 142dd1540 FUN_142dd1540 body=25 status=ok
// SIG undefined FUN_142dd1540(void)

void FUN_142dd1540(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_142dd1580(*(longlong *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x10),param_2);
    return;
  }
  return;
}



// FUNCTION 142dd1560 FUN_142dd1560 body=21 status=ok
// SIG undefined FUN_142dd1560(void)

void FUN_142dd1560(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_142dd1580(param_1,*(undefined8 *)(param_2 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 142dd1580 FUN_142dd1580 body=806 status=ok
// SIG undefined FUN_142dd1580(void)

void FUN_142dd1580(longlong *param_1,longlong *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong local_28;
  int local_20;
  
  if (param_2 != (longlong *)0x0) {
    lVar4 = param_2[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*param_2 + 0x368))(param_2);
      lVar4 = param_2[0x1f];
    }
    if ((lVar4 == 0) || (*(char *)(lVar4 + 0x88) == '\0')) {
      lVar4 = param_1[0x39];
      lVar8 = (longlong)(int)param_1[0x3a] * 0x80 + lVar4;
      for (; lVar4 != lVar8; lVar4 = lVar4 + 0x80) {
        if (*(longlong **)(lVar4 + 8) == param_2) {
          if (lVar4 == 0) {
            return;
          }
          if ((*(char *)(lVar4 + 0x50) == '\0') || (*(char *)(lVar4 + 0x7a) == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) {
            return;
          }
          uVar10 = 0xffffffff80000000;
          uVar9 = (longlong)*(int *)(lVar4 + 0x54) + (longlong)param_3;
          if ((-0x80000001 < (longlong)uVar9) && (uVar10 = 0x7fffffff, (longlong)uVar9 < 0x7fffffff)
             ) {
            uVar10 = uVar9 & 0xffffffff;
          }
          plVar5 = (longlong *)param_1[0x23];
          if (plVar5 != (longlong *)0x0) {
            lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
            if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
                lVar4 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              if (((*(uint *)((longlong)plVar5 + 0x4cc) >> 1 & 1) == 0) ||
                 (cVar2 = (**(code **)(*plVar5 + 0x768))(plVar5), cVar2 == '\0')) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) goto LAB_142dd1875;
            }
          }
          FUN_142ddb060(param_1,param_2,uVar10 & 0xffffffff);
LAB_142dd1875:
          (**(code **)(*param_1 + 0x420))(param_1,param_2,uVar10 & 0xffffffff);
          return;
        }
      }
    }
    else {
      lVar4 = param_1[0x24];
      if (((lVar4 != 0) || (lVar4 = FUN_1423407b0(param_1), lVar4 != 0)) &&
         (iVar3 = FUN_142340f30(param_1), iVar3 != 3)) {
        UWorld::GetPlayerControllerIterator(lVar4,&local_28);
        while( true ) {
          if ((local_20 < 0) || (*(int *)(local_28 + 8) <= local_20)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) break;
          plVar5 = (longlong *)FWeakObjectPtr::Get();
          if (plVar5 == (longlong *)0x0) {
LAB_142dd1778:
            local_20 = local_20 + 1;
          }
          else {
            lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
            if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
                lVar4 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) goto LAB_142dd1778;
            uVar6 = FUN_142e035e0();
            plVar7 = (longlong *)(**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
            if (plVar7 == (longlong *)0x0) goto LAB_142dd1778;
            lVar4 = plVar7[0x39];
            lVar8 = (longlong)(int)plVar7[0x3a] * 0x80 + lVar4;
            if (lVar4 == lVar8) goto LAB_142dd1778;
            do {
              if (*(longlong **)(lVar4 + 8) == param_2) {
                if (lVar4 != 0) {
                  if ((*(char *)(lVar4 + 0x50) == '\0') || (*(char *)(lVar4 + 0x7a) == '\0')) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if (bVar1) {
                    uVar9 = (longlong)*(int *)(lVar4 + 0x54) + (longlong)param_3;
                    if ((longlong)uVar9 < -0x80000000) {
                      uVar10 = 0x80000000;
                    }
                    else {
                      uVar10 = 0x7fffffff;
                      if ((longlong)uVar9 < 0x7fffffff) {
                        uVar10 = uVar9 & 0xffffffff;
                      }
                    }
                    if (((*(uint *)((longlong)plVar5 + 0x4cc) >> 1 & 1) == 0) ||
                       (cVar2 = (**(code **)(*plVar5 + 0x768))(plVar5), cVar2 == '\0')) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (!bVar1) {
                      FUN_142ddb060(plVar7,param_2,uVar10);
                    }
                    (**(code **)(*plVar7 + 0x420))(plVar7,param_2,uVar10);
                  }
                }
                goto LAB_142dd1778;
              }
              lVar4 = lVar4 + 0x80;
            } while (lVar4 != lVar8);
            local_20 = local_20 + 1;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142dd18b0 FUN_142dd18b0 body=34 status=ok
// SIG undefined FUN_142dd18b0(void)

void FUN_142dd18b0(longlong param_1)

{
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_142dc44a0();
  }
  return;
}



// FUNCTION 142dd18e0 FUN_142dd18e0 body=99 status=ok
// SIG undefined FUN_142dd18e0(void)

void FUN_142dd18e0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)FUN_142dceb30();
  lVar3 = (longlong)(int)plVar2[1] + (longlong)param_3;
  lVar5 = -0x80000000;
  if ((-0x80000001 < lVar3) && (lVar5 = 0x7fffffff, lVar3 < 0x7fffffff)) {
    lVar5 = lVar3;
  }
  lVar3 = *plVar2;
  iVar4 = (int)lVar5;
  *(int *)(plVar2 + 1) = iVar4;
  iVar1 = iVar4;
  if (*(char *)(lVar3 + 0x38) != '\0') {
    iVar1 = *(int *)(lVar3 + 0x34);
    if (*(int *)(lVar3 + 0x34) <= iVar4) {
      iVar1 = iVar4;
    }
    *(int *)(plVar2 + 1) = iVar1;
  }
  if (*(char *)(lVar3 + 0x40) != '\0') {
    iVar4 = *(int *)(lVar3 + 0x3c);
    if (iVar1 <= *(int *)(lVar3 + 0x3c)) {
      iVar4 = iVar1;
    }
    *(int *)(plVar2 + 1) = iVar4;
  }
  return;
}



// FUNCTION 142dd1950 FUN_142dd1950 body=377 status=ok
// SIG undefined FUN_142dd1950(void)

void FUN_142dd1950(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  lVar3 = param_1[1];
  uVar9 = 0;
  uVar11 = uVar9;
  if (lVar3 != 0) {
    while ((iVar12 = (int)uVar11, -1 < iVar12 && (iVar12 < *(int *)(lVar3 + 0x40)))) {
      if ((*(longlong *)(*(longlong *)(lVar3 + 0x38) + (longlong)iVar12 * 0x50) != 0) &&
         ((cVar7 = FUN_142c95b60(), cVar7 != '\0' &&
          (*(char *)(*(longlong *)(lVar3 + 0x38) + 8 + (longlong)iVar12 * 0x50) != '\x04')))) {
        plVar10 = (longlong *)param_1[3];
        iVar2 = (int)param_1[4];
        lVar4 = param_1[1];
        lVar14 = (longlong)iVar2 * 0x38;
        plVar13 = plVar10 + (longlong)iVar2 * 7;
        for (; plVar10 != plVar13; plVar10 = plVar10 + 7) {
          if ((lVar4 == *plVar10) && (iVar12 == (int)plVar10[1])) goto LAB_142dd1a52;
        }
        *(int *)(param_1 + 4) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0x24) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(param_1 + 3);
        }
        lVar5 = *param_1;
        lVar6 = param_1[3];
        local_28 = (undefined4)lVar4;
        uStack_24 = (undefined4)((ulonglong)lVar4 >> 0x20);
        puVar1 = (undefined4 *)(lVar14 + lVar6);
        *puVar1 = local_28;
        puVar1[1] = uStack_24;
        puVar1[2] = iVar12;
        puVar1[3] = uStack_1c;
        uVar11 = uVar9;
        if (lVar5 != 0) {
          uVar11 = *(ulonglong *)(lVar5 + 0x118);
        }
        *(ulonglong *)(lVar14 + 0x10 + lVar6) = uVar11;
        *(longlong *)(lVar14 + 0x18 + lVar6) = lVar5;
        *(undefined4 *)(lVar14 + 0x20 + lVar6) = 0;
        *(undefined8 *)(lVar14 + 0x28 + lVar6) = 0;
        *(undefined8 *)(lVar14 + 0x30 + lVar6) = 0;
      }
LAB_142dd1a52:
      uVar11 = (ulonglong)(iVar12 + 1);
    }
    plVar13 = (longlong *)param_1[1];
    if ((plVar13 != (longlong *)0x0) && (lVar3 = *param_1, lVar3 != 0)) {
      plVar10 = *(longlong **)(lVar3 + 0x118);
      if (*(char *)(lVar3 + 400) != '\0') {
        (**(code **)(*plVar13 + 0x278))(plVar13);
        plVar13 = (longlong *)param_1[1];
      }
      if ((char)plVar13[9] != '\0') {
        if (plVar10 != (longlong *)0x0) {
          uVar8 = UScrollBox::GetPrivateStaticClass();
          uVar9 = (**(code **)(*plVar10 + 0x628))(plVar10,uVar8);
        }
        param_1[2] = uVar9;
      }
    }
  }
  return;
}



// FUNCTION 142dd1ad0 FUN_142dd1ad0 body=72 status=ok
// SIG undefined FUN_142dd1ad0(void)

void FUN_142dd1ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_3);
  FUN_142dd1b20(param_1,param_2,uVar1);
  FUN_142dd1e30(param_1,param_3);
  return;
}



// FUNCTION 142dd1b20 FUN_142dd1b20 body=367 status=ok
// SIG undefined FUN_142dd1b20(void)

void FUN_142dd1b20(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  
  FUN_142dd9cb0();
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      FWeakObjectPtr::operator=(param_1,param_3);
      lVar4 = FUN_142dddd00(param_3);
      if (lVar4 == 0) {
        lVar4 = FUN_142df3580(param_3);
        if (lVar4 != 0) {
          uVar2 = FUN_142df3570(param_2,lVar4);
          *(undefined1 *)(param_1 + 0x380) = uVar2;
          uVar2 = FUN_142df3570(lVar4,param_2);
          *(undefined1 *)(param_1 + 0x381) = uVar2;
        }
      }
      else {
        FWeakObjectPtr::operator=(param_1 + 0x10,lVar4);
        uVar2 = FUN_142df3570(param_2,*(undefined8 *)(lVar4 + 0x180));
        *(undefined1 *)(param_1 + 0x380) = uVar2;
        uVar2 = FUN_142df3570(*(undefined8 *)(lVar4 + 0x180),param_2);
        *(undefined1 *)(param_1 + 0x381) = uVar2;
        lVar5 = FWeakObjectPtr::Get(param_1 + 0x10);
        lVar4 = *(longlong *)(lVar5 + 0x120);
        if ((lVar4 == 0) && (lVar4 = FUN_1423407b0(lVar5), lVar4 == 0)) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(lVar4 + 0x790);
        }
        FUN_142dd95e0(lVar5 + 0x388,uVar7);
        if (*(int *)(lVar5 + 0x390) < 1) {
          *(undefined1 *)(param_1 + 0x378) = 3;
        }
        else {
          *(undefined1 *)(param_1 + 0x378) = *(undefined1 *)(*(longlong *)(lVar5 + 0x388) + 8);
        }
      }
    }
  }
  return;
}



// FUNCTION 142dd1c90 FUN_142dd1c90 body=92 status=ok
// SIG undefined FUN_142dd1c90(void)

void FUN_142dd1c90(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  *(longlong *)(param_1 + 0x28) = param_2;
  FUN_142dfe1d0();
  if ((((param_2 != 0) && (param_4 != 0)) && (*(char *)(param_4 + 0x50) != '\0')) &&
     (((*(char *)(param_4 + 0x7a) != '\0' && (*(char *)(param_4 + 0x51) == '\0')) &&
      (*(longlong *)(param_1 + 0x28) != 0)))) {
    FUN_142dd3f20(param_1);
  }
  return;
}



// FUNCTION 142dd1cf0 FUN_142dd1cf0 body=308 status=ok
// SIG undefined FUN_142dd1cf0(void)

void FUN_142dd1cf0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x868) != 0) {
    lVar1 = FUN_1429ecea0();
    lVar3 = *(longlong *)(param_1 + 0x868);
    for (lVar5 = lVar3; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar1) {
        if (lVar3 != 0) {
          lVar5 = 0;
          if (lVar3 != 0) {
            lVar1 = FUN_1429ecea0();
            for (lVar3 = *(longlong *)(param_1 + 0x868);
                (lVar5 = 0, lVar3 != 0 && (lVar5 = *(longlong *)(param_1 + 0x868), lVar3 != lVar1));
                lVar3 = *(longlong *)(lVar3 + 0x30)) {
            }
          }
          FUN_1417846f0(param_1,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          uVar2 = FUN_1417985e0(lVar5,param_1,0,0,0,0,0,0,0);
          *(undefined8 *)(param_1 + 0x5b8) = uVar2;
        }
        break;
      }
    }
  }
  lVar3 = FUN_14270bb10(param_1);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x108) < 8) {
      cVar4 = (&DAT_1468c21f8)[(int)*(uint *)(lVar3 + 0x108)];
    }
    else {
      cVar4 = '\0';
    }
    *(bool *)(param_1 + 0x958) = cVar4 != '\0';
  }
  FUN_14270e300(param_1);
  return;
}



// FUNCTION 142dd1e30 FUN_142dd1e30 body=926 status=ok
// SIG undefined FUN_142dd1e30(void)

void FUN_142dd1e30(longlong param_1,longlong param_2)

{
  float *pfVar1;
  float *pfVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  void *_Src;
  float *pfVar10;
  uint *puVar11;
  float *_Dst;
  longlong lVar12;
  float fVar13;
  float fVar14;
  
  _Dst = (float *)(param_1 + 0x20);
  lVar12 = 8;
  uVar8 = *(uint *)(param_2 + 0x350);
  if (7 < *(uint *)(param_2 + 0x350)) {
    uVar8 = 8;
  }
  _Src = *(void **)(param_2 + 0x348);
  if (*(void **)(param_2 + 0x348) == (void *)0x0) {
    _Src = (void *)(param_2 + 8);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)uVar8 * 0x68);
  uVar8 = _tls_index;
  pfVar2 = (float *)(param_1 + 0x360);
  *(undefined4 *)(param_1 + 0x360) = 0x7f7fffff;
  if (_Dst != pfVar2) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar8 * 8);
    pfVar10 = (float *)(param_1 + 0x28);
    do {
      cVar7 = *(char *)(pfVar10 + 10);
      if ((*(int *)(lVar4 + 0x38) < DAT_146859258) &&
         (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1)) {
        DAT_146859248 = -1;
        FName::FName(&DAT_146859250,L"Invalid",1);
        _Init_thread_footer(&DAT_146859258);
      }
      if ((((cVar7 != DAT_146859248) && (((uint)pfVar10[0xf] >> 1 & 1) != 0)) && (0.0 < *pfVar10))
         && ((fVar14 = pfVar10[-2], fVar14 < 3.4028235e+38 && (fVar14 < *(float *)(param_1 + 0x360))
             ))) {
        *(float *)(param_1 + 0x360) = fVar14;
      }
      pfVar1 = pfVar10 + 0x18;
      pfVar10 = pfVar10 + 0x1a;
      uVar8 = _tls_index;
    } while (pfVar1 != pfVar2);
  }
  bVar3 = *(byte *)(param_2 + 0x358);
  uVar5 = *(undefined8 *)(param_2 + 0x360);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar8 * 8);
  if ((*(int *)(lVar4 + 0x38) < DAT_146859258) &&
     (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1)) {
    DAT_146859248 = -1;
    FName::FName(&DAT_146859250,L"Invalid",1);
    _Init_thread_footer(&DAT_146859258);
  }
  uVar6 = DAT_146859250;
  *(char *)(param_1 + 0x368) = DAT_146859248;
  *(undefined8 *)(param_1 + 0x370) = uVar6;
  if ((bVar3 < 8) &&
     (lVar9 = (ulonglong)bVar3 * 0x68, (*(uint *)(lVar9 + 100 + param_1) >> 1 & 1) != 0)) {
    if (*(float *)(lVar9 + 0x28 + param_1) <= 0.0) {
      fVar14 = 3.4028235e+38;
    }
    else {
      fVar14 = *(float *)(lVar9 + 0x20 + param_1);
    }
    if (0.0 <= fVar14) {
      *(byte *)(param_1 + 0x368) = bVar3;
      *(undefined8 *)(param_1 + 0x370) = uVar5;
      goto LAB_142dd2065;
    }
  }
  puVar11 = (uint *)(param_1 + 100);
  fVar14 = 3.4028235e+38;
  do {
    uVar8 = puVar11[-5];
    if ((*(int *)(lVar4 + 0x38) < DAT_146859258) &&
       (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1)) {
      DAT_146859248 = -1;
      FName::FName(&DAT_146859250,L"Invalid",1);
      _Init_thread_footer(&DAT_146859258);
    }
    if (((char)uVar8 != DAT_146859248) && (((*puVar11 >> 1 & 1) != 0 || ((*puVar11 >> 2 & 1) == 0)))
       ) {
      if ((float)puVar11[-0xf] <= 0.0) {
        fVar13 = 3.4028235e+38;
      }
      else {
        fVar13 = (float)puVar11[-0x11];
      }
      if ((0.0 <= fVar13) && (fVar13 < fVar14)) {
        *(char *)(param_1 + 0x368) = (char)puVar11[-5];
        *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(puVar11 + -3);
        fVar14 = fVar13;
      }
    }
    puVar11 = puVar11 + 0x1a;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
LAB_142dd2065:
  if ((((*(char *)(param_1 + 0x380) == '\x01') &&
       (cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x10), cVar7 != '\0')) &&
      (lVar12 = FWeakObjectPtr::Get(param_1 + 0x10), *(longlong *)(lVar12 + 0x180) != 0)) &&
     (_Dst != pfVar2)) {
    while ((((uint)_Dst[0x11] >> 2 & 1) != 0 || (((uint)_Dst[0x11] & 0x202) != 0x202))) {
      _Dst = _Dst + 0x1a;
      if (_Dst == pfVar2) {
        return;
      }
    }
    *(undefined1 *)(param_1 + 0x380) = 2;
  }
  return;
}



// FUNCTION 142dd21d0 FUN_142dd21d0 body=374 status=ok
// SIG undefined FUN_142dd21d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142dd21d0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [8];
  undefined4 local_10;
  
  lVar1 = param_3[0x2d];
  puVar4 = &local_28;
  if (lVar1 == 0) {
    local_28 = _DAT_1468b5d90;
    local_20 = DAT_1468b5d98;
  }
  else {
    local_28 = *(undefined8 *)(lVar1 + 0x220);
    local_20 = *(undefined4 *)(lVar1 + 0x228);
  }
  *(undefined8 *)((longlong)param_2 + 0xc) = local_28;
  *param_2 = local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_20;
  *(undefined4 *)(param_2 + 1) = local_20;
  if (*(char *)(param_1 + 0x2a4) != '\0') {
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x298);
    if (*(char *)(param_1 + 0x2a0) != '\0') {
      *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x29c);
      return;
    }
    *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x298);
    return;
  }
  lVar1 = param_3[0x2d];
  if (lVar1 != 0) {
    lVar3 = FUN_142912e90();
    puVar4 = *(undefined8 **)(lVar1 + 0x10);
    if ((*(int *)(puVar4 + 0x12) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(puVar4[0x11] + (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x000142dd22f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x578))(param_3,param_2 + 3,(longlong)param_2 + 0x1c);
      return;
    }
  }
  FUN_14222da00(param_3,CONCAT71((int7)((ulonglong)puVar4 >> 8),1),local_18,&local_28);
  if ((float)local_28 <= local_28._4_4_) {
    local_28._0_4_ = local_28._4_4_;
  }
  *(undefined4 *)((longlong)param_2 + 0x14) = local_10;
  *(undefined4 *)((longlong)param_2 + 0x1c) = local_20;
  *(float *)(param_2 + 3) = (float)local_28;
  return;
}



// FUNCTION 142dd2350 FUN_142dd2350 body=997 status=ok
// SIG undefined FUN_142dd2350(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142dd2350(longlong param_1,undefined8 *param_2,int param_3,undefined8 *param_4)

{
  float fVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  float local_res18 [2];
  undefined8 local_48;
  float local_40;
  undefined1 local_38 [8];
  undefined4 local_30;
  
  *param_2 = *param_4;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_4 + 1);
  if ((param_3 < 0) || (*(int *)(param_1 + 0x2b0) <= param_3)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    *(undefined8 *)((longlong)param_2 + 0xc) = *param_4;
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(param_4 + 1);
    puVar6 = (undefined4 *)((longlong)param_3 * 0x98 + *(longlong *)(param_1 + 0x2a8));
    *(undefined4 *)(param_2 + 3) = *puVar6;
    if (*(char *)(puVar6 + 2) != '\0') {
      *(undefined4 *)((longlong)param_2 + 0x1c) = puVar6[1];
      return;
    }
    *(undefined4 *)((longlong)param_2 + 0x1c) = *puVar6;
    return;
  }
  plVar5 = *(longlong **)(param_1 + 0x118);
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)((longlong)param_2 + 0xc) = *param_4;
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(param_4 + 1);
    if (*(char *)(param_1 + 0x2a4) == '\0') {
      param_2[3] = 0;
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 0x2a4) == '\0') {
      lVar3 = plVar5[0x2d];
      if (lVar3 == 0) {
        local_48 = _DAT_1468b5d90;
        local_40 = DAT_1468b5d98;
      }
      else {
        local_48 = *(longlong *)(lVar3 + 0x220);
        local_40 = *(float *)(lVar3 + 0x228);
      }
      *(longlong *)((longlong)param_2 + 0xc) = local_48;
      *(float *)((longlong)param_2 + 0x14) = local_40;
      if (*(byte *)(plVar5 + 0x25) < 3) {
        lVar3 = AHeoCon::GetPrivateStaticClass();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (lVar3 = plVar5[0x98], lVar3 != 0)) {
          local_48 = plVar5[0x12a];
          local_40 = *(float *)(lVar3 + 0x228) - *(float *)(plVar5 + 299);
          *(ulonglong *)((longlong)param_2 + 0xc) =
               CONCAT44(*(float *)(lVar3 + 0x224) - (float)((ulonglong)local_48 >> 0x20),
                        *(float *)(lVar3 + 0x220) - (float)local_48);
          *(float *)((longlong)param_2 + 0x14) = local_40;
        }
      }
      lVar3 = plVar5[0x2d];
      if (lVar3 != 0) {
        lVar4 = FUN_142912e90();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          (**(code **)(*plVar5 + 0x578))(plVar5,param_2 + 3,(longlong)param_2 + 0x1c);
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x678))(plVar5);
          if (plVar5 == (longlong *)0x0) {
            return;
          }
          fVar7 = *(float *)(lVar3 + 0x228);
          lVar3 = AHeoCon::GetPrivateStaticClass();
          if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
              != lVar3 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            (**(code **)(*plVar5 + 0xa30))(plVar5,param_2 + 3,local_res18);
            fVar1 = *(float *)((longlong)param_2 + 0x1c);
            *(float *)((longlong)param_2 + 0x1c) = local_res18[0];
            fVar7 = (local_res18[0] - fVar1) + fVar7;
          }
          if (plVar5[0x98] == 0) {
            return;
          }
          fVar1 = *(float *)((longlong)param_2 + 0x1c);
          fVar8 = fVar1 / *(float *)(param_1 + 0x398);
          fVar8 = fVar1 - (float)(int)((fVar1 - *(float *)(plVar5[0x98] + 0x1e4)) / fVar8) * fVar8;
          *(float *)((longlong)param_2 + 0x1c) = fVar8;
          *(float *)((longlong)param_2 + 0x14) = fVar7 - (fVar1 - fVar8);
          return;
        }
      }
      FUN_14222da00(plVar5,1,local_38,&local_48);
      if ((float)local_48 <= local_48._4_4_) {
        local_48._0_4_ = local_48._4_4_;
      }
      *(undefined4 *)((longlong)param_2 + 0x14) = local_30;
      *(float *)((longlong)param_2 + 0x1c) = local_40;
      *(float *)(param_2 + 3) = (float)local_48;
      return;
    }
    *(undefined8 *)((longlong)param_2 + 0xc) = *param_4;
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(param_4 + 1);
  }
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x298);
  if (*(char *)(param_1 + 0x2a0) != '\0') {
    *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x29c);
    return;
  }
  *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x298);
  return;
}



// FUNCTION 142dd2740 FUN_142dd2740 body=280 status=ok
// SIG undefined FUN_142dd2740(void)

void FUN_142dd2740(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 400) != 0) {
    *(longlong *)(param_1 + 0x1b8) = *(longlong *)(param_1 + 400);
  }
  uStack_10 = 0;
  plVar1 = (longlong *)(param_1 + 0x198);
  local_18 = FUN_142ddd2d0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_1458b3d08;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_18._4_4_;
    *(undefined4 *)(plVar3 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_1458b3d50;
  }
  if (&local_18 != plVar1) {
    if (plVar3 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x1a0) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar4 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x1a0) = 0;
      }
    }
    else {
      (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  FUN_142340f20(param_1);
  return;
}



// FUNCTION 142dd2860 FUN_142dd2860 body=124 status=ok
// SIG undefined FUN_142dd2860(void)

void FUN_142dd2860(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_1426e47d0();
  lVar1 = *(longlong *)(param_1 + 0x458);
  if (lVar1 != 0) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
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
      *(longlong *)(param_1 + 0x2c68) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x2c68) = 0;
  return;
}



// FUNCTION 142dd28e0 FUN_142dd28e0 body=952 status=ok
// SIG undefined FUN_142dd28e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142dd28e0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  void *pvVar9;
  ulonglong uVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  int iVar14;
  void *pvVar15;
  void *pvVar16;
  undefined8 uVar17;
  undefined1 auStack_458 [32];
  longlong local_438;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined8 local_408;
  undefined1 local_400;
  undefined8 local_3fc;
  undefined4 local_3f4;
  undefined8 local_3f0;
  undefined4 local_3e8;
  byte local_3e4;
  undefined1 local_3d8 [892];
  undefined4 local_5c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_458;
  pvVar9 = (void *)0x0;
  uVar17 = 0;
  pvVar11 = pvVar9;
  local_438 = param_1;
  if (0 < *(int *)(param_1 + 0x7540)) {
    pvVar13 = (void *)(param_1 + 0x338);
    pvVar15 = pvVar9;
    pvVar16 = pvVar9;
    do {
      pvVar12 = *(void **)(param_1 + 0x7538);
      if (*(void **)(param_1 + 0x7538) == (void *)0x0) {
        pvVar12 = pvVar13;
      }
      iVar14 = (int)pvVar15;
      pvVar12 = (void *)((longlong)pvVar12 + (longlong)iVar14 * 0x390);
      if ((param_2 != (longlong *)0x0) && (cVar2 = FWeakObjectPtr::IsValid(pvVar12), cVar2 != '\0'))
      {
        plVar3 = (longlong *)FWeakObjectPtr::Get(pvVar12);
        if (param_2 != plVar3) {
          plVar3 = (longlong *)FWeakObjectPtr::Get(pvVar12);
          if ((plVar3 != (longlong *)0x0) &&
             (plVar4 = (longlong *)(**(code **)(*plVar3 + 0x690))(plVar3), plVar4 != (longlong *)0x0
             )) {
            plVar3 = plVar4;
          }
          if (param_2 != plVar3) goto LAB_142dd29f1;
        }
        if (iVar14 != 0) {
          uVar10 = (ulonglong)(*(ulonglong *)(param_1 + 0x7538) != 0) - 1 & (ulonglong)pvVar13 |
                   *(ulonglong *)(param_1 + 0x7538);
          FGenericPlatformMemory::MemswapGreaterThan8(uVar10,uVar10 + (longlong)pvVar16,0x390);
          uVar17 = 1;
        }
        pvVar11 = *(void **)(param_1 + 0x7538);
        if (*(void **)(param_1 + 0x7538) == (void *)0x0) {
          pvVar11 = pvVar13;
        }
      }
LAB_142dd29f1:
      pvVar15 = (void *)(ulonglong)(iVar14 + 1U);
      pvVar16 = (void *)((longlong)pvVar16 + 0x390);
    } while ((int)(iVar14 + 1U) < *(int *)(local_438 + 0x7540));
  }
  lVar7 = local_438;
  plVar3 = *(longlong **)(local_438 + 0x118);
  if ((plVar3 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar3 + 0x678))(plVar3), lVar5 != 0)) {
    lVar6 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (pvVar11 == (void *)0x0) {
        FUN_142dc1ad0(local_3d8);
        pvVar11 = pvVar9;
        if (*(longlong *)(lVar5 + 0x908) != 0) {
          pvVar11 = *(void **)(*(longlong *)(lVar5 + 0x908) + 0x180);
        }
        FUN_142dd1b20(local_3d8,pvVar11,param_2);
        iVar14 = *(int *)(lVar7 + 0x7540);
        pvVar15 = (void *)(lVar7 + 0x338);
        local_5c = 0x3f800000;
        *(int *)(lVar7 + 0x7540) = iVar14 + 1;
        if (*(int *)(lVar7 + 0x7544) < iVar14 + 1) {
          FUN_142dd9e90(pvVar15,iVar14);
        }
        pvVar11 = *(void **)(lVar7 + 0x7538);
        if (*(void **)(lVar7 + 0x7538) == (void *)0x0) {
          pvVar11 = pvVar15;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)pvVar11 + 0x390),pvVar11,(longlong)iVar14 * 0x390);
        pvVar11 = *(void **)(lVar7 + 0x7538);
        if (*(void **)(lVar7 + 0x7538) == (void *)0x0) {
          pvVar11 = pvVar15;
        }
        FUN_140726d20(pvVar11,local_3d8);
        uVar17 = 1;
        pvVar11 = *(void **)(lVar7 + 0x7538);
        if (*(void **)(lVar7 + 0x7538) == (void *)0x0) {
          pvVar11 = pvVar15;
        }
      }
      FWeakObjectPtr::operator=((longlong)pvVar11 + 0x18,lVar7);
      cVar2 = FWeakObjectPtr::IsValid((longlong)pvVar11 + 0x18);
      if (cVar2 != '\0') {
        plVar4 = (longlong *)FWeakObjectPtr::Get(pvVar11);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x148))(plVar4);
        }
        lVar7 = (**(code **)(*plVar3 + 0x668))(plVar3);
        if (lVar7 != 0) {
          uVar8 = UDamageableInterface::GetPrivateStaticClass();
          plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar8);
          if (plVar3 != (longlong *)0x0) {
            local_3e4 = local_3e4 & 0xc0;
            local_428 = 0xffffffff;
            uStack_420 = 0xffffffff;
            local_3f4 = DAT_1468b5d98;
            local_3e8 = DAT_1468b5d98;
            local_3fc = _DAT_1468b5d90;
            local_3f0 = _DAT_1468b5d90;
            local_418 = 0xbf800000;
            uStack_414 = 0xbf800000;
            uStack_410 = 0xbf800000;
            uStack_40c = 0xbf800000;
            local_408 = 0;
            local_400 = 0;
            cVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,plVar4,&local_428);
            if (cVar2 == '\0') {
              FWeakObjectPtr::operator=(&local_428,plVar4);
              if (plVar4 != (longlong *)0x0) {
                pvVar9 = (void *)(**(code **)(*plVar4 + 0x668))(plVar4);
              }
              FWeakObjectPtr::operator=(&uStack_420,pvVar9);
            }
            *(byte *)((longlong)pvVar11 + 0x38c) = *(byte *)((longlong)pvVar11 + 0x38c) | 1;
            local_3e4 = local_3e4 | 1;
            (**(code **)(*plVar3 + 0x10))(plVar3,DAT_1466ad8fc);
            (**(code **)(*plVar3 + 0x30))(plVar3,&local_428);
          }
        }
      }
    }
  }
  return uVar17;
}



// FUNCTION 142dd2ca0 FUN_142dd2ca0 body=334 status=ok
// SIG undefined FUN_142dd2ca0(void)

undefined1
FUN_142dd2ca0(longlong *param_1,undefined8 *param_2,float param_3,float param_4,undefined4 param_5,
             char param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined1 uVar7;
  DWORD DVar8;
  longlong lVar9;
  char cVar10;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  
  lVar5 = DAT_146b34880;
  cVar10 = param_6;
  if (param_6 == (char)param_1[299]) goto LAB_142dd2d3d;
  cVar6 = FUN_1415ad720(&DAT_1468e2448,param_6);
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar8 = GetCurrentThreadId();
    if (DVar8 == DAT_1468c21c0) goto LAB_142dd2d19;
    lVar9 = 4;
  }
  else {
LAB_142dd2d19:
    lVar9 = 0;
  }
  if (ABS(param_3) < param_4 * *(float *)(lVar9 + lVar5)) {
    cVar10 = (char)param_1[299];
  }
LAB_142dd2d3d:
  (**(code **)(*param_1 + 0xff8))(param_1,cVar10);
  local_48 = *param_2;
  local_40 = param_2[1];
  local_38 = param_2[2];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  uVar7 = FUN_14270e8f0(param_1,&local_48,param_3,param_4,param_5,param_6);
  plVar4 = (longlong *)param_2[2];
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
  return uVar7;
}



// FUNCTION 142dd2df0 FUN_142dd2df0 body=208 status=ok
// SIG undefined FUN_142dd2df0(void)

undefined1
FUN_142dd2df0(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  (**(code **)(*param_1 + 0xff8))(param_1,param_5);
  local_38 = *param_2;
  local_30 = param_2[1];
  local_28 = param_2[2];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FUN_14270e9c0(param_1,&local_38,param_3,param_4,param_5);
  plVar4 = (longlong *)param_2[2];
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
  return uVar6;
}



// FUNCTION 142dd2ec0 FUN_142dd2ec0 body=18 status=ok
// SIG undefined FUN_142dd2ec0(void)

undefined1 FUN_142dd2ec0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x50) != '\0') && (*(char *)(param_1 + 0x7a) != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 142dd2ee0 FUN_142dd2ee0 body=181 status=ok
// SIG undefined FUN_142dd2ee0(void)

undefined8 FUN_142dd2ee0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146b348c0) {
      _Init_thread_header(&DAT_146b348c0);
      if (DAT_146b348c0 == -1) {
        FName::FName(&DAT_146b348b8,L"OnlineSubsystemUtils",1);
        _Init_thread_footer(&DAT_146b348c0);
      }
    }
    lVar1 = FModuleManager::GetModulePtr_Internal(DAT_146b348b8);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x28) != 0)) {
      uVar2 = FUN_1404d5430(*(longlong *)(lVar1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 142dd2fa0 FUN_142dd2fa0 body=612 status=ok
// SIG undefined FUN_142dd2fa0(void)

undefined8 FUN_142dd2fa0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong local_res8;
  longlong local_58;
  longlong local_50;
  longlong local_40;
  
  plVar9 = *(longlong **)(param_1 + 0x1c8);
  plVar6 = plVar9 + (longlong)*(int *)(param_1 + 0x1d0) * 0x10;
  for (plVar8 = plVar9; plVar8 != plVar6; plVar8 = plVar8 + 0x10) {
    if ((longlong *)plVar8[1] == param_2) goto joined_r0x000142dd2fdc;
  }
  plVar8 = (longlong *)0x0;
joined_r0x000142dd2fdc:
  do {
    if (plVar9 == plVar6) {
LAB_142dd2fef:
      if (param_2 == (longlong *)0x0) {
        lVar10 = 0;
      }
      else {
        lVar10 = param_2[0x1f];
        if (lVar10 == 0) {
          (**(code **)(*param_2 + 0x368))(param_2);
          lVar10 = param_2[0x1f];
        }
      }
LAB_142dd3029:
      if ((plVar8 == (longlong *)0x0) || (lVar10 == 0)) {
        return 1;
      }
      if (((0 < *(int *)(lVar10 + 0xc0)) &&
          (*(int *)((longlong)plVar8 + 0x3c) < *(int *)(lVar10 + 0xc0))) &&
         (*(int *)((longlong)plVar8 + 0x54) <
          *(int *)(*(longlong *)(lVar10 + 0xb8) + (longlong)*(int *)((longlong)plVar8 + 0x3c) * 8)))
      {
        return 0;
      }
      lVar7 = *(longlong *)(lVar10 + 0xa0);
      lVar10 = (longlong)*(int *)(lVar10 + 0xa8) * 0x30 + lVar7;
      do {
        if (lVar7 == lVar10) {
          return 1;
        }
        FUN_142dc19e0(&local_58,lVar7);
        lVar1 = local_58;
        local_res8 = local_58;
        lVar4 = FUN_142dcdb70(plVar8);
        if (lVar4 != 0) {
          plVar6 = *(longlong **)(lVar4 + 0xa0);
          plVar9 = plVar6 + (longlong)*(int *)(lVar4 + 0xa8) * 6;
          for (; plVar6 != plVar9; plVar6 = plVar6 + 6) {
            if (*plVar6 == lVar1) {
              if (((char)plVar6[5] != '\0') &&
                 (lVar4 = FUN_142dc05f0(plVar8 + 8,&local_res8), lVar4 != 0)) {
                iVar2 = *(int *)(lVar4 + 0x30);
                goto LAB_142dd30f6;
              }
              plVar6 = (longlong *)*plVar8;
              if (plVar6 != (longlong *)0x0) {
                uVar5 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
                lVar4 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar5);
                if (lVar4 != 0) {
                  lVar4 = FUN_142dceb30(lVar4,lVar1);
                  if (lVar4 == 0) {
                    iVar2 = *(int *)(lVar1 + 0x30);
                  }
                  else {
                    iVar2 = *(int *)(lVar4 + 8);
                  }
                  goto LAB_142dd30f6;
                }
              }
              break;
            }
          }
        }
        iVar2 = 0;
LAB_142dd30f6:
        iVar3 = FUN_142dcfe80(plVar8,lVar1);
        if ((float)iVar2 < (float)iVar3) {
          if (local_40 != 0) {
            FMemory::Free();
          }
          if (local_50 != 0) {
            FMemory::Free();
          }
          return 0;
        }
        if (local_40 != 0) {
          FMemory::Free();
        }
        if (local_50 != 0) {
          FMemory::Free();
        }
        lVar7 = lVar7 + 0x30;
      } while( true );
    }
    if ((longlong *)plVar9[1] == param_2) {
      if (plVar9 != (longlong *)0x0) {
        lVar10 = FUN_142dcdb70(plVar9);
        goto LAB_142dd3029;
      }
      goto LAB_142dd2fef;
    }
    plVar9 = plVar9 + 0x10;
  } while( true );
}



// FUNCTION 142dd3210 FUN_142dd3210 body=12 status=ok
// SIG undefined FUN_142dd3210(void)

void FUN_142dd3210(longlong param_1)

{
  FUN_142dafb10(param_1 + 0x198);
  return;
}



// FUNCTION 142dd3220 FUN_142dd3220 body=67 status=ok
// SIG undefined FUN_142dd3220(void)

ulonglong FUN_142dd3220(longlong param_1,int param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong lVar2;
  
  if (((-1 < param_2) || (param_2 = param_2 + *(int *)(param_1 + 0x7540), -1 < param_2)) &&
     (param_2 < *(int *)(param_1 + 0x7540))) {
    lVar2 = *(longlong *)(param_1 + 0x7538);
    if (*(longlong *)(param_1 + 0x7538) == 0) {
      lVar2 = param_1 + 0x338;
    }
    uVar1 = FUN_142dd3420(lVar2 + (longlong)param_2 * 0x390);
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142dd3270 FUN_142dd3270 body=80 status=ok
// SIG undefined FUN_142dd3270(void)

ulonglong FUN_142dd3270(longlong param_1)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 != 0) {
    in_RAX = *(ulonglong *)(param_1 + 0x10);
    lVar1 = *(longlong *)(lVar2 + 0x1c8);
    lVar2 = (longlong)*(int *)(lVar2 + 0x1d0) * 0x80 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x80) {
      if (*(ulonglong *)(lVar1 + 8) == in_RAX) {
        if (lVar1 != 0) {
          if ((*(char *)(lVar1 + 0x50) != '\0') && (*(char *)(lVar1 + 0x7a) != '\0')) {
            return CONCAT71((int7)(in_RAX >> 8),1);
          }
          return 0;
        }
        break;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142dd32c0 FUN_142dd32c0 body=70 status=ok
// SIG undefined FUN_142dd32c0(void)

ulonglong FUN_142dd32c0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x1c8);
  uVar2 = (longlong)*(int *)(param_1 + 0x1d0) * 0x80 + uVar1;
  do {
    if (uVar1 == uVar2) {
LAB_142dd32ef:
      return uVar1 & 0xffffffffffffff00;
    }
    if (*(longlong *)(uVar1 + 8) == param_2) {
      if (((uVar1 != 0) && (*(char *)(uVar1 + 0x50) != '\0')) && (*(char *)(uVar1 + 0x7a) != '\0'))
      {
        return CONCAT71((int7)(uVar1 >> 8),1);
      }
      goto LAB_142dd32ef;
    }
    uVar1 = uVar1 + 0x80;
  } while( true );
}



// FUNCTION 142dd3310 FUN_142dd3310 body=70 status=ok
// SIG undefined FUN_142dd3310(void)

ulonglong FUN_142dd3310(longlong param_1)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar1 = *(longlong *)(lVar2 + 0x1c8);
  lVar2 = (longlong)*(int *)(lVar2 + 0x1d0) * 0x80 + lVar1;
  while( true ) {
    if (lVar1 == lVar2) {
      return 0;
    }
    if (*(longlong *)(lVar1 + 8) == *(longlong *)(param_1 + 0x10)) break;
    lVar1 = lVar1 + 0x80;
  }
  if (lVar1 == 0) {
    return 0;
  }
  return (ulonglong)*(byte *)(lVar1 + 0x51);
}



// FUNCTION 142dd3360 FUN_142dd3360 body=60 status=ok
// SIG undefined FUN_142dd3360(void)

ulonglong FUN_142dd3360(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x1c8);
  uVar2 = (longlong)*(int *)(param_1 + 0x1d0) * 0x80 + uVar1;
  do {
    if (uVar1 == uVar2) {
LAB_142dd338f:
      return uVar1 & 0xffffffffffffff00;
    }
    if (*(longlong *)(uVar1 + 8) == param_2) {
      if (uVar1 != 0) {
        return (ulonglong)*(byte *)(uVar1 + 0x51);
      }
      goto LAB_142dd338f;
    }
    uVar1 = uVar1 + 0x80;
  } while( true );
}



// FUNCTION 142dd33a0 FUN_142dd33a0 body=115 status=ok
// SIG undefined FUN_142dd33a0(void)

ulonglong FUN_142dd33a0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)*param_1;
  uVar2 = FUN_142e035e0();
  uVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
  lVar4 = *(longlong *)(uVar3 + 0x1c8);
  lVar5 = (longlong)*(int *)(uVar3 + 0x1d0) * 0x80 + lVar4;
  do {
    if (lVar4 == lVar5) {
LAB_142dd33f2:
      return uVar3 & 0xffffffffffffff00;
    }
    if (*(longlong *)(lVar4 + 8) == param_1[1]) {
      if (lVar4 != 0) {
        return (ulonglong)*(byte *)(lVar4 + 0x51);
      }
      goto LAB_142dd33f2;
    }
    lVar4 = lVar4 + 0x80;
  } while( true );
}



// FUNCTION 142dd3420 FUN_142dd3420 body=356 status=ok
// SIG undefined FUN_142dd3420(void)

undefined8 FUN_142dd3420(longlong param_1)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  float fVar6;
  byte local_28 [8];
  undefined8 local_20;
  
  cVar4 = FUN_142dd38f0();
  bVar2 = DAT_1466ad960;
  if (cVar4 == '\0') {
    local_28[0] = DAT_1466ad960;
    local_20 = DAT_1466ad968;
    cVar4 = FUN_14077cd10(local_28);
    bVar3 = DAT_1466ad940;
    if ((((cVar4 == '\0') || (7 < bVar2)) ||
        (lVar5 = (ulonglong)bVar2 * 0x68, *(float *)(lVar5 + 0x28 + param_1) <= 0.0)) ||
       ((3.4028235e+38 <= *(float *)(lVar5 + 0x20 + param_1) ||
        ((*(uint *)(lVar5 + 100 + param_1) >> 1 & 1) == 0)))) {
      local_28[0] = DAT_1466ad940;
      local_20 = DAT_1466ad948;
      cVar4 = FUN_14077cd10(local_28);
      bVar2 = DAT_1466ad930;
      if ((cVar4 != '\0') && (bVar3 < 8)) {
        lVar5 = (ulonglong)bVar3 * 0x68;
        fVar1 = *(float *)(lVar5 + 0x28 + param_1);
        if ((0.0 < fVar1) && (fVar6 = *(float *)(lVar5 + 0x20 + param_1), fVar6 < 3.4028235e+38)) {
          if (fVar1 <= 0.0) {
            fVar6 = 3.4028235e+38;
          }
          if (fVar6 <= 2.0) {
            return 1;
          }
        }
      }
      local_28[0] = DAT_1466ad930;
      local_20 = DAT_1466ad938;
      cVar4 = FUN_14077cd10(local_28);
      if ((cVar4 != '\0') && (bVar2 < 8)) {
        lVar5 = (ulonglong)bVar2 * 0x68;
        fVar1 = *(float *)(lVar5 + 0x28 + param_1);
        if ((0.0 < fVar1) && (fVar6 = *(float *)(lVar5 + 0x20 + param_1), fVar6 < 3.4028235e+38)) {
          if (fVar1 <= 0.0) {
            fVar6 = 3.4028235e+38;
          }
          if (fVar6 <= 2.0) {
            return 1;
          }
        }
      }
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142dd3590 thunk_FUN_142dd3420 body=5 status=ok
// SIG undefined thunk_FUN_142dd3420(void)

undefined8 thunk_FUN_142dd3420(longlong param_1)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  float fVar6;
  byte abStack_28 [8];
  undefined8 uStack_20;
  
  cVar4 = FUN_142dd38f0();
  bVar2 = DAT_1466ad960;
  if (cVar4 == '\0') {
    abStack_28[0] = DAT_1466ad960;
    uStack_20 = DAT_1466ad968;
    cVar4 = FUN_14077cd10(abStack_28);
    bVar3 = DAT_1466ad940;
    if ((((cVar4 == '\0') || (7 < bVar2)) ||
        (lVar5 = (ulonglong)bVar2 * 0x68, *(float *)(lVar5 + 0x28 + param_1) <= 0.0)) ||
       ((3.4028235e+38 <= *(float *)(lVar5 + 0x20 + param_1) ||
        ((*(uint *)(lVar5 + 100 + param_1) >> 1 & 1) == 0)))) {
      abStack_28[0] = DAT_1466ad940;
      uStack_20 = DAT_1466ad948;
      cVar4 = FUN_14077cd10(abStack_28);
      bVar2 = DAT_1466ad930;
      if ((cVar4 != '\0') && (bVar3 < 8)) {
        lVar5 = (ulonglong)bVar3 * 0x68;
        fVar1 = *(float *)(lVar5 + 0x28 + param_1);
        if ((0.0 < fVar1) && (fVar6 = *(float *)(lVar5 + 0x20 + param_1), fVar6 < 3.4028235e+38)) {
          if (fVar1 <= 0.0) {
            fVar6 = 3.4028235e+38;
          }
          if (fVar6 <= 2.0) {
            return 1;
          }
        }
      }
      abStack_28[0] = DAT_1466ad930;
      uStack_20 = DAT_1466ad938;
      cVar4 = FUN_14077cd10(abStack_28);
      if ((cVar4 != '\0') && (bVar2 < 8)) {
        lVar5 = (ulonglong)bVar2 * 0x68;
        fVar1 = *(float *)(lVar5 + 0x28 + param_1);
        if ((0.0 < fVar1) && (fVar6 = *(float *)(lVar5 + 0x20 + param_1), fVar6 < 3.4028235e+38)) {
          if (fVar1 <= 0.0) {
            fVar6 = 3.4028235e+38;
          }
          if (fVar6 <= 2.0) {
            return 1;
          }
        }
      }
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142dd35a0 FUN_142dd35a0 body=92 status=ok
// SIG undefined FUN_142dd35a0(void)

bool FUN_142dd35a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = *(longlong *)(param_1 + 0x210);
    lVar1 = (**(code **)(*param_2 + 0x280))(param_2,*(undefined8 *)(param_1 + 0x118));
    if ((lVar2 != 0) && (lVar1 != 0)) {
      if (*(longlong *)(lVar2 + 0x68) != 0) {
        lVar2 = *(longlong *)(lVar2 + 0x68);
      }
      if (*(longlong *)(lVar1 + 0x68) != 0) {
        lVar1 = *(longlong *)(lVar1 + 0x68);
      }
      return lVar2 == lVar1;
    }
  }
  return false;
}



// FUNCTION 142dd3600 FUN_142dd3600 body=139 status=ok
// SIG undefined FUN_142dd3600(void)

undefined8 FUN_142dd3600(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*param_1 == 0) || (lVar1 = FUN_142dcdb70(), lVar1 == 0)) {
    return 0;
  }
  lVar3 = 0;
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    lVar2 = (**(code **)(*(longlong *)*param_1 + 0x148))();
    if (lVar2 != 0) {
      lVar3 = UObjectBaseUtility::GetOutermost(lVar2);
      lVar3 = *(longlong *)(lVar3 + 0x18);
    }
    if (*(longlong *)(lVar1 + 0x90) != lVar3) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142dd3690 FUN_142dd3690 body=121 status=ok
// SIG undefined FUN_142dd3690(void)

undefined8 FUN_142dd3690(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x278))();
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_142e75af0();
    lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    if ((lVar4 != 0) && (param_2 != (longlong *)0x0)) {
      lVar1 = *(longlong *)(lVar4 + 0x210);
      lVar4 = (**(code **)(*param_2 + 0x280))(param_2,*(undefined8 *)(lVar4 + 0x118));
      if (lVar1 == lVar4) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142dd3710 FUN_142dd3710 body=11 status=ok
// SIG undefined FUN_142dd3710(void)

bool FUN_142dd3710(longlong param_1,longlong param_2)

{
  return *(longlong *)(param_1 + 0x210) == param_2;
}



// FUNCTION 142dd3720 FUN_142dd3720 body=67 status=ok
// SIG undefined FUN_142dd3720(void)

undefined8 FUN_142dd3720(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = *(longlong *)(param_1 + 0x210);
    lVar2 = (**(code **)(*param_2 + 0x280))(param_2,*(undefined8 *)(param_1 + 0x118));
    if (lVar1 == lVar2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142dd3770 FUN_142dd3770 body=10 status=ok
// SIG undefined FUN_142dd3770(void)

bool FUN_142dd3770(longlong param_1,char param_2)

{
  return *(char *)(param_1 + 0x200) == param_2;
}



// FUNCTION 142dd3780 FUN_142dd3780 body=121 status=ok
// SIG undefined FUN_142dd3780(void)

undefined8 FUN_142dd3780(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int local_res8 [2];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x218,local_res8,param_2);
  if (local_res8[0] == -1) {
    lVar1 = -1;
    plVar3 = (longlong *)0x0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x218);
    plVar3 = (longlong *)(lVar1 + (longlong)local_res8[0] * 0x18);
  }
  plVar2 = plVar3 + 1;
  if (plVar3 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  if (plVar2 != (longlong *)0x0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(longlong *)(param_1 + 0x1e0) == *plVar2);
  }
  return 0;
}



// FUNCTION 142dd3800 FUN_142dd3800 body=81 status=ok
// SIG undefined FUN_142dd3800(void)

undefined8 FUN_142dd3800(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((*(longlong *)(param_1 + 0x840) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x840) + 0x900), lVar1 != 0)) &&
     (((*(longlong *)(lVar1 + 0x1778) != 0 &&
       ((((*(byte *)(lVar1 + 0x18cc) & 2) == 0 && (*(longlong *)(lVar1 + 0x178) != 0)) &&
        ((*(uint *)(*(longlong *)(lVar1 + 0x1778) + 0x28) & 0x20000000) != 0)))) ||
      (*(char *)(lVar1 + 0x111c) != '\0')))) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  uVar2 = FUN_1423d96b0();
  return uVar2;
}



// FUNCTION 142dd3860 FUN_142dd3860 body=81 status=ok
// SIG undefined FUN_142dd3860(void)

undefined8 FUN_142dd3860(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((*(longlong *)(param_1 + 0x840) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x840) + 0x900), lVar1 != 0)) &&
     (((*(longlong *)(lVar1 + 0x1778) != 0 &&
       ((((*(byte *)(lVar1 + 0x18cc) & 2) == 0 && (*(longlong *)(lVar1 + 0x178) != 0)) &&
        ((*(uint *)(*(longlong *)(lVar1 + 0x1778) + 0x28) & 0x40000000) != 0)))) ||
      (*(char *)(lVar1 + 0x10b8) != '\0')))) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  uVar2 = FUN_1423d96c0();
  return uVar2;
}



// FUNCTION 142dd38c0 FUN_142dd38c0 body=37 status=ok
// SIG undefined FUN_142dd38c0(void)

undefined1 FUN_142dd38c0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142dcdb70();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0xf8) != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 142dd38f0 FUN_142dd38f0 body=152 status=ok
// SIG undefined FUN_142dd38f0(void)

ulonglong FUN_142dd38f0(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte local_18 [8];
  undefined8 local_10;
  
  plVar3 = (longlong *)FUN_142df90a0();
  lVar5 = plVar3[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar5 = plVar3[0x1f];
  }
  bVar1 = *(byte *)(lVar5 + 0x48);
  local_10 = *(undefined8 *)(lVar5 + 0x50);
  local_18[0] = bVar1;
  uVar4 = FUN_14077cd10(local_18);
  if (((char)uVar4 != '\0') && (bVar1 < 8)) {
    uVar4 = (ulonglong)bVar1;
    lVar5 = uVar4 * 0x68;
    if ((0.0 < *(float *)(lVar5 + 0x28 + param_1)) &&
       (*(float *)(lVar5 + 0x20 + param_1) < 3.4028235e+38)) {
      uVar2 = *(uint *)(lVar5 + 100 + param_1);
      return (ulonglong)CONCAT31((uint3)(uVar2 >> 9),(char)(uVar2 >> 1)) & 0xffffffffffffff01;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 142dd3990 FUN_142dd3990 body=71 status=ok
// SIG undefined FUN_142dd3990(void)

bool FUN_142dd3990(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_1 != 0) && (param_2 != (longlong *)0x0)) {
    lVar1 = *(longlong *)(param_1 + 0x210);
    lVar2 = (**(code **)(*param_2 + 0x280))(param_2,*(undefined8 *)(param_1 + 0x118));
    return lVar1 == lVar2;
  }
  return false;
}



// FUNCTION 142dd39e0 FUN_142dd39e0 body=80 status=ok
// SIG undefined FUN_142dd39e0(void)

undefined1 FUN_142dd39e0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = FUN_14222e270(param_2);
  if ((lVar2 == 0) && (lVar2 = *(longlong *)(param_2 + 0x150), lVar2 == 0)) {
    return 0;
  }
  uVar1 = FUN_142dd3a70(param_1,lVar2);
  return uVar1;
}



// FUNCTION 142dd3a30 FUN_142dd3a30 body=50 status=ok
// SIG undefined FUN_142dd3a30(void)

ulonglong FUN_142dd3a30(undefined8 param_1,longlong *param_2)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x688))(param_2);
    uVar2 = FUN_142dd3a70(param_1,uVar1);
    return uVar2;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142dd3a70 FUN_142dd3a70 body=261 status=ok
// SIG undefined FUN_142dd3a70(void)

char FUN_142dd3a70(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    return '\0';
  }
  if (*(longlong *)(param_2 + 0x478) == 0) {
    cVar1 = *(char *)(param_1 + 0x26c);
  }
  else {
    if ((*(byte *)(*(longlong *)(param_2 + 0x478) + 0x484) & 4) == 0) {
      if (((*(char *)(param_1 + 0x26a) != '\0') && (*(char *)(param_1 + 0x269) != '\0')) &&
         (cVar1 = FUN_1407c3030(param_1 + 0x3a0), cVar1 == '\0')) {
        return '\x01';
      }
      return '\0';
    }
    cVar1 = *(char *)(param_1 + 0x26b);
  }
  if (((cVar1 == '\0') || (*(char *)(param_1 + 0x269) == '\0')) ||
     (cVar1 = FUN_1407c3030(param_1 + 0x3a0), cVar1 != '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if ((*(char *)(param_1 + 0x26d) != '\0') && (cVar1 != '\0')) {
    lVar2 = FUN_142dcf570(param_1);
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar2 + 0x9d0);
    }
    lVar3 = FUN_142ddddc0(param_2);
    if (lVar3 != 0) {
      cVar1 = FUN_142dd3b80(lVar3,lVar2,uVar4);
    }
  }
  return cVar1;
}



// FUNCTION 142dd3b80 FUN_142dd3b80 body=408 status=ok
// SIG undefined FUN_142dd3b80(void)

undefined8 FUN_142dd3b80(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x7538);
  if (*(longlong *)(param_1 + 0x7538) == 0) {
    lVar5 = param_1 + 0x338;
  }
  lVar6 = (longlong)*(int *)(param_1 + 0x7540) * 0x390 + lVar5;
  do {
    if (lVar5 == lVar6) {
      return 0;
    }
    if ((param_2 != (longlong *)0x0) && (cVar1 = FWeakObjectPtr::IsValid(lVar5), cVar1 != '\0')) {
      plVar2 = (longlong *)FWeakObjectPtr::Get(lVar5);
      if (param_2 == plVar2) {
        return 1;
      }
      plVar2 = (longlong *)FWeakObjectPtr::Get(lVar5);
      if ((plVar2 != (longlong *)0x0) &&
         (plVar3 = (longlong *)(**(code **)(*plVar2 + 0x690))(plVar2), plVar3 != (longlong *)0x0)) {
        plVar2 = plVar3;
      }
      if (param_2 == plVar2) {
        return 1;
      }
    }
    if (param_3 == (longlong *)0x0) {
      plVar3 = (longlong *)FWeakObjectPtr::Get(lVar5);
      plVar2 = (longlong *)FWeakObjectPtr::Get(lVar5);
      if ((plVar2 != (longlong *)0x0) &&
         (plVar4 = (longlong *)(**(code **)(*plVar2 + 0x690))(plVar2), plVar4 != (longlong *)0x0)) {
        plVar2 = plVar4;
      }
      if (((plVar3 != (longlong *)0x0) &&
          (plVar4 = (longlong *)(**(code **)(*plVar3 + 0x688))(plVar3), plVar4 != (longlong *)0x0))
         && (cVar1 = (**(code **)(*plVar4 + 0x780))(plVar4), cVar1 != '\0')) {
        return 1;
      }
      if (((plVar2 != plVar3) && (plVar2 != (longlong *)0x0)) &&
         ((plVar2 = (longlong *)(**(code **)(*plVar2 + 0x688))(plVar2), plVar2 != (longlong *)0x0 &&
          (cVar1 = (**(code **)(*plVar2 + 0x780))(plVar2), cVar1 != '\0')))) {
        return 1;
      }
    }
    else {
      cVar1 = FWeakObjectPtr::IsValid();
      if (cVar1 != '\0') {
        plVar2 = (longlong *)FWeakObjectPtr::Get(lVar5);
        if (param_3 == plVar2) {
          return 1;
        }
        plVar2 = (longlong *)FWeakObjectPtr::Get(lVar5);
        if ((plVar2 != (longlong *)0x0) &&
           (plVar3 = (longlong *)(**(code **)(*plVar2 + 0x690))(plVar2), plVar3 != (longlong *)0x0))
        {
          plVar2 = plVar3;
        }
        if (param_3 == plVar2) {
          return 1;
        }
      }
    }
    lVar5 = lVar5 + 0x390;
  } while( true );
}



// FUNCTION 142dd3d20 FUN_142dd3d20 body=8 status=ok
// SIG undefined FUN_142dd3d20(void)

undefined1 FUN_142dd3d20(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x958);
}



// FUNCTION 142dd3d30 FUN_142dd3d30 body=106 status=ok
// SIG undefined FUN_142dd3d30(void)

ulonglong FUN_142dd3d30(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong in_RAX;
  uint uVar4;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar4;
      in_RAX = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
               (longlong)(int)((uVar3 & 0xffff) - uVar4) * 0x18;
    }
    else {
      in_RAX = 0;
    }
    if (((((*(uint *)(in_RAX + 8) & 0x30000000) == 0) && ((*(byte *)(lVar2 + 200) & 0x10) != 0)) &&
        (param_1[1] != 0)) && ((int)param_1[2] != -1)) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142dd3da0 FUN_142dd3da0 body=112 status=ok
// SIG undefined FUN_142dd3da0(void)

void FUN_142dd3da0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x508);
  uVar2 = (longlong)*(int *)(param_1 + 0x510) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x510) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x20))((longlong *)*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 142dd3e10 FUN_142dd3e10 body=12 status=ok
// SIG undefined FUN_142dd3e10(void)

void FUN_142dd3e10(longlong param_1)

{
  FUN_142dafbc0(param_1 + 0x198);
  return;
}



// FUNCTION 142dd3e20 FUN_142dd3e20 body=109 status=ok
// SIG undefined FUN_142dd3e20(void)

undefined1 FUN_142dd3e20(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if ((param_2 == (longlong *)0x0) || (cVar1 = FWeakObjectPtr::IsValid(), cVar1 == '\0')) {
    return 0;
  }
  plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
  if (param_2 != plVar2) {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
    if ((plVar2 != (longlong *)0x0) &&
       (plVar3 = (longlong *)(**(code **)(*plVar2 + 0x690))(plVar2), plVar3 != (longlong *)0x0)) {
      plVar2 = plVar3;
    }
    if (param_2 != plVar2) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142dd3e90 FUN_142dd3e90 body=132 status=ok
// SIG undefined FUN_142dd3e90(void)

void FUN_142dd3e90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  plVar2 = *(longlong **)(param_1 + 0x30);
  uVar3 = (longlong)*(int *)(param_1 + 0x38) & 0x1fffffffffffffff;
  if (plVar2 + *(int *)(param_1 + 0x38) < plVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x280))(plVar1,param_2,param_3);
      }
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
  return;
}



// FUNCTION 142dd3f20 FUN_142dd3f20 body=419 status=ok
// SIG undefined FUN_142dd3f20(void)

void FUN_142dd3f20(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *local_18;
  undefined8 local_10;
  
  if (((*(char *)(param_1 + 0x88) == '\0') && (*(longlong *)(param_1 + 0x28) != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x118), plVar1 != (longlong *)0x0)) {
    lVar5 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(longlong *)(param_1 + 0x28) != 0)) && (iVar4 = FUN_142340f30(), iVar4 != 3))
    {
      if (((*(uint *)((longlong)plVar1 + 0x4cc) >> 1 & 1) == 0) ||
         (cVar3 = (**(code **)(*plVar1 + 0x768))(plVar1), cVar3 == '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        return;
      }
    }
  }
  puVar6 = (undefined8 *)0x0;
  iVar4 = 0;
  puVar8 = (undefined8 *)0x0;
  local_18 = (undefined8 *)0x0;
  local_10 = 0;
  puVar9 = puVar6;
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     ((puVar9 = puVar8, *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x120) != 0 ||
      (lVar5 = FUN_1423407b0(), lVar5 != 0)))) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0();
    }
    lVar5 = UWorld::GetGameState<APVPGameState>(lVar5);
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x540) != 0)) {
      TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
      ::MultiFind<FDefaultAllocator>
                (*(longlong *)(lVar5 + 0x540) + 0x4a8,*(undefined8 *)(param_1 + 0x10),&local_18,0);
      puVar9 = local_18;
      iVar4 = (int)local_10;
    }
  }
  puVar8 = (undefined8 *)((ulonglong)((longlong)(puVar9 + iVar4) + (7 - (longlong)puVar9)) >> 3);
  if (puVar9 + iVar4 < puVar9) {
    puVar8 = puVar6;
  }
  puVar7 = puVar9;
  if (puVar8 != (undefined8 *)0x0) {
    do {
      (**(code **)(*(longlong *)*puVar7 + 0x900))
                ((longlong *)*puVar7,*(undefined8 *)(param_1 + 0x28));
      puVar6 = (undefined8 *)((longlong)puVar6 + 1);
      puVar7 = puVar7 + 1;
    } while (puVar6 != puVar8);
  }
  if (puVar9 != (undefined8 *)0x0) {
    FMemory::Free(puVar9);
  }
  return;
}



// FUNCTION 142dd40d0 FUN_142dd40d0 body=430 status=ok
// SIG undefined FUN_142dd40d0(void)

void FUN_142dd40d0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if ((int)param_1[0x21] < 1) {
    return;
  }
  if ((*(char *)((longlong)param_1 + 0x112) != '\0') && (param_1[5] != 0)) {
    FUN_142dd1580(param_1[5],param_1[2],1);
  }
  cVar5 = (char)param_1[0x22];
  if (((cVar5 != '\0') || (*(char *)((longlong)param_1 + 0x111) != '\0')) && (param_1[5] != 0)) {
    plVar8 = (longlong *)param_1[0x20];
    plVar1 = plVar8 + (int)param_1[0x21];
    if (plVar8 != plVar1) {
LAB_142dd4160:
      lVar7 = *plVar8;
      if (lVar7 != 0) {
        lVar2 = FUN_142dfdfe0();
        lVar4 = lVar7;
        do {
          if (lVar4 == lVar2) {
            lVar2 = FUN_142dfdfe0();
            lVar4 = lVar7;
            goto LAB_142dd4190;
          }
          lVar4 = *(longlong *)(lVar4 + 0x30);
        } while (lVar4 != 0);
      }
      goto LAB_142dd4221;
    }
  }
LAB_142dd4236:
  if (cVar5 != '\0') {
    (**(code **)(*param_1 + 0x288))(param_1);
  }
  if ((*(char *)((longlong)param_1 + 0x111) != '\0') && (param_1[5] != 0)) {
    FUN_142dc3e20(param_1[5],param_1[2]);
  }
  return;
  while (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0) {
LAB_142dd4190:
    lVar6 = lVar7;
    if (lVar4 == lVar2) goto LAB_142dd41a5;
  }
  lVar6 = 0;
LAB_142dd41a5:
  if (param_2 != 0) {
    lVar2 = FUN_142dfdfe0();
    lVar4 = param_2;
    do {
      lVar3 = param_2;
      if (lVar4 == lVar2) goto LAB_142dd41c2;
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  lVar3 = 0;
LAB_142dd41c2:
  if (lVar6 != lVar3) {
    lVar2 = FUN_142dfdfe0();
    lVar4 = lVar7;
    do {
      if (lVar4 == lVar2) goto LAB_142dd41e0;
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
    lVar7 = 0;
LAB_142dd41e0:
    lVar4 = *(longlong *)(param_1[5] + 0x1c8);
    lVar2 = (longlong)*(int *)(param_1[5] + 0x1d0) * 0x80 + lVar4;
    while( true ) {
      if (lVar4 == lVar2) {
        return;
      }
      if (*(longlong *)(lVar4 + 8) == lVar7) break;
      lVar4 = lVar4 + 0x80;
    }
    if (lVar4 == 0) {
      return;
    }
    if (*(char *)(lVar4 + 0x51) == '\0') {
      return;
    }
  }
LAB_142dd4221:
  plVar8 = plVar8 + 1;
  if (plVar8 == plVar1) goto code_r0x000142dd422e;
  goto LAB_142dd4160;
code_r0x000142dd422e:
  cVar5 = (char)param_1[0x22];
  goto LAB_142dd4236;
}



// FUNCTION 142dd4280 FUN_142dd4280 body=584 status=ok
// SIG undefined FUN_142dd4280(void)

void FUN_142dd4280(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_28;
  int local_20;
  undefined4 local_1c;
  
  plVar9 = (longlong *)0x0;
  if (((((*(char *)(param_1 + 0x88) == '\0') && (param_2 != (longlong *)0x0)) &&
       (*(longlong *)(param_1 + 0x28) != 0)) && (iVar2 = FUN_142340f30(), iVar2 != 3)) &&
     (((*(uint *)((longlong)param_2 + 0x4cc) >> 1 & 1) == 0 ||
      (cVar1 = (**(code **)(*param_2 + 0x768))(param_2), cVar1 == '\0')))) goto LAB_142dd43ce;
  lVar4 = *(longlong *)(param_1 + 0x28);
  iVar2 = 0;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_1c = 0;
  plVar10 = plVar9;
  if (lVar4 != 0) {
    if (*(longlong *)(lVar4 + 0x120) == 0) {
      lVar3 = FUN_1423407b0();
      lVar4 = *(longlong *)(param_1 + 0x28);
      if (lVar3 == 0) goto LAB_142dd436d;
    }
    lVar4 = *(longlong *)(lVar4 + 0x120);
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0();
    }
    lVar4 = UWorld::GetGameState<APVPGameState>(lVar4);
    plVar10 = (longlong *)0x0;
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x540) != 0)) {
      TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
      ::MultiFind<FDefaultAllocator>
                (*(longlong *)(lVar4 + 0x540) + 0x4a8,*(undefined8 *)(param_1 + 0x10),&local_28,0);
      plVar10 = local_28;
      iVar2 = local_20;
    }
  }
LAB_142dd436d:
  plVar8 = (longlong *)((ulonglong)((longlong)(plVar10 + iVar2) + (7 - (longlong)plVar10)) >> 3);
  if (plVar10 + iVar2 < plVar10) {
    plVar8 = plVar9;
  }
  plVar7 = plVar9;
  plVar6 = plVar10;
  if (plVar8 != (longlong *)0x0) {
    do {
      (**(code **)(*(longlong *)*plVar6 + 0x908))
                ((longlong *)*plVar6,*(undefined8 *)(param_1 + 0x28));
      plVar7 = (longlong *)((longlong)plVar7 + 1);
      plVar6 = plVar6 + 1;
    } while (plVar7 != plVar8);
  }
  if (plVar10 != (longlong *)0x0) {
    FMemory::Free(plVar10);
  }
LAB_142dd43ce:
  if ((*(longlong *)(param_1 + 0x28) != 0) && (iVar2 = FUN_142340f30(), iVar2 != 3)) {
    FUN_142dfdac0(param_1,param_2);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x30);
    plVar10 = plVar8 + *(int *)(param_1 + 0x38);
    for (; plVar8 != plVar10; plVar8 = plVar8 + 1) {
      plVar7 = plVar9;
      if (*plVar8 != 0) {
        plVar5 = (longlong *)FUN_142dfdfe0();
        for (plVar6 = (longlong *)*plVar8;
            (plVar7 = plVar9, plVar6 != (longlong *)0x0 &&
            (plVar7 = (longlong *)*plVar8, plVar6 != plVar5)); plVar6 = (longlong *)plVar6[6]) {
        }
      }
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x1c8);
      lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x1d0) * 0x80 + lVar4;
      for (; lVar4 != lVar3; lVar4 = lVar4 + 0x80) {
        if (*(longlong **)(lVar4 + 8) == plVar7) {
          if (lVar4 != 0) {
            plVar6 = (longlong *)FUN_142dcdb70();
            goto LAB_142dd4487;
          }
          break;
        }
      }
      if (plVar7 != (longlong *)0x0) {
        plVar6 = (longlong *)plVar7[0x1f];
        if (plVar6 == (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x368))(plVar7);
          plVar6 = (longlong *)plVar7[0x1f];
LAB_142dd4487:
          if (plVar6 == (longlong *)0x0) goto LAB_142dd4499;
        }
        (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(param_1 + 0x10));
      }
LAB_142dd4499:
    }
  }
  return;
}



// FUNCTION 142dd44d0 FUN_142dd44d0 body=17 status=ok
// SIG undefined FUN_142dd44d0(void)

void FUN_142dd44d0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x850);
  if (lVar4 == 0) {
    return;
  }
  FUN_142d44ce0();
  if ((param_2 != 0) && (lVar2 = *(longlong *)(param_2 + 0xf8), lVar2 != 0)) {
    plVar6 = (longlong *)(lVar4 + 0x348);
    plVar3 = (longlong *)*plVar6;
    iVar1 = *(int *)(lVar4 + 0x350);
    for (plVar5 = plVar3; plVar5 != plVar3 + iVar1; plVar5 = plVar5 + 1) {
      if (*plVar5 == lVar2) {
        if ((int)((longlong)plVar5 - (longlong)plVar3 >> 3) != -1) {
          return;
        }
        break;
      }
    }
    *(int *)(lVar4 + 0x350) = iVar1 + 1;
    if (*(int *)(lVar4 + 0x354) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6);
    }
    *(longlong *)((longlong)iVar1 * 8 + *plVar6) = lVar2;
  }
  return;
}



// FUNCTION 142dd4510 FUN_142dd4510 body=177 status=ok
// SIG undefined FUN_142dd4510(void)

void FUN_142dd4510(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((lVar1 != 0) && (param_2 != (longlong *)0x0)) {
    lVar3 = *(longlong *)(lVar1 + 0x1c8);
    lVar2 = (longlong)*(int *)(lVar1 + 0x1d0) * 0x80 + lVar3;
    for (lVar4 = lVar3; lVar4 != lVar2; lVar4 = lVar4 + 0x80) {
      if (*(longlong *)(lVar4 + 8) == *(longlong *)(param_1 + 0x10)) {
        if (((lVar4 != 0) && (*(char *)(lVar4 + 0x50) != '\0')) && (*(char *)(lVar4 + 0x7a) != '\0')
           ) goto joined_r0x000142dd457a;
        break;
      }
    }
  }
LAB_142dd45ac:
  FUN_142dfe220(param_1,param_2);
  return;
joined_r0x000142dd457a:
  if (lVar3 == lVar2) goto LAB_142dd459d;
  if (*(longlong *)(lVar3 + 8) == *(longlong *)(param_1 + 0x10)) {
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x51) != '\0')) goto LAB_142dd45ac;
    goto LAB_142dd459d;
  }
  lVar3 = lVar3 + 0x80;
  goto joined_r0x000142dd457a;
LAB_142dd459d:
  (**(code **)(*param_2 + 0x900))(param_2,lVar1);
  goto LAB_142dd45ac;
}



// FUNCTION 142dd45d0 FUN_142dd45d0 body=21 status=ok
// SIG undefined FUN_142dd45d0(void)

void FUN_142dd45d0(undefined1 *param_1)

{
  DAT_1466ad960 = *param_1;
  DAT_1466ad968 = *(undefined8 *)(param_1 + 8);
  return;
}



// FUNCTION 142dd45f0 FUN_142dd45f0 body=21 status=ok
// SIG undefined FUN_142dd45f0(void)

void FUN_142dd45f0(undefined1 *param_1)

{
  DAT_1466ad920 = *param_1;
  DAT_1466ad928 = *(undefined8 *)(param_1 + 8);
  return;
}



// FUNCTION 142dd4610 FUN_142dd4610 body=158 status=ok
// SIG undefined FUN_142dd4610(void)

void FUN_142dd4610(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      lVar1 = UObject::GetPrivateStaticClass();
      lVar4 = *(longlong *)(param_2 + 0x30);
      for (lVar3 = lVar4; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar1) goto LAB_142dd4656;
      }
    }
    lVar4 = 0;
LAB_142dd4656:
    lVar3 = param_1[0xf2];
    if (lVar3 != 0) {
      lVar2 = FUN_1428dfc70();
      lVar1 = lVar3;
      do {
        if (lVar1 == lVar2) goto LAB_142dd4680;
        lVar1 = *(longlong *)(lVar1 + 0x30);
      } while (lVar1 != 0);
    }
    lVar3 = 0;
LAB_142dd4680:
    if (lVar4 == lVar3) {
      (**(code **)(param_1[0xe0] + 0x10))();
      (**(code **)(*param_1 + 0x8f0))(param_1);
    }
  }
  return;
}



// FUNCTION 142dd46b0 FUN_142dd46b0 body=32 status=ok
// SIG undefined FUN_142dd46b0(void)

void FUN_142dd46b0(longlong *param_1)

{
  FUN_142393140();
                    /* WARNING: Could not recover jumptable at 0x000142dd46c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8f8))(param_1);
  return;
}



// FUNCTION 142dd46d0 FUN_142dd46d0 body=54 status=ok
// SIG undefined FUN_142dd46d0(void)

void FUN_142dd46d0(void)

{
  FUN_142ddb980(0,0,0,0,0,0);
  return;
}



// FUNCTION 142dd4710 FUN_142dd4710 body=394 status=ok
// SIG undefined FUN_142dd4710(void)

void FUN_142dd4710(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  
  lVar9 = FWeakObjectPtr::Get(param_2 + 8);
  if (lVar9 == 0) {
    cVar6 = '\0';
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x61) = 1;
    lVar10 = param_1[5];
    lVar11 = (longlong)(int)param_1[6] * 0x1c + lVar10;
    for (; lVar10 != lVar11; lVar10 = lVar10 + 0x1c) {
      cVar6 = FUN_14058c1e0(lVar10,lVar9);
      if (cVar6 != '\0') {
        *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
        cVar6 = *(char *)(lVar10 + 0x10);
        goto LAB_142dd481c;
      }
    }
    cVar6 = (char)param_1[0xd];
    if (cVar6 == '\0') {
      cVar6 = '\x01';
    }
    *(char *)(param_1 + 0xd) = cVar6 + '\x01';
    iVar1 = (int)param_1[6];
    *(int *)(param_1 + 6) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0x34) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 5,iVar1);
    }
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)(param_2 + 0x14);
    uVar4 = *(undefined4 *)(param_2 + 8);
    puVar12 = (undefined4 *)((longlong)iVar1 * 0x1c + param_1[5]);
    puVar12[1] = *(undefined4 *)(param_2 + 0xc);
    *puVar12 = uVar4;
    puVar12[2] = uVar2;
    puVar12[3] = uVar3;
    *(char *)(puVar12 + 4) = cVar6;
    puVar12[5] = 1;
    *(undefined2 *)(puVar12 + 6) = 0;
    cVar7 = FWeakObjectPtr::IsValid(puVar12);
    *(byte *)(puVar12 + 6) = *(byte *)(puVar12 + 6) | cVar7 != '\0';
    cVar7 = FWeakObjectPtr::IsValid();
    *(byte *)(puVar12 + 6) = *(byte *)(puVar12 + 6) | -(cVar7 != '\0') & 2U;
  }
LAB_142dd481c:
  *(char *)(param_2 + 0x41) = cVar6;
  uVar8 = FUN_142dc4290(param_1,param_2);
  *(undefined1 *)(param_2 + 0x40) = uVar8;
  plVar5 = (longlong *)*param_1;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x400))(plVar5,param_1,param_2);
    lVar9 = *param_1;
    if (((lVar9 != 0) && (*(char *)(lVar9 + 400) != '\0')) &&
       (plVar5 = (longlong *)param_1[1], plVar5 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000142dd488b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x288))(plVar5,lVar9,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 142dd48a0 FUN_142dd48a0 body=375 status=ok
// SIG undefined FUN_142dd48a0(void)

void FUN_142dd48a0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  char *pcVar5;
  void *_Dst;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if ((*(char *)(param_2 + 0x41) != '\0') && (iVar8 = (int)param_1[6] + -1, -1 < iVar8)) {
    lVar7 = (longlong)iVar8;
    pcVar5 = (char *)(param_1[5] + 0x10 + lVar7 * 0x1c);
    do {
      if (*pcVar5 == *(char *)(param_2 + 0x41)) {
        piVar1 = (int *)((longlong)iVar8 * 0x1c + 0x14 + param_1[5]);
        *piVar1 = *piVar1 + -1;
        _Dst = (void *)((longlong)iVar8 * 0x1c + param_1[5]);
        if (*(int *)((longlong)_Dst + 0x14) < 1) {
          iVar2 = (int)param_1[6];
          iVar4 = (iVar2 - iVar8) + -1;
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (_Dst,(void *)((longlong)(iVar8 + 1) * 0x1c + param_1[5]),
                       (longlong)iVar4 * 0x1c);
            iVar2 = (int)param_1[6];
          }
          *(int *)(param_1 + 6) = iVar2 + -1;
          TArray<FLazyObjectPtr,FDefaultAllocator>::ResizeShrink(param_1 + 5);
        }
        *(undefined1 *)((longlong)param_1 + 0x61) = 1;
        break;
      }
      iVar8 = iVar8 + -1;
      pcVar5 = pcVar5 + -0x1c;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  if ((((param_1[1] != 0) && (*(char *)(param_1[1] + 0x48) != '\0')) && (param_1[2] != 0)) &&
     (iVar8 = (int)param_1[8] + -1, -1 < iVar8)) {
    lVar7 = param_1[7];
    lVar6 = (longlong)iVar8;
    pcVar5 = (char *)(lVar7 + 0x1b8 + lVar6 * 0x1c0);
    do {
      if (*pcVar5 == *(char *)(param_2 + 0x40)) {
        *(float *)((longlong)iVar8 * 0x1c0 + 0x1b0 + lVar7) =
             *(float *)((longlong)iVar8 * 0x1c0 + 0x1b0 + lVar7) - *(float *)(param_2 + 0x30);
        break;
      }
      iVar8 = iVar8 + -1;
      pcVar5 = pcVar5 + -0x1c0;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x408))(plVar3,param_1,param_2);
    lVar7 = *param_1;
    if (((lVar7 != 0) && (*(char *)(lVar7 + 400) != '\0')) &&
       (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x290))(plVar3,lVar7,param_2);
    }
  }
  return;
}



// FUNCTION 142dd4a20 FUN_142dd4a20 body=32 status=ok
// SIG undefined FUN_142dd4a20(void)

void FUN_142dd4a20(longlong *param_1)

{
  FUN_1423937b0();
                    /* WARNING: Could not recover jumptable at 0x000142dd4a39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8f0))(param_1);
  return;
}



// FUNCTION 142dd4a40 FUN_142dd4a40 body=306 status=ok
// SIG undefined FUN_142dd4a40(void)

void FUN_142dd4a40(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  FUN_142343b00();
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    uVar3 = FUN_142232850();
    FUN_14247c340(param_1 + 0x140,uVar3);
  }
  plVar2 = *(longlong **)(param_1 + 0x118);
  if (plVar2 != (longlong *)0x0) {
    *(longlong **)(param_1 + 0x1a8) = plVar2;
    uVar4 = UScrollBox::GetPrivateStaticClass();
    lVar5 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar4);
    if (lVar5 != 0) {
      plVar2 = (longlong *)(lVar5 + 0x268);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        *(undefined4 *)(plVar6 + 2) = 0x42dc6f20;
        *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
        *(undefined4 *)(plVar6 + 3) = 0;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_c;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar7;
        *plVar6 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
        (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
        iVar1 = *(int *)(lVar5 + 0x270);
        *(int *)(lVar5 + 0x270) = iVar1 + 1;
        if (*(int *)(lVar5 + 0x274) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
        }
        puVar8 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar2);
        *puVar8 = plVar6;
        *(undefined4 *)(puVar8 + 1) = 3;
      }
    }
  }
  return;
}



// FUNCTION 142dd4b90 FUN_142dd4b90 body=38 status=ok
// SIG undefined FUN_142dd4b90(void)

void FUN_142dd4b90(longlong param_1)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *(undefined8 *)(param_1 + 0x848);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x8c0,local_res8);
  return;
}



// FUNCTION 142dd4bc0 FUN_142dd4bc0 body=62 status=ok
// SIG undefined FUN_142dd4bc0(void)

void FUN_142dd4bc0(longlong param_1)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_38 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_30 = *(undefined8 *)(param_1 + 0x1f0);
  local_28 = *(undefined4 *)(param_1 + 0x1f8);
  uStack_24 = *(undefined4 *)(param_1 + 0x1fc);
  uStack_20 = *(undefined4 *)(param_1 + 0x200);
  uStack_1c = *(undefined4 *)(param_1 + 0x204);
  local_18 = *(undefined4 *)(param_1 + 0x208);
  uStack_14 = *(undefined4 *)(param_1 + 0x20c);
  uStack_10 = *(undefined4 *)(param_1 + 0x210);
  uStack_c = *(undefined4 *)(param_1 + 0x214);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x180,&local_38);
  return;
}



// FUNCTION 142dd4c10 thunk_FUN_142dd4c20 body=5 status=ok
// SIG undefined thunk_FUN_142dd4c20(void)

void thunk_FUN_142dd4c20(longlong param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lStackX_10;
  longlong *plStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  longlong lStack_78;
  longlong lStack_68;
  
  if (param_2 != (longlong *)0x0) {
    uVar7 = FUN_142e035e0();
    plVar8 = (longlong *)(**(code **)(*param_2 + 0x628))(param_2,uVar7);
    uVar7 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
    lVar9 = (**(code **)(*param_2 + 0x628))(param_2,uVar7);
    if ((plVar8 != (longlong *)0x0) && (lVar9 != 0)) {
      plStack_90 = (longlong *)0x0;
      uStack_88 = 0;
      TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
      ::MultiFind<FDefaultAllocator>(param_1 + 0x458,param_3,&plStack_90,0);
      plVar1 = plStack_90 + (int)uStack_88;
      for (plVar11 = plStack_90; plVar11 != plVar1; plVar11 = plVar11 + 1) {
        lVar16 = plVar8[0x39];
        lVar12 = (longlong)(int)plVar8[0x3a] * 0x80 + lVar16;
        for (; lVar16 != lVar12; lVar16 = lVar16 + 0x80) {
          if (*(longlong *)(lVar16 + 8) == *plVar11) {
            if ((((lVar16 != 0) && (cVar3 = FUN_142dd33a0(lVar16), cVar3 == '\0')) &&
                (cVar3 = FUN_142dd0e80(lVar16,lVar9,param_3,param_4), cVar3 != '\0')) &&
               (iVar4 = FUN_142235230(param_1), iVar4 != 3)) {
              iVar4 = FUN_142dce930(lVar16,param_3,0);
              lVar12 = FUN_142dcdb70(lVar16);
              if (lVar12 != 0) {
                lVar15 = *(longlong *)(lVar12 + 0xa0);
                lVar12 = (longlong)*(int *)(lVar12 + 0xa8) * 0x30 + lVar15;
                goto joined_r0x000142dd4dba;
              }
            }
            break;
          }
        }
LAB_142dd4eca:
      }
      if (plStack_90 != (longlong *)0x0) {
        FMemory::Free(plStack_90);
      }
    }
  }
  return;
joined_r0x000142dd4dba:
  if (lVar15 == lVar12) goto LAB_142dd4eca;
  FUN_142dc19e0(auStack_80,lVar15);
  lVar2 = *(longlong *)(lVar16 + 8);
  lVar10 = FUN_142dcdc10(plVar8,lVar2);
  lVar14 = plVar8[0x39];
  lVar13 = (longlong)(int)plVar8[0x3a] * 0x80 + lVar14;
  for (; lVar14 != lVar13; lVar14 = lVar14 + 0x80) {
    if (*(longlong *)(lVar14 + 8) == lVar2) goto LAB_142dd4e07;
  }
  lVar14 = 0;
LAB_142dd4e07:
  if (*(char *)(lVar10 + 0x98) == '\0') {
    lStackX_10 = 0;
    if (lVar14 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_142dce930(lVar14,param_3,&lStackX_10);
    }
    lVar2 = lStackX_10;
    if (lVar14 == 0) {
      iVar6 = 0;
LAB_142dd4e62:
      if (((lVar2 == 0) || ((float)iVar5 < (float)iVar6)) || (iVar6 <= iVar4 - param_4))
      goto LAB_142dd4e8b;
    }
    else {
      iVar6 = FUN_142dcfe80(lVar14,param_3);
      if (iVar6 != -1) goto LAB_142dd4e62;
    }
    (**(code **)(*plVar8 + 0x410))(plVar8,*(undefined8 *)(lVar16 + 8),0);
  }
LAB_142dd4e8b:
  if (lStack_68 != 0) {
    FMemory::Free();
  }
  if (lStack_78 != 0) {
    FMemory::Free();
  }
  lVar15 = lVar15 + 0x30;
  goto joined_r0x000142dd4dba;
}



// FUNCTION 142dd4c20 FUN_142dd4c20 body=778 status=ok
// SIG undefined FUN_142dd4c20(void)

void FUN_142dd4c20(longlong param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong local_res10;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  longlong local_78;
  longlong local_68;
  
  if (param_2 != (longlong *)0x0) {
    uVar7 = FUN_142e035e0();
    plVar8 = (longlong *)(**(code **)(*param_2 + 0x628))(param_2,uVar7);
    uVar7 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
    lVar9 = (**(code **)(*param_2 + 0x628))(param_2,uVar7);
    if ((plVar8 != (longlong *)0x0) && (lVar9 != 0)) {
      local_90 = (longlong *)0x0;
      local_88 = 0;
      TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
      ::MultiFind<FDefaultAllocator>(param_1 + 0x458,param_3,&local_90,0);
      plVar1 = local_90 + (int)local_88;
      for (plVar11 = local_90; plVar11 != plVar1; plVar11 = plVar11 + 1) {
        lVar16 = plVar8[0x39];
        lVar12 = (longlong)(int)plVar8[0x3a] * 0x80 + lVar16;
        for (; lVar16 != lVar12; lVar16 = lVar16 + 0x80) {
          if (*(longlong *)(lVar16 + 8) == *plVar11) {
            if ((((lVar16 != 0) && (cVar3 = FUN_142dd33a0(lVar16), cVar3 == '\0')) &&
                (cVar3 = FUN_142dd0e80(lVar16,lVar9,param_3,param_4), cVar3 != '\0')) &&
               (iVar4 = FUN_142235230(param_1), iVar4 != 3)) {
              iVar4 = FUN_142dce930(lVar16,param_3,0);
              lVar12 = FUN_142dcdb70(lVar16);
              if (lVar12 != 0) {
                lVar15 = *(longlong *)(lVar12 + 0xa0);
                lVar12 = (longlong)*(int *)(lVar12 + 0xa8) * 0x30 + lVar15;
                goto joined_r0x000142dd4dba;
              }
            }
            break;
          }
        }
LAB_142dd4eca:
      }
      if (local_90 != (longlong *)0x0) {
        FMemory::Free(local_90);
      }
    }
  }
  return;
joined_r0x000142dd4dba:
  if (lVar15 == lVar12) goto LAB_142dd4eca;
  FUN_142dc19e0(local_80,lVar15);
  lVar2 = *(longlong *)(lVar16 + 8);
  lVar10 = FUN_142dcdc10(plVar8,lVar2);
  lVar14 = plVar8[0x39];
  lVar13 = (longlong)(int)plVar8[0x3a] * 0x80 + lVar14;
  for (; lVar14 != lVar13; lVar14 = lVar14 + 0x80) {
    if (*(longlong *)(lVar14 + 8) == lVar2) goto LAB_142dd4e07;
  }
  lVar14 = 0;
LAB_142dd4e07:
  if (*(char *)(lVar10 + 0x98) == '\0') {
    local_res10 = 0;
    if (lVar14 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_142dce930(lVar14,param_3,&local_res10);
    }
    lVar2 = local_res10;
    if (lVar14 == 0) {
      iVar6 = 0;
LAB_142dd4e62:
      if (((lVar2 == 0) || ((float)iVar5 < (float)iVar6)) || (iVar6 <= iVar4 - param_4))
      goto LAB_142dd4e8b;
    }
    else {
      iVar6 = FUN_142dcfe80(lVar14,param_3);
      if (iVar6 != -1) goto LAB_142dd4e62;
    }
    (**(code **)(*plVar8 + 0x410))(plVar8,*(undefined8 *)(lVar16 + 8),0);
  }
LAB_142dd4e8b:
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  lVar15 = lVar15 + 0x30;
  goto joined_r0x000142dd4dba;
}



// FUNCTION 142dd4f50 FUN_142dd4f50 body=349 status=ok
// SIG undefined FUN_142dd4f50(void)

void FUN_142dd4f50(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong local_res18 [2];
  
  if (DAT_146b17150 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    lVar5 = FUN_1428761d0(DAT_146b17150,lVar5);
    if (lVar5 != 0) {
      FUN_142de0fd0(param_1);
      FUN_142dde120(param_1,param_2);
      bVar2 = false;
      *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
      iVar8 = *(int *)(param_1 + 0x22c);
      iVar4 = *(int *)(param_1 + 0x220) + -1;
      lVar5 = (longlong)iVar4;
      if (-1 < iVar4) {
        lVar9 = lVar5 << 4;
        bVar2 = false;
        do {
          lVar1 = *(longlong *)(param_1 + 0x218);
          if ((*(int *)(lVar9 + 8 + lVar1) == 0) ||
             (plVar6 = *(longlong **)(lVar9 + lVar1), plVar6 == (longlong *)0x0)) {
LAB_142dd5000:
            bVar2 = true;
          }
          else {
            cVar3 = (**(code **)(*plVar6 + 0x40))(plVar6,param_1);
            if (cVar3 == '\0') goto LAB_142dd5000;
          }
          lVar9 = lVar9 + -0x10;
          lVar5 = lVar5 + -1;
        } while (-1 < lVar5);
        iVar8 = *(int *)(param_1 + 0x22c);
      }
      *(int *)(param_1 + 0x22c) = iVar8 + -1;
      if (bVar2) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                  ((longlong *)(param_1 + 0x218),0);
      }
      local_res18[0] = param_1;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x230,local_res18);
      plVar6 = (longlong *)0x0;
      if (0 < *(int *)(param_1 + 0x7540)) {
        lVar5 = *(longlong *)(param_1 + 0x7538);
        if (*(longlong *)(param_1 + 0x7538) == 0) {
          lVar5 = param_1 + 0x338;
        }
        plVar6 = (longlong *)FWeakObjectPtr::Get(lVar5);
        if (plVar6 != (longlong *)0x0) {
          plVar7 = (longlong *)(**(code **)(*plVar6 + 0x690))(plVar6);
          if (plVar7 != (longlong *)0x0) {
            plVar6 = plVar7;
          }
        }
      }
      FUN_142c88190(param_1 + 0x178,plVar6);
      return;
    }
  }
  return;
}



// FUNCTION 142dd50b0 FUN_142dd50b0 body=1593 status=ok
// SIG undefined FUN_142dd50b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142dd50b0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  longlong *plVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_c8 [32];
  char local_a8;
  uint local_a4;
  longlong *local_a0;
  longlong local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar3 = param_1 + 0x67;
  plVar13 = param_1 + 0xea9;
  uVar18 = 0;
  uVar20 = 0;
  local_a0 = param_2;
  if (plVar13 != plVar3) {
    iVar4 = (int)param_1[0xea8];
    plVar12 = (longlong *)param_1[0xea7];
    *(int *)(param_1 + 0x1cea) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0xe754) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xe754) = 0;
    }
    else {
      FUN_140a13060(plVar13,iVar4);
      if (plVar12 == (longlong *)0x0) {
        plVar12 = plVar3;
      }
      plVar16 = (longlong *)param_1[0x1ce9];
      if ((longlong *)param_1[0x1ce9] == (longlong *)0x0) {
        plVar16 = plVar13;
      }
      if (iVar4 != 0) {
        lVar5 = (longlong)plVar16 - (longlong)plVar12;
        do {
          FUN_140726d20(lVar5 + (longlong)plVar12,plVar12);
          plVar12 = plVar12 + 0x72;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  plVar12 = (longlong *)param_2[1];
  plVar13 = param_1 + 0x1cee;
  lVar5 = *param_2;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_98 = lVar5;
  plStack_90 = plVar12;
  if (&local_98 != plVar13) {
    local_98 = *plVar13;
    plStack_90 = (longlong *)param_1[0x1cef];
    *plVar13 = lVar5;
    param_1[0x1cef] = (longlong)plVar12;
    local_58 = lVar5;
    plStack_50 = plVar12;
  }
  plVar13 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_90 + 1;
    lVar5 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0x28) == 3)) {
    lVar5 = param_1[0xea8];
    if (0 < (int)lVar5) {
      *(undefined4 *)(param_1 + 0xea8) = 0;
      if ((*(int *)((longlong)param_1 + 0x7544) < 0) && (*(int *)((longlong)param_1 + 0x7544) != 0))
      {
        FUN_142dd9f30(plVar3,0);
      }
      (**(code **)(*param_1 + 0x408))(param_1,(int)lVar5);
    }
  }
  else {
    lVar5 = FUN_142dc6f30(param_1);
    plVar13 = (longlong *)*param_2;
    if (*(uint *)(plVar13 + 1) != 0) {
      uVar14 = uVar18;
      uVar8 = uVar18;
      do {
        uVar20 = (uint)uVar8 + 1;
        if (*(int *)(*plVar13 + 4 + (longlong)(int)uVar14 * 0xc) < 0) {
          uVar20 = (uint)uVar8;
        }
        uVar19 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar19;
        uVar8 = (ulonglong)uVar20;
      } while (uVar19 < *(uint *)(plVar13 + 1));
    }
    local_78 = lVar5;
    if (plVar13[2] != 0) {
      lVar6 = UEnvQueryItemType::GetPrivateStaticClass();
      for (lVar9 = plVar13[2]; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
        if (lVar9 == lVar6) {
          if ((plVar13[2] != 0) && (uVar20 != 0)) {
            lVar9 = *param_2;
            local_80 = *(longlong *)(lVar9 + 0x18);
            uVar14 = uVar18;
            if (*(longlong *)(lVar9 + 0x10) == 0) goto LAB_142dd5371;
            uVar7 = UEnvQueryItemType::GetPrivateStaticClass();
            uVar8 = *(ulonglong *)(lVar9 + 0x10);
            uVar11 = uVar8;
            if (uVar8 == 0) goto LAB_142dd5371;
            goto LAB_142dd5360;
          }
          break;
        }
      }
    }
    lVar9 = param_1[0xea8];
    if (0 < (int)lVar9) {
      *(undefined4 *)(param_1 + 0xea8) = 0;
      if ((*(int *)((longlong)param_1 + 0x7544) < 0) && (*(int *)((longlong)param_1 + 0x7544) != 0))
      {
        FUN_142dd9f30(plVar3,0);
      }
      iVar4 = FUN_14233f450(param_1);
      if (iVar4 != 3) {
        FUN_142e7adb0(param_1,0);
      }
      (**(code **)(*param_1 + 0x408))(param_1,(int)lVar9);
    }
    lVar9 = local_78;
    if (lVar5 != 0) {
      lVar5 = param_1[0x65];
      lVar6 = (longlong)(int)param_1[0x66] * 0x10 + lVar5;
      for (; lVar5 != lVar6; lVar5 = lVar5 + 0x10) {
        FUN_142cbcc90(lVar5,lVar9);
        param_2 = local_a0;
      }
    }
    *(undefined4 *)(param_1 + 100) = 0xffffffff;
  }
  goto LAB_142dd568b;
  while (puVar2 = (ulonglong *)(uVar11 + 0x30), uVar11 = *puVar2, uVar14 = uVar18, *puVar2 != 0) {
LAB_142dd5360:
    uVar14 = uVar8;
    if (uVar11 == uVar7) break;
  }
LAB_142dd5371:
  uVar8 = FUN_142e107c0();
  for (; uVar14 != 0; uVar14 = *(ulonglong *)(uVar14 + 0x30)) {
    if (uVar14 == uVar8) {
      uVar19 = *(uint *)(param_1 + 0xea8);
      local_70 = 0;
      if (0 < (int)uVar19) {
        plVar13 = (longlong *)param_1[0xea7];
        if ((longlong *)param_1[0xea7] == (longlong *)0x0) {
          plVar13 = plVar3;
        }
        local_70 = FWeakObjectPtr::Get(plVar13);
        uVar19 = *(uint *)(param_1 + 0xea8);
      }
      local_a8 = '\0';
      if (uVar19 == uVar20) {
        lVar5 = *(longlong *)*param_2;
        local_88 = lVar5 + (longlong)(int)((longlong *)*param_2)[1] * 0xc;
        uVar14 = uVar18;
        if (lVar5 == local_88) goto LAB_142dd5475;
        goto LAB_142dd5400;
      }
      local_a8 = '\x01';
      goto LAB_142dd547a;
    }
  }
  goto LAB_142dd5600;
LAB_142dd5400:
  do {
    if (-1 < *(int *)(lVar5 + 4)) {
      plVar13 = (longlong *)param_1[0xea7];
      local_a4 = (int)uVar14 + 1;
      uVar10 = FArchive::operator<<(((longlong)(*(int *)(lVar5 + 4) * 2) >> 1) + local_80);
      if (plVar13 == (longlong *)0x0) {
        plVar13 = plVar3;
      }
      lVar9 = FWeakObjectPtr::Get(plVar13 + (longlong)(int)uVar14 * 0x72);
      lVar6 = FWeakObjectPtr::Get(uVar10);
      if (lVar9 != lVar6) {
        local_a8 = '\x01';
        break;
      }
      uVar14 = (ulonglong)local_a4;
    }
    lVar5 = lVar5 + 0xc;
  } while (lVar5 != local_88);
LAB_142dd5475:
  param_2 = local_a0;
LAB_142dd547a:
  lVar5 = param_1[0xea8];
  *(undefined4 *)(param_1 + 0xea8) = 0;
  local_88 = CONCAT44(local_88._4_4_,(int)lVar5);
  if (*(int *)((longlong)param_1 + 0x7544) < (int)uVar20) {
    FUN_142dd9f30(plVar3,uVar20);
  }
  plVar13 = local_a0;
  local_a4 = *(uint *)(*param_2 + 8);
  uVar15 = (int)lVar5;
  if (local_a4 != 0) {
    do {
      iVar17 = (int)uVar18;
      lVar5 = *(longlong *)*plVar13;
      iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar17 * 0xc);
      if (-1 < iVar4) {
        local_68 = FArchive::operator<<(((longlong)(iVar4 * 2) >> 1) + local_80);
        iVar4 = (int)param_1[0xea8];
        *(int *)(param_1 + 0xea8) = iVar4 + 1;
        if (*(int *)((longlong)param_1 + 0x7544) < iVar4 + 1) {
          FUN_142dd9e90(plVar3,iVar4);
        }
        local_60 = (longlong)iVar4 * 0x390;
        plVar12 = (longlong *)param_1[0xea7];
        if ((longlong *)param_1[0xea7] == (longlong *)0x0) {
          plVar12 = plVar3;
        }
        FUN_140726d20(plVar12 + (longlong)iVar4 * 0x72,local_68);
        if ((-1 < iVar4) && (iVar4 < (int)param_1[0xea8])) {
          plVar12 = (longlong *)param_1[0xea7];
          if ((longlong *)param_1[0xea7] == (longlong *)0x0) {
            plVar12 = plVar3;
          }
          *(undefined4 *)((longlong)plVar12 + local_60 + 0x37c) =
               *(undefined4 *)(lVar5 + (longlong)iVar17 * 0xc);
        }
      }
      uVar18 = (ulonglong)(iVar17 + 1U);
    } while (iVar17 + 1U < local_a4);
    param_2 = local_a0;
    uVar15 = (undefined4)local_88;
  }
  iVar4 = FUN_14233f450(param_1);
  if ((iVar4 != 3) && (0 < (int)param_1[0xea8])) {
    plVar13 = (longlong *)param_1[0xea7];
    if ((longlong *)param_1[0xea7] == (longlong *)0x0) {
      plVar13 = plVar3;
    }
    lVar5 = FWeakObjectPtr::Get(plVar13);
    if (lVar5 != local_70) {
      plVar13 = (longlong *)param_1[0xea7];
      if ((longlong *)param_1[0xea7] == (longlong *)0x0) {
        plVar13 = plVar3;
      }
      uVar10 = FWeakObjectPtr::Get(plVar13);
      FUN_142e7adb0(param_1,uVar10);
    }
  }
  lVar5 = local_78;
  if (local_a8 != '\0') {
    (**(code **)(*param_1 + 0x408))(param_1,uVar15);
    lVar5 = local_78;
  }
LAB_142dd5600:
  if ((int)param_1[0xea8] < 1) {
    plVar13 = (longlong *)(((longlong)(*(int *)(*(longlong *)*param_2 + 4) * 2) >> 1) + local_80);
  }
  else {
    plVar13 = (longlong *)param_1[0xea7];
    if ((longlong *)param_1[0xea7] == (longlong *)0x0) {
      plVar13 = plVar3;
    }
  }
  FUN_142ddff10(param_1,lVar5,plVar13,*(undefined8 *)(*param_2 + 0x10));
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
LAB_142dd568b:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar3 + 1;
    lVar5 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142dd56f0 FUN_142dd56f0 body=32 status=ok
// SIG undefined FUN_142dd56f0(void)

void FUN_142dd56f0(longlong *param_1)

{
  FUN_142393f60();
                    /* WARNING: Could not recover jumptable at 0x000142dd5709. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8f8))(param_1);
  return;
}



// FUNCTION 142dd5710 FUN_142dd5710 body=223 status=ok
// SIG undefined FUN_142dd5710(void)

ulonglong FUN_142dd5710(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = FUN_142ddddc0(*(undefined8 *)(param_1 + 0x118));
  if ((uVar1 == 0) || (param_2 == (longlong *)0x0)) {
    return uVar1 & 0xffffffffffffff00;
  }
  lVar4 = *(longlong *)(uVar1 + 0x7538);
  if (*(longlong *)(uVar1 + 0x7538) == 0) {
    lVar4 = uVar1 + 0x338;
  }
  plVar2 = (longlong *)(longlong)*(int *)(uVar1 + 0x7540);
  lVar5 = (longlong)plVar2 * 0x390 + lVar4;
  do {
    if (lVar4 == lVar5) {
      return (ulonglong)plVar2 & 0xffffffffffffff00;
    }
    plVar2 = (longlong *)FWeakObjectPtr::IsValid(lVar4);
    if ((char)plVar2 != '\0') {
      plVar2 = (longlong *)FWeakObjectPtr::Get(lVar4);
      if (param_2 == plVar2) {
LAB_142dd57dc:
        return (ulonglong)(*(byte *)(lVar4 + 0x38c) & 1);
      }
      plVar3 = (longlong *)FWeakObjectPtr::Get(lVar4);
      plVar2 = (longlong *)0x0;
      if ((plVar3 != (longlong *)0x0) &&
         (plVar2 = (longlong *)(**(code **)(*plVar3 + 0x690))(plVar3), plVar2 != (longlong *)0x0)) {
        plVar3 = plVar2;
      }
      if (param_2 == plVar3) goto LAB_142dd57dc;
    }
    lVar4 = lVar4 + 0x390;
  } while( true );
}



// FUNCTION 142dd57f0 FUN_142dd57f0 body=176 status=ok
// SIG undefined FUN_142dd57f0(void)

void FUN_142dd57f0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 local_res8 [4];
  
  if (param_1[0x109] != param_1[0x91]) {
    (**(code **)(*param_1 + 0x780))();
  }
  FUN_142711690(param_1);
  lVar2 = param_1[0x109];
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      FUN_142227350(lVar2,0,1);
      param_1[0x109] = 0;
      local_res8[0] = 0;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x118,local_res8);
    }
  }
  return;
}



// FUNCTION 142dd58a0 FUN_142dd58a0 body=790 status=ok
// SIG undefined FUN_142dd58a0(void)

void FUN_142dd58a0(longlong *param_1,longlong param_2,undefined8 *param_3,char param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined2 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_30 [8];
  
  if (param_2 != 0) {
    if (((((param_4 != '\0') && (cVar3 = UCameraModifier::IsDisabled(param_2), cVar3 != '\0')) ||
         (cVar3 = FUN_142d3d6b0(param_2), cVar3 != '\0')) ||
        ((*(uint *)(param_2 + 0x30) >> 3 & 1) != 0)) &&
       (lVar4 = (**(code **)(*param_1 + 0x148))(param_1), lVar4 != 0)) {
      plVar1 = param_1 + 0x129;
      plVar2 = (longlong *)*plVar1;
      for (plVar5 = plVar2; plVar5 != plVar2 + (longlong)(int)param_1[0x12a] * 0xc;
          plVar5 = plVar5 + 0xc) {
        if (*plVar5 == param_2) {
          lVar4 = ((longlong)plVar5 - (longlong)plVar2) / 6 +
                  ((longlong)plVar5 - (longlong)plVar2 >> 0x3f);
          iVar6 = (int)(lVar4 >> 4) - (int)(lVar4 >> 0x3f);
          if ((-1 < iVar6) && (iVar6 < (int)param_1[0x12a])) {
            lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
            local_a8 = *param_6;
            local_98 = *param_3;
            lVar7 = (longlong)iVar6 * 0x60;
            *(undefined4 *)(lVar7 + 8 + param_1[0x129]) = *(undefined4 *)(lVar4 + 0x790);
            local_a0 = *(undefined4 *)(param_6 + 1);
            lVar4 = param_1[0x129];
            local_90 = *(undefined4 *)(param_3 + 1);
            uVar8 = FUN_142d34a40(param_2,param_1,&local_98,&local_a8);
            *(undefined4 *)(lVar7 + 0x14 + lVar4) = uVar8;
            *(undefined4 *)(lVar7 + 0x18 + param_1[0x129]) =
                 *(undefined4 *)(lVar7 + 0x14 + param_1[0x129]);
            *(undefined4 *)(lVar7 + 0x1c + param_1[0x129]) = 0x3f800000;
            *(undefined1 *)(lVar7 + 0x40 + param_1[0x129]) = 0;
            *(undefined1 *)(lVar7 + 0x41 + param_1[0x129]) = 0;
            FWeakObjectPtr::operator=(param_1[0x129] + 0x58 + lVar7,param_5);
            goto LAB_142dd5a5a;
          }
          break;
        }
      }
      local_78 = 0x3f800000;
      uStack_74 = 0x3f800000;
      uStack_70 = 0x3f800000;
      uStack_6c = 0x3f800000;
      local_88 = 0;
      local_80 = 0;
      local_60 = 0;
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      FWeakObjectPtr::operator=(local_30,0);
      local_88 = param_2;
      lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      local_90 = *(undefined4 *)(param_6 + 1);
      local_80 = CONCAT44(*(undefined4 *)(lVar4 + 0x790),*(undefined4 *)(lVar4 + 0x790));
      local_98 = *param_6;
      local_a8 = *param_3;
      local_a0 = *(undefined4 *)(param_3 + 1);
      uStack_74 = FUN_142d34a40(param_2,param_1,&local_a8,&local_98);
      uStack_6c = 0x3f800000;
      uStack_70 = uStack_74;
      FWeakObjectPtr::operator=(local_30,param_5);
      iVar6 = (int)param_1[0x12a];
      *(int *)(param_1 + 0x12a) = iVar6 + 1;
      if (*(int *)((longlong)param_1 + 0x954) < iVar6 + 1) {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
      }
      FUN_142dc1220((longlong)iVar6 * 0x60 + *plVar1,&local_88);
      if (local_40 != 0) {
        FMemory::Free();
      }
    }
LAB_142dd5a5a:
    local_90 = *(undefined4 *)(param_6 + 1);
    local_98 = *param_6;
    local_a0 = *(undefined4 *)(param_3 + 1);
    local_a8 = *param_3;
    FUN_142d444c0(param_2,param_1,&local_a8,param_4,param_5,&local_98,param_7);
  }
  return;
}



// FUNCTION 142dd5bc0 FUN_142dd5bc0 body=914 status=ok
// SIG undefined FUN_142dd5bc0(void)

void FUN_142dd5bc0(longlong *param_1,longlong param_2,undefined4 param_3,char param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  bool local_res10;
  int local_d8;
  longlong local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined2 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined1 local_70 [56];
  
  if (param_2 != 0) {
    plVar1 = param_1 + 0x129;
    lVar8 = (longlong)(int)param_1[0x12a];
    if ((int)param_1[0x12a] != 0) {
      local_d8 = 0;
      local_res10 = *(longlong *)*plVar1 != param_2;
      lVar9 = 0;
      iVar6 = 0;
      do {
        lVar9 = lVar9 + 1;
        iVar11 = iVar6 + 1;
        if (lVar9 < lVar8) {
          plVar7 = (longlong *)(lVar9 * 0x60 + *plVar1);
          do {
            if (local_res10 != (*plVar7 != param_2)) break;
            iVar11 = iVar11 + 1;
            lVar9 = lVar9 + 1;
            plVar7 = plVar7 + 0xc;
          } while (lVar9 < lVar8);
        }
        iVar10 = iVar11 - iVar6;
        if (local_res10 == false) {
          if (iVar10 != 0) {
            plVar7 = (longlong *)((longlong)iVar6 * 0x60 + 0x48 + *plVar1);
            do {
              if (*plVar7 != 0) {
                FMemory::Free();
              }
              plVar7 = plVar7 + 0xc;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        else {
          if (local_d8 != iVar6) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)local_d8 * 0x60 + *plVar1),
                       (void *)((longlong)iVar6 * 0x60 + *plVar1),(longlong)iVar10 * 0x60);
          }
          local_d8 = local_d8 + iVar10;
        }
        local_res10 = (bool)(local_res10 ^ 1);
        iVar6 = iVar11;
      } while (lVar9 < lVar8);
      *(int *)(param_1 + 0x12a) = local_d8;
    }
    FUN_142d43590(param_2,param_1,param_3,param_4,param_5,param_6);
    if (((((param_4 != '\0') && (cVar4 = UCameraModifier::IsDisabled(param_2), cVar4 != '\0')) ||
         (cVar4 = FUN_142d3d6b0(param_2), cVar4 != '\0')) ||
        ((*(uint *)(param_2 + 0x30) >> 3 & 1) != 0)) &&
       (lVar8 = (**(code **)(*param_1 + 0x148))(param_1), lVar8 != 0)) {
      local_b8 = 1.0;
      uStack_b4 = 0x3f800000;
      uStack_b0 = 0x3f800000;
      uStack_ac = 0x3f800000;
      local_c8 = 0;
      local_c0 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_94 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      FWeakObjectPtr::operator=(local_70,0);
      local_c8 = param_2;
      lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
      local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar8 + 0x790));
      lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
      local_c0 = CONCAT44(*(undefined4 *)(lVar8 + 0x790),(undefined4)local_c0);
      if ((*(uint *)(param_2 + 0x30) >> 4 & 1) == 0) {
        local_b8 = 1.0;
      }
      else {
        fVar2 = *(float *)(param_2 + 0x120);
        fVar3 = *(float *)(param_2 + 0x124);
        iVar6 = rand();
        local_b8 = (float)iVar6 * 3.051851e-05 * (fVar2 - fVar3) + fVar3;
      }
      uStack_b0 = 0x3f800000;
      uStack_b4 = param_3;
      FWeakObjectPtr::operator=(local_70,param_5);
      if (*(int *)(param_2 + 0x40) == 0) {
        uVar5 = (undefined1)local_88;
        if (*(int *)(param_2 + 0x50) == 0) {
          uVar5 = 1;
        }
        local_88 = CONCAT11(local_88._1_1_,uVar5);
      }
      if (*(longlong *)(param_2 + 0x80) != 0) {
        lVar9 = UNodeMappingContainer::GetPrivateStaticClass();
        for (lVar8 = *(longlong *)(param_2 + 0x80); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30))
        {
          if (lVar8 == lVar9) {
            if (*(longlong *)(param_2 + 0x80) != 0) goto LAB_142dd5ede;
            break;
          }
        }
      }
      uVar5 = local_88._1_1_;
      if (*(int *)(param_2 + 0x168) == 0) {
        uVar5 = 1;
      }
      local_88 = CONCAT11(uVar5,(undefined1)local_88);
LAB_142dd5ede:
      iVar6 = (int)param_1[0x12a];
      *(int *)(param_1 + 0x12a) = iVar6 + 1;
      if (*(int *)((longlong)param_1 + 0x954) < iVar6 + 1) {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
      }
      FUN_142dc1220((longlong)iVar6 * 0x60 + *plVar1,&local_c8);
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x112,&local_c8);
      if (local_80 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142dd5f70 FUN_142dd5f70 body=307 status=ok
// SIG undefined FUN_142dd5f70(void)

void FUN_142dd5f70(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  if (param_2 != (longlong *)0x0) {
    uVar4 = FUN_142e035e0();
    lVar5 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
    if (lVar5 != 0) {
      uVar10 = 0;
      if ((param_3 != 0) && (*(longlong *)(param_3 + 0x758) != 0)) {
        lVar6 = FUN_142dfdfe0();
        lVar1 = *(longlong *)(param_3 + 0x758);
        for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
          if (lVar2 == lVar6) {
            if (lVar1 != 0) {
              uVar8 = uVar10;
              if (lVar1 != 0) {
                uVar7 = FUN_142dfdfe0();
                for (uVar3 = *(ulonglong *)(param_3 + 0x758);
                    (uVar8 = uVar10, uVar3 != 0 &&
                    (uVar8 = *(ulonglong *)(param_3 + 0x758), uVar3 != uVar7));
                    uVar3 = *(ulonglong *)(uVar3 + 0x30)) {
                }
              }
              lVar5 = FUN_142dcdc10(lVar5,uVar8);
              if (lVar5 != 0) {
                FUN_142dfe260(lVar5,param_3);
              }
            }
            break;
          }
        }
      }
      puVar9 = *(undefined8 **)(param_1 + 0x508);
      uVar8 = (longlong)*(int *)(param_1 + 0x510) & 0x1fffffffffffffff;
      if (puVar9 + *(int *)(param_1 + 0x510) < puVar9) {
        uVar8 = uVar10;
      }
      if (uVar8 != 0) {
        do {
          (**(code **)(*(longlong *)*puVar9 + 0x30))((longlong *)*puVar9,param_3,param_2);
          uVar10 = uVar10 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar10 != uVar8);
      }
    }
  }
  return;
}



// FUNCTION 142dd60b0 FUN_142dd60b0 body=307 status=ok
// SIG undefined FUN_142dd60b0(void)

void FUN_142dd60b0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  if (param_2 != (longlong *)0x0) {
    uVar4 = FUN_142e035e0();
    lVar5 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
    if (lVar5 != 0) {
      uVar10 = 0;
      if ((param_3 != 0) && (*(longlong *)(param_3 + 0x758) != 0)) {
        lVar6 = FUN_142dfdfe0();
        lVar1 = *(longlong *)(param_3 + 0x758);
        for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
          if (lVar2 == lVar6) {
            if (lVar1 != 0) {
              uVar8 = uVar10;
              if (lVar1 != 0) {
                uVar7 = FUN_142dfdfe0();
                for (uVar3 = *(ulonglong *)(param_3 + 0x758);
                    (uVar8 = uVar10, uVar3 != 0 &&
                    (uVar8 = *(ulonglong *)(param_3 + 0x758), uVar3 != uVar7));
                    uVar3 = *(ulonglong *)(uVar3 + 0x30)) {
                }
              }
              lVar5 = FUN_142dcdc10(lVar5,uVar8);
              if (lVar5 != 0) {
                FUN_142dfe2a0(lVar5,param_3);
              }
            }
            break;
          }
        }
      }
      puVar9 = *(undefined8 **)(param_1 + 0x508);
      uVar8 = (longlong)*(int *)(param_1 + 0x510) & 0x1fffffffffffffff;
      if (puVar9 + *(int *)(param_1 + 0x510) < puVar9) {
        uVar8 = uVar10;
      }
      if (uVar8 != 0) {
        do {
          (**(code **)(*(longlong *)*puVar9 + 0x30))((longlong *)*puVar9,param_3,param_2);
          uVar10 = uVar10 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar10 != uVar8);
      }
    }
  }
  return;
}



// FUNCTION 142dd61f0 FUN_142dd61f0 body=49 status=ok
// SIG undefined FUN_142dd61f0(void)

longlong FUN_142dd61f0(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint7 uVar3;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = (int)uVar2;
    uVar3 = (uint7)(uVar2 >> 8);
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x1d0) <= iVar1)) break;
    if (*(longlong *)((longlong)iVar1 * 0x80 + 8 + *(longlong *)(param_1 + 0x1c8)) == param_2) {
      return CONCAT71(uVar3,1);
    }
    uVar2 = (ulonglong)(iVar1 + 1);
  }
  return (ulonglong)uVar3 << 8;
}



// FUNCTION 142dd6230 FUN_142dd6230 body=290 status=ok
// SIG undefined FUN_142dd6230(void)

void FUN_142dd6230(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  if (((char)param_1[0x25] == '\x03') && (0 < (int)param_1[0x12d])) {
    plVar1 = param_1 + 300;
    plVar2 = (longlong *)*plVar1;
    if (plVar2[(longlong)(int)param_1[0x12d] + -1] == param_2) {
      (**(code **)(*param_1 + 0x1070))(param_1);
      *(int *)(param_1 + 0x12d) = (int)param_1[0x12d] + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
      if ((int)param_1[0x12d] < 1) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(*plVar1 + -8 + (longlong)(int)param_1[0x12d] * 8);
      }
      param_1[0x12e] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x000142dd62b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1068))(param_1);
      return;
    }
    plVar7 = plVar2 + (int)param_1[0x12d];
    if (plVar7 != plVar2) {
      while (plVar7 = plVar7 + -1, *plVar7 != param_2) {
        if (plVar7 == plVar2) {
          return;
        }
      }
      iVar6 = (int)((longlong)plVar7 - (longlong)plVar2 >> 3);
      if (iVar6 != -1) {
        (**(code **)(*param_1 + 0x1070))(param_1);
        iVar3 = (int)param_1[0x12d];
        iVar4 = (iVar3 - iVar6) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar6 * 8),
                     (void *)(*plVar1 + (longlong)(iVar6 + 1) * 8),(longlong)iVar4 << 3);
          iVar3 = (int)param_1[0x12d];
        }
        *(int *)(param_1 + 0x12d) = iVar3 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
      }
    }
  }
  return;
}



// FUNCTION 142dd6360 FUN_142dd6360 body=132 status=ok
// SIG undefined FUN_142dd6360(void)

void FUN_142dd6360(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((param_2 != 0) &&
      (lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 400), lVar2 != 0)) {
    lVar3 = FUN_142e4e4a0();
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
      FUN_142d6bbb0(lVar2,param_2);
    }
  }
  return;
}



// FUNCTION 142dd63f0 thunk_FUN_1427120b0 body=5 status=ok
// SIG undefined thunk_FUN_1427120b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_1427120b0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStack_1a8 [32];
  undefined8 uStack_188;
  longlong lStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined8 uStack_164;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 *puStack_148;
  ulonglong *puStack_140;
  undefined8 uStack_138;
  longlong lStack_130;
  undefined4 *puStack_128;
  ulonglong *puStack_120;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [8];
  longlong *plStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 auStack_e8 [8];
  longlong *plStack_e0;
  undefined1 auStack_d0 [8];
  longlong *plStack_c8;
  undefined1 auStack_b8 [8];
  longlong *plStack_b0;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [24];
  undefined4 auStack_50 [4];
  undefined1 auStack_40 [8];
  longlong *plStack_38;
  char cStack_28;
  ulonglong uStack_20;
  
  uStack_20 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if ((char)param_1[0x25] == '\x03') {
    if (param_2 == (longlong *)0x0) {
      return;
    }
    if ((param_1[0x8c] != 0) && ((*(byte *)(param_1[0x8c] + 0x484) & 2) != 0)) {
      return;
    }
    if (((longlong *)param_1[0x91] != (longlong *)0x0) && ((longlong *)param_1[0x91] != param_2)) {
      (**(code **)(*param_1 + 0x780))();
    }
    if ((longlong *)param_2[0x92] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[0x92] + 0x780))();
    }
    uVar6 = (**(code **)(*param_2 + 0x770))(param_2,param_1);
    lVar8 = param_2[0x2d];
    if (lVar8 == 0) {
      uStack_15c = DAT_1468b5da8;
      puVar10 = &uStack_164;
      uStack_164 = DAT_1468b5da0;
    }
    else {
      fStack_f8 = *(float *)(lVar8 + 0x210);
      fStack_f4 = *(float *)(lVar8 + 0x214);
      fStack_f0 = *(float *)(lVar8 + 0x218);
      fStack_ec = *(float *)(lVar8 + 0x21c);
      auVar3._4_4_ = -(uint)(*(float *)(lVar8 + 0x254) != fStack_f4);
      auVar3._0_4_ = -(uint)(*(float *)(lVar8 + 0x250) != fStack_f8);
      auVar3._8_4_ = -(uint)(*(float *)(lVar8 + 600) != fStack_f0);
      auVar3._12_4_ = -(uint)(*(float *)(lVar8 + 0x25c) != fStack_ec);
      iVar7 = movmskps(uVar6,auVar3);
      if (iVar7 != 0) {
        *(float *)(lVar8 + 0x250) = fStack_f8;
        *(float *)(lVar8 + 0x254) = fStack_f4;
        *(float *)(lVar8 + 600) = fStack_f0;
        *(float *)(lVar8 + 0x25c) = fStack_ec;
        puVar10 = (undefined8 *)FQuat::Rotator(&fStack_f8,&puStack_148);
        *(undefined8 *)(lVar8 + 0x260) = *puVar10;
        *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(puVar10 + 1);
      }
      uStack_168 = *(undefined4 *)(lVar8 + 0x268);
      puVar10 = &uStack_170;
      uStack_170 = *(undefined8 *)(lVar8 + 0x260);
    }
    uStack_158 = *puVar10;
    uStack_150 = *(undefined4 *)(puVar10 + 1);
    (**(code **)(*param_1 + 0x728))(param_1,&uStack_158,1);
    (**(code **)(*param_1 + 0x750))(param_1,param_2);
    plVar11 = (longlong *)param_1[0x91];
    if ((plVar11 != (longlong *)0x0) && ((*(byte *)((longlong)plVar11 + 0x34) & 4) != 0)) {
      AActor::SetActorTickEnabled(plVar11,1);
      plVar11 = (longlong *)param_1[0x91];
    }
    if ((plVar11 != (longlong *)0x0) && (lVar8 = (**(code **)(*plVar11 + 0x6e8))(), lVar8 != 0)) {
      uVar9 = UNetworkPredictionInterface::GetPrivateStaticClass();
      plVar11 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar9);
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
    }
    param_1[0xa2] = 0;
    if (((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) == 0) ||
       (cVar5 = (**(code **)(*param_1 + 0x768))(param_1), cVar5 == '\0')) {
      (**(code **)(*(longlong *)param_1[0x91] + 0x708))();
    }
    FUN_1429e0e30(param_1,param_1[0x91]);
    uStack_188 = 0x140;
    (**(code **)(*param_1 + 0x718))(param_1,0x140);
    if ((char)param_1[0xa7] != '\0') {
      (**(code **)(*param_1 + 0xe20))(param_1,param_1[0x91]);
      (**(code **)(*param_1 + 0xea0))(param_1);
    }
    return;
  }
  FName::FName(auStack_178,&DAT_145171a14,1);
  lStack_180 = param_1[3];
  lVar8 = FText::FromName(auStack_68,&lStack_180);
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (auStack_b8,
                     L"Possess function should only be used by the network authority for {0}",
                     L"PlayerController",L"PlayerControllerPossessAuthorityOnly");
  puVar10 = (undefined8 *)FTextFormat::FTextFormat(auStack_a0,uVar9);
  auStack_50[0] = 4;
  FText::FText(auStack_40,lVar8);
  uStack_138 = *puVar10;
  puStack_148 = auStack_50;
  puStack_140 = &uStack_20;
  lStack_130 = puVar10[1];
  cStack_28 = '\x01';
  if (lStack_130 != 0) {
    LOCK();
    *(int *)(lStack_130 + 8) = *(int *)(lStack_130 + 8) + 1;
    UNLOCK();
  }
  puStack_128 = puStack_148;
  puStack_120 = puStack_140;
  uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(auStack_118,&puStack_128);
  uVar9 = FText::Format(auStack_d0,&uStack_138,uVar9);
  FText::FText(auStack_e8,uVar9);
  if (plStack_c8 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_c8 + 1;
    lVar4 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_c8)(plStack_c8);
      LOCK();
      piVar1 = (int *)((longlong)plStack_c8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_c8 + 8))(plStack_c8,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (auStack_118);
  if ((cStack_28 != '\0') && (cStack_28 = '\0', plStack_38 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plStack_38 + 1;
    lVar4 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar1 = (int *)((longlong)plStack_38 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_38 + 8))(plStack_38,1);
      }
    }
  }
  plVar11 = (longlong *)puVar10[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar11 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  plVar11 = *(longlong **)(lVar8 + 8);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar11 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  uVar9 = FUN_14161fb50(auStack_90,auStack_178);
  FMessageLog::Warning(uVar9,auStack_108,auStack_e8);
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_100 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar1 = (int *)((longlong)plStack_100 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_100 + 8))(plStack_100,1);
      }
    }
  }
  FMessageLog::~FMessageLog(auStack_90);
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_e0 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar1 = (int *)((longlong)plStack_e0 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
      }
    }
  }
  if (plStack_b0 == (longlong *)0x0) {
    return;
  }
  LOCK();
  plVar11 = plStack_b0 + 1;
  lVar8 = *plVar11;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)lVar8 != 1) {
    return;
  }
  (**(code **)*plStack_b0)(plStack_b0);
  LOCK();
  piVar1 = (int *)((longlong)plStack_b0 + 0xc);
  iVar7 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar7 != 1) {
    return;
  }
  (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
  return;
}



// FUNCTION 142dd6400 FUN_142dd6400 body=76 status=ok
// SIG undefined FUN_142dd6400(void)

void FUN_142dd6400(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1427125d0();
  uVar1 = FUN_142e551e0();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  param_1[0x125] = lVar2;
  uVar1 = FUN_142e79600();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  param_1[0x122] = lVar2;
  return;
}



// FUNCTION 142dd6450 FUN_142dd6450 body=449 status=ok
// SIG undefined FUN_142dd6450(void)

void FUN_142dd6450(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int *piVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  UObject::PostLoad();
  uVar8 = 0;
  if ((0 < *(int *)(param_1 + 0xd0)) && (*(int *)(param_1 + 0xc0) == 0)) {
    puVar5 = *(undefined4 **)(param_1 + 200);
    uVar9 = (longlong)*(int *)(param_1 + 0xd0) & 0x3fffffffffffffff;
    if (puVar5 + *(int *)(param_1 + 0xd0) < puVar5) {
      uVar9 = uVar8;
    }
    if (uVar9 != 0) {
      do {
        iVar1 = *(int *)(param_1 + 0xc0);
        uVar2 = *puVar5;
        *(int *)(param_1 + 0xc0) = iVar1 + 1;
        if (*(int *)(param_1 + 0xc4) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xb8);
        }
        lVar7 = *(longlong *)(param_1 + 0xb8);
        puVar5 = puVar5 + 1;
        uVar8 = uVar8 + 1;
        *(undefined4 *)(lVar7 + (longlong)iVar1 * 8) = uVar2;
        *(undefined4 *)(lVar7 + 4 + (longlong)iVar1 * 8) = 1;
      } while (uVar8 != uVar9);
    }
    *(undefined4 *)(param_1 + 0xd0) = 0;
    if (*(int *)(param_1 + 0xd4) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 200);
    }
  }
  lVar7 = *(longlong *)(param_1 + 0xa0);
  lVar6 = (longlong)*(int *)(param_1 + 0xa8) * 0x30 + lVar7;
  if (lVar7 != lVar6) {
    piVar4 = (int *)(lVar7 + 0x20);
    do {
      uVar8 = 0;
      iVar1 = *piVar4;
      if ((0 < iVar1) && (piVar4[-4] == 0)) {
        puVar5 = *(undefined4 **)(piVar4 + -2);
        uVar9 = (longlong)iVar1 & 0x3fffffffffffffff;
        if (puVar5 + iVar1 < puVar5) {
          uVar9 = uVar8;
        }
        if (uVar9 != 0) {
          do {
            iVar1 = piVar4[-4];
            uVar2 = *puVar5;
            piVar4[-4] = iVar1 + 1;
            if (piVar4[-3] < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(piVar4 + -6);
            }
            lVar3 = *(longlong *)(piVar4 + -6);
            puVar5 = puVar5 + 1;
            uVar8 = uVar8 + 1;
            *(undefined4 *)(lVar3 + (longlong)iVar1 * 8) = uVar2;
            *(undefined4 *)(lVar3 + 4 + (longlong)iVar1 * 8) = 1;
          } while (uVar8 != uVar9);
        }
        *piVar4 = 0;
        if (piVar4[1] != 0) {
          TArray<float,FDefaultAllocator>::ResizeTo(piVar4 + -2,0);
        }
      }
      lVar7 = lVar7 + 0x30;
      piVar4 = piVar4 + 0xc;
    } while (lVar7 != lVar6);
  }
  return;
}



// FUNCTION 142dd6620 FUN_142dd6620 body=76 status=ok
// SIG undefined FUN_142dd6620(void)

void FUN_142dd6620(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  if (*(longlong **)(param_1 + 0x938) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x938) + 0x288))();
  }
  FUN_1427127f0(param_1,param_2,param_3);
  return;
}



// FUNCTION 142dd6670 FUN_142dd6670 body=364 status=ok
// SIG undefined FUN_142dd6670(void)

void FUN_142dd6670(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0xb9) = 0;
  if (*(int *)((longlong)param_1 + 0x5cc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0xb8,0);
  }
  FUN_142dcaa30(param_1 + 0xff,0);
  iVar5 = (int)param_1[0x12a];
  if (iVar5 != 0) {
    plVar4 = (longlong *)(param_1[0x129] + 0x48);
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 0xc;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(param_1 + 0x12a) = 0;
  if (*(int *)((longlong)param_1 + 0x954) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x129,0);
  }
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  (**(code **)(*(longlong *)param_1[0xa5] + 0x848))((longlong *)param_1[0xa5],1);
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar2 != 0) {
    plVar4 = (longlong *)(**(code **)(*DAT_1469eaf48 + 0xd0))();
    if (plVar4 != (longlong *)0x0) {
      iVar5 = (**(code **)(*param_1 + 0xd80))(param_1);
      iVar1 = FUN_14046e5c0(*(undefined8 *)(lVar2 + 400));
      if (1 < iVar1) {
        plVar3 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
        lVar2 = plVar3[0x1f];
        if (lVar2 == 0) {
          (**(code **)(*plVar3 + 0x368))(plVar3);
          lVar2 = plVar3[0x1f];
        }
        if (*(char *)(lVar2 + 0x6b) != '\0') {
          iVar5 = iVar5 + -1;
        }
      }
      (**(code **)(*plVar4 + 0x10))(plVar4,iVar5,param_1 + 0xc4);
    }
  }
  FUN_142712880(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 142dd67e0 FUN_142dd67e0 body=74 status=ok
// SIG undefined FUN_142dd67e0(void)

void FUN_142dd67e0(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong *plVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  plVar1 = *(longlong **)(param_1 + 0x938);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x280))(plVar1,param_2,param_3);
  }
  return;
}



// FUNCTION 142dd6830 FUN_142dd6830 body=770 status=ok
// SIG undefined FUN_142dd6830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142dd6830(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 local_c8 [8];
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined4 local_b0;
  undefined1 local_a8 [48];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if ((param_1 == (longlong *)0x0) ||
     ((lVar5 = param_1[0x24], lVar5 == 0 && (lVar5 = FUN_1423407b0(), lVar5 == 0)))) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x218);
  }
  if ((lVar5 != 0) && (plVar6 = (longlong *)FUN_1426e2530(lVar5,0), plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x348))
              (plVar6,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxGameSystemCore\\Private\\Player\\GbxGameplayStatics.cpp"
               ,0x181);
    iVar8 = *(int *)((longlong)param_1 + 0xc);
    if (iVar8 < (int)DAT_1469e91c4) {
      uVar7 = iVar8 >> 0x1f & 0xffff;
      uVar4 = iVar8 + uVar7;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
      lVar5 = (**(code **)(*param_1 + 0x6d0))(param_1,*param_2,1);
      if (((lVar5 != 0) && (cVar3 = FBodyInstance::IsValidBodyInstance(lVar5), cVar3 != '\0')) &&
         (cVar3 = FWeakObjectPtr::IsValid(lVar5 + 0x140), cVar3 != '\0')) {
        FWeakObjectPtr::Get(lVar5 + 0x140);
        fVar13 = 3.4028235e+38;
        uVar14 = (undefined4)*param_3;
        uVar15 = (undefined4)((ulonglong)*param_3 >> 0x20);
        uVar9 = *(undefined4 *)(param_3 + 1);
        uVar16 = (undefined4)*param_4;
        uVar17 = (undefined4)((ulonglong)*param_4 >> 0x20);
        uVar10 = *(undefined4 *)(param_4 + 1);
        FUN_142699110(lVar5,local_a8,1,0);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146b348f8) &&
           (_Init_thread_header(&DAT_146b348f8), DAT_146b348f8 == -1)) {
          atexit((_func_5014 *)&LAB_143ec0ed0);
          _Init_thread_footer(&DAT_146b348f8);
        }
        FUN_142695960(lVar5,&DAT_146b348e8);
        iVar8 = 0;
        if (0 < DAT_146b348f0) {
          lVar5 = 0;
          do {
            piVar1 = *(int **)(*(longlong *)(lVar5 + DAT_146b348e8) + 0x10);
            if (((piVar1 != (int *)0x0) && (*piVar1 == 6)) &&
               ((plVar2 = *(longlong **)(piVar1 + 2), plVar2 != (longlong *)0x0 &&
                ((char)plVar2[6] == '\x02')))) {
              local_d8 = local_b8;
              fVar12 = (float)(**(code **)(*plVar2 + 8))(plVar2,param_3,local_a8,local_c8);
              if (fVar12 < fVar13) {
                uVar14 = local_c8._0_4_;
                uVar15 = local_c8._4_4_;
                uVar16 = local_b8._0_4_;
                uVar17 = local_b8._4_4_;
                fVar13 = fVar12;
                uVar9 = local_c0;
                uVar10 = local_b0;
              }
            }
            iVar8 = iVar8 + 1;
            lVar5 = lVar5 + 8;
          } while (iVar8 < DAT_146b348f0);
        }
        bVar11 = DAT_146b348f4 != DAT_146b348f0;
        DAT_146b348f0 = 0;
        if (bVar11) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b348e8);
        }
        if (fVar13 < 3.4028235e+38) {
          *param_3 = CONCAT44(uVar15,uVar14);
          *(undefined4 *)(param_3 + 1) = uVar9;
          *param_4 = CONCAT44(uVar17,uVar16);
          *(undefined4 *)(param_4 + 1) = uVar10;
        }
      }
    }
    (**(code **)(*plVar6 + 0x350))(plVar6);
  }
  return;
}



// FUNCTION 142dd6b40 FUN_142dd6b40 body=131 status=ok
// SIG undefined FUN_142dd6b40(void)

void FUN_142dd6b40(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (((char)param_1[0x25] == '\x03') && (param_2 != 0)) {
    plVar1 = param_1 + 300;
    iVar2 = (int)param_1[0x12d];
    *(int *)(param_1 + 0x12d) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0x96c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = param_2;
    param_1[0x12e] = *(longlong *)(*plVar1 + -8 + (longlong)(int)param_1[0x12d] * 8);
    (**(code **)(*param_1 + 0x1068))(param_1);
  }
  return;
}



// FUNCTION 142dd6bd0 FUN_142dd6bd0 body=140 status=ok
// SIG undefined FUN_142dd6bd0(void)

void FUN_142dd6bd0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  if (((param_2 != 0) &&
      (lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar3 != 0)) &&
     (plVar1 = *(longlong **)(lVar3 + 400), plVar1 != (longlong *)0x0)) {
    lVar3 = FUN_142e4e4a0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x3a8))(plVar1,param_2);
    }
  }
  return;
}



// FUNCTION 142dd6c60 FUN_142dd6c60 body=349 status=ok
// SIG undefined FUN_142dd6c60(void)

longlong * FUN_142dd6c60(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = FUN_142e75af0();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return param_1;
    }
    lVar2 = FUN_1429d7ab0();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = FUN_142e75af0();
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar3);
      if (plVar4 != (longlong *)0x0) {
        return plVar4;
      }
      plVar4 = (longlong *)param_1[0x92];
      if (plVar4 != (longlong *)0x0) {
        uVar3 = FUN_142e75af0();
                    /* WARNING: Could not recover jumptable at 0x000142dd6d36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x628))(plVar4,uVar3);
        return plVar4;
      }
    }
    else {
      lVar2 = FUN_14291fb80();
      if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
          lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        plVar4 = (longlong *)param_1[0x91];
        uVar3 = FUN_142e75af0();
        if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142dd6d97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar4 = (longlong *)(**(code **)(*plVar4 + 0x628))(plVar4);
          return plVar4;
        }
        plVar4 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar3);
        if (plVar4 != (longlong *)0x0) {
          return plVar4;
        }
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 142dd6dc0 FUN_142dd6dc0 body=443 status=ok
// SIG undefined FUN_142dd6dc0(void)

ulonglong * FUN_142dd6dc0(longlong param_1,ulonglong *param_2,longlong *param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (*param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  lVar6 = *(longlong *)(param_1 + 0x180);
  fVar8 = 0.0;
  local_38 = 0;
  lVar3 = (longlong)*(int *)(param_1 + 0x188) * 0x70 + lVar6;
  uStack_30 = 0;
  for (; lVar6 != lVar3; lVar6 = lVar6 + 0x70) {
    if ((*(longlong *)(lVar6 + 8) != 0) && (*(longlong *)(lVar6 + 8) == *param_3)) {
      if (*(char *)(lVar6 + 0x60) == '\0') {
        uStack_30 = 0;
        if (param_3[1] == 0) {
          uVar2 = *(uint *)(lVar6 + 0x50);
        }
        else {
          uVar2 = FUN_142dceab0(lVar6);
        }
        if ((*(byte *)(param_3 + 2) & 1) == 0) goto LAB_142dd6f0a;
        if (param_3[1] != 0) {
          lVar4 = *(longlong *)(lVar6 + 0x48);
          lVar3 = lVar4 + (longlong)*(int *)(lVar6 + 0x50) * 0x48;
          lVar5 = 0;
          if (lVar4 == lVar3) goto LAB_142dd6ed2;
          goto LAB_142dd6eb0;
        }
        if (*(int *)(lVar6 + 0x50) < 1) goto LAB_142dd6f0a;
        lVar5 = *(longlong *)(lVar6 + 0x48);
        goto LAB_142dd6ed2;
      }
      break;
    }
  }
  goto LAB_142dd6f5b;
  while (lVar4 = lVar4 + 0x48, lVar5 = 0, lVar4 != lVar3) {
LAB_142dd6eb0:
    cVar1 = FUN_14058c1e0(lVar4 + 8,param_3[1]);
    lVar5 = lVar4;
    if (cVar1 != '\0') break;
  }
LAB_142dd6ed2:
  if (lVar5 != 0) {
    if (*(char *)(lVar5 + 0x18) == '\0') {
      fVar7 = (*(float *)(lVar5 + 0x1c) + *(float *)(lVar5 + 0x3c)) - *(float *)(lVar6 + 0x58);
    }
    else {
      fVar7 = 3.4028235e+38;
    }
    uStack_30 = CONCAT44(fVar7,*(float *)(lVar5 + 0x1c));
  }
LAB_142dd6f0a:
  lVar3 = *(longlong *)(lVar6 + 0x38);
  local_38 = (ulonglong)uVar2;
  lVar6 = (longlong)*(int *)(lVar6 + 0x40) * 0x1c0 + lVar3;
  if (lVar3 != lVar6) {
    lVar4 = param_3[1];
    do {
      if (((lVar4 == 0) || (lVar4 == *(longlong *)(lVar3 + 0x28))) ||
         (lVar4 == *(longlong *)(lVar3 + 0x18))) {
        fVar8 = fVar8 + *(float *)(lVar3 + 0x1b0);
        local_38 = CONCAT44(fVar8,(undefined4)local_38);
      }
      lVar3 = lVar3 + 0x1c0;
    } while (lVar3 != lVar6);
  }
LAB_142dd6f5b:
  *param_2 = local_38;
  param_2[1] = uStack_30;
  return param_2;
}



// FUNCTION 142dd6f80 FUN_142dd6f80 body=121 status=ok
// SIG undefined FUN_142dd6f80(void)

undefined8 * FUN_142dd6f80(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = UNavigateHomeCharacterWidget::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)FUN_142dd6dc0(lVar2,&local_18,param_3);
      goto LAB_142dd6fe0;
    }
  }
  local_18 = 0;
  puVar3 = &local_18;
  uStack_10 = 0;
LAB_142dd6fe0:
  uVar1 = puVar3[1];
  *param_1 = *puVar3;
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 142dd7000 FUN_142dd7000 body=45 status=ok
// SIG undefined FUN_142dd7000(void)

void FUN_142dd7000(longlong param_1)

{
  FUN_142713df0();
  if (*(longlong *)(param_1 + 0x940) != 0) {
    AK::MemoryMgr::StartProfileThreadUsage((long)*(longlong *)(param_1 + 0x940));
    return;
  }
  return;
}



// FUNCTION 142dd7030 FUN_142dd7030 body=51 status=ok
// SIG undefined FUN_142dd7030(void)

void FUN_142dd7030(longlong *param_1)

{
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    (**(code **)(*param_1 + 0x8f8))();
                    /* WARNING: Could not recover jumptable at 0x000142dd7056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x8f0))(param_1);
    return;
  }
  return;
}



// FUNCTION 142dd7070 FUN_142dd7070 body=1631 status=ok
// SIG undefined FUN_142dd7070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142dd7070(longlong *param_1)

{
  longlong **pplVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  uint uVar25;
  uint *puVar26;
  longlong *plVar27;
  longlong **pplVar28;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined1 local_148 [16];
  undefined8 local_138;
  uint *puStack_130;
  uint local_128;
  uint uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong local_b0;
  undefined1 local_a8;
  ushort local_a6;
  undefined4 local_a4;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  longlong *local_80;
  undefined8 uStack_78;
  uint *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong **local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if (DAT_1468b616c != '\0') {
    return;
  }
  FUN_142dc8e80();
  if (param_1[2] == 0) {
    return;
  }
  lVar14 = FUN_1428dfc70();
  lVar15 = param_1[2];
  lVar16 = lVar15;
  if (lVar15 == 0) {
    return;
  }
  while (lVar16 != lVar14) {
    lVar16 = *(longlong *)(lVar16 + 0x30);
    if (lVar16 == 0) {
      return;
    }
  }
  if (lVar15 == 0) {
    return;
  }
  if (*param_1 == 0) {
    return;
  }
  lVar15 = *(longlong *)(*param_1 + 0x120);
  if ((lVar15 == 0) && (lVar15 = FUN_1423407b0(), lVar15 == 0)) {
    return;
  }
  FUN_142b813e0(local_90,lVar15);
  FEditorScriptExecutionGuard::FEditorScriptExecutionGuard(local_148);
  FActorSpawnParameters::FActorSpawnParameters(&local_d0);
  local_a6 = local_a6 | 0xc;
  local_a8 = 1;
  lVar16 = FUN_14233ccd0(*param_1);
  local_a4 = (undefined4)param_1[0xd];
  uVar20 = 0;
  local_c8 = param_1[3];
  puVar18 = (undefined8 *)0x0;
  local_b0 = lVar16;
  if (local_c8 != 0) {
    if (lVar16 == 0) {
      lVar16 = FUN_140cc25e0(lVar15);
      puVar18 = (undefined8 *)0x0;
      if (lVar16 == 0) goto LAB_142dd71c9;
    }
    local_138 = 0;
    uVar22 = uVar20;
    if (param_1[2] != 0) {
      uVar17 = FUN_1428dfc70();
      for (uVar24 = param_1[2];
          (uVar22 = uVar20, uVar24 != 0 && (uVar22 = param_1[2], uVar24 != uVar17));
          uVar24 = *(ulonglong *)(uVar24 + 0x30)) {
      }
    }
    puVar18 = (undefined8 *)FUN_141791c20(local_a0,lVar16,uVar22,local_138);
    local_d0 = *puVar18;
  }
LAB_142dd71c9:
  lVar16 = *param_1;
  local_118 = *(undefined4 *)(lVar16 + 0x220);
  local_114 = *(undefined4 *)(lVar16 + 0x224);
  local_110 = *(undefined4 *)(lVar16 + 0x228);
  fVar5 = *(float *)(lVar16 + 0x210);
  local_138 = *(undefined8 *)(lVar16 + 0x210);
  fVar6 = *(float *)(lVar16 + 0x218);
  puStack_130 = *(uint **)(lVar16 + 0x218);
  auVar4._4_4_ = -(uint)(*(float *)(lVar16 + 0x214) != *(float *)(lVar16 + 0x254));
  auVar4._0_4_ = -(uint)(fVar5 != *(float *)(lVar16 + 0x250));
  auVar4._8_4_ = -(uint)(fVar6 != *(float *)(lVar16 + 600));
  auVar4._12_4_ = -(uint)(*(float *)(lVar16 + 0x21c) != *(float *)(lVar16 + 0x25c));
  iVar12 = movmskps((int)puVar18,auVar4);
  if (iVar12 != 0) {
    *(float *)(lVar16 + 0x250) = fVar5;
    *(float *)(lVar16 + 0x254) = *(float *)(lVar16 + 0x214);
    *(float *)(lVar16 + 600) = fVar6;
    *(float *)(lVar16 + 0x25c) = *(float *)(lVar16 + 0x21c);
    puVar18 = (undefined8 *)FQuat::Rotator(&local_138,local_a0);
    *(undefined8 *)(lVar16 + 0x260) = *puVar18;
    *(undefined4 *)(lVar16 + 0x268) = *(undefined4 *)(puVar18 + 1);
  }
  local_108 = *(undefined8 *)(lVar16 + 0x260);
  local_100 = *(undefined4 *)(lVar16 + 0x268);
  uVar22 = uVar20;
  if (param_1[2] != 0) {
    uVar17 = FUN_1428dfc70();
    for (uVar24 = param_1[2];
        (uVar22 = uVar20, uVar24 != 0 && (uVar22 = param_1[2], uVar24 != uVar17));
        uVar24 = *(ulonglong *)(uVar24 + 0x30)) {
    }
  }
  local_158 = &local_d0;
  lVar15 = UWorld::SpawnActor(lVar15,uVar22);
  param_1[1] = lVar15;
  if (lVar15 != 0) {
    FUN_14222b9f0(lVar15,*param_1 + 0x210);
    if (param_1[1] != 0) {
      local_40 = (longlong **)0x0;
      local_38 = 0;
      FUN_142dc09a0(param_1[1],&local_80);
      pplVar28 = &local_80;
      if (local_40 != (longlong **)0x0) {
        pplVar28 = local_40;
      }
      pplVar1 = pplVar28 + (int)local_38;
      for (; pplVar28 != pplVar1; pplVar28 = pplVar28 + 1) {
        plVar27 = *pplVar28;
        if (plVar27 != (longlong *)0x0) {
          plVar23 = (longlong *)plVar27[0x17e];
          uVar22 = (longlong)(int)plVar27[0x17f] & 0x1fffffffffffffff;
          if (plVar23 + (int)plVar27[0x17f] < plVar23) {
            uVar22 = uVar20;
          }
          uVar24 = uVar20;
          if (uVar22 != 0) {
            do {
              lVar15 = *plVar23;
              if ((lVar15 != 0) && ((*(byte *)(lVar15 + 0x10) & 8) != 0)) {
                FUN_1426a9140(lVar15,0);
              }
              plVar23 = plVar23 + 1;
              uVar24 = uVar24 + 1;
            } while (uVar24 != uVar22);
          }
        }
      }
      if (local_40 != (longlong **)0x0) {
        FMemory::Free();
      }
    }
    lVar15 = param_1[1];
    plVar27 = (longlong *)(lVar15 + 0x2b0);
    uVar3 = *(uint *)(lVar15 + 0x2d8);
    puVar2 = (uint *)(lVar15 + 0x2c0);
    local_138 = 0x100000000;
    uStack_124 = 0;
    iStack_120 = 0;
    if (uVar3 != 0) {
      puVar26 = *(uint **)(lVar15 + 0x2d0);
      if (*(uint **)(lVar15 + 0x2d0) == (uint *)0x0) {
        puVar26 = puVar2;
      }
      uVar13 = *puVar26;
      iStack_120 = 0;
      while (uVar13 == 0) {
        iVar12 = (int)uVar20;
        iStack_120 = iStack_120 + 0x20;
        uVar20 = (ulonglong)(iVar12 + 1U);
        uVar22 = (ulonglong)local_138 >> 0x20;
        local_138 = CONCAT44((int)uVar22,iVar12 + 1U);
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
        goto LAB_142dd7442;
        uVar13 = puVar26[(longlong)iVar12 + 1];
      }
      uVar13 = uVar13 - 1 & uVar13 ^ uVar13;
      iVar12 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      local_138 = CONCAT44(uVar13,(undefined4)local_138);
      if (uVar13 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      uStack_124 = (iStack_120 - iVar12) + 0x1f;
      if ((int)uVar3 < (int)uStack_124) {
LAB_142dd7442:
        uStack_124 = uVar3;
      }
    }
    uVar13 = *(uint *)(lVar15 + 0x2d8);
    local_80 = plVar27;
    uStack_68 = CONCAT44(uStack_124,0xffffffff);
    uStack_60 = CONCAT44(uStack_11c,iStack_120);
    uStack_78 = local_138;
    uVar11 = uStack_78;
    puStack_70 = puVar2;
    local_128 = -1 << ((byte)uVar13 & 0x1f);
    uStack_78._0_4_ = (undefined4)local_138;
    uStack_78._4_4_ = (uint)((ulonglong)local_138 >> 0x20);
    uVar25 = uVar13 & 0xffffffe0;
    local_d8 = CONCAT44(uStack_11c,iStack_120);
    local_f8 = plVar27;
    uStack_f0 = (undefined4)uStack_78;
    uStack_ec = uStack_78._4_4_;
    local_e8 = puVar2;
    uStack_e0 = CONCAT44(uStack_124,0xffffffff);
    puStack_130 = puVar2;
    uStack_124 = uVar13;
    uStack_78 = uVar11;
    if (uVar13 != uVar3) {
      puVar26 = *(uint **)(lVar15 + 0x2d0);
      if (*(uint **)(lVar15 + 0x2d0) == (uint *)0x0) {
        puVar26 = puVar2;
      }
      uVar21 = puVar26[(int)uVar13 >> 5] & local_128;
      iVar12 = (int)uVar13 >> 5;
      while (uVar21 == 0) {
        uVar25 = uVar25 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
        goto LAB_142dd7517;
        uVar21 = puVar26[(longlong)iVar12 + 1];
        local_128 = 0xffffffff;
        iVar12 = iVar12 + 1;
      }
      uVar21 = uVar21 - 1 & uVar21 ^ uVar21;
      iVar12 = 0x1f;
      if (uVar21 != 0) {
        for (; uVar21 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      if (uVar21 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      uStack_124 = (uVar25 - iVar12) + 0x1f;
      uVar13 = uStack_124;
      if ((int)uVar3 < (int)uStack_124) {
LAB_142dd7517:
        uStack_124 = uVar3;
        uVar13 = uVar3;
      }
    }
    while( true ) {
      lVar15 = (longlong)(int)uStack_e0._4_4_;
      if ((uStack_e0._4_4_ == uVar13) && (local_e8 == puVar2)) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      if ((bVar10) && (local_f8 == plVar27)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (!bVar10) break;
      lVar16 = *local_f8;
      lVar14 = *(longlong *)(lVar16 + lVar15 * 0x10);
      if (lVar14 != 0) {
        lVar19 = FUN_142e39920();
        if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar19 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) {
          FName::FName(&local_138,L"PreviewActor",1);
          FUN_142dafbc0(lVar14 + 0x14f0,&local_138);
        }
      }
      puVar26 = (uint *)(*(longlong *)(lVar16 + lVar15 * 0x10) + 8);
      *puVar26 = *puVar26 | *(uint *)(param_1 + 0xd);
      uStack_e0 = CONCAT44(uStack_e0._4_4_,(uint)uStack_e0 & ~uStack_ec);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
    }
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      puVar18 = (undefined8 *)FUN_142dcc8d0(&local_138,param_1[1],1);
    }
    else {
      iStack_120 = *(int *)((longlong)param_1 + 100);
      puVar18 = &local_138;
      local_138 = *(undefined8 *)((longlong)param_1 + 0x4c);
      puStack_130 = *(uint **)((longlong)param_1 + 0x54);
      local_128 = (uint)*(undefined8 *)((longlong)param_1 + 0x5c);
      uStack_124 = (uint)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x5c) >> 0x20);
    }
    uVar7 = *(undefined4 *)((longlong)puVar18 + 4);
    uVar8 = *(undefined4 *)(puVar18 + 1);
    uVar9 = *(undefined4 *)((longlong)puVar18 + 0xc);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)puVar18;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar7;
    *(undefined4 *)(param_1 + 7) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar9;
    param_1[8] = puVar18[2];
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(puVar18 + 3);
    FWeakObjectPtr::operator=(param_1[1] + 0x198,*param_1);
    local_138 = 0;
    FUN_1422232e0(param_1[1],*param_1,&DAT_146532184,0);
    FUN_142dd79a0(param_1);
  }
  FEditorScriptExecutionGuard::~FEditorScriptExecutionGuard(local_148);
  FUN_142b83220(local_90);
  return;
}



// FUNCTION 142dd76d0 FUN_142dd76d0 body=631 status=ok
// SIG undefined FUN_142dd76d0(void)

void FUN_142dd76d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined1 local_res8 [8];
  longlong *local_res10;
  longlong *local_res18;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  plVar10 = *(longlong **)(param_1 + 0x18);
  plVar11 = plVar10 + (longlong)*(int *)(param_1 + 0x20) * 7;
  if (plVar10 != plVar11) {
    plVar7 = plVar10 + 5;
    plVar9 = (longlong *)0x0;
    do {
      uVar12 = FUN_142dc6540(plVar10,param_1 + 0x28);
      *(undefined4 *)(plVar7 + -1) = uVar12;
      cVar5 = FWindowsSystemWideCriticalSection::IsValid(plVar7);
      lVar4 = *plVar10;
      if (cVar5 == '\0') {
        plVar8 = plVar9;
        if (lVar4 != 0) {
          iVar3 = (int)plVar7[-4];
          if ((-1 < iVar3) && (iVar3 < *(int *)(lVar4 + 0x40))) {
            plVar8 = (longlong *)((longlong)iVar3 * 0x50 + *(longlong *)(lVar4 + 0x38));
          }
        }
        cVar5 = FWindowsSystemWideCriticalSection::IsValid(plVar7);
        if (((cVar5 == '\0') && (plVar8 != (longlong *)0x0)) && (*plVar8 != 0)) {
          local_68[0] = plVar7[-3];
          local_68[1] = 0;
          plVar6 = (longlong *)
                   FUN_142c8e590(local_58,*plVar8,local_68,(char)plVar8[1],(int)plVar7[-1],0,
                                 local_res8);
          if (plVar7 != plVar6) {
            *plVar7 = *plVar6;
            *plVar6 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(plVar7 + 1,plVar6 + 1);
          }
          plVar6 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_50 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          uStack_40 = &local_res18;
          local_48 = 0x40437760;
          uStack_44 = 1;
          local_res18 = plVar8;
          FUN_142c9ea60(plVar7,&local_48);
          FUN_142cb0380(plVar7);
        }
      }
      else {
        plVar8 = plVar9;
        if (lVar4 != 0) {
          iVar3 = (int)plVar7[-4];
          if ((-1 < iVar3) && (iVar3 < *(int *)(lVar4 + 0x40))) {
            plVar8 = (longlong *)((longlong)iVar3 * 0x50 + *(longlong *)(lVar4 + 0x38));
          }
        }
        cVar5 = FWindowsSystemWideCriticalSection::IsValid(plVar7);
        if (((cVar5 != '\0') && (plVar8 != (longlong *)0x0)) && (*plVar8 != 0)) {
          local_c8 = (undefined4)plVar7[-3];
          uStack_c4 = (undefined4)((ulonglong)plVar7[-3] >> 0x20);
          local_88 = local_c8;
          uStack_84 = uStack_c4;
          uStack_80 = 0;
          uStack_7c = 0;
          FUN_142ca8f20(plVar7,&local_88,(char)plVar8[1],(int)plVar7[-1]);
          uStack_70 = &local_res10;
          local_78 = 0x40437760;
          uStack_74 = 1;
          local_res10 = plVar8;
          FUN_142c9ea60(plVar7,&local_78);
          FUN_142cb0380(plVar7);
        }
      }
      plVar10 = plVar10 + 7;
      plVar7 = plVar7 + 7;
    } while (plVar10 != plVar11);
  }
  return;
}



// FUNCTION 142dd7950 FUN_142dd7950 body=73 status=ok
// SIG undefined FUN_142dd7950(void)

void FUN_142dd7950(longlong *param_1)

{
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    (**(code **)(param_1[0xe0] + 8))(param_1 + 0xe0,*(undefined1 *)((longlong)param_1 + 0x6f1));
    param_1[0xdf] = param_1[0xf2];
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142dd7992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8f8))();
  return;
}



// FUNCTION 142dd79a0 FUN_142dd79a0 body=470 status=ok
// SIG undefined FUN_142dd79a0(void)

/* WARNING: Removing unreachable block (ram,0x000142dd7b5c) */

void FUN_142dd79a0(longlong param_1)

{
  longlong **pplVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  FUN_142ddf640();
  pplVar1 = (longlong **)(param_1 + 0x20);
  if (((*(int *)(param_1 + 0x28) == 0) || (*pplVar1 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**pplVar1 + 0x18))(), cVar5 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (((bVar4) && (*(longlong *)(param_1 + 8) != 0)) && (*(longlong *)(param_1 + 0x10) != 0)) {
    lVar6 = FUN_1428dfc70();
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar9 = lVar3;
    if (lVar3 != 0) {
      while (lVar9 != lVar6) {
        lVar9 = *(longlong *)(lVar9 + 0x30);
        if (lVar9 == 0) {
          return;
        }
      }
      if (lVar3 != 0) {
        lVar9 = 0;
        lVar6 = lVar9;
        if (lVar3 != 0) {
          lVar7 = FUN_1428dfc70();
          for (lVar3 = *(longlong *)(param_1 + 0x10);
              (lVar6 = lVar9, lVar3 != 0 && (lVar6 = *(longlong *)(param_1 + 0x10), lVar3 != lVar7))
              ; lVar3 = *(longlong *)(lVar3 + 0x30)) {
          }
        }
        lVar3 = *(longlong *)(lVar6 + 200);
        if (lVar3 != 0) {
          lVar6 = UBlueprint::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            plVar11 = (longlong *)(lVar3 + 0xc0);
            if ((*(int *)(param_1 + 0x28) != 0) && (plVar8 = *pplVar1, plVar8 != (longlong *)0x0)) {
              local_28 = (longlong *)0x0;
              local_20 = 0;
              if (pplVar1 != &local_28) {
                (**(code **)(*plVar8 + 0x30))(plVar8,&local_28);
              }
              FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
              if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
                plVar8 = (longlong *)(**(code **)(*local_28 + 0x20))(local_28,local_res8);
                lVar9 = *plVar8;
              }
              iVar2 = *(int *)(lVar3 + 200);
              *(int *)(lVar3 + 200) = iVar2 + 1;
              if (*(int *)(lVar3 + 0xcc) < iVar2 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar2);
              }
              puVar10 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar11);
              *puVar10 = 0;
              *puVar10 = local_28;
              *(int *)(puVar10 + 1) = local_20;
            }
            *(longlong *)(param_1 + 0x70) = lVar9;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142dd7b80 FUN_142dd7b80 body=438 status=ok
// SIG undefined FUN_142dd7b80(void)

void FUN_142dd7b80(longlong param_1,longlong *param_2)

{
  void *pvVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *local_res10;
  undefined1 local_res18 [16];
  longlong *local_78;
  longlong **local_70;
  longlong local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined1 local_3f;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = param_2[0x1f];
    local_res10 = param_2;
    if (lVar3 == 0) {
      (**(code **)(*param_2 + 0x368))(param_2);
      lVar3 = param_2[0x1f];
      if (lVar3 == 0) {
        return;
      }
    }
    plVar4 = *(longlong **)(lVar3 + 0xa0);
    plVar5 = plVar4 + (longlong)*(int *)(lVar3 + 0xa8) * 6;
    if (plVar4 != plVar5) {
      plVar2 = plVar4 + 4;
      do {
        local_58 = (int)plVar2[-2];
        lVar3 = (longlong)local_58;
        local_68 = *plVar4;
        pvVar1 = (void *)plVar2[-3];
        local_60 = (void *)0x0;
        if (local_58 == 0) {
          local_54 = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (&local_60,local_58,0);
          _guard_xfg_dispatch_icall_nop(local_60,pvVar1,lVar3 << 3);
        }
        local_48 = (int)*plVar2;
        lVar3 = (longlong)local_48;
        pvVar1 = (void *)plVar2[-1];
        local_50 = (void *)0x0;
        if (local_48 == 0) {
          local_44 = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(&local_50,local_48,0);
          _guard_xfg_dispatch_icall_nop(local_50,pvVar1,lVar3 << 2);
        }
        local_40 = (undefined1)plVar2[1];
        local_3f = *(undefined1 *)((longlong)plVar2 + 9);
        if ((local_68 != 0) &&
           (lVar3 = TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
                    ::FindPair(param_1 + 0x458), lVar3 == 0)) {
          local_78 = &local_68;
          local_70 = &local_res10;
          FUN_1405deec0(param_1 + 0x458,local_res18,&local_78,0);
        }
        if (local_50 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_60 != (void *)0x0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 6;
        plVar2 = plVar2 + 6;
      } while (plVar4 != plVar5);
    }
  }
  return;
}



// FUNCTION 142dd7d40 FUN_142dd7d40 body=1105 status=ok
// SIG undefined FUN_142dd7d40(void)

void FUN_142dd7d40(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *local_58;
  undefined8 local_50;
  
  lVar3 = param_1[0x24];
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  plVar15 = (longlong *)0x0;
  if ((lVar3 != 0) && (lVar3 = UWorld::GetGameState<APVPGameState>(lVar3), lVar3 != 0)) {
    plVar15 = *(longlong **)(lVar3 + 0x540);
  }
  plVar14 = (longlong *)*param_2;
  plVar1 = plVar14 + (int)param_2[1];
joined_r0x000142dd7db5:
  if (plVar14 == plVar1) {
    return;
  }
  plVar10 = (longlong *)0x0;
  plVar2 = (longlong *)*plVar14;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = (longlong *)FUN_142dfdfe0();
    plVar11 = plVar2;
    do {
      if (plVar11 == plVar4) {
        plVar4 = (longlong *)FUN_142dfdfe0();
        plVar11 = plVar2;
        goto LAB_142dd7e00;
      }
      plVar11 = (longlong *)plVar11[6];
    } while (plVar11 != (longlong *)0x0);
  }
  goto LAB_142dd814d;
  while (plVar11 = (longlong *)plVar11[6], plVar6 = plVar10, plVar11 != (longlong *)0x0) {
LAB_142dd7e00:
    plVar6 = plVar2;
    if (plVar11 == plVar4) break;
  }
  plVar11 = param_1 + 0x39;
  lVar3 = *plVar11;
  lVar5 = (longlong)(int)param_1[0x3a] * 0x80 + lVar3;
  for (; lVar3 != lVar5; lVar3 = lVar3 + 0x80) {
    if (*(longlong **)(lVar3 + 8) == plVar6) {
      if (lVar3 != 0) {
        lVar3 = FUN_142dcdb70();
        goto LAB_142dd7e67;
      }
      break;
    }
  }
  if (plVar6 == (longlong *)0x0) goto LAB_142dd814d;
  lVar3 = plVar6[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar3 = plVar6[0x1f];
LAB_142dd7e67:
    if (lVar3 == 0) goto LAB_142dd814d;
  }
  plVar6 = (longlong *)FUN_142dfdfe0();
  plVar4 = plVar2;
  do {
    plVar9 = plVar2;
    if (plVar4 == plVar6) break;
    plVar4 = (longlong *)plVar4[6];
    plVar9 = plVar10;
  } while (plVar4 != (longlong *)0x0);
  iVar13 = (int)param_1[0x3a];
  plVar4 = plVar10;
  while ((iVar12 = (int)plVar4, -1 < iVar12 && (iVar13 = (int)param_1[0x3a], iVar12 < iVar13))) {
    if (*(longlong **)((longlong)iVar12 * 0x80 + 8 + *plVar11) == plVar9) {
      plVar6 = (longlong *)FUN_142dfdfe0();
      plVar4 = plVar2;
      goto LAB_142dd7ed4;
    }
    plVar4 = (longlong *)(ulonglong)(iVar12 + 1);
  }
  lVar5 = param_1[0x23];
  *(int *)(param_1 + 0x3a) = iVar13 + 1;
  if (*(int *)((longlong)param_1 + 0x1d4) < iVar13 + 1) {
    TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow(plVar11,iVar13)
    ;
  }
  lVar7 = (longlong)iVar13 * 0x80 + *plVar11;
  plVar4 = (longlong *)FUN_142dfdfe0();
  plVar10 = plVar2;
  do {
    plVar6 = plVar2;
    if (plVar10 == plVar4) goto LAB_142dd7f7e;
    plVar10 = (longlong *)plVar10[6];
  } while (plVar10 != (longlong *)0x0);
  plVar6 = (longlong *)0x0;
LAB_142dd7f7e:
  FUN_142dc1570(lVar7,lVar5,plVar6,0);
  *(undefined1 *)(lVar7 + 0x7a) = param_3;
  plVar4 = (longlong *)FUN_142dfdfe0();
  plVar10 = plVar2;
  do {
    plVar6 = plVar2;
    if (plVar10 == plVar4) goto LAB_142dd7fb1;
    plVar10 = (longlong *)plVar10[6];
  } while (plVar10 != (longlong *)0x0);
  plVar6 = (longlong *)0x0;
LAB_142dd7fb1:
  uVar8 = (**(code **)(*param_1 + 0x438))(param_1,plVar6);
  *(undefined8 *)(lVar7 + 0x58) = uVar8;
  goto LAB_142dd7fc2;
  while (plVar4 = (longlong *)plVar4[6], plVar9 = plVar10, plVar4 != (longlong *)0x0) {
LAB_142dd7ed4:
    plVar9 = plVar2;
    if (plVar4 == plVar6) break;
  }
  lVar5 = *plVar11;
  lVar7 = (longlong)(int)param_1[0x3a] * 0x80 + lVar5;
  for (; lVar5 != lVar7; lVar5 = lVar5 + 0x80) {
    if (*(longlong **)(lVar5 + 8) == plVar9) {
      if (lVar5 != 0) {
        FUN_142dd9100(lVar5,param_1[0x23]);
        *(undefined1 *)(lVar5 + 0x7a) = param_3;
      }
      break;
    }
  }
LAB_142dd7fc2:
  plVar6 = (longlong *)0x0;
  plVar4 = (longlong *)FUN_142dfdfe0();
  plVar10 = plVar2;
  do {
    plVar9 = plVar2;
    if (plVar10 == plVar4) break;
    plVar10 = (longlong *)plVar10[6];
    plVar9 = plVar6;
  } while (plVar10 != (longlong *)0x0);
  (**(code **)(*param_1 + 0x450))(param_1,plVar9);
  plVar4 = (longlong *)FUN_142dfdfe0();
  plVar10 = plVar2;
  do {
    plVar9 = plVar2;
    if (plVar10 == plVar4) break;
    plVar10 = (longlong *)plVar10[6];
    plVar9 = plVar6;
  } while (plVar10 != (longlong *)0x0);
  FUN_142dd7b80(plVar15,plVar9);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  plVar4 = (longlong *)FUN_142dfdfe0();
  plVar10 = plVar2;
  do {
    plVar9 = plVar2;
    if (plVar10 == plVar4) break;
    plVar10 = (longlong *)plVar10[6];
    plVar9 = plVar6;
  } while (plVar10 != (longlong *)0x0);
  TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
  ::MultiFind<FDefaultAllocator>(plVar15 + 0x95,plVar9,&local_58);
  plVar10 = local_58;
  plVar4 = (longlong *)
           ((ulonglong)((longlong)(local_58 + (int)local_50) + (7 - (longlong)local_58)) >> 3);
  if (local_58 + (int)local_50 < local_58) {
    plVar4 = (longlong *)0x0;
  }
  plVar9 = local_58;
  if (plVar4 != (longlong *)0x0) {
    do {
      if (*plVar9 != 0) {
        FUN_142dd4510(lVar3);
      }
      plVar9 = plVar9 + 1;
      plVar6 = (longlong *)((longlong)plVar6 + 1);
    } while (plVar6 != plVar4);
  }
  plVar6 = (longlong *)FUN_142dfdfe0();
  plVar4 = plVar2;
  do {
    plVar9 = plVar2;
    if (plVar4 == plVar6) goto LAB_142dd80cd;
    plVar4 = (longlong *)plVar4[6];
  } while (plVar4 != (longlong *)0x0);
  plVar9 = (longlong *)0x0;
LAB_142dd80cd:
  lVar3 = *plVar11;
  lVar5 = (longlong)(int)param_1[0x3a] * 0x80 + lVar3;
  for (; lVar3 != lVar5; lVar3 = lVar3 + 0x80) {
    if (*(longlong **)(lVar3 + 8) == plVar9) {
      if (((lVar3 != 0) && (*(char *)(lVar3 + 0x50) != '\0')) && (*(char *)(lVar3 + 0x7a) != '\0'))
      {
        plVar4 = (longlong *)FUN_142dfdfe0();
        plVar11 = plVar2;
        goto LAB_142dd8110;
      }
      break;
    }
  }
LAB_142dd8138:
  if (plVar10 != (longlong *)0x0) {
    FMemory::Free(plVar10);
  }
LAB_142dd814d:
  plVar14 = plVar14 + 1;
  goto joined_r0x000142dd7db5;
  while (plVar11 = (longlong *)plVar11[6], plVar6 = (longlong *)0x0, plVar11 != (longlong *)0x0) {
LAB_142dd8110:
    plVar6 = plVar2;
    if (plVar11 == plVar4) break;
  }
  (**(code **)(*plVar15 + 0x708))(plVar15,param_1,plVar6);
  goto LAB_142dd8138;
}



// FUNCTION 142dd81a0 FUN_142dd81a0 body=760 status=ok
// SIG undefined FUN_142dd81a0(void)

void FUN_142dd81a0(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  longlong *local_res10;
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
  
  if (param_2 != (longlong *)0x0) {
    local_res10 = param_2;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x508,&local_res10);
    uStack_94 = 1;
    plVar2 = (longlong *)(param_1 + 0x4a8);
    uVar4 = *(uint *)(param_1 + 0x4d0);
    puVar1 = (uint *)(param_1 + 0x4b8);
    local_98 = 0;
    uStack_84 = 0;
    iStack_80 = 0;
    if (uVar4 != 0) {
      puVar15 = *(uint **)(param_1 + 0x4c8);
      if (*(uint **)(param_1 + 0x4c8) == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar5 = *puVar15;
      iStack_80 = 0;
      local_98 = 0;
      while (uVar5 == 0) {
        lVar12 = (longlong)local_98;
        iStack_80 = iStack_80 + 0x20;
        iVar10 = local_98 + 1;
        bVar6 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
        local_98 = iVar10;
        if (bVar6) goto LAB_142dd829d;
        uVar5 = puVar15[lVar12 + 1];
      }
      uStack_94 = uVar5 - 1 & uVar5 ^ uVar5;
      iVar10 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_84 = (iStack_80 - iVar10) + 0x1f;
      if ((int)uVar4 < (int)uStack_84) {
LAB_142dd829d:
        uStack_84 = uVar4;
      }
    }
    uVar5 = *(uint *)(param_1 + 0x4d0);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_84;
    local_58 = CONCAT44(uStack_7c,iStack_80);
    uStack_48 = CONCAT44(uStack_94,local_98);
    uVar14 = uVar5 & 0xffffffe0;
    iStack_70 = local_98;
    uStack_6c = uStack_94;
    plVar7 = plVar2;
    local_res10 = plVar2;
    local_68 = puVar1;
    local_50 = plVar2;
    puStack_40 = puVar1;
    uStack_30 = local_58;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_84 = uVar5;
    if (uVar5 != uVar4) {
      puVar15 = *(uint **)(param_1 + 0x4c8);
      if (*(uint **)(param_1 + 0x4c8) == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar11 = puVar15[(int)uVar5 >> 5] & -1 << ((byte)uVar5 & 0x1f);
      iVar10 = (int)uVar5 >> 5;
      while (uVar11 == 0) {
        uVar14 = uVar14 + 0x20;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
        goto LAB_142dd8375;
        uVar11 = puVar15[(longlong)iVar10 + 1];
        iVar10 = iVar10 + 1;
      }
      uVar11 = uVar11 - 1 & uVar11 ^ uVar11;
      iVar10 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uVar11 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_84 = (uVar14 - iVar10) + 0x1f;
      if ((int)uVar4 < (int)uStack_84) {
LAB_142dd8375:
        uStack_84 = uVar4;
      }
    }
    while( true ) {
      if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if ((bVar6) && (plVar2 == plVar7)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) break;
      lVar12 = *plVar2 + (longlong)(int)uStack_5c * 0x18;
      if (*(longlong *)(*plVar2 + 8 + (longlong)(int)uStack_5c * 0x18) != 0) {
        (**(code **)(*param_2 + 0x28))(param_2);
        plVar7 = (longlong *)UAssetRegistryImpl::OnInMemoryAssetDeleted(*(undefined8 *)(lVar12 + 8))
        ;
        lVar13 = *plVar7;
        lVar3 = lVar13 + (longlong)(int)plVar7[1] * 8;
        plVar7 = local_res10;
        for (; local_res10 = plVar7, lVar13 != lVar3; lVar13 = lVar13 + 8) {
          lVar8 = FWeakObjectPtr::Get(lVar13);
          if (lVar8 != 0) {
            lVar9 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              (**(code **)(*param_2 + 0x30))(param_2,*(undefined8 *)(lVar12 + 8),lVar8);
            }
          }
          plVar7 = local_res10;
        }
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    }
  }
  return;
}



// FUNCTION 142dd84a0 FUN_142dd84a0 body=1763 status=ok
// SIG undefined FUN_142dd84a0(void)

void FUN_142dd84a0(longlong *param_1)

{
  void *_Src;
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong *local_res18;
  longlong local_80;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  int local_58;
  
  lVar4 = param_1[0x24];
  if ((lVar4 != 0) || (lVar4 = FUN_1423407b0(), lVar4 != 0)) {
    UObjectBaseUtility::GetOutermost(lVar4);
  }
  lVar6 = param_1[0x24];
  lVar10 = 0;
  lVar5 = lVar6;
  if (lVar6 == 0) {
    lVar6 = FUN_1423407b0(param_1);
    lVar5 = param_1[0x24];
  }
  lVar12 = lVar10;
  if (lVar6 != 0) {
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    lVar6 = UWorld::GetAuthGameMode<ABaseGameMode>(lVar5);
    lVar12 = 0;
    if ((lVar6 != 0) && (lVar6 = FUN_142d77040(lVar6), lVar6 != 0)) {
      lVar12 = *(longlong *)(lVar6 + 0x540);
    }
  }
  lVar6 = param_1[0x24];
  if (lVar6 == 0) {
    lVar6 = FUN_1423407b0(param_1);
  }
  if (lVar6 != 0) {
    lVar6 = UObjectBaseUtility::GetOutermost(lVar6);
    lVar10 = *(longlong *)(lVar6 + 0x18);
  }
  iVar19 = (int)param_1[0x3a] + -1;
  if (-1 < iVar19) {
    lVar5 = (longlong)iVar19 << 7;
    lVar6 = lVar5;
    do {
      lVar7 = FUN_142dcdb70(param_1[0x39] + lVar5);
      if (((lVar7 != 0) && (*(longlong *)(lVar7 + 0x90) != 0)) &&
         (*(longlong *)(lVar7 + 0x90) != lVar10)) {
        if (lVar12 != 0) {
          FUN_142ddf7e0(lVar12,param_1[0x39] + lVar5);
        }
        (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(lVar6 + 8 + param_1[0x39]));
        FUN_142dc8b20(param_1[0x39] + lVar5);
      }
      lVar5 = lVar5 + -0x80;
      lVar6 = lVar6 + -0x80;
      iVar19 = iVar19 + -1;
    } while (-1 < iVar19);
  }
  local_80 = param_1[0x23];
  if (local_80 != 0) {
    lVar6 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(local_80 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_80 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142dd865f;
  }
  local_80 = 0;
LAB_142dd865f:
  plVar21 = (longlong *)0x0;
  if ((lVar4 != 0) && (lVar4 = UWorld::GetGameState<APVPGameState>(lVar4), lVar4 != 0)) {
    plVar21 = *(longlong **)(lVar4 + 0x540);
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if ((plVar21 != (longlong *)0x0) && (*(longlong **)(DAT_146b33f38 + 0x58) != (longlong *)0x0)) {
    puVar8 = (undefined8 *)(**(code **)(**(longlong **)(DAT_146b33f38 + 0x58) + 0x290))();
    local_res18 = (longlong *)0x0;
    local_60 = (longlong *)0x0;
    local_58 = *(int *)(puVar8 + 1);
    lVar4 = (longlong)local_58;
    _Src = (void *)*puVar8;
    if (local_58 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_60,local_58,0);
      local_res18 = local_60;
      _guard_xfg_dispatch_icall_nop(local_60,_Src,lVar4 << 3);
    }
    plVar14 = local_res18 + local_58;
    plVar9 = local_res18;
    for (; local_res18 != plVar14; local_res18 = local_res18 + 1) {
      plVar9 = (longlong *)*local_res18;
      if (plVar9 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar9 + 0x280))(plVar9,local_80);
        lVar6 = *(longlong *)(*local_res18 + 0x38);
        lVar4 = lVar6 + (longlong)*(int *)(*local_res18 + 0x40) * 0x28;
        if (lVar6 != lVar4) {
LAB_142dd8780:
          plVar9 = (longlong *)FWeakObjectPtr::Get(lVar6);
          if (plVar9 == (longlong *)0x0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != *(int *)(lVar6 + 8)) && (*(longlong *)(lVar6 + 0x10) != 0)) {
              lVar10 = FUN_141796df0();
              FWeakObjectPtr::operator=(lVar6,lVar10);
              if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(lVar6 + 8) = DAT_1464b56f4;
              }
              plVar9 = (longlong *)FWeakObjectPtr::Get(lVar6);
              if (plVar9 != (longlong *)0x0) goto LAB_142dd87ff;
            }
          }
          else {
LAB_142dd87ff:
            lVar10 = FUN_14171bfe0();
            if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                lVar10 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              plVar11 = (longlong *)FUN_142dfdfe0();
              plVar15 = plVar9;
              do {
                if (plVar15 == plVar11) {
                  plVar15 = param_1 + 0x39;
                  lVar10 = *plVar15;
                  lVar5 = (longlong)(int)param_1[0x3a] * 0x80 + lVar10;
                  goto joined_r0x000142dd886c;
                }
                plVar15 = (longlong *)plVar15[6];
              } while (plVar15 != (longlong *)0x0);
            }
          }
          goto LAB_142dd8ab1;
        }
      }
LAB_142dd8acd:
      plVar9 = local_60;
    }
    lVar4 = param_1[0x39];
    lVar6 = (longlong)(int)param_1[0x3a] * 0x80 + lVar4;
    for (; lVar4 != lVar6; lVar4 = lVar4 + 0x80) {
      lVar10 = *(longlong *)(lVar4 + 8);
      lVar5 = 0;
      if (lVar10 != 0) {
        lVar7 = FUN_142dfdfe0();
        lVar12 = lVar10;
        do {
          lVar5 = lVar10;
          if (lVar12 == lVar7) break;
          lVar12 = *(longlong *)(lVar12 + 0x30);
          lVar5 = 0;
        } while (lVar12 != 0);
      }
      FUN_142de02d0(param_1,lVar5);
    }
    if (plVar9 != (longlong *)0x0) {
      FMemory::Free(plVar9);
    }
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x2f,0);
  return;
joined_r0x000142dd886c:
  if (lVar10 == lVar5) goto LAB_142dd887f;
  if (*(longlong **)(lVar10 + 8) == plVar9) {
    if (lVar10 != 0) {
      lVar10 = FUN_142dcdb70();
      goto LAB_142dd889e;
    }
    goto LAB_142dd887f;
  }
  lVar10 = lVar10 + 0x80;
  goto joined_r0x000142dd886c;
LAB_142dd887f:
  lVar10 = plVar9[0x1f];
  if (lVar10 == 0) {
    (**(code **)(*plVar9 + 0x368))();
    lVar10 = plVar9[0x1f];
LAB_142dd889e:
    if (lVar10 == 0) goto LAB_142dd8ab1;
  }
  iVar19 = 0;
  do {
    if (iVar19 < 0) {
      iVar16 = (int)param_1[0x3a];
LAB_142dd88d6:
      bVar1 = false;
    }
    else {
      iVar16 = (int)param_1[0x3a];
      if (iVar16 <= iVar19) goto LAB_142dd88d6;
      bVar1 = true;
    }
    if (!bVar1) {
      uVar3 = (**(code **)(*param_1 + 0x448))(param_1,*local_res18,plVar9);
      iVar19 = (int)param_1[0x3a];
      lVar5 = param_1[0x23];
      *(int *)(param_1 + 0x3a) = iVar19 + 1;
      if (*(int *)((longlong)param_1 + 0x1d4) < iVar19 + 1) {
        TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                  (plVar15,iVar19);
      }
      lVar12 = (longlong)iVar19 * 0x80 + *plVar15;
      FUN_142dc1570(lVar12,lVar5,plVar9,uVar3);
      *(undefined1 *)(lVar12 + 0x7a) = uVar2;
      uVar13 = (**(code **)(*param_1 + 0x438))(param_1,plVar9);
      *(undefined8 *)(lVar12 + 0x58) = uVar13;
      goto LAB_142dd89ac;
    }
    lVar5 = *plVar15;
    if (*(longlong **)((longlong)iVar19 * 0x80 + 8 + lVar5) == plVar9) break;
    iVar19 = iVar19 + 1;
  } while( true );
  lVar12 = (longlong)iVar16 * 0x80 + lVar5;
  for (; lVar5 != lVar12; lVar5 = lVar5 + 0x80) {
    if (*(longlong **)(lVar5 + 8) == plVar9) {
      if (lVar5 != 0) {
        FUN_142dd9100(lVar5,param_1[0x23]);
        *(undefined1 *)(lVar5 + 0x7a) = uVar2;
      }
      break;
    }
  }
LAB_142dd89ac:
  (**(code **)(*param_1 + 0x450))(param_1,plVar9);
  FUN_142dd7b80(plVar21,plVar9);
  uVar20 = 0;
  local_70 = (longlong *)0x0;
  local_68 = 0;
  TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
  ::MultiFind<FDefaultAllocator>(plVar21 + 0x95,plVar9,&local_70,0);
  plVar11 = local_70;
  uVar18 = (ulonglong)((longlong)(local_70 + (int)local_68) + (7 - (longlong)local_70)) >> 3;
  if (local_70 + (int)local_68 < local_70) {
    uVar18 = uVar20;
  }
  plVar17 = local_70;
  if (uVar18 != 0) {
    do {
      if (*plVar17 != 0) {
        FUN_142dd4510(lVar10);
      }
      plVar17 = plVar17 + 1;
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar18);
  }
  lVar10 = *plVar15;
  lVar5 = (longlong)(int)param_1[0x3a] * 0x80 + lVar10;
  for (; lVar10 != lVar5; lVar10 = lVar10 + 0x80) {
    if (*(longlong **)(lVar10 + 8) == plVar9) {
      if (((lVar10 != 0) && (*(char *)(lVar10 + 0x50) != '\0')) &&
         (*(char *)(lVar10 + 0x7a) != '\0')) {
        (**(code **)(*plVar21 + 0x708))(plVar21,param_1,plVar9);
      }
      break;
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
LAB_142dd8ab1:
  lVar6 = lVar6 + 0x28;
  if (lVar6 == lVar4) goto LAB_142dd8acd;
  goto LAB_142dd8780;
}



// FUNCTION 142dd8b90 FUN_142dd8b90 body=556 status=ok
// SIG undefined FUN_142dd8b90(void)

void FUN_142dd8b90(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  ulonglong local_res18;
  ulonglong *local_28;
  longlong *local_20;
  
  local_res10 = param_2;
  lVar3 = (**(code **)(*param_1 + 0x148))();
  lVar6 = local_res10;
  if (((lVar3 != 0) && (local_res10 != 0)) && (*(longlong *)(local_res10 + 0x758) != 0)) {
    lVar4 = FUN_142dfdfe0();
    lVar1 = local_res10;
    lVar6 = *(longlong *)(lVar6 + 0x758);
    lVar10 = lVar6;
    if (lVar6 != 0) {
      while (lVar10 != lVar4) {
        lVar10 = *(longlong *)(lVar10 + 0x30);
        if (lVar10 == 0) {
          return;
        }
      }
      if (lVar6 != 0) {
        uVar12 = 0;
        local_res18 = uVar12;
        if (*(longlong *)(local_res10 + 0x758) != 0) {
          uVar5 = FUN_142dfdfe0();
          for (uVar11 = *(ulonglong *)(lVar1 + 0x758);
              (local_res18 = uVar12, uVar11 != 0 &&
              (local_res18 = *(ulonglong *)(lVar1 + 0x758), uVar11 != uVar5));
              uVar11 = *(ulonglong *)(uVar11 + 0x30)) {
          }
        }
        lVar6 = TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
                ::FindPair(param_1 + 0x95,local_res18,local_res10);
        if (lVar6 == 0) {
          local_28 = &local_res18;
          local_20 = &local_res10;
          FUN_1405deec0(param_1 + 0x95,local_res8,&local_28,0);
        }
        UWorld::GetPlayerControllerIterator(lVar3,&local_28);
        iVar2 = (int)local_20;
        while ((-1 < iVar2 && (iVar2 < (int)local_28[1]))) {
          plVar7 = (longlong *)FWeakObjectPtr::Get(*local_28 + (longlong)iVar2 * 8);
          if (plVar7 != (longlong *)0x0) {
            uVar8 = FUN_142e035e0();
            lVar3 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar8);
            lVar6 = local_res10;
            if (lVar3 != 0) {
              uVar11 = uVar12;
              if (*(longlong *)(local_res10 + 0x758) != 0) {
                uVar9 = FUN_142dfdfe0();
                for (uVar5 = *(ulonglong *)(lVar6 + 0x758);
                    (uVar11 = uVar12, uVar5 != 0 &&
                    (uVar11 = *(ulonglong *)(lVar6 + 0x758), uVar5 != uVar9));
                    uVar5 = *(ulonglong *)(uVar5 + 0x30)) {
                }
              }
              lVar6 = FUN_142dcdc10(lVar3,uVar11);
              if (lVar6 != 0) {
                FUN_142dd4510(lVar6,local_res10);
              }
            }
          }
          iVar2 = (int)local_20 + 1;
          local_20 = (longlong *)CONCAT44(local_20._4_4_,iVar2);
        }
        puVar13 = (undefined8 *)param_1[0xa1];
        uVar11 = (longlong)(int)param_1[0xa2] & 0x1fffffffffffffff;
        if (puVar13 + (int)param_1[0xa2] < puVar13) {
          uVar11 = uVar12;
        }
        if (uVar11 != 0) {
          do {
            (**(code **)(*(longlong *)*puVar13 + 0x10))((longlong *)*puVar13,local_res10);
            uVar12 = uVar12 + 1;
            puVar13 = puVar13 + 1;
          } while (uVar12 != uVar11);
        }
      }
    }
  }
  return;
}



// FUNCTION 142dd8dc0 FUN_142dd8dc0 body=151 status=ok
// SIG undefined FUN_142dd8dc0(void)

void FUN_142dd8dc0(undefined8 param_1,longlong param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res10;
  
  if (param_2 != 0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&AChallengeManager::OnStatIncrement",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res10,pwVar2 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void,UParticleSystemComponent_*>::
    __Internal_AddUniqueDynamic<AEmitter>(param_2 + 0x458,param_1,thunk_FUN_142dd4c20,local_res10);
  }
  return;
}



// FUNCTION 142dd8e60 FUN_142dd8e60 body=669 status=ok
// SIG undefined FUN_142dd8e60(void)

void FUN_142dd8e60(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  bool bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong *puVar15;
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
  
  lVar1 = param_1 + 0x130;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    uVar4 = FMemory::Realloc(*(longlong *)(param_1 + 0x150),0,0);
    *(undefined8 *)(param_1 + 0x150) = uVar4;
  }
  puVar2 = (uint *)(param_1 + 0x158);
  uVar8 = *puVar2;
  if (uVar8 != 0) {
    FUN_1406f49a0();
    if (0 < (int)uVar8) {
      uVar5 = 0;
      uVar13 = (ulonglong)uVar8;
      do {
        lVar11 = *(longlong *)(param_1 + 0x150);
        if (*(longlong *)(param_1 + 0x150) == 0) {
          lVar11 = lVar1;
        }
        uVar9 = (longlong)(int)*puVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(lVar11 + uVar9 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    uStack_54 = 1;
    puStack_28 = (uint *)(param_1 + 0x110);
    local_58 = 0;
    iVar7 = *(int *)(param_1 + 0x120);
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar7 != 0) {
      puVar14 = *(uint **)(param_1 + 0x118);
      if (*(uint **)(param_1 + 0x118) == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar8 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar11 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar6 = local_58 + 1;
        bVar3 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar6;
        if (bVar3) goto LAB_142dd8faf;
        uVar8 = puVar14[lVar11 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
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
      if (iVar7 < iStack_44) {
LAB_142dd8faf:
        iStack_44 = iVar7;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar7) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar11 = param_1;
        }
        puVar15 = (ulonglong *)(lVar11 + (longlong)iStack_1c * 0x10);
        iVar7 = (int)(*puVar15 >> 4);
        uVar12 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
        uVar10 = -(uVar12 + iVar7) ^ uVar12 >> 0xd;
        uVar8 = (iVar7 - uVar12) - uVar10 ^ uVar10 >> 0xc;
        uVar12 = (uVar12 - uVar8) - uVar10 ^ uVar8 << 0x10;
        uVar10 = (uVar10 - uVar12) - uVar8 ^ uVar12 >> 5;
        uVar8 = (uVar8 - uVar12) - uVar10 ^ uVar10 >> 3;
        uVar12 = (uVar12 - uVar8) - uVar10 ^ uVar8 << 10;
        uVar8 = ((uVar10 - uVar12) - uVar8 ^ uVar12 >> 0xf) & *puVar2 - 1;
        *(uint *)((longlong)puVar15 + 0xc) = uVar8;
        lVar11 = *(longlong *)(param_1 + 0x150);
        if (*(longlong *)(param_1 + 0x150) == 0) {
          lVar11 = lVar1;
        }
        *(undefined4 *)(puVar15 + 1) =
             *(undefined4 *)(lVar11 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar8) * 4);
        lVar11 = *(longlong *)(param_1 + 0x150);
        if (*(longlong *)(param_1 + 0x150) == 0) {
          lVar11 = lVar1;
        }
        *(int *)(lVar11 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar8) * 4) = iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        FUN_1406e9690(&local_30);
      } while (iStack_1c < (int)puStack_28[4]);
    }
  }
  return;
}



// FUNCTION 142dd9100 FUN_142dd9100 body=483 status=ok
// SIG undefined FUN_142dd9100(void)

void FUN_142dd9100(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  if ((param_2 == 0) || (param_1[1] == 0)) {
    param_1[0xd] = 0;
    return;
  }
  plVar2 = (longlong *)*param_1;
  uVar5 = FUN_142e035e0();
  lVar6 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar5);
  if (lVar6 == 0) {
    param_1[0xd] = 0;
    return;
  }
  if (param_1[0xd] != 0) {
    if (*param_1 == param_2) goto LAB_142dd9194;
    if (param_1[0xd] != 0) {
      FUN_142dc8b20(param_1);
    }
  }
  lVar7 = NewObject<USaveGame>(lVar6,param_1[1],0,0,0,0,0);
  param_1[0xd] = lVar7;
LAB_142dd9194:
  lVar7 = param_1[0xd];
  *param_1 = param_2;
  if (lVar7 != 0) {
    if ((char)param_1[0xf] == '\0') {
      lVar7 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_142dd1c90(param_1[0xd],lVar6,*(undefined8 *)(param_2 + 0x848),param_1);
        *(undefined1 *)(param_1 + 0xf) = 1;
      }
      lVar7 = param_1[0xd];
      puVar8 = *(undefined8 **)(lVar7 + 0xa0);
      puVar9 = puVar8 + (longlong)*(int *)(lVar7 + 0xa8) * 6;
      if (puVar8 != puVar9) {
        do {
          if ((*(char *)(puVar8 + 5) != '\0') &&
             (cVar4 = FUN_142dc0210(param_1 + 8,puVar8), cVar4 == '\0')) {
            iVar1 = (int)param_1[9];
            *(int *)(param_1 + 9) = iVar1 + 1;
            if (*(int *)((longlong)param_1 + 0x4c) < iVar1 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
              ResizeGrow(param_1 + 8,iVar1);
            }
            FUN_142dc1770((longlong)iVar1 * 0x38 + param_1[8],*puVar8,0);
          }
          puVar8 = puVar8 + 6;
        } while (puVar8 != puVar9);
        lVar7 = param_1[0xd];
      }
    }
    if (*(char *)(lVar7 + 0xe0) != '\0') {
      cVar4 = FUN_142dd3600(param_1);
      if ((cVar4 != '\0') &&
         ((*(char *)((longlong)param_1 + 0x51) == '\0' || (*(char *)(param_1[0xd] + 0x89) != '\0')))
         ) {
        *(undefined1 *)(param_1 + 10) = 1;
        return;
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return;
}



// FUNCTION 142dd92f0 FUN_142dd92f0 body=414 status=ok
// SIG undefined FUN_142dd92f0(void)

int FUN_142dd92f0(longlong *param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar4 = 0;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if ((int)param_1[9] == 0) {
    return 0;
  }
  iVar6 = (int)(param_2 >> 4);
  uVar5 = 0x9e3779b9U - iVar6 ^ iVar6 << 8;
  uVar3 = -(uVar5 + iVar6) ^ uVar5 >> 0xd;
  uVar7 = (iVar6 - uVar5) - uVar3 ^ uVar3 >> 0xc;
  uVar5 = (uVar5 - uVar7) - uVar3 ^ uVar7 << 0x10;
  uVar3 = (uVar3 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar7 = (uVar7 - uVar5) - uVar3 ^ uVar3 >> 3;
  uVar5 = (uVar5 - uVar7) - uVar3 ^ uVar7 << 10;
  plVar2 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar2 = param_1 + 7;
  }
  iVar6 = *(int *)((longlong)plVar2 +
                  (((longlong)(int)((uVar3 - uVar5) - uVar7) ^ (ulonglong)(uVar5 >> 0xf)) &
                  (longlong)(int)param_1[9] - 1U) * 4);
  iVar1 = iVar6;
  if (iVar6 != -1) {
    do {
      iVar6 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18);
      if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) break;
      iVar1 = iVar6;
    } while (iVar6 != -1);
  }
  do {
    if (iVar1 == -1) {
      return iVar4;
    }
    if (*(longlong *)(*param_1 + 8 + (longlong)iVar1 * 0x18) == param_3) {
      TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
      ::Remove(param_1,iVar1);
      iVar4 = iVar4 + 1;
    }
    if (iVar6 == -1) {
      return iVar4;
    }
    iVar1 = iVar6;
    do {
      iVar6 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18);
      if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) break;
      iVar1 = iVar6;
    } while (iVar6 != -1);
  } while( true );
}



// FUNCTION 142dd9490 FUN_142dd9490 body=42 status=ok
// SIG undefined FUN_142dd9490(void)

undefined1 FUN_142dd9490(undefined8 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_142dd3d30();
  if (cVar1 != '\0') {
    uVar2 = FUN_142dd99b0(*param_1,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 142dd94c0 FUN_142dd94c0 body=277 status=ok
// SIG undefined FUN_142dd94c0(void)

void FUN_142dd94c0(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_3 != 0) {
    plVar3 = (longlong *)(*param_1 + 0x38 + (longlong)param_2 * 0x70);
    iVar2 = param_3;
    do {
      if (plVar3[2] != 0) {
        FMemory::Free();
      }
      iVar4 = (int)plVar3[1];
      lVar1 = *plVar3;
      if (iVar4 != 0) {
        do {
          FUN_140a7c7a0(lVar1);
          lVar1 = lVar1 + 0x1c0;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        lVar1 = *plVar3;
      }
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
      if (plVar3[-2] != 0) {
        FMemory::Free();
      }
      TArray<FAnimNode_SaveCachedPose::FCachedUpdateContext,TSizedDefaultAllocator<32>_>::
      ~TArray<FAnimNode_SaveCachedPose::FCachedUpdateContext,TSizedDefaultAllocator<32>_>
                (plVar3 + -4);
      plVar3 = plVar3 + 0xe;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = (int)param_1[1];
    iVar4 = (iVar2 - param_2) - param_3;
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0x70 + *param_1),
                 (void *)((longlong)(param_2 + param_3) * 0x70 + *param_1),(longlong)iVar4 * 0x70);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 - param_3;
    if (param_4 != '\0') {
      TArray<FSvoNode,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 142dd95e0 FUN_142dd95e0 body=218 status=ok
// SIG undefined FUN_142dd95e0(void)

void FUN_142dd95e0(longlong *param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar4 = (int)param_1[1];
  if ((0 < iVar4) && (iVar5 = iVar4 + -1, -1 < iVar5)) {
    lVar6 = (longlong)iVar5 << 4;
    lVar7 = (longlong)iVar4 << 4;
    lVar8 = lVar6;
    do {
      lVar2 = *param_1;
      fVar1 = *(float *)(lVar6 + 0xc + lVar2);
      if ((0.0 < fVar1) && (fVar1 < param_2)) {
        iVar4 = (int)param_1[1];
        iVar3 = (iVar4 - iVar5) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar8 + lVar2),(void *)(lVar7 + lVar2),(longlong)iVar3 << 4);
          iVar4 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar4 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -0x10;
      lVar6 = lVar6 + -0x10;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return;
}



// FUNCTION 142dd96c0 FUN_142dd96c0 body=193 status=ok
// SIG undefined FUN_142dd96c0(void)

undefined8 FUN_142dd96c0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = *(int *)(param_1 + 0x50) + -1;
  if (-1 < iVar4) {
    lVar2 = (longlong)iVar4;
    piVar5 = (int *)(*(longlong *)(param_1 + 0x48) + (lVar2 * 9 + 7) * 8);
    do {
      if (*piVar5 == param_2) {
        FUN_142dd48a0(param_1,*(longlong *)(param_1 + 0x48) + (longlong)iVar4 * 0x48);
        iVar1 = *(int *)(param_1 + 0x50);
        iVar3 = (iVar1 - iVar4) + -1;
        if (iVar3 != 0) {
          lVar2 = *(longlong *)(param_1 + 0x48);
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar2 + (longlong)iVar4 * 0x48),
                     (void *)(lVar2 + (longlong)(iVar4 + 1) * 0x48),(longlong)iVar3 * 0x48);
          iVar1 = *(int *)(param_1 + 0x50);
        }
        *(int *)(param_1 + 0x50) = iVar1 + -1;
        TArray<FMiniMapEntry,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x48));
        return 1;
      }
      iVar4 = iVar4 + -1;
      piVar5 = piVar5 + -0x12;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return 0;
}



// FUNCTION 142dd9790 FUN_142dd9790 body=247 status=ok
// SIG undefined FUN_142dd9790(void)

undefined8 FUN_142dd9790(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (*param_2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x180);
    lVar2 = (longlong)*(int *)(param_1 + 0x188) * 0x70 + lVar3;
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0x70) {
      if ((*(longlong *)(lVar3 + 8) != 0) && (*(longlong *)(lVar3 + 8) == *param_2)) {
        if (*(char *)(lVar3 + 0x60) != '\0') {
          return 0;
        }
        if (param_2[1] != 0) {
          iVar5 = *(int *)(lVar3 + 0x50) + -1;
          if (-1 < iVar5) {
            lVar4 = (longlong)iVar5 * 0x48;
            lVar2 = lVar4;
            do {
              if ((param_2[1] == 0) ||
                 (cVar1 = FUN_14058c1e0(*(longlong *)(lVar3 + 0x48) + 8 + lVar4), cVar1 != '\0')) {
                FUN_142dd96c0(lVar3,*(undefined4 *)(lVar2 + 0x38 + *(longlong *)(lVar3 + 0x48)));
              }
              lVar4 = lVar4 + -0x48;
              lVar2 = lVar2 + -0x48;
              iVar5 = iVar5 + -1;
            } while (-1 < iVar5);
          }
          return 1;
        }
        FUN_142ddd0c0(lVar3);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142dd9890 FUN_142dd9890 body=279 status=ok
// SIG undefined FUN_142dd9890(void)

undefined8 FUN_142dd9890(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  if (param_1 != (longlong *)0x0) {
    uVar2 = UNavigateHomeCharacterWidget::GetPrivateStaticClass();
    lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
    if ((lVar3 != 0) && (*param_2 != 0)) {
      lVar4 = *(longlong *)(lVar3 + 0x180);
      lVar3 = (longlong)*(int *)(lVar3 + 0x188) * 0x70 + lVar4;
      for (; lVar4 != lVar3; lVar4 = lVar4 + 0x70) {
        if ((*(longlong *)(lVar4 + 8) != 0) && (*(longlong *)(lVar4 + 8) == *param_2)) {
          if (*(char *)(lVar4 + 0x60) != '\0') {
            return 0;
          }
          if (param_2[1] != 0) {
            iVar6 = *(int *)(lVar4 + 0x50) + -1;
            if (-1 < iVar6) {
              lVar5 = (longlong)iVar6 * 0x48;
              lVar3 = lVar5;
              do {
                if ((param_2[1] == 0) ||
                   (cVar1 = FUN_14058c1e0(*(longlong *)(lVar4 + 0x48) + 8 + lVar5), cVar1 != '\0'))
                {
                  FUN_142dd96c0(lVar4,*(undefined4 *)(lVar3 + 0x38 + *(longlong *)(lVar4 + 0x48)));
                }
                lVar5 = lVar5 + -0x48;
                lVar3 = lVar3 + -0x48;
                iVar6 = iVar6 + -1;
              } while (-1 < iVar6);
            }
            return 1;
          }
          FUN_142ddd0c0(lVar4);
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142dd99b0 FUN_142dd99b0 body=119 status=ok
// SIG undefined FUN_142dd99b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142dd99b0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x180);
  lVar4 = (longlong)*(int *)(param_1 + 0x188) * 0x70 + lVar3;
  while( true ) {
    if (lVar3 == lVar4) {
      return 0;
    }
    if ((*(longlong *)(lVar3 + 8) != 0) && (*(longlong *)(lVar3 + 8) == param_2[1])) break;
    lVar3 = lVar3 + 0x70;
  }
  if (*(char *)(lVar3 + 0x60) != '\0') {
    return 0;
  }
  cVar2 = FUN_142dd96c0(lVar3,*(undefined4 *)(param_2 + 2));
  uVar1 = uRam00000001466ad830;
  if (cVar2 == '\0') {
    return 0;
  }
  *param_2 = _DAT_1466ad828;
  param_2[1] = uVar1;
  param_2[2] = DAT_1466ad838;
  return 1;
}



// FUNCTION 142dd9a30 FUN_142dd9a30 body=81 status=ok
// SIG undefined FUN_142dd9a30(void)

undefined1 FUN_142dd9a30(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = UNavigateHomeCharacterWidget::GetPrivateStaticClass();
    lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar3 != 0) {
      uVar2 = FUN_142dd99b0(lVar3,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 142dd9a90 FUN_142dd9a90 body=306 status=ok
// SIG undefined FUN_142dd9a90(void)

void FUN_142dd9a90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_1 + 0x180);
  lVar7 = (longlong)*(int *)(param_1 + 0x188) * 0x70 + lVar8;
  do {
    if (lVar8 == lVar7) {
      return;
    }
    lVar2 = *(longlong *)(lVar8 + 8);
    if (lVar2 != 0) {
      if ((int)param_2[1] != 0) {
        plVar6 = (longlong *)*param_2;
        plVar1 = plVar6 + (int)param_2[1];
        if (plVar6 != plVar1) {
          plVar3 = *(longlong **)(lVar2 + 0x60);
          do {
            if (plVar3 != plVar3 + *(int *)(lVar2 + 0x68)) {
              plVar4 = plVar3;
              do {
                if (*plVar4 == *plVar6) goto LAB_142dd9ba0;
                plVar4 = plVar4 + 1;
              } while (plVar4 != plVar3 + *(int *)(lVar2 + 0x68));
            }
            plVar5 = *(longlong **)(lVar2 + 0x70);
            plVar4 = plVar5 + *(int *)(lVar2 + 0x78);
            if (plVar5 != plVar4) {
              do {
                if (*plVar5 == *plVar6) goto LAB_142dd9ba0;
                plVar5 = plVar5 + 1;
              } while (plVar5 != plVar4);
            }
            plVar6 = plVar6 + 1;
          } while (plVar6 != plVar1);
        }
      }
      if ((int)param_2[5] != 0) {
        plVar6 = (longlong *)param_2[4];
        plVar1 = plVar6 + (int)param_2[5];
        if (plVar6 != plVar1) {
          plVar3 = *(longlong **)(lVar2 + 0x60);
          do {
            if (plVar3 != plVar3 + *(int *)(lVar2 + 0x68)) {
              plVar4 = plVar3;
              do {
                if (*plVar4 == *plVar6) goto LAB_142dd9ba0;
                plVar4 = plVar4 + 1;
              } while (plVar4 != plVar3 + *(int *)(lVar2 + 0x68));
            }
            plVar6 = plVar6 + 1;
          } while (plVar6 != plVar1);
        }
      }
      FUN_142ddd0c0(lVar8);
    }
LAB_142dd9ba0:
    lVar8 = lVar8 + 0x70;
  } while( true );
}



// FUNCTION 142dd9be0 FUN_142dd9be0 body=199 status=ok
// SIG undefined FUN_142dd9be0(void)

ulonglong FUN_142dd9be0(longlong *param_1,char param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_142dd3d30();
  if ((char)uVar1 != '\0') {
    lVar3 = *(longlong *)(*param_1 + 0x180);
    uVar1 = (ulonglong)*(int *)(*param_1 + 0x188);
    lVar2 = uVar1 * 0x70 + lVar3;
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0x70) {
      uVar1 = *(ulonglong *)(lVar3 + 8);
      if ((uVar1 != 0) && (uVar1 == param_1[1])) {
        if (*(char *)(lVar3 + 0x60) == '\0') {
          *(undefined1 *)(lVar3 + 0x61) = 1;
          if ((param_2 != '\0') && (*(char *)(lVar3 + 0x60) == '\0')) {
            FUN_142dd76d0(lVar3);
            lVar2 = *(longlong *)(lVar3 + 8);
            *(undefined1 *)(lVar3 + 0x61) = 0;
            if (lVar2 != 0) {
              *(float *)(lVar3 + 0x5c) = *(float *)(lVar2 + 0x84) + *(float *)(lVar3 + 0x58);
              return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
            }
            *(float *)(lVar3 + 0x5c) = *(float *)(lVar3 + 0x58) + 0.0;
            uVar1 = 0;
          }
          return CONCAT71((int7)(uVar1 >> 8),1);
        }
        break;
      }
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142dd9cb0 FUN_142dd9cb0 body=300 status=ok
// SIG undefined FUN_142dd9cb0(void)

void FUN_142dd9cb0(undefined4 *param_1)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *pvVar4;
  uint *puVar5;
  ulonglong uVar6;
  
  pvVar4 = ThreadLocalStoragePointer;
  uVar6 = (ulonglong)_tls_index;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[4] = 0xffffffff;
  lVar2 = *(longlong *)((longlong)pvVar4 + uVar6 * 8);
  param_1[5] = 0;
  param_1[0xd8] = 0x7f7fffff;
  if (*(int *)(lVar2 + 0x38) < DAT_146859258) {
    _Init_thread_header(&DAT_146859258);
    if (DAT_146859258 == -1) {
      DAT_146859248 = 0xff;
      FName::FName(&DAT_146859250,L"Invalid",1);
      _Init_thread_footer(&DAT_146859258);
    }
  }
  uVar3 = DAT_146859250;
  *(undefined1 *)(param_1 + 0xda) = DAT_146859248;
  *(undefined8 *)(param_1 + 0xdc) = uVar3;
  *(undefined1 *)(param_1 + 0xde) = 3;
  if (param_1 + 8 != param_1 + 0xd8) {
    puVar5 = param_1 + 0x19;
    do {
      *(undefined1 *)(puVar5 + -5) = *(undefined1 *)(param_1 + 0xda);
      *(undefined8 *)(puVar5 + -3) = *(undefined8 *)(param_1 + 0xdc);
      puVar1 = puVar5 + 9;
      *puVar5 = *puVar5 & 0xfffffffd;
      puVar5 = puVar5 + 0x1a;
    } while (puVar1 != param_1 + 0xd8);
  }
  param_1[0xdf] = 0;
  *(undefined2 *)(param_1 + 0xe0) = 0x101;
  *(byte *)(param_1 + 0xe3) = *(byte *)(param_1 + 0xe3) & 0xfa;
  *(undefined8 *)(param_1 + 0xe1) = 0xffffffffffffffff;
  return;
}



// FUNCTION 142dd9de0 FUN_142dd9de0 body=161 status=ok
// SIG undefined FUN_142dd9de0(void)

void FUN_142dd9de0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x7200);
  if (param_3 < 0x21) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x390);
    pvVar1 = *(void **)((longlong)param_1 + 0x7200);
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
        *(void **)((longlong)param_1 + 0x7200) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x390);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x7200) = uVar2;
  return;
}



// FUNCTION 142dd9e90 FUN_142dd9e90 body=156 status=ok
// SIG undefined FUN_142dd9e90(void)

void FUN_142dd9e90(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x7208);
  if (uVar1 < 0x21) {
    iVar4 = 0x20;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0x720c) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x390,0);
    iVar4 = (int)(uVar3 / 0x390);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x720c) = iVar4;
  FUN_142dd9de0(param_1,param_2,iVar4,0x390);
  return;
}



// FUNCTION 142dd9f30 FUN_142dd9f30 body=126 status=ok
// SIG undefined FUN_142dd9f30(void)

void FUN_142dd9f30(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x21) {
      iVar2 = 0x20;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x390,0);
      iVar2 = (int)(uVar1 / 0x390);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x720c)) {
    *(int *)(param_1 + 0x720c) = iVar2;
    FUN_142dd9de0(param_1,*(undefined4 *)(param_1 + 0x7208),iVar2,0x390);
  }
  return;
}



// FUNCTION 142dd9fb0 FUN_142dd9fb0 body=337 status=ok
// SIG undefined FUN_142dd9fb0(void)

/* WARNING: Removing unreachable block (ram,0x000142dda03c) */

longlong * FUN_142dd9fb0(longlong *param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x668))();
  if ((plVar2 == (longlong *)0x0) &&
     ((plVar2 = (longlong *)(**(code **)(*param_1 + 0x688))(), plVar2 == (longlong *)0x0 ||
      (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x668))(), plVar2 == (longlong *)0x0)))) {
    lVar3 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(lVar3 + 0x90) <= *(int *)(param_1[2] + 0x90)) &&
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) ==
        lVar3 + 0x88)) {
      return param_1;
    }
    return (longlong *)0x0;
  }
  lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
  if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return (longlong *)plVar2[0x109];
  }
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x678))(plVar2);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return plVar2;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 142dda110 FUN_142dda110 body=415 status=ok
// SIG undefined FUN_142dda110(void)

void FUN_142dda110(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if ((int)param_1[100] == -1) {
    bVar4 = true;
    if (*(char *)((longlong)param_1 + 0x254) == '\0') {
      iVar6 = FUN_142d369f0(param_1 + 0x4b,param_1[0x23],param_1 + 0x62);
      *(int *)(param_1 + 100) = iVar6;
      if (iVar6 != -1) {
        return;
      }
    }
    else {
      FUN_142d36930(param_1 + 0x4b,&local_28,param_1[0x23]);
      if (local_28 != 0) {
        local_18 = local_28;
        plStack_10 = plStack_20;
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
          UNLOCK();
        }
        FUN_142dd50b0(param_1,&local_18);
        bVar4 = false;
      }
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_20 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_20)(plStack_20);
          LOCK();
          piVar2 = (int *)((longlong)plStack_20 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plStack_20 + 8))(plStack_20,1);
          }
        }
      }
      if (!bVar4) {
        return;
      }
    }
    local_30 = (longlong *)0x0;
    if (param_1 + 0x1cee != &local_38) {
      param_1[0x1cee] = 0;
      local_38 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1cef,&local_30);
      plVar1 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_30 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
    lVar5 = param_1[0xea8];
    if (0 < (int)lVar5) {
      *(undefined4 *)(param_1 + 0xea8) = 0;
      if ((*(int *)((longlong)param_1 + 0x7544) < 0) && (*(int *)((longlong)param_1 + 0x7544) != 0))
      {
        FUN_142dd9f30(param_1 + 0x67,0);
      }
      (**(code **)(*param_1 + 0x408))(param_1,(int)lVar5);
    }
  }
  return;
}



// FUNCTION 142dda2b0 FUN_142dda2b0 body=539 status=ok
// SIG undefined FUN_142dda2b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142dda2b0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  float *pfVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined1 *local_190;
  undefined *local_188;
  undefined1 local_178 [8];
  float local_170;
  float local_16c;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  undefined8 local_150 [2];
  undefined1 local_140 [24];
  undefined1 local_128 [12];
  undefined4 local_11c;
  undefined1 local_bc [36];
  undefined1 local_98 [72];
  longlong local_50;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  lVar1 = param_1[0x122];
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x7540))) {
    lVar7 = *(longlong *)(lVar1 + 0x7538);
    if (*(longlong *)(lVar1 + 0x7538) == 0) {
      lVar7 = lVar1 + 0x338;
    }
    plVar3 = (longlong *)FWeakObjectPtr::Get(lVar7);
    if ((plVar3 != (longlong *)0x0) &&
       (plVar4 = (longlong *)(**(code **)(*plVar3 + 0x690))(plVar3), plVar4 != (longlong *)0x0)) {
      plVar3 = plVar4;
    }
    if (plVar3 != (longlong *)0x0) {
      return plVar3;
    }
  }
  (**(code **)(*param_1 + 0x830))(param_1,&local_170,local_140);
  pfVar5 = (float *)FRotator::Vector(local_140,local_150);
  local_160 = *pfVar5 * 10000.0 + local_170;
  local_15c = pfVar5[1] * 10000.0 + local_16c;
  local_158 = pfVar5[2] * 10000.0 + local_168;
  local_198 = 0;
  if (param_1[0xa5] != 0) {
    local_198 = *(undefined8 *)(param_1[0xa5] + 0x1190);
  }
  local_150[0] = 0;
  FUN_1422ffb20(local_98,0,local_178,1);
  _guard_xfg_dispatch_icall_nop(local_128,0,0x90);
  local_11c = 0x3f800000;
  uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  local_190 = local_98;
  local_188 = &DAT_146aefe68;
  local_198._0_4_ = 3;
  cVar2 = UWorld::LineTraceSingleByChannel(uVar6,local_128,&local_170,&local_160);
  if (cVar2 == '\0') {
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    local_188 = &DAT_146aefe68;
    local_190 = local_98;
    local_198._0_4_ = 0x10;
    UWorld::LineTraceSingleByChannel(uVar6,local_128,&local_170,&local_160);
  }
  plVar3 = (longlong *)FWeakObjectPtr::Get(local_bc);
  if (local_30 != 0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  return plVar3;
}



// FUNCTION 142dda4d0 FUN_142dda4d0 body=569 status=ok
// SIG undefined FUN_142dda4d0(void)

int FUN_142dda4d0(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  
  cVar4 = *(char *)(param_1 + 0x36);
  if (cVar4 == '\0') {
    fVar9 = -3.4028235e+38;
    iVar6 = 0;
    iVar7 = -1;
    if (0 < *(int *)(param_3 + 0x50)) {
      lVar8 = 0;
      do {
        lVar5 = *(longlong *)(param_3 + 0x48);
        if (((((*(char *)(param_1 + 0x34) == '\0') ||
              (cVar4 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                                 (param_2 + 8,lVar5 + 8 + lVar8), cVar4 == '\0')) &&
             (cVar4 = *(char *)(lVar5 + 0x18 + lVar8), *(char *)(param_2 + 0x18) == cVar4)) &&
            ((1 < (byte)(*(char *)(param_1 + 0x36) - 2U) || (cVar4 != '\x01')))) &&
           (fVar1 = *(float *)(*(longlong *)(param_3 + 0x48) + 0x3c + lVar8), fVar9 < fVar1)) {
          fVar9 = fVar1;
          iVar7 = iVar6;
        }
        iVar6 = iVar6 + 1;
        lVar8 = lVar8 + 0x48;
      } while (iVar6 < *(int *)(param_3 + 0x50));
    }
  }
  else if (cVar4 == '\x01') {
    iVar7 = -1;
    iVar6 = *(int *)(param_3 + 0x50) + -1;
    fVar9 = 3.4028235e+38;
    if (-1 < iVar6) {
      lVar8 = (longlong)iVar6 * 0x48;
      do {
        lVar5 = *(longlong *)(param_3 + 0x48);
        if (((*(char *)(param_1 + 0x34) == '\0') ||
            (cVar4 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                               (param_2 + 8,lVar5 + 8 + lVar8), cVar4 == '\0')) &&
           ((cVar4 = *(char *)(lVar8 + 0x18 + lVar5), *(char *)(param_2 + 0x18) == cVar4 &&
            (((1 < (byte)(*(char *)(param_1 + 0x36) - 2U) || (cVar4 != '\x01')) &&
             (fVar1 = *(float *)(*(longlong *)(param_3 + 0x48) + 0x3c + lVar8), fVar1 < fVar9))))))
        {
          fVar9 = fVar1;
          iVar7 = iVar6;
        }
        lVar8 = lVar8 + -0x48;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
  }
  else if (cVar4 == '\x02') {
    iVar7 = 0;
    if (0 < *(int *)(param_3 + 0x50)) {
      lVar8 = 0;
      do {
        lVar5 = *(longlong *)(param_3 + 0x48);
        if (((*(char *)(param_1 + 0x34) == '\0') ||
            (cVar4 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                               (param_2 + 8,lVar5 + 8 + lVar8), cVar4 == '\0')) &&
           (cVar4 = *(char *)(lVar8 + 0x18 + lVar5), *(char *)(param_2 + 0x18) == cVar4)) {
          if (1 < (byte)(*(char *)(param_1 + 0x36) - 2U)) {
            return iVar7;
          }
          if (cVar4 != '\x01') {
            return iVar7;
          }
        }
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 0x48;
      } while (iVar7 < *(int *)(param_3 + 0x50));
    }
    iVar7 = -1;
  }
  else if (cVar4 == '\x03') {
    iVar7 = *(int *)(param_3 + 0x50) + -1;
    if (-1 < iVar7) {
      lVar5 = (longlong)iVar7 * 0x48;
      lVar8 = (longlong)iVar7;
      do {
        lVar2 = *(longlong *)(param_3 + 0x48);
        if (((*(char *)(param_1 + 0x34) == '\0') ||
            (cVar4 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                               (param_2 + 8,lVar2 + 8 + lVar5), cVar4 == '\0')) &&
           (cVar4 = *(char *)(lVar5 + 0x18 + lVar2), *(char *)(param_2 + 0x18) == cVar4)) {
          if (1 < (byte)(*(char *)(param_1 + 0x36) - 2U)) {
            return iVar7;
          }
          if (cVar4 != '\x01') {
            return iVar7;
          }
        }
        iVar7 = iVar7 + -1;
        lVar5 = lVar5 + -0x48;
        bVar3 = 0 < lVar8;
        lVar8 = lVar8 + -1;
      } while (bVar3);
    }
    iVar7 = -1;
  }
  else {
    iVar7 = -1;
  }
  return iVar7;
}



// FUNCTION 142dda710 FUN_142dda710 body=405 status=ok
// SIG undefined FUN_142dda710(void)

longlong FUN_142dda710(longlong param_1,longlong param_2,float param_3)

{
  longlong *plVar1;
  byte bVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  float fVar10;
  
  pvVar3 = ThreadLocalStoragePointer;
  plVar8 = *(longlong **)(param_1 + 0x108);
  plVar1 = plVar8 + *(int *)(param_1 + 0x110);
  if (plVar8 == plVar1) {
    return (ulonglong)(uint7)(int7)(int3)((uint)*(int *)(param_1 + 0x110) >> 8) << 8;
  }
  uVar9 = (ulonglong)_tls_index;
LAB_142dda770:
  plVar7 = (longlong *)*plVar8;
  if (plVar7 != (longlong *)0x0) {
    plVar4 = (longlong *)FUN_142c33440();
    plVar5 = plVar7;
    do {
      if (plVar5 == plVar4) {
        plVar4 = (longlong *)FUN_142c33440();
        plVar5 = plVar7;
        goto LAB_142dda7d1;
      }
      plVar5 = (longlong *)plVar5[6];
    } while (plVar5 != (longlong *)0x0);
  }
  bVar2 = DAT_146859248;
  if ((*(int *)(*(longlong *)((longlong)pvVar3 + uVar9 * 8) + 0x38) < DAT_146859258) &&
     (_Init_thread_header(&DAT_146859258), bVar2 = DAT_146859248, DAT_146859258 == -1)) {
    DAT_146859248 = 0xff;
    FName::FName(&DAT_146859250,L"Invalid",1);
    _Init_thread_footer(&DAT_146859258);
    bVar2 = DAT_146859248;
  }
  goto LAB_142dda7ac;
  while (plVar5 = (longlong *)plVar5[6], plVar5 != (longlong *)0x0) {
LAB_142dda7d1:
    if (plVar5 == plVar4) goto LAB_142dda7e1;
  }
  plVar7 = (longlong *)0x0;
LAB_142dda7e1:
  lVar6 = plVar7[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar6 = plVar7[0x1f];
  }
  bVar2 = *(byte *)(lVar6 + 0x48);
LAB_142dda7ac:
  if (bVar2 < 8) {
    if (*(float *)((ulonglong)bVar2 * 0x68 + 0x28 + param_2) <= 0.0) {
      fVar10 = 3.4028235e+38;
    }
    else {
      fVar10 = *(float *)((ulonglong)bVar2 * 0x68 + 0x20 + param_2);
    }
    if (fVar10 < param_3) {
      return 1;
    }
  }
  plVar8 = plVar8 + 1;
  if (plVar8 == plVar1) {
    return 0;
  }
  goto LAB_142dda770;
}



// FUNCTION 142dda8b0 FUN_142dda8b0 body=107 status=ok
// SIG undefined FUN_142dda8b0(void)

void FUN_142dda8b0(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  bVar5 = false;
  lVar3 = (**(code **)(*param_1 + 0x148))();
  lVar4 = 0;
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x140);
  }
  if ((lVar4 != 0) && (plVar1 = *(longlong **)(lVar4 + 0x4b0), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x718))(plVar1,0);
    bVar5 = cVar2 == '\0';
  }
  FUN_142e563d0(param_1,param_2,bVar5);
  return;
}



// FUNCTION 142dda930 FUN_142dda930 body=550 status=ok
// SIG undefined FUN_142dda930(void)

void FUN_142dda930(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x7540) = 0;
    if (*(uint *)(param_1 + 0x7544) < 0x80000000) {
      return;
    }
    FUN_142dd9f30();
    return;
  }
  if (*(int *)(param_1 + 0x7540) != 1) {
    lVar4 = param_1 + 0x338;
    *(undefined4 *)(param_1 + 0x7540) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x7544)) {
      FUN_142dd9f30(lVar4,0);
    }
    iVar1 = *(int *)(param_1 + 0x7540);
    *(int *)(param_1 + 0x7540) = iVar1 + 1;
    if (*(int *)(param_1 + 0x7544) < iVar1 + 1) {
      FUN_142dd9e90(lVar4,iVar1);
    }
    lVar3 = *(longlong *)(param_1 + 0x7538);
    if (*(longlong *)(param_1 + 0x7538) == 0) {
      lVar3 = lVar4;
    }
    FUN_142dc1ad0(lVar3 + (longlong)iVar1 * 0x390);
  }
  lVar4 = *(longlong *)(param_1 + 0x118);
  if (lVar4 == 0) {
LAB_142ddaa3f:
    lVar4 = *(longlong *)(param_1 + 0x118);
    if (lVar4 != 0) {
      lVar3 = FUN_14291fb80();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (lVar4 = *(longlong *)(lVar4 + 0x488), lVar4 != 0)) {
        lVar3 = AHeoCon::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) goto LAB_142ddaac7;
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x7538);
    if (*(longlong *)(param_1 + 0x7538) == 0) {
      lVar4 = param_1 + 0x338;
    }
    FUN_142dd9cb0(lVar4);
    lVar4 = *(longlong *)(param_1 + 0x7538);
    if (*(longlong *)(param_1 + 0x7538) == 0) {
      lVar4 = param_1 + 0x338;
    }
    FWeakObjectPtr::operator=(lVar4,param_2);
  }
  else {
    lVar3 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142ddaa3f;
LAB_142ddaac7:
    if (*(longlong *)(lVar4 + 0x908) != 0) {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar4 + 0x908) + 0x180);
    }
    lVar4 = *(longlong *)(param_1 + 0x7538);
    if (*(longlong *)(param_1 + 0x7538) == 0) {
      lVar4 = param_1 + 0x338;
    }
    FUN_142dd1b20(lVar4,uVar5,param_2);
  }
  return;
}



// FUNCTION 142ddab60 FUN_142ddab60 body=288 status=ok
// SIG undefined FUN_142ddab60(void)

void FUN_142ddab60(longlong *param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_18;
  int local_10;
  
  uVar3 = (**(code **)(*param_1 + 0x148))();
  UWorld::GetPawnIterator(uVar3,&local_18);
LAB_142ddab90:
  do {
    if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return;
    }
    plVar4 = (longlong *)FWeakObjectPtr::Get();
    if ((plVar4 != (longlong *)0x0) && (lVar1 = plVar4[0x92], lVar1 != 0)) {
      lVar5 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      lVar1 = *(longlong *)(lVar1 + 0x10);
      if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        (**(code **)(*plVar4 + 0x310))(plVar4,param_2);
        uVar3 = UDamageableInterface::GetPrivateStaticClass();
        plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar4,uVar3);
        if (plVar4 != (longlong *)0x0) {
          if (param_2 != '\0') {
            (**(code **)(*plVar4 + 0x78))();
            local_10 = local_10 + 1;
            goto LAB_142ddab90;
          }
          (**(code **)(*plVar4 + 0x80))(plVar4,DAT_146b34868,1);
        }
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}



// FUNCTION 142ddac80 FUN_142ddac80 body=35 status=ok
// SIG undefined FUN_142ddac80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ddac80(longlong *param_1,longlong param_2)

{
  longlong **pplVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  uint uVar25;
  uint *puVar26;
  longlong *plVar27;
  longlong **pplVar28;
  undefined1 auStack_178 [32];
  undefined8 *puStack_158;
  undefined1 auStack_148 [16];
  undefined8 uStack_138;
  uint *puStack_130;
  uint uStack_128;
  uint uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  longlong lStack_b0;
  undefined1 uStack_a8;
  ushort uStack_a6;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  longlong *plStack_80;
  undefined8 uStack_78;
  uint *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong **pplStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  
  if (*param_1 == param_2) {
    return;
  }
  *param_1 = param_2;
  if (param_2 == 0) {
    FUN_142dc8e80();
    return;
  }
  if (param_1[1] != 0) {
    FUN_142dc5d20();
    return;
  }
  uStack_30 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if (DAT_1468b616c != '\0') {
    return;
  }
  FUN_142dc8e80();
  if (param_1[2] == 0) {
    return;
  }
  lVar14 = FUN_1428dfc70();
  lVar15 = param_1[2];
  lVar16 = lVar15;
  if (lVar15 == 0) {
    return;
  }
  while (lVar16 != lVar14) {
    lVar16 = *(longlong *)(lVar16 + 0x30);
    if (lVar16 == 0) {
      return;
    }
  }
  if (lVar15 == 0) {
    return;
  }
  if (*param_1 == 0) {
    return;
  }
  lVar15 = *(longlong *)(*param_1 + 0x120);
  if ((lVar15 == 0) && (lVar15 = FUN_1423407b0(), lVar15 == 0)) {
    return;
  }
  FUN_142b813e0(auStack_90,lVar15);
  FEditorScriptExecutionGuard::FEditorScriptExecutionGuard(auStack_148);
  FActorSpawnParameters::FActorSpawnParameters(&uStack_d0);
  uStack_a6 = uStack_a6 | 0xc;
  uStack_a8 = 1;
  lVar16 = FUN_14233ccd0(*param_1);
  uStack_a4 = (undefined4)param_1[0xd];
  uVar20 = 0;
  lStack_c8 = param_1[3];
  puVar18 = (undefined8 *)0x0;
  lStack_b0 = lVar16;
  if (lStack_c8 != 0) {
    if (lVar16 == 0) {
      lVar16 = FUN_140cc25e0(lVar15);
      puVar18 = (undefined8 *)0x0;
      if (lVar16 == 0) goto LAB_142dd71c9;
    }
    uStack_138 = 0;
    uVar22 = uVar20;
    if (param_1[2] != 0) {
      uVar17 = FUN_1428dfc70();
      for (uVar24 = param_1[2];
          (uVar22 = uVar20, uVar24 != 0 && (uVar22 = param_1[2], uVar24 != uVar17));
          uVar24 = *(ulonglong *)(uVar24 + 0x30)) {
      }
    }
    puVar18 = (undefined8 *)FUN_141791c20(auStack_a0,lVar16,uVar22,uStack_138);
    uStack_d0 = *puVar18;
  }
LAB_142dd71c9:
  lVar16 = *param_1;
  uStack_118 = *(undefined4 *)(lVar16 + 0x220);
  uStack_114 = *(undefined4 *)(lVar16 + 0x224);
  uStack_110 = *(undefined4 *)(lVar16 + 0x228);
  fVar5 = *(float *)(lVar16 + 0x210);
  uStack_138 = *(undefined8 *)(lVar16 + 0x210);
  fVar6 = *(float *)(lVar16 + 0x218);
  puStack_130 = *(uint **)(lVar16 + 0x218);
  auVar4._4_4_ = -(uint)(*(float *)(lVar16 + 0x214) != *(float *)(lVar16 + 0x254));
  auVar4._0_4_ = -(uint)(fVar5 != *(float *)(lVar16 + 0x250));
  auVar4._8_4_ = -(uint)(fVar6 != *(float *)(lVar16 + 600));
  auVar4._12_4_ = -(uint)(*(float *)(lVar16 + 0x21c) != *(float *)(lVar16 + 0x25c));
  iVar12 = movmskps((int)puVar18,auVar4);
  if (iVar12 != 0) {
    *(float *)(lVar16 + 0x250) = fVar5;
    *(float *)(lVar16 + 0x254) = *(float *)(lVar16 + 0x214);
    *(float *)(lVar16 + 600) = fVar6;
    *(float *)(lVar16 + 0x25c) = *(float *)(lVar16 + 0x21c);
    puVar18 = (undefined8 *)FQuat::Rotator(&uStack_138,auStack_a0);
    *(undefined8 *)(lVar16 + 0x260) = *puVar18;
    *(undefined4 *)(lVar16 + 0x268) = *(undefined4 *)(puVar18 + 1);
  }
  uStack_108 = *(undefined8 *)(lVar16 + 0x260);
  uStack_100 = *(undefined4 *)(lVar16 + 0x268);
  uVar22 = uVar20;
  if (param_1[2] != 0) {
    uVar17 = FUN_1428dfc70();
    for (uVar24 = param_1[2];
        (uVar22 = uVar20, uVar24 != 0 && (uVar22 = param_1[2], uVar24 != uVar17));
        uVar24 = *(ulonglong *)(uVar24 + 0x30)) {
    }
  }
  puStack_158 = &uStack_d0;
  lVar15 = UWorld::SpawnActor(lVar15,uVar22);
  param_1[1] = lVar15;
  if (lVar15 != 0) {
    FUN_14222b9f0(lVar15,*param_1 + 0x210);
    if (param_1[1] != 0) {
      pplStack_40 = (longlong **)0x0;
      uStack_38 = 0;
      FUN_142dc09a0(param_1[1],&plStack_80);
      pplVar28 = &plStack_80;
      if (pplStack_40 != (longlong **)0x0) {
        pplVar28 = pplStack_40;
      }
      pplVar1 = pplVar28 + (int)uStack_38;
      for (; pplVar28 != pplVar1; pplVar28 = pplVar28 + 1) {
        plVar27 = *pplVar28;
        if (plVar27 != (longlong *)0x0) {
          plVar23 = (longlong *)plVar27[0x17e];
          uVar22 = (longlong)(int)plVar27[0x17f] & 0x1fffffffffffffff;
          if (plVar23 + (int)plVar27[0x17f] < plVar23) {
            uVar22 = uVar20;
          }
          uVar24 = uVar20;
          if (uVar22 != 0) {
            do {
              lVar15 = *plVar23;
              if ((lVar15 != 0) && ((*(byte *)(lVar15 + 0x10) & 8) != 0)) {
                FUN_1426a9140(lVar15,0);
              }
              plVar23 = plVar23 + 1;
              uVar24 = uVar24 + 1;
            } while (uVar24 != uVar22);
          }
        }
      }
      if (pplStack_40 != (longlong **)0x0) {
        FMemory::Free();
      }
    }
    lVar15 = param_1[1];
    plVar27 = (longlong *)(lVar15 + 0x2b0);
    uVar3 = *(uint *)(lVar15 + 0x2d8);
    puVar2 = (uint *)(lVar15 + 0x2c0);
    uStack_138 = 0x100000000;
    uStack_124 = 0;
    iStack_120 = 0;
    if (uVar3 != 0) {
      puVar26 = *(uint **)(lVar15 + 0x2d0);
      if (*(uint **)(lVar15 + 0x2d0) == (uint *)0x0) {
        puVar26 = puVar2;
      }
      uVar13 = *puVar26;
      iStack_120 = 0;
      while (uVar13 == 0) {
        iVar12 = (int)uVar20;
        iStack_120 = iStack_120 + 0x20;
        uVar20 = (ulonglong)(iVar12 + 1U);
        uVar22 = (ulonglong)uStack_138 >> 0x20;
        uStack_138 = CONCAT44((int)uVar22,iVar12 + 1U);
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
        goto LAB_142dd7442;
        uVar13 = puVar26[(longlong)iVar12 + 1];
      }
      uVar13 = uVar13 - 1 & uVar13 ^ uVar13;
      iVar12 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      uStack_138 = CONCAT44(uVar13,(undefined4)uStack_138);
      if (uVar13 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      uStack_124 = (iStack_120 - iVar12) + 0x1f;
      if ((int)uVar3 < (int)uStack_124) {
LAB_142dd7442:
        uStack_124 = uVar3;
      }
    }
    uVar13 = *(uint *)(lVar15 + 0x2d8);
    plStack_80 = plVar27;
    uStack_68 = CONCAT44(uStack_124,0xffffffff);
    uStack_60 = CONCAT44(uStack_11c,iStack_120);
    uStack_78 = uStack_138;
    uVar11 = uStack_78;
    puStack_70 = puVar2;
    uStack_128 = -1 << ((byte)uVar13 & 0x1f);
    uStack_78._0_4_ = (undefined4)uStack_138;
    uStack_78._4_4_ = (uint)((ulonglong)uStack_138 >> 0x20);
    uVar25 = uVar13 & 0xffffffe0;
    uStack_d8 = CONCAT44(uStack_11c,iStack_120);
    uStack_f8 = plVar27;
    uStack_f0 = (undefined4)uStack_78;
    uStack_ec = uStack_78._4_4_;
    puStack_e8 = puVar2;
    uStack_e0 = CONCAT44(uStack_124,0xffffffff);
    puStack_130 = puVar2;
    uStack_124 = uVar13;
    uStack_78 = uVar11;
    if (uVar13 != uVar3) {
      puVar26 = *(uint **)(lVar15 + 0x2d0);
      if (*(uint **)(lVar15 + 0x2d0) == (uint *)0x0) {
        puVar26 = puVar2;
      }
      uVar21 = puVar26[(int)uVar13 >> 5] & uStack_128;
      iVar12 = (int)uVar13 >> 5;
      while (uVar21 == 0) {
        uVar25 = uVar25 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
        goto LAB_142dd7517;
        uVar21 = puVar26[(longlong)iVar12 + 1];
        uStack_128 = 0xffffffff;
        iVar12 = iVar12 + 1;
      }
      uVar21 = uVar21 - 1 & uVar21 ^ uVar21;
      iVar12 = 0x1f;
      if (uVar21 != 0) {
        for (; uVar21 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      if (uVar21 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      uStack_124 = (uVar25 - iVar12) + 0x1f;
      uVar13 = uStack_124;
      if ((int)uVar3 < (int)uStack_124) {
LAB_142dd7517:
        uStack_124 = uVar3;
        uVar13 = uVar3;
      }
    }
    while( true ) {
      lVar15 = (longlong)(int)uStack_e0._4_4_;
      if ((uStack_e0._4_4_ == uVar13) && (puStack_e8 == puVar2)) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      if ((bVar10) && (uStack_f8 == plVar27)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (!bVar10) break;
      lVar16 = *uStack_f8;
      lVar14 = *(longlong *)(lVar16 + lVar15 * 0x10);
      if (lVar14 != 0) {
        lVar19 = FUN_142e39920();
        if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar19 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) {
          FName::FName(&uStack_138,L"PreviewActor",1);
          FUN_142dafbc0(lVar14 + 0x14f0,&uStack_138);
        }
      }
      puVar26 = (uint *)(*(longlong *)(lVar16 + lVar15 * 0x10) + 8);
      *puVar26 = *puVar26 | *(uint *)(param_1 + 0xd);
      uStack_e0 = CONCAT44(uStack_e0._4_4_,(uint)uStack_e0 & ~uStack_ec);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
    }
    if (*(char *)((longlong)param_1 + 100) == '\0') {
      puVar18 = (undefined8 *)FUN_142dcc8d0(&uStack_138,param_1[1],1);
    }
    else {
      iStack_120 = *(int *)((longlong)param_1 + 100);
      puVar18 = &uStack_138;
      uStack_138 = *(undefined8 *)((longlong)param_1 + 0x4c);
      puStack_130 = *(uint **)((longlong)param_1 + 0x54);
      uStack_128 = (uint)*(undefined8 *)((longlong)param_1 + 0x5c);
      uStack_124 = (uint)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x5c) >> 0x20);
    }
    uVar7 = *(undefined4 *)((longlong)puVar18 + 4);
    uVar8 = *(undefined4 *)(puVar18 + 1);
    uVar9 = *(undefined4 *)((longlong)puVar18 + 0xc);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)puVar18;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar7;
    *(undefined4 *)(param_1 + 7) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar9;
    param_1[8] = puVar18[2];
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(puVar18 + 3);
    FWeakObjectPtr::operator=(param_1[1] + 0x198,*param_1);
    uStack_138 = 0;
    FUN_1422232e0(param_1[1],*param_1,&DAT_146532184,0);
    FUN_142dd79a0(param_1);
  }
  FEditorScriptExecutionGuard::~FEditorScriptExecutionGuard(auStack_148);
  FUN_142b83220(auStack_90);
  return;
}



// FUNCTION 142ddacb0 FUN_142ddacb0 body=175 status=ok
// SIG undefined FUN_142ddacb0(void)

void FUN_142ddacb0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (param_2 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    if (*(char *)(param_1 + 0x1b0) == '\x02') {
      iVar2 = 2;
      do {
        if (*(longlong *)(param_1 + 0x1b8 + (longlong)iVar2 * 8) != 0) {
          *(char *)(param_1 + 0x1b0) = (char)iVar2;
          FUN_142dcaec0(param_1);
          return;
        }
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
      FUN_142dcaec0(param_1);
      return;
    }
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x280))(param_2,*(undefined8 *)(param_1 + 0x1a8));
    if ((lVar1 != 0) && (*(longlong **)(param_1 + 0x1c8) = param_2, *(byte *)(param_1 + 0x1b0) < 2))
    {
      *(undefined1 *)(param_1 + 0x1b0) = 2;
      FUN_142dcaec0(param_1);
    }
  }
  return;
}



// FUNCTION 142ddad60 FUN_142ddad60 body=58 status=ok
// SIG undefined FUN_142ddad60(void)

void FUN_142ddad60(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  lVar2 = (longlong)*(int *)(param_1 + 0x1d0) * 0x80 + lVar1;
  if (lVar1 != lVar2) {
    while (*(longlong *)(lVar1 + 8) != param_2) {
      lVar1 = lVar1 + 0x80;
      if (lVar1 == lVar2) {
        return;
      }
    }
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x50) = param_3;
    }
  }
  return;
}



// FUNCTION 142ddada0 FUN_142ddada0 body=80 status=ok
// SIG undefined FUN_142ddada0(void)

void FUN_142ddada0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(lVar1 + 0x1c8);
    lVar2 = (longlong)*(int *)(lVar1 + 0x1d0) * 0x80 + lVar3;
    if (lVar3 != lVar2) {
      while (*(longlong *)(lVar3 + 0x68) != param_1) {
        lVar3 = lVar3 + 0x80;
        if (lVar3 == lVar2) {
          return;
        }
      }
      if (((lVar3 != 0) && (*(char *)(lVar3 + 0x50) != '\0')) && (*(char *)(lVar3 + 0x7a) != '\0'))
      {
        FUN_142ddae40(lVar1,lVar3,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142ddadf0 FUN_142ddadf0 body=70 status=ok
// SIG undefined FUN_142ddadf0(void)

void FUN_142ddadf0(longlong *param_1,longlong param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lStack_18;
  int iStack_10;
  
  lVar8 = param_1[0x39];
  lVar4 = (longlong)(int)param_1[0x3a] * 0x80 + lVar8;
  if (lVar8 == lVar4) {
    return;
  }
  while (*(longlong *)(lVar8 + 8) != param_2) {
    lVar8 = lVar8 + 0x80;
    if (lVar8 == lVar4) {
      return;
    }
  }
  if (lVar8 == 0) {
    return;
  }
  if (*(char *)(lVar8 + 0x50) == '\0') {
    return;
  }
  if (*(char *)(lVar8 + 0x7a) == '\0') {
    return;
  }
  if (lVar8 == 0) {
    return;
  }
  if ((*(char *)(lVar8 + 0x50) == '\0') || (*(char *)(lVar8 + 0x7a) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar4 = FUN_142dcdb70(lVar8);
  if (lVar4 == 0) {
    return;
  }
  if (*(char *)(lVar4 + 0x88) != '\0') {
    lVar4 = param_1[0x24];
    if ((lVar4 == 0) && (lVar4 = FUN_1423407b0(param_1), lVar4 == 0)) {
      return;
    }
    iVar3 = FUN_142340f30(param_1);
    if (iVar3 == 3) {
      return;
    }
    UWorld::GetPlayerControllerIterator(lVar4,&lStack_18);
    while( true ) {
      if ((iStack_10 < 0) || (*(int *)(lStack_18 + 8) <= iStack_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      plVar5 = (longlong *)FWeakObjectPtr::Get();
      if (plVar5 != (longlong *)0x0) {
        lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar6 = FUN_142e035e0();
          plVar7 = (longlong *)(**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
          if (plVar7 != (longlong *)0x0) {
            if (((*(uint *)((longlong)plVar5 + 0x4cc) >> 1 & 1) == 0) ||
               (cVar2 = (**(code **)(*plVar5 + 0x768))(plVar5), cVar2 == '\0')) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) {
              FUN_142ddb060(plVar7,*(undefined8 *)(lVar8 + 8),param_3);
            }
            (**(code **)(*plVar7 + 0x420))(plVar7,*(undefined8 *)(lVar8 + 8),param_3);
          }
        }
      }
      iStack_10 = iStack_10 + 1;
    }
    return;
  }
  plVar5 = (longlong *)param_1[0x23];
  if (plVar5 != (longlong *)0x0) {
    lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (((*(uint *)((longlong)plVar5 + 0x4cc) >> 1 & 1) == 0) ||
         (cVar2 = (**(code **)(*plVar5 + 0x768))(plVar5), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_142ddb034;
    }
  }
  FUN_142ddb060(param_1,*(undefined8 *)(lVar8 + 8),param_3);
LAB_142ddb034:
  (**(code **)(*param_1 + 0x420))(param_1,*(undefined8 *)(lVar8 + 8),param_3);
  return;
}



// FUNCTION 142ddae40 FUN_142ddae40 body=540 status=ok
// SIG undefined FUN_142ddae40(void)

void FUN_142ddae40(longlong *param_1,longlong param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong local_18;
  int local_10;
  
  if (param_2 == 0) {
    return;
  }
  if ((*(char *)(param_2 + 0x50) == '\0') || (*(char *)(param_2 + 0x7a) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar4 = FUN_142dcdb70(param_2);
  if (lVar4 == 0) {
    return;
  }
  if (*(char *)(lVar4 + 0x88) != '\0') {
    lVar4 = param_1[0x24];
    if ((lVar4 == 0) && (lVar4 = FUN_1423407b0(param_1), lVar4 == 0)) {
      return;
    }
    iVar3 = FUN_142340f30(param_1);
    if (iVar3 == 3) {
      return;
    }
    UWorld::GetPlayerControllerIterator(lVar4,&local_18);
    while( true ) {
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      plVar5 = (longlong *)FWeakObjectPtr::Get();
      if (plVar5 != (longlong *)0x0) {
        lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar6 = FUN_142e035e0();
          plVar7 = (longlong *)(**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
          if (plVar7 != (longlong *)0x0) {
            if (((*(uint *)((longlong)plVar5 + 0x4cc) >> 1 & 1) == 0) ||
               (cVar2 = (**(code **)(*plVar5 + 0x768))(plVar5), cVar2 == '\0')) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) {
              FUN_142ddb060(plVar7,*(undefined8 *)(param_2 + 8),param_3);
            }
            (**(code **)(*plVar7 + 0x420))(plVar7,*(undefined8 *)(param_2 + 8),param_3);
          }
        }
      }
      local_10 = local_10 + 1;
    }
    return;
  }
  plVar5 = (longlong *)param_1[0x23];
  if (plVar5 != (longlong *)0x0) {
    lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (((*(uint *)((longlong)plVar5 + 0x4cc) >> 1 & 1) == 0) ||
         (cVar2 = (**(code **)(*plVar5 + 0x768))(plVar5), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_142ddb034;
    }
  }
  FUN_142ddb060(param_1,*(undefined8 *)(param_2 + 8),param_3);
LAB_142ddb034:
  (**(code **)(*param_1 + 0x420))(param_1,*(undefined8 *)(param_2 + 8),param_3);
  return;
}



// FUNCTION 142ddb060 FUN_142ddb060 body=375 status=ok
// SIG undefined FUN_142ddb060(void)

void FUN_142ddb060(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  longlong *local_38;
  longlong local_30;
  int local_28;
  undefined1 local_24;
  char local_23;
  
  lVar4 = param_1[0x39];
  cVar6 = '\0';
  lVar3 = (longlong)(int)param_1[0x3a] * 0x80 + lVar4;
  while( true ) {
    if (lVar4 == lVar3) {
      return;
    }
    if (*(longlong *)(lVar4 + 8) == param_2) break;
    lVar4 = lVar4 + 0x80;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(char *)(lVar4 + 0x50) == '\0') {
    return;
  }
  if (*(char *)(lVar4 + 0x7a) == '\0') {
    return;
  }
  iVar1 = *(int *)(lVar4 + 0x54);
  *(int *)(lVar4 + 0x54) = param_3;
  lVar3 = FUN_142dcdb70(lVar4);
  if (((lVar3 != 0) && (*(char *)(lVar3 + 0xb0) != '\0')) &&
     (*(int *)(lVar4 + 0x3c) < *(int *)(lVar3 + 0xc0))) {
    cVar6 = '\0';
    if (*(int *)(*(longlong *)(lVar3 + 0xb8) + (longlong)*(int *)(lVar4 + 0x3c) * 8) <=
        *(int *)(lVar4 + 0x54)) {
      cVar6 = '\x01';
    }
  }
  bVar5 = false;
  if ((lVar3 != 0) && (*(int *)(lVar4 + 0x3c) < *(int *)(lVar3 + 0xc0))) {
    iVar2 = *(int *)(*(longlong *)(lVar3 + 0xb8) + 4 + (longlong)*(int *)(lVar4 + 0x3c) * 8);
    if (iVar2 < 1) {
      bVar5 = true;
    }
    else {
      bVar5 = iVar1 / iVar2 < param_3 / iVar2;
    }
  }
  FUN_142dc7040(param_1,lVar3,param_3);
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_3;
  local_24 = bVar5;
  local_23 = cVar6;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x33,&local_38);
  if (cVar6 == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x410))(param_1,param_2,0);
  return;
}



// FUNCTION 142ddb1e0 FUN_142ddb1e0 body=288 status=ok
// SIG undefined FUN_142ddb1e0(void)

void FUN_142ddb1e0(longlong *param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  lVar3 = *(longlong *)(lVar3 + 400);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = FUN_142e4e4a0();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  if (param_2 == *(char *)(lVar3 + 0xc9)) {
    return;
  }
  lVar4 = FUN_1405c6c00();
  if ((DAT_1468536c6 != '\0') || (lVar6 = DAT_1468536c8, DAT_1468536c5 == '\0')) {
    lVar6 = 0;
  }
  if ((lVar4 == 0) || (lVar6 == 0)) goto LAB_142ddb2e4;
  cVar1 = *(char *)(lVar3 + 0xc9);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      lVar5 = *(longlong *)(lVar4 + 0x110);
    }
    else {
      if (cVar1 != '\x02') goto LAB_142ddb2b6;
      lVar5 = *(longlong *)(lVar4 + 0x120);
    }
    if (lVar5 != 0) {
      FUN_1405a1960(lVar6);
    }
  }
LAB_142ddb2b6:
  if (param_2 != '\0') {
    if (param_2 == '\x01') {
      lVar4 = *(longlong *)(lVar4 + 0x108);
    }
    else {
      if (param_2 != '\x02') goto LAB_142ddb2e4;
      lVar4 = *(longlong *)(lVar4 + 0x118);
    }
    if (lVar4 != 0) {
      FUN_1405a1960(lVar6);
    }
  }
LAB_142ddb2e4:
  *(char *)(lVar3 + 0xc9) = param_2;
  return;
}



// FUNCTION 142ddb300 FUN_142ddb300 body=57 status=ok
// SIG undefined FUN_142ddb300(void)

void FUN_142ddb300(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142df3580(param_2);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x68) != '\0')) {
    FUN_1426eac10(param_1,*(byte *)(lVar1 + 0x69) + 0x1c,1);
    return;
  }
  return;
}



// FUNCTION 142ddb340 FUN_142ddb340 body=648 status=ok
// SIG undefined FUN_142ddb340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ddb340(longlong *param_1,uint param_2,undefined1 param_3,char param_4)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 auStack_138 [32];
  undefined1 local_118 [192];
  undefined1 *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  if (param_1 != (longlong *)0x0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
    lVar5 = FUN_1429f11d0();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*param_1 + 0x898))(param_1,(param_2 & 0xff) + 0x1c,param_3);
    }
    if ((param_4 != '\0') && (0 < (int)param_1[0x35])) {
      iVar9 = (int)param_1[0x35];
      puVar10 = (undefined1 *)0x0;
      local_50 = 0;
      local_58 = (undefined1 *)0x0;
      local_4c = 0;
      puVar7 = puVar10;
      if (iVar9 != 0) {
        if (0 < iVar9) {
          FUN_140615c30(local_118,iVar9);
        }
        puVar7 = local_118;
        if (local_58 != (undefined1 *)0x0) {
          puVar7 = puVar10;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(((ulonglong)puVar7 | (ulonglong)local_58) + (longlong)(int)local_50 * 8)
                   ,(void *)param_1[0x34],(longlong)iVar9 << 3);
        local_50 = local_50 + iVar9;
        puVar7 = (undefined1 *)(ulonglong)local_50;
      }
      lVar5 = param_1[0x23];
      iVar9 = (int)puVar7;
      puVar8 = local_58;
      uVar3 = local_50;
      while (0 < iVar9) {
        local_50 = (uint)puVar7;
        iVar9 = local_50 - 1;
        puVar7 = local_118;
        if (puVar8 != (undefined1 *)0x0) {
          puVar7 = puVar10;
        }
        plVar1 = *(longlong **)(((ulonglong)puVar7 | (ulonglong)puVar8) + (longlong)iVar9 * 8);
        iVar4 = (local_50 - iVar9) + -1;
        if (iVar4 != 0) {
          lVar6 = (longlong)(int)local_50;
          local_50 = uVar3;
          _guard_xfg_dispatch_icall_nop
                    ((void *)(((ulonglong)puVar7 | (ulonglong)puVar8) + (longlong)iVar9 * 8),
                     (void *)(((ulonglong)puVar7 | (ulonglong)puVar8) + lVar6 * 8),
                     (longlong)iVar4 << 3);
          puVar8 = local_58;
        }
        local_50 = local_50 - 1;
        puVar7 = (undefined1 *)(ulonglong)local_50;
        if ((plVar1 != (longlong *)0x0) && (plVar1[0x23] == lVar5)) {
          iVar9 = (int)plVar1[0x35];
          if (iVar9 != 0) {
            if (local_4c < (int)(local_50 + iVar9)) {
              FUN_140615c30(local_118,local_50 + iVar9);
              puVar8 = local_58;
            }
            puVar7 = local_118;
            if (puVar8 != (undefined1 *)0x0) {
              puVar7 = puVar8;
            }
            _guard_xfg_dispatch_icall_nop
                      (puVar7 + (longlong)(int)local_50 * 8,(void *)plVar1[0x34],
                       (longlong)iVar9 << 3);
            local_50 = local_50 + iVar9;
          }
          lVar6 = FUN_1429f11d0();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            (**(code **)(*plVar1 + 0x898))(plVar1,(param_2 & 0xff) + 0x1c,param_3);
          }
          puVar7 = (undefined1 *)(ulonglong)local_50;
          puVar8 = local_58;
        }
        uVar3 = local_50;
        iVar9 = (int)puVar7;
      }
      if (puVar8 != (undefined1 *)0x0) {
        local_50 = uVar3;
        FMemory::Free(puVar8);
      }
    }
  }
  return;
}



// FUNCTION 142ddb5d0 FUN_142ddb5d0 body=766 status=ok
// SIG undefined FUN_142ddb5d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ddb5d0(longlong *param_1,byte param_2,char param_3,char param_4)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  byte bVar8;
  byte bVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 auStack_128 [32];
  undefined1 local_108 [192];
  undefined1 *local_48;
  uint local_40;
  int local_3c;
  ulonglong local_38;
  
  if (param_1 != (longlong *)0x0) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
    bVar9 = '\x01' << (param_2 & 0x1f);
    lVar5 = FUN_1429f11d0();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (param_3 == '\0') {
        bVar8 = *(byte *)((longlong)param_1 + 0x3bb) & ~bVar9;
      }
      else {
        bVar8 = *(byte *)((longlong)param_1 + 0x3bb) | bVar9;
      }
      (**(code **)(*param_1 + 0x550))(param_1,bVar8);
      bVar8 = *(byte *)((longlong)param_1 + 0x302) | bVar9;
      if (param_3 == '\0') {
        bVar8 = *(byte *)((longlong)param_1 + 0x302) & ~bVar9;
      }
      FUN_142397960(param_1,bVar8);
    }
    if ((param_4 != '\0') && (0 < (int)param_1[0x35])) {
      iVar11 = (int)param_1[0x35];
      puVar12 = (undefined1 *)0x0;
      local_48 = (undefined1 *)0x0;
      local_40 = 0;
      local_3c = 0;
      puVar7 = puVar12;
      if (iVar11 != 0) {
        if (0 < iVar11) {
          FUN_140615c30(local_108,iVar11);
        }
        puVar7 = local_108;
        if (local_48 != (undefined1 *)0x0) {
          puVar7 = puVar12;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(((ulonglong)puVar7 | (ulonglong)local_48) + (longlong)(int)local_40 * 8)
                   ,(void *)param_1[0x34],(longlong)iVar11 << 3);
        local_40 = local_40 + iVar11;
        puVar7 = (undefined1 *)(ulonglong)local_40;
      }
      lVar5 = param_1[0x23];
      iVar11 = (int)puVar7;
      puVar10 = local_48;
      uVar3 = local_40;
      while (0 < iVar11) {
        local_40 = (uint)puVar7;
        iVar11 = local_40 - 1;
        puVar7 = local_108;
        if (puVar10 != (undefined1 *)0x0) {
          puVar7 = puVar12;
        }
        plVar1 = *(longlong **)(((ulonglong)puVar7 | (ulonglong)puVar10) + (longlong)iVar11 * 8);
        iVar4 = (local_40 - iVar11) + -1;
        if (iVar4 != 0) {
          lVar6 = (longlong)(int)local_40;
          local_40 = uVar3;
          _guard_xfg_dispatch_icall_nop
                    ((void *)(((ulonglong)puVar7 | (ulonglong)puVar10) + (longlong)iVar11 * 8),
                     (void *)(((ulonglong)puVar7 | (ulonglong)puVar10) + lVar6 * 8),
                     (longlong)iVar4 << 3);
          puVar10 = local_48;
        }
        local_40 = local_40 - 1;
        puVar7 = (undefined1 *)(ulonglong)local_40;
        if ((plVar1 != (longlong *)0x0) && (plVar1[0x23] == lVar5)) {
          iVar11 = (int)plVar1[0x35];
          if (iVar11 != 0) {
            if (local_3c < (int)(local_40 + iVar11)) {
              FUN_140615c30(local_108,local_40 + iVar11);
              puVar10 = local_48;
            }
            puVar7 = local_108;
            if (puVar10 != (undefined1 *)0x0) {
              puVar7 = puVar10;
            }
            _guard_xfg_dispatch_icall_nop
                      (puVar7 + (longlong)(int)local_40 * 8,(void *)plVar1[0x34],
                       (longlong)iVar11 << 3);
            local_40 = local_40 + iVar11;
          }
          lVar6 = FUN_1429f11d0();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            if (param_3 == '\0') {
              bVar8 = *(byte *)((longlong)plVar1 + 0x3bb) & ~bVar9;
            }
            else {
              bVar8 = *(byte *)((longlong)plVar1 + 0x3bb) | bVar9;
            }
            (**(code **)(*plVar1 + 0x550))(plVar1,bVar8);
            bVar8 = *(byte *)((longlong)plVar1 + 0x302) | bVar9;
            if (param_3 == '\0') {
              bVar8 = *(byte *)((longlong)plVar1 + 0x302) & ~bVar9;
            }
            FUN_142397960(plVar1,bVar8);
          }
          puVar7 = (undefined1 *)(ulonglong)local_40;
          puVar10 = local_48;
        }
        uVar3 = local_40;
        iVar11 = (int)puVar7;
      }
      if (puVar10 != (undefined1 *)0x0) {
        local_40 = uVar3;
        FMemory::Free(puVar10);
      }
    }
  }
  return;
}



// FUNCTION 142ddb8d0 FUN_142ddb8d0 body=81 status=ok
// SIG undefined FUN_142ddb8d0(void)

void FUN_142ddb8d0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_142df3580(param_2);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x68) != '\0')) {
    FUN_142ddb5d0(param_1,*(undefined1 *)(lVar1 + 0x69),param_3,param_4);
  }
  return;
}



// FUNCTION 142ddb930 FUN_142ddb930 body=74 status=ok
// SIG undefined FUN_142ddb930(void)

void FUN_142ddb930(longlong *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2a0))();
  if ((cVar1 != '\0') && (param_2 != '\0')) {
    UActorComponent::SetComponentTickEnabled(param_1,1);
    return;
  }
  UActorComponent::SetComponentTickEnabled(param_1,0);
  return;
}



// FUNCTION 142ddb980 FUN_142ddb980 body=761 status=ok
// SIG undefined FUN_142ddb980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ddb980(longlong *param_1,char param_2,undefined8 param_3,undefined8 param_4,
                  float param_5,undefined1 param_6)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined1 local_d8;
  undefined8 local_c8;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  plVar3 = (longlong *)param_1[0xa5];
  local_b8 = param_4;
  if (plVar3 != (longlong *)0x0) {
    if (param_2 == '\0') {
      (**(code **)(*plVar3 + 0x858))();
      *(undefined4 *)(param_1[0xa5] + 0x494) = 0;
    }
    else {
      local_d8 = 1;
      uVar5 = (uint)param_3 >> 0x18;
      local_e0 = CONCAT31(local_e0._1_3_,param_6);
      local_e8 = &local_c8;
      fStack_c0 = (float)((uint)param_3 & 0xff) * 0.003921569;
      fStack_bc = (float)uVar5 * 0.003921569;
      local_c8 = (code *)CONCAT44((float)((uint)((ulonglong)param_3 >> 8) & 0xff) * 0.003921569,
                                  (float)((uint)((ulonglong)param_3 >> 0x10) & 0xff) * 0.003921569);
      (**(code **)(*plVar3 + 0x850))(plVar3,*plVar3,uVar5,param_5);
    }
  }
  pcVar1 = *(code **)(*param_1 + 0x148);
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x11f) = 0;
    lVar2 = (*pcVar1)(param_1);
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar2 + 400) == 0) {
        uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
      }
      else {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
      }
      FUN_142880530(uVar4,param_1 + 0x120);
      param_1[0x120] = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x11f) = 1;
    lVar2 = (*pcVar1)();
    if (lVar2 != 0) {
      local_c8 = FUN_142dd46d0;
      fStack_c0 = 0.0;
      lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar2 + 400) == 0) {
        uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
      }
      else {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
      }
      plVar3 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        plVar3[2] = (longlong)local_c8;
        plVar3[3] = CONCAT44(fStack_bc,fStack_c0);
        lVar2 = FDelegateHandle::GenerateNewID();
        plVar3[5] = lVar2;
        *plVar3 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_a8 = 0;
      local_a0 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_a8);
      }
      FWeakObjectPtr::operator=(local_98,0);
      local_e0 = 0xbf800000;
      local_e8 = (undefined8 *)((ulonglong)local_e8 & 0xffffffffffffff00);
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar4,param_1 + 0x120,&local_a8,param_5 + 1.0);
      if (local_48 != 0) {
        plVar6 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar6 = local_58;
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar2 = FMemory::Realloc(plVar3,0,0);
        if (lVar2 != 0) {
          FMemory::Free(lVar2);
        }
      }
    }
  }
  return;
}


