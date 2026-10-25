// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142ddbc80 FUN_142ddbc80 body=108 status=ok
// SIG undefined FUN_142ddbc80(void)

void FUN_142ddbc80(longlong *param_1,char param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  undefined4 local_10;
  
  *(char *)(param_1 + 1) = param_2;
  if (param_2 != '\0') {
    local_28 = (undefined4)param_1[0x13];
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0x9c);
    uStack_20 = (undefined4)param_1[0x14];
    uStack_1c = *(undefined4 *)((longlong)param_1 + 0xa4);
    local_10 = (undefined4)param_1[0x16];
    local_18 = param_1[0x15];
    FUN_142ddc3a0(param_1 + 2,param_1[0x12],&local_28,0);
    (**(code **)(*param_1 + 0x38))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142ddbce2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142ddbcf0 FUN_142ddbcf0 body=125 status=ok
// SIG undefined FUN_142ddbcf0(void)

void FUN_142ddbcf0(longlong param_1,byte param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + 0xc);
    lVar3 = 0;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    lVar5 = 0;
    if ((*(uint *)(lVar3 + 8) & 0x30000000) != 0) goto LAB_142ddbd4a;
  }
  lVar5 = param_3;
LAB_142ddbd4a:
  FWeakObjectPtr::operator=(param_1 + ((ulonglong)param_2 + 0x1ceb) * 8,lVar5);
  FUN_142dd0d50(param_1);
  return;
}



// FUNCTION 142ddbd70 FUN_142ddbd70 body=12 status=ok
// SIG undefined FUN_142ddbd70(void)

void FUN_142ddbd70(longlong param_1)

{
  FWeakObjectPtr::operator=(param_1 + 0x188);
  return;
}



// FUNCTION 142ddbd80 FUN_142ddbd80 body=53 status=ok
// SIG undefined FUN_142ddbd80(void)

void FUN_142ddbd80(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    uVar1 = FUN_142df36d0(*param_2);
    FUN_142df2ca0(*(undefined8 *)(param_1 + 0xf0),uVar1);
    return;
  }
  return;
}



// FUNCTION 142ddbdc0 FUN_142ddbdc0 body=200 status=ok
// SIG undefined FUN_142ddbdc0(void)

ulonglong FUN_142ddbdc0(longlong param_1,byte param_2,longlong *param_3)

{
  byte bVar1;
  ulonglong in_RAX;
  int7 iVar3;
  longlong lVar2;
  uint uVar4;
  
  if (param_3 == (longlong *)0x0) {
    if (param_2 != 0) {
      bVar1 = *(byte *)(param_1 + 0x18);
      in_RAX = (ulonglong)param_2;
      *(undefined8 *)(param_1 + 0x20 + in_RAX * 8) = 0;
      if (bVar1 == param_2) {
        uVar4 = (uint)param_2;
        do {
          iVar3 = (int7)(int3)(uVar4 >> 8);
          if (*(longlong *)(param_1 + 0x20 + (longlong)(int)uVar4 * 8) != 0) {
            *(char *)(param_1 + 0x18) = (char)uVar4;
            return CONCAT71(iVar3,1);
          }
          uVar4 = uVar4 - 1;
        } while (-1 < (int)uVar4);
        return CONCAT71(iVar3,1);
      }
    }
  }
  else {
    if (param_2 != 0) {
      lVar2 = (**(code **)(*param_3 + 0x280))(param_3,*(undefined8 *)(param_1 + 0x10));
      in_RAX = 0;
      if (lVar2 == 0) goto LAB_142ddbe76;
    }
    in_RAX = (ulonglong)param_2;
    *(longlong **)(param_1 + 0x20 + in_RAX * 8) = param_3;
    if (*(byte *)(param_1 + 0x18) < param_2) {
      *(byte *)(param_1 + 0x18) = param_2;
      return 1;
    }
  }
LAB_142ddbe76:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142ddbe90 FUN_142ddbe90 body=321 status=ok
// SIG undefined FUN_142ddbe90(void)

undefined1 FUN_142ddbe90(longlong *param_1,undefined1 param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong local_18;
  int local_10;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (lVar4 != 0) {
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
        cVar2 = (**(code **)(*plVar5 + 0x768))();
        if (cVar2 != '\0') {
          lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
          if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
              != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            local_res8[0] = param_2;
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (plVar5 + 0x11a,local_res8);
          }
        }
      }
      local_10 = local_10 + 1;
    }
  }
  local_18 = 0;
  local_10 = 0;
  if (((param_3 != &local_18) && ((int)param_3[1] != 0)) &&
     (plVar5 = (longlong *)*param_3, plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x30))(plVar5,&local_18);
  }
  uVar3 = FUN_142717dc0(param_1,param_2,&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return uVar3;
}



// FUNCTION 142ddbfe0 FUN_142ddbfe0 body=370 status=ok
// SIG undefined FUN_142ddbfe0(void)

void FUN_142ddbfe0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  uVar3 = *(undefined8 *)(param_1 + 0x488);
  FUN_142717eb0();
  if (*(longlong *)(param_1 + 0x850) != 0) {
    FUN_142d3f930(*(longlong *)(param_1 + 0x850),uVar3,*(undefined8 *)(param_1 + 0x488));
  }
  lVar4 = *(longlong *)(param_1 + 0x488);
  lVar6 = 0;
  if (lVar4 != 0) {
    lVar2 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142ddc068;
  }
  lVar4 = lVar6;
LAB_142ddc068:
  *(longlong *)(param_1 + 0x840) = lVar4;
  if (param_2 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x918) = 0;
    *(undefined8 *)(param_1 + 0x920) = 0;
  }
  else {
    uVar3 = FUN_142e79d90();
    lVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar3);
    *(longlong *)(param_1 + 0x918) = lVar4;
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*param_2 + 0x690))(param_2);
      if (lVar4 != 0) {
        plVar5 = (longlong *)(**(code **)(*param_2 + 0x690))(param_2);
        uVar3 = FUN_142e79d90();
        uVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar3);
        *(undefined8 *)(param_1 + 0x918) = uVar3;
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x918);
    if (lVar4 == 0) {
      uVar3 = UCircularThrobber::GetPrivateStaticClass();
      lVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar3);
    }
    *(longlong *)(param_1 + 0x920) = lVar4;
    uVar3 = FUN_142e1b450();
    lVar6 = (**(code **)(*param_2 + 0x628))(param_2,uVar3);
  }
  *(longlong *)(param_1 + 0x930) = lVar6;
  if (*(longlong *)(param_1 + 0x928) != 0) {
    FUN_142c266e0();
  }
  return;
}



// FUNCTION 142ddc160 FUN_142ddc160 body=223 status=ok
// SIG undefined FUN_142ddc160(void)

ulonglong FUN_142ddc160(longlong *param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  ulonglong in_RAX;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == (longlong *)0x0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar3 = (**(code **)(*param_1 + 0x678))();
  if (lVar3 == 0) {
LAB_142ddc1c7:
    lVar3 = 0;
  }
  else {
    lVar4 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142ddc1c7;
  }
  lVar4 = (**(code **)(*param_2 + 0x678))(param_2);
  uVar6 = 0;
  if (lVar4 != 0) {
    lVar5 = AHeoCon::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar5 + 0x90);
    uVar6 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar1) ||
       (uVar6 = *(ulonglong *)(*(longlong *)(lVar4 + 0x10) + 0x88),
       *(longlong *)(uVar6 + (longlong)iVar1 * 8) != lVar5 + 0x88)) {
      uVar6 = uVar6 & 0xffffffffffffff00;
    }
    else {
      uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
    }
    if ((char)uVar6 != '\0') goto LAB_142ddc215;
  }
  lVar4 = 0;
LAB_142ddc215:
  if ((lVar3 != 0) && (lVar4 != 0)) {
    uVar6 = FUN_142cd0090(lVar3,lVar4);
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 142ddc240 FUN_142ddc240 body=350 status=ok
// SIG undefined FUN_142ddc240(void)

void FUN_142ddc240(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  int iVar6;
  undefined8 *puVar7;
  undefined8 local_68;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if (param_1[1] != 0) {
    lVar4 = *param_1;
    fVar1 = *(float *)((longlong)param_1 + 0x44);
    fVar2 = *(float *)(param_1 + 7);
    fVar3 = *(float *)(param_1 + 7);
    if (lVar4 == 0) {
      local_68 = 0;
      puVar7 = &local_68;
      local_60 = 0.0;
    }
    else {
      local_28 = *(float *)(lVar4 + 0x210);
      fStack_24 = *(float *)(lVar4 + 0x214);
      fStack_20 = *(float *)(lVar4 + 0x218);
      fStack_1c = *(float *)(lVar4 + 0x21c);
      auVar5._4_4_ = -(uint)(*(float *)(lVar4 + 0x254) != fStack_24);
      auVar5._0_4_ = -(uint)(*(float *)(lVar4 + 0x250) != local_28);
      auVar5._8_4_ = -(uint)(*(float *)(lVar4 + 600) != fStack_20);
      auVar5._12_4_ = -(uint)(*(float *)(lVar4 + 0x25c) != fStack_1c);
      iVar6 = movmskps((int)&stack0x00000000,auVar5);
      if (iVar6 != 0) {
        *(float *)(lVar4 + 0x250) = local_28;
        *(float *)(lVar4 + 0x254) = fStack_24;
        *(float *)(lVar4 + 600) = fStack_20;
        *(float *)(lVar4 + 0x25c) = fStack_1c;
        puVar7 = (undefined8 *)FQuat::Rotator(&local_28,&local_48);
        *(undefined8 *)(lVar4 + 0x260) = *puVar7;
        *(undefined4 *)(lVar4 + 0x268) = *(undefined4 *)(puVar7 + 1);
      }
      local_40 = *(undefined4 *)(lVar4 + 0x268);
      puVar7 = &local_48;
      local_48 = *(undefined8 *)(lVar4 + 0x260);
    }
    local_38 = *puVar7;
    local_30 = *(undefined4 *)(puVar7 + 1);
    local_68 = 0;
    local_60 = (fVar1 - fVar2) * 0.5 + fVar3;
    FRotator::RotateVector(&local_38,&local_58,&local_68);
    lVar4 = param_1[1];
    *param_2 = local_58 + *param_2;
    param_2[1] = local_54 + param_2[1];
    param_2[2] = local_50 + param_2[2];
    FUN_14223c850(lVar4,param_2,0,0,0);
  }
  return;
}



// FUNCTION 142ddc3a0 FUN_142ddc3a0 body=332 status=ok
// SIG undefined FUN_142ddc3a0(void)

undefined8 FUN_142ddc3a0(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar1 = *(undefined8 *)(param_3 + 4);
  uVar2 = param_3[6];
  *(undefined8 *)(param_1 + 0x18) = param_4;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(param_1 + 0x4c) = *param_3;
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  *(undefined8 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 100) = uVar2;
  if (param_2 != 0) {
    lVar7 = FUN_1428dfc70();
    lVar11 = param_2;
    do {
      if (lVar11 == lVar7) {
        if (((*(int *)(param_1 + 0x28) == 0) || (*(longlong **)(param_1 + 0x20) == (longlong *)0x0))
           || (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))(), cVar6 == '\0')) {
          return 0;
        }
        break;
      }
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar7 = 0;
    lVar11 = lVar7;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar8 = FUN_1428dfc70();
      for (lVar10 = *(longlong *)(param_1 + 0x10);
          (lVar11 = lVar7, lVar10 != 0 && (lVar11 = *(longlong *)(param_1 + 0x10), lVar10 != lVar8))
          ; lVar10 = *(longlong *)(lVar10 + 0x30)) {
      }
    }
    lVar10 = lVar7;
    if (param_2 != 0) {
      lVar9 = FUN_1428dfc70();
      lVar8 = param_2;
      do {
        lVar10 = param_2;
        if (lVar8 == lVar9) break;
        lVar8 = *(longlong *)(lVar8 + 0x30);
        lVar10 = lVar7;
      } while (lVar8 != 0);
    }
    if (lVar11 == lVar10) goto LAB_142ddc4dd;
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_142dc8e80(param_1);
    }
  }
  *(longlong *)(param_1 + 0x10) = param_2;
  if (param_2 != 0) {
    lVar10 = FUN_1428dfc70();
    lVar11 = *(longlong *)(param_1 + 0x10);
    lVar7 = lVar11;
    if (lVar11 != 0) {
      while (lVar7 != lVar10) {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == 0) {
          return *(undefined8 *)(param_1 + 8);
        }
      }
      if (lVar11 != 0) {
        FUN_142dd7070(param_1);
      }
    }
  }
LAB_142ddc4dd:
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 142ddc4f0 FUN_142ddc4f0 body=238 status=ok
// SIG undefined FUN_142ddc4f0(void)

void FUN_142ddc4f0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x678))();
    if (plVar2 != (longlong *)0x0) {
      param_1 = plVar2;
    }
    uVar3 = FUN_142e75af0();
    lVar4 = (**(code **)(*param_1 + 0x628))(param_1,uVar3);
    if (lVar4 != 0) {
      if (param_2 == (longlong *)0x0) {
        *(undefined8 *)(lVar4 + 0x1c8) = 0;
        if (*(char *)(lVar4 + 0x1b0) == '\x02') {
          iVar1 = 2;
          while (*(longlong *)(lVar4 + 0x1b8 + (longlong)iVar1 * 8) == 0) {
            iVar1 = iVar1 + -1;
            if (iVar1 < 0) {
              FUN_142dcaec0(lVar4);
              return;
            }
          }
          *(char *)(lVar4 + 0x1b0) = (char)iVar1;
          FUN_142dcaec0(lVar4);
        }
      }
      else {
        lVar5 = (**(code **)(*param_2 + 0x280))(param_2,*(undefined8 *)(lVar4 + 0x1a8));
        if ((lVar5 != 0) && (*(longlong **)(lVar4 + 0x1c8) = param_2, *(byte *)(lVar4 + 0x1b0) < 2))
        {
          *(undefined1 *)(lVar4 + 0x1b0) = 2;
          FUN_142dcaec0(lVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142ddc5e0 FUN_142ddc5e0 body=44 status=ok
// SIG undefined FUN_142ddc5e0(void)

void FUN_142ddc5e0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142ddbdc0(param_1 + 0x198);
  if (cVar1 != '\0') {
    FUN_142dcaec0(param_1);
    return;
  }
  return;
}



// FUNCTION 142ddc610 FUN_142ddc610 body=12 status=ok
// SIG undefined FUN_142ddc610(void)

void FUN_142ddc610(longlong param_1)

{
  FUN_142ddbdc0(param_1 + 0x198);
  return;
}



// FUNCTION 142ddc620 FUN_142ddc620 body=121 status=ok
// SIG undefined FUN_142ddc620(void)

void FUN_142ddc620(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_14233f450();
  if ((iVar2 == 3) && (cVar1 = FText::EqualTo(param_1 + 0x4f,param_2,0), cVar1 == '\0')) {
    (**(code **)(*param_1 + 0x260))(param_1);
    FText::operator=(param_1 + 0x4f,param_2);
    param_1[0x4e] = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x4b,0);
  }
  return;
}



// FUNCTION 142ddc6a0 FUN_142ddc6a0 body=99 status=ok
// SIG undefined FUN_142ddc6a0(void)

void FUN_142ddc6a0(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_14233f450();
  if ((iVar1 == 3) && (param_2 != param_1[0x4e])) {
    (**(code **)(*param_1 + 0x260))(param_1);
    param_1[0x4e] = param_2;
    uVar2 = FUN_1404b03b0();
    FText::operator=(param_1 + 0x4f,uVar2);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x4b,0);
  }
  return;
}



// FUNCTION 142ddc710 FUN_142ddc710 body=17 status=ok
// SIG undefined FUN_142ddc710(void)

void FUN_142ddc710(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x920);
  if (lVar1 == 0) {
    return;
  }
  iVar2 = FUN_14233f450();
  if ((iVar2 == 3) && (*(longlong *)(lVar1 + 0x1b0) == 0)) {
    FUN_142df2e20(lVar1,param_2);
  }
  return;
}



// FUNCTION 142ddc730 FUN_142ddc730 body=245 status=ok
// SIG undefined FUN_142ddc730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ddc730(longlong param_1,byte param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_128 [32];
  undefined8 local_108 [24];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  if (param_1 != 0) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
    uVar3 = 0;
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_140725150(param_1,local_108,0);
    puVar1 = local_108;
    if (local_48 != (undefined8 *)0x0) {
      puVar1 = local_48;
    }
    uVar2 = (longlong)(int)local_40 & 0x1fffffffffffffff;
    if (puVar1 + (int)local_40 < puVar1) {
      uVar2 = uVar3;
    }
    if (uVar2 != 0) {
      do {
        (**(code **)(*(longlong *)*puVar1 + 0x898))((longlong *)*puVar1,param_2 + 0x1c,param_3);
        uVar3 = uVar3 + 1;
        puVar1 = puVar1 + 1;
      } while (uVar3 != uVar2);
    }
    if (local_48 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142ddc830 FUN_142ddc830 body=308 status=ok
// SIG undefined FUN_142ddc830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ddc830(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_128 [32];
  undefined8 local_108 [24];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar2 = FUN_142df3580(param_2);
  if (((lVar2 != 0) && (*(char *)(lVar2 + 0x68) != '\0')) &&
     (bVar1 = *(byte *)(lVar2 + 0x69), param_1 != 0)) {
    uVar5 = 0;
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_140725150(param_1,local_108,0);
    puVar3 = local_108;
    if (local_48 != (undefined8 *)0x0) {
      puVar3 = local_48;
    }
    uVar4 = (longlong)(int)local_40 & 0x1fffffffffffffff;
    if (puVar3 + (int)local_40 < puVar3) {
      uVar4 = uVar5;
    }
    if (uVar4 != 0) {
      do {
        (**(code **)(*(longlong *)*puVar3 + 0x898))((longlong *)*puVar3,bVar1 + 0x1c,param_3);
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar5 != uVar4);
    }
    if (local_48 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142ddc970 FUN_142ddc970 body=381 status=ok
// SIG undefined FUN_142ddc970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ddc970(longlong param_1,byte param_2,char param_3)

{
  longlong *plVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  byte bVar6;
  undefined1 auStack_128 [32];
  longlong local_108 [24];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  if (param_1 != 0) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
    uVar3 = 0;
    bVar6 = '\x01' << (param_2 & 0x1f);
    local_48 = (longlong *)0x0;
    local_40 = 0;
    FUN_140725150(param_1,local_108,0);
    plVar4 = local_108;
    if (local_48 != (longlong *)0x0) {
      plVar4 = local_48;
    }
    uVar5 = (longlong)(int)local_40 & 0x1fffffffffffffff;
    if (plVar4 + (int)local_40 < plVar4) {
      uVar5 = uVar3;
    }
    if (uVar5 != 0) {
      do {
        plVar1 = (longlong *)*plVar4;
        bVar2 = *(byte *)((longlong)plVar1 + 0x3bb) | bVar6;
        if (param_3 == '\0') {
          bVar2 = *(byte *)((longlong)plVar1 + 0x3bb) & ~bVar6;
        }
        (**(code **)(*plVar1 + 0x550))(plVar1,bVar2);
        bVar2 = bVar6 | *(byte *)((longlong)plVar1 + 0x302);
        if (param_3 == '\0') {
          bVar2 = *(byte *)((longlong)plVar1 + 0x302) & ~bVar6;
        }
        FUN_142397960(plVar1,bVar2);
        uVar3 = uVar3 + 1;
        plVar4 = plVar4 + 1;
      } while (uVar3 != uVar5);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142ddcaf0 FUN_142ddcaf0 body=422 status=ok
// SIG undefined FUN_142ddcaf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ddcaf0(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  byte bVar7;
  undefined1 auStack_128 [32];
  longlong local_108 [24];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar2 = FUN_142df3580(param_2);
  if (((lVar2 != 0) && (*(char *)(lVar2 + 0x68) != '\0')) && (param_1 != 0)) {
    uVar4 = 0;
    bVar7 = '\x01' << (*(byte *)(lVar2 + 0x69) & 0x1f);
    local_48 = (longlong *)0x0;
    local_40 = 0;
    FUN_140725150(param_1,local_108,0);
    plVar5 = local_108;
    if (local_48 != (longlong *)0x0) {
      plVar5 = local_48;
    }
    uVar6 = (longlong)(int)local_40 & 0x1fffffffffffffff;
    if (plVar5 + (int)local_40 < plVar5) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) {
      do {
        plVar1 = (longlong *)*plVar5;
        bVar3 = *(byte *)((longlong)plVar1 + 0x3bb) | bVar7;
        if (param_3 == '\0') {
          bVar3 = ~bVar7 & *(byte *)((longlong)plVar1 + 0x3bb);
        }
        (**(code **)(*plVar1 + 0x550))(plVar1,bVar3);
        bVar3 = bVar7 | *(byte *)((longlong)plVar1 + 0x302);
        if (param_3 == '\0') {
          bVar3 = ~bVar7 & *(byte *)((longlong)plVar1 + 0x302);
        }
        FUN_142397960(plVar1,bVar3);
        uVar4 = uVar4 + 1;
        plVar5 = plVar5 + 1;
      } while (uVar4 != uVar6);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142ddcca0 FUN_142ddcca0 body=135 status=ok
// SIG undefined FUN_142ddcca0(void)

void FUN_142ddcca0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x948);
    plVar4 = plVar1;
    if (plVar1 != plVar1 + (longlong)*(int *)(param_1 + 0x950) * 0xc) {
      while (*plVar4 != param_2) {
        plVar4 = plVar4 + 0xc;
        if (plVar4 == plVar1 + (longlong)*(int *)(param_1 + 0x950) * 0xc) {
          return;
        }
      }
      iVar2 = (int)(((longlong)plVar4 - (longlong)plVar1) / 0x60);
      if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x950))) {
        lVar3 = (longlong)iVar2 * 0x60 + *(longlong *)(param_1 + 0x948);
        *(undefined4 *)(lVar3 + 0x20) = param_3;
        *(undefined4 *)(lVar3 + 0x24) = param_4;
      }
    }
  }
  return;
}



// FUNCTION 142ddcd30 FUN_142ddcd30 body=124 status=ok
// SIG undefined FUN_142ddcd30(void)

void FUN_142ddcd30(longlong *param_1,char param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined8 local_res18;
  
  local_res18 = param_3;
  cVar1 = FUN_1407c3030(param_1 + 0x74);
  if (param_2 == '\0') {
    FUN_142dbb5d0(param_1 + 0x74,&local_res18);
  }
  else {
    FUN_142dafbc0();
  }
  cVar2 = FUN_1407c3030(param_1 + 0x74);
  if (cVar2 != cVar1) {
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  return;
}



// FUNCTION 142ddcdb0 FUN_142ddcdb0 body=28 status=ok
// SIG undefined FUN_142ddcdb0(void)

void FUN_142ddcdb0(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[299];
  *(char *)(param_1 + 299) = param_2;
  if (param_2 != (char)lVar1) {
                    /* WARNING: Could not recover jumptable at 0x000142ddcdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1000))();
    return;
  }
  return;
}



// FUNCTION 142ddcdd0 FUN_142ddcdd0 body=439 status=ok
// SIG undefined FUN_142ddcdd0(void)

void FUN_142ddcdd0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = 0;
  if (*(longlong *)(param_1 + 0x860) != 0) {
    lVar2 = FUN_142956f50();
    for (lVar1 = *(longlong *)(param_1 + 0x860); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        if (*(longlong *)(param_1 + 0x860) != 0) {
          lVar3 = FUN_142956f50();
          lVar1 = *(longlong *)(param_1 + 0x860);
          lVar2 = lVar1;
          lVar7 = lVar6;
          if (lVar1 == 0) goto LAB_142ddce51;
          goto LAB_142ddce40;
        }
        break;
      }
    }
  }
  goto LAB_142ddcea7;
  while (plVar5 = (longlong *)(lVar2 + 0x30), lVar2 = *plVar5, lVar7 = lVar6, *plVar5 != 0) {
LAB_142ddce40:
    lVar7 = lVar1;
    if (lVar2 == lVar3) break;
  }
LAB_142ddce51:
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar4 = FUN_1417985e0(lVar7,param_1,0,0,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x130) = uVar4;
  FUN_14234b150(uVar4);
LAB_142ddcea7:
  if (*(longlong *)(param_1 + 0x870) != 0) {
    lVar2 = FUN_142df6780();
    for (lVar1 = *(longlong *)(param_1 + 0x870); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        if (*(longlong *)(param_1 + 0x870) != 0) {
          lVar2 = FUN_142df6780();
          for (lVar1 = *(longlong *)(param_1 + 0x870);
              (lVar7 = lVar6, lVar1 != 0 && (lVar7 = *(longlong *)(param_1 + 0x870), lVar1 != lVar2)
              ); lVar1 = *(longlong *)(lVar1 + 0x30)) {
          }
          FUN_1417846f0(param_1,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          plVar5 = (longlong *)FUN_1417985e0(lVar7,param_1,0,0,0,0,0,0,0);
          *(longlong **)(param_1 + 0x938) = plVar5;
          (**(code **)(*plVar5 + 0x278))(plVar5);
        }
        break;
      }
    }
  }
  FUN_1427186f0(param_1);
  return;
}



// FUNCTION 142ddcf90 FUN_142ddcf90 body=181 status=ok
// SIG undefined FUN_142ddcf90(void)

undefined8 FUN_142ddcf90(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar2 = FUN_142dcdb70();
  if (lVar2 == 0) {
    return 0;
  }
  if ((((*(char *)(lVar2 + 0x8e) != '\0') && (*(int *)(param_1 + 0x38) < 1)) &&
      (*(int *)(param_1 + 0x3c) < 1)) &&
     ((*(int *)(param_1 + 0x54) < 1 && (*(char *)(param_1 + 0x51) == '\0')))) {
    lVar2 = FUN_142dcdb70(param_1);
    if (lVar2 != 0) {
      puVar3 = *(undefined8 **)(lVar2 + 0xa0);
      puVar4 = puVar3 + (longlong)*(int *)(lVar2 + 0xa8) * 6;
      for (; puVar3 != puVar4; puVar3 = puVar3 + 6) {
        iVar1 = FUN_142dce930(param_1,*puVar3,0);
        if (0 < iVar1) {
          return 0;
        }
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142ddd050 FUN_142ddd050 body=42 status=ok
// SIG undefined FUN_142ddd050(void)

undefined1 FUN_142ddd050(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1427187c0();
  if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x7b8) == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 142ddd080 FUN_142ddd080 body=63 status=ok
// SIG undefined FUN_142ddd080(void)

undefined8 FUN_142ddd080(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar1 = FUN_14254a160(uVar3);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142ddd0c0 FUN_142ddd0c0 body=243 status=ok
// SIG undefined FUN_142ddd0c0(void)

void FUN_142ddd0c0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if ((char)param_1[0xc] == '\0') {
    *(undefined1 *)(param_1 + 0xc) = 1;
    plVar6 = (longlong *)param_1[3];
    plVar5 = plVar6 + (longlong)(int)param_1[4] * 7;
    if (plVar6 != plVar5) {
      plVar7 = plVar6 + 5;
      do {
        lVar2 = *plVar6;
        if (lVar2 == 0) {
LAB_142ddd126:
          plVar4 = (longlong *)0x0;
        }
        else {
          iVar1 = (int)plVar7[-4];
          if ((iVar1 < 0) || (*(int *)(lVar2 + 0x40) <= iVar1)) goto LAB_142ddd126;
          plVar4 = (longlong *)((longlong)iVar1 * 0x50 + *(longlong *)(lVar2 + 0x38));
        }
        cVar3 = FWindowsSystemWideCriticalSection::IsValid(plVar7);
        if (((cVar3 != '\0') && (plVar4 != (longlong *)0x0)) && (*plVar4 != 0)) {
          FUN_142ca96a0(plVar7);
        }
        plVar6 = plVar6 + 7;
        plVar7 = plVar7 + 7;
      } while (plVar6 != plVar5);
    }
    plVar6 = (longlong *)*param_1;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x418))(plVar6,param_1);
      lVar2 = *param_1;
      if (((lVar2 != 0) && (*(char *)(lVar2 + 400) != '\0')) &&
         (plVar6 = (longlong *)param_1[1], plVar6 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000142ddd1a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x280))(plVar6,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142ddd1c0 FUN_142ddd1c0 body=270 status=ok
// SIG undefined FUN_142ddd1c0(void)

void FUN_142ddd1c0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_1427189d0();
  if ((((param_1[0xa5] != 0) && ((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) != 0)) &&
      (cVar1 = (**(code **)(*param_1 + 0x768))(param_1), cVar1 != '\0')) && (param_1[0x128] == 0)) {
    lVar3 = param_1[0xa5];
    FUN_1417846f0(lVar3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar2 = UProgressBar::GetPrivateStaticClass();
    lVar3 = FUN_1417985e0(uVar2,lVar3,0,0,0,0,0,0,0);
    param_1[0x128] = lVar3;
    if (lVar3 != 0) {
      FUN_142382f60(lVar3,*(undefined8 *)(param_1[0xa5] + 0x460),&DAT_146af29ec,0);
      uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      FUN_14234b270(param_1[0x128],uVar2);
      AK::MemoryMgr::StartProfileThreadUsage((long)param_1[0x128]);
    }
  }
  return;
}



// FUNCTION 142ddd2d0 FUN_142ddd2d0 body=157 status=ok
// SIG undefined FUN_142ddd2d0(void)

void FUN_142ddd2d0(longlong *param_1,undefined1 param_2,longlong param_3,undefined1 param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong local_38;
  longlong lStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *(undefined1 *)(param_1 + 0x3d) = param_2;
  param_1[0x3f] = param_3;
  lVar1 = FUN_142dcc050(param_1,param_3);
  param_1[0x42] = param_5;
  param_1[0x3e] = lVar1;
  *(undefined1 *)(param_1 + 0x40) = param_4;
  lVar1 = FUN_142dcc050(param_1);
  param_1[0x41] = lVar1;
  local_38 = param_1[0x3d];
  lStack_30 = param_1[0x3e];
  local_28 = (undefined4)param_1[0x3f];
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x1fc);
  uStack_20 = (undefined4)param_1[0x40];
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x204);
  local_18 = (undefined4)param_1[0x41];
  uStack_14 = *(undefined4 *)((longlong)param_1 + 0x20c);
  uStack_10 = (undefined4)param_1[0x42];
  uStack_c = *(undefined4 *)((longlong)param_1 + 0x214);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x30,&local_38);
                    /* WARNING: Could not recover jumptable at 0x000142ddd366. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}



// FUNCTION 142ddd370 FUN_142ddd370 body=330 status=ok
// SIG undefined FUN_142ddd370(void)

undefined8 * FUN_142ddd370(undefined8 *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_38;
  
  fVar3 = *param_2;
  if (((fVar3 == DAT_1468b5d90) && (DAT_1468b5d94 == param_2[1])) && (DAT_1468b5d98 == param_2[2]))
  {
    fVar3 = param_2[2];
    *param_1 = *(undefined8 *)param_2;
    *(float *)(param_1 + 1) = fVar3;
    return param_1;
  }
  local_38 = *(undefined8 *)param_2;
  fVar6 = ABS(fVar3);
  fVar1 = param_2[2];
  fVar4 = param_2[1];
  fVar5 = ABS(fVar4);
  if ((fVar6 <= param_4) || (fVar6 <= fVar5)) {
    if ((fVar5 <= param_4) || (fVar5 <= fVar6)) goto LAB_142ddd49c;
    param_3 = (fVar5 - param_4) * param_3;
    if (fVar6 < param_3) {
LAB_142ddd494:
      fVar4 = 0.0;
    }
    else {
      fVar4 = ((fVar6 - param_3) / (fVar5 - param_3)) * fVar5;
      if (fVar3 <= 0.0) {
        if (0.0 <= fVar3) goto LAB_142ddd494;
        fVar4 = ((param_3 - fVar6) / (fVar5 - param_3)) * fVar5;
      }
    }
    uVar2 = (ulonglong)local_38 >> 0x20;
    local_38 = CONCAT44((int)uVar2,fVar4);
    goto LAB_142ddd49c;
  }
  param_3 = (fVar6 - param_4) * param_3;
  if (fVar5 < param_3) {
LAB_142ddd43e:
    fVar3 = 0.0;
  }
  else {
    fVar3 = ((fVar5 - param_3) / (fVar6 - param_3)) * fVar6;
    if (fVar4 <= 0.0) {
      if (fVar4 < 0.0) {
        local_38 = CONCAT44(((param_3 - fVar5) / (fVar6 - param_3)) * fVar6,(undefined4)local_38);
        goto LAB_142ddd49c;
      }
      goto LAB_142ddd43e;
    }
  }
  local_38 = CONCAT44(fVar3,(undefined4)local_38);
LAB_142ddd49c:
  *param_1 = local_38;
  *(float *)(param_1 + 1) = fVar1;
  return param_1;
}



// FUNCTION 142ddd4c0 FUN_142ddd4c0 body=2105 status=ok
// SIG undefined FUN_142ddd4c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ddd4c0(longlong param_1,longlong param_2,float param_3)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  char *pcVar14;
  longlong lVar15;
  longlong *plVar16;
  byte bVar17;
  char cVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_res8;
  char local_res10 [8];
  float *pfVar22;
  undefined4 uVar23;
  undefined8 *puVar24;
  float local_154;
  undefined1 local_150 [8];
  undefined8 local_148;
  float local_140;
  float local_13c;
  longlong local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  longlong local_108;
  undefined1 local_100;
  longlong local_fc;
  undefined4 local_f4;
  longlong local_f0;
  undefined4 local_e8;
  byte local_e4;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [128];
  
  plVar16 = (longlong *)0x0;
  plVar8 = plVar16;
  plVar10 = plVar16;
  if ((param_2 != 0) && (plVar8 = (longlong *)FUN_14222e260(param_2), plVar8 != (longlong *)0x0)) {
    uVar9 = UDamageableInterface::GetPrivateStaticClass();
    plVar10 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar8,uVar9);
  }
  plVar11 = (longlong *)FWeakObjectPtr::Get(param_1);
  if (plVar10 == (longlong *)0x0) {
    return;
  }
  if (plVar11 == (longlong *)0x0) {
    return;
  }
  if ((*(char *)(param_1 + 0x380) != '\x02') ||
     ((plVar8 != (longlong *)0x0 && ((*(uint *)((longlong)plVar8 + 0x4cc) >> 1 & 1) != 0)))) {
    *(byte *)(param_1 + 0x38c) = *(byte *)(param_1 + 0x38c) & 0xfa;
    return;
  }
  lVar13 = param_1 + 0x10;
  local_d8 = lVar13;
  cVar5 = FWeakObjectPtr::IsValid(lVar13);
  if (cVar5 != '\0') {
    uVar9 = FWeakObjectPtr::Get(lVar13);
    cVar5 = FUN_142dd39e0(uVar9,param_2);
    if (cVar5 == '\0') goto LAB_142ddd5a7;
  }
  local_138 = param_1 + 0x18;
  cVar5 = FWeakObjectPtr::IsValid(local_138);
  if (cVar5 == '\0') {
LAB_142ddd5a7:
    *(byte *)(param_1 + 0x38c) = *(byte *)(param_1 + 0x38c) & 0xfa;
    return;
  }
  FUN_142dc6240(param_1);
  plVar12 = plVar16;
  if (plVar8 != (longlong *)0x0) {
    uVar9 = FUN_142e7dfd0();
    plVar12 = (longlong *)(**(code **)(*plVar8 + 0x628))(plVar8,uVar9);
  }
  cVar5 = '\0';
  if (plVar12 == (longlong *)0x0) {
    if (param_2 != 0) {
      lVar13 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (*(longlong *)(param_2 + 0x9d0) != 0)) goto LAB_142ddd655;
    }
    cVar5 = '\x01';
  }
  else {
    pcVar14 = (char *)FUN_142deca50(plVar12,1);
    cVar5 = *pcVar14;
  }
LAB_142ddd655:
  local_e4 = local_e4 & 0xc0;
  local_140 = 3.4028235e+38;
  local_13c = 3.4028235e+38;
  local_128 = 0xffffffff;
  uStack_120 = 0xffffffff;
  local_fc = _DAT_1468b5d90;
  local_f0 = _DAT_1468b5d90;
  local_118 = -1.0;
  fStack_114 = -1.0;
  fStack_110 = -1.0;
  fStack_10c = -1.0;
  local_108 = 0;
  local_100 = 0;
  local_f4 = DAT_1468b5d98;
  local_e8 = DAT_1468b5d98;
  cVar6 = (**(code **)(*plVar10 + 0x38))(plVar10,plVar11,&local_128);
  if (cVar6 == '\0') {
    FWeakObjectPtr::operator=(&local_128,plVar11);
    uVar9 = (**(code **)(*plVar11 + 0x668))(plVar11);
    FWeakObjectPtr::operator=(&uStack_120,uVar9);
  }
  if (local_118 < 0.0) {
    local_154 = 3.4028235e+38;
  }
  else {
    local_154 = param_3 - local_118;
  }
  local_150[0] = DAT_1466ad940;
  local_148 = DAT_1466ad948;
  cVar6 = FUN_142dc70e0(param_1,local_150,local_e4 >> 1 & 1,&local_140,&local_154,&local_res8);
  local_e4 = local_e4 & 0xfd | cVar6 * '\x02';
  local_150[0] = DAT_1466ad930;
  local_148 = DAT_1466ad938;
  cVar6 = FUN_142dc70e0(param_1,local_150,local_e4 >> 2 & 1,&local_13c,&local_154,&local_res8);
  local_e4 = local_e4 & 0xfb | cVar6 << 2;
  local_150[0] = DAT_1466ad920;
  local_148 = DAT_1466ad928;
  cVar6 = FUN_142dc70e0(param_1,local_150,local_e4 >> 3 & 1,local_res10,&local_154,&local_res8);
  local_e4 = local_e4 & 0xf7 | cVar6 << 3;
  local_150[0] = DAT_1466ad960;
  local_148 = DAT_1466ad968;
  cVar6 = FUN_142dc70e0(param_1,local_150,local_e4 >> 4 & 1,&local_res8,&local_154,&local_res8);
  local_e4 = local_e4 & 0xef | cVar6 << 4;
  local_150[0] = DAT_1466ad950;
  local_148 = DAT_1466ad958;
  puVar24 = &local_res8;
  pfVar22 = &local_154;
  cVar6 = FUN_142dc70e0(param_1,local_150,local_e4 >> 5 & 1,local_res10,pfVar22,puVar24);
  uVar23 = (undefined4)((ulonglong)pfVar22 >> 0x20);
  if (((local_e4 & 2) == 0) && ((local_e4 & 4) == 0)) {
    cVar18 = '\0';
  }
  else {
    cVar18 = '\x01';
  }
  local_res8 = CONCAT71(local_res8._1_7_,cVar18);
  local_e4 = local_e4 & 0xdf | cVar6 << 5;
  FUN_142dcd3a0(param_1,&local_c8,local_res10);
  local_f0 = local_c8;
  local_e8 = local_c0;
  if ((cVar5 == '\0') &&
     ((plVar12 == (longlong *)0x0 || (cVar6 = FUN_142df43c0(plVar12,1,&local_c8), cVar6 == '\0'))))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  cVar6 = FUN_142dd38f0(param_1);
  if ((cVar18 == '\0') || ((10.0 < local_140 && (10.0 < local_13c)))) {
    local_res10[0] = '\0';
  }
  else {
    local_res10[0] = '\x01';
  }
  bVar4 = false;
  fVar20 = DAT_1466ad8fc;
  if (((char)local_res8 != '\0') && (DAT_1466ad8fc <= DAT_1466ad824)) {
    fVar20 = DAT_1466ad824;
  }
  if ((bVar3) && (fVar20 <= DAT_1466ad970)) {
    fVar20 = DAT_1466ad970;
  }
  fVar21 = local_154;
  if ((cVar6 != '\0') && ((cVar5 != '\0' || (bVar3)))) {
    bVar4 = true;
    fVar21 = 0.0;
    fStack_114 = param_3;
  }
  if ((fVar21 < 3.4028235e+38) && (0.0 <= fStack_114)) {
    if (param_3 < fStack_114) {
      fVar19 = 3.4028235e+38;
    }
    else {
      fVar19 = param_3 - fStack_114;
    }
    if (fVar19 < fVar21) {
      fVar21 = fVar19;
    }
  }
  if (((!bVar4) && (fVar21 < 3.4028235e+38)) && (fVar21 <= fVar20)) {
    bVar4 = true;
  }
  plVar8 = (longlong *)FWeakObjectPtr::Get(param_1);
  if ((plVar8 != (longlong *)0x0) &&
     (plVar11 = (longlong *)(**(code **)(*plVar8 + 0x690))(plVar8), plVar11 != (longlong *)0x0)) {
    plVar8 = plVar11;
  }
  cVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,plVar8);
  if ((bVar4) || (cVar5 != '\0')) {
    bVar17 = 1;
  }
  else {
    bVar17 = 0;
  }
  if (3.4028235e+38 <= fVar21) {
    local_118 = -1.0;
  }
  else {
    local_118 = param_3 - fVar21;
  }
  if (bVar17 != 0) {
    if ((param_2 != 0) && (local_res8 = 0, local_108 == 0)) {
      local_108 = *(longlong *)(param_2 + 0x18);
    }
    if (fStack_10c == -1.0) {
      fStack_10c = param_3;
    }
  }
  bVar2 = local_e4 * '\x02';
  local_e4 = local_e4 & 0xfe | bVar17;
  if (((bVar17 == 0) || (cVar6 == '\0')) || ((local_res10[0] == '\0' && (!bVar3)))) {
    bVar7 = 0;
  }
  else {
    bVar7 = 4;
  }
  *(byte *)(param_1 + 0x38c) =
       ((bVar2 ^ *(byte *)(param_1 + 0x38c)) & 2 ^ *(byte *)(param_1 + 0x38c)) & 0xfa | bVar17 |
       bVar7;
  if (bVar4) {
    fVar20 = fVar20 - fVar21;
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10,fVar20);
    (**(code **)(*plVar10 + 0x30))(plVar10,&local_128);
  }
  lVar13 = local_d8;
  if (bVar17 == 0) {
    return;
  }
  cVar5 = FWeakObjectPtr::IsValid(local_d8);
  if (cVar5 == '\0') {
    return;
  }
  if (param_3 <= fStack_110) {
    return;
  }
  lVar15 = FWeakObjectPtr::Get(local_138);
  uVar9 = FWeakObjectPtr::Get(lVar13);
  plVar8 = (longlong *)FUN_142dcf570(uVar9);
  if ((plVar8 != (longlong *)0x0) && (0 < (int)plVar8[0x13c])) {
    if (lVar15 != 0) {
      plVar16 = *(longlong **)(lVar15 + 0x118);
    }
    if (plVar16 != (longlong *)0x0) {
      uVar9 = (**(code **)(*plVar8 + 0x148))(plVar8);
      lVar13 = FUN_142c1f5b0(uVar9);
      lVar15 = (**(code **)(*plVar16 + 0x688))(plVar16);
      if ((lVar13 != 0) && (lVar15 != 0)) {
        lVar1 = *(longlong *)(lVar15 + 0x168);
        if (lVar1 == 0) {
          local_138 = _DAT_1468b5d90;
          local_130 = DAT_1468b5d98;
        }
        else {
          local_138 = *(longlong *)(lVar1 + 0x220);
          local_130 = *(undefined4 *)(lVar1 + 0x228);
        }
        local_d8 = local_138;
        local_d0 = local_130;
        FUN_142c1a550(local_b8,plVar8,lVar15,&local_d8,CONCAT44(uVar23,0x461c4000),
                      (ulonglong)puVar24 & 0xffffffff00000000,0x3f800000);
        plVar16 = (longlong *)UGameplayTask_SpawnActor::GetPrivateStaticClass();
        lVar15 = plVar16[0x1f];
        if (lVar15 == 0) {
          (**(code **)(*plVar16 + 0x368))(plVar16);
          lVar15 = plVar16[0x1f];
        }
        if (((int)(uint)*(byte *)(lVar15 + 0x48) < *(int *)(lVar13 + 0xd8)) &&
           (lVar13 = *(longlong *)
                      (*(longlong *)(lVar13 + 0xd0) + (ulonglong)*(byte *)(lVar15 + 0x48) * 8),
           lVar13 != 0)) {
          FUN_142c23d50(lVar13,local_b8);
        }
      }
    }
  }
  rand();
  return;
}



// FUNCTION 142dddd00 FUN_142dddd00 body=182 status=ok
// SIG undefined FUN_142dddd00(void)

longlong FUN_142dddd00(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
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
  if (bVar1) {
    return param_1[0x121];
  }
  lVar2 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
  if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return param_1[0x123];
  }
  uVar3 = FUN_142e79d90();
                    /* WARNING: Could not recover jumptable at 0x000142ddddaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar3);
  return lVar2;
}



// FUNCTION 142ddddc0 FUN_142ddddc0 body=393 status=ok
// SIG undefined FUN_142ddddc0(void)

longlong FUN_142ddddc0(longlong *param_1)

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



// FUNCTION 142dddf50 FUN_142dddf50 body=50 status=ok
// SIG undefined FUN_142dddf50(void)

undefined1 FUN_142dddf50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_142dddd00();
  if (lVar2 != 0) {
    cVar1 = FUN_142dd3a70(lVar2,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142dddf90 FUN_142dddf90 body=354 status=ok
// SIG undefined FUN_142dddf90(void)

void FUN_142dddf90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    FUN_142d4a150(param_2,param_1);
    lVar2 = (longlong)*(int *)(param_1 + 0x950);
    if (*(int *)(param_1 + 0x950) != 0) {
      iVar7 = 0;
      bVar8 = **(longlong **)(param_1 + 0x948) != param_2;
      lVar3 = 0;
      iVar4 = 0;
      do {
        lVar3 = lVar3 + 1;
        iVar5 = iVar4 + 1;
        if (lVar3 < lVar2) {
          plVar1 = (longlong *)(lVar3 * 0x60 + *(longlong *)(param_1 + 0x948));
          do {
            if (bVar8 != (*plVar1 != param_2)) break;
            iVar5 = iVar5 + 1;
            lVar3 = lVar3 + 1;
            plVar1 = plVar1 + 0xc;
          } while (lVar3 < lVar2);
        }
        iVar6 = iVar5 - iVar4;
        if (bVar8 == false) {
          if (iVar6 != 0) {
            plVar1 = (longlong *)((longlong)iVar4 * 0x60 + 0x48 + *(longlong *)(param_1 + 0x948));
            do {
              if (*plVar1 != 0) {
                FMemory::Free();
              }
              plVar1 = plVar1 + 0xc;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
        else {
          if (iVar7 != iVar4) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar7 * 0x60 + *(longlong *)(param_1 + 0x948)),
                       (void *)((longlong)iVar4 * 0x60 + *(longlong *)(param_1 + 0x948)),
                       (longlong)iVar6 * 0x60);
          }
          iVar7 = iVar7 + iVar6;
        }
        bVar8 = (bool)(bVar8 ^ 1);
        iVar4 = iVar5;
      } while (lVar3 < lVar2);
      *(int *)(param_1 + 0x950) = iVar7;
    }
  }
  return;
}



// FUNCTION 142dde100 FUN_142dde100 body=28 status=ok
// SIG undefined FUN_142dde100(void)

longlong FUN_142dde100(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x48) != '\0')) && (*(longlong *)(param_1 + 0x10) != 0)) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 142dde120 FUN_142dde120 body=495 status=ok
// SIG undefined FUN_142dde120(void)

void FUN_142dde120(longlong param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar8 = *(longlong **)(param_1 + 0x118);
  if (plVar8 != (longlong *)0x0) {
    lVar4 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142dde20e;
  }
  lVar4 = *(longlong *)(param_1 + 0x118);
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FUN_14291fb80();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  plVar8 = *(longlong **)(lVar4 + 0x488);
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  lVar4 = AHeoCon::GetPrivateStaticClass();
  if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
LAB_142dde20e:
  iVar1 = *(int *)(param_1 + 0x7540);
  if ((iVar1 < 1) || (param_2 != 0)) {
    if ((((iVar1 == 0) && (0 < param_2)) && (0 < *(int *)(param_1 + 0xe750))) &&
       (cVar3 = (**(code **)(*plVar8 + 0x780))(plVar8), cVar3 == '\0')) {
      lVar4 = *(longlong *)(param_1 + 0xe748);
      if (*(longlong *)(param_1 + 0xe748) == 0) {
        lVar4 = param_1 + 0x7548;
      }
      if (((*(byte *)(lVar4 + 0x38c) & 1) == 0) && ((*(byte *)(lVar4 + 0x38c) & 2) != 0)) {
        (**(code **)(*plVar8 + 0x9f8))(plVar8);
      }
    }
    return;
  }
  if (0 < iVar1) {
    lVar4 = *(longlong *)(param_1 + 0x7538);
    if (*(longlong *)(param_1 + 0x7538) == 0) {
      lVar4 = param_1 + 0x338;
    }
    plVar6 = (longlong *)FWeakObjectPtr::Get(lVar4);
    if (plVar6 != (longlong *)0x0) {
      plVar7 = (longlong *)(**(code **)(*plVar6 + 0x690))(plVar6);
      if (plVar7 != (longlong *)0x0) {
        plVar6 = plVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x000142dde27e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x9f0))(plVar8,plVar6);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142dde2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x9f0))(plVar8,0);
  return;
}



// FUNCTION 142dde310 FUN_142dde310 body=163 status=ok
// SIG undefined FUN_142dde310(void)

undefined8 FUN_142dde310(undefined8 param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar2 = (longlong *)FWeakObjectPtr::Get();
  plVar3 = (longlong *)FWeakObjectPtr::Get(param_1);
  if ((plVar3 != (longlong *)0x0) &&
     (plVar4 = (longlong *)(**(code **)(*plVar3 + 0x690))(plVar3), plVar4 != (longlong *)0x0)) {
    plVar3 = plVar4;
  }
  if (((plVar2 != (longlong *)0x0) &&
      (plVar4 = (longlong *)(**(code **)(*plVar2 + 0x688))(plVar2), plVar4 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*plVar4 + 0x780))(plVar4), cVar1 != '\0')) {
    return 1;
  }
  if (((plVar3 != plVar2) && (plVar3 != (longlong *)0x0)) &&
     ((plVar3 = (longlong *)(**(code **)(*plVar3 + 0x688))(plVar3), plVar3 != (longlong *)0x0 &&
      (cVar1 = (**(code **)(*plVar3 + 0x780))(plVar3), cVar1 != '\0')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 142dde3c0 FUN_142dde3c0 body=624 status=ok
// SIG undefined FUN_142dde3c0(void)

undefined8 FUN_142dde3c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong local_58;
  longlong local_50;
  longlong local_40;
  
  lVar10 = *(longlong *)(param_1 + 0x28);
  if (lVar10 == 0) {
    return 0;
  }
  lVar7 = *(longlong *)(lVar10 + 0x1c8);
  lVar11 = (longlong)*(int *)(lVar10 + 0x1d0) * 0x80 + lVar7;
  for (; lVar7 != lVar11; lVar7 = lVar7 + 0x80) {
    if (*(longlong *)(lVar7 + 8) == *(longlong *)(param_1 + 0x10)) {
      if ((lVar7 != 0) && (*(char *)(lVar7 + 0x51) != '\0')) {
        return 0;
      }
      break;
    }
  }
  if (*(char *)(param_1 + 0x98) != '\0') goto LAB_142dde557;
  lVar7 = *(longlong *)(lVar10 + 0x1f8);
  if (lVar7 == 0) {
    plVar9 = *(longlong **)(lVar10 + 0x118);
    if (plVar9 == (longlong *)0x0) goto LAB_142dde557;
    uVar3 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
    lVar7 = (**(code **)(*plVar9 + 0x628))(plVar9,uVar3);
    *(longlong *)(lVar10 + 0x1f8) = lVar7;
    if (lVar7 == 0) goto LAB_142dde557;
  }
  lVar10 = *(longlong *)(param_1 + 0xa0);
  lVar11 = (longlong)*(int *)(param_1 + 0xa8) * 0x30 + lVar10;
  for (; lVar10 != lVar11; lVar10 = lVar10 + 0x30) {
    FUN_142dc19e0(&local_58,lVar10);
    lVar1 = local_58;
    if (local_58 != 0) {
      lVar4 = FUN_142dceb30(lVar7,local_58);
      if (lVar4 == 0) {
        iVar5 = *(int *)(lVar1 + 0x30);
      }
      else {
        iVar5 = *(int *)(lVar4 + 8);
      }
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x1c8);
      lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x1d0) * 0x80 + lVar4;
      for (; lVar4 != lVar8; lVar4 = lVar4 + 0x80) {
        if (*(longlong *)(lVar4 + 8) == *(longlong *)(param_1 + 0x10)) {
          if ((lVar4 != 0) && (lVar8 = FUN_142dcdb70(lVar4), lVar8 != 0)) {
            plVar9 = *(longlong **)(lVar8 + 0xa0);
            plVar12 = plVar9 + (longlong)*(int *)(lVar8 + 0xa8) * 6;
            goto joined_r0x000142dde59c;
          }
          break;
        }
      }
LAB_142dde517:
      iVar6 = -1;
LAB_142dde51c:
      if ((float)iVar5 < (float)iVar6) {
        if (local_40 != 0) {
          FMemory::Free();
        }
        if (local_50 != 0) {
          FMemory::Free();
        }
        goto LAB_142dde5fc;
      }
    }
    if (local_40 != 0) {
      FMemory::Free();
    }
    if (local_50 != 0) {
      FMemory::Free();
    }
  }
LAB_142dde557:
  cVar2 = FUN_142dfdb00(param_1);
  if (cVar2 == '\0') {
LAB_142dde5fc:
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
joined_r0x000142dde59c:
  if (plVar9 == plVar12) goto LAB_142dde517;
  if (*plVar9 == lVar1) {
    iVar6 = (int)plVar9[2];
    if (iVar6 < 2) {
      if (iVar6 == 1) {
        iVar6 = *(int *)plVar9[1];
        goto LAB_142dde51c;
      }
    }
    else if (*(int *)(lVar4 + 0x3c) < iVar6) {
      iVar6 = *(int *)(plVar9[1] + (longlong)*(int *)(lVar4 + 0x3c) * 8);
      goto LAB_142dde51c;
    }
  }
  plVar9 = plVar9 + 6;
  goto joined_r0x000142dde59c;
}



// FUNCTION 142dde630 FUN_142dde630 body=892 status=ok
// SIG undefined FUN_142dde630(void)

void FUN_142dde630(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong *local_68;
  int local_60;
  longlong *local_58;
  int local_50;
  longlong *local_48;
  longlong local_40;
  undefined4 local_38;
  
  FUN_1422406d0();
  iVar9 = (int)param_1[0x90];
  lVar8 = param_1[0x8f];
  local_68 = (longlong *)0x0;
  local_60 = iVar9;
  if (iVar9 != 0) {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_68,iVar9,0);
    lVar8 = lVar8 - (longlong)local_68;
    puVar7 = (undefined4 *)((longlong)local_68 + 4);
    do {
      puVar7[-1] = *(undefined4 *)(lVar8 + -4 + (longlong)puVar7);
      *puVar7 = *(undefined4 *)(lVar8 + (longlong)puVar7);
      puVar7[1] = *(undefined4 *)(lVar8 + 4 + (longlong)puVar7);
      puVar7[2] = *(undefined4 *)(lVar8 + 8 + (longlong)puVar7);
      puVar7[3] = *(undefined4 *)(lVar8 + 0xc + (longlong)puVar7);
      *(undefined1 *)(puVar7 + 4) = *(undefined1 *)(lVar8 + 0x10 + (longlong)puVar7);
      puVar7 = puVar7 + 6;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar9 = local_60;
  plVar3 = local_68;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)((longlong)param_1 + 0x484) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x8f,0);
  }
  if (plVar3 != plVar3 + (longlong)iVar9 * 3) {
    plVar10 = plVar3 + 2;
    do {
      plVar4 = (longlong *)FWeakObjectPtr::Get(plVar10 + -2);
      lVar8 = FWeakObjectPtr::Get(plVar10 + -1);
      if ((plVar4 != (longlong *)0x0) && (lVar8 != 0)) {
        uVar2 = (undefined4)*plVar10;
        cVar1 = (char)param_1[0x25];
        if (*(char *)((longlong)plVar10 + 4) == DAT_146b34690) {
          if (*(char *)(lVar8 + 0x61) == '\0') {
            if (cVar1 == '\x03') {
              uVar6 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
              lVar5 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar6);
              if (lVar5 != 0) {
                FUN_142dd13d0(lVar5,lVar8,uVar2);
                local_48 = (longlong *)(**(code **)(*plVar4 + 0x670))(plVar4);
                plVar4 = param_1 + 0x8b;
LAB_142dde94b:
                local_40 = lVar8;
                local_38 = uVar2;
                TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                          (plVar4,&local_48);
              }
            }
          }
          else if (((cVar1 == '\x03') &&
                   (lVar5 = (**(code **)(*param_1 + 0x148))(param_1), lVar5 != 0)) &&
                  (*(char *)(lVar8 + 0x61) != '\0')) {
            UWorld::GetPlayerControllerIterator(lVar5,&local_68);
            for (; (-1 < local_60 && (local_60 < (int)local_68[1])); local_60 = local_60 + 1) {
              plVar4 = (longlong *)FWeakObjectPtr::Get(*local_68 + (longlong)local_60 * 8);
              if (plVar4 != (longlong *)0x0) {
                uVar6 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
                lVar5 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar6);
                if (lVar5 != 0) {
                  FUN_142dd13d0(lVar5,lVar8,uVar2);
                  local_48 = plVar4;
                  local_40 = lVar8;
                  local_38 = uVar2;
                  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                            (param_1 + 0x8b,&local_48);
                }
              }
            }
          }
        }
        else if (*(char *)(lVar8 + 0x61) == '\0') {
          if (cVar1 == '\x03') {
            uVar6 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
            lVar5 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar6);
            if (lVar5 != 0) {
              FUN_142dd1480(lVar5,lVar8,uVar2);
              local_48 = (longlong *)(**(code **)(*plVar4 + 0x670))(plVar4);
              plVar4 = param_1 + 0x8d;
              goto LAB_142dde94b;
            }
          }
        }
        else if (((cVar1 == '\x03') &&
                 (lVar5 = (**(code **)(*param_1 + 0x148))(param_1), lVar5 != 0)) &&
                (*(char *)(lVar8 + 0x61) != '\0')) {
          UWorld::GetPlayerControllerIterator(lVar5,&local_58);
          for (; (-1 < local_50 && (local_50 < (int)local_58[1])); local_50 = local_50 + 1) {
            plVar4 = (longlong *)FWeakObjectPtr::Get(*local_58 + (longlong)local_50 * 8);
            if (plVar4 != (longlong *)0x0) {
              uVar6 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
              lVar5 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar6);
              if (lVar5 != 0) {
                FUN_142dd1480(lVar5,lVar8,uVar2);
                local_48 = plVar4;
                local_40 = lVar8;
                local_38 = uVar2;
                TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                          (param_1 + 0x8d,&local_48);
              }
            }
          }
        }
      }
      plVar4 = plVar10 + 1;
      plVar10 = plVar10 + 3;
    } while (plVar4 != plVar3 + (longlong)iVar9 * 3);
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  return;
}



// FUNCTION 142dde9b0 FUN_142dde9b0 body=43 status=ok
// SIG undefined FUN_142dde9b0(void)

void FUN_142dde9b0(undefined8 param_1,undefined4 param_2)

{
  FUN_142ddee00();
  FUN_1422406d0(param_1,param_2);
  return;
}



// FUNCTION 142dde9f0 FUN_142dde9f0 body=516 status=ok
// SIG undefined FUN_142dde9f0(void)

void FUN_142dde9f0(longlong param_1,float param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  
  if (*(char *)(param_1 + 0x60) == '\0') {
    *(float *)(param_1 + 0x58) = param_2 + *(float *)(param_1 + 0x58);
    FUN_142dc74b0();
    FUN_142ddec00(param_1,param_2);
    cVar2 = *(char *)(param_1 + 0x60);
    if (cVar2 == '\0') {
      if (((*(longlong *)(param_1 + 8) == 0) ||
          (*(char *)(*(longlong *)(param_1 + 8) + 0x48) == '\0')) ||
         (*(longlong *)(param_1 + 0x10) == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      cVar2 = '\0';
      if (bVar1) {
        lVar5 = *(longlong *)(param_1 + 0x38);
        cVar2 = '\0';
        lVar8 = (longlong)*(int *)(param_1 + 0x40) * 0x1c0 + lVar5;
        for (; lVar5 != lVar8; lVar5 = lVar5 + 0x1c0) {
          fVar9 = param_2 + *(float *)(lVar5 + 0x1b4);
          *(float *)(lVar5 + 0x1b4) = fVar9;
          if (0.33 < fVar9) {
            fVar10 = fVar9 * *(float *)(lVar5 + 0x1b0);
            if (0.0 < fVar10) {
              FUN_142d32ae0(lVar5,fVar10,0);
              fVar9 = *(float *)(lVar5 + 0x1b4);
            }
            *(float *)(lVar5 + 0x1b4) = fVar9 - 0.33;
          }
          cVar2 = *(char *)(param_1 + 0x60);
          if (cVar2 != '\0') break;
        }
      }
    }
    iVar6 = *(int *)(param_1 + 0x50);
    iVar7 = iVar6 + -1;
    if (cVar2 == '\0') {
      lVar5 = (longlong)iVar7 * 0x48;
      while (-1 < iVar7) {
        lVar8 = *(longlong *)(param_1 + 0x48);
        cVar2 = *(char *)(lVar5 + 0x18 + lVar8);
        if (((cVar2 == '\x01') || (cVar2 != '\0')) ||
           (0.0 <= (*(float *)(lVar5 + 0x3c + lVar8) + *(float *)(lVar5 + 0x1c + lVar8)) -
                   *(float *)(param_1 + 0x58))) break;
        FUN_142dd48a0(param_1,lVar8 + (longlong)iVar7 * 0x48);
        iVar3 = *(int *)(param_1 + 0x50);
        iVar4 = (iVar3 - iVar7) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar7 * 0x48),
                     (void *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar6 * 0x48),
                     (longlong)iVar4 * 0x48);
          iVar3 = *(int *)(param_1 + 0x50);
        }
        *(int *)(param_1 + 0x50) = iVar3 + -1;
        TArray<FMiniMapEntry,FDefaultAllocator>::ResizeShrink(param_1 + 0x48);
        iVar7 = iVar7 + -1;
        iVar6 = iVar6 + -1;
        lVar5 = lVar5 + -0x48;
        if (*(char *)(param_1 + 0x60) != '\0') break;
      }
    }
    if (*(int *)(param_1 + 0x50) < 1) {
      FUN_142ddd0c0(param_1);
    }
  }
  return;
}



// FUNCTION 142ddec00 FUN_142ddec00 body=111 status=ok
// SIG undefined FUN_142ddec00(void)

void FUN_142ddec00(longlong param_1)

{
  if ((*(char *)(param_1 + 0x60) == '\0') &&
     ((*(char *)(param_1 + 0x61) != '\0' ||
      (((*(longlong *)(param_1 + 8) != 0 && (*(char *)(*(longlong *)(param_1 + 8) + 0x80) != '\0'))
       && (*(float *)(param_1 + 0x5c) < *(float *)(param_1 + 0x58))))))) {
    FUN_142dd76d0();
    *(undefined1 *)(param_1 + 0x61) = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      *(float *)(param_1 + 0x5c) =
           *(float *)(*(longlong *)(param_1 + 8) + 0x84) + *(float *)(param_1 + 0x58);
      return;
    }
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x58) + 0.0;
  }
  return;
}



// FUNCTION 142ddec70 FUN_142ddec70 body=57 status=ok
// SIG undefined FUN_142ddec70(void)

void FUN_142ddec70(longlong *param_1,undefined4 param_2)

{
  FUN_142357eb0();
  if (DAT_1468b616c == '\0') {
    (**(code **)(*param_1 + 0x908))(param_1,param_2);
  }
  return;
}



// FUNCTION 142ddecc0 FUN_142ddecc0 body=220 status=ok
// SIG undefined FUN_142ddecc0(void)

void FUN_142ddecc0(longlong *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_3 != 3) {
    iVar2 = (int)param_1[0x31] + -1;
    if (-1 < iVar2) {
      lVar3 = (longlong)iVar2 * 0x70;
      lVar4 = lVar3;
      do {
        FUN_142dde9f0(param_1[0x30] + lVar3,param_2);
        if (*(char *)(lVar4 + 0x60 + param_1[0x30]) != '\0') {
          FUN_142dd94c0(param_1 + 0x30,iVar2,1);
        }
        lVar3 = lVar3 + -0x70;
        lVar4 = lVar4 + -0x70;
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
    cVar1 = UActorComponent::IsComponentTickEnabled(param_1);
    if ((cVar1 != '\0') && (cVar1 = (**(code **)(*param_1 + 0x428))(param_1), cVar1 == '\0')) {
      (**(code **)(*param_1 + 0x358))(param_1,0);
    }
  }
  return;
}



// FUNCTION 142ddeda0 FUN_142ddeda0 body=45 status=ok
// SIG undefined FUN_142ddeda0(void)

void FUN_142ddeda0(undefined8 param_1)

{
  char cVar1;
  
  FUN_142357eb0();
  cVar1 = FUN_142dd0d50(param_1);
  if (cVar1 == '\0') {
    FUN_142dda110(param_1);
    return;
  }
  return;
}



// FUNCTION 142ddedd0 FUN_142ddedd0 body=42 status=ok
// SIG undefined FUN_142ddedd0(void)

void FUN_142ddedd0(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x700) + 0x18))();
  *(undefined8 *)(param_1 + 0x6f8) = *(undefined8 *)(param_1 + 0x790);
  return;
}



// FUNCTION 142ddee00 FUN_142ddee00 body=2020 status=ok
// SIG undefined FUN_142ddee00(void)

void FUN_142ddee00(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_118;
  undefined4 local_110;
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  int local_f0;
  float local_e8;
  
  cVar6 = (**(code **)(*param_1 + 0x768))();
  if ((cVar6 != '\0') && (lVar8 = (**(code **)(*param_1 + 0x148))(param_1), lVar8 != 0)) {
    lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar18 = (int)param_1[0x12a] + -1;
    fVar1 = *(float *)(lVar8 + 0x790);
    if (-1 < iVar18) {
      lVar8 = (longlong)iVar18;
      do {
        plVar20 = (longlong *)(lVar8 * 0x60 + param_1[0x129]);
        lVar17 = *plVar20;
        if (lVar17 == 0) {
          lVar16 = (longlong)iVar18 * 0x60;
          lVar17 = *(longlong *)(lVar16 + 0x48 + param_1[0x129]);
LAB_142ddf4d7:
          if (lVar17 != 0) {
            FMemory::Free();
          }
          iVar7 = (int)param_1[0x12a];
          iVar14 = (iVar7 - iVar18) + -1;
          if (0 < iVar14) {
            iVar14 = 1;
          }
          if (iVar14 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(param_1[0x129] + lVar16),
                       (void *)((longlong)(iVar7 - iVar14) * 0x60 + param_1[0x129]),
                       (longlong)iVar14 * 0x60);
            iVar7 = (int)param_1[0x12a];
          }
          *(int *)(param_1 + 0x12a) = iVar7 + -1;
        }
        else {
          lVar15 = param_1[0xff];
          lVar2 = *(longlong *)(lVar17 + 0x18);
          lVar16 = lVar15 + (longlong)(int)param_1[0x100] * 0x28;
          for (; lVar15 != lVar16; lVar15 = lVar15 + 0x28) {
            if (*(longlong *)(lVar15 + 0x18) == lVar2) goto LAB_142ddef94;
          }
          lVar15 = 0;
LAB_142ddef94:
          if ((lVar15 == 0) || (fVar23 = *(float *)(lVar15 + 0x10), fVar23 <= 0.0)) {
            *(undefined1 *)(plVar20 + 8) = 1;
            fVar23 = 0.0;
          }
          bVar5 = false;
          bVar4 = false;
          if ((*(uint *)(lVar17 + 0x30) >> 3 & 1) != 0) {
            cVar6 = FWeakObjectPtr::IsValid(plVar20 + 0xb);
            plVar9 = param_1;
            if (cVar6 != '\0') {
              plVar9 = (longlong *)FWeakObjectPtr::Get(plVar20 + 0xb);
            }
            lVar17 = *plVar20;
            bVar5 = bVar4;
            if ((((*(byte *)(lVar17 + 0x30) & 1) != 0) && (*(char *)(lVar17 + 0x288) != '\0')) &&
               (fVar1 != *(float *)(plVar20 + 1))) {
              local_118 = *(undefined8 *)((longlong)plVar20 + 0x34);
              local_110 = *(undefined4 *)((longlong)plVar20 + 0x3c);
              local_108 = plVar20[5];
              local_100 = (undefined4)plVar20[6];
              fVar21 = (float)FUN_142d34a40(lVar17,param_1,&local_108,&local_118);
              if (0.1 <= ABS(fVar21 - *(float *)((longlong)plVar20 + 0x14))) {
                *(float *)((longlong)plVar20 + 0x14) = fVar21;
                bVar5 = true;
              }
            }
            lVar17 = *plVar20;
            fVar21 = *(float *)((longlong)plVar20 + 0x14);
            if (*(char *)(lVar17 + 0x289) != '\0') {
              bVar5 = true;
            }
            if (*(char *)(lVar17 + 0x308) != '\0') {
              fVar22 = (float)FUN_142c98860(lVar17 + 0x310,plVar9);
              plVar10 = (longlong *)FRuntimeFloatCurve::GetRichCurve(*plVar20 + 0x348);
              iVar7 = (**(code **)(*plVar10 + 8))(plVar10);
              if (0 < iVar7) {
                fVar22 = (float)FRichCurve::Eval(plVar10,fVar22,0);
              }
              lVar17 = *plVar20;
              bVar5 = true;
              fVar21 = fVar21 * fVar22;
            }
            *(float *)(plVar20 + 3) = fVar21;
            if ((int)plVar20[10] < *(int *)(lVar17 + 0x168)) {
              TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
                        (plVar20 + 9,*(int *)(lVar17 + 0x168) - (int)plVar20[10]);
              lVar17 = *plVar20;
            }
            if ((0 < *(int *)(lVar17 + 0x168)) &&
               (*(char *)(*(longlong *)(lVar17 + 0x160) + 0x40) != '\0')) {
              iVar7 = 0;
              lVar16 = 0;
              if (0 < *(int *)(lVar17 + 0x168)) {
                lVar15 = 0;
LAB_142ddf121:
                lVar17 = *(longlong *)(lVar17 + 0x160);
                if (*(longlong *)(lVar17 + lVar15) != 0) {
                  lVar11 = UNodeMappingContainer::GetPrivateStaticClass();
                  lVar19 = *(longlong *)(lVar17 + lVar15);
                  for (lVar13 = lVar19; lVar13 != 0; lVar13 = *(longlong *)(lVar13 + 0x30)) {
                    if (lVar13 == lVar11) {
                      if (lVar19 != 0) {
                        if ((lVar16 < 0) || ((int)plVar20[10] <= iVar7)) {
                          bVar4 = false;
                        }
                        else {
                          bVar4 = true;
                        }
                        if (bVar4) {
                          fVar21 = *(float *)((longlong)plVar20 + 0x14);
                          if (*(char *)(lVar17 + 0x41 + lVar15) == '\0') goto LAB_142ddf279;
                          if (lVar19 == 0) goto LAB_142ddf1b3;
                          plVar12 = (longlong *)UNodeMappingContainer::GetPrivateStaticClass();
                          plVar10 = *(longlong **)(lVar17 + lVar15);
                          plVar3 = plVar10;
                          goto joined_r0x000142ddf1a3;
                        }
                      }
                      break;
                    }
                  }
                }
                goto LAB_142ddf2d8;
              }
            }
          }
LAB_142ddf317:
          if (((*(char *)((longlong)plVar20 + 0x41) == '\0') &&
              (lVar17 = *plVar20, (*(uint *)(lVar17 + 0x30) >> 4 & 1) != 0)) &&
             (*(float *)(lVar17 + 0x11c) + *(float *)((longlong)plVar20 + 0xc) < fVar1)) {
            fVar21 = *(float *)(lVar17 + 0x120);
            fVar22 = *(float *)(lVar17 + 0x124);
            iVar7 = rand();
            *(float *)((longlong)plVar20 + 0xc) = fVar1;
            bVar5 = true;
            *(float *)(plVar20 + 2) = (float)iVar7 * 3.051851e-05 * (fVar21 - fVar22) + fVar22;
          }
          if (((0.0 < fVar23) && (fVar23 + *(float *)(plVar20 + 1) <= fVar1)) &&
             (*(char *)(*plVar20 + 0x268) != '\0')) {
            FUN_142d3aaa0(*plVar20,&local_f8,
                          *(float *)(plVar20 + 3) * *(float *)((longlong)plVar20 + 0x14));
            if (0.0 < local_e8) {
              (**(code **)(*param_1 + 0xf00))(param_1,&local_f8,1,0,lVar2);
              *(float *)(plVar20 + 1) = fVar1;
              TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x112,plVar20);
              bVar5 = false;
            }
            if (local_f0 != 0) {
              lVar17 = local_f8 + 8;
              iVar7 = local_f0;
              do {
                FRichCurve::~FRichCurve(lVar17);
                lVar17 = lVar17 + 0x80;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
            }
            if (local_f8 != 0) {
              FMemory::Free();
            }
          }
          if (bVar5) {
            FUN_142d3aaa0(*plVar20,&local_f8,0x3f800000);
            if (0.0 < local_e8) {
              (**(code **)(*param_1 + 0xfd0))
                        (param_1,&local_f8,*plVar20,
                         *(float *)(plVar20 + 3) * *(float *)((longlong)plVar20 + 0x14));
            }
            TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x112,plVar20);
            if (local_f0 != 0) {
              lVar17 = local_f8 + 8;
              iVar7 = local_f0;
              do {
                FRichCurve::~FRichCurve(lVar17);
                lVar17 = lVar17 + 0x80;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
            }
            if (local_f8 != 0) {
              FMemory::Free();
            }
          }
          if ((*(char *)((longlong)plVar20 + 0x41) != '\0') && ((char)plVar20[8] != '\0')) {
            lVar16 = (longlong)iVar18 * 0x60;
            lVar17 = *(longlong *)(lVar16 + 0x48 + param_1[0x129]);
            goto LAB_142ddf4d7;
          }
        }
        iVar18 = iVar18 + -1;
        lVar8 = lVar8 + -1;
      } while (-1 < iVar18);
    }
  }
  return;
joined_r0x000142ddf1a3:
  if (plVar3 == (longlong *)0x0) goto LAB_142ddf1b3;
  if (plVar3 == plVar12) goto LAB_142ddf1b5;
  plVar3 = (longlong *)plVar3[6];
  goto joined_r0x000142ddf1a3;
LAB_142ddf1b3:
  plVar10 = (longlong *)0x0;
LAB_142ddf1b5:
  lVar19 = plVar10[0x1f];
  if (lVar19 == 0) {
    (**(code **)(*plVar10 + 0x368))(plVar10);
    lVar19 = plVar10[0x1f];
    if (lVar19 == 0) goto LAB_142ddf279;
  }
  lVar13 = UNodeMappingContainer::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
      != lVar13 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
    fVar22 = (fVar1 - *(float *)(plVar20 + 1)) / *(float *)(lVar19 + 0x2c);
    if (0.0 <= fVar22) {
      if (1.0 <= fVar22) {
        fVar22 = 1.0;
      }
    }
    else {
      fVar22 = 0.0;
    }
    if (((*(char *)(lVar17 + 0x42 + lVar15) == '\0') ||
        (plVar10 = (longlong *)FRuntimeFloatCurve::GetRichCurve(lVar15 + 0x48 + lVar17),
        plVar10 == (longlong *)0x0)) || (iVar14 = (**(code **)(*plVar10 + 8))(plVar10), iVar14 < 1))
    {
      fVar22 = 1.0 - fVar22;
    }
    else {
      fVar22 = (float)FRichCurve::Eval(plVar10,fVar22,0);
    }
    fVar21 = fVar21 * fVar22;
  }
LAB_142ddf279:
  fVar22 = (float)FUN_142c98860(lVar15 + 0xc0 + lVar17,plVar9);
  plVar10 = (longlong *)FRuntimeFloatCurve::GetRichCurve(lVar15 + 0xf8 + lVar17);
  if ((plVar10 != (longlong *)0x0) && (iVar14 = (**(code **)(*plVar10 + 8))(plVar10), 0 < iVar14)) {
    fVar22 = (float)FRichCurve::Eval(plVar10,fVar22,0);
  }
  bVar5 = true;
  *(float *)(plVar20[9] + lVar16 * 4) = fVar21 * fVar22;
LAB_142ddf2d8:
  lVar17 = *plVar20;
  iVar7 = iVar7 + 1;
  lVar16 = lVar16 + 1;
  lVar15 = lVar15 + 0x170;
  if (*(int *)(lVar17 + 0x168) <= iVar7) goto LAB_142ddf317;
  goto LAB_142ddf121;
}



// FUNCTION 142ddf5f0 FUN_142ddf5f0 body=57 status=ok
// SIG undefined FUN_142ddf5f0(void)

undefined8 FUN_142ddf5f0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (plVar1 = *(longlong **)(param_1 + 0x488), plVar1 != (longlong *)0x0)) {
    uVar2 = FUN_142e75af0();
                    /* WARNING: Could not recover jumptable at 0x000142ddf61a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 142ddf630 FUN_142ddf630 body=12 status=ok
// SIG undefined FUN_142ddf630(void)

void FUN_142ddf630(longlong param_1)

{
  FUN_142dbb5d0(param_1 + 0x198);
  return;
}



// FUNCTION 142ddf640 FUN_142ddf640 body=416 status=ok
// SIG undefined FUN_142ddf640(void)

void FUN_142ddf640(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  if ((*(longlong *)(param_1 + 0x70) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    lVar2 = FUN_1428dfc70();
    lVar7 = *(longlong *)(param_1 + 0x10);
    lVar3 = lVar7;
    if (lVar7 != 0) {
      while (lVar3 != lVar2) {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        if (lVar3 == 0) {
          return;
        }
      }
      if (lVar7 != 0) {
        if (lVar7 != 0) {
          lVar2 = FUN_1428dfc70();
          lVar7 = *(longlong *)(param_1 + 0x10);
          for (lVar3 = lVar7; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
            if (lVar3 == lVar2) goto LAB_142ddf6c1;
          }
        }
        lVar7 = 0;
LAB_142ddf6c1:
        lVar7 = *(longlong *)(lVar7 + 200);
        if (lVar7 != 0) {
          lVar3 = UBlueprint::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            lVar3 = *(longlong *)(param_1 + 0x70);
            iVar5 = 0;
            if (0 < *(int *)(lVar7 + 200)) {
              lVar2 = 0;
              do {
                plVar6 = (longlong *)(*(longlong *)(lVar7 + 0xc0) + lVar2);
                if ((((int)plVar6[1] != 0) &&
                    (plVar4 = (longlong *)*plVar6, plVar4 != (longlong *)0x0)) &&
                   (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8),
                   *plVar4 == lVar3)) {
                  if (((int)plVar6[1] != 0) &&
                     (plVar4 = (longlong *)*plVar6, plVar4 != (longlong *)0x0)) {
                    (**(code **)(*plVar4 + 0x28))(plVar4,0);
                    if (*plVar6 != 0) {
                      lVar3 = FMemory::Realloc(*plVar6,0,0);
                      *plVar6 = lVar3;
                    }
                    *(undefined4 *)(plVar6 + 1) = 0;
                  }
                  break;
                }
                iVar5 = iVar5 + 1;
                lVar2 = lVar2 + 0x10;
              } while (iVar5 < *(int *)(lVar7 + 200));
            }
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar7 + 0xc0,0);
            *(undefined8 *)(param_1 + 0x70) = 0;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142ddf7e0 FUN_142ddf7e0 body=750 status=ok
// SIG undefined FUN_142ddf7e0(void)

void FUN_142ddf7e0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  void *local_60;
  int local_58;
  undefined4 local_54;
  void *local_50;
  int local_48;
  
  lVar3 = FUN_142dcdb70(param_2);
  if (lVar3 != 0) {
    puVar15 = *(ulonglong **)(lVar3 + 0xa0);
    puVar13 = puVar15 + (longlong)*(int *)(lVar3 + 0xa8) * 6;
    if (puVar15 != puVar13) {
      puVar14 = puVar15 + 4;
      do {
        local_58 = (int)puVar14[-2];
        lVar3 = (longlong)local_58;
        pvVar8 = (void *)0x0;
        uVar1 = *puVar15;
        pvVar2 = (void *)puVar14[-3];
        local_60 = (void *)0x0;
        if (local_58 == 0) {
          local_54 = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (&local_60,local_58,0);
          pvVar8 = local_60;
          _guard_xfg_dispatch_icall_nop(local_60,pvVar2,lVar3 << 3);
        }
        local_48 = (int)*puVar14;
        lVar3 = (longlong)local_48;
        pvVar7 = (void *)0x0;
        pvVar2 = (void *)puVar14[-1];
        local_50 = (void *)0x0;
        if (local_48 != 0) {
          TArray<int,FDefaultAllocator>::ResizeForCopy(&local_50,local_48,0);
          pvVar7 = local_50;
          _guard_xfg_dispatch_icall_nop(local_50,pvVar2,lVar3 << 2);
          pvVar8 = local_60;
        }
        if (uVar1 != 0) {
          plVar9 = (longlong *)(param_1 + 0x458);
          lVar3 = *(longlong *)(param_2 + 8);
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(plVar9,*(int *)(param_1 + 0x460) - *(int *)(param_1 + 0x48c));
          if (*(int *)(param_1 + 0x4a0) != 0) {
            iVar11 = (int)(uVar1 >> 4);
            uVar10 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
            uVar5 = -(uVar10 + iVar11) ^ uVar10 >> 0xd;
            uVar12 = (iVar11 - uVar10) - uVar5 ^ uVar5 >> 0xc;
            uVar10 = (uVar10 - uVar12) - uVar5 ^ uVar12 << 0x10;
            uVar5 = (uVar5 - uVar10) - uVar12 ^ uVar10 >> 5;
            uVar12 = (uVar12 - uVar10) - uVar5 ^ uVar5 >> 3;
            uVar10 = (uVar10 - uVar12) - uVar5 ^ uVar12 << 10;
            lVar4 = *(longlong *)(param_1 + 0x498);
            if (*(longlong *)(param_1 + 0x498) == 0) {
              lVar4 = param_1 + 0x490;
            }
            iVar11 = *(int *)(lVar4 + (((longlong)(int)((uVar5 - uVar10) - uVar12) ^
                                       (ulonglong)(uVar10 >> 0xf)) &
                                      (longlong)*(int *)(param_1 + 0x4a0) - 1U) * 4);
            iVar6 = iVar11;
            if (iVar11 != -1) {
              do {
                iVar11 = *(int *)(*plVar9 + 0x10 + (longlong)iVar6 * 0x18);
                if (*(ulonglong *)(*plVar9 + (longlong)iVar6 * 0x18) == uVar1) break;
                iVar6 = iVar11;
              } while (iVar11 != -1);
            }
            if (iVar6 != -1) {
              lVar4 = *plVar9;
              do {
                if (*(longlong *)(lVar4 + 8 + (longlong)iVar6 * 0x18) == lVar3) {
                  TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
                  ::Remove(plVar9);
                  break;
                }
                iVar6 = iVar11;
                if (iVar11 == -1) break;
                do {
                  iVar11 = *(int *)(lVar4 + 0x10 + (longlong)iVar6 * 0x18);
                  if (*(ulonglong *)(lVar4 + (longlong)iVar6 * 0x18) == uVar1) break;
                  iVar6 = iVar11;
                } while (iVar11 != -1);
              } while (iVar6 != -1);
            }
          }
        }
        if (pvVar7 != (void *)0x0) {
          FMemory::Free(pvVar7);
        }
        if (pvVar8 != (void *)0x0) {
          FMemory::Free(pvVar8);
        }
        puVar15 = puVar15 + 6;
        puVar14 = puVar14 + 6;
      } while (puVar15 != puVar13);
    }
  }
  return;
}



// FUNCTION 142ddfad0 FUN_142ddfad0 body=195 status=ok
// SIG undefined FUN_142ddfad0(void)

void FUN_142ddfad0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x1d0) + -1;
  if (-1 < iVar5) {
    plVar1 = (longlong *)(param_1 + 0x1c8);
    do {
      lVar3 = FUN_142dcdb70(*plVar1 + (longlong)iVar5 * 0x80);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x10) == param_2)) {
        lVar3 = (longlong)iVar5 * 0x80 + *plVar1;
        TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>::
        ~TArray<FPropertyValueIterator::FPropertyValueStackEntry,FDefaultAllocator>(lVar3 + 0x40);
        if (*(longlong *)(lVar3 + 0x28) != 0) {
          FMemory::Free();
        }
        iVar4 = *(int *)(param_1 + 0x1d0);
        iVar2 = (iVar4 - iVar5) + -1;
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar5 * 0x80 + *plVar1),
                     (void *)((longlong)(iVar5 + 1) * 0x80 + *plVar1),(longlong)iVar2 << 7);
          iVar4 = *(int *)(param_1 + 0x1d0);
        }
        *(int *)(param_1 + 0x1d0) = iVar4 + -1;
        TArray<FComponentOverrideRecord,FDefaultAllocator>::ResizeShrink(plVar1);
        return;
      }
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return;
}



// FUNCTION 142ddfba0 RemoveUser body=241 status=ok
// SIG undefined RemoveUser(void)

void AXUsableActor::RemoveUser(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x510);
  if (*(int *)(param_1 + 0x510) != 0) {
    iVar6 = 0;
    bVar7 = **(longlong **)(param_1 + 0x508) != param_2;
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar4 + 1;
      if (lVar3 < lVar2) {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x508) + lVar3 * 8);
        do {
          if (bVar7 != (*plVar1 != param_2)) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 1;
          plVar1 = plVar1 + 1;
        } while (lVar3 < lVar2);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar4) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x508) + (longlong)iVar6 * 8),
                     (void *)(*(longlong *)(param_1 + 0x508) + (longlong)iVar4 * 8),
                     (longlong)(iVar5 - iVar4) << 3);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < lVar2);
    *(int *)(param_1 + 0x510) = iVar6;
  }
  return;
}



// FUNCTION 142ddfca0 FUN_142ddfca0 body=335 status=ok
// SIG undefined FUN_142ddfca0(void)

void FUN_142ddfca0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = param_1[0x24];
  lVar5 = 0;
  lVar1 = lVar2;
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0();
    lVar1 = param_1[0x24];
  }
  lVar6 = lVar5;
  if (lVar2 != 0) {
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    lVar2 = UWorld::GetAuthGameMode<ABaseGameMode>(lVar1);
    lVar6 = 0;
    if ((lVar2 != 0) && (lVar2 = FUN_142d77040(lVar2), lVar2 != 0)) {
      lVar6 = *(longlong *)(lVar2 + 0x540);
    }
  }
  lVar2 = param_1[0x24];
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  if (lVar2 != 0) {
    lVar2 = UObjectBaseUtility::GetOutermost(lVar2);
    lVar5 = *(longlong *)(lVar2 + 0x18);
  }
  iVar4 = (int)param_1[0x3a] + -1;
  if (-1 < iVar4) {
    lVar1 = (longlong)iVar4 << 7;
    lVar2 = lVar1;
    do {
      lVar3 = FUN_142dcdb70(param_1[0x39] + lVar2);
      if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x90) != 0)) &&
         (*(longlong *)(lVar3 + 0x90) != lVar5)) {
        if (lVar6 != 0) {
          FUN_142ddf7e0(lVar6,param_1[0x39] + lVar2);
        }
        (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(param_1[0x39] + 8 + lVar1));
        FUN_142dc8b20(param_1[0x39] + lVar2);
      }
      lVar2 = lVar2 + -0x80;
      lVar1 = lVar1 + -0x80;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return;
}



// FUNCTION 142ddfdf0 FUN_142ddfdf0 body=274 status=ok
// SIG undefined FUN_142ddfdf0(void)

void FUN_142ddfdf0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x758) != 0)) {
    lVar3 = FUN_142dfdfe0();
    lVar1 = *(longlong *)(param_2 + 0x758);
    lVar8 = lVar1;
    if (lVar1 != 0) {
      while (lVar8 != lVar3) {
        lVar8 = *(longlong *)(lVar8 + 0x30);
        if (lVar8 == 0) {
          return;
        }
      }
      if (lVar1 != 0) {
        uVar6 = 0;
        uVar5 = uVar6;
        if (lVar1 != 0) {
          uVar4 = FUN_142dfdfe0();
          for (uVar2 = *(ulonglong *)(param_2 + 0x758);
              (uVar5 = uVar6, uVar2 != 0 &&
              (uVar5 = *(ulonglong *)(param_2 + 0x758), uVar2 != uVar4));
              uVar2 = *(ulonglong *)(uVar2 + 0x30)) {
          }
        }
        FUN_142dd92f0(param_1 + 0x4a8,uVar5,param_2);
        puVar7 = *(undefined8 **)(param_1 + 0x508);
        uVar5 = (longlong)*(int *)(param_1 + 0x510) & 0x1fffffffffffffff;
        if (puVar7 + *(int *)(param_1 + 0x510) < puVar7) {
          uVar5 = uVar6;
        }
        if (uVar5 != 0) {
          do {
            (**(code **)(*(longlong *)*puVar7 + 0x18))((longlong *)*puVar7,param_2);
            uVar6 = uVar6 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar6 != uVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 142ddff10 FUN_142ddff10 body=254 status=ok
// SIG undefined FUN_142ddff10(void)

void FUN_142ddff10(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_38 [4];
  undefined1 local_18;
  uint local_14;
  
  if ((param_2 != 0) && (param_4 != (longlong *)0x0)) {
    plVar4 = (longlong *)param_4[0x1f];
    if (plVar4 == (longlong *)0x0) {
      (**(code **)(*param_4 + 0x368))(param_4);
      plVar4 = (longlong *)param_4[0x1f];
      if (plVar4 == (longlong *)0x0) {
        return;
      }
    }
    lVar2 = *(longlong *)(param_1 + 0x328);
    local_14 = local_14 & 0xfffffffe;
    lVar3 = (longlong)*(int *)(param_1 + 0x330) * 0x10 + lVar2;
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    local_18 = 0xff;
    if (lVar2 != lVar3) {
      do {
        cVar1 = FUN_142cd7390(lVar2,param_2,local_38);
        if (cVar1 != '\0') {
          (**(code **)(*plVar4 + 0x280))(plVar4,local_38,param_2,param_3);
        }
        lVar2 = lVar2 + 0x10;
      } while (lVar2 != lVar3);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142de0010 FUN_142de0010 body=453 status=ok
// SIG undefined FUN_142de0010(void)

void FUN_142de0010(longlong param_1,longlong param_2,longlong param_3,float param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  uint *puVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined8 local_68;
  undefined8 uStack_60;
  
  if ((0.0 < *(float *)(param_2 + 0x10)) && (param_3 != 0)) {
    puVar8 = *(undefined8 **)(param_1 + 0x7f8);
    puVar1 = puVar8 + (longlong)*(int *)(param_1 + 0x800) * 5;
    for (; puVar8 != puVar1; puVar8 = puVar8 + 5) {
      if ((0.0 < *(float *)(puVar8 + 2)) && (puVar8[3] == *(longlong *)(param_3 + 0x18))) {
        puVar7 = (uint *)*puVar8;
        puVar5 = puVar7 + (longlong)*(int *)(puVar8 + 1) * 0x20;
        for (; puVar7 != puVar5; puVar7 = puVar7 + 0x20) {
          lVar4 = *(longlong *)(puVar7 + 0x1a);
          lVar6 = (longlong)(int)puVar7[0x1c] * 0x1c + lVar4;
          for (; lVar4 != lVar6; lVar4 = lVar4 + 0x1c) {
            local_68 = 0;
            uStack_60 = 0;
            FUN_142451f80(param_2,*(undefined4 *)(lVar4 + 4),&local_68,0x3f800000);
            uVar2 = *puVar7;
            uVar3 = uVar2 & 1;
            fVar9 = 0.0;
            if (uVar3 != 0) {
              fVar9 = (float)local_68;
            }
            if ((uVar2 & 2) != 0) {
              fVar9 = fVar9 + local_68._4_4_;
              uVar3 = uVar3 + 1;
            }
            if ((uVar2 & 4) != 0) {
              fVar9 = fVar9 + (float)uStack_60;
              uVar3 = uVar3 + 1;
            }
            if ((uVar2 & 8) != 0) {
              fVar9 = fVar9 + uStack_60._4_4_;
              uVar3 = uVar3 + 1;
            }
            if (uVar3 == 0) {
              fVar9 = 0.0;
            }
            else {
              fVar9 = fVar9 / (float)uVar3;
            }
            *(float *)(lVar4 + 8) = fVar9 * param_4;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142de01e0 FUN_142de01e0 body=146 status=ok
// SIG undefined FUN_142de01e0(void)

undefined4 * FUN_142de01e0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_18 [2];
  
  plVar4 = (longlong *)FUN_142c4dc80();
  lVar6 = plVar4[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
    lVar6 = plVar4[0x1f];
  }
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  if (lVar6 == 0) {
    *param_2 = *param_3;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
  }
  else {
    uVar5 = UGameplayStatics::GetPlatformName(local_18);
    FUN_142c4d850(lVar6,param_2,param_3,uVar5);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 142de0280 FUN_142de0280 body=79 status=ok
// SIG undefined FUN_142de0280(void)

void FUN_142de0280(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x1008))();
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = FUN_142d39300(uVar2);
    if (lVar3 != 0) {
      FUN_142d4ebf0(lVar3,param_1,param_3);
    }
  }
  return;
}



// FUNCTION 142de02d0 FUN_142de02d0 body=827 status=ok
// SIG undefined FUN_142de02d0(void)

void FUN_142de02d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  
  if (param_2 != 0) {
    puVar16 = *(undefined8 **)(param_1 + 0x1c8);
    puVar5 = puVar16 + (longlong)*(int *)(param_1 + 0x1d0) * 0x10;
    if (puVar16 != puVar5) {
      while (puVar16[1] != param_2) {
        puVar16 = puVar16 + 0x10;
        if (puVar16 == puVar5) {
          return;
        }
      }
      if ((puVar16 != (undefined8 *)0x0) && (lVar6 = FUN_142dcdb70(puVar16), lVar6 != 0)) {
        if (*(int *)(lVar6 + 0x108) < 1) {
          if (*(longlong *)(lVar6 + 0xe8) == 0) {
            return;
          }
          lVar7 = FUN_142dfdfe0();
          lVar14 = *(longlong *)(lVar6 + 0xe8);
          lVar8 = lVar14;
          if (lVar14 == 0) {
            return;
          }
          while (lVar8 != lVar7) {
            lVar8 = *(longlong *)(lVar8 + 0x30);
            if (lVar8 == 0) {
              return;
            }
          }
          if (lVar14 == 0) {
            return;
          }
        }
        lVar14 = *(longlong *)(param_1 + 0x1c8);
        lVar8 = (longlong)*(int *)(param_1 + 0x1d0) * 0x80 + lVar14;
        for (; lVar14 != lVar8; lVar14 = lVar14 + 0x80) {
          lVar9 = FUN_142dcdb70(lVar14);
          lVar7 = *(longlong *)(lVar14 + 8);
          if (lVar7 != 0) {
            lVar10 = FUN_142dfdfe0();
            lVar13 = lVar7;
            do {
              if (lVar13 == lVar10) goto LAB_142de0421;
              lVar13 = *(longlong *)(lVar13 + 0x30);
            } while (lVar13 != 0);
          }
          lVar7 = 0;
LAB_142de0421:
          plVar15 = *(longlong **)(lVar6 + 0x100);
          plVar1 = plVar15 + *(int *)(lVar6 + 0x108);
          for (; plVar15 != plVar1; plVar15 = plVar15 + 1) {
            if (*plVar15 != 0) {
              lVar11 = FUN_142dfdfe0();
              lVar13 = *plVar15;
              for (lVar10 = lVar13; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
                if (lVar10 == lVar11) goto LAB_142de0466;
              }
            }
            lVar13 = 0;
LAB_142de0466:
            if ((lVar13 == lVar7) &&
               (iVar3 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                                  (lVar9 + 0x30), iVar3 == -1)) {
              iVar3 = *(int *)(lVar9 + 0x38);
              iVar4 = iVar3 + 1;
              *(int *)(lVar9 + 0x38) = iVar4;
              if (*(int *)(lVar9 + 0x3c) < iVar4) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar9 + 0x30);
              }
              *(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar3 * 8) = param_2;
            }
          }
          if (*(longlong *)(lVar6 + 0xe8) != 0) {
            lVar11 = FUN_142dfdfe0();
            lVar13 = *(longlong *)(lVar6 + 0xe8);
            for (lVar10 = lVar13; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
              if (lVar10 == lVar11) goto LAB_142de04f4;
            }
          }
          lVar13 = 0;
LAB_142de04f4:
          if (lVar13 == lVar7) {
            plVar1 = (longlong *)*puVar16;
            uVar12 = FUN_142e035e0();
            lVar13 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar12);
            lVar7 = *(longlong *)(lVar13 + 0x1c8);
            lVar13 = (longlong)*(int *)(lVar13 + 0x1d0) * 0x80 + lVar7;
            for (; lVar7 != lVar13; lVar7 = lVar7 + 0x80) {
              if (*(longlong *)(lVar7 + 8) == puVar16[1]) {
                if ((lVar7 != 0) && (*(char *)(lVar7 + 0x51) != '\0')) goto LAB_142de05ce;
                break;
              }
            }
            cVar2 = '\0';
            if (lVar9 != 0) {
              cVar2 = *(char *)(lVar9 + 0x89);
            }
            if (((*(char *)((longlong)puVar16 + 0x51) == '\0') || (cVar2 != '\0')) &&
               (*(char *)(lVar14 + 0x51) != '\0')) {
              cVar2 = FUN_142dd2ec0(puVar16);
              if (cVar2 == '\0') {
                if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar7 = FUN_1423407b0(), lVar7 == 0))
                {
                  uVar17 = 0;
                }
                else {
                  lVar7 = *(longlong *)(param_1 + 0x120);
                  if (lVar7 == 0) {
                    lVar7 = FUN_1423407b0();
                  }
                  uVar17 = *(undefined4 *)(lVar7 + 0x790);
                }
                *(undefined4 *)(puVar16 + 0xe) = uVar17;
              }
              *(undefined1 *)(puVar16 + 10) = 1;
            }
          }
LAB_142de05ce:
        }
      }
    }
  }
  return;
}



// FUNCTION 142de0610 FUN_142de0610 body=1210 status=ok
// SIG undefined FUN_142de0610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de0610(longlong param_1)

{
  uint *puVar1;
  byte bVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int local_res10 [2];
  longlong local_res18;
  undefined8 local_res20;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined1 local_c8 [136];
  
  plVar3 = *(longlong **)(param_1 + 0x118);
  if ((plVar3 != (longlong *)0x0) &&
     (local_100 = (**(code **)(*plVar3 + 0x148))(plVar3), local_100 != 0)) {
    lVar6 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar6 = plVar3[0x128];
    }
    else {
      plVar9 = (longlong *)(**(code **)(*plVar3 + 0x668))(plVar3);
      if (plVar9 == (longlong *)0x0) {
        return;
      }
      uVar7 = UHomeWidget::GetPrivateStaticClass();
      lVar6 = (**(code **)(*plVar9 + 0x628))(plVar9,uVar7);
    }
    if (lVar6 != 0) {
      lVar10 = 0;
      uVar15 = (ulonglong)(*(ulonglong *)(param_1 + 0x7538) != 0) - 1 & param_1 + 0x338U |
               *(ulonglong *)(param_1 + 0x7538);
      uVar16 = (longlong)*(int *)(param_1 + 0x7540) * 0x390 + uVar15;
      local_res18 = lVar6;
      for (; uVar15 != uVar16; uVar15 = uVar15 + 0x390) {
        lVar8 = FWeakObjectPtr::Get(uVar15);
        if (lVar8 != 0) {
          FUN_140777f40(lVar6 + 0x1c0,local_res10,lVar8);
          if (((local_res10[0] == -1) ||
              (lVar6 = (longlong)local_res10[0] * 0x380 + *(longlong *)(lVar6 + 0x1c0), lVar6 == 0))
             || (lVar6 == -8)) {
            plVar9 = (longlong *)FUN_140a63ba0(plVar3);
            lVar6 = local_res18;
            if ((plVar9 != (longlong *)0x0) &&
               (cVar5 = (**(code **)(*plVar9 + 0x780))(plVar9), lVar6 = local_res18, cVar5 != '\0'))
            {
              for (lVar14 = param_1 + 0xe758; lVar6 = local_res18, lVar14 != param_1 + 0xe768;
                  lVar14 = lVar14 + 8) {
                lVar6 = FWeakObjectPtr::Get(lVar14);
                if (lVar8 == lVar6) {
                  if ((lVar10 != 0) || (lVar10 = FUN_142dc0df0(), lVar6 = local_res18, lVar10 != 0))
                  {
                    bVar2 = *(byte *)(lVar10 + 0x48);
                    uVar7 = *(undefined8 *)(lVar10 + 0x50);
                    lVar6 = local_res18;
                    if (bVar2 < 8) {
                      lVar6 = plVar3[0x2d];
                      local_res20 = 0;
                      if (lVar6 == 0) {
                        local_f8 = _DAT_1468b5d90;
                        puVar11 = &local_f8;
                        local_f0 = DAT_1468b5d98;
                      }
                      else {
                        puVar11 = (undefined8 *)&local_118;
                        local_118 = *(undefined4 *)(lVar6 + 0x220);
                        local_110 = *(undefined4 *)(lVar6 + 0x228);
                        uStack_114 = *(undefined4 *)(lVar6 + 0x224);
                      }
                      local_d8 = *(undefined4 *)(puVar11 + 1);
                      lVar6 = *(longlong *)(lVar8 + 0x168);
                      local_e0 = *puVar11;
                      if (lVar6 == 0) {
                        local_ec = _DAT_1468b5d90;
                        puVar11 = &local_ec;
                        local_e4 = DAT_1468b5d98;
                      }
                      else {
                        puVar11 = (undefined8 *)&local_10c;
                        local_10c = *(undefined4 *)(lVar6 + 0x220);
                        local_104 = *(undefined4 *)(lVar6 + 0x228);
                        uStack_108 = *(undefined4 *)(lVar6 + 0x224);
                      }
                      local_d4 = *puVar11;
                      local_cc = *(undefined4 *)(puVar11 + 1);
                      puVar12 = (undefined4 *)
                                FUN_142c1a410(local_c8,lVar10,0x3f800000,&local_d4,&local_e0,0,0);
                      lVar6 = (ulonglong)bVar2 * 0x68;
                      *(undefined4 *)(lVar6 + 0x20 + uVar15) = *puVar12;
                      *(undefined4 *)(lVar6 + 0x24 + uVar15) = puVar12[1];
                      *(undefined4 *)(lVar6 + 0x28 + uVar15) = puVar12[2];
                      *(undefined8 *)(lVar6 + 0x2c + uVar15) = *(undefined8 *)(puVar12 + 3);
                      *(undefined4 *)(lVar6 + 0x34 + uVar15) = puVar12[5];
                      *(undefined8 *)(lVar6 + 0x38 + uVar15) = *(undefined8 *)(puVar12 + 6);
                      *(undefined4 *)(lVar6 + 0x40 + uVar15) = puVar12[8];
                      *(undefined8 *)(lVar6 + 0x48 + uVar15) = *(undefined8 *)(puVar12 + 10);
                      *(undefined1 *)(lVar6 + 0x50 + uVar15) = *(undefined1 *)(puVar12 + 0xc);
                      *(undefined8 *)(lVar6 + 0x58 + uVar15) = *(undefined8 *)(puVar12 + 0xe);
                      *(undefined4 *)(lVar6 + 0x60 + uVar15) = puVar12[0x10];
                      puVar1 = (uint *)(lVar6 + 100 + uVar15);
                      *puVar1 = *puVar1 ^ (*(uint *)(lVar6 + 100 + uVar15) ^ puVar12[0x11]) & 1;
                      uVar13 = (*(uint *)(lVar6 + 100 + uVar15) ^ puVar12[0x11]) & 2 ^
                               *(uint *)(lVar6 + 100 + uVar15);
                      *(uint *)(lVar6 + 100 + uVar15) = uVar13;
                      uVar13 = (puVar12[0x11] ^ uVar13) & 4 ^ uVar13;
                      *(uint *)(lVar6 + 100 + uVar15) = uVar13;
                      uVar13 = (puVar12[0x11] ^ uVar13) & 8 ^ uVar13;
                      *(uint *)(lVar6 + 100 + uVar15) = uVar13;
                      uVar13 = (puVar12[0x11] ^ uVar13) & 0x10 ^ uVar13;
                      *(uint *)(lVar6 + 100 + uVar15) = uVar13;
                      uVar13 = (puVar12[0x11] ^ uVar13) & 0x20 ^ uVar13;
                      *(uint *)(lVar6 + 100 + uVar15) = uVar13;
                      uVar13 = (puVar12[0x11] ^ uVar13) & 0x40 ^ uVar13;
                      *(uint *)(lVar6 + 100 + uVar15) = uVar13;
                      uVar13 = (puVar12[0x11] ^ uVar13) & 0x80 ^ uVar13;
                      *(uint *)(lVar6 + 100 + uVar15) = uVar13;
                      uVar13 = (puVar12[0x11] ^ uVar13) & 0x100 ^ uVar13;
                      *(uint *)(lVar6 + 100 + uVar15) = uVar13;
                      *(uint *)(lVar6 + 100 + uVar15) = (puVar12[0x11] ^ uVar13) & 0x200 ^ uVar13;
                      *(undefined8 *)(lVar6 + 0x68 + uVar15) = *(undefined8 *)(puVar12 + 0x12);
                      *(undefined4 *)(lVar6 + 0x70 + uVar15) = puVar12[0x14];
                      *(undefined4 *)(lVar6 + 0x74 + uVar15) = puVar12[0x15];
                      *(undefined8 *)(lVar6 + 0x78 + uVar15) = *(undefined8 *)(puVar12 + 0x16);
                      *(undefined4 *)(lVar6 + 0x80 + uVar15) = puVar12[0x18];
                      *(byte *)(uVar15 + 0x368) = bVar2;
                      *(undefined8 *)(uVar15 + 0x370) = uVar7;
                      *(undefined4 *)(uVar15 + 0x360) = *(undefined4 *)(local_100 + 0x8c8);
                      lVar6 = local_res18;
                    }
                  }
                  break;
                }
              }
            }
          }
          else {
            FUN_142dd1e30(uVar15);
            lVar6 = local_res18;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142de0ad0 FUN_142de0ad0 body=718 status=ok
// SIG undefined FUN_142de0ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142de0ad0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  char local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    lVar7 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      iVar1 = *(int *)((longlong)plVar2 + 0xc);
      lVar7 = 0;
      lVar10 = lVar7;
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar11 = iVar1 >> 0x1f & 0xffff;
        uVar6 = iVar1 + uVar11;
        lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                 (longlong)(int)((uVar6 & 0xffff) - uVar11) * 0x18;
      }
      if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) == 0) {
        uVar8 = FUN_142a07000();
        plVar9 = (longlong *)(**(code **)(*plVar2 + 0x628))(plVar2,uVar8);
        if (plVar9 != (longlong *)0x0) {
          iVar1 = *(int *)((longlong)plVar9 + 0xc);
          if (iVar1 < (int)DAT_1469e91c4) {
            uVar11 = iVar1 >> 0x1f & 0xffff;
            uVar6 = iVar1 + uVar11;
            lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                    (longlong)(int)((uVar6 & 0xffff) - uVar11) * 0x18;
          }
          if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) {
            cVar4 = FUN_1423146e0(plVar2);
            (**(code **)(*plVar9 + 0x970))(plVar9,param_2,1);
            (**(code **)(*plVar9 + 0x960))(plVar9,0);
            cVar5 = FUN_1423146e0(plVar2);
            if (((cVar5 != '\0') || (cVar4 != '\0')) &&
               (FUN_1423a76a0(plVar9,local_a8), local_a8[0] != '\0')) {
              local_d8 = local_98;
              uStack_d0 = uStack_90;
              local_b8 = local_78;
              uStack_b4 = uStack_74;
              uStack_b0 = uStack_70;
              uStack_ac = uStack_6c;
              local_c8 = local_88;
              uStack_c4 = uStack_84;
              uStack_c0 = uStack_80;
              uStack_bc = uStack_7c;
              (**(code **)(*plVar9 + 0xa80))(plVar9,&local_68,&local_d8);
              local_108 = 0;
              uStack_e0 = uStack_50;
              local_f8 = local_58;
              uStack_f4 = uStack_54;
              local_f0 = uStack_50;
              FUN_142221b50(plVar2,&local_f8,0,0);
              local_e8 = local_68;
              uStack_e4 = uStack_64;
              uStack_e0 = uStack_60;
              uStack_dc = uStack_5c;
              local_108 = 0;
              FUN_142221be0(plVar2,&local_e8,0,0);
            }
            lVar7 = *(longlong *)(param_1 + 0x18);
            if (lVar7 != 0) {
              lVar10 = AHeoCon::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if ((bVar3) && (*(longlong *)(lVar7 + 0x900) != 0)) {
                lVar7 = *(longlong *)(lVar7 + 0x900) + 0x2428;
                FUN_142d84950(lVar7);
                FUN_142d92c10(lVar7,param_2);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142de0da0 FUN_142de0da0 body=425 status=ok
// SIG undefined FUN_142de0da0(void)

void FUN_142de0da0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 local_78;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    local_38 = *(undefined8 *)(lVar4 + 0x220);
    uStack_30 = *(undefined8 *)(lVar4 + 0x228);
    puVar9 = (undefined1 *)register0x00000020;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      local_28 = *(float *)(lVar4 + 0x210);
      fStack_24 = *(float *)(lVar4 + 0x214);
      fStack_20 = *(float *)(lVar4 + 0x218);
      fStack_1c = *(float *)(lVar4 + 0x21c);
      fVar1 = *(float *)(param_1 + 0x54);
      fVar2 = *(float *)(param_1 + 0x48);
      auVar5._4_4_ = -(uint)(*(float *)(lVar4 + 0x254) != fStack_24);
      auVar5._0_4_ = -(uint)(*(float *)(lVar4 + 0x250) != local_28);
      auVar5._8_4_ = -(uint)(*(float *)(lVar4 + 600) != fStack_20);
      auVar5._12_4_ = -(uint)(*(float *)(lVar4 + 0x25c) != fStack_1c);
      iVar7 = movmskps((int)&stack0x00000000,auVar5);
      fVar3 = *(float *)(param_1 + 0x48);
      if (iVar7 != 0) {
        *(float *)(lVar4 + 0x250) = local_28;
        *(float *)(lVar4 + 0x254) = fStack_24;
        *(float *)(lVar4 + 600) = fStack_20;
        *(float *)(lVar4 + 0x25c) = fStack_1c;
        puVar8 = (undefined8 *)FQuat::Rotator(&local_28,&local_58);
        *(undefined8 *)(lVar4 + 0x260) = *puVar8;
        *(undefined4 *)(lVar4 + 0x268) = *(undefined4 *)(puVar8 + 1);
      }
      local_48 = *(undefined8 *)(lVar4 + 0x260);
      local_40 = *(undefined4 *)(lVar4 + 0x268);
      local_78 = 0;
      local_70 = (fVar1 - fVar2) * 0.5 + fVar3;
      FRotator::RotateVector(&local_48,&local_68,&local_78);
      local_58 = (float)local_38 + local_68;
      local_54 = local_38._4_4_ + local_64;
      local_50 = (float)uStack_30 + local_60;
      puVar9 = (undefined1 *)FUN_14223c850(*(undefined8 *)(param_1 + 0x18),&local_58,0,0,0);
    }
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_28 = *(float *)(lVar4 + 0x210);
    fStack_24 = *(float *)(lVar4 + 0x214);
    fStack_20 = *(float *)(lVar4 + 0x218);
    fStack_1c = *(float *)(lVar4 + 0x21c);
    auVar6._4_4_ = -(uint)(*(float *)(lVar4 + 0x254) != fStack_24);
    auVar6._0_4_ = -(uint)(*(float *)(lVar4 + 0x250) != local_28);
    auVar6._8_4_ = -(uint)(*(float *)(lVar4 + 600) != fStack_20);
    auVar6._12_4_ = -(uint)(*(float *)(lVar4 + 0x25c) != fStack_1c);
    iVar7 = movmskps((int)puVar9,auVar6);
    if (iVar7 != 0) {
      *(float *)(lVar4 + 0x250) = local_28;
      *(float *)(lVar4 + 0x254) = fStack_24;
      *(float *)(lVar4 + 600) = fStack_20;
      *(float *)(lVar4 + 0x25c) = fStack_1c;
      puVar8 = (undefined8 *)FQuat::Rotator(&local_28,&local_48);
      *(undefined8 *)(lVar4 + 0x260) = *puVar8;
      *(undefined4 *)(lVar4 + 0x268) = *(undefined4 *)(puVar8 + 1);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      local_48 = *(undefined8 *)(lVar4 + 0x260);
      local_40 = *(undefined4 *)(lVar4 + 0x268);
      AActor::SetActorRotation(*(longlong *)(param_1 + 0x18),&local_48,1);
    }
  }
  return;
}



// FUNCTION 142de0f50 FUN_142de0f50 body=34 status=ok
// SIG undefined FUN_142de0f50(void)

void FUN_142de0f50(longlong param_1)

{
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_142dc44a0();
  }
  return;
}



// FUNCTION 142de0f80 FUN_142de0f80 body=66 status=ok
// SIG undefined FUN_142de0f80(void)

void FUN_142de0f80(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  plVar3 = (longlong *)FUN_142dceb30();
  lVar1 = *plVar3;
  *(int *)(plVar3 + 1) = param_3;
  iVar4 = param_3;
  if (*(char *)(lVar1 + 0x38) != '\0') {
    iVar4 = *(int *)(lVar1 + 0x34);
    if (*(int *)(lVar1 + 0x34) <= param_3) {
      iVar4 = param_3;
    }
    *(int *)(plVar3 + 1) = iVar4;
  }
  if (*(char *)(lVar1 + 0x40) != '\0') {
    iVar2 = *(int *)(lVar1 + 0x3c);
    if (iVar4 <= *(int *)(lVar1 + 0x3c)) {
      iVar2 = iVar4;
    }
    *(int *)(plVar3 + 1) = iVar2;
  }
  return;
}



// FUNCTION 142de0fd0 FUN_142de0fd0 body=489 status=ok
// SIG undefined FUN_142de0fd0(void)

void FUN_142de0fd0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_res8;
  longlong local_res10;
  
  if (*(int *)(param_1 + 0x7540) < 1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x7538);
    if (*(longlong *)(param_1 + 0x7538) == 0) {
      lVar2 = param_1 + 0x338;
    }
    lVar2 = FWeakObjectPtr::Get(lVar2 + 0x10);
  }
  lVar8 = *(longlong *)(param_1 + 0xe780);
  if (lVar2 == lVar8) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x120);
  local_res10 = lVar2;
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0(param_1);
    lVar8 = *(longlong *)(param_1 + 0xe780);
    if (lVar3 == 0) goto LAB_142de1070;
  }
  *(undefined4 *)(param_1 + 0xe788) = *(undefined4 *)(lVar3 + 0x8c8);
  if ((lVar8 == 0) != (lVar2 == 0)) {
    *(undefined4 *)(param_1 + 0xe78c) = *(undefined4 *)(lVar3 + 0x8c8);
  }
LAB_142de1070:
  if (lVar8 != 0) {
    iVar1 = *(int *)(lVar8 + 0x360);
    lVar3 = (longlong)iVar1;
    if (iVar1 != 0) {
      iVar7 = 0;
      bVar9 = **(longlong **)(lVar8 + 0x358) != param_1;
      lVar2 = 0;
      iVar5 = 0;
      do {
        lVar2 = lVar2 + 1;
        iVar6 = iVar5 + 1;
        if (lVar2 < lVar3) {
          plVar4 = (longlong *)(*(longlong *)(lVar8 + 0x358) + lVar2 * 8);
          do {
            if (bVar9 != (*plVar4 != param_1)) break;
            iVar6 = iVar6 + 1;
            lVar2 = lVar2 + 1;
            plVar4 = plVar4 + 1;
          } while (lVar2 < lVar3);
        }
        if (bVar9 != false) {
          if (iVar7 != iVar5) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar8 + 0x358) + (longlong)iVar7 * 8),
                       (void *)(*(longlong *)(lVar8 + 0x358) + (longlong)iVar5 * 8),
                       (longlong)(iVar6 - iVar5) << 3);
          }
          iVar7 = iVar7 + (iVar6 - iVar5);
        }
        bVar9 = (bool)(bVar9 ^ 1);
        iVar5 = iVar6;
      } while (lVar2 < lVar3);
      *(int *)(lVar8 + 0x360) = iVar7;
      lVar2 = local_res10;
      if (0 < iVar1 - iVar7) {
        TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(lVar8 + 0x368,lVar8);
        lVar2 = local_res10;
      }
    }
  }
  if ((lVar2 != 0) &&
     (iVar1 = *(int *)(lVar2 + 0x360), local_res8 = param_1,
     TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
     AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar2 + 0x358,&local_res8),
     iVar1 < *(int *)(lVar2 + 0x360))) {
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(lVar2 + 0x368,lVar2);
  }
  *(longlong *)(param_1 + 0xe780) = lVar2;
  return;
}



// FUNCTION 142de11c0 FUN_142de11c0 body=271 status=ok
// SIG undefined FUN_142de11c0(void)

void FUN_142de11c0(longlong param_1,longlong param_2,float *param_3,undefined8 *param_4)

{
  float fVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_18 [4];
  undefined8 local_14;
  
  if (param_2 != 0) {
    plVar4 = *(longlong **)(param_1 + 0x948);
    plVar5 = plVar4;
    if (plVar4 != plVar4 + (longlong)*(int *)(param_1 + 0x950) * 0xc) {
      while (*plVar5 != param_2) {
        plVar5 = plVar5 + 0xc;
        if (plVar5 == plVar4 + (longlong)*(int *)(param_1 + 0x950) * 0xc) {
          return;
        }
      }
      iVar2 = (int)(((longlong)plVar5 - (longlong)plVar4) / 0x60);
      if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x950))) {
        plVar4 = plVar4 + (longlong)iVar2 * 0xc;
        if ((*param_3 != 0.0) || ((param_3[1] != 0.0 || (param_3[2] != 0.0)))) {
          fVar1 = param_3[2];
          plVar4[5] = *(longlong *)param_3;
          *(float *)(plVar4 + 6) = fVar1;
        }
        local_18[0] = 0;
        local_14 = 0;
        cVar3 = FUN_142d30460(param_4,local_18);
        if (cVar3 != '\0') {
          *(undefined8 *)((longlong)plVar4 + 0x34) = *param_4;
          *(undefined4 *)((longlong)plVar4 + 0x3c) = *(undefined4 *)(param_4 + 1);
        }
        TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x890,plVar4);
      }
    }
  }
  return;
}



// FUNCTION 142de12d0 FUN_142de12d0 body=160 status=ok
// SIG undefined FUN_142de12d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142de12d0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = FUN_142dd3d30();
  lVar2 = lRam00000001466ad830;
  if ((char)uVar3 != '\0') {
    lVar5 = *(longlong *)(*param_1 + 0x180);
    uVar3 = (ulonglong)*(int *)(*param_1 + 0x188);
    lVar4 = uVar3 * 0x70 + lVar5;
    for (; lVar5 != lVar4; lVar5 = lVar5 + 0x70) {
      uVar3 = *(ulonglong *)(lVar5 + 8);
      if ((uVar3 != 0) && (uVar3 == param_1[1])) {
        if (*(char *)(lVar5 + 0x60) == '\0') {
          lVar4 = *(longlong *)(lVar5 + 0x48);
          uVar1 = *(uint *)(param_1 + 2);
          uVar3 = (ulonglong)uVar1;
          lVar5 = lVar4 + (longlong)*(int *)(lVar5 + 0x50) * 0x48;
          for (; lVar4 != lVar5; lVar4 = lVar4 + 0x48) {
            if (*(uint *)(lVar4 + 0x38) == uVar1) {
              return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
            }
          }
        }
        break;
      }
    }
  }
  *param_1 = _DAT_1466ad828;
  param_1[1] = lVar2;
  param_1[2] = DAT_1466ad838;
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142de1370 FUN_142de1370 body=55 status=ok
// SIG undefined FUN_142de1370(void)

bool FUN_142de1370(longlong param_1)

{
  longlong lVar1;
  float local_res8 [8];
  
  local_res8[0] = (float)(DAT_1468b5a78 - DAT_1468e2430);
  lVar1 = FUN_142dc06f0(*(undefined8 *)(param_1 + 0x18),local_res8);
  return lVar1 != 0;
}



// FUNCTION 142de13c0 operator<FObjectKey,TMap<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<FObjectKey,TMap<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,0>_>_> body=264 status=ok
// SIG undefined operator<FObjectKey,TMap<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<FObjectKey,TMap<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,0>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
TKeyInitializer<FObjectKey_const_&>::
operator<FObjectKey,TMap<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<FObjectKey,TMap<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,0>_>_>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  local_40 = 0;
  local_30 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  TSparseArray<TSetElement<TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 1,&local_78);
  lVar1 = local_38;
  if (local_38 == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_2 + 8,&local_40,4);
  }
  if (param_2[9] != 0) {
    FMemory::Free();
    lVar1 = local_38;
  }
  param_2[9] = lVar1;
  *(undefined4 *)(param_2 + 10) = (undefined4)local_30;
  local_38 = 0;
  local_30 = local_30 & 0xffffffff00000000;
  TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  return param_2;
}



// FUNCTION 142de14d0 FUN_142de14d0 body=160 status=ok
// SIG undefined FUN_142de14d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142de14d0(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  uVar3 = ((undefined8 *)*param_1)[1];
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = uVar3;
  param_2[4] = 0;
  _guard_xfg_dispatch_icall_nop(param_2 + 2,local_48,0x10);
  uVar3 = 0;
  uVar2 = 0;
  uVar1 = 0;
  if (param_2[4] != 0) {
    FMemory::Free();
    uVar3 = local_38;
    uVar2 = (undefined4)local_30;
    uVar1 = local_30._4_4_;
  }
  param_2[4] = uVar3;
  *(undefined4 *)(param_2 + 5) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar1;
  return param_2;
}



// FUNCTION 142de1570 FUN_142de1570 body=726 status=ok
// SIG undefined FUN_142de1570(void)

int * FUN_142de1570(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  longlong lVar12;
  int iVar13;
  void *_Dst;
  uint uVar14;
  undefined4 uVar15;
  int *_Src;
  bool bVar16;
  int local_res8 [2];
  
  uVar15 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar13 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar13;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  _Src = (int *)((longlong)iVar13 * 0x60 + *param_1);
  TKeyInitializer<FObjectKey_const_&>::
  operator<FObjectKey,TMap<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<FObjectKey,TMap<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,0>_>_>
            (param_3,_Src);
  _Src[0x16] = -1;
  iVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar13 != 1) {
    FUN_142de87d0(param_1,local_res8,_Src);
    iVar2 = local_res8[0];
    lVar12 = (longlong)local_res8[0];
    bVar16 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar16);
    if (bVar16) {
      _Dst = (void *)(lVar12 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x58);
      iVar13 = *param_2;
      bVar3 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x60 + *param_1) = iVar13;
      }
      puVar6 = (undefined4 *)((longlong)iVar13 * 0x60 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar15 = (undefined4)param_1[6];
      }
      puVar6[1] = uVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar2;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      uVar11 = (undefined1)local_res8[0];
      goto LAB_142de1822;
    }
  }
  uVar11 = 0;
  cVar4 = TSet<TTuple<FObjectKey,TMap<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar13,0);
  if (cVar4 == '\0') {
    uVar9 = _Src[1];
    uVar10 = *_Src - uVar9 ^ uVar9 >> 0xd;
    uVar8 = (-0x61c88647 - uVar10) - uVar9 ^ uVar10 << 8;
    uVar14 = (uVar9 - uVar8) - uVar10 ^ uVar8 >> 0xd;
    uVar10 = (uVar10 - uVar8) - uVar14 ^ uVar14 >> 0xc;
    uVar9 = (uVar8 - uVar10) - uVar14 ^ uVar10 << 0x10;
    uVar14 = (uVar14 - uVar9) - uVar10 ^ uVar9 >> 5;
    uVar8 = (uVar10 - uVar9) - uVar14 ^ uVar14 >> 3;
    uVar9 = (uVar9 - uVar8) - uVar14 ^ uVar8 << 10;
    uVar9 = ((uVar14 - uVar9) - uVar8 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    _Src[0x17] = uVar9;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    _Src[0x16] = *(int *)((longlong)plVar7 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_142de1822:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar11;
  }
  return param_2;
}



// FUNCTION 142de1850 FUN_142de1850 body=758 status=ok
// SIG undefined FUN_142de1850(void)

int * FUN_142de1850(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  void *_Dst;
  char cVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  
  iVar9 = 1;
  iVar16 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar12 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  plVar10 = (longlong *)((longlong)iVar12 * 0x38 + *param_1);
  FUN_142de14d0(param_3);
  *(undefined4 *)(plVar10 + 6) = 0xffffffff;
  bVar17 = false;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar15 != 1) {
    iVar12 = iVar16;
    if (uVar15 != 0) {
      lVar3 = *plVar10;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar13 = *(int *)((longlong)plVar8 +
                       (((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) ^
                        (ulonglong)*(byte *)(plVar10 + 1)) & (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar13 != -1) {
        lVar4 = *param_1;
        do {
          lVar11 = (longlong)iVar13 * 0x38;
          if ((*(longlong *)(lVar11 + lVar4) == lVar3) &&
             (*(byte *)(lVar11 + 8 + lVar4) == *(byte *)(plVar10 + 1))) {
            bVar17 = true;
          }
          else {
            bVar17 = false;
          }
          iVar12 = iVar13;
        } while ((!bVar17) &&
                (iVar13 = *(int *)(lVar11 + 0x30 + lVar4), iVar12 = iVar16, iVar13 != -1));
      }
    }
    bVar17 = iVar12 != -1;
    if (bVar17) {
      _Dst = (void *)((longlong)iVar12 * 0x38 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x20) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar10,0x30);
      iVar9 = *param_2;
      bVar5 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x38 + *param_1) = iVar9;
      }
      puVar7 = (undefined4 *)((longlong)iVar9 * 0x38 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar16 = (int)param_1[6];
      }
      puVar7[1] = iVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar12;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar10 +
                       (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_142de1b21;
    }
  }
  if (3 < uVar15) {
    uVar6 = (uVar15 >> 1) + 8;
    iVar16 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    iVar9 = 0x20;
    cVar14 = '\0';
    if (uVar6 != 0) {
      iVar9 = 0x1f - iVar16;
    }
    uVar6 = (uVar15 >> 1) + 7;
    iVar16 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar14 = '\x1f' - (char)iVar16;
    }
    iVar9 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar15 = ((int)((ulonglong)*plVar10 >> 0x20) + (int)*plVar10 ^ (uint)*(byte *)(plVar10 + 1)) &
             (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar10 + 0x34) = uVar15;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(plVar10 + 6) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    FUN_142df0a70(param_1);
  }
LAB_142de1b21:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar17;
  }
  return param_2;
}



// FUNCTION 142de1b50 FUN_142de1b50 body=639 status=ok
// SIG undefined FUN_142de1b50(void)

int * FUN_142de1b50(longlong param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  bool bVar18;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  FUN_142de5180(param_1,local_38);
  uVar17 = 0xffffffff;
  puVar2 = (undefined4 *)param_3[1];
  uVar3 = *(ulonglong *)*param_3;
  *param_2 = local_38[0];
  *local_30 = uVar3;
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  *(undefined4 *)(local_30 + 1) = *puVar2;
  *(undefined4 *)((longlong)local_30 + 0xc) = uVar5;
  *(undefined4 *)(local_30 + 2) = uVar6;
  *(undefined4 *)((longlong)local_30 + 0x14) = uVar7;
  *(undefined4 *)(local_30 + 3) = 0xffffffff;
  iVar15 = *(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x22c);
  if (iVar15 != 1) {
    FUN_142de86a0(param_1,local_res8);
    iVar8 = local_res8[0];
    lVar14 = (longlong)local_res8[0];
    bVar18 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar18);
    if (bVar18) {
      lVar11 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar11 = param_1;
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar11 + lVar14 * 0x20),local_30,0x18);
      bVar4 = (byte)local_38[0] & 0x1f;
      if (*(int *)(param_1 + 0x22c) != 0) {
        lVar14 = *(longlong *)(param_1 + 0x200);
        if (*(longlong *)(param_1 + 0x200) == 0) {
          lVar14 = param_1;
        }
        *(int *)(lVar14 + (longlong)*(int *)(param_1 + 0x228) * 0x20) = local_38[0];
      }
      lVar14 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar14 = param_1;
      }
      *(undefined4 *)(lVar14 + (longlong)local_38[0] * 0x20) = 0xffffffff;
      if (0 < *(int *)(param_1 + 0x22c)) {
        uVar17 = *(undefined4 *)(param_1 + 0x228);
      }
      *(undefined4 *)(lVar14 + 4 + (longlong)local_38[0] * 0x20) = uVar17;
      *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
      *(int *)(param_1 + 0x228) = local_38[0];
      lVar14 = *(longlong *)(param_1 + 0x218);
      *param_2 = iVar8;
      if (lVar14 == 0) {
        lVar14 = param_1 + 0x210;
      }
      puVar1 = (uint *)(lVar14 + (longlong)((int)(local_38[0] + (local_38[0] >> 0x1f & 0x1fU)) >> 5)
                                 * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      uVar13 = (undefined1)local_res8[0];
      goto LAB_142de1da6;
    }
  }
  uVar13 = 0;
  cVar9 = FUN_142de6d30(param_1,iVar15,0);
  if (cVar9 == '\0') {
    iVar15 = (int)(*local_30 >> 4);
    uVar12 = 0x9e3779b9U - iVar15 ^ iVar15 << 8;
    uVar16 = -(uVar12 + iVar15) ^ uVar12 >> 0xd;
    uVar10 = (iVar15 - uVar12) - uVar16 ^ uVar16 >> 0xc;
    uVar12 = (uVar12 - uVar10) - uVar16 ^ uVar10 << 0x10;
    uVar16 = (uVar16 - uVar12) - uVar10 ^ uVar12 >> 5;
    uVar10 = (uVar10 - uVar12) - uVar16 ^ uVar16 >> 3;
    uVar12 = (uVar12 - uVar10) - uVar16 ^ uVar10 << 10;
    uVar10 = ((uVar16 - uVar12) - uVar10 ^ uVar12 >> 0xf) & *(int *)(param_1 + 600) - 1U;
    *(uint *)((longlong)local_30 + 0x1c) = uVar10;
    lVar14 = *(longlong *)(param_1 + 0x250);
    if (*(longlong *)(param_1 + 0x250) == 0) {
      lVar14 = param_1 + 0x230;
    }
    *(undefined4 *)(local_30 + 3) =
         *(undefined4 *)
          (lVar14 + ((longlong)*(int *)(param_1 + 600) - 1U & (longlong)(int)uVar10) * 4);
    lVar14 = *(longlong *)(param_1 + 0x250);
    if (*(longlong *)(param_1 + 0x250) == 0) {
      lVar14 = param_1 + 0x230;
    }
    *(int *)(lVar14 + ((longlong)*(int *)(param_1 + 600) - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_142de1da6:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar13;
  }
  return param_2;
}



// FUNCTION 142de1dd0 FUN_142de1dd0 body=63 status=ok
// SIG undefined FUN_142de1dd0(void)

void FUN_142de1dd0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = UByteProperty::GetPrivateStaticClass();
  FUN_141799410(uVar1,param_1,param_2,param_3);
  return;
}



// FUNCTION 142de1e10 FUN_142de1e10 body=1089 status=ok
// SIG undefined FUN_142de1e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142de1e10(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong **_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_108 [32];
  char local_e8;
  longlong *local_e0;
  int local_d8;
  uint uStack_d4;
  uint *puStack_d0;
  undefined4 local_c8;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  int local_b0;
  int local_ac;
  longlong *local_a8;
  int iStack_a0;
  uint uStack_9c;
  uint *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  longlong *local_80;
  undefined8 uStack_78;
  uint *puStack_70;
  uint uStack_68;
  uint uStack_64;
  undefined8 uStack_60;
  longlong **local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 0x48) = 0;
  local_e8 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0x4c)) {
    TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_d4 = 1;
  local_e0 = (longlong *)(param_1 + 0x2b0);
  local_b8 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_d0 = (uint *)(param_1 + 0x2c0);
  local_ac = 0;
  iVar13 = 0;
  local_d8 = 0;
  uStack_c4 = 0;
  iStack_c0 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_d0;
    }
    uVar12 = *puVar10;
    iStack_c0 = 0;
    local_d8 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_d8;
      iStack_c0 = iStack_c0 + 0x20;
      iVar5 = local_d8 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
      local_d8 = iVar5;
      if (bVar3) goto LAB_142de1f2a;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_d4 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_d4 != 0) {
      for (; uStack_d4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_d4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_c4 = (iStack_c0 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_c4) {
LAB_142de1f2a:
      uStack_c4 = uVar1;
    }
  }
  local_c8 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_78 = CONCAT44(uStack_d4,local_d8);
  uStack_90 = 0xffffffff;
  uStack_8c = uStack_c4;
  local_88 = CONCAT44(uStack_bc,iStack_c0);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_a0 = local_d8;
  uStack_9c = uStack_d4;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_d0;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_142de1fed;
      uVar6 = puVar10[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
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
    uVar12 = (uVar9 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uVar12) {
LAB_142de1fed:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_98 = puStack_d0;
  local_80 = local_e0;
  puStack_70 = puStack_d0;
  uStack_60 = local_88;
  local_a8 = local_e0;
  uStack_68 = uStack_90;
  uStack_64 = uStack_8c;
  while( true ) {
    if ((uStack_8c == uVar12) && (local_98 == puStack_d0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_a8 == local_e0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_a8 + (longlong)(int)uStack_8c * 0x10);
    if (lVar7 != 0) {
      lVar4 = FUN_142e80f20();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = *(int *)(param_2 + 0x48);
        *(int *)(param_2 + 0x48) = iVar2 + 1;
        if (*(int *)(param_2 + 0x4c) < iVar2 + 1) {
          TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                    (param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0x40);
        if (*(longlong *)(param_2 + 0x40) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_e8 != '\0') && (lVar7 != 0)) {
      lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_b0 = iVar13 + 1;
        if (iVar5 < local_b0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,iVar13);
          plVar11 = local_b8;
          iVar5 = local_ac;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_b0;
      }
    }
    uStack_90 = uStack_90 & ~uStack_9c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
  }
  if (local_e8 != '\0') {
    uVar8 = 0;
    local_40 = (longlong **)0x0;
    local_38 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_142de1e10(*(longlong *)(*plVar14 + 0x2d8),&local_80,1);
          iVar13 = (int)local_38;
          lVar7 = (longlong)(int)local_38;
          if ((int)local_38 != 0) {
            iVar5 = *(int *)(param_2 + 0x48);
            if (*(int *)(param_2 + 0x4c) < (int)local_38 + iVar5) {
              TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo
                        (param_2);
              iVar5 = *(int *)(param_2 + 0x48);
            }
            _Src = &local_80;
            if (local_40 != (longlong **)0x0) {
              _Src = local_40;
            }
            lVar4 = *(longlong *)(param_2 + 0x40);
            if (*(longlong *)(param_2 + 0x40) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + iVar13;
            local_38 = local_38 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_40 != (longlong **)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 142de2260 FUN_142de2260 body=972 status=ok
// SIG undefined FUN_142de2260(void)

ulonglong FUN_142de2260(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  int local_res8;
  int iStackX_c;
  undefined2 *local_48;
  int local_40;
  longlong *local_38;
  ulonglong local_30;
  int local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  uVar3 = 0;
  local_res8 = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x2f8))(param_2);
  }
  if (1 < (int)param_1[2]) {
    if ((int)param_1[2] == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)param_1[1];
    }
    FName::FName(&local_res8,puVar9,0);
    lVar7 = CONCAT44(iStackX_c,local_res8);
    if ((local_res8 == 0) && (iStackX_c == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      if (param_2 == (longlong *)0x0) {
        local_30 = 0;
      }
      else {
        local_30 = param_2[7];
      }
      local_28 = -1;
      local_24 = 0x101;
      local_22 = 0;
      local_38 = param_2;
      FUN_142341690(&local_38);
      if (local_30 != 0) {
        do {
          uVar3 = local_30;
          if (*(longlong *)(local_30 + 0x18) == lVar7) goto LAB_142de2358;
          local_30 = *(ulonglong *)(local_30 + 0x28);
          FUN_142341690(&local_38);
        } while (local_30 != 0);
        uVar3 = FUN_142510c60(0,param_1[3]);
        goto LAB_142de25c3;
      }
    }
LAB_142de2358:
    uVar3 = FUN_142510c60(uVar3,param_1[3]);
    goto LAB_142de25c3;
  }
  if ((char)param_1[6] == '\0') {
    param_2 = (longlong *)*param_1;
    if (param_2 != (longlong *)0x0) {
      lVar7 = FUN_14171bfe0();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_142de23b0;
    }
  }
  else {
LAB_142de23b0:
    if (param_2 != (longlong *)0x0) {
      uVar3 = FUN_142510c60(param_2,param_1[3]);
      goto LAB_142de25c3;
    }
  }
  lVar7 = *param_1;
  if (lVar7 == 0) {
LAB_142de2407:
    if (*param_1 != 0) {
      lVar7 = UObjectBaseUtility::GetOutermost();
      goto LAB_142de2417;
    }
  }
  else {
    lVar4 = UPackage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142de2407;
LAB_142de2417:
    if (lVar7 != 0) {
      puVar5 = (undefined8 *)FName::ToString(param_1 + 3,&local_48);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar5;
      }
      uVar6 = UByteProperty::GetPrivateStaticClass();
      uVar3 = FUN_141799410(uVar6,lVar7,puVar9,0);
      goto LAB_142de25b5;
    }
  }
  lVar7 = UByteProperty::GetPrivateStaticClass();
  lVar4 = FUN_14171c5d0();
  uVar10 = uVar3;
  if (lVar7 == lVar4) {
    uVar10 = 1;
    uVar6 = FName::ToString(param_1 + 3,&local_48);
    cVar2 = FString::EndsWith(uVar6,L"__DelegateSignature",1);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_142de249b;
    }
  }
  bVar1 = false;
LAB_142de249b:
  if ((uVar10 != 0) && (local_48 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if (!bVar1) {
    return 0;
  }
  FName::ToString(param_1 + 3,&local_48);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  local_28 = -1;
  uVar6 = UPackage::GetPrivateStaticClass();
  FUN_1417a5560(uVar6,&local_38,1,0x10,0);
  uVar10 = local_30 & 0xffffffff;
  do {
    local_28 = local_28 + 1;
    plVar8 = local_38;
    if ((int)local_30 <= local_28) break;
  } while (local_38[local_28] == 0);
  do {
    if ((local_28 < 0) || ((int)uVar10 <= local_28)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (uVar3 != 0)) break;
    if ((*(uint *)(plVar8[local_28] + 0x50) >> 4 & 1) != 0) {
      puVar9 = &DAT_143f3eda8;
      if (local_40 != 0) {
        puVar9 = local_48;
      }
      uVar3 = FUN_142de1dd0(plVar8[local_28],puVar9,0);
      uVar10 = local_30 & 0xffffffff;
      plVar8 = local_38;
    }
    do {
      local_28 = local_28 + 1;
      if ((int)uVar10 <= local_28) break;
    } while (plVar8[local_28] == 0);
  } while( true );
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  if (uVar3 != 0) {
    lVar7 = UObjectBaseUtility::GetOutermost(uVar3);
    *param_1 = lVar7;
  }
LAB_142de25b5:
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_142de25c3:
  if (uVar3 != 0) {
    lVar7 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(byte *)((longlong)param_1 + 0x31) = (byte)((uint)*(undefined4 *)(uVar3 + 0x38) >> 0x1d) & 1;
    }
  }
  return uVar3;
}



// FUNCTION 142de2630 FUN_142de2630 body=252 status=ok
// SIG undefined FUN_142de2630(void)

undefined8 *
FUN_142de2630(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  
  *param_1 = param_3;
  FText::FText(param_1 + 1);
  FText::FText(param_1 + 4);
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  cVar4 = *(char *)(param_4 + 8);
  if (cVar4 != '\0') {
    plVar1 = *(longlong **)(param_4 + 0x2d8);
    if (plVar1 != (longlong *)0x0) {
      uVar3 = FUN_142dec600(param_4);
      lVar6 = (longlong)(int)plVar1[1];
      iVar5 = (int)plVar1[1] + 1;
      *(int *)(plVar1 + 1) = iVar5;
      if (*(int *)((longlong)plVar1 + 0xc) < iVar5) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1);
      }
      lVar2 = *plVar1;
      *(undefined8 *)(lVar2 + lVar6 * 0x18) = 0;
      *(undefined8 *)(lVar2 + 8 + lVar6 * 0x18) = 0;
      *(undefined1 *)(lVar2 + 0x14 + lVar6 * 0x18) = uVar3;
      *(undefined4 *)(lVar2 + 0x10 + lVar6 * 0x18) = 0;
      *(undefined1 *)(lVar2 + 0x15 + lVar6 * 0x18) = 0;
      cVar4 = *(char *)(param_4 + 8);
    }
    if (cVar4 != '\0') goto LAB_142de26fd;
  }
  lVar6 = FUN_142dec180(param_4,*param_1);
  if (lVar6 != 0) {
    *(undefined1 *)(lVar6 + 0x15) = 0;
  }
LAB_142de26fd:
  (**(code **)(*(longlong *)*param_1 + 0x2a8))
            ((longlong *)*param_1,param_1 + 1,param_1 + 4,param_1 + 7,param_4);
  return param_1;
}



// FUNCTION 142de2730 FUN_142de2730 body=69 status=ok
// SIG undefined FUN_142de2730(void)

undefined8 * FUN_142de2730(undefined8 *param_1)

{
  FText::FText(param_1 + 1);
  FText::FText(param_1 + 4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 142de2780 FUN_142de2780 body=209 status=ok
// SIG undefined FUN_142de2780(void)

undefined8 *
FUN_142de2780(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_3;
  puVar3 = (undefined8 *)param_3[0x11];
  if ((undefined8 *)param_3[0x11] == (undefined8 *)0x0) {
    puVar3 = param_3 + 1;
  }
  puVar4 = puVar3 + (longlong)*(int *)(param_3 + 0x12) * 2;
  for (; puVar3 != puVar4; puVar3 = puVar3 + 2) {
    iVar1 = *(int *)(param_1 + 2);
    uVar2 = *puVar3;
    *(int *)(param_1 + 2) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0x14) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 1,iVar1);
    }
    FUN_142de2630((longlong)iVar1 * 0x40 + param_1[1],param_2,uVar2,param_4);
  }
  return param_1;
}



// FUNCTION 142de2860 FUN_142de2860 body=21 status=ok
// SIG undefined FUN_142de2860(void)

undefined8 *
FUN_142de2860(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_1 = param_2;
  param_1[1] = *param_3;
  param_1[2] = *param_4;
  return param_1;
}



// FUNCTION 142de2880 FUN_142de2880 body=138 status=ok
// SIG undefined FUN_142de2880(void)

undefined1 * FUN_142de2880(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  return param_1;
}



// FUNCTION 142de2910 FUN_142de2910 body=140 status=ok
// SIG undefined FUN_142de2910(void)

undefined1 *
FUN_142de2910(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  *param_1 = param_4;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[3] = 5;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x58) = param_3;
  *(undefined2 *)(param_1 + 0x60) = 0xff00;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x70,0);
  *(undefined4 *)(param_1 + 0x78) = 0;
  FUN_142de72e0(param_1);
  *(undefined8 *)(param_1 + 0x80) = param_2;
  return param_1;
}



// FUNCTION 142de29a0 FUN_142de29a0 body=144 status=ok
// SIG undefined FUN_142de29a0(void)

undefined1 * FUN_142de29a0(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  param_1[2] = param_3[2];
  param_1[3] = param_3[3];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_3 + 0x18);
  uVar1 = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_3 + 0x50);
  uVar1 = *(undefined8 *)(param_3 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_3 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_3 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_3 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_3 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_3 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = param_2;
  return param_1;
}



// FUNCTION 142de2a30 FUN_142de2a30 body=149 status=ok
// SIG undefined FUN_142de2a30(void)

undefined1 *
FUN_142de2a30(undefined1 *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  *param_1 = param_4;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0xff00;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x70,0);
  *(undefined4 *)(param_1 + 0x78) = param_3;
  FUN_142de72e0(param_1);
  *(undefined8 *)(param_1 + 0x80) = param_2;
  return param_1;
}



// FUNCTION 142de2ad0 FUN_142de2ad0 body=46 status=ok
// SIG undefined FUN_142de2ad0(void)

longlong FUN_142de2ad0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_142de2e30(param_1,param_3);
  *(undefined8 *)(param_1 + 0x80) = param_2;
  return param_1;
}



// FUNCTION 142de2b00 FUN_142de2b00 body=120 status=ok
// SIG undefined FUN_142de2b00(void)

undefined4 * FUN_142de2b00(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0xff00;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x1c,0);
  param_1[0x1e] = 0;
  FUN_142de72e0(param_1);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 142de2b80 FUN_142de2b80 body=124 status=ok
// SIG undefined FUN_142de2b80(void)

undefined1 * FUN_142de2b80(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  return param_1;
}



// FUNCTION 142de2c00 FUN_142de2c00 body=134 status=ok
// SIG undefined FUN_142de2c00(void)

undefined1 * FUN_142de2c00(undefined1 *param_1,int param_2,undefined1 param_3)

{
  *param_1 = param_3;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(float *)(param_1 + 4) = (float)param_2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0xff00;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x70,0);
  *(float *)(param_1 + 0x78) = (float)param_2;
  FUN_142de72e0(param_1);
  return param_1;
}



// FUNCTION 142de2c90 FUN_142de2c90 body=132 status=ok
// SIG undefined FUN_142de2c90(void)

undefined1 *
FUN_142de2c90(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  *param_1 = param_4;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[3] = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0xff00;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x70,0);
  *(undefined4 *)(param_1 + 0x78) = param_2;
  FUN_142de72e0(param_1);
  return param_1;
}



// FUNCTION 142de2d20 FUN_142de2d20 body=130 status=ok
// SIG undefined FUN_142de2d20(void)

undefined1 * FUN_142de2d20(undefined1 *param_1,undefined4 param_2,undefined1 param_3)

{
  *param_1 = param_3;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0xff00;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x70,0);
  *(undefined4 *)(param_1 + 0x78) = param_2;
  FUN_142de72e0(param_1);
  return param_1;
}



// FUNCTION 142de2db0 FUN_142de2db0 body=120 status=ok
// SIG undefined FUN_142de2db0(void)

undefined1 * FUN_142de2db0(undefined1 *param_1,undefined8 param_2,undefined1 param_3)

{
  *param_1 = param_3;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[3] = 5;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined2 *)(param_1 + 0x60) = 0xff00;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x70,0);
  *(undefined4 *)(param_1 + 0x78) = 0;
  FUN_142de72e0(param_1);
  return param_1;
}



// FUNCTION 142de2e30 FUN_142de2e30 body=119 status=ok
// SIG undefined FUN_142de2e30(void)

undefined1 * FUN_142de2e30(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0xff00;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x70,0);
  *(undefined4 *)(param_1 + 0x78) = 0;
  FUN_142de72e0(param_1);
  return param_1;
}



// FUNCTION 142de2eb0 FUN_142de2eb0 body=113 status=ok
// SIG undefined FUN_142de2eb0(void)

undefined4 * FUN_142de2eb0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0xff00;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x1c,0);
  param_1[0x1e] = 0;
  FUN_142de72e0(param_1);
  return param_1;
}



// FUNCTION 142de2f30 FUN_142de2f30 body=153 status=ok
// SIG undefined FUN_142de2f30(void)

undefined1 * FUN_142de2f30(undefined1 *param_1,byte param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  *param_1 = param_3;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(float *)(param_1 + 4) = (float)param_2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0xff00;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x70,0);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  FUN_142de72e0(param_1);
  return param_1;
}



// FUNCTION 142de2fd0 FUN_142de2fd0 body=61 status=ok
// SIG undefined FUN_142de2fd0(void)

undefined4 * FUN_142de2fd0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  FText::FText(param_1 + 2);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 142de3010 FUN_142de3010 body=97 status=ok
// SIG undefined FUN_142de3010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142de3010(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16) = 0;
  FText::FText(param_1 + 3);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xb) = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  return param_1;
}



// FUNCTION 142de3080 FUN_142de3080 body=69 status=ok
// SIG undefined FUN_142de3080(void)

undefined8 * FUN_142de3080(undefined8 *param_1)

{
  UAnimNotifyState::UAnimNotifyState();
  *param_1 = &PTR__scalar_deleting_destructor__1458bc058;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  return param_1;
}



// FUNCTION 142de30d0 UORTestObject body=42 status=ok
// SIG undefined UORTestObject(void)

undefined8 * UORTestObject::UORTestObject(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1458baaf0;
  FDifficultyFloat::FDifficultyFloat(param_1 + 5);
  return param_1;
}



// FUNCTION 142de3100 FUN_142de3100 body=177 status=ok
// SIG undefined FUN_142de3100(void)

undefined8 * FUN_142de3100(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1458bad68;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  return param_1;
}



// FUNCTION 142de31c0 FUN_142de31c0 body=53 status=ok
// SIG undefined FUN_142de31c0(void)

undefined8 * FUN_142de31c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UDataAsset::UDataAsset(param_1,uVar1);
  *param_1 = &PTR_FUN_143fce9d0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 142de3200 FUN_142de3200 body=62 status=ok
// SIG undefined FUN_142de3200(void)

undefined8 * FUN_142de3200(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *param_1 = &PTR__scalar_deleting_destructor__1458b9908;
  param_1[5] = &PTR_LAB_144198018;
  return param_1;
}



// FUNCTION 142de3240 FUN_142de3240 body=415 status=ok
// SIG undefined FUN_142de3240(void)

undefined8 * FUN_142de3240(undefined8 *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 local_res8;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar4 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar4);
  uVar5 = 0;
  *param_1 = &PTR_FUN_1458b9238;
  plVar1 = param_1 + 6;
  *plVar1 = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)((longlong)param_1 + 0x6a) = 0xff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  local_res8 = param_1[3];
  FName::ToString(&local_res8,&local_18);
  if (plVar1 == &local_18) {
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = local_18;
    *(undefined4 *)(param_1 + 7) = local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_c;
  }
  *(undefined2 *)((longlong)param_1 + 0x41) = 0x102;
  *(undefined1 *)((longlong)param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0xd) = 1;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    uVar3 = DAT_146b34b70;
    if (0xff < (int)DAT_146b34b70) {
      uVar3 = 0x100;
    }
    uVar2 = (ulonglong)DAT_146b34b70;
    if (0 < (int)uVar3) {
      uVar7 = uVar5;
      puVar6 = DAT_146b34b68;
      if (DAT_146b34b68 == (undefined *)0x0) {
        puVar6 = &DAT_146b34ae8;
      }
      do {
        iVar8 = (int)uVar7;
        if (*(longlong *)(puVar6 + uVar5 * 8) == 0) {
          *(undefined8 **)(puVar6 + (longlong)iVar8 * 8) = param_1;
          if (-1 < iVar8) goto LAB_142de33c3;
          uVar2 = (ulonglong)DAT_146b34b70;
          break;
        }
        uVar5 = uVar5 + 1;
        uVar7 = (ulonglong)(iVar8 + 1);
      } while ((longlong)uVar5 < (longlong)(int)uVar3);
    }
    uVar7 = uVar2;
    iVar8 = (int)uVar7;
    DAT_146b34b70 = iVar8 + 1;
    if (DAT_146b34b74 < (int)DAT_146b34b70) {
      TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(&DAT_146b34ae8,uVar7);
    }
    puVar6 = DAT_146b34b68;
    if (DAT_146b34b68 == (undefined *)0x0) {
      puVar6 = &DAT_146b34ae8;
    }
    *(undefined8 **)(puVar6 + (longlong)iVar8 * 8) = param_1;
    if (0xfe < iVar8) {
      uVar7 = 0xff;
    }
LAB_142de33c3:
    *(char *)((longlong)param_1 + 0x6a) = (char)uVar7;
  }
  return param_1;
}



// FUNCTION 142de33e0 FUN_142de33e0 body=110 status=ok
// SIG undefined FUN_142de33e0(void)

undefined8 * FUN_142de33e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR_FUN_1458b94b8;
  param_1[5] = &PTR_LAB_1458b98c0;
  param_1[0x2f] = &PTR_LAB_1458b98f0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 2;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(undefined1 *)(param_1 + 0x35) = 1;
  return param_1;
}



// FUNCTION 142de3450 FUN_142de3450 body=353 status=ok
// SIG undefined FUN_142de3450(void)

undefined8 * FUN_142de3450(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  
  uVar3 = FUN_14178c940();
  FUN_14237eb90(param_1,uVar3);
  *param_1 = &PTR_FUN_1458ba180;
  puVar1 = param_1 + 0xe8;
  param_1[5] = &PTR_LAB_1458baa68;
  param_1[0x5a] = &PTR_LAB_1458baa98;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  *(undefined4 *)(param_1 + 0xe3) = 0x44800000;
  *(undefined4 *)((longlong)param_1 + 0x714) = 0x44bb8000;
  *(undefined4 *)(param_1 + 0xdf) = 0x44800000;
  *(undefined4 *)((longlong)param_1 + 0x6f4) = 0x447a0000;
  *(undefined1 *)(param_1 + 0xe6) = *(undefined1 *)(param_1 + 0xe2);
  *(undefined4 *)((longlong)param_1 + 0x734) = *(undefined4 *)((longlong)param_1 + 0x714);
  *(undefined4 *)(param_1 + 0xe7) = *(undefined4 *)(param_1 + 0xe3);
  if (puVar1 != param_1 + 0xe4) {
    _Src = (void *)param_1[0xe4];
    iVar2 = *(int *)(param_1 + 0xe5);
    *(int *)(param_1 + 0xe9) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x74c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x74c) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
    }
  }
  *(undefined1 *)(param_1 + 0xea) = 0;
  FUN_1423974f0(param_1,0);
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) & 0xfd;
  *(undefined1 *)((longlong)param_1 + 0x751) = 0;
  return param_1;
}



// FUNCTION 142de35c0 FUN_142de35c0 body=33 status=ok
// SIG undefined FUN_142de35c0(void)

undefined8 * FUN_142de35c0(undefined8 *param_1)

{
  FUN_142c8cfb0();
  *param_1 = &PTR_FUN_145847940;
  return param_1;
}



// FUNCTION 142de35f0 FUN_142de35f0 body=56 status=ok
// SIG undefined FUN_142de35f0(void)

undefined8 * FUN_142de35f0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_1458bafe0;
  FText::FText(param_1 + 6);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 142de3630 FUN_142de3630 body=63 status=ok
// SIG undefined FUN_142de3630(void)

undefined8 * FUN_142de3630(undefined8 *param_1)

{
  FUN_142de3670();
  *param_1 = &PTR_FUN_1458bb630;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  return param_1;
}



// FUNCTION 142de3670 FUN_142de3670 body=1071 status=ok
// SIG undefined FUN_142de3670(void)

undefined8 * FUN_142de3670(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong local_98;
  uint local_90;
  int local_8c;
  longlong local_88;
  ulonglong local_80;
  ulonglong local_78;
  uint local_70;
  int iStack_6c;
  ulonglong local_68;
  uint local_60;
  int local_5c;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_1458bafe0;
  FText::FText(param_1 + 6);
  uVar13 = 0;
  iVar12 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1458bb2a8;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  FText::FText(param_1 + 0x1e);
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0x3f800000;
  FText::FText(param_1 + 0x41);
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 2;
  lVar9 = -1;
  *(undefined1 *)((longlong)param_1 + 0x6a) = 1;
  *(undefined4 *)(param_1 + 0x1d) = 1;
  puVar3 = PTR_DAT_1466ad980;
  local_88 = 0;
  local_80 = 0;
  if ((PTR_DAT_1466ad980 != (undefined *)0x0) && (lVar8 = lVar9, *(short *)PTR_DAT_1466ad980 != 0))
  {
    do {
      lVar8 = lVar8 + 1;
    } while (*(short *)(PTR_DAT_1466ad980 + lVar8 * 2) != 0);
    uVar6 = (int)lVar8 + 1;
    local_80 = (ulonglong)uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    }
    FGenericPlatformString::Memcpy(local_88,puVar3,(longlong)(int)uVar6 * 2);
  }
  uVar5 = FText::FromString(local_58,&local_88);
  FText::operator=(param_1 + 0x1e,uVar5);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  puVar3 = PTR_DAT_1466ad988;
  local_78 = 0;
  local_70 = 0;
  iStack_6c = 0;
  uVar11 = uVar13;
  if ((PTR_DAT_1466ad988 != (undefined *)0x0) &&
     (lVar8 = lVar9, uVar11 = 0, *(short *)PTR_DAT_1466ad988 != 0)) {
    do {
      lVar8 = lVar8 + 1;
    } while (*(short *)(PTR_DAT_1466ad988 + lVar8 * 2) != 0);
    uVar6 = (int)lVar8 + 1;
    iStack_6c = 0;
    iVar12 = iStack_6c;
    iStack_6c = 0;
    local_70 = uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      iVar12 = iStack_6c;
    }
    iStack_6c = iVar12;
    iVar12 = iStack_6c;
    uVar13 = local_78;
    uVar11 = (ulonglong)local_70;
    FGenericPlatformString::Memcpy(local_78,puVar3,(longlong)(int)uVar6 * 2);
  }
  puVar3 = PTR_DAT_1466ad980;
  uVar6 = (uint)uVar11;
  if ((PTR_DAT_1466ad980 != (undefined *)0x0) && (*(short *)PTR_DAT_1466ad980 != 0)) {
    do {
      lVar9 = lVar9 + 1;
    } while (*(short *)(PTR_DAT_1466ad980 + lVar9 * 2) != 0);
    iVar7 = (int)lVar9;
    if ((uVar6 == 0) && (iVar7 != 0)) {
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
    }
    local_98 = uVar13;
    local_90 = uVar6;
    local_8c = iVar12;
    if (iVar12 < (int)(iVar4 + uVar6 + iVar7)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98);
      uVar11 = (ulonglong)local_90;
    }
    uVar10 = (uint)uVar11;
    uVar13 = local_98;
    iVar12 = local_8c;
    uVar6 = uVar10;
    if (iVar7 != 0) {
      local_90 = uVar10 + (uVar10 == 0) + iVar7;
      if (local_8c < (int)local_90) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,uVar11);
      }
      iVar12 = local_8c;
      uVar6 = local_90;
      uVar13 = local_98;
      _Dst = (void *)(local_98 + ((longlong)(int)uVar10 - (ulonglong)(uVar10 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar3,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)_Dst) = 0;
    }
  }
  local_68 = uVar13;
  local_60 = uVar6;
  local_5c = iVar12;
  uVar5 = FText::FromString(local_40,&local_68);
  FText::operator=(param_1 + 0x41,uVar5);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142de3aa0 FUN_142de3aa0 body=33 status=ok
// SIG undefined FUN_142de3aa0(void)

undefined8 * FUN_142de3aa0(undefined8 *param_1)

{
  FUN_142de3670();
  *param_1 = &PTR__scalar_deleting_destructor__1458bb900;
  return param_1;
}



// FUNCTION 142de3ad0 FUN_142de3ad0 body=459 status=ok
// SIG undefined FUN_142de3ad0(void)

undefined8 * FUN_142de3ad0(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_1458b9d10;
  param_1[5] = &PTR_LAB_1458ba150;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x30) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0x447a0000;
  *(undefined1 *)(param_1 + 0x33) = 1;
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | 3;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) | 3;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) | 3;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 3;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0x43b40000;
  FText::FText(param_1 + 0x4c);
  *(undefined1 *)(param_1 + 0x50) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 2;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x20000000;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xfe;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) | 10;
  *(undefined1 *)(param_1 + 0x33) = 1;
  *(undefined1 *)((longlong)param_1 + 0x25c) = 1;
  return param_1;
}



// FUNCTION 142de3ca0 FUN_142de3ca0 body=500 status=ok
// SIG undefined FUN_142de3ca0(void)

undefined8 * FUN_142de3ca0(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR__scalar_deleting_destructor__1458bbbd0;
  param_1[5] = &PTR_LAB_1458bc028;
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
  FUN_142de3010(param_1 + 0x3d);
  FUN_142de3010(param_1 + 0x49);
  FUN_142de3010(param_1 + 0x55);
  FUN_142de3010(param_1 + 0x61);
  param_1[0x6d] = 0;
  *(undefined2 *)(param_1 + 0x6e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0xbf800000;
  param_1[0x6f] = 0;
  *(undefined2 *)(param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 900) = 0xbf800000;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x51c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x524) = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0x10000;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  *(undefined2 *)((longlong)param_1 + 0x52c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x53c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x534) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52e) = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0xb3) = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  *(undefined4 *)(param_1 + 0x39) = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x437a0000;
  *(undefined4 *)(param_1 + 0x3a) = 0x437d0000;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x44bb8000;
  *(undefined4 *)(param_1 + 0x3b) = 0x44bbe000;
  *(undefined1 *)(param_1 + 7) = 5;
  return param_1;
}



// FUNCTION 142de3ea0 ~TArray<FORStreamingAddressBookLevelInfo,TSizedDefaultAllocator<32>_> body=109 status=ok
// SIG undefined ~TArray<FORStreamingAddressBookLevelInfo,TSizedDefaultAllocator<32>_>(void)

void TArray<FORStreamingAddressBookLevelInfo,TSizedDefaultAllocator<32>_>::
     ~TArray<FORStreamingAddressBookLevelInfo,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x10);
    do {
      if (plVar2[6] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 10;
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



// FUNCTION 142de3f10 FUN_142de3f10 body=122 status=ok
// SIG undefined FUN_142de3f10(void)

void FUN_142de3f10(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(int *)(param_1 + 0x20c) != 0) {
    FUN_142d46bd0(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x228) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (*(int *)(param_1 + 0x224) != 0) {
    *(undefined4 *)(param_1 + 0x224) = 0;
    TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Realloc(param_1 + 0x210,0);
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142de3f90 FUN_142de3f90 body=79 status=ok
// SIG undefined FUN_142de3f90(void)

undefined8 * FUN_142de3f90(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FUN_140ce30d0(param_1 + 2,param_2 + 2);
  param_1[10] = param_2[10];
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  return param_1;
}



// FUNCTION 142de3fe0 FUN_142de3fe0 body=34 status=ok
// SIG undefined FUN_142de3fe0(void)

ulonglong FUN_142de3fe0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_2;
  if (((*param_1 == uVar1) && (uVar1 = param_2[1], param_1[1] == uVar1)) &&
     (uVar1 = param_2[2], param_1[2] == uVar1)) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142de4010 FUN_142de4010 body=190 status=ok
// SIG undefined FUN_142de4010(void)

ulonglong FUN_142de4010(char *param_1,char *param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  
  if ((param_1[3] == param_2[3]) && (in_RAX = 0, *param_1 == *param_2)) {
    uVar1 = (byte)param_1[3] - 1;
    in_RAX = (ulonglong)uVar1;
    if (uVar1 < 7) {
      in_RAX = (ulonglong)(int)uVar1;
      switch(uVar1) {
      default:
        uVar2 = FUN_142c48310(param_1 + 4,param_2 + 4);
        return uVar2 ^ 1;
      case 2:
        uVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (param_1 + 0x70,param_2 + 0x70);
        return uVar2 ^ 1;
      case 3:
        goto switchD_142de404e_caseD_3;
      case 4:
        return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x58) >> 8),
                        *(longlong *)(param_1 + 0x58) == *(longlong *)(param_2 + 0x58)) ^ 1;
      case 5:
        return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x68) >> 8),
                        *(longlong *)(param_1 + 0x68) == *(longlong *)(param_2 + 0x68)) ^ 1;
      case 6:
        uVar2 = FUN_142c8d8f0(param_1 + 0x20,param_2 + 0x20);
        return uVar2 ^ 1;
      }
    }
    if (*(float *)(param_2 + 4) == *(float *)(param_1 + 4)) {
switchD_142de404e_caseD_3:
      return in_RAX & 0xffffffffffffff00;
    }
  }
  return in_RAX & 0xffffffffffffff00 ^ 1;
}



// FUNCTION 142de40f0 FUN_142de40f0 body=139 status=ok
// SIG undefined FUN_142de40f0(void)

undefined8 FUN_142de40f0(char *param_1,char *param_2)

{
  char cVar1;
  
  if ((((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
       ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))) &&
      ((param_1[5] == param_2[5] &&
       ((param_1[6] == param_2[6] &&
        (*(longlong *)(param_1 + 0x20) == *(longlong *)(param_2 + 0x20))))))) &&
     ((*(longlong *)(param_1 + 0x28) == *(longlong *)(param_2 + 0x28) &&
      ((*(longlong *)(param_1 + 0x30) == *(longlong *)(param_2 + 0x30) &&
       (*(longlong *)(param_1 + 0x38) == *(longlong *)(param_2 + 0x38))))))) {
    cVar1 = FText::EqualTo(param_1 + 8,param_2 + 8,0);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142de4180 FUN_142de4180 body=1113 status=ok
// SIG undefined FUN_142de4180(void)

void FUN_142de4180(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int local_140;
  int local_13c;
  longlong *local_138;
  uint local_130;
  uint uStack_12c;
  uint *puStack_128;
  undefined4 local_120;
  int iStack_11c;
  uint uStack_118;
  undefined4 uStack_114;
  longlong local_110;
  longlong local_108;
  undefined8 uStack_100;
  uint *local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  longlong local_d8;
  undefined2 local_d0;
  ulonglong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong **local_a8;
  undefined8 *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  uint *puStack_88;
  undefined1 auStack_80 [16];
  undefined1 local_50 [16];
  
  uVar9 = 0;
  local_110 = *param_2;
  lVar4 = local_110 + (longlong)(int)param_2[1] * 0x18;
  local_c0 = lVar4;
  if (local_110 != lVar4) {
    do {
      plVar10 = *(longlong **)(local_110 + 8);
      plVar14 = plVar10 + (longlong)*(int *)(local_110 + 0x10) * 8;
      for (; plVar10 != plVar14; plVar10 = plVar10 + 8) {
        if ((*(byte *)(*plVar10 + 0x48) & 1) == 0) {
          lVar4 = *param_1;
          FUN_142de86a0(lVar4,&local_140);
          uVar8 = uVar9;
          if (local_140 != -1) {
            lVar6 = *(longlong *)(lVar4 + 0x200);
            if (*(longlong *)(lVar4 + 0x200) == 0) {
              lVar6 = lVar4;
            }
            uVar8 = lVar6 + (longlong)local_140 * 0x20;
          }
          local_130 = 0;
          puStack_128 = (uint *)(lVar4 + 0x210);
          uStack_12c = 1;
          iVar5 = *(int *)(lVar4 + 0x220);
          uVar15 = uVar8 + 8;
          if (uVar8 == 0) {
            uVar15 = uVar9;
          }
          iStack_11c = 0;
          uStack_118 = 0;
          if (iVar5 != 0) {
            puVar13 = *(uint **)(lVar4 + 0x218);
            if (*(uint **)(lVar4 + 0x218) == (uint *)0x0) {
              puVar13 = puStack_128;
            }
            uVar3 = *puVar13;
            uVar8 = uVar9;
            uVar12 = uVar9;
            while (uVar3 == 0) {
              iVar2 = (int)uVar8;
              uStack_118 = (int)uVar12 + 0x20;
              uVar12 = (ulonglong)uStack_118;
              local_130 = iVar2 + 1;
              uVar8 = (ulonglong)local_130;
              if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar2)
              goto LAB_142de4307;
              uVar3 = puVar13[(longlong)iVar2 + 1];
            }
            uStack_12c = -uVar3 & uVar3;
            iVar2 = 0x1f;
            if (uStack_12c != 0) {
              for (; uStack_12c >> iVar2 == 0; iVar2 = iVar2 + -1) {
              }
            }
            if (uStack_12c == 0) {
              iVar2 = 0x20;
            }
            else {
              iVar2 = 0x1f - iVar2;
            }
            iStack_11c = (uStack_118 - iVar2) + 0x1f;
            if (iVar5 < iStack_11c) {
LAB_142de4307:
              iStack_11c = iVar5;
            }
          }
          local_120 = 0xffffffff;
          uStack_f0 = CONCAT44(iStack_11c,0xffffffff);
          auStack_80._8_4_ = uStack_118;
          auStack_80._0_8_ = uStack_f0;
          auStack_80._12_4_ = uStack_114;
          uStack_100 = CONCAT44(uStack_12c,local_130);
          local_d0 = 0;
          local_50._8_4_ = (undefined4)lVar4;
          local_50._12_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
          local_e8._8_4_ = local_50._8_4_;
          local_e8._0_8_ = auStack_80._8_8_;
          local_e8._12_4_ = local_50._12_4_;
          local_50._0_8_ = auStack_80._8_8_;
          iVar2 = iStack_11c;
          local_108 = lVar4;
          local_f8 = puStack_128;
          local_d8 = lVar4;
          local_98 = lVar4;
          uStack_90 = uStack_100;
          puStack_88 = puStack_128;
          if (iStack_11c < iVar5) {
            do {
              lVar4 = local_108;
              lVar6 = *(longlong *)(local_108 + 0x200);
              if (*(longlong *)(local_108 + 0x200) == 0) {
                lVar6 = local_108;
              }
              plVar7 = *(longlong **)(lVar6 + (longlong)iVar2 * 0x20);
              cVar1 = (**(code **)(*plVar7 + 0x2b0))(plVar7,*plVar10);
              if (cVar1 != '\0') {
                lVar6 = *(longlong *)(lVar4 + 0x200);
                if (lVar6 == 0) {
                  lVar6 = lVar4;
                }
                uVar15 = (longlong)iVar2 * 0x20 + lVar6 + 8;
                break;
              }
              uStack_f0 = CONCAT44(uStack_f0._4_4_,(uint)uStack_f0 & ~uStack_100._4_4_);
              FUN_1406e9690(&uStack_100);
              iVar2 = uStack_f0._4_4_;
            } while (uStack_f0._4_4_ < (int)local_f8[4]);
            if (((char)local_d0 != '\0') && (local_d0._1_1_ != '\0')) {
              uVar11 = *(int *)(local_d8 + 0x208) - *(int *)(local_d8 + 0x22c);
              uVar3 = uVar11 >> 1;
              iVar5 = 0x1f;
              if (uVar3 != 0) {
                for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
                }
              }
              if (uVar3 == 0) {
                iVar5 = 0x20;
              }
              else {
                iVar5 = 0x1f - iVar5;
              }
              uVar3 = uVar3 - 1;
              iVar2 = 0x1f;
              if (uVar3 != 0) {
                for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
                }
              }
              if (uVar3 == 0) {
                cVar1 = '\0';
              }
              else {
                cVar1 = '\x1f' - (char)iVar2;
              }
              uVar3 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar1 & 0x1f);
              if (uVar3 < 8) {
                uVar3 = 8;
              }
              else if (uVar11 < 4) {
                uVar3 = 8;
              }
              if ((0 < (int)uVar11) &&
                 (((iVar5 = *(int *)(local_d8 + 600), iVar5 == 0 || (iVar5 < (int)uVar3)) ||
                  ((int)uVar3 < iVar5)))) {
                *(uint *)(local_d8 + 600) = uVar3;
                FUN_142df0540(local_d8);
              }
            }
          }
          if (uVar15 == 0) {
            local_138 = (longlong *)*plVar10;
            lVar4 = *param_1;
            local_b8 = 0;
            local_b0 = 0;
            local_a8 = &local_138;
            local_a0 = &local_b8;
            FUN_142de1b50(lVar4,&local_13c,&local_a8,0);
            lVar6 = *(longlong *)(lVar4 + 0x200);
            if (*(longlong *)(lVar4 + 0x200) == 0) {
              lVar6 = lVar4;
            }
            uVar15 = (longlong)local_13c * 0x20 + 8 + lVar6;
          }
          uVar8 = uVar9;
          local_138 = plVar10;
          local_c8 = uVar15;
          if (*(int *)(param_3 + 8) != 0) {
            plVar7 = (longlong *)param_3[6];
            if ((longlong *)param_3[6] == (longlong *)0x0) {
              plVar7 = param_3 + 2;
            }
            if (plVar7 != (longlong *)0x0) {
              uVar8 = (**(code **)(*plVar7 + 8))();
            }
          }
          (*(code *)*param_3)(uVar8,&local_c8,&local_138);
        }
        lVar4 = local_c0;
      }
      local_110 = local_110 + 0x18;
    } while (local_110 != lVar4);
  }
  if (*(int *)(param_3 + 8) != 0) {
    plVar10 = (longlong *)param_3[6];
    if ((longlong *)param_3[6] == (longlong *)0x0) {
      plVar10 = param_3 + 2;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (param_3[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142de4630 FUN_142de4630 body=64 status=ok
// SIG undefined FUN_142de4630(void)

longlong FUN_142de4630(longlong param_1,ulonglong param_2)

{
  thunk_FUN_142478640(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142de4670 FUN_142de4670 body=216 status=ok
// SIG undefined FUN_142de4670(void)

longlong FUN_142de4670(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  TArray<FORStreamingAddressBookLevelInfo,TSizedDefaultAllocator<32>_>::
  ~TArray<FORStreamingAddressBookLevelInfo,TSizedDefaultAllocator<32>_>(param_1 + 0x1b8);
  plVar2 = (longlong *)(param_1 + 0x1c8);
  lVar3 = 3;
  do {
    plVar1 = plVar2 + -4;
    plVar2 = plVar2 + -10;
    lVar3 = lVar3 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    if (*plVar2 != 0) {
      FMemory::Free();
    }
  } while (lVar3 != 0);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c8);
  }
  return param_1;
}



// FUNCTION 142de4750 FUN_142de4750 body=210 status=ok
// SIG undefined FUN_142de4750(void)

undefined8 * FUN_142de4750(undefined8 *param_1,ulonglong param_2)

{
  byte bVar1;
  undefined *puVar2;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x6a);
  *param_1 = &PTR_FUN_1458b9238;
  if ((int)(uint)bVar1 < DAT_146b34b70) {
    puVar2 = DAT_146b34b68;
    if (DAT_146b34b68 == (undefined *)0x0) {
      puVar2 = &DAT_146b34ae8;
    }
    if (*(undefined8 **)(puVar2 + (ulonglong)bVar1 * 8) == param_1) {
      *(undefined8 *)(puVar2 + (ulonglong)bVar1 * 8) = 0;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x6a) = DAT_146690f0c;
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 142de4830 FUN_142de4830 body=81 status=ok
// SIG undefined FUN_142de4830(void)

longlong FUN_142de4830(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 400);
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440732c8;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 142de4890 FUN_142de4890 body=141 status=ok
// SIG undefined FUN_142de4890(void)

longlong FUN_142de4890(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x768) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x758) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x740) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x720) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x700) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x780);
  }
  return param_1;
}



// FUNCTION 142de4920 FUN_142de4920 body=52 status=ok
// SIG undefined FUN_142de4920(void)

undefined8 FUN_142de4920(undefined8 param_1,ulonglong param_2)

{
  FUN_1412095f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142de4960 FUN_142de4960 body=90 status=ok
// SIG undefined FUN_142de4960(void)

longlong FUN_142de4960(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  FUN_141209660(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x248);
  }
  return param_1;
}



// FUNCTION 142de49c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessDiaphragmDOFBuildBokehLUTCS::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_141209660();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 142de4a00 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UUGXPBarUW::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141209660();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x228);
  }
  return param_1;
}



// FUNCTION 142de4a40 FUN_142de4a40 body=380 status=ok
// SIG undefined FUN_142de4a40(void)

longlong FUN_142de4a40(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3a0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x388);
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x368) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x268);
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
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3b0);
  }
  return param_1;
}



// FUNCTION 142de4bc0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UPaperSpriteComponent::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140e40de0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5a0);
  }
  return param_1;
}



// FUNCTION 142de4c00 FUN_142de4c00 body=590 status=ok
// SIG undefined FUN_142de4c00(void)

ulonglong FUN_142de4c00(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  bool bVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  int local_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  plVar10 = *(longlong **)(param_1 + 0x1a0);
  plVar2 = plVar10 + *(int *)(param_1 + 0x1a8);
  if (plVar10 != plVar2) {
    plVar5 = (longlong *)*param_2;
    do {
      if ((longlong *)*plVar10 == plVar5) {
LAB_142de4e36:
        return CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar2);
  }
  plVar2 = (longlong *)(param_1 + 0x2b0);
  uVar3 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  uStack_64 = 1;
  local_68 = 0;
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar9 = *puVar12;
    uStack_50 = 0;
    local_68 = 0;
    while (uVar9 == 0) {
      lVar8 = (longlong)local_68;
      uStack_50 = uStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar4 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar4) goto LAB_142de4d09;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_64 = -uVar9 & uVar9;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_58._4_4_ = (uStack_50 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)local_58._4_4_) {
LAB_142de4d09:
      local_58._4_4_ = uVar3;
    }
  }
  uVar9 = *(uint *)(param_1 + 0x2d8);
  uStack_38 = CONCAT44(uStack_64,local_68);
  uStack_28 = CONCAT44(local_58._4_4_,0xffffffff);
  local_48 = CONCAT44(uStack_4c,uStack_50);
  uVar11 = uVar9 & 0xffffffe0;
  iStack_60 = local_68;
  uStack_5c = uStack_64;
  uStack_50 = 0xffffffff;
  uStack_4c = local_58._4_4_;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  local_58 = puVar1;
  if (uVar9 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar7 = puVar12[(int)uVar9 >> 5] & -1 << ((byte)uVar9 & 0x1f);
    iVar6 = (int)uVar9 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_142de4db7;
      uVar7 = puVar12[(longlong)iVar6 + 1];
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
    uVar9 = (uVar11 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uVar9) {
LAB_142de4db7:
      uVar9 = uVar3;
    }
  }
  do {
    if ((uStack_4c == uVar9) && (local_58 == puVar1)) {
      return (ulonglong)plVar2 & 0xffffffffffffff00;
    }
    lVar8 = *(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
    if (lVar8 != 0) {
      plVar5 = *(longlong **)(lVar8 + 0x88);
      plVar10 = plVar5 + *(int *)(lVar8 + 0x90);
      if (plVar5 != plVar10) {
        do {
          if (*plVar5 == *param_2) goto LAB_142de4e36;
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar10);
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  } while( true );
}



// FUNCTION 142de4e50 FUN_142de4e50 body=46 status=ok
// SIG undefined FUN_142de4e50(void)

void FUN_142de4e50(longlong param_1,longlong param_2)

{
  longlong local_res10 [3];
  
  if ((param_2 != 0) && ((*(uint *)(param_1 + 8) >> 4 & 1) == 0)) {
    local_res10[0] = param_2;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x768,local_res10);
  }
  return;
}



// FUNCTION 142de4e80 FUN_142de4e80 body=500 status=ok
// SIG undefined FUN_142de4e80(void)

void FUN_142de4e80(longlong param_1,longlong *param_2,float param_3,undefined1 param_4)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  float fVar11;
  
  if ((*(byte *)(param_2 + 9) & 1) == 0) {
    plVar9 = *(longlong **)(param_1 + 0x88);
    if (*(longlong **)(param_1 + 0x88) == (longlong *)0x0) {
      plVar9 = (longlong *)(param_1 + 8);
    }
    plVar3 = plVar9 + (longlong)*(int *)(param_1 + 0x90) * 2;
    for (; plVar9 != plVar3; plVar9 = plVar9 + 2) {
      if ((longlong *)*plVar9 == param_2) {
        fVar11 = *(float *)(plVar9 + 1);
        if (*(float *)(plVar9 + 1) <= param_3) {
          fVar11 = param_3;
        }
        *(float *)(plVar9 + 1) = fVar11;
        return;
      }
    }
  }
  cVar2 = (**(code **)(*param_2 + 0x2b8))(param_2);
  if ((cVar2 != '\0') && (iVar6 = *(int *)(param_1 + 0x90) + -1, -1 < iVar6)) {
    lVar8 = param_1 + 8;
    lVar7 = (longlong)iVar6 << 4;
    lVar10 = lVar7;
    do {
      lVar4 = *(longlong *)(param_1 + 0x88);
      if (*(longlong *)(param_1 + 0x88) == 0) {
        lVar4 = lVar8;
      }
      cVar2 = (**(code **)(*param_2 + 0x2c0))(param_2,*(undefined8 *)(lVar4 + lVar7));
      if (cVar2 != '\0') {
        iVar1 = *(int *)(param_1 + 0x90);
        iVar5 = (iVar1 - iVar6) + -1;
        if (0 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          lVar4 = *(longlong *)(param_1 + 0x88);
          if (*(longlong *)(param_1 + 0x88) == 0) {
            lVar4 = lVar8;
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar4 + lVar10),(void *)((longlong)(iVar1 - iVar5) * 0x10 + lVar4),
                     (longlong)iVar5 << 4);
          iVar1 = *(int *)(param_1 + 0x90);
        }
        *(int *)(param_1 + 0x90) = iVar1 + -1;
        TArray<FObjectInitializer::FSubobjectsToInit::FSubobjectInit,TInlineAllocator<8,FDefaultAllocator>_>
        ::ResizeShrink(lVar8);
      }
      lVar10 = lVar10 + -0x10;
      lVar7 = lVar7 + -0x10;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  iVar6 = *(int *)(param_1 + 0x90);
  lVar8 = (longlong)iVar6;
  *(int *)(param_1 + 0x90) = iVar6 + 1;
  if (*(int *)(param_1 + 0x94) < iVar6 + 1) {
    TArray<FObjectInitializer::FSubobjectsToInit::FSubobjectInit,TInlineAllocator<8,FDefaultAllocator>_>
    ::ResizeGrow(param_1 + 8,iVar6);
  }
  lVar10 = *(longlong *)(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x88) == 0) {
    lVar10 = param_1 + 8;
  }
  *(float *)(lVar10 + 8 + lVar8 * 0x10) = param_3;
  *(longlong **)(lVar10 + lVar8 * 0x10) = param_2;
  *(undefined1 *)(lVar10 + 0xc + lVar8 * 0x10) = param_4;
  return;
}



// FUNCTION 142de5080 FUN_142de5080 body=250 status=ok
// SIG undefined FUN_142de5080(void)

void FUN_142de5080(longlong param_1,longlong param_2,float param_3)

{
  longlong *plVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  longlong local_res10;
  int local_res18 [2];
  longlong *local_28;
  char *local_20;
  
  param_3 = param_3 + *(float *)(param_2 + 0x4c);
  if (0.0 < param_3) {
    plVar1 = (longlong *)(param_1 + 0x288);
    local_res10 = param_2;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(plVar1,local_res18);
    puVar5 = (undefined1 *)0x0;
    if (local_res18[0] != -1) {
      puVar5 = (undefined1 *)(*plVar1 + (longlong)local_res18[0] * 0x18);
    }
    puVar3 = puVar5 + 8;
    if (puVar5 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    if (puVar3 == (undefined1 *)0x0) {
      local_28 = &local_res10;
      pcVar2 = (char *)(param_1 + 0x280);
      local_20 = pcVar2;
      FUN_140b48570(plVar1,local_res18,&local_28,0);
      uVar6 = *(undefined1 *)(*plVar1 + 8 + (longlong)local_res18[0] * 0x18);
      *pcVar2 = *pcVar2 + '\x01';
      param_2 = local_res10;
    }
    else {
      uVar6 = *puVar3;
    }
    if (*(char *)(param_1 + 8) != '\0') {
      uVar4 = FUN_142dec210(param_1,param_2 + 0x50);
      FUN_142de4e80(uVar4,local_res10,param_3,uVar6);
    }
  }
  return;
}



// FUNCTION 142de5180 FUN_142de5180 body=518 status=ok
// SIG undefined FUN_142de5180(void)

int * FUN_142de5180(longlong param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x22c) == 0) {
    iVar8 = *(int *)(param_1 + 0x208);
    *(int *)(param_1 + 0x208) = iVar8 + 1;
    if (*(int *)(param_1 + 0x20c) < iVar8 + 1) {
      TArray<FReplayViewer,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_1,iVar8);
    }
    iVar2 = *(int *)(param_1 + 0x220);
    iVar4 = iVar2 + 1;
    *(int *)(param_1 + 0x220) = iVar4;
    if (*(int *)(param_1 + 0x224) <= iVar2) {
      uVar3 = (int)(iVar2 + 0x20 + (iVar2 + 0x20 >> 0x1f & 0x1fU)) >> 5;
      iVar5 = 1;
      if (1 < uVar3) {
        iVar4 = *(int *)(param_1 + 0x224) + 0x1f;
        lVar7 = 4;
        if (((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5 != 0) || (4 < uVar3)) {
          lVar7 = (longlong)(int)uVar3 + 0x10 + ((ulonglong)((longlong)(int)uVar3 * 3) >> 3);
        }
        uVar6 = FMemory::QuantizeSize(lVar7 * 4,0);
        iVar4 = *(int *)(param_1 + 0x220);
        iVar5 = (int)(uVar6 >> 2);
        if (iVar5 < (int)uVar3) {
          iVar5 = 0x7fffffff;
        }
      }
      *(int *)(param_1 + 0x224) = iVar5 << 5;
      TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Realloc(param_1 + 0x210,iVar4 + -1);
    }
    lVar7 = *(longlong *)(param_1 + 0x218);
    if (*(longlong *)(param_1 + 0x218) == 0) {
      lVar7 = param_1 + 0x210;
    }
    puVar1 = (uint *)(lVar7 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)iVar2 & 0x1f));
  }
  else {
    iVar8 = *(int *)(param_1 + 0x228);
    lVar7 = *(longlong *)(param_1 + 0x200);
    if (*(longlong *)(param_1 + 0x200) == 0) {
      lVar7 = param_1;
    }
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar8 * 0x20);
    iVar4 = *(int *)(param_1 + 0x22c) + -1;
    *(int *)(param_1 + 0x228) = iVar2;
    *(int *)(param_1 + 0x22c) = iVar4;
    if (iVar4 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar7 = param_1;
      }
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x20) = 0xffffffff;
    }
  }
  *param_2 = iVar8;
  lVar7 = *(longlong *)(param_1 + 0x218);
  if (*(longlong *)(param_1 + 0x218) == 0) {
    lVar7 = param_1 + 0x210;
  }
  puVar1 = (uint *)(lVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  lVar7 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar7 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar7 + (longlong)iVar8 * 0x20;
  return param_2;
}



// FUNCTION 142de5390 FUN_142de5390 body=970 status=ok
// SIG undefined FUN_142de5390(void)

void FUN_142de5390(longlong param_1,longlong *param_2,float *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  void *_Dst;
  byte bVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  longlong lVar13;
  undefined2 *puVar14;
  float fVar15;
  float fVar16;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar17;
  undefined2 *local_68;
  int local_60;
  longlong local_58 [2];
  longlong local_48 [6];
  
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  fVar16 = 0.0;
  fVar15 = 0.0;
  plVar6 = (longlong *)FUN_142dec180(param_5,param_4);
  if (*(char *)(param_5 + 1) == '\0') {
    if (plVar6 != (longlong *)0x0) {
      bVar1 = *(byte *)((longlong)plVar6 + 0x15);
      if ((int)(uint)bVar1 < (int)plVar6[1]) {
        fVar15 = *(float *)(*plVar6 + (ulonglong)bVar1 * 4);
        *(byte *)((longlong)plVar6 + 0x15) = bVar1 + 1;
      }
    }
  }
  else {
    fVar15 = (float)(**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x2c8))
                              (*(longlong **)(param_1 + 0x1f0),param_5);
    if (plVar6 != (longlong *)0x0) {
      iVar10 = (int)plVar6[1];
      *(int *)(plVar6 + 1) = iVar10 + 1;
      if (*(int *)((longlong)plVar6 + 0xc) < iVar10 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar6,iVar10);
      }
      *(float *)(*plVar6 + (longlong)iVar10 * 4) = fVar15;
    }
  }
  cVar3 = *(char *)(param_1 + 0x1f8);
  puVar14 = (undefined2 *)&DAT_1458b452c;
  if (cVar3 != '\x04') {
    if (cVar3 == '\0') {
      puVar14 = (undefined2 *)&DAT_1458b454c;
      fVar16 = fVar15 * *param_3;
    }
    else {
      if (cVar3 == '\x01') {
        puVar14 = (undefined2 *)&DAT_1458b4564;
        if (ABS(fVar15) <= 1e-08) {
          fVar16 = *param_3 / fVar15;
        }
        *param_3 = fVar16;
        goto LAB_142de54d0;
      }
      if (cVar3 == '\x02') {
        puVar14 = (undefined2 *)&DAT_1458b458c;
        fVar16 = fVar15 + *param_3;
      }
      else {
        if (cVar3 != '\x03') {
          puVar14 = &DAT_1458b45f4;
          goto LAB_142de54d0;
        }
        puVar14 = (undefined2 *)&DAT_1458b45bc;
        fVar16 = *param_3 - fVar15;
      }
    }
    *param_3 = fVar16;
  }
LAB_142de54d0:
  FUN_142de8a20(*(undefined8 *)(param_1 + 0x1f0),&local_68,fVar15,*param_5);
  lVar13 = *(longlong *)(param_1 + 0x1f0);
  if (*(char *)(param_5 + 1) == '\0') {
    lVar7 = FUN_142dec180(param_5,param_4);
    if ((lVar7 == 0) || (*(int *)(lVar7 + 8) <= (int)(uint)*(byte *)(lVar7 + 0x15)))
    goto LAB_142de5554;
  }
  else {
    if ((*(longlong *)(lVar13 + 0x1f0) == 0) ||
       ((*(longlong *)(lVar13 + 0x200) != 0 &&
        (cVar3 = FUN_142c48f60(*(longlong *)(lVar13 + 0x200),*param_5,0), cVar3 == '\0'))))
    goto LAB_142de5554;
    lVar13 = *(longlong *)(param_1 + 0x1f0);
  }
  FUN_142de5390(lVar13,&local_68,param_3,param_4,param_5);
  uVar17 = (undefined4)((ulonglong)param_5 >> 0x20);
LAB_142de5554:
  if ((*(uint *)(param_1 + 0x6c) & 0x100) == 0) {
    lVar13 = -1;
    do {
      lVar13 = lVar13 + 1;
    } while (puVar14[lVar13] != 0);
    iVar10 = (int)lVar13;
    iVar11 = 0;
    if (iVar10 != 0) {
      iVar4 = (int)param_2[1];
      iVar5 = (uint)(iVar4 == 0) + iVar10 + iVar4;
      *(int *)(param_2 + 1) = iVar5;
      if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
      }
      pvVar2 = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,puVar14,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)pvVar2 + (longlong)iVar10 * 2) = 0;
    }
    puVar14 = local_68;
    if (local_60 != 0) {
      iVar11 = local_60 + -1;
    }
    if (iVar11 != 0) {
      iVar10 = (int)param_2[1];
      iVar4 = (uint)(iVar10 == 0) + iVar11 + iVar10;
      *(int *)(param_2 + 1) = iVar4;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
      }
      pvVar2 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,puVar14,(longlong)iVar11 * 2);
      *(undefined2 *)((longlong)pvVar2 + (longlong)iVar11 * 2) = 0;
    }
  }
  else {
    puVar12 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar12 = local_68;
    }
    uVar8 = FText::ToString(param_1 + 0x208);
    uVar8 = FString::Replace(uVar8,local_48,PTR_DAT_1466ad988,puVar14,CONCAT44(uVar17,1));
    puVar9 = (undefined8 *)FString::Replace(uVar8,local_58,PTR_DAT_1466ad980,puVar12,1);
    pvVar2 = (void *)*puVar9;
    iVar10 = *(int *)(puVar9 + 1) + -1;
    if (*(int *)(puVar9 + 1) == 0) {
      iVar10 = 0;
    }
    if (iVar10 != 0) {
      iVar11 = (int)param_2[1];
      iVar4 = (uint)(iVar11 == 0) + iVar10 + iVar11;
      *(int *)(param_2 + 1) = iVar4;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar11);
      }
      _Dst = (void *)(*param_2 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,pvVar2,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)_Dst + (longlong)iVar10 * 2) = 0;
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142de5760 FUN_142de5760 body=483 status=ok
// SIG undefined FUN_142de5760(void)

void FUN_142de5760(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  FUN_142330a70();
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 == 3) {
    (**(code **)(*param_1 + 0x260))(param_1);
    lVar6 = param_1[0x30];
    param_1[0x31] = lVar6;
  }
  else {
    lVar6 = param_1[0x30];
  }
  FUN_142df2e20(param_1,lVar6);
  if ((((*(char *)((longlong)param_1 + 0x1aa) != '\0') &&
       (iVar1 = FUN_14233f450(param_1), iVar1 == 3)) &&
      (plVar4 = (longlong *)param_1[0x23], plVar4 != (longlong *)0x0)) &&
     ((plVar2 = (longlong *)FUN_140a63ba0(plVar4), plVar2 != (longlong *)0x0 && (plVar4 != plVar2)))
     ) {
    uVar3 = UCircularThrobber::GetPrivateStaticClass();
    plVar4 = (longlong *)(**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    if (((plVar4 != (longlong *)0x0) &&
        ((iVar1 = FUN_14233f450(param_1), iVar1 == 3 && (plVar4 != param_1)))) &&
       (plVar4[0x36] == 0)) {
      if (param_1[0x36] != 0) {
        FUN_140483870(param_1[0x36] + 400,param_1);
      }
      param_1[0x36] = (longlong)plVar4;
      plVar2 = plVar4 + 0x32;
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_144012f30;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        *(undefined4 *)(plVar5 + 2) = 0x42ded8a0;
        *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
        *(undefined4 *)(plVar5 + 3) = 0;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_c;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar6;
        *plVar5 = (longlong)&PTR_FUN_144012f78;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
        (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
        iVar1 = (int)plVar4[0x33];
        *(int *)(plVar4 + 0x33) = iVar1 + 1;
        if (*(int *)((longlong)plVar4 + 0x19c) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
        }
        puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar2);
        *puVar7 = plVar5;
        *(undefined4 *)(puVar7 + 1) = 3;
      }
      FUN_142df2e20(param_1,*(undefined8 *)(param_1[0x36] + 0x180));
    }
  }
  return;
}



// FUNCTION 142de5950 FUN_142de5950 body=27 status=ok
// SIG undefined FUN_142de5950(void)

void FUN_142de5950(longlong param_1)

{
  FUN_142385110();
  *(undefined1 *)(param_1 + 0x753) = 0;
  return;
}



// FUNCTION 142de5970 FUN_142de5970 body=27 status=ok
// SIG undefined FUN_142de5970(void)

void FUN_142de5970(undefined8 param_1)

{
  FUN_142330a70();
  FUN_142df1be0(param_1);
  return;
}



// FUNCTION 142de5990 FUN_142de5990 body=67 status=ok
// SIG undefined FUN_142de5990(void)

int FUN_142de5990(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  if (((param_3 != 0) && (*(char *)(param_3 + 0x52) != '\0')) && (param_2 != 0)) {
    uVar1 = *(undefined8 *)(param_2 + 0x118);
    if (*(char *)(param_3 + 0x60) == '\x01') {
      uVar1 = *(undefined8 *)(param_1 + 0x1e0);
    }
    fVar2 = (float)FUN_142c98860(param_3 + 0x68,uVar1);
    return (int)fVar2;
  }
  return 0;
}



// FUNCTION 142de59f0 FUN_142de59f0 body=74 status=ok
// SIG undefined FUN_142de59f0(void)

void FUN_142de59f0(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 local_res8 [32];
  undefined1 local_28 [32];
  
  if (*param_2 == param_1[1]) {
    uVar1 = FUN_142c98860(param_2 + 2,*(undefined8 *)*param_1);
    FUN_142470da0(&DAT_146b34bd0,local_28,(char)param_2[1],uVar1,local_res8);
  }
  return;
}



// FUNCTION 142de5a50 FUN_142de5a50 body=1008 status=ok
// SIG undefined FUN_142de5a50(void)

undefined8 FUN_142de5a50(longlong *param_1,undefined8 param_2,longlong param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 local_b8;
  longlong local_b0;
  undefined2 local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  local_88 = 0;
  local_84 = 0;
  local_82 = 0;
  FText::FText(local_80);
  *param_4 = (undefined1)local_88;
  param_4[1] = local_88._1_1_;
  param_4[2] = local_88._2_1_;
  param_4[3] = local_88._3_1_;
  param_4[4] = (undefined1)local_84;
  param_4[5] = local_84._1_1_;
  param_4[6] = local_82;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FText::operator=(param_4 + 8,local_80);
  *(undefined8 *)(param_4 + 0x20) = local_68;
  *(undefined8 *)(param_4 + 0x28) = uStack_60;
  *(undefined8 *)(param_4 + 0x30) = local_58;
  *(undefined8 *)(param_4 + 0x38) = uStack_50;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  plVar8 = (longlong *)param_1[0x48];
  plVar1 = plVar8 + (int)param_1[0x49];
  plVar9 = plVar8;
  while( true ) {
    if (plVar9 == plVar1) goto LAB_142de5b73;
    if (*plVar9 != 0) break;
    plVar9 = plVar9 + 1;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (plVar8 == plVar1) {
    return 0;
  }
  while (*(longlong *)(param_3 + 0x18) != *plVar8) {
    plVar8 = plVar8 + 1;
    if (plVar8 == plVar1) {
      return 0;
    }
  }
LAB_142de5b73:
  cVar5 = (**(code **)(*param_1 + 0x438))(param_1,param_2,0);
  if (cVar5 == '\0') {
    return 0;
  }
  uVar7 = FUN_142ded610(param_1,0,0,param_2);
  *(undefined8 *)(param_4 + 0x20) = uVar7;
  uVar7 = FUN_142ded610(param_1,0,1,param_2);
  *(undefined8 *)(param_4 + 0x28) = uVar7;
  uVar7 = FUN_142ded610(param_1,1,0,param_2);
  *(undefined8 *)(param_4 + 0x30) = uVar7;
  uVar7 = FUN_142ded610(param_1,1,1,param_2);
  *(undefined8 *)(param_4 + 0x38) = uVar7;
  local_a8 = 0;
  local_b8 = param_2;
  local_b0 = param_3;
  FText::FText(local_a0);
  if (*(longlong *)(param_4 + 0x20) != 0) {
    uVar6 = (**(code **)(*param_1 + 0x428))(param_1,&local_b8,local_a0);
    param_4[2] = uVar6;
    cVar5 = FText::IsEmpty(param_4 + 8);
    if ((cVar5 != '\0') && (cVar5 = FText::IsEmpty(local_a0), cVar5 == '\0')) {
      FText::operator=(param_4 + 8,local_a0);
    }
  }
  if (*(longlong *)(param_4 + 0x28) != 0) {
    local_a8 = 0x100;
    uVar6 = (**(code **)(*param_1 + 0x428))(param_1,&local_b8,local_a0);
    param_4[3] = uVar6;
    cVar5 = FText::IsEmpty(param_4 + 8);
    if ((cVar5 != '\0') && (cVar5 = FText::IsEmpty(local_a0), cVar5 == '\0')) {
      FText::operator=(param_4 + 8,local_a0);
    }
  }
  if (*(longlong *)(param_4 + 0x30) != 0) {
    local_a8 = 1;
    uVar6 = (**(code **)(*param_1 + 0x428))(param_1,&local_b8,local_a0);
    param_4[4] = uVar6;
    cVar5 = FText::IsEmpty(param_4 + 8);
    if ((cVar5 != '\0') && (cVar5 = FText::IsEmpty(local_a0), cVar5 == '\0')) {
      FText::operator=(param_4 + 8,local_a0);
    }
  }
  if (*(longlong *)(param_4 + 0x38) != 0) {
    local_a8 = 0x101;
    uVar6 = (**(code **)(*param_1 + 0x428))(param_1,&local_b8,local_a0);
    param_4[5] = uVar6;
    cVar5 = FText::IsEmpty(param_4 + 8);
    if ((cVar5 != '\0') && (cVar5 = FText::IsEmpty(local_a0), cVar5 == '\0')) {
      FText::operator=(param_4 + 8,local_a0);
    }
  }
  if ((((param_4[2] == '\0') && (param_4[3] == '\0')) && (param_4[4] == '\0')) &&
     (param_4[5] == '\0')) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  *param_4 = uVar6;
  if (((*(longlong *)(param_4 + 0x20) == 0) && (*(longlong *)(param_4 + 0x28) == 0)) &&
     ((*(longlong *)(param_4 + 0x30) == 0 && (*(longlong *)(param_4 + 0x38) == 0)))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  param_4[6] = uVar6;
  cVar5 = FText::IsEmpty(param_4 + 8);
  if (cVar5 != '\0') {
    uVar7 = FUN_142e812a0(param_1,local_48);
    FText::operator=(param_4 + 8,uVar7);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_98 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar2 = (int *)((longlong)local_98 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  return 1;
}



// FUNCTION 142de5e40 UpdateStateFrom body=19 status=ok
// SIG undefined UpdateStateFrom(void)

bool FRootMotionSource_ConstantForce::UpdateStateFrom(void)

{
  char cVar1;
  
  cVar1 = FUN_142e81100();
  return cVar1 != '\0';
}



// FUNCTION 142de5e60 FUN_142de5e60 body=153 status=ok
// SIG undefined FUN_142de5e60(void)

undefined1 FUN_142de5e60(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_1407c3030(param_1 + 0x3a8);
  if ((cVar2 == '\0') && (cVar2 = FUN_1407c3030(param_1 + 0x440), cVar2 == '\0')) {
    param_1 = FUN_142dead50(param_1 + 0x2a8,param_1 + 0x248);
  }
  else {
    param_1 = param_1 + 0x308;
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    if (param_2 == '\0') {
      if (*(longlong *)(param_1 + 0x30) != 0) {
        return 1;
      }
      lVar1 = *(longlong *)(param_1 + 0x38);
    }
    else {
      if (param_2 != '\x01') {
        return 0;
      }
      if (*(longlong *)(param_1 + 0x40) != 0) {
        return 1;
      }
      lVar1 = *(longlong *)(param_1 + 0x48);
    }
    if (lVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142de5f00 FUN_142de5f00 body=149 status=ok
// SIG undefined FUN_142de5f00(void)

undefined1 FUN_142de5f00(longlong param_1,char param_2)

{
  char cVar1;
  
  cVar1 = FUN_1407c3030(param_1 + 0x3a8);
  if ((cVar1 == '\0') && (cVar1 = FUN_1407c3030(param_1 + 0x440), cVar1 == '\0')) {
    param_1 = FUN_142dead50(param_1 + 0x2a8,param_1 + 0x248);
  }
  else {
    param_1 = param_1 + 0x308;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    if (param_2 == '\0') {
      if (*(char *)(param_1 + 0x12) != '\0') {
        return 1;
      }
      cVar1 = *(char *)(param_1 + 0x13);
    }
    else {
      if (param_2 != '\x01') {
        return 0;
      }
      if (*(char *)(param_1 + 0x14) != '\0') {
        return 1;
      }
      cVar1 = *(char *)(param_1 + 0x15);
    }
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142de5fa0 FUN_142de5fa0 body=57 status=ok
// SIG undefined FUN_142de5fa0(void)

undefined1 FUN_142de5fa0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1407c3030(param_1 + 0x3a8);
  if (cVar1 == '\0') {
    cVar1 = FUN_1407c3030(param_1 + 0x440);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142de5fe0 FUN_142de5fe0 body=339 status=ok
// SIG undefined FUN_142de5fe0(void)

void FUN_142de5fe0(longlong *param_1)

{
  longlong lVar1;
  char *pcVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  int iVar5;
  longlong lVar6;
  
  if ((((*(byte *)(param_1 + 1) & 6) == 6) && ((*(byte *)(param_1 + 1) & 9) == 0)) &&
     ((lVar1 = (**(code **)(*param_1 + 0x18))(param_1), lVar1 == 0 ||
      ((*(char *)(lVar1 + 0x128) == '\x03' ||
       (pcVar2 = (char *)(**(code **)(*param_1 + 0x28))(param_1), *pcVar2 != '\0')))))) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 8;
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
    if ((plVar3 != (longlong *)0x0) && ((char)plVar3[0x25] == '\x03')) {
      (**(code **)(*plVar3 + 0x600))(plVar3);
      puVar4 = (undefined1 *)(**(code **)(*param_1 + 0x28))(param_1);
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
      lVar6 = *plVar3;
      lVar1 = lVar6 + (longlong)(int)plVar3[1] * 0x28;
      for (; lVar6 != lVar1; lVar6 = lVar6 + 0x28) {
        FUN_142df45a0(*(undefined1 *)(lVar6 + 8),*(undefined1 *)(lVar6 + 0x21),
                      *(undefined1 *)(lVar6 + 0x20),puVar4 + 4);
      }
      *puVar4 = 1;
    }
    if (((((*(byte *)(param_1 + 1) & 8) != 0) &&
         (plVar3 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1), 0 < (int)plVar3[1])) &&
        (lVar1 = (**(code **)(*param_1 + 0x18))(param_1), lVar1 != 0)) &&
       (iVar5 = 0, 0 < (int)plVar3[1])) {
      lVar6 = 0;
      do {
        FUN_142df00b0(param_1,lVar1,*(undefined8 *)(lVar6 + *plVar3),
                      *(undefined1 *)(lVar6 + 8 + *plVar3),1);
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 0x28;
      } while (iVar5 < (int)plVar3[1]);
    }
  }
  return;
}



// FUNCTION 142de6140 FUN_142de6140 body=540 status=ok
// SIG undefined FUN_142de6140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_142de6140(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  byte *pbVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte *pbVar10;
  undefined1 auStack_148 [32];
  longlong local_128 [16];
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98 [8];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  pbVar7 = (byte *)*param_3;
  pbVar10 = pbVar7 + (longlong)*(int *)(param_3 + 1) * 0x90;
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  for (; pbVar7 != pbVar10; pbVar7 = pbVar7 + 0x90) {
    lVar3 = FWeakObjectPtr::Get(pbVar7 + 0x74);
    uVar6 = local_a0;
    if (lVar3 != 0) {
      lVar8 = (longlong)(int)local_a0;
      plVar4 = local_128;
      if (local_a8 != (longlong *)0x0) {
        plVar4 = local_a8;
      }
      plVar1 = plVar4 + lVar8;
      for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
        if (*plVar4 == lVar3) goto LAB_142de62cb;
      }
      iVar2 = (int)local_a0 + 1;
      local_a0 = CONCAT44(local_a0._4_4_,iVar2);
      if (local_a0._4_4_ < iVar2) {
        TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow
                  (local_128,uVar6 & 0xffffffff);
      }
      plVar4 = local_128;
      if (local_a8 != (longlong *)0x0) {
        plVar4 = local_a8;
      }
      plVar4[lVar8] = lVar3;
      lVar3 = FWeakObjectPtr::Get(pbVar7 + 0x6c);
      if (lVar3 != 0) {
        FUN_142de1e10(lVar3,local_98,0);
        puVar5 = local_98;
        if (local_58 != (undefined8 *)0x0) {
          puVar5 = local_58;
        }
        uVar6 = (longlong)(int)local_50 & 0x1fffffffffffffff;
        if (puVar5 + (int)local_50 < puVar5) {
          uVar6 = 0;
        }
        uVar9 = 0;
        if (uVar6 != 0) {
          do {
            FUN_142de7c00(param_1,param_2,*puVar5,pbVar7);
            puVar5 = puVar5 + 1;
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar6);
        }
      }
      if ((*pbVar7 & 1) != 0) break;
    }
LAB_142de62cb:
  }
  lVar3 = *param_2;
  if (local_58 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free(local_a8);
  }
  return lVar3 != 0;
}



// FUNCTION 142de6360 FUN_142de6360 body=41 status=ok
// SIG undefined FUN_142de6360(void)

void FUN_142de6360(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 local_18;
  undefined1 local_10;
  undefined1 local_f;
  
  local_18 = param_2;
  local_10 = param_3;
  local_f = param_4;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1b8,&local_18);
  return;
}



// FUNCTION 142de6390 FUN_142de6390 body=964 status=ok
// SIG undefined FUN_142de6390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_142de6390(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_348 [32];
  undefined8 local_328;
  int iStack_320;
  uint uStack_31c;
  undefined8 local_318;
  uint uStack_310;
  int iStack_30c;
  undefined1 local_308 [16];
  undefined1 *local_2f8;
  undefined2 local_2f0;
  undefined1 *local_2e8 [2];
  undefined1 *local_2d8;
  int iStack_2d0;
  uint uStack_2cc;
  uint *puStack_2c8;
  undefined1 auStack_2c0 [16];
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined4 local_298;
  undefined1 local_288 [512];
  undefined8 local_88;
  undefined8 local_80;
  uint local_78 [2];
  uint *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  local_60 = 0xffffffff;
  local_88 = 0;
  local_80 = 0;
  local_2e8[0] = local_288;
  local_70 = (uint *)0x0;
  local_68 = 0;
  local_5c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2a8 = 0;
  local_298 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,&puStack_2c8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_143f3f130;
  }
  local_2d8 = &LAB_142de5a40;
  FUN_142de4180(local_2e8,param_1,&local_2d8);
  local_2a8 = 0;
  local_298 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,&puStack_2c8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_143f3f130;
  }
  local_2d8 = &LAB_142de59e0;
  FUN_142de4180(local_2e8,param_2,&local_2d8);
  puStack_2c8 = local_78;
  local_328._0_4_ = 0;
  local_328._4_4_ = 1;
  local_318._4_4_ = 0;
  uStack_310 = 0;
  iVar9 = 0x20;
  if ((int)local_68 != 0) {
    puVar12 = local_78;
    if (local_70 != (uint *)0x0) {
      puVar12 = local_70;
    }
    uVar5 = *puVar12;
    while (uVar5 == 0) {
      uStack_310 = uStack_310 + 0x20;
      if ((int)((int)local_68 + -1 + ((int)local_68 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_328) {
        local_318._4_4_ = (int)local_68;
        local_328._0_4_ = (int)local_328 + 1;
        goto LAB_142de6556;
      }
      uVar5 = puVar12[(longlong)(int)local_328 + 1];
      local_328._0_4_ = (int)local_328 + 1;
    }
    local_328._4_4_ = -uVar5 & uVar5;
    iVar3 = 0x1f;
    if (local_328._4_4_ != 0) {
      for (; local_328._4_4_ >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar4 = iVar9;
    if (local_328._4_4_ != 0) {
      iVar4 = 0x1f - iVar3;
    }
    local_318._4_4_ = (uStack_310 - iVar4) + 0x1f;
    if ((int)local_68 < local_318._4_4_) {
      local_318._4_4_ = (int)local_68;
    }
  }
LAB_142de6556:
  auStack_2c0._4_4_ = local_318._4_4_;
  auStack_2c0._0_4_ = 0xffffffff;
  auStack_2c0._8_4_ = uStack_310;
  auStack_2c0._12_4_ = iStack_30c;
  local_2d8 = local_288;
  local_2f0 = 0;
  iStack_2d0 = (int)local_328;
  uStack_2cc = local_328._4_4_;
  local_2f8 = local_288;
  local_2b0._0_4_ = SUB84(local_288,0);
  local_2b0._4_4_ = (undefined4)((ulonglong)local_288 >> 0x20);
  iStack_320 = (int)local_328;
  uStack_31c = local_328._4_4_;
  uStack_310 = 0xffffffff;
  iStack_30c = local_318._4_4_;
  local_308._8_4_ = (undefined4)local_2b0;
  local_308._0_8_ = auStack_2c0._8_8_;
  local_308._12_4_ = local_2b0._4_4_;
  bVar14 = local_318._4_4_ < (int)local_68;
  local_328 = local_2d8;
  local_2b0 = local_288;
  local_318 = puStack_2c8;
  if (bVar14) {
    do {
      puVar11 = *(undefined1 **)(local_328 + 0x200);
      if (*(undefined1 **)(local_328 + 0x200) == (undefined1 *)0x0) {
        puVar11 = local_328;
      }
      lVar13 = (longlong)iStack_30c * 0x20;
      plVar1 = *(longlong **)(puVar11 + lVar13 + 8);
      lVar2 = *(longlong *)(puVar11 + lVar13 + 0x10);
      if (plVar1 == (longlong *)0x0) {
        *(undefined1 *)(lVar2 + 0x3c) = 0;
      }
      else if (lVar2 == 0) {
        *(undefined1 *)((longlong)plVar1 + 0x3c) = 0;
      }
      else {
        cVar7 = '\x03';
        if (*(float *)(plVar1 + 7) != *(float *)(lVar2 + 0x38)) {
          uVar5 = *(uint *)(*plVar1 + 0x48) & 2;
          if (*(float *)(plVar1 + 7) <= *(float *)(lVar2 + 0x38)) {
            bVar14 = uVar5 != 0;
          }
          else {
            bVar14 = uVar5 == 0;
          }
          cVar7 = bVar14 + '\x01';
        }
        *(char *)((longlong)plVar1 + 0x3c) = cVar7;
        if (cVar7 == '\x01') {
          *(undefined1 *)(*(longlong *)(puVar11 + lVar13 + 0x10) + 0x3c) = 2;
        }
        else {
          if (cVar7 == '\x02') {
            cVar7 = '\x01';
          }
          *(char *)(*(longlong *)(puVar11 + lVar13 + 0x10) + 0x3c) = cVar7;
        }
      }
      uStack_310 = uStack_310 & ~uStack_31c;
      FUN_1406e9690(&iStack_320);
    } while (iStack_30c < (int)local_318[4]);
    if (((char)local_2f0 != '\0') && (local_2f0._1_1_ != '\0')) {
      uVar10 = *(int *)(local_2f8 + 0x208) - *(int *)(local_2f8 + 0x22c);
      uVar5 = uVar10 >> 1;
      iVar3 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar4 = iVar9;
      if (uVar5 != 0) {
        iVar4 = 0x1f - iVar3;
      }
      uVar5 = uVar5 - 1;
      iVar3 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (uVar5 != 0) {
        iVar9 = 0x1f - iVar3;
      }
      uVar8 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - (char)iVar9 & 0x1f);
      uVar5 = 8;
      if ((7 < uVar8) && (uVar5 = uVar8, uVar10 < 4)) {
        uVar5 = 8;
      }
      if ((0 < (int)uVar10) &&
         (((iVar9 = *(int *)(local_2f8 + 600), iVar9 == 0 || (iVar9 < (int)uVar5)) ||
          ((int)uVar5 < iVar9)))) {
        *(uint *)(local_2f8 + 600) = uVar5;
        FUN_142df0540(local_2f8);
      }
    }
  }
  local_30 = 0;
  if (local_38 != 0) {
    FMemory::Free();
  }
  FUN_142de3f10(local_288);
  return;
}



// FUNCTION 142de6760 FUN_142de6760 body=625 status=ok
// SIG undefined FUN_142de6760(void)

float FUN_142de6760(undefined8 *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 local_res8 [8];
  undefined8 *local_b8;
  longlong lStack_b0;
  code *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  
  if (param_3 == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x3f800000;
  }
  FUN_14248b280(&DAT_146b34bd0);
  FUN_14246fd50(&DAT_146b34bd0,uVar8);
  uVar6 = 0;
  puVar4 = (undefined8 *)param_1[0x7c];
  if ((undefined8 *)param_1[0x7c] == (undefined8 *)0x0) {
    puVar4 = param_1 + 0x5c;
  }
  puVar2 = puVar4 + (longlong)*(int *)(param_1 + 0x7d) * 2;
  for (; puVar4 != puVar2; puVar4 = puVar4 + 2) {
    plVar1 = (longlong *)puVar4[1];
    for (plVar3 = (longlong *)*puVar4; plVar3 != plVar1; plVar3 = plVar3 + 9) {
      if (*plVar3 == param_2) {
        uVar8 = FUN_142c98860(plVar3 + 2,*param_1);
        FUN_142470da0(&DAT_146b34bd0,&local_b8,(char)plVar3[1],uVar8,local_res8);
      }
    }
  }
  puVar4 = (undefined8 *)param_1[0x9e];
  if ((undefined8 *)param_1[0x9e] == (undefined8 *)0x0) {
    puVar4 = param_1 + 0x7e;
  }
  puVar2 = puVar4 + (longlong)*(int *)(param_1 + 0x9f) * 2;
  for (; puVar4 != puVar2; puVar4 = puVar4 + 2) {
    plVar1 = (longlong *)puVar4[1];
    for (plVar3 = (longlong *)*puVar4; plVar3 != plVar1; plVar3 = plVar3 + 10) {
      if (*plVar3 == param_2) {
        uVar8 = FUN_142c98860(plVar3 + 2,*param_1);
        FUN_142470da0(&DAT_146b34bd0,&local_b8,(char)plVar3[1],uVar8,local_res8);
      }
    }
  }
  puVar4 = (undefined8 *)param_1[0xb0];
  if ((undefined8 *)param_1[0xb0] == (undefined8 *)0x0) {
    puVar4 = param_1 + 0xa0;
  }
  uVar5 = (longlong)*(int *)(param_1 + 0xb1) & 0x1fffffffffffffff;
  if (puVar4 + *(int *)(param_1 + 0xb1) < puVar4) {
    uVar5 = uVar6;
  }
  local_b8 = param_1;
  lStack_b0 = param_2;
  if (uVar5 != 0) {
    do {
      plVar1 = (longlong *)*puVar4;
      local_68 = 0;
      local_58 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_88);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_143f77c18;
        puVar2[1] = param_1;
        puVar2[2] = param_2;
      }
      local_98[0] = FUN_142de59f0;
      (**(code **)(*plVar1 + 0x10))(plVar1,*param_1,local_98);
      puVar4 = puVar4 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar5);
  }
  fVar7 = DAT_146b34bd4;
  if (param_3 != '\0') {
    fVar7 = DAT_146b34bd4 - 1.0;
  }
  return fVar7;
}



// FUNCTION 142de69f0 FUN_142de69f0 body=825 status=ok
// SIG undefined FUN_142de69f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142de69f0(longlong *param_1)

{
  float fVar1;
  longlong *plVar2;
  char cVar3;
  float *pfVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_168 [32];
  float *local_148;
  undefined4 local_140;
  undefined8 *local_138;
  undefined1 *local_130;
  longlong *local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [32];
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  cVar3 = (**(code **)(*param_1 + 0x440))();
  if ((cVar3 == '\0') && ((char)param_1[0x9d] == '\0')) {
    FUN_142deca90(param_1,&local_108,local_e8);
    fVar1 = *(float *)(param_1 + 0x39);
    pfVar4 = (float *)FRotator::Vector(local_e8,&local_118);
    local_f8 = fVar1 * *pfVar4 + local_108;
    local_f4 = pfVar4[1] * fVar1 + local_104;
    local_f0 = pfVar4[2] * fVar1 + local_100;
    FUN_1426d3dd0(local_d8);
    FUN_1426ea8d0(local_d8,2);
    lVar7 = 0;
    local_b8 = 0;
    local_98 = 0;
    local_b0 = 0;
    local_70 = 0;
    local_68 = 0;
    local_50 = 0;
    local_48 = 0;
    local_a8 = 0x10000;
    local_a0 = 0;
    local_118 = (code *)0x0;
    local_a4 = 0;
    local_94 = 0x101;
    local_9c = 0;
    local_a2 = 0;
    if (param_1[0x3c] != 0) {
      lVar7 = *(longlong *)(param_1[0x3c] + 0x488);
    }
    if (lVar7 != 0) {
      uVar5 = UDamageableInterface::GetPrivateStaticClass();
      plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar5);
      if (plVar6 == (longlong *)0x0) {
        FCollisionQueryParams::AddIgnoredActor(&local_b8,lVar7);
      }
      else {
        (**(code **)(*plVar6 + 0xb0))(plVar6,&local_b8,1);
      }
    }
    lVar7 = param_1[0x24];
    local_b8 = DAT_146b34b78;
    if ((lVar7 != 0) || (lVar7 = FUN_1423407b0(param_1), lVar7 != 0)) {
      plVar6 = param_1 + 0xb2;
      if (((int)param_1[0xb3] == 0) ||
         (((longlong *)*plVar6 == (longlong *)0x0 ||
          (cVar3 = (**(code **)(*(longlong *)*plVar6 + 0x18))(), cVar3 == '\0')))) {
        uStack_110 = 0;
        local_118 = FUN_142df4330;
        plVar8 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = (longlong)&PTR_FUN_144012f30;
          FWeakObjectPtr::operator=(plVar8 + 1,param_1);
          *(undefined4 *)(plVar8 + 2) = (undefined4)local_118;
          *(undefined4 *)((longlong)plVar8 + 0x14) = local_118._4_4_;
          *(undefined4 *)(plVar8 + 3) = uStack_110;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_10c;
          lVar9 = FDelegateHandle::GenerateNewID();
          plVar8[5] = lVar9;
          *plVar8 = (longlong)&PTR_FUN_144012f78;
        }
        if (&local_118 != plVar6) {
          if (plVar8 == (longlong *)0x0) {
            if (((int)param_1[0xb3] != 0) &&
               (plVar2 = (longlong *)*plVar6, plVar2 != (longlong *)0x0)) {
              (**(code **)(*plVar2 + 0x28))(plVar2,0);
              if (*plVar6 != 0) {
                lVar9 = FMemory::Realloc(*plVar6,0,0);
                *plVar6 = lVar9;
              }
              *(undefined4 *)(param_1 + 0xb3) = 0;
            }
          }
          else {
            (**(code **)(*plVar8 + 0x30))(plVar8,plVar6);
          }
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x28))(plVar8,0);
          lVar9 = FMemory::Realloc(plVar8,0,0);
          if (lVar9 != 0) {
            FMemory::Free(lVar9);
          }
        }
      }
      local_120 = 0;
      local_130 = local_d8;
      local_138 = &local_b8;
      local_148 = &local_f8;
      local_140 = 0x13;
      local_128 = plVar6;
      FUN_142330010(lVar7,&local_118,2,&local_108);
    }
    if (local_50 != 0) {
      FMemory::Free();
    }
    if (local_70 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142de6d30 FUN_142de6d30 body=153 status=ok
// SIG undefined FUN_142de6d30(void)

undefined8 FUN_142de6d30(longlong param_1,uint param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  
  uVar2 = param_2 >> 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar4 = 0x20;
  cVar5 = '\0';
  if (uVar2 != 0) {
    iVar4 = 0x1f - iVar1;
  }
  uVar2 = uVar2 - 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (uVar2 != 0) {
    cVar5 = '\x1f' - (char)iVar1;
  }
  uVar3 = 1 << (0x20U - cVar5 & ~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x1f);
  uVar2 = 8;
  if ((7 < uVar3) && (uVar2 = uVar3, param_2 < 4)) {
    uVar2 = 8;
  }
  if ((0 < (int)param_2) &&
     (((iVar1 = *(int *)(param_1 + 600), iVar1 == 0 || (iVar1 < (int)uVar2)) ||
      (((int)uVar2 < iVar1 && (param_3 != '\0')))))) {
    *(uint *)(param_1 + 600) = uVar2;
    FUN_142df0540(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 142de6dd0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FObjectKey,TMap<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

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
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142de6e80 FUN_142de6e80 body=842 status=ok
// SIG undefined FUN_142de6e80(void)

void FUN_142de6e80(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  longlong local_f8;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined1 local_ea;
  undefined1 local_e8 [8];
  longlong *local_e0;
  longlong local_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined1 local_9a;
  undefined1 local_98 [8];
  longlong *local_90;
  longlong local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  cVar7 = FUN_1407c3030(param_1 + 0x3a8);
  if ((cVar7 == '\0') && (cVar7 = FUN_1407c3030(param_1 + 0x440), cVar7 == '\0')) {
    plVar8 = (longlong *)FUN_142dead50(param_1 + 0x2a8,param_1 + 0x248);
  }
  else {
    plVar8 = (longlong *)(param_1 + 0x308);
  }
  if ((*plVar8 == *(longlong *)(param_1 + 0x1e8)) &&
     (cVar7 = FUN_142de40f0(plVar8 + 2,param_1 + 0x1f8), cVar7 == '\0')) {
    if (*(char *)((longlong)plVar8 + 0x11) == *(char *)(param_1 + 0x1f9)) {
      if ((char)plVar8[2] == '\0') {
        return;
      }
      if ((((ABS(*(float *)(plVar8 + 10) - *(float *)(param_1 + 0x238)) <= 0.1) &&
           (ABS(*(float *)((longlong)plVar8 + 0x54) - *(float *)(param_1 + 0x23c)) <= 0.1)) &&
          (ABS(*(float *)(plVar8 + 0xb) - *(float *)(param_1 + 0x240)) <= 0.1)) &&
         (*(float *)(param_1 + 0x244) == *(float *)((longlong)plVar8 + 0x5c))) {
        return;
      }
      local_40 = plVar8[10];
      local_48 = *plVar8;
      local_34 = *(undefined4 *)((longlong)plVar8 + 0x5c);
      local_38 = (undefined4)plVar8[0xb];
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x188,&local_48);
      return;
    }
    lVar4 = *plVar8;
    local_f0 = 0;
    local_ec = 0;
    local_ea = 0;
    FText::FText(local_e8);
    local_d0 = 0;
    local_b8 = 0;
    local_f0 = (undefined4)plVar8[2];
    local_ec = *(undefined2 *)((longlong)plVar8 + 0x14);
    local_ea = *(undefined1 *)((longlong)plVar8 + 0x16);
    local_c8 = 0;
    lStack_c0 = 0;
    local_f8 = lVar4;
    FText::operator=(local_e8,plVar8 + 3);
    local_d0 = plVar8[6];
    local_c8 = plVar8[7];
    lStack_c0 = plVar8[8];
    local_b8 = plVar8[9];
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x198,&local_f8);
    local_90 = local_e0;
  }
  else {
    lVar5 = *plVar8;
    lVar6 = plVar8[0xb];
    lVar4 = plVar8[10];
    uVar2 = *(undefined4 *)((longlong)plVar8 + 0x5c);
    local_a0 = 0;
    local_9c = 0;
    local_9a = 0;
    FText::FText(local_98);
    local_80 = 0;
    local_68 = 0;
    local_a0 = (undefined4)plVar8[2];
    local_9c = *(undefined2 *)((longlong)plVar8 + 0x14);
    local_9a = *(undefined1 *)((longlong)plVar8 + 0x16);
    local_78 = 0;
    lStack_70 = 0;
    local_a8 = lVar5;
    FText::operator=(local_98,plVar8 + 3);
    local_80 = plVar8[6];
    local_78 = plVar8[7];
    lStack_70 = plVar8[8];
    local_68 = plVar8[9];
    local_60 = lVar4;
    local_58 = (int)lVar6;
    local_54 = uVar2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x178,&local_a8);
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_90 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  return;
}



// FUNCTION 142de71d0 FUN_142de71d0 body=32 status=ok
// SIG undefined FUN_142de71d0(void)

undefined8 FUN_142de71d0(undefined8 param_1,undefined8 param_2)

{
  FUN_142de98c0(param_2,param_1);
  return param_1;
}



// FUNCTION 142de71f0 FUN_142de71f0 body=144 status=ok
// SIG undefined FUN_142de71f0(void)

void FUN_142de71f0(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((param_2 != 0) && (param_1 != (longlong *)0x0)) && (0 < param_3)) {
    lVar1 = (**(code **)(*param_1 + 0x670))();
    if (lVar1 == 0) {
      lVar1 = (**(code **)(*param_1 + 0x668))(param_1);
    }
    if (((*(char *)(param_2 + 0x61) != '\0') || (lVar1 != 0)) &&
       (lVar2 = FUN_142dec8c0(param_1), lVar2 != 0)) {
      FUN_142dd18b0(lVar2,lVar1,param_2,-param_3);
    }
  }
  return;
}



// FUNCTION 142de7280 FUN_142de7280 body=75 status=ok
// SIG undefined FUN_142de7280(void)

void FUN_142de7280(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if ((((param_2 != 0) && (param_1 != 0)) && (0 < param_3)) &&
     ((*(char *)(param_2 + 0x61) != '\0' && (lVar1 = FUN_142dec8c0(), lVar1 != 0)))) {
    FUN_142dd18b0(lVar1,0,param_2,-param_3);
  }
  return;
}



// FUNCTION 142de72e0 FUN_142de72e0 body=269 status=ok
// SIG undefined FUN_142de72e0(void)

void FUN_142de72e0(char *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      param_1[1] = param_1[1] | 0x84;
      goto LAB_142de7329;
    }
    if (cVar1 != '\x02') {
      if ((byte)(cVar1 - 3U) < 2) {
        bVar2 = 0;
        do {
          if ((bVar2 - 3 & 0xfd) != 0) {
            param_1[1] = param_1[1] | (byte)(1 << (bVar2 & 0x1f));
          }
          bVar2 = bVar2 + 1;
        } while (bVar2 != 9);
      }
      goto LAB_142de7329;
    }
  }
  param_1[1] = param_1[1] | 0x40;
LAB_142de7329:
  bVar2 = param_1[1];
  if ((bVar2 >> ((byte)param_1[3] & 0x1f) & 1) == 0) {
    return;
  }
  uVar4 = 0;
  do {
    if ((bVar2 >> (uVar4 & 0x1f) & 1) == 0) {
      FUN_142df3150(param_1);
      return;
    }
    bVar3 = (char)uVar4 + 1;
    uVar4 = (uint)bVar3;
  } while (bVar3 != 9);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x78);
  param_1[1] = bVar2 & 0xdf;
  param_1[3] = '\x05';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0x68] = '\0';
  param_1[0x69] = '\0';
  param_1[0x6a] = '\0';
  param_1[0x6b] = '\0';
  param_1[0x6c] = '\0';
  param_1[0x6d] = '\0';
  param_1[0x6e] = '\0';
  param_1[0x6f] = '\0';
  *(undefined1 (*) [16])(param_1 + 0x20) = ZEXT1216((undefined1  [12])0x0) << 0x20;
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\0';
  param_1[0x33] = '\0';
  param_1[0x34] = '\0';
  param_1[0x35] = '\0';
  param_1[0x36] = '\0';
  param_1[0x37] = '\0';
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  param_1[0x44] = '\0';
  param_1[0x45] = '\0';
  param_1[0x46] = '\0';
  param_1[0x47] = '\0';
  param_1[0x48] = '\0';
  param_1[0x49] = '\0';
  param_1[0x4a] = '\0';
  param_1[0x4b] = '\0';
  param_1[0x4c] = '\0';
  param_1[0x4d] = '\0';
  param_1[0x4e] = '\0';
  param_1[0x4f] = '\0';
  param_1[0x50] = '\0';
  param_1[0x51] = '\0';
  param_1[0x52] = -0x80;
  param_1[0x53] = '?';
  param_1[0x54] = '\0';
  param_1[0x55] = '\0';
  param_1[0x56] = '\0';
  param_1[0x57] = '\0';
  param_1[0x70] = -1;
  param_1[0x71] = -1;
  param_1[0x72] = -1;
  param_1[0x73] = -1;
  param_1[0x74] = '\0';
  param_1[0x75] = '\0';
  param_1[0x76] = '\0';
  param_1[0x77] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  return;
}



// FUNCTION 142de73f0 FUN_142de73f0 body=5 status=ok
// SIG undefined FUN_142de73f0(void)

void FUN_142de73f0(longlong param_1)

{
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0xe8;
  return;
}



// FUNCTION 142de7400 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FObjectKey,TMap<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FObjectKey,TMap<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 142de7480 Empty body=451 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FObjectKey,TMap<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_142de7551;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_142de7551:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0x60 + *param_1;
      *(undefined4 *)(lVar5 + 0x50) = 0;
      if (*(longlong *)(lVar5 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar5 + 8);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 142de7650 FUN_142de7650 body=100 status=ok
// SIG undefined FUN_142de7650(void)

void FUN_142de7650(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    fVar2 = *(float *)(param_1 + 8);
    pfVar1 = (float *)(param_1 + 4);
    if (fVar2 + *(float *)(param_1 + 4) < 0.0) {
      FUN_142c4aa60(pfVar1,0);
      fVar2 = *(float *)(param_1 + 8);
    }
    if (*pfVar1 - fVar2 < 0.0) {
      FUN_142c4ab20(pfVar1,0);
    }
  }
  return;
}



// FUNCTION 142de76c0 FUN_142de76c0 body=273 status=ok
// SIG undefined FUN_142de76c0(void)

void FUN_142de76c0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 local_res10;
  longlong *local_18;
  ulonglong local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FConfigCacheIni::GetArray(DAT_1468b6148,L"UIStatData",L"SectionNames",&local_18,&DAT_1468e2370);
  local_res10 = 0;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = local_res10;
  uVar7 = (ulonglong)(int)local_10;
  plVar5 = local_18 + uVar7 * 2;
  plVar4 = local_18;
  if (local_18 != plVar5) {
    do {
      if ((int)plVar4[1] == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = (undefined2 *)*plVar4;
      }
      uVar2 = FName::FName(&local_res10,puVar3,1);
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2,uVar2);
      plVar4 = plVar4 + 2;
    } while (plVar4 != plVar5);
    uVar7 = local_10 & 0xffffffff;
  }
  uVar6 = (uint)uVar7;
  plVar4 = local_18;
  while (uVar6 != 0) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
    uVar6 = (int)uVar7 - 1;
    uVar7 = (ulonglong)uVar6;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 142de77e0 FUN_142de77e0 body=211 status=ok
// SIG undefined FUN_142de77e0(void)

ulonglong FUN_142de77e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  float local_res8 [2];
  
  uVar4 = 0;
  local_res8[0] = 0.0;
  switch(*(undefined1 *)(param_1 + 3)) {
  case 0:
    uVar4 = (ulonglong)*(uint *)(param_1 + 4);
    break;
  case 1:
  case 2:
    uVar4 = FUN_142c49730(param_1 + 4);
    break;
  case 3:
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x70);
    bVar3 = lVar2 == 0;
LAB_142de7886:
    if (!bVar3) {
      uVar4 = 0x3f800000;
      break;
    }
    goto LAB_142de7892;
  case 5:
    cVar1 = FUN_142df1340(param_1,param_2,param_4);
    if (cVar1 != '\0') {
      FUN_142cc40f0(param_1 + 0x58,*param_4,local_res8);
    }
    uVar4 = (ulonglong)(uint)local_res8[0];
    break;
  case 6:
    if (*(longlong *)(param_1 + 0x68) != 0) {
      cVar1 = FUN_142c48f60();
      bVar3 = cVar1 == '\0';
      goto LAB_142de7886;
    }
LAB_142de7892:
    uVar4 = 0;
    break;
  case 7:
    uVar4 = FUN_142c98860(param_1 + 0x20);
  }
  if (((*(byte *)(param_1 + 2) & 1) != 0) && ((float)uVar4 < 0.0)) {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 142de78e0 FUN_142de78e0 body=136 status=ok
// SIG undefined FUN_142de78e0(void)

undefined8 FUN_142de78e0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 3) == '\x03') {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x70);
    if (lVar3 != 0) {
      UEnvQueryItemType_Actor::SetContextHelper(param_4,lVar3);
      return 1;
    }
  }
  else if (*(char *)(param_1 + 3) == '\x05') {
    cVar1 = FUN_142df1340();
    if (cVar1 != '\0') {
      uVar2 = FUN_142cd3f10(param_1 + 0x58,*param_3,param_4);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 142de7970 FUN_142de7970 body=480 status=ok
// SIG undefined FUN_142de7970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142de7970(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  char local_58;
  undefined1 local_54 [8];
  char local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_70 = *param_4;
  local_68 = 0;
  local_58 = -1;
  switch(*(undefined1 *)(param_1 + 3)) {
  case 0:
    uVar4 = *(undefined4 *)(param_1 + 4);
    goto LAB_142de7adb;
  case 1:
  case 2:
    local_60 = *(ulonglong *)(param_1 + 4);
    local_58 = '\x01';
    break;
  case 3:
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x70);
    if (lVar3 == 0) {
LAB_142de7ad8:
      uVar4 = 0;
    }
    else {
      uVar4 = 0x3f800000;
    }
    goto LAB_142de7adb;
  case 4:
    break;
  case 5:
    cVar1 = FUN_142df1340(param_1,param_3,&local_70);
    if (cVar1 != '\0') {
      local_78[0] = 0;
      FUN_142cc40f0(param_1 + 0x58,local_70,local_78);
      uVar4 = local_78[0];
      goto LAB_142de7adb;
    }
    break;
  case 6:
    if ((*(longlong *)(param_1 + 0x68) == 0) ||
       (cVar1 = FUN_142c48f60(*(longlong *)(param_1 + 0x68),param_3,0), cVar1 == '\0'))
    goto LAB_142de7ad8;
    uVar4 = 0x3f800000;
LAB_142de7adb:
    local_60 = CONCAT44(local_60._4_4_,uVar4);
    local_58 = '\0';
    break;
  case 7:
    uVar2 = FUN_142caac20(param_1 + 0x20,local_54);
    FUN_140a2f480(&local_60,uVar2);
    switch(local_4c) {
    case '\0':
      if (local_4c == '\0') {
        local_4c = -1;
      }
      break;
    case '\x01':
      if (local_4c == '\x01') {
        local_4c = -1;
      }
      break;
    case '\x02':
      if (local_4c == '\x02') {
        local_4c = -1;
      }
      break;
    case '\x03':
    case '\x04':
    case '\x05':
      if (local_4c == '\x03') {
        local_4c = -1;
      }
    }
    break;
  default:
    goto switchD_142de79dc_default;
  }
switchD_142de79dc_default:
  if ((((*(byte *)(param_1 + 2) & 1) != 0) && (local_58 == '\0')) &&
     (fVar5 = (float)FUN_142cc4350(&local_60,0), fVar5 < 0.0)) {
    FUN_140a393e0(&local_60);
    local_60 = local_60 & 0xffffffff00000000;
    local_58 = '\0';
  }
  FUN_142cc4ad0(&local_60,param_2,&local_68);
  return param_2;
}



// FUNCTION 142de7b90 FUN_142de7b90 body=112 status=ok
// SIG undefined FUN_142de7b90(void)

undefined8 FUN_142de7b90(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  if (*(char *)(param_1 + 3) == '\x03') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x70);
    return uVar2;
  }
  if (*(char *)(param_1 + 3) == '\x05') {
    cVar1 = FUN_142df1340();
    if (cVar1 != '\0') {
      FUN_142cc4b40(param_1 + 0x58,*param_3,&local_res8);
    }
    return local_res8;
  }
  return 0;
}



// FUNCTION 142de7c00 FUN_142de7c00 body=847 status=ok
// SIG undefined FUN_142de7c00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142de7c00(longlong param_1,longlong **param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong **pplVar7;
  int iVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  char local_b2;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  char local_62;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if ((char)param_3[0x4f] != '\0') {
    return;
  }
  if (*(char *)((longlong)param_3 + 0x25c) == '\0') {
    if (*(longlong **)(param_1 + 0x1e0) == (longlong *)0x0) {
      return;
    }
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x768))();
    if (cVar3 == '\0') {
      return;
    }
  }
  else {
    iVar4 = FUN_14233f450();
    if (iVar4 != 3) {
      return;
    }
  }
  uVar5 = FWeakObjectPtr::Get(param_4 + 0x74);
  local_68 = 0;
  local_64 = 0;
  local_62 = '\0';
  FText::FText(local_60);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  cVar3 = (**(code **)(*param_3 + 0x420))(param_3,*(undefined8 *)(param_1 + 0x1e0),uVar5,&local_68);
  if (cVar3 == '\0') goto LAB_142de7ef4;
  local_c8 = (longlong *)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b2 = 0;
  FText::FText(local_b0);
  local_70 = DAT_1468b5d98;
  local_b8 = local_68;
  local_98 = 0;
  uStack_90 = 0;
  local_b4 = local_64;
  local_78 = _DAT_1468b5d90;
  local_b2 = local_62;
  local_6c = 0;
  local_88 = 0;
  uStack_80 = 0;
  FText::operator=(local_b0,local_60);
  local_98 = local_48;
  uStack_90 = uStack_40;
  local_88 = local_38;
  local_78 = *(undefined8 *)(param_4 + 0x20);
  uStack_80 = uStack_30;
  local_70 = *(undefined4 *)(param_4 + 0x28);
  local_6c = *(undefined4 *)(param_4 + 0x10);
  uStack_c0 = uVar5;
  local_c8 = param_3;
  if ((*(longlong **)(param_1 + 0x1e0) == (longlong *)0x0) ||
     (lVar6 = (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x690))(), lVar6 == 0)) {
    fVar11 = *(float *)(param_1 + 0x1cc);
  }
  else {
    fVar11 = *(float *)(param_1 + 0x1d4);
  }
  if ((*(longlong **)(param_1 + 0x1e0) == (longlong *)0x0) ||
     (lVar6 = (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x690))(), lVar6 == 0)) {
    fVar10 = *(float *)(param_1 + 0x1d0);
  }
  else {
    fVar10 = *(float *)(param_1 + 0x1d8);
  }
  if (*(longlong **)(param_1 + 0x1e8) == param_3) {
    if (*(char *)(param_1 + 0x1f9) == '\0') {
      bVar9 = fVar11 < *(float *)(param_4 + 0x10);
    }
    else {
      bVar9 = fVar10 < *(float *)(param_4 + 0x10);
    }
  }
  else {
    bVar9 = fVar11 < *(float *)(param_4 + 0x10);
  }
  local_b8._0_2_ = CONCAT11(!bVar9,(char)local_b8);
  cVar3 = (char)local_b8;
  if (*(char *)(param_2 + 2) == '\0') {
    if ((char)local_b8 == '\0') {
      cVar3 = local_b2;
      if (*(char *)((longlong)param_2 + 0x16) != '\0') goto joined_r0x000142de7e6a;
      if (local_b2 != '\0') {
        pplVar7 = &local_c8;
        goto LAB_142de7eb0;
      }
      goto LAB_142de7e7d;
    }
    pplVar7 = &local_c8;
  }
  else {
joined_r0x000142de7e6a:
    pplVar7 = param_2;
    if (cVar3 != '\0') {
LAB_142de7e7d:
      iVar4 = -0x80000000;
      if (*param_2 == (longlong *)0x0) {
        iVar8 = -0x80000000;
      }
      else {
        iVar8 = *(int *)((longlong)*param_2 + 0x22c);
      }
      if (local_c8 != (longlong *)0x0) {
        iVar4 = *(int *)((longlong)local_c8 + 0x22c);
      }
      pplVar7 = &local_c8;
      if (iVar4 <= iVar8) {
        pplVar7 = param_2;
      }
    }
  }
LAB_142de7eb0:
  if (*pplVar7 == param_3) {
    FUN_142de3f90(param_2);
  }
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a8 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)local_a8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
LAB_142de7ef4:
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  return;
}



// FUNCTION 142de7f50 FUN_142de7f50 body=109 status=ok
// SIG undefined FUN_142de7f50(void)

void FUN_142de7f50(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0x488);
  }
  if (lVar3 != 0) {
    uVar1 = UDamageableInterface::GetPrivateStaticClass();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142de7fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0xb0))(plVar2,param_2,1);
      return;
    }
    FCollisionQueryParams::AddIgnoredActor(param_2,lVar3);
  }
  return;
}



// FUNCTION 142de7fc0 FUN_142de7fc0 body=1752 status=ok
// SIG undefined FUN_142de7fc0(void)

void FUN_142de7fc0(undefined8 *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  int *piVar20;
  uint *puVar21;
  undefined8 *puVar22;
  longlong lVar23;
  undefined8 *local_res8;
  longlong *local_res10;
  longlong *local_res18;
  undefined8 *local_res20;
  int local_d0;
  uint uStack_cc;
  int iStack_bc;
  int iStack_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 uStack_90;
  uint *local_88;
  undefined8 uStack_80;
  int local_78;
  longlong *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  
  puVar9 = param_1;
  local_res8 = param_1;
  local_res10 = param_2;
  if (*(char *)(param_1 + 1) != '\0') {
    puVar15 = param_1 + 2;
    local_res20 = (undefined8 *)param_1[0x4e];
    if ((undefined8 *)param_1[0x4e] == (undefined8 *)0x0) {
      local_res20 = puVar15;
    }
    puVar22 = local_res20 + (longlong)*(int *)(param_1 + 0x4f) * 0x13;
    if (local_res20 != puVar22) {
      puVar14 = local_res20 + 1;
      do {
        iVar13 = *(int *)(puVar14 + 0x11);
        iVar18 = iVar13 + -1;
        if (-1 < iVar18) {
          lVar17 = (longlong)iVar18 << 4;
          lVar23 = lVar17;
          do {
            puVar8 = (undefined8 *)puVar14[0x10];
            if ((undefined8 *)puVar14[0x10] == (undefined8 *)0x0) {
              puVar8 = puVar14;
            }
            cVar7 = (**(code **)(**(longlong **)((longlong)puVar8 + lVar17) + 0x2a0))
                              (*(longlong **)((longlong)puVar8 + lVar17),puVar9);
            if (cVar7 == '\0') {
              iVar13 = *(int *)(puVar14 + 0x11);
              iVar12 = (iVar13 - iVar18) + -1;
              if (0 < iVar12) {
                iVar12 = 1;
              }
              if (iVar12 != 0) {
                puVar8 = (undefined8 *)puVar14[0x10];
                if ((undefined8 *)puVar14[0x10] == (undefined8 *)0x0) {
                  puVar8 = puVar14;
                }
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)puVar8 + lVar23),
                           puVar8 + (longlong)(iVar13 - iVar12) * 2,(longlong)iVar12 << 4);
                iVar13 = *(int *)(puVar14 + 0x11);
              }
              *(int *)(puVar14 + 0x11) = iVar13 + -1;
              TArray<FObjectInitializer::FSubobjectsToInit::FSubobjectInit,TInlineAllocator<8,FDefaultAllocator>_>
              ::ResizeShrink(puVar14);
            }
            lVar23 = lVar23 + -0x10;
            lVar17 = lVar17 + -0x10;
            iVar18 = iVar18 + -1;
          } while (-1 < iVar18);
          iVar13 = *(int *)(puVar14 + 0x11);
        }
        local_res18 = (longlong *)((ulonglong)local_res18 & 0xffffffff00000000);
        local_b0 = 0;
        if (0 < iVar13) {
          local_a8 = 0;
          iVar18 = 0;
          do {
            puVar9 = (undefined8 *)puVar14[0x10];
            if ((undefined8 *)puVar14[0x10] == (undefined8 *)0x0) {
              puVar9 = puVar14;
            }
            if ((*(byte *)(*(longlong *)((longlong)puVar9 + local_a8) + 0x48) & 1) == 0) {
              iVar12 = iVar13 + -1;
              lVar23 = (longlong)iVar12;
              if (local_b0 < lVar23) {
                lVar17 = lVar23 << 4;
                lVar23 = lVar23 - local_b0;
                do {
                  puVar8 = (undefined8 *)puVar14[0x10];
                  if ((undefined8 *)puVar14[0x10] == (undefined8 *)0x0) {
                    puVar8 = puVar14;
                  }
                  if (((*(byte *)(*(longlong *)((longlong)puVar8 + lVar17) + 0x48) & 1) == 0) &&
                     (cVar7 = (**(code **)(**(longlong **)((longlong)puVar9 + local_a8) + 0x2b0))(),
                     cVar7 != '\0')) {
                    iVar13 = *(int *)(puVar14 + 0x11);
                    iVar18 = (iVar13 - iVar12) + -1;
                    if (0 < iVar18) {
                      iVar18 = 1;
                    }
                    if (iVar18 != 0) {
                      puVar8 = (undefined8 *)puVar14[0x10];
                      if ((undefined8 *)puVar14[0x10] == (undefined8 *)0x0) {
                        puVar8 = puVar14;
                      }
                      _guard_xfg_dispatch_icall_nop
                                (puVar8 + (longlong)iVar12 * 2,
                                 puVar8 + (longlong)(iVar13 - iVar18) * 2,(longlong)iVar18 << 4);
                      iVar13 = *(int *)(puVar14 + 0x11);
                    }
                    *(int *)(puVar14 + 0x11) = iVar13 + -1;
                  }
                  iVar12 = iVar12 + -1;
                  lVar17 = lVar17 + -0x10;
                  lVar23 = lVar23 + -1;
                } while (lVar23 != 0);
                iVar13 = *(int *)(puVar14 + 0x11);
                iVar18 = (int)local_res18;
              }
            }
            iVar18 = iVar18 + 1;
            local_b0 = local_b0 + 1;
            local_a8 = local_a8 + 0x10;
            local_res18 = (longlong *)CONCAT44(local_res18._4_4_,iVar18);
            puVar9 = local_res8;
          } while (iVar18 < iVar13);
        }
        local_res20 = local_res20 + 0x13;
        puVar14 = puVar14 + 0x13;
      } while (local_res20 != puVar22);
    }
    iVar13 = *(int *)(puVar9 + 0x4f) + -1;
    if (-1 < iVar13) {
      lVar23 = (longlong)iVar13 * 0x98;
      do {
        puVar9 = (undefined8 *)param_1[0x4e];
        if ((undefined8 *)param_1[0x4e] == (undefined8 *)0x0) {
          puVar9 = puVar15;
        }
        if (*(int *)((longlong)puVar9 + lVar23 + 0x90) == 0) {
          FUN_142df0c90(puVar15,iVar13,1,1);
        }
        lVar23 = lVar23 + -0x98;
        iVar13 = iVar13 + -1;
        puVar9 = local_res8;
      } while (-1 < iVar13);
    }
  }
  puVar15 = local_res8;
  puVar22 = puVar9;
  if ((*(char *)(puVar9 + 1) == '\0') && (puVar9[0x5b] != 0)) {
    iVar13 = *(int *)(puVar9 + 0x4f);
    puVar15 = (undefined8 *)puVar9[0x4e];
    if ((undefined8 *)puVar9[0x4e] == (undefined8 *)0x0) {
      puVar15 = puVar9 + 2;
    }
    if (iVar13 != 0) {
      plVar16 = puVar15 + 0x11;
      do {
        if (*plVar16 != 0) {
          FMemory::Free();
        }
        plVar16 = plVar16 + 0x13;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    *(undefined4 *)(puVar9 + 0x4f) = 0;
    if (*(int *)((longlong)puVar9 + 0x27c) != 0) {
      FUN_140e8f780(puVar9 + 2,0);
    }
    puVar15 = *(undefined8 **)puVar9[0x5b];
    local_res20 = puVar15 + (longlong)(int)((longlong *)puVar9[0x5b])[1] * 3;
    if (puVar15 != local_res20) {
      plVar16 = puVar9 + 0x51;
      puVar1 = (uint *)(puVar9 + 0x53);
      local_res18 = plVar16;
      do {
        iVar13 = *(int *)(puVar9 + 0x56);
        cVar7 = *(char *)((longlong)puVar15 + 0x14);
        local_d0 = 0;
        uStack_cc = 1;
        iStack_bc = 0;
        iStack_b8 = 0;
        if (iVar13 != 0) {
          puVar21 = (uint *)plVar16[4];
          if ((uint *)plVar16[4] == (uint *)0x0) {
            puVar21 = puVar1;
          }
          uVar4 = *puVar21;
          while (uVar4 == 0) {
            lVar23 = (longlong)local_d0;
            iStack_b8 = iStack_b8 + 0x20;
            iVar18 = local_d0 + 1;
            bVar6 = (int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_d0;
            local_d0 = iVar18;
            if (bVar6) goto LAB_142de843f;
            uVar4 = puVar21[lVar23 + 1];
          }
          uStack_cc = -uVar4 & uVar4;
          iVar18 = 0x1f;
          if (uStack_cc != 0) {
            for (; uStack_cc >> iVar18 == 0; iVar18 = iVar18 + -1) {
            }
          }
          if (uStack_cc == 0) {
            iVar18 = 0x20;
          }
          else {
            iVar18 = 0x1f - iVar18;
          }
          iStack_bc = (iStack_b8 - iVar18) + 0x1f;
          if (iVar13 < iStack_bc) {
LAB_142de843f:
            iStack_bc = iVar13;
          }
        }
        uStack_90 = CONCAT44(uStack_cc,local_d0);
        uStack_58 = 0xffffffff;
        iStack_54 = iStack_bc;
        iStack_50 = iStack_b8;
        uStack_80 = CONCAT44(iStack_bc,0xffffffff);
        local_78 = iStack_b8;
        local_88 = puVar1;
        local_70 = plVar16;
        uStack_68 = uStack_90;
        puStack_60 = puVar1;
        if (iStack_bc < iVar13) {
          do {
            if (*(char *)(*plVar16 + 8 + (longlong)iStack_bc * 0x18) == cVar7) {
              plVar2 = (longlong *)(*plVar16 + (longlong)iStack_bc * 0x18);
              if (plVar2 != (longlong *)0x0) {
                lVar23 = *plVar2;
                uVar3 = *(undefined1 *)((longlong)puVar15 + 0x14);
                lVar17 = FUN_142dec210(local_res8,lVar23 + 0x50);
                iVar13 = *(int *)(lVar17 + 0x90);
                lVar19 = (longlong)iVar13;
                *(int *)(lVar17 + 0x90) = iVar13 + 1;
                if (*(int *)(lVar17 + 0x94) < iVar13 + 1) {
                  TArray<FObjectInitializer::FSubobjectsToInit::FSubobjectInit,TInlineAllocator<8,FDefaultAllocator>_>
                  ::ResizeGrow(lVar17 + 8,iVar13);
                }
                lVar10 = *(longlong *)(lVar17 + 0x88);
                if (*(longlong *)(lVar17 + 0x88) == 0) {
                  lVar10 = lVar17 + 8;
                }
                *(longlong *)(lVar10 + lVar19 * 0x10) = lVar23;
                *(undefined4 *)(lVar10 + 8 + lVar19 * 0x10) = 0x3f800000;
                *(undefined1 *)(lVar10 + 0xc + lVar19 * 0x10) = uVar3;
                plVar16 = local_res18;
              }
              break;
            }
            uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 & ~uStack_90._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
            iStack_bc = uStack_80._4_4_;
          } while (uStack_80._4_4_ < (int)local_88[6]);
        }
        puVar15 = puVar15 + 3;
        puVar22 = local_res8;
      } while (puVar15 != local_res20);
    }
  }
  else {
    puVar14 = (undefined8 *)puVar9[0x4e];
    if ((undefined8 *)puVar9[0x4e] == (undefined8 *)0x0) {
      puVar14 = puVar9 + 2;
    }
    puVar8 = puVar14 + (longlong)*(int *)(puVar9 + 0x4f) * 0x13;
    if (puVar14 != puVar8) {
      piVar20 = (int *)(puVar14 + 0x12);
      do {
        local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
        piVar11 = *(int **)(piVar20 + -2);
        if (*(int **)(piVar20 + -2) == (int *)0x0) {
          piVar11 = piVar20 + -0x22;
        }
        AlgoImpl::
        IntroSortInternal<FPotentialOccluderPrimitive,FIdentityFunctor,TDereferenceWrapper<FPotentialOccluderPrimitive,<lambda_562c74a10f06bf0c86853c86eed953bd>_>_>
                  (piVar11,(longlong)*piVar20,(ulonglong)puVar15 & 0xff,&local_res8);
        puVar14 = puVar14 + 0x13;
        piVar20 = piVar20 + 0x26;
      } while (puVar14 != puVar8);
    }
  }
  plVar16 = local_res10;
  iVar13 = (int)local_res10[1];
  if (iVar13 != 0) {
    lVar23 = *local_res10 + 8;
    do {
      FUN_140dddf90(lVar23);
      lVar23 = lVar23 + 0x18;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  *(undefined4 *)(plVar16 + 1) = 0;
  if (*(int *)((longlong)plVar16 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (plVar16,0);
  }
  puVar15 = (undefined8 *)puVar9[0x4e];
  if ((undefined8 *)puVar9[0x4e] == (undefined8 *)0x0) {
    puVar15 = puVar9 + 2;
  }
  puVar9 = puVar15 + (longlong)*(int *)(puVar9 + 0x4f) * 0x13;
  for (; puVar15 != puVar9; puVar15 = puVar15 + 0x13) {
    iVar13 = (int)plVar16[1];
    uVar5 = *puVar22;
    *(int *)(plVar16 + 1) = iVar13 + 1;
    if (*(int *)((longlong)plVar16 + 0xc) < iVar13 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar16,iVar13);
    }
    FUN_142de2780(*plVar16 + (longlong)iVar13 * 0x18,uVar5,puVar15,puVar22);
  }
  return;
}



// FUNCTION 142de86a0 FUN_142de86a0 body=301 status=ok
// SIG undefined FUN_142de86a0(void)

int * FUN_142de86a0(longlong param_1,int *param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x208) != *(int *)(param_1 + 0x22c)) {
    iVar4 = (int)(param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    lVar1 = *(longlong *)(param_1 + 0x250);
    if (*(longlong *)(param_1 + 0x250) == 0) {
      lVar1 = param_1 + 0x230;
    }
    iVar4 = *(int *)(lVar1 + (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf))
                             & (longlong)*(int *)(param_1 + 600) - 1U) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar1 = param_1;
      }
      do {
        if (*(ulonglong *)((longlong)iVar4 * 0x20 + lVar1) == param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar1);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142de87d0 FUN_142de87d0 body=306 status=ok
// SIG undefined FUN_142de87d0(void)

int * FUN_142de87d0(longlong *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = param_3[1];
    uVar8 = *param_3 - uVar1 ^ uVar1 >> 0xd;
    uVar7 = (-0x61c88647 - uVar8) - uVar1 ^ uVar8 << 8;
    uVar5 = (uVar1 - uVar7) - uVar8 ^ uVar7 >> 0xd;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar5 >> 0xc;
    uVar7 = (uVar7 - uVar8) - uVar5 ^ uVar8 << 0x10;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar7 >> 5;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar5 >> 3;
    uVar7 = (uVar7 - uVar8) - uVar5 ^ uVar8 << 10;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (((longlong)(int)((uVar5 - uVar7) - uVar8) ^ (ulonglong)(uVar7 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)iVar3 * 0x60;
        if ((*(int *)(lVar6 + lVar2) == *param_3) && (*(uint *)(lVar6 + 4 + lVar2) == uVar1)) {
          *param_2 = iVar3;
          return param_2;
        }
        iVar3 = *(int *)(lVar6 + 0x58 + lVar2);
      } while (iVar3 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142de8910 FUN_142de8910 body=96 status=ok
// SIG undefined FUN_142de8910(void)

void FUN_142de8910(undefined8 param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
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
      FUN_142e852b0(param_1,param_2,0,0);
      return;
    }
  }
  return;
}



// FUNCTION 142de8970 FUN_142de8970 body=161 status=ok
// SIG undefined FUN_142de8970(void)

undefined8 FUN_142de8970(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined8 local_res10;
  undefined2 *local_28;
  int local_20;
  longlong local_18 [2];
  
  local_res10 = param_2;
  puVar1 = (undefined8 *)FName::ToString(&local_res10,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(&local_28,L"__UserState_%s_%d",puVar2,param_3);
  puVar2 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar2 = local_28;
  }
  FName::FName(param_1,puVar2,1);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142de8a20 FUN_142de8a20 body=421 status=ok
// SIG undefined FUN_142de8a20(void)

longlong * FUN_142de8a20(longlong param_1,longlong *param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined *puVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar8;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  puVar5 = &DAT_1458b448c;
  if ((*(byte *)(param_1 + 0x6c) & 1) != 0) {
    puVar5 = &DAT_1458b4474;
  }
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *(uint *)(param_1 + 0x6c);
  if (((((uVar1 & 1) == 0) || ((uVar1 & 2) != 0)) || (*(char *)(param_1 + 0x6a) != '\0')) &&
     (*(char *)(param_1 + 0x6a) == '\0')) {
    uVar2 = *(uint *)(param_1 + 0xe8);
    if ((uVar1 & 8) == 0) {
      uVar1 = 10;
      if (uVar2 < 10) {
        uVar1 = uVar2;
      }
      pwVar6 = L"%.*f%ls";
    }
    else {
      uVar1 = 10;
      if (uVar2 < 10) {
        uVar1 = uVar2;
      }
      pwVar6 = L"%+.*f%ls";
    }
    FString::PrintfImpl(&local_18,pwVar6,uVar1,(double)param_3,puVar5);
    uVar8 = (undefined4)((ulonglong)puVar5 >> 0x20);
  }
  else if ((uVar1 & 8) == 0) {
    FString::PrintfImpl(&local_18,L"%d%ls",(int)param_3,puVar5);
  }
  else {
    FString::PrintfImpl(&local_18,L"%+d%ls",(int)param_3,puVar5);
  }
  if (param_2 == &local_18) {
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    *param_2 = local_18;
    *(undefined4 *)(param_2 + 1) = local_10;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_c;
  }
  if ((*(byte *)(param_1 + 0x6c) & 0x40) != 0) {
    if ((int)param_2[1] == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    uVar3 = FText::ToString(param_1 + 0xf0);
    plVar4 = (longlong *)
             FString::Replace(uVar3,&local_18,PTR_DAT_1466ad980,puVar7,CONCAT44(uVar8,1));
    if (param_2 != plVar4) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = *plVar4;
      *plVar4 = 0;
      *(int *)(param_2 + 1) = (int)plVar4[1];
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
      plVar4[1] = 0;
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 142de8bd0 FUN_142de8bd0 body=75 status=ok
// SIG undefined FUN_142de8bd0(void)

undefined8 FUN_142de8bd0(void)

{
  longlong lVar1;
  longlong *in_R9;
  longlong in_stack_00000028;
  
  if ((in_R9 != (longlong *)0x0) && (in_stack_00000028 != 0)) {
    lVar1 = FUN_142de9380();
    if (lVar1 != 0) {
      (**(code **)(*in_R9 + 0x318))
                (in_R9,in_stack_00000028,*(int *)((longlong)in_R9 + 0x44) + lVar1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142de8c20 FUN_142de8c20 body=156 status=ok
// SIG undefined FUN_142de8c20(void)

uint FUN_142de8c20(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    return 1;
  }
  if (param_2 == param_1) {
    return (uint)*(byte *)(param_1 + 0x40);
  }
  if ((int)(uint)*(byte *)(param_2 + 0x6a) < *(int *)(param_1 + 0x88)) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar2 = param_1 + 0x70;
    }
    bVar1 = *(byte *)(lVar2 + (ulonglong)*(byte *)(param_2 + 0x6a));
    if (bVar1 != 0) {
      return bVar1 - 1;
    }
  }
  if ((int)(uint)*(byte *)(param_1 + 0x6a) < *(int *)(param_2 + 0xa8)) {
    lVar2 = *(longlong *)(param_2 + 0xa0);
    if (*(longlong *)(param_2 + 0xa0) == 0) {
      lVar2 = param_2 + 0x90;
    }
    bVar1 = *(byte *)(lVar2 + (ulonglong)*(byte *)(param_1 + 0x6a));
    if (bVar1 != 0) {
      return bVar1 - 1;
    }
  }
  if (*(char *)(param_2 + 0x43) != '\0') {
    return (uint)*(byte *)(param_2 + 0x42);
  }
  return (uint)*(byte *)(param_1 + 0x41);
}



// FUNCTION 142de8cc0 FUN_142de8cc0 body=78 status=ok
// SIG undefined FUN_142de8cc0(void)

void FUN_142de8cc0(undefined8 *param_1,undefined8 param_2,char param_3)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_3 == '\0') {
    local_18 = *param_1;
    uStack_10 = 0;
    FUN_142ca2f00(param_2,&local_18,0);
    return;
  }
  FUN_142de6760(param_1,param_2,param_3 == '\x02');
  return;
}



// FUNCTION 142de8d10 FUN_142de8d10 body=19 status=ok
// SIG undefined FUN_142de8d10(void)

uint FUN_142de8d10(longlong *param_1)

{
  uint uVar1;
  
  if (*param_1 != 0) {
    uVar1 = *(uint *)(*param_1 + 0x48);
    return CONCAT31((uint3)(uVar1 >> 9),(char)(uVar1 >> 1)) & 0xffffff01;
  }
  return 1;
}



// FUNCTION 142de8d30 FUN_142de8d30 body=1078 status=ok
// SIG undefined FUN_142de8d30(void)

undefined8 * FUN_142de8d30(char *param_1,undefined8 *param_2,float *param_3)

{
  bool bVar1;
  uint uVar2;
  float *pfVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
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
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 local_f0;
  uint local_e8;
  uint local_c8;
  undefined1 local_c4 [172];
  
  if (*param_1 == '\0') {
    fVar12 = *(float *)(param_1 + 4);
    bVar1 = false;
    uVar2 = local_e8 >> 8;
    local_e8 = local_e8 & 0xffffff00;
    fStack_f4 = DAT_1468b5d90;
    local_f0 = CONCAT44(DAT_1468b5d98,DAT_1468b5d94);
    local_100 = DAT_1468b5d90;
    fStack_fc = DAT_1468b5d94;
    fStack_f8 = DAT_1468b5d98;
    fVar7 = DAT_1468b5d98;
    fVar8 = DAT_1468b5d94;
    if (0.0 < fVar12) {
      bVar1 = true;
      fVar14 = *param_3 + fVar12;
      fStack_f4 = *param_3 - fVar12;
      fVar7 = *(float *)(param_1 + 8) * 0.5;
      local_e8 = CONCAT31((int3)uVar2,1);
      fVar13 = param_3[1] + fVar12;
      fVar8 = param_3[1] - fVar12;
      if (fVar7 <= 2.0) {
        fVar7 = 2.0;
      }
      fVar12 = param_3[2] + fVar7;
      fVar7 = param_3[2] - fVar7;
      local_100 = fVar14;
      if (fStack_f4 < fVar14) {
        local_100 = fStack_f4;
      }
      fStack_fc = fVar13;
      if (fVar8 < fVar13) {
        fStack_fc = fVar8;
      }
      fStack_f8 = fVar12;
      if (fVar7 < fVar12) {
        fStack_f8 = fVar7;
      }
      if (fStack_f4 <= fVar14) {
        fStack_f4 = fVar14;
      }
      if (fVar8 <= fVar13) {
        fVar8 = fVar13;
      }
      if (fVar12 < fVar7) {
        local_f0 = CONCAT44(fVar7,fVar8);
      }
      else {
        local_f0 = CONCAT44(fVar12,fVar8);
        fVar7 = fVar12;
      }
    }
    uVar5 = 0;
    plVar4 = *(longlong **)(param_1 + 0x10);
    uVar6 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (plVar4 + *(int *)(param_1 + 0x18) < plVar4) {
      uVar6 = uVar5;
    }
    fVar12 = fStack_f4;
    fVar13 = fStack_f8;
    fVar14 = fStack_fc;
    fVar15 = local_100;
    if (uVar6 != 0) {
      do {
        fVar17 = fVar8;
        fVar16 = fVar12;
        fVar11 = fVar13;
        fVar10 = fVar14;
        fVar9 = fVar15;
        if (*plVar4 != 0) {
          pfVar3 = (float *)FUN_1428cb660(*plVar4,local_c4);
          local_c8 = CONCAT31(local_c8._1_3_,1);
          fVar16 = pfVar3[3] + *pfVar3;
          fVar17 = pfVar3[4] + pfVar3[1];
          fVar18 = pfVar3[5] + pfVar3[2];
          fVar9 = *pfVar3 - pfVar3[3];
          fVar10 = pfVar3[1] - pfVar3[4];
          fVar11 = pfVar3[2] - pfVar3[5];
          if (bVar1) {
            if (fVar9 < fVar15) {
              fVar15 = fVar9;
              local_100 = fVar9;
            }
            if (fVar10 < fVar14) {
              fVar14 = fVar10;
              fStack_fc = fVar10;
            }
            if (fVar11 < fVar13) {
              fVar13 = fVar11;
              fStack_f8 = fVar11;
            }
            if (fVar12 < fVar16) {
              fVar12 = fVar16;
              fStack_f4 = fVar16;
            }
            if (fVar8 < fVar17) {
              local_f0 = CONCAT44(local_f0._4_4_,fVar17);
              fVar8 = fVar17;
            }
            fVar17 = fVar8;
            fVar16 = fVar12;
            fVar11 = fVar13;
            fVar10 = fVar14;
            fVar9 = fVar15;
            if (fVar7 < fVar18) {
              local_f0 = CONCAT44(fVar18,(undefined4)local_f0);
              fVar7 = fVar18;
            }
          }
          else {
            local_f0 = CONCAT44(fVar18,fVar17);
            bVar1 = true;
            local_e8 = local_c8;
            fVar7 = fVar18;
            local_100 = fVar9;
            fStack_fc = fVar10;
            fStack_f8 = fVar11;
            fStack_f4 = fVar16;
          }
        }
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 + 1;
        fVar8 = fVar17;
        fVar12 = fVar16;
        fVar13 = fVar11;
        fVar14 = fVar10;
        fVar15 = fVar9;
      } while (uVar5 != uVar6);
    }
    *param_2 = CONCAT44(fStack_fc,local_100);
    param_2[1] = CONCAT44(fStack_f4,fStack_f8);
    param_2[2] = local_f0;
    *(uint *)(param_2 + 3) = local_e8;
    return param_2;
  }
  *param_2 = 0xca000000ca000000;
  *(undefined4 *)(param_2 + 1) = 0xca000000;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0x4a0000004a000000;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0x4a000000;
  *(undefined1 *)(param_2 + 3) = 1;
  return param_2;
}



// FUNCTION 142de9170 FUN_142de9170 body=523 status=ok
// SIG undefined FUN_142de9170(void)

undefined8 * FUN_142de9170(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 local_res20 [8];
  uint in_stack_ffffffffffffff28;
  longlong local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  int local_48;
  
  puVar7 = (undefined8 *)FName::FName(local_res20,"ImageWrapper",1);
  uVar10 = *puVar7;
  uVar8 = FUN_14168dc80();
  plVar9 = (longlong *)FUN_141690010(uVar8,uVar10);
  if (((param_2 == 0) || (plVar2 = *(longlong **)(param_2 + 0x60), plVar2 == (longlong *)0x0)) ||
     (plVar9 == (longlong *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_b8 = 0;
    local_ac = 0;
    iVar5 = (**(code **)(*plVar2 + 0x40))(plVar2);
    iVar6 = (**(code **)(*plVar2 + 0x48))(plVar2);
    iVar12 = iVar6 * iVar5;
    uStack_6c = 0x467a0000;
    local_78 = 6;
    local_68 = (local_68 >> 8 & 0xff) << 8;
    uStack_70 = uStack_70 & 0xffffff00;
    lVar11 = 0;
    local_b0 = iVar12;
    if (0 < iVar12) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_b8,0);
      lVar11 = local_b8;
    }
    iVar4 = local_b0;
    local_48 = local_68;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_58 = (undefined4)local_78;
    uStack_54 = local_78._4_4_;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    FRenderTarget::ReadPixelsPtr(plVar2 + 0xd,lVar11,&local_58,&local_98);
    if (iVar4 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      (**(code **)(*plVar9 + 0x40))(plVar9,&local_a8,0,2,in_stack_ffffffffffffff28 & 0xffffff00);
      (**(code **)(*local_a8 + 8))(local_a8,lVar11,iVar12 * 4,iVar5,iVar6,2,8);
      uVar10 = (**(code **)(*local_a8 + 0x10))(local_a8,0);
      FBase64::Encode(param_1,uVar10);
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_a0 + 1;
        lVar3 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        lVar11 = local_b8;
        if ((int)lVar3 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          lVar11 = local_b8;
          if (iVar5 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
            lVar11 = local_b8;
          }
        }
      }
    }
    if (lVar11 != 0) {
      FMemory::Free(lVar11);
    }
  }
  return param_1;
}



// FUNCTION 142de9380 FUN_142de9380 body=582 status=ok
// SIG undefined FUN_142de9380(void)

longlong FUN_142de9380(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  undefined1 uStack_41;
  longlong local_40;
  longlong lStack_38;
  undefined8 local_30;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
     (lVar5 = FUN_140c74740(param_1,param_2,0), iVar3 = DAT_146b34c10, lVar5 != 0)) {
    lVar8 = (longlong)DAT_146b34c10;
    bVar2 = false;
    lVar9 = 0;
    if (0 < DAT_146b34c10) {
      plVar6 = DAT_146b34c08;
      if (DAT_146b34c08 == (longlong *)0x0) {
        plVar6 = (longlong *)&DAT_146b34be8;
      }
      plVar1 = plVar6 + lVar8;
      for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
        if (*plVar6 == lVar5) {
          bVar2 = true;
          lVar5 = lVar9;
          goto LAB_142de95b4;
        }
      }
    }
    DAT_146b34c10 = DAT_146b34c10 + 1;
    if (DAT_146b34c14 < DAT_146b34c10) {
      TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (&DAT_146b34be8,iVar3);
    }
    plVar6 = DAT_146b34c08;
    if (DAT_146b34c08 == (longlong *)0x0) {
      plVar6 = (longlong *)&DAT_146b34be8;
    }
    plVar6[lVar8] = lVar5;
    if (param_3 == 0) {
LAB_142de95b4:
      if (bVar2) {
        return lVar5;
      }
      DAT_146b34c10 = DAT_146b34c10 + -1;
      return lVar5;
    }
    local_58 = *(longlong *)(param_1 + 0x28);
    for (lVar8 = local_58; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == param_3) goto LAB_142de95b4;
    }
    if (local_58 != 0) {
      lVar9 = *(longlong *)(local_58 + 0x38);
    }
    local_48 = 0xffffffff;
    uStack_44 = 0x101;
    uStack_42 = 0;
    lStack_50 = lVar9;
    FUN_14067b390(&local_58);
    lVar8 = lStack_50;
    local_30 = CONCAT17(uStack_41,CONCAT16(uStack_42,CONCAT24(uStack_44,local_48)));
    local_48 = 0xffffffff;
    local_40 = local_58;
    lStack_38 = lStack_50;
    uStack_44 = 0x101;
    local_58 = 0;
    lStack_50 = 0;
    uStack_42 = 0;
    FUN_14067b390(&local_58);
    lVar4 = lStack_50;
    lVar9 = lStack_38;
    lStack_38 = lVar8;
    while (lStack_38 != lVar4) {
      if ((lVar9 != 0) && (lVar8 = *(longlong *)(lVar9 + 0x70), lVar8 != 0)) {
        do {
          if (lVar8 == param_3) {
            lVar5 = *(int *)(lVar9 + 0x44) + lVar5;
            goto LAB_142de95b4;
          }
          lVar8 = *(longlong *)(lVar8 + 0x30);
        } while (lVar8 != 0);
        lStack_38 = lVar9;
        lVar8 = FDataTableRowHandle::StaticStruct();
        if ((*(longlong *)(lVar9 + 0x70) == lVar8) &&
           (puVar7 = (undefined8 *)(*(int *)(lVar9 + 0x44) + lVar5), puVar7 != (undefined8 *)0x0)) {
          lVar5 = FUN_142de9380(*puVar7,puVar7[1],param_3);
          DAT_146b34c10 = DAT_146b34c10 + -1;
          return lVar5;
        }
      }
      lStack_38 = *(longlong *)(lVar9 + 0x28);
      FUN_14067b390(&local_40);
      lVar9 = lStack_38;
    }
    DAT_146b34c10 = DAT_146b34c10 + -1;
  }
  return 0;
}



// FUNCTION 142de95d0 FUN_142de95d0 body=82 status=ok
// SIG undefined FUN_142de95d0(void)

undefined8 FUN_142de95d0(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  cVar1 = FUN_1407c3030(param_1 + 0x3a8);
  if (cVar1 == '\0') {
    cVar1 = FUN_1407c3030(param_1 + 0x440);
    if (cVar1 == '\0') {
      puVar2 = (undefined8 *)FUN_142dead50(param_1 + 0x2a8,param_1 + 0x248);
      return *puVar2;
    }
  }
  return *(undefined8 *)(param_1 + 0x308);
}



// FUNCTION 142de9630 FUN_142de9630 body=85 status=ok
// SIG undefined FUN_142de9630(void)

undefined4 FUN_142de9630(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_1407c3030(param_1 + 0x3a8);
  if (cVar2 == '\0') {
    cVar2 = FUN_1407c3030(param_1 + 0x440);
    if (cVar2 == '\0') {
      lVar1 = FUN_142dead50(param_1 + 0x2a8,param_1 + 0x248);
      return *(undefined4 *)(lVar1 + 0x5c);
    }
  }
  return *(undefined4 *)(param_1 + 0x364);
}



// FUNCTION 142de9690 FUN_142de9690 body=78 status=ok
// SIG undefined FUN_142de9690(void)

longlong FUN_142de9690(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1407c3030(param_1 + 0x3a8);
  if (cVar1 == '\0') {
    cVar1 = FUN_1407c3030(param_1 + 0x440);
    if (cVar1 == '\0') {
      lVar2 = FUN_142dead50(param_1 + 0x2a8,param_1 + 0x248);
      return lVar2;
    }
  }
  return param_1 + 0x308;
}



// FUNCTION 142de96e0 FUN_142de96e0 body=442 status=ok
// SIG undefined FUN_142de96e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142de96e0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined1 local_a8;
  char local_a7;
  longlong local_a0;
  undefined2 local_98;
  undefined4 local_94;
  undefined4 local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  char local_58;
  undefined1 local_54 [8];
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_4c = 0xff;
  if ((*param_1 != 0) && (*(longlong *)(*param_1 + 0x28) != 0)) {
    lVar4 = FUN_142dfb450();
    lVar1 = *param_1;
    lVar2 = *(longlong *)(lVar1 + 0x28);
    for (lVar3 = lVar2; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar4) {
        local_80 = param_1[1];
        local_88 = lVar1;
        uVar5 = FUN_142ccdf70(local_60,&local_88,param_2);
        FUN_140a2f480(local_54,uVar5);
        switch(local_58) {
        case '\0':
          if (local_58 == '\0') {
            local_58 = -1;
          }
          break;
        case '\x01':
          if (local_58 == '\x01') {
            local_58 = -1;
          }
          break;
        case '\x02':
          if (local_58 == '\x02') {
            local_58 = -1;
          }
          break;
        case '\x03':
        case '\x04':
        case '\x05':
          if (local_58 == '\x03') {
            local_58 = -1;
          }
        }
        goto switchD_142de9851_default;
      }
    }
    local_a0 = param_1[2];
    local_90 = 0;
    local_68 = 0;
    local_98 = 0;
    local_94 = 0xffffffff;
    local_78 = 0;
    uStack_70 = 0;
    local_c0 = FUN_140c74740(lVar1,param_1[1],0);
    local_c8 = lVar2;
    local_b8 = lVar1;
    FUN_1424ab540(&local_a8,&local_a0,1,&local_78);
    if ((local_a7 != '\0') || (FUN_142ccf820(local_54,&local_78,param_2), local_a7 != '\0')) {
      local_a7 = '\0';
    }
  }
switchD_142de9851_default:
  FUN_142cc4350(local_54,param_3);
  return;
}



// FUNCTION 142de98c0 FUN_142de98c0 body=750 status=ok
// SIG undefined FUN_142de98c0(void)

longlong * FUN_142de98c0(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined8 local_res8;
  longlong local_58;
  int local_50;
  int local_4c;
  undefined2 *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  lVar9 = *param_1;
  if (lVar9 == 0) {
    *param_2 = 0;
    param_2[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"None",10);
    return param_2;
  }
  local_res8 = *(undefined8 *)(lVar9 + 0x18);
  if (*(longlong *)(lVar9 + 0x28) == 0) {
    FName::ToString(&local_res8,&local_48);
    puVar11 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar11 = local_48;
    }
    FString::PrintfImpl(param_2,L"Invalid row struct in table %s",puVar11);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    FName::ToString(&local_res8,&local_58);
    local_40 = 0xb;
    local_48 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"DataTable_",0x16);
    FString::RemoveFromStart(&local_58,&local_48,1);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    puVar5 = (undefined8 *)FName::ToString(param_1 + 1,local_38);
    puVar11 = &DAT_143f3eda8;
    iVar8 = 0;
    if (*(int *)(puVar5 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar5;
    }
    FString::PrintfImpl(&local_48,L".R[%s]",puVar10);
    puVar10 = local_48;
    iVar4 = local_50;
    iVar7 = iVar8;
    if ((int)local_40 != 0) {
      iVar7 = (int)local_40 + -1;
    }
    if (iVar7 != 0) {
      lVar9 = (longlong)local_50;
      local_50 = (uint)(local_50 == 0) + local_50 + iVar7;
      if (local_4c < local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar4);
      }
      pvVar1 = (void *)(local_58 + (lVar9 - (ulonglong)(iVar4 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,puVar10,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free(local_48);
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    plVar6 = (longlong *)FUN_142dfb450();
    plVar2 = *(longlong **)(*param_1 + 0x28);
    for (plVar3 = plVar2; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[6]) {
      if (plVar3 == plVar6) goto LAB_142de9b78;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar2 + 0x2d8))(plVar2,local_38,param_1[2]);
    if (*(int *)(puVar5 + 1) != 0) {
      puVar11 = (undefined2 *)*puVar5;
    }
    FString::PrintfImpl(&local_48,L".V[%s]",puVar11);
    puVar11 = local_48;
    iVar4 = local_50;
    if ((int)local_40 != 0) {
      iVar8 = (int)local_40 + -1;
    }
    if (iVar8 != 0) {
      lVar9 = (longlong)local_50;
      local_50 = (uint)(local_50 == 0) + local_50 + iVar8;
      if (local_4c < local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar4);
      }
      pvVar1 = (void *)(local_58 + (lVar9 - (ulonglong)(iVar4 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,puVar11,(longlong)iVar8 * 2);
      *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free(local_48);
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
LAB_142de9b78:
    *param_2 = local_58;
    *(int *)(param_2 + 1) = local_50;
    *(int *)((longlong)param_2 + 0xc) = local_4c;
  }
  return param_2;
}



// FUNCTION 142de9bb0 FUN_142de9bb0 body=329 status=ok
// SIG undefined FUN_142de9bb0(void)

longlong * FUN_142de9bb0(longlong param_1,longlong *param_2)

{
  void *_Dst;
  void *_Src;
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong local_28 [2];
  
  *param_2 = 0;
  param_2[1] = 0;
  FName::AppendString(param_1 + 0x80);
  iVar1 = (int)param_2[1];
  iVar2 = 0;
  iVar4 = iVar1 + -1;
  if (iVar1 < 1) {
    iVar4 = iVar2;
  }
  iVar1 = (iVar1 < 1) + 1 + iVar1;
  *(int *)(param_2 + 1) = iVar1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
  }
  *(undefined2 *)(*param_2 + (longlong)iVar4 * 2) = 0x3a;
  *(undefined2 *)(*param_2 + 2 + (longlong)iVar4 * 2) = 0;
  iVar1 = (int)param_2[1];
  iVar4 = iVar1 + -1;
  if (iVar1 < 1) {
    iVar4 = iVar2;
  }
  iVar1 = (iVar1 < 1) + 1 + iVar1;
  *(int *)(param_2 + 1) = iVar1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
  }
  *(undefined2 *)(*param_2 + (longlong)iVar4 * 2) = 0x20;
  *(undefined2 *)(*param_2 + 2 + (longlong)iVar4 * 2) = 0;
  puVar3 = (undefined8 *)FUN_142de9d00(param_1,local_28);
  _Src = (void *)*puVar3;
  iVar1 = *(int *)(puVar3 + 1) + -1;
  if (*(int *)(puVar3 + 1) == 0) {
    iVar1 = iVar2;
  }
  if (iVar1 != 0) {
    iVar4 = (int)param_2[1];
    iVar2 = (uint)(iVar4 == 0) + iVar1 + iVar4;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
    }
    _Dst = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1 * 2);
    *(undefined2 *)((longlong)iVar1 * 2 + (longlong)_Dst) = 0;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142de9d00 FUN_142de9d00 body=1255 status=ok
// SIG undefined FUN_142de9d00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142de9d00(char *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong lVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58 [2];
  longlong local_48 [2];
  ulonglong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_38[0] = local_38[0] & 0xffffffff00000000;
  switch(param_1[3]) {
  case '\0':
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      FUN_142c4b240(param_1 + 4,param_2);
      return param_2;
    }
    if (cVar1 == '\x01') {
      fVar9 = *(float *)(param_1 + 4);
      *param_2 = 0;
      pwVar4 = L"false";
      param_2[1] = 0;
      if (0.0 < fVar9) {
        pwVar4 = L"true";
      }
      if (*pwVar4 == L'\0') {
        return param_2;
      }
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (pwVar4[lVar7] != L'\0');
      iVar5 = (int)lVar7 + 1;
      *(int *)(param_2 + 1) = iVar5;
      if (0 < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      }
      lVar7 = (longlong)iVar5 * 2;
      goto LAB_142dea1b8;
    }
    if (cVar1 == '\x02') {
      FString::PrintfImpl(param_2,&DAT_1458b446c,
                          (int)ROUND(*(float *)(param_1 + 4) + *(float *)(param_1 + 4) + 0.5) >> 1);
      return param_2;
    }
    break;
  case '\x01':
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      FUN_142c4b1d0(param_1 + 4,param_2);
      return param_2;
    }
    if (cVar1 == '\x01') {
      FString::PrintfImpl(param_2,L"%d%% true",
                          (int)ROUND(*(float *)(param_1 + 4) * 100.0 +
                                     *(float *)(param_1 + 4) * 100.0 + 0.5) >> 1);
      return param_2;
    }
    if (cVar1 == '\x02') {
      FString::PrintfImpl(param_2,L"%d +-%d",
                          (int)ROUND(*(float *)(param_1 + 4) + *(float *)(param_1 + 4) + 0.5) >> 1,
                          (int)ROUND(*(float *)(param_1 + 8) + *(float *)(param_1 + 8) + 0.5) >> 1);
      return param_2;
    }
    break;
  case '\x02':
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      FUN_142c4b150(param_1 + 4,param_2);
      return param_2;
    }
    if (cVar1 == '\x01') {
      FString::PrintfImpl(param_2,L"%d%% true",
                          (int)ROUND(*(float *)(param_1 + 4) * 100.0 +
                                     *(float *)(param_1 + 4) * 100.0 + 0.5) >> 1);
      return param_2;
    }
    if (cVar1 == '\x02') {
      fVar9 = *(float *)(param_1 + 4) + *(float *)(param_1 + 8);
      fVar10 = *(float *)(param_1 + 4) - *(float *)(param_1 + 8);
      FString::PrintfImpl(param_2,L"%d - %d",(int)ROUND(fVar10 + fVar10 + 0.5) >> 1,
                          (int)ROUND(fVar9 + fVar9 + 0.5) >> 1);
      return param_2;
    }
    break;
  case '\x03':
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x70);
    if (lVar7 == 0) {
      local_68 = (undefined2 *)0x0;
      local_60 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      FGenericPlatformString::Memcpy(local_68,&DAT_143f3edc8,10);
    }
    else {
      local_38[0] = *(ulonglong *)(lVar7 + 0x18);
      FName::ToString(local_38,&local_68);
    }
    puVar6 = &DAT_143f3eda8;
    if ((int)local_60 != 0) {
      puVar6 = local_68;
    }
    FString::PrintfImpl(param_2,L"Actor %s",puVar6);
    local_58[0] = local_68;
    goto LAB_142dea166;
  case '\x04':
    *param_2 = 0;
    param_2[1] = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    lVar7 = 4;
    pwVar4 = L" ";
    goto LAB_142dea1b8;
  case '\x05':
    puVar2 = (undefined8 *)FName::ToString(param_1 + 0x58,local_58);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar2;
    }
    FString::PrintfImpl(param_2,L"BBKey %s",puVar6);
    goto LAB_142dea166;
  case '\x06':
    if (*(longlong *)(param_1 + 0x68) == 0) {
      local_68 = (undefined2 *)0x0;
      local_60 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      FGenericPlatformString::Memcpy(local_68,&DAT_143f3edc8,10);
    }
    else {
      local_38[0] = *(ulonglong *)(*(longlong *)(param_1 + 0x68) + 0x18);
      FName::ToString(local_38,&local_68);
    }
    local_78 = 1;
    uVar3 = FString::Replace(&local_68,local_48,L"Condition_",&DAT_1458b4074);
    local_78 = 1;
    puVar2 = (undefined8 *)FString::Replace(uVar3,local_58,L"Cond_",&DAT_1458b4114);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar2;
    }
    FString::PrintfImpl(param_2,L"Condition %s",puVar6);
    if (local_58[0] != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_58[0] = local_68;
    if (local_48[0] != 0) {
      FMemory::Free();
      local_58[0] = local_68;
    }
    goto LAB_142dea166;
  case '\a':
    FUN_142caac20(param_1 + 0x20,local_38,0);
    cVar1 = FUN_142cc7750(local_38);
    bVar8 = cVar1 == '\0';
    if (bVar8) {
      puVar2 = (undefined8 *)FUN_142ca25e0(param_1 + 0x20,&local_68);
    }
    else {
      puVar2 = (undefined8 *)FUN_142cd7420(local_38,local_58);
    }
    *param_2 = 0;
    *param_2 = *puVar2;
    *puVar2 = 0;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar2 + 1);
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
    puVar2[1] = 0;
    if ((bVar8) && (local_68 != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    if (bVar8) {
      return param_2;
    }
LAB_142dea166:
    if (local_58[0] != (undefined2 *)0x0) {
      FMemory::Free();
    }
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  lVar7 = 0x14;
  pwVar4 = L"!INVALID!";
LAB_142dea1b8:
  FGenericPlatformString::Memcpy(*param_2,pwVar4,lVar7);
  return param_2;
}



// FUNCTION 142dea210 FUN_142dea210 body=39 status=ok
// SIG undefined FUN_142dea210(void)

longlong FUN_142dea210(longlong param_1)

{
  longlong lVar1;
  
  if (((*(char *)(param_1 + 0x198) == '\0') || (lVar1 = *(longlong *)(param_1 + 0x1a0), lVar1 == 0))
     && (lVar1 = 0, *(longlong *)(param_1 + 400) != 0)) {
    return *(longlong *)(*(longlong *)(param_1 + 400) + 0x30);
  }
  return lVar1;
}



// FUNCTION 142dea240 FUN_142dea240 body=293 status=ok
// SIG undefined FUN_142dea240(void)

undefined8 FUN_142dea240(undefined8 param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (DAT_146b34c48 == 0) {
    uVar7 = UEnum::GetPrivateStaticClass();
    DAT_146b34c48 = FUN_141799410(uVar7,0xffffffffffffffff,L"ETerritoryType",0);
    if (DAT_146b34c48 == 0) {
      uVar7 = FUN_1404b03b0();
      uVar7 = FText::FText(local_38,uVar7);
      bVar5 = false;
      bVar4 = true;
      goto LAB_142dea2c8;
    }
  }
  uVar7 = FUN_1417373a0(DAT_146b34c48,local_20,param_2);
  bVar5 = true;
  bVar4 = false;
LAB_142dea2c8:
  FText::FText(param_1,uVar7);
  if (bVar4) {
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  if ((bVar5) && (local_18 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return param_1;
}



// FUNCTION 142dea370 FUN_142dea370 body=1119 status=ok
// SIG undefined FUN_142dea370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142dea370(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  bool bVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 auStack_1c8 [32];
  int local_1a8;
  uint local_1a0;
  uint uStack_19c;
  uint *puStack_198;
  undefined4 local_190;
  uint uStack_18c;
  uint uStack_188;
  undefined4 uStack_184;
  int local_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  uint uStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  undefined8 uStack_160;
  int local_158;
  undefined1 local_154 [4];
  undefined8 local_150;
  longlong *local_148;
  uint uStack_140;
  uint uStack_13c;
  uint *local_138;
  uint uStack_130;
  uint uStack_12c;
  undefined8 local_128;
  longlong local_120;
  undefined4 *local_118;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [24];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  uVar12 = 0;
  local_1a8 = 0;
  local_150 = param_2;
  if (*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x4c)) {
    FText::FText(param_2,param_1);
  }
  else {
    plVar4 = (longlong *)(param_1 + 0x18);
    puVar1 = (uint *)(param_1 + 0x28);
    local_c8 = 0;
    local_c0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0xffffffff;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    uVar5 = *(uint *)(param_1 + 0x40);
    local_1a0 = 0;
    uStack_19c = 1;
    uStack_18c = 0;
    uStack_188 = 0;
    if (uVar5 != 0) {
      puVar13 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar13 = puVar1;
      }
      uVar10 = *puVar13;
      local_1a0 = uVar12;
      uStack_188 = uVar12;
      while (uVar10 == 0) {
        lVar11 = (longlong)(int)local_1a0;
        uStack_188 = uStack_188 + 0x20;
        uVar10 = local_1a0 + 1;
        bVar6 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_1a0;
        local_1a0 = uVar10;
        if (bVar6) goto LAB_142dea4c5;
        uVar10 = puVar13[lVar11 + 1];
      }
      uStack_19c = -uVar10 & uVar10;
      local_1a8 = 0x1f;
      if (uStack_19c != 0) {
        for (; uStack_19c >> local_1a8 == 0; local_1a8 = local_1a8 + -1) {
        }
      }
      if (uStack_19c == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - local_1a8;
      }
      uStack_18c = (uStack_188 - iVar8) + 0x1f;
      if ((int)uVar5 < (int)uStack_18c) {
LAB_142dea4c5:
        uStack_18c = uVar5;
      }
    }
    local_190 = 0xffffffff;
    uStack_16c = *(uint *)(param_1 + 0x40);
    uStack_178 = CONCAT44(uStack_19c,local_1a0);
    uStack_130 = 0xffffffff;
    uStack_12c = uStack_18c;
    uStack_160 = CONCAT44(uStack_184,uStack_188);
    local_180 = (int)uStack_16c >> 5;
    uStack_17c = (undefined4)((ulonglong)plVar4 >> 0x20);
    uStack_170 = -1 << ((byte)uStack_16c & 0x1f);
    uStack_168 = uStack_16c & 0xffffffe0;
    uStack_164 = uStack_18c;
    uStack_140 = local_1a0;
    uStack_13c = uStack_19c;
    puStack_198 = puVar1;
    local_138 = puVar1;
    local_128 = uStack_160;
    local_148 = plVar4;
    uVar10 = uStack_16c;
    if (uStack_16c != uVar5) {
      puVar13 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar13 = puVar1;
      }
      uVar10 = puVar13[local_180] & uStack_170;
      while (uVar10 == 0) {
        lVar11 = (longlong)local_180;
        uStack_168 = uStack_168 + 0x20;
        iVar8 = local_180 + 1;
        bVar6 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_180;
        local_180 = iVar8;
        if (bVar6) goto LAB_142dea5b1;
        uVar10 = puVar13[lVar11 + 1];
        uStack_170 = 0xffffffff;
      }
      uVar10 = -uVar10 & uVar10;
      local_158 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> local_158 == 0; local_158 = local_158 + -1) {
        }
      }
      if (uVar10 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - local_158;
      }
      uStack_16c = (uStack_168 - iVar8) + 0x1f;
      uVar10 = uStack_16c;
      if ((int)uVar5 < (int)uStack_16c) {
LAB_142dea5b1:
        uStack_16c = uVar5;
        uVar10 = uVar5;
      }
    }
    while (((uStack_12c != uVar10 || (local_138 != puVar1)) || (local_148 != plVar4))) {
      lVar11 = *local_148 + (longlong)(int)uStack_12c * 0x28;
      if ((*(longlong *)(*local_148 + 0x10 + (longlong)(int)uStack_12c * 0x28) == 0) ||
         (*(longlong *)(lVar11 + 0x18) == 0)) {
        uVar12 = uVar12 | 2;
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_110,L"FIX ME: PARAMETER NOT SET",L"GbxUIFormattedText",
                           L"ParamNotSetText");
      }
      else {
        uVar12 = uVar12 | 1;
        uVar9 = (**(code **)(**(longlong **)(lVar11 + 0x18) + 0x10))
                          (*(longlong **)(lVar11 + 0x18),local_f8);
      }
      local_78[0] = 4;
      FText::FText(local_68,uVar9);
      local_118 = local_78;
      local_50 = '\x01';
      local_120 = lVar11;
      FUN_1405df450(&local_c8,local_154,&local_120,0);
      plVar7 = local_60;
      if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_60 + 1;
        lVar11 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          iVar8 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      plVar7 = local_108;
      if (((uVar12 & 2) != 0) && (uVar12 = uVar12 & 0xfffffffd, local_108 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_108 + 1;
        lVar11 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_108)(local_108);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          iVar8 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      plVar7 = local_f0;
      if (((uVar12 & 1) != 0) && (uVar12 = uVar12 & 0xfffffffe, local_f0 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_f0 + 1;
        lVar11 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          iVar8 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      uStack_130 = uStack_130 & ~uStack_13c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_140);
    }
    uVar9 = FTextFormat::FTextFormat(local_e0,param_1);
    param_2 = local_150;
    FText::Format(local_150,uVar9,&local_c8);
    local_80 = 0;
    if (local_88 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_c8);
  }
  return param_2;
}



// FUNCTION 142dea7d0 FUN_142dea7d0 body=162 status=ok
// SIG undefined FUN_142dea7d0(void)

undefined8 * FUN_142dea7d0(longlong *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b34c8c) {
    _Init_thread_header(&DAT_146b34c8c);
    if (DAT_146b34c8c == -1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1466adac0,0);
      FGenericPlatformString::Memcpy(DAT_1466adac0,L"DesignerFixMe",0x1c);
      atexit((_func_5014 *)&LAB_143ec0f80);
      _Init_thread_footer(&DAT_146b34c8c);
    }
  }
  if (*param_1 != 0) {
    return (undefined8 *)(*param_1 + 0x58);
  }
  return &DAT_1466adac0;
}



// FUNCTION 142dea880 FUN_142dea880 body=609 status=ok
// SIG undefined FUN_142dea880(void)

void FUN_142dea880(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b34c20) && (_Init_thread_header(&DAT_146b34c20), DAT_146b34c20 == -1)) {
    uVar1 = UCircularThrobber::GetPrivateStaticClass();
    UCircularThrobber::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Team",1);
    DAT_146b34c18 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b34c20);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b34c18 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b34c18 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b34c18 + 0x30));
  }
  if ((*piVar5 < DAT_146b34c30) && (_Init_thread_header(&DAT_146b34c30), DAT_146b34c30 == -1)) {
    uVar1 = UCircularThrobber::GetPrivateStaticClass();
    UCircularThrobber::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"TeamDefault",1);
    DAT_146b34c28 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b34c30);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b34c28 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b34c28 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b34c28 + 0x30));
  }
  if ((*piVar5 < DAT_146b34c40) && (_Init_thread_header(&DAT_146b34c40), DAT_146b34c40 == -1)) {
    uVar1 = UCircularThrobber::GetPrivateStaticClass();
    UCircularThrobber::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIgnoreCollisionWithTeam",1);
    DAT_146b34c38 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b34c40);
  }
  if (0 < *(int *)(DAT_146b34c38 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b34c38 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b34c38 + 0x30));
  }
  return;
}



// FUNCTION 142deaaf0 FUN_142deaaf0 body=597 status=ok
// SIG undefined FUN_142deaaf0(void)

void FUN_142deaaf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar4 < DAT_146b34cb0) && (_Init_thread_header(&DAT_146b34cb0), DAT_146b34cb0 == -1)) {
    uVar1 = UNukerSkills001Widget::GetPrivateStaticClass();
    UNukerSkills001Widget::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedUsableState",1);
    DAT_146b34ca8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b34cb0);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b34ca8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b34ca8 + 0x40) + (short)iVar3;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b34ca8 + 0x30));
  }
  if ((*piVar4 < DAT_146b34cc0) && (_Init_thread_header(&DAT_146b34cc0), DAT_146b34cc0 == -1)) {
    uVar1 = UNukerSkills001Widget::GetPrivateStaticClass();
    UNukerSkills001Widget::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedCostCache",1);
    DAT_146b34cb8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b34cc0);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b34cb8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b34cb8 + 0x40) + (short)iVar3;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b34cb8 + 0x30));
  }
  if ((*piVar4 < DAT_146b34cd0) && (_Init_thread_header(&DAT_146b34cd0), DAT_146b34cd0 == -1)) {
    uVar1 = UNukerSkills001Widget::GetPrivateStaticClass();
    UNukerSkills001Widget::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CanUseObjectsLock_Replicated",1);
    DAT_146b34cc8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b34cd0);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b34cc8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b34cc8 + 0x40) + (short)iVar3;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b34cc8 + 0x30));
  }
  return;
}



// FUNCTION 142dead50 FUN_142dead50 body=103 status=ok
// SIG undefined FUN_142dead50(void)

longlong * FUN_142dead50(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((char)param_1[2] != '\0') {
    if ((char)param_2[2] == '\0') {
      return param_1;
    }
    if ((char)param_1[2] != '\0') goto LAB_142dead84;
  }
  if ((char)param_2[2] != '\0') {
    return param_2;
  }
  if (*(char *)((longlong)param_1 + 0x16) == '\0') {
    if (*(char *)((longlong)param_2 + 0x16) == '\0') goto LAB_142dead84;
  }
  else if (*(char *)((longlong)param_2 + 0x16) == '\0') {
    return param_1;
  }
  if (*(char *)((longlong)param_1 + 0x16) == '\0') {
    return param_2;
  }
LAB_142dead84:
  iVar1 = -0x80000000;
  if (*param_1 == 0) {
    iVar2 = -0x80000000;
  }
  else {
    iVar2 = *(int *)(*param_1 + 0x22c);
  }
  if (*param_2 != 0) {
    iVar1 = *(int *)(*param_2 + 0x22c);
  }
  if (iVar1 <= iVar2) {
    param_2 = param_1;
  }
  return param_2;
}



// FUNCTION 142deadc0 FUN_142deadc0 body=738 status=ok
// SIG undefined FUN_142deadc0(void)

ulonglong FUN_142deadc0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  uint uVar13;
  
  uVar13 = (uint)((ulonglong)param_2 >> 0x20);
  fVar12 = (float)param_2;
  fVar5 = ABS(fVar12);
  if (fVar5 <= 1e-08) {
    fVar12 = 0.0;
    uVar13 = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x6c);
  if ((char)uVar2 < '\0') {
    if ((param_3 == (longlong *)0x0) ||
       (lVar3 = (**(code **)(*param_3 + 0x148))(param_3), lVar3 == 0)) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)(lVar3 + 0x148);
    }
    if ((*(byte *)(param_1 + 0x108) & 1) != 0) {
      plVar4 = param_3;
    }
    auVar10._0_8_ = FUN_142c98860(param_1 + 0x110,plVar4);
    fVar6 = (float)auVar10._0_8_;
    uVar13 = (uint)((ulonglong)auVar10._0_8_ >> 0x20);
    auVar10._0_8_ = FUN_142c98860(param_1 + 0x148,plVar4);
    fVar7 = (float)auVar10._0_8_;
    auVar10._8_4_ = (undefined4)extraout_XMM0_Qb;
    auVar10._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
    fVar8 = (float)FUN_142c98860(param_1 + 0x180,plVar4);
    fVar9 = (float)FUN_142c98860(param_1 + 0x1b8,plVar4);
    fVar5 = fVar6;
    if (fVar6 <= fVar12) {
      if (fVar12 <= fVar7) {
        auVar11._4_12_ = auVar10._4_12_;
        auVar11._0_4_ = fVar12;
        auVar10._0_8_ = auVar11._0_8_;
      }
      uVar13 = (uint)((ulonglong)auVar10._0_8_ >> 0x20);
      fVar5 = (float)auVar10._0_8_;
    }
    if (fVar6 < fVar7) {
      fVar12 = (fVar9 - fVar8) / (fVar7 - fVar6);
    }
    else {
      fVar12 = 0.0;
    }
    uVar2 = *(uint *)(param_1 + 0x6c);
    fVar12 = (fVar5 - fVar6) * fVar12 + fVar8;
    fVar5 = ABS(fVar12);
  }
  if (((uVar2 & 0x20) != 0) && (fVar12 != 1.0)) {
    uVar13 = 0;
    fVar12 = 1.0 / (1.0 - fVar12) - 1.0;
  }
  if ((uVar2 & 0x10) != 0) {
    fVar12 = 1.0 - fVar12;
    uVar13 = 0;
  }
  if ((uVar2 & 1) != 0) {
    fVar12 = fVar12 * 100.0;
  }
  cVar1 = *(char *)(param_1 + 0x69);
  if ((cVar1 != '\0') &&
     (((cVar1 == '\x03' || ((cVar1 == '\x01' && (fVar12 < 0.0)))) ||
      ((cVar1 == '\x02' && (0.0 < fVar12)))))) {
    fVar12 = -fVar12;
    uVar13 = uVar13 ^ 0x80000000;
  }
  if (((uVar2 & 4) != 0) && (1e-08 < fVar5)) {
    fVar12 = 1.0 / fVar12;
    uVar13 = 0;
  }
  if ((((uVar2 & 1) == 0) || ((uVar2 & 2) != 0)) ||
     (cVar1 = '\x01', *(char *)(param_1 + 0x6a) != '\0')) {
    cVar1 = *(char *)(param_1 + 0x6a);
  }
  if (cVar1 == '\0') {
    uVar13 = 10;
    if (*(uint *)(param_1 + 0xe8) < 10) {
      uVar13 = *(uint *)(param_1 + 0xe8);
    }
    fVar5 = _guard_xfg_dispatch_icall_nop(10.0,(float)uVar13);
    fVar12 = fVar5 * fVar12 + 0.5;
    return (ulonglong)(uint)((float)((int)ROUND((fVar12 + fVar12) - 0.5) >> 1) / fVar5);
  }
  if (cVar1 == '\x01') {
    return (ulonglong)(uint)(float)((int)ROUND(fVar12 + fVar12 + 0.5) >> 1);
  }
  if (cVar1 == '\x02') {
    return (ulonglong)(uint)(float)((int)ROUND((fVar12 + fVar12) - 0.5) >> 1);
  }
  if (cVar1 == '\x03') {
    return (ulonglong)(uint)(float)-((int)ROUND(-0.5 - (fVar12 + fVar12)) >> 1);
  }
  return CONCAT44(uVar13,fVar12);
}



// FUNCTION 142deb0b0 FUN_142deb0b0 body=197 status=ok
// SIG undefined FUN_142deb0b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142deb0b0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar3 = *param_1;
  lVar1 = lVar3 + (longlong)(int)param_1[1] * 0x18;
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
    local_58 = &local_48;
    local_50 = *(undefined8 *)(param_2 + 8);
    local_40 = 0x3000000000000;
    local_48 = 0;
    FUN_142deb180(lVar3,&local_58,param_3);
    uVar2 = FName::ToString(lVar3,local_68);
    UE4Function_Private::
    TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
    ::Call(param_2,uVar2,&local_58);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142deb180 FUN_142deb180 body=1198 status=ok
// SIG undefined FUN_142deb180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142deb180(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_698 [32];
  longlong local_678;
  undefined8 *local_670;
  undefined8 local_668;
  undefined8 local_660;
  undefined8 local_658;
  undefined8 *local_650;
  undefined8 local_648;
  undefined8 local_640;
  undefined8 local_638;
  undefined8 *local_630;
  undefined8 local_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 local_610;
  undefined1 local_608;
  undefined1 local_600 [608];
  undefined8 local_3a0;
  undefined8 local_398;
  undefined1 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined4 local_354;
  longlong local_348;
  undefined4 local_340;
  undefined8 local_338;
  longlong local_230;
  undefined8 local_228;
  longlong local_120;
  undefined8 local_118;
  longlong local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_1468387a8 ^ (ulonglong)auStack_698;
  local_648 = *(undefined8 *)(param_2 + 8);
  plVar10 = *(longlong **)(param_1 + 8);
  local_650 = &local_640;
  plVar9 = plVar10 + (longlong)*(int *)(param_1 + 0x10) * 8;
  local_640 = 0;
  local_630 = &local_620;
  local_638 = 0x4000000000000;
  local_620 = 0;
  local_618 = 0x4000000000000;
  local_628 = local_648;
  local_678 = param_2;
  for (; plVar10 != plVar9; plVar10 = plVar10 + 8) {
    plVar2 = (longlong *)*plVar10;
    if (plVar2 != (longlong *)0x0) {
      local_668 = *(undefined8 *)(param_2 + 8);
      local_670 = &local_660;
      local_658 = 0x4000000000000;
      local_660 = 0;
      lVar5 = UListViewBase::GetPrivateStaticClass();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        plVar6 = (longlong *)plVar2[0x3e];
        plVar8 = plVar2;
      }
      else {
        plVar8 = (longlong *)0x0;
        plVar6 = (longlong *)0x0;
      }
      fVar12 = *(float *)(plVar10 + 7);
      if (plVar8 == (longlong *)0x0) {
        FUN_142ab4f80(&local_670,fVar12);
      }
      iVar7 = 5;
      while ((plVar8 != (longlong *)0x0 && (0 < iVar7))) {
        iVar7 = iVar7 + -1;
        if (plVar6 != (longlong *)0x0) {
          local_3a0 = 0;
          local_398 = 0;
          local_388 = 0;
          local_380 = 0;
          local_368 = 0;
          local_360 = 0;
          local_354 = 0;
          local_348 = 0;
          local_340 = 0;
          local_338 = 0;
          local_230 = 0;
          local_228 = 0;
          local_120 = 0;
          local_118 = 0;
          local_90 = 0;
          local_88 = 0;
          local_608 = 1;
          local_390 = 1;
          local_358 = 0xffffffff;
          local_610 = param_3;
          fVar11 = (float)(**(code **)(*plVar6 + 0x2c8))(plVar6,&local_610);
          if (local_90 != 0) {
            FMemory::Free();
          }
          if (local_120 != 0) {
            FMemory::Free();
          }
          if (local_230 != 0) {
            FMemory::Free();
          }
          local_340 = 0;
          if (local_348 != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                    (&local_388);
          FUN_14099aac0(local_600);
          cVar1 = (char)plVar8[0x3f];
          if (cVar1 == '\0') {
            if (1e-08 < ABS(fVar11)) {
              fVar12 = fVar12 / fVar11;
            }
          }
          else if (cVar1 == '\x01') {
            fVar12 = fVar12 * fVar11;
          }
          else if (cVar1 == '\x02') {
            fVar12 = fVar12 - fVar11;
          }
          else if (cVar1 == '\x03') {
            fVar12 = fVar12 + fVar11;
          }
        }
        FUN_142ab4f80(&local_670,fVar12);
        plVar8 = plVar6;
        if (plVar6 == (longlong *)0x0) {
          fVar12 = 0.0;
          plVar6 = (longlong *)0x0;
        }
        else {
          local_3a0 = 0;
          local_398 = 0;
          local_388 = 0;
          local_380 = 0;
          local_368 = 0;
          local_360 = 0;
          local_354 = 0;
          local_348 = 0;
          local_340 = 0;
          local_338 = 0;
          local_230 = 0;
          local_228 = 0;
          local_120 = 0;
          local_118 = 0;
          local_90 = 0;
          local_88 = 0;
          local_608 = 1;
          local_390 = 1;
          local_358 = 0xffffffff;
          local_610 = param_3;
          fVar12 = (float)(**(code **)(*plVar6 + 0x2c8))(plVar6,&local_610);
          if (local_90 != 0) {
            FMemory::Free();
          }
          if (local_120 != 0) {
            FMemory::Free();
          }
          if (local_230 != 0) {
            FMemory::Free();
          }
          local_340 = 0;
          if (local_348 != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                    (&local_388);
          FUN_14099aac0(local_600);
          plVar6 = (longlong *)plVar6[0x3e];
        }
      }
      uVar4 = (**(code **)(*plVar2 + 0x278))(plVar2);
      FUN_142ab4ed0(&local_650,uVar4);
      FUN_142ab4ae0(&local_630,&local_670);
      param_2 = local_678;
    }
  }
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(param_2,"Hashes",&local_650);
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(param_2,"Values",&local_630);
  return;
}



// FUNCTION 142deb630 FUN_142deb630 body=637 status=ok
// SIG undefined FUN_142deb630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142deb630(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined8 local_100;
  longlong local_f8 [2];
  undefined1 local_e8 [128];
  undefined1 *local_68;
  undefined1 *local_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar8 = *param_1;
  lVar1 = lVar8 + (longlong)(int)param_1[1] * 0x18;
  local_100 = param_3;
  for (; lVar8 != lVar1; lVar8 = lVar8 + 0x18) {
    puVar5 = (undefined1 *)0x0;
    puVar4 = (undefined8 *)FName::ToString(lVar8,local_f8);
    iVar6 = 0;
    if (*(int *)(puVar4 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar4;
      iVar6 = *(int *)(puVar4 + 1) + -1;
    }
    local_68 = (undefined1 *)0x0;
    if (puVar7 == (undefined2 *)0x0) {
      local_60 = (undefined1 *)0x0;
      local_58 = 0;
    }
    else {
      local_108 = (undefined1 *)((ulonglong)local_108 & 0xffffffff00000000);
      FTCHARToUTF8_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                (&local_108,iVar6 * 4,puVar7,iVar6);
      puVar3 = local_108;
      local_58 = (uint)local_108;
      if ((0x80 < (uint)local_108) && ((uint)local_108 != 0)) {
        puVar5 = (undefined1 *)FMemory::Realloc(0,(longlong)(int)(uint)local_108,0);
        local_68 = puVar5;
      }
      local_108 = local_e8;
      if (puVar5 != (undefined1 *)0x0) {
        local_108 = puVar5;
      }
      local_60 = local_108;
      FTCHARToUTF8_Convert::Convert_Impl<char_*>
                (&local_108,(ulonglong)puVar3 & 0xffffffff,puVar7,iVar6);
      puVar5 = (undefined1 *)(ulonglong)local_58;
    }
    puVar3 = local_60;
    FUN_140a6ec50(param_2 + 0x30,5);
    FUN_140a78ce0(param_2 + 0x30,puVar3,puVar5);
    FUN_140a6ec50(param_2 + 0x30,3);
    puVar4 = *(undefined8 **)(param_2 + 0x50);
    if (*(undefined8 **)(param_2 + 0x58) < puVar4 + 2) {
      rapidjson::internal::Stack<rapidjson::CrtAllocator>::
      Expand<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0>::Level>
                (param_2 + 0x38,1);
      puVar4 = *(undefined8 **)(param_2 + 0x50);
    }
    *(undefined8 **)(param_2 + 0x50) = puVar4 + 2;
    *puVar4 = 0;
    *(undefined1 *)(puVar4 + 1) = 0;
    lVar2 = *(longlong *)(param_2 + 0x30);
    puVar5 = *(undefined1 **)(lVar2 + 0x18);
    if (*(undefined1 **)(lVar2 + 0x20) < puVar5 + 1) {
      rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar2,1);
      puVar5 = *(undefined1 **)(lVar2 + 0x18);
    }
    *(undefined1 **)(lVar2 + 0x18) = puVar5 + 1;
    *puVar5 = 0x7b;
    if (local_68 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (local_f8[0] != 0) {
      FMemory::Free();
    }
    FUN_142deb8b0(lVar8,param_2,local_100);
    *(longlong *)(param_2 + 0x50) = *(longlong *)(param_2 + 0x50) + -0x10;
    lVar2 = *(longlong *)(param_2 + 0x30);
    puVar5 = *(undefined1 **)(lVar2 + 0x18);
    if (*(undefined1 **)(lVar2 + 0x20) < puVar5 + 1) {
      rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar2,1);
      puVar5 = *(undefined1 **)(lVar2 + 0x18);
    }
    *(undefined1 **)(lVar2 + 0x18) = puVar5 + 1;
    *puVar5 = 0x7d;
  }
  return;
}



// FUNCTION 142deb8b0 FUN_142deb8b0 body=2249 status=ok
// SIG undefined FUN_142deb8b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142deb8b0(longlong param_1,double param_2,undefined8 param_3)

{
  char cVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  double dVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  undefined2 *puVar12;
  void *pvVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined2 *puVar16;
  void *pvVar17;
  longlong *plVar18;
  int iVar19;
  uint uVar20;
  longlong *plVar21;
  undefined4 *puVar22;
  ulonglong uVar23;
  float *pfVar24;
  void *_Src;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_698 [32];
  uint local_678;
  int local_674;
  longlong *local_670;
  longlong *local_668;
  double local_660;
  longlong *local_658;
  uint local_650;
  int local_64c;
  undefined4 *local_648;
  int local_640;
  int local_63c;
  longlong *local_638;
  void *local_630;
  uint local_628;
  uint local_624;
  undefined8 local_620;
  undefined8 local_618;
  undefined1 local_610;
  undefined1 local_608 [608];
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined1 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined4 local_35c;
  longlong local_350;
  undefined4 local_348;
  undefined8 local_340;
  longlong local_238;
  undefined8 local_230;
  longlong local_128;
  undefined8 local_120;
  longlong local_98;
  undefined8 local_90;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_698;
  iVar19 = 0;
  plVar21 = *(longlong **)(param_1 + 8);
  plVar10 = plVar21 + (longlong)*(int *)(param_1 + 0x10) * 8;
  local_648 = (undefined4 *)0x0;
  local_674 = 0;
  local_63c = 0;
  local_658 = (longlong *)0x0;
  local_678 = 0;
  local_64c = 0;
  local_670 = plVar21;
  local_668 = plVar10;
  local_660 = param_2;
  local_620 = param_3;
  iVar7 = 0;
  if (plVar21 != plVar10) {
    do {
      iVar19 = iVar7;
      pvVar13 = (void *)0x0;
      plVar18 = (longlong *)*plVar21;
      local_670 = plVar21;
      local_638 = plVar18;
      if (plVar18 != (longlong *)0x0) {
        local_630 = (void *)0x0;
        uVar20 = 0;
        local_624 = 0;
        lVar9 = UListViewBase::GetPrivateStaticClass();
        uVar6 = local_620;
        if ((*(int *)(plVar18[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar18[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
            != lVar9 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          plVar10 = plVar18;
          plVar14 = (longlong *)plVar18[0x3e];
        }
        else {
          plVar10 = (longlong *)0x0;
          plVar14 = plVar10;
        }
        fVar27 = *(float *)(plVar21 + 7);
        iVar19 = 5;
        pvVar17 = pvVar13;
        _Src = pvVar13;
        while ((plVar10 != (longlong *)0x0 &&
               (uVar20 = (uint)pvVar13, plVar18 = local_638, 0 < iVar19))) {
          iVar19 = iVar19 + -1;
          if (plVar14 != (longlong *)0x0) {
            local_3a8 = 0;
            local_390 = 0;
            local_370 = 0;
            local_35c = 0;
            local_350 = 0;
            local_348 = 0;
            local_340 = 0;
            local_238 = 0;
            local_128 = 0;
            local_98 = 0;
            local_618 = uVar6;
            local_610 = 1;
            local_3a0 = 0;
            local_398 = 1;
            local_388 = 0;
            local_368 = 0;
            local_360 = 0xffffffff;
            local_230 = 0;
            local_120 = 0;
            local_90 = 0;
            fVar26 = (float)(**(code **)(*plVar14 + 0x2c8))(plVar14,&local_618);
            if (local_98 != 0) {
              FMemory::Free();
            }
            if (local_128 != 0) {
              FMemory::Free();
            }
            if (local_238 != 0) {
              FMemory::Free();
            }
            local_348 = 0;
            if (local_350 != 0) {
              FMemory::Free();
            }
            TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                      (&local_390);
            FUN_14099aac0(local_608);
            cVar1 = (char)plVar10[0x3f];
            if (cVar1 == '\0') {
              if (1e-08 < ABS(fVar26)) {
                fVar27 = fVar27 / fVar26;
              }
            }
            else if (cVar1 == '\x01') {
              fVar27 = fVar27 * fVar26;
            }
            else if (cVar1 == '\x02') {
              fVar27 = fVar27 - fVar26;
            }
            else if (cVar1 == '\x03') {
              fVar27 = fVar27 + fVar26;
            }
          }
          lVar9 = (longlong)(int)uVar20;
          local_628 = uVar20 + 1;
          if ((int)pvVar17 < (int)local_628) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_630,pvVar13);
            pvVar17 = (void *)(ulonglong)local_624;
            _Src = local_630;
          }
          uVar20 = local_628;
          pvVar13 = (void *)(ulonglong)local_628;
          *(float *)((longlong)_Src + lVar9 * 4) = fVar27;
          plVar10 = plVar14;
          if (plVar14 == (longlong *)0x0) {
            fVar27 = 0.0;
            plVar18 = local_638;
            plVar14 = (longlong *)0x0;
          }
          else {
            local_3a8 = 0;
            local_3a0 = 0;
            local_390 = 0;
            local_388 = 0;
            local_370 = 0;
            local_368 = 0;
            local_35c = 0;
            local_350 = 0;
            local_348 = 0;
            local_340 = 0;
            local_238 = 0;
            local_230 = 0;
            local_128 = 0;
            local_120 = 0;
            local_98 = 0;
            local_90 = 0;
            local_618 = uVar6;
            local_610 = 1;
            local_398 = 1;
            local_360 = 0xffffffff;
            fVar27 = (float)(**(code **)(*plVar14 + 0x2c8))(plVar14,&local_618);
            if (local_98 != 0) {
              FMemory::Free();
            }
            if (local_128 != 0) {
              FMemory::Free();
            }
            if (local_238 != 0) {
              FMemory::Free();
            }
            local_348 = 0;
            if (local_350 != 0) {
              FMemory::Free();
            }
            TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                      (&local_390);
            FUN_14099aac0(local_608);
            plVar18 = local_638;
            plVar14 = (longlong *)plVar14[0x3e];
          }
        }
        uVar8 = (**(code **)(*plVar18 + 0x278))(plVar18);
        iVar19 = local_674;
        lVar9 = (longlong)local_674;
        local_674 = local_674 + 1;
        local_640 = local_674;
        if (local_63c < local_674) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_648,iVar19);
        }
        iVar19 = local_640;
        uVar4 = local_678;
        local_648[lVar9] = uVar8;
        lVar9 = (longlong)(int)local_678;
        local_678 = local_678 + 1;
        local_674 = local_640;
        local_650 = local_678;
        if (local_64c < (int)local_678) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_658,uVar4);
        }
        plVar21 = local_658 + lVar9 * 2;
        *plVar21 = 0;
        *(uint *)(plVar21 + 1) = uVar20;
        local_678 = local_650;
        if (uVar20 == 0) {
          *(undefined4 *)((longlong)plVar21 + 0xc) = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(plVar21,uVar20,0);
          _guard_xfg_dispatch_icall_nop((void *)*plVar21,_Src,(longlong)(int)uVar20 << 2);
        }
        plVar10 = local_668;
        if (_Src != (void *)0x0) {
          FMemory::Free(_Src);
          plVar10 = local_668;
        }
      }
      plVar21 = local_670 + 8;
      local_670 = plVar21;
      iVar7 = iVar19;
    } while (plVar21 != plVar10);
  }
  puVar22 = local_648;
  dVar5 = local_660;
  uVar25 = 0;
  plVar21 = (longlong *)((longlong)local_660 + 0x30);
  FUN_140a6ec50(plVar21,5);
  FUN_140a78ce0(plVar21,"Hashes",6);
  FUN_140d4d680(plVar21);
  uVar23 = (ulonglong)((longlong)(puVar22 + iVar19) + (3 - (longlong)puVar22)) >> 2;
  if (puVar22 + iVar19 < puVar22) {
    uVar23 = uVar25;
  }
  if (uVar23 != 0) {
    do {
      uVar8 = *puVar22;
      FUN_140a6ec50(plVar21,6);
      lVar9 = *plVar21;
      lVar15 = *(longlong *)(lVar9 + 0x18);
      if (*(ulonglong *)(lVar9 + 0x20) < lVar15 + 10U) {
        rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar9,10);
        lVar15 = *(longlong *)(lVar9 + 0x18);
      }
      *(longlong *)(lVar9 + 0x18) = lVar15 + 10;
      lVar9 = rapidjson::internal::u32toa(uVar8,lVar15);
      puVar22 = puVar22 + 1;
      uVar25 = uVar25 + 1;
      *(longlong *)(*plVar21 + 0x18) = *(longlong *)(*plVar21 + 0x18) + (lVar9 - lVar15) + -10;
    } while (uVar25 != uVar23);
  }
  *(longlong *)((longlong)dVar5 + 0x50) = *(longlong *)((longlong)dVar5 + 0x50) + -0x10;
  lVar9 = *plVar21;
  puVar11 = *(undefined1 **)(lVar9 + 0x18);
  if (*(undefined1 **)(lVar9 + 0x20) < puVar11 + 1) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar9,1);
    puVar11 = *(undefined1 **)(lVar9 + 0x18);
  }
  *(undefined1 **)(lVar9 + 0x18) = puVar11 + 1;
  *puVar11 = 0x5d;
  FUN_140a6ec50(plVar21,5);
  FUN_140a78ce0(plVar21,"Values",6);
  FUN_140d4d680(plVar21);
  uVar23 = (ulonglong)(int)local_678;
  local_670 = local_658;
  plVar18 = local_658 + uVar23 * 2;
  plVar10 = local_658;
  local_638 = plVar18;
  if (local_658 != plVar18) {
    do {
      local_670 = plVar10;
      FUN_140d4d680();
      uVar25 = 0;
      pfVar24 = (float *)*plVar10;
      uVar23 = (longlong)(int)plVar10[1] & 0x3fffffffffffffff;
      if (pfVar24 + (int)plVar10[1] < pfVar24) {
        uVar23 = uVar25;
      }
      if (uVar23 != 0) {
        do {
          dVar2 = (double)*pfVar24;
          FUN_140a6ec50(plVar21,6);
          local_660 = dVar2;
          if (((ulonglong)dVar2 & 0x7ff0000000000000) != 0x7ff0000000000000) {
            lVar9 = *plVar21;
            puVar12 = *(undefined2 **)(lVar9 + 0x18);
            if (*(undefined1 **)(lVar9 + 0x20) < (undefined1 *)((longlong)puVar12 + 0x19)) {
              rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar9,0x19);
              puVar12 = *(undefined2 **)(lVar9 + 0x18);
            }
            *(undefined1 **)(lVar9 + 0x18) = (undefined1 *)((longlong)puVar12 + 0x19);
            uVar8 = *(undefined4 *)((longlong)dVar5 + 0x68);
            if (ABS(dVar2) == 0.0) {
              puVar16 = puVar12;
              if (((ulonglong)dVar2 & 0x8000000000000000) != 0) {
                *(undefined1 *)puVar12 = 0x2d;
                puVar16 = (undefined2 *)((longlong)puVar12 + 1);
              }
              *puVar16 = 0x2e30;
              puVar11 = (undefined1 *)((longlong)puVar16 + 3);
              *(undefined1 *)(puVar16 + 1) = 0x30;
              local_660 = dVar2;
            }
            else {
              puVar16 = puVar12;
              if (dVar2 < 0.0) {
                *(undefined1 *)puVar12 = 0x2d;
                puVar16 = (undefined2 *)((longlong)puVar12 + 1);
              }
              local_660 = dVar2;
              FUN_142ab5720(SUB84(dVar2,0),puVar16,&local_668,&local_674);
              puVar11 = (undefined1 *)
                        FUN_142ab5ca0(puVar16,(ulonglong)local_668 & 0xffffffff,local_674,uVar8);
            }
            *(longlong *)(*plVar21 + 0x18) =
                 (longlong)(puVar11 + *(longlong *)(*plVar21 + 0x18) + (-0x19 - (longlong)puVar12));
          }
          pfVar24 = pfVar24 + 1;
          uVar25 = uVar25 + 1;
          plVar10 = local_670;
          plVar18 = local_638;
        } while (uVar25 != uVar23);
      }
      *(longlong *)((longlong)dVar5 + 0x50) = *(longlong *)((longlong)dVar5 + 0x50) + -0x10;
      lVar9 = *plVar21;
      puVar11 = *(undefined1 **)(lVar9 + 0x18);
      if (*(undefined1 **)(lVar9 + 0x20) < puVar11 + 1) {
        rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar9,1);
        puVar11 = *(undefined1 **)(lVar9 + 0x18);
      }
      local_670 = plVar10 + 2;
      *(undefined1 **)(lVar9 + 0x18) = puVar11 + 1;
      *puVar11 = 0x5d;
      plVar10 = local_670;
    } while (local_670 != plVar18);
    uVar23 = (ulonglong)local_678;
  }
  plVar10 = local_658;
  *(longlong *)((longlong)dVar5 + 0x50) = *(longlong *)((longlong)dVar5 + 0x50) + -0x10;
  lVar9 = *plVar21;
  puVar11 = *(undefined1 **)(lVar9 + 0x18);
  if (*(undefined1 **)(lVar9 + 0x20) < puVar11 + 1) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar9,1);
    puVar11 = *(undefined1 **)(lVar9 + 0x18);
  }
  *(undefined1 **)(lVar9 + 0x18) = puVar11 + 1;
  *puVar11 = 0x5d;
  uVar20 = (uint)uVar23;
  plVar21 = plVar10;
  while (uVar20 != 0) {
    if (*plVar21 != 0) {
      FMemory::Free();
    }
    plVar21 = plVar21 + 2;
    uVar20 = (int)uVar23 - 1;
    uVar23 = (ulonglong)uVar20;
  }
  if (plVar10 != (longlong *)0x0) {
    FMemory::Free(plVar10);
  }
  if (local_648 != (undefined4 *)0x0) {
    FMemory::Free(local_648);
  }
  return;
}



// FUNCTION 142dec180 FUN_142dec180 body=143 status=ok
// SIG undefined FUN_142dec180(void)

longlong FUN_142dec180(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  byte *pbVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  int local_res8 [2];
  
  plVar2 = *(longlong **)(param_1 + 0x2d8);
  if (plVar2 != (longlong *)0x0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(param_1 + 0x288),local_res8);
    pbVar6 = (byte *)0x0;
    pbVar5 = pbVar6;
    if (local_res8[0] != -1) {
      pbVar5 = (byte *)(*(longlong *)(param_1 + 0x288) + (longlong)local_res8[0] * 0x18);
    }
    pbVar3 = pbVar5 + 8;
    if (pbVar5 == (byte *)0x0) {
      pbVar3 = pbVar6;
    }
    if (pbVar3 != (byte *)0x0) {
      pbVar6 = (byte *)(ulonglong)*pbVar3;
    }
    lVar4 = *plVar2;
    lVar1 = lVar4 + (longlong)(int)plVar2[1] * 0x18;
    for (; lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
      if (*(char *)(lVar4 + 0x14) == (char)pbVar6) {
        return lVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 142dec210 FUN_142dec210 body=236 status=ok
// SIG undefined FUN_142dec210(void)

longlong * FUN_142dec210(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  plVar4 = *(longlong **)(param_1 + 0x270);
  if (*(longlong **)(param_1 + 0x270) == (longlong *)0x0) {
    plVar4 = plVar1;
  }
  iVar3 = *(int *)(param_1 + 0x278);
  lVar5 = (longlong)iVar3;
  plVar2 = plVar4 + lVar5 * 0x13;
  if (plVar4 != plVar2) {
    do {
      if (*plVar4 == *param_2) {
        return plVar4;
      }
      plVar4 = plVar4 + 0x13;
    } while (plVar4 != plVar2);
  }
  *(int *)(param_1 + 0x278) = iVar3 + 1;
  if (*(int *)(param_1 + 0x27c) < iVar3 + 1) {
    FUN_140e8f630(plVar1,iVar3);
  }
  plVar4 = *(longlong **)(param_1 + 0x270);
  if (*(longlong **)(param_1 + 0x270) == (longlong *)0x0) {
    plVar4 = plVar1;
  }
  plVar4[lVar5 * 0x13] = *param_2;
  plVar4[lVar5 * 0x13 + 0x11] = 0;
  plVar4[lVar5 * 0x13 + 0x12] = 0;
  plVar4 = *(longlong **)(param_1 + 0x270);
  if (*(longlong **)(param_1 + 0x270) == (longlong *)0x0) {
    plVar4 = plVar1;
  }
  return plVar4 + (longlong)(*(int *)(param_1 + 0x278) + -1) * 0x13;
}



// FUNCTION 142dec300 FUN_142dec300 body=263 status=ok
// SIG undefined FUN_142dec300(void)

void FUN_142dec300(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 local_38 [8];
  longlong *local_30;
  
  FText::operator=(param_2,param_1 + 6);
  uVar4 = FUN_142e81340(param_1,local_38,*param_5,param_5);
  FText::operator=(param_3,uVar4);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  uVar6 = 0;
  if (*(char *)(param_5 + 1) == '\0') {
    lVar5 = FUN_142dec180(param_5,param_1);
    if (lVar5 != 0) {
      uVar6 = *(undefined4 *)(lVar5 + 0x10);
    }
  }
  else {
    uVar6 = (**(code **)(*param_1 + 0x298))(param_1,param_5);
  }
  *param_4 = uVar6;
  if ((*(char *)(param_5 + 1) != '\0') && (lVar5 = FUN_142dec180(param_5,param_1), lVar5 != 0)) {
    *(undefined4 *)(lVar5 + 0x10) = uVar6;
  }
  return;
}



// FUNCTION 142dec410 FUN_142dec410 body=382 status=ok
// SIG undefined FUN_142dec410(void)

void FUN_142dec410(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  FText::operator=(param_2,param_1 + 6);
  uVar7 = 0;
  if (*(char *)(param_5 + 1) == '\0') {
    lVar5 = FUN_142dec180(param_5,param_1);
    if (lVar5 != 0) {
      uVar7 = *(undefined4 *)(lVar5 + 0x10);
    }
  }
  else {
    uVar7 = (**(code **)(*param_1 + 0x298))(param_1,param_5);
  }
  *param_4 = uVar7;
  if ((*(char *)(param_5 + 1) != '\0') && (lVar5 = FUN_142dec180(param_5,param_1,uVar7), lVar5 != 0)
     ) {
    *(undefined4 *)(lVar5 + 0x10) = uVar7;
    uVar7 = *param_4;
  }
  FUN_142de8a20(param_1,local_48,uVar7,*param_5);
  if (*(char *)(param_5 + 1) == '\0') {
    lVar5 = FUN_142dec180(param_5,param_1);
    if ((lVar5 == 0) || (*(int *)(lVar5 + 8) <= (int)(uint)*(byte *)(lVar5 + 0x15)))
    goto LAB_142dec512;
  }
  else if ((param_1[0x3e] == 0) ||
          ((param_1[0x40] != 0 && (cVar4 = FUN_142c48f60(param_1[0x40],*param_5,0), cVar4 == '\0')))
          ) goto LAB_142dec512;
  FUN_142de5390(param_1,local_48,param_4,param_1,param_5);
LAB_142dec512:
  uVar6 = FText::FromString(local_38,local_48);
  FText::operator=(param_3,uVar6);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142dec590 FUN_142dec590 body=105 status=ok
// SIG undefined FUN_142dec590(void)

void FUN_142dec590(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  longlong lVar2;
  
  FText::operator=(param_2,param_1 + 0x30);
  lVar2 = param_1 + 0x80;
  cVar1 = FText::IsEmpty(lVar2);
  if (cVar1 != '\0') {
    lVar2 = param_1 + 0x68;
  }
  FText::operator=(param_3,lVar2);
  *param_4 = 0;
  return;
}



// FUNCTION 142dec600 FUN_142dec600 body=89 status=ok
// SIG undefined FUN_142dec600(void)

undefined1 FUN_142dec600(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int local_res8 [8];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x288),local_res8);
  puVar2 = (undefined1 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined1 *)(*(longlong *)(param_1 + 0x288) + (longlong)local_res8[0] * 0x18);
  }
  puVar1 = puVar2 + 8;
  if (puVar2 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 == (undefined1 *)0x0) {
    return 0;
  }
  return *puVar1;
}



// FUNCTION 142dec660 FUN_142dec660 body=134 status=ok
// SIG undefined FUN_142dec660(void)

undefined8 FUN_142dec660(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && (param_1 != (longlong *)0x0)) {
    lVar1 = (**(code **)(*param_1 + 0x670))();
    if (lVar1 == 0) {
      lVar1 = (**(code **)(*param_1 + 0x668))(param_1);
    }
    if ((*(char *)(param_2 + 0x61) != '\0') || (lVar1 != 0)) {
      lVar2 = FUN_142dec8c0(param_1);
      if (lVar2 != 0) {
        uVar3 = FUN_142dcff10(lVar2,lVar1,param_2);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 142dec6f0 FUN_142dec6f0 body=123 status=ok
// SIG undefined FUN_142dec6f0(void)

void FUN_142dec6f0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    if (*(char *)(param_1 + 0x68) == '\0') {
      local_18 = *param_2;
      uStack_10 = 0;
      uVar1 = FUN_142ca2f00(*(longlong *)(param_1 + 0x220),&local_18,0);
    }
    else {
      uVar1 = FUN_142de6760(param_2,0,*(char *)(param_1 + 0x68) == '\x02');
    }
  }
  FUN_142deadc0(param_1,uVar1,*param_2);
  return;
}



// FUNCTION 142dec770 FUN_142dec770 body=86 status=ok
// SIG undefined FUN_142dec770(void)

undefined8 FUN_142dec770(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxGameSystemCore\\Public\\UI/UIStatData_Numeric.h"
             ,0xf0,L"Pure virtual not implemented (%s)",L"UUIStatData_Numeric::GetStatValue");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxGameSystemCore\\Public\\UI/UIStatData_Numeric.h"
             ,0xf0,L"Pure virtual not implemented (%s)",L"UUIStatData_Numeric::GetStatValue");
  return 0;
}



// FUNCTION 142dec7d0 FUN_142dec7d0 body=64 status=ok
// SIG undefined FUN_142dec7d0(void)

void FUN_142dec7d0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(longlong **)(param_1 + 0x220) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x220) + 0x278))();
  }
  FUN_142deadc0(param_1,uVar1,*param_2);
  return;
}



// FUNCTION 142dec810 FUN_142dec810 body=174 status=ok
// SIG undefined FUN_142dec810(void)

longlong * FUN_142dec810(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b34ca0) {
    _Init_thread_header(&DAT_146b34ca0);
    if (DAT_146b34ca0 == -1) {
      atexit((_func_5014 *)&LAB_143ec1020);
      _Init_thread_footer(&DAT_146b34ca0);
    }
  }
  plVar2 = (longlong *)*param_1;
  plVar1 = plVar2 + (longlong)(int)param_1[1] * 3;
  if (plVar2 != plVar1) {
    do {
      if (*plVar2 == *param_2) {
        return plVar2 + 1;
      }
      plVar2 = plVar2 + 3;
    } while (plVar2 != plVar1);
  }
  return (longlong *)&DAT_146b34c90;
}



// FUNCTION 142dec8c0 FUN_142dec8c0 body=119 status=ok
// SIG undefined FUN_142dec8c0(void)

undefined8 FUN_142dec8c0(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x140), lVar2 != 0)) {
    lVar3 = FUN_142e4e340();
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
      uVar4 = FUN_142d84360(lVar2);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 142dec940 FUN_142dec940 body=63 status=ok
// SIG undefined FUN_142dec940(void)

undefined8 FUN_142dec940(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x180) != 0) {
    lVar1 = FUN_142df3580(param_2);
    if (lVar1 != 0) {
      uVar2 = FUN_142de8c20(*(undefined8 *)(param_1 + 0x180),lVar1);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 142dec980 FUN_142dec980 body=27 status=ok
// SIG undefined FUN_142dec980(void)

uint FUN_142dec980(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x180);
  if ((lVar2 == 0) || (param_2 == 0)) {
    return 1;
  }
  if (param_2 == 0) {
    return 1;
  }
  if (param_2 == lVar2) {
    return (uint)*(byte *)(lVar2 + 0x40);
  }
  if ((int)(uint)*(byte *)(param_2 + 0x6a) < *(int *)(lVar2 + 0x88)) {
    lVar3 = *(longlong *)(lVar2 + 0x80);
    if (*(longlong *)(lVar2 + 0x80) == 0) {
      lVar3 = lVar2 + 0x70;
    }
    bVar1 = *(byte *)(lVar3 + (ulonglong)*(byte *)(param_2 + 0x6a));
    if (bVar1 != 0) {
      return bVar1 - 1;
    }
  }
  if ((int)(uint)*(byte *)(lVar2 + 0x6a) < *(int *)(param_2 + 0xa8)) {
    lVar3 = *(longlong *)(param_2 + 0xa0);
    if (*(longlong *)(param_2 + 0xa0) == 0) {
      lVar3 = param_2 + 0x90;
    }
    bVar1 = *(byte *)(lVar3 + (ulonglong)*(byte *)(lVar2 + 0x6a));
    if (bVar1 != 0) {
      return bVar1 - 1;
    }
  }
  if (*(char *)(param_2 + 0x43) != '\0') {
    return (uint)*(byte *)(param_2 + 0x42);
  }
  return (uint)*(byte *)(lVar2 + 0x41);
}



// FUNCTION 142dec9a0 FUN_142dec9a0 body=18 status=ok
// SIG undefined FUN_142dec9a0(void)

undefined1 FUN_142dec9a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x180) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x180) + 0x69);
  }
  return 0;
}



// FUNCTION 142dec9c0 FUN_142dec9c0 body=131 status=ok
// SIG undefined FUN_142dec9c0(void)

undefined8 FUN_142dec9c0(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (param_3 != '\0') {
    if (param_3 == '\x01') {
LAB_142dec9f2:
      lVar1 = param_1 + 0x710;
      goto LAB_142deca0b;
    }
    if (param_3 == '\x02') {
      if (*(char *)(param_1 + 0x751) == '\0') {
        lVar1 = param_1 + 0x730;
        goto LAB_142deca0b;
      }
      if (*(char *)(param_1 + 0x750) != '\x01') goto LAB_142dec9f2;
    }
  }
  lVar1 = param_1 + 0x6f0;
LAB_142deca0b:
  local_18 = *(undefined4 *)(param_1 + 0x220);
  local_14 = *(undefined4 *)(param_1 + 0x224);
  local_10 = *(undefined4 *)(param_1 + 0x228);
  FUN_142de8d30(lVar1,local_10,&local_18);
  return param_2;
}



// FUNCTION 142deca50 FUN_142deca50 body=62 status=ok
// SIG undefined FUN_142deca50(void)

longlong FUN_142deca50(longlong param_1,char param_2)

{
  if (param_2 != '\0') {
    if (param_2 == '\x01') {
LAB_142deca76:
      return param_1 + 0x710;
    }
    if (param_2 == '\x02') {
      if (*(char *)(param_1 + 0x751) == '\0') {
        return param_1 + 0x730;
      }
      if (*(char *)(param_1 + 0x750) != '\x01') goto LAB_142deca76;
    }
  }
  return param_1 + 0x6f0;
}



// FUNCTION 142deca90 FUN_142deca90 body=378 status=ok
// SIG undefined FUN_142deca90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142deca90(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_28;
  undefined4 local_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (*(longlong **)(param_1 + 0x1e0) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142decab9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x830))();
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x168);
    if (lVar2 == 0) {
      local_28 = _DAT_1468b5d90;
      local_20 = DAT_1468b5d98;
    }
    else {
      local_28 = *(undefined8 *)(lVar2 + 0x220);
      local_20 = *(undefined4 *)(lVar2 + 0x228);
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    lVar1 = *(longlong *)(lVar1 + 0x168);
    if (lVar1 == 0) {
      uVar7 = (undefined4)DAT_1468b5da0;
      uVar8 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      uVar5 = DAT_1468b5da8;
    }
    else {
      local_18 = *(float *)(lVar1 + 0x210);
      fStack_14 = *(float *)(lVar1 + 0x214);
      fStack_10 = *(float *)(lVar1 + 0x218);
      fStack_c = *(float *)(lVar1 + 0x21c);
      auVar3._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_14);
      auVar3._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_18);
      auVar3._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_10);
      auVar3._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_c);
      iVar4 = movmskps(local_20,auVar3);
      if (iVar4 != 0) {
        *(float *)(lVar1 + 0x250) = local_18;
        *(float *)(lVar1 + 0x254) = fStack_14;
        *(float *)(lVar1 + 600) = fStack_10;
        *(float *)(lVar1 + 0x25c) = fStack_c;
        puVar6 = (undefined8 *)FQuat::Rotator(&local_18,&local_28);
        *(undefined8 *)(lVar1 + 0x260) = *puVar6;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar6 + 1);
      }
      uVar7 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
      uVar8 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      uVar5 = *(undefined4 *)(lVar1 + 0x268);
    }
    *param_3 = CONCAT44(uVar8,uVar7);
    *(undefined4 *)(param_3 + 1) = uVar5;
    return;
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *param_3 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  return;
}



// FUNCTION 142decc10 FUN_142decc10 body=2548 status=ok
// SIG undefined FUN_142decc10(void)

/* WARNING: Removing unreachable block (ram,0x000142decec8) */
/* WARNING: Removing unreachable block (ram,0x000142deced5) */

undefined4 FUN_142decc10(longlong param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 **ppuVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined2 *puVar16;
  int iVar17;
  undefined2 *puVar18;
  bool bVar19;
  undefined2 *local_res10;
  undefined8 local_res18;
  undefined8 *local_res20;
  undefined2 *local_c8;
  int local_c0;
  int local_bc;
  undefined2 *local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined2 *local_a0;
  undefined2 *local_98;
  void *local_90;
  ulonglong local_88;
  undefined2 *local_80 [2];
  longlong local_70 [2];
  longlong local_60 [4];
  
  puVar18 = (undefined2 *)0x0;
  iVar4 = 0;
  iVar17 = 0;
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_146b34c58) && (_Init_thread_header(&DAT_146b34c58), DAT_146b34c58 == -1)) {
    uVar8 = UEnum::GetPrivateStaticClass();
    DAT_146b34c50 = FUN_141799410(uVar8,0xffffffffffffffff,L"EUIStatValueStyle",1);
    _Init_thread_footer(&DAT_146b34c58);
  }
  if ((*piVar11 < DAT_146b34c68) && (_Init_thread_header(&DAT_146b34c68), DAT_146b34c68 == -1)) {
    uVar8 = UEnum::GetPrivateStaticClass();
    DAT_146b34c60 = FUN_141799410(uVar8,0xffffffffffffffff,L"EUIStatValueSignStyle",1);
    _Init_thread_footer(&DAT_146b34c68);
  }
  if ((*piVar11 < DAT_146b34c78) && (_Init_thread_header(&DAT_146b34c78), DAT_146b34c78 == -1)) {
    uVar8 = UEnum::GetPrivateStaticClass();
    DAT_146b34c70 = FUN_141799410(uVar8,0xffffffffffffffff,L"EUIStatValueRoundingMode",1);
    _Init_thread_footer(&DAT_146b34c78);
  }
  if ((*piVar11 < DAT_146b34c88) && (_Init_thread_header(&DAT_146b34c88), DAT_146b34c88 == -1)) {
    uVar8 = UEnum::GetPrivateStaticClass();
    DAT_146b34c80 = FUN_141799410(uVar8,0xffffffffffffffff,L"EUIStatCombinationMethod",1);
    _Init_thread_footer(&DAT_146b34c88);
  }
  bVar19 = DAT_146b34c50 == 0;
  if (bVar19) {
    local_b8 = (undefined2 *)0x0;
    local_b0 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy(local_b8,L"Error",0xc);
    ppuVar6 = &local_b8;
  }
  else {
    ppuVar6 = (undefined2 **)FUN_1417392b0(DAT_146b34c50,&local_c8,*(undefined1 *)(param_1 + 0x68));
  }
  puVar9 = *ppuVar6;
  *ppuVar6 = (undefined2 *)0x0;
  local_98 = puVar9;
  local_res20 = (undefined8 *)CONCAT44(local_res20._4_4_,*(undefined4 *)(ppuVar6 + 1));
  ppuVar6[1] = (undefined2 *)0x0;
  if ((bVar19) && (local_b8 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if ((!bVar19) && (local_c8 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  bVar19 = DAT_146b34c60 == 0;
  if (bVar19) {
    local_b8 = (undefined2 *)0x0;
    local_b0 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy(local_b8,L"Error",0xc);
    ppuVar6 = &local_b8;
  }
  else {
    ppuVar6 = (undefined2 **)FUN_1417392b0(DAT_146b34c60,local_80,*(undefined1 *)(param_1 + 0x69));
  }
  puVar9 = *ppuVar6;
  *ppuVar6 = (undefined2 *)0x0;
  local_a0 = puVar9;
  local_res18 = CONCAT44(local_res18._4_4_,*(undefined4 *)(ppuVar6 + 1));
  ppuVar6[1] = (undefined2 *)0x0;
  if ((bVar19) && (local_b8 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if ((!bVar19) && (local_80[0] != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  bVar19 = DAT_146b34c70 == 0;
  if (bVar19) {
    local_b8 = (undefined2 *)0x0;
    local_b0 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy(local_b8,L"Error",0xc);
    ppuVar6 = &local_b8;
  }
  else {
    ppuVar6 = (undefined2 **)FUN_1417392b0(DAT_146b34c70,local_60,*(undefined1 *)(param_1 + 0x6a));
  }
  puVar9 = *ppuVar6;
  *ppuVar6 = (undefined2 *)0x0;
  local_a8 = puVar9;
  iVar15 = *(int *)(ppuVar6 + 1);
  ppuVar6[1] = (undefined2 *)0x0;
  if ((bVar19) && (local_b8 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if ((!bVar19) && (local_60[0] != 0)) {
    FMemory::Free();
  }
  bVar19 = DAT_146b34c80 == 0;
  if (bVar19) {
    local_b8 = (undefined2 *)0x0;
    local_b0 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy(local_b8,L"Error",0xc);
    ppuVar6 = &local_b8;
  }
  else {
    ppuVar6 = (undefined2 **)FUN_1417392b0(DAT_146b34c80,local_70,*(undefined1 *)(param_1 + 0x1f8));
  }
  puVar9 = *ppuVar6;
  *ppuVar6 = (undefined2 *)0x0;
  iVar10 = *(int *)(ppuVar6 + 1);
  ppuVar6[1] = (undefined2 *)0x0;
  local_80[0] = puVar9;
  if ((!bVar19) && (local_70[0] != 0)) {
    FMemory::Free();
  }
  iVar3 = iVar17;
  if (*(longlong **)(param_1 + 0x1f0) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x278))();
  }
  uVar1 = *(uint *)(param_1 + 0x6c);
  puVar16 = &DAT_143f3eda8;
  if (iVar10 != 0) {
    puVar16 = puVar9;
  }
  puVar9 = &DAT_143f3eda8;
  if (iVar15 != 0) {
    puVar9 = local_a8;
  }
  puVar14 = &DAT_143f3eda8;
  if ((int)local_res18 != 0) {
    puVar14 = local_a0;
  }
  puVar13 = &DAT_143f3eda8;
  if ((int)local_res20 != 0) {
    puVar13 = local_98;
  }
  FString::PrintfImpl(&local_90,L"%s%s%s%s%u%u%u%u%u%u%u%u",puVar13,puVar14,puVar9,puVar16,iVar3,
                      uVar1 & 1,uVar1 >> 1 & 1,uVar1 >> 2 & 1,uVar1 >> 3 & 1,uVar1 >> 4 & 1,
                      uVar1 >> 5 & 1,*(undefined4 *)(param_1 + 0xe8));
  local_res18 = *(undefined8 *)(param_1 + 0x18);
  FName::ToString(&local_res18,&local_b8);
  puVar7 = (undefined8 *)FTextInspector::GetSourceString(param_1 + 0xf0);
  iVar15 = *(int *)(puVar7 + 1);
  if ((int)local_b0 < 2) {
    pvVar2 = (void *)*puVar7;
    local_res10 = (undefined2 *)0x0;
    local_c8 = (undefined2 *)0x0;
    local_c0 = iVar15;
    if (iVar15 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,iVar15,0);
      local_res10 = local_c8;
      _guard_xfg_dispatch_icall_nop(local_c8,pvVar2,(longlong)iVar15 * 2);
      iVar15 = local_c0;
      iVar4 = local_bc;
    }
  }
  else {
    iVar10 = iVar15 + -1;
    if (iVar15 == 0) {
      iVar10 = iVar17;
    }
    if (((int)local_b0 != 0) || (iVar4 = 1, iVar10 == 0)) {
      iVar4 = iVar17;
    }
    iVar4 = iVar4 + (int)local_b0;
    iVar15 = local_b0._4_4_;
    local_c8 = local_b8;
    local_b8 = (undefined2 *)0x0;
    local_c0 = (int)local_b0;
    local_bc = local_b0._4_4_;
    local_b0 = 0;
    if (iVar15 < iVar4 + iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8);
    }
    iVar3 = local_c0;
    pvVar2 = (void *)*puVar7;
    iVar15 = local_c0;
    iVar4 = local_bc;
    local_res10 = local_c8;
    if (iVar10 != 0) {
      lVar12 = (longlong)local_c0;
      local_c0 = local_c0 + (uint)(local_c0 == 0) + iVar10;
      if (local_bc < local_c0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,iVar3);
      }
      iVar4 = local_bc;
      iVar15 = local_c0;
      local_res10 = local_c8;
      puVar9 = local_c8 + (lVar12 - (ulonglong)(iVar3 != 0));
      _guard_xfg_dispatch_icall_nop(puVar9,pvVar2,(longlong)iVar10 * 2);
      puVar9[iVar10] = 0;
    }
  }
  puVar9 = local_res10;
  local_res20 = (undefined8 *)FTextInspector::GetSourceString(param_1 + 0x30);
  local_c0 = *(int *)(local_res20 + 1);
  lVar12 = (longlong)local_c0;
  if (iVar15 < 2) {
    pvVar2 = (void *)*local_res20;
    local_c8 = (undefined2 *)0x0;
    if (local_c0 == 0) {
      puVar9 = puVar18;
      iVar3 = 0;
      iVar15 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,local_c0,0);
      puVar9 = local_c8;
      _guard_xfg_dispatch_icall_nop(local_c8,pvVar2,lVar12 * 2);
      iVar3 = local_bc;
      iVar15 = local_c0;
    }
  }
  else {
    iVar10 = local_c0 + -1;
    if (local_c0 == 0) {
      iVar10 = iVar17;
    }
    if ((iVar15 != 0) || (iVar3 = 1, iVar10 == 0)) {
      iVar3 = iVar17;
    }
    local_res10 = (undefined2 *)0x0;
    local_c8 = puVar9;
    local_c0 = iVar15;
    local_bc = iVar4;
    if (iVar4 < iVar15 + iVar10 + iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8);
    }
    iVar4 = local_c0;
    pvVar2 = (void *)*local_res20;
    puVar9 = local_c8;
    iVar3 = local_bc;
    iVar15 = local_c0;
    if (iVar10 != 0) {
      lVar12 = (longlong)local_c0;
      local_c0 = local_c0 + (uint)(local_c0 == 0) + iVar10;
      if (local_bc < local_c0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,iVar4);
      }
      iVar3 = local_bc;
      iVar15 = local_c0;
      puVar9 = local_c8;
      puVar16 = local_c8 + (lVar12 - (ulonglong)(iVar4 != 0));
      _guard_xfg_dispatch_icall_nop(puVar16,pvVar2,(longlong)iVar10 * 2);
      puVar16[iVar10] = 0;
    }
  }
  puVar7 = (undefined8 *)FName::ToString(param_1 + 0x50,local_70);
  if (iVar15 < 2) {
    puVar16 = (undefined2 *)*puVar7;
    *puVar7 = 0;
    local_c0 = *(int *)(puVar7 + 1);
    puVar7[1] = 0;
    iVar10 = *(int *)((longlong)puVar7 + 0xc);
  }
  else {
    iVar4 = *(int *)(puVar7 + 1) + -1;
    if (*(int *)(puVar7 + 1) == 0) {
      iVar4 = iVar17;
    }
    if ((iVar15 != 0) || (iVar10 = 1, iVar4 == 0)) {
      iVar10 = iVar17;
    }
    local_c8 = puVar9;
    local_bc = iVar3;
    if (iVar3 < iVar15 + iVar4 + iVar10) {
      local_c0 = iVar15;
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8);
      iVar15 = local_c0;
    }
    local_res20 = (undefined8 *)*puVar7;
    puVar16 = local_c8;
    puVar9 = puVar18;
    iVar10 = local_bc;
    local_c0 = iVar15;
    if (iVar4 != 0) {
      local_c0 = iVar4 + (uint)(iVar15 == 0) + iVar15;
      if (local_bc < local_c0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,iVar15);
      }
      iVar10 = local_bc;
      iVar3 = local_c0;
      puVar16 = local_c8;
      puVar9 = local_c8 + ((longlong)iVar15 - (ulonglong)(iVar15 != 0));
      _guard_xfg_dispatch_icall_nop(puVar9,local_res20,(longlong)iVar4 * 2);
      puVar9[iVar4] = 0;
      puVar9 = puVar18;
      local_c0 = iVar3;
    }
  }
  pvVar2 = local_90;
  iVar4 = (int)local_88;
  if (local_c0 < 2) {
    local_c8 = (undefined2 *)0x0;
    local_c0 = iVar4;
    if (iVar4 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,local_88 & 0xffffffff,0);
      puVar18 = local_c8;
      _guard_xfg_dispatch_icall_nop(local_c8,pvVar2,(longlong)iVar4 * 2);
    }
    iVar4 = local_c0;
    if (puVar16 != (undefined2 *)0x0) {
      FMemory::Free(puVar16);
    }
  }
  else {
    iVar15 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar15 = iVar17;
    }
    if ((local_c0 != 0) || (iVar4 = 1, iVar15 == 0)) {
      iVar4 = iVar17;
    }
    local_c8 = puVar16;
    local_bc = iVar10;
    if (iVar10 < iVar15 + iVar4 + local_c0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8);
    }
    pvVar2 = local_90;
    iVar17 = local_c0;
    puVar18 = local_c8;
    iVar4 = local_c0;
    if (iVar15 != 0) {
      lVar12 = (longlong)local_c0;
      local_c0 = iVar15 + (uint)(local_c0 == 0) + local_c0;
      if (local_bc < local_c0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,iVar17);
      }
      iVar4 = local_c0;
      puVar18 = local_c8;
      puVar16 = local_c8 + (lVar12 - (ulonglong)(iVar17 != 0));
      _guard_xfg_dispatch_icall_nop(puVar16,pvVar2,(longlong)iVar15 * 2);
      puVar16[iVar15] = 0;
    }
  }
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  if (local_res10 != (undefined2 *)0x0) {
    FMemory::Free(local_res10);
  }
  if (local_b8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  puVar9 = &DAT_143f3eda8;
  if (iVar4 != 0) {
    puVar9 = puVar18;
  }
  uVar5 = FUN_140438070(puVar9);
  if (puVar18 != (undefined2 *)0x0) {
    FMemory::Free(puVar18);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_80[0] != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_a0 != (undefined2 *)0x0) {
    FMemory::Free(local_a0);
  }
  if (local_98 != (undefined2 *)0x0) {
    FMemory::Free(local_98);
  }
  return uVar5;
}



// FUNCTION 142ded610 FUN_142ded610 body=590 status=ok
// SIG undefined FUN_142ded610(void)

longlong FUN_142ded610(longlong param_1,char param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  byte *pbVar4;
  longlong *plVar5;
  longlong *plVar6;
  byte *pbVar7;
  byte in_stack_ffffffffffffffb8;
  longlong local_40;
  longlong *plStack_38;
  undefined8 local_30;
  
  pbVar7 = (byte *)0x0;
  local_30 = 0;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  if (param_2 == '\0') {
    lVar1 = *(longlong *)(param_1 + 400);
    if (param_3 == '\0') {
      pbVar4 = (byte *)(lVar1 + 0x38);
      if (lVar1 == 0) {
        pbVar4 = pbVar7;
      }
      if ((*(byte *)(param_1 + 0x1a8) & 1) == 0) {
        if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 1) != 0)) {
          local_40 = *(longlong *)(pbVar4 + 8);
        }
      }
      else {
        local_40 = *(longlong *)(param_1 + 0x1b0);
      }
      if ((*(byte *)(param_1 + 0x1a8) & 2) == 0) goto LAB_142ded789;
      pbVar4 = (byte *)(param_1 + 0x1b8);
    }
    else {
      pbVar4 = (byte *)(lVar1 + 0x58);
      if (lVar1 == 0) {
        pbVar4 = pbVar7;
      }
      if ((*(byte *)(param_1 + 0x1c8) & 1) == 0) {
        if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 1) != 0)) {
          local_40 = *(longlong *)(pbVar4 + 8);
        }
      }
      else {
        local_40 = *(longlong *)(param_1 + 0x1d0);
      }
      if ((*(byte *)(param_1 + 0x1c8) & 2) == 0) {
LAB_142ded789:
        if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 2) == 0)) goto LAB_142ded7a0;
        pbVar4 = pbVar4 + 0x10;
      }
      else {
        pbVar4 = (byte *)(param_1 + 0x1d8);
      }
    }
  }
  else {
    if (param_2 != '\x01') goto LAB_142ded7a0;
    lVar1 = *(longlong *)(param_1 + 400);
    if (param_3 == '\0') {
      pbVar4 = (byte *)(lVar1 + 0x78);
      if (lVar1 == 0) {
        pbVar4 = pbVar7;
      }
      if ((*(byte *)(param_1 + 0x1e8) & 1) == 0) {
        if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 1) != 0)) {
          local_40 = *(longlong *)(pbVar4 + 8);
        }
      }
      else {
        local_40 = *(longlong *)(param_1 + 0x1f0);
      }
      if ((*(byte *)(param_1 + 0x1e8) & 2) == 0) goto LAB_142ded789;
      pbVar4 = (byte *)(param_1 + 0x1f8);
    }
    else {
      pbVar4 = (byte *)(lVar1 + 0x98);
      if (lVar1 == 0) {
        pbVar4 = pbVar7;
      }
      if ((*(byte *)(param_1 + 0x208) & 1) == 0) {
        if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 1) != 0)) {
          local_40 = *(longlong *)(pbVar4 + 8);
        }
      }
      else {
        local_40 = *(longlong *)(param_1 + 0x210);
      }
      if ((*(byte *)(param_1 + 0x208) & 2) == 0) goto LAB_142ded789;
      pbVar4 = (byte *)(param_1 + 0x218);
    }
  }
  FUN_1408e22e0(&plStack_38,pbVar4,0,param_4,in_stack_ffffffffffffffb8 | 3);
LAB_142ded7a0:
  uVar2 = *(undefined8 *)(param_1 + 0x118);
  plVar6 = plStack_38 + (longlong)(int)local_30 * 2;
  plVar5 = plStack_38;
  do {
    if (plVar5 == plVar6) {
LAB_142ded7eb:
      if (((local_40 == 0) && (param_3 == '\0')) &&
         ((param_2 == '\0' && ((*(byte *)(param_1 + 0x228) & 8) != 0)))) {
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
          local_40 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x90);
        }
      }
      if (plStack_38 != (longlong *)0x0) {
        FMemory::Free(plStack_38);
      }
      return local_40;
    }
    if (((*plVar5 != 0) && (plVar5[1] != 0)) &&
       (cVar3 = FUN_142c48f60(plVar5[1],uVar2,param_4), cVar3 != '\0')) {
      local_40 = *plVar5;
      goto LAB_142ded7eb;
    }
    plVar5 = plVar5 + 2;
  } while( true );
}



// FUNCTION 142ded860 FUN_142ded860 body=56 status=ok
// SIG undefined FUN_142ded860(void)

float FUN_142ded860(longlong param_1,byte param_2)

{
  longlong *plVar1;
  
  if ((((param_2 < 2) &&
       (plVar1 = (longlong *)(param_1 + 0x368 + (ulonglong)param_2 * 0x10),
       plVar1 != (longlong *)0x0)) && (*(char *)((longlong)plVar1 + 9) != '\0')) && (*plVar1 != 0))
  {
    return *(float *)((longlong)plVar1 + 0xc) / *(float *)(*plVar1 + 0x180);
  }
  return 0.0;
}



// FUNCTION 142ded8d0 FUN_142ded8d0 body=216 status=ok
// SIG undefined FUN_142ded8d0(void)

void FUN_142ded8d0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = *param_2;
  uStack_20 = param_2[1];
  local_18 = param_2[2];
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x318,&local_28);
  if (*(char *)(param_2 + 2) == '\0') {
    uStack_20 = param_2[1];
    local_28 = *param_2;
    lVar1 = param_1 + 0x338;
    if (*(char *)((longlong)param_2 + 0x11) == '\0') {
      lVar1 = param_1 + 0x328;
    }
  }
  else {
    if (*(char *)(param_2 + 2) != '\x01') goto LAB_142ded96e;
    local_28 = *param_2;
    uStack_20 = param_2[1];
    if (*(char *)((longlong)param_2 + 0x11) == '\0') {
      lVar1 = param_1 + 0x348;
    }
    else {
      lVar1 = param_1 + 0x358;
    }
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar1,&local_28);
LAB_142ded96e:
  if (((*(char *)(param_1 + 0x198) != '\0') && (*(longlong *)(param_1 + 0x1a0) != 0)) ||
     ((*(longlong *)(param_1 + 400) != 0 &&
      (*(longlong *)(*(longlong *)(param_1 + 400) + 0x30) != 0)))) {
    FUN_142c496e0();
  }
  return;
}



// FUNCTION 142ded9b0 FUN_142ded9b0 body=185 status=ok
// SIG undefined FUN_142ded9b0(void)

undefined8 FUN_142ded9b0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  
  do {
    if (*(longlong *)(param_1 + 0x220) != 0) {
      FUN_142de6760(param_2,*(longlong *)(param_1 + 0x220),0);
      if (extraout_XMM0_Da != 0.0) {
        return 1;
      }
      FUN_142de6760(param_2,*(undefined8 *)(param_1 + 0x220),1);
      if (extraout_XMM0_Da_00 != 0.0) {
        return 1;
      }
    }
    param_1 = *(longlong *)(param_1 + 0x1f0);
    if (param_1 == 0) {
      return 0;
    }
    lVar2 = FUN_142e80d20();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  } while (bVar1);
  return 0;
}



// FUNCTION 142deda70 FUN_142deda70 body=61 status=ok
// SIG undefined FUN_142deda70(void)

longlong FUN_142deda70(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint7 uVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x30))();
  lVar4 = *plVar2;
  lVar1 = lVar4 + (longlong)(int)plVar2[1] * 0x28;
  uVar3 = (uint7)((ulonglong)lVar1 >> 8);
  while( true ) {
    if (lVar4 == lVar1) {
      return (ulonglong)uVar3 << 8;
    }
    if (0 < *(int *)(lVar4 + 0x18)) break;
    lVar4 = lVar4 + 0x28;
  }
  return CONCAT71(uVar3,1);
}



// FUNCTION 142dedab0 FUN_142dedab0 body=129 status=ok
// SIG undefined FUN_142dedab0(void)

bool FUN_142dedab0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    uVar1 = UDamageableInterface::GetPrivateStaticClass();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x30))(plVar2);
      plVar3 = (longlong *)*plVar2;
      plVar2 = plVar3 + (longlong)(int)plVar2[1] * 5;
      for (; plVar3 != plVar2; plVar3 = plVar3 + 5) {
        if ((*plVar3 != 0) && (*(longlong *)(*plVar3 + 0x18) == param_2)) {
          return 0 < (int)plVar3[3];
        }
      }
    }
  }
  return false;
}



// FUNCTION 142dedb40 FUN_142dedb40 body=142 status=ok
// SIG undefined FUN_142dedb40(void)

void FUN_142dedb40(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((param_2 != 0) && (param_1 != (longlong *)0x0)) && (0 < param_3)) {
    lVar1 = (**(code **)(*param_1 + 0x670))();
    if (lVar1 == 0) {
      lVar1 = (**(code **)(*param_1 + 0x668))(param_1);
    }
    if (((*(char *)(param_2 + 0x61) != '\0') || (lVar1 != 0)) &&
       (lVar2 = FUN_142dec8c0(param_1), lVar2 != 0)) {
      FUN_142dd18b0(lVar2,lVar1,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 142dedbd0 FUN_142dedbd0 body=74 status=ok
// SIG undefined FUN_142dedbd0(void)

void FUN_142dedbd0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if ((((param_2 != 0) && (param_1 != 0)) && (0 < param_3)) &&
     ((*(char *)(param_2 + 0x61) != '\0' && (lVar1 = FUN_142dec8c0(), lVar1 != 0)))) {
    FUN_142dd18b0(lVar1,0,param_2,param_3);
  }
  return;
}



// FUNCTION 142dedc20 FUN_142dedc20 body=272 status=ok
// SIG undefined FUN_142dedc20(void)

void FUN_142dedc20(longlong *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  
  bVar8 = 0;
  uVar7 = 0;
  if (*(uint *)(param_1 + 1) != 0) {
    do {
      lVar4 = *(longlong *)((longlong)(int)uVar7 * 0x10 + *param_1);
      if ((lVar4 != 0) && (bVar1 = *(byte *)(lVar4 + 0x6a), bVar8 <= bVar1)) {
        bVar8 = bVar1 + 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 1));
  }
  uVar7 = *(uint *)(param_2 + 0x1c);
  iVar6 = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  if (uVar7 != bVar8) {
    FUN_142df12e0(param_2);
    uVar7 = *(uint *)(param_2 + 0x1c);
    iVar6 = *(int *)(param_2 + 0x18);
  }
  iVar2 = iVar6 + (uint)bVar8;
  *(int *)(param_2 + 0x18) = iVar2;
  if ((int)uVar7 < iVar2) {
    FUN_142df1150();
  }
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar4 = param_2;
  }
  _guard_xfg_dispatch_icall_nop((void *)(lVar4 + iVar6),0,(ulonglong)bVar8);
  uVar7 = *(uint *)(param_1 + 1);
  uVar9 = 0;
  if (uVar7 != 0) {
    do {
      plVar3 = (longlong *)((longlong)(int)uVar9 * 0x10 + *param_1);
      lVar4 = *plVar3;
      if (lVar4 != 0) {
        lVar5 = *(longlong *)(param_2 + 0x10);
        if (*(longlong *)(param_2 + 0x10) == 0) {
          lVar5 = param_2;
        }
        *(char *)(lVar5 + (ulonglong)*(byte *)(lVar4 + 0x6a)) = (char)plVar3[1] + '\x01';
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar7);
  }
  return;
}



// FUNCTION 142dedd30 FUN_142dedd30 body=67 status=ok
// SIG undefined FUN_142dedd30(void)

void FUN_142dedd30(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    (**(code **)(*param_1 + 0x260))(param_1);
    param_1[0x31] = param_2;
    FUN_142df2e20(param_1,param_2);
  }
  return;
}



// FUNCTION 142dedd80 FUN_142dedd80 body=216 status=ok
// SIG undefined FUN_142dedd80(void)

void FUN_142dedd80(longlong *param_1,int param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x30))();
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1);
  if ((-1 < param_2) && (param_2 < (int)plVar2[1])) {
    plVar1 = (longlong *)(*plVar2 + (longlong)param_2 * 0x28);
    if (*(char *)(*plVar2 + 8 + (longlong)param_2 * 0x28) != param_3) {
      *(char *)(plVar1 + 1) = param_3;
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
      if (plVar2 != (longlong *)0x0) {
        if ((char)plVar2[0x25] == '\x03') {
          (**(code **)(*plVar2 + 0x600))(plVar2);
          FUN_142df45a0(param_3,*(undefined1 *)((longlong)plVar1 + 0x21),(char)plVar1[4],lVar3 + 4);
        }
        *(char *)((longlong)*(int *)(*plVar1 + 0x44) + (longlong)plVar2) = param_3;
        if ((*(byte *)(param_1 + 1) & 8) != 0) {
          FUN_142df00b0(param_1,plVar2,*plVar1,param_3,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 142dede60 FUN_142dede60 body=279 status=ok
// SIG undefined FUN_142dede60(void)

void FUN_142dede60(longlong *param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  
  lVar5 = (**(code **)(*param_1 + 0x18))();
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x128) == '\x03')) {
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
    iVar7 = 0;
    if (0 < (int)plVar6[1]) {
      lVar8 = 0;
      do {
        lVar2 = *plVar6;
        iVar1 = *(int *)(lVar2 + 0x18 + lVar8);
        if (0 < iVar1) {
          do {
            iVar1 = iVar1 + -1;
            if (iVar1 < 0) break;
            lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10 + lVar8) + (longlong)iVar1 * 8);
          } while ((lVar3 == 0) || (cVar4 = FUN_142c48f60(lVar3,lVar5,0), cVar4 == '\0'));
          FUN_142dedd80(param_1,iVar7);
        }
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 0x28;
      } while (iVar7 < (int)plVar6[1]);
    }
    if (((*(byte *)(param_1 + 1) & 1) != 0) && (param_2 != '\0')) {
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfe;
      FUN_142de5fe0(param_1);
    }
  }
  return;
}



// FUNCTION 142dedf80 FUN_142dedf80 body=169 status=ok
// SIG undefined FUN_142dedf80(void)

undefined8 FUN_142dedf80(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  uint7 uVar5;
  
  lVar2 = (**(code **)(*param_1 + 0x18))();
  if ((lVar2 == 0) ||
     (plVar3 = (longlong *)FUN_142df14d0(param_1,param_2), plVar3 == (longlong *)0x0)) {
    return 0;
  }
  lVar4 = (**(code **)(*plVar3 + 0x378))(plVar3,*(int *)((longlong)plVar3 + 0x44) + lVar2);
  lVar2 = 0;
  if (lVar4 != 0) {
    lVar2 = UMaterialInterface::GetPrivateStaticClass();
    uVar5 = (uint7)((ulonglong)(lVar2 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      lVar2 = (ulonglong)uVar5 << 8;
      bVar1 = false;
    }
    else {
      lVar2 = CONCAT71(uVar5,1);
      bVar1 = true;
    }
    if (bVar1) goto LAB_142dee00b;
  }
  lVar4 = 0;
LAB_142dee00b:
  *param_3 = lVar4;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 142dee030 FUN_142dee030 body=9 status=ok
// SIG undefined FUN_142dee030(void)

void FUN_142dee030(longlong param_1)

{
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  FUN_142de5fe0();
  return;
}



// FUNCTION 142dee040 FUN_142dee040 body=109 status=ok
// SIG undefined FUN_142dee040(void)

undefined8 FUN_142dee040(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if ((lVar1 != 0) &&
     (plVar2 = (longlong *)FUN_142df14d0(param_1,param_2), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x380))(plVar2,*(int *)((longlong)plVar2 + 0x44) + lVar1,param_3);
    return 1;
  }
  return 0;
}



// FUNCTION 142dee0b0 FUN_142dee0b0 body=1292 status=ok
// SIG undefined FUN_142dee0b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142dee0b0(longlong *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  byte bVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined1 *_Src;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStack_e8 [32];
  char local_c8;
  uint local_c4;
  int local_c0;
  uint local_bc;
  longlong *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined1 *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined1 local_70 [32];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  *param_2 = 0;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 4;
  local_88 = param_2;
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x10))();
  if ((((int)plVar8[1] != 0) &&
      (local_78 = plVar8, plVar9 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1),
      (int)plVar9[1] == 0)) &&
     (local_a0 = plVar9, lVar10 = (**(code **)(*param_1 + 0x18))(param_1), lVar10 != 0)) {
    local_90 = *(undefined8 *)(lVar10 + 0x10);
    local_c8 = *(char *)(lVar10 + 0x128);
    local_c4 = 0;
    local_c0 = 0;
    local_b0 = lVar10;
    if (0 < (int)plVar8[1]) {
      local_98 = 0;
LAB_142dee190:
      lVar19 = *plVar8 + local_98;
      lVar11 = FUN_142de2260(lVar19,local_90);
      if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0x70) != 0)) {
        local_bc = *(int *)(*(longlong *)(lVar11 + 0x70) + 0x48) - 1;
        uVar1 = *(undefined1 *)(*(int *)(lVar11 + 0x44) + lVar10);
        iVar14 = (int)plVar9[1];
        *(int *)(plVar9 + 1) = iVar14 + 1;
        if (*(int *)((longlong)plVar9 + 0xc) < iVar14 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar9,iVar14);
        }
        lVar10 = local_b0;
        local_b8 = (longlong *)(*plVar9 + (longlong)iVar14 * 0x28);
        local_b8[2] = 0;
        local_80 = local_b8 + 2;
        local_b8[3] = 0;
        *(undefined1 *)(local_b8 + 1) = uVar1;
        *(undefined2 *)(local_b8 + 4) = 0;
        bVar4 = false;
        *local_b8 = lVar11;
        local_50 = (undefined1 *)0x0;
        local_48 = 0;
        plVar9 = *(longlong **)(lVar19 + 0x38);
        plVar8 = plVar9 + *(int *)(lVar19 + 0x40);
        if (plVar9 != plVar8) {
          local_a8 = 0;
          iVar14 = 0;
          iVar16 = 0;
          do {
            lVar11 = 0;
            if (*plVar9 == 0) {
              local_48 = CONCAT44(local_48._4_4_,iVar14 + 1);
              if (iVar16 < iVar14 + 1) {
                TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                          (local_70);
              }
              puVar15 = local_70;
              if (local_50 != (undefined1 *)0x0) {
                puVar15 = local_50;
              }
              *(undefined8 *)(puVar15 + (longlong)iVar14 * 8) = 0;
            }
            else {
              plVar12 = (longlong *)FindField<UObjectProperty>(local_90,*plVar9);
              if (plVar12 != (longlong *)0x0) {
                lVar11 = (**(code **)(*plVar12 + 0x378))
                                   (plVar12,*(int *)((longlong)plVar12 + 0x44) + lVar10);
                if (lVar11 != 0) {
                  lVar19 = UMaterialInterface::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar19 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  if (bVar3) {
                    bVar4 = true;
                    *local_88 = 1;
                    if (local_c8 == '\x03') {
                      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
                    }
                    goto LAB_142dee313;
                  }
                }
                lVar11 = 0;
              }
LAB_142dee313:
              uVar21 = local_48;
              lVar19 = (longlong)(int)local_48;
              iVar14 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar14);
              if (local_48._4_4_ < iVar14) {
                TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                          (local_70,uVar21 & 0xffffffff);
              }
              puVar15 = local_70;
              if (local_50 != (undefined1 *)0x0) {
                puVar15 = local_50;
              }
              *(longlong *)(puVar15 + lVar19 * 8) = lVar11;
            }
            puVar15 = local_50;
            plVar12 = local_80;
            plVar9 = plVar9 + 1;
            if (plVar9 == plVar8) goto LAB_142dee376;
            iVar14 = (int)local_48;
            iVar16 = local_48._4_4_;
          } while( true );
        }
        goto LAB_142dee3da;
      }
      goto LAB_142dee455;
    }
LAB_142dee490:
    uVar21 = 0;
    if ((local_c8 != '\x03') && ((*(byte *)(param_1 + 1) & 4) != 0)) {
      plVar8 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
      lVar10 = (**(code **)(*param_1 + 0x28))(param_1);
      uVar6 = *(uint *)(lVar10 + 4);
      uVar18 = uVar21;
      uVar20 = uVar21;
      if (0 < (int)plVar8[1]) {
        do {
          lVar10 = *plVar8;
          bVar2 = *(byte *)(uVar20 + 0x20 + lVar10);
          bVar13 = *(byte *)(uVar20 + 0x21 + lVar10);
          iVar14 = 0x1f;
          if (bVar13 != 0) {
            for (; bVar13 >> iVar14 == 0; iVar14 = iVar14 + -1) {
            }
          }
          if (bVar13 == 0) {
            iVar14 = 0x20;
          }
          else {
            iVar14 = 0x1f - iVar14;
          }
          uVar7 = bVar13 - 1;
          iVar16 = 0x1f;
          if (uVar7 != 0) {
            for (; uVar7 >> iVar16 == 0; iVar16 = iVar16 + -1) {
            }
          }
          if (uVar7 == 0) {
            cVar5 = ' ';
          }
          else {
            cVar5 = '\x1f' - (char)iVar16;
          }
          uVar7 = 0;
          uVar17 = uVar21;
          for (bVar13 = bVar2;
              bVar13 < (byte)((0x20U - cVar5 & ~(byte)((iVar14 << 0x1a) >> 0x1f)) + bVar2);
              bVar13 = bVar13 + 1) {
            uVar7 = (uint)uVar17 | 1 << (bVar13 & 0x1f);
            uVar17 = (ulonglong)uVar7;
          }
          uVar7 = (uVar7 & uVar6) >> (bVar2 & 0x1f);
          if (*(char *)(uVar20 + 8 + lVar10) != (char)uVar7) {
            FUN_142dedd80(param_1,uVar18,uVar7 & 0xff);
          }
          uVar7 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar7;
          uVar20 = uVar20 + 0x28;
        } while ((int)uVar7 < (int)plVar8[1]);
      }
      if ((*(byte *)(param_1 + 1) & 8) == 0) {
        FUN_142de5fe0(param_1);
      }
    }
  }
  return;
LAB_142dee376:
  if (bVar4) {
    lVar10 = (longlong)(int)local_48;
    *(int *)(local_80 + 1) = (int)local_48;
    if (((int)local_48 == 0) && (*(int *)((longlong)local_80 + 0xc) == 0)) {
      *(undefined4 *)((longlong)local_80 + 0xc) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                (local_80,local_48 & 0xffffffff);
      _Src = local_70;
      if (puVar15 != (undefined1 *)0x0) {
        _Src = puVar15;
      }
      _guard_xfg_dispatch_icall_nop((void *)*plVar12,_Src,lVar10 << 3);
    }
  }
LAB_142dee3da:
  iVar14 = 0x1f;
  if (local_bc != 0) {
    for (; local_bc >> iVar14 == 0; iVar14 = iVar14 + -1) {
    }
  }
  if (local_bc == 0) {
    iVar14 = 0x20;
  }
  else {
    iVar14 = 0x1f - iVar14;
  }
  uVar6 = local_bc - 1;
  iVar16 = 0x1f;
  if (uVar6 != 0) {
    for (; uVar6 >> iVar16 == 0; iVar16 = iVar16 + -1) {
    }
  }
  if (uVar6 == 0) {
    iVar16 = 0x20;
  }
  else {
    iVar16 = 0x1f - iVar16;
  }
  uVar6 = (~((iVar14 << 0x1a) >> 0x1f) & 0x20U - iVar16) + local_c4;
  if (uVar6 < 0x21) {
    *(char *)(local_b8 + 4) = (char)local_c4;
    *(char *)((longlong)local_b8 + 0x21) = (char)local_bc;
    local_c4 = uVar6;
  }
  lVar10 = local_b0;
  plVar9 = local_a0;
  if (local_50 != (undefined1 *)0x0) {
    FMemory::Free(local_50);
    lVar10 = local_b0;
    plVar9 = local_a0;
  }
LAB_142dee455:
  local_c0 = local_c0 + 1;
  local_98 = local_98 + 0x48;
  plVar8 = local_78;
  if ((int)local_78[1] <= local_c0) goto LAB_142dee490;
  goto LAB_142dee190;
}



// FUNCTION 142dee5c0 FUN_142dee5c0 body=280 status=ok
// SIG undefined FUN_142dee5c0(void)

void FUN_142dee5c0(longlong *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  
  if ((*(byte *)(param_1 + 1) & 4) != 0) {
    plVar7 = (longlong *)(**(code **)(*param_1 + 0x30))();
    lVar8 = (**(code **)(*param_1 + 0x28))(param_1);
    iVar11 = 0;
    uVar2 = *(uint *)(lVar8 + 4);
    if (0 < (int)plVar7[1]) {
      lVar8 = 0;
      do {
        lVar3 = *plVar7;
        bVar1 = *(byte *)(lVar8 + 0x20 + lVar3);
        bVar9 = *(byte *)(lVar8 + 0x21 + lVar3);
        iVar10 = 0x1f;
        if (bVar9 != 0) {
          for (; bVar9 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        if (bVar9 == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        uVar6 = bVar9 - 1;
        iVar4 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        if (uVar6 == 0) {
          cVar5 = ' ';
        }
        else {
          cVar5 = '\x1f' - (char)iVar4;
        }
        uVar6 = 0;
        for (bVar9 = bVar1;
            bVar9 < (byte)((0x20U - cVar5 & ~(byte)((iVar10 << 0x1a) >> 0x1f)) + bVar1);
            bVar9 = bVar9 + 1) {
          uVar6 = uVar6 | 1 << (bVar9 & 0x1f);
        }
        uVar6 = (uVar6 & uVar2) >> (bVar1 & 0x1f);
        if (*(char *)(lVar8 + 8 + lVar3) != (char)uVar6) {
          FUN_142dedd80(param_1,iVar11,uVar6 & 0xff);
        }
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 0x28;
      } while (iVar11 < (int)plVar7[1]);
    }
    if ((*(byte *)(param_1 + 1) & 8) == 0) {
      FUN_142de5fe0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142dee6e0 FUN_142dee6e0 body=440 status=ok
// SIG undefined FUN_142dee6e0(void)

undefined8 FUN_142dee6e0(longlong param_1,longlong *param_2)

{
  char cVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (((*(byte *)(param_1 + 0xba) & 4) != 0) &&
     (cVar1 = FUN_1407c3030(param_1 + 0x280), cVar1 == '\0')) {
    if ((*(char *)(param_1 + 0x25c) != '\0') &&
       (((*(char *)(param_1 + 0x230) != '\0' && (0 < *(int *)(param_1 + 0x234))) &&
        (*(int *)(param_1 + 0x234) <= *(int *)(param_1 + 0x238))))) {
      return 0;
    }
    plVar6 = (longlong *)0x0;
    if ((*(byte *)(param_1 + 0x228) & 4) != 0) {
      plVar5 = plVar6;
      if (*(longlong *)(param_1 + 0x118) != 0) {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x118) + 0x118);
      }
      plVar3 = plVar6;
      if (plVar5 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar5 + 0x668))();
      }
      if (plVar3 != param_2) {
        return 0;
      }
    }
    cVar1 = FUN_142deec20(param_1,param_2);
    if (cVar1 != '\0') {
      if (((*(int *)(param_1 + 0x3a8) == 0) || (*(longlong **)(param_1 + 0x3a0) == (longlong *)0x0))
         || (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3a0) + 0x18))(), cVar1 == '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if (*(int *)(param_1 + 0x3a8) != 0) {
          plVar6 = *(longlong **)(param_1 + 0x3a0);
        }
        cVar1 = (**(code **)(*plVar6 + 0x38))(plVar6,param_2);
        if (cVar1 == '\0') {
          return 0;
        }
      }
      lVar4 = FUN_142dea210(param_1);
      if ((lVar4 == 0) ||
         (cVar1 = FUN_142c48f90(lVar4,*(undefined8 *)(param_1 + 0x118),param_2), cVar1 != '\0')) {
        if (((*(byte *)(param_1 + 0x228) & 1) == 0) &&
           ((param_2 != (longlong *)0x0 &&
            (lVar4 = (**(code **)(*param_2 + 0x690))(param_2), lVar4 != 0)))) {
          return 0;
        }
        if (((*(byte *)(param_1 + 0x228) & 2) == 0) && (param_2 != (longlong *)0x0)) {
          lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
          if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
              != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (lVar4 = (**(code **)(*param_2 + 0xfc8))(param_2), lVar4 != 0)) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142dee8a0 FUN_142dee8a0 body=74 status=ok
// SIG undefined FUN_142dee8a0(void)

bool FUN_142dee8a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 1;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    lVar2 = FUN_142df3580(param_2);
    if (lVar2 != 0) {
      iVar1 = FUN_142de8c20(*(undefined8 *)(param_1 + 0x180),lVar2);
    }
  }
  return iVar1 == 0;
}



// FUNCTION 142dee8f0 FUN_142dee8f0 body=32 status=ok
// SIG undefined FUN_142dee8f0(void)

ulonglong FUN_142dee8f0(longlong param_1,byte param_2)

{
  ulonglong in_RAX;
  longlong lVar1;
  
  if (param_2 < 2) {
    in_RAX = (ulonglong)param_2 * 0x10;
    lVar1 = param_1 + 0x368 + in_RAX;
    if (lVar1 != 0) {
      return (ulonglong)*(byte *)(lVar1 + 9);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142dee910 FUN_142dee910 body=75 status=ok
// SIG undefined FUN_142dee910(void)

bool FUN_142dee910(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 1;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    lVar2 = FUN_142df3580(param_2);
    if (lVar2 != 0) {
      iVar1 = FUN_142de8c20(*(undefined8 *)(param_1 + 0x180),lVar2);
    }
  }
  return iVar1 == 2;
}



// FUNCTION 142dee960 FUN_142dee960 body=44 status=ok
// SIG undefined FUN_142dee960(void)

undefined8 FUN_142dee960(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x1e0) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x690))();
    if (lVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142dee990 FUN_142dee990 body=512 status=ok
// SIG undefined FUN_142dee990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142dee990(longlong *param_1,longlong param_2)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  float local_38;
  float fStack_34;
  undefined8 local_28;
  float local_20;
  undefined8 local_18;
  float local_10;
  
  if (param_2 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_2 + 0x1e0);
  }
  lVar3 = FUN_142dccd00(lVar6);
  if (lVar3 == 0) {
    if (lVar6 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(lVar6 + 0x488);
    }
  }
  if ((lVar3 == 0) || (param_2 == 0)) {
LAB_142deeb74:
    uVar5 = 0;
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x408))(param_1);
    if (cVar2 == '\0') {
      cVar2 = FUN_1407c3030(param_2 + 0x3a8);
      if (cVar2 == '\0') {
        cVar2 = FUN_1407c3030(param_2 + 0x440);
        if (cVar2 != '\0') goto LAB_142deea3a;
        puVar4 = (undefined8 *)FUN_142dead50(param_2 + 0x2a8,param_2 + 0x248);
      }
      else {
LAB_142deea3a:
        puVar4 = (undefined8 *)(param_2 + 0x308);
      }
      if ((longlong *)*puVar4 != param_1) goto LAB_142deeb74;
    }
    if (*(char *)((longlong)param_1 + 0x184) != '\0') {
      lVar6 = *(longlong *)(lVar3 + 0x168);
      if (lVar6 == 0) {
        local_28 = _DAT_1468b5d90;
        local_20 = DAT_1468b5d98;
      }
      else {
        local_28 = *(undefined8 *)(lVar6 + 0x220);
        local_20 = *(float *)(lVar6 + 0x228);
      }
      fVar1 = local_20;
      uVar5 = local_28;
      if (param_1[0x23] == 0) {
        local_28 = 0;
        puVar4 = &local_28;
        local_20 = 0.0;
      }
      else {
        lVar6 = *(longlong *)(param_1[0x23] + 0x168);
        if (lVar6 == 0) {
          local_28 = _DAT_1468b5d90;
          local_20 = DAT_1468b5d98;
        }
        else {
          local_20 = *(float *)(lVar6 + 0x228);
          local_28 = *(undefined8 *)(lVar6 + 0x220);
        }
        local_10 = local_20;
        puVar4 = &local_18;
        local_18 = local_28;
      }
      local_38 = (float)uVar5;
      fStack_34 = (float)((ulonglong)uVar5 >> 0x20);
      local_38 = local_38 - (float)*puVar4;
      fStack_34 = fStack_34 - (float)((ulonglong)*puVar4 >> 0x20);
      if (*(float *)(param_1 + 0x31) * *(float *)(param_1 + 0x31) <
          fStack_34 * fStack_34 + local_38 * local_38 +
          (fVar1 - *(float *)(puVar4 + 1)) * (fVar1 - *(float *)(puVar4 + 1))) goto LAB_142deeb74;
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 142deeb90 FUN_142deeb90 body=75 status=ok
// SIG undefined FUN_142deeb90(void)

bool FUN_142deeb90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 1;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    lVar2 = FUN_142df3580(param_2);
    if (lVar2 != 0) {
      iVar1 = FUN_142de8c20(*(undefined8 *)(param_1 + 0x180),lVar2);
    }
  }
  return iVar1 == 1;
}



// FUNCTION 142deebe0 FUN_142deebe0 body=38 status=ok
// SIG undefined FUN_142deebe0(void)

ulonglong FUN_142deebe0(longlong *param_1)

{
  ulonglong in_RAX;
  
  if (*param_1 == 0) {
    in_RAX = 0;
    if ((param_1[1] == 0) && (in_RAX = 0, param_1[2] == 0)) {
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142deec10 FUN_142deec10 body=12 status=ok
// SIG undefined FUN_142deec10(void)

void FUN_142deec10(longlong param_1)

{
  FUN_1407c3030(param_1 + 0x280);
  return;
}



// FUNCTION 142deec20 FUN_142deec20 body=900 status=ok
// SIG undefined FUN_142deec20(void)

bool FUN_142deec20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_88;
  float local_80;
  float local_78;
  float fStack_74;
  float local_70;
  undefined8 local_68;
  undefined4 local_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  if (*(char *)(param_1 + 0x250) == '\0') {
    return true;
  }
  if (((param_2 == 0) || (*(longlong *)(param_2 + 0x488) == 0)) ||
     (*(longlong *)(param_1 + 0x118) == 0)) {
    return false;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x488) + 0x168);
  local_78 = DAT_1468b5d90;
  fStack_74 = DAT_1468b5d94;
  if (lVar1 == 0) {
    local_70 = DAT_1468b5d98;
  }
  else {
    local_78 = *(float *)(lVar1 + 0x220);
    fStack_74 = *(float *)(lVar1 + 0x224);
    local_70 = *(float *)(lVar1 + 0x228);
  }
  fVar11 = local_70;
  fVar7 = fStack_74;
  fVar9 = local_78;
  local_80 = local_70;
  local_88._0_4_ = local_78;
  local_88._4_4_ = fStack_74;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
  if (lVar1 == 0) {
    local_78 = DAT_1468b5d90;
    fStack_74 = DAT_1468b5d94;
    local_70 = DAT_1468b5d98;
  }
  else {
    local_78 = *(float *)(lVar1 + 0x220);
    fStack_74 = *(float *)(lVar1 + 0x224);
    local_70 = *(float *)(lVar1 + 0x228);
  }
  if (((fVar9 == local_78) && (fVar7 == fStack_74)) && (fVar11 == local_70)) {
    return true;
  }
  fVar7 = fVar7 - fStack_74;
  fVar9 = fVar9 - local_78;
  fVar11 = fVar11 - local_70;
  fVar5 = fVar7 * fVar7 + fVar9 * fVar9;
  if (fVar5 == 1.0) {
    fVar8 = fVar7;
    fVar10 = fVar9;
    if (fVar11 == 0.0) goto LAB_142deee1b;
  }
  else {
    fVar8 = DAT_1468b5d94;
    fVar10 = DAT_1468b5d90;
    fVar11 = DAT_1468b5d98;
    if (fVar5 < 1e-08) goto LAB_142deee1b;
    auVar6 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar11 = auVar6._0_4_;
    fVar11 = fVar11 + fVar11 * (0.5 - fVar5 * 0.5 * fVar11 * fVar11);
    fVar11 = fVar11 + fVar11 * (0.5 - fVar5 * 0.5 * fVar11 * fVar11);
    fVar9 = fVar9 * fVar11;
    fVar7 = fVar7 * fVar11;
  }
  fVar8 = fVar7;
  fVar10 = fVar9;
  fVar11 = 0.0;
LAB_142deee1b:
  if (lVar1 == 0) {
    uVar4 = (undefined4)DAT_1468b5da0;
    fVar9 = (float)((ulonglong)DAT_1468b5da0 >> 0x20);
    local_80 = (float)DAT_1468b5da8;
  }
  else {
    local_58 = *(float *)(lVar1 + 0x210);
    fStack_54 = *(float *)(lVar1 + 0x214);
    fStack_50 = *(float *)(lVar1 + 0x218);
    fStack_4c = *(float *)(lVar1 + 0x21c);
    auVar6._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_54);
    auVar6._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_58);
    auVar6._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_50);
    auVar6._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_4c);
    iVar2 = movmskps(local_70,auVar6);
    if (iVar2 != 0) {
      *(float *)(lVar1 + 0x250) = local_58;
      *(float *)(lVar1 + 0x254) = fStack_54;
      *(float *)(lVar1 + 600) = fStack_50;
      *(float *)(lVar1 + 0x25c) = fStack_4c;
      puVar3 = (undefined8 *)FQuat::Rotator(&local_58,&local_68);
      *(undefined8 *)(lVar1 + 0x260) = *puVar3;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar3 + 1);
    }
    uVar4 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
    fVar9 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
    local_80 = (float)*(undefined4 *)(lVar1 + 0x268);
  }
  local_68 = CONCAT44(fVar9,uVar4);
  fVar9 = fVar9 + *(float *)(param_1 + 0x254);
  fVar7 = (float)(int)(fVar9 * 0.0027777778) * 360.0;
  if (ABS(fVar9) < ABS(fVar7)) {
    fVar7 = fVar9;
  }
  fVar9 = fVar9 - fVar7;
  if (fVar9 < 0.0) {
    fVar9 = fVar9 + 360.0;
  }
  local_88 = (ulonglong)(uint)fVar9 << 0x20;
  local_60 = local_80;
  FRotator::Vector(&local_88,&local_78);
  fVar7 = local_78 * fVar10 + fStack_74 * fVar8 + local_70 * fVar11;
  fVar9 = -1.0;
  if ((-1.0 <= fVar7) && (fVar9 = fVar7, 1.0 <= fVar7)) {
    fVar9 = 1.0;
  }
  fVar9 = _guard_xfg_dispatch_icall_nop(fVar9);
  return fVar9 * 57.295776 < *(float *)(param_1 + 600) * 0.5;
}


