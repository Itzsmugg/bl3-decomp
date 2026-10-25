// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140b3ffb0 FUN_140b3ffb0 body=7 status=ok
// SIG undefined FUN_140b3ffb0(void)

void FUN_140b3ffb0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x779) = param_2;
  return;
}



// FUNCTION 140b3ffc0 FUN_140b3ffc0 body=8 status=ok
// SIG undefined FUN_140b3ffc0(void)

void FUN_140b3ffc0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x568) = param_2;
  return;
}



// FUNCTION 140b3ffd0 FUN_140b3ffd0 body=90 status=ok
// SIG undefined FUN_140b3ffd0(void)

void FUN_140b3ffd0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 local_18 [16];
  
  FString::operator=(param_1 + 0x728);
  uVar1 = FString::FString(local_18,param_1 + 0x728);
  FUN_140b469a0(param_1,uVar1);
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b40030 set_MinimalHUD body=8 status=ok
// SIG undefined set_MinimalHUD(void)

void uhx::glues::AGPlayerController_Glue_obj::set_MinimalHUD(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x880) = param_2;
  return;
}



// FUNCTION 140b40040 SetPlayRate body=9 status=ok
// SIG undefined SetPlayRate(void)

void UPaperFlipbookComponent::SetPlayRate(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x760) = param_2;
  return;
}



// FUNCTION 140b40050 FUN_140b40050 body=47 status=ok
// SIG undefined FUN_140b40050(void)

void FUN_140b40050(longlong *param_1,char param_2)

{
  *(byte *)((longlong)param_1 + 0x70c) = *(byte *)((longlong)param_1 + 0x70c) & 0xbf | param_2 << 6;
                    /* WARNING: Could not recover jumptable at 0x000140b40078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1,(param_2 << 6 & 0x40U) >> 6);
  return;
}



// FUNCTION 140b40080 FUN_140b40080 body=47 status=ok
// SIG undefined FUN_140b40080(void)

void FUN_140b40080(longlong *param_1,char param_2)

{
  *(byte *)((longlong)param_1 + 0x70c) = *(byte *)((longlong)param_1 + 0x70c) & 0xdf | param_2 << 5;
                    /* WARNING: Could not recover jumptable at 0x000140b400a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1,(param_2 << 5 & 0x20U) >> 5);
  return;
}



// FUNCTION 140b400b0 FUN_140b400b0 body=43 status=ok
// SIG undefined FUN_140b400b0(void)

void FUN_140b400b0(longlong *param_1,byte param_2)

{
  *(byte *)((longlong)param_1 + 0x70c) = *(byte *)((longlong)param_1 + 0x70c) & 0x7f | param_2 << 7;
                    /* WARNING: Could not recover jumptable at 0x000140b400d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1,param_2 & 1);
  return;
}



// FUNCTION 140b400e0 FUN_140b400e0 body=25 status=ok
// SIG undefined FUN_140b400e0(void)

void FUN_140b400e0(longlong param_1,longlong param_2,longlong param_3)

{
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x268) = param_2;
  }
  if (param_3 != 0) {
    *(longlong *)(param_1 + 0x270) = param_3;
  }
  return;
}



// FUNCTION 140b40100 FUN_140b40100 body=9 status=ok
// SIG undefined FUN_140b40100(void)

void FUN_140b40100(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x7a8) = param_2;
  return;
}



// FUNCTION 140b40110 FUN_140b40110 body=75 status=ok
// SIG undefined FUN_140b40110(void)

void FUN_140b40110(longlong *param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0xb5) >> 1 & 1) != param_2) {
    FUN_143015a20();
    if ((*(byte *)(param_1 + 0xb5) >> 1 & 1) == param_2) {
      (**(code **)(*param_1 + 0x830))(param_1);
    }
  }
  return;
}



// FUNCTION 140b40160 FUN_140b40160 body=98 status=ok
// SIG undefined FUN_140b40160(void)

void FUN_140b40160(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 local_18 [16];
  
  FString::operator=(param_1 + 0x738);
  *(undefined4 *)(param_1 + 0x748) = param_3;
  uVar1 = FString::FString(local_18,param_2);
  FUN_140b474f0(param_1,uVar1,param_3);
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b401d0 SetIsFocusable body=7 status=ok
// SIG undefined SetIsFocusable(void)

void SVirtualWindow::SetIsFocusable(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 2000) = param_2;
  return;
}



// FUNCTION 140b401e0 FUN_140b401e0 body=22 status=ok
// SIG undefined FUN_140b401e0(void)

void FUN_140b401e0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x7d4) = *param_2;
  *(undefined4 *)(param_1 + 0x7dc) = *(undefined4 *)(param_2 + 1);
  return;
}



// FUNCTION 140b40200 FUN_140b40200 body=122 status=ok
// SIG undefined FUN_140b40200(void)

void FUN_140b40200(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    if ((((*(byte *)(param_1 + 0x5a8) & 2) == 0) || ((*(byte *)(param_1 + 0x70c) & 8) != 0)) ||
       (*(longlong *)(param_1 + 0x560) == 0)) {
      FUN_142398ec0(*(longlong *)(param_1 + 0x6c8),0,1);
      return;
    }
    if ((*(byte *)(param_1 + 0x5a8) & 5) == 4) {
      cVar1 = FUN_140b1fe40(param_1);
      if (cVar1 != '\0') {
        FUN_142398ec0(*(undefined8 *)(param_1 + 0x6c8),1);
        FUN_140b31190(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140b40280 FUN_140b40280 body=7 status=ok
// SIG undefined FUN_140b40280(void)

void FUN_140b40280(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28c) = param_2;
  return;
}



// FUNCTION 140b402c0 FUN_140b402c0 body=78 status=ok
// SIG undefined FUN_140b402c0(void)

void FUN_140b402c0(longlong *param_1,byte param_2)

{
  if (param_2 != (*(byte *)((longlong)param_1 + 0x70c) >> 3 & 1)) {
    *(byte *)((longlong)param_1 + 0x70c) =
         *(byte *)((longlong)param_1 + 0x70c) & 0xf7 | param_2 << 3;
    (**(code **)(*param_1 + 0x600))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140b40301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x830))(param_1);
    return;
  }
  return;
}



// FUNCTION 140b40310 FUN_140b40310 body=118 status=ok
// SIG undefined FUN_140b40310(void)

void FUN_140b40310(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_143015c00();
  if (*(longlong *)(param_1 + 0x568) != 0) {
    if (*(char *)(param_1 + 0x67c) != '\0') {
      lVar1 = FUN_142ff9ea0(param_1);
      if (lVar1 != 0) {
        *(undefined8 *)(param_1 + 0x6d8) = *(undefined8 *)(lVar1 + 0x170);
      }
    }
    lVar1 = ATrap::GetActivationShapeComponent(param_1);
    if (lVar1 != 0) {
      uVar2 = 0;
      if (*(longlong *)(lVar1 + 0x210) != 0) {
        uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x210) + 0xb8);
      }
      *(undefined8 *)(param_1 + 0x710) = uVar2;
    }
    FUN_140b22e00(param_1);
    return;
  }
  return;
}



// FUNCTION 140b40390 FUN_140b40390 body=157 status=ok
// SIG undefined FUN_140b40390(void)

void FUN_140b40390(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x5c0);
  if (lVar2 != 0) {
    lVar4 = AGFreezeCharacterCue::GetPrivateStaticClass();
    plVar5 = *(longlong **)(lVar2 + 0x1a0);
    plVar1 = plVar5 + *(int *)(lVar2 + 0x1a8);
    if (plVar5 != plVar1) {
      do {
        lVar2 = *plVar5;
        if (lVar2 != 0) {
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            if (lVar2 == 0) {
              return;
            }
            FUN_14260f940(lVar2,param_2);
            return;
          }
        }
        plVar5 = plVar5 + 1;
        if (plVar5 == plVar1) {
          return;
        }
      } while( true );
    }
  }
  return;
}



// FUNCTION 140b40430 FUN_140b40430 body=533 status=ok
// SIG undefined FUN_140b40430(void)

void FUN_140b40430(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x590) == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar1 = FUN_1430be340();
    lVar2 = FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
    *(longlong *)(param_1 + 0x590) = lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x590) + 0x70) = *(undefined1 *)(param_2 + 0x70);
  *(undefined1 *)(*(longlong *)(param_1 + 0x590) + 0x71) = *(undefined1 *)(param_2 + 0x71);
  lVar2 = *(longlong *)(param_1 + 0x590);
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(lVar2 + 0x80) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(lVar2 + 0x90) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(lVar2 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(lVar2 + 0xa0) = uVar1;
  *(undefined8 *)(lVar2 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x590) + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined8 *)(*(longlong *)(param_1 + 0x590) + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x590) + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x590) + 0xb4) = *(undefined1 *)(param_2 + 0xb4);
  *(undefined1 *)(*(longlong *)(param_1 + 0x590) + 200) = *(undefined1 *)(param_2 + 200);
  *(undefined1 *)(*(longlong *)(param_1 + 0x590) + 0xc9) = *(undefined1 *)(param_2 + 0xc9);
  lVar2 = *(longlong *)(param_1 + 0x590);
  uVar1 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(lVar2 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(lVar2 + 0xd8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(lVar2 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(lVar2 + 0xe8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(lVar2 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(lVar2 + 0xf8) = uVar1;
  *(undefined8 *)(lVar2 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  lVar2 = *(longlong *)(param_1 + 0x590);
  uVar1 = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(lVar2 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(lVar2 + 0x110) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(lVar2 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(lVar2 + 0x120) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(lVar2 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(lVar2 + 0x130) = uVar1;
  *(undefined8 *)(lVar2 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  uVar1 = *(undefined8 *)(param_2 + 0x148);
  lVar2 = *(longlong *)(param_1 + 0x590);
  *(undefined8 *)(lVar2 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(lVar2 + 0x148) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(lVar2 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(lVar2 + 0x158) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(lVar2 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(lVar2 + 0x168) = uVar1;
  *(undefined8 *)(lVar2 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  return;
}



// FUNCTION 140b40650 FUN_140b40650 body=86 status=ok
// SIG undefined FUN_140b40650(void)

void FUN_140b40650(longlong param_1)

{
  longlong lVar1;
  
  FUN_143016400();
  if ((*(char *)(param_1 + 0x128) != '\x03') || (lVar1 = *(longlong *)(param_1 + 0x718), lVar1 == 0)
     ) {
    return;
  }
  if (((*(byte *)(param_1 + 0x80) & 1) != 0) && ((*(byte *)(param_1 + 0x5a8) & 1) != 0)) {
    FUN_142f6c130(lVar1,1);
    return;
  }
  FUN_142f6c130(lVar1,0);
  return;
}



// FUNCTION 140b406b0 ExternalUIChange body=7 status=ok
// SIG undefined ExternalUIChange(void)

void FSlateApplication::ExternalUIChange(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x7e0) = param_2;
  return;
}



// FUNCTION 140b406c0 FUN_140b406c0 body=376 status=ok
// SIG undefined FUN_140b406c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b406c0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined1 auStack_118 [32];
  undefined1 *local_f8 [2];
  undefined1 local_e8 [128];
  undefined1 *local_68;
  undefined1 *local_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  puVar3 = (undefined1 *)0x0;
  iVar6 = 0;
  if (*(int *)(param_3 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
    iVar6 = *(int *)(param_3 + 1) + -1;
  }
  local_68 = (undefined1 *)0x0;
  if (puVar5 == (undefined2 *)0x0) {
    local_60 = (undefined1 *)0x0;
    local_58 = 0;
  }
  else {
    local_f8[0] = (undefined1 *)((ulonglong)local_f8[0] & 0xffffffff00000000);
    FTCHARToUTF8_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (local_f8,iVar6 * 4,puVar5,iVar6);
    puVar1 = local_f8[0];
    local_58 = (uint)local_f8[0];
    if ((0x80 < (uint)local_f8[0]) && ((uint)local_f8[0] != 0)) {
      puVar3 = (undefined1 *)FMemory::Realloc(0,(longlong)(int)(uint)local_f8[0],0);
      local_68 = puVar3;
    }
    local_f8[0] = local_e8;
    if (puVar3 != (undefined1 *)0x0) {
      local_f8[0] = puVar3;
    }
    local_60 = local_f8[0];
    FTCHARToUTF8_Convert::Convert_Impl<char_*>(local_f8,(ulonglong)puVar1 & 0xffffffff,puVar5,iVar6)
    ;
  }
  if (param_2 != 0) {
    uVar4 = 0xffffffffffffffff;
    do {
      uVar4 = uVar4 + 1;
    } while (*(char *)(param_2 + uVar4) != '\0');
    FUN_140a6ec50(param_1 + 0x30,5);
    FUN_140a78ce0(param_1 + 0x30,param_2,uVar4 & 0xffffffff);
  }
  uVar2 = local_58;
  puVar3 = local_60;
  FUN_140a6ec50(param_1 + 0x30,5);
  FUN_140a78ce0(param_1 + 0x30,puVar3,uVar2);
  if (local_68 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b40840 FUN_140b40840 body=7 status=ok
// SIG undefined FUN_140b40840(void)

void FUN_140b40840(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x764) = param_2;
  return;
}



// FUNCTION 140b40850 FUN_140b40850 body=170 status=ok
// SIG undefined FUN_140b40850(void)

void FUN_140b40850(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_28 [32];
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    if ((*(int *)(param_1 + 0xac) < 0) && (*(int *)(param_1 + 0xac) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xa0,0);
    }
    if (*(undefined2 **)(param_1 + 0xa0) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0xa0) = 0;
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    return;
  }
  uVar1 = FSoftObjectPath::FSoftObjectPath(local_28);
  FSoftObjectPath::operator=(param_1 + 0x98,uVar1);
  FWeakObjectPtr::operator=((undefined4 *)(param_1 + 0x88),param_2);
  LOCK();
  if (DAT_1464b56f4 == 0) {
    DAT_1464b56f4 = 0;
  }
  UNLOCK();
  *(int *)(param_1 + 0x90) = DAT_1464b56f4;
  return;
}



// FUNCTION 140b40900 FUN_140b40900 body=206 status=ok
// SIG undefined FUN_140b40900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b40900(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
    if (lVar2 == 0) {
      local_28 = _DAT_1468b5d90;
      local_20 = DAT_1468b5d98;
    }
    else {
      local_28 = *(undefined8 *)(lVar2 + 0x220);
      local_20 = *(undefined4 *)(lVar2 + 0x228);
    }
    local_1c = local_28;
    local_14 = local_20;
    FUN_14223c850(param_2,&local_1c,0,0,1);
  }
  fVar1 = *(float *)(param_1 + 0x490);
  if (0.0 < fVar1) {
    FUN_14223e8c0(param_2,fVar1 * fVar1);
  }
  if ((*(byte *)(param_2 + 0x91) & 1) != 0) {
    FUN_14223ec50(param_2,0);
  }
  return;
}



// FUNCTION 140b409d0 FUN_140b409d0 body=116 status=ok
// SIG undefined FUN_140b409d0(void)

void FUN_140b409d0(undefined8 param_1,longlong param_2)

{
  FUN_1423979a0(param_1,*(byte *)(param_2 + 0x2f0) >> 5 & 1);
  FUN_142397970(param_1,*(byte *)(param_2 + 0x2f0) >> 6 & 1);
  FUN_142398e60(param_1,*(undefined4 *)(param_2 + 0x6b8),0);
  FUN_1423970c0(param_1,*(byte *)(param_2 + 0x2f1) >> 4 & 1);
  FUN_142397540(param_1,0,1);
  return;
}



// FUNCTION 140b40a50 FUN_140b40a50 body=250 status=ok
// SIG undefined FUN_140b40a50(void)

void FUN_140b40a50(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(longlong *)(param_1 + 0x6a8) == 0) ||
     ((*(longlong *)(param_1 + 0x568) != 0 && (cVar2 = FUN_142ff0d10(), cVar2 == '\0')))) {
    FUN_143016910(param_1);
  }
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    FUN_142382f60(*(longlong *)(param_1 + 0x6c8),*(undefined8 *)(param_1 + 0x168),&DAT_146532184,0);
  }
  lVar4 = *(longlong *)(param_1 + 0x718);
  if (lVar4 == 0) {
    uVar3 = AArchVisCharacter::StaticClass();
    lVar4 = AGameStateBase::OnRep_GameModeClass(param_1,uVar3);
    if (lVar4 == 0) {
LAB_140b40b06:
      lVar4 = 0;
    }
    else {
      lVar5 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140b40b06;
    }
    *(longlong *)(param_1 + 0x718) = lVar4;
    if (lVar4 == 0) goto LAB_140b40b33;
  }
  FUN_142382f60(lVar4,*(undefined8 *)(param_1 + 0x168),&DAT_146532180,0);
LAB_140b40b33:
  FUN_140b471d0(param_1);
  return;
}



// FUNCTION 140b40b50 FUN_140b40b50 body=446 status=ok
// SIG undefined FUN_140b40b50(void)

void FUN_140b40b50(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = param_1[0xe2];
  lVar5 = 0;
  if (lVar6 != 0) {
    lVar3 = USoundNodeEnveloper::StaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140b40ba9;
  }
  lVar6 = lVar5;
LAB_140b40ba9:
  cVar2 = (**(code **)(*param_1 + 0x880))(param_1);
  if (((cVar2 != '\0') && (lVar6 != 0)) && (*(longlong *)(lVar6 + 0x158) != 0)) {
    uVar4 = FUN_141437710();
    lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar4);
    if (lVar3 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar4 = FUN_141437710();
      lVar3 = FUN_1417985e0(uVar4,param_1,0,0,0,0,0,0,0);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x180) = *(undefined8 *)(lVar6 + 0x158);
        *(undefined8 *)(lVar3 + 0x268) = *(undefined8 *)(lVar6 + 0x158);
        *(byte *)(lVar3 + 0x260) = *(byte *)((longlong)param_1 + 0x70c) & 1;
        if ((*(byte *)((longlong)param_1 + 0x70c) & 1) != 0) {
          lVar5 = FUN_140b2aac0(param_1);
        }
        FWeakObjectPtr::operator=(lVar3 + 600,lVar5);
        (**(code **)(*param_1 + 0x630))(param_1,lVar3);
        FUN_14234b150(lVar3);
        FUN_1411fb0d0(lVar3,1);
      }
    }
    else {
      *(undefined8 *)(lVar3 + 0x268) = *(undefined8 *)(lVar6 + 0x158);
      *(byte *)(lVar3 + 0x260) = *(byte *)((longlong)param_1 + 0x70c) & 1;
      if ((*(byte *)((longlong)param_1 + 0x70c) & 1) != 0) {
        lVar5 = FUN_140b2aac0(param_1);
      }
      FWeakObjectPtr::operator=(lVar3 + 600,lVar5);
    }
  }
  return;
}



// FUNCTION 140b40d10 FUN_140b40d10 body=94 status=ok
// SIG undefined FUN_140b40d10(void)

ulonglong FUN_140b40d10(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar5;
  ulonglong uVar4;
  
  lVar2 = ATrap::GetActivationShapeComponent();
  uVar4 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_14142bde0();
    uVar5 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      uVar4 = (ulonglong)uVar5 << 8;
      bVar1 = false;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      bVar1 = true;
    }
    if ((bVar1) && (*(char *)(lVar2 + 0x348) != '\0')) {
      return uVar4 & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// FUNCTION 140b40de0 FUN_140b40de0 body=66 status=ok
// SIG undefined FUN_140b40de0(void)

undefined1 FUN_140b40de0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if (((*(byte *)(param_1 + 0x70c) & 1) == 0) ||
     (plVar2 = (longlong *)FUN_140b2aac0(), plVar2 == (longlong *)0x0)) {
    return 1;
  }
  if (((*(uint *)((longlong)plVar2 + 0x4cc) >> 1 & 1) != 0) &&
     (cVar1 = (**(code **)(*plVar2 + 0x768))(plVar2), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 140b40e30 FUN_140b40e30 body=105 status=ok
// SIG undefined FUN_140b40e30(void)

undefined8 FUN_140b40e30(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined7 uVar4;
  
  lVar3 = 0;
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_14301f8f0();
    lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x208);
    }
  }
  uVar4 = (undefined7)((ulonglong)lVar3 >> 8);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1d8) != 0)) {
    return CONCAT71(uVar4,*(char *)(*(longlong *)(lVar3 + 0x1d8) + 0x38) == '\0');
  }
  return CONCAT71(uVar4,1);
}



// FUNCTION 140b40ea0 FUN_140b40ea0 body=113 status=ok
// SIG undefined FUN_140b40ea0(void)

undefined8 FUN_140b40ea0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  if ((*(byte *)(param_1 + 0x460) & 1) != 0) {
    return 1;
  }
  plVar1 = *(longlong **)(param_1 + 0x150);
  if (plVar1 != (longlong *)0x0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (cVar3 = (**(code **)(*plVar1 + 0xc00))(plVar1), cVar3 == '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140b40f20 FUN_140b40f20 body=1285 status=ok
// SIG undefined FUN_140b40f20(void)

void FUN_140b40f20(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  char cVar14;
  longlong local_res8;
  undefined8 local_res18;
  longlong local_res20;
  longlong *local_58;
  ulonglong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  if ((*(longlong *)(param_1 + 0x118) != 0) && (*(int *)(param_1 + 0x1f8) < 1)) {
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0();
    }
    lVar6 = FUN_140b5b830(lVar6);
    if (lVar6 != 0) {
      lVar7 = FUN_140b2abc0(param_1);
      if (lVar7 == 0) {
        cVar14 = *(char *)(param_1 + 0x218) != '\0';
      }
      else {
        cVar14 = '\x02';
      }
      local_res8 = CONCAT71(local_res8._1_7_,cVar14);
      cVar5 = FUN_140b81c70(param_1);
      local_58 = (longlong *)FUN_140b2abc0(param_1);
      if (*(int *)(param_1 + 0x1c0) < 1) {
        local_res18 = 0;
      }
      else {
        local_res18 = **(undefined8 **)(param_1 + 0x1b8);
      }
      if ((cVar5 == '\0') || (cVar14 != '\0')) {
        local_48 = (longlong *)0x0;
        local_40 = 0;
        FUN_1430125c0(param_1,param_2,&local_48);
        uVar13 = (ulonglong)(int)local_40;
        plVar10 = local_48 + uVar13 * 0xf;
        if (local_48 != plVar10) {
          local_res20 = 0;
          plVar11 = local_48 + 0xd;
          do {
            puVar8 = (undefined8 *)FUN_140b58fc0(lVar6);
            *(undefined1 *)(puVar8 + 10) = 1;
            *puVar8 = *(undefined8 *)(param_1 + 0x118);
            *(char *)(puVar8 + 4) = cVar14;
            puVar8[5] = local_58;
            iVar2 = *(int *)(puVar8 + 2);
            *(int *)(puVar8 + 2) = iVar2 + 1;
            if (*(int *)((longlong)puVar8 + 0x14) < iVar2 + 1) {
              TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(puVar8 + 1,iVar2);
            }
            FUN_1409f3dd0((longlong)iVar2 * 0x60 + puVar8[1],plVar11 + -0xd);
            puVar8[9] = plVar11[-1];
            puVar8[0x11] = *plVar11;
            *(char *)(puVar8 + 0x12) = (char)plVar11[1];
            *(undefined1 *)(puVar8 + 6) = *(undefined1 *)(param_1 + 0x244);
            *(undefined4 *)((longlong)puVar8 + 0x34) = *(undefined4 *)(param_1 + 0x248);
            puVar8[8] = local_res18;
            *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(param_1 + 600);
            FUN_1409f6880(puVar8 + 0xb,param_1 + 0x220);
            pwVar9 = _guard_xfg_dispatch_icall_nop
                               (L"&UOakLootableComponent::HandlePickupSpawned",L"::");
            pwVar4 = (wchar_t *)0x0;
            while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
              pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
              pwVar4 = pwVar3;
            }
            FName::FName(&local_res20,pwVar4 + 2,1);
            lVar7 = local_res20;
            FWeakObjectPtr::operator=(puVar8 + 0x13,param_1);
            puVar8[0x14] = lVar7;
            if ((lVar7 != 0) && (lVar7 = FWeakObjectPtr::Get(puVar8 + 0x13), lVar7 != 0)) {
              UObject::FindFunction(lVar7,puVar8[0x14]);
            }
            FUN_140b5a8a0(lVar6,puVar8);
            plVar1 = plVar11 + 2;
            plVar11 = plVar11 + 0xf;
            cVar14 = (char)local_res8;
          } while (plVar1 != plVar10);
          uVar13 = local_40 & 0xffffffff;
        }
        plVar10 = local_48;
        if ((int)uVar13 != 0) {
          plVar11 = local_48 + 7;
          do {
            if (plVar11[2] != 0) {
              FMemory::Free();
            }
            if (*plVar11 != 0) {
              FMemory::Free();
            }
            TArray<FNamedInterfaceDef,FDefaultAllocator>::
            ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar11 + -3);
            plVar11 = plVar11 + 0xf;
            uVar12 = (int)uVar13 - 1;
            uVar13 = (ulonglong)uVar12;
            plVar10 = local_48;
          } while (uVar12 != 0);
        }
      }
      else {
        local_58 = (longlong *)0x0;
        local_50 = 0;
        FUN_140b3dfc0(param_1,param_2,&local_58);
        uVar13 = (ulonglong)(int)local_50;
        plVar10 = local_58 + uVar13 * 0x10;
        if (local_58 != plVar10) {
          local_res8 = 0;
          plVar11 = local_58 + 0xf;
          do {
            puVar8 = (undefined8 *)FUN_140b58fc0(lVar6);
            *(undefined1 *)(puVar8 + 10) = 1;
            *puVar8 = *(undefined8 *)(param_1 + 0x118);
            *(char *)(puVar8 + 4) = (*plVar11 != 0) + '\x01';
            puVar8[5] = *plVar11;
            iVar2 = *(int *)(puVar8 + 2);
            *(int *)(puVar8 + 2) = iVar2 + 1;
            if (*(int *)((longlong)puVar8 + 0x14) < iVar2 + 1) {
              TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(puVar8 + 1,iVar2);
            }
            FUN_1409f3dd0((longlong)iVar2 * 0x60 + puVar8[1],plVar11 + -0xf);
            puVar8[9] = plVar11[-3];
            puVar8[0x11] = plVar11[-2];
            *(char *)(puVar8 + 0x12) = (char)plVar11[-1];
            *(undefined1 *)(puVar8 + 6) = *(undefined1 *)(param_1 + 0x244);
            *(undefined4 *)((longlong)puVar8 + 0x34) = *(undefined4 *)(param_1 + 0x248);
            puVar8[8] = local_res18;
            *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(param_1 + 600);
            FUN_1409f6880(puVar8 + 0xb,param_1 + 0x220);
            pwVar9 = _guard_xfg_dispatch_icall_nop
                               (L"&UOakLootableComponent::HandlePickupSpawned",L"::");
            pwVar4 = (wchar_t *)0x0;
            while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
              pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
              pwVar4 = pwVar3;
            }
            FName::FName(&local_res8,pwVar4 + 2,1);
            lVar7 = local_res8;
            FWeakObjectPtr::operator=(puVar8 + 0x13,param_1);
            puVar8[0x14] = lVar7;
            if ((lVar7 != 0) && (lVar7 = FWeakObjectPtr::Get(puVar8 + 0x13), lVar7 != 0)) {
              UObject::FindFunction(lVar7,puVar8[0x14]);
            }
            FUN_140b5a8a0(lVar6,puVar8);
            plVar1 = plVar11 + 1;
            plVar11 = plVar11 + 0x10;
          } while (plVar1 != plVar10);
          uVar13 = local_50 & 0xffffffff;
        }
        plVar10 = local_58;
        if ((int)uVar13 != 0) {
          plVar11 = local_58 + 7;
          do {
            if (plVar11[2] != 0) {
              FMemory::Free();
            }
            if (*plVar11 != 0) {
              FMemory::Free();
            }
            TArray<FNamedInterfaceDef,FDefaultAllocator>::
            ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar11 + -3);
            plVar11 = plVar11 + 0x10;
            uVar12 = (int)uVar13 - 1;
            uVar13 = (ulonglong)uVar12;
            plVar10 = local_58;
          } while (uVar12 != 0);
        }
      }
      if (plVar10 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140b41430 FUN_140b41430 body=547 status=ok
// SIG undefined FUN_140b41430(void)

void FUN_140b41430(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_98 [32];
  longlong local_78;
  longlong local_68;
  longlong local_58;
  longlong local_48;
  ulonglong uVar8;
  
  cVar4 = FUN_140b1fd50();
  if ((((cVar4 != '\0') && (param_2 != (longlong *)0x0)) &&
      (cVar4 = (**(code **)(*param_2 + 0x768))(param_2), cVar4 != '\0')) &&
     ((lVar5 = FUN_140cff230(param_2), lVar5 != 0 && (0 < *(int *)(lVar5 + 0x398))))) {
    uVar6 = 0;
    uVar8 = uVar6;
    do {
      lVar3 = *(longlong *)(lVar5 + 0x390);
      if (*(char *)(lVar3 + 0x78 + uVar6) == '\0') {
        _guard_xfg_dispatch_icall_nop(local_98,0,0x68);
        FUN_142ff9df0((longlong)(int)uVar8 * 0x80 + lVar3,local_98);
        local_b8 = 0xffffffff;
        local_b4 = 0;
        local_b0 = 0;
        local_a8 = 0;
        FWeakObjectPtr::operator=(&local_b8,param_2);
        FUN_142ff5c90(local_98,&local_b0,1);
        cVar4 = FUN_14044af00(&local_b8);
        if ((cVar4 != '\0') && (1 < (int)local_a8)) {
          iVar2 = (int)param_1[0x30];
          *(int *)(param_1 + 0x30) = iVar2 + 1;
          if (*(int *)((longlong)param_1 + 0x184) < iVar2 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(param_1 + 0x2f,iVar2);
          }
          puVar1 = (undefined4 *)(param_1[0x2f] + (longlong)iVar2 * 0x18);
          *puVar1 = local_b8;
          puVar1[1] = local_b4;
          FString::FString(puVar1 + 2);
        }
        if (local_b0 != 0) {
          FMemory::Free();
        }
        if (local_48 != 0) {
          FMemory::Free();
        }
        if (local_58 != 0) {
          FMemory::Free();
        }
        if (local_68 != 0) {
          FMemory::Free();
        }
        if (local_78 != 0) {
          FMemory::Free();
        }
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar6 = uVar6 + 0x80;
    } while ((int)uVar7 < *(int *)(lVar5 + 0x398));
    (**(code **)(*param_1 + 0x358))(param_1,1);
  }
  return;
}



// FUNCTION 140b41660 FUN_140b41660 body=1078 status=ok
// SIG undefined FUN_140b41660(void)

void FUN_140b41660(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong local_res18 [2];
  longlong *local_68;
  ulonglong local_60;
  code *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x118) != 0)) &&
     (iVar5 = FUN_142235230(), iVar5 != 3)) {
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    lVar6 = FUN_140b5b830(lVar6);
    if (lVar6 != 0) {
      cVar3 = FUN_140b2bef0(param_1);
      cVar4 = FUN_140b81c70(param_1);
      uVar7 = FUN_140b2abc0(param_1);
      uVar8 = 0;
      if (0 < *(int *)(param_1 + 0x1c0)) {
        uVar8 = **(undefined8 **)(param_1 + 0x1b8);
      }
      if ((cVar4 == '\0') || (cVar3 != '\0')) {
        local_68 = (longlong *)0x0;
        local_60 = 0;
        FUN_143012b70(param_1,param_2,&local_68);
        puVar9 = (undefined8 *)FUN_140b58fc0(lVar6);
        *(undefined1 *)(puVar9 + 10) = 0;
        *puVar9 = *(undefined8 *)(param_1 + 0x118);
        *(char *)(puVar9 + 4) = cVar3;
        puVar9[5] = uVar7;
        FUN_1409f6900(puVar9 + 1,&local_68);
        puVar9[9] = *(undefined8 *)(param_1 + 0x230);
        puVar9[0xe] = *(undefined8 *)(param_1 + 0x238);
        *(undefined2 *)(puVar9 + 6) = 0x101;
        *(undefined4 *)((longlong)puVar9 + 0x34) = *(undefined4 *)(param_1 + 0x240);
        puVar9[8] = uVar8;
        *(undefined4 *)((longlong)puVar9 + 0x3c) = *(undefined4 *)(param_1 + 0x1b0);
        FUN_1409f6880(puVar9 + 0xb,param_1 + 0x220);
        local_58 = FUN_140b1b400;
        uStack_50 = 0;
        local_48 = 0x40b1b400;
        uStack_44 = 1;
        uStack_40 = 0;
        uStack_3c = uStack_4c;
        FUN_14058c4b0(puVar9 + 0xf,param_1,&local_48);
        pwVar10 = _guard_xfg_dispatch_icall_nop
                            (L"&UOakLootableComponent::HandlePickupSpawned",L"::");
        pwVar12 = (wchar_t *)0x0;
        while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
          pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar12 = pwVar2;
        }
        FName::FName(local_res18,pwVar12 + 2,1);
        FWeakObjectPtr::operator=(puVar9 + 0x13,param_1);
        puVar9[0x14] = local_res18[0];
        if ((local_res18[0] != 0) && (lVar11 = FWeakObjectPtr::Get(puVar9 + 0x13), lVar11 != 0)) {
          UObject::FindFunction(lVar11,puVar9[0x14]);
        }
        FUN_140b5a8a0(lVar6,puVar9);
        FUN_1409f5880(&local_68);
      }
      else {
        local_68 = (longlong *)0x0;
        local_60 = 0;
        FUN_140b3e610(param_1,param_2,&local_68);
        uVar15 = (ulonglong)(int)local_60;
        plVar13 = local_68 + uVar15 * 3;
        if (local_68 != plVar13) {
          plVar16 = local_68 + 2;
          do {
            if ((int)plVar16[-1] != 0) {
              puVar9 = (undefined8 *)FUN_140b58fc0(lVar6);
              *(undefined1 *)(puVar9 + 10) = 0;
              *puVar9 = *(undefined8 *)(param_1 + 0x118);
              *(char *)(puVar9 + 4) = (*plVar16 != 0) + '\x01';
              puVar9[5] = *plVar16;
              FUN_1409f6900(puVar9 + 1,plVar16 + -2);
              puVar9[9] = *(undefined8 *)(param_1 + 0x230);
              puVar9[0xe] = *(undefined8 *)(param_1 + 0x238);
              *(undefined2 *)(puVar9 + 6) = 0x101;
              *(undefined4 *)((longlong)puVar9 + 0x34) = *(undefined4 *)(param_1 + 0x240);
              pwVar12 = (wchar_t *)0x0;
              if (0 < *(int *)(param_1 + 0x1c0)) {
                pwVar12 = (wchar_t *)**(longlong **)(param_1 + 0x1b8);
              }
              puVar9[8] = pwVar12;
              *(undefined4 *)((longlong)puVar9 + 0x3c) = *(undefined4 *)(param_1 + 0x1b0);
              FUN_1409f6880(puVar9 + 0xb,param_1 + 0x220);
              local_58 = FUN_140b1b400;
              uStack_50 = 0;
              local_48 = 0x40b1b400;
              uStack_44 = 1;
              uStack_40 = 0;
              uStack_3c = uStack_4c;
              FUN_14058c4b0(puVar9 + 0xf,param_1,&local_48);
              pwVar10 = _guard_xfg_dispatch_icall_nop
                                  (L"&UOakLootableComponent::HandlePickupSpawned",L"::");
              pwVar12 = (wchar_t *)0x0;
              while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
                pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
                pwVar12 = pwVar2;
              }
              FName::FName(local_res18,pwVar12 + 2,1);
              lVar11 = local_res18[0];
              FWeakObjectPtr::operator=(puVar9 + 0x13,param_1);
              puVar9[0x14] = lVar11;
              if ((lVar11 != 0) && (lVar11 = FWeakObjectPtr::Get(puVar9 + 0x13), lVar11 != 0)) {
                UObject::FindFunction(lVar11,puVar9[0x14]);
              }
              FUN_140b5a8a0(lVar6,puVar9);
            }
            plVar1 = plVar16 + 1;
            plVar16 = plVar16 + 3;
          } while (plVar1 != plVar13);
          uVar15 = local_60 & 0xffffffff;
        }
        uVar14 = (uint)uVar15;
        plVar13 = local_68;
        while (uVar14 != 0) {
          FUN_1409f5880(plVar13);
          plVar13 = plVar13 + 3;
          uVar14 = (int)uVar15 - 1;
          uVar15 = (ulonglong)uVar14;
        }
        if (local_68 != (longlong *)0x0) {
          FMemory::Free(local_68);
        }
      }
    }
  }
  return;
}



// FUNCTION 140b41aa0 FUN_140b41aa0 body=2643 status=ok
// SIG undefined FUN_140b41aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b41aa0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  float *param_5)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  undefined1 auStack_2c8 [32];
  uint local_2a8;
  undefined8 *local_2a0;
  longlong *local_298;
  int local_290;
  float *local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined8 local_274;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  float local_250;
  longlong local_248;
  undefined8 local_238;
  float local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  float local_20c;
  undefined4 local_208;
  undefined8 local_204;
  undefined4 local_1fc;
  float local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong lStack_1d0;
  longlong local_1b8;
  longlong lStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined1 local_178 [12];
  undefined1 local_16c [12];
  undefined1 local_160 [24];
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_138 [8];
  undefined8 local_130;
  code *local_128;
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  ulonglong local_d8;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_288 = param_5;
  if (param_3 == 0) {
    return;
  }
  if ((char)param_2[0x25] != '\x03') {
    return;
  }
  if ((char)param_2[0x111] != '\0') {
    return;
  }
  local_248 = param_3;
  local_1e0 = param_4;
  fVar16 = (float)FUN_140afed70(param_1,param_4);
  fVar23 = *param_5;
  iVar15 = (int)fVar16;
  if (((fVar23 == 0.0) && (param_5[1] == 0.0)) && (param_5[2] == 0.0)) {
    local_26c = 0x3f800000;
    param_5[0] = 0.0;
    param_5[1] = 0.0;
    param_5[2] = 1.0;
    fVar23 = *param_5;
  }
  fVar16 = param_5[1];
  fVar18 = param_5[2];
  fVar17 = fVar16 * fVar16 + fVar23 * fVar23 + fVar18 * fVar18;
  if (1e-08 < fVar17) {
    auVar21 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
    fVar19 = auVar21._0_4_;
    fVar19 = fVar19 + fVar19 * (0.5 - fVar17 * 0.5 * fVar19 * fVar19);
    fVar19 = fVar19 + fVar19 * (0.5 - fVar17 * 0.5 * fVar19 * fVar19);
    *param_5 = fVar19 * fVar23;
    param_5[1] = fVar16 * fVar19;
    param_5[2] = fVar18 * fVar19;
    local_268 = CONCAT44(local_268._4_4_,fVar19);
  }
  if (iVar15 < 1) goto LAB_140b424a4;
  if ((iVar15 < 2) || (*(float *)(param_1 + 0x58) <= 0.0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  *(undefined1 *)((longlong)param_2 + 0x779) = uVar7;
  (**(code **)(*param_2 + 0x310))(param_2,1);
  fVar16 = 360.0 / (float)iVar15;
  iVar8 = rand();
  fVar23 = (float)iVar8 * 3.051851e-05 * fVar16;
  FWeakObjectPtr::operator=(&local_260,param_2);
  FWeakObjectPtr::operator=(&local_218,param_3);
  lVar9 = (**(code **)(*param_2 + 0x148))(param_2);
  uVar3 = local_25c;
  uVar2 = local_260;
  if (lVar9 != 0) {
    local_298 = (longlong *)0x0;
    local_290 = 0;
    plVar10 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar10 == (longlong *)0x0) {
      if (((local_290 != 0) && (local_298 != (longlong *)0x0)) &&
         ((**(code **)(*local_298 + 0x28))(local_298,0), local_298 != (longlong *)0x0)) {
        local_298 = (longlong *)FMemory::Realloc(local_298,0,0);
      }
    }
    else {
      *plVar10 = (longlong)&PTR_GetPoolName_1442ab548;
      *(undefined4 *)(plVar10 + 1) = uVar2;
      *(undefined4 *)((longlong)plVar10 + 0xc) = uVar3;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar10[3] = lVar9;
      *plVar10 = (longlong)&PTR_GetPoolName_1442ab590;
      TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
      ::CreateCopy(plVar10,&local_298);
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x28))(plVar10,0);
      lVar9 = FMemory::Realloc(plVar10,0,0);
      if (lVar9 != 0) {
        FMemory::Free(lVar9);
      }
    }
    local_268 = 0;
    lVar9 = (**(code **)(*param_2 + 0x148))(param_2);
    if (*(longlong *)(lVar9 + 400) == 0) {
      uVar14 = *(undefined8 *)(lVar9 + 0x3f8);
    }
    else {
      uVar14 = *(undefined8 *)(*(longlong *)(lVar9 + 400) + 0x90);
    }
    fVar18 = *(float *)(param_1 + 0x58);
    local_148 = 0;
    local_140 = 0;
    if ((local_290 != 0) && (local_298 != (longlong *)0x0)) {
      (**(code **)(*local_298 + 0x30))(local_298,&local_148);
    }
    FWeakObjectPtr::operator=(local_138,0);
    local_2a0 = (undefined8 *)CONCAT44(local_2a0._4_4_,0xbf800000);
    local_128 = AK::MemoryMgr::StartProfileThreadUsage;
    local_130 = 0;
    local_f8 = (longlong *)0x0;
    local_e8 = 0;
    local_2a8 = local_2a8 & 0xffffff00;
    FUN_142880850(uVar14,&local_268,&local_148,(float)iVar15 * fVar18 + 0.01);
    if (local_e8 != 0) {
      plVar10 = local_118;
      if (local_f8 != (longlong *)0x0) {
        plVar10 = local_f8;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_148);
    if (local_290 != 0) {
      param_5 = local_288;
      if (local_298 == (longlong *)0x0) goto LAB_140b41f0f;
      (**(code **)(*local_298 + 0x28))(local_298,0);
      if (local_298 != (longlong *)0x0) {
        local_298 = (longlong *)FMemory::Realloc(local_298,0,0);
      }
      local_290 = 0;
    }
    param_5 = local_288;
    if (local_298 != (longlong *)0x0) {
      FMemory::Free(local_298);
      param_5 = local_288;
    }
  }
LAB_140b41f0f:
  local_204 = 0x3f800000;
  local_1fc = 0;
  do {
    fVar18 = *(float *)(param_1 + 0x4c);
    fVar17 = *(float *)(param_1 + 0x48);
    iVar8 = rand();
    local_210 = 0;
    local_208 = 0;
    local_20c = (float)iVar8 * 3.051851e-05 * (fVar18 - fVar17) + fVar17;
    FRotator::Vector(&local_210,&local_258);
    puVar11 = (undefined8 *)FVector::RotateAngleAxis(&local_258,local_178,fVar23,&local_204);
    local_258 = *puVar11;
    local_250 = *(float *)(puVar11 + 1);
    uVar14 = *puVar11;
    local_230 = *(float *)(puVar11 + 1);
    uVar12 = FVector::Rotation(param_5,local_16c);
    FRotator::Quaternion(uVar12,&local_188);
    fVar22 = (float)((ulonglong)uVar14 >> 0x20);
    fVar20 = (float)uVar14;
    local_238 = uVar14;
    fVar18 = local_230 * fStack_184 - fVar22 * fStack_180;
    fVar17 = fVar20 * fStack_180 - local_230 * local_188;
    fVar19 = fVar22 * local_188 - fVar20 * fStack_184;
    fVar18 = fVar18 + fVar18;
    fVar17 = fVar17 + fVar17;
    fVar19 = fVar19 + fVar19;
    local_1f0 = (fVar17 * local_188 - fVar18 * fStack_184) + fStack_17c * fVar19 + local_230;
    local_250 = local_1f0;
    lVar9 = param_2[0x2d];
    local_258 = CONCAT44((fVar18 * fStack_180 - fVar19 * local_188) + fStack_17c * fVar17 + fVar22,
                         (fVar19 * fStack_184 - fVar17 * fStack_180) + fStack_17c * fVar18 + fVar20)
    ;
    if (lVar9 == 0) {
      local_220 = DAT_1468b5d98;
      puVar11 = &local_228;
      local_228 = _DAT_1468b5d90;
    }
    else {
      puVar11 = (undefined8 *)&local_280;
      local_280 = *(undefined4 *)(lVar9 + 0x220);
      local_278 = *(undefined4 *)(lVar9 + 0x228);
      uStack_27c = *(undefined4 *)(lVar9 + 0x224);
    }
    uVar14 = *puVar11;
    local_26c = *(undefined4 *)(puVar11 + 1);
    uVar12 = FVector::Rotation(&local_258,local_160);
    FRotator::Quaternion(uVar12,&local_1d8);
    lVar6 = lStack_1d0;
    lVar9 = local_1d8;
    uVar2 = local_26c;
    auVar21._4_4_ = DAT_1464aa788._4_4_;
    auVar21._0_4_ = (undefined4)DAT_1464aa788;
    auVar21._8_4_ = DAT_1464aa790;
    auVar21._12_4_ = 0;
    local_274 = uVar14;
    if ((*(float *)(param_1 + 0x58) <= 0.0) || (iVar15 == 1)) {
      local_1b8 = local_1d8;
      lStack_1b0 = lStack_1d0;
      local_1a8._8_4_ = local_26c;
      local_1a8._0_8_ = uVar14;
      local_1a8._12_4_ = 0;
      local_198 = auVar21;
      FUN_140b42660(param_1,param_2,param_3,&local_1b8);
    }
    else {
      lVar13 = (**(code **)(*param_2 + 0x148))(param_2);
      uVar5 = local_218;
      uVar4 = local_25c;
      uVar3 = local_260;
      if (lVar13 != 0) {
        local_298 = (longlong *)0x0;
        local_290 = 0;
        local_268 = CONCAT44(local_268._4_4_,local_214);
        plVar10 = (longlong *)FMemory::Realloc(0,0x70);
        if (plVar10 == (longlong *)0x0) {
          if ((local_290 != 0) && (local_298 != (longlong *)0x0)) {
            (**(code **)(*local_298 + 0x28))(local_298,0);
            if (local_298 != (longlong *)0x0) {
              local_298 = (longlong *)FMemory::Realloc(local_298,0,0);
            }
            local_290 = 0;
          }
        }
        else {
          *plVar10 = (longlong)&PTR_GetPoolName_1442ab5d8;
          *(undefined4 *)(plVar10 + 2) = uVar3;
          *(undefined4 *)((longlong)plVar10 + 0x14) = uVar4;
          *(undefined4 *)(plVar10 + 3) = uVar5;
          *(undefined4 *)((longlong)plVar10 + 0x1c) = (undefined4)local_268;
          plVar10[4] = param_1;
          plVar10[6] = lVar9;
          plVar10[7] = lVar6;
          auVar1._8_4_ = uVar2;
          auVar1._0_8_ = uVar14;
          auVar1._12_4_ = 0;
          *(undefined1 (*) [16])(plVar10 + 8) = auVar1;
          *(undefined1 (*) [16])(plVar10 + 10) = auVar21;
          lVar9 = FDelegateHandle::GenerateNewID();
          plVar10[0xd] = lVar9;
          *plVar10 = (longlong)&PTR_GetPoolName_1442ab620;
          FUN_140b21e90(plVar10,&local_298);
          (**(code **)(*plVar10 + 0x28))(plVar10,0);
          lVar9 = FMemory::Realloc(plVar10,0,0);
          if (lVar9 != 0) {
            FMemory::Free(lVar9);
          }
        }
        local_1e8 = 0;
        lVar9 = (**(code **)(*param_2 + 0x148))(param_2);
        if (*(longlong *)(lVar9 + 400) == 0) {
          uVar14 = *(undefined8 *)(lVar9 + 0x3f8);
        }
        else {
          uVar14 = *(undefined8 *)(*(longlong *)(lVar9 + 400) + 0x90);
        }
        local_148 = 0;
        local_140 = 0;
        fVar18 = *(float *)(param_1 + 0x58);
        if ((local_290 != 0) && (local_298 != (longlong *)0x0)) {
          (**(code **)(*local_298 + 0x30))(local_298,&local_148);
        }
        FWeakObjectPtr::operator=(local_138,0);
        local_2a0 = (undefined8 *)CONCAT44(local_2a0._4_4_,0xbf800000);
        local_128 = AK::MemoryMgr::StartProfileThreadUsage;
        local_130 = 0;
        local_f8 = (longlong *)0x0;
        local_e8 = 0;
        local_2a8 = local_2a8 & 0xffffff00;
        FUN_142880850(uVar14,&local_1e8,&local_148,(float)(iVar15 + -1) * fVar18);
        if (local_e8 != 0) {
          plVar10 = local_118;
          if (local_f8 != (longlong *)0x0) {
            plVar10 = local_f8;
          }
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x10))(plVar10,0);
          }
        }
        if (local_f8 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_148);
        if (local_290 != 0) {
          param_5 = local_288;
          param_3 = local_248;
          if (local_298 == (longlong *)0x0) goto LAB_140b4239d;
          (**(code **)(*local_298 + 0x28))(local_298,0);
          if (local_298 != (longlong *)0x0) {
            local_298 = (longlong *)FMemory::Realloc(local_298,0);
          }
          local_290 = 0;
        }
        param_5 = local_288;
        param_3 = local_248;
        if (local_298 != (longlong *)0x0) {
          FMemory::Free(local_298);
          param_5 = local_288;
          param_3 = local_248;
        }
      }
    }
LAB_140b4239d:
    fVar23 = fVar23 + fVar16;
    iVar15 = iVar15 + -1;
    *(int *)(local_1e0 + 0x28) = *(int *)(local_1e0 + 0x28) + 1;
  } while (0 < iVar15);
  local_1f0 = 0.0;
  local_220 = 0;
  lVar9 = param_2[0x2d];
  local_228 = 0;
  if (lVar9 == 0) {
    local_26c = DAT_1468b5d98;
    puVar11 = &local_274;
    local_274 = _DAT_1468b5d90;
  }
  else {
    puVar11 = (undefined8 *)&local_280;
    local_280 = *(undefined4 *)(lVar9 + 0x220);
    local_278 = *(undefined4 *)(lVar9 + 0x228);
    uStack_27c = *(undefined4 *)(lVar9 + 0x224);
  }
  local_238 = *puVar11;
  local_230 = *(float *)(puVar11 + 1);
  uVar14 = (**(code **)(*param_2 + 0x148))(param_2);
  local_2a0 = &local_228;
  local_2a8 = 0x42480000;
  FUN_1405a1e30(&local_1d8,uVar14,*(undefined8 *)(param_1 + 0x60),&local_238);
  FUN_140591060(&local_1d8);
LAB_140b424a4:
  *(undefined1 *)(param_2 + 0x111) = 1;
  return;
}



// FUNCTION 140b42500 FUN_140b42500 body=348 status=ok
// SIG undefined FUN_140b42500(void)

longlong FUN_140b42500(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong local_18;
  ulonglong local_10;
  
  lVar2 = FUN_143018780();
  if (lVar2 != 0) {
    return lVar2;
  }
  if (param_1[0xd5] == 0) {
    return 0;
  }
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar2 == 0) {
    return 0;
  }
  uVar8 = 1;
  uVar3 = FUN_142dfdf30();
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar3);
  if (plVar4 != (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar4 + 0x400))();
  }
  local_18 = 0;
  local_10 = 0;
  cVar1 = FUN_143013fe0(&local_18,param_1[0xd5],uVar8,param_1,0,0,0,0);
  lVar5 = 0;
  if (cVar1 != '\0') {
    uVar10 = (ulonglong)(int)local_10;
    lVar7 = uVar10 * 0x60 + local_18;
    lVar6 = local_18;
    if (local_18 == lVar7) goto LAB_140b425f8;
    do {
      lVar5 = FUN_143018fc0(lVar6,lVar2,1);
      if (lVar5 != 0) break;
      lVar6 = lVar6 + 0x60;
    } while (lVar6 != lVar7);
  }
  uVar10 = local_10 & 0xffffffff;
LAB_140b425f8:
  if ((int)uVar10 != 0) {
    plVar4 = (longlong *)(local_18 + 0x38);
    do {
      if (plVar4[2] != 0) {
        FMemory::Free();
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (plVar4 + -3);
      plVar4 = plVar4 + 0xc;
      uVar9 = (int)uVar10 - 1;
      uVar10 = (ulonglong)uVar9;
    } while (uVar9 != 0);
  }
  if (local_18 != 0) {
    FMemory::Free(local_18);
  }
  return lVar5;
}



// FUNCTION 140b42660 FUN_140b42660 body=658 status=ok
// SIG undefined FUN_140b42660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b42660(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  float fVar9;
  undefined4 uVar10;
  ulonglong in_stack_ffffffffffffff80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_48;
  undefined4 local_40;
  
  if (((param_2 != (longlong *)0x0) && (param_3 != 0)) &&
     (lVar5 = (**(code **)(*param_2 + 0x148))(param_2), lVar5 != 0)) {
    uVar6 = (**(code **)(*param_2 + 0x148))(param_2);
    cVar4 = UWorld::IsInSeamlessTravel(uVar6);
    if (cVar4 == '\0') {
      lVar5 = param_2[2];
      lVar3 = param_2[0x23];
      uVar6 = FUN_140a63ba0(param_2);
      uVar7 = (**(code **)(*param_2 + 0x148))(param_2);
      lVar5 = FUN_140aea740(uVar7,lVar5,param_4,lVar3,uVar6,
                            in_stack_ffffffffffffff80 & 0xffffffffffffff00);
      uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (lVar5 != 0) {
        FUN_140b30220(lVar5,param_2,param_1);
        FUN_140b30a70(lVar5,param_3);
        bVar8 = *(byte *)(lVar5 + 0x94) & 0x18;
        if (bVar8 == 0x10) {
          fVar1 = *(float *)(lVar5 + 0x470);
          fVar9 = *(float *)(lVar5 + 0x488);
        }
        else {
          fVar1 = *(float *)(lVar5 + 0x7ac);
          fVar9 = *(float *)(lVar5 + 0x7b0);
        }
        if (0.0001 < fVar1) {
          if ((*(byte *)((longlong)param_2 + 0x94) & 0x18) == 0x10) {
            fVar2 = *(float *)(param_2 + 0x8e);
          }
          else {
            fVar2 = *(float *)((longlong)param_2 + 0x7ac);
          }
          if ((bVar8 != 0x10) && (*(char *)(lVar5 + 0x128) == '\x03')) {
            *(float *)(lVar5 + 0x7ac) = (fVar2 / fVar1) * *(float *)(lVar5 + 0x7ac);
          }
        }
        if (0.0001 < fVar9) {
          if ((*(byte *)((longlong)param_2 + 0x94) & 0x18) == 0x10) {
            fVar1 = *(float *)(param_2 + 0x91);
          }
          else {
            fVar1 = *(float *)(param_2 + 0xf6);
          }
          if ((bVar8 != 0x10) && (*(char *)(lVar5 + 0x128) == '\x03')) {
            *(float *)(lVar5 + 0x7b0) = (fVar1 / fVar9) * *(float *)(lVar5 + 0x7b0);
          }
        }
        UGameplayStatics::FinishSpawningActor(lVar5,param_4);
        local_40 = 0;
        lVar5 = param_2[0x2d];
        local_48 = 0;
        if (lVar5 == 0) {
          local_68 = _DAT_1468b5d90;
          local_60 = DAT_1468b5d98;
        }
        else {
          local_68 = *(undefined8 *)(lVar5 + 0x220);
          local_60 = *(undefined4 *)(lVar5 + 0x228);
        }
        local_70 = local_60;
        local_78 = local_68;
        uVar6 = (**(code **)(*param_2 + 0x148))(param_2);
        FUN_1405a1e30(&local_68,uVar6,*(undefined8 *)(param_1 + 0x68),&local_78,
                      CONCAT44(uVar10,0x42480000),&local_48);
        FUN_140591060(&local_68);
      }
    }
  }
  return;
}



// FUNCTION 140b42900 FUN_140b42900 body=1144 status=ok
// SIG undefined FUN_140b42900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b42900(longlong *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 local_138;
  uint local_130;
  undefined8 local_128;
  uint local_120;
  longlong local_118;
  uint local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined4 local_a8;
  uint uStack_a4;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  int local_78;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  longlong local_48 [2];
  undefined1 local_38 [16];
  undefined4 local_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  
  cVar6 = FUN_140b1fd50();
  if (cVar6 != '\0') {
    plVar1 = param_1 + 0x2f;
    puVar2 = (undefined4 *)*plVar1;
    local_88 = *puVar2;
    local_84 = puVar2[1];
    FString::FString(&local_80,puVar2 + 2);
    cVar6 = FUN_14044af00(&local_88,0);
    if ((cVar6 == '\0') || (local_78 < 2)) {
      if (*(longlong *)(*plVar1 + 8) != 0) {
        FMemory::Free();
      }
      iVar7 = (int)param_1[0x30];
      if (iVar7 + -1 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)*plVar1,(void *)(*plVar1 + 0x18),(longlong)(iVar7 + -1) * 0x18);
        iVar7 = (int)param_1[0x30];
      }
      *(int *)(param_1 + 0x30) = iVar7 + -1;
      TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar1);
    }
    else {
      lVar3 = param_1[0x23];
      local_118 = _DAT_1468b5d90;
      local_110 = DAT_1468b5d98;
      local_128 = DAT_1468b5da0;
      local_120 = DAT_1468b5da8;
      if (lVar3 != 0) {
        lVar11 = param_1[0x32];
        if (lVar11 == 0) {
          uVar8 = FUN_14222da00(lVar3,1,&local_118,&local_68);
          lVar11 = *(longlong *)(lVar3 + 0x168);
          if (lVar11 == 0) {
            uVar8 = (undefined4)DAT_1468b5da0;
            uVar12 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
            local_130 = DAT_1468b5da8;
          }
          else {
            local_58 = *(float *)(lVar11 + 0x210);
            fStack_54 = *(float *)(lVar11 + 0x214);
            fStack_50 = *(float *)(lVar11 + 0x218);
            fStack_4c = *(float *)(lVar11 + 0x21c);
            auVar5._4_4_ = -(uint)(*(float *)(lVar11 + 0x254) != fStack_54);
            auVar5._0_4_ = -(uint)(*(float *)(lVar11 + 0x250) != local_58);
            auVar5._8_4_ = -(uint)(*(float *)(lVar11 + 600) != fStack_50);
            auVar5._12_4_ = -(uint)(*(float *)(lVar11 + 0x25c) != fStack_4c);
            iVar7 = movmskps(uVar8,auVar5);
            if (iVar7 != 0) {
              *(float *)(lVar11 + 0x250) = local_58;
              *(float *)(lVar11 + 0x254) = fStack_54;
              *(float *)(lVar11 + 600) = fStack_50;
              *(float *)(lVar11 + 0x25c) = fStack_4c;
              puVar9 = (undefined8 *)FQuat::Rotator(&local_58,&local_138);
              *(undefined8 *)(lVar11 + 0x260) = *puVar9;
              *(undefined4 *)(lVar11 + 0x268) = *(undefined4 *)(puVar9 + 1);
            }
            uVar8 = (undefined4)*(undefined8 *)(lVar11 + 0x260);
            uVar12 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x260) >> 0x20);
            local_130 = *(uint *)(lVar11 + 0x268);
          }
          local_138 = CONCAT44(uVar12,uVar8);
          local_128 = local_138;
          local_120 = local_130;
        }
        else {
          local_118 = *(longlong *)(lVar11 + 0x220);
          local_130 = *(uint *)(lVar11 + 0x228);
          local_68 = *(float *)(lVar11 + 0x210);
          fStack_64 = *(float *)(lVar11 + 0x214);
          fStack_60 = *(float *)(lVar11 + 0x218);
          fStack_5c = *(float *)(lVar11 + 0x21c);
          auVar4._4_4_ = -(uint)(*(float *)(lVar11 + 0x254) != fStack_64);
          auVar4._0_4_ = -(uint)(*(float *)(lVar11 + 0x250) != local_68);
          auVar4._8_4_ = -(uint)(*(float *)(lVar11 + 600) != fStack_60);
          auVar4._12_4_ = -(uint)(*(float *)(lVar11 + 0x25c) != fStack_5c);
          iVar7 = movmskps(local_130,auVar4);
          local_110 = local_130;
          if (iVar7 != 0) {
            *(float *)(lVar11 + 0x250) = local_68;
            *(float *)(lVar11 + 0x254) = fStack_64;
            *(float *)(lVar11 + 600) = fStack_60;
            *(float *)(lVar11 + 0x25c) = fStack_5c;
            puVar9 = (undefined8 *)FQuat::Rotator(&local_68,&local_138);
            *(undefined8 *)(lVar11 + 0x260) = *puVar9;
            *(undefined4 *)(lVar11 + 0x268) = *(undefined4 *)(puVar9 + 1);
          }
          local_128 = *(undefined8 *)(lVar11 + 0x260);
          local_120 = *(uint *)(lVar11 + 0x268);
        }
      }
      FRotator::Vector(&local_128,&local_98);
      lVar11 = param_1[0x36];
      if (lVar11 == 0) {
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
          lVar11 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x418);
        }
      }
      local_f8 = 0;
      uStack_f0 = CONCAT31(uStack_f0._1_3_,1);
      uStack_ec = 0;
      uStack_e8 = 0;
      uStack_e4 = 0;
      local_e0 = CONCAT31(local_e0._1_3_,1);
      local_108 = 0;
      uStack_100 = 0;
      if (lVar11 == 0) {
        local_108 = local_118;
        uStack_100 = (ulonglong)local_110;
        iVar7 = rand();
        fVar13 = (float)iVar7 * 0.006103702 + 400.0;
        uStack_100 = CONCAT44(fVar13 * local_98,(undefined4)uStack_100);
        local_f8 = CONCAT44(fVar13 * local_90 + 300.0,fVar13 * local_94);
      }
      else {
        uStack_bc = (undefined4)local_128;
        uStack_b8 = (undefined4)((ulonglong)local_128 >> 0x20);
        uStack_b4 = local_120;
        local_c8 = (undefined4)local_118;
        uStack_c4 = (undefined4)((ulonglong)local_118 >> 0x20);
        uStack_c0 = local_110;
        uStack_d0 = 0;
        uStack_b0 = 0;
        local_38._8_4_ = local_110;
        local_38._0_8_ = local_118;
        local_38._12_4_ = uStack_bc;
        local_48[1] = 0;
        local_a8 = 0;
        local_18 = (ulonglong)uStack_a4 << 0x20;
        local_28 = uStack_b8;
        uStack_24 = local_120;
        uStack_20 = 0;
        uStack_1c = 0;
        local_d8 = lVar3;
        local_48[0] = lVar3;
        FUN_142d9d660(lVar11,local_48,&local_108);
      }
      uStack_b0 = CONCAT44(uStack_b0._4_4_,local_e0);
      local_d8 = local_108;
      uStack_d0 = uStack_100;
      uStack_b8 = uStack_e8;
      uStack_b4 = uStack_e4;
      local_c8 = (undefined4)local_f8;
      uStack_c4 = local_f8._4_4_;
      uStack_c0 = uStack_f0;
      uStack_bc = uStack_ec;
      uVar10 = FWeakObjectPtr::Get(&local_88);
      FUN_141460e90(uVar10,&local_80,&local_d8);
      if (*(longlong *)(*plVar1 + 8) != 0) {
        FMemory::Free();
      }
      iVar7 = (int)param_1[0x30];
      if (iVar7 + -1 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)*plVar1,(void *)(*plVar1 + 0x18),(longlong)(iVar7 + -1) * 0x18);
        iVar7 = (int)param_1[0x30];
      }
      *(int *)(param_1 + 0x30) = iVar7 + -1;
      TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar1);
      *(undefined4 *)(param_1 + 0x31) = 0;
      if ((int)param_1[0x30] == 0) {
        (**(code **)(*param_1 + 0x358))(param_1,0);
      }
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
    return;
  }
  (**(code **)(*param_1 + 0x358))(param_1,0);
  return;
}



// FUNCTION 140b42d80 FUN_140b42d80 body=1731 status=ok
// SIG undefined FUN_140b42d80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b42d80(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined4 local_160;
  longlong *local_158;
  int local_150;
  longlong *local_148;
  int local_140;
  longlong local_138;
  longlong local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  code *local_d8;
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  ulonglong local_88;
  
  if (param_2 != (longlong *)0x0) {
    local_88 = DAT_1468387a8 ^ (ulonglong)auStack_188;
    local_138 = param_1;
    local_100 = param_3;
    lVar6 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar6 != 0) {
      *(undefined2 *)(param_2 + 0xef) = 0;
      FUN_14223c460(param_2,0);
      fVar11 = (float)FUN_140afed70(param_1,param_4);
      lVar6 = param_2[0xe5];
      iVar10 = (int)fVar11;
      fVar11 = (float)iVar10;
      if (lVar6 != 0) {
        *(undefined4 *)(lVar6 + 0x1dc) = 0;
        *(undefined8 *)(lVar6 + 0x18c) = 0;
        *(undefined4 *)(lVar6 + 0x194) = 0;
        *(undefined1 *)(lVar6 + 0x2c8) = 1;
        local_120 = 0;
        *(ulonglong *)(lVar6 + 0x2cc) =
             (ulonglong)(uint)(360.0 / (fVar11 * *(float *)(param_1 + 0x6c))) << 0x20;
        *(undefined4 *)(lVar6 + 0x2d4) = 0;
      }
      if (0 < iVar10) {
        lVar6 = FVector::Rotation(param_4 + 0x10,&local_158);
        fVar12 = *(float *)(lVar6 + 4);
        local_128 = (ulonglong)(uint)fVar12 << 0x20;
        local_150 = 0;
        local_120 = 0;
        AActor::SetActorRotation(param_2,&local_128,0);
        FWeakObjectPtr::operator=(&local_110,param_2);
        FWeakObjectPtr::operator=(&local_118,param_1);
        uVar5 = local_10c;
        uVar4 = local_110;
        uVar3 = local_114;
        uVar2 = local_118;
        local_148 = (longlong *)0x0;
        local_140 = 0;
        plVar7 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar7 == (longlong *)0x0) {
          if (((local_140 != 0) && (local_148 != (longlong *)0x0)) &&
             ((**(code **)(*local_148 + 0x28))(local_148,0), local_148 != (longlong *)0x0)) {
            local_148 = (longlong *)FMemory::Realloc(local_148,0,0);
          }
        }
        else {
          *plVar7 = (longlong)&PTR_GetPoolName_1442ab668;
          *(undefined4 *)(plVar7 + 1) = uVar4;
          *(undefined4 *)((longlong)plVar7 + 0xc) = uVar5;
          *(undefined4 *)(plVar7 + 2) = uVar2;
          *(undefined4 *)((longlong)plVar7 + 0x14) = uVar3;
          lVar6 = FDelegateHandle::GenerateNewID();
          plVar7[4] = lVar6;
          *plVar7 = (longlong)&PTR_GetPoolName_1442ab6b0;
          FUN_140b21f10(plVar7,&local_148);
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x28))(plVar7,0);
          lVar6 = FMemory::Realloc(plVar7,0,0);
          if (lVar6 != 0) {
            FMemory::Free(lVar6);
          }
        }
        local_108 = 0;
        lVar6 = (**(code **)(*param_2 + 0x148))(param_2);
        if (*(longlong *)(lVar6 + 400) == 0) {
          uVar9 = *(undefined8 *)(lVar6 + 0x3f8);
        }
        else {
          uVar9 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
        }
        local_f8 = 0;
        local_f0 = 0;
        fVar1 = *(float *)(local_138 + 0x6c);
        if ((local_140 != 0) && (local_148 != (longlong *)0x0)) {
          (**(code **)(*local_148 + 0x30))(local_148,&local_f8);
        }
        FWeakObjectPtr::operator=(local_e8,0);
        local_160 = 0xbf800000;
        local_d8 = AK::MemoryMgr::StartProfileThreadUsage;
        local_168 = 0;
        local_e0 = 0;
        local_a8 = (longlong *)0x0;
        local_98 = 0;
        FUN_142880850(uVar9,&local_108,&local_f8,fVar11 * fVar1 + 0.1);
        if (local_98 != 0) {
          plVar7 = local_c8;
          if (local_a8 != (longlong *)0x0) {
            plVar7 = local_a8;
          }
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x10))(plVar7,0);
          }
        }
        if (local_a8 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f8);
        if ((char)param_2[0x25] == '\x03') {
          do {
            uVar5 = local_10c;
            uVar4 = local_110;
            uVar3 = local_114;
            uVar2 = local_118;
            local_158 = (longlong *)0x0;
            local_150 = 0;
            plVar7 = (longlong *)FMemory::Realloc(0,0x50);
            lVar6 = local_138;
            if (plVar7 == (longlong *)0x0) {
              if ((local_150 != 0) && (local_158 != (longlong *)0x0)) {
                (**(code **)(*local_158 + 0x28))(local_158,0);
                if (local_158 != (longlong *)0x0) {
                  local_158 = (longlong *)FMemory::Realloc(local_158,0);
                }
                local_150 = 0;
                lVar6 = local_138;
              }
            }
            else {
              *plVar7 = (longlong)&PTR_GetPoolName_1442ab6f8;
              *(undefined4 *)(plVar7 + 1) = uVar2;
              *(undefined4 *)((longlong)plVar7 + 0xc) = uVar3;
              *(undefined4 *)(plVar7 + 2) = uVar4;
              *(undefined4 *)((longlong)plVar7 + 0x14) = uVar5;
              plVar7[3] = local_138;
              *(float *)(plVar7 + 4) = fVar12;
              plVar7[5] = (longlong)param_2;
              plVar7[6] = local_100;
              lVar8 = FDelegateHandle::GenerateNewID();
              plVar7[8] = lVar8;
              *plVar7 = (longlong)&PTR_GetPoolName_1442ab740;
              FUN_140b21e10(plVar7,&local_158);
              (**(code **)(*plVar7 + 0x28))(plVar7,0);
              lVar8 = FMemory::Realloc(plVar7,0);
              if (lVar8 != 0) {
                FMemory::Free(lVar8);
              }
            }
            if (iVar10 == 1) {
              lVar6 = (**(code **)(*param_2 + 0x148))();
              if (*(longlong *)(lVar6 + 400) == 0) {
                uVar9 = *(undefined8 *)(lVar6 + 0x3f8);
              }
              else {
                uVar9 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
              }
              local_f8 = 0;
              local_f0 = 0;
              if ((local_150 != 0) && (local_158 != (longlong *)0x0)) {
                (**(code **)(*local_158 + 0x30))(local_158,&local_f8);
              }
              FWeakObjectPtr::operator=(local_e8,0);
              local_e0 = 0;
              local_d8 = AK::MemoryMgr::StartProfileThreadUsage;
              local_a8 = (longlong *)0x0;
              local_98 = 0;
              FUN_142880af0(uVar9,&local_f8);
            }
            else {
              local_128 = 0;
              lVar8 = (**(code **)(*param_2 + 0x148))(param_2);
              if (*(longlong *)(lVar8 + 400) == 0) {
                uVar9 = *(undefined8 *)(lVar8 + 0x3f8);
              }
              else {
                uVar9 = *(undefined8 *)(*(longlong *)(lVar8 + 400) + 0x90);
              }
              local_f8 = 0;
              local_f0 = 0;
              fVar1 = *(float *)(lVar6 + 0x6c);
              if ((local_150 != 0) && (local_158 != (longlong *)0x0)) {
                (**(code **)(*local_158 + 0x30))(local_158,&local_f8);
              }
              FWeakObjectPtr::operator=(local_e8,0);
              local_160 = 0xbf800000;
              local_d8 = AK::MemoryMgr::StartProfileThreadUsage;
              local_e0 = 0;
              local_a8 = (longlong *)0x0;
              local_98 = 0;
              local_168 = 0;
              FUN_142880850(uVar9,&local_128,&local_f8,(float)(iVar10 + -1) * fVar1);
            }
            if (local_98 != 0) {
              plVar7 = local_c8;
              if (local_a8 != (longlong *)0x0) {
                plVar7 = local_a8;
              }
              if (plVar7 != (longlong *)0x0) {
                (**(code **)(*plVar7 + 0x10))(plVar7,0);
              }
            }
            if (local_a8 != (longlong *)0x0) {
              FMemory::Free();
            }
            TBaseDelegate<FText>::~TBaseDelegate<FText>();
            fVar12 = fVar12 + 360.0 / fVar11;
            if (local_150 == 0) {
LAB_140b43383:
              if (local_158 != (longlong *)0x0) {
                FMemory::Free();
              }
            }
            else if (local_158 != (longlong *)0x0) {
              (**(code **)(*local_158 + 0x28))(local_158,0);
              if (local_158 != (longlong *)0x0) {
                local_158 = (longlong *)FMemory::Realloc(local_158,0);
              }
              local_150 = 0;
              goto LAB_140b43383;
            }
            iVar10 = iVar10 + -1;
          } while (0 < iVar10);
        }
        if (local_140 != 0) {
          if (local_148 == (longlong *)0x0) {
            return;
          }
          (**(code **)(*local_148 + 0x28))(local_148,0);
          if (local_148 != (longlong *)0x0) {
            local_148 = (longlong *)FMemory::Realloc(local_148,0,0);
          }
          local_140 = 0;
        }
        if (local_148 != (longlong *)0x0) {
          FMemory::Free(local_148);
        }
      }
    }
  }
  return;
}



// FUNCTION 140b43450 FUN_140b43450 body=725 status=ok
// SIG undefined FUN_140b43450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b43450(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88 [2];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  if (param_2 != (longlong *)0x0) {
    local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
    lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar1 != 0) {
      lVar1 = param_2[0x2d];
      if (lVar1 == 0) {
        local_d8 = _DAT_1468b5d90;
        local_d0 = DAT_1468b5d98;
      }
      else {
        local_d8 = *(undefined8 *)(lVar1 + 0x220);
        local_d0 = *(undefined4 *)(lVar1 + 0x228);
      }
      uVar2 = local_d8;
      local_b0 = local_d0;
      local_d8 = 0;
      local_d0 = 0;
      FRotator::Quaternion(&local_d8,&local_c8);
      lVar1 = param_2[0x23];
      lVar4 = param_2[2];
      local_88[0] = local_c8;
      local_b8 = uVar2;
      local_78._8_4_ = local_b0;
      local_78._0_8_ = uVar2;
      local_78._12_4_ = 0;
      local_68._4_4_ = DAT_1464aa788._4_4_;
      local_68._0_4_ = (undefined4)DAT_1464aa788;
      local_68._8_4_ = DAT_1464aa790;
      local_68._12_4_ = 0;
      uVar2 = FUN_140a63ba0(param_2);
      uVar3 = (**(code **)(*param_2 + 0x148))(param_2);
      local_e0 = (undefined8 *)((ulonglong)local_e0 & 0xffffffffffffff00);
      local_e8 = uVar2;
      lVar1 = FUN_140aea740(uVar3,lVar4,local_88,lVar1);
      if (lVar1 != 0) {
        FUN_140b30220(lVar1,param_2,param_1);
        FUN_140b30a70(lVar1,param_3);
        UGameplayStatics::FinishSpawningActor(lVar1,local_88);
        lVar4 = FUN_140b2a880(param_2,param_1);
        lVar1 = FUN_140b2a880(lVar1,param_1);
        *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar4 + 0x10);
        *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar4 + 0x18);
        lVar1 = *(longlong *)(param_1 + 0x50);
        if (lVar1 != 0) {
          uStack_c0 = 0;
          local_90 = 0;
          lVar4 = param_2[0x2d];
          local_98 = 0;
          if (lVar4 == 0) {
            local_b0 = DAT_1468b5d98;
            puVar5 = &local_b8;
            local_b8 = _DAT_1468b5d90;
          }
          else {
            puVar5 = &local_d8;
            local_d0 = *(undefined4 *)(lVar4 + 0x228);
            local_d8 = *(undefined8 *)(lVar4 + 0x220);
          }
          local_c8 = *puVar5;
          uStack_c0 = *(undefined4 *)(puVar5 + 1);
          uVar2 = (**(code **)(*param_2 + 0x148))(param_2);
          local_e0 = &local_98;
          local_e8 = CONCAT44(local_e8._4_4_,0x42480000);
          FUN_1405a1e30(&local_b8,uVar2,lVar1,&local_c8);
          FUN_140591060(&local_b8);
        }
      }
    }
  }
  return;
}



// FUNCTION 140b43730 FUN_140b43730 body=47 status=ok
// SIG undefined FUN_140b43730(void)

void FUN_140b43730(longlong param_1,undefined8 param_2)

{
  undefined1 local_28 [40];
  
  if (*(longlong *)(param_1 + 0x5b8) != 0) {
    FUN_1405a3150(*(longlong *)(param_1 + 0x5b8),local_28,param_2,0);
    FUN_140591060(local_28);
  }
  return;
}



// FUNCTION 140b43760 FUN_140b43760 body=238 status=ok
// SIG undefined FUN_140b43760(void)

void FUN_140b43760(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((param_1[0x8b] != 0) && ((*(byte *)(param_1[0x8b] + 0x60) & 2) != 0)) &&
     (plVar1 = (longlong *)param_1[0x8f], plVar1 != (longlong *)0x0)) {
    lVar4 = FUN_1429d7ab0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (cVar3 = (**(code **)(*plVar1 + 0x778))(plVar1), cVar3 != '\0')) &&
       ((lVar4 = (**(code **)(*param_1 + 0x148))(param_1), lVar4 != 0 &&
        (lVar4 = *(longlong *)(lVar4 + 400), lVar4 != 0)))) {
      lVar5 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_140ba31d0(lVar4,param_1,param_1[0x8b]);
      }
    }
  }
  return;
}



// FUNCTION 140b43850 FUN_140b43850 body=17 status=ok
// SIG undefined FUN_140b43850(void)

void FUN_140b43850(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulong *puVar9;
  
  pvVar4 = ThreadLocalStoragePointer;
  lVar3 = *(longlong *)(param_1 + 0x748);
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x378);
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0x2e4) = *(int *)(lVar1 + 0x2e4) + 1;
      if ((*(int *)(*(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8) + 0x38) <
           DAT_146853970) && (_Init_thread_header(&DAT_146853970), DAT_146853970 == -1)) {
        atexit((_func_5014 *)&LAB_143e3fc40);
        _Init_thread_footer(&DAT_146853970);
      }
      puVar9 = DAT_146853960;
      for (lVar2 = *(longlong *)(lVar1 + 0xe0); DAT_146853960 = puVar9, lVar2 != 0;
          lVar2 = *(longlong *)(lVar2 + 8)) {
        cVar5 = FUN_14058c1e0(lVar2 + 0x18);
        if (cVar5 != '\0') {
          lVar7 = (longlong)DAT_146853968;
          DAT_146853968 = DAT_146853968 + 1;
          if (DAT_14685396c < DAT_146853968) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146853960);
          }
          DAT_146853960[lVar7] = *(ulong *)(lVar2 + 0x20);
        }
        puVar9 = DAT_146853960;
      }
      uVar8 = 0;
      uVar6 = (ulonglong)((longlong)(puVar9 + DAT_146853968) + (3 - (longlong)puVar9)) >> 2;
      if (puVar9 + DAT_146853968 < puVar9) {
        uVar6 = uVar8;
      }
      if (uVar6 != 0) {
        do {
          lVar2 = *(longlong *)(lVar3 + 0x378);
          if ((((lVar2 != 0) && (*(longlong *)(lVar2 + 0xd0) != 0)) &&
              (*(longlong *)(lVar2 + 0xc0) != 0)) && (*(char *)(lVar2 + 0xd8) == '\0')) {
            AK::SoundEngine::StopPlayingID(*puVar9,0,4);
          }
          puVar9 = puVar9 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar6);
      }
      DAT_146853968 = 0;
      if ((DAT_14685396c < 0) && (DAT_14685396c != 0)) {
        TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146853960,0);
      }
      FUN_1405a53f0(lVar1);
    }
    return;
  }
  return;
}



// FUNCTION 140b43870 FUN_140b43870 body=17 status=ok
// SIG undefined FUN_140b43870(void)

void FUN_140b43870(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulong *puVar9;
  
  pvVar4 = ThreadLocalStoragePointer;
  lVar3 = *(longlong *)(param_1 + 0x5b8);
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x378);
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0x2e4) = *(int *)(lVar1 + 0x2e4) + 1;
      if ((*(int *)(*(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8) + 0x38) <
           DAT_146853970) && (_Init_thread_header(&DAT_146853970), DAT_146853970 == -1)) {
        atexit((_func_5014 *)&LAB_143e3fc40);
        _Init_thread_footer(&DAT_146853970);
      }
      puVar9 = DAT_146853960;
      for (lVar2 = *(longlong *)(lVar1 + 0xe0); DAT_146853960 = puVar9, lVar2 != 0;
          lVar2 = *(longlong *)(lVar2 + 8)) {
        cVar5 = FUN_14058c1e0(lVar2 + 0x18);
        if (cVar5 != '\0') {
          lVar7 = (longlong)DAT_146853968;
          DAT_146853968 = DAT_146853968 + 1;
          if (DAT_14685396c < DAT_146853968) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146853960);
          }
          DAT_146853960[lVar7] = *(ulong *)(lVar2 + 0x20);
        }
        puVar9 = DAT_146853960;
      }
      uVar8 = 0;
      uVar6 = (ulonglong)((longlong)(puVar9 + DAT_146853968) + (3 - (longlong)puVar9)) >> 2;
      if (puVar9 + DAT_146853968 < puVar9) {
        uVar6 = uVar8;
      }
      if (uVar6 != 0) {
        do {
          lVar2 = *(longlong *)(lVar3 + 0x378);
          if ((((lVar2 != 0) && (*(longlong *)(lVar2 + 0xd0) != 0)) &&
              (*(longlong *)(lVar2 + 0xc0) != 0)) && (*(char *)(lVar2 + 0xd8) == '\0')) {
            AK::SoundEngine::StopPlayingID(*puVar9,0,4);
          }
          puVar9 = puVar9 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar6);
      }
      DAT_146853968 = 0;
      if ((DAT_14685396c < 0) && (DAT_14685396c != 0)) {
        TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146853960,0);
      }
      FUN_1405a53f0(lVar1);
    }
    return;
  }
  return;
}



// FUNCTION 140b43890 FUN_140b43890 body=502 status=ok
// SIG undefined FUN_140b43890(void)

void FUN_140b43890(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  uVar8 = 0;
  uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0x7e8) + 0x10);
  uVar10 = uVar8;
  if (param_2 != 0) {
    uVar7 = UDungeonMarkerEmitter::GetPrivateStaticClass();
    uVar11 = param_2;
    do {
      uVar10 = param_2;
      if (uVar11 == uVar7) break;
      uVar11 = *(ulonglong *)(uVar11 + 0x30);
      uVar10 = uVar8;
    } while (uVar11 != 0);
  }
  if (uVar9 == uVar10) {
    (**(code **)(**(longlong **)(param_1 + 0x7e8) + 0x278))(*(longlong **)(param_1 + 0x7e8),param_1)
    ;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x820);
    iVar2 = *(int *)(param_1 + 0x848);
    puStack_28 = (uint *)(param_1 + 0x830);
    local_78 = 0;
    uStack_74 = 1;
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (iVar2 != 0) {
      puVar12 = *(uint **)(param_1 + 0x840);
      if (*(uint **)(param_1 + 0x840) == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar3 = *puVar12;
      uVar9 = uVar8;
      while (uVar3 == 0) {
        iVar6 = (int)uVar9;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar6 + 1;
        uVar9 = (ulonglong)local_78;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_140b439ab;
        uVar3 = puVar12[(longlong)iVar6 + 1];
      }
      uStack_74 = -uVar3 & uVar3;
      iVar6 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      local_68._4_4_ = (uStack_60 - iVar6) + 0x1f;
      if (iVar2 < local_68._4_4_) {
LAB_140b439ab:
        local_68._4_4_ = iVar2;
      }
    }
    auStack_20._4_4_ = local_68._4_4_;
    auStack_20._0_4_ = 0xffffffff;
    auStack_20._8_4_ = uStack_60;
    auStack_20._12_4_ = iStack_5c;
    uStack_30 = local_78;
    uStack_2c = uStack_74;
    local_40 = 0;
    local_10._0_4_ = SUB84(plVar1,0);
    local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
    uStack_60 = 0xffffffff;
    iStack_5c = local_68._4_4_;
    uStack_70 = local_78;
    uStack_6c = uStack_74;
    local_58._8_4_ = (undefined4)local_10;
    local_58._0_8_ = auStack_20._8_8_;
    local_58._12_4_ = local_10._4_4_;
    bVar5 = local_68._4_4_ < *(int *)(param_1 + 0x848);
    local_48 = plVar1;
    local_38 = plVar1;
    local_10 = plVar1;
    local_68 = puStack_28;
    if (bVar5) {
      do {
        plVar4 = *(longlong **)((longlong)iStack_5c * 0x40 + *plVar1);
        (**(code **)(*plVar4 + 0x278))(plVar4,param_1);
        uStack_60 = uStack_60 & ~uStack_6c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      } while (iStack_5c < (int)local_68[6]);
      if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
        TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
      }
    }
  }
  return;
}



// FUNCTION 140b43a90 FUN_140b43a90 body=337 status=ok
// SIG undefined FUN_140b43a90(void)

void FUN_140b43a90(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_28 [32];
  
  if (*(char *)(param_1 + 0x200) != '\0') {
    if (*(longlong *)(param_1 + 0x228) == 0) {
      if (*(longlong *)(param_1 + 0x118) != 0) {
        uVar2 = AUGDoor::GetPrivateStaticClass();
        lVar3 = AGameStateBase::OnRep_GameModeClass(*(undefined8 *)(param_1 + 0x118),uVar2);
        if (lVar3 != 0) {
          lVar4 = AUGDoor::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            if (*(longlong *)(param_1 + 0x268) != 0) {
              FUN_1405a3150(lVar3,local_28,*(longlong *)(param_1 + 0x268),0);
              FUN_140591060(local_28);
            }
            if (*(longlong *)(param_1 + 0x270) != 0) {
              FUN_1405acbd0(lVar3);
            }
          }
        }
      }
    }
    else {
      if ((*(longlong *)(param_1 + 0x268) != 0) &&
         (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x228) + 0x748), lVar3 != 0)) {
        FUN_1405a3150(lVar3,local_28,*(longlong *)(param_1 + 0x268),0);
        FUN_140591060(local_28);
      }
      if ((*(longlong *)(param_1 + 0x270) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x228) + 0x748) != 0)) {
        FUN_1405acbd0();
      }
    }
  }
  FUN_142d6f9d0(param_1,0);
  if (*(longlong *)(param_1 + 0x208) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1dc) = *(undefined4 *)(param_1 + 0x280);
  }
  FUN_140b46ba0(param_1);
  return;
}



// FUNCTION 140b43c00 FUN_140b43c00 body=411 status=ok
// SIG undefined FUN_140b43c00(void)

void FUN_140b43c00(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int local_res10 [2];
  undefined1 local_48 [48];
  
  if (param_2 == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_2 + 0x118);
  if (lVar1 == 0) {
    return;
  }
  lVar5 = FUN_1413ac760();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar5 = *(longlong *)(lVar1 + 0x6e8);
  if ((lVar5 != 0) &&
     (piVar6 = (int *)TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
                      ::FindId(lVar5 + 0x518,local_res10,param_1), *piVar6 != -1)) {
    TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
    ::FindId(lVar5 + 0x518,local_res10,param_1);
    if ((local_res10[0] != -1) &&
       (lVar8 = (longlong)local_res10[0] * 0x40 + *(longlong *)(lVar5 + 0x518), lVar8 != 0)) {
      puVar9 = (undefined1 *)(lVar8 + 8);
      goto LAB_140b43ce1;
    }
  }
  puVar9 = (undefined1 *)0x0;
LAB_140b43ce1:
  FUN_1413b6d00(param_1,lVar1,lVar5,param_3);
  lVar8 = FUN_142df3580(lVar1);
  if (puVar9 == (undefined1 *)0x0) {
    puVar9 = local_48;
  }
  cVar3 = FUN_140b2de00(param_1,lVar1,lVar5,param_3,puVar9);
  if ((cVar3 != '\0') && (lVar8 != 0)) {
    uVar7 = FUN_142df3580(param_3);
    iVar4 = FUN_142de8c20(lVar8,uVar7);
    if (iVar4 == 2) {
      if (*(longlong *)(param_1 + 0x90) != 0) {
        FUN_140b1a280(lVar1);
      }
      if ((*(longlong *)(param_1 + 0x98) != 0) && (*(longlong *)(lVar1 + 0x748) != 0)) {
        FUN_1405acbd0();
      }
    }
  }
  return;
}



// FUNCTION 140b43da0 FUN_140b43da0 body=129 status=ok
// SIG undefined FUN_140b43da0(void)

void FUN_140b43da0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x118), lVar1 != 0)) {
    lVar3 = FUN_1413ac760();
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
      FUN_1413b6d50(param_1,lVar1,*(undefined8 *)(lVar1 + 0x6e8),param_3);
    }
  }
  return;
}



// FUNCTION 140b43e30 FUN_140b43e30 body=203 status=ok
// SIG undefined FUN_140b43e30(void)

void FUN_140b43e30(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar4 = 0;
    local_18 = (longlong *)0x0;
    local_10 = 0;
    FUN_14238b380(*(longlong *)(param_1 + 8),1,&local_18);
    uVar3 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
    if (local_18 + (int)local_10 < local_18) {
      uVar3 = uVar4;
    }
    plVar2 = local_18;
    if (uVar3 != 0) {
      do {
        plVar1 = (longlong *)*plVar2;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
        }
        plVar2 = plVar2 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar3);
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x3b0))(*(longlong **)(param_1 + 8),0);
    *(undefined8 *)(param_1 + 8) = 0;
    if (local_18 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140b43f00 FUN_140b43f00 body=131 status=ok
// SIG undefined FUN_140b43f00(void)

void FUN_140b43f00(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  FUN_142357eb0();
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 == 3) {
    if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar2 = FUN_1423407b0(param_1), lVar2 == 0)) {
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    lVar2 = UWorld::GetGameState<APVPGameState>(lVar2);
    if (((lVar2 != 0) && (*(int *)(param_1 + 0x4d8) != *(int *)(lVar2 + 0x6e4))) &&
       (lVar2 = FUN_140b823b0(param_1), lVar2 != 0)) {
      FUN_140b3dbb0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140b43fc0 FUN_140b43fc0 body=5361 status=ok
// SIG undefined FUN_140b43fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b43fc0(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint *puVar22;
  float *pfVar23;
  longlong *plVar24;
  longlong **pplVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong *plVar28;
  char cVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  undefined4 uVar39;
  uint uVar40;
  undefined4 uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  undefined1 auStack_498 [32];
  undefined8 *local_478;
  undefined8 *local_470;
  char local_468;
  undefined8 local_460;
  float local_458;
  longlong *local_450;
  longlong *local_448;
  uint local_440;
  uint uStack_43c;
  uint uStack_438;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  float local_420;
  float fStack_41c;
  float local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 local_3f0;
  undefined8 local_3ec;
  float local_3e4;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  float local_3cc;
  undefined8 local_3c8;
  float local_3bc;
  float local_3b8;
  float local_3b4;
  undefined8 local_3b0;
  float local_3a8;
  undefined4 local_3a4;
  undefined4 uStack_3a0;
  undefined4 local_39c;
  float local_398;
  float local_394;
  float local_390;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 uStack_378;
  undefined4 local_374;
  float local_370;
  float local_36c;
  float local_368;
  undefined8 local_364;
  float local_35c;
  float local_350;
  undefined8 local_348;
  float local_340;
  undefined8 local_338;
  undefined4 local_330;
  undefined8 local_32c;
  undefined4 local_324;
  undefined8 local_320;
  undefined4 local_318;
  undefined8 local_314;
  undefined4 local_30c;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2fc;
  undefined4 local_2f4;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e4;
  undefined4 local_2dc;
  float local_2d0;
  undefined8 local_2c8;
  uint local_2c0;
  undefined8 local_2b8;
  float local_2b0;
  undefined8 local_2a8;
  float local_2a0;
  float local_294;
  undefined8 local_290;
  float local_288;
  float local_27c;
  undefined1 *local_278;
  undefined8 *puStack_270;
  undefined8 local_268;
  undefined4 local_260;
  longlong local_258;
  float local_250;
  float local_240;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined1 *local_1e8;
  undefined8 *puStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 local_1b8 [12];
  undefined1 local_1ac [12];
  undefined1 local_1a0 [12];
  undefined1 local_194 [12];
  undefined1 local_188 [12];
  undefined1 local_17c [12];
  undefined1 local_170 [12];
  undefined1 local_164 [12];
  undefined1 local_158 [16];
  longlong *local_148 [4];
  longlong **local_128;
  undefined8 local_120;
  float local_118;
  float local_114;
  undefined2 local_f8;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_498;
  iVar12 = FUN_142340f30();
  cVar29 = iVar12 == 3;
  local_468 = cVar29;
  FUN_140b3d220(param_1);
  plVar24 = *(longlong **)(param_1 + 0x718);
  plVar14 = plVar24 + (longlong)*(int *)(param_1 + 0x720) * 2;
  local_450 = plVar14;
  if (plVar24 != plVar14) {
    do {
      plVar28 = (longlong *)0x0;
      plVar1 = (longlong *)*plVar24;
      if (plVar1 != (longlong *)0x0) {
        local_448 = plVar24;
        lVar13 = AHeoCon::GetPrivateStaticClass();
        if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
            != lVar13 + 0x88)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          lVar13 = AHeoCon::GetPrivateStaticClass();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
              != lVar13 + 0x88)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          plVar14 = plVar1;
          if (!bVar9) {
            plVar14 = plVar28;
          }
          plVar14 = (longlong *)(**(code **)(plVar14[0x118] + 0x30))();
          if ((int)plVar14[1] != 0) {
            plVar19 = (longlong *)*plVar14;
            plVar3 = plVar19 + (int)plVar14[1];
            if (plVar19 != plVar3) {
              plVar2 = *(longlong **)(param_1 + 0x7a0);
              do {
                if (plVar2 != plVar2 + *(int *)(param_1 + 0x7a8)) {
                  plVar15 = plVar2;
                  do {
                    plVar14 = local_450;
                    if (*plVar15 == *plVar19) goto LAB_140b451de;
                    plVar15 = plVar15 + 1;
                  } while (plVar15 != plVar2 + *(int *)(param_1 + 0x7a8));
                }
                plVar19 = plVar19 + 1;
              } while (plVar19 != plVar3);
            }
          }
        }
        lVar13 = plVar1[0x2d];
        if (lVar13 == 0) {
          local_35c = DAT_1468b5d98;
          puVar16 = &local_364;
          local_364 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        }
        else {
          puVar16 = (undefined8 *)&local_3f8;
          local_3f8 = *(undefined4 *)(lVar13 + 0x220);
          local_3f0 = *(undefined4 *)(lVar13 + 0x228);
          uStack_3f4 = *(undefined4 *)(lVar13 + 0x224);
        }
        local_350 = *(float *)(puVar16 + 1);
        fVar52 = *(float *)(param_1 + 0x220) - (float)*puVar16;
        fVar38 = *(float *)(param_1 + 0x224) - (float)((ulonglong)*puVar16 >> 0x20);
        local_458 = *(float *)(param_1 + 0x228) - local_350;
        local_460 = CONCAT44(fVar38,fVar52);
        fVar38 = SQRT(fVar52 * fVar52 + fVar38 * fVar38 + local_458 * local_458);
        if ((*(char *)(param_1 + 0x780) != '\0') && (fVar38 < *(float *)(param_1 + 0x788))) {
          local_348 = local_460;
          local_340 = local_458;
          puVar16 = (undefined8 *)FUN_140b1f500(param_1,local_1b8,&local_348,fVar38);
          local_460 = *puVar16;
          local_458 = *(float *)(puVar16 + 1);
        }
        lVar13 = AHeoCon::GetPrivateStaticClass();
        if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
            != lVar13 + 0x88)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          if (plVar1[0x124] != 0) {
            uVar17 = UEnvQueryTest_Random::StaticClass();
            cVar11 = FUN_142c736c0(plVar1[0x124],uVar17);
            plVar14 = local_450;
            if (cVar11 != '\0') goto LAB_140b451de;
          }
          plVar14 = local_450;
          if (((char)plVar1[0x160] == '\0') &&
             (plVar3 = (longlong *)plVar1[0x143], plVar3 != (longlong *)0x0)) {
            local_410 = 0;
            cVar11 = (**(code **)(*plVar3 + 0x400))(plVar3,0);
            if (cVar11 == '\0') {
              uVar27 = *(ulonglong *)(param_1 + 0x760);
              bVar9 = true;
              uVar17 = UScrollBox::GetPrivateStaticClass();
              plVar14 = (longlong *)(**(code **)(*plVar1 + 0x628))(plVar1,uVar17);
              uVar20 = 0;
              if (plVar14 == (longlong *)0x0) {
LAB_140b443a0:
                plVar14 = plVar28;
              }
              else {
                lVar13 = UScrollBox::GetPrivateStaticClass();
                if ((*(int *)(plVar14[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
                   (*(ulonglong *)
                     (*(longlong *)(plVar14[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
                    lVar13 + 0x88U)) {
                  uVar20 = lVar13 + 0x88U & 0xffffffffffffff00;
                }
                else {
                  uVar20 = 1;
                }
                if ((char)uVar20 == '\0') goto LAB_140b443a0;
              }
              if (plVar14 != (longlong *)0x0) {
                FUN_142d511a0(local_148);
                auVar48._0_4_ = *(uint *)(param_1 + 0x230) & _DAT_146868c20;
                auVar48._4_4_ = *(uint *)(param_1 + 0x234) & uRam0000000146868c24;
                auVar48._8_4_ = *(uint *)(param_1 + 0x238) & uRam0000000146868c28;
                auVar48._12_4_ = *(uint *)(param_1 + 0x23c) & uRam0000000146868c2c;
                fVar52 = *(float *)(param_1 + 0x784);
                local_120 = local_460;
                auVar31._4_4_ = auVar48._8_4_;
                auVar31._0_4_ = auVar48._4_4_;
                auVar31._8_4_ = auVar48._0_4_;
                auVar31._12_4_ = auVar48._12_4_;
                auVar49 = minps(auVar48,auVar31);
                local_118 = local_458;
                auVar4._4_4_ = auVar48._0_4_;
                auVar4._0_4_ = auVar48._8_4_;
                auVar4._8_4_ = auVar48._4_4_;
                auVar4._12_4_ = auVar48._12_4_;
                auVar49 = minps(auVar49,auVar4);
                fVar51 = ABS(auVar49._0_4_ * *(float *)(param_1 + 0x710) - fVar52);
                if (fVar51 <= 0.0001) {
                  local_114 = *(float *)(param_1 + 0x768);
                }
                else {
                  fVar45 = auVar49._0_4_ * *(float *)(param_1 + 0x710);
                  if ((fVar52 <= fVar38) && (fVar52 = fVar45, fVar38 <= fVar45)) {
                    fVar52 = fVar38;
                  }
                  local_114 = *(float *)(param_1 + 0x768);
                  local_114 = (local_114 * *(float *)(param_1 + 0x798) - local_114) *
                              (fVar52 / fVar51) + local_114;
                }
                local_148[0] = plVar14;
                if (*(longlong *)(param_1 + 0x778) != 0) {
                  lVar18 = FUN_142e0d0b0();
                  lVar13 = *(longlong *)(param_1 + 0x778);
                  lVar21 = lVar13;
                  if (lVar13 != 0) {
LAB_140b44490:
                    if (lVar21 != lVar18) goto code_r0x000140b44495;
                    if (lVar13 != 0) {
                      plVar24 = plVar28;
                      if (lVar13 != 0) {
                        plVar19 = (longlong *)FUN_142e0d0b0();
                        for (plVar3 = *(longlong **)(param_1 + 0x778);
                            (plVar24 = plVar28, plVar3 != (longlong *)0x0 &&
                            (plVar24 = *(longlong **)(param_1 + 0x778), plVar3 != plVar19));
                            plVar3 = (longlong *)plVar3[6]) {
                        }
                      }
                      pplVar25 = (longlong **)plVar24[0x1f];
                      if (pplVar25 == (longlong **)0x0) {
                        (**(code **)(*plVar24 + 0x368))(plVar24);
                        pplVar25 = (longlong **)plVar24[0x1f];
                        plVar24 = local_448;
                        if (pplVar25 != (longlong **)0x0) goto LAB_140b444fb;
                        goto LAB_140b4454a;
                      }
LAB_140b444fb:
                      lVar13 = FUN_142e0d0b0();
                      if (((int)pplVar25[2][0x12] < *(int *)(lVar13 + 0x90)) ||
                         (*(longlong *)(pplVar25[2][0x11] + (longlong)*(int *)(lVar13 + 0x90) * 8)
                          != lVar13 + 0x88)) {
                        bVar10 = false;
                      }
                      else {
                        bVar10 = true;
                      }
                      plVar24 = local_448;
                      local_128 = pplVar25;
                      if (!bVar10) goto LAB_140b4454a;
                      goto LAB_140b44551;
                    }
                  }
                }
LAB_140b4454a:
                local_128 = (longlong **)0x0;
LAB_140b44551:
                uVar26 = 0;
                local_f8 = 0x101;
                uVar20 = FUN_142d593c0(plVar14 + 0x7a,local_148);
                if ((uVar20 == 0) || (*(ulonglong *)(param_1 + 0x760) != uVar20)) {
                  if ((char)plVar24[1] == '\0') {
                    *(undefined1 *)(plVar24 + 1) = 1;
                    uVar26 = uVar20;
                  }
                  bVar9 = false;
                  uVar27 = uVar26;
                }
              }
              lVar13 = plVar1[0x2d];
              local_440 = 0xbf800000;
              uStack_43c = 0;
              uStack_438 = 0;
              fVar38 = (param_2 * *(float *)(param_1 + 0x768) * 100.0) / *(float *)(plVar1 + 0x13f);
              if (lVar13 == 0) {
                uVar39 = (undefined4)DAT_1468b5da0;
                uVar41 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
                puVar16 = &local_32c;
                local_32c = DAT_1468b5da0;
                local_324 = DAT_1468b5da8;
              }
              else {
                local_228 = *(float *)(lVar13 + 0x210);
                fStack_224 = *(float *)(lVar13 + 0x214);
                fStack_220 = *(float *)(lVar13 + 0x218);
                fStack_21c = *(float *)(lVar13 + 0x21c);
                auVar32._4_4_ = -(uint)(fStack_224 != *(float *)(lVar13 + 0x254));
                auVar32._0_4_ = -(uint)(local_228 != *(float *)(lVar13 + 0x250));
                auVar32._8_4_ = -(uint)(fStack_220 != *(float *)(lVar13 + 600));
                auVar32._12_4_ = -(uint)(fStack_21c != *(float *)(lVar13 + 0x25c));
                iVar12 = movmskps((int)uVar20,auVar32);
                lVar21 = lVar13;
                if (iVar12 != 0) {
                  *(float *)(lVar13 + 0x250) = local_228;
                  *(float *)(lVar13 + 0x254) = fStack_224;
                  *(float *)(lVar13 + 600) = fStack_220;
                  *(float *)(lVar13 + 0x25c) = fStack_21c;
                  puVar16 = (undefined8 *)FQuat::Rotator(&local_228,local_1ac);
                  *(undefined8 *)(lVar13 + 0x260) = *puVar16;
                  *(undefined4 *)(lVar13 + 0x268) = *(undefined4 *)(puVar16 + 1);
                  lVar21 = plVar1[0x2d];
                }
                uVar39 = (undefined4)DAT_1468b5da0;
                uVar41 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
                local_330 = *(undefined4 *)(lVar13 + 0x268);
                puVar16 = &local_338;
                local_338 = *(undefined8 *)(lVar13 + 0x260);
                lVar13 = lVar21;
              }
              local_3cc = *(float *)(puVar16 + 1);
              if (lVar13 == 0) {
                local_314 = CONCAT44(uVar41,uVar39);
                puVar16 = &local_314;
                local_30c = DAT_1468b5da8;
              }
              else {
                local_218 = *(float *)(lVar13 + 0x210);
                fStack_214 = *(float *)(lVar13 + 0x214);
                fStack_210 = *(float *)(lVar13 + 0x218);
                fStack_20c = *(float *)(lVar13 + 0x21c);
                auVar33._4_4_ = -(uint)(fStack_214 != *(float *)(lVar13 + 0x254));
                auVar33._0_4_ = -(uint)(local_218 != *(float *)(lVar13 + 0x250));
                auVar33._8_4_ = -(uint)(fStack_210 != *(float *)(lVar13 + 600));
                auVar33._12_4_ = -(uint)(fStack_20c != *(float *)(lVar13 + 0x25c));
                iVar12 = movmskps(*(float *)(puVar16 + 1),auVar33);
                if (iVar12 != 0) {
                  *(float *)(lVar13 + 0x250) = local_218;
                  *(float *)(lVar13 + 0x254) = fStack_214;
                  *(float *)(lVar13 + 600) = fStack_210;
                  *(float *)(lVar13 + 0x25c) = fStack_20c;
                  puVar16 = (undefined8 *)FQuat::Rotator(&local_218,local_1a0);
                  *(undefined8 *)(lVar13 + 0x260) = *puVar16;
                  *(undefined4 *)(lVar13 + 0x268) = *(undefined4 *)(puVar16 + 1);
                }
                local_318 = *(undefined4 *)(lVar13 + 0x268);
                puVar16 = &local_320;
                local_320 = *(undefined8 *)(lVar13 + 0x260);
              }
              local_3c8 = *puVar16;
              lVar21 = FVector::Rotation(&local_460,local_194);
              lVar13 = plVar1[0x2d];
              fVar52 = *(float *)(lVar21 + 4) + 180.0;
              if (bVar9) {
                fVar51 = param_2 * 10.0;
                if (lVar13 == 0) {
                  local_2f4 = DAT_1468b5da8;
                  puVar16 = &local_2fc;
                  local_2fc = DAT_1468b5da0;
                }
                else {
                  local_238 = *(float *)(lVar13 + 0x210);
                  fStack_234 = *(float *)(lVar13 + 0x214);
                  fStack_230 = *(float *)(lVar13 + 0x218);
                  fStack_22c = *(float *)(lVar13 + 0x21c);
                  auVar34._4_4_ = -(uint)(fStack_234 != *(float *)(lVar13 + 0x254));
                  auVar34._0_4_ = -(uint)(local_238 != *(float *)(lVar13 + 0x250));
                  auVar34._8_4_ = -(uint)(fStack_230 != *(float *)(lVar13 + 600));
                  auVar34._12_4_ = -(uint)(fStack_22c != *(float *)(lVar13 + 0x25c));
                  iVar12 = movmskps((int)lVar21,auVar34);
                  if (iVar12 != 0) {
                    *(float *)(lVar13 + 0x250) = local_238;
                    *(float *)(lVar13 + 0x254) = fStack_234;
                    *(float *)(lVar13 + 600) = fStack_230;
                    *(float *)(lVar13 + 0x25c) = fStack_22c;
                    puVar16 = (undefined8 *)FQuat::Rotator(&local_238,local_164);
                    *(undefined8 *)(lVar13 + 0x260) = *puVar16;
                    *(undefined4 *)(lVar13 + 0x268) = *(undefined4 *)(puVar16 + 1);
                  }
                  local_300 = *(undefined4 *)(lVar13 + 0x268);
                  puVar16 = &local_308;
                  local_308 = *(undefined8 *)(lVar13 + 0x260);
                }
                local_3ec = *puVar16;
                local_3dc = (float)((ulonglong)local_3ec >> 0x20);
                local_3e4 = *(float *)(puVar16 + 1);
                fVar52 = fVar52 - local_3dc;
                auVar35._4_4_ = fVar52;
                auVar35._0_4_ = (float)local_3c8 - (float)local_3ec;
                auVar35._8_4_ = local_3cc - local_3e4;
                auVar35._12_4_ = 0;
                auVar49 = divps(auVar35,_DAT_146868b60);
                fVar45 = (float)DAT_146868b60;
                fVar46 = DAT_146868b60._4_4_;
                fVar30 = DAT_146868b60._8_4_;
                fVar53 = ((float)local_3c8 - (float)local_3ec) - (float)(int)auVar49._0_4_ * fVar45;
                fVar52 = fVar52 - (float)(int)auVar49._4_4_ * fVar46;
                fVar54 = (local_3cc - local_3e4) - (float)(int)auVar49._8_4_ * fVar30;
                fVar53 = (float)((uint)(fVar53 + fVar45) ^
                                -(uint)(0.0 <= fVar53) & ((uint)(fVar53 + fVar45) ^ (uint)fVar53));
                fVar52 = (float)((uint)(fVar52 + fVar46) ^
                                -(uint)(0.0 <= fVar52) & ((uint)(fVar52 + fVar46) ^ (uint)fVar52));
                fVar54 = (float)((uint)(fVar54 + fVar30) ^
                                -(uint)(0.0 <= fVar54) & ((uint)(fVar54 + fVar30) ^ (uint)fVar54));
                local_3e0 = fVar51 * (float)((uint)fVar53 ^
                                            -(uint)(_DAT_146868b50 < fVar53) &
                                            ((uint)(fVar53 - fVar45) ^ (uint)fVar53)) +
                            (float)local_3ec;
                local_3d8 = fVar51 * (float)((uint)fVar54 ^
                                            -(uint)(fRam0000000146868b58 < fVar54) &
                                            ((uint)(fVar54 - fVar30) ^ (uint)fVar54)) + local_3e4;
                local_3dc = fVar51 * (float)((uint)fVar52 ^
                                            -(uint)(fRam0000000146868b54 < fVar52) &
                                            ((uint)(fVar52 - fVar46) ^ (uint)fVar52)) + local_3dc;
                puVar16 = (undefined8 *)FRotator::Quaternion(&local_3e0,local_158);
                local_208 = *puVar16;
                uStack_200 = puVar16[1];
                FUN_14223d160(plVar1,&local_208,0);
              }
              else {
                if (lVar13 == 0) {
                  local_2dc = DAT_1468b5da8;
                  puVar16 = &local_2e4;
                  local_2e4 = DAT_1468b5da0;
                }
                else {
                  local_1f8 = *(float *)(lVar13 + 0x210);
                  fStack_1f4 = *(float *)(lVar13 + 0x214);
                  fStack_1f0 = *(float *)(lVar13 + 0x218);
                  fStack_1ec = *(float *)(lVar13 + 0x21c);
                  auVar36._4_4_ = -(uint)(fStack_1f4 != *(float *)(lVar13 + 0x254));
                  auVar36._0_4_ = -(uint)(local_1f8 != *(float *)(lVar13 + 0x250));
                  auVar36._8_4_ = -(uint)(fStack_1f0 != *(float *)(lVar13 + 600));
                  auVar36._12_4_ = -(uint)(fStack_1ec != *(float *)(lVar13 + 0x25c));
                  iVar12 = movmskps((int)lVar21,auVar36);
                  if (iVar12 != 0) {
                    *(float *)(lVar13 + 0x250) = local_1f8;
                    *(float *)(lVar13 + 0x254) = fStack_1f4;
                    *(float *)(lVar13 + 600) = fStack_1f0;
                    *(float *)(lVar13 + 0x25c) = fStack_1ec;
                    puVar16 = (undefined8 *)FQuat::Rotator(&local_1f8,local_188);
                    *(undefined8 *)(lVar13 + 0x260) = *puVar16;
                    *(undefined4 *)(lVar13 + 0x268) = *(undefined4 *)(puVar16 + 1);
                  }
                  local_2e8 = *(undefined4 *)(lVar13 + 0x268);
                  puVar16 = &local_2f0;
                  local_2f0 = *(undefined8 *)(lVar13 + 0x260);
                }
                local_2d0 = *(float *)(puVar16 + 1);
                local_3bc = (float)local_3c8 - (float)*puVar16;
                local_3b8 = fVar52 - (float)((ulonglong)*puVar16 >> 0x20);
                local_3b4 = local_3cc - local_2d0;
                puVar22 = (uint *)FRotator::Vector(&local_3bc,local_17c);
                uStack_438 = puVar22[2] ^ 0x80000000;
                uStack_43c = puVar22[1] ^ 0x80000000;
                local_440 = *puVar22 ^ 0x80000000;
              }
              if (uVar27 != 0) {
                if (plVar14 == (longlong *)0x0) {
                  fVar52 = fVar38;
                  if (bVar9) {
                    fVar52 = 1.0;
                  }
                  puVar16 = (undefined8 *)FUN_142d979a0(&local_268,fVar52);
                  local_1d8 = *puVar16;
                  uStack_1d0 = puVar16[1];
                  local_1c8 = *(undefined4 *)(puVar16 + 2);
                  uStack_1c4 = *(undefined4 *)((longlong)puVar16 + 0x14);
                  uStack_1c0 = *(undefined4 *)(puVar16 + 3);
                  uStack_1bc = *(undefined4 *)((longlong)puVar16 + 0x1c);
                  local_2c0 = uStack_438;
                  local_400 = 0;
                  local_470 = &local_1d8;
                  local_2c8 = CONCAT44(uStack_43c,local_440);
                  local_478 = (undefined8 *)0x0;
                  FUN_142d6ec80(plVar1,*(undefined8 *)(param_1 + 0x118),uVar27);
                }
                else {
                  fVar52 = fVar38;
                  if (bVar9) {
                    fVar52 = 1.0;
                  }
                  plVar24 = *(longlong **)(param_1 + 0x118);
                  local_408 = 0;
                  if (plVar24 == (longlong *)0x0) {
LAB_140b44a74:
                    lVar13 = 0;
                  }
                  else {
                    uVar17 = FUN_142e0a580();
                    lVar13 = (**(code **)(*plVar24 + 0x628))(plVar24,uVar17);
                    if (lVar13 == 0) goto LAB_140b44a74;
                    lVar21 = FUN_142e0a580();
                    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar21 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar21 + 0x90) * 8) != lVar21 + 0x88)) {
                      bVar10 = false;
                    }
                    else {
                      bVar10 = true;
                    }
                    if (!bVar10) goto LAB_140b44a74;
                  }
                  local_478 = &local_408;
                  local_470 = (undefined8 *)CONCAT44(local_470._4_4_,fVar52);
                  FUN_142d6ed70(plVar14 + 0x7a,uVar27,lVar13);
                }
              }
              plVar14 = local_450;
              plVar24 = local_448;
              cVar29 = local_468;
              if (bVar9) {
                fVar45 = local_460._4_4_ * local_460._4_4_ + (float)local_460 * (float)local_460 +
                         local_458 * local_458;
                local_2b0 = local_458;
                fVar52 = (float)local_460;
                fVar51 = local_460._4_4_;
                if ((fVar45 != 1.0) &&
                   (local_2b0 = DAT_1468b5d98, fVar52 = DAT_1468b5d90, fVar51 = DAT_1468b5d94,
                   1e-08 <= fVar45)) {
                  auVar56._8_8_ = 0;
                  auVar56._0_8_ = CONCAT44(0,fVar45);
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = CONCAT44(0,fVar45);
                  auVar49 = rsqrtss(auVar56,auVar6);
                  local_2b0 = auVar49._0_4_;
                  local_2b0 = local_2b0 + local_2b0 * (0.5 - fVar45 * 0.5 * local_2b0 * local_2b0);
                  local_2b0 = local_2b0 + local_2b0 * (0.5 - fVar45 * 0.5 * local_2b0 * local_2b0);
                  fVar52 = local_2b0 * (float)local_460;
                  fVar51 = local_2b0 * local_460._4_4_;
                  local_2b0 = local_2b0 * local_458;
                }
                local_2b0 = local_2b0 * fVar38;
                local_2b8 = CONCAT44(fVar51 * fVar38,fVar52 * fVar38);
                local_240 = local_2b0;
                (**(code **)(*plVar1 + 0x8a0))(plVar1,&local_2b8,1);
                plVar14 = local_450;
                plVar24 = local_448;
                cVar29 = local_468;
              }
            }
            else {
              lVar13 = (**(code **)(*plVar1 + 0x148))(plVar1);
              plVar14 = local_450;
              if (lVar13 != 0) {
                FUN_1428cc5b0(lVar13);
                uVar40 = *(uint *)(param_1 + 0x230) & _DAT_146868c20;
                uVar42 = *(uint *)(param_1 + 0x234) & uRam0000000146868c24;
                uVar43 = *(uint *)(param_1 + 0x238) & uRam0000000146868c28;
                uVar44 = *(uint *)(param_1 + 0x23c) & uRam0000000146868c2c;
                auVar50._4_4_ = uVar42;
                auVar50._0_4_ = uVar40;
                auVar50._8_4_ = uVar43;
                auVar50._12_4_ = uVar44;
                auVar37._4_4_ = uVar43;
                auVar37._0_4_ = uVar42;
                auVar37._8_4_ = uVar40;
                auVar37._12_4_ = uVar44;
                auVar49 = minps(auVar50,auVar37);
                auVar5._4_4_ = uVar40;
                auVar5._0_4_ = uVar43;
                auVar5._8_4_ = uVar42;
                auVar5._12_4_ = uVar44;
                auVar49 = minps(auVar49,auVar5);
                if (auVar49._0_4_ * *(float *)(param_1 + 0x710) <= 1e-08) {
                  fVar52 = 1.0;
                }
                else {
                  fVar52 = auVar49._0_4_ * *(float *)(param_1 + 0x710);
                }
                fVar38 = fVar38 / fVar52;
                fVar46 = local_460._4_4_ * local_460._4_4_ + (float)local_460 * (float)local_460 +
                         local_458 * local_458;
                fVar52 = (float)local_460;
                fVar51 = local_460._4_4_;
                fVar45 = local_458;
                if ((fVar46 != 1.0) &&
                   (fVar52 = DAT_1468b5d90, fVar51 = DAT_1468b5d94, fVar45 = DAT_1468b5d98,
                   1e-08 <= fVar46)) {
                  auVar57._8_8_ = 0;
                  auVar57._0_8_ = CONCAT44(0,fVar46);
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = CONCAT44(0,fVar46);
                  auVar49 = rsqrtss(auVar57,auVar8);
                  fVar45 = auVar49._0_4_;
                  fVar45 = fVar45 + fVar45 * (0.5 - fVar46 * 0.5 * fVar45 * fVar45);
                  fVar45 = fVar45 + fVar45 * (0.5 - fVar46 * 0.5 * fVar45 * fVar45);
                  fVar52 = (float)local_460 * fVar45;
                  fVar51 = local_460._4_4_ * fVar45;
                  fVar45 = local_458 * fVar45;
                }
                fVar46 = *(float *)(param_1 + 0x768);
                plVar14 = local_450;
                plVar19 = plVar28;
                if (0 < (int)plVar3[0x17f]) {
                  do {
                    lVar13 = *(longlong *)((longlong)plVar28 + plVar3[0x17e]);
                    if (lVar13 != 0) {
                      pfVar23 = (float *)FUN_142699400(lVar13,local_170);
                      fVar30 = pfVar23[1];
                      fVar53 = *pfVar23;
                      fVar54 = pfVar23[2];
                      fVar47 = fVar53 * fVar53 + fVar30 * fVar30 + fVar54 * fVar54;
                      if (fVar47 == 1.0) {
                        local_3b0 = *(undefined8 *)pfVar23;
                        local_3a8 = pfVar23[2];
                        uVar17 = local_3b0;
                        fVar60 = (float)local_3b0;
                        fVar61 = pfVar23[2];
                        fVar55 = (float)((ulonglong)local_3b0 >> 0x20);
                        local_3b0 = uVar17;
                      }
                      else {
                        fVar60 = DAT_1468b5d90;
                        fVar61 = DAT_1468b5d98;
                        fVar55 = DAT_1468b5d94;
                        if (1e-08 <= fVar47) {
                          auVar58._8_8_ = 0;
                          auVar58._0_8_ = CONCAT44(0,fVar47);
                          auVar7._8_8_ = 0;
                          auVar7._0_8_ = CONCAT44(0,fVar47);
                          auVar49 = rsqrtss(auVar58,auVar7);
                          fVar55 = auVar49._0_4_;
                          fVar55 = fVar55 + fVar55 * (0.5 - fVar47 * 0.5 * fVar55 * fVar55);
                          fVar55 = fVar55 + fVar55 * (0.5 - fVar47 * 0.5 * fVar55 * fVar55);
                          fVar60 = fVar53 * fVar55;
                          fVar61 = fVar54 * fVar55;
                          fVar55 = fVar30 * fVar55;
                        }
                      }
                      lVar21 = plVar1[0x2d];
                      fVar30 = 1.0 - fVar38;
                      if (lVar21 == 0) {
                        local_2a0 = DAT_1468b5d98;
                        puVar16 = &local_2a8;
                        local_2a8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
                      }
                      else {
                        puVar16 = (undefined8 *)&local_3a4;
                        local_3a4 = *(undefined4 *)(lVar21 + 0x220);
                        local_39c = *(undefined4 *)(lVar21 + 0x228);
                        uStack_3a0 = *(undefined4 *)(lVar21 + 0x224);
                      }
                      auVar49 = *(undefined1 (*) [16])(param_1 + 0x220);
                      local_294 = *(float *)(puVar16 + 1);
                      fVar54 = auVar49._0_4_ - (float)*puVar16;
                      fVar53 = auVar49._4_4_ - (float)((ulonglong)*puVar16 >> 0x20);
                      fVar47 = auVar49._8_4_ - local_294;
                      fVar30 = (fVar54 * fVar60 * fVar30 * fVar30 +
                                fVar53 * fVar55 * fVar30 * fVar30 +
                               fVar47 * fVar61 * fVar30 * fVar30) /
                               (fVar53 * fVar53 + fVar54 * fVar54 + fVar47 * fVar47);
                      local_398 = fVar46 * fVar52 * fVar38 * fVar38 - fVar54 * fVar30 * param_2;
                      local_394 = fVar46 * fVar51 * fVar38 * fVar38 - fVar53 * fVar30 * param_2;
                      local_390 = fVar46 * fVar45 - fVar47 * fVar30 * param_2;
                      FUN_14268e510(lVar13,&local_398,1);
                    }
                    uVar40 = (int)plVar19 + 1;
                    plVar28 = plVar28 + 1;
                    plVar14 = local_450;
                    plVar24 = local_448;
                    plVar19 = (longlong *)(ulonglong)uVar40;
                  } while ((int)uVar40 < (int)plVar3[0x17f]);
                }
              }
            }
          }
        }
        else {
          local_128 = (longlong **)0x0;
          local_120 = 0;
          FUN_140b13760(plVar1,local_148,0);
          if ((int)local_120 < 1) {
            if (plVar1[2] != 0) {
              uVar17 = UCurveSourceInterface::GetPrivateStaticClass();
              cVar11 = UClass::ImplementsInterface(plVar1[2],uVar17);
              if (cVar11 != '\0') {
                local_418 = (float)FUN_1414c3e10(plVar1);
                if (local_418 < 0.0001) {
                  local_418 = 1.0;
                }
                local_418 = local_418 * 0.02;
                fVar45 = local_460._4_4_ * local_460._4_4_ + (float)local_460 * (float)local_460 +
                         local_458 * local_458;
                fVar38 = (float)local_460;
                fVar52 = local_460._4_4_;
                fVar51 = local_458;
                if ((fVar45 != 1.0) &&
                   (fVar38 = DAT_1468b5d90, fVar52 = DAT_1468b5d94, fVar51 = DAT_1468b5d98,
                   1e-08 <= fVar45)) {
                  auVar59._8_8_ = 0;
                  auVar59._0_8_ = CONCAT44(0,fVar45);
                  auVar49._8_8_ = 0;
                  auVar49._0_8_ = CONCAT44(0,fVar45);
                  auVar49 = rsqrtss(auVar59,auVar49);
                  fVar51 = auVar49._0_4_;
                  fVar51 = fVar51 + fVar51 * (0.5 - fVar45 * 0.5 * fVar51 * fVar51);
                  fVar51 = fVar51 + fVar51 * (0.5 - fVar45 * 0.5 * fVar51 * fVar51);
                  fVar38 = (float)local_460 * fVar51;
                  fVar52 = local_460._4_4_ * fVar51;
                  fVar51 = local_458 * fVar51;
                }
                fVar45 = *(float *)(param_1 + 0x768);
                lVar13 = plVar1[0x2d];
                local_420 = fVar38 * fVar45 * local_418;
                fStack_41c = fVar52 * fVar45 * local_418;
                local_418 = local_418 * fVar51 * fVar45;
                if (lVar13 == 0) {
                  local_288 = DAT_1468b5d98;
                  puVar16 = &local_290;
                  local_290 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
                }
                else {
                  puVar16 = (undefined8 *)&local_37c;
                  local_37c = *(undefined4 *)(lVar13 + 0x220);
                  local_374 = *(undefined4 *)(lVar13 + 0x228);
                  uStack_378 = *(undefined4 *)(lVar13 + 0x224);
                }
                local_27c = *(float *)(puVar16 + 1);
                local_36c = (float)((ulonglong)*puVar16 >> 0x20) + fStack_41c * param_2;
                local_368 = local_418 * param_2 + local_27c;
                local_370 = (float)*puVar16 + local_420 * param_2;
                local_478 = (undefined8 *)((ulonglong)local_478 & 0xffffffffffffff00);
                FUN_14223c850(plVar1,&local_370,0,0);
                lVar13 = plVar1[0x2d];
                if (lVar13 != 0) {
                  *(ulonglong *)(lVar13 + 0x240) = CONCAT44(fStack_41c,local_420);
                  *(float *)(lVar13 + 0x248) = local_418;
                }
              }
            }
          }
          else {
            local_430 = *(undefined4 *)(param_1 + 0x220);
            uStack_42c = *(undefined4 *)(param_1 + 0x224);
            uVar17 = *(undefined8 *)(param_1 + 0x220);
            uVar39 = *(undefined4 *)(param_1 + 0x228);
            pplVar25 = local_148;
            if (local_128 != (longlong **)0x0) {
              pplVar25 = local_128;
            }
            plVar14 = (longlong *)((longlong)(int)local_120 & 0x1fffffffffffffff);
            if (pplVar25 + (int)local_120 < pplVar25) {
              plVar14 = (longlong *)0x0;
            }
            plVar24 = local_448;
            local_428 = uVar39;
            if (plVar14 != (longlong *)0x0) {
              do {
                plVar24 = *pplVar25;
                if (((((char)plVar24[0x172] != '\0') ||
                     (iVar12 = FUN_14233f450(plVar24), iVar12 == 3)) ||
                    ((char)plVar24[0x16d] != '\0')) || (cVar29 == '\0')) {
                  local_388 = (undefined4)plVar24[0x44];
                  local_384 = *(undefined4 *)((longlong)plVar24 + 0x224);
                  local_380 = (undefined4)plVar24[0x45];
                  local_470 = (undefined8 *)((ulonglong)local_470 & 0xffffffffffffff00);
                  local_478 = (undefined8 *)
                              CONCAT44(local_478._4_4_,param_2 * *(float *)(param_1 + 0x768));
                  (**(code **)(*plVar24 + 0xa58))(plVar24,0x3f800000,&local_388);
                  puStack_270 = &local_268;
                  local_278 = &LAB_140b1f800;
                  local_1e8 = &LAB_140b1f800;
                  local_268 = uVar17;
                  local_260 = uVar39;
                  local_258 = param_1;
                  local_250 = param_2;
                  puStack_1e0 = puStack_270;
                  FUN_1430310e0(plVar24,&local_1e8,2);
                }
                pplVar25 = pplVar25 + 1;
                plVar28 = (longlong *)((longlong)plVar28 + 1);
                plVar24 = local_448;
              } while (plVar28 != plVar14);
            }
          }
          plVar14 = local_450;
          if (local_128 != (longlong **)0x0) {
            FMemory::Free();
            plVar14 = local_450;
          }
        }
      }
LAB_140b451de:
      plVar24 = plVar24 + 2;
    } while (plVar24 != plVar14);
  }
  return;
code_r0x000140b44495:
  lVar21 = *(longlong *)(lVar21 + 0x30);
  if (lVar21 == 0) goto LAB_140b4454a;
  goto LAB_140b44490;
}



// FUNCTION 140b454c0 FUN_140b454c0 body=166 status=ok
// SIG undefined FUN_140b454c0(void)

void FUN_140b454c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_18 [16];
  
  FUN_14301b970();
  if (((*(char *)(param_1 + 0x750) != '\0') &&
      (lVar1 = ATrap::GetActivationShapeComponent(param_1), lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x208) != 0)) {
    if (((*(int *)(param_1 + 0x730) != 0) && (*(int *)(param_1 + 0x730) != 1)) &&
       ((*(int *)(param_1 + 0x740) != 0 && (*(int *)(param_1 + 0x740) != 1)))) {
      *(undefined1 *)(param_1 + 0x750) = 0;
      uVar2 = FString::FString(local_18,param_1 + 0x728);
      FUN_140b469a0(param_1,uVar2);
      uVar2 = FString::FString(local_18,param_1 + 0x738);
      FUN_140b474f0(param_1,uVar2,*(undefined4 *)(param_1 + 0x748));
    }
  }
  return;
}



// FUNCTION 140b45570 FUN_140b45570 body=103 status=ok
// SIG undefined FUN_140b45570(void)

void FUN_140b45570(longlong *param_1)

{
  char cVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(char *)((longlong)param_1 + 0x67c) != '\0') {
    if (param_1[0x8f] == 0) {
      cVar1 = (**(code **)(*param_1 + 0x7e8))(param_1);
      if (cVar1 != '\0') {
        FUN_142227350(param_1,0,1);
        return;
      }
    }
    else if (((char *)param_1[0xdc] == (char *)0x0) || (*(char *)param_1[0xdc] == '\0')) {
      FUN_140b26b90(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140b455e0 FUN_140b455e0 body=18 status=ok
// SIG undefined FUN_140b455e0(void)

int FUN_140b455e0(int *param_1)

{
  return param_1[5] + param_1[4] + param_1[3] + param_1[2] + param_1[1] + *param_1;
}



// FUNCTION 140b45600 FUN_140b45600 body=1115 status=ok
// SIG undefined FUN_140b45600(void)

void FUN_140b45600(longlong param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
                  undefined4 param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  longlong local_e8 [2];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  longlong *local_b8;
  undefined1 local_98 [8];
  longlong local_90;
  longlong local_88;
  longlong local_78;
  longlong local_68;
  longlong local_58;
  longlong local_48;
  
  plVar7 = (longlong *)0x0;
  plVar5 = plVar7;
  if ((param_3 != (longlong *)0x0) ||
     (param_3 = *(longlong **)(param_1 + 0x118), param_3 != (longlong *)0x0)) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar5 = (longlong *)FUN_140c430a0(param_3,param_4);
      plVar7 = param_3;
    }
  }
  if ((*(byte *)(param_1 + 0xb8) & 8) != 0) {
    if ((plVar5 != (longlong *)0x0) && ((*(byte *)(plVar5 + 0x17) & 8) == 0)) {
      FUN_142fde510(local_d8);
      cVar2 = FUN_142ffa4f0(param_1,param_2,local_d8);
      if (cVar2 == '\0') {
        return;
      }
      if (local_b8 == (longlong *)0x0) {
        return;
      }
      iVar3 = FUN_14233f450(param_1);
      if (iVar3 == 3) {
        FUN_143011bf0(param_1,param_2,param_5,0);
        FUN_14223ef90(local_b8,0);
        FUN_142fe3d60(plVar5,local_res8,local_c8,local_b8,param_5,0,0,0,0,0);
        return;
      }
      FUN_14301f8f0();
      lVar4 = (**(code **)(*local_b8 + 0x628))(local_b8);
      if (lVar4 != 0) {
        _guard_xfg_dispatch_icall_nop(local_98,0,0x68);
        FUN_142ff3000(lVar4,local_98);
        if ((local_90 != 0) && (local_88 != 0)) {
          lVar4 = *(longlong *)(param_1 + 0x120);
          if (lVar4 == 0) {
            lVar4 = FUN_1423407b0(param_1);
          }
          lVar4 = FUN_143019ed0(lVar4,local_98,1,0);
          if (lVar4 != 0) {
            FUN_14223ef90(lVar4,0);
            FUN_142fe3d60(plVar5,local_res8,*(undefined8 *)(local_90 + 0x1d8),lVar4,1,0,0,1,0,0);
          }
        }
        if (local_48 != 0) {
          FMemory::Free();
        }
        if (local_58 != 0) {
          FMemory::Free();
        }
        if (local_68 != 0) {
          FMemory::Free();
        }
        if (local_78 != 0) {
          FMemory::Free();
        }
      }
    }
    FUN_141430300(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  if ((plVar5 == (longlong *)0x0) || ((*(byte *)(plVar5 + 0x17) & 8) == 0)) {
    FUN_140b45a60(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  lVar4 = (**(code **)(*plVar7 + 0x670))(plVar7);
  if (lVar4 == 0) {
    return;
  }
  lVar6 = FUN_14145f370();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  FUN_142fde510(local_d8);
  cVar2 = FUN_142ffa4f0(param_1,param_2,local_d8);
  if (cVar2 == '\0') {
    return;
  }
  if (local_b8 == (longlong *)0x0) {
    return;
  }
  iVar3 = FUN_14233f450(param_1);
  if (iVar3 == 3) {
    FUN_143011bf0(param_1,param_2,param_5,0);
    FUN_14223ef90(local_b8,1);
    FUN_142fe3d60(plVar5,local_res8,local_c8,local_b8,param_5,0,0,0,0,0);
    return;
  }
  FUN_14301f8f0();
  lVar6 = (**(code **)(*local_b8 + 0x628))(local_b8);
  if (lVar6 == 0) {
    return;
  }
  _guard_xfg_dispatch_icall_nop(local_98,0,0x68);
  local_e8[0] = 0;
  local_e8[1] = 0;
  FUN_142ff3000(lVar6,local_98);
  FUN_142ff5c90(local_98,local_e8,1);
  FUN_14145fce0(lVar4,local_e8,param_4);
  FUN_143011bf0(param_1,param_2,param_5,1);
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_78 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140b45a60 FUN_140b45a60 body=693 status=ok
// SIG undefined FUN_140b45a60(void)

void FUN_140b45a60(longlong *param_1,undefined8 param_2,longlong *param_3,char param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 local_res20 [8];
  longlong *local_88;
  int local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_58;
  
  if ((param_4 != (char)param_1[0x6e]) &&
     ((param_3 != (longlong *)0x0 ||
      (param_3 = (longlong *)param_1[0x23], param_3 != (longlong *)0x0)))) {
    lVar7 = FUN_1413f82e0();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    plVar11 = param_3;
    if (!bVar3) {
      plVar11 = (longlong *)0x0;
    }
    uVar8 = ANavLinkProxy::GetPrivateStaticClass();
    AActor::GetComponentsByClass(param_3,&local_88,uVar8);
    plVar1 = local_88 + local_80;
    for (plVar10 = local_88; plVar10 != plVar1; plVar10 = plVar10 + 1) {
      lVar7 = *plVar10;
      if (lVar7 != 0) {
        lVar9 = ANavLinkProxy::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (*(char *)(lVar7 + 0x370) == param_4)) {
          FUN_142fde510(local_78);
          cVar4 = FUN_142ffa4f0(param_1,param_2,local_78);
          if ((cVar4 != '\0') &&
             ((cVar4 = (**(code **)(*param_1 + 0x478))(param_1,local_78), cVar4 != '\0' ||
              (((param_4 == '\x01' || ((char)param_1[0x6e] == '\x01')) &&
               (cVar4 = (**(code **)(*param_1 + 0x480))(param_1,local_78), cVar4 != '\0')))))) {
            cVar4 = FUN_1430035d0();
            if ((cVar4 == '\0') && (iVar2 = *(int *)(lVar7 + 0x2a8), 0 < iVar2)) {
              bVar5 = FUN_142fffd80(local_78);
              iVar6 = ASwitchActor::GetSelectedOption(lVar7);
              if (iVar2 < (int)(iVar6 + (uint)bVar5)) goto LAB_140b45cc8;
            }
            if (((*(byte *)(lVar7 + 0xb8) & 8) == 0) &&
               ((plVar11 == (longlong *)0x0 ||
                (cVar4 = (**(code **)(*plVar11 + 0x778))(plVar11), cVar4 == '\0')))) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            FUN_143011bf0(param_1,param_2,param_5,~(*(byte *)(lVar7 + 0xb8) >> 3) & 1);
            if (bVar3) {
              FUN_14223ef90(local_58,*(byte *)(lVar7 + 0xb8) >> 3 & 1);
              FUN_142fe3d60(lVar7,local_res20,local_68,local_58,param_5,0,0,0,0,0);
            }
          }
        }
      }
LAB_140b45cc8:
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
  }
  return;
}



// FUNCTION 140b45d20 FUN_140b45d20 body=642 status=ok
// SIG undefined FUN_140b45d20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b45d20(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  iVar4 = FUN_14233f450();
  if (iVar4 == 3) {
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    plVar7 = (longlong *)0x0;
    if (lVar5 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x120);
      if (lVar5 == 0) {
        lVar5 = FUN_1423407b0(param_1);
      }
      if (*(longlong *)(lVar5 + 400) == 0) {
        uVar6 = *(undefined8 *)(lVar5 + 0x3f8);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
      }
      FUN_142880530(uVar6,param_1 + 0x260);
      *(undefined8 *)(param_1 + 0x260) = 0;
    }
    if (0 < *(int *)(param_1 + 0x1f8)) {
      plVar8 = *(longlong **)(param_1 + 0x1f0);
      plVar9 = plVar8 + *(int *)(param_1 + 0x1f8);
      for (; plVar8 != plVar9; plVar8 = plVar8 + 1) {
        plVar1 = (longlong *)*plVar8;
        if (plVar1 != (longlong *)0x0) {
          lVar5 = AGExplodingRockProjectile::GetPrivateStaticClass();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((((bVar2) && (cVar3 = (**(code **)(*plVar1 + 0x858))(plVar1), cVar3 != '\0')) &&
              ((*(byte *)(plVar1 + 0xb5) & 1) != 0)) &&
             (*(undefined1 *)((longlong)plVar1 + 0x6bb) = 1, plVar7 == (longlong *)0x0)) {
            plVar7 = plVar1;
          }
        }
      }
      local_18 = _DAT_1468b5d90;
      local_10 = DAT_1468b5d98;
      if ((*(longlong *)(param_1 + 0x118) != 0) &&
         (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168), local_28 = _DAT_1468b5d90,
         local_20 = DAT_1468b5d98, lVar5 != 0)) {
        local_28 = *(undefined8 *)(lVar5 + 0x220);
        local_20 = *(undefined4 *)(lVar5 + 0x228);
        local_18 = local_28;
        local_10 = local_20;
      }
      lVar5 = FUN_140b26730(param_1);
      if ((lVar5 != 0) && (plVar7 != (longlong *)0x0)) {
        local_20 = local_10;
        local_28 = local_18;
        local_1c = 1;
        (**(code **)(*plVar7 + 0x848))(plVar7,lVar5,&local_28,1);
      }
      plVar9 = *(longlong **)(param_1 + 0x1f0);
      plVar7 = plVar9 + *(int *)(param_1 + 0x1f8);
      for (; plVar9 != plVar7; plVar9 = plVar9 + 1) {
        plVar8 = (longlong *)*plVar9;
        if (plVar8 != (longlong *)0x0) {
          lVar5 = AGExplodingRockProjectile::GetPrivateStaticClass();
          if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (((bVar2) && (plVar8[0xdf] == 0)) && ((*(byte *)(plVar8 + 0xb5) & 1) != 0)) {
            (**(code **)(*plVar8 + 0x7f8))(plVar8);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140b45fb0 FUN_140b45fb0 body=204 status=ok
// SIG undefined FUN_140b45fb0(void)

ulonglong FUN_140b45fb0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *in_RAX;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x5a8);
    in_RAX = (longlong *)*plVar1;
    plVar2 = in_RAX + *(int *)(param_1 + 0x5b0);
    for (; in_RAX != plVar2; in_RAX = in_RAX + 1) {
      if (*in_RAX == param_2) goto LAB_140b46069;
    }
    lVar4 = FUN_142df3510(param_2);
    in_RAX = (longlong *)0x0;
    if (lVar4 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x118);
      uVar5 = FUN_142df3580(param_2);
      uVar6 = FUN_142df3580(uVar6);
      in_RAX = (longlong *)FUN_142df3570(uVar6,uVar5);
      if ((int)in_RAX != 0) {
        iVar3 = *(int *)(param_1 + 0x5b0);
        *(int *)(param_1 + 0x5b0) = iVar3 + 1;
        if (*(int *)(param_1 + 0x5b4) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
        }
        lVar4 = *plVar1;
        *(longlong *)(lVar4 + (longlong)iVar3 * 8) = param_2;
        return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      }
    }
  }
LAB_140b46069:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140b46080 FUN_140b46080 body=110 status=ok
// SIG undefined FUN_140b46080(void)

void FUN_140b46080(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar1 = FUN_1423407b0(), lVar1 == 0)) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
  lVar1 = UWorld::GetGameState<APVPGameState>(lVar1);
  if (((lVar1 != 0) && (*(int *)(param_1 + 0x4d8) != *(int *)(lVar1 + 0x6e4))) &&
     (lVar1 = FUN_140b823b0(param_1), lVar1 != 0)) {
    FUN_140b3dbb0(param_1);
    return;
  }
  return;
}



// FUNCTION 140b460f0 FUN_140b460f0 body=172 status=ok
// SIG undefined FUN_140b460f0(void)

void FUN_140b460f0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_142fe9a90(param_1,param_2,1,0,1);
  if (cVar1 != '\0') {
    if ((*(byte *)(param_1 + 0xb5) & 2) == 0) {
      (**(code **)(*param_1 + 0x700))(param_1,1);
    }
    (**(code **)(*param_1 + 0x780))(param_1,param_2,0);
  }
  param_1[0xdf] = 0;
  *(undefined1 *)((longlong)param_1 + 0x6bb) = 0;
  if ((*(byte *)(param_1 + 0xb5) & 1) != 0) {
    (**(code **)(*param_1 + 0x7f8))(param_1);
  }
  if ((((char *)param_1[0xdc] == (char *)0x0) || (*(char *)param_1[0xdc] == '\0')) &&
     (*(char *)((longlong)param_1 + 0x6d6) == '\x02')) {
    (**(code **)(*param_1 + 0x600))(param_1);
    *(undefined1 *)((longlong)param_1 + 0x6d6) = 1;
  }
  return;
}



// FUNCTION 140b461a0 FUN_140b461a0 body=788 status=ok
// SIG undefined FUN_140b461a0(void)

void FUN_140b461a0(longlong *param_1,longlong param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_88;
  undefined8 local_80;
  code *local_78;
  undefined4 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  if (param_2 != 0) {
    plVar6 = (longlong *)param_1[0x99];
    plVar5 = plVar6 + (int)param_1[0x9a];
    for (; plVar6 != plVar5; plVar6 = plVar6 + 1) {
      if (*plVar6 == param_2) {
        return;
      }
    }
    if (*(longlong *)(param_2 + 0x848) != 0) {
      lVar2 = param_1[0x24];
      if (lVar2 == 0) {
        lVar2 = FUN_1423407b0(param_1);
      }
      lVar2 = FUN_140b5b830(lVar2);
      if (lVar2 != 0) {
        if (param_3 == '\0') {
          if ((int)param_1[0x9b] == 0) {
            return;
          }
          cVar1 = FUN_140b81c70(param_1);
          if (cVar1 != '\x01') {
            return;
          }
        }
        else {
          lVar3 = FUN_140b825a0(param_1);
          if (lVar3 != 0) {
            *(undefined4 *)(param_1 + 0x9b) = *(undefined4 *)(lVar3 + 0x6e4);
            (**(code **)(*param_1 + 0x260))(param_1);
          }
        }
        FUN_140b3be70(param_1,param_2);
        local_88 = 0;
        local_80 = 0;
        cVar1 = FUN_1430032a0(param_1 + 0x93);
        if (cVar1 == '\0') {
          FUN_142ffa740(param_1 + 0x93,&local_88);
        }
        if ((int)local_80 == 0) {
          FUN_142ffa740(param_1 + 0x6e,&local_88);
        }
        local_58 = 0;
        local_50 = 1;
        local_4e = 0;
        local_38 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_48 = 0;
        uStack_40 = 0;
        FUN_140b26550(param_1,&local_68,&local_88,param_2,param_3);
        local_78 = FUN_140b1a330;
        uStack_70 = 0;
        FUN_14058c4b0(&uStack_40,param_1,&local_78);
        FUN_140b50be0(lVar2,&local_68);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_40);
        FUN_1409f5880(&uStack_60);
        if ((int)local_80 != 0) {
          plVar5 = (longlong *)(local_88 + 0x78);
          iVar4 = (int)local_80;
          do {
            if (*plVar5 != 0) {
              FMemory::Free();
            }
            plVar5 = plVar5 + 0x11;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        if (local_88 != 0) {
          FMemory::Free();
        }
        if (param_1[0x72] != 0) {
          local_88 = 0;
          local_80 = 1;
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::
          ResizeGrow(&local_88,0);
          FUN_142fde910(local_88,param_1[0x72],0x3f800000);
          local_58 = 0;
          local_50 = 1;
          local_4e = 0;
          local_38 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_48 = 0;
          uStack_40 = 0;
          FUN_140b26550(param_1,&local_68,&local_88,param_2,param_3);
          local_78 = FUN_140b2f100;
          uStack_70 = 0;
          FUN_14058c4b0(&uStack_40,param_1,&local_78);
          FUN_140b50be0(lVar2,&local_68);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_40);
          FUN_1409f5880(&uStack_60);
          if ((int)local_80 != 0) {
            plVar5 = (longlong *)(local_88 + 0x78);
            iVar4 = (int)local_80;
            do {
              if (*plVar5 != 0) {
                FMemory::Free();
              }
              plVar5 = plVar5 + 0x11;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          if (local_88 != 0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140b464c0 FUN_140b464c0 body=68 status=ok
// SIG undefined FUN_140b464c0(void)

void FUN_140b464c0(longlong param_1,undefined1 param_2)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x790) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x790) + 0x2a0))();
    if (cVar1 == '\0') {
      FUN_1425fcab0(*(undefined8 *)(param_1 + 0x790),param_2);
    }
  }
  return;
}



// FUNCTION 140b46510 FUN_140b46510 body=286 status=ok
// SIG undefined FUN_140b46510(void)

void FUN_140b46510(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_res10 [3];
  
  if (((*(char *)(param_1 + 0x128) == '\x03') && (param_2 != 0)) && (param_3 != 0)) {
    plVar6 = *(longlong **)(param_1 + 0x580);
    plVar2 = plVar6 + (longlong)*(int *)(param_1 + 0x588) * 4;
    if (plVar6 != plVar2) {
      while (*plVar6 != param_3) {
        plVar6 = plVar6 + 4;
        if (plVar6 == plVar2) {
          return;
        }
      }
      plVar5 = (longlong *)plVar6[2];
      plVar2 = plVar5 + (int)plVar6[3];
      if (plVar5 != plVar2) {
        while (*plVar5 != param_2) {
          plVar5 = plVar5 + 1;
          if (plVar5 == plVar2) {
            return;
          }
        }
        local_res10[0] = param_2;
        TArray<FName,FDefaultAllocator>::Remove(plVar6 + 2,local_res10);
        lVar1 = local_res10[0];
        if (*(char *)(param_3 + 0x118) == '\0') {
          lVar3 = (**(code **)(*(longlong *)(local_res10[0] + 0x8e0) + 0x10))
                            (local_res10[0] + 0x8e0);
          if (lVar3 != 0) {
            uVar4 = (**(code **)(*(longlong *)(lVar1 + 0x8e0) + 0x10))(lVar1 + 0x8e0);
            thunk_FUN_142d2b620(uVar4,plVar6[1]);
          }
        }
        else if ((*(char *)(param_3 + 0x118) == '\x01') &&
                (*(longlong *)(local_res10[0] + 0xe78) != 0)) {
          thunk_FUN_142d2b620(*(longlong *)(local_res10[0] + 0xe78),plVar6[1]);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140b46630 FUN_140b46630 body=193 status=ok
// SIG undefined FUN_140b46630(void)

void FUN_140b46630(longlong param_1,longlong param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong local_res10;
  undefined8 local_res18;
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0xe80), lVar1 != 0)) {
    local_res10 = param_2;
    FUN_140a9b1e0(lVar1,*(undefined8 *)(param_1 + 0x590),0);
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnWeaponShotModified",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res18,pwVar3 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar1 + 0x308,param_1,local_res18);
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x570,&local_res10);
  }
  return;
}



// FUNCTION 140b46700 FUN_140b46700 body=199 status=ok
// SIG undefined FUN_140b46700(void)

void FUN_140b46700(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_1422279d0(param_1,&DAT_146532190);
  lVar3 = *(longlong *)(param_1 + 0x4f0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x18c) = 0;
    *(undefined4 *)(lVar3 + 0x194) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x4f0) + 0x280))(*(longlong **)(param_1 + 0x4f0),0);
  }
  plVar1 = *(longlong **)(param_1 + 0x168);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_1429f11d0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x638))(plVar1,3);
    }
  }
  uVar4 = UUGJournalKey::GetPrivateStaticClass();
  FUN_140b30020(param_1,uVar4);
  return;
}



// FUNCTION 140b46820 FUN_140b46820 body=375 status=ok
// SIG undefined FUN_140b46820(void)

void FUN_140b46820(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  char *pcVar13;
  
  plVar1 = (longlong *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  iVar9 = *(int *)(param_1 + 0x88) + -1;
  if (-1 < iVar9) {
    plVar8 = (longlong *)(param_1 + 0x80);
    lVar12 = (longlong)iVar9 << 3;
    do {
      lVar10 = 0;
      cVar4 = FWeakObjectPtr::IsValid(*plVar8 + lVar12);
      if (cVar4 == '\0') {
        iVar2 = *(int *)(param_1 + 0x88);
        iVar5 = (iVar2 - iVar9) + -1;
        if (0 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar8 + lVar12),(void *)(*plVar8 + (longlong)(iVar2 - iVar5) * 8),
                     (longlong)iVar5 << 3);
          iVar2 = *(int *)(param_1 + 0x88);
        }
        *(int *)(param_1 + 0x88) = iVar2 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar8);
      }
      else {
        lVar6 = FWeakObjectPtr::Get(*plVar8 + lVar12);
        pcVar13 = *(char **)(lVar6 + 0x70);
        lVar11 = (longlong)*(int *)(lVar6 + 0x78);
        if (pcVar13 + *(int *)(lVar6 + 0x78) < pcVar13) {
          lVar11 = lVar10;
        }
        if (lVar11 != 0) {
          do {
            pcVar3 = (char *)*plVar1;
            iVar2 = *(int *)(param_1 + 0x98);
            cVar4 = *pcVar13;
            for (pcVar7 = pcVar3; pcVar7 != pcVar3 + iVar2; pcVar7 = pcVar7 + 1) {
              if (*pcVar7 == cVar4) {
                if ((int)pcVar7 - (int)pcVar3 != -1) goto LAB_140b46913;
                break;
              }
            }
            *(int *)(param_1 + 0x98) = iVar2 + 1;
            if (*(int *)(param_1 + 0x9c) < iVar2 + 1) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
            }
            *(char *)((longlong)iVar2 + *plVar1) = cVar4;
LAB_140b46913:
            pcVar13 = pcVar13 + 1;
            lVar10 = lVar10 + 1;
          } while (lVar10 != lVar11);
        }
      }
      lVar12 = lVar12 + -8;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  return;
}



// FUNCTION 140b469a0 FUN_140b469a0 body=510 status=ok
// SIG undefined FUN_140b469a0(void)

void FUN_140b469a0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_20 [3];
  
  lVar10 = *(longlong *)(param_1 + 0x758);
  if (lVar10 != 0) {
    lVar7 = FUN_142e7dd60();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (((bVar6) && ((int)param_2[1] != 0)) && ((int)param_2[1] != 1)) {
      if (*(int *)(param_1 + 0x770) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = *(undefined2 **)(param_1 + 0x768);
      }
      FString::PrintfImpl(local_20,L"<font color=%s>%s</font>",puVar12,*param_2);
      uVar8 = FText::FromString(&local_38,local_20);
      FUN_140b3f770(lVar10,uVar8);
      plVar9 = (longlong *)CONCAT44(uStack_2c,uStack_30);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      plVar9 = (longlong *)ATrap::GetActivationShapeComponent(param_1);
      lVar10 = 0;
      if (plVar9 != (longlong *)0x0) {
        lVar10 = plVar9[0x41];
      }
      if ((lVar10 != 0) && (plVar9 != (longlong *)0x0)) {
        local_38 = *(longlong *)(param_1 + 0x758);
        plVar2 = (longlong *)(lVar10 + 0x108);
        plVar5 = (longlong *)*plVar2;
        iVar4 = *(int *)(lVar10 + 0x110);
        uStack_30 = 0x3f800000;
        for (plVar11 = plVar5; plVar11 != plVar5 + (longlong)iVar4 * 2; plVar11 = plVar11 + 2) {
          if (local_38 == *plVar11) {
            if ((int)((longlong)plVar11 - (longlong)plVar5 >> 4) != -1) goto LAB_140b46b4a;
            break;
          }
        }
        *(int *)(lVar10 + 0x110) = iVar4 + 1;
        if (*(int *)(lVar10 + 0x114) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar4);
        }
        puVar3 = (undefined4 *)(*plVar2 + (longlong)iVar4 * 0x10);
        *puVar3 = (undefined4)local_38;
        puVar3[1] = local_38._4_4_;
        puVar3[2] = uStack_30;
        puVar3[3] = uStack_2c;
LAB_140b46b4a:
        (**(code **)(*plVar9 + 0x508))(plVar9,*(char *)(param_1 + 0x128) == '\x03');
      }
      if (local_20[0] != 0) {
        FMemory::Free();
      }
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140b46ba0 FUN_140b46ba0 body=653 status=ok
// SIG undefined FUN_140b46ba0(void)

void FUN_140b46ba0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 local_res8;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar3 = *(longlong *)(param_1 + 0x278);
  if (lVar3 != 0) goto LAB_140b46df3;
  lVar3 = FUN_140b2c020(param_1);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x230);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x118);
      if (lVar3 == 0) {
LAB_140b46c7e:
        lVar3 = 0;
      }
      else {
        lVar6 = UUGSlider::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140b46c7e;
      }
      *(longlong *)(param_1 + 0x230) = lVar3;
      if (lVar3 == 0) {
        if (*(longlong *)(param_1 + 0x118) != 0) {
          local_30 = 0x3f800000;
          local_20 = DAT_1468b5da8;
          local_10 = *(undefined4 *)(param_1 + 0x254);
          local_38 = 0x3f8000003f800000;
          local_28 = DAT_1468b5da0;
          local_18 = *(undefined8 *)(param_1 + 0x24c);
          local_res8 = 0;
          uVar5 = FUN_14245fd00(*(undefined8 *)(param_1 + 0x240),
                                *(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0x168),0,&local_18,
                                &local_28,&local_38,2,1,0,1,0);
          *(undefined8 *)(param_1 + 0x278) = uVar5;
        }
        goto LAB_140b46da2;
      }
    }
    local_res8 = 0;
    uVar5 = FUN_140b50a30(lVar3,*(undefined8 *)(param_1 + 0x240),0,0);
    *(undefined8 *)(param_1 + 0x278) = uVar5;
    FUN_140b713c0(*(undefined8 *)(param_1 + 0x230),uVar5);
  }
  else {
    puVar4 = (undefined8 *)FName::FName(&local_res8,&DAT_14428d124,1);
    uVar5 = FUN_140b1a100(*(undefined8 *)(param_1 + 0x228),*(undefined8 *)(param_1 + 0x240),*puVar4,
                          0);
    *(undefined8 *)(param_1 + 0x278) = uVar5;
    FUN_140b3fd40(*(undefined8 *)(param_1 + 0x228),uVar5,DAT_146868fc0);
  }
LAB_140b46da2:
  plVar1 = *(longlong **)(param_1 + 0x278);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  local_20 = *(undefined4 *)(param_1 + 0x248);
  local_18 = CONCAT44(local_20,local_20);
  local_10 = local_20;
  (**(code **)(*plVar1 + 0x3f8))(plVar1,&local_18);
  lVar3 = *(longlong *)(param_1 + 0x278);
  if (lVar3 == 0) {
    return;
  }
LAB_140b46df3:
  if ((*(char *)(param_1 + 0x200) == '\0') || (*(longlong *)(param_1 + 0x1a0) == 0)) {
    uVar7 = *(undefined4 *)(param_1 + 0x260);
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x264);
  }
  FUN_14260f0c0(lVar3,*(undefined8 *)(param_1 + 600),uVar7);
  return;
}



// FUNCTION 140b46e30 FUN_140b46e30 body=217 status=ok
// SIG undefined FUN_140b46e30(void)

void FUN_140b46e30(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_28 [32];
  
  if (((*(char *)(param_1 + 0x200) == '\0') && (*(longlong *)(param_1 + 0x268) != 0)) &&
     (*(char *)(param_1 + 0x284) == '\0')) {
    *(undefined1 *)(param_1 + 0x284) = 1;
    if (*(longlong *)(param_1 + 0x228) != 0) {
      FUN_140b1a280();
      return;
    }
    if (*(longlong *)(param_1 + 0x118) != 0) {
      uVar2 = AUGDoor::GetPrivateStaticClass();
      lVar3 = AGameStateBase::OnRep_GameModeClass(*(undefined8 *)(param_1 + 0x118),uVar2);
      if (lVar3 != 0) {
        lVar4 = AUGDoor::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_1405a3150(lVar3,local_28,*(undefined8 *)(param_1 + 0x268),0);
          FUN_140591060(local_28);
        }
      }
    }
  }
  return;
}



// FUNCTION 140b46f10 FUN_140b46f10 body=694 status=ok
// SIG undefined FUN_140b46f10(void)

void FUN_140b46f10(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
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
  
  uVar6 = 0;
  if ((((*(byte *)(param_1 + 0x70c) & 1) != 0) &&
      (plVar7 = (longlong *)FUN_140b2aac0(), uVar6 = 0, plVar7 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*plVar7 + 0x768))(plVar7), cVar5 != '\0')) {
    uVar6 = FUN_140d000a0(plVar7);
  }
  plVar7 = (longlong *)(param_1 + 0x2b0);
  local_88 = 0;
  uVar2 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  uStack_84 = 1;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar2 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar3 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar3 == 0) {
      lVar11 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar9 = local_88 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar9;
      if (bVar4) goto LAB_140b4701e;
      uVar3 = puVar12[lVar11 + 1];
    }
    uStack_84 = uVar3 - 1 & uVar3 ^ uVar3;
    iVar9 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_74 = (iStack_70 - iVar9) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_140b4701e:
      uStack_74 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x2d8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar13 = uVar3 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar7;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar3;
  if (uVar3 != uVar2) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = puVar12[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar9 = (int)uVar3 >> 5;
    while (uVar10 == 0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_140b470f6;
      uVar10 = puVar12[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar10 = uVar10 - 1 & uVar10 ^ uVar10;
    iVar9 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_74 = (uVar13 - iVar9) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_140b470f6:
      uStack_74 = uVar2;
    }
  }
  while( true ) {
    if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) break;
    lVar11 = *(longlong *)(*plVar7 + (longlong)(int)uStack_4c * 0x10);
    if (lVar11 != 0) {
      lVar8 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        FUN_142398e60(lVar11,*(uint *)(lVar11 + 0x6b8) & 0xfffe79ff | uVar6,0);
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 140b471d0 FUN_140b471d0 body=788 status=ok
// SIG undefined FUN_140b471d0(void)

void FUN_140b471d0(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  uint uVar12;
  undefined8 uVar13;
  uint local_res8;
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
  
  if ((*(byte *)((longlong)param_1 + 0x70c) & 1) == 0) {
    uVar13 = 1;
  }
  else {
    plVar6 = (longlong *)FUN_140b2aac0();
    if ((plVar6 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar6 + 0x768))(plVar6), cVar5 == '\0')) {
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
  }
  local_res8 = 0;
  if ((((*(byte *)((longlong)param_1 + 0x70c) & 1) != 0) &&
      (plVar6 = (longlong *)FUN_140b2aac0(param_1), plVar6 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*plVar6 + 0x768))(plVar6), cVar5 != '\0')) {
    local_res8 = FUN_140d000a0(plVar6);
  }
  plVar6 = param_1 + 0x56;
  local_98 = 0;
  uVar2 = *(uint *)(param_1 + 0x5b);
  puVar1 = (uint *)(param_1 + 0x58);
  uStack_94 = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar11 = (uint *)param_1[0x5a];
    if ((uint *)param_1[0x5a] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar3 = *puVar11;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar10 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar4) goto LAB_140b4730d;
      uVar3 = puVar11[lVar10 + 1];
    }
    uStack_94 = uVar3 - 1 & uVar3 ^ uVar3;
    iVar8 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_84 = (iStack_80 - iVar8) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_140b4730d:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x5b);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar12 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar6;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar11 = (uint *)param_1[0x5a];
    if ((uint *)param_1[0x5a] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = puVar11[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar8 = (int)uVar3 >> 5;
    while (uVar9 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_140b473e5;
      uVar9 = puVar11[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar9 = uVar9 - 1 & uVar9 ^ uVar9;
    iVar8 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_84 = (uVar12 - iVar8) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_140b473e5:
      uStack_84 = uVar2;
    }
  }
  while( true ) {
    if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) break;
    lVar10 = *(longlong *)(*plVar6 + (longlong)(int)uStack_5c * 0x10);
    if (lVar10 != 0) {
      lVar7 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        uVar2 = *(uint *)(lVar10 + 0x6b8) & 0xfffe79ff;
        if ((*(byte *)((longlong)param_1 + 0x70c) & 1) != 0) {
          uVar2 = *(uint *)(lVar10 + 0x6b8) | local_res8;
        }
        FUN_142398e60(lVar10,uVar2,0);
        FUN_142398ec0(lVar10,uVar13,1);
      }
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
                    /* WARNING: Could not recover jumptable at 0x000140b474dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x830))(param_1);
  return;
}



// FUNCTION 140b474f0 FUN_140b474f0 body=530 status=ok
// SIG undefined FUN_140b474f0(void)

void FUN_140b474f0(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_20 [3];
  
  lVar10 = *(longlong *)(param_1 + 0x760);
  if (lVar10 != 0) {
    lVar7 = FUN_142e7dd60();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((((bVar6) && ((int)param_2[1] != 0)) && ((int)param_2[1] != 1)) && (0 < param_3)) {
      if (*(int *)(param_1 + 0x770) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = *(undefined2 **)(param_1 + 0x768);
      }
      FString::PrintfImpl(local_20,L"<font color=%s>%s (%d Bits)</font>",puVar12,*param_2,param_3);
      uVar8 = FText::FromString(&local_38,local_20);
      FUN_140b3f770(lVar10,uVar8);
      plVar9 = (longlong *)CONCAT44(uStack_2c,uStack_30);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      plVar9 = (longlong *)ATrap::GetActivationShapeComponent(param_1);
      lVar10 = 0;
      if (plVar9 != (longlong *)0x0) {
        lVar10 = plVar9[0x41];
      }
      if ((lVar10 != 0) && (plVar9 != (longlong *)0x0)) {
        local_38 = *(longlong *)(param_1 + 0x760);
        plVar2 = (longlong *)(lVar10 + 0x108);
        plVar5 = (longlong *)*plVar2;
        iVar4 = *(int *)(lVar10 + 0x110);
        uStack_30 = 0x3f800000;
        for (plVar11 = plVar5; plVar11 != plVar5 + (longlong)iVar4 * 2; plVar11 = plVar11 + 2) {
          if (local_38 == *plVar11) {
            if ((int)((longlong)plVar11 - (longlong)plVar5 >> 4) != -1) goto LAB_140b476a8;
            break;
          }
        }
        *(int *)(lVar10 + 0x110) = iVar4 + 1;
        if (*(int *)(lVar10 + 0x114) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar4);
        }
        puVar3 = (undefined4 *)(*plVar2 + (longlong)iVar4 * 0x10);
        *puVar3 = (undefined4)local_38;
        puVar3[1] = local_38._4_4_;
        puVar3[2] = uStack_30;
        puVar3[3] = uStack_2c;
LAB_140b476a8:
        (**(code **)(*plVar9 + 0x508))(plVar9,*(char *)(param_1 + 0x128) == '\x03');
      }
      if (local_20[0] != 0) {
        FMemory::Free();
      }
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140b47710 FUN_140b47710 body=89 status=ok
// SIG undefined FUN_140b47710(void)

void FUN_140b47710(longlong param_1)

{
  longlong lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (*(longlong *)(param_1 + 0x590) != 0) {
    FUN_142c8c260(&local_48);
    lVar1 = *(longlong *)(param_1 + 0x590);
    *(undefined8 *)(lVar1 + 0x78) = local_48;
    *(undefined8 *)(lVar1 + 0x80) = uStack_40;
    *(undefined8 *)(lVar1 + 0x88) = local_38;
    *(undefined8 *)(lVar1 + 0x90) = uStack_30;
    *(undefined8 *)(lVar1 + 0x98) = local_28;
    *(undefined8 *)(lVar1 + 0xa0) = uStack_20;
    *(undefined8 *)(lVar1 + 0xa8) = local_18;
  }
  return;
}



// FUNCTION 140b47770 FUN_140b47770 body=65 status=ok
// SIG undefined FUN_140b47770(void)

undefined1 FUN_140b47770(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_14142bde0();
    lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x348) != '\0')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140b478c0 FUN_140b478c0 body=153 status=ok
// SIG undefined FUN_140b478c0(void)

longlong FUN_140b478c0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = (**(code **)(*param_3 + 0x408))(param_3);
  lVar1 = param_3[0x23];
  plVar4 = (longlong *)*param_2;
  plVar5 = plVar4 + (longlong)(int)param_2[1] * 2;
  while( true ) {
    if (plVar4 == plVar5) {
      return 0;
    }
    if (((*plVar4 == param_1) && (plVar4[1] != 0)) &&
       (cVar2 = FUN_142fe9e30(plVar4[1],lVar1,uVar3), cVar2 != '\0')) break;
    plVar4 = plVar4 + 2;
  }
  return plVar4[1];
}



// FUNCTION 140b47960 FUN_140b47960 body=328 status=ok
// SIG undefined FUN_140b47960(void)

longlong FUN_140b47960(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_20;
  longlong local_18 [2];
  
  if (param_1 != 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar2 = USoundNodeEnveloper::StaticClass();
    lVar3 = FUN_1417985e0(uVar2,param_1,0,0,0,0,0,0,0);
    if (lVar3 != 0) {
      uVar2 = FString::FString(local_58,param_2);
      puVar4 = (undefined8 *)FSoftObjectPath::FSoftObjectPath(local_48,uVar2);
      local_30 = 0xffffffff;
      local_2c = 0;
      local_20 = *puVar4;
      FString::FString(local_18,puVar4 + 1);
      if (puVar4[1] != 0) {
        FMemory::Free();
      }
      ULevelStreaming::SetWorldAsset(lVar3,&local_30);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      UWorld::AddStreamingLevel(param_1,lVar3);
      lVar5 = USoundNodeEnveloper::StaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 140b47ab0 AddUniqueImpl<FSoftObjectPath_const_&> body=104 status=ok
// SIG undefined AddUniqueImpl<FSoftObjectPath_const_&>(void)

ulonglong TArray<FSoftObjectPath,FDefaultAllocator>::AddUniqueImpl<FSoftObjectPath_const_&>
                    (longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = Find();
  if ((int)uVar3 == -1) {
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar2 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar2);
    }
    puVar1 = (undefined8 *)(*param_1 + (longlong)(int)uVar2 * 0x18);
    *puVar1 = *param_2;
    FString::FString(puVar1 + 1,param_2 + 1);
    uVar3 = (ulonglong)uVar2;
  }
  return uVar3;
}



// FUNCTION 140b47b20 FUN_140b47b20 body=217 status=ok
// SIG undefined FUN_140b47b20(void)

void FUN_140b47b20(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar4 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + iVar1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo();
      iVar4 = (int)param_1[1];
    }
    param_2 = (undefined8 *)*param_2;
    puVar3 = (undefined8 *)((longlong)iVar4 * 0x20 + *param_1);
    iVar4 = iVar1;
    do {
      *puVar3 = *param_2;
      *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(param_2 + 1);
      puVar3[2] = 0;
      iVar2 = *(int *)(param_2 + 3);
      _Src = (void *)param_2[2];
      *(int *)(puVar3 + 3) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
      }
      else {
        TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(puVar3 + 2,iVar2,0);
        _guard_xfg_dispatch_icall_nop((void *)puVar3[2],_Src,(longlong)iVar2 * 0x38);
      }
      puVar3 = puVar3 + 4;
      param_2 = param_2 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return;
}



// FUNCTION 140b47c00 FUN_140b47c00 body=484 status=ok
// SIG undefined FUN_140b47c00(void)

void FUN_140b47c00(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int *piVar11;
  int local_res10;
  
  iVar1 = (int)param_2[1];
  if (iVar1 != 0) {
    iVar10 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + iVar1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo();
      iVar10 = (int)param_1[1];
    }
    puVar9 = (undefined8 *)*param_2;
    piVar11 = (int *)(puVar9 + 10);
    puVar8 = (undefined8 *)((longlong)iVar10 * 0x60 + *param_1);
    puVar6 = (undefined4 *)((longlong)puVar8 + 0x2c);
    local_res10 = iVar1;
    do {
      *puVar8 = *puVar9;
      *(undefined8 *)(puVar6 + -9) = *(undefined8 *)(piVar11 + -0x12);
      *(undefined8 *)(puVar6 + -7) = *(undefined8 *)(piVar11 + -0x10);
      puVar6[-5] = piVar11[-0xe];
      *(undefined8 *)(puVar6 + -3) = 0;
      iVar10 = piVar11[-10];
      lVar3 = *(longlong *)(piVar11 + -0xc);
      puVar6[-1] = iVar10;
      if (iVar10 == 0) {
        *puVar6 = 0;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar6 + -3,iVar10,0);
        puVar5 = *(undefined1 **)(puVar6 + -3);
        puVar7 = (undefined8 *)(lVar3 + 8);
        do {
          *puVar5 = *(undefined1 *)(puVar7 + -1);
          *(undefined8 *)(puVar5 + 8) = 0;
          iVar2 = *(int *)(puVar7 + 1);
          pvVar4 = (void *)*puVar7;
          *(int *)(puVar5 + 0x10) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(puVar5 + 0x14) = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (puVar5 + 8,iVar2,0);
            _guard_xfg_dispatch_icall_nop(*(void **)(puVar5 + 8),pvVar4,(longlong)iVar2 << 3);
          }
          puVar5 = puVar5 + 0x18;
          puVar7 = puVar7 + 3;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      FUN_1409f3920(puVar6 + 1,piVar11 + -8);
      *(undefined8 *)(puVar6 + 7) = 0;
      iVar10 = *piVar11;
      pvVar4 = *(void **)(piVar11 + -2);
      puVar6[9] = iVar10;
      if (iVar10 == 0) {
        puVar6[10] = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar6 + 7,iVar10,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar6 + 7),pvVar4,(longlong)iVar10 << 3);
      }
      puVar8 = puVar8 + 0xc;
      *(char *)(puVar6 + 0xb) = (char)piVar11[2];
      puVar9 = puVar9 + 0xc;
      puVar5 = (undefined1 *)((longlong)piVar11 + 9);
      piVar11 = piVar11 + 0x18;
      *(undefined1 *)((longlong)puVar6 + 0x2d) = *puVar5;
      puVar6 = puVar6 + 0x18;
      local_res10 = local_res10 + -1;
    } while (local_res10 != 0);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return;
}



// FUNCTION 140b47df0 CopyToEmpty<FMovieSceneObjectPathChannelKeyValue> body=308 status=ok
// SIG undefined CopyToEmpty<FMovieSceneObjectPathChannelKeyValue>(void)

void TArray<FMovieSceneObjectPathChannelKeyValue,FDefaultAllocator>::
     CopyToEmpty<FMovieSceneObjectPathChannelKeyValue>
               (undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 local_40 [24];
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1,param_5 + param_3,param_4);
  puVar1 = (undefined4 *)*param_1;
  if (param_3 != 0) {
    puVar3 = (undefined4 *)(param_2 + 4);
    puVar2 = (undefined8 *)(puVar1 + 8);
    do {
      puVar2[-1] = 0;
      *puVar2 = 0;
      *puVar1 = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + -0x1c) = 0;
      puVar2[-2] = 0;
      *(undefined4 *)puVar2 = 0;
      if (0x7fffffff < *(uint *)((longlong)puVar2 + 4)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2 + -1,0);
      }
      if ((undefined2 *)puVar2[-1] != (undefined2 *)0x0) {
        *(undefined2 *)puVar2[-1] = 0;
      }
      *(undefined4 *)(puVar2 + -3) = 0;
      *puVar1 = puVar3[-1];
      *(undefined4 *)((longlong)puVar2 + -0x1c) = *puVar3;
      *(undefined4 *)(puVar2 + -3) = puVar3[1];
      FString::FString(local_40,puVar3 + 5);
      FSoftObjectPath::operator=(puVar2 + -2);
      puVar1 = puVar1 + 0xc;
      puVar2[1] = *(undefined8 *)(puVar3 + 9);
      puVar3 = puVar3 + 0xc;
      puVar2 = puVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140b47f30 Emplace<int,UItemDA_*___ptr64> body=63 status=ok
// SIG undefined Emplace<int,UItemDA_*___ptr64>(void)

longlong TMapBase<int,UItemDA_*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UItemDA_*___ptr64,0>_>
         ::Emplace<int,UItemDA_*___ptr64>(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  FUN_1404b9f20(param_1,local_res8,&local_18,0);
  return *param_1 + (longlong)local_res8[0] * 0x18 + 8;
}



// FUNCTION 140b47f70 FUN_140b47f70 body=62 status=ok
// SIG undefined FUN_140b47f70(void)

longlong FUN_140b47f70(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  FUN_140b482b0(param_1,local_res8,&local_18,0);
  return *param_1 + (longlong)local_res8[0] * 0x20 + 8;
}



// FUNCTION 140b47fb0 Emplace<int,UItemDA_*___ptr64> body=63 status=ok
// SIG undefined Emplace<int,UItemDA_*___ptr64>(void)

longlong TMapBase<int,UItemDA_*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UItemDA_*___ptr64,0>_>
         ::Emplace<int,UItemDA_*___ptr64>(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  FUN_140b48570(param_1,local_res8,&local_18,0);
  return *param_1 + (longlong)local_res8[0] * 0x18 + 8;
}



// FUNCTION 140b47ff0 FUN_140b47ff0 body=699 status=ok
// SIG undefined FUN_140b47ff0(void)

int * FUN_140b47ff0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  byte *pbVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  byte *_Src;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar8 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0xc);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0xc) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar11;
  lVar6 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  bVar16 = false;
  puVar14 = (uint *)((longlong)plVar7 + lVar6);
  *puVar14 = *puVar14 | 1 << ((byte)iVar11 & 0x1f);
  pbVar3 = (byte *)param_3[1];
  lVar1 = (longlong)iVar11 * 0xc;
  _Src = (byte *)(*param_1 + lVar1);
  bVar2 = *(byte *)*param_3;
  *_Src = bVar2;
  _Src[1] = *pbVar3;
  _Src[4] = 0xff;
  _Src[5] = 0xff;
  _Src[6] = 0xff;
  _Src[7] = 0xff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar10 = iVar15;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (ulonglong)bVar2) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(byte *)(*param_1 + (longlong)iVar9 * 0xc) == bVar2) break;
          iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0xc);
          iVar10 = iVar15;
        } while (iVar9 != -1);
      }
    }
    bVar16 = iVar10 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar10 * 0xc),_Src,2);
      bVar2 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0xc) = iVar11;
      }
      lVar4 = *param_1;
      *(undefined4 *)(lVar1 + lVar4) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar4) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar7 + lVar6);
      *puVar14 = *puVar14 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_140b48286;
    }
  }
  if (3 < uVar13) {
    uVar5 = (uVar13 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar15;
    }
    uVar5 = (uVar13 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar15;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar13 = (int)param_1[9] - 1U & (uint)*_Src;
    *(uint *)(_Src + 8) = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar13) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar13) * 4) = iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<unsigned_char,DefaultKeyFuncs<unsigned_char,0>,FDefaultSetAllocator>::Rehash(param_1);
  }
LAB_140b48286:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 140b482b0 FUN_140b482b0 body=692 status=ok
// SIG undefined FUN_140b482b0(void)

int * FUN_140b482b0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  char cVar15;
  uint uVar16;
  byte *_Src;
  uint *puVar17;
  int iVar18;
  bool bVar19;
  
  iVar10 = 1;
  iVar18 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar14 = (int)param_1[6];
    iVar12 = *(int *)((longlong)iVar14 * 0x20 + 4 + *param_1);
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar12;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)((longlong)iVar12 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar14;
  lVar8 = (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  bVar19 = false;
  puVar17 = (uint *)((longlong)plVar9 + lVar8);
  *puVar17 = *puVar17 | 1 << ((byte)iVar14 & 0x1f);
  puVar2 = (undefined4 *)param_3[1];
  lVar11 = (longlong)iVar14 * 0x20;
  _Src = (byte *)(*param_1 + lVar11);
  bVar1 = *(byte *)*param_3;
  *_Src = bVar1;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  *(undefined4 *)(_Src + 8) = *puVar2;
  *(undefined4 *)(_Src + 0xc) = uVar4;
  *(undefined4 *)(_Src + 0x10) = uVar5;
  *(undefined4 *)(_Src + 0x14) = uVar6;
  _Src[0x18] = 0xff;
  _Src[0x19] = 0xff;
  _Src[0x1a] = 0xff;
  _Src[0x1b] = 0xff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar16 != 1) {
    iVar13 = iVar18;
    if (uVar16 != 0) {
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (ulonglong)bVar1) * 4);
      if (iVar12 != -1) {
        do {
          iVar13 = iVar12;
          if (*(byte *)((longlong)iVar12 * 0x20 + *param_1) == bVar1) break;
          iVar12 = *(int *)((longlong)iVar12 * 0x20 + 0x18 + *param_1);
          iVar13 = iVar18;
        } while (iVar12 != -1);
      }
    }
    bVar19 = iVar13 != -1;
    if (bVar19) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar13 * 0x20 + *param_1),_Src,0x18);
      bVar1 = (byte)iVar14 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar14;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar11 + lVar3) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar18 = (int)param_1[6];
      }
      *(int *)(lVar11 + 4 + lVar3) = iVar18;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar14;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar13;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar17 = (uint *)((longlong)plVar9 + lVar8);
      *puVar17 = *puVar17 & ~(1 << bVar1 | 1U >> 0x20 - bVar1);
      goto LAB_140b4853f;
    }
  }
  if (3 < uVar16) {
    uVar7 = (uVar16 >> 1) + 8;
    iVar18 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    iVar10 = 0x20;
    if (uVar7 != 0) {
      iVar10 = 0x1f - iVar18;
    }
    uVar7 = (uVar16 >> 1) + 7;
    iVar18 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    if (uVar7 == 0) {
      cVar15 = '\0';
    }
    else {
      cVar15 = '\x1f' - (char)iVar18;
    }
    iVar10 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar15 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar16 = (int)param_1[9] - 1U & (uint)*_Src;
    *(uint *)(_Src + 0x1c) = uVar16;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x18) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar16) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar16) * 4) = iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<unsigned_char,TArray<FGuid,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FGuid,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140b4853f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar19;
  }
  return param_2;
}



// FUNCTION 140b48570 FUN_140b48570 body=772 status=ok
// SIG undefined FUN_140b48570(void)

uint * FUN_140b48570(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uVar17;
  bool bVar18;
  uint local_res8 [2];
  ulonglong *local_res10;
  
  iVar12 = 1;
  uVar17 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)(int)uVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = uVar11;
  local_res8[0] = local_res8[0] & 0xffffff00;
  lVar7 = (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar16 = (uint *)((longlong)plVar8 + lVar7);
  *puVar16 = *puVar16 | 1 << ((byte)uVar11 & 0x1f);
  puVar2 = (undefined1 *)param_3[1];
  lVar1 = (longlong)(int)uVar11 * 0x18;
  local_res10 = (ulonglong *)(*param_1 + lVar1);
  uVar3 = *(ulonglong *)*param_3;
  *local_res10 = uVar3;
  *(undefined1 *)(local_res10 + 1) = *puVar2;
  *(undefined4 *)(local_res10 + 2) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar15 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    uVar6 = local_res8[0];
    lVar10 = (longlong)(int)local_res8[0];
    bVar18 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar18);
    if (bVar18) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar10 * 0x18),local_res10,0x10);
      bVar4 = (byte)uVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = uVar11;
      }
      lVar10 = *param_1;
      *(undefined4 *)(lVar1 + lVar10) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar17 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar1 + 4 + lVar10) = uVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar11;
      plVar8 = (longlong *)param_1[4];
      *param_2 = uVar6;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar16 = (uint *)((longlong)plVar8 + lVar7);
      *puVar16 = *puVar16 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_140b48845;
    }
  }
  if (3 < uVar15) {
    uVar6 = (uVar15 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar9 = 0x20;
    cVar13 = '\0';
    if (uVar6 != 0) {
      iVar9 = 0x1f - iVar12;
    }
    uVar6 = (uVar15 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar13 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    iVar12 = (int)(*local_res10 >> 4);
    uVar6 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
    uVar14 = -(iVar12 + uVar6) ^ uVar6 >> 0xd;
    uVar15 = (iVar12 - uVar6) - uVar14 ^ uVar14 >> 0xc;
    uVar6 = (uVar6 - uVar15) - uVar14 ^ uVar15 << 0x10;
    uVar14 = (uVar14 - uVar6) - uVar15 ^ uVar6 >> 5;
    uVar15 = (uVar15 - uVar6) - uVar14 ^ uVar14 >> 3;
    uVar6 = (uVar6 - uVar15) - uVar14 ^ uVar15 << 10;
    uVar15 = ((uVar14 - uVar6) - uVar15 ^ uVar6 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_res10 + 0x14) = uVar15;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(local_res10 + 2) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(uint *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         uVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140b48845:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 140b48880 FUN_140b48880 body=265 status=ok
// SIG undefined FUN_140b48880(void)

longlong * FUN_140b48880(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar6 = (longlong *)*param_1;
  plVar1 = plVar6 + (int)param_1[1];
  do {
    if (plVar6 == plVar1) {
      return (longlong *)0x0;
    }
    lVar5 = *plVar6;
    if ((lVar5 != 0) && (lVar4 = *(longlong *)(lVar5 + 0x10), lVar4 != 0)) {
      if ((char)param_2[1] == '\0') {
        if (*param_2 != 0) {
          lVar3 = FUN_1414cefe0();
          lVar5 = *param_2;
          for (lVar2 = lVar5; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
            if (lVar2 == lVar3) goto LAB_140b48950;
          }
        }
        lVar5 = 0;
LAB_140b48950:
        bVar7 = lVar4 == lVar5;
      }
      else {
        if (*param_2 != 0) {
          lVar3 = FUN_1414cefe0();
          lVar4 = *param_2;
          for (lVar2 = lVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
            if (lVar2 == lVar3) goto LAB_140b48900;
          }
        }
        lVar4 = 0;
LAB_140b48900:
        for (lVar5 = *(longlong *)(lVar5 + 0x10); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
          if (lVar5 == lVar4) {
            bVar7 = true;
            goto LAB_140b48956;
          }
        }
        bVar7 = false;
      }
LAB_140b48956:
      if (bVar7) {
        return plVar6;
      }
    }
    plVar6 = plVar6 + 1;
  } while( true );
}



// FUNCTION 140b48990 FUN_140b48990 body=120 status=ok
// SIG undefined FUN_140b48990(void)

longlong FUN_140b48990(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = AGFreezeCharacterCue::GetPrivateStaticClass();
  plVar5 = *(longlong **)(param_1 + 0x1a0);
  plVar1 = plVar5 + *(int *)(param_1 + 0x1a8);
  do {
    if (plVar5 == plVar1) {
      return 0;
    }
    lVar2 = *plVar5;
    if (lVar2 != 0) {
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return lVar2;
      }
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 140b48a10 FUN_140b48a10 body=139 status=ok
// SIG undefined FUN_140b48a10(void)

longlong FUN_140b48a10(longlong param_1,longlong param_2)

{
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (((int)param_2 != 0) || ((int)((ulonglong)param_2 >> 0x20) != 0)) {
    if (param_1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(param_1 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    local_28 = param_1;
    FUN_14067b2b0(&local_28);
    while (local_20 != 0) {
      if (*(longlong *)(local_20 + 0x18) == param_2) {
        return local_20;
      }
      local_20 = *(longlong *)(local_20 + 0x28);
      FUN_14067b2b0(&local_28);
    }
  }
  return 0;
}



// FUNCTION 140b48aa0 FUN_140b48aa0 body=139 status=ok
// SIG undefined FUN_140b48aa0(void)

longlong FUN_140b48aa0(longlong param_1,longlong param_2)

{
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (((int)param_2 != 0) || ((int)((ulonglong)param_2 >> 0x20) != 0)) {
    if (param_1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(param_1 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    local_28 = param_1;
    FUN_140b61120(&local_28);
    while (local_20 != 0) {
      if (*(longlong *)(local_20 + 0x18) == param_2) {
        return local_20;
      }
      local_20 = *(longlong *)(local_20 + 0x28);
      FUN_140b61120(&local_28);
    }
  }
  return 0;
}



// FUNCTION 140b48b30 FUN_140b48b30 body=478 status=ok
// SIG undefined FUN_140b48b30(void)

/* WARNING: Removing unreachable block (ram,0x000140b48d05) */
/* WARNING: Removing unreachable block (ram,0x000140b48c8e) */

longlong FUN_140b48b30(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(param_1 + 0x48);
  lVar9 = (longlong)iVar8;
  lVar6 = 0;
  if (0 < iVar8) {
    lVar10 = lVar9 * 8;
    lVar7 = lVar6;
    lVar5 = lVar9;
    do {
      iVar8 = iVar8 + -1;
      lVar10 = lVar10 + -8;
      lVar5 = lVar5 + -1;
      if ((lVar5 < 0) || (*(int *)(param_1 + 0x48) <= iVar8)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) &&
          (plVar1 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x40)),
          plVar1 != (longlong *)0x0)) && (lVar3 = (**(code **)(*plVar1 + 0x278))(), lVar3 != 0)) {
        lVar4 = UEditableTextBoxWidgetStyle::StaticClass();
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
          lVar6 = UEditableTextBoxWidgetStyle::StaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar3;
          }
          return 0;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  iVar8 = *(int *)(param_1 + 0x98);
  if (0 < (longlong)iVar8) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + lVar6 * 8);
      if ((plVar1 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar1 + 0x278))(), lVar9 != 0)) {
        lVar10 = UEditableTextBoxWidgetStyle::StaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = UEditableTextBoxWidgetStyle::StaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar9;
          }
          return 0;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar8);
  }
  return 0;
}



// FUNCTION 140b48d10 HeapSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_> body=395 status=ok
// SIG undefined HeapSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
               (undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar4 = (param_2 + -2) / 2;
  if (-1 < iVar4) {
    iVar5 = iVar4 * 2 + 1;
    iVar2 = iVar5;
    iVar7 = iVar4;
joined_r0x000140b48d56:
    do {
      if (iVar5 < param_2) {
        iVar5 = iVar4 * 2;
        iVar6 = iVar5 + 1;
        if (iVar5 + 2 < param_2) {
          cVar3 = FUN_140b4f4d0(param_4,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
          if (cVar3 != '\0') {
            iVar6 = iVar5;
          }
          iVar6 = iVar6 + 1;
        }
        cVar3 = FUN_140b4f4d0(param_4,param_1[iVar4],param_1[iVar6]);
        if (cVar3 != '\0') {
          uVar1 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar6];
          iVar5 = iVar6 * 2 + 1;
          param_1[iVar6] = uVar1;
          iVar4 = iVar6;
          goto joined_r0x000140b48d56;
        }
      }
      iVar5 = iVar2 + -2;
      iVar4 = iVar7 + -1;
      iVar2 = iVar5;
      iVar7 = iVar4;
    } while (-1 < iVar4);
  }
  param_2 = param_2 + -1;
  lVar8 = (longlong)param_2;
  if (0 < param_2) {
    do {
      iVar4 = 0;
      uVar1 = *param_1;
      *param_1 = param_1[lVar8];
      param_1[lVar8] = uVar1;
      if (1 < param_2) {
        do {
          iVar2 = iVar4 * 2;
          iVar5 = iVar2 + 1;
          if (iVar2 + 2 < param_2) {
            cVar3 = FUN_140b4f4d0(param_4,param_1[(longlong)iVar2 + 2],param_1[iVar5]);
            if (cVar3 != '\0') {
              iVar5 = iVar2;
            }
            iVar5 = iVar5 + 1;
          }
          cVar3 = FUN_140b4f4d0(param_4,param_1[iVar4],param_1[iVar5]);
          if (cVar3 == '\0') break;
          uVar1 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar5];
          param_1[iVar5] = uVar1;
          iVar4 = iVar5;
        } while (iVar5 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar8 = lVar8 + -1;
    } while (0 < lVar8);
  }
  return;
}



// FUNCTION 140b48ea0 FUN_140b48ea0 body=540 status=ok
// SIG undefined FUN_140b48ea0(void)

void FUN_140b48ea0(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  iVar11 = (param_2 + -2) / 2;
  if (-1 < iVar11) {
    iVar12 = iVar11 * 2 + 1;
    iVar1 = iVar12;
    iVar14 = iVar11;
joined_r0x000140b48eca:
    do {
      if (iVar12 < param_2) {
        iVar12 = iVar11 * 2;
        iVar13 = iVar12 + 1;
        if (iVar12 + 2 < param_2) {
          if (*(int *)((longlong)iVar12 * 0x40 + 0xbc + (longlong)param_1) <
              *(int *)((longlong)iVar13 * 0x40 + 0x3c + (longlong)param_1)) {
            iVar13 = iVar12;
          }
          iVar13 = iVar13 + 1;
        }
        puVar15 = param_1 + (longlong)iVar13 * 8;
        puVar16 = param_1 + (longlong)iVar11 * 8;
        if (*(int *)((longlong)puVar16 + 0x3c) < *(int *)((longlong)puVar15 + 0x3c)) {
          if (puVar16 != puVar15) {
            uVar2 = puVar15[1];
            uVar3 = *puVar16;
            uVar4 = puVar16[1];
            uVar5 = puVar16[2];
            uVar6 = puVar16[3];
            uVar7 = puVar16[4];
            uVar8 = puVar16[5];
            uVar9 = puVar16[6];
            uVar10 = puVar16[7];
            *puVar16 = *puVar15;
            puVar16[1] = uVar2;
            uVar2 = puVar15[3];
            puVar16[2] = puVar15[2];
            puVar16[3] = uVar2;
            uVar2 = puVar15[5];
            puVar16[4] = puVar15[4];
            puVar16[5] = uVar2;
            uVar2 = puVar15[7];
            puVar16[6] = puVar15[6];
            puVar16[7] = uVar2;
            *puVar15 = uVar3;
            puVar15[1] = uVar4;
            puVar15[2] = uVar5;
            puVar15[3] = uVar6;
            puVar15[4] = uVar7;
            puVar15[5] = uVar8;
            puVar15[6] = uVar9;
            puVar15[7] = uVar10;
          }
          iVar12 = iVar13 * 2 + 1;
          iVar11 = iVar13;
          goto joined_r0x000140b48eca;
        }
      }
      iVar12 = iVar1 + -2;
      iVar11 = iVar14 + -1;
      iVar1 = iVar12;
      iVar14 = iVar11;
    } while (-1 < iVar11);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar15 = param_1 + (longlong)param_2 * 8;
    do {
      if (param_1 != puVar15) {
        uVar2 = puVar15[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        uVar7 = param_1[4];
        uVar8 = param_1[5];
        uVar9 = param_1[6];
        uVar10 = param_1[7];
        *param_1 = *puVar15;
        param_1[1] = uVar2;
        uVar2 = puVar15[3];
        param_1[2] = puVar15[2];
        param_1[3] = uVar2;
        uVar2 = puVar15[5];
        param_1[4] = puVar15[4];
        param_1[5] = uVar2;
        uVar2 = puVar15[7];
        param_1[6] = puVar15[6];
        param_1[7] = uVar2;
        *puVar15 = uVar3;
        puVar15[1] = uVar4;
        puVar15[2] = uVar5;
        puVar15[3] = uVar6;
        puVar15[4] = uVar7;
        puVar15[5] = uVar8;
        puVar15[6] = uVar9;
        puVar15[7] = uVar10;
      }
      iVar11 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar11 * 2;
          iVar12 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(int *)((longlong)iVar1 * 0x40 + 0xbc + (longlong)param_1) <
                *(int *)((longlong)iVar12 * 0x40 + 0x3c + (longlong)param_1)) {
              iVar12 = iVar1;
            }
            iVar12 = iVar12 + 1;
          }
          puVar16 = param_1 + (longlong)iVar12 * 8;
          puVar17 = param_1 + (longlong)iVar11 * 8;
          if (*(int *)((longlong)puVar16 + 0x3c) <= *(int *)((longlong)puVar17 + 0x3c)) break;
          if (puVar17 != puVar16) {
            uVar2 = puVar16[1];
            uVar3 = *puVar17;
            uVar4 = puVar17[1];
            uVar5 = puVar17[2];
            uVar6 = puVar17[3];
            uVar7 = puVar17[4];
            uVar8 = puVar17[5];
            uVar9 = puVar17[6];
            uVar10 = puVar17[7];
            *puVar17 = *puVar16;
            puVar17[1] = uVar2;
            uVar2 = puVar16[3];
            puVar17[2] = puVar16[2];
            puVar17[3] = uVar2;
            uVar2 = puVar16[5];
            puVar17[4] = puVar16[4];
            puVar17[5] = uVar2;
            uVar2 = puVar16[7];
            puVar17[6] = puVar16[6];
            puVar17[7] = uVar2;
            *puVar16 = uVar3;
            puVar16[1] = uVar4;
            puVar16[2] = uVar5;
            puVar16[3] = uVar6;
            puVar16[4] = uVar7;
            puVar16[5] = uVar8;
            puVar16[6] = uVar9;
            puVar16[7] = uVar10;
          }
          iVar11 = iVar12;
        } while (iVar12 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar15 = puVar15 + -8;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 140b490c0 FUN_140b490c0 body=973 status=ok
// SIG undefined FUN_140b490c0(void)

void FUN_140b490c0(undefined8 *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  bool bVar23;
  
  iVar15 = (param_2 + -2) / 2;
  if (-1 < iVar15) {
    iVar16 = iVar15 * 2 + 1;
    iVar5 = iVar16;
    iVar19 = iVar15;
joined_r0x000140b490f5:
    do {
      if (iVar16 < param_2) {
        iVar16 = iVar15 * 2;
        iVar18 = iVar16 + 1;
        if (iVar16 + 2 < param_2) {
          lVar17 = (longlong)iVar16 + 2;
          cVar2 = *(char *)((longlong)param_1 + lVar17 * 0x40 + 0x35);
          if (cVar2 == '\x01') {
            bVar23 = true;
          }
          else {
            cVar3 = *(char *)((longlong)param_1 + (longlong)iVar18 * 0x40 + 0x35);
            if (cVar3 == '\x01') {
              bVar23 = false;
            }
            else if (cVar2 == '\x02') {
              bVar23 = true;
            }
            else if (cVar3 == '\x02') {
              bVar23 = false;
            }
            else {
              cVar2 = *(char *)(param_1 + lVar17 * 8 + 4);
              if (cVar2 == *(char *)(param_1 + (longlong)iVar18 * 8 + 4)) {
                iVar4 = *(int *)((longlong)param_1 + lVar17 * 0x40 + 0x1c);
                iVar1 = *(int *)((longlong)param_1 + (longlong)iVar18 * 0x40 + 0x1c);
                if (iVar4 == iVar1) {
                  if (cVar2 == '\0') {
                    if (*(int *)(param_1 + (longlong)iVar18 * 8 + 3) <
                        *(int *)(param_1 + lVar17 * 8 + 3)) {
                      bVar23 = true;
                    }
                    else {
                      if (*(int *)(param_1 + (longlong)iVar18 * 8 + 3) <=
                          *(int *)(param_1 + lVar17 * 8 + 3)) goto LAB_140b49198;
                      bVar23 = false;
                    }
                  }
                  else {
LAB_140b49198:
                    bVar23 = *(int *)((longlong)param_1 + lVar17 * 0x40 + 0x3c) <
                             *(int *)((longlong)param_1 + (longlong)iVar18 * 0x40 + 0x3c);
                  }
                }
                else {
                  bVar23 = iVar1 <= iVar4;
                }
              }
              else {
                bVar23 = cVar2 == '\0';
              }
            }
          }
          if (bVar23) {
            iVar18 = iVar16;
          }
          iVar18 = iVar18 + 1;
        }
        puVar21 = param_1 + (longlong)iVar15 * 8;
        puVar20 = param_1 + (longlong)iVar18 * 8;
        if (*(char *)((longlong)puVar21 + 0x35) == '\x01') {
LAB_140b49220:
          if (puVar21 != puVar20) {
            uVar6 = puVar20[1];
            uVar7 = *puVar21;
            uVar8 = puVar21[1];
            uVar9 = puVar21[2];
            uVar10 = puVar21[3];
            uVar11 = puVar21[4];
            uVar12 = puVar21[5];
            uVar13 = puVar21[6];
            uVar14 = puVar21[7];
            *puVar21 = *puVar20;
            puVar21[1] = uVar6;
            uVar6 = puVar20[3];
            puVar21[2] = puVar20[2];
            puVar21[3] = uVar6;
            uVar6 = puVar20[5];
            puVar21[4] = puVar20[4];
            puVar21[5] = uVar6;
            uVar6 = puVar20[7];
            puVar21[6] = puVar20[6];
            puVar21[7] = uVar6;
            *puVar20 = uVar7;
            puVar20[1] = uVar8;
            puVar20[2] = uVar9;
            puVar20[3] = uVar10;
            puVar20[4] = uVar11;
            puVar20[5] = uVar12;
            puVar20[6] = uVar13;
            puVar20[7] = uVar14;
          }
          iVar16 = iVar18 * 2 + 1;
          iVar15 = iVar18;
          goto joined_r0x000140b490f5;
        }
        if (*(char *)((longlong)puVar20 + 0x35) != '\x01') {
          if (*(char *)((longlong)puVar21 + 0x35) == '\x02') goto LAB_140b49220;
          if (*(char *)((longlong)puVar20 + 0x35) != '\x02') {
            cVar2 = *(char *)(puVar21 + 4);
            if (cVar2 == *(char *)(puVar20 + 4)) {
              if (*(int *)((longlong)puVar21 + 0x1c) == *(int *)((longlong)puVar20 + 0x1c)) {
                if (cVar2 == '\0') {
                  if (*(int *)(puVar20 + 3) < *(int *)(puVar21 + 3)) goto LAB_140b49220;
                  if (*(int *)(puVar21 + 3) < *(int *)(puVar20 + 3)) goto LAB_140b4927a;
                }
                bVar23 = *(int *)((longlong)puVar21 + 0x3c) < *(int *)((longlong)puVar20 + 0x3c);
              }
              else {
                bVar23 = *(int *)((longlong)puVar20 + 0x1c) <= *(int *)((longlong)puVar21 + 0x1c);
              }
            }
            else {
              bVar23 = cVar2 == '\0';
            }
            if (bVar23) goto LAB_140b49220;
          }
        }
      }
LAB_140b4927a:
      iVar16 = iVar5 + -2;
      iVar15 = iVar19 + -1;
      iVar5 = iVar16;
      iVar19 = iVar15;
    } while (-1 < iVar15);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar20 = param_1 + (longlong)param_2 * 8;
    do {
      if (param_1 != puVar20) {
        uVar6 = puVar20[1];
        uVar7 = *param_1;
        uVar8 = param_1[1];
        uVar9 = param_1[2];
        uVar10 = param_1[3];
        uVar11 = param_1[4];
        uVar12 = param_1[5];
        uVar13 = param_1[6];
        uVar14 = param_1[7];
        *param_1 = *puVar20;
        param_1[1] = uVar6;
        uVar6 = puVar20[3];
        param_1[2] = puVar20[2];
        param_1[3] = uVar6;
        uVar6 = puVar20[5];
        param_1[4] = puVar20[4];
        param_1[5] = uVar6;
        uVar6 = puVar20[7];
        param_1[6] = puVar20[6];
        param_1[7] = uVar6;
        *puVar20 = uVar7;
        puVar20[1] = uVar8;
        puVar20[2] = uVar9;
        puVar20[3] = uVar10;
        puVar20[4] = uVar11;
        puVar20[5] = uVar12;
        puVar20[6] = uVar13;
        puVar20[7] = uVar14;
      }
      iVar15 = 0;
      if (1 < param_2) {
        do {
          iVar5 = iVar15 * 2;
          iVar16 = iVar5 + 1;
          if (iVar5 + 2 < param_2) {
            lVar17 = (longlong)iVar5 + 2;
            cVar2 = *(char *)((longlong)param_1 + lVar17 * 0x40 + 0x35);
            if (cVar2 == '\x01') {
              bVar23 = true;
            }
            else {
              cVar3 = *(char *)((longlong)param_1 + (longlong)iVar16 * 0x40 + 0x35);
              if (cVar3 == '\x01') {
                bVar23 = false;
              }
              else if (cVar2 == '\x02') {
                bVar23 = true;
              }
              else if (cVar3 == '\x02') {
                bVar23 = false;
              }
              else {
                cVar2 = *(char *)(param_1 + lVar17 * 8 + 4);
                if (cVar2 == *(char *)(param_1 + (longlong)iVar16 * 8 + 4)) {
                  iVar18 = *(int *)((longlong)param_1 + lVar17 * 0x40 + 0x1c);
                  iVar19 = *(int *)((longlong)param_1 + (longlong)iVar16 * 0x40 + 0x1c);
                  if (iVar18 == iVar19) {
                    if (cVar2 == '\0') {
                      if (*(int *)(param_1 + (longlong)iVar16 * 8 + 3) <
                          *(int *)(param_1 + lVar17 * 8 + 3)) {
                        bVar23 = true;
                      }
                      else {
                        if (*(int *)(param_1 + (longlong)iVar16 * 8 + 3) <=
                            *(int *)(param_1 + lVar17 * 8 + 3)) goto LAB_140b49398;
                        bVar23 = false;
                      }
                    }
                    else {
LAB_140b49398:
                      bVar23 = *(int *)((longlong)param_1 + lVar17 * 0x40 + 0x3c) <
                               *(int *)((longlong)param_1 + (longlong)iVar16 * 0x40 + 0x3c);
                    }
                  }
                  else {
                    bVar23 = iVar19 <= iVar18;
                  }
                }
                else {
                  bVar23 = cVar2 == '\0';
                }
              }
            }
            if (bVar23) {
              iVar16 = iVar5;
            }
            iVar16 = iVar16 + 1;
          }
          puVar22 = param_1 + (longlong)iVar15 * 8;
          puVar21 = param_1 + (longlong)iVar16 * 8;
          if (*(char *)((longlong)puVar22 + 0x35) != '\x01') {
            if (*(char *)((longlong)puVar21 + 0x35) == '\x01') break;
            if (*(char *)((longlong)puVar22 + 0x35) != '\x02') {
              if (*(char *)((longlong)puVar21 + 0x35) == '\x02') break;
              cVar2 = *(char *)(puVar22 + 4);
              if (cVar2 == *(char *)(puVar21 + 4)) {
                if (*(int *)((longlong)puVar22 + 0x1c) == *(int *)((longlong)puVar21 + 0x1c)) {
                  if (cVar2 == '\0') {
                    if (*(int *)(puVar21 + 3) < *(int *)(puVar22 + 3)) goto LAB_140b49420;
                    if (*(int *)(puVar22 + 3) < *(int *)(puVar21 + 3)) break;
                  }
                  bVar23 = *(int *)((longlong)puVar22 + 0x3c) < *(int *)((longlong)puVar21 + 0x3c);
                }
                else {
                  bVar23 = *(int *)((longlong)puVar21 + 0x1c) <= *(int *)((longlong)puVar22 + 0x1c);
                }
              }
              else {
                bVar23 = cVar2 == '\0';
              }
              if (!bVar23) break;
            }
          }
LAB_140b49420:
          if (puVar22 != puVar21) {
            uVar6 = puVar21[1];
            uVar7 = *puVar22;
            uVar8 = puVar22[1];
            uVar9 = puVar22[2];
            uVar10 = puVar22[3];
            uVar11 = puVar22[4];
            uVar12 = puVar22[5];
            uVar13 = puVar22[6];
            uVar14 = puVar22[7];
            *puVar22 = *puVar21;
            puVar22[1] = uVar6;
            uVar6 = puVar21[3];
            puVar22[2] = puVar21[2];
            puVar22[3] = uVar6;
            uVar6 = puVar21[5];
            puVar22[4] = puVar21[4];
            puVar22[5] = uVar6;
            uVar6 = puVar21[7];
            puVar22[6] = puVar21[6];
            puVar22[7] = uVar6;
            *puVar21 = uVar7;
            puVar21[1] = uVar8;
            puVar21[2] = uVar9;
            puVar21[3] = uVar10;
            puVar21[4] = uVar11;
            puVar21[5] = uVar12;
            puVar21[6] = uVar13;
            puVar21[7] = uVar14;
          }
          iVar15 = iVar16;
        } while (iVar16 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar20 = puVar20 + -8;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 140b49490 IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_> body=681 status=ok
// SIG undefined IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar11);
    local_338 = (undefined4)(longlong)(fVar11 + fVar11);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar7 = &local_348;
    do {
      puVar5 = (undefined8 *)*plVar7;
      puVar4 = (undefined8 *)plVar7[1];
      local_358 = plVar7[2];
      lVar3 = ((longlong)puVar4 - (longlong)puVar5 >> 3) + 1;
      puVar10 = puVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_140b49570:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          puVar8 = puVar4 + 1;
          uVar1 = puVar10[lVar3 >> 1];
          puVar10[lVar3 >> 1] = *puVar10;
          *puVar10 = uVar1;
          puVar5 = puVar10;
LAB_140b495a0:
          puVar5 = puVar5 + 1;
          if (puVar5 <= puVar4) goto code_r0x000140b495a9;
          goto LAB_140b495c0;
        }
        for (; puVar8 = puVar10, puVar5 = puVar10, puVar10 < puVar4; puVar4 = puVar4 + -1) {
          while (puVar5 = puVar5 + 1, puVar5 <= puVar4) {
            cVar2 = FUN_140b4f4d0(param_4,*puVar8,*puVar5);
            if (cVar2 != '\0') {
              puVar8 = puVar5;
            }
          }
          uVar1 = *puVar8;
          *puVar8 = *puVar4;
          *puVar4 = uVar1;
        }
        goto LAB_140b49685;
      }
LAB_140b49676:
      HeapSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
                (puVar5,lVar3,param_3,param_4);
LAB_140b49685:
      plVar7 = plVar7 + -3;
    } while (&local_348 <= plVar7);
  }
  return;
code_r0x000140b495a9:
  cVar2 = FUN_140b4f4d0(param_4,*puVar10,*puVar5);
  if (cVar2 == '\0') goto LAB_140b495a0;
LAB_140b495c0:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -1;
    if (puVar8 <= puVar10) break;
    cVar2 = FUN_140b4f4d0(param_4,*puVar8,*puVar10);
  } while (cVar2 == '\0');
  if (puVar5 <= puVar8) {
    uVar1 = *puVar5;
    *puVar5 = *puVar8;
    *puVar8 = uVar1;
    goto LAB_140b495a0;
  }
  uVar1 = *puVar10;
  iVar6 = iVar6 + -1;
  *puVar10 = *puVar8;
  *puVar8 = uVar1;
  if ((longlong)((longlong)puVar8 + (-8 - (longlong)puVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar4 - (longlong)puVar5 & 0xfffffffffffffff8U)) {
    if (puVar5 < puVar4) {
      *plVar7 = (longlong)puVar5;
      plVar7[1] = (longlong)puVar4;
      *(int *)(plVar7 + 2) = iVar6;
      plVar7 = plVar7 + 3;
    }
    if (puVar8 <= puVar10 + 1) goto LAB_140b49685;
    puVar4 = puVar9 + -2;
    puVar5 = puVar10;
  }
  else {
    if (puVar10 + 1 < puVar8) {
      *plVar7 = (longlong)puVar10;
      plVar7[1] = (longlong)(puVar9 + -2);
      *(int *)(plVar7 + 2) = iVar6;
      plVar7 = plVar7 + 3;
    }
    if (puVar4 <= puVar5) goto LAB_140b49685;
  }
  lVar3 = ((longlong)puVar4 - (longlong)puVar5 >> 3) + 1;
  puVar10 = puVar5;
  if (iVar6 == 0) goto LAB_140b49676;
  goto LAB_140b49570;
}



// FUNCTION 140b49740 FUN_140b49740 body=861 status=ok
// SIG undefined FUN_140b49740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b49740(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  float fVar27;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x40 + -0x40 + param_1;
    fVar27 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar27 = fVar27 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar27 = _guard_xfg_dispatch_icall_nop(fVar27);
    local_318 = (undefined4)(longlong)(fVar27 + fVar27);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar21 = &local_328;
    do {
      puVar26 = (undefined8 *)*plVar21;
      puVar24 = (undefined8 *)plVar21[1];
      lVar2 = plVar21[2];
      local_338._0_4_ = (int)lVar2;
      lVar19 = ((longlong)puVar24 - (longlong)puVar26 >> 6) + 1;
      puVar25 = puVar26;
      if ((int)local_338 != 0) {
LAB_140b49810:
        if (8 < lVar19) {
          puVar26 = puVar25 + (lVar19 / 2) * 8;
          if (puVar26 != puVar25) {
            uVar10 = puVar25[1];
            uVar3 = *(undefined4 *)puVar26;
            uVar4 = *(undefined4 *)((longlong)puVar26 + 4);
            uVar5 = *(undefined4 *)(puVar26 + 1);
            uVar6 = *(undefined4 *)((longlong)puVar26 + 0xc);
            uVar11 = puVar26[2];
            uVar12 = puVar26[3];
            uVar13 = puVar26[4];
            uVar14 = puVar26[5];
            uVar15 = puVar26[6];
            uVar16 = puVar26[7];
            *puVar26 = *puVar25;
            puVar26[1] = uVar10;
            uVar10 = puVar25[3];
            puVar26[2] = puVar25[2];
            puVar26[3] = uVar10;
            uVar7 = *(undefined4 *)((longlong)puVar25 + 0x24);
            uVar8 = *(undefined4 *)(puVar25 + 5);
            uVar9 = *(undefined4 *)((longlong)puVar25 + 0x2c);
            *(undefined4 *)(puVar26 + 4) = *(undefined4 *)(puVar25 + 4);
            *(undefined4 *)((longlong)puVar26 + 0x24) = uVar7;
            *(undefined4 *)(puVar26 + 5) = uVar8;
            *(undefined4 *)((longlong)puVar26 + 0x2c) = uVar9;
            uVar10 = puVar25[7];
            puVar26[6] = puVar25[6];
            puVar26[7] = uVar10;
            *(undefined4 *)puVar25 = uVar3;
            *(undefined4 *)((longlong)puVar25 + 4) = uVar4;
            *(undefined4 *)(puVar25 + 1) = uVar5;
            *(undefined4 *)((longlong)puVar25 + 0xc) = uVar6;
            puVar25[2] = uVar11;
            puVar25[3] = uVar12;
            puVar25[4] = uVar13;
            puVar25[5] = uVar14;
            puVar25[6] = uVar15;
            puVar25[7] = uVar16;
          }
          puVar22 = puVar24 + 8;
          puVar26 = puVar25;
LAB_140b49880:
          puVar20 = puVar26;
          puVar26 = puVar20 + 8;
          if (puVar26 <= puVar24) goto code_r0x000140b49889;
          goto LAB_140b49892;
        }
        for (; puVar26 = puVar25, puVar22 = puVar25, puVar25 < puVar24; puVar24 = puVar24 + -8) {
          while (puVar20 = puVar26, puVar26 = puVar22 + 8, puVar26 <= puVar24) {
            piVar1 = (int *)((longlong)puVar22 + 0x7c);
            puVar22 = puVar26;
            if (*piVar1 <= *(int *)((longlong)puVar20 + 0x3c)) {
              puVar26 = puVar20;
            }
          }
          if (puVar20 != puVar24) {
            uVar10 = puVar24[1];
            uVar11 = *puVar20;
            uVar12 = puVar20[1];
            uVar13 = puVar20[2];
            uVar14 = puVar20[3];
            uVar15 = puVar20[4];
            uVar16 = puVar20[5];
            uVar17 = puVar20[6];
            uVar18 = puVar20[7];
            *puVar20 = *puVar24;
            puVar20[1] = uVar10;
            uVar10 = puVar24[3];
            puVar20[2] = puVar24[2];
            puVar20[3] = uVar10;
            uVar10 = puVar24[5];
            puVar20[4] = puVar24[4];
            puVar20[5] = uVar10;
            uVar10 = puVar24[7];
            puVar20[6] = puVar24[6];
            puVar20[7] = uVar10;
            *puVar24 = uVar11;
            puVar24[1] = uVar12;
            puVar24[2] = uVar13;
            puVar24[3] = uVar14;
            puVar24[4] = uVar15;
            puVar24[5] = uVar16;
            puVar24[6] = uVar17;
            puVar24[7] = uVar18;
          }
        }
        goto LAB_140b499cf;
      }
LAB_140b499c0:
      local_338 = lVar2;
      FUN_140b48ea0(puVar26,lVar19,param_3,param_4);
LAB_140b499cf:
      plVar21 = plVar21 + -3;
    } while (&local_328 <= plVar21);
  }
  return;
code_r0x000140b49889:
  if (*(int *)((longlong)puVar20 + 0x7c) <= *(int *)((longlong)puVar25 + 0x3c)) goto LAB_140b49880;
LAB_140b49892:
  do {
    puVar23 = puVar22;
    puVar22 = puVar23 + -8;
    if (puVar22 <= puVar25) break;
  } while (*(int *)((longlong)puVar25 + 0x3c) <= *(int *)((longlong)puVar23 + -4));
  if (puVar26 <= puVar22) {
    if (puVar26 != puVar22) {
      uVar10 = puVar23[-7];
      uVar3 = *(undefined4 *)puVar26;
      uVar4 = *(undefined4 *)((longlong)puVar20 + 0x44);
      uVar5 = *(undefined4 *)(puVar20 + 9);
      uVar6 = *(undefined4 *)((longlong)puVar20 + 0x4c);
      uVar11 = puVar20[10];
      uVar12 = puVar20[0xb];
      uVar13 = puVar20[0xc];
      uVar14 = puVar20[0xd];
      uVar15 = puVar20[0xe];
      uVar16 = puVar20[0xf];
      *puVar26 = *puVar22;
      puVar20[9] = uVar10;
      uVar10 = puVar23[-5];
      puVar20[10] = puVar23[-6];
      puVar20[0xb] = uVar10;
      uVar7 = *(undefined4 *)((longlong)puVar23 + -0x1c);
      uVar8 = *(undefined4 *)(puVar23 + -3);
      uVar9 = *(undefined4 *)((longlong)puVar23 + -0x14);
      *(undefined4 *)(puVar20 + 0xc) = *(undefined4 *)(puVar23 + -4);
      *(undefined4 *)((longlong)puVar20 + 100) = uVar7;
      *(undefined4 *)(puVar20 + 0xd) = uVar8;
      *(undefined4 *)((longlong)puVar20 + 0x6c) = uVar9;
      uVar10 = puVar23[-1];
      puVar20[0xe] = puVar23[-2];
      puVar20[0xf] = uVar10;
      *(undefined4 *)puVar22 = uVar3;
      *(undefined4 *)((longlong)puVar23 + -0x3c) = uVar4;
      *(undefined4 *)(puVar23 + -7) = uVar5;
      *(undefined4 *)((longlong)puVar23 + -0x34) = uVar6;
      puVar23[-6] = uVar11;
      puVar23[-5] = uVar12;
      puVar23[-4] = uVar13;
      puVar23[-3] = uVar14;
      puVar23[-2] = uVar15;
      puVar23[-1] = uVar16;
    }
    goto LAB_140b49880;
  }
  if (puVar25 != puVar22) {
    uVar10 = puVar23[-7];
    uVar3 = *(undefined4 *)puVar25;
    uVar4 = *(undefined4 *)((longlong)puVar25 + 4);
    uVar5 = *(undefined4 *)(puVar25 + 1);
    uVar6 = *(undefined4 *)((longlong)puVar25 + 0xc);
    uVar11 = puVar25[2];
    uVar12 = puVar25[3];
    uVar13 = puVar25[4];
    uVar14 = puVar25[5];
    uVar15 = puVar25[6];
    uVar16 = puVar25[7];
    *puVar25 = *puVar22;
    puVar25[1] = uVar10;
    uVar10 = puVar23[-5];
    puVar25[2] = puVar23[-6];
    puVar25[3] = uVar10;
    uVar7 = *(undefined4 *)((longlong)puVar23 + -0x1c);
    uVar8 = *(undefined4 *)(puVar23 + -3);
    uVar9 = *(undefined4 *)((longlong)puVar23 + -0x14);
    *(undefined4 *)(puVar25 + 4) = *(undefined4 *)(puVar23 + -4);
    *(undefined4 *)((longlong)puVar25 + 0x24) = uVar7;
    *(undefined4 *)(puVar25 + 5) = uVar8;
    *(undefined4 *)((longlong)puVar25 + 0x2c) = uVar9;
    uVar10 = puVar23[-1];
    puVar25[6] = puVar23[-2];
    puVar25[7] = uVar10;
    *(undefined4 *)puVar22 = uVar3;
    *(undefined4 *)((longlong)puVar23 + -0x3c) = uVar4;
    *(undefined4 *)(puVar23 + -7) = uVar5;
    *(undefined4 *)((longlong)puVar23 + -0x34) = uVar6;
    puVar23[-6] = uVar11;
    puVar23[-5] = uVar12;
    puVar23[-4] = uVar13;
    puVar23[-3] = uVar14;
    puVar23[-2] = uVar15;
    puVar23[-1] = uVar16;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar22 + (-0x40 - (longlong)puVar25) & 0xffffffffffffffc0U) <
      (longlong)((longlong)puVar24 - (longlong)puVar26 & 0xffffffffffffffc0U)) {
    if (puVar26 < puVar24) {
      *plVar21 = (longlong)puVar26;
      plVar21[1] = (longlong)puVar24;
      *(int *)(plVar21 + 2) = (int)local_338;
      plVar21 = plVar21 + 3;
    }
    if (puVar22 <= puVar25 + 8) goto LAB_140b499cf;
    puVar24 = puVar23 + -0x10;
    puVar26 = puVar25;
  }
  else {
    if (puVar25 + 8 < puVar22) {
      *plVar21 = (longlong)puVar25;
      plVar21[1] = (longlong)(puVar23 + -0x10);
      *(int *)(plVar21 + 2) = (int)local_338;
      plVar21 = plVar21 + 3;
    }
    if (puVar24 <= puVar26) goto LAB_140b499cf;
  }
  lVar19 = ((longlong)puVar24 - (longlong)puVar26 >> 6) + 1;
  puVar25 = puVar26;
  if ((int)local_338 == 0) goto LAB_140b499c0;
  goto LAB_140b49810;
}



// FUNCTION 140b49aa0 FUN_140b49aa0 body=1144 status=ok
// SIG undefined FUN_140b49aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b49aa0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x40 + -0x40 + param_1;
    fVar28 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar28 = fVar28 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar28 = _guard_xfg_dispatch_icall_nop(fVar28);
    local_318 = (undefined4)(longlong)(fVar28 + fVar28);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar26 = &local_328;
    do {
      puVar24 = (undefined8 *)*plVar26;
      puVar25 = (undefined8 *)plVar26[1];
      lVar1 = plVar26[2];
      local_338._0_4_ = (int)lVar1;
      lVar19 = ((longlong)puVar25 - (longlong)puVar24 >> 6) + 1;
      puVar23 = puVar24;
      if ((int)local_338 != 0) {
LAB_140b49b70:
        if (8 < lVar19) {
          puVar24 = puVar23 + (lVar19 / 2) * 8;
          if (puVar24 != puVar23) {
            uVar10 = puVar23[1];
            uVar3 = *(undefined4 *)puVar24;
            uVar4 = *(undefined4 *)((longlong)puVar24 + 4);
            uVar5 = *(undefined4 *)(puVar24 + 1);
            uVar6 = *(undefined4 *)((longlong)puVar24 + 0xc);
            uVar11 = puVar24[2];
            uVar12 = puVar24[3];
            uVar13 = puVar24[4];
            uVar14 = puVar24[5];
            uVar15 = puVar24[6];
            uVar16 = puVar24[7];
            *puVar24 = *puVar23;
            puVar24[1] = uVar10;
            uVar10 = puVar23[3];
            puVar24[2] = puVar23[2];
            puVar24[3] = uVar10;
            uVar7 = *(undefined4 *)((longlong)puVar23 + 0x24);
            uVar8 = *(undefined4 *)(puVar23 + 5);
            uVar9 = *(undefined4 *)((longlong)puVar23 + 0x2c);
            *(undefined4 *)(puVar24 + 4) = *(undefined4 *)(puVar23 + 4);
            *(undefined4 *)((longlong)puVar24 + 0x24) = uVar7;
            *(undefined4 *)(puVar24 + 5) = uVar8;
            *(undefined4 *)((longlong)puVar24 + 0x2c) = uVar9;
            uVar10 = puVar23[7];
            puVar24[6] = puVar23[6];
            puVar24[7] = uVar10;
            *(undefined4 *)puVar23 = uVar3;
            *(undefined4 *)((longlong)puVar23 + 4) = uVar4;
            *(undefined4 *)(puVar23 + 1) = uVar5;
            *(undefined4 *)((longlong)puVar23 + 0xc) = uVar6;
            puVar23[2] = uVar11;
            puVar23[3] = uVar12;
            puVar23[4] = uVar13;
            puVar23[5] = uVar14;
            puVar23[6] = uVar15;
            puVar23[7] = uVar16;
          }
          puVar20 = puVar25 + 8;
          puVar24 = puVar23;
LAB_140b49be0:
          puVar22 = puVar24;
          puVar24 = puVar22 + 8;
          if ((puVar24 <= puVar25) && (*(char *)((longlong)puVar23 + 0x35) != '\x01'))
          goto code_r0x000140b49bf2;
          goto LAB_140b49c47;
        }
        for (; puVar24 = puVar23, puVar20 = puVar23, puVar23 < puVar25; puVar25 = puVar25 + -8) {
          while (puVar22 = puVar24, puVar24 = puVar20 + 8, puVar24 <= puVar25) {
            if (*(char *)((longlong)puVar22 + 0x35) == '\x01') {
              bVar27 = true;
            }
            else if (*(char *)((longlong)puVar20 + 0x75) == '\x01') {
              bVar27 = false;
            }
            else if (*(char *)((longlong)puVar22 + 0x35) == '\x02') {
              bVar27 = true;
            }
            else if (*(char *)((longlong)puVar20 + 0x75) == '\x02') {
              bVar27 = false;
            }
            else {
              cVar2 = *(char *)(puVar22 + 4);
              if (cVar2 == *(char *)(puVar20 + 0xc)) {
                if (*(int *)((longlong)puVar22 + 0x1c) == *(int *)((longlong)puVar20 + 0x5c)) {
                  if (cVar2 == '\0') {
                    if (*(int *)(puVar20 + 0xb) < *(int *)(puVar22 + 3)) {
                      bVar27 = true;
                    }
                    else {
                      if (*(int *)(puVar20 + 0xb) <= *(int *)(puVar22 + 3)) goto LAB_140b49e92;
                      bVar27 = false;
                    }
                  }
                  else {
LAB_140b49e92:
                    bVar27 = *(int *)((longlong)puVar22 + 0x3c) < *(int *)((longlong)puVar20 + 0x7c)
                    ;
                  }
                }
                else {
                  bVar27 = *(int *)((longlong)puVar20 + 0x5c) <= *(int *)((longlong)puVar22 + 0x1c);
                }
              }
              else {
                bVar27 = cVar2 == '\0';
              }
            }
            puVar20 = puVar24;
            if (!bVar27) {
              puVar24 = puVar22;
            }
          }
          if (puVar22 != puVar25) {
            uVar10 = puVar25[1];
            uVar11 = *puVar22;
            uVar12 = puVar22[1];
            uVar13 = puVar22[2];
            uVar14 = puVar22[3];
            uVar15 = puVar22[4];
            uVar16 = puVar22[5];
            uVar17 = puVar22[6];
            uVar18 = puVar22[7];
            *puVar22 = *puVar25;
            puVar22[1] = uVar10;
            uVar10 = puVar25[3];
            puVar22[2] = puVar25[2];
            puVar22[3] = uVar10;
            uVar10 = puVar25[5];
            puVar22[4] = puVar25[4];
            puVar22[5] = uVar10;
            uVar10 = puVar25[7];
            puVar22[6] = puVar25[6];
            puVar22[7] = uVar10;
            *puVar25 = uVar11;
            puVar25[1] = uVar12;
            puVar25[2] = uVar13;
            puVar25[3] = uVar14;
            puVar25[4] = uVar15;
            puVar25[5] = uVar16;
            puVar25[6] = uVar17;
            puVar25[7] = uVar18;
          }
        }
        goto LAB_140b49dd0;
      }
LAB_140b49dc1:
      local_338 = lVar1;
      FUN_140b490c0(puVar24,lVar19,param_3,param_4);
LAB_140b49dd0:
      plVar26 = plVar26 + -3;
    } while (&local_328 <= plVar26);
  }
  return;
code_r0x000140b49bf2:
  if (*(char *)((longlong)puVar22 + 0x75) == '\x01') goto LAB_140b49be0;
  if (*(char *)((longlong)puVar23 + 0x35) != '\x02') {
    if (*(char *)((longlong)puVar22 + 0x75) == '\x02') goto LAB_140b49be0;
    cVar2 = *(char *)(puVar23 + 4);
    if (cVar2 == *(char *)(puVar22 + 0xc)) {
      if (*(int *)((longlong)puVar23 + 0x1c) == *(int *)((longlong)puVar22 + 0x5c)) {
        if (cVar2 == '\0') {
          if (*(int *)(puVar22 + 0xb) < *(int *)(puVar23 + 3)) goto LAB_140b49c47;
          if (*(int *)(puVar23 + 3) < *(int *)(puVar22 + 0xb)) goto LAB_140b49be0;
        }
        bVar27 = *(int *)((longlong)puVar23 + 0x3c) < *(int *)((longlong)puVar22 + 0x7c);
      }
      else {
        bVar27 = *(int *)((longlong)puVar22 + 0x5c) <= *(int *)((longlong)puVar23 + 0x1c);
      }
    }
    else {
      bVar27 = cVar2 == '\0';
    }
    if (!bVar27) goto LAB_140b49be0;
  }
LAB_140b49c47:
  do {
    do {
      do {
        puVar21 = puVar20;
        puVar20 = puVar21 + -8;
        if ((puVar20 <= puVar23) || (*(char *)((longlong)puVar21 + -0xb) == '\x01'))
        goto LAB_140b49ca9;
      } while (*(char *)((longlong)puVar23 + 0x35) == '\x01');
      if (*(char *)((longlong)puVar21 + -0xb) == '\x02') goto LAB_140b49ca9;
    } while (*(char *)((longlong)puVar23 + 0x35) == '\x02');
    cVar2 = *(char *)(puVar21 + -4);
    if (cVar2 == *(char *)(puVar23 + 4)) {
      if (*(int *)((longlong)puVar21 + -0x24) == *(int *)((longlong)puVar23 + 0x1c)) {
        if (cVar2 == '\0') {
          if (*(int *)(puVar23 + 3) < *(int *)(puVar21 + -5)) break;
          if (*(int *)(puVar21 + -5) < *(int *)(puVar23 + 3)) goto LAB_140b49c47;
        }
        bVar27 = *(int *)((longlong)puVar21 + -4) < *(int *)((longlong)puVar23 + 0x3c);
      }
      else {
        bVar27 = *(int *)((longlong)puVar23 + 0x1c) <= *(int *)((longlong)puVar21 + -0x24);
      }
    }
    else {
      bVar27 = cVar2 == '\0';
    }
  } while (!bVar27);
LAB_140b49ca9:
  if (puVar24 <= puVar20) {
    if (puVar24 != puVar20) {
      uVar10 = puVar21[-7];
      uVar3 = *(undefined4 *)puVar24;
      uVar4 = *(undefined4 *)((longlong)puVar22 + 0x44);
      uVar5 = *(undefined4 *)(puVar22 + 9);
      uVar6 = *(undefined4 *)((longlong)puVar22 + 0x4c);
      uVar11 = puVar22[10];
      uVar12 = puVar22[0xb];
      uVar13 = puVar22[0xc];
      uVar14 = puVar22[0xd];
      uVar15 = puVar22[0xe];
      uVar16 = puVar22[0xf];
      *puVar24 = *puVar20;
      puVar22[9] = uVar10;
      uVar10 = puVar21[-5];
      puVar22[10] = puVar21[-6];
      puVar22[0xb] = uVar10;
      uVar7 = *(undefined4 *)((longlong)puVar21 + -0x1c);
      uVar8 = *(undefined4 *)(puVar21 + -3);
      uVar9 = *(undefined4 *)((longlong)puVar21 + -0x14);
      *(undefined4 *)(puVar22 + 0xc) = *(undefined4 *)(puVar21 + -4);
      *(undefined4 *)((longlong)puVar22 + 100) = uVar7;
      *(undefined4 *)(puVar22 + 0xd) = uVar8;
      *(undefined4 *)((longlong)puVar22 + 0x6c) = uVar9;
      uVar10 = puVar21[-1];
      puVar22[0xe] = puVar21[-2];
      puVar22[0xf] = uVar10;
      *(undefined4 *)puVar20 = uVar3;
      *(undefined4 *)((longlong)puVar21 + -0x3c) = uVar4;
      *(undefined4 *)(puVar21 + -7) = uVar5;
      *(undefined4 *)((longlong)puVar21 + -0x34) = uVar6;
      puVar21[-6] = uVar11;
      puVar21[-5] = uVar12;
      puVar21[-4] = uVar13;
      puVar21[-3] = uVar14;
      puVar21[-2] = uVar15;
      puVar21[-1] = uVar16;
    }
    goto LAB_140b49be0;
  }
  if (puVar23 != puVar20) {
    uVar10 = puVar21[-7];
    uVar3 = *(undefined4 *)puVar23;
    uVar4 = *(undefined4 *)((longlong)puVar23 + 4);
    uVar5 = *(undefined4 *)(puVar23 + 1);
    uVar6 = *(undefined4 *)((longlong)puVar23 + 0xc);
    uVar11 = puVar23[2];
    uVar12 = puVar23[3];
    uVar13 = puVar23[4];
    uVar14 = puVar23[5];
    uVar15 = puVar23[6];
    uVar16 = puVar23[7];
    *puVar23 = *puVar20;
    puVar23[1] = uVar10;
    uVar10 = puVar21[-5];
    puVar23[2] = puVar21[-6];
    puVar23[3] = uVar10;
    uVar7 = *(undefined4 *)((longlong)puVar21 + -0x1c);
    uVar8 = *(undefined4 *)(puVar21 + -3);
    uVar9 = *(undefined4 *)((longlong)puVar21 + -0x14);
    *(undefined4 *)(puVar23 + 4) = *(undefined4 *)(puVar21 + -4);
    *(undefined4 *)((longlong)puVar23 + 0x24) = uVar7;
    *(undefined4 *)(puVar23 + 5) = uVar8;
    *(undefined4 *)((longlong)puVar23 + 0x2c) = uVar9;
    uVar10 = puVar21[-1];
    puVar23[6] = puVar21[-2];
    puVar23[7] = uVar10;
    *(undefined4 *)puVar20 = uVar3;
    *(undefined4 *)((longlong)puVar21 + -0x3c) = uVar4;
    *(undefined4 *)(puVar21 + -7) = uVar5;
    *(undefined4 *)((longlong)puVar21 + -0x34) = uVar6;
    puVar21[-6] = uVar11;
    puVar21[-5] = uVar12;
    puVar21[-4] = uVar13;
    puVar21[-3] = uVar14;
    puVar21[-2] = uVar15;
    puVar21[-1] = uVar16;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar20 + (-0x40 - (longlong)puVar23) & 0xffffffffffffffc0U) <
      (longlong)((longlong)puVar25 - (longlong)puVar24 & 0xffffffffffffffc0U)) {
    if (puVar24 < puVar25) {
      *plVar26 = (longlong)puVar24;
      plVar26[1] = (longlong)puVar25;
      *(int *)(plVar26 + 2) = (int)local_338;
      plVar26 = plVar26 + 3;
    }
    if (puVar20 <= puVar23 + 8) goto LAB_140b49dd0;
    puVar25 = puVar21 + -0x10;
    puVar24 = puVar23;
  }
  else {
    if (puVar23 + 8 < puVar20) {
      *plVar26 = (longlong)puVar23;
      plVar26[1] = (longlong)(puVar21 + -0x10);
      *(int *)(plVar26 + 2) = (int)local_338;
      plVar26 = plVar26 + 3;
    }
    if (puVar25 <= puVar24) goto LAB_140b49dd0;
  }
  lVar19 = ((longlong)puVar25 - (longlong)puVar24 >> 6) + 1;
  puVar23 = puVar24;
  if ((int)local_338 == 0) goto LAB_140b49dc1;
  goto LAB_140b49b70;
}



// FUNCTION 140b49f20 NewObject<UTTLFemtoShiftStatus> body=89 status=ok
// SIG undefined NewObject<UTTLFemtoShiftStatus>(void)

void NewObject<UTTLFemtoShiftStatus>(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = FUN_141319070();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 140b49f80 FUN_140b49f80 body=617 status=ok
// SIG undefined FUN_140b49f80(void)

undefined8 *
FUN_140b49f80(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if (0x555555555555553 < (ulonglong)param_1[1]) {
    std::
    _Tree<std::_Tmap_traits<int,ChromaSDK::AnimationBase_*,std::less<int>,std::allocator<std::pair<int_const_,ChromaSDK::AnimationBase_*>_>,0>_>
    ::_Destroy_if_node(param_1,param_6);
                    /* WARNING: Subroutine does not return */
    std::_guard_xfg_dispatch_icall_nop("map/set<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar5 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_140b49ff5;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_140b49ff5;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_140b49ff5:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar9 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar5 = *param_1;
      *param_2 = param_6;
      *(undefined1 *)(*(longlong *)(lVar5 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar8 = (longlong *)plVar9[1];
    plVar7 = plVar9 + 1;
    plVar10 = plVar8 + 1;
    lVar5 = *(longlong *)plVar8[1];
    if (plVar8 == (longlong *)lVar5) {
      lVar5 = ((longlong *)plVar8[1])[2];
      if (*(char *)(lVar5 + 0x18) != '\0') {
        plVar2 = (longlong *)plVar8[2];
        plVar6 = plVar8;
        if (plVar9 == plVar2) {
          plVar8[2] = *plVar2;
          if (*(char *)(*plVar2 + 0x19) == '\0') {
            *(longlong **)(*plVar2 + 8) = plVar8;
          }
          plVar2[1] = *plVar10;
          plVar6 = plVar2;
          plVar9 = plVar8;
          plVar7 = plVar10;
          if (plVar8 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar2;
            *plVar2 = (longlong)plVar8;
            *plVar10 = (longlong)plVar2;
          }
          else {
            plVar3 = (longlong *)*plVar10;
            if (plVar8 == (longlong *)*plVar3) {
              *plVar3 = (longlong)plVar2;
              *plVar2 = (longlong)plVar8;
              *plVar10 = (longlong)plVar2;
            }
            else {
              plVar3[2] = (longlong)plVar2;
              *plVar2 = (longlong)plVar8;
              *plVar10 = (longlong)plVar2;
            }
          }
        }
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        plVar10 = (longlong *)*plVar7;
        *plVar7 = plVar10[2];
        if (*(char *)(plVar10[2] + 0x19) == '\0') {
          *(longlong **)(plVar10[2] + 8) = plVar7;
        }
        plVar10[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar10;
          plVar10[2] = (longlong)plVar7;
        }
        else {
          plVar8 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar8[2]) {
            plVar8[2] = (longlong)plVar10;
            plVar10[2] = (longlong)plVar7;
          }
          else {
            *plVar8 = (longlong)plVar10;
            plVar10[2] = (longlong)plVar7;
          }
        }
        goto LAB_140b4a1a2;
      }
LAB_140b4a116:
      *(undefined1 *)(plVar8 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar9 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_140b4a116;
      if (plVar9 == (longlong *)*plVar8) {
        std::
        _Tree<std::_Tmap_traits<Imf::Name,Imf::Slice,std::less<Imf::Name>,std::allocator<std::pair<Imf::Name_const_,Imf::Slice>_>,0>_>
        ::_Rrotate(param_1);
        plVar9 = plVar8;
      }
      *(undefined1 *)(plVar9[1] + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar9[1] + 8) + 0x18) = 0;
      plVar7 = *(longlong **)(plVar9[1] + 8);
      plVar10 = (longlong *)plVar7[2];
      plVar7[2] = *plVar10;
      if (*(char *)(*plVar10 + 0x19) == '\0') {
        *(longlong **)(*plVar10 + 8) = plVar7;
      }
      plVar10[1] = plVar7[1];
      if (plVar7 == *(longlong **)(*param_1 + 8)) {
        *(longlong **)(*param_1 + 8) = plVar10;
      }
      else {
        puVar4 = (undefined8 *)plVar7[1];
        if (plVar7 == (longlong *)*puVar4) {
          *puVar4 = plVar10;
        }
        else {
          puVar4[2] = plVar10;
        }
      }
      *plVar10 = (longlong)plVar7;
LAB_140b4a1a2:
      plVar7[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar9[1] + 0x18);
  } while( true );
}



// FUNCTION 140b4a1f0 FUN_140b4a1f0 body=770 status=ok
// SIG undefined FUN_140b4a1f0(void)

undefined8 *
FUN_140b4a1f0(longlong *param_1,undefined8 *param_2,longlong *param_3,float *param_4,
             undefined8 param_5)

{
  float *pfVar1;
  char cVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined7 uVar9;
  longlong *plVar10;
  float extraout_XMM0_Da;
  float fVar11;
  float fVar12;
  longlong *local_res8;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  
  plVar10 = (longlong *)*param_1;
  local_res8 = (longlong *)0x0;
  if (param_1[1] == 0) {
LAB_140b4a236:
    FUN_140b49f80(param_1,param_2,1,plVar10,param_4,param_5);
    return param_2;
  }
  plVar7 = param_3;
  if (param_3 == (longlong *)*plVar10) {
    fVar11 = *param_4;
    if (fVar11 < *(float *)((longlong)param_3 + 0x1c)) {
LAB_140b4a258:
      FUN_140b49f80(param_1,param_2,1,param_3,param_4,param_5);
      return param_2;
    }
  }
  else if (param_3 == plVar10) {
    fVar11 = *param_4;
    pfVar1 = (float *)(plVar10[2] + 0x1c);
    if (*pfVar1 <= fVar11 && fVar11 != *pfVar1) {
      FUN_140b49f80(fVar11,param_2,0,plVar10[2],param_4,param_5);
      return param_2;
    }
  }
  else {
    fVar11 = *param_4;
    fVar12 = *(float *)((longlong)param_3 + 0x1c);
    if ((fVar11 < fVar12) &&
       (local_res8 = param_3, plVar4 = (longlong *)FUN_140630f10(&local_res8),
       fVar11 = extraout_XMM0_Da,
       *(float *)(*plVar4 + 0x1c) <= extraout_XMM0_Da &&
       extraout_XMM0_Da != *(float *)(*plVar4 + 0x1c))) {
      if (*(char *)(local_res8[2] + 0x19) != '\0') {
        FUN_140b49f80(param_1,param_2,0,local_res8,param_4,param_5);
        return param_2;
      }
      goto LAB_140b4a258;
    }
    if (fVar12 < fVar11) {
      local_res8 = (longlong *)param_3[2];
      if (*(char *)((longlong)local_res8 + 0x19) == '\0') {
        cVar2 = *(char *)(*local_res8 + 0x19);
        plVar4 = (longlong *)*local_res8;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar4 + 0x19);
          local_res8 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
      }
      else {
        cVar2 = *(char *)(param_3[1] + 0x19);
        plVar5 = (longlong *)param_3[1];
        plVar4 = param_3;
        while ((local_res8 = plVar5, cVar2 == '\0' && (plVar4 == (longlong *)local_res8[2]))) {
          cVar2 = *(char *)(local_res8[1] + 0x19);
          plVar5 = (longlong *)local_res8[1];
          plVar4 = local_res8;
        }
      }
      if ((local_res8 == plVar10) || (fVar11 < *(float *)((longlong)local_res8 + 0x1c))) {
        plVar10 = local_res8;
        if (*(char *)(param_3[2] + 0x19) != '\0') {
          FUN_140b49f80(param_1,param_2,0,param_3,param_4,param_5);
          return param_2;
        }
        goto LAB_140b4a236;
      }
    }
  }
  uVar8 = CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
  cVar2 = *(char *)(plVar10[1] + 0x19);
  plVar7 = plVar10;
  plVar4 = (longlong *)plVar10[1];
  while (uVar9 = (undefined7)((ulonglong)uVar8 >> 8), cVar2 == '\0') {
    bVar3 = fVar11 < *(float *)((longlong)plVar4 + 0x1c);
    uVar8 = CONCAT71(uVar9,bVar3);
    if (bVar3) {
      plVar5 = (longlong *)*plVar4;
    }
    else {
      plVar5 = (longlong *)plVar4[2];
    }
    plVar7 = plVar4;
    plVar4 = plVar5;
    cVar2 = *(char *)((longlong)plVar5 + 0x19);
  }
  plVar4 = plVar7;
  if ((char)uVar8 != '\0') {
    if (plVar7 == (longlong *)*plVar10) {
      puVar6 = (undefined8 *)
               FUN_140b49f80(param_1,local_28,CONCAT71(uVar9,1),plVar7,param_4,param_5);
      plVar4 = (longlong *)*puVar6;
      goto LAB_140b4a4d9;
    }
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      plVar4 = (longlong *)*plVar7;
      if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
        cVar2 = *(char *)(plVar4[2] + 0x19);
        plVar10 = (longlong *)plVar4[2];
        while (cVar2 == '\0') {
          cVar2 = *(char *)(plVar10[2] + 0x19);
          plVar4 = plVar10;
          plVar10 = (longlong *)plVar10[2];
        }
      }
      else {
        cVar2 = *(char *)(plVar7[1] + 0x19);
        plVar5 = (longlong *)plVar7[1];
        plVar10 = plVar7;
        while ((plVar4 = plVar5, cVar2 == '\0' && (plVar10 == (longlong *)*plVar4))) {
          cVar2 = *(char *)(plVar4[1] + 0x19);
          plVar5 = (longlong *)plVar4[1];
          plVar10 = plVar4;
        }
        if (*(char *)((longlong)plVar10 + 0x19) != '\0') {
          plVar4 = plVar10;
        }
      }
    }
    else {
      plVar4 = (longlong *)plVar7[2];
    }
  }
  if (fVar11 < *(float *)((longlong)plVar4 + 0x1c) || fVar11 == *(float *)((longlong)plVar4 + 0x1c))
  {
    FMemory::operator_delete(param_5,0x30);
  }
  else {
    puVar6 = (undefined8 *)FUN_140b49f80(param_1,local_20,uVar8,plVar7,param_4,param_5);
    plVar4 = (longlong *)*puVar6;
  }
LAB_140b4a4d9:
  *param_2 = plVar4;
  return param_2;
}



// FUNCTION 140b4a500 FUN_140b4a500 body=106 status=ok
// SIG undefined FUN_140b4a500(void)

undefined8 * FUN_140b4a500(undefined8 *param_1)

{
  FUN_1428c1a80();
  *param_1 = &PTR_FUN_1442cacc8;
  param_1[0x92] = &PTR_LAB_1442cb3e8;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  (**(code **)(*(longlong *)param_1[0x8e] + 0x838))((longlong *)param_1[0x8e],0);
  (**(code **)(*(longlong *)param_1[0x8e] + 0x830))((longlong *)param_1[0x8e],0xf,1);
  return param_1;
}



// FUNCTION 140b4a570 FUN_140b4a570 body=322 status=ok
// SIG undefined FUN_140b4a570(void)

undefined8 * FUN_140b4a570(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  
  FUN_14221fbd0();
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *param_1 = &PTR__scalar_deleting_destructor__1442c9810;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x474) = 0x101;
  uVar2 = DAT_1468697f0;
  uVar1 = FUN_1429f11d0();
  uVar2 = FUN_141752410(param_1,uVar2,uVar1,uVar1,1,1,0);
  param_1[0x8d] = uVar2;
  param_1[0x2d] = uVar2;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"SplineMovementComponent",1);
  uVar2 = *puVar3;
  uVar1 = UUGStreamInteractConnectionUW::GetPrivateStaticClass();
  uVar2 = FUN_141752410(param_1,uVar2,uVar1,uVar1,1,0,0);
  param_1[0x8b] = uVar2;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"HavokNavObstacle",1);
  uVar2 = *puVar3;
  uVar1 = AUGWeapon_Hook::GetPrivateStaticClass();
  uVar2 = FUN_141752410(param_1,uVar2,uVar1,uVar1,1,0,0);
  param_1[0x8c] = uVar2;
  local_res8 = 0;
  FUN_142399e30(uVar2,param_1[0x2d],0);
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  return param_1;
}



// FUNCTION 140b4a6c0 FUN_140b4a6c0 body=208 status=ok
// SIG undefined FUN_140b4a6c0(void)

undefined8 * FUN_140b4a6c0(undefined8 *param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined2 *local_18;
  undefined8 local_10;
  
  local_res8 = DAT_1468697f0;
  puVar1 = (undefined2 *)FName::GetComparisonNameEntry(&local_res8);
  if (puVar1 == (undefined2 *)0x0) {
    local_10 = 10;
    local_18 = puVar1;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(puVar1,&local_18);
  }
  puVar1 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar1 = local_18;
  }
  FUN_141784790(param_2,puVar1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar2 = FUN_142a07000();
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,local_res8,uVar2,param_2);
  FUN_140b4a570(param_1,param_2);
  *param_1 = &PTR__scalar_deleting_destructor__1442c9ef8;
  return param_1;
}



// FUNCTION 140b4a790 FUN_140b4a790 body=208 status=ok
// SIG undefined FUN_140b4a790(void)

undefined8 * FUN_140b4a790(undefined8 *param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined2 *local_18;
  undefined8 local_10;
  
  local_res8 = DAT_1468697f0;
  puVar1 = (undefined2 *)FName::GetComparisonNameEntry(&local_res8);
  if (puVar1 == (undefined2 *)0x0) {
    local_10 = 10;
    local_18 = puVar1;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(puVar1,&local_18);
  }
  puVar1 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar1 = local_18;
  }
  FUN_141784790(param_2,puVar1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar2 = FUN_142a232e0();
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,local_res8,uVar2,param_2);
  FUN_140b4a570(param_1,param_2);
  *param_1 = &PTR__scalar_deleting_destructor__1442c9810;
  return param_1;
}



// FUNCTION 140b4a860 FUN_140b4a860 body=37 status=ok
// SIG undefined FUN_140b4a860(void)

undefined8 * FUN_140b4a860(undefined8 *param_1)

{
  FUN_14221fbd0();
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  *param_1 = &PTR_FUN_1442ca5e0;
  return param_1;
}



// FUNCTION 140b4a890 FUN_140b4a890 body=137 status=ok
// SIG undefined FUN_140b4a890(void)

undefined8 * FUN_140b4a890(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  uVar1 = FUN_14178c940();
  FUN_140b158e0(param_1,uVar1);
  *param_1 = &PTR_FUN_1442c5670;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"MeshComponent",1);
  uVar1 = *puVar2;
  uVar3 = FUN_142a232e0();
  uVar1 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x96] = uVar1;
  param_1[0x2d] = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x479) = 1;
  return param_1;
}



// FUNCTION 140b4a920 FUN_140b4a920 body=137 status=ok
// SIG undefined FUN_140b4a920(void)

undefined8 * FUN_140b4a920(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  uVar1 = FUN_14178c940();
  FUN_140b158e0(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__1442c3c90;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"MeshComponent",1);
  uVar1 = *puVar2;
  uVar3 = FUN_142a232e0();
  uVar1 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x98] = uVar1;
  param_1[0x2d] = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x479) = 1;
  return param_1;
}



// FUNCTION 140b4a9b0 FUN_140b4a9b0 body=1502 status=ok
// SIG undefined FUN_140b4a9b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140b4a9b0(undefined8 *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_res8;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  undefined1 local_28 [32];
  
  FUN_143066cd0();
  *param_1 = &PTR_FUN_1442c6300;
  param_1[0x8b] = &PTR_LAB_1442c6a18;
  param_1[0x8c] = &PTR_LAB_1442c6a30;
  param_1[0xd0] = &PTR_CanBeUsedOnAnyThread_1442c6a58;
  param_1[0xd1] = &PTR_LAB_1442c6a88;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  FUN_142d2e580(param_1 + 0xe7);
  *(undefined4 *)(param_1 + 0xff) = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  *(undefined4 *)(param_1 + 0x105) = 0x3f800000;
  puVar5 = (undefined8 *)FName::FName(&local_res8,L"StaticMesh",1);
  uVar7 = *puVar5;
  uVar6 = FUN_142a232e0();
  uVar7 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,0,0);
  param_1[0xd2] = uVar7;
  puVar5 = (undefined8 *)FName::FName(&local_res8,L"Rotating Component",1);
  uVar7 = *puVar5;
  uVar6 = UEnvQueryTest_Cover::StaticClass();
  uVar7 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,0,0);
  param_1[0xd3] = uVar7;
  puVar5 = (undefined8 *)FName::FName(&local_res8,L"Projectile Movement Component",1);
  uVar7 = *puVar5;
  uVar6 = FUN_1430a9310();
  uVar7 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,0,0);
  param_1[0x9e] = uVar7;
  puVar5 = (undefined8 *)FName::FName(&local_res8,L"Audio Component",1);
  uVar7 = *puVar5;
  uVar6 = AUGDoor::GetPrivateStaticClass();
  uVar7 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,0,0);
  param_1[0xd4] = uVar7;
  puVar5 = (undefined8 *)FName::FName(&local_res8,L"Fire Muzzle",1);
  uVar7 = *puVar5;
  uVar6 = USoundSourceBus::GetPrivateStaticClass();
  uVar7 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,0,0);
  param_1[0xd5] = uVar7;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  FUN_141785db0(
               L"\'/Game/Gear/Weapons/Pistols/Tediore/Shared/Model/SM_Ted_PS_ProjectileCollsion.SM_Ted_PS_ProjectileCollsion\'"
               );
  local_38 = 0;
  local_30 = 0x6c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy
            (local_38,
             L"\'/Game/Gear/Weapons/Pistols/Tediore/Shared/Model/SM_Ted_PS_ProjectileCollsion.SM_Ted_PS_ProjectileCollsion\'"
             ,0xd8);
  FUN_14179acf0(&local_38,1);
  lVar8 = FUN_14095c6b0(&local_38);
  if (lVar8 == 0) {
    FUN_14178ab20(
                 L"\'/Game/Gear/Weapons/Pistols/Tediore/Shared/Model/SM_Ted_PS_ProjectileCollsion.SM_Ted_PS_ProjectileCollsion\'"
                 );
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  (**(code **)(*(longlong *)param_1[0xd2] + 0x928))((longlong *)param_1[0xd2],lVar8);
  FUN_142397540(param_1[0xd2],1);
  (**(code **)(*(longlong *)param_1[0xd2] + 0x648))((longlong *)param_1[0xd2],0xe);
  (**(code **)(*(longlong *)param_1[0xd2] + 0x838))((longlong *)param_1[0xd2],2);
  *(undefined1 *)(param_1[0xd2] + 0x303) = 0;
  (**(code **)(*(longlong *)param_1[0xd2] + 0x630))((longlong *)param_1[0xd2],1);
  param_1[0x2d] = param_1[0xd2];
  param_1[0xda] = param_1[0x9e];
  local_res8 = 0;
  FUN_142399e30(param_1[0xd4],param_1[0xd2],0);
  local_res8 = 0;
  FUN_142399e30(param_1[0xd5],param_1[0x2d],0);
  lVar8 = param_1[0xd5];
  local_38 = 0x42a00000;
  pfVar1 = (float *)(lVar8 + 0x280);
  local_30 = local_30 & 0xffffffff00000000;
  if (((*(float *)(lVar8 + 0x1f8) != *pfVar1) ||
      (*(float *)(lVar8 + 0x1fc) != *(float *)(lVar8 + 0x284))) ||
     (*(float *)(lVar8 + 0x200) != *(float *)(lVar8 + 0x288))) {
    local_48 = *(undefined8 *)*(undefined1 (*) [12])(lVar8 + 0x1f8);
    auVar9._12_4_ = 0;
    auVar9._0_12_ = *(undefined1 (*) [12])(lVar8 + 0x1f8);
    fVar2 = (float)DAT_146869310;
    fVar3 = DAT_146869310._4_4_;
    fVar4 = DAT_146869310._8_4_;
    auVar9 = divps(auVar9,_DAT_146869310);
    fVar11 = (float)local_48 - (float)(int)auVar9._0_4_ * fVar2;
    fVar12 = (float)((ulonglong)local_48 >> 0x20) - (float)(int)auVar9._4_4_ * fVar3;
    fVar13 = *(float *)(lVar8 + 0x200) - (float)(int)auVar9._8_4_ * fVar4;
    fVar11 = (float)(((uint)(fVar11 + fVar2) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                    (uint)(fVar11 + fVar2));
    fVar12 = (float)(((uint)(fVar12 + fVar3) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                    (uint)(fVar12 + fVar3));
    fVar13 = (float)(((uint)(fVar13 + fVar4) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                    (uint)(fVar13 + fVar4));
    uVar10 = ((uint)(fVar13 - fVar4) ^ (uint)fVar13) & -(uint)(fRam0000000146869308 < fVar13) ^
             (uint)fVar13;
    uStack_40 = CONCAT44(uStack_40._4_4_,uVar10);
    *(ulonglong *)pfVar1 =
         CONCAT44(((uint)(fVar12 - fVar3) ^ (uint)fVar12) & -(uint)(fRam0000000146869304 < fVar12) ^
                  (uint)fVar12,
                  ((uint)(fVar11 - fVar2) ^ (uint)fVar11) & -(uint)(_DAT_146869300 < fVar11) ^
                  (uint)fVar11);
    *(uint *)(lVar8 + 0x288) = uVar10;
    puVar5 = (undefined8 *)FRotator::Quaternion(pfVar1,local_28);
    uVar7 = puVar5[1];
    *(undefined8 *)(lVar8 + 0x270) = *puVar5;
    *(undefined8 *)(lVar8 + 0x278) = uVar7;
  }
  local_48 = *(undefined8 *)(lVar8 + 0x270);
  uStack_40 = *(undefined8 *)(lVar8 + 0x278);
  FUN_142397be0(lVar8,&local_38,&local_48,0,0,0);
  param_1[0xdd] = 0;
  local_30 = CONCAT44(local_30._4_4_,0x43480000);
  *(undefined4 *)(param_1[0x9e] + 0x1c0) = 0x44fa0000;
  *(undefined4 *)(param_1[0x9e] + 0x1c4) = 0x45cb2000;
  *(undefined4 *)(param_1[0x9e] + 0x1dc) = 0x3f99999a;
  *(uint *)(param_1[0x9e] + 0x1c8) = *(uint *)(param_1[0x9e] + 0x1c8) | 2;
  *(undefined4 *)(param_1[0x9e] + 0x1e4) = 0x3f000000;
  *(undefined4 *)(param_1[0x9e] + 0x1e8) = 0x3e800000;
  *(undefined4 *)(param_1[0x9e] + 0x1ec) = 0x44480000;
  lVar8 = param_1[0x9e];
  *(undefined8 *)(lVar8 + 0x18c) = 0x44fa0000;
  *(undefined4 *)(lVar8 + 0x194) = 0x43480000;
  param_1[0xde] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x41200000;
  *(undefined2 *)((longlong)param_1 + 0x5ac) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x5ae) = 1;
  *(undefined1 *)(param_1 + 0xb5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x5aa) = 1;
  *(undefined4 *)(param_1 + 0xc5) = 0x43960000;
  *(undefined4 *)(param_1 + 0xe1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x70c) = 1;
  FName::FName(&local_res8,L"Muzzle",1);
  param_1[0xe2] = local_res8;
  FName::FName(&local_res8,L"FX_LaserSight",1);
  param_1[0xe3] = local_res8;
  *(undefined4 *)(param_1 + 0xff) = 0x3f800000;
  return param_1;
}



// FUNCTION 140b4af90 FUN_140b4af90 body=942 status=ok
// SIG undefined FUN_140b4af90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140b4af90(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res8;
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_140ac4d50();
  *(undefined1 *)((longlong)param_1 + 0x671) = 1;
  *param_1 = &PTR_FUN_1442c8868;
  param_1[0x8b] = &PTR_LAB_1442c9010;
  param_1[0x8c] = &PTR_LAB_1442c9070;
  param_1[0x8d] = &PTR_LAB_1442c9098;
  param_1[0x8e] = &PTR_LAB_1442c90b0;
  param_1[0x8f] = &PTR_LAB_1442c90d8;
  param_1[0x90] = &PTR_LAB_1442c90e8;
  param_1[0x92] = &PTR_LAB_1442c9128;
  param_1[0x93] = &PTR_LAB_1442c9140;
  param_1[0xcc] = &PTR_LAB_1442c9210;
  param_1[0xcd] = &PTR_LAB_1442c9238;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  *(undefined1 *)(param_1 + 0xd3) = 1;
  *(undefined4 *)((longlong)param_1 + 0x6bc) = 0;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"DefaultBalanceComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1414ba0d0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xd4] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"DefaultInventoryShopComponent",1);
  uVar3 = *puVar1;
  uVar2 = AEquipmentSkin::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xd5] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"BoxComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_14290f330();
  lVar4 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xd8] = lVar4;
  if (lVar4 != 0) {
    local_10 = DAT_1468b5d98;
    local_18 = _DAT_1468b5d90;
    FUN_14234fd70(lVar4,&local_18,1);
    (**(code **)(*(longlong *)param_1[0xd8] + 0x838))((longlong *)param_1[0xd8],0);
    (**(code **)(*(longlong *)param_1[0xd8] + 0x830))((longlong *)param_1[0xd8],2,2);
    (**(code **)(*(longlong *)param_1[0xd8] + 0x830))((longlong *)param_1[0xd8],0x13,2);
    local_res8 = 0;
    FUN_142399e30(param_1[0xd8],param_1[0x2d],0);
  }
  FName::FName(&local_res8,L"VendingMachine",1);
  param_1[0xab] = local_res8;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"ItemOfTheDayArea",1);
  uVar3 = *puVar1;
  uVar2 = UUGHitTextureButton::GetPrivateStaticClass();
  lVar4 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xd6] = lVar4;
  if (lVar4 != 0) {
    local_res8 = 0;
    FUN_142399e30(lVar4,param_1[0x2d],0);
    *(undefined1 *)(param_1[0xd6] + 0x70c) = 1;
    *(undefined4 *)(param_1[0xd6] + 0x704) = 0x453b8000;
    *(undefined4 *)(param_1[0xd6] + 0x708) = 0x453b8000;
  }
  *(undefined1 *)((longlong)param_1 + 0x58a) = 1;
  FName::FName(&local_res8,L"VendingMachine",1);
  param_1[0xaf] = local_res8;
  FName::FName(&local_res8,L"VendingMachine_BuyBack",1);
  param_1[0xcf] = local_res8;
  FName::FName(&local_res8,L"VendingMachine_Sell",1);
  param_1[0xd0] = local_res8;
  FName::FName(&local_res8,L"VendingMachine_BoughtGearSoldByFriend",1);
  param_1[0xd1] = local_res8;
  FName::FName(&local_res8,L"VendingMachine_BoughtItemOfTheDay",1);
  param_1[0xd2] = local_res8;
  return param_1;
}



// FUNCTION 140b4b340 FUN_140b4b340 body=1133 status=ok
// SIG undefined FUN_140b4b340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140b4b340(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  FUN_140ac4f70();
  *param_1 = &PTR_FUN_1442c80b8;
  param_1[0x8b] = &PTR_LAB_1442c8840;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 2;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  uVar5 = uRam000000014686934c;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x664) = 0;
  *(undefined4 *)(param_1 + 0xcd) = 0;
  *(uint *)((longlong)param_1 + 0x66c) = uVar5;
  uVar5 = uRam0000000146869344 & uRam0000000146869354;
  uVar6 = uRam0000000146869348 & uRam0000000146869358;
  uVar7 = uRam000000014686934c & uRam000000014686935c;
  *(uint *)(param_1 + 0xd0) = _DAT_146869340 & _DAT_146869350;
  *(uint *)((longlong)param_1 + 0x684) = uVar5;
  *(uint *)(param_1 + 0xd1) = uVar6;
  *(uint *)((longlong)param_1 + 0x68c) = uVar7;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x6fc) = 0x80000000;
  param_1[0xe2] = 0;
  param_1[0xe9] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0x103) = 0x3f800000;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x106);
  *(undefined4 *)(param_1 + 0x115) = 0x3f800000;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"SkeletalMeshComponent0",1);
  uVar4 = *puVar1;
  uVar2 = FUN_142a07000();
  plVar3 = (longlong *)FUN_141752410(param_1,uVar4,uVar2,uVar2,1,0,0);
  param_1[0xaf] = plVar3;
  uVar4 = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x640))(plVar3,DAT_146aefc60);
    (**(code **)(*(longlong *)param_1[0xaf] + 0x830))((longlong *)param_1[0xaf],0x13,0);
    (**(code **)(*(longlong *)param_1[0xaf] + 0x830))((longlong *)param_1[0xaf],2,0);
    *(undefined1 *)(param_1[0xaf] + 0x878) = 0;
    *(byte *)(param_1[0xaf] + 0x880) = *(byte *)(param_1[0xaf] + 0x880) & 0xdf;
    uVar4 = param_1[0xaf];
  }
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  param_1[0x2d] = uVar4;
  *(undefined1 *)(param_1 + 0xa9) = 3;
  *(undefined4 *)(param_1 + 0xaa) = 2;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 10;
  *(undefined4 *)((longlong)param_1 + 0x554) = 3;
  *(undefined4 *)(param_1 + 0xab) = 2;
  *(undefined4 *)((longlong)param_1 + 0x55c) = 4;
  *(undefined4 *)(param_1 + 0xac) = 3;
  *(undefined1 *)((longlong)param_1 + 0x564) = 1;
  *(undefined4 *)(param_1 + 0xad) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0xc9) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0x64c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xca) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xae) = 0x3ecccccd;
  param_1[0xc5] = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x61c) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 1;
  *(undefined4 *)((longlong)param_1 + 0x624) = 1;
  *(undefined4 *)((longlong)param_1 + 0x60c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc2) = 0xfffffffe;
  *(undefined8 *)((longlong)param_1 + 0x614) = 0xfffffffffffffffd;
  FName::FName(&local_res8,L"IsSelected",1);
  param_1[0xd8] = CONCAT44(uStackX_c,local_res8);
  FName::FName(&local_res8,L"InStock",1);
  param_1[0xd9] = CONCAT44(uStackX_c,local_res8);
  FName::FName(&local_res8,L"ItemScore",1);
  param_1[0xde] = CONCAT44(uStackX_c,local_res8);
  local_res8 = 0;
  uStackX_c = 9999;
  param_1[0xdf] = 0x270f00000000;
  *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
  FName::FName(&local_res8,L"Position",1);
  param_1[0xe2] = CONCAT44(uStackX_c,local_res8);
  FName::FName(&local_res8,L"RarityValue",1);
  param_1[0xe9] = CONCAT44(uStackX_c,local_res8);
  param_1[0xd4] = 0x42480000;
  *(undefined4 *)(param_1 + 0xd5) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x8ec) = 7;
  *(undefined4 *)(param_1 + 0x11d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x97c) = 0xffffffff;
  return param_1;
}



// FUNCTION 140b4b7b0 FUN_140b4b7b0 body=189 status=ok
// SIG undefined FUN_140b4b7b0(void)

undefined8 * FUN_140b4b7b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_143fde4c8;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CustomizationComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142e43690();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SkelMesh",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142e5c1e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar3;
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 140b4b870 FBlueprintCookedComponentInstancingData body=363 status=ok
// SIG undefined FBlueprintCookedComponentInstancingData(void)

undefined1 *
FBlueprintCookedComponentInstancingData::FBlueprintCookedComponentInstancingData
          (undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar11 = 0;
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = *(void **)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1 + 8,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 8),pvVar2,(longlong)iVar1 * 0x18);
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  plVar9 = *(longlong **)(param_2 + 0x30);
  uVar10 = (longlong)*(int *)(param_2 + 0x38) & 0x1fffffffffffffff;
  if (plVar9 + *(int *)(param_2 + 0x38) < plVar9) {
    uVar10 = uVar11;
  }
  if (uVar10 != 0) {
    do {
      puVar3 = (undefined4 *)*plVar9;
      puVar8 = (undefined4 *)operator_new(0x20);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar4 = puVar3[1];
        uVar5 = puVar3[2];
        uVar6 = puVar3[3];
        *puVar8 = *puVar3;
        puVar8[1] = uVar4;
        puVar8[2] = uVar5;
        puVar8[3] = uVar6;
        uVar7 = *(undefined8 *)(puVar3 + 6);
        *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar3 + 4);
        *(undefined8 *)(puVar8 + 6) = uVar7;
      }
      iVar1 = *(int *)(param_1 + 0x38);
      *(int *)(param_1 + 0x38) = iVar1 + 1;
      if (*(int *)(param_1 + 0x3c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x30,iVar1);
      }
      plVar9 = plVar9 + 1;
      uVar11 = uVar11 + 1;
      *(undefined4 **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = puVar8;
    } while (uVar11 != uVar10);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  iVar1 = *(int *)(param_2 + 0x48);
  pvVar2 = *(void **)(param_2 + 0x40);
  *(int *)(param_1 + 0x48) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 0x40,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x40),pvVar2,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 140b4b9e0 FUN_140b4b9e0 body=472 status=ok
// SIG undefined FUN_140b4b9e0(void)

undefined8 * FUN_140b4b9e0(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar3 = *(int *)(param_2 + 2);
  pvVar1 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 1,iVar3,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[1],pvVar1,(longlong)iVar3 << 3);
  }
  param_1[3] = 0;
  iVar3 = *(int *)(param_2 + 4);
  pvVar1 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 3,iVar3,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[3],pvVar1,(longlong)iVar3 << 3);
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_2 + 0x29);
  param_1[6] = 0;
  iVar3 = *(int *)(param_2 + 7);
  lVar4 = param_2[6];
  *(int *)(param_1 + 7) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1406f4a40(param_1 + 6,iVar3,0);
    lVar2 = param_1[6];
    do {
      FUN_142de2880(lVar2,lVar4);
      lVar2 = lVar2 + 0x88;
      lVar4 = lVar4 + 0x88;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x41) = *(undefined1 *)((longlong)param_2 + 0x41);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  TSet<TTuple<UTexture2D_const_*,FTextureInstanceView::FTextureDesc>,TDefaultMapHashableKeyFuncs<UTexture2D_const_*,FTextureInstanceView::FTextureDesc,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 9,param_2 + 9);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  param_1[0x14] = 0;
  iVar3 = *(int *)(param_2 + 0x15);
  lVar4 = param_2[0x14];
  *(int *)(param_1 + 0x15) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  else {
    FUN_1406f4a40(param_1 + 0x14,iVar3,0);
    lVar2 = param_1[0x14];
    do {
      FUN_142de2880(lVar2,lVar4);
      lVar2 = lVar2 + 0x88;
      lVar4 = lVar4 + 0x88;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  return param_1;
}



// FUNCTION 140b4bbc0 FUN_140b4bbc0 body=269 status=ok
// SIG undefined FUN_140b4bbc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140b4bbc0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = 0;
  uVar1 = uRam000000014686934c;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(uint *)((longlong)param_1 + 0x1c) = uVar1;
  uVar1 = uRam0000000146869344 & uRam0000000146869354;
  uVar2 = uRam0000000146869348 & uRam0000000146869358;
  uVar3 = uRam000000014686934c & uRam000000014686935c;
  *(uint *)(param_1 + 6) = _DAT_146869340 & _DAT_146869350;
  *(uint *)((longlong)param_1 + 0x34) = uVar1;
  *(uint *)(param_1 + 7) = uVar2;
  *(uint *)((longlong)param_1 + 0x3c) = uVar3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 1;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa2) = 1;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x17,0);
  param_1[0x18] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x19,0);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  return param_1;
}



// FUNCTION 140b4bcd0 FAIDirectorMember body=35 status=ok
// SIG undefined FAIDirectorMember(void)

longlong FAIDirectorMember::FAIDirectorMember(longlong param_1)

{
  FWeakObjectPtr::operator=(param_1,0);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 140b4bd00 FUN_140b4bd00 body=55 status=ok
// SIG undefined FUN_140b4bd00(void)

undefined1 * FUN_140b4bd00(undefined1 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar1 = rand();
  *(int *)(param_1 + 0x24) = iVar1;
  return param_1;
}



// FUNCTION 140b4bd40 FUN_140b4bd40 body=207 status=ok
// SIG undefined FUN_140b4bd40(void)

undefined8 * FUN_140b4bd40(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  TArray<FMovieSceneObjectPathChannelKeyValue,FDefaultAllocator>::
  CopyToEmpty<FMovieSceneObjectPathChannelKeyValue>
            (param_1,*param_2,*(undefined4 *)(param_2 + 1),0,0);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 3,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[3],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  pvVar2 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 5,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[5],pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 140b4be10 FUN_140b4be10 body=93 status=ok
// SIG undefined FUN_140b4be10(void)

undefined8 * FUN_140b4be10(undefined8 *param_1)

{
  FUN_140a25850();
  *(undefined4 *)(param_1 + 0x28) = 0xbf800000;
  *param_1 = &PTR_FUN_1442c5630;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x29) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x3f800000;
  return param_1;
}



// FUNCTION 140b4be70 FUN_140b4be70 body=169 status=ok
// SIG undefined FUN_140b4be70(void)

undefined8 * FUN_140b4be70(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x13,0);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 140b4bf20 FUN_140b4bf20 body=459 status=ok
// SIG undefined FUN_140b4bf20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140b4bf20(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  FUN_1409f0540(param_1 + 1,param_2[1],*(undefined4 *)(param_2 + 2),0,0);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((longlong)param_1 + 0x31) = *(undefined1 *)((longlong)param_2 + 0x31);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  _Src = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy
              (param_1 + 0xb,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[0xb],_Src,(longlong)iVar1 * 0x48);
  }
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xf,param_2 + 0xf);
  param_1[0x11] = param_2[0x11];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x15,param_2 + 0x15);
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  uVar2 = uRam000000014686934c;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(uint *)((longlong)param_1 + 0xec) = uVar2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  uVar2 = uRam0000000146869344 & uRam0000000146869354;
  uVar3 = uRam0000000146869348 & uRam0000000146869358;
  uVar4 = uRam000000014686934c & uRam000000014686935c;
  *(uint *)(param_1 + 0x20) = _DAT_146869340 & _DAT_146869350;
  *(uint *)((longlong)param_1 + 0x104) = uVar2;
  *(uint *)(param_1 + 0x21) = uVar3;
  *(uint *)((longlong)param_1 + 0x10c) = uVar4;
  return param_1;
}



// FUNCTION 140b4c0f0 FUN_140b4c0f0 body=117 status=ok
// SIG undefined FUN_140b4c0f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140b4c0f0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_140b4be70();
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  uVar1 = uRam000000014686934c;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(uint *)(param_1 + 0xec) = uVar1;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  uVar1 = uRam0000000146869344 & uRam0000000146869354;
  uVar2 = uRam0000000146869348 & uRam0000000146869358;
  uVar3 = uRam000000014686934c & uRam000000014686935c;
  *(uint *)(param_1 + 0x100) = _DAT_146869340 & _DAT_146869350;
  *(uint *)(param_1 + 0x104) = uVar1;
  *(uint *)(param_1 + 0x108) = uVar2;
  *(uint *)(param_1 + 0x10c) = uVar3;
  return param_1;
}



// FUNCTION 140b4c170 FUN_140b4c170 body=147 status=ok
// SIG undefined FUN_140b4c170(void)

undefined8 * FUN_140b4c170(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  FUN_1409f0540(param_1 + 1,param_2[1],*(undefined4 *)(param_2 + 2),0,0);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x19);
  *(undefined1 *)((longlong)param_1 + 0x1a) = *(undefined1 *)((longlong)param_2 + 0x1a);
  param_1[4] = param_2[4];
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (((param_2 + 5 != param_1 + 5) && (*(int *)(param_2 + 6) != 0)) &&
     (plVar1 = (longlong *)param_2[5], plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))();
  }
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 140b4c240 FUN_140b4c240 body=118 status=ok
// SIG undefined FUN_140b4c240(void)

undefined4 * FUN_140b4c240(undefined4 *param_1,undefined8 *param_2)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  FUN_140b4be70(param_1 + 4);
  FUN_140b4ebb0(param_1 + 4,param_2);
  FWeakObjectPtr::operator=(param_1,*param_2);
  FWeakObjectPtr::operator=(param_1 + 2,param_2[3]);
  return param_1;
}



// FUNCTION 140b4c2c0 FUN_140b4c2c0 body=153 status=ok
// SIG undefined FUN_140b4c2c0(void)

undefined8 * FUN_140b4c2c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468698b0) {
    _Init_thread_header(&DAT_1468698b0);
    if (DAT_1468698b0 == -1) {
      FName::FName(&DAT_1468698a8,"LogitechLED",1);
      _Init_thread_footer(&DAT_1468698b0);
    }
  }
  uVar1 = FModuleManager::GetModulePtr_Internal(DAT_1468698a8);
  *param_1 = uVar1;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  param_1[2] = 0x47a8c000;
  return param_1;
}



// FUNCTION 140b4c360 FUN_140b4c360 body=84 status=ok
// SIG undefined FUN_140b4c360(void)

undefined8 * FUN_140b4c360(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_14237f6c0(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__1442cb400;
  param_1[5] = &PTR_LAB_1442cb948;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  return param_1;
}



// FUNCTION 140b4c3c0 FUN_140b4c3c0 body=43 status=ok
// SIG undefined FUN_140b4c3c0(void)

undefined8 * FUN_140b4c3c0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1442cb978;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 140b4c3f0 FUN_140b4c3f0 body=487 status=ok
// SIG undefined FUN_140b4c3f0(void)

undefined8 * FUN_140b4c3f0(undefined8 *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  FUN_1417818c0();
  iVar4 = 0;
  *param_1 = &PTR_FUN_1442c2d40;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  param_1[0x20] = 0;
  if ((param_1[4] != 0) && (lVar1 = *(longlong *)(param_1[4] + 0x20), lVar1 != 0)) {
    lVar3 = FUN_14302b1c0();
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
      param_1[0x20] = *(undefined8 *)(lVar1 + 0x1a8);
    }
  }
  if ((wchar_t *)param_1[5] != L"Unused") {
    *(undefined4 *)(param_1 + 6) = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,7);
      iVar4 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar4 + 7;
    if (*(int *)((longlong)param_1 + 0x34) < iVar4 + 7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5);
    }
    builtin_wcsncpy((wchar_t *)param_1[5],L"Unused",7);
  }
  if ((wchar_t *)param_1[9] != L"Unused") {
    *(undefined4 *)(param_1 + 10) = 0;
    if (*(int *)((longlong)param_1 + 0x54) != 7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 9,7);
      iVar5 = *(int *)(param_1 + 10);
    }
    *(int *)(param_1 + 10) = iVar5 + 7;
    if (*(int *)((longlong)param_1 + 0x54) < iVar5 + 7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 9,iVar5);
    }
    builtin_wcsncpy((wchar_t *)param_1[9],L"Unused",7);
  }
  return param_1;
}



// FUNCTION 140b4c5e0 FUN_140b4c5e0 body=540 status=ok
// SIG undefined FUN_140b4c5e0(void)

undefined8 * FUN_140b4c5e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_140b4c3f0();
  *param_1 = &PTR_FUN_1442c3050;
  FName::FName(param_1 + 0x23,L"Muzzle",1);
  *(undefined1 *)(param_1 + 0x2a) = 1;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0x3f800000;
  FUN_142c8c260(&local_48,0x3dcccccd);
  iVar3 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar3);
  }
  lVar4 = param_1[7];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3e4ccccd);
  iVar3 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar3);
  }
  lVar4 = param_1[7];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3e99999a);
  iVar3 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar3);
  }
  lVar4 = param_1[7];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  if ((wchar_t *)param_1[5] != L"Chance to absorb") {
    *(undefined4 *)(param_1 + 6) = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0x11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0x11);
      iVar6 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar6 + 0x11;
    if (*(int *)((longlong)param_1 + 0x34) < iVar6 + 0x11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5,iVar6);
    }
    builtin_wcsncpy((wchar_t *)param_1[5],L"Chance to absorb",0x11);
  }
  return param_1;
}



// FUNCTION 140b4c800 FUN_140b4c800 body=865 status=ok
// SIG undefined FUN_140b4c800(void)

undefined8 * FUN_140b4c800(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_140b4c3f0();
  *param_1 = &PTR_FUN_1442c3360;
  iVar6 = 0;
  iVar7 = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  FUN_142c8c260(&local_48,0xbe4ccccd);
  iVar3 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar3);
  }
  lVar4 = param_1[7];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0xbeb33333);
  iVar3 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar3);
  }
  lVar4 = param_1[7];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0xbf000000);
  iVar3 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar3);
  }
  lVar4 = param_1[7];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  if ((wchar_t *)param_1[5] != L"Elemental damage reduction") {
    *(undefined4 *)(param_1 + 6) = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0x1b) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0x1b);
      iVar6 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar6 + 0x1b;
    if (*(int *)((longlong)param_1 + 0x34) < iVar6 + 0x1b) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5);
    }
    builtin_wcsncpy((wchar_t *)param_1[5],L"Elemental damage reduction",0x1b);
  }
  FUN_142c8c260(&local_48,0x40400000);
  iVar3 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 100) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0xb,iVar3);
  }
  lVar4 = param_1[0xb];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x40800000);
  iVar3 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 100) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0xb,iVar3);
  }
  lVar4 = param_1[0xb];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x40a00000);
  iVar3 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 100) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0xb,iVar3);
  }
  lVar4 = param_1[0xb];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  if ((wchar_t *)param_1[9] != L"Damage resistance duration") {
    *(undefined4 *)(param_1 + 10) = 0;
    if (*(int *)((longlong)param_1 + 0x54) != 0x1b) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 9,0x1b);
      iVar7 = *(int *)(param_1 + 10);
    }
    *(int *)(param_1 + 10) = iVar7 + 0x1b;
    if (*(int *)((longlong)param_1 + 0x54) < iVar7 + 0x1b) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 9,iVar7);
    }
    builtin_wcsncpy((wchar_t *)param_1[9],L"Damage resistance duration",0x1b);
  }
  return param_1;
}



// FUNCTION 140b4cb70 FUN_140b4cb70 body=790 status=ok
// SIG undefined FUN_140b4cb70(void)

undefined8 * FUN_140b4cb70(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_140b4c3f0();
  *param_1 = &PTR_FUN_1442c3670;
  FUN_142c8c260(&local_48,0x3f99999a);
  iVar5 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar5 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar5);
  }
  lVar3 = param_1[7];
  lVar4 = (longlong)iVar5 * 0x38;
  *(undefined8 *)(lVar4 + lVar3) = local_48;
  ((undefined8 *)(lVar4 + lVar3))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar3);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar3);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar4 + 0x30 + lVar3) = local_18;
  FUN_142c8c260(&local_48,0x3fc00000);
  iVar5 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar5 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar5);
  }
  lVar3 = param_1[7];
  lVar4 = (longlong)iVar5 * 0x38;
  *(undefined8 *)(lVar4 + lVar3) = local_48;
  ((undefined8 *)(lVar4 + lVar3))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar3);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar3);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar4 + 0x30 + lVar3) = local_18;
  FUN_142c8c260(&local_48,0x40000000);
  iVar5 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar5 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar5);
  }
  lVar3 = param_1[7];
  lVar4 = (longlong)iVar5 * 0x38;
  *(undefined8 *)(lVar4 + lVar3) = local_48;
  ((undefined8 *)(lVar4 + lVar3))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar3);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar3);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar4 + 0x30 + lVar3) = local_18;
  FUN_142c8c260(&local_48,0x3e99999a);
  iVar5 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 100) < iVar5 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0xb,iVar5);
  }
  lVar3 = param_1[0xb];
  lVar4 = (longlong)iVar5 * 0x38;
  *(undefined8 *)(lVar4 + lVar3) = local_48;
  ((undefined8 *)(lVar4 + lVar3))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar3);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar3);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar4 + 0x30 + lVar3) = local_18;
  FUN_142c8c260(&local_48,0x3e800000);
  iVar5 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 100) < iVar5 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0xb,iVar5);
  }
  lVar3 = param_1[0xb];
  lVar4 = (longlong)iVar5 * 0x38;
  *(undefined8 *)(lVar4 + lVar3) = local_48;
  ((undefined8 *)(lVar4 + lVar3))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar3);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar3);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar4 + 0x30 + lVar3) = local_18;
  FUN_142c8c260(&local_48,0x3e4ccccd);
  iVar5 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 100) < iVar5 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0xb,iVar5);
  }
  lVar3 = param_1[0xb];
  lVar4 = (longlong)iVar5 * 0x38;
  iVar5 = 0;
  iVar6 = 0;
  *(undefined8 *)(lVar4 + lVar3) = local_48;
  ((undefined8 *)(lVar4 + lVar3))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar3);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar3);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar4 + 0x30 + lVar3) = local_18;
  if ((wchar_t *)param_1[5] != L"Amp shot damage") {
    *(undefined4 *)(param_1 + 6) = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0x10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0x10);
      iVar5 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar5 + 0x10;
    if (*(int *)((longlong)param_1 + 0x34) < iVar5 + 0x10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5);
    }
    builtin_wcsncpy((wchar_t *)param_1[5],L"Amp shot damage",0x10);
  }
  if ((wchar_t *)param_1[9] != L"Amp shield drain percent") {
    *(undefined4 *)(param_1 + 10) = 0;
    if (*(int *)((longlong)param_1 + 0x54) != 0x19) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 9,0x19);
      iVar6 = *(int *)(param_1 + 10);
    }
    *(int *)(param_1 + 10) = iVar6 + 0x19;
    if (*(int *)((longlong)param_1 + 0x54) < iVar6 + 0x19) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 9,iVar6);
    }
    builtin_wcsncpy((wchar_t *)param_1[9],L"Amp shield drain percent",0x19);
  }
  return param_1;
}



// FUNCTION 140b4ce90 FUN_140b4ce90 body=885 status=ok
// SIG undefined FUN_140b4ce90(void)

undefined8 * FUN_140b4ce90(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_140b4c3f0();
  *param_1 = &PTR_FUN_1442c3980;
  iVar6 = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_142c8c260(&local_48,0x3dcccccd);
  iVar5 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar5 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar5);
  }
  lVar3 = param_1[7];
  lVar4 = (longlong)iVar5 * 0x38;
  *(undefined8 *)(lVar4 + lVar3) = local_48;
  ((undefined8 *)(lVar4 + lVar3))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar3);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar3);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar4 + 0x30 + lVar3) = local_18;
  FUN_142c8c260(&local_48,0x3e4ccccd);
  iVar5 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar5 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar5);
  }
  lVar3 = param_1[7];
  lVar4 = (longlong)iVar5 * 0x38;
  *(undefined8 *)(lVar4 + lVar3) = local_48;
  ((undefined8 *)(lVar4 + lVar3))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar3);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar3);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar4 + 0x30 + lVar3) = local_18;
  FUN_142c8c260(&local_48,0x3e99999a);
  iVar5 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar5 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar5);
  }
  lVar3 = param_1[7];
  lVar4 = (longlong)iVar5 * 0x38;
  *(undefined8 *)(lVar4 + lVar3) = local_48;
  ((undefined8 *)(lVar4 + lVar3))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar3);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar3);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar4 + 0x30 + lVar3) = local_18;
  FUN_142c8c260(&local_48,0x3e4ccccd);
  iVar5 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 100) < iVar5 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0xb,iVar5);
  }
  lVar3 = param_1[0xb];
  lVar4 = (longlong)iVar5 * 0x38;
  *(undefined8 *)(lVar4 + lVar3) = local_48;
  ((undefined8 *)(lVar4 + lVar3))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar3);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar3);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar4 + 0x30 + lVar3) = local_18;
  FUN_142c8c260(&local_48,0x3ecccccd);
  iVar5 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 100) < iVar5 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0xb,iVar5);
  }
  lVar3 = param_1[0xb];
  lVar4 = (longlong)iVar5 * 0x38;
  *(undefined8 *)(lVar4 + lVar3) = local_48;
  ((undefined8 *)(lVar4 + lVar3))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar3);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar3);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar4 + 0x30 + lVar3) = local_18;
  FUN_142c8c260(&local_48,0x3f4ccccd);
  iVar5 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 100) < iVar5 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0xb,iVar5);
  }
  lVar3 = param_1[0xb];
  lVar4 = (longlong)iVar5 * 0x38;
  *(undefined8 *)(lVar4 + lVar3) = local_48;
  ((undefined8 *)(lVar4 + lVar3))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar3);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar3);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar4 + 0x30 + lVar3) = local_18;
  if ((wchar_t *)param_1[5] != L"Attribute modifier value") {
    *(undefined4 *)(param_1 + 6) = 0;
    iVar5 = iVar6;
    if (*(int *)((longlong)param_1 + 0x34) != 0x19) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0x19);
      iVar5 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar5 + 0x19;
    if (*(int *)((longlong)param_1 + 0x34) < iVar5 + 0x19) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5);
    }
    builtin_wcsncpy((wchar_t *)param_1[5],L"Attribute modifier value",0x19);
  }
  if ((wchar_t *)param_1[9] != L"Chance to spawn charge") {
    *(undefined4 *)(param_1 + 10) = 0;
    if (*(int *)((longlong)param_1 + 0x54) != 0x17) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 9,0x17);
      iVar6 = *(int *)(param_1 + 10);
    }
    *(int *)(param_1 + 10) = iVar6 + 0x17;
    if (*(int *)((longlong)param_1 + 0x54) < iVar6 + 0x17) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 9);
    }
    builtin_wcsncpy((wchar_t *)param_1[9],L"Chance to spawn charge",0x17);
  }
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x40000000;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  return param_1;
}



// FUNCTION 140b4d210 FUN_140b4d210 body=1172 status=ok
// SIG undefined FUN_140b4d210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140b4d210(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  FUN_140b4c3f0();
  *(undefined4 *)(param_1 + 0x21) = 0x1030002;
  *param_1 = &PTR_FUN_1442c46c0;
  iVar6 = 0;
  param_1[0x22] = 0;
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  FUN_142d979c0(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3d) = 0x43480000;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x44fa0000;
  *(undefined4 *)(param_1 + 0x48) = 0x40000000;
  *(undefined4 *)(param_1 + 0x4c) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0x459c4000;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0x42480000;
  *(undefined4 *)(param_1 + 0x4e) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x4f) = 0x3ea8f5c3;
  *(undefined8 *)((longlong)param_1 + 0x27c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x284) = DAT_1468b5d98;
  *(undefined2 *)(param_1 + 0x51) = 1;
  *(undefined4 *)(param_1 + 0x53) = 0x3f000000;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0x3f4ccccd;
  FUN_142c8c260(&local_58,0x3f800000);
  iVar3 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar3);
  }
  lVar4 = param_1[7];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_58;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_50;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_38;
  puVar2[1] = uStack_34;
  puVar2[2] = uStack_30;
  puVar2[3] = uStack_2c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_28;
  FUN_142c8c260(&local_58,0x3f800000);
  iVar3 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar3);
  }
  lVar4 = param_1[7];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_58;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_50;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_38;
  puVar2[1] = uStack_34;
  puVar2[2] = uStack_30;
  puVar2[3] = uStack_2c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_28;
  FUN_142c8c260(&local_58,0x3f800000);
  iVar3 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar3);
  }
  lVar4 = param_1[7];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_58;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_50;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_38;
  puVar2[1] = uStack_34;
  puVar2[2] = uStack_30;
  puVar2[3] = uStack_2c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_28;
  FUN_142c8c260(&local_58,0x43480000);
  iVar3 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 100) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0xb,iVar3);
  }
  lVar4 = param_1[0xb];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_58;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_50;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_38;
  puVar2[1] = uStack_34;
  puVar2[2] = uStack_30;
  puVar2[3] = uStack_2c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_28;
  FUN_142c8c260(&local_58,0x43480000);
  iVar3 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 100) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0xb,iVar3);
  }
  lVar4 = param_1[0xb];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_58;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_50;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_38;
  puVar2[1] = uStack_34;
  puVar2[2] = uStack_30;
  puVar2[3] = uStack_2c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_28;
  FUN_142c8c260(&local_58,0x43480000);
  iVar3 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 100) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0xb,iVar3);
  }
  lVar4 = param_1[0xb];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_58;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_50;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_38;
  puVar2[1] = uStack_34;
  puVar2[2] = uStack_30;
  puVar2[3] = uStack_2c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_28;
  if ((wchar_t *)param_1[5] != L"Damage value") {
    *(undefined4 *)(param_1 + 6) = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0xd) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0xd);
      iVar6 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar6 + 0xd;
    if (*(int *)((longlong)param_1 + 0x34) < iVar6 + 0xd) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5);
    }
    builtin_wcsncpy((wchar_t *)param_1[5],L"Damage value",0xd);
  }
  if ((wchar_t *)param_1[9] != L"Damage radius") {
    *(undefined4 *)(param_1 + 10) = 0;
    if (*(int *)((longlong)param_1 + 0x54) != 0xe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 9,0xe);
      iVar7 = *(int *)(param_1 + 10);
    }
    *(int *)(param_1 + 10) = iVar7 + 0xe;
    if (*(int *)((longlong)param_1 + 0x54) < iVar7 + 0xe) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 9,iVar7);
    }
    builtin_wcsncpy((wchar_t *)param_1[9],L"Damage radius",0xe);
  }
  return param_1;
}



// FUNCTION 140b4d6b0 FUN_140b4d6b0 body=434 status=ok
// SIG undefined FUN_140b4d6b0(void)

undefined8 * FUN_140b4d6b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_140b4c3f0();
  *(undefined4 *)(param_1 + 0x21) = 0x1030002;
  *param_1 = &PTR_FUN_1442c49e0;
  iVar2 = 0;
  iVar3 = 0;
  if ((undefined *)param_1[5] != &DAT_1442b8ff0) {
    *(undefined4 *)(param_1 + 6) = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0x4d) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0x4d);
      iVar2 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar2 + 0x4d;
    if (*(int *)((longlong)param_1 + 0x34) < iVar2 + 0x4d) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5);
    }
    puVar1 = (undefined8 *)param_1[5];
    *puVar1 = 0x20006e00610043;
    puVar1[1] = 0x75002000650062;
    puVar1[2] = 0x20006400650073;
    puVar1[3] = 0x74002000730061;
    puVar1[4] = 0x76002000650068;
    puVar1[5] = 0x650075006c0061;
    puVar1[6] = 0x20006f00740020;
    puVar1[7] = 0x200079006e0061;
    puVar1[8] = 0x72007400740061;
    puVar1[9] = 0x74007500620069;
    puVar1[10] = 0x6e006900200065;
    puVar1[0xb] = 0x61006900740069;
    puVar1[0xc] = 0x65007a0069006c;
    puVar1[0xd] = 0x6e006f00200072;
    puVar1[0xe] = 0x65006800740020;
    puVar1[0xf] = 0x6d006100640020;
    *(undefined4 *)(puVar1 + 0x10) = 0x670061;
    *(undefined4 *)((longlong)puVar1 + 0x84) = 0x200065;
    *(undefined4 *)(puVar1 + 0x11) = 0x6f006d;
    *(undefined4 *)((longlong)puVar1 + 0x8c) = 0x690064;
    puVar1[0x12] = 0x72006500690066;
    *(undefined2 *)(puVar1 + 0x13) = 0;
  }
  if ((wchar_t *)param_1[9] !=
      L"Used as the Modifier Duration if UseModifierDuration is set to true") {
    *(undefined4 *)(param_1 + 10) = 0;
    if (*(int *)((longlong)param_1 + 0x54) != 0x44) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 9,0x44);
      iVar3 = *(int *)(param_1 + 10);
    }
    *(int *)(param_1 + 10) = iVar3 + 0x44;
    if (*(int *)((longlong)param_1 + 0x54) < iVar3 + 0x44) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 9,iVar3);
    }
    builtin_wcsncpy((wchar_t *)param_1[9],
                    L"Used as the Modifier Duration if UseModifierDuration is set to true",0x44);
  }
  return param_1;
}



// FUNCTION 140b4d870 FUN_140b4d870 body=599 status=ok
// SIG undefined FUN_140b4d870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140b4d870(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_140b4c3f0();
  *param_1 = &PTR_FUN_1442c4d00;
  uVar7 = uRam000000014686934c;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(uint *)((longlong)param_1 + 0x11c) = uVar7;
  uVar7 = uRam0000000146869344 & uRam0000000146869354;
  uVar8 = uRam0000000146869348 & uRam0000000146869358;
  uVar9 = uRam000000014686934c & uRam000000014686935c;
  *(uint *)(param_1 + 0x26) = _DAT_146869340 & _DAT_146869350;
  *(uint *)((longlong)param_1 + 0x134) = uVar7;
  *(uint *)(param_1 + 0x27) = uVar8;
  *(uint *)((longlong)param_1 + 0x13c) = uVar9;
  param_1[0x2b] = 0;
  uVar7 = uRam000000014686934c;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(uint *)((longlong)param_1 + 0x16c) = uVar7;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  uVar7 = uRam0000000146869344 & uRam0000000146869354;
  uVar8 = uRam0000000146869348 & uRam0000000146869358;
  uVar9 = uRam000000014686934c & uRam000000014686935c;
  *(uint *)(param_1 + 0x30) = _DAT_146869340 & _DAT_146869350;
  *(uint *)((longlong)param_1 + 0x184) = uVar7;
  *(uint *)(param_1 + 0x31) = uVar8;
  *(uint *)((longlong)param_1 + 0x18c) = uVar9;
  FUN_142c8c260(&local_48,0x3e4ccccd);
  iVar3 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar3);
  }
  lVar4 = param_1[7];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3eb33333);
  iVar3 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar3);
  }
  lVar4 = param_1[7];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3f000000);
  iVar3 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar3);
  }
  lVar4 = param_1[7];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  if ((undefined *)param_1[5] != &DAT_1442b91b0) {
    *(undefined4 *)(param_1 + 6) = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0x2b) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0x2b);
      iVar6 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar6 + 0x2b;
    if (*(int *)((longlong)param_1 + 0x34) < iVar6 + 0x2b) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5,iVar6);
    }
    puVar1 = (undefined8 *)param_1[5];
    *puVar1 = 0x6a006f00720050;
    puVar1[1] = 0x65007400630065;
    puVar1[2] = 0x68007300200064;
    puVar1[3] = 0x64006c00650069;
    puVar1[4] = 0x6d006100640020;
    puVar1[5] = 0x20006500670061;
    puVar1[6] = 0x69007300650072;
    puVar1[7] = 0x6e006100740073;
    puVar1[8] = 0x70002000650063;
    puVar1[9] = 0x65006300720065;
    *(undefined4 *)(puVar1 + 10) = 0x74006e;
    *(undefined2 *)((longlong)puVar1 + 0x54) = 0;
  }
  return param_1;
}



// FUNCTION 140b4dad0 FUN_140b4dad0 body=466 status=ok
// SIG undefined FUN_140b4dad0(void)

undefined8 * FUN_140b4dad0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_140b4c3f0();
  *param_1 = &PTR_FUN_1442c5010;
  iVar6 = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  FUN_142c8c260(&local_48,0x3e19999a);
  iVar3 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar3);
  }
  lVar4 = param_1[7];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3e99999a);
  iVar3 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar3);
  }
  lVar4 = param_1[7];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3ee66666);
  iVar3 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x44) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 7,iVar3);
  }
  lVar4 = param_1[7];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  if ((undefined *)param_1[5] != &DAT_1442bbc30) {
    *(undefined4 *)(param_1 + 6) = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0x13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0x13);
      iVar6 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar6 + 0x13;
    if (*(int *)((longlong)param_1 + 0x34) < iVar6 + 0x13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5,iVar6);
    }
    puVar1 = (undefined8 *)param_1[5];
    *puVar1 = 0x69007300650052;
    puVar1[1] = 0x6e006100740073;
    puVar1[2] = 0x70002000650063;
    puVar1[3] = 0x65006300720065;
    *(undefined4 *)(puVar1 + 4) = 0x74006e;
    *(undefined2 *)((longlong)puVar1 + 0x24) = 0;
  }
  return param_1;
}



// FUNCTION 140b4dcb0 FUN_140b4dcb0 body=394 status=ok
// SIG undefined FUN_140b4dcb0(void)

undefined8 * FUN_140b4dcb0(undefined8 *param_1)

{
  int iVar1;
  
  FUN_140b4c3f0();
  iVar1 = 0;
  *param_1 = &PTR_FUN_1442c5320;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f800000;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0x3f800000;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  if ((wchar_t *)param_1[5] != L"Return damage value") {
    *(undefined4 *)(param_1 + 6) = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0x14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0x14);
      iVar1 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar1 + 0x14;
    if (*(int *)((longlong)param_1 + 0x34) < iVar1 + 0x14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5);
    }
    builtin_wcsncpy((wchar_t *)param_1[5],L"Return damage value",0x14);
  }
  return param_1;
}



// FUNCTION 140b4de40 FUN_140b4de40 body=43 status=ok
// SIG undefined FUN_140b4de40(void)

undefined8 * FUN_140b4de40(undefined8 *param_1)

{
  FUN_140b4c3f0();
  *(undefined4 *)(param_1 + 0x21) = 0x1030002;
  *param_1 = &PTR_FUN_1442c43a0;
  return param_1;
}



// FUNCTION 140b4de70 UAnimNotifyState body=37 status=ok
// SIG undefined UAnimNotifyState(void)

undefined8 * UAnimNotifyState::UAnimNotifyState(undefined8 *param_1)

{
  FUN_1417818c0();
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_1442c5d80;
  return param_1;
}



// FUNCTION 140b4dea0 FUN_140b4dea0 body=86 status=ok
// SIG undefined FUN_140b4dea0(void)

undefined8 * FUN_140b4dea0(undefined8 *param_1)

{
  FUN_1417818c0();
  *(undefined1 *)(param_1 + 5) = 1;
  *param_1 = &PTR_FUN_1442c6040;
  *(undefined4 *)(param_1 + 6) = 0x40c00000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 10;
  *(undefined4 *)(param_1 + 7) = 0x3f666666;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 8) = 0x3fa66666;
  *(undefined4 *)(param_1 + 9) = 0x44af0000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x40c00000;
  return param_1;
}



// FUNCTION 140b4df00 FUN_140b4df00 body=37 status=ok
// SIG undefined FUN_140b4df00(void)

undefined8 * FUN_140b4df00(undefined8 *param_1)

{
  FUN_1417818c0();
  *(undefined1 *)(param_1 + 5) = 1;
  *param_1 = &PTR_FUN_1442c6d78;
  return param_1;
}



// FUNCTION 140b4df30 FUN_140b4df30 body=106 status=ok
// SIG undefined FUN_140b4df30(void)

undefined8 * FUN_140b4df30(undefined8 *param_1)

{
  FUN_1417818c0();
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_1442c75b8;
  FUN_142d2e580(param_1 + 8);
  FUN_142d2e580(param_1 + 0x1f);
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined4 *)(param_1 + 7) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x37) = 0x44af0000;
  *(undefined4 *)(param_1 + 0x36) = 0x40a00000;
  return param_1;
}



// FUNCTION 140b4dfa0 FUN_140b4dfa0 body=97 status=ok
// SIG undefined FUN_140b4dfa0(void)

undefined8 * FUN_140b4dfa0(undefined8 *param_1)

{
  FUN_1417818c0();
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1442c72f8;
  param_1[7] = 0;
  FUN_142d2e580(param_1 + 9);
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0x42200000;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x20) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3f000000;
  return param_1;
}



// FUNCTION 140b4e010 FUN_140b4e010 body=113 status=ok
// SIG undefined FUN_140b4e010(void)

undefined8 * FUN_140b4e010(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR_FUN_1442c7878;
  param_1[6] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xc1f00000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  param_1[10] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  return param_1;
}



// FUNCTION 140b4e090 FUN_140b4e090 body=52 status=ok
// SIG undefined FUN_140b4e090(void)

undefined8 * FUN_140b4e090(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR_FUN_1442c7b38;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined4 *)(param_1 + 7) = 0x41200000;
  return param_1;
}



// FUNCTION 140b4e0d0 FUN_140b4e0d0 body=37 status=ok
// SIG undefined FUN_140b4e0d0(void)

undefined8 * FUN_140b4e0d0(undefined8 *param_1)

{
  FUN_1417818c0();
  *(undefined1 *)(param_1 + 5) = 1;
  *param_1 = &PTR_FUN_1442c6ab8;
  return param_1;
}



// FUNCTION 140b4e100 FUN_140b4e100 body=37 status=ok
// SIG undefined FUN_140b4e100(void)

undefined8 * FUN_140b4e100(undefined8 *param_1)

{
  FUN_1417818c0();
  *(undefined1 *)(param_1 + 5) = 1;
  *param_1 = &PTR_FUN_1442c7038;
  return param_1;
}



// FUNCTION 140b4e130 FUN_140b4e130 body=44 status=ok
// SIG undefined FUN_140b4e130(void)

undefined8 * FUN_140b4e130(undefined8 *param_1)

{
  FUN_1417818c0();
  *(undefined4 *)(param_1 + 7) = 0x3f266666;
  *param_1 = &PTR__scalar_deleting_destructor__1442c7df8;
  *(undefined1 *)(param_1 + 5) = 1;
  return param_1;
}



// FUNCTION 140b4e160 FUN_140b4e160 body=63 status=ok
// SIG undefined FUN_140b4e160(void)

_Order_node_base<Concurrency::agent_status> *
FUN_140b4e160(_Order_node_base<Concurrency::agent_status> *param_1)

{
  Concurrency::_Order_node_base<Concurrency::agent_status>::
  _Order_node_base<Concurrency::agent_status>(param_1);
  *(undefined ***)param_1 = &PTR_FUN_1442c9260;
  *(undefined ***)(param_1 + 0x130) = &PTR_LAB_1442c9518;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  return param_1;
}



// FUNCTION 140b4e1a0 FUN_140b4e1a0 body=267 status=ok
// SIG undefined FUN_140b4e1a0(void)

_Order_node_base<Concurrency::agent_status> *
FUN_140b4e1a0(_Order_node_base<Concurrency::agent_status> *param_1)

{
  Concurrency::_Order_node_base<Concurrency::agent_status>::
  _Order_node_base<Concurrency::agent_status>(param_1);
  *(undefined ***)param_1 = &PTR_FUN_1442c9530;
  *(undefined ***)(param_1 + 0x130) = &PTR_LAB_1442c97e8;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x1bc)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1b0,0);
  }
  if (*(undefined2 **)(param_1 + 0x1b0) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x1b0) = 0;
  }
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  if ((*(int *)(param_1 + 0x1e4) < 0) && (*(int *)(param_1 + 0x1e4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1d8,0);
  }
  if (*(undefined2 **)(param_1 + 0x1d8) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x1d8) = 0;
  }
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  return param_1;
}



// FUNCTION 140b4e2b0 FUN_140b4e2b0 body=95 status=ok
// SIG undefined FUN_140b4e2b0(void)

void FUN_140b4e2b0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 6;
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



// FUNCTION 140b4e310 ~TArray<FCompositeSubFont,FDefaultAllocator> body=109 status=ok
// SIG undefined ~TArray<FCompositeSubFont,FDefaultAllocator>(void)

void TArray<FCompositeSubFont,FDefaultAllocator>::~TArray<FCompositeSubFont,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  lVar1 = *param_1;
  if (iVar2 != 0) {
    do {
      if (*(longlong *)(lVar1 + 0x28) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar1 + 0x18) != 0) {
        FMemory::Free();
      }
      FUN_140b4e2b0(lVar1);
      lVar1 = lVar1 + 0x38;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 140b4e380 FUN_140b4e380 body=206 status=ok
// SIG undefined FUN_140b4e380(void)

void FUN_140b4e380(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0xb8);
    do {
      if (plVar2[3] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-2] != 0) {
        FMemory::Free();
      }
      if (plVar2[-4] != 0) {
        FMemory::Free();
      }
      if (plVar2[-6] != 0) {
        FMemory::Free();
      }
      if (plVar2[-0xe] != 0) {
        FMemory::Free();
      }
      if (plVar2[-0x10] != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (plVar2 + -0x13);
      plVar2 = plVar2 + 0x1c;
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



// FUNCTION 140b4e450 FUN_140b4e450 body=221 status=ok
// SIG undefined FUN_140b4e450(void)

void FUN_140b4e450(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  lVar1 = *param_1;
  iVar7 = (int)param_1[1];
  if (iVar7 != 0) {
    plVar6 = (longlong *)(lVar1 + 8);
    do {
      iVar3 = (int)plVar6[1];
      lVar1 = *plVar6;
      if (iVar3 != 0) {
        plVar4 = (longlong *)(lVar1 + 8);
        do {
          iVar5 = (int)plVar4[1];
          lVar1 = *plVar4;
          if (iVar5 != 0) {
            plVar2 = (longlong *)(lVar1 + 0x20);
            do {
              if (*plVar2 != 0) {
                FMemory::Free();
              }
              plVar2 = plVar2 + 6;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            lVar1 = *plVar4;
          }
          if (lVar1 != 0) {
            FMemory::Free();
          }
          plVar4 = plVar4 + 3;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        lVar1 = *plVar6;
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140b4e530 ~FChampionshipBeltLayerData body=146 status=ok
// SIG undefined ~FChampionshipBeltLayerData(void)

void FChampionshipBeltLayerData::~FChampionshipBeltLayerData(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[4];
  if (plVar4 == (longlong *)0x0) {
    *param_1 = IDelegateInstance::vftable;
    return;
  }
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
    *param_1 = IDelegateInstance::vftable;
    return;
  }
  *param_1 = IDelegateInstance::vftable;
  return;
}



// FUNCTION 140b4e5d0 ~_Tree<std::_Tmap_traits<void_*,OpenMesh::basic_multiplex_target_*,std::less<void_*>,std::allocator<std::pair<void_*_const,OpenMesh::basic_multiplex_target_*>_>,0>_> body=146 status=ok
// SIG undefined ~_Tree<std::_Tmap_traits<void_*,OpenMesh::basic_multiplex_target_*,std::less<void_*>,std::allocator<std::pair<void_*_const,OpenMesh::basic_multiplex_target_*>_>,0>_>(void)

void std::
     _Tree<std::_Tmap_traits<void_*,OpenMesh::basic_multiplex_target_*,std::less<void_*>,std::allocator<std::pair<void_*_const,OpenMesh::basic_multiplex_target_*>_>,0>_>
     ::
     ~_Tree<std::_Tmap_traits<void_*,OpenMesh::basic_multiplex_target_*,std::less<void_*>,std::allocator<std::pair<void_*_const,OpenMesh::basic_multiplex_target_*>_>,0>_>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  plVar4 = *(longlong **)(lVar1 + 8);
  lVar3 = lVar1;
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    do {
      _Tree<std::_Tmap_traits<OpenMesh::VectorT<float,3>,OpenMesh::VertexHandle,OpenMesh::IO::CmpVec,std::allocator<std::pair<OpenMesh::VectorT<float,3>_const_,OpenMesh::VertexHandle>_>,0>_>
      ::_Erase(param_1,plVar4[2]);
      plVar2 = (longlong *)*plVar4;
      FMemory::operator_delete(plVar4,0x30);
      plVar4 = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  FMemory::operator_delete(*param_1,0x30);
  return;
}



// FUNCTION 140b4e670 FUN_140b4e670 body=101 status=ok
// SIG undefined FUN_140b4e670(void)

void FUN_140b4e670(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x660) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x460) = &PTR_FUN_14407f310;
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_143fe0658;
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 140b4e6e0 FUN_140b4e6e0 body=98 status=ok
// SIG undefined FUN_140b4e6e0(void)

void FUN_140b4e6e0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x40);
  return;
}



// FUNCTION 140b4e750 operator= body=122 status=ok
// SIG undefined operator=(void)

longlong *
TArray<FMaterialSlotEntry,TSizedDefaultAllocator<32>_>::operator=
          (longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = (int)param_1[1];
    if (iVar2 != 0) {
      plVar1 = (longlong *)(*param_1 + 0x18);
      do {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        plVar1 = plVar1 + 6;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    TArray<FMovieSceneObjectPathChannelKeyValue,FDefaultAllocator>::
    CopyToEmpty<FMovieSceneObjectPathChannelKeyValue>
              (param_1,*param_2,(int)param_2[1],*(undefined4 *)((longlong)param_1 + 0xc),0);
  }
  return param_1;
}



// FUNCTION 140b4e7d0 operator= body=502 status=ok
// SIG undefined operator=(void)

longlong *
TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::operator=
          (longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::ConditionalRehash
                      (param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140b4e92b;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_140b4e92b:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        FUN_14058c5a0(param_1,local_res8,(longlong)iStack_4c * 0x10 + *param_2,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 140b4e9d0 FUN_140b4e9d0 body=475 status=ok
// SIG undefined FUN_140b4e9d0(void)

longlong FUN_140b4e9d0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  uVar1 = *(undefined4 *)(param_2 + 0x84);
  uVar2 = *(undefined4 *)(param_2 + 0x88);
  uVar3 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x98);
  uVar3 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
  *(undefined1 *)(param_1 + 0xb1) = *(undefined1 *)(param_2 + 0xb1);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
  FUN_140a29610(param_1 + 0xd0,param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)(param_1 + 0xec) = *(undefined8 *)(param_2 + 0xec);
  uVar4 = *(undefined8 *)(param_2 + 0xfc);
  *(undefined8 *)(param_1 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
  *(undefined8 *)(param_1 + 0xfc) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x10c);
  *(undefined8 *)(param_1 + 0x104) = *(undefined8 *)(param_2 + 0x104);
  *(undefined8 *)(param_1 + 0x10c) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x11c);
  *(undefined8 *)(param_1 + 0x114) = *(undefined8 *)(param_2 + 0x114);
  *(undefined8 *)(param_1 + 0x11c) = uVar4;
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(byte *)(param_1 + 0x138) =
       *(byte *)(param_1 + 0x138) ^ (*(byte *)(param_2 + 0x138) ^ *(byte *)(param_1 + 0x138)) & 1;
  return param_1;
}



// FUNCTION 140b4ebb0 FUN_140b4ebb0 body=435 status=ok
// SIG undefined FUN_140b4ebb0(void)

undefined8 * FUN_140b4ebb0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong *plVar3;
  int iVar4;
  
  plVar1 = param_1 + 1;
  *param_1 = *param_2;
  if (plVar1 != param_2 + 1) {
    iVar4 = *(int *)(param_1 + 2);
    if (iVar4 != 0) {
      plVar3 = (longlong *)(*plVar1 + 0x38);
      do {
        if (plVar3[2] != 0) {
          FMemory::Free();
        }
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (plVar3 + -3);
        plVar3 = plVar3 + 0xc;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_1409f0540(plVar1,param_2[1],*(undefined4 *)(param_2 + 2),
                  *(undefined4 *)((longlong)param_1 + 0x14),0);
  }
  puVar2 = param_1 + 0xb;
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((longlong)param_1 + 0x31) = *(undefined1 *)((longlong)param_2 + 0x31);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  if (puVar2 != param_2 + 0xb) {
    iVar4 = *(int *)(param_2 + 0xc);
    _Src = (void *)param_2[0xb];
    *(int *)(param_1 + 0xc) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 100) == 0)) {
      *(undefined4 *)((longlong)param_1 + 100) = 0;
    }
    else {
      TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy(puVar2,iVar4);
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar4 * 0x48);
    }
  }
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  param_1[0xe] = param_2[0xe];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xf,param_2 + 0xf);
  param_1[0x11] = param_2[0x11];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  param_1[0x14] = param_2[0x14];
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x15,param_2 + 0x15);
  return param_1;
}



// FUNCTION 140b4ed70 FUN_140b4ed70 body=208 status=ok
// SIG undefined FUN_140b4ed70(void)

undefined8 * FUN_140b4ed70(longlong *param_1,float *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong local_res8;
  
  puVar1 = (undefined8 *)*param_1;
  puVar5 = puVar1;
  if (*(char *)((longlong)puVar1[1] + 0x19) == '\0') {
    puVar2 = (undefined8 *)puVar1[1];
    do {
      if (*param_2 < *(float *)((longlong)puVar2 + 0x1c) ||
          *param_2 == *(float *)((longlong)puVar2 + 0x1c)) {
        puVar3 = (undefined8 *)*puVar2;
        puVar5 = puVar2;
      }
      else {
        puVar3 = (undefined8 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x19) == '\0');
  }
  if ((puVar5 != puVar1) &&
     (*(float *)((longlong)puVar5 + 0x1c) < *param_2 ||
      *(float *)((longlong)puVar5 + 0x1c) == *param_2)) {
    return puVar5 + 4;
  }
  plVar4 = (longlong *)operator_new(0x30);
  *plVar4 = *param_1;
  plVar4[1] = *param_1;
  plVar4[2] = *param_1;
  *(undefined2 *)(plVar4 + 3) = 0;
  *(float *)((longlong)plVar4 + 0x1c) = *param_2;
  plVar4[4] = 0;
  *(undefined4 *)(plVar4 + 5) = 0;
  FUN_140b4a1f0(param_1,&local_res8,puVar5,(float *)((longlong)plVar4 + 0x1c),plVar4);
  return (undefined8 *)(local_res8 + 0x20);
}



// FUNCTION 140b4ee40 FUN_140b4ee40 body=755 status=ok
// SIG undefined FUN_140b4ee40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b4ee40(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  longlong *local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar3 = FWeakObjectPtr::Get();
  plVar4 = (longlong *)FWeakObjectPtr::Get((undefined4 *)(param_1 + 8));
  if ((lVar3 != 0) && (plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x310))(plVar4,1);
    if (*(char *)(lVar3 + 0x581) == '\x01') {
      lVar5 = 0x920;
    }
    else {
      lVar5 = 0x910;
      if (*(char *)(lVar3 + 0x581) == '\x02') {
        lVar5 = 0x930;
      }
    }
    puVar8 = *(undefined8 **)(lVar5 + lVar3);
    puVar6 = puVar8 + (longlong)*(int *)(lVar5 + 8 + lVar3) * 8;
    for (; puVar8 != puVar6; puVar8 = puVar8 + 8) {
      if ((longlong *)*puVar8 == plVar4) {
        if (*(char *)(param_1 + 0x10) != '\0') {
          uVar1 = *(undefined4 *)(param_1 + 8);
          uVar2 = *(undefined4 *)(param_1 + 0xc);
          local_d8 = (longlong *)0x0;
          local_d0 = 0;
          local_c8 = FUN_140b582a0;
          uStack_c0 = 0;
          plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
          if (plVar4 == (longlong *)0x0) {
            if (((local_d0 != 0) && (local_d8 != (longlong *)0x0)) &&
               ((**(code **)(*local_d8 + 0x28))(local_d8,0), local_d8 != (longlong *)0x0)) {
              local_d8 = (longlong *)FMemory::Realloc(local_d8,0,0);
            }
          }
          else {
            *plVar4 = (longlong)&PTR_FUN_144230918;
            FWeakObjectPtr::operator=(plVar4 + 1,lVar3);
            *(undefined4 *)(plVar4 + 2) = (undefined4)local_c8;
            *(undefined4 *)((longlong)plVar4 + 0x14) = local_c8._4_4_;
            *(undefined4 *)(plVar4 + 3) = uStack_c0;
            *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_bc;
            *(undefined4 *)(plVar4 + 4) = uVar1;
            *(undefined4 *)((longlong)plVar4 + 0x24) = uVar2;
            lVar5 = FDelegateHandle::GenerateNewID();
            plVar4[5] = lVar5;
            *plVar4 = (longlong)&PTR_FUN_144230960;
            FUN_140a884e0(plVar4,&local_d8);
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x28))(plVar4,0);
            lVar5 = FMemory::Realloc(plVar4,0,0);
            if (lVar5 != 0) {
              FMemory::Free(lVar5);
            }
          }
          uVar1 = *(undefined4 *)(lVar3 + 0x64c);
          uVar7 = AActor::GetWorldTimerManager(lVar3);
          local_b8 = 0;
          local_b0 = 0;
          if ((local_d0 != 0) && (local_d8 != (longlong *)0x0)) {
            (**(code **)(*local_d8 + 0x30))(local_d8,&local_b8);
          }
          FWeakObjectPtr::operator=(local_a8,0);
          local_e0 = 0xbf800000;
          local_e8 = 0;
          local_a0 = 0;
          local_68 = (longlong *)0x0;
          local_58 = 0;
          local_98 = AK::MemoryMgr::StartProfileThreadUsage;
          FUN_142880850(uVar7,puVar8 + 5,&local_b8,uVar1);
          if (local_58 != 0) {
            plVar4 = local_88;
            if (local_68 != (longlong *)0x0) {
              plVar4 = local_68;
            }
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x10))(plVar4,0);
            }
          }
          if (local_68 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
          if (local_d0 != 0) {
            if (local_d8 == (longlong *)0x0) goto LAB_140b4f0f5;
            (**(code **)(*local_d8 + 0x28))(local_d8,0);
            if (local_d8 != (longlong *)0x0) {
              local_d8 = (longlong *)FMemory::Realloc(local_d8,0,0);
            }
            local_d0 = 0;
          }
          if (local_d8 != (longlong *)0x0) {
            FMemory::Free(local_d8);
          }
        }
LAB_140b4f0f5:
        FUN_140b6bdb0(lVar3,puVar8,*(undefined4 *)(lVar3 + 0x650));
        break;
      }
    }
    FUN_140b73210(lVar3);
  }
  return;
}



// FUNCTION 140b4f140 FUN_140b4f140 body=855 status=ok
// SIG undefined FUN_140b4f140(void)

void FUN_140b4f140(longlong param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  lVar5 = FWeakObjectPtr::Get();
  if (lVar5 == 0) {
    return;
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar5 == 0) {
    return;
  }
  uVar6 = FWeakObjectPtr::Get(param_1);
  lVar5 = FUN_140a63ba0(uVar6);
  if (lVar5 == 0) {
    return;
  }
  lVar5 = FWeakObjectPtr::Get(param_1);
  if (*(longlong *)(lVar5 + 0x118) == 0) goto LAB_140b4f37c;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar5 = DAT_146b33f38;
  lVar11 = DAT_146b33f38 + 0xa0;
  lVar7 = FWeakObjectPtr::Get(lVar11);
  if (lVar7 == 0) {
    LOCK();
    iVar2 = 0;
    if (DAT_1464b56f4 != 0) {
      iVar2 = DAT_1464b56f4;
    }
    DAT_1464b56f4 = iVar2;
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar5 + 0xa8)) || (*(longlong *)(lVar5 + 0xb0) == 0))
    goto LAB_140b4f37c;
    lVar7 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar11,lVar7);
    if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar5 + 0xa8) = DAT_1464b56f4;
    }
    lVar7 = FWeakObjectPtr::Get(lVar11);
    if (lVar7 == 0) goto LAB_140b4f37c;
  }
  lVar5 = FUN_1413bd170();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar6 = FUN_142e1a5a0();
    lVar5 = FWeakObjectPtr::Get(param_1);
    lVar5 = AGameStateBase::OnRep_GameModeClass(*(undefined8 *)(lVar5 + 0x118),uVar6);
    if (lVar5 != 0) {
      lVar11 = FUN_142e1a5a0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_142d62190(lVar5,&local_68,*(undefined8 *)(lVar7 + 0x1d0));
        cVar3 = FUN_142d52a00(&local_68);
        if (cVar3 != '\0') {
          uVar6 = FUN_142d52a20(&local_68);
          uVar6 = FArchive::operator<<(uVar6);
          fVar14 = (float)FUN_142d61c30(uVar6);
          if (fVar14 == 0.0) {
            plVar8 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
            local_48 = local_68;
            uStack_44 = uStack_64;
            uStack_40 = uStack_60;
            uStack_3c = uStack_5c;
            local_38 = local_58;
            uVar6 = FWeakObjectPtr::Get(param_1);
            (**(code **)(*plVar8 + 0x2a0))(plVar8,uVar6,&local_48,*(undefined8 *)(param_1 + 0x10));
            return;
          }
        }
      }
    }
  }
LAB_140b4f37c:
  uVar6 = FWeakObjectPtr::Get(param_1);
  bVar4 = FUN_140b2cbe0(uVar6,1);
  if (1 < bVar4) {
    lVar5 = FWeakObjectPtr::Get(param_1 + 8);
    puVar12 = *(undefined8 **)(lVar5 + 0x148);
    puVar13 = puVar12 + (longlong)*(int *)(lVar5 + 0x150) * 4;
    for (; puVar12 != puVar13; puVar12 = puVar12 + 4) {
      lVar5 = FWeakObjectPtr::Get(param_1 + 8);
      uVar6 = *(undefined8 *)(lVar5 + 0x10);
      uVar9 = FWeakObjectPtr::Get(param_1);
      cVar3 = FUN_140b2f320(uVar9,*puVar12,uVar6,4);
      if (cVar3 == '\0') {
        lVar5 = FWeakObjectPtr::Get(param_1 + 8);
        uVar6 = *(undefined8 *)(lVar5 + 0x10);
        lVar5 = FWeakObjectPtr::Get(param_1);
        uVar9 = *(undefined8 *)(lVar5 + 0x118);
        uVar10 = FWeakObjectPtr::Get(param_1);
        uVar15 = FUN_140b5df20(puVar12,*(undefined8 *)(param_1 + 0x10));
        FUN_140b1a410(uVar10,*puVar12,uVar9,uVar15,*(undefined1 *)(puVar12 + 1),uVar6,4);
      }
    }
  }
  return;
}



// FUNCTION 140b4f4a0 FUN_140b4f4a0 body=37 status=ok
// SIG undefined FUN_140b4f4a0(void)

ulonglong FUN_140b4f4a0(undefined8 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (((char)*piVar1 == '\0') &&
     (piVar1 = (int *)param_1[3], *piVar1 <= *(int *)param_1[2] + *(int *)param_1[1])) {
    return (ulonglong)piVar1 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)piVar1 >> 8),1);
}



// FUNCTION 140b4f4d0 FUN_140b4f4d0 body=1246 status=ok
// SIG undefined FUN_140b4f4d0(void)

bool FUN_140b4f4d0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_a4;
  undefined8 local_9c;
  float local_94;
  
  lVar3 = *param_1;
  if (*(longlong *)(lVar3 + 0x168) == 0) {
    local_94 = (float)DAT_1464aa7b0;
    puVar2 = &local_9c;
    local_9c = DAT_1464aa7a8;
  }
  else {
    puVar2 = (undefined8 *)FUN_142369f10(*(longlong *)(lVar3 + 0x168),&local_9c);
    lVar3 = *param_1;
  }
  fVar8 = (float)*puVar2;
  fVar12 = *(float *)(puVar2 + 1);
  fStack_a4 = (float)((ulonglong)*puVar2 >> 0x20);
  fVar4 = fVar8 * fVar8 + fStack_a4 * fStack_a4 + fVar12 * fVar12;
  fVar11 = fStack_a4;
  fVar14 = fVar8;
  fVar7 = fVar12;
  if ((fVar4 != 1.0) &&
     (fVar11 = DAT_1468b5d94, fVar14 = DAT_1468b5d90, fVar7 = DAT_1468b5d98, 1e-08 <= fVar4)) {
    auVar10 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar7 = auVar10._0_4_;
    fVar7 = fVar7 + fVar7 * (0.5 - fVar4 * 0.5 * fVar7 * fVar7);
    fVar7 = fVar7 + fVar7 * (0.5 - fVar4 * 0.5 * fVar7 * fVar7);
    fVar11 = fStack_a4 * fVar7;
    fVar14 = fVar8 * fVar7;
    fVar7 = fVar12 * fVar7;
  }
  lVar3 = *(longlong *)(lVar3 + 0x168);
  if (lVar3 == 0) {
    local_94 = DAT_1468b5d98;
    local_9c._0_4_ = DAT_1468b5d90;
    local_9c._4_4_ = DAT_1468b5d94;
  }
  else {
    local_94 = *(float *)(lVar3 + 0x228);
    local_9c._0_4_ = *(float *)(lVar3 + 0x220);
    local_9c._4_4_ = *(float *)(lVar3 + 0x224);
  }
  fVar8 = local_94;
  fVar4 = local_9c._4_4_;
  fVar12 = (float)local_9c;
  lVar1 = *(longlong *)(param_2 + 0x168);
  if (lVar1 == 0) {
    local_94 = DAT_1468b5d98;
    local_9c._0_4_ = DAT_1468b5d90;
    local_9c._4_4_ = DAT_1468b5d94;
  }
  else {
    local_94 = *(float *)(lVar1 + 0x228);
    local_9c._0_4_ = *(float *)(lVar1 + 0x220);
    local_9c._4_4_ = *(float *)(lVar1 + 0x224);
  }
  local_9c._4_4_ = local_9c._4_4_ - fVar4;
  local_9c._0_4_ = (float)local_9c - fVar12;
  local_94 = local_94 - fVar8;
  fVar5 = local_9c._4_4_ * local_9c._4_4_ + (float)local_9c * (float)local_9c + local_94 * local_94;
  fVar12 = local_9c._4_4_;
  fVar4 = (float)local_9c;
  fVar8 = local_94;
  if ((fVar5 != 1.0) &&
     (fVar12 = DAT_1468b5d94, fVar4 = DAT_1468b5d90, fVar8 = DAT_1468b5d98, 1e-08 <= fVar5)) {
    auVar10 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar8 = auVar10._0_4_;
    fVar8 = fVar8 + fVar8 * (0.5 - fVar5 * 0.5 * fVar8 * fVar8);
    fVar8 = fVar8 + fVar8 * (0.5 - fVar5 * 0.5 * fVar8 * fVar8);
    fVar12 = local_9c._4_4_ * fVar8;
    fVar4 = (float)local_9c * fVar8;
    fVar8 = local_94 * fVar8;
  }
  if (lVar3 == 0) {
    local_9c._0_4_ = DAT_1468b5d90;
    local_9c._4_4_ = DAT_1468b5d94;
    local_94 = DAT_1468b5d98;
  }
  else {
    local_9c._0_4_ = *(float *)(lVar3 + 0x220);
    local_9c._4_4_ = *(float *)(lVar3 + 0x224);
    local_94 = *(float *)(lVar3 + 0x228);
  }
  fVar9 = local_94;
  fVar13 = local_9c._4_4_;
  fVar5 = (float)local_9c;
  lVar3 = *(longlong *)(param_3 + 0x168);
  if (lVar3 == 0) {
    local_9c._0_4_ = DAT_1468b5d90;
    local_9c._4_4_ = DAT_1468b5d94;
    local_94 = DAT_1468b5d98;
  }
  else {
    local_9c._0_4_ = *(float *)(lVar3 + 0x220);
    local_9c._4_4_ = *(float *)(lVar3 + 0x224);
    local_94 = *(float *)(lVar3 + 0x228);
  }
  local_9c._4_4_ = local_9c._4_4_ - fVar13;
  local_9c._0_4_ = (float)local_9c - fVar5;
  local_94 = local_94 - fVar9;
  fVar6 = local_9c._4_4_ * local_9c._4_4_ + (float)local_9c * (float)local_9c + local_94 * local_94;
  fVar5 = local_94;
  fVar13 = local_9c._4_4_;
  fVar9 = (float)local_9c;
  if ((fVar6 != 1.0) &&
     (fVar5 = DAT_1468b5d98, fVar13 = DAT_1468b5d94, fVar9 = DAT_1468b5d90, 1e-08 <= fVar6)) {
    auVar10 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar9 = auVar10._0_4_;
    fVar9 = fVar9 + fVar9 * (0.5 - fVar6 * 0.5 * fVar9 * fVar9);
    fVar9 = fVar9 + fVar9 * (0.5 - fVar6 * 0.5 * fVar9 * fVar9);
    fVar5 = local_94 * fVar9;
    fVar13 = local_9c._4_4_ * fVar9;
    fVar9 = (float)local_9c * fVar9;
  }
  return fVar11 * fVar13 + fVar14 * fVar9 + fVar5 * fVar7 <=
         fVar14 * fVar4 + fVar11 * fVar12 + fVar7 * fVar8;
}



// FUNCTION 140b4f9b0 FUN_140b4f9b0 body=314 status=ok
// SIG undefined FUN_140b4f9b0(void)

void FUN_140b4f9b0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  
  puVar11 = (undefined8 *)*param_2;
  puVar12 = puVar11 + (longlong)(int)param_2[1] * 4;
  for (; puVar11 != puVar12; puVar11 = puVar11 + 4) {
    local_88 = *puVar11;
    iVar2 = *(int *)(puVar11 + 3);
    uStack_80 = *(undefined1 *)(puVar11 + 1);
    if (iVar2 < 1) {
      uVar14 = 0;
    }
    else {
      iVar10 = *(int *)(*param_1 + 8) + -1;
      if ((iVar10 < 0) || (iVar2 <= iVar10)) {
        iVar10 = iVar2 + -1;
      }
      uVar14 = FUN_142c98860((longlong)iVar10 * 0x38 + puVar11[2],0);
    }
    FUN_142c8c260(&local_c8,uVar14);
    uVar9 = uStack_a0;
    uVar8 = local_a8;
    uVar7 = uStack_b0;
    uVar6 = local_b8;
    uVar5 = uStack_c0;
    uVar4 = local_c8;
    iVar2 = (int)param_3[1];
    lVar13 = (longlong)iVar2;
    *(int *)(param_3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
    }
    lVar3 = *param_3;
    puVar1 = (undefined8 *)(lVar3 + lVar13 * 0x48);
    *puVar1 = local_88;
    puVar1[1] = CONCAT71(uStack_7f,uStack_80);
    puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar13 * 0x48);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar13 * 0x48);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar13 * 0x48);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    *(undefined8 *)(lVar3 + 0x40 + lVar13 * 0x48) = local_98;
  }
  return;
}



// FUNCTION 140b4fbd0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FChampionshipBeltLayerData::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FChampionshipBeltLayerData();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140b4fc10 FUN_140b4fc10 body=104 status=ok
// SIG undefined FUN_140b4fc10(void)

longlong FUN_140b4fc10(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x490) = &PTR_FUN_143fe0658;
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a8);
  }
  return param_1;
}



// FUNCTION 140b4fc80 FUN_140b4fc80 body=52 status=ok
// SIG undefined FUN_140b4fc80(void)

undefined8 FUN_140b4fc80(undefined8 param_1,ulonglong param_2)

{
  FUN_140aee220();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4d0);
  }
  return param_1;
}



// FUNCTION 140b4fcc0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 AAbstractNavData::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140aee220();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4e8);
  }
  return param_1;
}



// FUNCTION 140b4fd00 FUN_140b4fd00 body=113 status=ok
// SIG undefined FUN_140b4fd00(void)

longlong FUN_140b4fd00(longlong param_1,ulonglong param_2)

{
  FUN_1406d8b70(param_1 + 0x738);
  if (*(longlong *)(param_1 + 0x6b8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x688) = &PTR_FUN_1441b4f70;
  *(undefined ***)(param_1 + 0x680) = &PTR_CanBeUsedOnAnyThread_1442a2ad8;
  FUN_140b4e670(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x838);
  }
  return param_1;
}



// FUNCTION 140b4fd80 FUN_140b4fd80 body=80 status=ok
// SIG undefined FUN_140b4fd80(void)

longlong FUN_140b4fd80(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x668) = &PTR_FUN_143fce298;
  *(undefined ***)(param_1 + 0x660) = &PTR_FUN_1441b4c68;
  FUN_140a51170();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6c8);
  }
  return param_1;
}



// FUNCTION 140b4fdd0 FUN_140b4fdd0 body=298 status=ok
// SIG undefined FUN_140b4fdd0(void)

longlong FUN_140b4fdd0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x940) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x930) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x920) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x910) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8b0) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 0x830);
  if (*(longlong *)(param_1 + 0x820) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 0x7a0);
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x538) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x528) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x518) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x500);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4e8);
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_1441b39a8;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa00);
  }
  return param_1;
}



// FUNCTION 140b4ff00 FUN_140b4ff00 body=113 status=ok
// SIG undefined FUN_140b4ff00(void)

undefined8 * FUN_140b4ff00(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_1441f17f0;
  FWeakObjectPtr::operator=(param_1 + 0x25,0);
  param_1[0x26] = 0;
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x158);
  }
  return param_1;
}



// FUNCTION 140b4ff80 FUN_140b4ff80 body=113 status=ok
// SIG undefined FUN_140b4ff80(void)

undefined8 * FUN_140b4ff80(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  FUN_140b4e2b0(param_1 + 7);
  FUN_1408708d0(param_1 + 5);
  FUN_140b4e2b0(param_1 + 3);
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 140b50000 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UButtonPreviewWidget::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FMemory::Free();
  }
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2f0);
  }
  return param_1;
}



// FUNCTION 140b50050 FUN_140b50050 body=112 status=ok
// SIG undefined FUN_140b50050(void)

longlong FUN_140b50050(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 140b500c0 FUN_140b500c0 body=129 status=ok
// SIG undefined FUN_140b500c0(void)

longlong FUN_140b500c0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 140b50150 FUN_140b50150 body=129 status=ok
// SIG undefined FUN_140b50150(void)

longlong FUN_140b50150(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 140b501e0 FUN_140b501e0 body=112 status=ok
// SIG undefined FUN_140b501e0(void)

longlong FUN_140b501e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 140b50250 FUN_140b50250 body=129 status=ok
// SIG undefined FUN_140b50250(void)

longlong FUN_140b50250(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 140b502e0 FUN_140b502e0 body=163 status=ok
// SIG undefined FUN_140b502e0(void)

longlong FUN_140b502e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2b0);
  }
  return param_1;
}



// FUNCTION 140b50390 FUN_140b50390 body=112 status=ok
// SIG undefined FUN_140b50390(void)

longlong FUN_140b50390(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 140b50400 FUN_140b50400 body=112 status=ok
// SIG undefined FUN_140b50400(void)

longlong FUN_140b50400(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 140b50470 FUN_140b50470 body=112 status=ok
// SIG undefined FUN_140b50470(void)

longlong FUN_140b50470(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x248);
  }
  return param_1;
}



// FUNCTION 140b504e0 FUN_140b504e0 body=112 status=ok
// SIG undefined FUN_140b504e0(void)

longlong FUN_140b504e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 140b50550 FUN_140b50550 body=76 status=ok
// SIG undefined FUN_140b50550(void)

longlong FUN_140b50550(longlong param_1,ulonglong param_2)

{
  FUN_1406d8b70(param_1 + 0xf8);
  FUN_1406d8b70(param_1 + 0x40);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 140b505a0 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USaveGameSettingsControls::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_1406d8b70(param_1 + 0x48);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 140b505e0 FUN_140b505e0 body=99 status=ok
// SIG undefined FUN_140b505e0(void)

longlong FUN_140b505e0(longlong param_1,ulonglong param_2)

{
  FUN_140b4e450(param_1 + 0x198);
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x130) = &PTR_FUN_143fe0658;
  FUN_140a51930(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a8);
  }
  return param_1;
}



// FUNCTION 140b50650 FUN_140b50650 body=121 status=ok
// SIG undefined FUN_140b50650(void)

longlong FUN_140b50650(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x130) = &PTR_FUN_143fe0658;
  FUN_140a51930(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f0);
  }
  return param_1;
}



// FUNCTION 140b506d0 FUN_140b506d0 body=550 status=ok
// SIG undefined FUN_140b506d0(void)

void FUN_140b506d0(char *param_1,longlong param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  longlong *plVar7;
  undefined1 local_res18 [16];
  longlong local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  iVar2 = FUN_140b5cfc0();
  if (param_3 <= iVar2) {
    iVar2 = param_3;
  }
  pcVar6 = (char *)0x0;
  if ((*param_1 != '\0') &&
     ((((iVar2 != *(int *)(param_1 + 4) || (param_4 != *(int *)(param_1 + 0x24))) ||
       (0 < *(int *)(param_1 + 0x18))) &&
      ((*param_1 != '\0' && (lVar3 = FUN_140b5d100(param_2), lVar3 != 0)))))) {
    FUN_140c3c4b0(lVar3);
    FUN_140c5b630(lVar3);
    FUN_140c3ade0(lVar3);
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    *param_1 = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
  }
  if ((*param_1 == '\0') && (lVar3 = FUN_140b5d100(param_2), lVar3 != 0)) {
    *(int *)(param_1 + 4) = iVar2;
    pcVar5 = param_1 + 0x10;
    if (*(int *)(param_1 + 0x18) < 1) {
      pcVar5 = pcVar6;
    }
    *(int *)(param_1 + 0x24) = param_4;
    *param_1 = '\x01';
    FUN_140c54d80(lVar3,local_38,iVar2,param_4,pcVar5);
    FUN_140c3b960(lVar3,local_38);
    lVar4 = FMistWorldUtils::GetDebugEntityDrawSystem(param_2);
    if (lVar4 != 0) {
      local_res18[0] = 0;
      lVar4 = FUN_142f416d0(lVar4,param_2,local_res18);
      if (lVar4 != 0) {
        pcVar6 = *(char **)(lVar4 + 0x78);
      }
    }
    FUN_140c530e0(lVar3,pcVar6);
    FUN_140c32600(lVar3);
    local_48 = 0;
    local_40 = 0;
    FUN_140c44970(lVar3,&local_48);
    FUN_140b63030(param_1,&local_48,param_1 + 0x20);
    if ((int)local_40 != 0) {
      plVar7 = (longlong *)(local_48 + 0x18);
      iVar2 = (int)local_40;
      do {
        if (plVar7[2] != 0) {
          FMemory::Free();
        }
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        FUN_140b4e2b0(plVar7 + -3);
        plVar7 = plVar7 + 7;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    TArray<FCompositeSubFont,FDefaultAllocator>::~TArray<FCompositeSubFont,FDefaultAllocator>
              (local_38);
  }
  lVar3 = *(longlong *)(param_2 + 0x148);
  if (lVar3 != 0) {
    lVar4 = FUN_141424d10();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_140cc14b0(lVar3);
    }
  }
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != local_38) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    *plVar7 = 0;
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
  }
  return;
}



// FUNCTION 140b50900 FUN_140b50900 body=117 status=ok
// SIG undefined FUN_140b50900(void)

void FUN_140b50900(longlong *param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((param_1 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 != 0)) &&
     (lVar2 = UWorld::GetGameState<APVPGameState>(lVar1), lVar2 != 0)) {
    if (param_3 == 0) {
      param_3 = rand();
    }
    FUN_140b506d0(lVar2 + 0x670,lVar1,param_2,param_3);
  }
  return;
}



// FUNCTION 140b50980 FUN_140b50980 body=162 status=ok
// SIG undefined FUN_140b50980(void)

void FUN_140b50980(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar4 = *(int *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    if (iVar4 < 1) {
      uVar5 = 0;
    }
    else {
      iVar1 = *(int *)(param_4 + 1);
      if ((iVar1 < 1) || (iVar4 <= iVar1 + -1)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar4 = iVar1;
      }
      uVar5 = FUN_142c98860((longlong)(iVar4 + -1) * 0x38 + *(longlong *)(param_1 + 0x38),*param_4);
    }
    FUN_140b1a410(param_2,*(undefined8 *)(param_1 + 0x138),param_3,uVar5,2,uVar2,1);
  }
  return;
}



// FUNCTION 140b50a30 FUN_140b50a30 body=311 status=ok
// SIG undefined FUN_140b50a30(void)

void FUN_140b50a30(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  if (param_4 == '\0') {
    lVar3 = *(longlong *)(param_1 + 0x168);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x690);
    if (lVar3 != 0) {
      lVar2 = FUN_1429ff160();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_140b50a9b;
    }
    lVar3 = 0;
  }
LAB_140b50a9b:
  local_48 = 0x3f8000003f800000;
  local_40 = 0x3f800000;
  local_30 = DAT_1468b5da8;
  local_38 = DAT_1468b5da0;
  local_10 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_14245fd00(param_2,lVar3,param_3,&local_28,&local_38,&local_48,2,1,0,1,0);
  return;
}



// FUNCTION 140b50b70 FUN_140b50b70 body=112 status=ok
// SIG undefined FUN_140b50b70(void)

undefined4 FUN_140b50b70(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x40) = iVar1 + 1;
  if (*(int *)(param_1 + 0x44) < iVar1 + 1) {
    TArray<FTTLMissionBriefingParamRow,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x110 + *(longlong *)(param_1 + 0x38);
  FUN_140b4bf20(lVar2,param_2);
  FUN_140b5a8a0(param_1,lVar2);
  return *(undefined4 *)(lVar2 + 0xb8);
}



// FUNCTION 140b50be0 FUN_140b50be0 body=85 status=ok
// SIG undefined FUN_140b50be0(void)

void FUN_140b50be0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x50) = iVar1 + 1;
  if (*(int *)(param_1 + 0x54) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x48),iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x48);
  FUN_140b4c170(lVar2,param_2);
  *(undefined1 *)(lVar2 + 0x38) = 1;
  return;
}



// FUNCTION 140b50c40 FUN_140b50c40 body=1375 status=ok
// SIG undefined FUN_140b50c40(void)

void FUN_140b50c40(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  float fVar23;
  longlong local_res18;
  longlong local_50;
  int local_48;
  int local_44;
  longlong local_40;
  
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    iVar15 = 0;
    local_res18 = param_3;
    if (0 < *(int *)(param_1 + 0x30)) {
      do {
        cVar5 = FUN_14058c1e0();
        if (cVar5 != '\0') {
          lVar20 = *(longlong *)(param_1 + 0x28) + (longlong)iVar15 * 0x18;
          if (lVar20 != 0) goto LAB_140b50db7;
          break;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(param_1 + 0x30));
    }
    iVar15 = *(int *)(param_1 + 0x30) + -1;
    if (-1 < iVar15) {
      lVar20 = (longlong)iVar15 * 0x18;
      lVar21 = (longlong)*(int *)(param_1 + 0x30) * 0x18;
      do {
        lVar8 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x28) + lVar20);
        if (lVar8 == 0) {
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>(*(longlong *)(param_1 + 0x28) + 8 + lVar20);
          iVar12 = *(int *)(param_1 + 0x30);
          iVar6 = (iVar12 - iVar15) + -1;
          if (iVar6 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar20 + *(longlong *)(param_1 + 0x28)),
                       (void *)(lVar21 + *(longlong *)(param_1 + 0x28)),(longlong)iVar6 * 0x18);
            iVar12 = *(int *)(param_1 + 0x30);
          }
          *(int *)(param_1 + 0x30) = iVar12 + -1;
          TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_1 + 0x28);
        }
        lVar21 = lVar21 + -0x18;
        lVar20 = lVar20 + -0x18;
        iVar15 = iVar15 + -1;
      } while (-1 < iVar15);
    }
    lVar20 = (longlong)*(int *)(param_1 + 0x30);
    iVar15 = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x30) = iVar15;
    if (*(int *)(param_1 + 0x34) < iVar15) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x28);
    }
    lVar21 = *(longlong *)(param_1 + 0x28);
    *(undefined8 *)(lVar21 + lVar20 * 0x18) = 0;
    *(undefined8 *)(lVar21 + 8 + lVar20 * 0x18) = 0;
    *(undefined8 *)(lVar21 + 0x10 + lVar20 * 0x18) = 0;
    lVar20 = *(longlong *)(param_1 + 0x28) + lVar20 * 0x18;
    FWeakObjectPtr::operator=();
LAB_140b50db7:
    iVar15 = 0;
    if (0 < *(int *)(lVar20 + 0x10)) {
      lVar21 = 0;
      plVar9 = *(longlong **)(lVar20 + 8);
      do {
        if (*plVar9 == param_2) {
          plVar9 = *(longlong **)(lVar20 + 8) + (longlong)iVar15 * 3;
          if (plVar9 != (longlong *)0x0) goto LAB_140b50e33;
          break;
        }
        iVar15 = iVar15 + 1;
        lVar21 = lVar21 + 1;
        plVar9 = plVar9 + 3;
      } while (lVar21 < *(int *)(lVar20 + 0x10));
    }
    lVar21 = (longlong)*(int *)(lVar20 + 0x10);
    iVar15 = *(int *)(lVar20 + 0x10) + 1;
    *(int *)(lVar20 + 0x10) = iVar15;
    if (*(int *)(lVar20 + 0x14) < iVar15) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (lVar20 + 8);
    }
    lVar8 = *(longlong *)(lVar20 + 8);
    *(undefined8 *)(lVar8 + lVar21 * 0x18) = 0;
    *(undefined8 *)(lVar8 + 8 + lVar21 * 0x18) = 0;
    *(undefined8 *)(lVar8 + 0x10 + lVar21 * 0x18) = 0;
    lVar8 = *(longlong *)(lVar20 + 8);
    *(longlong *)(lVar8 + lVar21 * 0x18) = param_2;
    plVar9 = (longlong *)(lVar8 + lVar21 * 0x18);
LAB_140b50e33:
    plVar1 = plVar9 + 1;
    iVar15 = (int)plVar9[2] + -1;
    if (-1 < iVar15) {
      lVar21 = (longlong)iVar15 * 8;
      lVar17 = (longlong)(int)plVar9[2] << 3;
      lVar8 = lVar21;
      do {
        lVar2 = *plVar1;
        if (*(longlong *)(lVar21 + lVar2) == 0) {
LAB_140b50eb4:
          iVar12 = (int)plVar9[2];
          iVar6 = (iVar12 - iVar15) + -1;
          if (iVar6 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar8 + lVar2),(void *)(lVar17 + lVar2),(longlong)iVar6 << 3);
            iVar12 = (int)plVar9[2];
          }
          *(int *)(plVar9 + 2) = iVar12 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        }
        else {
          uVar7 = *(uint *)(*(longlong *)(lVar21 + lVar2) + 0xc);
          if ((int)uVar7 < (int)DAT_1469e91c4) {
            uVar13 = uVar7 & 0xffff;
            if ((int)uVar7 < 0) {
              uVar7 = uVar7 + 0xffff;
              uVar13 = uVar13 - 0x10000;
            }
            lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                     (longlong)(int)uVar13 * 0x18;
          }
          else {
            lVar10 = 0;
          }
          if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) != 0) goto LAB_140b50eb4;
        }
        lVar17 = lVar17 + -8;
        lVar8 = lVar8 + -8;
        lVar21 = lVar21 + -8;
        iVar15 = iVar15 + -1;
      } while (-1 < iVar15);
    }
    fVar23 = (float)FUN_142c98860(param_2 + 0x30,param_4);
    if (0 < (int)fVar23) {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar1,&local_res18);
      pwVar11 = _guard_xfg_dispatch_icall_nop
                          (L"&UOakManagedActorManager::NotifyActorDestroyed",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar3 = pwVar11, pwVar3 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_50,pwVar4 + 2,1);
      lVar21 = local_res18;
      plVar18 = (longlong *)(local_res18 + 0x290);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_40 = local_50;
      if ((local_50 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_48), lVar8 != 0)) {
        UObject::FindFunction(lVar8,local_40);
      }
      piVar14 = (int *)*plVar18;
      iVar15 = *(int *)(lVar21 + 0x298);
      for (piVar16 = piVar14; piVar16 != piVar14 + (longlong)iVar15 * 4; piVar16 = piVar16 + 4) {
        if ((((*piVar16 == local_48) && (piVar16[1] == local_44)) ||
            ((cVar5 = FWeakObjectPtr::IsValid(piVar16), cVar5 == '\0' &&
             (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) &&
           (*(longlong *)(piVar16 + 2) == local_40)) {
          if ((int)((longlong)piVar16 - (longlong)piVar14 >> 4) != -1) goto LAB_140b51086;
          break;
        }
      }
      iVar15 = *(int *)(lVar21 + 0x298);
      *(int *)(lVar21 + 0x298) = iVar15 + 1;
      if (*(int *)(lVar21 + 0x29c) < iVar15 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar18,iVar15);
      }
      piVar14 = (int *)((longlong)iVar15 * 0x10 + *plVar18);
      *piVar14 = local_48;
      piVar14[1] = local_44;
      *(longlong *)(piVar14 + 2) = local_40;
LAB_140b51086:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar18);
      for (iVar15 = (int)plVar9[2] - (int)fVar23; 0 < iVar15; iVar15 = iVar15 + -1) {
        lVar21 = *(longlong *)*plVar1;
        lVar8 = (longlong)(int)plVar9[2];
        if ((int)plVar9[2] != 0) {
          iVar6 = 0;
          lVar17 = 0;
          bVar22 = lVar21 != 0;
          iVar12 = 0;
          do {
            lVar17 = lVar17 + 1;
            iVar19 = iVar12 + 1;
            if (lVar17 < lVar8) {
              plVar18 = (longlong *)(*plVar1 + lVar17 * 8);
              do {
                if (bVar22 != (*plVar18 != 0)) break;
                iVar19 = iVar19 + 1;
                lVar17 = lVar17 + 1;
                plVar18 = plVar18 + 1;
              } while (lVar17 < lVar8);
            }
            if (bVar22 != false) {
              if (iVar6 != iVar12) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*plVar1 + (longlong)iVar6 * 8),
                           (void *)(*plVar1 + (longlong)iVar12 * 8),(longlong)(iVar19 - iVar12) << 3
                          );
              }
              iVar6 = iVar6 + (iVar19 - iVar12);
            }
            bVar22 = (bool)(bVar22 ^ 1);
            iVar12 = iVar19;
          } while (lVar17 < lVar8);
          *(int *)(plVar9 + 2) = iVar6;
        }
        FUN_140b6d730(param_1,lVar21);
      }
      FUN_140b6e620(param_1,lVar20);
    }
  }
  return;
}



// FUNCTION 140b511a0 FUN_140b511a0 body=145 status=ok
// SIG undefined FUN_140b511a0(void)

void FUN_140b511a0(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = AGExplodingRockProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140b400b0(param_2,1);
      iVar1 = *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = iVar1 + 1;
      if (*(int *)(param_1 + 100) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = param_2;
    }
  }
  return;
}



// FUNCTION 140b51240 FUN_140b51240 body=609 status=ok
// SIG undefined FUN_140b51240(void)

void FUN_140b51240(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x38) != 0)) {
    plVar1 = (longlong *)(param_1 + 0x450);
    plVar12 = (longlong *)*plVar1;
    iVar10 = *(int *)(param_1 + 0x458);
    uVar14 = (ulonglong)iVar10;
    plVar2 = plVar12 + uVar14;
    if (plVar12 != plVar2) {
      uVar8 = 0;
      do {
        lVar7 = *plVar12;
        uVar9 = uVar8;
        if (lVar7 != 0) {
          uVar9 = (ulonglong)
                  (*(longlong *)(*(longlong *)(lVar7 + 0x38) + 0x10) ==
                  *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x10));
        }
        if ((char)uVar9 != '\0') {
          if (((lVar7 != 0) && (*(byte *)(param_2 + 0x30) < *(byte *)(lVar7 + 0x30))) &&
             (param_2 != lVar7)) {
            return;
          }
          uVar9 = uVar8;
          uVar11 = uVar8;
          if (0 < iVar10) {
            do {
              iVar10 = (int)uVar11;
              lVar4 = *plVar1;
              uVar13 = (uint)uVar14;
              lVar7 = *plVar12;
              if (*(longlong *)(lVar4 + uVar9) == lVar7) {
                iVar5 = (uVar13 - iVar10) + -1;
                if (0 < iVar5) {
                  iVar5 = 1;
                }
                if (iVar5 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(lVar4 + (longlong)iVar10 * 8),
                             (void *)(lVar4 + (longlong)(int)(uVar13 - iVar5) * 8),
                             (longlong)iVar5 << 3);
                  uVar13 = *(uint *)(param_1 + 0x458);
                }
                *(uint *)(param_1 + 0x458) = uVar13 - 1;
                TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
                uVar13 = *(uint *)(param_1 + 0x458);
                iVar10 = iVar10 + -1;
                lVar7 = *plVar12;
                uVar9 = uVar9 - 8;
              }
              uVar14 = (ulonglong)uVar13;
              uVar9 = uVar9 + 8;
              uVar11 = (ulonglong)(iVar10 + 1U);
            } while ((int)(iVar10 + 1U) < (int)uVar13);
          }
          lVar7 = *(longlong *)(lVar7 + 0x38);
          plVar2 = (longlong *)(param_1 + 0x460);
          iVar10 = *(int *)(param_1 + 0x468);
          uVar14 = uVar8;
          if (0 < iVar10) {
            do {
              iVar5 = (int)uVar8;
              lVar4 = *plVar2;
              if (*(longlong *)(lVar4 + uVar14) == lVar7) {
                iVar6 = (iVar10 - iVar5) + -1;
                if (0 < iVar6) {
                  iVar6 = 1;
                }
                if (iVar6 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(lVar4 + (longlong)iVar5 * 8),
                             (void *)(lVar4 + (longlong)(iVar10 - iVar6) * 8),(longlong)iVar6 << 3);
                  iVar10 = *(int *)(param_1 + 0x468);
                }
                *(int *)(param_1 + 0x468) = iVar10 + -1;
                TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar2);
                iVar10 = *(int *)(param_1 + 0x468);
                iVar5 = iVar5 + -1;
                uVar14 = uVar14 - 8;
              }
              uVar8 = (ulonglong)(iVar5 + 1U);
              uVar14 = uVar14 + 8;
            } while ((int)(iVar5 + 1U) < iVar10);
          }
          iVar10 = *(int *)(param_1 + 0x458);
          *(int *)(param_1 + 0x458) = iVar10 + 1;
          if (*(int *)(param_1 + 0x45c) < iVar10 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar10);
          }
          *(longlong *)(*plVar1 + (longlong)iVar10 * 8) = param_2;
          iVar10 = *(int *)(param_1 + 0x468);
          uVar3 = *(undefined8 *)(param_2 + 0x38);
          *(int *)(param_1 + 0x468) = iVar10 + 1;
          if (*(int *)(param_1 + 0x46c) < iVar10 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar10);
          }
          *(undefined8 *)(*plVar2 + (longlong)iVar10 * 8) = uVar3;
          return;
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar2);
    }
    *(int *)(param_1 + 0x458) = iVar10 + 1;
    if (*(int *)(param_1 + 0x45c) < iVar10 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar10);
    }
    *(longlong *)(uVar14 * 8 + *plVar1) = param_2;
    iVar10 = *(int *)(param_1 + 0x468);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    *(int *)(param_1 + 0x468) = iVar10 + 1;
    if (*(int *)(param_1 + 0x46c) < iVar10 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x460,iVar10);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x460) + (longlong)iVar10 * 8) = uVar3;
  }
  return;
}



// FUNCTION 140b514b0 FUN_140b514b0 body=153 status=ok
// SIG undefined FUN_140b514b0(void)

void FUN_140b514b0(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = AInteractiveFoliageActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (param_1 != 0)) && (lVar3 = *(longlong *)(param_1 + 0x38), lVar3 != 0)) {
      iVar1 = *(int *)(param_2 + 0x390);
      *(int *)(param_2 + 0x390) = iVar1 + 1;
      if (*(int *)(param_2 + 0x394) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  ((longlong *)(param_2 + 0x388),iVar1);
      }
      *(longlong *)(*(longlong *)(param_2 + 0x388) + (longlong)iVar1 * 8) = lVar3;
    }
  }
  return;
}



// FUNCTION 140b51550 FUN_140b51550 body=184 status=ok
// SIG undefined FUN_140b51550(void)

void FUN_140b51550(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar2 = FUN_142e49950();
    lVar3 = *(longlong *)(param_1 + 0x38);
    lVar4 = lVar3;
    if (lVar3 != 0) {
      while (lVar4 != lVar2) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        if (lVar4 == 0) {
          return;
        }
      }
      if ((lVar3 != 0) && (param_2 != 0)) {
        lVar3 = AInteractiveFoliageActor::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar3 = *(longlong *)(param_2 + 0x398);
          if ((param_1 == 0) ||
             ((lVar3 != 0 && (*(byte *)(param_1 + 0x30) <= *(byte *)(lVar3 + 0x30))))) {
            param_1 = lVar3;
          }
          *(longlong *)(param_2 + 0x398) = param_1;
        }
      }
    }
  }
  return;
}



// FUNCTION 140b51610 FUN_140b51610 body=184 status=ok
// SIG undefined FUN_140b51610(void)

void FUN_140b51610(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar2 = UUGSlider::GetPrivateStaticClass();
    lVar3 = *(longlong *)(param_1 + 0x38);
    lVar4 = lVar3;
    if (lVar3 != 0) {
      while (lVar4 != lVar2) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        if (lVar4 == 0) {
          return;
        }
      }
      if ((lVar3 != 0) && (param_2 != 0)) {
        lVar3 = APlayerState::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar3 = *(longlong *)(param_2 + 0x470);
          if ((lVar3 == 0) ||
             ((param_1 != 0 && (*(byte *)(lVar3 + 0x30) <= *(byte *)(param_1 + 0x30))))) {
            lVar3 = param_1;
          }
          *(longlong *)(param_2 + 0x470) = lVar3;
        }
      }
    }
  }
  return;
}



// FUNCTION 140b516d0 FUN_140b516d0 body=104 status=ok
// SIG undefined FUN_140b516d0(void)

void FUN_140b516d0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x38) != 0) && (param_2 != 0)) {
    lVar2 = APlayerState::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_140b51240(param_2,param_1);
    }
  }
  return;
}



// FUNCTION 140b51740 FUN_140b51740 body=1335 status=ok
// SIG undefined FUN_140b51740(void)

undefined8 FUN_140b51740(longlong param_1,longlong *param_2,uint param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int *piVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  if (param_2 != (longlong *)0x0) {
    lVar15 = *(longlong *)(param_1 + 0x198);
    uVar16 = 0;
    lVar8 = lVar15 + (longlong)*(int *)(param_1 + 0x1a0) * 0x18;
    uVar11 = uVar16;
    for (; lVar15 != lVar8; lVar15 = lVar15 + 0x18) {
      lVar12 = *(longlong *)(lVar15 + 8);
      lVar3 = lVar12 + (longlong)*(int *)(lVar15 + 0x10) * 0x18;
      for (; lVar12 != lVar3; lVar12 = lVar12 + 0x18) {
        uVar14 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar14;
        if (uVar14 == param_3) {
          puVar1 = (undefined8 *)(lVar12 + 8);
          if (puVar1 == (undefined8 *)0x0) {
            return 0;
          }
          lVar8 = FUN_1430b3b80();
          if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            iVar7 = FUN_1430772b0(param_2,0);
            if (0 < iVar7) goto LAB_140b51840;
            goto LAB_140b519a8;
          }
          uVar10 = FUN_142a07000();
          plVar9 = (longlong *)(**(code **)(*param_2 + 0x628))(param_2,uVar10);
          if (plVar9 == (longlong *)0x0) {
            return 1;
          }
          piVar5 = (int *)*puVar1;
          iVar7 = *(int *)(lVar12 + 0x10);
          if (piVar5 == piVar5 + (longlong)iVar7 * 0xc) {
            return 1;
          }
          piVar13 = piVar5 + 4;
          goto LAB_140b51b83;
        }
      }
    }
  }
  return 0;
LAB_140b51840:
  do {
    plVar9 = (longlong *)(**(code **)(*param_2 + 0x900))(param_2,0,uVar16 & 0xff);
    if (plVar9 != (longlong *)0x0) {
      lVar8 = FUN_142a07000();
      if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        piVar5 = (int *)*puVar1;
        iVar4 = *(int *)(lVar12 + 0x10);
        if (piVar5 != piVar5 + (longlong)iVar4 * 0xc) {
          piVar13 = piVar5 + 4;
          do {
            lVar8 = FWeakObjectPtr::Get(piVar13 + -2);
            if (lVar8 == 0) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              if ((DAT_1464b56f4 != *piVar13) && (*(longlong *)(piVar13 + 2) != 0)) {
                lVar8 = FUN_141796df0();
                FWeakObjectPtr::operator=(piVar13 + -2,lVar8);
                if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  *piVar13 = DAT_1464b56f4;
                }
                lVar8 = FWeakObjectPtr::Get(piVar13 + -2);
                if (lVar8 != 0) goto LAB_140b51936;
              }
LAB_140b5196c:
              lVar8 = 0;
            }
            else {
LAB_140b51936:
              lVar15 = UMaterialInterface::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (!bVar6) goto LAB_140b5196c;
            }
            (**(code **)(*plVar9 + 0x568))(plVar9,piVar13[-4],lVar8);
            piVar2 = piVar13 + 8;
            piVar13 = piVar13 + 0xc;
          } while (piVar2 != piVar5 + (longlong)iVar4 * 0xc);
        }
      }
    }
    uVar14 = (int)uVar16 + 1;
    uVar16 = (ulonglong)uVar14;
  } while ((int)uVar14 < iVar7);
LAB_140b519a8:
  iVar7 = FUN_1430772b0(param_2,1);
  uVar14 = 0;
  if (iVar7 < 1) {
    return 1;
  }
  do {
    plVar9 = (longlong *)(**(code **)(*param_2 + 0x900))(param_2,1,uVar14 & 0xff);
    if (plVar9 != (longlong *)0x0) {
      lVar8 = FUN_142a07000();
      if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        piVar5 = (int *)*puVar1;
        iVar4 = *(int *)(lVar12 + 0x10);
        if (piVar5 != piVar5 + (longlong)iVar4 * 0xc) {
          piVar13 = piVar5 + 4;
          do {
            lVar8 = FWeakObjectPtr::Get(piVar13 + -2);
            if (lVar8 == 0) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              if ((DAT_1464b56f4 != *piVar13) && (*(longlong *)(piVar13 + 2) != 0)) {
                lVar8 = FUN_141796df0();
                FWeakObjectPtr::operator=(piVar13 + -2,lVar8);
                if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  *piVar13 = DAT_1464b56f4;
                }
                lVar8 = FWeakObjectPtr::Get(piVar13 + -2);
                if (lVar8 != 0) goto LAB_140b51ac6;
              }
LAB_140b51afc:
              lVar8 = 0;
            }
            else {
LAB_140b51ac6:
              lVar15 = UMaterialInterface::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (!bVar6) goto LAB_140b51afc;
            }
            (**(code **)(*plVar9 + 0x568))(plVar9,piVar13[-4],lVar8);
            piVar2 = piVar13 + 8;
            piVar13 = piVar13 + 0xc;
          } while (piVar2 != piVar5 + (longlong)iVar4 * 0xc);
        }
      }
    }
    uVar14 = uVar14 + 1;
    if (iVar7 <= (int)uVar14) {
      return 1;
    }
  } while( true );
LAB_140b51b83:
  uVar11 = FWeakObjectPtr::Get(piVar13 + -2);
  if (uVar11 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *piVar13) && (*(longlong *)(piVar13 + 2) != 0)) {
      lVar8 = FUN_141796df0();
      FWeakObjectPtr::operator=(piVar13 + -2,lVar8);
      if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *piVar13 = DAT_1464b56f4;
      }
      uVar11 = FWeakObjectPtr::Get(piVar13 + -2);
      if (uVar11 != 0) goto LAB_140b51bf6;
    }
LAB_140b51c2c:
    uVar11 = uVar16;
  }
  else {
LAB_140b51bf6:
    lVar8 = UMaterialInterface::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar11 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140b51c2c;
  }
  (**(code **)(*plVar9 + 0x568))(plVar9,piVar13[-4],uVar11);
  piVar2 = piVar13 + 8;
  piVar13 = piVar13 + 0xc;
  if (piVar2 == piVar5 + (longlong)iVar7 * 0xc) {
    return 1;
  }
  goto LAB_140b51b83;
}



// FUNCTION 140b51c80 FUN_140b51c80 body=1480 status=ok
// SIG undefined FUN_140b51c80(void)

undefined8 FUN_140b51c80(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  lVar2 = FUN_1430b3b80();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    lVar2 = AAfrPlayerState::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (param_2[0x8c] == 0) {
        return 1;
      }
      lVar2 = param_1 + 0x198;
      lVar5 = FWeakObjectPtr::Get(lVar2);
      if (lVar5 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(param_1 + 0x1a0)) && (*(longlong *)(param_1 + 0x1a8) != 0)) {
          lVar5 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar2,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x1a0) = DAT_1464b56f4;
          }
          lVar5 = FWeakObjectPtr::Get(lVar2);
          if (lVar5 != 0) goto LAB_140b51f6d;
        }
      }
      else {
LAB_140b51f6d:
        lVar2 = USkeleton::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) goto LAB_140b51fa6;
      }
      lVar5 = 0;
LAB_140b51fa6:
      (**(code **)(*(longlong *)param_2[0x8c] + 0x930))((longlong *)param_2[0x8c],lVar5,1);
      return 1;
    }
    uVar6 = FUN_142a07000();
    uVar6 = (**(code **)(*param_2 + 0x628))(param_2,uVar6);
    FUN_1417846f0(param_2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    lVar3 = 0;
    uVar7 = FUN_142e5c1e0();
    plVar8 = (longlong *)FUN_1417985e0(uVar7,param_2,0,0,0,0,0,0,0);
    (**(code **)(*plVar8 + 0x638))(plVar8,0);
    lVar2 = param_1 + 0x198;
    lVar5 = FWeakObjectPtr::Get(lVar2);
    if (lVar5 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_1 + 0x1a0)) && (*(longlong *)(param_1 + 0x1a8) != 0)) {
        lVar5 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar2,lVar5);
        if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0x1a0) = DAT_1464b56f4;
        }
        lVar5 = FWeakObjectPtr::Get(lVar2);
        if (lVar5 != 0) goto LAB_140b520c0;
      }
LAB_140b520f6:
      lVar5 = lVar3;
    }
    else {
LAB_140b520c0:
      lVar2 = USkeleton::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140b520f6;
    }
    (**(code **)(*plVar8 + 0x930))(plVar8,lVar5,1);
    lVar2 = param_1 + 0x1c0;
    lVar4 = FWeakObjectPtr::Get(lVar2);
    lVar5 = lVar3;
    if (lVar4 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 == *(int *)(param_1 + 0x1c8)) || (*(longlong *)(param_1 + 0x1d0) == 0))
      goto LAB_140b521d8;
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar2,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x1c8) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(lVar2);
      if (lVar4 == 0) goto LAB_140b521d8;
    }
    lVar2 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar9 = FUN_1428eccf0();
      lVar2 = lVar4;
      do {
        lVar5 = lVar4;
        if (lVar2 == lVar9) break;
        lVar2 = *(longlong *)(lVar2 + 0x30);
        lVar5 = lVar3;
      } while (lVar2 != 0);
    }
LAB_140b521d8:
    FUN_1423b4b50(plVar8,lVar5);
    uVar7 = (**(code **)(*param_2 + 0x148))(param_2);
    FUN_14234b270(plVar8,uVar7);
    FUN_142382f60(plVar8,uVar6,&DAT_146af29ec,*(undefined8 *)(param_1 + 0x1e8));
    return 1;
  }
  FUN_1430678e0(&local_60);
  lVar2 = param_1 + 0x198;
  local_60 = FWeakObjectPtr::Get(lVar2);
  lVar5 = 0;
  if (local_60 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x1a0)) && (*(longlong *)(param_1 + 0x1a8) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar2,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x1a0) = DAT_1464b56f4;
      }
      local_60 = FWeakObjectPtr::Get(lVar2);
      if (local_60 != 0) goto LAB_140b51d7a;
    }
LAB_140b51db5:
    local_60 = 0;
  }
  else {
LAB_140b51d7a:
    lVar2 = USkeleton::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(local_60 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_60 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140b51db5;
  }
  lVar2 = param_1 + 0x1c0;
  lVar3 = FWeakObjectPtr::Get(lVar2);
  local_58 = lVar5;
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_1 + 0x1c8)) || (*(longlong *)(param_1 + 0x1d0) == 0))
    goto LAB_140b51e87;
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar2,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x1c8) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(lVar2);
    if (lVar3 == 0) goto LAB_140b51e87;
  }
  lVar2 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar4 = FUN_1428eccf0();
    lVar2 = lVar3;
    do {
      local_58 = lVar3;
      if (lVar2 == lVar4) break;
      lVar2 = *(longlong *)(lVar2 + 0x30);
      local_58 = lVar5;
    } while (lVar2 != 0);
  }
LAB_140b51e87:
  local_50 = *(undefined8 *)(param_1 + 0x1e8);
  FUN_143088830(param_2,&local_60);
  return 1;
}



// FUNCTION 140b52250 FUN_140b52250 body=5232 status=ok
// SIG undefined FUN_140b52250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b52250(longlong param_1)

{
  undefined1 uVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  longlong *plVar21;
  ulonglong uVar22;
  longlong *plVar23;
  int iVar24;
  ulonglong uVar25;
  undefined1 auStack_338 [32];
  uint local_318;
  undefined8 local_310;
  uint local_308;
  undefined8 local_300;
  undefined1 local_2f8;
  int local_2e8;
  longlong local_2e0;
  longlong *local_2d8;
  int local_2d0;
  int local_2cc;
  longlong *local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  undefined4 local_2b0;
  undefined2 local_2ac;
  undefined1 local_2aa;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  longlong local_290;
  longlong local_288;
  longlong local_280;
  longlong *local_278;
  undefined8 local_270;
  longlong local_268;
  longlong local_260;
  longlong *local_258;
  undefined8 local_250;
  longlong *local_248;
  longlong *local_240;
  longlong *local_238;
  longlong *local_230;
  longlong *local_228;
  longlong *local_220;
  longlong *local_218;
  undefined1 local_210 [8];
  longlong *local_208;
  longlong *local_200;
  longlong local_1f8;
  byte *local_1f0;
  byte *local_1e8;
  byte *local_1e0;
  byte *local_1d8;
  longlong local_1d0 [2];
  undefined1 local_1c0 [40];
  undefined1 local_198;
  undefined1 local_190 [40];
  undefined1 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  undefined1 local_128 [240];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_268 = param_1;
  if ((*(int *)(lVar11 + 0x38) < DAT_1468698d0) &&
     (_Init_thread_header(&DAT_1468698d0), DAT_1468698d0 == -1)) {
    FName::FName(&DAT_1468698c8,L"Sanctuary3_P",1);
    _Init_thread_footer(&DAT_1468698d0);
  }
  if ((*(int *)(lVar11 + 0x38) < DAT_1468698e0) &&
     (_Init_thread_header(&DAT_1468698e0), DAT_1468698e0 == -1)) {
    FName::FName(&DAT_1468698d8,L"Sanctuary3_Mission",1);
    _Init_thread_footer(&DAT_1468698e0);
  }
  if ((*(int *)(lVar11 + 0x38) < DAT_1468698f0) &&
     (_Init_thread_header(&DAT_1468698f0), DAT_1468698f0 == -1)) {
    FName::FName(&DAT_1468698e8,L"BP_GalaxyMapStation_0",1);
    _Init_thread_footer(&DAT_1468698f0);
  }
  if ((*(int *)(lVar11 + 0x38) < DAT_146869900) &&
     (_Init_thread_header(&DAT_146869900), DAT_146869900 == -1)) {
    FName::FName(&DAT_1468698f8,L"IconEnabledCondition_MissionCondition_List",1);
    _Init_thread_footer(&DAT_146869900);
  }
  if ((*(int *)(lVar11 + 0x38) < DAT_146869910) &&
     (_Init_thread_header(&DAT_146869910), DAT_146869910 == -1)) {
    FName::FName(&DAT_146869908,L"ZoneID_to_MapID",1);
    _Init_thread_footer(&DAT_146869910);
  }
  if ((*(int *)(lVar11 + 0x38) < DAT_146869920) &&
     (_Init_thread_header(&DAT_146869920), DAT_146869920 == -1)) {
    FName::FName(&DAT_146869918,L"PlanetData_To_PlanetID",1);
    _Init_thread_footer(&DAT_146869920);
  }
  if ((*(int *)(lVar11 + 0x38) < DAT_146869930) &&
     (_Init_thread_header(&DAT_146869930), DAT_146869930 == -1)) {
    FName::FName(&DAT_146869928,L"MapID_To_PlanetData",1);
    _Init_thread_footer(&DAT_146869930);
  }
  if ((*(int *)(lVar11 + 0x38) < DAT_146869940) &&
     (_Init_thread_header(&DAT_146869940), DAT_146869940 == -1)) {
    FName::FName(&DAT_146869938,L"Update Event",1);
    _Init_thread_footer(&DAT_146869940);
  }
  if ((*(int *)(lVar11 + 0x38) < DAT_146869950) &&
     (_Init_thread_header(&DAT_146869950), DAT_146869950 == -1)) {
    FName::FName(&DAT_146869948,L"Advance Event",1);
    _Init_thread_footer(&DAT_146869950);
  }
  if ((*(int *)(lVar11 + 0x38) < DAT_146869960) &&
     (_Init_thread_header(&DAT_146869960), DAT_146869960 == -1)) {
    FName::FName(&DAT_146869958,L"ArriveSequences",1);
    _Init_thread_footer(&DAT_146869960);
  }
  if ((*(int *)(lVar11 + 0x38) < DAT_146869970) &&
     (_Init_thread_header(&DAT_146869970), DAT_146869970 == -1)) {
    FName::FName(&DAT_146869968,L"ExitSequences",1);
    _Init_thread_footer(&DAT_146869970);
  }
  if ((*(int *)(lVar11 + 0x38) < DAT_146869980) &&
     (_Init_thread_header(&DAT_146869980), DAT_146869980 == -1)) {
    FName::FName(&DAT_146869978,L"Conditions",1);
    _Init_thread_footer(&DAT_146869980);
  }
  if ((*(int *)(lVar11 + 0x38) < DAT_146869990) &&
     (_Init_thread_header(&DAT_146869990), DAT_146869990 == -1)) {
    FName::FName(&DAT_146869988,L"LevelTravelStationObject_5",1);
    _Init_thread_footer(&DAT_146869990);
  }
  if ((*(int *)(lVar11 + 0x38) < DAT_1468699a0) &&
     (_Init_thread_header(&DAT_1468699a0), DAT_1468699a0 == -1)) {
    FName::FName(&DAT_146869998,L"OakMissionSpawner_1",1);
    _Init_thread_footer(&DAT_1468699a0);
  }
  if (param_1 == 0) {
    return;
  }
  puVar6 = (undefined8 *)FName::FName(&local_258,L"AssetRegistry",1);
  uVar10 = *puVar6;
  uVar7 = FUN_14168dc80();
  local_2c8 = (longlong *)FUN_141690010(uVar7,uVar10);
  if (DAT_146297660 == '\0') {
    plVar8 = (longlong *)(**(code **)(*local_2c8 + 0x48))(local_2c8);
    (**(code **)(*plVar8 + 0xf8))(plVar8,1);
    DAT_146297660 = '\x01';
  }
  lVar16 = 0;
  UWorld::GetLevelIterator(param_1,&local_2d8);
  lVar11 = lVar16;
  lVar15 = lVar16;
  plVar8 = local_2d8;
  while( true ) {
    if ((local_2d0 < 0) || ((int)plVar8[1] <= local_2d0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) break;
    lVar13 = *(longlong *)(*plVar8 + (longlong)local_2d0 * 8);
    if ((lVar13 != 0) && (lVar12 = *(longlong *)(lVar13 + 0x20), lVar12 != 0)) {
      lVar9 = FUN_142a2f930();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      plVar8 = local_2d8;
      if (bVar2) {
        if ((lVar15 == 0) && (*(longlong *)(lVar12 + 0x18) == DAT_1468698c8)) {
          lVar15 = lVar13;
        }
        if ((lVar11 == 0) && (*(longlong *)(lVar12 + 0x18) == DAT_1468698d8)) {
          lVar11 = lVar13;
        }
        if ((lVar15 != 0) && (lVar11 != 0)) break;
      }
    }
    local_2d0 = local_2d0 + 1;
  }
  if (lVar15 == 0) {
    return;
  }
  if (lVar11 == 0) {
    return;
  }
  uVar10 = UInputKeySelector::GetPrivateStaticClass();
  local_308 = 0;
  local_310 = (ulonglong)local_310._4_4_ << 0x20;
  local_318 = local_318 & 0xffffff00;
  plVar8 = (longlong *)FUN_141799680(uVar10,lVar11,DAT_1468698e8,0);
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  lVar11 = UInputKeySelector::GetPrivateStaticClass();
  if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
      lVar11 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  uVar10 = FUN_141316200();
  local_310 = 0;
  local_318 = 0;
  lVar11 = FUN_141799830(uVar10,0,
                         L"/Game/InteractiveObjects/GameSystemMachines/GalaxyMapStation/BP_GalaxyMapStationPatch.BP_GalaxyMapStationPatch_C"
                         ,0);
  if (lVar11 == 0) {
    return;
  }
  lVar12 = FUN_141316200();
  lVar13 = lVar11;
  while (lVar13 != lVar12) {
    lVar13 = *(longlong *)(lVar13 + 0x30);
    if (lVar13 == 0) {
      return;
    }
  }
  local_138 = _DAT_146869340 & _DAT_146869350;
  uStack_134 = uRam0000000146869344 & uRam0000000146869354;
  uStack_130 = uRam0000000146869348 & uRam0000000146869358;
  uStack_12c = uRam000000014686934c & uRam000000014686935c;
  local_148 = 0x4665b000;
  uStack_144 = 0xc5fff800;
  uStack_140 = 0xc2c80000;
  uStack_13c = 0;
  local_158 = 0;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_14c = uRam000000014686934c;
  FActorSpawnParameters::FActorSpawnParameters(local_1c0);
  local_198 = 1;
  lVar12 = FUN_141316200();
  lVar13 = lVar11;
  do {
    lVar9 = lVar11;
    if (lVar13 == lVar12) break;
    lVar13 = *(longlong *)(lVar13 + 0x30);
    lVar9 = lVar16;
  } while (lVar13 != 0);
  lVar13 = FUN_1425518b0(param_1,lVar9,&local_158,local_1c0);
  if (lVar13 != 0) {
    lVar12 = FUN_141316200();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140b5262c;
  }
  lVar13 = lVar16;
LAB_140b5262c:
  plVar8[0xcf] = lVar13;
  if (lVar13 != 0) {
    uVar10 = AArchVisCharacter::StaticClass();
    lVar13 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar10);
    if (lVar13 != 0) {
      uVar10 = FUN_142f6f900();
      local_308 = 0;
      local_310 = local_310 & 0xffffffff00000000;
      local_318 = local_318 & 0xffffff00;
      lVar13 = FUN_141799680(uVar10,lVar13,DAT_1468698f8,0);
      if (lVar13 != 0) {
        local_280 = lVar13;
        lVar12 = FUN_142f6f900();
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          uVar10 = UMovieScene2DTransformSection::GetPrivateStaticClass();
          local_308 = 0;
          local_310 = local_310 & 0xffffffff00000000;
          local_318 = local_318 & 0xffffff00;
          plVar14 = (longlong *)FUN_141799680(uVar10,lVar15,DAT_146869988,0);
          if (plVar14 != (longlong *)0x0) {
            lVar13 = UMovieScene2DTransformSection::GetPrivateStaticClass();
            if ((*(int *)(plVar14[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar14[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
                lVar13 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              uVar10 = AArchVisCharacter::StaticClass();
              lVar13 = (**(code **)(*plVar14 + 0x628))(plVar14,uVar10);
              if (lVar13 != 0) {
                uVar10 = FUN_142f6f900();
                local_308 = 0;
                local_310 = local_310 & 0xffffffff00000000;
                local_318 = local_318 & 0xffffff00;
                lVar13 = FUN_141799680(uVar10,lVar13,DAT_1468698f8,0);
                if (lVar13 != 0) {
                  local_260 = lVar13;
                  lVar12 = FUN_142f6f900();
                  if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  if (bVar2) {
                    uVar10 = USoCharacterMovementComponent::GetPrivateStaticClass();
                    local_308 = 0;
                    local_310 = local_310 & 0xffffffff00000000;
                    local_318 = local_318 & 0xffffff00;
                    lVar15 = FUN_141799680(uVar10,lVar15,DAT_146869998,0);
                    if (lVar15 != 0) {
                      local_1f8 = lVar15;
                      lVar13 = USoCharacterMovementComponent::GetPrivateStaticClass();
                      if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
                        bVar2 = false;
                      }
                      else {
                        bVar2 = true;
                      }
                      if (bVar2) {
                        uVar10 = *(undefined8 *)(lVar15 + 0x660);
                        FUN_1417846f0(uVar10,
                                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                                     );
                        local_2e0 = 0;
                        uVar7 = UUGJournalKey::GetPrivateStaticClass();
                        local_2f8 = 0;
                        local_300 = 0;
                        local_308 = local_308 & 0xffffff00;
                        local_310 = 0;
                        local_318 = 0;
                        uVar7 = FUN_1417985e0(uVar7,uVar10,0,0);
                        *(undefined8 *)(lVar15 + 0x660) = uVar7;
                        local_250 = uVar7;
                        FUN_142cfdb70(uVar7,0,2);
                        FUN_142ce1000(uVar7,uVar10);
                        CLogicalCitizen::SetSelectedState(uVar7,1);
                        lVar13 = FUN_140b48aa0(plVar8[2],DAT_146869908);
                        lVar12 = FUN_140b48aa0(plVar8[2],DAT_146869918);
                        local_2e0 = FUN_140b48aa0(plVar8[2],DAT_146869928);
                        local_288 = FUN_140b48aa0(plVar8[2],DAT_146869938);
                        local_290 = FUN_140b48aa0(plVar8[2],DAT_146869948);
                        lVar9 = FUN_141316200();
                        lVar15 = lVar11;
                        do {
                          lVar17 = lVar11;
                          if (lVar15 == lVar9) break;
                          lVar15 = *(longlong *)(lVar15 + 0x30);
                          lVar17 = lVar16;
                        } while (lVar15 != 0);
                        lVar16 = FUN_140b48aa0(lVar17,DAT_146869958);
                        lVar9 = FUN_141316200();
                        lVar15 = lVar11;
                        do {
                          if (lVar15 == lVar9) goto LAB_140b52962;
                          lVar15 = *(longlong *)(lVar15 + 0x30);
                        } while (lVar15 != 0);
                        lVar11 = 0;
LAB_140b52962:
                        lVar15 = FUN_140b48aa0(lVar11,DAT_146869968);
                        lVar11 = DAT_146869978;
                        puVar19 = *(undefined1 **)(local_280 + 0x10);
                        if (((int)DAT_146869978 == 0) &&
                           ((int)((ulonglong)DAT_146869978 >> 0x20) == 0)) {
                          bVar2 = true;
                        }
                        else {
                          bVar2 = false;
                        }
                        if (!bVar2) {
                          if (puVar19 == (undefined1 *)0x0) {
                            local_2b8 = (undefined1 *)0x0;
                          }
                          else {
                            local_2b8 = *(undefined1 **)(puVar19 + 0x38);
                          }
                          local_2b0 = 0xffffffff;
                          local_2ac = 0x101;
                          local_2aa = 0;
                          local_2c0 = puVar19;
                          FUN_14067b2b0(&local_2c0);
                          puVar19 = local_2b8;
                          while (local_2b8 = puVar19, puVar19 != (undefined1 *)0x0) {
                            if (*(longlong *)(puVar19 + 0x18) == lVar11) {
                              lVar11 = *(longlong *)(puVar19 + 0x70);
                              if (lVar11 == 0) goto LAB_140b52a07;
                              lVar9 = UObjectProperty::GetPrivateStaticClass();
                              if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) <
                                   *(int *)(lVar9 + 0x90)) ||
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                                   (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                                bVar2 = false;
                              }
                              else {
                                bVar2 = true;
                              }
                              if (bVar2) goto LAB_140b52a09;
                              goto LAB_140b52a07;
                            }
                            local_2b8 = *(undefined1 **)(puVar19 + 0x28);
                            FUN_14067b2b0(&local_2c0);
                            puVar19 = local_2b8;
                          }
                        }
                        puVar19 = (undefined1 *)0x0;
LAB_140b52a07:
                        lVar11 = 0;
LAB_140b52a09:
                        if ((((lVar13 != 0) && (*(longlong *)(lVar13 + 0x70) != 0)) &&
                            (*(longlong *)(lVar13 + 0x78) != 0)) &&
                           ((((lVar12 != 0 && (*(longlong *)(lVar12 + 0x70) != 0)) &&
                             ((*(longlong *)(lVar12 + 0x78) != 0 &&
                              ((local_2e0 != 0 && (*(longlong *)(local_2e0 + 0x70) != 0)))))) &&
                            (((*(longlong *)(local_2e0 + 0x78) != 0 &&
                              (((local_288 != 0 && (*(longlong *)(local_288 + 0x70) != 0)) &&
                               (*(longlong *)(local_288 + 0x78) != 0)))) &&
                             (((local_290 != 0 && (*(longlong *)(local_290 + 0x70) != 0)) &&
                              ((((*(longlong *)(local_290 + 0x78) != 0 &&
                                 ((lVar16 != 0 && (*(longlong *)(lVar16 + 0x70) != 0)))) &&
                                (*(longlong *)(lVar16 + 0x78) != 0)) &&
                               (((((lVar15 != 0 && (*(longlong *)(lVar15 + 0x70) != 0)) &&
                                  (*(longlong *)(lVar15 + 0x78) != 0)) &&
                                 ((puVar19 != (undefined1 *)0x0 && (lVar11 != 0)))) &&
                                (lVar9 = UMaterialInterface::GetPrivateStaticClass(),
                                *(longlong *)(lVar11 + 0x70) == lVar9)))))))))))) {
                          local_200 = (longlong *)
                                      ((longlong)*(int *)(lVar13 + 0x44) + (longlong)plVar8);
                          local_240 = (longlong *)
                                      ((longlong)*(int *)(lVar12 + 0x44) + (longlong)plVar8);
                          local_238 = (longlong *)
                                      ((longlong)*(int *)(local_2e0 + 0x44) + (longlong)plVar8);
                          local_230 = (longlong *)
                                      ((longlong)*(int *)(local_288 + 0x44) + (longlong)plVar8);
                          local_228 = (longlong *)
                                      ((longlong)*(int *)(local_290 + 0x44) + (longlong)plVar8);
                          local_208 = (longlong *)((longlong)*(int *)(lVar15 + 0x44) + plVar8[0xcf])
                          ;
                          plVar8 = (longlong *)((longlong)*(int *)(lVar16 + 0x44) + plVar8[0xcf]);
                          local_220 = (longlong *)(local_280 + *(int *)(puVar19 + 0x44));
                          local_218 = (longlong *)(local_260 + *(int *)(puVar19 + 0x44));
                          if ((((local_200 != (longlong *)0x0) && (local_240 != (longlong *)0x0)) &&
                              ((local_238 != (longlong *)0x0 &&
                               (((local_230 != (longlong *)0x0 && (local_228 != (longlong *)0x0)) &&
                                (local_220 != (longlong *)0x0)))))) &&
                             (local_218 != (longlong *)0x0)) {
                            local_278 = (longlong *)0x0;
                            local_270 = 0;
                            local_248 = plVar8;
                            plVar14 = (longlong *)(**(code **)(*local_2c8 + 0x48))();
                            lVar11 = FUN_141316930();
                            cVar4 = (**(code **)(*plVar14 + 0x28))
                                              (plVar14,*(undefined8 *)(lVar11 + 0x18),&local_278,0);
                            if (cVar4 != '\0') {
                              iVar24 = 0;
                              local_2d8 = (longlong *)0x0;
                              local_258 = local_278 + (longlong)(int)local_270 * 0xb;
                              local_2e8 = 0;
                              local_2cc = 0;
                              local_2c8 = local_278;
                              iVar5 = 0;
                              if (local_278 != local_258) {
                                do {
                                  lVar11 = FAssetData::GetAsset();
                                  local_2e0 = lVar11;
                                  iVar24 = iVar5;
                                  if (lVar11 != 0) {
                                    lVar16 = FUN_141316930();
                                    lVar15 = local_268;
                                    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) <
                                         *(int *)(lVar16 + 0x90)) ||
                                       (*(longlong *)
                                         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                                         (longlong)*(int *)(lVar16 + 0x90) * 8) != lVar16 + 0x88)) {
                                      bVar2 = false;
                                    }
                                    else {
                                      bVar2 = true;
                                    }
                                    if (bVar2) {
                                      plVar14 = *(longlong **)(lVar11 + 0x30);
                                      plVar23 = plVar14 + (longlong)*(int *)(lVar11 + 0x38) * 0xc;
                                      if (plVar14 != plVar23) {
LAB_140b52cf8:
                                        if (((((longlong *)*plVar14 == (longlong *)0x0) ||
                                             ((cVar4 = (**(code **)(*(longlong *)*plVar14 + 0x288))
                                                                 (), cVar4 != '\0' &&
                                              (cVar4 = (**(code **)(*(longlong *)*plVar14 + 0x280))
                                                                 ((longlong *)*plVar14,0),
                                              cVar4 != '\0')))) || (*DAT_146869828 != 0)) &&
                                           (lVar11 = FUN_140b62fc0(plVar14 + 1), lVar11 != 0)) {
                                          lVar13 = UMovieScene2DTransformSection::
                                                   GetPrivateStaticClass();
                                          lVar16 = lVar11;
                                          do {
                                            if (lVar16 == lVar13) {
                                              FActorSpawnParameters::FActorSpawnParameters
                                                        (local_190);
                                              local_168 = 1;
                                              lVar13 = UMovieScene2DTransformSection::
                                                       GetPrivateStaticClass();
                                              lVar16 = lVar11;
                                              goto LAB_140b52d70;
                                            }
                                            lVar16 = *(longlong *)(lVar16 + 0x30);
                                          } while (lVar16 != 0);
                                        }
                                        goto LAB_140b52da1;
                                      }
LAB_140b52db7:
                                      lVar15 = *(longlong *)(lVar11 + 0x40);
                                      lVar16 = (longlong)*(int *)(lVar11 + 0x48) * 0x40 + lVar15;
                                      if (lVar15 != lVar16) {
                                        pbVar18 = (byte *)(lVar15 + 0x29);
                                        do {
                                          FSoftObjectPath::ToString(pbVar18 + -0x19,local_1d0);
                                          lVar11 = FUN_140b47960(local_268,local_1d0);
                                          if (local_1d0[0] != 0) {
                                            FMemory::Free();
                                          }
                                          if (lVar11 != 0) {
                                            *(byte *)(lVar11 + 0x140) = pbVar18[-1];
                                            *(byte *)(lVar11 + 0x141) = *pbVar18;
                                            local_2e8 = iVar5 + 1;
                                            local_2d0 = local_2e8;
                                            if (local_2cc < local_2e8) {
                                              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>
                                              ::ResizeGrow(&local_2d8,iVar5);
                                            }
                                            local_2d8[iVar5] = lVar11;
                                            local_2e8 = local_2d0;
                                            if ((int)plVar8[1] != *(int *)((longlong)plVar8 + 0x34))
                                            {
                                              plVar14 = (longlong *)plVar8[8];
                                              if ((longlong *)plVar8[8] == (longlong *)0x0) {
                                                plVar14 = plVar8 + 7;
                                              }
                                              iVar5 = *(int *)((longlong)plVar14 +
                                                              ((longlong)(int)plVar8[9] - 1U &
                                                              (ulonglong)*pbVar18) * 4);
                                              if (iVar5 != -1) {
                                                do {
                                                  lVar11 = *plVar8 + (longlong)iVar5 * 0x18;
                                                  if (*(byte *)(*plVar8 + (longlong)iVar5 * 0x18) ==
                                                      *pbVar18) {
                                                    if (((iVar5 != -1) && (lVar11 != 0)) &&
                                                       (lVar11 != -8)) goto LAB_140b52eed;
                                                    break;
                                                  }
                                                  iVar5 = *(int *)(lVar11 + 0x10);
                                                } while (iVar5 != -1);
                                              }
                                            }
                                            local_1e8 = pbVar18 + 7;
                                            local_1f0 = pbVar18;
                                            FUN_1404b9f20(plVar8,local_210,&local_1f0,0);
LAB_140b52eed:
                                            plVar14 = local_208;
                                            FUN_140b5b1d0(local_208,&local_2a8,*pbVar18);
                                            if (((local_2a8 == -1) ||
                                                (lVar11 = *plVar14 + (longlong)local_2a8 * 0x18,
                                                lVar11 == 0)) || (lVar11 == -8)) {
                                              local_1d8 = pbVar18 + 0xf;
                                              local_1e0 = pbVar18;
                                              FUN_1404b9f20(plVar14,&local_290,&local_1e0,0);
                                            }
                                          }
                                          lVar15 = lVar15 + 0x40;
                                          pbVar18 = pbVar18 + 0x40;
                                          lVar11 = local_2e0;
                                          iVar5 = local_2e8;
                                        } while (lVar15 != lVar16);
                                      }
                                      lVar15 = local_1f8;
                                      plVar23 = local_200;
                                      uVar10 = local_250;
                                      puVar20 = *(undefined1 **)(lVar11 + 0x50);
                                      puVar19 = puVar20 + (longlong)*(int *)(lVar11 + 0x58) * 2;
                                      plVar14 = local_240;
                                      for (; local_240 = plVar14, puVar20 != puVar19;
                                          puVar20 = puVar20 + 2) {
                                        FUN_140b5b150(plVar23,&local_2a4,*puVar20);
                                        if (((local_2a4 == -1) ||
                                            (lVar11 = *plVar23 + (longlong)local_2a4 * 0xc,
                                            lVar11 == 0)) || (lVar11 == -1)) {
                                          local_2c0 = puVar20;
                                          local_2b8 = puVar20 + 1;
                                          FUN_140b47ff0(plVar23,&local_288,&local_2c0,0);
                                          lVar11 = NewObject<UTTLFemtoShiftStatus>(lVar15);
                                          uVar1 = *puVar20;
                                          *(undefined1 *)(lVar11 + 0x88) = puVar20[1];
                                          *(undefined1 *)(lVar11 + 0x89) = uVar1;
                                          FUN_142ce1000(uVar10,lVar11);
                                        }
                                        plVar8 = local_248;
                                        lVar11 = local_2e0;
                                        plVar14 = local_240;
                                      }
                                      plVar23 = *(longlong **)(lVar11 + 0x60);
                                      plVar21 = plVar23 + (longlong)*(int *)(lVar11 + 0x68) * 2;
                                      plVar3 = local_238;
                                      for (; local_238 = plVar3, plVar23 != plVar21;
                                          plVar23 = plVar23 + 2) {
                                        if (*plVar23 != 0) {
                                          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                                          ::FindId(plVar14,&local_2a0);
                                          if (((local_2a0 == -1) ||
                                              (lVar11 = *plVar14 + (longlong)local_2a0 * 0x18,
                                              lVar11 == 0)) || (lVar11 == -8)) {
                                            TMapBase<int,UItemDA_*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UItemDA_*___ptr64,0>_>
                                            ::Emplace<int,UItemDA_*___ptr64>
                                                      (plVar14,plVar23,plVar23 + 1);
                                          }
                                        }
                                        lVar11 = local_2e0;
                                        plVar3 = local_238;
                                      }
                                      puVar19 = *(undefined1 **)(lVar11 + 0x70);
                                      puVar20 = puVar19 + (longlong)*(int *)(lVar11 + 0x78) * 0x10;
                                      plVar14 = local_230;
                                      for (; local_230 = plVar14, puVar19 != puVar20;
                                          puVar19 = puVar19 + 0x10) {
                                        if (*(longlong *)(puVar19 + 8) != 0) {
                                          FUN_140b5b1d0(plVar3,&local_29c,*puVar19);
                                          if (((local_29c == -1) ||
                                              (lVar11 = *plVar3 + (longlong)local_29c * 0x18,
                                              lVar11 == 0)) || (lVar11 == -8)) {
                                            TMapBase<int,UItemDA_*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UItemDA_*___ptr64,0>_>
                                            ::Emplace<int,UItemDA_*___ptr64>
                                                      (plVar3,puVar19,puVar19 + 8);
                                          }
                                        }
                                        lVar11 = local_2e0;
                                        plVar14 = local_230;
                                      }
                                      puVar20 = *(undefined1 **)(lVar11 + 0x80);
                                      puVar19 = puVar20 + (longlong)*(int *)(lVar11 + 0x88) * 0x18;
                                      plVar23 = local_228;
                                      for (; local_228 = plVar23, puVar20 != puVar19;
                                          puVar20 = puVar20 + 0x18) {
                                        FUN_140b5b250(plVar14,&local_298,*puVar20);
                                        if (((local_298 == -1) ||
                                            (lVar15 = (longlong)local_298 * 0x20 + *plVar14,
                                            lVar15 == 0)) || (lVar15 == -8)) {
                                          FUN_140b47f70(plVar14,puVar20,puVar20 + 8);
                                        }
                                        plVar23 = local_228;
                                      }
                                      puVar20 = *(undefined1 **)(lVar11 + 0x90);
                                      puVar19 = puVar20 + (longlong)*(int *)(lVar11 + 0x98) * 0x18;
                                      for (; puVar20 != puVar19; puVar20 = puVar20 + 0x18) {
                                        FUN_140b5b250(plVar23,&local_294,*puVar20);
                                        if (((local_294 == -1) ||
                                            (lVar15 = (longlong)local_294 * 0x20 + *plVar23,
                                            lVar15 == 0)) || (lVar15 == -8)) {
                                          FUN_140b47f70(plVar23,puVar20,puVar20 + 8);
                                        }
                                      }
                                      if (*(longlong *)(lVar11 + 0xa0) != 0) {
                                        FUN_1417812e0(local_128,*(longlong *)(lVar11 + 0xa0),
                                                      local_280);
                                        uVar10 = FUN_141798990(local_128);
                                        plVar14 = local_220;
                                        iVar5 = (int)local_220[1];
                                        *(int *)(local_220 + 1) = iVar5 + 1;
                                        if (*(int *)((longlong)local_220 + 0xc) < iVar5 + 1) {
                                          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::
                                          ResizeGrow(local_220,iVar5);
                                        }
                                        *(undefined8 *)(*plVar14 + (longlong)iVar5 * 8) = uVar10;
                                        FUN_140b4e6e0(local_128);
                                      }
                                      iVar24 = local_2e8;
                                      if (*(longlong *)(lVar11 + 0xa8) != 0) {
                                        FUN_1417812e0(local_128,*(longlong *)(lVar11 + 0xa8),
                                                      local_260);
                                        uVar10 = FUN_141798990(local_128);
                                        plVar14 = local_218;
                                        iVar5 = (int)local_218[1];
                                        *(int *)(local_218 + 1) = iVar5 + 1;
                                        if (*(int *)((longlong)local_218 + 0xc) < iVar5 + 1) {
                                          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::
                                          ResizeGrow(local_218,iVar5);
                                        }
                                        *(undefined8 *)(*plVar14 + (longlong)iVar5 * 8) = uVar10;
                                        FUN_140b4e6e0(local_128);
                                        iVar24 = local_2e8;
                                      }
                                    }
                                  }
                                  local_2c8 = local_2c8 + 0xb;
                                  iVar5 = iVar24;
                                } while (local_2c8 != local_258);
                              }
                              plVar8 = local_2d8;
                              uVar25 = 0;
                              uVar22 = (ulonglong)
                                       ((longlong)(local_2d8 + iVar24) + (7 - (longlong)local_2d8))
                                       >> 3;
                              if (local_2d8 + iVar24 < local_2d8) {
                                uVar22 = uVar25;
                              }
                              plVar14 = local_2d8;
                              if (uVar22 != 0) {
                                do {
                                  FUN_140eb1d00(*plVar14);
                                  uVar25 = uVar25 + 1;
                                  plVar14 = plVar14 + 1;
                                } while (uVar25 != uVar22);
                              }
                              if (plVar8 != (longlong *)0x0) {
                                FMemory::Free(plVar8);
                              }
                            }
                            FUN_1404be960(&local_278);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
  while (lVar16 = *(longlong *)(lVar16 + 0x30), lVar12 = 0, lVar16 != 0) {
LAB_140b52d70:
    lVar12 = lVar11;
    if (lVar16 == lVar13) break;
  }
  lVar11 = FUN_1425518b0(lVar15,lVar12,plVar14 + 6,local_190);
  if (lVar11 != 0) {
    UMovieScene2DTransformSection::GetPrivateStaticClass();
  }
LAB_140b52da1:
  plVar14 = plVar14 + 0xc;
  lVar11 = local_2e0;
  iVar5 = local_2e8;
  if (plVar14 == plVar23) goto LAB_140b52db7;
  goto LAB_140b52cf8;
}



// FUNCTION 140b536c0 FUN_140b536c0 body=209 status=ok
// SIG undefined FUN_140b536c0(void)

void FUN_140b536c0(longlong param_1,float *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (0.0 < *param_2) {
    plVar1 = (longlong *)(param_1 + -0x668);
    lVar3 = (**(code **)(*plVar1 + 0x148))(plVar1);
    if ((lVar3 != 0) && (0.0 < *param_2 - *(float *)(lVar3 + 0x790))) {
      *(float *)(param_1 + 0x54) = *param_2;
      (**(code **)(*plVar1 + 0x310))(plVar1,1);
      FUN_14223c460(plVar1,0);
      plVar2 = *(longlong **)(param_1 + -0x88);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x290))(plVar2,0,0);
      }
      *(undefined8 *)(param_1 + -0xb8) = 0;
      FUN_140ad0230(plVar1);
      plVar2 = *(longlong **)(param_1 + 0x40);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x4a8))(plVar2,1);
      }
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  return;
}



// FUNCTION 140b537a0 FUN_140b537a0 body=1133 status=ok
// SIG undefined FUN_140b537a0(void)

void FUN_140b537a0(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 local_118;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  undefined1 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined1 local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  longlong local_98;
  undefined8 uStack_90;
  float fStack_80;
  undefined8 uStack_7c;
  float fStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  uint uStack_64;
  longlong local_58 [2];
  undefined1 local_48 [16];
  undefined4 local_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  
  if (param_5 == 0) {
    return;
  }
  local_108 = param_1[2];
  local_100 = *(float *)(param_1 + 3);
  local_f8 = *param_1;
  fStack_f0 = *(float *)(param_1 + 1);
  uStack_ec = *(undefined4 *)((longlong)param_1 + 0xc);
  FQuat::Rotator(&local_f8,&local_e8);
  lVar4 = 0;
  if (param_2 == 0) goto LAB_140b53a75;
  iVar3 = *(int *)(param_2 + 0xc);
  if (iVar3 < (int)DAT_1469e91c4) {
    uVar9 = iVar3 >> 0x1f & 0xffff;
    uVar2 = iVar3 + uVar9;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar9) * 0x18;
  }
  if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) != 0) goto LAB_140b53a75;
  if ((param_3 != 0) && (lVar4 = FUN_14222b250(param_2,param_3,0), lVar4 != 0)) {
    FUN_14238d6f0(lVar4,param_3,&local_108,&local_e8);
    goto LAB_140b53a75;
  }
  lVar5 = APostProcessVolume::GetPrivateStaticClass();
  lVar4 = *(longlong *)(param_2 + 0x10);
  iVar3 = *(int *)(lVar5 + 0x90);
  lVar6 = (longlong)iVar3;
  if ((*(int *)(lVar4 + 0x90) < iVar3) ||
     (lVar6 = *(longlong *)(lVar4 + 0x88),
     *(longlong *)(lVar6 + (longlong)iVar3 * 8) != lVar5 + 0x88)) {
    fVar14 = (float)((uint)lVar6 & 0xffffff00);
  }
  else {
    fVar14 = (float)CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
  }
  if (SUB41(fVar14,0) == '\0') {
    if ((*(byte *)(param_2 + 0x93) & 0x80) != 0) {
      local_f8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      fStack_110 = DAT_1468b5d98;
      local_118 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      fStack_f0 = DAT_1468b5d98;
      uVar7 = FUN_14222da00(param_2,CONCAT71((int7)((ulonglong)lVar4 >> 8),1),&local_118,&local_f8);
      if ((((float)local_118 == DAT_1468b5d90) && (local_118._4_4_ == DAT_1468b5d94)) &&
         (fStack_110 == DAT_1468b5d98)) {
        fVar14 = (float)((int)((ulonglong)uVar7 >> 8) << 8);
      }
      else {
        fVar14 = (float)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      }
      fVar10 = (float)local_118;
      fVar12 = local_118._4_4_;
      if (SUB41(fVar14,0) != '\0') goto LAB_140b539d8;
    }
  }
  else {
    lVar4 = *(longlong *)(param_2 + 0x168);
    if (lVar4 == 0) {
      local_118 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      fStack_110 = DAT_1468b5d98;
      fVar10 = DAT_1468b5d90;
      fVar12 = DAT_1468b5d94;
    }
    else {
      local_118 = *(undefined8 *)(lVar4 + 0x220);
      fStack_110 = *(float *)(lVar4 + 0x228);
      fVar10 = *(float *)(lVar4 + 0x220);
      fVar12 = *(float *)(lVar4 + 0x224);
    }
LAB_140b539d8:
    local_108 = CONCAT44(fVar12,fVar10);
    fVar14 = fStack_110;
    local_100 = fStack_110;
  }
  lVar4 = *(longlong *)(param_2 + 0x168);
  if (lVar4 == 0) {
    uVar11 = (undefined4)DAT_1468b5da0;
    uVar13 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    fStack_f0 = DAT_1468b5da8;
  }
  else {
    fVar10 = *(float *)(lVar4 + 0x210);
    local_118 = *(undefined8 *)(lVar4 + 0x210);
    fStack_110 = *(float *)(lVar4 + 0x218);
    fStack_10c = *(float *)(lVar4 + 0x21c);
    auVar1._4_4_ = -(uint)(*(float *)(lVar4 + 0x254) != *(float *)(lVar4 + 0x214));
    auVar1._0_4_ = -(uint)(*(float *)(lVar4 + 0x250) != fVar10);
    auVar1._8_4_ = -(uint)(*(float *)(lVar4 + 600) != fStack_110);
    auVar1._12_4_ = -(uint)(*(float *)(lVar4 + 0x25c) != fStack_10c);
    iVar3 = movmskps(fVar14,auVar1);
    if (iVar3 != 0) {
      *(float *)(lVar4 + 0x250) = fVar10;
      *(float *)(lVar4 + 0x254) = *(float *)(lVar4 + 0x214);
      *(float *)(lVar4 + 600) = fStack_110;
      *(float *)(lVar4 + 0x25c) = fStack_10c;
      puVar8 = (undefined8 *)FQuat::Rotator(&local_118,&local_f8);
      *(undefined8 *)(lVar4 + 0x260) = *puVar8;
      *(undefined4 *)(lVar4 + 0x268) = *(undefined4 *)(puVar8 + 1);
    }
    uVar11 = (undefined4)*(undefined8 *)(lVar4 + 0x260);
    uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x260) >> 0x20);
    fStack_f0 = *(float *)(lVar4 + 0x268);
  }
  local_f8 = CONCAT44(uVar13,uVar11);
  local_e8 = local_f8;
  local_e0 = fStack_f0;
LAB_140b53a75:
  FRotator::Vector(&local_e8,&local_a8);
  local_c8 = 0.0;
  fStack_c4 = 0.0;
  local_c0 = 1;
  local_bc = 0;
  local_b4 = 0;
  local_b0 = 1;
  local_d8 = 0;
  uStack_d0._0_4_ = 0;
  uStack_d0._4_4_ = 0.0;
  if (param_4 == 0) {
    local_d8 = local_108;
    uStack_d0 = (ulonglong)(uint)local_100;
    iVar3 = rand();
    fVar14 = (float)iVar3 * 0.006103702 + 400.0;
    fStack_c4 = fVar14 * local_a0 + 300.0;
    local_c8 = fVar14 * local_a4;
    uStack_d0._4_4_ = fVar14 * local_a8;
  }
  else {
    uStack_7c = local_e8;
    uVar7 = uStack_7c;
    fStack_80 = local_100;
    uStack_7c._0_4_ = (undefined4)local_e8;
    fStack_74 = local_e0;
    local_48._8_4_ = local_100;
    local_48._0_8_ = local_108;
    local_48._12_4_ = (undefined4)uStack_7c;
    uStack_90 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_28 = (ulonglong)uStack_64 << 0x20;
    local_58[1] = 0;
    uStack_7c._4_4_ = (undefined4)((ulonglong)local_e8 >> 0x20);
    local_38 = uStack_7c._4_4_;
    fStack_34 = local_e0;
    uStack_30 = 0;
    uStack_2c = 0;
    local_98 = param_2;
    uStack_7c = uVar7;
    local_58[0] = param_2;
    FUN_142d9d660(param_4,local_58,&local_d8);
  }
  FUN_14223c850(param_5,&local_d8,0,0,1);
  puVar8 = (undefined8 *)FVector::Rotation((longlong)&uStack_d0 + 4,&local_118);
  local_f8 = *puVar8;
  fStack_f0 = *(float *)(puVar8 + 1);
  AActor::SetActorRotation(param_5,&local_f8,1);
  FUN_143015760(param_5,SQRT(uStack_d0._4_4_ * uStack_d0._4_4_ + local_c8 * local_c8 +
                             fStack_c4 * fStack_c4));
  FUN_143015710(param_5,&local_bc);
  return;
}



// FUNCTION 140b53c10 FUN_140b53c10 body=32 status=ok
// SIG undefined FUN_140b53c10(void)

void FUN_140b53c10(undefined8 param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x458) != 0)) {
    FUN_142d271f0(*(longlong *)(param_2 + 0x458),param_1,0);
    return;
  }
  return;
}



// FUNCTION 140b53c30 FUN_140b53c30 body=152 status=ok
// SIG undefined FUN_140b53c30(void)

void FUN_140b53c30(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  if ((((param_1 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) &&
      (lVar3 = UWorld::GetGameState<APVPGameState>(lVar3), lVar3 != 0)) &&
     (puVar1 = (undefined8 *)(lVar3 + 0x680), puVar1 != param_2)) {
    iVar2 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(lVar3 + 0x688) = iVar2;
    if ((iVar2 == 0) && (*(int *)(lVar3 + 0x68c) == 0)) {
      *(undefined4 *)(lVar3 + 0x68c) = 0;
      return;
    }
    TArray<int,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
    _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 2);
  }
  return;
}



// FUNCTION 140b53cd0 FUN_140b53cd0 body=879 status=ok
// SIG undefined FUN_140b53cd0(void)

void FUN_140b53cd0(ulonglong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulonglong local_res8;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong *local_60;
  undefined8 local_58;
  
  if ((*(longlong *)(param_1 + 0x4f0) != 0) && (*(longlong *)(param_1 + 0x6d8) == 0)) {
    local_60 = (longlong *)0x0;
    local_58 = 0;
    cVar6 = FUN_142d472a0(param_1,param_1 + 0x738,&local_60);
    if (cVar6 != '\0') {
      local_res8 = param_1;
      AlgoImpl::
      IntroSortInternal<AVillageSocket_*,FIdentityFunctor,TDereferenceWrapper<AVillageSocket_*,<lambda_62ded9058879722249fd3bf388cc91c4>_>_>
                (local_60,(longlong)(int)local_58,param_1 & 0xff,&local_res8);
      plVar5 = local_60;
      if ((0 < (int)local_58) && (*local_60 != 0)) {
        fVar8 = *(float *)(param_1 + 0x7f4);
        fVar13 = 0.0;
        if (fVar8 == 0.0) {
          fVar8 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x7f0));
          *(float *)(param_1 + 0x7f4) = fVar8;
        }
        lVar2 = *(longlong *)(param_1 + 0x4f0);
        lVar3 = *(longlong *)(param_1 + 0x168);
        uVar1 = *(undefined8 *)(lVar2 + 0x18c);
        fVar9 = (float)uVar1;
        local_88._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        local_80 = 0;
        fVar14 = SQRT(fVar9 * fVar9 + local_88._4_4_ * local_88._4_4_);
        if (lVar3 == 0) {
          local_70 = DAT_1468b5d98;
          local_78 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        }
        else {
          local_70 = *(undefined4 *)(lVar3 + 0x228);
          local_78 = *(undefined8 *)(lVar3 + 0x220);
        }
        uVar4 = local_78;
        local_64 = local_70;
        local_6c = local_78;
        lVar3 = *(longlong *)(*plVar5 + 0x168);
        if (lVar3 == 0) {
          local_70 = DAT_1468b5d98;
          local_78 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        }
        else {
          local_70 = *(undefined4 *)(lVar3 + 0x228);
          local_78 = *(undefined8 *)(lVar3 + 0x220);
        }
        local_6c._0_4_ = (float)uVar4;
        fVar12 = (float)local_78 - (float)local_6c;
        local_6c._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
        fVar11 = (float)((ulonglong)local_78 >> 0x20) - local_6c._4_4_;
        fVar9 = fVar12 * fVar9 + fVar11 * local_88._4_4_;
        local_88 = uVar1;
        local_6c = uVar4;
        if (ABS(fVar9) < fVar8) {
          if (fVar9 <= 0.0) {
            fVar8 = 1.0;
          }
          else {
            fVar8 = -1.0;
          }
          local_6c = 0;
          local_64 = 0x3f800000;
          puVar7 = (undefined8 *)
                   FVector::RotateAngleAxis
                             (&local_88,&local_78,fVar8 * *(float *)(param_1 + 0x7f0),&local_6c);
          local_88 = *puVar7;
          fVar13 = *(float *)(puVar7 + 1);
          fVar11 = (float)((ulonglong)local_88 >> 0x20);
          fVar12 = (float)local_88;
        }
        fVar9 = fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13;
        fVar8 = fVar11;
        fVar13 = fVar12;
        if ((fVar9 != 1.0) && (fVar8 = DAT_1468b5d94, fVar13 = DAT_1468b5d90, 1e-08 <= fVar9)) {
          auVar10 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
          fVar13 = auVar10._0_4_;
          fVar13 = fVar13 + fVar13 * (0.5 - fVar9 * 0.5 * fVar13 * fVar13);
          fVar13 = fVar13 + fVar13 * (0.5 - fVar9 * 0.5 * fVar13 * fVar13);
          fVar8 = fVar11 * fVar13;
          fVar13 = fVar12 * fVar13;
        }
        local_80 = *(undefined4 *)(lVar2 + 0x194);
        *(ulonglong *)(lVar2 + 0x18c) = CONCAT44(fVar8 * fVar14,fVar13 * fVar14);
        *(undefined4 *)(lVar2 + 0x194) = local_80;
      }
    }
    if (local_60 != (longlong *)0x0) {
      FMemory::Free(local_60);
    }
  }
  return;
}



// FUNCTION 140b54040 FUN_140b54040 body=394 status=ok
// SIG undefined FUN_140b54040(void)

void FUN_140b54040(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong local_res10;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  FUN_142223710();
  lVar2 = *(longlong *)(param_1 + 0x468);
  if (lVar2 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x458);
    if (lVar6 != 0) {
      iVar1 = *(int *)(lVar2 + 0x380);
      *(int *)(lVar2 + 0x380) = iVar1 + 1;
      if (*(int *)(lVar2 + 900) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x378,iVar1);
      }
      *(undefined8 *)(*(longlong *)(lVar2 + 0x378) + (longlong)iVar1 * 8) =
           *(undefined8 *)(lVar6 + 0x1c0);
      (**(code **)(**(longlong **)(param_1 + 0x458) + 0x450))
                (*(longlong **)(param_1 + 0x458),*(undefined8 *)(param_1 + 0x468));
    }
    if (*(char *)(param_1 + 0x475) != '\0') {
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AMineCart::OnHit",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_res10,pwVar4 + 2,1);
      lVar2 = *(longlong *)(param_1 + 0x468);
      plVar8 = (longlong *)(lVar2 + 0x560);
      FWeakObjectPtr::operator=(&local_28,0);
      local_20 = 0;
      FWeakObjectPtr::operator=(&local_28,param_1);
      local_20 = local_res10;
      if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_28), lVar6 != 0)) {
        UObject::FindFunction(lVar6,local_20);
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar8);
      iVar1 = *(int *)(lVar2 + 0x568);
      *(int *)(lVar2 + 0x568) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x56c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
      }
      puVar7 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar8);
      *puVar7 = local_28;
      puVar7[1] = local_24;
      *(longlong *)(puVar7 + 2) = local_20;
    }
  }
  return;
}



// FUNCTION 140b541d0 FUN_140b541d0 body=401 status=ok
// SIG undefined FUN_140b541d0(void)

void FUN_140b541d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong local_res10;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  FUN_142223710();
  lVar2 = *(longlong *)(param_1 + 0x468);
  if (lVar2 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x458);
    if (lVar6 != 0) {
      iVar1 = *(int *)(lVar2 + 0x380);
      *(int *)(lVar2 + 0x380) = iVar1 + 1;
      if (*(int *)(lVar2 + 900) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x378,iVar1);
      }
      *(undefined8 *)(*(longlong *)(lVar2 + 0x378) + (longlong)iVar1 * 8) =
           *(undefined8 *)(lVar6 + 0x1c0);
      (**(code **)(**(longlong **)(param_1 + 0x458) + 0x450))
                (*(longlong **)(param_1 + 0x458),*(undefined8 *)(param_1 + 0x468));
    }
    if (*(char *)(param_1 + 0x475) != '\0') {
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AMineCart::OnHit",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_res10,pwVar4 + 2,1);
      lVar2 = *(longlong *)(param_1 + 0x468);
      plVar8 = (longlong *)(lVar2 + 0x560);
      FWeakObjectPtr::operator=(&local_28,0);
      local_20 = 0;
      FWeakObjectPtr::operator=(&local_28,param_1);
      local_20 = local_res10;
      if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_28), lVar6 != 0)) {
        UObject::FindFunction(lVar6,local_20);
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar8);
      iVar1 = *(int *)(lVar2 + 0x568);
      *(int *)(lVar2 + 0x568) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x56c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
      }
      puVar7 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar8);
      *puVar7 = local_28;
      puVar7[1] = local_24;
      *(longlong *)(puVar7 + 2) = local_20;
    }
  }
  FUN_140b58350(param_1);
  return;
}



// FUNCTION 140b54370 FUN_140b54370 body=354 status=ok
// SIG undefined FUN_140b54370(void)

void FUN_140b54370(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  FUN_140b1cfe0();
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&AShieldBoosterNonAugment::OnShieldChargePickedUp",L"::")
  ;
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res10,pwVar4 + 2,1);
  plVar1 = (longlong *)(param_1 + 0x458);
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = local_res10;
  if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_20);
  }
  piVar8 = (int *)*plVar1;
  iVar2 = *(int *)(param_1 + 0x460);
  piVar9 = piVar8;
  do {
    if (piVar9 == piVar8 + (longlong)iVar2 * 4) {
LAB_140b54484:
      iVar2 = *(int *)(param_1 + 0x460);
      *(int *)(param_1 + 0x460) = iVar2 + 1;
      if (*(int *)(param_1 + 0x464) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar8 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar8 = local_28;
      piVar8[1] = local_24;
      *(longlong *)(piVar8 + 2) = local_20;
LAB_140b544bd:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      return;
    }
    if ((((*piVar9 == local_28) && (piVar9[1] == local_24)) ||
        ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
         (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) &&
       (*(longlong *)(piVar9 + 2) == local_20)) {
      if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140b544bd;
      goto LAB_140b54484;
    }
    piVar9 = piVar9 + 4;
  } while( true );
}



// FUNCTION 140b544e0 FUN_140b544e0 body=354 status=ok
// SIG undefined FUN_140b544e0(void)

void FUN_140b544e0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  FUN_140b1cfe0();
  pwVar6 = _guard_xfg_dispatch_icall_nop
                     (L"&AShieldChargeInventoryPickup::OnShieldChargePickedUp",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res10,pwVar4 + 2,1);
  plVar1 = (longlong *)(param_1 + 0x458);
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = local_res10;
  if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_20);
  }
  piVar8 = (int *)*plVar1;
  iVar2 = *(int *)(param_1 + 0x460);
  piVar9 = piVar8;
  do {
    if (piVar9 == piVar8 + (longlong)iVar2 * 4) {
LAB_140b545f4:
      iVar2 = *(int *)(param_1 + 0x460);
      *(int *)(param_1 + 0x460) = iVar2 + 1;
      if (*(int *)(param_1 + 0x464) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar8 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar8 = local_28;
      piVar8[1] = local_24;
      *(longlong *)(piVar8 + 2) = local_20;
LAB_140b5462d:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      return;
    }
    if ((((*piVar9 == local_28) && (piVar9[1] == local_24)) ||
        ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
         (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) &&
       (*(longlong *)(piVar9 + 2) == local_20)) {
      if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140b5462d;
      goto LAB_140b545f4;
    }
    piVar9 = piVar9 + 4;
  } while( true );
}



// FUNCTION 140b54650 FUN_140b54650 body=1185 status=ok
// SIG undefined FUN_140b54650(void)

void FUN_140b54650(longlong param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int *piVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  longlong *plVar14;
  longlong local_res10;
  int local_38;
  int local_34;
  undefined8 local_30;
  
  pwVar12 = (wchar_t *)0x0;
  if (*(longlong *)(param_1 + 0x6c8) != 0) goto LAB_140b546c3;
  pwVar8 = *(wchar_t **)(param_1 + 0x118);
  if (pwVar8 == (wchar_t *)0x0) {
LAB_140b546b9:
    pwVar8 = pwVar12;
  }
  else {
    lVar6 = FUN_1430b3b80();
    if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140b546b9;
  }
  *(wchar_t **)(param_1 + 0x6c8) = pwVar8;
LAB_140b546c3:
  FUN_14306c180(param_1);
  puVar11 = *(undefined8 **)(param_1 + 0x6b8);
  pwVar8 = (wchar_t *)((longlong)*(int *)(param_1 + 0x6c0) & 0x1fffffffffffffff);
  if (puVar11 + *(int *)(param_1 + 0x6c0) < puVar11) {
    pwVar8 = pwVar12;
  }
  pwVar13 = pwVar12;
  if (pwVar8 != (wchar_t *)0x0) {
    do {
      plVar14 = (longlong *)*puVar11;
      (**(code **)(*plVar14 + 0x280))(plVar14,param_1);
      FUN_1414d1650(plVar14,param_1);
      FUN_1414d12b0(plVar14,param_1);
      pwVar13 = (wchar_t *)((longlong)pwVar13 + 1);
      puVar11 = puVar11 + 1;
    } while (pwVar13 != pwVar8);
  }
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    pwVar13 = _guard_xfg_dispatch_icall_nop(L"&ATedioreProjectile::OnProjectileBounce",L"::");
    pwVar8 = pwVar12;
    while (pwVar4 = pwVar13, pwVar4 != (wchar_t *)0x0) {
      pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar8 = pwVar4;
    }
    FName::FName(&local_res10,pwVar8 + 2,1);
    lVar7 = local_res10;
    lVar6 = *(longlong *)(param_1 + 0x4f0);
    plVar14 = (longlong *)(lVar6 + 0x1f0);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = lVar7;
    if ((lVar7 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_30);
    }
    piVar2 = (int *)*plVar14;
    iVar1 = *(int *)(lVar6 + 0x1f8);
    for (piVar9 = piVar2; piVar9 != piVar2 + (longlong)iVar1 * 4; piVar9 = piVar9 + 4) {
      if (((*piVar9 == local_38) && (piVar9[1] == local_34)) ||
         ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
          (cVar5 = FWeakObjectPtr::IsValid(&local_38), cVar5 == '\0')))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((bVar3) && (*(longlong *)(piVar9 + 2) == local_30)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        if ((int)((longlong)piVar9 - (longlong)piVar2 >> 4) != -1) goto LAB_140b5488e;
        break;
      }
    }
    iVar1 = *(int *)(lVar6 + 0x1f8);
    lVar7 = (longlong)iVar1;
    *(int *)(lVar6 + 0x1f8) = iVar1 + 1;
    if (*(int *)(lVar6 + 0x1fc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar1);
    }
    lVar6 = *plVar14;
    *(int *)(lVar6 + lVar7 * 0x10) = local_38;
    *(int *)(lVar6 + 4 + lVar7 * 0x10) = local_34;
    *(longlong *)(lVar6 + 8 + lVar7 * 0x10) = local_30;
LAB_140b5488e:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ATedioreProjectile::OnProjectileLastBounce",L"::");
    while (pwVar13 = pwVar8, pwVar13 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
      pwVar12 = pwVar13;
    }
    FName::FName(&local_res10,pwVar12 + 2,1);
    lVar6 = *(longlong *)(param_1 + 0x4f0);
    plVar14 = (longlong *)(lVar6 + 600);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = local_res10;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_30);
    }
    piVar2 = (int *)*plVar14;
    iVar1 = *(int *)(lVar6 + 0x260);
    for (piVar9 = piVar2; piVar9 != piVar2 + (longlong)iVar1 * 4; piVar9 = piVar9 + 4) {
      if (((*piVar9 == local_38) && (piVar9[1] == local_34)) ||
         ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
          (cVar5 = FWeakObjectPtr::IsValid(&local_38), cVar5 == '\0')))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((bVar3) && (*(longlong *)(piVar9 + 2) == local_30)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        if ((int)((longlong)piVar9 - (longlong)piVar2 >> 4) != -1) goto LAB_140b549df;
        break;
      }
    }
    iVar1 = *(int *)(lVar6 + 0x260);
    lVar7 = (longlong)iVar1;
    *(int *)(lVar6 + 0x260) = iVar1 + 1;
    if (*(int *)(lVar6 + 0x264) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar1);
    }
    lVar6 = *plVar14;
    *(int *)(lVar6 + lVar7 * 0x10) = local_38;
    *(int *)(lVar6 + 4 + lVar7 * 0x10) = local_34;
    *(longlong *)(lVar6 + 8 + lVar7 * 0x10) = local_30;
LAB_140b549df:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
  }
  if (*(float *)(param_1 + 0x708) <= 0.0001 && *(float *)(param_1 + 0x708) != 0.0001) {
    *(undefined1 *)(param_1 + 0x5a9) = 1;
    *(undefined1 *)(param_1 + 0x5ab) = 1;
  }
  lVar6 = *(longlong *)(param_1 + 0x698);
  if (*(char *)(param_1 + 0x70c) == '\0') {
    local_30 = (ulonglong)local_30._4_4_ << 0x20;
    *(undefined8 *)(lVar6 + 0x1c4) = 0;
  }
  else {
    *(undefined8 *)(lVar6 + 0x1c4) = 0xc3c8000040a00000;
    local_30 = CONCAT44(local_30._4_4_,0xc43e0000);
  }
  *(undefined4 *)(lVar6 + 0x1cc) = (undefined4)local_30;
  if ((*(char *)(param_1 + 0x128) != '\x03') && (*(char *)(param_1 + 0x830) != '\0')) {
    plVar10 = *(longlong **)(param_1 + 0x6b8);
    plVar14 = plVar10 + *(int *)(param_1 + 0x6c0);
    for (; plVar10 != plVar14; plVar10 = plVar10 + 1) {
      lVar6 = *plVar10;
      if (lVar6 != 0) {
        lVar7 = FUN_1414cfcf0();
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
          FUN_140b67b50(lVar6,param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140b54b00 FUN_140b54b00 body=343 status=ok
// SIG undefined FUN_140b54b00(void)

void FUN_140b54b00(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res8;
  code *local_18;
  undefined8 uStack_10;
  
  FUN_140acba80();
  FUN_140b751b0(param_1);
  FUN_140b72300(param_1);
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
    local_18 = FUN_140b652e0;
    pwVar3 = _guard_xfg_dispatch_icall_nop
                       (L"&AVendingMachine::OnPlayerEnteredItemOfTheDayArea",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x6b0) + 0x710,param_1,&local_18,local_res8);
    uStack_10 = uStack_10 & 0xffffffff00000000;
    local_18 = FUN_140b653b0;
    pwVar3 = _guard_xfg_dispatch_icall_nop
                       (L"&AVendingMachine::OnPlayerExitedItemOfTheDayArea",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x6b0) + 0x720,param_1,&local_18,local_res8);
  }
  return;
}



// FUNCTION 140b54c60 FUN_140b54c60 body=380 status=ok
// SIG undefined FUN_140b54c60(void)

void FUN_140b54c60(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  
  FUN_140acbeb0();
  uVar5 = AUGDoor::GetPrivateStaticClass();
  lVar6 = (**(code **)(*param_1 + 0x628))(param_1,uVar5);
  param_1[0x12e] = lVar6;
  FUN_140b5f650(param_1);
  FUN_140b6e740(param_1);
  *(undefined4 *)(param_1 + 0x12f) = 0;
  FUN_140b6b900(param_1,0,0xbf800000);
  iVar4 = (int)param_1[0xaa];
  iVar7 = *(int *)((longlong)param_1 + 0x554) + -1;
  iVar3 = iVar4 - iVar7;
  if (((-1 < iVar3) && (iVar3 < (int)param_1[0x129])) &&
     (lVar6 = *(longlong *)(param_1[0x128] + (longlong)iVar3 * 0x30), lVar6 != 0)) {
    uVar1 = *(undefined4 *)(lVar6 + 0x224);
    uVar2 = *(undefined4 *)(lVar6 + 0x228);
    *(undefined4 *)((longlong)param_1 + 0x9cc) = *(undefined4 *)(lVar6 + 0x220);
    *(undefined4 *)(param_1 + 0x13a) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x9d4) = uVar2;
  }
  if (((-1 < iVar4) && (iVar4 < (int)param_1[0x129])) &&
     (lVar6 = *(longlong *)(param_1[0x128] + (longlong)iVar4 * 0x30), lVar6 != 0)) {
    uVar1 = *(undefined4 *)(lVar6 + 0x224);
    uVar2 = *(undefined4 *)(lVar6 + 0x228);
    *(undefined4 *)((longlong)param_1 + 0x9b4) = *(undefined4 *)(lVar6 + 0x220);
    *(undefined4 *)(param_1 + 0x137) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x9bc) = uVar2;
  }
  iVar4 = iVar4 + iVar7;
  if (((-1 < iVar4) && (iVar4 < (int)param_1[0x129])) &&
     (lVar6 = *(longlong *)(param_1[0x128] + (longlong)iVar4 * 0x30), lVar6 != 0)) {
    uVar1 = *(undefined4 *)(lVar6 + 0x224);
    uVar2 = *(undefined4 *)(lVar6 + 0x228);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(lVar6 + 0x220);
    *(undefined4 *)((longlong)param_1 + 0x9c4) = uVar1;
    *(undefined4 *)(param_1 + 0x139) = uVar2;
  }
  return;
}



// FUNCTION 140b54de0 FUN_140b54de0 body=106 status=ok
// SIG undefined FUN_140b54de0(void)

void FUN_140b54de0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_142fe7b10();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_1414ba680();
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
      FUN_140b30420(lVar1,param_1);
    }
  }
  return;
}



// FUNCTION 140b54e50 FUN_140b54e50 body=165 status=ok
// SIG undefined FUN_140b54e50(void)

void FUN_140b54e50(undefined8 param_1,longlong param_2,uint param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = param_3 & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar2 == 0) && (param_3 < 0x1f9)) {
    lVar3 = (longlong)(int)param_3;
    uVar1 = FUN_140b55010(param_1,*(undefined1 *)(lVar3 + param_2),param_6,param_7);
    *(undefined1 *)(lVar3 + param_2) = uVar1;
    uVar1 = FUN_140b55010(param_1,*(undefined1 *)(param_2 + 1 + lVar3),param_5,param_7);
    *(undefined1 *)(param_2 + 1 + lVar3) = uVar1;
    uVar1 = FUN_140b55010(param_1,*(undefined1 *)(param_2 + 2 + lVar3),param_4,param_7);
    *(undefined1 *)(param_2 + 2 + lVar3) = uVar1;
    *(undefined1 *)(lVar3 + 3 + param_2) = 0xff;
  }
  return;
}



// FUNCTION 140b54f00 FUN_140b54f00 body=267 status=ok
// SIG undefined FUN_140b54f00(void)

void FUN_140b54f00(undefined8 param_1,int *param_2,int *param_3,int *param_4,int param_5,int param_6
                  ,int param_7,float param_8)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  if (param_8 <= 0.0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = param_8;
    if (1.0 <= param_8) {
      fVar3 = 1.0;
    }
  }
  iVar2 = (int)((1.0 - fVar3) * (float)*param_2 + (float)param_5 * fVar3);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar1 = 0xff;
  if (iVar2 < 0xff) {
    iVar1 = iVar2;
  }
  *param_2 = iVar1;
  if (param_8 <= 0.0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = param_8;
    if (1.0 <= param_8) {
      fVar3 = 1.0;
    }
  }
  iVar2 = (int)((1.0 - fVar3) * (float)*param_3 + (float)param_6 * fVar3);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar1 = 0xff;
  if (iVar2 < 0xff) {
    iVar1 = iVar2;
  }
  *param_3 = iVar1;
  if (param_8 <= 0.0) {
    param_8 = 0.0;
  }
  else if (1.0 <= param_8) {
    param_8 = 1.0;
  }
  iVar2 = (int)((1.0 - param_8) * (float)*param_4 + (float)param_7 * param_8);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar1 = 0xff;
  if (iVar2 < 0xff) {
    iVar1 = iVar2;
  }
  *param_4 = iVar1;
  return;
}



// FUNCTION 140b55010 FUN_140b55010 body=82 status=ok
// SIG undefined FUN_140b55010(void)

int FUN_140b55010(undefined8 param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  else if (1.0 <= param_4) {
    param_4 = 1.0;
  }
  iVar2 = (int)((1.0 - param_4) * (float)param_2 + (float)param_3 * param_4);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar1 = 0xff;
  if (iVar2 < 0xff) {
    iVar1 = iVar2;
  }
  return iVar1;
}



// FUNCTION 140b550a0 FUN_140b550a0 body=50 status=ok
// SIG undefined FUN_140b550a0(void)

void FUN_140b550a0(undefined8 *param_1,undefined8 param_2)

{
  FUN_143014080(*param_1,param_2,*(undefined4 *)param_1[1],*(undefined8 *)param_1[2],0,1,0);
  return;
}



// FUNCTION 140b550e0 FUN_140b550e0 body=118 status=ok
// SIG undefined FUN_140b550e0(void)

void FUN_140b550e0(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 local_res10;
  undefined4 local_res14;
  
  if ((*param_2 == 0) || (*(longlong *)(*param_2 + 0x848) != 0)) {
    FWeakObjectPtr::operator=(&local_res10);
    lVar3 = *param_1;
    iVar2 = *(int *)(lVar3 + 0xd8);
    *(int *)(lVar3 + 0xd8) = iVar2 + 1;
    if (*(int *)(lVar3 + 0xdc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar3 + 0xd0,iVar2);
    }
    puVar1 = (undefined4 *)(*(longlong *)(lVar3 + 0xd0) + (longlong)iVar2 * 8);
    *puVar1 = local_res10;
    puVar1[1] = local_res14;
  }
  return;
}



// FUNCTION 140b55160 FUN_140b55160 body=1010 status=ok
// SIG undefined FUN_140b55160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140b55160(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  longlong *plVar19;
  longlong *plVar20;
  int iVar21;
  int iVar22;
  undefined8 unaff_R15;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  longlong *local_a0;
  longlong local_98;
  uint local_90 [2];
  longlong local_88;
  longlong local_80;
  int local_78;
  int local_70;
  char local_6c;
  int local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  undefined8 local_40;
  char local_38;
  ulonglong local_30;
  
  uVar9 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar11 = *(longlong *)(param_2 + 0x148);
  if (lVar11 == 0) {
LAB_140b5554e:
    return uVar9 & 0xffffffffffffff00;
  }
  local_30 = uVar9;
  lVar10 = FUN_141424d10();
  iVar22 = *(int *)(lVar10 + 0x90);
  uVar9 = (longlong)iVar22;
  if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < iVar22) ||
     (uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x10) + 0x88),
     *(longlong *)(uVar9 + (longlong)iVar22 * 8) != lVar10 + 0x88)) {
    uVar9 = uVar9 & 0xffffffffffffff00;
  }
  else {
    uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
  }
  if ((char)uVar9 == '\0') goto LAB_140b5554e;
  uVar9 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),-(*(char *)(lVar11 + 0xa11) != '\0')) &
          0xffffffffffffff06;
  if ((param_3 != 0) && (plVar20 = *(longlong **)(param_3 + 0x848), plVar20 != (longlong *)0x0)) {
    local_a0 = plVar20;
    lVar11 = FUN_1413ffe00();
    if ((*(int *)(plVar20[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar20[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
        lVar11 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140b55239;
  }
  plVar20 = (longlong *)0x0;
  local_a0 = (longlong *)0x0;
LAB_140b55239:
  local_a8 = FUN_1413ffe00();
  if (local_a8 != 0) {
    uVar12 = FUN_1413ffe00();
    uVar16 = local_a8;
    do {
      if (uVar16 == uVar12) goto LAB_140b55260;
      uVar16 = *(ulonglong *)(uVar16 + 0x30);
    } while (uVar16 != 0);
  }
  local_a8 = 0;
LAB_140b55260:
  local_90[0] = 5;
  local_38 = '\0';
  local_98 = param_2;
  FUN_14044bc80(&local_88,&local_98,&local_a8);
  FUN_14045a130(local_90);
  if (local_6c != '\0') {
LAB_140b554d3:
    if (local_38 != '\0') {
      local_38 = 0;
      UWorld::RemoveOnActorSpawnedHandler(local_88,local_40);
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (local_80 != 0) {
        FMemory::Free();
      }
    }
    return uVar9 & 0xff;
  }
  local_a8 = CONCAT44(local_a8._4_4_,(int)uVar9);
LAB_140b552c0:
  plVar19 = local_60;
  if ((char)uVar9 == '\0') {
    if (local_60 != (longlong *)0x0) {
      bVar6 = FUN_140e26fd0(local_60,local_60 != plVar20);
      uVar8 = (uint)bVar6;
      lVar11 = (**(code **)(*plVar19 + 0x690))(plVar19);
      if (lVar11 != 0) {
        uVar8 = 5;
      }
      local_a8 = CONCAT44(local_a8._4_4_,uVar8);
    }
    lVar11 = local_88;
    iVar22 = local_70 + 1;
    if (iVar22 < local_50 + local_78) {
      lVar10 = (longlong)iVar22 * 8;
      iVar21 = local_50;
      iVar17 = local_78;
      do {
        if (iVar22 < iVar17) {
          plVar19 = *(longlong **)(local_80 + lVar10);
        }
        else {
          plVar19 = *(longlong **)(local_58 + (longlong)(iVar22 - iVar17) * 8);
        }
        local_68 = local_68 + 1;
        if ((plVar19 != (longlong *)0x0) &&
           (lVar13 = AActor::GetLevel(plVar19), iVar21 = local_50, iVar17 = local_78, lVar13 != 0))
        {
          if ((local_90[0] & 1) != 0) {
            iVar1 = *(int *)((longlong)plVar19 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar18 = iVar1 >> 0x1f & 0xffff;
              uVar8 = iVar1 + uVar18;
              lVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                       (longlong)(int)((uVar8 & 0xffff) - uVar18) * 0x18;
            }
            else {
              lVar14 = 0;
            }
            if ((*(uint *)(lVar14 + 8) >> 0x1d & 1) != 0) goto LAB_140b55497;
          }
          if (((local_90[0] >> 1 & 1) == 0) ||
             (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(plVar19), iVar21 = local_50,
             iVar17 = local_78, cVar7 != '\0')) {
            if ((local_90[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar13 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar13 + 0x205) & 0x10) == 0)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              piVar2 = *(int **)(lVar13 + 600);
              if (((*(longlong *)(lVar13 + 0xc0) == 0) ||
                  (piVar15 = (int *)UWorld::GetActiveLevelCollection(), piVar15 == (int *)0x0)) ||
                 (piVar2 == piVar15)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              if ((bVar4) || (bVar4 = false, bVar5)) {
                bVar4 = true;
              }
              iVar21 = local_50;
              iVar17 = local_78;
              if ((!bVar3) || (!bVar4)) goto LAB_140b55497;
            }
            lVar13 = ULevel::GetWorld(lVar13);
            iVar21 = local_50;
            iVar17 = local_78;
            if (lVar13 == lVar11) {
              lVar13 = AActor::GetLevel(plVar19);
              if (lVar13 == *(longlong *)(lVar11 + 0x30)) goto LAB_140b5552a;
              lVar13 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(plVar19[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar19[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
                  lVar13 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              iVar21 = local_50;
              iVar17 = local_78;
              if (!bVar3) goto LAB_140b5552a;
            }
          }
        }
LAB_140b55497:
        iVar22 = iVar22 + 1;
        lVar10 = lVar10 + 8;
        if (iVar21 + iVar17 <= iVar22) break;
      } while( true );
    }
    uVar9 = local_a8 & 0xffffffff;
    local_60 = (longlong *)0x0;
    local_6c = '\x01';
  }
  goto LAB_140b554d3;
LAB_140b5552a:
  uVar9 = local_a8 & 0xffffffff;
  plVar20 = local_a0;
  local_70 = iVar22;
  local_60 = plVar19;
  if (local_6c != '\0') goto LAB_140b554d3;
  goto LAB_140b552c0;
}



// FUNCTION 140b55560 FUN_140b55560 body=159 status=ok
// SIG undefined FUN_140b55560(void)

undefined8
FUN_140b55560(undefined8 param_1,byte *param_2,undefined8 param_3,longlong param_4,longlong param_5)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  
  if (param_4 == 0) {
    return 0;
  }
  bVar1 = *param_2;
  if (((bVar1 & 8) != 0) && (*(char *)(param_5 + 0xc) == '\0')) {
    return 0;
  }
  if (*(char *)(param_4 + 0x5b2) == '\0') {
    if ((bVar1 & 2) == 0) goto LAB_140b555bf;
    cVar3 = *(char *)(param_5 + 0xd);
  }
  else {
    if ((bVar1 & 4) == 0) goto LAB_140b555bf;
    cVar3 = *(char *)(param_5 + 0xd);
  }
  if (cVar3 == '\0') {
    return 0;
  }
LAB_140b555bf:
  if ((((bVar1 & 1) == 0) || (cVar3 = FUN_140b2cbe0(param_4,0), cVar3 != '\x01')) &&
     ((plVar2 = *(longlong **)(param_2 + 0x40), plVar2 == (longlong *)0x0 ||
      (cVar3 = (**(code **)(*plVar2 + 0x278))(plVar2,param_3,param_4), cVar3 != '\0')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 140b55600 FUN_140b55600 body=60 status=ok
// SIG undefined FUN_140b55600(void)

void FUN_140b55600(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x110 + lVar1;
    if (lVar1 != lVar2) {
      while (*(int *)(lVar1 + 0xb8) != param_2) {
        lVar1 = lVar1 + 0x110;
        if (lVar1 == lVar2) {
          return;
        }
      }
      *(undefined1 *)(lVar1 + 0xbc) = 0;
    }
  }
  return;
}



// FUNCTION 140b55640 FUN_140b55640 body=1447 status=ok
// SIG undefined FUN_140b55640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b55640(longlong param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  undefined1 auStack_318 [32];
  undefined8 *local_2f8;
  undefined8 *local_2f0;
  undefined8 local_2e8;
  undefined1 local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0;
  undefined1 local_2c8;
  undefined1 local_2c0;
  undefined1 local_2b8;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined1 local_29c;
  undefined2 local_29b;
  undefined1 local_299;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  longlong *local_288 [2];
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined1 local_258 [16];
  byte local_248;
  undefined1 local_244 [8];
  undefined1 local_23c [24];
  undefined1 local_224 [212];
  float local_150;
  undefined1 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_13c;
  undefined4 local_f8;
  undefined1 local_f4;
  float local_e0;
  undefined1 local_dc;
  ulonglong local_58;
  
  if (((param_2 != (longlong *)0x0) &&
      (local_58 = DAT_1468387a8 ^ (ulonglong)auStack_318, param_2[0x23] != 0)) &&
     (*(longlong *)(param_1 + 0x110) != 0)) {
    lVar2 = UGFriendsPanelAllFriendsWidget::GetPrivateStaticClass();
    for (lVar7 = *(longlong *)(param_1 + 0x110); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar2) {
        if (*(longlong *)(param_1 + 0x110) == 0) {
          return;
        }
        FUN_142d0a300(local_258);
        FUN_140b28030(param_2,local_288);
        plVar8 = (longlong *)0x0;
        if (local_288[0] == (longlong *)0x0) goto LAB_140b557c6;
        plVar3 = (longlong *)FUN_142e49950();
        plVar6 = local_288[0];
        goto joined_r0x000140b55712;
      }
    }
  }
  return;
joined_r0x000140b55712:
  if (plVar6 == (longlong *)0x0) goto LAB_140b557c6;
  if (plVar6 != plVar3) {
    plVar6 = (longlong *)plVar6[6];
    goto joined_r0x000140b55712;
  }
  plVar3 = (longlong *)FUN_142e49950();
  for (plVar6 = local_288[0];
      (plVar5 = plVar8, plVar6 != (longlong *)0x0 && (plVar5 = local_288[0], plVar6 != plVar3));
      plVar6 = (longlong *)plVar6[6]) {
  }
  plVar6 = (longlong *)plVar5[0x1f];
  if (plVar6 == (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
    plVar6 = (longlong *)plVar5[0x1f];
  }
  if (plVar6 == (longlong *)0x0) {
LAB_140b557b7:
    plVar6 = plVar8;
  }
  else {
    lVar7 = FUN_142e49950();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140b557b7;
  }
  FWeakObjectPtr::operator=(local_23c,plVar6);
LAB_140b557c6:
  uVar4 = FUN_142caac20(param_1 + 0x120,&local_268,param_2);
  local_150 = (float)FUN_142cc4350(uVar4,0);
  if (local_150 <= 0.0) {
    local_150 = (float)FUN_140b5df60(param_1,param_3,1);
  }
  local_14c = 1;
  local_f8 = FUN_140b5df60(param_1,param_3,0);
  local_f4 = 1;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    plVar5 = (longlong *)FUN_142e49950();
    plVar6 = *(longlong **)(param_1 + 0x158);
    for (plVar3 = plVar6; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[6]) {
      if (plVar3 == plVar5) {
        if (plVar6 != (longlong *)0x0) {
          lVar7 = plVar6[0x1f];
          if (lVar7 == 0) {
            (**(code **)(*plVar6 + 0x368))(plVar6);
            lVar7 = plVar6[0x1f];
          }
          FWeakObjectPtr::operator=(local_23c,lVar7);
        }
        break;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    plVar5 = (longlong *)FUN_142e0d0b0();
    plVar6 = *(longlong **)(param_1 + 0x160);
    for (plVar3 = plVar6; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[6]) {
      if (plVar3 == plVar5) {
        if (plVar6 != (longlong *)0x0) {
          lVar7 = plVar6[0x1f];
          if (lVar7 == 0) {
            (**(code **)(*plVar6 + 0x368))(plVar6);
            lVar7 = plVar6[0x1f];
          }
          FWeakObjectPtr::operator=(local_244,lVar7);
        }
        break;
      }
    }
  }
  FWeakObjectPtr::operator=(local_224,*(undefined8 *)(param_1 + 0x168));
  fVar9 = (float)FUN_142d9cad0(param_1 + 0x170,param_2);
  if (0.0001 < ABS(fVar9)) {
    local_dc = 1;
    local_e0 = fVar9;
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    local_2b8 = 1;
    local_2c0 = 0;
    local_2c8 = 0;
    local_2d0 = 0;
    local_2d8 = 0;
    local_2e0 = 1;
    local_2e8 = CONCAT71(local_2e8._1_7_,1);
    local_2f0 = (undefined8 *)CONCAT71(local_2f0._1_7_,4);
    local_2f8 = (undefined8 *)CONCAT44(local_2f8._4_4_,0x42c80000);
    local_2a8 = 0;
    FUN_142db83d0(param_2[0x23],*(longlong *)(param_1 + 0x118),1,0x4110000041800000);
  }
  lVar7 = param_2[0x23];
  if (*(char *)((longlong)param_2 + 0x5b2) == '\0') {
    if (*(char *)(param_1 + 0x194) == '\0') {
      if (param_2[0x2a] != 0) {
        lVar2 = *(longlong *)(param_2[0x2a] + 0x168);
        if (lVar2 == 0) {
          local_2a8 = _DAT_1468b5d90;
          local_2a0 = DAT_1468b5d98;
        }
        else {
          local_2a8 = *(undefined8 *)(lVar2 + 0x220);
          local_2a0 = *(undefined4 *)(lVar2 + 0x228);
        }
        local_13c = 1;
        local_148 = local_2a8;
        local_140 = local_2a0;
      }
      goto LAB_140b55a2d;
    }
  }
  else {
LAB_140b55a2d:
    if (*(char *)(param_1 + 0x194) == '\0') goto LAB_140b55a3a;
  }
  local_248 = local_248 | 0x10;
LAB_140b55a3a:
  if (*(char *)((longlong)param_2 + 0x5b2) != '\0') {
    plVar6 = (longlong *)FUN_140b2cbb0(param_2);
    if (plVar6 == (longlong *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  local_29b = 0;
  local_299 = 0;
  local_2a8 = 0xbf800000bf800000;
  local_2a0 = 0xbf800000;
  local_29c = 0;
  local_298 = 0x3f800000;
  local_294 = 0x3f800000;
  local_290 = 0x3f800000;
  plVar6 = plVar8;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    plVar5 = (longlong *)UGFriendsPanelAllFriendsWidget::GetPrivateStaticClass();
    for (plVar3 = *(longlong **)(param_1 + 0x110);
        (plVar6 = plVar8, plVar3 != (longlong *)0x0 &&
        (plVar6 = *(longlong **)(param_1 + 0x110), plVar3 != plVar5));
        plVar3 = (longlong *)plVar3[6]) {
    }
  }
  local_2e8 = 0;
  local_2f8 = &local_2a8;
  local_2f0 = (undefined8 *)0x0;
  FUN_140a86fb0(lVar7,plVar6,0,local_258);
  local_270 = 0;
  lVar7 = *(longlong *)(param_2[0x23] + 0x168);
  local_278 = 0;
  if (lVar7 == 0) {
    local_2a8 = _DAT_1468b5d90;
    local_2a0 = DAT_1468b5d98;
  }
  else {
    local_2a8 = *(undefined8 *)(lVar7 + 0x220);
    local_2a0 = *(undefined4 *)(lVar7 + 0x228);
  }
  local_260 = local_2a0;
  local_268 = local_2a8;
  uVar4 = (**(code **)(*param_2 + 0x148))(param_2);
  local_2f0 = &local_278;
  local_2f8 = (undefined8 *)CONCAT44(local_2f8._4_4_,0x42480000);
  FUN_1405a1e30(&local_2a8,uVar4,*(undefined8 *)(param_1 + 0x1a0),&local_268);
  FUN_140591060(&local_2a8);
  FUN_1409c53c0(local_258);
  return;
}



// FUNCTION 140b55bf0 FUN_140b55bf0 body=486 status=ok
// SIG undefined FUN_140b55bf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b55bf0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined1 local_88 [4];
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  if ((param_2 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x68) & 1) != 0)) {
    uVar9 = param_4;
    cVar5 = FUN_140b55560(param_1,param_1 + 0x70,param_2,param_3,param_4);
    uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if (cVar5 != '\0') {
      lVar6 = 0;
      local_58 = 0;
      local_50 = 0;
      local_3c = 0;
      local_88[0] = 0;
      local_84 = _DAT_1468b5d90;
      local_7c = DAT_1468b5d98;
      local_78 = _DAT_1468b5d90;
      local_70 = DAT_1468b5d98;
      local_68 = 0;
      uStack_60 = 0;
      local_48 = _DAT_1468b5d90;
      local_40 = DAT_1468b5d98;
      FUN_142d1f140(local_88,param_2);
      lVar1 = param_2[0x52];
      plVar2 = (longlong *)param_2[10];
      lVar3 = param_2[9];
      if (plVar2 == (longlong *)0x0) {
        lVar7 = 0;
      }
      else {
        lVar7 = plVar2[0x1f];
        if (lVar7 == 0) {
          (**(code **)(*plVar2 + 0x368))(plVar2);
          lVar7 = plVar2[0x1f];
        }
      }
      plVar2 = (longlong *)param_2[0xb];
      if ((plVar2 != (longlong *)0x0) && (lVar6 = plVar2[0x1f], lVar6 == 0)) {
        (**(code **)(*plVar2 + 0x368))(plVar2);
        lVar6 = plVar2[0x1f];
      }
      lVar4 = param_2[0x56];
      uVar8 = (**(code **)(*param_2 + 0x18))(param_2,0);
      FUN_1414c0130(param_1,param_3,param_4,lVar4,CONCAT44(uVar10,uVar8),lVar6,lVar7,lVar3,lVar1,
                    local_88);
      FUN_140b6c920(param_1,param_1 + 0x70,param_3,param_4);
      if (local_58 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140b55de0 FUN_140b55de0 body=103 status=ok
// SIG undefined FUN_140b55de0(void)

longlong FUN_140b55de0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint7 uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x581) == '\x01') {
    lVar2 = 0x928;
  }
  else {
    lVar2 = 0x918;
    if (*(char *)(param_1 + 0x581) == '\x02') {
      lVar2 = 0x938;
    }
  }
  iVar1 = *(int *)(param_1 + 0x978);
  uVar3 = (uint7)(uint3)((uint)iVar1 >> 8);
  if (*(int *)(lVar2 + param_1) == 0) {
    if (iVar1 != -1) {
      *(undefined4 *)(param_1 + 0x978) = 0xffffffff;
      return CONCAT71(uVar3,1);
    }
  }
  else {
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x978) = 0;
      return CONCAT71(uVar3,1);
    }
    iVar4 = *(int *)(lVar2 + param_1) + -1;
    if (iVar4 < iVar1) {
      *(int *)(param_1 + 0x978) = iVar4;
      return CONCAT71(uVar3,1);
    }
  }
  return (ulonglong)uVar3 << 8;
}



// FUNCTION 140b55e50 FUN_140b55e50 body=63 status=ok
// SIG undefined FUN_140b55e50(void)

void FUN_140b55e50(undefined8 param_1)

{
  FUN_140acec50();
  FUN_140b57b20(param_1,1);
  FUN_140b57b20(param_1,2);
  FUN_140b76940(param_1);
  FUN_140b76490(param_1,0x3f800000);
  return;
}



// FUNCTION 140b55e90 FUN_140b55e90 body=25 status=ok
// SIG undefined FUN_140b55e90(void)

void FUN_140b55e90(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x28,0);
    return;
  }
  return;
}



// FUNCTION 140b55eb0 FUN_140b55eb0 body=222 status=ok
// SIG undefined FUN_140b55eb0(void)

void FUN_140b55eb0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x38) + 0xa8;
    do {
      FUN_140b4e380(lVar1 + 0x20);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1 + -0x30);
      if (*(longlong *)(lVar1 + -0x50) != 0) {
        FMemory::Free();
      }
      FUN_1409f5880(lVar1 + -0xa0);
      lVar1 = lVar1 + 0x110;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    TArray<FTTLMissionBriefingParamRow,FDefaultAllocator>::ResizeTo(param_1 + 0x38,0);
  }
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x48) + 8;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1 + 0x20);
      FUN_1409f5880(lVar1);
      lVar1 = lVar1 + 0x40;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
  }
  return;
}



// FUNCTION 140b55f90 FUN_140b55f90 body=39 status=ok
// SIG undefined FUN_140b55f90(void)

void FUN_140b55f90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x50) * 8;
  for (; plVar1 != plVar2; plVar1 = plVar1 + 8) {
    if (*plVar1 == param_2) {
      *(undefined1 *)(plVar1 + 7) = 0;
    }
  }
  return;
}



// FUNCTION 140b55fc0 FUN_140b55fc0 body=89 status=ok
// SIG undefined FUN_140b55fc0(void)

void FUN_140b55fc0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x28) + 8;
    do {
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (lVar1);
      lVar1 = lVar1 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              ((longlong *)(param_1 + 0x28),0);
  }
  return;
}



// FUNCTION 140b56020 SetDefault body=15 status=ok
// SIG undefined SetDefault(void)

void FRankInfo::SetDefault(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// FUNCTION 140b56030 FUN_140b56030 body=214 status=ok
// SIG undefined FUN_140b56030(void)

void FUN_140b56030(char *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 8) < 0) {
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[8] = -1;
    param_1[9] = -1;
    param_1[10] = -1;
    param_1[0xb] = -1;
    return;
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_140b506d0();
    param_1[8] = -1;
    param_1[9] = -1;
    param_1[10] = -1;
    param_1[0xb] = -1;
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    return;
  }
  if ((*param_1 != '\0') && (lVar1 = FUN_140b5d100(param_2), lVar1 != 0)) {
    FUN_140c3c4b0(lVar1);
    FUN_140c5b630(lVar1);
    FUN_140c3ade0(lVar1);
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    *param_1 = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
  }
  lVar1 = UWorld::GetGameState<APVPGameState>(param_2);
  if (lVar1 != 0) {
    FUN_140cc14b0(lVar1);
  }
  param_1[8] = -1;
  param_1[9] = -1;
  param_1[10] = -1;
  param_1[0xb] = -1;
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  return;
}



// FUNCTION 140b56110 FUN_140b56110 body=303 status=ok
// SIG undefined FUN_140b56110(void)

void FUN_140b56110(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  uint local_10;
  
  plVar5 = DAT_1469e9878;
  local_20 = DAT_1469e9870;
  local_28 = DAT_1469e9868;
  lVar6 = *(longlong *)(param_1 + 0x130);
  if (lVar6 != 0) {
    if (DAT_1469e9878 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e9878 + 1) = (int)DAT_1469e9878[1] + 1;
      UNLOCK();
      lVar6 = *(longlong *)(param_1 + 0x130);
    }
    local_38 = 0x40b5ea30;
    uStack_34 = 1;
    uStack_30 = 0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_18 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_10 = local_10 & 0xfffffff0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar5)(plVar5);
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
    FUN_140ae96a0(lVar6,&local_28,0,param_1,&local_38);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar5)(plVar5);
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
  return;
}



// FUNCTION 140b56240 FUN_140b56240 body=922 status=ok
// SIG undefined FUN_140b56240(void)

undefined8 * FUN_140b56240(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  size_t _Size;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 local_res8;
  undefined8 *local_res10;
  undefined8 *local_res18;
  void *local_res20;
  undefined1 local_78;
  undefined1 local_77;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_68;
  void *local_60;
  int local_58;
  undefined4 local_50;
  
  local_res8 = param_1;
  puVar5 = (undefined8 *)operator_new(0x78);
  puVar12 = (undefined8 *)0x0;
  if (puVar5 == (undefined8 *)0x0) {
    local_res18 = (undefined8 *)0x0;
    puVar5 = puVar12;
  }
  else {
    puVar5[2] = 0;
    *puVar5 = &PTR_FUN_1442c9258;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    local_res18 = puVar5;
    FUN_142d979c0(puVar5 + 9);
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    return puVar5;
  }
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x4d8);
  *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x4dc);
  lVar10 = *(longlong *)(param_1 + 0x48);
  lVar9 = *(longlong *)(lVar10 + 0x228);
  lVar6 = (longlong)*(int *)(lVar10 + 0x230) * 0x40 + lVar9;
  if (lVar9 != lVar6) {
    do {
      FUN_140b15f00(&local_78);
      FUN_140b885c0(*(undefined8 *)(lVar9 + 0x20),&local_78);
      iVar2 = *(int *)(puVar5 + 4);
      *(int *)(puVar5 + 4) = iVar2 + 1;
      if (*(int *)((longlong)puVar5 + 0x24) < iVar2 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(puVar5 + 3,iVar2);
      }
      puVar11 = (undefined1 *)((longlong)iVar2 * 0x30 + puVar5[3]);
      *puVar11 = local_78;
      puVar11[1] = local_77;
      *(undefined4 *)(puVar11 + 4) = local_74;
      *(undefined4 *)(puVar11 + 8) = local_70;
      puVar11[0x10] = local_68;
      *(undefined8 *)(puVar11 + 0x18) = 0;
      _Size = (size_t)local_58;
      local_res10 = local_60;
      *(int *)(puVar11 + 0x20) = local_58;
      if (local_58 == 0) {
        *(undefined4 *)(puVar11 + 0x24) = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar11 + 0x18,local_58,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar11 + 0x18),local_res10,_Size);
      }
      *(undefined4 *)(puVar11 + 0x28) = local_50;
      if (local_60 != (void *)0x0) {
        FMemory::Free();
      }
      lVar9 = lVar9 + 0x40;
    } while (lVar9 != lVar6);
    lVar10 = *(longlong *)(local_res8 + 0x48);
    puVar5 = local_res18;
  }
  puVar7 = *(undefined8 **)(lVar10 + 0x4b8);
  puVar8 = (undefined8 *)((longlong)*(int *)(lVar10 + 0x4c0) & 0x1fffffffffffffff);
  if (puVar7 + *(int *)(lVar10 + 0x4c0) < puVar7) {
    puVar8 = puVar12;
  }
  if (puVar8 != (undefined8 *)0x0) {
    puVar13 = puVar12;
    do {
      uVar3 = *puVar7;
      FUN_140b15f00(&local_78);
      FUN_140b885c0(uVar3,&local_78);
      iVar2 = *(int *)(puVar5 + 8);
      *(int *)(puVar5 + 8) = iVar2 + 1;
      if (*(int *)((longlong)puVar5 + 0x44) < iVar2 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(puVar5 + 7,iVar2);
      }
      puVar11 = (undefined1 *)((longlong)iVar2 * 0x30 + puVar5[7]);
      *puVar11 = local_78;
      puVar11[1] = local_77;
      *(undefined4 *)(puVar11 + 4) = local_74;
      *(undefined4 *)(puVar11 + 8) = local_70;
      puVar11[0x10] = local_68;
      *(undefined8 *)(puVar11 + 0x18) = 0;
      local_res20 = local_60;
      local_res10 = (undefined8 *)CONCAT44(local_res10._4_4_,local_58);
      *(int *)(puVar11 + 0x20) = local_58;
      if (local_58 == 0) {
        *(undefined4 *)(puVar11 + 0x24) = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar11 + 0x18,local_58,0);
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(puVar11 + 0x18),local_res20,(longlong)(int)local_res10);
      }
      *(undefined4 *)(puVar11 + 0x28) = local_50;
      if (local_60 != (void *)0x0) {
        FMemory::Free();
      }
      puVar7 = puVar7 + 1;
      puVar13 = (undefined8 *)((longlong)puVar13 + 1);
    } while (puVar13 != puVar8);
    lVar10 = *(longlong *)(local_res8 + 0x48);
    puVar5 = local_res18;
  }
  plVar14 = *(longlong **)(lVar10 + 0x4c8);
  puVar7 = (undefined8 *)((longlong)*(int *)(lVar10 + 0x4d0) & 0x1fffffffffffffff);
  if (plVar14 + *(int *)(lVar10 + 0x4d0) < plVar14) {
    puVar7 = puVar12;
  }
  local_res10 = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    do {
      if (*plVar14 != 0) {
        FWeakObjectPtr::operator=(&local_res8);
        lVar9 = puVar5[0xd];
        iVar2 = *(int *)(puVar5 + 0xe);
        for (lVar10 = lVar9; lVar10 != lVar9 + (longlong)iVar2 * 8; lVar10 = lVar10 + 8) {
          cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar10,&local_res8);
          if (cVar4 != '\0') {
            puVar7 = local_res10;
            if ((int)(lVar10 - lVar9 >> 3) != -1) goto LAB_140b5659c;
            break;
          }
        }
        iVar2 = *(int *)(puVar5 + 0xe);
        *(int *)(puVar5 + 0xe) = iVar2 + 1;
        if (*(int *)((longlong)puVar5 + 0x74) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar5 + 0xd,iVar2);
        }
        puVar1 = (undefined4 *)(puVar5[0xd] + (longlong)iVar2 * 8);
        *puVar1 = (undefined4)local_res8;
        puVar1[1] = local_res8._4_4_;
        puVar7 = local_res10;
      }
LAB_140b5659c:
      plVar14 = plVar14 + 1;
      puVar12 = (undefined8 *)((longlong)puVar12 + 1);
    } while (puVar12 != puVar7);
  }
  return puVar5;
}



// FUNCTION 140b565e0 FUN_140b565e0 body=250 status=ok
// SIG undefined FUN_140b565e0(void)

ulonglong FUN_140b565e0(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 == *(char *)(param_1 + 0x581)) {
    if (param_3 == '\x01') {
      lVar3 = 0x928;
    }
    else {
      lVar3 = 0x918;
      if (param_3 == '\x02') {
        lVar3 = 0x938;
      }
    }
    iVar4 = *(int *)(param_1 + 0x978);
    iVar6 = 0;
    iVar1 = *(int *)(lVar3 + param_1);
    if ((((iVar4 < 0) || (param_2 < 0)) || (iVar1 <= iVar4)) ||
       (((iVar1 <= param_2 || (iVar1 < 1)) || (iVar4 == param_2)))) {
      iVar5 = 0;
    }
    else if (iVar4 < param_2) {
      iVar5 = param_2 - iVar4;
    }
    else {
      iVar5 = (iVar1 - iVar4) + param_2;
    }
    if (((iVar4 < 0) || (param_2 < 0)) ||
       ((iVar1 <= iVar4 || (((iVar1 <= param_2 || (iVar1 < 1)) || (iVar4 == param_2)))))) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar4 - param_2;
      if (iVar4 < param_2) {
        iVar2 = iVar2 + iVar1;
      }
    }
    iVar4 = 0;
    if (-1 < *(int *)(param_1 + 0x554)) {
      do {
        if (iVar5 == iVar4) {
          iVar4 = -iVar4;
LAB_140b5669f:
          if (*(byte *)(param_1 + 0x9b0) < 0x10) {
            iVar6 = *(int *)(param_1 + 0x608 + (ulonglong)*(byte *)(param_1 + 0x9b0) * 4);
          }
          iVar4 = *(int *)(param_1 + 0x550) + iVar6 + iVar4;
          iVar1 = *(int *)(param_1 + 0x54c);
          if (iVar4 < 0) {
            iVar4 = iVar4 % iVar1 + iVar1;
          }
          return (longlong)iVar4 % (longlong)iVar1 & 0xffffffff;
        }
        if (iVar2 == iVar4) goto LAB_140b5669f;
        iVar4 = iVar4 + 1;
      } while (iVar4 <= *(int *)(param_1 + 0x554));
    }
  }
  return 0xffffffff;
}



// FUNCTION 140b566e0 CopyFrom body=104 status=ok
// SIG void CopyFrom(CMFCRibbonProgressBar * this, CMFCRibbonBaseElement * param_1)

/* Library Function - Single Match
    protected: virtual void __cdecl CMFCRibbonProgressBar::CopyFrom(class CMFCRibbonBaseElement
   const & __ptr64) __ptr64
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonProgressBar::CopyFrom(CMFCRibbonProgressBar *this,CMFCRibbonBaseElement *param_1)

{
  FUN_140b4e9d0();
  *(undefined4 *)(this + 0x140) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(this + 0x148) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(this + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(this + 0x150) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(this + 0x154) = *(undefined4 *)(param_1 + 0x154);
  return;
}



// FUNCTION 140b56750 FUN_140b56750 body=322 status=ok
// SIG undefined FUN_140b56750(void)

int FUN_140b56750(longlong param_1,char param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar1 = param_3;
  while( true ) {
    if (param_2 == '\0') {
      if (param_4 == '\x01') {
        lVar4 = 0x928;
      }
      else {
        lVar4 = 0x918;
        if (param_4 == '\x02') {
          lVar4 = 0x938;
        }
      }
      iVar2 = iVar1 + -1;
      if (iVar1 + -1 < 0) {
        if (*(int *)(param_1 + 0x55c) < *(int *)(lVar4 + param_1) - *(int *)(param_1 + 0x558)) {
          iVar2 = *(int *)(lVar4 + param_1) + -1;
        }
        else {
          iVar2 = 0;
        }
      }
    }
    else {
      if (param_4 == '\x01') {
        lVar4 = 0x928;
      }
      else {
        lVar4 = 0x918;
        if (param_4 == '\x02') {
          lVar4 = 0x938;
        }
      }
      iVar5 = iVar1 + 1;
      iVar3 = *(int *)(lVar4 + param_1) - *(int *)(param_1 + 0x558);
      if (*(int *)(param_1 + 0x55c) < iVar3) {
        iVar3 = *(int *)(lVar4 + param_1) + -1;
        if (iVar3 < 1) {
          iVar3 = 0;
        }
        iVar2 = 0;
        if (iVar5 <= iVar3) {
          iVar2 = iVar5;
        }
      }
      else {
        iVar3 = iVar3 + -1;
        if (iVar3 < 1) {
          iVar3 = 0;
        }
        iVar2 = iVar5;
        if (iVar3 < iVar5) {
          iVar2 = iVar3;
        }
      }
    }
    if ((iVar2 == iVar1) || (iVar2 == param_3)) {
      return iVar6;
    }
    if (param_4 == '\x01') {
      lVar4 = 0x920;
    }
    else {
      lVar4 = 0x910;
      if (param_4 == '\x02') {
        lVar4 = 0x930;
      }
    }
    if (iVar2 < 0) {
      return iVar6;
    }
    if ((int)((longlong *)(lVar4 + param_1))[1] <= iVar2) {
      return iVar6;
    }
    lVar4 = (longlong)iVar2 * 0x40 + *(longlong *)(lVar4 + param_1);
    if (lVar4 == 0) break;
    if (*(char *)(lVar4 + 0x35) != '\x04') {
      if (*(char *)(param_1 + 0x56c) == '\0') {
        return iVar6;
      }
      if (*(char *)(lVar4 + 0x34) != '\x02') {
        return iVar6;
      }
    }
    iVar6 = iVar6 + 1;
    iVar1 = iVar2;
  }
  return iVar6;
}



// FUNCTION 140b568a0 FUN_140b568a0 body=66 status=ok
// SIG undefined FUN_140b568a0(void)

void FUN_140b568a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1442cc5a0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1442cc5e8;
  }
  return;
}



// FUNCTION 140b568f0 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1442cc480;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1442cc4c8;
  }
  return;
}



// FUNCTION 140b56940 FUN_140b56940 body=97 status=ok
// SIG undefined FUN_140b56940(void)

void FUN_140b56940(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1442cc6c0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1442cc708;
  }
  return;
}



// FUNCTION 140b569b0 FUN_140b569b0 body=89 status=ok
// SIG undefined FUN_140b569b0(void)

void FUN_140b569b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1442cbca0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1442cbce8;
  }
  return;
}



// FUNCTION 140b56a10 FUN_140b56a10 body=105 status=ok
// SIG undefined FUN_140b56a10(void)

void FUN_140b56a10(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1442cc000;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar1 = &PTR_GetPoolName_1442cc048;
  }
  return;
}


