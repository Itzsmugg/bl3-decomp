// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1434f5370 FUN_1434f5370 body=30 status=ok
// SIG undefined FUN_1434f5370(void)

undefined8 * FUN_1434f5370(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434f3aa0();
  return param_2;
}



// FUNCTION 1434f53a0 FUN_1434f53a0 body=30 status=ok
// SIG undefined FUN_1434f53a0(void)

undefined8 * FUN_1434f53a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434f3ba0();
  return param_2;
}



// FUNCTION 1434f53d0 FUN_1434f53d0 body=30 status=ok
// SIG undefined FUN_1434f53d0(void)

undefined8 * FUN_1434f53d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434f3fb0();
  return param_2;
}



// FUNCTION 1434f5400 FUN_1434f5400 body=30 status=ok
// SIG undefined FUN_1434f5400(void)

undefined8 * FUN_1434f5400(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434f42f0();
  return param_2;
}



// FUNCTION 1434f5430 FUN_1434f5430 body=30 status=ok
// SIG undefined FUN_1434f5430(void)

undefined8 * FUN_1434f5430(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434f4630();
  return param_2;
}



// FUNCTION 1434f5460 FUN_1434f5460 body=30 status=ok
// SIG undefined FUN_1434f5460(void)

undefined8 * FUN_1434f5460(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434f47b0();
  return param_2;
}



// FUNCTION 1434f5490 FUN_1434f5490 body=30 status=ok
// SIG undefined FUN_1434f5490(void)

undefined8 * FUN_1434f5490(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434f4f60();
  return param_2;
}



// FUNCTION 1434f54c0 FUN_1434f54c0 body=30 status=ok
// SIG undefined FUN_1434f54c0(void)

undefined8 * FUN_1434f54c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434f50d0();
  return param_2;
}



// FUNCTION 1434f54f0 FUN_1434f54f0 body=43 status=ok
// SIG undefined FUN_1434f54f0(void)

undefined8 * FUN_1434f54f0(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *(undefined4 *)(param_1 + 0x12) = 0x18;
  *param_1 = &PTR_FUN_145b23380;
  return param_1;
}



// FUNCTION 1434f5530 FUN_1434f5530 body=141 status=ok
// SIG undefined FUN_1434f5530(void)

void FUN_1434f5530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_1434f20e0(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
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



// FUNCTION 1434f55d0 FUN_1434f55d0 body=43 status=ok
// SIG undefined FUN_1434f55d0(void)

undefined8 * FUN_1434f55d0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *(undefined4 *)(param_1 + 0x12) = 0x18;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434f5610 FUN_1434f5610 body=234 status=ok
// SIG undefined FUN_1434f5610(void)

undefined8 * FUN_1434f5610(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1c370);
    *(undefined4 *)(puVar2 + 0x12) = 0x18;
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b1c370);
    *(undefined4 *)(puVar2 + 0x12) = 0x18;
    *puVar2 = &PTR_FUN_145b23380;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1434f5700 FUN_1434f5700 body=33 status=ok
// SIG undefined FUN_1434f5700(void)

undefined8 * FUN_1434f5700(undefined8 *param_1)

{
  FUN_1434f20e0();
  *param_1 = &PTR_ForEachChild_GC_145b232a8;
  return param_1;
}



// FUNCTION 1434f5730 FUN_1434f5730 body=43 status=ok
// SIG undefined FUN_1434f5730(void)

undefined8 * FUN_1434f5730(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *(undefined4 *)(param_1 + 0x12) = 0x1c;
  *param_1 = &PTR_FUN_145b233f8;
  return param_1;
}



// FUNCTION 1434f5770 FUN_1434f5770 body=173 status=ok
// SIG undefined FUN_1434f5770(void)

void FUN_1434f5770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_1434f20e0(puVar1,param_3);
    *puVar1 = &PTR_ForEachChild_GC_145b232a8;
  }
  local_28[0] = 0;
  local_20 = 0;
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



// FUNCTION 1434f5830 FUN_1434f5830 body=43 status=ok
// SIG undefined FUN_1434f5830(void)

undefined8 * FUN_1434f5830(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *(undefined4 *)(param_1 + 0x12) = 0x1c;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434f5870 FUN_1434f5870 body=234 status=ok
// SIG undefined FUN_1434f5870(void)

undefined8 * FUN_1434f5870(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b211e0);
    *(undefined4 *)(puVar2 + 0x12) = 0x1c;
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b211e0);
    *(undefined4 *)(puVar2 + 0x12) = 0x1c;
    *puVar2 = &PTR_FUN_145b233f8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1434f5960 FUN_1434f5960 body=58 status=ok
// SIG undefined FUN_1434f5960(void)

undefined8 * FUN_1434f5960(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b234a8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  return param_1;
}



// FUNCTION 1434f59a0 ~BitmapData body=142 status=ok
// SIG undefined ~BitmapData(void)

void Scaleform::GFx::AS3::Instances::fl_display::BitmapData::~BitmapData(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b234a8;
  if (param_1[8] != 0) {
    FUN_1432de450();
  }
  param_1[8] = 0;
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  param_1[9] = 0;
  if (param_1[10] != 0) {
    FUN_1432de450();
  }
  param_1[10] = 0;
  if (param_1[10] != 0) {
    FUN_1432de450();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  if (param_1[8] != 0) {
    FUN_1432de450();
  }
  FUN_1435b9dc0(param_1);
  return;
}



// FUNCTION 1434f5ac0 FUN_1434f5ac0 body=487 status=ok
// SIG undefined FUN_1434f5ac0(void)

undefined8 FUN_1434f5ac0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 local_res8 [2];
  uint local_58;
  uint local_54;
  longlong *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(longlong **)(param_1 + 0x48) == (longlong *)0x0) ||
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))(), iVar4 != 6)) {
    lVar6 = FUN_1432ec660(*(undefined8 *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10));
    uVar8 = 0;
    if ((lVar6 != 0) && (*(longlong **)(lVar6 + 0x148) != (longlong *)0x0)) {
      local_38 = 0;
      local_48 = (longlong *)0x0;
      uStack_40 = 0;
      (**(code **)(**(longlong **)(lVar6 + 0x148) + 0x10))(0,&local_48);
      plVar3 = local_48;
      if (*(longlong *)(param_1 + 0x40) == 0) {
        uVar1 = *(uint *)(param_1 + 0x5c);
        uVar2 = *(uint *)(param_1 + 0x58);
        if (((0xffffff < uVar1 * uVar2) || (0x1fff < uVar2)) || (0x1fff < uVar1)) {
          return 0;
        }
        lVar7 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,200,0);
        if (lVar7 != 0) {
          local_res8[0] = *(undefined4 *)(param_1 + 100);
          local_58 = uVar2;
          local_54 = uVar1;
          uVar5 = (**(code **)(*plVar3 + 0x78))(plVar3);
          uVar8 = FUN_14331bb80(lVar7,uVar5,&local_58,*(undefined1 *)(param_1 + 0x60),local_res8,
                                lVar6);
        }
        FUN_14201c940(param_1 + 0x48,uVar8);
      }
      else {
        lVar7 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,200,0);
        if (lVar7 != 0) {
          uVar8 = FUN_14331ba50(lVar7,1,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x18),lVar6)
          ;
        }
        FUN_14201c940(param_1 + 0x48,uVar8);
      }
    }
  }
  return *(undefined8 *)(param_1 + 0x48);
}



// FUNCTION 1434f5cb0 FUN_1434f5cb0 body=145 status=ok
// SIG undefined FUN_1434f5cb0(void)

longlong FUN_1434f5cb0(longlong param_1)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 == 0) {
    if (*(longlong *)(param_1 + 0x48) == 0) {
      FUN_1434f5ac0();
    }
    if (*(longlong *)(param_1 + 0x48) != 0) {
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))
                        (DAT_146b62f28,*(longlong *)(param_1 + 0x48),0x68,local_res8);
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        lVar1 = FUN_143514e40(lVar1,*(undefined8 *)(param_1 + 0x48),1);
      }
      if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_1432de450();
      }
      *(longlong *)(param_1 + 0x40) = lVar1;
      return lVar1;
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1434f5d50 FUN_1434f5d50 body=561 status=ok
// SIG undefined FUN_1434f5d50(void)

bool FUN_1434f5d50(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *local_res10;
  ulonglong local_res20;
  longlong *local_28;
  longlong lStack_20;
  
  if (param_2 == 0) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
    lVar7 = FUN_1435e8f40(lVar8,param_1);
    if ((lVar7 != 0) &&
       (plVar2 = *(longlong **)(param_1 + 0x28), (*(byte *)(plVar2 + 0x11) >> 4 & 1) != 0)) {
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_res10,1);
      local_28 = (longlong *)0x0;
      lStack_20 = 0;
      FUN_1432c2fb0(&local_res20,*local_res10);
      cVar4 = FUN_1432ec590(*(undefined8 *)(*(longlong *)(lVar8 + 0x300) + 0x10),lVar7,&local_28,
                            &local_res20);
      iVar5 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar5 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
      }
      if (cVar4 == '\0') {
        uVar9 = *(undefined8 *)(lVar8 + 0x300);
        lVar8 = FUN_1435160d0(uVar9);
        if (lVar8 != 0) {
          uVar3 = *local_res10;
          uVar9 = FUN_1435160d0(uVar9);
          FUN_14337ae30(uVar9,"Attaching a bitmap with class \'%s\' failed",uVar3);
        }
        if (local_28 != (longlong *)0x0) {
          FUN_1432de450();
        }
        piVar1 = (int *)(local_res10 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        return false;
      }
      if (local_28 != (longlong *)0x0) {
        uVar6 = (**(code **)(*local_28 + 0x10))();
        if ((uVar6 & 0xff00) == 0x100) {
          FUN_143515440(param_1 + 0x40,local_28);
          FUN_143320580(param_1 + 0x48,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x18));
          if (lStack_20 != 0) {
            lVar7 = *(longlong *)(lStack_20 + 0x50);
          }
          FUN_143515440(param_1 + 0x50,lVar7);
        }
        if (local_28 != (longlong *)0x0) {
          FUN_1432de450();
        }
      }
      piVar1 = (int *)(local_res10 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
  }
  else {
    Scaleform::GFx::Resource::AddRef(param_2);
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1432de450();
    }
    *(longlong *)(param_1 + 0x40) = param_2;
    plVar2 = *(longlong **)(param_2 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
    }
    *(longlong **)(param_1 + 0x48) = plVar2;
    if (param_3 != 0) {
      Scaleform::GFx::Resource::AddRef(param_3);
    }
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1432de450();
    }
    *(longlong *)(param_1 + 0x50) = param_3;
  }
  return *(longlong *)(param_1 + 0x48) != 0;
}



// FUNCTION 1434f5f90 FUN_1434f5f90 body=324 status=ok
// SIG undefined FUN_1434f5f90(void)

void FUN_1434f5f90(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  undefined4 local_38 [2];
  undefined1 local_30 [8];
  longlong local_28;
  
  if (param_2 < 2) {
    lVar7 = *(longlong *)(param_1 + 0x28);
    uVar9 = 0x427;
  }
  else {
    pcVar5 = (char *)FUN_143590b70(param_3,local_res10,local_res20);
    if (*pcVar5 == '\0') {
      return;
    }
    *(undefined4 *)(param_1 + 0x58) = local_res20[0];
    pcVar5 = (char *)FUN_143590b70(param_3 + 0x20,local_res10,local_res20);
    if (*pcVar5 == '\0') {
      return;
    }
    *(undefined4 *)(param_1 + 0x5c) = local_res20[0];
    if (*(longlong *)(param_1 + 0x40) != 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x18);
      uVar10 = 0;
      if (plVar2 == (longlong *)0x0) {
        uVar8 = 0;
      }
      else {
        puVar6 = (undefined4 *)(**(code **)(*plVar2 + 0x28))(plVar2,local_30);
        uVar8 = *puVar6;
      }
      *(undefined4 *)(param_1 + 0x58) = uVar8;
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x18);
      if (plVar2 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar2 + 0x28))(plVar2,local_30);
        uVar10 = *(undefined4 *)(lVar7 + 4);
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar10;
    }
    if ((0 < *(int *)(param_1 + 0x58)) && (0 < *(int *)(param_1 + 0x5c))) {
      local_38[0] = 0xffffffff;
      if (2 < param_2) {
        uVar4 = FUN_1435909c0(param_3 + 0x40);
        *(undefined1 *)(param_1 + 0x60) = uVar4;
      }
      if (3 < param_2) {
        FUN_143590eb0(param_3 + 0x60,local_res10,local_38);
      }
      *(undefined4 *)(param_1 + 100) = local_38[0];
      return;
    }
    lVar7 = *(longlong *)(param_1 + 0x28);
    uVar9 = 0x7df;
  }
  uVar3 = *(undefined8 *)(lVar7 + 0x98);
  uVar9 = FUN_1435c8e40(local_30,uVar9,uVar3);
  FUN_1435cbef0(uVar3,uVar9);
  piVar1 = (int *)(local_28 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434f60e0 FUN_1434f60e0 body=57 status=ok
// SIG undefined FUN_1434f60e0(void)

void FUN_1434f60e0(longlong param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 local_18 [16];
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,local_18);
    *param_2 = *(int *)(lVar2 + 0xc) - *(int *)(lVar2 + 4);
    return;
  }
  *param_2 = *(int *)(param_1 + 0x5c);
  return;
}



// FUNCTION 1434f6120 FUN_1434f6120 body=618 status=ok
// SIG undefined FUN_1434f6120(void)

void FUN_1434f6120(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  double dVar9;
  double local_c8;
  undefined8 uStack_c0;
  uint local_b8 [2];
  undefined8 local_b0 [3];
  uint local_98 [4];
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78 [4];
  double local_68;
  undefined8 uStack_60;
  uint local_58 [4];
  double local_48;
  undefined8 uStack_40;
  undefined1 local_38 [32];
  
  lVar6 = 4;
  lVar7 = 4;
  puVar2 = local_b8;
  do {
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 8;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 == (longlong *)0x0) {
    iVar5 = *(int *)(param_1 + 0x58);
  }
  else {
    piVar3 = (int *)(**(code **)(*plVar1 + 0x30))(plVar1,&local_c8);
    iVar5 = piVar3[2] - *piVar3;
  }
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 == (longlong *)0x0) {
    iVar8 = *(int *)(param_1 + 0x5c);
  }
  else {
    lVar7 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_c8);
    iVar8 = *(int *)(lVar7 + 0xc) - *(int *)(lVar7 + 4);
  }
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
  local_b8[0] = local_b8[0] & 0xffffffe4 | 4;
  local_c8 = 0.0;
  local_b0[1] = 0;
  local_b0[2] = uStack_c0;
  if (9 < ((byte)local_98[0] & 0x1f)) {
    if ((local_98[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_98);
    }
    else {
      FUN_143592150();
    }
  }
  local_98[0] = local_98[0] & 0xffffffe4 | 4;
  local_c8 = 0.0;
  dVar9 = (double)iVar5;
  local_88 = 0;
  uStack_80 = uStack_c0;
  if (dVar9 <= 0.0) {
    dVar9 = dVar9 - 0.5;
  }
  else {
    dVar9 = dVar9 + 0.5;
  }
  if (9 < ((byte)local_78[0] & 0x1f)) {
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      FUN_143592150();
    }
  }
  local_78[0] = local_78[0] & 0xffffffe4 | 4;
  local_c8 = (double)(int)dVar9;
  dVar9 = (double)iVar8;
  uStack_60 = uStack_c0;
  if (dVar9 <= 0.0) {
    dVar9 = dVar9 - 0.5;
  }
  else {
    dVar9 = dVar9 + 0.5;
  }
  local_68 = local_c8;
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  local_58[0] = local_58[0] & 0xffffffe4 | 4;
  local_c8 = (double)(int)dVar9;
  uStack_40 = uStack_c0;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_48 = local_c8;
  FUN_1435e8720(lVar7,param_2,*(undefined8 *)(lVar7 + 0x3d0),4,local_b8);
  puVar4 = local_38;
  do {
    puVar2 = (uint *)(puVar4 + -0x20);
    puVar4 = puVar4 + -0x20;
    lVar6 = lVar6 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar4);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar6 != 0);
  return;
}



// FUNCTION 1434f6390 FUN_1434f6390 body=110 status=ok
// SIG undefined FUN_1434f6390(void)

void FUN_1434f6390(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar3 = FUN_1434f5ac0();
  if (lVar3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x7df,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    *param_2 = *(undefined1 *)(lVar3 + 0x50);
  }
  return;
}



// FUNCTION 1434f6410 FUN_1434f6410 body=56 status=ok
// SIG undefined FUN_1434f6410(void)

void FUN_1434f6410(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 local_18 [16];
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    piVar2 = (int *)(**(code **)(*plVar1 + 0x30))(plVar1,local_18);
    *param_2 = piVar2[2] - *piVar2;
    return;
  }
  *param_2 = *(int *)(param_1 + 0x58);
  return;
}



// FUNCTION 1434f6450 FUN_1434f6450 body=664 status=ok
// SIG undefined FUN_1434f6450(void)

void FUN_1434f6450(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  char local_res18 [8];
  char local_58 [8];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined1 local_38 [8];
  longlong local_30;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar5 = FUN_1435c8e40(local_38,0x7d7,uVar7);
    FUN_1435cbef0(uVar7,uVar5);
    piVar1 = (int *)(local_30 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  if (param_5 == 0) {
    uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar5 = FUN_1435c8e40(local_38,0x7d7,uVar7);
    FUN_1435cbef0(uVar7,uVar5);
    piVar1 = (int *)(local_30 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  if (param_6 == 0) {
    uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar5 = FUN_1435c8e40(local_38,0x7d7,uVar7);
    FUN_1435cbef0(uVar7,uVar5);
    piVar1 = (int *)(local_30 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  lVar6 = FUN_1434f5ac0();
  if (lVar6 == 0) {
    uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar5 = FUN_1435c8e40(local_38,0x7df,uVar7);
    FUN_1435cbef0(uVar7,uVar5);
    piVar1 = (int *)(local_30 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  uVar7 = FUN_1434f5ac0(param_3);
  local_50 = (int)*(double *)(param_5 + 0x40);
  local_48 = (int)*(double *)(param_4 + 0x50);
  local_4c = (int)*(double *)(param_5 + 0x48);
  local_44 = (int)*(double *)(param_4 + 0x58);
  lVar3 = *(longlong *)(param_6 + 0x40);
  local_40 = (int)(*(double *)(param_4 + 0x50) + *(double *)(param_4 + 0x48));
  local_3c = (int)(*(double *)(param_4 + 0x58) + *(double *)(param_4 + 0x40));
  if (lVar3 == 0) {
LAB_1434f66c2:
    plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x38);
    (**(code **)(*plVar4 + 8))
              (plVar4,2,
               "The method BitmapData::applyFilter (unsupported filter type) is not implemented\n");
  }
  else {
    FUN_1434f6390(param_1,local_res18);
    iVar2 = *(int *)(lVar3 + 0x10);
    if (iVar2 != 0) {
      if (iVar2 < 1) goto LAB_1434f66c2;
      if (iVar2 < 4) {
        if (local_res18[0] == '\0') {
LAB_1434f668a:
          uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
          uVar5 = FUN_1435c8e40(local_38,0x81d,uVar7);
          FUN_1435cbef0(uVar7,uVar5);
          piVar1 = (int *)(local_30 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 != 0) {
            return;
          }
          FUN_14335f920();
          return;
        }
      }
      else if (iVar2 != 8) {
        if (iVar2 != 10) goto LAB_1434f66c2;
        FUN_1434f6390(param_3,local_58);
        if (local_58[0] != local_res18[0]) goto LAB_1434f668a;
      }
    }
    FUN_14331c0f0(lVar6,uVar7,&local_48,&local_50,lVar3);
  }
  return;
}



// FUNCTION 1434f66f0 FUN_1434f66f0 body=293 status=ok
// SIG undefined FUN_1434f66f0(void)

void FUN_1434f66f0(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = (undefined8 *)FUN_1435b5bc0(uVar3);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar2,uVar3);
    *puVar2 = &PTR_FUN_145b234a8;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    *(undefined1 *)(puVar2 + 0xc) = 1;
    *(undefined4 *)((longlong)puVar2 + 100) = 0;
  }
  puVar1 = (undefined8 *)*param_2;
  if (puVar2 != puVar1) {
    if (puVar1 != (undefined8 *)0x0) {
      if (((ulonglong)puVar1 & 1) == 0) {
        if ((*(uint *)(puVar1 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar1 + 1) = *(uint *)(puVar1 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = (longlong)puVar1 - 1;
      }
    }
    *param_2 = (ulonglong)puVar2;
  }
  *(undefined4 *)(*param_2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(*param_2 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined1 *)(*param_2 + 0x60) = *(undefined1 *)(param_1 + 0x60);
  *(undefined4 *)(*param_2 + 100) = *(undefined4 *)(param_1 + 100);
  uVar3 = FUN_1434f5ac0(param_1);
  uVar4 = FUN_1434f5ac0(*param_2);
  local_10 = *(undefined4 *)(param_1 + 0x58);
  local_c = *(undefined4 *)(param_1 + 0x5c);
  local_res8 = 0;
  local_18 = 0;
  FUN_14331c730(uVar4,uVar3,&local_18,&local_res8,0,0,0);
  return;
}



// FUNCTION 1434f6820 FUN_1434f6820 body=290 status=ok
// SIG undefined FUN_1434f6820(void)

void FUN_1434f6820(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  undefined1 local_28 [32];
  
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(&local_38,0x81d,uVar2);
    FUN_1435cbef0(uVar2,uVar3);
    piVar1 = (int *)(CONCAT44(iStack_2c,local_30) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    lVar4 = FUN_1434f5ac0();
    if (lVar4 == 0) {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
      uVar3 = FUN_1435c8e40(&local_38,0x7df,uVar2);
      FUN_1435cbef0(uVar2,uVar3);
      piVar1 = (int *)(CONCAT44(iStack_2c,local_30) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    else {
      Scaleform::GFx::AS3::ClassTraits::fl_geom::ColorTransform::GetCxformFromColorTransform
                (local_28,param_4);
      local_38 = (int)*(double *)(param_3 + 0x50);
      local_34 = (int)*(double *)(param_3 + 0x58);
      local_30 = (int)(*(double *)(param_3 + 0x50) + *(double *)(param_3 + 0x48));
      iStack_2c = (int)(*(double *)(param_3 + 0x58) + *(double *)(param_3 + 0x40));
      FUN_14331c340(lVar4,&local_38,local_28);
    }
  }
  return;
}



// FUNCTION 1434f6950 FUN_1434f6950 body=533 status=ok
// SIG undefined FUN_1434f6950(void)

void FUN_1434f6950(longlong param_1,uint *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong local_res18;
  undefined1 local_28 [4];
  undefined4 uStack_24;
  longlong lStack_20;
  
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_28,0x7d7,uVar1);
    FUN_1435cbef0(uVar1,uVar4);
    piVar5 = (int *)(lStack_20 + 0x18);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    plVar2 = *(longlong **)(param_3 + 0x48);
    if (plVar2 == (longlong *)0x0) {
      iVar11 = *(int *)(param_3 + 0x58);
    }
    else {
      piVar5 = (int *)(**(code **)(*plVar2 + 0x30))(plVar2,local_28);
      iVar11 = piVar5[2] - *piVar5;
    }
    plVar2 = *(longlong **)(param_3 + 0x48);
    if (plVar2 == (longlong *)0x0) {
      iVar10 = *(int *)(param_3 + 0x5c);
    }
    else {
      lVar6 = (**(code **)(*plVar2 + 0x30))(plVar2,local_28);
      iVar10 = *(int *)(lVar6 + 0xc) - *(int *)(lVar6 + 4);
    }
    plVar2 = *(longlong **)(param_1 + 0x48);
    if (plVar2 == (longlong *)0x0) {
      iVar12 = *(int *)(param_1 + 0x58);
    }
    else {
      piVar5 = (int *)(**(code **)(*plVar2 + 0x30))(plVar2,local_28);
      iVar12 = piVar5[2] - *piVar5;
    }
    plVar2 = *(longlong **)(param_1 + 0x48);
    if (plVar2 == (longlong *)0x0) {
      iVar9 = *(int *)(param_1 + 0x5c);
    }
    else {
      lVar6 = (**(code **)(*plVar2 + 0x30))(plVar2,local_28);
      iVar9 = *(int *)(lVar6 + 0xc) - *(int *)(lVar6 + 4);
    }
    if (iVar12 == iVar11) {
      if (iVar9 == iVar10) {
        lVar6 = FUN_1434f5ac0(param_3);
        local_res18 = 0;
        FUN_1434f66f0(param_1,&local_res18);
        uVar3 = local_res18;
        lVar7 = FUN_1434f5ac0(local_res18);
        lVar8 = FUN_1434f5ac0(param_1);
        if (((lVar6 == 0) || (lVar7 == 0)) || (lVar8 == 0)) {
          uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
          uVar4 = FUN_1435c8e40(local_28,0x7df,uVar1);
          FUN_1435cbef0(uVar1,uVar4);
          piVar5 = (int *)(lStack_20 + 0x18);
          *piVar5 = *piVar5 + -1;
          if (*piVar5 == 0) {
            FUN_14335f920();
          }
        }
        else {
          FUN_14331c3a0(lVar7,lVar8,lVar6);
          FUN_1435903c0(param_2,uVar3);
        }
        if (((uVar3 != 0) && ((uVar3 & 1) == 0)) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
          FUN_1434ef880(uVar3);
        }
      }
      else {
        FUN_1434f0780(param_2,0xfffffffc);
      }
    }
    else {
      if (9 < ((byte)*param_2 & 0x1f)) {
        if ((*param_2 >> 9 & 1) == 0) {
          FUN_1435920c0(param_2);
        }
        else {
          FUN_143592150();
        }
      }
      *param_2 = *param_2 & 0xffffffe2;
      *param_2 = *param_2 | 2;
      *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_24,0xfffffffd);
      *(longlong *)(param_2 + 6) = lStack_20;
    }
  }
  return;
}



// FUNCTION 1434f6b70 FUN_1434f6b70 body=406 status=ok
// SIG undefined FUN_1434f6b70(void)

void FUN_1434f6b70(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res18;
  int local_res1c;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(&local_28,0x7d7,uVar2);
    FUN_1435cbef0(uVar2,uVar3);
    piVar1 = (int *)(CONCAT44(iStack_1c,local_20) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else if (param_5 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(&local_28,0x7d7,uVar2);
    FUN_1435cbef0(uVar2,uVar3);
    piVar1 = (int *)(CONCAT44(iStack_1c,local_20) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    lVar4 = FUN_1434f5ac0();
    lVar5 = FUN_1434f5ac0(param_3);
    if ((lVar4 == 0) || (lVar5 == 0)) {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
      uVar3 = FUN_1435c8e40(&local_28,0x7df,uVar2);
      FUN_1435cbef0(uVar2,uVar3);
      piVar1 = (int *)(CONCAT44(iStack_1c,local_20) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    else {
      local_res18 = (int)*(double *)(param_5 + 0x40);
      local_res1c = (int)*(double *)(param_5 + 0x48);
      local_24 = (int)*(double *)(param_4 + 0x58);
      local_28 = (int)*(double *)(param_4 + 0x50);
      local_20 = (int)(*(double *)(param_4 + 0x50) + *(double *)(param_4 + 0x48));
      iStack_1c = (int)(*(double *)(param_4 + 0x58) + *(double *)(param_4 + 0x40));
      FUN_14331c570(lVar4,lVar5,&local_28,&local_res18,param_6,param_7);
    }
  }
  return;
}



// FUNCTION 1434f6d10 FUN_1434f6d10 body=521 status=ok
// SIG undefined FUN_1434f6d10(void)

void FUN_1434f6d10(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,longlong param_7,undefined1 param_8)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_res18;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar2 = FUN_1435c8e40(&local_30,0x7d7,uVar4);
    FUN_1435cbef0(uVar4,uVar2);
    piVar1 = (int *)(CONCAT44(iStack_24,local_28) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else if (param_5 == 0) {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar2 = FUN_1435c8e40(&local_30,0x7d7,uVar4);
    FUN_1435cbef0(uVar4,uVar2);
    piVar1 = (int *)(CONCAT44(iStack_24,local_28) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    lVar3 = FUN_1434f5ac0();
    uVar4 = FUN_1434f5ac0(param_6);
    lVar5 = FUN_1434f5ac0(param_3);
    if ((lVar5 == 0) || (lVar3 == 0)) {
      uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
      uVar2 = FUN_1435c8e40(&local_30,0x7df,uVar4);
      FUN_1435cbef0(uVar4,uVar2);
      piVar1 = (int *)(CONCAT44(iStack_24,local_28) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    else {
      if (param_7 == 0) {
        local_res18 = 0;
      }
      else {
        local_res18 = CONCAT44((int)*(double *)(param_7 + 0x48),(int)*(double *)(param_7 + 0x40));
      }
      local_38 = (int)*(double *)(param_5 + 0x40);
      local_34 = (int)*(double *)(param_5 + 0x48);
      local_30 = (int)*(double *)(param_4 + 0x50);
      local_2c = (int)*(double *)(param_4 + 0x58);
      local_28 = (int)(*(double *)(param_4 + 0x50) + *(double *)(param_4 + 0x48));
      iStack_24 = (int)(*(double *)(param_4 + 0x58) + *(double *)(param_4 + 0x40));
      FUN_14331c730(lVar3,lVar5,&local_30,&local_38,uVar4,&local_res18,param_8);
    }
  }
  return;
}



// FUNCTION 1434f6f20 FUN_1434f6f20 body=58 status=ok
// SIG undefined FUN_1434f6f20(void)

void FUN_1434f6f20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1434f5ac0();
  if (lVar1 != 0) {
    FUN_14331d020(lVar1);
    if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1434f6f60 FUN_1434f6f60 body=1068 status=ok
// SIG undefined FUN_1434f6f60(void)

void FUN_1434f6f60(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,longlong param_7,undefined1 param_8)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  Matrix2x4<float> *pMVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_c8;
  undefined8 local_c0;
  uint local_b8 [2];
  longlong local_b0;
  float local_98;
  float fStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  
  if (param_3 == 0) {
    uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_b8,0x5e4,uVar10);
    FUN_1435cbef0(uVar10,uVar4);
    piVar1 = (int *)(local_b0 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    local_98 = 1.0;
    fStack_94 = 0.0;
    uStack_90 = 0;
    fStack_8c = 0.0;
    local_88 = 0.0;
    fStack_84 = 1.0;
    uStack_80 = 0;
    fStack_7c = 0.0;
    if (param_4 != 0) {
      pMVar5 = (Matrix2x4<float> *)FUN_143547410(param_4,local_b8);
      Scaleform::Render::Matrix2x4<float>::Append((Matrix2x4<float> *)&local_98,pMVar5);
    }
    FUN_1432bfaf0(&local_78);
    if (param_5 != 0) {
      puVar6 = (undefined4 *)
               Scaleform::GFx::AS3::ClassTraits::fl_geom::ColorTransform::
               GetCxformFromColorTransform(local_b8);
      local_78 = *puVar6;
      uStack_74 = puVar6[1];
      uStack_70 = puVar6[2];
      uStack_6c = puVar6[3];
      local_68 = *(undefined8 *)(puVar6 + 4);
      uStack_60 = *(undefined8 *)(puVar6 + 6);
    }
    uVar3 = FUN_1434fb2f0(param_6);
    local_c8 = 0;
    local_c0 = 0;
    if (param_7 != 0) {
      local_c8 = CONCAT44((int)*(double *)(param_7 + 0x58),(int)*(double *)(param_7 + 0x50));
      local_c0 = CONCAT44((int)(*(double *)(param_7 + 0x58) + *(double *)(param_7 + 0x40)),
                          (int)(*(double *)(param_7 + 0x50) + *(double *)(param_7 + 0x48)));
    }
    lVar7 = FUN_1434f5ac0(param_1);
    if (lVar7 == 0) {
      uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
      uVar4 = FUN_1435c8e40(local_b8,0x7df,uVar10);
      FUN_1435cbef0(uVar10,uVar4);
      piVar1 = (int *)(local_b0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    else {
      lVar8 = FUN_1435b4fe0(*(undefined8 *)(param_1 + 0x28));
      uVar10 = *(undefined8 *)(lVar8 + 0x28);
      uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
      uVar9 = FUN_143590110(local_b8,param_3);
      cVar2 = FUN_1435c8c20(uVar4,uVar9,uVar10);
      if (9 < ((byte)local_b8[0] & 0x1f)) {
        if ((local_b8[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_b8);
        }
        else {
          FUN_143592150();
        }
      }
      if (cVar2 == '\0') {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
        uVar10 = *(undefined8 *)(lVar8 + 0x1c8);
        uVar4 = FUN_143590110(local_b8,param_3);
        cVar2 = FUN_1435c8b00(lVar8,uVar4,"flash.display.DisplayObject",uVar10);
        if (9 < ((byte)local_b8[0] & 0x1f)) {
          if ((local_b8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_b8);
          }
          else {
            FUN_143592150();
          }
        }
        if (cVar2 == '\0') {
          uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
          uVar4 = FUN_1435c8e40(local_b8,0x5e4,uVar10);
          FUN_1435cbef0(uVar10,uVar4);
          piVar1 = (int *)(local_b0 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          uStack_80 = 0;
          fVar13 = fStack_94 * 0.0;
          uStack_90 = 0;
          fVar14 = local_98 * 0.0;
          fVar12 = fStack_84 * 0.0;
          local_98 = local_98 * 0.05 + fVar13;
          fStack_94 = fStack_94 * 0.05 + fVar14;
          fVar15 = local_88 * 0.0;
          local_88 = local_88 * 0.05 + fVar12;
          fStack_84 = fStack_84 * 0.05 + fVar15;
          fStack_8c = fStack_8c + fVar14 + fVar13;
          fStack_7c = fStack_7c + fVar15 + fVar12;
          if (*(longlong *)(param_3 + 0x88) != 0) {
            uVar10 = FUN_14336b350();
            FUN_1432e3d00(*(undefined8 *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10));
            puVar11 = &local_c8;
            if (param_7 == 0) {
              puVar11 = (undefined8 *)0x0;
            }
            FUN_14331c960(lVar7,uVar10,&local_98,&local_78,uVar3,puVar11);
          }
        }
      }
      else {
        uVar10 = FUN_1434f5ac0(param_3);
        puVar11 = &local_c8;
        if (param_7 == 0) {
          puVar11 = (undefined8 *)0x0;
        }
        FUN_14331cbf0(lVar7,uVar10,&local_98,&local_78,uVar3,puVar11,param_8);
      }
    }
  }
  return;
}



// FUNCTION 1434f73a0 FUN_1434f73a0 body=277 status=ok
// SIG undefined FUN_1434f73a0(void)

void FUN_1434f73a0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 local_res18 [4];
  int local_18;
  int local_14;
  int local_10;
  int iStack_c;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(&local_18,0x7d7,uVar2);
    FUN_1435cbef0(uVar2,uVar3);
    piVar1 = (int *)(CONCAT44(iStack_c,local_10) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    lVar4 = FUN_1434f5ac0();
    if (lVar4 == 0) {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
      uVar3 = FUN_1435c8e40(&local_18,0x7df,uVar2);
      FUN_1435cbef0(uVar2,uVar3);
      piVar1 = (int *)(CONCAT44(iStack_c,local_10) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
        return;
      }
    }
    else {
      local_18 = (int)*(double *)(param_3 + 0x50);
      local_14 = (int)*(double *)(param_3 + 0x58);
      local_10 = (int)(*(double *)(param_3 + 0x50) + *(double *)(param_3 + 0x48));
      iStack_c = (int)(*(double *)(param_3 + 0x58) + *(double *)(param_3 + 0x40));
      local_res18[0] = param_4;
      FUN_14331d120(lVar4,&local_18,local_res18);
    }
  }
  return;
}



// FUNCTION 1434f74c0 FUN_1434f74c0 body=156 status=ok
// SIG undefined FUN_1434f74c0(void)

void FUN_1434f74c0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  longlong local_18;
  
  lVar3 = FUN_1434f5ac0();
  if (lVar3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(&local_20,0x7df,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(local_18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    local_28[0] = param_5;
    local_20 = param_3;
    local_1c = param_4;
    FUN_14331d260(lVar3,&local_20,local_28);
  }
  return;
}



// FUNCTION 1434f7570 FUN_1434f7570 body=764 status=ok
// SIG undefined FUN_1434f7570(void)

void FUN_1434f7570(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  float fVar9;
  int local_d8;
  int local_d4;
  int local_d0;
  int iStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8 [2];
  undefined8 local_b0 [3];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  uint local_58 [8];
  undefined1 local_38 [48];
  
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(&local_d8,0x7d7,uVar3);
    FUN_1435cbef0(uVar3,uVar4);
    piVar1 = (int *)(CONCAT44(iStack_cc,local_d0) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    lVar5 = FUN_1434f5ac0();
    if (lVar5 == 0) {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
      uVar4 = FUN_1435c8e40(&local_d8,0x7df,uVar3);
      FUN_1435cbef0(uVar3,uVar4);
      piVar1 = (int *)(CONCAT44(iStack_cc,local_d0) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    else {
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = (int)((float)(int)*(double *)(param_3 + 0x50) * 20.0);
      local_d4 = (int)((float)(int)*(double *)(param_3 + 0x58) * 20.0);
      local_d0 = (int)((float)(int)(*(double *)(param_3 + 0x50) + *(double *)(param_3 + 0x48)) *
                      20.0);
      iStack_cc = (int)((float)(int)(*(double *)(param_3 + 0x58) + *(double *)(param_3 + 0x40)) *
                       20.0);
      FUN_14331c2d0(&local_c8,&local_d8,*(undefined8 *)(param_4 + 0x40));
      lVar8 = 4;
      puVar6 = local_b8;
      lVar5 = 4;
      do {
        *puVar6 = 0;
        *(undefined8 *)(puVar6 + 2) = 0;
        puVar6 = puVar6 + 8;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      fVar9 = (float)local_c8 * 0.05;
      if (fVar9 <= 0.0) {
        fVar9 = fVar9 - 0.5;
      }
      else {
        fVar9 = fVar9 + 0.5;
      }
      FUN_1434f06a0(local_b8,(double)(int)fVar9);
      fVar9 = local_c8._4_4_ * 0.05;
      if (fVar9 <= 0.0) {
        fVar9 = fVar9 - 0.5;
      }
      else {
        fVar9 = fVar9 + 0.5;
      }
      FUN_1434f06a0(local_98,(double)(int)fVar9);
      fVar9 = ((float)uStack_c0 - (float)local_c8) * 0.05;
      if (fVar9 <= 0.0) {
        fVar9 = fVar9 - 0.5;
      }
      else {
        fVar9 = fVar9 + 0.5;
      }
      FUN_1434f06a0(local_78,(double)(int)fVar9);
      fVar9 = (uStack_c0._4_4_ - local_c8._4_4_) * 0.05;
      if (fVar9 <= 0.0) {
        fVar9 = fVar9 - 0.5;
      }
      else {
        fVar9 = fVar9 + 0.5;
      }
      FUN_1434f06a0(local_58,(double)(int)fVar9);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
      FUN_1435e8720(lVar5,param_2,*(undefined8 *)(lVar5 + 0x3d0),4,local_b8);
      puVar7 = local_38;
      do {
        puVar2 = (uint *)(puVar7 + -0x20);
        puVar7 = puVar7 + -0x20;
        lVar8 = lVar8 + -1;
        if (9 < ((byte)*puVar2 & 0x1f)) {
          if ((*puVar2 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar7);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar8 != 0);
    }
  }
  return;
}



// FUNCTION 1434f7880 FUN_1434f7880 body=413 status=ok
// SIG undefined FUN_1434f7880(void)

void FUN_1434f7880(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  char local_b8 [8];
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined1 local_a0 [8];
  longlong local_98;
  undefined4 local_88 [2];
  undefined8 local_80;
  int local_78;
  undefined4 local_68;
  undefined8 local_60;
  int local_58;
  undefined4 local_48;
  undefined8 local_40;
  int local_38;
  uint local_28 [8];
  
  lVar4 = FUN_1434f5ac0();
  if (lVar4 == 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar5 = FUN_1435c8e40(local_a0,0x7df,uVar3);
    FUN_1435cbef0(uVar3,uVar5);
    piVar1 = (int *)(local_98 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    FUN_14331d380(lVar4,&local_b0,param_3,param_4,param_5);
    local_38 = local_a8 - local_b0;
    local_78 = local_b0;
    lVar4 = 4;
    local_28[4] = local_a4 - local_ac;
    local_80 = 0;
    local_60 = 0;
    local_58 = local_ac;
    local_40 = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    local_88[0] = 2;
    local_68 = 2;
    local_48 = 2;
    local_28[0] = 2;
    FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_b8,param_2,
                  "flash.geom.Rectangle",4,local_88);
    puVar6 = &stack0xfffffffffffffff8;
    if (local_b8[0] == '\0') {
      do {
        puVar2 = (uint *)(puVar6 + -0x20);
        puVar6 = puVar6 + -0x20;
        lVar4 = lVar4 + -1;
        if (9 < ((byte)*puVar2 & 0x1f)) {
          if ((*puVar2 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar6);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar4 != 0);
    }
    else {
      do {
        puVar2 = (uint *)(puVar6 + -0x20);
        puVar6 = puVar6 + -0x20;
        lVar4 = lVar4 + -1;
        if (9 < ((byte)*puVar2 & 0x1f)) {
          if ((*puVar2 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar6);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 1434f7a30 FUN_1434f7a30 body=147 status=ok
// SIG undefined FUN_1434f7a30(void)

void FUN_1434f7a30(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  longlong local_18;
  
  lVar3 = FUN_1434f5ac0();
  if (lVar3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_20,0x7df,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(local_18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    puVar5 = (undefined4 *)FUN_14331d4e0(lVar3,local_28,param_3,param_4);
    *param_2 = *puVar5;
  }
  return;
}



// FUNCTION 1434f7ad0 FUN_1434f7ad0 body=147 status=ok
// SIG undefined FUN_1434f7ad0(void)

void FUN_1434f7ad0(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  longlong local_18;
  
  lVar3 = FUN_1434f5ac0();
  if (lVar3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_20,0x7df,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(local_18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    puVar5 = (undefined4 *)FUN_14331d510(lVar3,local_28,param_3,param_4);
    *param_2 = *puVar5;
  }
  return;
}



// FUNCTION 1434f7b70 FUN_1434f7b70 body=367 status=ok
// SIG undefined FUN_1434f7b70(void)

void FUN_1434f7b70(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 local_res8 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined **local_28;
  undefined8 local_20;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  if (param_3 == 0) {
    uVar4 = FUN_1435c8e40(local_18,0x7d7,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    lVar5 = FUN_1434f5ac0();
    if (lVar5 == 0) {
      uVar4 = FUN_1435c8e40(local_18,0x7df,uVar2);
      FUN_1435cbef0(uVar2,uVar4);
      piVar1 = (int *)(local_10 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    else {
      local_38 = (int)*(double *)(param_3 + 0x50);
      local_34 = (int)*(double *)(param_3 + 0x58);
      local_30 = (int)(*(double *)(param_3 + 0x50) + *(double *)(param_3 + 0x48));
      local_2c = (int)(*(double *)(param_3 + 0x58) + *(double *)(param_3 + 0x40));
      if ((local_30 != local_38) && (local_2c != local_34)) {
        puVar6 = (undefined8 *)FUN_1435ca890(uVar2,local_res8);
        FUN_1434e68a0(param_2,*puVar6);
        iVar7 = local_30 - local_38;
        iVar3 = local_2c - local_34;
        uVar2 = *param_2;
        uVar4 = FUN_143590540();
        FUObjectAnnotationDense<FLinkerIndexPair,0>::NotifyUObjectDeleted
                  (uVar2,uVar4,iVar7 * iVar3 * 4);
        local_28 = &PTR_FUN_145b23990;
        local_20 = *param_2;
        FUN_14331d5f0(lVar5,&local_28,&local_38);
      }
    }
  }
  return;
}



// FUNCTION 1434f7cf0 FUN_1434f7cf0 body=488 status=ok
// SIG undefined FUN_1434f7cf0(void)

void FUN_1434f7cf0(longlong param_1,ulonglong *param_2,longlong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  char local_res18 [16];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 local_48 [8];
  longlong local_40;
  undefined **local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  if (param_3 == 0) {
    uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_48,0x7d7,uVar6);
    FUN_1435cbef0(uVar6,uVar4);
    piVar1 = (int *)(local_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    lVar5 = FUN_1434f5ac0();
    if (lVar5 == 0) {
      uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
      uVar4 = FUN_1435c8e40(local_48,0x7df,uVar6);
      FUN_1435cbef0(uVar6,uVar4);
      piVar1 = (int *)(local_40 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
        return;
      }
    }
    else {
      local_58 = (int)*(double *)(param_3 + 0x50);
      local_54 = (int)*(double *)(param_3 + 0x58);
      local_50 = (int)(*(double *)(param_3 + 0x50) + *(double *)(param_3 + 0x48));
      local_4c = (int)(*(double *)(param_3 + 0x58) + *(double *)(param_3 + 0x40));
      if ((local_50 != local_58) && (local_4c != local_54)) {
        FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res18,param_2,
                      "Vector.<uint>",0,0);
        if (local_res18[0] == '\0') {
          uVar2 = *param_2;
          if (uVar2 != 0) {
            if ((uVar2 & 1) == 0) {
              if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
                *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
                FUN_1434ef880();
              }
              *param_2 = 0;
            }
            else {
              *param_2 = uVar2 - 1;
              *param_2 = 0;
            }
          }
        }
        else {
          iVar7 = local_50 - local_58;
          iVar3 = local_4c - local_54;
          uVar2 = *param_2;
          uVar6 = FUN_143590540();
          FUN_1436224e0(uVar2,uVar6,iVar7 * iVar3 * 4);
          local_30 = 0;
          local_38 = &PTR_FUN_145b239b0;
          local_28 = *param_2;
          FUN_14331d5f0(lVar5,&local_38,&local_58);
        }
      }
    }
  }
  return;
}



// FUNCTION 1434f7ee0 FUN_1434f7ee0 body=566 status=ok
// SIG undefined FUN_1434f7ee0(void)

void FUN_1434f7ee0(longlong param_1,undefined1 *param_2,longlong param_3,int param_4,
                  longlong param_5,longlong param_6,undefined4 param_7)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  
  lVar5 = FUN_1434f5ac0();
  if (lVar5 == 0) {
    uVar7 = 0x7df;
LAB_1434f80c9:
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar7 = FUN_1435c8e40(&local_28,uVar7,uVar2);
    FUN_1435cbef0(uVar2,uVar7);
    piVar1 = (int *)(CONCAT44(iStack_1c,local_20) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    local_30 = (int)*(double *)(param_3 + 0x40);
    local_2c = (int)*(double *)(param_3 + 0x48);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
    cVar3 = FUN_1435c8b00(lVar6,param_5,"flash.geom.Rectangle",*(undefined8 *)(lVar6 + 0x1c8));
    if (cVar3 == '\0') {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
      cVar3 = FUN_1435c8b00(lVar6,param_5,"flash.geom.Point",*(undefined8 *)(lVar6 + 0x1c8));
      if (cVar3 == '\0') {
        local_38 = 0;
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
        cVar3 = FUN_1435c8b00(lVar6,param_5,"flash.display.Bitmap",*(undefined8 *)(lVar6 + 0x1c8));
        if (cVar3 != '\0') {
          if (*(longlong *)(*(longlong *)(param_5 + 0x10) + 0x98) == 0) {
            return;
          }
          lVar6 = FUN_1434f5cb0();
          if (lVar6 == 0) {
            return;
          }
          lVar6 = *(longlong *)(lVar6 + 0x18);
          if (lVar6 == 0) {
            return;
          }
LAB_1434f80a1:
          uVar4 = FUN_14331da70(lVar5,lVar6,&local_30,&local_38,param_4,param_7);
          *param_2 = uVar4;
          return;
        }
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
        cVar3 = FUN_1435c8b00(lVar6,param_5,"flash.display.BitmapData",
                              *(undefined8 *)(lVar6 + 0x1c8));
        if (cVar3 != '\0') {
          if (param_6 != 0) {
            local_38 = CONCAT44((int)*(double *)(param_6 + 0x48),(int)*(double *)(param_6 + 0x40));
          }
          lVar6 = FUN_1434f5ac0(*(undefined8 *)(param_5 + 0x10));
          goto LAB_1434f80a1;
        }
        uVar7 = 0x5e4;
        goto LAB_1434f80c9;
      }
      local_24 = (int)*(double *)(*(longlong *)(param_5 + 0x10) + 0x48);
      local_28 = (int)*(double *)(*(longlong *)(param_5 + 0x10) + 0x40);
      local_20 = local_28 + 1;
      iStack_1c = local_24 + 1;
      if (param_4 == 0) {
        param_4 = 1;
      }
    }
    else {
      lVar6 = *(longlong *)(param_5 + 0x10);
      local_28 = (int)*(double *)(lVar6 + 0x50);
      local_24 = (int)*(double *)(lVar6 + 0x58);
      local_20 = (int)(*(double *)(lVar6 + 0x48) + *(double *)(lVar6 + 0x50));
      iStack_1c = (int)(*(double *)(lVar6 + 0x40) + *(double *)(lVar6 + 0x58));
    }
    uVar4 = FUN_14331d920(lVar5,&local_30,&local_28,param_4);
    *param_2 = uVar4;
  }
  return;
}



// FUNCTION 1434f8120 FUN_1434f8120 body=1562 status=ok
// SIG undefined FUN_1434f8120(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1434f8120(longlong param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  ulonglong *puVar11;
  undefined8 *puVar12;
  int *piVar13;
  longlong lVar14;
  bool bVar15;
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_1168 [8];
  uint local_1160 [2];
  undefined8 local_1158;
  uint local_1150;
  undefined8 local_1140;
  undefined8 local_1138;
  uint local_1130 [2];
  undefined8 local_1128;
  longlong local_1120;
  int *local_1110;
  longlong local_1108;
  uint local_1100 [2];
  undefined8 local_10f8;
  undefined4 local_10f0;
  uint local_10e0 [2];
  undefined8 local_10d8;
  undefined4 local_10d0;
  ulonglong local_10c0 [6];
  uint local_1090 [8];
  undefined1 local_1070 [8];
  ulonglong local_1068;
  uint local_1060 [10];
  int local_1038 [1024];
  
  puVar12 = (undefined8 *)0x0;
  local_1140 = 0;
  local_1138 = 0;
  puVar10 = puVar12;
  if (param_3 != 0) {
    puVar10 = &local_1140;
    local_1140 = CONCAT44((int)*(double *)(param_3 + 0x58),(int)*(double *)(param_3 + 0x50));
    local_1138 = CONCAT44((int)(*(double *)(param_3 + 0x58) + *(double *)(param_3 + 0x40)),
                          (int)(*(double *)(param_3 + 0x50) + *(double *)(param_3 + 0x48)));
  }
  lVar7 = FUN_1434f5ac0();
  if (lVar7 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar8 = FUN_1435c8e40(&local_1110,0x7df,uVar2);
    FUN_1435cbef0(uVar2,uVar8);
    piVar13 = (int *)(local_1108 + 0x18);
    *piVar13 = *piVar13 + -1;
    if (*piVar13 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  FUN_14331d790(lVar7,puVar10,local_1038);
  local_10e0[0] = 3;
  local_10d8 = 0;
  lVar14 = 4;
  local_10d0 = 4;
  local_1130[0] = 0;
  local_1128 = 0;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res18[0] = 1;
  FUN_1435ccb40(lVar7,"Vector.<Vector.<Number>>",*(undefined8 *)(lVar7 + 0x1c8),local_1130,
                local_res18,local_10e0);
  if ((*(char *)(lVar7 + 0xb8) != '\0') || (uVar6 = local_1130[0] & 0x1f, uVar6 == 0))
  goto LAB_1434f86cb;
  if (uVar6 == 0xc) {
    bVar15 = local_1120 == 0;
LAB_1434f82af:
    if (bVar15) goto LAB_1434f86cb;
  }
  else if (uVar6 == 10) {
    bVar15 = local_1120 == *(longlong *)(local_1120 + 8) + 0x80;
    goto LAB_1434f82af;
  }
  FUN_1434f0700(param_2);
  piVar13 = local_1038;
  local_10c0[0] = 0;
  puVar11 = local_10c0;
  local_10c0[1] = 0;
  local_10c0[2] = 0;
  local_10c0[3] = 0;
  do {
    uVar6 = 0;
    local_1100[0] = 3;
    local_10f8 = 0;
    local_10f0 = 0x100;
    local_1110 = piVar13;
    FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res18,
                  local_10c0 + (longlong)puVar12,"Vector.<Number>",1,local_1100);
    if ((char)local_res18[0] == '\0') {
LAB_1434f8660:
      if (9 < ((byte)local_1100[0] & 0x1f)) {
        if ((local_1100[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_1100);
        }
        else {
          FUN_143592150();
        }
      }
      puVar11 = local_10c0 + 4;
      do {
        uVar4 = puVar11[-1];
        puVar11 = puVar11 + -1;
        lVar14 = lVar14 + -1;
        if (uVar4 != 0) {
          if ((uVar4 & 1) == 0) {
            if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *puVar11 = uVar4 - 1;
          }
        }
      } while (lVar14 != 0);
      goto LAB_1434f86cb;
    }
    do {
      local_1160[0] = 3;
      local_1158 = 0;
      local_1150 = uVar6;
      FUN_1435ae6b0(local_1070,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1d8),
                    local_1160);
      if (9 < ((byte)local_1160[0] & 0x1f)) {
        if ((local_1160[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_1160);
        }
        else {
          FUN_143592150();
        }
      }
      local_1150 = *piVar13;
      local_1160[0] = 3;
      local_1158 = 0;
      pcVar9 = (char *)(**(code **)(*(longlong *)*puVar11 + 0x20))
                                 ((longlong *)*puVar11,local_res20,local_1070,local_1160);
      cVar1 = *pcVar9;
      if (9 < ((byte)local_1160[0] & 0x1f)) {
        if ((local_1160[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_1160);
        }
        else {
          FUN_143592150();
        }
      }
      bVar5 = (byte)local_1060[0] & 0x1f;
      if (cVar1 == '\0') {
        if (9 < bVar5) {
          if ((local_1060[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_1060);
          }
          else {
            FUN_143592150();
          }
        }
        if ((local_1068 == 0) || ((local_1068 & 1) != 0)) goto LAB_1434f8660;
        goto LAB_1434f8649;
      }
      if (9 < bVar5) {
        if ((local_1060[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_1060);
        }
        else {
          FUN_143592150();
        }
      }
      if (((local_1068 != 0) && ((local_1068 & 1) == 0)) &&
         ((*(uint *)(local_1068 + 8) & 0x3fffff) != 0)) {
        *(uint *)(local_1068 + 8) = *(uint *)(local_1068 + 8) - 1;
        FUN_1434ef880();
      }
      uVar6 = uVar6 + 1;
      piVar13 = piVar13 + 1;
    } while (uVar6 < 0x100);
    local_1160[0] = 3;
    local_1158 = 0;
    local_1150 = (int)puVar12;
    FUN_1435ae6b0(local_10c0 + 4,
                  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1d8),
                  local_1160);
    if (9 < ((byte)local_1160[0] & 0x1f)) {
      if ((local_1160[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_1160);
      }
      else {
        FUN_143592150();
      }
    }
    local_1160[0] = 0;
    local_1158 = 0;
    plVar3 = (longlong *)*param_2;
    FUN_143590450(local_1160,*puVar11);
    pcVar9 = (char *)(**(code **)(*plVar3 + 0x20))(plVar3,local_1168,local_10c0 + 4,local_1160);
    cVar1 = *pcVar9;
    if (9 < ((byte)local_1160[0] & 0x1f)) {
      if ((local_1160[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_1160);
      }
      else {
        FUN_143592150();
      }
    }
    bVar5 = (byte)local_1090[0] & 0x1f;
    if (cVar1 == '\0') {
      if (9 < bVar5) {
        if ((local_1090[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_1090);
        }
        else {
          FUN_143592150();
        }
      }
      if (local_10c0[5] != 0) {
        local_1068 = local_10c0[5];
        if ((local_10c0[5] & 1) == 0) {
LAB_1434f8649:
          if ((*(uint *)(local_1068 + 8) & 0x3fffff) != 0) {
            *(uint *)(local_1068 + 8) = *(uint *)(local_1068 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          local_10c0[5] = local_10c0[5] - 1;
        }
      }
      goto LAB_1434f8660;
    }
    if (9 < bVar5) {
      if ((local_1090[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_1090);
      }
      else {
        FUN_143592150();
      }
    }
    if (local_10c0[5] != 0) {
      if ((local_10c0[5] & 1) == 0) {
        if ((*(uint *)(local_10c0[5] + 8) & 0x3fffff) != 0) {
          *(uint *)(local_10c0[5] + 8) = *(uint *)(local_10c0[5] + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        local_10c0[5] = local_10c0[5] - 1;
      }
    }
    if (9 < ((byte)local_1100[0] & 0x1f)) {
      if ((local_1100[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_1100);
      }
      else {
        FUN_143592150();
      }
    }
    uVar6 = (int)puVar12 + 1;
    puVar12 = (undefined8 *)(ulonglong)uVar6;
    piVar13 = local_1110 + 0x100;
    puVar11 = puVar11 + 1;
  } while (uVar6 < 4);
  puVar11 = local_10c0 + 4;
  local_1110 = piVar13;
  do {
    uVar4 = puVar11[-1];
    puVar11 = puVar11 + -1;
    lVar14 = lVar14 + -1;
    if (uVar4 != 0) {
      if ((uVar4 & 1) == 0) {
        if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar11 = uVar4 - 1;
      }
    }
  } while (lVar14 != 0);
LAB_1434f86cb:
  if (9 < ((byte)local_1130[0] & 0x1f)) {
    if ((local_1130[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_1130);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_10e0[0] & 0x1f)) {
    if ((local_10e0[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_10e0);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 1434f8750 FUN_1434f8750 body=378 status=ok
// SIG undefined FUN_1434f8750(void)

void FUN_1434f8750(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined1 local_res18 [16];
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  
  if (param_3 == 7) {
    uVar2 = *(undefined8 *)(param_4 + 0x10);
    lVar3 = *(longlong *)(param_4 + 0x50);
    lVar4 = *(longlong *)(param_4 + 0x30);
    lVar5 = FUN_1434f5ac0();
    lVar6 = FUN_1434f5ac0(uVar2);
    if ((lVar6 == 0) || (lVar5 == 0)) {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
      uVar7 = FUN_1435c8e40(&local_40,0x7df,uVar2);
      FUN_1435cbef0(uVar2,uVar7);
      piVar1 = (int *)(CONCAT44(iStack_34,local_38) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    else {
      puVar8 = &local_50;
      param_4 = param_4 + 0x60;
      lVar9 = 4;
      do {
        FUN_143590eb0(param_4,local_res18,puVar8);
        puVar8 = puVar8 + 1;
        param_4 = param_4 + 0x20;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      local_58 = (int)*(double *)(lVar3 + 0x40);
      local_54 = (int)*(double *)(lVar3 + 0x48);
      local_40 = (int)*(double *)(lVar4 + 0x50);
      local_3c = (int)*(double *)(lVar4 + 0x58);
      local_38 = (int)(*(double *)(lVar4 + 0x50) + *(double *)(lVar4 + 0x48));
      iStack_34 = (int)(*(double *)(lVar4 + 0x58) + *(double *)(lVar4 + 0x40));
      FUN_14331dbc0(lVar5,lVar6,&local_40,&local_58,local_50,local_4c,local_48,local_44);
    }
  }
  return;
}



// FUNCTION 1434f88d0 FUN_1434f88d0 body=160 status=ok
// SIG undefined FUN_1434f88d0(void)

void FUN_1434f88d0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar3 = FUN_1434f5ac0();
  if (lVar3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x7df,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    FUN_14331dd90(lVar3,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}



// FUNCTION 1434f8980 FUN_1434f8980 body=593 status=ok
// SIG undefined FUN_1434f8980(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1434f8980(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 local_res18 [8];
  undefined8 local_1088;
  int local_1080;
  int iStack_107c;
  undefined8 local_1078;
  longlong local_1070;
  longlong local_1068 [8];
  undefined1 local_1028 [4096];
  
  if (2 < param_3) {
    local_1088 = *(longlong *)(param_4 + 0x30);
    local_1078 = *(longlong *)(param_4 + 0x10);
    local_1070 = *(longlong *)(param_4 + 0x50);
    if (local_1078 == 0) {
      uVar9 = 0x7d7;
    }
    else if (local_1088 == 0) {
      uVar9 = 0x7d7;
    }
    else if (local_1070 == 0) {
      uVar9 = 0x7d7;
    }
    else {
      uVar10 = 0;
      uVar13 = uVar10;
      do {
        lVar7 = 0;
        uVar12 = (uint)uVar13;
        if (uVar12 < param_3 - 3) {
          lVar8 = *(longlong *)((ulonglong)(uVar12 + 3) * 0x20 + 0x10 + param_4);
          if (lVar8 == 0) {
            *(undefined8 *)((longlong)local_1068 + uVar10) = 0;
          }
          else {
            *(undefined1 **)((longlong)local_1068 + uVar10) = local_1028 + uVar13 * 0x400;
            lVar11 = 0x100;
            do {
              uVar9 = FUN_1434b4f50(lVar8 + 0x40,lVar7);
              FUN_143590eb0(uVar9,local_res18,
                            *(longlong *)((longlong)local_1068 + uVar10) + lVar7 * 4);
              lVar7 = lVar7 + 1;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
        }
        else {
          *(undefined8 *)((longlong)local_1068 + uVar10) = 0;
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar10 = uVar10 + 8;
      } while (uVar12 + 1 < 4);
      lVar7 = FUN_1434f5ac0(param_1);
      lVar8 = FUN_1434f5ac0(local_1078);
      if ((lVar7 != 0) && (lVar8 != 0)) {
        pdVar1 = (double *)(local_1088 + 0x58);
        pdVar2 = (double *)(local_1088 + 0x50);
        local_1078 = CONCAT44((int)*(double *)(local_1070 + 0x48),
                              (int)*(double *)(local_1070 + 0x40));
        pdVar3 = (double *)(local_1088 + 0x40);
        pdVar4 = (double *)(local_1088 + 0x48);
        local_1088 = CONCAT44((int)*pdVar1,(int)*pdVar2);
        local_1080 = (int)(*pdVar2 + *pdVar4);
        iStack_107c = (int)(*pdVar1 + *pdVar3);
        FUN_14331dee0(lVar7,lVar8,&local_1088,&local_1078,local_1068);
        return;
      }
      uVar9 = 0x7df;
    }
    uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar9 = FUN_1435c8e40(&local_1088,uVar9,uVar6);
    FUN_1435cbef0(uVar6,uVar9);
    piVar5 = (int *)(CONCAT44(iStack_107c,local_1080) + 0x18);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      FUN_14335f920();
    }
  }
  return;
}



// FUNCTION 1434f8be0 FUN_1434f8be0 body=1085 status=ok
// SIG undefined FUN_1434f8be0(void)

void FUN_1434f8be0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  char cVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  float *pfVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  float *pfVar15;
  uint local_res18 [4];
  undefined1 local_298;
  undefined1 local_297;
  undefined1 local_296 [2];
  uint local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288 [2];
  double local_280;
  double local_278;
  float *local_270;
  longlong local_268;
  uint local_260 [2];
  undefined8 local_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  longlong local_240;
  float local_238 [128];
  
  local_res18[0] = 0;
  if (param_3 < 6) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar8 = FUN_1435c8e40(&local_270,0x427,uVar2);
    FUN_1435cbef0(uVar2,uVar8);
    piVar1 = (int *)(local_268 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    local_278 = 1.0;
    local_280 = 1.0;
    local_288[0] = 1;
    local_28c = 0;
    pcVar9 = (char *)FUN_143590af0(param_4,local_res18,&local_278);
    if ((((*pcVar9 != '\0') &&
         (pcVar9 = (char *)FUN_143590af0(param_4 + 0x20,&local_297,&local_280), *pcVar9 != '\0')) &&
        (pcVar9 = (char *)FUN_143590eb0(param_4 + 0x40,&local_298,local_288), *pcVar9 != '\0')) &&
       (pcVar9 = (char *)FUN_143590eb0(param_4 + 0x60,local_296,&local_28c), *pcVar9 != '\0')) {
      uVar4 = FUN_1435909c0(param_4 + 0x80);
      local_298 = uVar4;
      uVar5 = FUN_1435909c0(param_4 + 0xa0);
      local_290 = 7;
      local_297 = uVar5;
      if ((param_3 < 7) ||
         (pcVar9 = (char *)FUN_143590eb0(param_4 + 0xc0,local_res18,&local_290), *pcVar9 != '\0')) {
        if (param_3 < 8) {
          local_res18[0] = local_res18[0] & 0xffffff00;
        }
        else {
          uVar6 = FUN_1435909c0(param_4 + 0xe0);
          local_res18[0] = CONCAT31(local_res18[0]._1_3_,uVar6);
        }
        pfVar15 = (float *)0x0;
        uVar12 = 0;
        if ((8 < param_3) && (*(longlong *)(param_4 + 0x110) != 0)) {
          _guard_xfg_dispatch_icall_nop(local_238,0,0x200);
          uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1c8);
          local_258 = *(undefined8 *)(param_4 + 0x108);
          local_260[0] = *(uint *)(param_4 + 0x100);
          local_250 = *(undefined4 *)(param_4 + 0x110);
          uStack_24c = *(undefined4 *)(param_4 + 0x114);
          uStack_248 = *(undefined4 *)(param_4 + 0x118);
          uStack_244 = *(undefined4 *)(param_4 + 0x11c);
          local_270 = local_238;
          if (9 < ((byte)local_260[0] & 0x1f)) {
            if ((local_260[0] >> 9 & 1) == 0) {
              FUN_143592070();
            }
            else {
              FUN_143592140();
            }
          }
          cVar7 = FUN_1435c8b00(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_260,
                                "Array",uVar2);
          if (9 < ((byte)local_260[0] & 0x1f)) {
            if ((local_260[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_260);
            }
            else {
              FUN_143592150();
            }
          }
          if (cVar7 == '\0') {
            return;
          }
          lVar14 = *(longlong *)(param_4 + 0x110);
          Scaleform::GFx::AS3::Instances::fl_display::FrameLabel::frameGet(lVar14,&local_294);
          if (0x40 < local_294) {
            local_294 = 0x40;
          }
          uVar13 = (ulonglong)local_294;
          pfVar15 = local_238;
          uVar12 = local_294;
          if (local_294 != 0) {
            local_240 = lVar14 + 0x40;
            pfVar11 = local_238;
            lVar14 = 0;
            do {
              pfVar11[0] = 0.0;
              pfVar11[1] = 0.0;
              lVar10 = FUN_1434b4f50(local_240,lVar14);
              lVar10 = *(longlong *)(lVar10 + 0x10);
              lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
              uVar2 = *(undefined8 *)(lVar3 + 0x1c8);
              uVar8 = FUN_143590110(local_260,lVar10);
              cVar7 = FUN_1435c8b00(lVar3,uVar8,"flash.geom.Point",uVar2);
              if (9 < ((byte)local_260[0] & 0x1f)) {
                if ((local_260[0] >> 9 & 1) == 0) {
                  FUN_1435920c0(local_260);
                }
                else {
                  FUN_143592150();
                }
              }
              if (cVar7 != '\0') {
                *pfVar11 = (float)*(double *)(lVar10 + 0x40);
                pfVar11[1] = (float)*(double *)(lVar10 + 0x48);
              }
              lVar14 = lVar14 + 1;
              pfVar11 = pfVar11 + 2;
              uVar13 = uVar13 - 1;
              pfVar15 = local_270;
              uVar5 = local_297;
              uVar4 = local_298;
              uVar12 = local_294;
            } while (uVar13 != 0);
          }
        }
        lVar14 = FUN_1434f5ac0(param_1);
        if (lVar14 == 0) {
          uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
          uVar8 = FUN_1435c8e40(&local_270,0x7df,uVar2);
          FUN_1435cbef0(uVar2,uVar8);
          piVar1 = (int *)(local_268 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          FUN_14331df80(lVar14,(float)local_278,(float)local_280,local_288[0],local_28c,uVar4,uVar5,
                        local_290,(undefined1)local_res18[0],pfVar15,uVar12);
        }
      }
    }
  }
  return;
}



// FUNCTION 1434f9030 FUN_1434f9030 body=540 status=ok
// SIG undefined FUN_1434f9030(void)

void FUN_1434f9030(longlong param_1,undefined4 *param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined4 param_6,int param_7,undefined4 param_8)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_res18 [4];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(&local_40,0x7d7,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(CONCAT44(iStack_34,local_38) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else if (param_5 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(&local_40,0x7d7,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(CONCAT44(iStack_34,local_38) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else if (param_7 < 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(&local_40,0x7eb,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(CONCAT44(iStack_34,local_38) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    lVar5 = FUN_1434f5ac0();
    lVar6 = FUN_1434f5ac0(param_3);
    if ((lVar5 == 0) || (lVar6 == 0)) {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
      uVar4 = FUN_1435c8e40(&local_40,0x7df,uVar2);
      FUN_1435cbef0(uVar2,uVar4);
      piVar1 = (int *)(CONCAT44(iStack_34,local_38) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    else {
      local_res18[0] = param_8;
      local_48 = (int)*(double *)(param_5 + 0x40);
      local_3c = (int)*(double *)(param_4 + 0x58);
      local_44 = (int)*(double *)(param_5 + 0x48);
      local_40 = (int)*(double *)(param_4 + 0x50);
      local_38 = (int)(*(double *)(param_4 + 0x50) + *(double *)(param_4 + 0x48));
      iStack_34 = (int)(*(double *)(param_4 + 0x58) + *(double *)(param_4 + 0x40));
      uVar3 = FUN_14331e100(lVar5,lVar6,&local_40,&local_48,param_6,param_7,local_res18);
      *param_2 = uVar3;
    }
  }
  return;
}



// FUNCTION 1434f9260 FUN_1434f9260 body=135 status=ok
// SIG undefined FUN_1434f9260(void)

void FUN_1434f9260(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar3 = FUN_1434f5ac0();
  if (lVar3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x7df,uVar2);
    FUN_1435cbef0(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    FUN_14331e2e0(lVar3,param_3,param_4);
  }
  return;
}



// FUNCTION 1434f92f0 FUN_1434f92f0 body=192 status=ok
// SIG undefined FUN_1434f92f0(void)

void FUN_1434f92f0(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  undefined4 local_18 [2];
  longlong local_10;
  
  plVar2 = (longlong *)FUN_1434f5ac0();
  if (plVar2 == (longlong *)0x0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x7df,uVar1);
    FUN_1435cbef0(uVar1,uVar3);
    piVar5 = (int *)(local_10 + 0x18);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      FUN_14335f920();
    }
  }
  else if (-1 < param_4) {
    lVar4 = (**(code **)(*plVar2 + 0x28))(plVar2,local_18);
    if ((param_4 < *(int *)(lVar4 + 4)) && (-1 < param_3)) {
      piVar5 = (int *)(**(code **)(*plVar2 + 0x28))(plVar2,local_18);
      if (param_3 < *piVar5) {
        local_18[0] = param_5;
        FUN_14331e480(plVar2,param_3,param_4,local_18);
      }
    }
  }
  return;
}



// FUNCTION 1434f93c0 FUN_1434f93c0 body=192 status=ok
// SIG undefined FUN_1434f93c0(void)

void FUN_1434f93c0(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  undefined4 local_18 [2];
  longlong local_10;
  
  plVar2 = (longlong *)FUN_1434f5ac0();
  if (plVar2 == (longlong *)0x0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x7df,uVar1);
    FUN_1435cbef0(uVar1,uVar3);
    piVar5 = (int *)(local_10 + 0x18);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      FUN_14335f920();
    }
  }
  else if (-1 < param_4) {
    lVar4 = (**(code **)(*plVar2 + 0x28))(plVar2,local_18);
    if ((param_4 < *(int *)(lVar4 + 4)) && (-1 < param_3)) {
      piVar5 = (int *)(**(code **)(*plVar2 + 0x28))(plVar2,local_18);
      if (param_3 < *piVar5) {
        local_18[0] = param_5;
        FUN_14331e5f0(plVar2,param_3,param_4,local_18);
      }
    }
  }
  return;
}



// FUNCTION 1434f9490 FUN_1434f9490 body=276 status=ok
// SIG undefined FUN_1434f9490(void)

void FUN_1434f9490(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  undefined **local_18;
  longlong local_10;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    uVar5 = 0x7d7;
  }
  else {
    local_18 = &PTR_FUN_145b23990;
    local_10 = param_4;
    lVar3 = FUN_1434f5ac0();
    if (lVar3 != 0) {
      local_28 = (int)*(double *)(param_3 + 0x50);
      local_24 = (int)*(double *)(param_3 + 0x58);
      local_20 = (int)(*(double *)(param_3 + 0x50) + *(double *)(param_3 + 0x48));
      iStack_1c = (int)(*(double *)(param_3 + 0x58) + *(double *)(param_3 + 0x40));
      cVar2 = FUN_14331e760(lVar3,&local_28,&local_18);
      if (cVar2 != '\0') {
        return;
      }
      if (*(uint *)(local_10 + 0x48) <= *(uint *)(param_4 + 0x48)) {
        return;
      }
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
      uVar4 = FUN_1435c8e40(&local_28,0x7ee,uVar5);
      FUN_1435cbdb0(uVar5,uVar4);
      goto LAB_1434f9584;
    }
    lVar3 = *(longlong *)(param_1 + 0x28);
    uVar5 = 0x7df;
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x98);
  uVar5 = FUN_1435c8e40(&local_28,uVar5,uVar4);
  FUN_1435cbef0(uVar4,uVar5);
LAB_1434f9584:
  piVar1 = (int *)(CONCAT44(iStack_1c,local_20) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434f95b0 FUN_1434f95b0 body=309 status=ok
// SIG undefined FUN_1434f95b0(void)

void FUN_1434f95b0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint local_res18 [4];
  uint local_38 [2];
  int local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  undefined **local_20;
  undefined4 local_18;
  longlong local_10;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    uVar5 = 0x7d7;
  }
  else {
    local_18 = 0;
    local_20 = &PTR_FUN_145b239b0;
    local_10 = param_4;
    lVar3 = FUN_1434f5ac0();
    if (lVar3 != 0) {
      local_30 = (int)*(double *)(param_3 + 0x50);
      local_2c = (int)*(double *)(param_3 + 0x58);
      local_28 = (int)(*(double *)(param_3 + 0x50) + *(double *)(param_3 + 0x48));
      iStack_24 = (int)(*(double *)(param_3 + 0x58) + *(double *)(param_3 + 0x40));
      cVar2 = FUN_14331e760(lVar3,&local_30,&local_20);
      if (cVar2 != '\0') {
        return;
      }
      Scaleform::GFx::AS3::Instances::fl_events::MouseEvent::deltaGet(param_4,local_res18);
      Scaleform::GFx::AS3::Instances::fl_events::MouseEvent::deltaGet(local_10,local_38);
      if (local_38[0] <= local_res18[0]) {
        return;
      }
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
      uVar4 = FUN_1435c8e40(&local_30,0x5e2,uVar5);
      FUN_1435cbdb0(uVar5,uVar4);
      goto LAB_1434f96c5;
    }
    lVar3 = *(longlong *)(param_1 + 0x28);
    uVar5 = 0x7df;
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x98);
  uVar5 = FUN_1435c8e40(&local_30,uVar5,uVar4);
  FUN_1435cbef0(uVar4,uVar5);
LAB_1434f96c5:
  piVar1 = (int *)(CONCAT44(iStack_24,local_28) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434f96f0 FUN_1434f96f0 body=917 status=ok
// SIG undefined FUN_1434f96f0(void)

void FUN_1434f96f0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 local_res18 [4];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int iStack_44;
  
  if (4 < param_3) {
    local_res18[0] = 0;
    local_58 = *(longlong *)(param_4 + 0x50);
    lVar13 = *(longlong *)(param_4 + 0x10);
    local_50 = *(longlong *)(param_4 + 0x30);
    if (((lVar13 == 0) || (local_50 == 0)) || (local_58 == 0)) {
      uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
      uVar10 = FUN_1435c8e40(&local_50,0x7d7,uVar6);
      FUN_1435cbef0(uVar6,uVar10);
      piVar1 = (int *)(CONCAT44(iStack_44,local_48) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    else {
      puVar7 = *(undefined8 **)(param_4 + 0x70);
      *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
      pcVar11 = (char *)*puVar7;
      if (((*pcVar11 == '<') && (pcVar11[1] == '=')) && (pcVar11[2] == '\0')) {
        uVar9 = 1;
      }
      else if ((*pcVar11 == '<') && (pcVar11[1] == '\0')) {
        uVar9 = 0;
      }
      else if ((*pcVar11 == '>') && (pcVar11[1] == '\0')) {
        uVar9 = 2;
      }
      else if (((*pcVar11 == '>') && (pcVar11[1] == '=')) && (pcVar11[2] == '\0')) {
        uVar9 = 3;
      }
      else if (((*pcVar11 == '!') && (pcVar11[1] == '=')) && (pcVar11[2] == '\0')) {
        uVar9 = 5;
      }
      else {
        if (((*pcVar11 != '=') || (pcVar11[1] != '=')) || (pcVar11[2] != '\0')) {
          uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
          uVar10 = FUN_1435c8e40(&local_50,0x5e4,uVar6);
          FUN_1435cbef0(uVar6,uVar10);
          piVar1 = (int *)(CONCAT44(iStack_44,local_48) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          piVar1 = (int *)(puVar7 + 3);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 != 0) {
            return;
          }
          FUN_14335f920(puVar7);
          return;
        }
        uVar9 = 4;
      }
      local_64 = 0;
      local_68 = 0xffffffff;
      uVar8 = 1;
      pcVar11 = (char *)FUN_143590eb0(param_4 + 0x80,local_res18,local_60);
      if (((*pcVar11 != '\0') &&
          ((param_3 < 6 ||
           (pcVar11 = (char *)FUN_143590eb0(param_4 + 0xa0,local_res18,&local_64), *pcVar11 != '\0')
           ))) && ((param_3 < 7 ||
                   (pcVar11 = (char *)FUN_143590eb0(param_4 + 0xc0,local_res18,&local_68),
                   *pcVar11 != '\0')))) {
        if (7 < param_3) {
          uVar8 = FUN_1435909c0(param_4 + 0xe0);
        }
        lVar12 = FUN_1434f5ac0(param_1);
        lVar13 = FUN_1434f5ac0(lVar13);
        if ((lVar12 == 0) || (lVar13 == 0)) {
          uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
          uVar10 = FUN_1435c8e40(&local_50,0x7df,uVar6);
          FUN_1435cbef0(uVar6,uVar10);
          piVar1 = (int *)(CONCAT44(iStack_44,local_48) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          pdVar2 = (double *)(local_50 + 0x58);
          pdVar3 = (double *)(local_50 + 0x50);
          local_58 = CONCAT44((int)*(double *)(local_58 + 0x48),(int)*(double *)(local_58 + 0x40));
          pdVar4 = (double *)(local_50 + 0x40);
          pdVar5 = (double *)(local_50 + 0x48);
          local_50 = CONCAT44((int)*pdVar2,(int)*pdVar3);
          local_48 = (int)(*pdVar3 + *pdVar5);
          iStack_44 = (int)(*pdVar2 + *pdVar4);
          uVar9 = FUN_14331e920(lVar12,lVar13,&local_50,&local_58,uVar9,local_60[0],local_64,
                                local_68,uVar8);
          FUN_143515480(param_2,uVar9);
        }
      }
      piVar1 = (int *)(puVar7 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(puVar7);
      }
    }
  }
  return;
}



// FUNCTION 1434f9aa0 FUN_1434f9aa0 body=30 status=ok
// SIG undefined FUN_1434f9aa0(void)

undefined8 * FUN_1434f9aa0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434f6120();
  return param_2;
}



// FUNCTION 1434f9ad0 FUN_1434f9ad0 body=30 status=ok
// SIG undefined FUN_1434f9ad0(void)

undefined8 * FUN_1434f9ad0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434f7570();
  return param_2;
}



// FUNCTION 1434f9b00 FUN_1434f9b00 body=39 status=ok
// SIG undefined FUN_1434f9b00(void)

undefined8 * FUN_1434f9b00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434f7880();
  return param_2;
}



// FUNCTION 1434f9b30 FUN_1434f9b30 body=30 status=ok
// SIG undefined FUN_1434f9b30(void)

undefined8 * FUN_1434f9b30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434f7b70();
  return param_2;
}



// FUNCTION 1434f9b60 FUN_1434f9b60 body=30 status=ok
// SIG undefined FUN_1434f9b60(void)

undefined8 * FUN_1434f9b60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434f7cf0();
  return param_2;
}



// FUNCTION 1434f9b90 FUN_1434f9b90 body=33 status=ok
// SIG undefined FUN_1434f9b90(void)

undefined8 * FUN_1434f9b90(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b23568;
  return param_1;
}



// FUNCTION 1434f9bc0 FUN_1434f9bc0 body=191 status=ok
// SIG undefined FUN_1434f9bc0(void)

void FUN_1434f9bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b234a8;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined1 *)(puVar1 + 0xc) = 1;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
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



// FUNCTION 1434f9c90 FUN_1434f9c90 body=33 status=ok
// SIG undefined FUN_1434f9c90(void)

undefined8 * FUN_1434f9c90(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434f9cc0 FUN_1434f9cc0 body=214 status=ok
// SIG undefined FUN_1434f9cc0(void)

undefined8 * FUN_1434f9cc0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b20348);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b20348);
    *puVar2 = &PTR_FUN_145b23568;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1434f9da0 FUN_1434f9da0 body=55 status=ok
// SIG undefined FUN_1434f9da0(void)

undefined8 * FUN_1434f9da0(undefined8 *param_1)

{
  FUN_1434f20e0();
  *param_1 = &PTR_ForEachChild_GC_145b235e0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 1;
  return param_1;
}



// FUNCTION 1434f9de0 ForEachChild_GC body=81 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Instances::fl_display::Bitmap::ForEachChild_GC
               (longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435195d0();
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (*param_3)(param_2);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    (*param_3)(param_2);
  }
  return;
}



// FUNCTION 1434f9e50 FUN_1434f9e50 body=675 status=ok
// SIG undefined FUN_1434f9e50(void)

undefined8 FUN_1434f9e50(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  RefCountNTSImpl *this;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 local_res8 [2];
  ulonglong local_res10;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar14;
  undefined8 local_88;
  undefined8 local_80;
  longlong *plStack_78;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined4 local_58;
  uint local_48 [8];
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  if (*(longlong *)(param_1 + 0x88) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar12 = *(longlong *)(lVar2 + 0x300);
    lVar7 = FUN_1435e8f40(lVar2,param_1);
    if (lVar7 == 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x88);
    }
    else {
      lVar10 = 0;
      local_88 = 0;
      local_80 = 0;
      plStack_78 = (longlong *)0x0;
      cVar5 = FUN_1434f2330(param_1,&local_88,lVar7,1);
      if ((cVar5 == '\0') && (cVar5 = FUN_1435f30c0(lVar12,param_1,&local_88), cVar5 == '\0')) {
        local_88 = 0;
        plStack_78 = (longlong *)0x0;
      }
      puVar9 = local_res8;
      local_res8[0] = 0x40000;
      this = (RefCountNTSImpl *)
             (**(code **)(**(longlong **)(lVar12 + 0x18) + 0x20))
                       (*(longlong **)(lVar12 + 0x18),*(undefined8 *)(lVar12 + 0x10),&local_88,0,
                        puVar9,CONCAT44(uVar14,8));
      uVar14 = (undefined4)((ulonglong)puVar9 >> 0x20);
      if (this != (RefCountNTSImpl *)0x0) {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      if (*(RefCountNTSImpl **)(param_1 + 0x88) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x88));
      }
      *(RefCountNTSImpl **)(param_1 + 0x88) = this;
      if (this != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(this);
      }
      lVar12 = *(longlong *)(param_1 + 0x88);
      if (lVar12 != 0) {
        lVar10 = lVar12 + (ulonglong)*(byte *)(lVar12 + 0x6d) * 4;
      }
      FUN_1435e0fb0(lVar10,param_1);
      uVar8 = FUN_1435b5230(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(lVar10 + 0x28) = uVar8;
      if ((plStack_78 == (longlong *)0x0) ||
         (uVar6 = (**(code **)(*plStack_78 + 0x10))(), plVar4 = plStack_78,
         (uVar6 & 0xff00) != 0x100)) {
        uVar8 = *(undefined8 *)(param_1 + 0x88);
      }
      else {
        plVar3 = (longlong *)plStack_78[3];
        uVar13 = 0;
        local_58 = uVar13;
        if (plVar3 != (longlong *)0x0) {
          puVar9 = (undefined4 *)(**(code **)(*plVar3 + 0x28))(plVar3,local_res8);
          local_58 = *puVar9;
        }
        lVar12 = 2;
        local_60 = 0;
        local_68[0] = 2;
        plVar4 = (longlong *)plVar4[3];
        if (plVar4 != (longlong *)0x0) {
          lVar7 = (**(code **)(*plVar4 + 0x28))(plVar4,local_res8);
          uVar13 = *(undefined4 *)(lVar7 + 4);
        }
        local_48[0] = 2;
        local_48[2] = 0;
        local_48[3] = 0;
        local_res10 = 0;
        local_48[4] = uVar13;
        FUN_1435ccdc0(lVar2,local_res8,&local_res10,"flash.display.BitmapData",CONCAT44(uVar14,2),
                      local_68);
        if (((char)local_res8[0] != '\0') &&
           (cVar5 = FUN_1434f5d50(local_res10,plStack_78,local_80), cVar5 != '\0')) {
          FUN_1435167a0(param_1,local_res10);
        }
        if (local_res10 != 0) {
          if ((local_res10 & 1) == 0) {
            if ((*(uint *)(local_res10 + 8) & 0x3fffff) != 0) {
              *(uint *)(local_res10 + 8) = *(uint *)(local_res10 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            local_res10 = local_res10 - 1;
          }
        }
        puVar11 = &stack0xffffffffffffffd8;
        do {
          puVar1 = (uint *)(puVar11 + -0x20);
          puVar11 = puVar11 + -0x20;
          lVar12 = lVar12 + -1;
          if (9 < ((byte)*puVar1 & 0x1f)) {
            if ((*puVar1 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar11);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar12 != 0);
        uVar8 = *(undefined8 *)(param_1 + 0x88);
      }
    }
    return uVar8;
  }
  return *(undefined8 *)(param_1 + 0x88);
}



// FUNCTION 1434fa100 FUN_1434fa100 body=216 status=ok
// SIG undefined FUN_1434fa100(void)

int FUN_1434fa100(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar4 = 0;
  lVar5 = lVar4;
  do {
    lVar7 = lVar5 + 1;
    lVar3 = lVar4;
    if (*(char *)(param_2 + lVar5) != "never"[lVar5]) {
      do {
        lVar5 = lVar3;
        if (*(char *)(param_2 + lVar5) != (&DAT_145b238a4)[lVar5]) {
          do {
            lVar5 = lVar4 + 1;
            if (*(char *)(param_2 + lVar4) != (&DAT_145b238ac)[lVar4]) {
              uVar2 = *(undefined8 *)(param_1 + 0x40);
              uVar6 = FUN_1435c8e40(local_18,0x7d8,uVar2);
              FUN_1435cbef0(uVar2,uVar6);
              piVar1 = (int *)(local_10 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920();
              }
              return 0;
            }
            lVar4 = lVar5;
          } while (lVar5 != 5);
          return 2;
        }
        lVar3 = lVar5 + 1;
      } while (lVar5 + 1 != 7);
      return (int)lVar5 + -5;
    }
    lVar5 = lVar7;
  } while (lVar7 != 6);
  return 0;
}



// FUNCTION 1434fa200 FUN_1434fa200 body=19 status=ok
// SIG undefined FUN_1434fa200(void)

longlong FUN_1434fa200(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 auStackX_8 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(lVar1 + 0x40);
  if (lVar2 == 0) {
    if (*(longlong *)(lVar1 + 0x48) == 0) {
      FUN_1434f5ac0();
    }
    if (*(longlong *)(lVar1 + 0x48) != 0) {
      auStackX_8[0] = 2;
      lVar2 = (**(code **)(*DAT_146b62f28 + 0x70))
                        (DAT_146b62f28,*(longlong *)(lVar1 + 0x48),0x68,auStackX_8);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = FUN_143514e40(lVar2,*(undefined8 *)(lVar1 + 0x48),1);
      }
      if (*(longlong *)(lVar1 + 0x40) != 0) {
        FUN_1432de450();
      }
      *(longlong *)(lVar1 + 0x40) = lVar2;
      return lVar2;
    }
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1434fa220 FUN_1434fa220 body=280 status=ok
// SIG undefined FUN_1434fa220(void)

void FUN_1434fa220(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 local_res10 [16];
  undefined8 *local_res20;
  
  if (param_2 != 0) {
    cVar3 = FUN_1435c8b00(*(longlong *)(param_1 + 0x40),param_3,"flash.display.BitmapData",
                          *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x1c8));
    if (cVar3 != '\0') {
      FUN_1434f0700(param_1 + 0x98,*(undefined8 *)(param_3 + 0x10));
      if (*(longlong *)(param_1 + 0x88) != 0) {
        uVar7 = 0;
        if (*(longlong *)(param_1 + 0x98) != 0) {
          uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x50);
        }
        Scaleform::GFx::AS3::AvmBitmap::SetResourceMovieDef(*(longlong *)(param_1 + 0x88),uVar7);
      }
    }
    if (1 < param_2) {
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218);
      local_res20 = (undefined8 *)(lVar2 + 0x48);
      piVar1 = (int *)(lVar2 + 0x60);
      *piVar1 = *piVar1 + 1;
      pcVar6 = (char *)FUN_1435911f0(param_3 + 0x20,local_res10,&local_res20);
      if (*pcVar6 == '\0') {
        piVar1 = (int *)(local_res20 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return;
        }
        FUN_14335f920();
        return;
      }
      uVar5 = FUN_1434fa100(param_1,*local_res20);
      *(undefined4 *)(param_1 + 0xa0) = uVar5;
      if (2 < param_2) {
        uVar4 = FUN_1435909c0(param_3 + 0x40);
        *(undefined1 *)(param_1 + 0xa4) = uVar4;
      }
      piVar1 = (int *)(local_res20 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    if (*(longlong *)(param_1 + 0x88) != 0) {
      FUN_1435e3020();
    }
  }
  return;
}



// FUNCTION 1434fa360 bitmapDataSet body=89 status=ok
// SIG undefined bitmapDataSet(void)

void Scaleform::GFx::AS3::Instances::fl_display::Bitmap::bitmapDataSet
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_1434f0700(param_1 + 0x98,param_3);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    uVar1 = 0;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x50);
    }
    AvmBitmap::SetResourceMovieDef(*(longlong *)(param_1 + 0x88),uVar1);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1435e3020();
  }
  return;
}



// FUNCTION 1434fa410 pixelSnappingSet body=54 status=ok
// SIG undefined pixelSnappingSet(void)

void Scaleform::GFx::AS3::Instances::fl_display::Bitmap::pixelSnappingSet
               (longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1434fa100(param_1,*(undefined8 *)*param_3);
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1435e3020();
    return;
  }
  return;
}



// FUNCTION 1434fa480 FUN_1434fa480 body=40 status=ok
// SIG undefined FUN_1434fa480(void)

undefined8 * FUN_1434fa480(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434f0700(param_2,*(undefined8 *)(param_1 + 0x98));
  return param_2;
}



// FUNCTION 1434fa4b0 FUN_1434fa4b0 body=43 status=ok
// SIG undefined FUN_1434fa4b0(void)

undefined8 * FUN_1434fa4b0(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *(undefined4 *)(param_1 + 0x12) = 0x1d;
  *param_1 = &PTR_FUN_145b236b8;
  return param_1;
}



// FUNCTION 1434fa4f0 FUN_1434fa4f0 body=188 status=ok
// SIG undefined FUN_1434fa4f0(void)

void FUN_1434fa4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1434f20e0(puVar1,param_3);
    *puVar1 = &PTR_ForEachChild_GC_145b235e0;
    puVar1[0x13] = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xa4) = 1;
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



// FUNCTION 1434fa5c0 FUN_1434fa5c0 body=43 status=ok
// SIG undefined FUN_1434fa5c0(void)

undefined8 * FUN_1434fa5c0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *(undefined4 *)(param_1 + 0x12) = 0x1d;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434fa600 FUN_1434fa600 body=234 status=ok
// SIG undefined FUN_1434fa600(void)

undefined8 * FUN_1434fa600(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1e1f8);
    *(undefined4 *)(puVar2 + 0x12) = 0x1d;
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b1e1f8);
    *(undefined4 *)(puVar2 + 0x12) = 0x1d;
    *puVar2 = &PTR_FUN_145b236b8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1434fa6f0 FUN_1434fa6f0 body=44 status=ok
// SIG undefined FUN_1434fa6f0(void)

undefined8 * FUN_1434fa6f0(undefined8 *param_1)

{
  FUN_1434f20e0();
  *param_1 = &PTR_ForEachChild_GC_145b23730;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 1434fa730 ForEachChild_GC body=81 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Instances::fl_display::Bitmap::ForEachChild_GC
               (longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435195d0();
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (*param_3)(param_2);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    (*param_3)(param_2);
  }
  return;
}



// FUNCTION 1434fa790 FUN_1434fa790 body=93 status=ok
// SIG undefined FUN_1434fa790(void)

void FUN_1434fa790(undefined8 *param_1)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_ForEachChild_GC_145b23730;
  uVar1 = param_1[0x13];
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      param_1[0x13] = uVar1 - 1;
      FUN_1434f21b0(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1434f21b0(param_1);
  return;
}



// FUNCTION 1434fa800 FUN_1434fa800 body=61 status=ok
// SIG undefined FUN_1434fa800(void)

void FUN_1434fa800(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = FUN_1435c8e40(local_18,0x7dc,uVar2);
  FUN_1435cbef0(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434fa850 FUN_1434fa850 body=120 status=ok
// SIG undefined FUN_1434fa850(void)

void FUN_1434fa850(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0x98);
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 1434fa8d0 FUN_1434fa8d0 body=141 status=ok
// SIG undefined FUN_1434fa8d0(void)

void FUN_1434fa8d0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (((byte)*param_3 & 0x1f) == 0xc) {
    lVar3 = FUN_1435caba0(*(undefined8 *)(param_1 + 0x40),param_3);
    if ((~(*(byte *)(lVar3 + 0x88) >> 5) & 1) != 0) {
      FUN_1434f0700(param_1 + 0x98,*(undefined8 *)(param_3 + 4));
      return;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = FUN_1435c8e40(local_18,0x40a,uVar2);
  FUN_1435cbe70(uVar2,uVar4);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434fa970 FUN_1434fa970 body=90 status=ok
// SIG undefined FUN_1434fa970(void)

void FUN_1434fa970(longlong param_1,byte *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  lVar1 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x6a) < '\0') {
    lVar1 = *(longlong *)(param_1 + 0x88);
  }
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*(longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4) + 8))();
    if (lVar1 != 0) {
      lVar2 = lVar1 + -0x38;
    }
  }
  *param_2 = *(byte *)(lVar2 + 0x41) >> 1 & 1;
  return;
}



// FUNCTION 1434fa9d0 FUN_1434fa9d0 body=104 status=ok
// SIG undefined FUN_1434fa9d0(void)

void FUN_1434fa9d0(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  lVar1 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x6a) < '\0') {
    lVar1 = *(longlong *)(param_1 + 0x88);
  }
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*(longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4) + 8))();
    if (lVar1 != 0) {
      lVar2 = lVar1 + -0x38;
    }
  }
  if (param_3 != '\0') {
    *(byte *)(lVar2 + 0x41) = *(byte *)(lVar2 + 0x41) | 2;
    return;
  }
  *(byte *)(lVar2 + 0x41) = *(byte *)(lVar2 + 0x41) & 0xfd;
  return;
}



// FUNCTION 1434faa40 FUN_1434faa40 body=197 status=ok
// SIG undefined FUN_1434faa40(void)

void FUN_1434faa40(longlong param_1,uint *param_2)

{
  uint uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x88) + 0xb8) & 0x60;
  if (uVar1 == 0) {
    if (9 < ((byte)*param_2 & 0x1f)) {
      if ((*param_2 >> 9 & 1) == 0) {
        FUN_1435920c0(param_2);
      }
      else {
        FUN_143592150();
      }
    }
    *param_2 = *param_2 & 0xffffffec;
    *param_2 = *param_2 | 0xc;
    param_2[4] = 0;
    param_2[5] = 0;
    *(undefined8 *)(param_2 + 6) = uStack_10;
    return;
  }
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) != 0) {
      FUN_143592150();
      *param_2 = *param_2 & 0xffffffe1;
      *param_2 = *param_2 | 1;
      local_18 = CONCAT71(local_18._1_7_,uVar1 == 0x60);
      *(undefined8 *)(param_2 + 4) = local_18;
      *(undefined8 *)(param_2 + 6) = uStack_10;
      return;
    }
    FUN_1435920c0(param_2);
  }
  *param_2 = *param_2 & 0xffffffe1;
  *param_2 = *param_2 | 1;
  local_18 = CONCAT71(local_18._1_7_,uVar1 == 0x60);
  *(undefined8 *)(param_2 + 4) = local_18;
  *(undefined8 *)(param_2 + 6) = uStack_10;
  return;
}



// FUNCTION 1434fab10 focusRectSet body=103 status=ok
// SIG undefined focusRectSet(void)

void Scaleform::GFx::AS3::Instances::fl_display::InteractiveObject::focusRectSet
               (longlong param_1,undefined8 param_2,byte *param_3)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  
  if ((*param_3 & 0x1f) == 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x88) + 0xb8);
    *puVar1 = *puVar1 & 0xffffff9f;
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x88);
  cVar3 = FUN_1435909c0(param_3);
  if (cVar3 != '\0') {
    *(uint *)(lVar2 + 0xb8) = *(uint *)(lVar2 + 0xb8) | 0x180;
    return;
  }
  *(uint *)(lVar2 + 0xb8) = *(uint *)(lVar2 + 0xb8) & 0xffffff7f;
  *(uint *)(lVar2 + 0xb8) = *(uint *)(lVar2 + 0xb8) | 0x100;
  return;
}



// FUNCTION 1434fac20 FUN_1434fac20 body=189 status=ok
// SIG undefined FUN_1434fac20(void)

void FUN_1434fac20(longlong param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong local_res8 [3];
  ulonglong local_res20;
  
  lVar2 = *(longlong *)(param_1 + 0x88);
  if (param_3 == '\0') {
    *(uint *)(lVar2 + 0xb8) = *(uint *)(lVar2 + 0xb8) & 0xffffffdf;
    *(uint *)(lVar2 + 0xb8) = *(uint *)(lVar2 + 0xb8) | 0x40;
  }
  else {
    *(uint *)(lVar2 + 0xb8) = *(uint *)(lVar2 + 0xb8) | 0x60;
  }
  local_res8[0] =
       FUN_143360950(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218),
                     "tabEnabledChange",0x10);
  *(int *)(local_res8[0] + 0x18) = *(int *)(local_res8[0] + 0x18) + 1;
  Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::CreateEventObject
            (param_1,&local_res20,local_res8,1,0);
  piVar1 = (int *)(local_res8[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_14351a300(param_1,local_res20,*(undefined8 *)(param_1 + 0x88));
  if (((local_res20 != 0) && ((local_res20 & 1) == 0)) &&
     ((*(uint *)(local_res20 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res20 + 8) = *(uint *)(local_res20 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434fad10 FUN_1434fad10 body=169 status=ok
// SIG undefined FUN_1434fad10(void)

void FUN_1434fad10(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  int *piVar1;
  longlong local_res8 [3];
  ulonglong local_res20;
  
  *(undefined2 *)(*(longlong *)(param_1 + 0x88) + 0xbc) = param_3;
  local_res8[0] =
       FUN_143360950(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218),
                     "tabIndexChange",0xe);
  *(int *)(local_res8[0] + 0x18) = *(int *)(local_res8[0] + 0x18) + 1;
  Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::CreateEventObject
            (param_1,&local_res20,local_res8,1,0);
  piVar1 = (int *)(local_res8[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_14351a300(param_1,local_res20,*(undefined8 *)(param_1 + 0x88));
  if (((local_res20 != 0) && ((local_res20 & 1) == 0)) &&
     ((*(uint *)(local_res20 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res20 + 8) = *(uint *)(local_res20 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434fadc0 FUN_1434fadc0 body=43 status=ok
// SIG undefined FUN_1434fadc0(void)

undefined8 * FUN_1434fadc0(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *(undefined4 *)(param_1 + 0x12) = 0x19;
  *param_1 = &PTR_FUN_145b23808;
  return param_1;
}



// FUNCTION 1434fae00 FUN_1434fae00 body=175 status=ok
// SIG undefined FUN_1434fae00(void)

void FUN_1434fae00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1434f20e0(puVar1,param_3);
    *puVar1 = &PTR_ForEachChild_GC_145b23730;
    puVar1[0x13] = 0;
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



// FUNCTION 1434faec0 FUN_1434faec0 body=43 status=ok
// SIG undefined FUN_1434faec0(void)

undefined8 * FUN_1434faec0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *(undefined4 *)(param_1 + 0x12) = 0x19;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434faf00 FUN_1434faf00 body=234 status=ok
// SIG undefined FUN_1434faf00(void)

undefined8 * FUN_1434faf00(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1e8a0);
    *(undefined4 *)(puVar2 + 0x12) = 0x19;
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b1e8a0);
    *(undefined4 *)(puVar2 + 0x12) = 0x19;
    *puVar2 = &PTR_FUN_145b23808;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1434faff0 FUN_1434faff0 body=33 status=ok
// SIG undefined FUN_1434faff0(void)

undefined8 * FUN_1434faff0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434fb020 FUN_1434fb020 body=215 status=ok
// SIG undefined FUN_1434fb020(void)

undefined8 * FUN_1434fb020(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1c4f0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_1434af920(lVar3,param_2,&PTR_DAT_145b1c4f0);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1434fb100 FUN_1434fb100 body=33 status=ok
// SIG undefined FUN_1434fb100(void)

undefined8 * FUN_1434fb100(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434fb130 FUN_1434fb130 body=216 status=ok
// SIG undefined FUN_1434fb130(void)

undefined8 * FUN_1434fb130(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1c9d0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b1c9d0);
  }
  FUN_1435b8600(*param_1,puVar4);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0xc0,0);
  if (lVar3 != 0) {
    Scaleform::GFx::AS3::Classes::fl_display::BlendMode::BlendMode(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1434fb210 BlendMode body=211 status=ok
// SIG undefined BlendMode(void)

undefined8 * Scaleform::GFx::AS3::Classes::fl_display::BlendMode::BlendMode(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b238b8;
  param_1[10] = &DAT_145b099ec;
  param_1[0xb] = "alpha";
  param_1[0xc] = "darken";
  param_1[0xd] = "difference";
  param_1[0xe] = "erase";
  param_1[0xf] = "hardlight";
  param_1[0x10] = "invert";
  param_1[0x11] = "layer";
  param_1[0x12] = "lighten";
  param_1[0x13] = "multiply";
  param_1[0x14] = "normal";
  param_1[0x15] = "overlay";
  param_1[0x16] = "screen";
  param_1[0x17] = "subtract";
  return param_1;
}



// FUNCTION 1434fb2f0 FUN_1434fb2f0 body=790 status=ok
// SIG undefined FUN_1434fb2f0(void)

longlong FUN_1434fb2f0(undefined8 *param_1)

{
  char *_Str1;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  _Str1 = *(char **)*param_1;
  lVar4 = lVar5;
  while (lVar2 = lVar4 + 1, lVar3 = lVar5, _Str1[lVar4] == "normal"[lVar4]) {
    lVar4 = lVar2;
    if (lVar2 == 7) {
      return 1;
    }
  }
  while (lVar2 = lVar3 + 1, lVar4 = lVar5, _Str1[lVar3] == (&DAT_145b099ec)[lVar3]) {
    lVar3 = lVar2;
    if (lVar2 == 4) {
      return 8;
    }
  }
  while (lVar3 = lVar4 + 1, _Str1[lVar4] == "alpha"[lVar4]) {
    lVar4 = lVar3;
    if (lVar3 == 6) {
      return 0xb;
    }
  }
  iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"multiply");
  if (iVar1 != 0) {
    iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"subtract");
    lVar4 = lVar5;
    if (iVar1 == 0) {
      return 9;
    }
    do {
      lVar2 = lVar4 + 1;
      lVar3 = lVar5;
      if (_Str1[lVar4] != "layer"[lVar4]) {
        do {
          lVar2 = lVar3 + 1;
          lVar4 = lVar5;
          if (_Str1[lVar3] != "screen"[lVar3]) {
            do {
              lVar2 = lVar4 + 1;
              lVar3 = lVar5;
              if (_Str1[lVar4] != "lighten"[lVar4]) {
                do {
                  lVar4 = lVar3 + 1;
                  if (_Str1[lVar3] != "darken"[lVar3]) {
                    iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"difference");
                    lVar4 = lVar5;
                    if (iVar1 == 0) {
                      return 7;
                    }
                    do {
                      lVar2 = lVar4 + 1;
                      lVar3 = lVar5;
                      if (_Str1[lVar4] != "invert"[lVar4]) {
                        do {
                          lVar2 = lVar3 + 1;
                          lVar4 = lVar5;
                          if (_Str1[lVar3] != "erase"[lVar3]) {
                            do {
                              lVar3 = lVar4 + 1;
                              if (_Str1[lVar4] != "overlay"[lVar4]) {
                                iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,"hardlight");
                                if (iVar1 == 0) {
                                  lVar5 = 0xe;
                                }
                                return lVar5;
                              }
                              lVar4 = lVar3;
                            } while (lVar3 != 8);
                            return 0xd;
                          }
                          lVar3 = lVar2;
                        } while (lVar2 != 6);
                        return 0xc;
                      }
                      lVar4 = lVar2;
                    } while (lVar2 != 7);
                    return 10;
                  }
                  lVar3 = lVar4;
                } while (lVar4 != 7);
                return 6;
              }
              lVar4 = lVar2;
            } while (lVar2 != 8);
            return 5;
          }
          lVar3 = lVar2;
        } while (lVar2 != 7);
        return 4;
      }
      lVar4 = lVar2;
    } while (lVar2 != 6);
    return 2;
  }
  return 3;
}



// FUNCTION 1434fb610 FUN_1434fb610 body=33 status=ok
// SIG undefined FUN_1434fb610(void)

undefined8 * FUN_1434fb610(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434fb640 FUN_1434fb640 body=256 status=ok
// SIG undefined FUN_1434fb640(void)

undefined8 * FUN_1434fb640(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1e288);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b1e288);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *(undefined4 *)(puVar5 + 10) = 8;
    *puVar5 = &PTR_ForEachChild_GC_145b23ad8;
    *(undefined4 *)((longlong)puVar5 + 0x54) = 4;
    *(undefined4 *)(puVar5 + 0xb) = 2;
    *(undefined4 *)((longlong)puVar5 + 0x5c) = 1;
  }
  return param_1;
}



// FUNCTION 1434fb750 FUN_1434fb750 body=61 status=ok
// SIG undefined FUN_1434fb750(void)

undefined8 * FUN_1434fb750(undefined8 *param_1)

{
  FUN_1435b37d0();
  *(undefined4 *)(param_1 + 10) = 8;
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  *(undefined4 *)((longlong)param_1 + 0x54) = 4;
  *(undefined4 *)(param_1 + 0xb) = 2;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 1;
  return param_1;
}



// FUNCTION 1434fb7a0 FUN_1434fb7a0 body=33 status=ok
// SIG undefined FUN_1434fb7a0(void)

undefined8 * FUN_1434fb7a0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434fb7d0 FUN_1434fb7d0 body=261 status=ok
// SIG undefined FUN_1434fb7d0(void)

undefined8 * FUN_1434fb7d0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1f6b8);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b1f6b8);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23bb0;
    puVar5[10] = &DAT_145b122f4;
    puVar5[0xb] = "round";
    puVar5[0xc] = "square";
  }
  return param_1;
}



// FUNCTION 1434fb8e0 FUN_1434fb8e0 body=66 status=ok
// SIG undefined FUN_1434fb8e0(void)

undefined8 * FUN_1434fb8e0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23bb0;
  param_1[10] = &DAT_145b122f4;
  param_1[0xb] = "round";
  param_1[0xc] = "square";
  return param_1;
}



// FUNCTION 1434fb930 FOpusAudioInfo body=44 status=ok
// SIG undefined FOpusAudioInfo(void)

undefined8 * FOpusAudioInfo::FOpusAudioInfo(undefined8 *param_1)

{
  FUN_1434f20e0();
  param_1[0x13] = 0;
  *param_1 = &PTR_FUN_145b23c88;
  return param_1;
}



// FUNCTION 1434fb970 FUN_1434fb970 body=93 status=ok
// SIG undefined FUN_1434fb970(void)

void FUN_1434fb970(undefined8 *param_1)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_ForEachChild_GC_145b23730;
  uVar1 = param_1[0x13];
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      param_1[0x13] = uVar1 - 1;
      FUN_1434f21b0(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1434f21b0(param_1);
  return;
}



// FUNCTION 1434fb9e0 FUN_1434fb9e0 body=238 status=ok
// SIG undefined FUN_1434fb9e0(void)

void FUN_1434fb9e0(longlong param_1,longlong param_2,code *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  FUN_1435195d0();
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (*param_3)(param_2);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    (*param_3)(param_2);
  }
  lVar3 = *(longlong *)(param_1 + 0x88);
  if (lVar3 != 0) {
    uVar6 = 0;
    uVar2 = *(uint *)(lVar3 + 0xe0);
    if (uVar2 != 0) {
      do {
        lVar4 = Scaleform::GFx::DisplayObjContainer::GetChildAt(lVar3,uVar6);
        lVar5 = 0;
        if ((*(byte *)(lVar4 + 0x6b) & 1) != 0) {
          lVar5 = lVar4;
        }
        if ((((lVar5 != 0) &&
             (plVar1 = (longlong *)(lVar5 + ((ulonglong)*(byte *)(lVar5 + 0x6d) + 2) * 4),
             plVar1 != (longlong *)0x0)) &&
            (((*(byte *)(param_2 + 0x94) & 4) != 0 ||
             ((param_3 != (code *)&LAB_143516090 && (param_3 != FUN_1435162d0)))))) &&
           (*plVar1 != 0)) {
          (*param_3)(param_2);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar2);
    }
  }
  return;
}



// FUNCTION 1434fbae0 FUN_1434fbae0 body=61 status=ok
// SIG undefined FUN_1434fbae0(void)

void FUN_1434fbae0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = FUN_1435c8e40(local_18,0x7dc,uVar2);
  FUN_1435cbef0(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434fbbc0 FUN_1434fbbc0 body=188 status=ok
// SIG undefined FUN_1434fbbc0(void)

void FUN_1434fbbc0(longlong param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  longlong local_res8 [3];
  ulonglong local_res20;
  
  if (param_3 == '\0') {
    puVar2 = (uint *)(*(longlong *)(param_1 + 0x88) + 0xb8);
    *puVar2 = *puVar2 | 0x8000;
  }
  else {
    puVar2 = (uint *)(*(longlong *)(param_1 + 0x88) + 0xb8);
    *puVar2 = *puVar2 & 0xffff7fff;
  }
  local_res8[0] =
       FUN_143360950(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218),
                     "tabChildrenChange",0x11);
  *(int *)(local_res8[0] + 0x18) = *(int *)(local_res8[0] + 0x18) + 1;
  Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::CreateEventObject
            (param_1,&local_res20,local_res8,1,0);
  piVar1 = (int *)(local_res8[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_14351a300(param_1,local_res20,*(undefined8 *)(param_1 + 0x88));
  if (((local_res20 != 0) && ((local_res20 & 1) == 0)) &&
     ((*(uint *)(local_res20 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res20 + 8) = *(uint *)(local_res20 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434fbc90 FUN_1434fbc90 body=323 status=ok
// SIG undefined FUN_1434fbc90(void)

void FUN_1434fbc90(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong local_res8;
  char *local_18;
  undefined8 local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  local_res8 = 0;
  local_18 = "flash.text.TextSnapshot";
  local_10 = 0x17;
  uVar3 = FUN_1435cc580(lVar1,&local_18,*(undefined8 *)(lVar1 + 0x1c8));
  if (uVar3 != 0) {
    *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
  }
  FUN_1435e8720(lVar1,&local_res8,uVar3,0,0);
  FUN_1433845a0(*(undefined8 *)(param_1 + 0x88),local_res8 + 0x40);
  if (&local_res8 != param_2) {
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) == 0) {
        if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
          FUN_1434ef880(uVar2);
        }
      }
      else {
        *param_2 = uVar2 - 1;
      }
    }
    *param_2 = local_res8;
  }
  if (((uVar3 != 0) && ((uVar3 & 1) == 0)) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
    FUN_1434ef880(uVar3);
  }
  if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434fbde0 FUN_1434fbde0 body=269 status=ok
// SIG undefined FUN_1434fbde0(void)

void FUN_1434fbde0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == (longlong *)0x0) {
    lVar4 = param_1[8];
    uVar3 = FUN_1435c8e40(local_18,0x7d7,lVar4);
    FUN_1435cbe70(lVar4,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  if (param_3 != param_1) {
    lVar4 = param_1[0x11];
    if (param_3[0x11] == 0) {
      (**(code **)(*param_3 + 0xd0))(param_3);
    }
    lVar2 = param_3[0x11];
    if ((lVar4 == 0) ||
       (lVar4 = (**(code **)(*(longlong *)(lVar4 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4) + 0x28))
                          (lVar4 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4), lVar4 == 0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar4 + -0x48;
    }
    FUN_1435e4720(lVar4,lVar2);
    FUN_1434f0700(param_2,param_3);
    return;
  }
  lVar4 = param_1[8];
  uVar3 = FUN_1435c8e40(local_18,0x7e8,lVar4);
  FUN_1435cbef0(lVar4,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return;
  }
  FUN_14335f920();
  return;
}



// FUNCTION 1434fbf00 FUN_1434fbf00 body=371 status=ok
// SIG undefined FUN_1434fbf00(void)

void FUN_1434fbf00(longlong *param_1,ulonglong *param_2,longlong *param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == (longlong *)0x0) {
    lVar2 = param_1[8];
    uVar5 = FUN_1435c8e40(local_18,0x7d7,lVar2);
    FUN_1435cbe70(lVar2,uVar5);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else if (param_3 == param_1) {
    lVar2 = param_1[8];
    uVar5 = FUN_1435c8e40(local_18,0x7e8,lVar2);
    FUN_1435cbef0(lVar2,uVar5);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    lVar2 = param_1[0x11];
    if (param_3[0x11] == 0) {
      (**(code **)(*param_3 + 0xd0))(param_3);
    }
    uVar3 = *param_2;
    if (uVar3 != 0) {
      if ((uVar3 & 1) == 0) {
        if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar3 - 1;
      }
      *param_2 = 0;
    }
    if ((param_4 < 0) || (*(int *)(lVar2 + 0xe0) < param_4)) {
      lVar2 = param_1[8];
      uVar5 = FUN_1435c8e40(local_18,0x7d6,lVar2);
      FUN_1435cbdf0(lVar2,uVar5);
      piVar1 = (int *)(local_10 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    else {
      lVar4 = param_3[0x11];
      uVar5 = FUN_143516900(lVar2);
      FUN_1435e48b0(uVar5,lVar4,param_4);
      FUN_1434f0700(param_2,param_3);
    }
  }
  return;
}



// FUNCTION 1434fc0b0 FUN_1434fc0b0 body=96 status=ok
// SIG undefined FUN_1434fc0b0(void)

void FUN_1434fc0b0(longlong param_1,undefined1 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = FUN_1435c8e40(local_18,0x7d7,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    uVar4 = FUN_14336f3f0(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_3 + 0x88));
    *param_2 = uVar4;
  }
  return;
}



// FUNCTION 1434fc120 FUN_1434fc120 body=259 status=ok
// SIG undefined FUN_1434fc120(void)

void FUN_1434fc120(longlong param_1,ulonglong *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar4 = *(longlong *)(param_1 + 0x88);
  if ((lVar4 == 0) ||
     (lVar4 = (**(code **)(*(longlong *)(lVar4 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4) + 0x28))
                        (lVar4 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4), lVar4 == 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar4 + -0x48;
  }
  FUN_1435e4ea0(lVar4,&local_res8,param_3);
  if (local_res8 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = FUN_1435c8e40(local_18,0x7d6,uVar2);
    FUN_1435cbdf0(uVar2,uVar5);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else if (&local_res8 != param_2) {
    *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) & 0x8fffffff;
    uVar3 = *param_2;
    if (uVar3 != 0) {
      if ((uVar3 & 1) == 0) {
        if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar3 - 1;
      }
    }
    *param_2 = local_res8;
  }
  if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434fc230 FUN_1434fc230 body=256 status=ok
// SIG undefined FUN_1434fc230(void)

void FUN_1434fc230(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x88);
  if ((lVar2 == 0) ||
     (lVar2 = (**(code **)(*(longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4) + 0x28))
                        (lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4), lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar2 + -0x48;
  }
  FUN_1435e4f30(lVar2,&local_res8,param_3);
  if (local_res8 == 0) {
    uVar1 = *param_2;
    if (uVar1 == 0) {
      return;
    }
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880(uVar1);
      }
      *param_2 = 0;
    }
    else {
      *param_2 = uVar1 - 1;
      *param_2 = 0;
    }
  }
  else if (&local_res8 != param_2) {
    *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) & 0x8fffffff;
    uVar1 = *param_2;
    if (uVar1 != 0) {
      if ((uVar1 & 1) == 0) {
        if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar1 - 1;
      }
    }
    *param_2 = local_res8;
  }
  if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1434fc340 FUN_1434fc340 body=185 status=ok
// SIG undefined FUN_1434fc340(void)

void FUN_1434fc340(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = FUN_1435c8e40(local_18,0x7d7,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    lVar4 = Scaleform::GFx::DisplayList::FindDisplayIndex
                      (*(longlong *)(param_1 + 0x88) + 0xd8,*(undefined8 *)(param_3 + 0x88));
    if (lVar4 < 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      uVar3 = FUN_1435c8e40(local_18,0x7e9,uVar2);
      FUN_1435cbef0(uVar2,uVar3);
      piVar1 = (int *)(local_10 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
        return;
      }
    }
    else {
      *param_2 = (int)lVar4;
    }
  }
  return;
}



// FUNCTION 1434fc400 FUN_1434fc400 body=851 status=ok
// SIG undefined FUN_1434fc400(void)

void FUN_1434fc400(longlong param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float local_res8;
  float local_resc;
  ulonglong local_res10;
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  float local_cc;
  longlong local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  float local_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  float local_6c;
  
  plVar6 = *(longlong **)(param_1 + 0x88);
  local_a8 = 1.0;
  fStack_a4 = 0.0;
  uStack_a0 = 0;
  fStack_9c = 0.0;
  local_98 = 0.0;
  fStack_94 = 1.0;
  uStack_90 = 0;
  fStack_8c = 0.0;
  (**(code **)(*plVar6 + 0x1e8))(plVar6,&local_a8);
  fVar11 = (float)(*(double *)(param_3 + 0x40) * 20.0);
  local_e8 = local_a8;
  local_e4 = fStack_a4;
  local_e0 = uStack_a0;
  fVar10 = (float)(*(double *)(param_3 + 0x48) * 20.0);
  local_cc = fStack_8c;
  local_6c = fStack_8c;
  local_dc = fStack_9c;
  local_d8 = local_98;
  local_d4 = fStack_94;
  local_d0 = uStack_90;
  local_88 = local_a8;
  local_84 = fStack_a4;
  local_80 = uStack_a0;
  local_7c = fStack_9c;
  local_78 = local_98;
  local_74 = fStack_94;
  local_70 = uStack_90;
  Scaleform::Render::Matrix2x4<float>::SetInverse
            ((Matrix2x4<float> *)&local_e8,(Matrix2x4<float> *)&local_88);
  local_res8 = local_e8 * fVar11 + local_e4 * fVar10 + local_dc;
  local_resc = local_d8 * fVar11 + local_d4 * fVar10 + local_cc;
  local_b0 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x48);
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  lVar2 = (**(code **)(*(longlong *)
                        ((longlong)plVar6 + (ulonglong)*(byte *)((longlong)plVar6 + 0x6d) * 4) +
                      0x28))();
  if (lVar2 == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = (longlong *)(lVar2 + -0x48);
  }
  (**(code **)(*plVar6 + 0xa0))(plVar6,&local_c8,&local_res8);
  puVar3 = (ulonglong *)FUN_1435ca860(*(undefined8 *)(param_1 + 0x40),&local_res10);
  uVar1 = local_c0;
  uVar9 = 0;
  uVar8 = *puVar3;
  if (local_c0 != 0) {
    do {
      lVar2 = *(longlong *)(local_c8 + uVar9 * 8);
      if ((*(byte *)(lVar2 + 0x6b) & 1) != 0) {
        if (lVar2 == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)(lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4);
        }
        uVar4 = plVar6[2];
        if (uVar4 == 0) {
          uVar4 = plVar6[1];
        }
        if ((uVar4 & 1) != 0) {
          uVar4 = uVar4 - 1;
        }
        if (uVar4 == 0) {
          (**(code **)(*plVar6 + 0x70))(plVar6,1);
        }
        uVar4 = plVar6[2];
        if (uVar4 == 0) {
          uVar4 = plVar6[1];
        }
        if ((uVar4 & 1) != 0) {
          uVar4 = uVar4 - 1;
        }
        uVar5 = FUN_143590110(&local_88,uVar4);
        FUN_1434b49b0(uVar8 + 0x40,uVar5);
        if (9 < (SUB41(local_88,0) & 0x1f)) {
          if (((uint)local_88 >> 9 & 1) == 0) {
            FUN_1435920c0(&local_88);
          }
          else {
            FUN_143592150();
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar1);
  }
  if (&local_res10 != param_2) {
    if (uVar8 != 0) {
      *(uint *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1U & 0x8fffffff;
    }
    uVar1 = *param_2;
    if (uVar1 != 0) {
      if ((uVar1 & 1) == 0) {
        if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar1 - 1;
      }
    }
    *param_2 = uVar8;
  }
  if (((uVar8 != 0) && ((uVar8 & 1) == 0)) && ((*(uint *)(uVar8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
    FUN_1434ef880(uVar8);
  }
  puVar7 = (undefined8 *)(local_c8 + -8 + local_c0 * 8);
  for (uVar8 = local_c0; uVar8 != 0; uVar8 = uVar8 - 1) {
    if ((RefCountNTSImpl *)*puVar7 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar7);
    }
    puVar7 = puVar7 + -1;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_c8);
  return;
}



// FUNCTION 1434fc760 FUN_1434fc760 body=265 status=ok
// SIG undefined FUN_1434fc760(void)

void FUN_1434fc760(longlong param_1,undefined8 param_2,int param_3,uint *param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  bool bVar6;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) goto LAB_1434fc82d;
  uVar5 = *param_4 & 0x1f;
  if (uVar5 == 0) goto LAB_1434fc82d;
  if (uVar5 == 0xc) {
    bVar6 = *(longlong *)(param_4 + 4) == 0;
LAB_1434fc7a9:
    if (bVar6) goto LAB_1434fc82d;
  }
  else if (uVar5 == 10) {
    bVar6 = *(longlong *)(param_4 + 4) == *(longlong *)(*(longlong *)(param_4 + 4) + 8) + 0x80;
    goto LAB_1434fc7a9;
  }
  if (uVar5 == 0xc) {
    lVar2 = *(longlong *)(param_4 + 4);
    if (((lVar2 != 0) && (*(int *)(*(longlong *)(lVar2 + 0x28) + 0x90) - 0x18U < 0xc)) &&
       ((~(*(byte *)(*(longlong *)(lVar2 + 0x28) + 0x88) >> 5) & 1) != 0)) {
      if (*(longlong *)(lVar2 + 0x88) != 0) {
        uVar3 = FUN_143516900(*(undefined8 *)(param_1 + 0x88));
        FUN_1435e4bf0(uVar3,*(undefined8 *)(lVar2 + 0x88));
      }
      FUN_1435903c0(param_2,lVar2);
      return;
    }
    FUN_1435168c0(param_2);
    return;
  }
LAB_1434fc82d:
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = FUN_1435c8e40(local_18,0x7d7,uVar3);
  FUN_1435cbe70(uVar3,uVar4);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434fc870 FUN_1434fc870 body=286 status=ok
// SIG undefined FUN_1434fc870(void)

void FUN_1434fc870(longlong param_1,ulonglong *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar4 = *(longlong *)(param_1 + 0x88);
  uVar5 = *param_2;
  lVar8 = 0;
  if (uVar5 != 0) {
    if ((uVar5 & 1) == 0) {
      if ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *param_2 = uVar5 - 1;
    }
    *param_2 = 0;
  }
  if (lVar4 != 0) {
    lVar3 = (**(code **)(*(longlong *)(lVar4 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4) + 0x28))
                      (lVar4 + (ulonglong)*(byte *)(lVar4 + 0x6d) * 4);
    if (lVar3 != 0) {
      lVar8 = lVar3 + -0x48;
    }
  }
  lVar4 = Scaleform::GFx::DisplayObjContainer::GetChildAt(lVar4,param_3);
  if (lVar4 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = FUN_1435c8e40(local_18,0x7d6,uVar2);
    FUN_1435cbdf0(uVar2,uVar6);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    uVar7 = (ulonglong)*(byte *)(lVar4 + 0x6d);
    uVar5 = *(ulonglong *)(lVar4 + 0x10 + uVar7 * 4);
    if (uVar5 == 0) {
      uVar5 = *(ulonglong *)(lVar4 + 8 + uVar7 * 4);
    }
    if ((uVar5 & 1) != 0) {
      uVar5 = uVar5 - 1;
    }
    if (uVar5 != 0) {
      uVar5 = *(ulonglong *)(lVar4 + 0x10 + uVar7 * 4);
      if (uVar5 == 0) {
        uVar5 = *(ulonglong *)(lVar4 + 8 + uVar7 * 4);
      }
      if ((uVar5 & 1) != 0) {
        uVar5 = uVar5 - 1;
      }
      FUN_1434f0700(param_2,uVar5);
    }
    FUN_1435e4c30(lVar8,param_3);
  }
  return;
}



// FUNCTION 1434fc9a0 FUN_1434fc9a0 body=195 status=ok
// SIG undefined FUN_1434fc9a0(void)

void FUN_1434fc9a0(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar5 = *(longlong *)(param_1 + 0x88);
  iVar2 = *(int *)(lVar5 + 0xe0);
  if (((param_3 < 0) || (iVar2 < param_3)) || (param_4 < 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = FUN_1435c8e40(local_18,0x7d6,uVar3);
    FUN_1435cbdf0(uVar3,uVar6);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    lVar5 = (**(code **)(*(longlong *)(lVar5 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4) + 0x28))
                      (lVar5 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4);
    iVar4 = param_3;
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar5 + -0x48;
    }
    for (; (iVar4 < param_4 && (iVar4 < iVar2)); iVar4 = iVar4 + 1) {
      FUN_1435e4c30(lVar5,param_3);
    }
  }
  return;
}



// FUNCTION 1434fca70 FUN_1434fca70 body=181 status=ok
// SIG undefined FUN_1434fca70(void)

void FUN_1434fca70(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = FUN_1435c8e40(local_18,0x7d7,uVar3);
    FUN_1435cbe70(uVar3,uVar2);
  }
  else {
    if ((-1 < param_4) && (param_4 < *(int *)(*(longlong *)(param_1 + 0x88) + 0xe0))) {
      if (*(longlong *)(param_3 + 0x88) == 0) {
        return;
      }
      uVar3 = FUN_143516900();
      FUN_1435e4da0(uVar3,*(undefined8 *)(param_3 + 0x88),param_4);
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = FUN_1435c8e40(local_18,0x7d6,uVar3);
    FUN_1435cbdf0(uVar3,uVar2);
  }
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434fcb30 FUN_1434fcb30 body=154 status=ok
// SIG undefined FUN_1434fcb30(void)

void FUN_1434fcb30(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = FUN_1435c8e40(local_18,0x7d7,uVar3);
    FUN_1435cbe70(uVar3,uVar2);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else if ((*(longlong *)(param_3 + 0x88) != 0) && (*(longlong *)(param_4 + 0x88) != 0)) {
    uVar3 = FUN_143516900(*(undefined8 *)(param_1 + 0x88));
    FUN_1435e4fc0(uVar3,*(undefined8 *)(param_3 + 0x88),*(undefined8 *)(param_4 + 0x88));
  }
  return;
}



// FUNCTION 1434fcbd0 FUN_1434fcbd0 body=138 status=ok
// SIG undefined FUN_1434fcbd0(void)

void FUN_1434fcbd0(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if ((((-1 < param_3) && (iVar2 = *(int *)(*(longlong *)(param_1 + 0x88) + 0xe0), param_3 < iVar2))
      && (-1 < param_4)) && (param_4 < iVar2)) {
    uVar3 = FUN_143516900();
    FUN_1435e5030(uVar3,param_3,param_4);
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = FUN_1435c8e40(local_18,0x7d6,uVar3);
  FUN_1435cbdf0(uVar3,uVar4);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434fcc60 FUN_1434fcc60 body=30 status=ok
// SIG undefined FUN_1434fcc60(void)

undefined8 * FUN_1434fcc60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434fbc90();
  return param_2;
}



// FUNCTION 1434fcc90 FUN_1434fcc90 body=30 status=ok
// SIG undefined FUN_1434fcc90(void)

undefined8 * FUN_1434fcc90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434fbde0();
  return param_2;
}



// FUNCTION 1434fccc0 FUN_1434fccc0 body=30 status=ok
// SIG undefined FUN_1434fccc0(void)

undefined8 * FUN_1434fccc0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434fbf00();
  return param_2;
}



// FUNCTION 1434fccf0 FUN_1434fccf0 body=30 status=ok
// SIG undefined FUN_1434fccf0(void)

undefined8 * FUN_1434fccf0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434fc120();
  return param_2;
}



// FUNCTION 1434fcd20 FUN_1434fcd20 body=30 status=ok
// SIG undefined FUN_1434fcd20(void)

undefined8 * FUN_1434fcd20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434fc230();
  return param_2;
}



// FUNCTION 1434fcd50 FUN_1434fcd50 body=30 status=ok
// SIG undefined FUN_1434fcd50(void)

undefined8 * FUN_1434fcd50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434fc400();
  return param_2;
}



// FUNCTION 1434fcd80 FUN_1434fcd80 body=30 status=ok
// SIG undefined FUN_1434fcd80(void)

undefined8 * FUN_1434fcd80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434fc870();
  return param_2;
}



// FUNCTION 1434fcdb0 FUN_1434fcdb0 body=43 status=ok
// SIG undefined FUN_1434fcdb0(void)

undefined8 * FUN_1434fcdb0(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *(undefined4 *)(param_1 + 0x12) = 0x1f;
  *param_1 = &PTR_FUN_145b23d60;
  return param_1;
}



// FUNCTION 1434fcdf0 FUN_1434fcdf0 body=175 status=ok
// SIG undefined FUN_1434fcdf0(void)

void FUN_1434fcdf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1434f20e0(puVar1,param_3);
    puVar1[0x13] = 0;
    *puVar1 = &PTR_FUN_145b23c88;
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



// FUNCTION 1434fceb0 FUN_1434fceb0 body=43 status=ok
// SIG undefined FUN_1434fceb0(void)

undefined8 * FUN_1434fceb0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *(undefined4 *)(param_1 + 0x12) = 0x1f;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434fcef0 FUN_1434fcef0 body=234 status=ok
// SIG undefined FUN_1434fcef0(void)

undefined8 * FUN_1434fcef0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1c430);
    *(undefined4 *)(puVar2 + 0x12) = 0x1f;
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b1c430);
    *(undefined4 *)(puVar2 + 0x12) = 0x1f;
    *puVar2 = &PTR_FUN_145b23d60;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1434fcfe0 FUN_1434fcfe0 body=89 status=ok
// SIG undefined FUN_1434fcfe0(void)

undefined8 * FUN_1434fcfe0(undefined8 *param_1)

{
  undefined1 local_res8 [32];
  
  FUN_1434f20e0();
  param_1[0x13] = 0;
  *param_1 = &PTR_FUN_145b23dd8;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_1435ccdc0(param_1[8],local_res8,param_1 + 0x15,"flash.events.UncaughtErrorEvents",0,0);
  return param_1;
}



// FUNCTION 1434fd040 FUN_1434fd040 body=81 status=ok
// SIG undefined FUN_1434fd040(void)

void FUN_1434fd040(longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1434fb9e0();
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    (*param_3)(param_2);
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    (*param_3)(param_2);
  }
  return;
}



// FUNCTION 1434fd0a0 FUN_1434fd0a0 body=203 status=ok
// SIG undefined FUN_1434fd0a0(void)

void FUN_1434fd0a0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_FUN_145b23dd8;
  uVar1 = param_1[0x15];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x15] = uVar1 - 1;
    }
  }
  uVar1 = param_1[0x14];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x14] = uVar1 - 1;
    }
  }
  *param_1 = &PTR_ForEachChild_GC_145b23730;
  uVar1 = param_1[0x13];
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      param_1[0x13] = uVar1 - 1;
      FUN_1434f21b0(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1434f21b0(param_1);
  return;
}



// FUNCTION 1434fd180 FUN_1434fd180 body=407 status=ok
// SIG undefined FUN_1434fd180(void)

void FUN_1434fd180(longlong param_1,char param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  char *local_18;
  undefined8 local_10;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (param_2 == '\0') {
    local_18 = "flash.display.LoaderInfo";
    local_10 = 0x18;
    uVar1 = FUN_1435cc580(lVar2,&local_18,*(undefined8 *)(lVar2 + 0x1c8));
    if (uVar1 != 0) {
      *(uint *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 1U & 0x8fffffff;
    }
    FUN_1435e8720(lVar2,param_1 + 0xa0,uVar1,0,0);
    FUN_1434f0700(*(longlong *)(param_1 + 0xa0) + 0x90,param_1);
    FUN_1434fd320(param_1);
    if (uVar1 == 0) {
      return;
    }
    if ((uVar1 & 1) != 0) {
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) == 0) {
      return;
    }
    *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
    FUN_1434ef880(uVar1);
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x88);
  if (lVar2 == 0) {
    return;
  }
  uVar1 = *(ulonglong *)(lVar2 + 0x10 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4);
  if (uVar1 == 0) {
    uVar1 = *(ulonglong *)(lVar2 + 8 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4);
  }
  if ((uVar1 & 1) != 0) {
    uVar1 = uVar1 - 1;
  }
  if (uVar1 == 0) {
    return;
  }
  if (*(longlong *)(uVar1 + 0x80) == 0) {
    lVar2 = *(longlong *)(uVar1 + 0x88);
    if (lVar2 != 0) {
      lVar2 = lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4;
    }
    lVar2 = FUN_1435e1010(lVar2);
    if ((lVar2 != 0) && (lVar2 = lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4, lVar2 != 0)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x10);
      if (uVar3 == 0) {
        uVar3 = *(ulonglong *)(lVar2 + 8);
      }
      if ((uVar3 & 1) != 0) {
        uVar3 = uVar3 - 1;
      }
      if (uVar3 != 0) {
        lVar2 = *(longlong *)(uVar3 + 0x80);
        goto LAB_1434fd2eb;
      }
    }
  }
  lVar2 = *(longlong *)(uVar1 + 0x80);
LAB_1434fd2eb:
  if (lVar2 != 0) {
    lVar2 = FUN_1434f24f0(uVar1);
    FUN_1434f0700(lVar2 + 0x90,param_1);
  }
  return;
}



// FUNCTION 1434fd320 FUN_1434fd320 body=271 status=ok
// SIG undefined FUN_1434fd320(void)

undefined8 FUN_1434fd320(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  RefCountNTSImpl *this;
  undefined8 uVar4;
  RefCountNTSImpl *pRVar5;
  undefined4 local_res8 [2];
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    return *(undefined8 *)(param_1 + 0x88);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300);
  plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + 0x48);
  lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,0x160,0);
  pRVar5 = (RefCountNTSImpl *)0x0;
  this = pRVar5;
  if (lVar3 != 0) {
    local_res8[0] = 0x40000;
    this = (RefCountNTSImpl *)
           FUN_1435f5fd0(lVar3,lVar1,*(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x50),0,
                         local_res8);
  }
  if (this != (RefCountNTSImpl *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x88) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x88));
  }
  *(RefCountNTSImpl **)(param_1 + 0x88) = this;
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  lVar3 = *(longlong *)(param_1 + 0x88);
  if (lVar3 != 0) {
    pRVar5 = (RefCountNTSImpl *)(lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4);
  }
  FUN_1435e0fb0(pRVar5,param_1);
  uVar4 = FUN_1435b5230(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(pRVar5 + 0x28) = uVar4;
  FUN_1435f2710(lVar1,*(undefined8 *)(param_1 + 0x88));
  return *(undefined8 *)(param_1 + 0x88);
}



// FUNCTION 1434fd450 FUN_1434fd450 body=12 status=ok
// SIG undefined FUN_1434fd450(void)

void FUN_1434fd450(longlong param_1)

{
  FUN_1434ff690(*(undefined8 *)(param_1 + 0xa0));
  return;
}



// FUNCTION 1434fd470 FUN_1434fd470 body=12 status=ok
// SIG undefined FUN_1434fd470(void)

void FUN_1434fd470(longlong param_1)

{
  FUN_1434ff770(*(undefined8 *)(param_1 + 0xa0));
  return;
}



// FUNCTION 1434fd490 FUN_1434fd490 body=78 status=ok
// SIG undefined FUN_1434fd490(void)

void FUN_1434fd490(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1435f4c70(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 200,6);
  if (lVar1 != 0) {
    FUN_1435166f0(lVar1,*(undefined8 *)(param_1 + 0x88),param_1,&LAB_1435066f0);
    return;
  }
  return;
}



// FUNCTION 1434fd4f0 FUN_1434fd4f0 body=184 status=ok
// SIG undefined FUN_1434fd4f0(void)

void FUN_1434fd4f0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1435f4c70(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 200,6);
  if (lVar1 != 0) {
    FUN_1435166f0(lVar1,*(undefined8 *)(param_1 + 0x88),param_1,FUN_143506710);
    if (param_2 != 0) {
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    }
    if (*(RefCountNTSImpl **)(lVar1 + 0x10) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar1 + 0x10));
    }
    *(longlong *)(lVar1 + 0x10) = param_2;
    if ((RefCountImpl *)*param_3 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef((RefCountImpl *)*param_3);
    }
    if (*(RefCountImpl **)(lVar1 + 0x60) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar1 + 0x60));
    }
    *(undefined8 *)(lVar1 + 0x60) = *param_3;
  }
  if ((RefCountImpl *)*param_3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)*param_3);
  }
  return;
}



// FUNCTION 1434fd5b0 FUN_1434fd5b0 body=63 status=ok
// SIG undefined FUN_1434fd5b0(void)

void FUN_1434fd5b0(longlong param_1,undefined8 param_2)

{
  undefined1 local_408 [1024];
  
  FUN_1432f2bf0(local_408,0x400,"Error reading %s",param_2);
  FUN_14351a780(*(undefined8 *)(param_1 + 0xa0),local_408);
  return;
}



// FUNCTION 1434fd600 FUN_1434fd600 body=12 status=ok
// SIG undefined FUN_1434fd600(void)

void FUN_1434fd600(longlong param_1)

{
  FUN_1434ff830(*(undefined8 *)(param_1 + 0xa0));
  return;
}



// FUNCTION 1434fd620 FUN_1434fd620 body=12 status=ok
// SIG undefined FUN_1434fd620(void)

void FUN_1434fd620(longlong param_1)

{
  FUN_1434ff8e0(*(undefined8 *)(param_1 + 0xa0));
  return;
}



// FUNCTION 1434fd640 FUN_1434fd640 body=95 status=ok
// SIG undefined FUN_1434fd640(void)

void FUN_1434fd640(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  uVar2 = *(ulonglong *)(lVar1 + 0x88);
  if (uVar2 != 0) {
    if ((uVar2 & 1) != 0) {
      *(ulonglong *)(lVar1 + 0x88) = uVar2 - 1;
      *(undefined8 *)(lVar1 + 0x88) = 0;
      return;
    }
    if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
      FUN_1434ef880();
    }
    *(undefined8 *)(lVar1 + 0x88) = 0;
  }
  return;
}



// FUNCTION 1434fd6b0 FUN_1434fd6b0 body=157 status=ok
// SIG undefined FUN_1434fd6b0(void)

undefined8 * FUN_1434fd6b0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (param_3 == 0) {
    uVar2 = FUN_1435cf440(lVar1);
  }
  else {
    if (*(longlong *)(param_3 + 0x48) != 0) {
      FUN_1434f0700(param_2,*(undefined8 *)(*(longlong *)(param_3 + 0x48) + 0x40));
      return param_2;
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x1c8);
  }
  uVar2 = FUN_1435be210(uVar2,&local_res8,lVar1);
  FUN_1434e6830(param_2,uVar2);
  if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  return param_2;
}



// FUNCTION 1434fd760 FUN_1434fd760 body=246 status=ok
// SIG undefined FUN_1434fd760(void)

undefined8 FUN_1434fd760(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong local_res8;
  longlong local_res10;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined **local_50;
  
  FUN_143354b50(local_68,param_3);
  FUN_143355390(local_68);
  FUN_143355620(local_68,&local_78);
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10);
  local_res10 = FUN_143360a90(*(undefined8 *)(lVar2 + 0x218),local_78,local_70);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  local_res8 = FUN_143360950(*(undefined8 *)(lVar2 + 0x218),"Loader::ByteArray ",0x12);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::ASString::operator+(&local_res8,param_2,&local_res10);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_50 = &PTR_FUN_145af1858;
  FUN_143353a80(local_68);
  return param_2;
}



// FUNCTION 1434fd870 FUN_1434fd870 body=127 status=ok
// SIG undefined FUN_1434fd870(void)

void FUN_1434fd870(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0xa0) + 0x88);
  if (puVar2 != param_2) {
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      *(uint *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 1U & 0x8fffffff;
    }
    uVar1 = *param_2;
    if (uVar1 != 0) {
      if ((uVar1 & 1) != 0) {
        *param_2 = uVar1 - 1;
        *param_2 = *puVar2;
        return;
      }
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar2;
  }
  return;
}



// FUNCTION 1434fd900 FUN_1434fd900 body=120 status=ok
// SIG undefined FUN_1434fd900(void)

void FUN_1434fd900(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0xa0);
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 1434fd9a0 FUN_1434fd9a0 body=740 status=ok
// SIG undefined FUN_1434fd9a0(void)

void FUN_1434fd9a0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_res18;
  ulonglong local_28;
  ulonglong local_20;
  
  if (param_3 == 0) {
    return;
  }
  uVar11 = 0;
  lVar3 = *(longlong *)(param_1 + 0x40);
  iVar10 = 0;
  uVar4 = *(undefined8 *)(lVar3 + 0x300);
  uVar8 = uVar11;
  if (param_4 == 0) {
    uVar5 = FUN_1435cf440(lVar3);
    puVar12 = (ulonglong *)FUN_1435be210(uVar5,&local_28,lVar3);
    if (puVar12 != &local_20) {
      uVar8 = *puVar12;
      if (uVar8 != 0) {
        *(uint *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1U & 0x8fffffff;
      }
      uVar8 = *puVar12;
    }
    if (local_28 != 0) {
      uVar9 = local_28;
      if ((local_28 & 1) == 0) {
LAB_1434fdaad:
        if ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        local_28 = local_28 - 1;
      }
    }
  }
  else if (*(longlong *)(param_4 + 0x48) == 0) {
    puVar12 = (ulonglong *)FUN_1435be210(*(undefined8 *)(lVar3 + 0x1c8),&local_res18,lVar3);
    if (puVar12 != &local_20) {
      uVar8 = *puVar12;
      if (uVar8 != 0) {
        *(uint *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1U & 0x8fffffff;
      }
      uVar8 = *puVar12;
    }
    if (local_res18 != 0) {
      uVar9 = local_res18;
      if ((local_res18 & 1) == 0) goto LAB_1434fdaad;
      local_res18 = local_res18 - 1;
    }
  }
  else {
    uVar9 = *(ulonglong *)(*(longlong *)(param_4 + 0x48) + 0x40);
    if (uVar9 != 0) {
      *(uint *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1U & 0x8fffffff;
      uVar8 = uVar9;
    }
  }
  puVar12 = (ulonglong *)(*(longlong *)(param_1 + 0xa0) + 0x98);
  if (&local_20 != puVar12) {
    if (uVar8 != 0) {
      *(uint *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1U & 0x8fffffff;
    }
    uVar9 = *puVar12;
    if (uVar9 != 0) {
      if ((uVar9 & 1) == 0) {
        if ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar12 = uVar9 - 1;
      }
    }
    *puVar12 = uVar8;
  }
  if (((uVar8 != 0) && ((uVar8 & 1) == 0)) && ((*(uint *)(uVar8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
    FUN_1434ef880(uVar8);
  }
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x28) + 0x98) + 0x10) + 0x218);
  local_res18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  FUN_143558050(param_3,&local_res18);
  plVar6 = (longlong *)FUN_14335fe70(&local_res18);
  *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
  piVar1 = (int *)(local_res18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar3 = *plVar6;
  uVar8 = uVar11;
  do {
    uVar7 = uVar8 + 1;
    uVar9 = uVar11;
    if (*(char *)(lVar3 + uVar8) != (&DAT_145b250c4)[uVar8]) goto LAB_1434fdbd0;
    uVar8 = uVar7;
  } while (uVar7 != 4);
  iVar10 = 1;
  goto LAB_1434fdc4e;
  while (uVar9 = uVar7 + 1, uVar7 + 1 != 5) {
LAB_1434fdbd0:
    uVar7 = uVar9;
    uVar8 = uVar11;
    if (*(char *)(lVar3 + uVar7) != (&DAT_145b250c8)[uVar7]) goto LAB_1434fdc00;
  }
  iVar10 = (int)uVar7 + -2;
  goto LAB_1434fdc4e;
  while (uVar8 = uVar9, uVar9 != 4) {
LAB_1434fdc00:
    uVar9 = uVar8 + 1;
    if (*(char *)(lVar3 + uVar8) != (&DAT_145b250d0)[uVar8]) goto LAB_1434fdc30;
  }
  iVar10 = 3;
  goto LAB_1434fdc4e;
  while (uVar11 = uVar8 + 1, uVar8 + 1 != 7) {
LAB_1434fdc30:
    uVar8 = uVar11;
    bVar13 = *(char *)(lVar3 + uVar8) == "DELETE"[uVar8];
    if (!bVar13) goto LAB_1434fdc4a;
  }
  bVar13 = *(char *)(lVar3 + uVar8) == "DELETE"[uVar8];
LAB_1434fdc4a:
  if (bVar13) {
    iVar10 = 4;
  }
LAB_1434fdc4e:
  FUN_1435ea4d0(uVar4,param_3,param_1,iVar10);
  plVar2 = plVar6 + 3;
  *(int *)plVar2 = (int)*plVar2 + -1;
  if ((int)*plVar2 == 0) {
    FUN_14335f920(plVar6);
  }
  return;
}



// FUNCTION 1434fdc90 FUN_1434fdc90 body=424 status=ok
// SIG undefined FUN_1434fdc90(void)

void FUN_1434fdc90(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong local_res8;
  ulonglong local_res20;
  ulonglong local_28 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  uVar5 = 0;
  uVar2 = *(undefined8 *)(lVar1 + 0x300);
  if (param_4 == 0) {
    uVar3 = FUN_1435cf440(lVar1);
    puVar6 = (ulonglong *)FUN_1435be210(uVar3,&local_res20,lVar1);
    if (puVar6 != local_28) {
      uVar5 = *puVar6;
      if (uVar5 != 0) {
        *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
      }
      uVar5 = *puVar6;
    }
    if (local_res20 == 0) goto LAB_1434fdd9d;
    uVar4 = local_res20;
    if ((local_res20 & 1) != 0) {
      local_res20 = local_res20 - 1;
      goto LAB_1434fdd9d;
    }
  }
  else {
    if (*(longlong *)(param_4 + 0x48) != 0) {
      uVar4 = *(ulonglong *)(*(longlong *)(param_4 + 0x48) + 0x40);
      if (uVar4 != 0) {
        *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
        uVar5 = uVar4;
      }
      goto LAB_1434fdd9d;
    }
    puVar6 = (ulonglong *)FUN_1435be210(*(undefined8 *)(lVar1 + 0x1c8),&local_res8,lVar1);
    if (puVar6 != local_28) {
      uVar5 = *puVar6;
      if (uVar5 != 0) {
        *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
      }
      uVar5 = *puVar6;
    }
    if (local_res8 == 0) goto LAB_1434fdd9d;
    uVar4 = local_res8;
    if ((local_res8 & 1) != 0) {
      local_res8 = local_res8 - 1;
      goto LAB_1434fdd9d;
    }
  }
  if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
    *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
    FUN_1434ef880();
  }
LAB_1434fdd9d:
  puVar6 = (ulonglong *)(*(longlong *)(param_1 + 0xa0) + 0x98);
  if (local_28 != puVar6) {
    if (uVar5 != 0) {
      *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
    }
    uVar4 = *puVar6;
    if (uVar4 != 0) {
      if ((uVar4 & 1) == 0) {
        if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar6 = uVar4 - 1;
      }
    }
    *puVar6 = uVar5;
  }
  if (((uVar5 != 0) && ((uVar5 & 1) == 0)) && ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
    FUN_1434ef880(uVar5);
  }
  FUN_1435ea650(uVar2,param_3,param_1,0);
  return;
}



// FUNCTION 1434fdea0 FUN_1434fdea0 body=30 status=ok
// SIG undefined FUN_1434fdea0(void)

undefined8 * FUN_1434fdea0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434fd870();
  return param_2;
}



// FUNCTION 1434fded0 FUN_1434fded0 body=30 status=ok
// SIG undefined FUN_1434fded0(void)

undefined8 * FUN_1434fded0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434fd900();
  return param_2;
}



// FUNCTION 1434fdf00 FUN_1434fdf00 body=40 status=ok
// SIG undefined FUN_1434fdf00(void)

undefined8 * FUN_1434fdf00(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434f0700(param_2,*(undefined8 *)(param_1 + 0xa8));
  return param_2;
}



// FUNCTION 1434fdf30 FUN_1434fdf30 body=43 status=ok
// SIG undefined FUN_1434fdf30(void)

undefined8 * FUN_1434fdf30(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *(undefined4 *)(param_1 + 0x12) = 0x23;
  *param_1 = &PTR_FUN_145b23eb0;
  return param_1;
}



// FUNCTION 1434fdf70 FUN_1434fdf70 body=223 status=ok
// SIG undefined FUN_1434fdf70(void)

void FUN_1434fdf70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 local_res20 [8];
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_1434f20e0(puVar1,param_3);
    puVar1[0x13] = 0;
    *puVar1 = &PTR_FUN_145b23dd8;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    FUN_1435ccdc0(puVar1[8],local_res20,puVar1 + 0x15,"flash.events.UncaughtErrorEvents",0,0);
  }
  local_28[0] = 0;
  local_20 = 0;
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



// FUNCTION 1434fe060 FUN_1434fe060 body=43 status=ok
// SIG undefined FUN_1434fe060(void)

undefined8 * FUN_1434fe060(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *(undefined4 *)(param_1 + 0x12) = 0x23;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434fe0a0 FUN_1434fe0a0 body=234 status=ok
// SIG undefined FUN_1434fe0a0(void)

undefined8 * FUN_1434fe0a0(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1f380);
    *(undefined4 *)(puVar2 + 0x12) = 0x23;
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar2,param_2,&PTR_DAT_145b1f380);
    *(undefined4 *)(puVar2 + 0x12) = 0x23;
    *puVar2 = &PTR_FUN_145b23eb0;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1434fe190 FOpusAudioInfo body=44 status=ok
// SIG undefined FOpusAudioInfo(void)

undefined8 * FOpusAudioInfo::FOpusAudioInfo(undefined8 *param_1)

{
  FUN_1434f20e0();
  param_1[0x13] = 0;
  *param_1 = &PTR_FUN_145b23f28;
  return param_1;
}



// FUNCTION 1434fe1d0 FUN_1434fe1d0 body=93 status=ok
// SIG undefined FUN_1434fe1d0(void)

void FUN_1434fe1d0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_ForEachChild_GC_145b23730;
  uVar1 = param_1[0x13];
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      param_1[0x13] = uVar1 - 1;
      FUN_1434f21b0(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1434f21b0(param_1);
  return;
}



// FUNCTION 1434fe250 FUN_1434fe250 body=239 status=ok
// SIG undefined FUN_1434fe250(void)

void FUN_1434fe250(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong local_res8;
  
  uVar2 = (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x10)
                      + 0x88))();
  switch(uVar2) {
  case 1:
    puVar3 = &DAT_145b13938;
    break;
  case 2:
    puVar3 = &DAT_145b06dd4;
    break;
  case 3:
    puVar3 = &DAT_145b1393c;
    break;
  case 4:
    puVar3 = &DAT_145b13940;
    break;
  case 5:
    puVar3 = &DAT_145b13944;
    break;
  case 6:
    puVar3 = &DAT_145b13948;
    break;
  case 7:
    puVar3 = &DAT_145b1394c;
    break;
  case 8:
    puVar3 = &DAT_145b13950;
    break;
  default:
    puVar3 = &DAT_145af3922;
  }
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (puVar3[lVar4] != '\0');
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218
                              ),puVar3,lVar4,0);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_143360170(param_2,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434fe370 FUN_1434fe370 body=290 status=ok
// SIG undefined FUN_1434fe370(void)

void FUN_1434fe370(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong local_res8;
  
  local_res8 = FUN_14335fe70(param_3);
  iVar5 = 0;
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  iVar3 = FUN_14335fa60(&local_res8);
  if (iVar3 < 1) {
LAB_1434fe448:
    uVar6 = 0;
    goto LAB_1434fe44a;
  }
  iVar4 = FUN_14335fad0(&local_res8,0);
  uVar6 = 1;
  if (1 < iVar3) {
    iVar5 = FUN_14335fad0(&local_res8,1);
  }
  if (iVar4 == 0x54) {
    if (iVar5 != 0x4c) {
      if (iVar5 != 0x52) goto LAB_1434fe44a;
LAB_1434fe413:
      uVar6 = 6;
      goto LAB_1434fe44a;
    }
  }
  else {
    if (iVar4 != 0x4c) {
      if (iVar4 == 0x52) {
        if (iVar5 == 0x54) goto LAB_1434fe413;
        if (iVar5 != 0x42) {
          uVar6 = 4;
          goto LAB_1434fe44a;
        }
      }
      else {
        if (iVar4 != 0x42) goto LAB_1434fe448;
        if (iVar5 == 0x4c) goto LAB_1434fe441;
        if (iVar5 != 0x52) {
          uVar6 = 2;
          goto LAB_1434fe44a;
        }
      }
      uVar6 = 8;
      goto LAB_1434fe44a;
    }
    if (iVar5 != 0x54) {
      if (iVar5 != 0x42) {
        uVar6 = 3;
        goto LAB_1434fe44a;
      }
LAB_1434fe441:
      uVar6 = 7;
      goto LAB_1434fe44a;
    }
  }
  uVar6 = 5;
LAB_1434fe44a:
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x10);
  (**(code **)(*plVar2 + 0x80))(plVar2,uVar6);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434fe530 FUN_1434fe530 body=186 status=ok
// SIG undefined FUN_1434fe530(void)

void FUN_1434fe530(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x10) +
                  0x5498);
  if (iVar2 == 0) {
    pcVar3 = "default";
  }
  else if (iVar2 == 1) {
    pcVar3 = "rotatedLeft";
  }
  else if (iVar2 == 2) {
    pcVar3 = "rotatedRight";
  }
  else if (iVar2 == 3) {
    pcVar3 = "upsideDown";
  }
  else {
    pcVar3 = "unknown";
  }
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (pcVar3[lVar4] != '\0');
  lVar4 = FUN_143360950(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218)
                        ,pcVar3,lVar4,0);
  *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar4;
  piVar1 = (int *)(lVar4 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar4);
  }
  return;
}



// FUNCTION 1434fe650 FUN_1434fe650 body=292 status=ok
// SIG undefined FUN_1434fe650(void)

void FUN_1434fe650(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  RefCountNTSImpl *this;
  longlong lVar4;
  
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x10);
  lVar4 = (ulonglong)*(byte *)(lVar4 + 0x52c4) * 0x60 + lVar4;
  piVar2 = *(int **)(lVar4 + 0x4ce8);
  this = (RefCountNTSImpl *)0x0;
  if (piVar2 != (int *)0x0) {
    this = *(RefCountNTSImpl **)(piVar2 + 2);
    if (this == (RefCountNTSImpl *)0x0) {
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(undefined8 *)(lVar4 + 0x4ce8) = 0;
      this = (RefCountNTSImpl *)0x0;
    }
    else if (*(int *)(this + 8) == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      Scaleform::RefCountNTSImpl::Release(this);
      lVar4 = (**(code **)(*(longlong *)(this + (ulonglong)(byte)this[0x6d] * 4) + 8))
                        (this + (ulonglong)(byte)this[0x6d] * 4);
      if (lVar4 != 0) {
        lVar4 = lVar4 + -0x38;
      }
      uVar3 = *(ulonglong *)(lVar4 + 0x10);
      if (uVar3 == 0) {
        uVar3 = *(ulonglong *)(lVar4 + 8);
      }
      if ((uVar3 & 1) != 0) {
        uVar3 = uVar3 - 1;
      }
      if ((uVar3 != 0) &&
         ((iVar1 = *(int *)(*(longlong *)(uVar3 + 0x28) + 0x90), iVar1 == 0x19 || (0x1e < iVar1))))
      {
        FUN_1434f0700(param_2);
        goto LAB_1434fe757;
      }
    }
  }
  uVar3 = *param_2;
  if (uVar3 != 0) {
    if ((uVar3 & 1) == 0) {
      if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *param_2 = uVar3 - 1;
    }
    *param_2 = 0;
  }
LAB_1434fe757:
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return;
}



// FUNCTION 1434fe780 FUN_1434fe780 body=235 status=ok
// SIG undefined FUN_1434fe780(void)

void FUN_1434fe780(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int *piVar2;
  RefCountNTSImpl *this;
  longlong lVar3;
  RefCountNTSImpl *this_00;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  this = (RefCountNTSImpl *)0x0;
  if ((param_3 != 0) &&
     (this = *(RefCountNTSImpl **)(param_3 + 0x88), this != (RefCountNTSImpl *)0x0)) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x300) + 0x10);
  lVar3 = (ulonglong)*(byte *)(lVar3 + 0x52c4) * 0x60 + lVar3;
  piVar2 = *(int **)(lVar3 + 0x4ce8);
  this_00 = (RefCountNTSImpl *)0x0;
  if (piVar2 != (int *)0x0) {
    this_00 = *(RefCountNTSImpl **)(piVar2 + 2);
    if (this_00 == (RefCountNTSImpl *)0x0) {
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(undefined8 *)(lVar3 + 0x4ce8) = 0;
      this_00 = (RefCountNTSImpl *)0x0;
    }
    else if (*(int *)(this_00 + 8) == 0) {
      this_00 = (RefCountNTSImpl *)0x0;
    }
    else {
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      Scaleform::RefCountNTSImpl::Release(this_00);
    }
  }
  if (this_00 != this) {
    FUN_1432eb210(*(undefined8 *)(*(longlong *)(lVar1 + 0x300) + 0x10),this,0,3);
  }
  if (this_00 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this_00);
  }
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return;
}



// FUNCTION 1434fe9a0 FUN_1434fe9a0 body=94 status=ok
// SIG undefined FUN_1434fe9a0(void)

void FUN_1434fe9a0(longlong param_1,double *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_18 [4];
  float local_14;
  float local_c;
  
  plVar1 = *(longlong **)(param_1 + 0x88);
  lVar2 = *plVar1;
  uVar3 = (**(code **)(lVar2 + 0x10))(plVar1);
  (**(code **)(lVar2 + 0x1f0))(plVar1,local_18,uVar3);
  *param_2 = (double)(local_c - local_14) * 0.05;
  return;
}



// FUNCTION 1434feae0 FUN_1434feae0 body=72 status=ok
// SIG undefined FUN_1434feae0(void)

void FUN_1434feae0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x120);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    *param_2 = lVar2;
    return;
  }
  *param_2 = lVar2;
  return;
}



// FUNCTION 1434feb90 FUN_1434feb90 body=185 status=ok
// SIG undefined FUN_1434feb90(void)

void FUN_1434feb90(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  longlong local_res8;
  
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x10)
                      + 0x78))();
  if (iVar2 == 0) {
    pcVar3 = "noScale";
  }
  else if (iVar2 == 2) {
    pcVar3 = "exactFit";
  }
  else if (iVar2 == 3) {
    pcVar3 = "noBorder";
  }
  else {
    pcVar3 = "showAll";
  }
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (pcVar3[lVar4] != '\0');
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218
                              ),pcVar3,lVar4,0);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_143360170(param_2,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434fec50 FUN_1434fec50 body=147 status=ok
// SIG undefined FUN_1434fec50(void)

void FUN_1434fec50(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined8 *)*param_3;
  *(int *)(puVar2 + 3) = *(int *)(puVar2 + 3) + 1;
  plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x10);
  iVar4 = _stricmp((char *)*puVar2,"noScale");
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    iVar4 = _stricmp((char *)*puVar2,"exactFit");
    if (iVar4 == 0) {
      uVar5 = 2;
    }
    else {
      iVar4 = _stricmp((char *)*puVar2,"noBorder");
      uVar5 = 1;
      if (iVar4 == 0) {
        uVar5 = 3;
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x70))(plVar3,uVar5);
  }
  piVar1 = (int *)(puVar2 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(puVar2);
  }
  return;
}



// FUNCTION 1434fed50 FUN_1434fed50 body=33 status=ok
// SIG undefined FUN_1434fed50(void)

void FUN_1434fed50(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x2c8))();
  *param_2 = uVar1;
  return;
}



// FUNCTION 1434fedc0 FUN_1434fedc0 body=60 status=ok
// SIG undefined FUN_1434fedc0(void)

void FUN_1434fedc0(longlong param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 local_18 [16];
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x10);
  lVar2 = (**(code **)(*plVar1 + 0x90))(plVar1,local_18);
  *param_2 = (int)(*(float *)(lVar2 + 0xc) - *(float *)(lVar2 + 4));
  return;
}



// FUNCTION 1434fee40 FUN_1434fee40 body=59 status=ok
// SIG undefined FUN_1434fee40(void)

void FUN_1434fee40(longlong param_1,int *param_2)

{
  longlong *plVar1;
  float *pfVar2;
  undefined1 local_18 [16];
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x10);
  pfVar2 = (float *)(**(code **)(*plVar1 + 0x90))(plVar1,local_18);
  *param_2 = (int)(pfVar2[2] - *pfVar2);
  return;
}



// FUNCTION 1434fef50 FUN_1434fef50 body=94 status=ok
// SIG undefined FUN_1434fef50(void)

void FUN_1434fef50(longlong param_1,double *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  float local_18 [2];
  float local_10;
  
  plVar1 = *(longlong **)(param_1 + 0x88);
  lVar2 = *plVar1;
  uVar3 = (**(code **)(lVar2 + 0x10))(plVar1);
  (**(code **)(lVar2 + 0x1f0))(plVar1,local_18,uVar3);
  *param_2 = (double)(local_10 - local_18[0]) * 0.05;
  return;
}



// FUNCTION 1434ff010 FUN_1434ff010 body=97 status=ok
// SIG undefined FUN_1434ff010(void)

void FUN_1434ff010(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  
  FUN_14351bae0();
  if (*param_3 == *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 800)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x88) + 0x128);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



// FUNCTION 1434ff130 FUN_1434ff130 body=77 status=ok
// SIG undefined FUN_1434ff130(void)

void FUN_1434ff130(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  
  FUN_14351c900();
  if (*param_3 == *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 800)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x88) + 0x128);
    *piVar1 = *piVar1 + -1;
  }
  return;
}



// FUNCTION 1434ff1e0 FUN_1434ff1e0 body=30 status=ok
// SIG undefined FUN_1434ff1e0(void)

undefined8 * FUN_1434ff1e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434fe650();
  return param_2;
}



// FUNCTION 1434ff210 FUN_1434ff210 body=51 status=ok
// SIG undefined FUN_1434ff210(void)

undefined8 * FUN_1434ff210(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_2 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x38);
  (**(code **)(*plVar1 + 8))
            (plVar1,2,"The method Stage::fullScreenSourceRectGet() is not implemented\n");
  return param_2;
}



// FUNCTION 1434ff250 FUN_1434ff250 body=51 status=ok
// SIG undefined FUN_1434ff250(void)

undefined8 * FUN_1434ff250(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_2 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x38);
  (**(code **)(*plVar1 + 8))(plVar1,2,"The method Stage::textSnapshotGet() is not implemented\n");
  return param_2;
}



// FUNCTION 1434ff290 FUN_1434ff290 body=30 status=ok
// SIG undefined FUN_1434ff290(void)

undefined8 * FUN_1434ff290(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434fbde0();
  return param_2;
}



// FUNCTION 1434ff2c0 FUN_1434ff2c0 body=30 status=ok
// SIG undefined FUN_1434ff2c0(void)

undefined8 * FUN_1434ff2c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434fbf00();
  return param_2;
}



// FUNCTION 1434ff2f0 FUN_1434ff2f0 body=30 status=ok
// SIG undefined FUN_1434ff2f0(void)

undefined8 * FUN_1434ff2f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434fc870();
  return param_2;
}



// FUNCTION 1434ff320 FUN_1434ff320 body=43 status=ok
// SIG undefined FUN_1434ff320(void)

undefined8 * FUN_1434ff320(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *(undefined4 *)(param_1 + 0x12) = 0x22;
  *param_1 = &PTR_FUN_145b24000;
  return param_1;
}



// FUNCTION 1434ff360 FUN_1434ff360 body=175 status=ok
// SIG undefined FUN_1434ff360(void)

void FUN_1434ff360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1434f20e0(puVar1,param_3);
    puVar1[0x13] = 0;
    *puVar1 = &PTR_FUN_145b23f28;
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



// FUNCTION 1434ff420 FUN_1434ff420 body=43 status=ok
// SIG undefined FUN_1434ff420(void)

undefined8 * FUN_1434ff420(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *(undefined4 *)(param_1 + 0x12) = 0x22;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434ff460 FUN_1434ff460 body=247 status=ok
// SIG undefined FUN_1434ff460(void)

undefined8 * FUN_1434ff460(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b1c490);
    *(undefined4 *)(puVar3 + 0x12) = 0x22;
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar3,param_2,&PTR_DAT_145b1c490);
    *(undefined4 *)(puVar3 + 0x12) = 0x22;
    *puVar3 = &PTR_FUN_145b24000;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 1434ff560 FUN_1434ff560 body=33 status=ok
// SIG undefined FUN_1434ff560(void)

undefined8 * FUN_1434ff560(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 1434ff5a0 FUN_1434ff5a0 body=103 status=ok
// SIG undefined FUN_1434ff5a0(void)

undefined8 * FUN_1434ff5a0(undefined8 *param_1)

{
  undefined1 local_res8 [32];
  
  FUN_143519560();
  *param_1 = &PTR_FUN_145b24078;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_1435ccdc0(param_1[8],local_res8,param_1 + 0x14,"flash.events.UncaughtErrorEvents",0,0);
  return param_1;
}



// FUNCTION 1434ff610 FUN_1434ff610 body=117 status=ok
// SIG undefined FUN_1434ff610(void)

void FUN_1434ff610(longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435195d0();
  if (*(longlong *)(param_1 + 0x88) != 0) {
    (*param_3)(param_2);
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    (*param_3)(param_2);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    (*param_3)(param_2);
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    (*param_3)(param_2);
  }
  return;
}



// FUNCTION 1434ff690 FUN_1434ff690 body=215 status=ok
// SIG undefined FUN_1434ff690(void)

void FUN_1434ff690(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  ulonglong local_res8;
  longlong local_res20;
  
  local_res20 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x2e0);
  *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
  cVar2 = FUN_14351a530(param_1,&local_res20,0);
  if (cVar2 != '\0') {
    FUN_143519770(param_1,&local_res8,&local_res20);
    FUN_1434f0700(local_res8 + 0x50,param_1);
    *(int *)(param_1 + 0x80) = (int)param_2;
    *(int *)(param_1 + 0x84) = (int)param_3;
    *(undefined8 *)(local_res8 + 0x60) = param_2;
    *(undefined8 *)(local_res8 + 0x68) = param_3;
    FUN_14351af40(param_1,local_res8,0);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
  }
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434ff770 FUN_1434ff770 body=178 status=ok
// SIG undefined FUN_1434ff770(void)

void FUN_1434ff770(longlong param_1)

{
  int *piVar1;
  char cVar2;
  ulonglong local_res8;
  longlong local_res10 [3];
  
  local_res10[0] = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x2d8);
  *(int *)(local_res10[0] + 0x18) = *(int *)(local_res10[0] + 0x18) + 1;
  cVar2 = FUN_14351a530(param_1,local_res10,0);
  if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0x88) != 0)) {
    Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::CreateEventObject
              (param_1,&local_res8,local_res10,0,0);
    FUN_1434f0700(local_res8 + 0x50,param_1);
    FUN_14351af40(param_1,local_res8,0);
    if ((local_res8 != 0) &&
       (((local_res8 & 1) == 0 && ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)))) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
  }
  piVar1 = (int *)(local_res10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434ff830 FUN_1434ff830 body=168 status=ok
// SIG undefined FUN_1434ff830(void)

void FUN_1434ff830(longlong param_1)

{
  int *piVar1;
  char cVar2;
  ulonglong local_res8;
  longlong local_res10 [3];
  
  local_res10[0] = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x2f8);
  *(int *)(local_res10[0] + 0x18) = *(int *)(local_res10[0] + 0x18) + 1;
  cVar2 = FUN_14351a530(param_1,local_res10,0);
  if (cVar2 != '\0') {
    Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::CreateEventObject
              (param_1,&local_res8,local_res10,0,0);
    FUN_1434f0700(local_res8 + 0x50,param_1);
    FUN_14351af40(param_1,local_res8,0);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
  }
  piVar1 = (int *)(local_res10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434ff8e0 FUN_1434ff8e0 body=243 status=ok
// SIG undefined FUN_1434ff8e0(void)

void FUN_1434ff8e0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  longlong local_res10;
  
  local_res10 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x300) + 0x308);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4);
    (**(code **)(*plVar2 + 0x70))(plVar2,1);
    uVar4 = *(ulonglong *)(param_2 + 0x10 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4);
    if (uVar4 == 0) {
      uVar4 = *(ulonglong *)(param_2 + 8 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4);
    }
    if ((uVar4 & 1) != 0) {
      uVar4 = uVar4 - 1;
    }
    FUN_1434f0700(param_1 + 0x88,uVar4);
  }
  cVar3 = FUN_14351a530(param_1,&local_res10,0);
  if (cVar3 != '\0') {
    Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::CreateEventObject
              (param_1,&local_res8,&local_res10,0,0);
    FUN_1434f0700(local_res8 + 0x50,param_1);
    FUN_14351af40(param_1,local_res8,0);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
  }
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434ff9e0 FUN_1434ff9e0 body=39 status=ok
// SIG undefined FUN_1434ff9e0(void)

longlong * FUN_1434ff9e0(longlong param_1)

{
  void *_Dst;
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *in_RAX;
  longlong *plVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  if ((lVar1 != 0) &&
     (((in_RAX = *(longlong **)(lVar1 + 0x30), in_RAX == (longlong *)0x0 || (*in_RAX == 0)) &&
      (*(longlong *)(lVar1 + 0x48) == 0)))) {
    lVar2 = *(longlong *)(lVar1 + 0x28);
    plVar4 = (longlong *)0x0;
    if (lVar2 == 0) {
      return (longlong *)((ulonglong)in_RAX & 0xffffffffffffff00);
    }
    uVar3 = *(ulonglong *)(lVar2 + 0x48);
    uVar5 = 0;
    if (uVar3 != 0) {
      plVar4 = *(longlong **)(lVar2 + 0x40);
      while (*plVar4 != lVar1) {
        uVar5 = uVar5 + 1;
        plVar4 = plVar4 + 1;
        if (uVar3 <= uVar5) {
          return (longlong *)0x0;
        }
      }
      if (uVar3 == 1) {
        FUN_143613820(lVar2 + 0x40,lVar2 + 0x40,0);
        return (longlong *)0x1;
      }
      uVar3 = *(ulonglong *)(*(longlong *)(lVar2 + 0x40) + uVar5 * 8);
      if (uVar3 != 0) {
        if ((uVar3 & 1) == 0) {
          if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *(ulonglong *)(*(longlong *)(lVar2 + 0x40) + uVar5 * 8) = uVar3 - 1;
        }
      }
      _Dst = (void *)(*(longlong *)(lVar2 + 0x40) + uVar5 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),(*(longlong *)(lVar2 + 0x48) - uVar5) * 8 - 8);
      *(longlong *)(lVar2 + 0x48) = *(longlong *)(lVar2 + 0x48) + -1;
      plVar4 = (longlong *)0x1;
    }
    return plVar4;
  }
  return in_RAX;
}



// FUNCTION 1434ffa20 FUN_1434ffa20 body=183 status=ok
// SIG undefined FUN_1434ffa20(void)

void FUN_1434ffa20(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined1 local_res8 [8];
  
  if (*(longlong *)(param_1 + 0x98) == 0) {
    uVar1 = *param_2;
    if (uVar1 != 0) {
      if ((uVar1 & 1) == 0) {
        if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
          FUN_1434ef880();
        }
        *param_2 = 0;
        return;
      }
      *param_2 = uVar1 - 1;
      *param_2 = 0;
      return;
    }
  }
  else {
    puVar3 = (ulonglong *)FUN_1435ca8c0(*(undefined8 *)(param_1 + 0x40),local_res8);
    uVar1 = *param_2;
    uVar2 = *puVar3;
    if (uVar2 != uVar1) {
      if (uVar1 != 0) {
        if ((uVar1 & 1) != 0) {
          *param_2 = uVar1 - 1;
          *param_2 = uVar2;
          return;
        }
        if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
          FUN_1434ef880();
        }
      }
      *param_2 = uVar2;
    }
  }
  return;
}



// FUNCTION 1434ffb10 FUN_1434ffb10 body=77 status=ok
// SIG undefined FUN_1434ffb10(void)

void FUN_1434ffb10(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x88) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x88), plVar1 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*plVar1 + 0x218))();
    *param_2 = *(undefined4 *)(*(longlong *)(lVar2 + 0x70) + 0x104);
    return;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x80);
  return;
}



// FUNCTION 1434ffb70 FUN_1434ffb70 body=82 status=ok
// SIG undefined FUN_1434ffb70(void)

void FUN_1434ffb70(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x88) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x88), plVar1 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*plVar1 + 0x218))(plVar1);
    *param_2 = *(undefined4 *)
                (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x70) + 0x18) + 0x40) + 0x50);
    return;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x84);
  return;
}



// FUNCTION 1434ffc60 FUN_1434ffc60 body=120 status=ok
// SIG undefined FUN_1434ffc60(void)

void FUN_1434ffc60(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0x88);
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 1434ffce0 FUN_1434ffce0 body=135 status=ok
// SIG undefined FUN_1434ffce0(void)

void FUN_1434ffce0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    FUN_1433601c0(param_2,"unknown");
    return;
  }
  lVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x88) + 0x88) + 0x218))();
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x70) + 0x18) + 0x38);
  if (iVar1 == 1) {
    FUN_1433601c0(param_2,"application/x-shockwave-flash");
    return;
  }
  if (iVar1 == 2) {
    FUN_1433601c0(param_2,"image");
    return;
  }
  FUN_1433601c0(param_2,"unknown");
  return;
}



// FUNCTION 1434ffdb0 FUN_1434ffdb0 body=71 status=ok
// SIG undefined FUN_1434ffdb0(void)

void FUN_1434ffdb0(longlong param_1,int *param_2)

{
  longlong *plVar1;
  float fVar2;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x88) + 0x88) + 0x218))();
    fVar2 = (float)(**(code **)(*plVar1 + 0x38))(plVar1);
    *param_2 = (int)fVar2;
    return;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1434ffe00 FUN_1434ffe00 body=120 status=ok
// SIG undefined FUN_1434ffe00(void)

void FUN_1434ffe00(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0x90);
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 1434ffe80 FUN_1434ffe80 body=154 status=ok
// SIG undefined FUN_1434ffe80(void)

void FUN_1434ffe80(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x90) == 0) {
    lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218);
    lVar4 = lVar5 + 0x48;
    piVar1 = (int *)(lVar5 + 0x60);
    *piVar1 = *piVar1 + 2;
    lVar5 = *param_2;
  }
  else {
    plVar2 = (longlong *)
             (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x90) + 0x88) + 0x218))();
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
    uVar3 = (**(code **)(*plVar2 + 0x60))(plVar2);
    lVar4 = FUN_143360a60(*(undefined8 *)(lVar5 + 0x218),uVar3);
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 2;
    lVar5 = *param_2;
  }
  piVar1 = (int *)(lVar5 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar4;
  piVar1 = (int *)(lVar4 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar4);
  }
  return;
}



// FUNCTION 1434fff20 FUN_1434fff20 body=130 status=ok
// SIG undefined FUN_1434fff20(void)

void FUN_1434fff20(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  undefined1 local_res8 [8];
  
  puVar4 = (ulonglong *)FUN_1435ca830(*(undefined8 *)(param_1 + 0x40),local_res8);
  uVar1 = *param_2;
  uVar2 = *puVar4;
  if (uVar2 != uVar1) {
    if (uVar1 != 0) {
      if ((uVar1 & 1) == 0) {
        if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar1 - 1;
      }
    }
    *param_2 = uVar2;
  }
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x38);
                    /* WARNING: Could not recover jumptable at 0x0001434fff9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 8))(plVar3,2,"The method LoaderInfo::parametersGet() is not implemented\n")
  ;
  return;
}



// FUNCTION 1435000a0 FUN_1435000a0 body=67 status=ok
// SIG undefined FUN_1435000a0(void)

void FUN_1435000a0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    plVar2 = (longlong *)
             (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x88) + 0x88) + 0x218))();
    uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
    *param_2 = uVar1;
    return;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1435000f0 FUN_1435000f0 body=154 status=ok
// SIG undefined FUN_1435000f0(void)

void FUN_1435000f0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218);
    lVar4 = lVar5 + 0x48;
    piVar1 = (int *)(lVar5 + 0x60);
    *piVar1 = *piVar1 + 2;
    lVar5 = *param_2;
  }
  else {
    plVar2 = (longlong *)
             (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x88) + 0x88) + 0x218))();
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
    uVar3 = (**(code **)(*plVar2 + 0x60))(plVar2);
    lVar4 = FUN_143360a60(*(undefined8 *)(lVar5 + 0x218),uVar3);
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 2;
    lVar5 = *param_2;
  }
  piVar1 = (int *)(lVar5 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar4;
  piVar1 = (int *)(lVar4 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar4);
  }
  return;
}



// FUNCTION 143500190 FUN_143500190 body=71 status=ok
// SIG undefined FUN_143500190(void)

void FUN_143500190(longlong param_1,int *param_2)

{
  longlong *plVar1;
  float fVar2;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x88) + 0x88) + 0x218))();
    fVar2 = (float)(**(code **)(*plVar1 + 0x30))(plVar1);
    *param_2 = (int)fVar2;
    return;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 143500200 FUN_143500200 body=30 status=ok
// SIG undefined FUN_143500200(void)

undefined8 * FUN_143500200(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434ffa20();
  return param_2;
}



// FUNCTION 143500230 FUN_143500230 body=51 status=ok
// SIG undefined FUN_143500230(void)

undefined8 * FUN_143500230(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_2 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x38);
  (**(code **)(*plVar1 + 8))(plVar1,2,"The method LoaderInfo::bytesGet() is not implemented\n");
  return param_2;
}



// FUNCTION 143500270 FUN_143500270 body=30 status=ok
// SIG undefined FUN_143500270(void)

undefined8 * FUN_143500270(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434ffc60();
  return param_2;
}



// FUNCTION 1435002a0 FUN_1435002a0 body=30 status=ok
// SIG undefined FUN_1435002a0(void)

undefined8 * FUN_1435002a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434ffe00();
  return param_2;
}



// FUNCTION 1435002d0 FUN_1435002d0 body=51 status=ok
// SIG undefined FUN_1435002d0(void)

undefined8 * FUN_1435002d0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_2 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x38);
  (**(code **)(*plVar1 + 8))
            (plVar1,2,"The method LoaderInfo::sharedEventsGet() is not implemented\n");
  return param_2;
}



// FUNCTION 143500310 FUN_143500310 body=40 status=ok
// SIG undefined FUN_143500310(void)

undefined8 * FUN_143500310(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1434f0700(param_2,*(undefined8 *)(param_1 + 0xa0));
  return param_2;
}



// FUNCTION 143500340 UMaterialExpressionNamedRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionNamedRerouteBase(void)

undefined8 *
UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase(undefined8 *param_1)

{
  UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase();
  *param_1 = &PTR_FUN_145b24148;
  return param_1;
}



// FUNCTION 143500370 FUN_143500370 body=141 status=ok
// SIG undefined FUN_143500370(void)

void FUN_143500370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_1434ff5a0(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
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



// FUNCTION 143500410 FUN_143500410 body=33 status=ok
// SIG undefined FUN_143500410(void)

undefined8 * FUN_143500410(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143500440 FUN_143500440 body=227 status=ok
// SIG undefined FUN_143500440(void)

undefined8 * FUN_143500440(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b1c3d0);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase
              (puVar3,param_2,&PTR_DAT_145b1c3d0);
    *puVar3 = &PTR_FUN_145b24148;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 143500530 FUN_143500530 body=33 status=ok
// SIG undefined FUN_143500530(void)

undefined8 * FUN_143500530(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 143500590 FUN_143500590 body=73 status=ok
// SIG undefined FUN_143500590(void)

undefined8 * FUN_143500590(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *param_1 = &PTR_FUN_145b24520;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[9] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  return param_1;
}



// FUNCTION 1435005f0 FUN_1435005f0 body=62 status=ok
// SIG undefined FUN_1435005f0(void)

void FUN_1435005f0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    *param_2 = lVar2;
    return;
  }
  *param_2 = lVar2;
  return;
}



// FUNCTION 143500640 FUN_143500640 body=33 status=ok
// SIG undefined FUN_143500640(void)

undefined8 * FUN_143500640(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b245e0;
  return param_1;
}



// FUNCTION 143500670 FUN_143500670 body=213 status=ok
// SIG undefined FUN_143500670(void)

void FUN_143500670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar3 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar3,param_3);
    *(undefined4 *)(puVar3 + 8) = 0xffffffff;
    *puVar3 = &PTR_FUN_145b24520;
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(puVar3[5] + 0x98) + 0x10) + 0x218);
    puVar3[9] = lVar2 + 0x48;
    piVar1 = (int *)(lVar2 + 0x60);
    *piVar1 = *piVar1 + 1;
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar3);
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



// FUNCTION 143500750 FUN_143500750 body=33 status=ok
// SIG undefined FUN_143500750(void)

undefined8 * FUN_143500750(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143500780 FUN_143500780 body=214 status=ok
// SIG undefined FUN_143500780(void)

undefined8 * FUN_143500780(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1f598);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b1f598);
    *puVar2 = &PTR_FUN_145b245e0;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143500860 FUN_143500860 body=33 status=ok
// SIG undefined FUN_143500860(void)

undefined8 * FUN_143500860(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143500890 FUN_143500890 body=250 status=ok
// SIG undefined FUN_143500890(void)

undefined8 * FUN_143500890(undefined8 *param_1,longlong param_2)

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
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b216f0);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b216f0);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b23ad8;
    puVar5[10] = "linear";
    puVar5[0xb] = "radial";
  }
  return param_1;
}



// FUNCTION 143500990 FUN_143500990 body=55 status=ok
// SIG undefined FUN_143500990(void)

undefined8 * FUN_143500990(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = "linear";
  param_1[0xb] = "radial";
  return param_1;
}



// FUNCTION 1435009d0 FUN_1435009d0 body=43 status=ok
// SIG undefined FUN_1435009d0(void)

undefined8 * FUN_1435009d0(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b24658;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 143500a20 FUN_143500a20 body=56 status=ok
// SIG undefined FUN_143500a20(void)

void FUN_143500a20(longlong param_1,undefined1 param_2)

{
  FSettingsModule::ShutdownModule(*(undefined8 *)(param_1 + 0x48));
  Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x48));
  FUN_14337e300(*(undefined8 *)(param_1 + 0x40),param_2);
  return;
}



// FUNCTION 143500a60 FUN_143500a60 body=1559 status=ok
// SIG undefined FUN_143500a60(void)

void FUN_143500a60(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined8 local_138;
  undefined4 local_130;
  float fStack_12c;
  float local_128;
  float local_124;
  undefined4 local_120;
  float local_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  
  if (param_2 < 4) {
    return;
  }
  plVar4 = *(longlong **)(param_3 + 0x10);
  *(int *)(plVar4 + 3) = (int)plVar4[3] + 1;
  lVar11 = 0;
  do {
    lVar15 = lVar11 + 1;
    if (*(char *)(*plVar4 + lVar11) != "linear"[lVar11]) {
      lVar11 = 0;
      goto LAB_143500b10;
    }
    lVar11 = lVar15;
  } while (lVar15 != 7);
  goto LAB_143500b29;
  while (lVar11 = lVar15, lVar15 != 7) {
LAB_143500b10:
    lVar15 = lVar11 + 1;
    if (*(char *)(*plVar4 + lVar11) != "radial"[lVar11]) {
      lVar11 = *(longlong *)(param_1 + 0x28);
      uVar13 = 0x7d8;
      goto LAB_143500fcd;
    }
  }
LAB_143500b29:
  uVar7 = *(uint *)(param_3 + 0x20) & 0x1f;
  if (uVar7 == 0xc) {
    bVar16 = *(longlong *)(param_3 + 0x30) == 0;
LAB_143500b50:
    if (bVar16) {
      lVar11 = *(longlong *)(param_1 + 0x28);
      uVar13 = 0x7d7;
LAB_143500fcd:
      uVar5 = *(undefined8 *)(lVar11 + 0x98);
      uVar13 = FUN_1435c8e40(&local_138,uVar13,uVar5);
      FUN_1435cbef0(uVar5,uVar13);
      piVar1 = (int *)(CONCAT44(fStack_12c,local_130) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      goto LAB_143500ffc;
    }
  }
  else if (uVar7 == 10) {
    bVar16 = *(longlong *)(param_3 + 0x30) ==
             *(longlong *)(*(longlong *)(param_3 + 0x30) + 8) + 0x80;
    goto LAB_143500b50;
  }
  if (((byte)*(undefined4 *)(param_3 + 0x20) & 0x1f) != 0xc) goto LAB_143500ffc;
  lVar11 = *(longlong *)(param_3 + 0x30);
  if (((*(int *)(*(longlong *)(lVar11 + 0x28) + 0x90) != 7) ||
      ((*(byte *)(*(longlong *)(lVar11 + 0x28) + 0x88) >> 5 & 1) != 0)) ||
     (((byte)*(undefined4 *)(param_3 + 0x40) & 0x1f) != 0xc)) goto LAB_143500ffc;
  uVar7 = *(uint *)(param_3 + 0x40) & 0x1f;
  if (uVar7 == 0xc) {
    bVar16 = *(longlong *)(param_3 + 0x50) == 0;
LAB_143500bd6:
    if (!bVar16) goto LAB_143500bdd;
  }
  else {
    if (uVar7 == 10) {
      bVar16 = *(longlong *)(param_3 + 0x50) ==
               *(longlong *)(*(longlong *)(param_3 + 0x50) + 8) + 0x80;
      goto LAB_143500bd6;
    }
LAB_143500bdd:
    lVar15 = *(longlong *)(*(longlong *)(param_3 + 0x50) + 0x28);
    if ((*(int *)(lVar15 + 0x90) != 7) || ((*(byte *)(lVar15 + 0x88) >> 5 & 1) != 0))
    goto LAB_143500ffc;
  }
  local_138 = *(undefined8 *)(param_3 + 0x50);
  if (((byte)*(undefined4 *)(param_3 + 0x60) & 0x1f) != 0xc) goto LAB_143500ffc;
  uVar7 = *(uint *)(param_3 + 0x60) & 0x1f;
  if (uVar7 == 0xc) {
    bVar16 = *(longlong *)(param_3 + 0x70) == 0;
LAB_143500c43:
    if (!bVar16) goto LAB_143500c4a;
  }
  else {
    if (uVar7 == 10) {
      bVar16 = *(longlong *)(param_3 + 0x70) ==
               *(longlong *)(*(longlong *)(param_3 + 0x70) + 8) + 0x80;
      goto LAB_143500c43;
    }
LAB_143500c4a:
    lVar15 = *(longlong *)(*(longlong *)(param_3 + 0x70) + 0x28);
    if ((*(int *)(lVar15 + 0x90) != 7) || ((*(byte *)(lVar15 + 0x88) >> 5 & 1) != 0))
    goto LAB_143500ffc;
  }
  local_118 = *(undefined8 *)(param_3 + 0x70);
  if ((param_2 < 5) ||
     (lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98),
     cVar6 = FUN_1435c8b00(lVar15,param_3 + 0x80,"flash.geom.Matrix",*(undefined8 *)(lVar15 + 0x1c8)
                          ), cVar6 == '\0')) {
    uVar19 = 0;
    uVar20 = 0;
    local_108 = 0x3fc0000000000000;
    uStack_100 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar25 = 0;
    uVar26 = 0;
    uVar23 = 0;
    uVar24 = 0x3fc00000;
    local_e8 = 0;
    uStack_e0 = 0x3fc0000000000000;
    uVar29 = 0;
    uVar30 = 0x3fc00000;
    uVar27 = 0;
    uVar28 = 0;
  }
  else {
    puVar9 = (undefined8 *)
             Scaleform::GFx::AS3::Instances::fl_geom::Matrix::GetMatrix
                       (*(undefined8 *)(param_3 + 0x90),&local_108);
    uVar23 = (undefined4)*puVar9;
    uVar24 = (undefined4)((ulonglong)*puVar9 >> 0x20);
    uVar25 = (undefined4)puVar9[1];
    uVar26 = (undefined4)((ulonglong)puVar9[1] >> 0x20);
    uVar19 = (undefined4)puVar9[3];
    uVar20 = (undefined4)((ulonglong)puVar9[3] >> 0x20);
    uVar27 = (undefined4)puVar9[4];
    uVar28 = (undefined4)((ulonglong)puVar9[4] >> 0x20);
    uVar29 = (undefined4)puVar9[5];
    uVar30 = (undefined4)((ulonglong)puVar9[5] >> 0x20);
    uVar21 = (undefined4)puVar9[7];
    uVar22 = (undefined4)((ulonglong)puVar9[7] >> 0x20);
  }
  bVar16 = false;
  fVar17 = 0.0;
  if (5 < param_2) {
    lVar15 = *(longlong *)(param_3 + 0xb0);
    *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + 1;
    if (6 < param_2) {
      puVar9 = *(undefined8 **)(param_3 + 0xd0);
      *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
      iVar3 = *(int *)(puVar9 + 3);
      iVar8 = _guard_xfg_dispatch_icall_nop((char *)*puVar9,"linearRGB");
      bVar16 = iVar8 == 0;
      *(int *)(puVar9 + 3) = iVar3 + -1;
      if (iVar3 + -1 == 0) {
        FUN_14335f920(puVar9);
      }
      if (7 < param_2) {
        fVar18 = (float)*(double *)(param_3 + 0xf0);
        cVar6 = Scaleform::GFx::NumberUtil::IsNaN(SUB84((double)fVar18,0));
        if (cVar6 == '\0') {
          fVar17 = -1.0;
          if ((-1.0 <= fVar18) && (fVar17 = 1.0, fVar18 <= 1.0)) {
            fVar17 = fVar18;
          }
          goto LAB_143500daf;
        }
      }
      fVar17 = 0.0;
    }
LAB_143500daf:
    piVar1 = (int *)(lVar15 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar15);
    }
  }
  uVar10 = 0;
  uVar14 = uVar10;
  do {
    uVar12 = uVar14;
    uVar14 = uVar10;
    if (*(char *)(*plVar4 + uVar12) != "radial"[uVar12]) goto LAB_143500e04;
    uVar14 = uVar12 + 1;
  } while (uVar12 + 1 != 7);
  uVar14 = (ulonglong)((int)uVar12 - 5);
  if (fVar17 != 0.0) {
    uVar14 = 2;
  }
LAB_143500e04:
  lVar15 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38);
  if (lVar15 != 0) {
    uVar10 = FUN_143321870(lVar15,uVar14,*(undefined2 *)(lVar11 + 0x40),bVar16);
  }
  FUN_143499e40(param_4 + 0x18,uVar10);
  if (*(longlong *)(param_4 + 0x18) != 0) {
    *(float *)(*(longlong *)(param_4 + 0x18) + 0x28) = fVar17;
    FUN_143501080(lVar11,local_138,local_118,*(undefined8 *)(param_4 + 0x18));
    FUN_143500a20(param_1,1);
    local_130 = 0;
    *(undefined8 *)(param_4 + 0x20) = 0x3f800000;
    *(undefined8 *)(param_4 + 0x28) = 0;
    *(undefined4 *)(param_4 + 0x30) = 0;
    *(undefined8 *)(param_4 + 0x34) = 0x3f800000;
    *(undefined4 *)(param_4 + 0x3c) = 0;
    local_120 = 0;
    local_128 = (float)(double)CONCAT44(uVar28,uVar27);
    local_124 = (float)(double)CONCAT44(uVar30,uVar29);
    local_138 = CONCAT44((float)(double)CONCAT44(uVar26,uVar25),
                         (float)(double)CONCAT44(uVar24,uVar23));
    fStack_12c = (float)((double)CONCAT44(uVar20,uVar19) * 20.0);
    local_11c = (float)((double)CONCAT44(uVar22,uVar21) * 20.0);
    *(float *)(param_4 + 0x20) = *(float *)(param_4 + 0x20) * 3.0517578e-05;
    *(float *)(param_4 + 0x24) = *(float *)(param_4 + 0x24) * 3.0517578e-05;
    *(float *)(param_4 + 0x28) = *(float *)(param_4 + 0x28) * 3.0517578e-05;
    *(float *)(param_4 + 0x2c) = *(float *)(param_4 + 0x2c) * 3.0517578e-05;
    *(float *)(param_4 + 0x30) = *(float *)(param_4 + 0x30) * 3.0517578e-05;
    *(float *)(param_4 + 0x34) = *(float *)(param_4 + 0x34) * 3.0517578e-05;
    *(float *)(param_4 + 0x38) = *(float *)(param_4 + 0x38) * 3.0517578e-05;
    *(float *)(param_4 + 0x3c) = *(float *)(param_4 + 0x3c) * 3.0517578e-05;
    *(float *)(param_4 + 0x2c) = *(float *)(param_4 + 0x2c) + 0.5;
    if ((int)uVar14 == 0) {
      *(float *)(param_4 + 0x3c) = *(float *)(param_4 + 0x3c) + 0.0;
    }
    else {
      *(float *)(param_4 + 0x3c) = *(float *)(param_4 + 0x3c) + 0.5;
    }
    local_108 = 0x3f800000;
    uStack_100 = 0;
    local_f8 = 0x3f80000000000000;
    uStack_f0 = 0;
    Scaleform::Render::Matrix2x4<float>::SetInverse
              ((Matrix2x4<float> *)&local_108,(Matrix2x4<float> *)&local_138);
    Scaleform::Render::Matrix2x4<float>::Prepend
              ((Matrix2x4<float> *)(param_4 + 0x20),(Matrix2x4<float> *)&local_108);
  }
LAB_143500ffc:
  plVar2 = plVar4 + 3;
  *(int *)plVar2 = (int)*plVar2 + -1;
  if ((int)*plVar2 == 0) {
    FUN_14335f920(plVar4);
  }
  return;
}



// FUNCTION 143501080 FUN_143501080 body=434 status=ok
// SIG undefined FUN_143501080(void)

void FUN_143501080(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined1 local_res8 [8];
  undefined1 local_88;
  undefined1 local_87 [3];
  uint local_84;
  double local_80;
  double local_78 [10];
  
  uVar7 = 0;
  puVar1 = (ulonglong *)(param_1 + 0x40);
  if (*puVar1 != 0) {
    do {
      uVar5 = FUN_1434b4f50(puVar1,uVar7);
      FUN_143590eb0(uVar5,local_res8,&local_84);
      uVar3 = local_84;
      local_80 = 1.0;
      if (param_2 != 0) {
        uVar5 = FUN_1434b4f50(param_2 + 0x40,uVar7);
        FUN_143590af0(uVar5,&local_88,&local_80);
      }
      uVar4 = (uint)(longlong)(local_80 * 255.0);
      uVar8 = 0xff;
      if (uVar4 < 0xff) {
        uVar8 = uVar4;
      }
      dVar11 = (double)(longlong)(*puVar1 - 1);
      if ((longlong)(*puVar1 - 1) < 0) {
        dVar11 = dVar11 + 1.8446744073709552e+19;
      }
      local_78[0] = (double)(longlong)uVar7;
      if ((longlong)uVar7 < 0) {
        local_78[0] = local_78[0] + 1.8446744073709552e+19;
      }
      local_78[0] = (255.0 / dVar11) * local_78[0];
      if (param_3 != 0) {
        uVar5 = FUN_1434b4f50(param_3 + 0x40,uVar7);
        FUN_143590af0(uVar5,local_87,local_78);
      }
      lVar2 = *(longlong *)(param_4 + 0x20);
      fVar10 = (float)local_78[0];
      uVar6 = uVar7 & 0xffffffff;
      uVar7 = uVar7 + 1;
      if (255.0 <= fVar10) {
        fVar10 = 255.0;
      }
      fVar9 = 0.0;
      if (0.0 <= fVar10) {
        fVar9 = fVar10;
      }
      *(char *)(lVar2 + uVar6 * 8) = (char)(longlong)fVar9;
      *(uint *)(lVar2 + 4 + uVar6 * 8) = uVar8 << 0x18 | uVar3 & 0xffffff;
    } while (uVar7 < *puVar1);
  }
  return;
}



// FUNCTION 143501240 FUN_143501240 body=259 status=ok
// SIG undefined FUN_143501240(void)

void FUN_143501240(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  char param_5,char param_6)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  if ((param_3 != 0) && (lVar1 = FUN_1434f5cb0(param_3), lVar1 != 0)) {
    local_48 = 0x3f800000;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    local_38 = 0;
    uStack_34 = 0x3f800000;
    uStack_30 = 0;
    uStack_2c = 0;
    if (param_4 != 0) {
      puVar2 = (undefined4 *)FUN_143547410(param_4,local_28);
      local_48 = *puVar2;
      uStack_44 = puVar2[1];
      uStack_40 = puVar2[2];
      uStack_3c = puVar2[3];
      local_38 = puVar2[4];
      uStack_34 = puVar2[5];
      uStack_30 = puVar2[6];
      uStack_2c = puVar2[7];
    }
    if (param_6 == '\0') {
      iVar3 = 0x43 - (uint)(param_5 != '\0');
    }
    else {
      iVar3 = 0x41 - (uint)(param_5 != '\0');
    }
    FUN_14337e300(*(undefined8 *)(param_1 + 0x40),1);
    FUN_14337e530(*(undefined8 *)(param_1 + 0x40),iVar3,lVar1,&local_48);
  }
  return;
}



// FUNCTION 143501350 FUN_143501350 body=95 status=ok
// SIG undefined FUN_143501350(void)

void FUN_143501350(longlong param_1,undefined8 param_2,uint param_3,double param_4)

{
  FSettingsModule::ShutdownModule(*(undefined8 *)(param_1 + 0x48));
  Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x48));
  FUN_14337e300(*(undefined8 *)(param_1 + 0x40),1);
  FUN_14337e3d0(*(undefined8 *)(param_1 + 0x40),(int)(longlong)(param_4 * 255.0) << 0x18 | param_3);
  return;
}



// FUNCTION 1435013c0 FUN_1435013c0 body=73 status=ok
// SIG undefined FUN_1435013c0(void)

void FUN_1435013c0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14337eae0(*(undefined8 *)(param_1 + 0x40));
  FUN_143500a60(param_1,param_3,param_4,uVar1);
  FUN_14337e4d0(*(undefined8 *)(param_1 + 0x40));
  return;
}



// FUNCTION 143501410 clear body=41 status=ok
// SIG undefined clear(void)

void Scaleform::GFx::AS3::Instances::fl_display::Graphics::clear(longlong param_1)

{
  FUN_14337e870(*(undefined8 *)(param_1 + 0x40));
  DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x48));
  FSettingsModule::ShutdownModule(*(undefined8 *)(param_1 + 0x48));
  return;
}



// FUNCTION 143501440 FUN_143501440 body=102 status=ok
// SIG undefined FUN_143501440(void)

void FUN_143501440(longlong param_1,undefined8 param_2,double param_3,double param_4,double param_5,
                  double param_6)

{
  FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),(float)param_3 * 20.0,(float)param_4 * 20.0,
                (float)param_5 * 20.0,(float)param_6 * 20.0);
  Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x48));
  return;
}



// FUNCTION 1435014b0 FUN_1435014b0 body=732 status=ok
// SIG undefined FUN_1435014b0(void)

void FUN_1435014b0(longlong param_1,undefined8 param_2,double param_3,double param_4,double param_5)

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
  float fVar14;
  
  fVar6 = (float)param_3;
  fVar9 = (float)param_4;
  fVar2 = (float)param_5;
  fVar1 = fVar9 * 20.0;
  fVar11 = (fVar2 + fVar6) * 20.0;
  FUN_14337ee50(*(undefined8 *)(param_1 + 0x40),fVar11,fVar1);
  fVar13 = fVar2 * 0.70710677;
  fVar10 = fVar2 * 0.41421357;
  fVar14 = (fVar13 + fVar6) * 20.0;
  fVar8 = (fVar10 + fVar9) * 20.0;
  fVar4 = (fVar13 + fVar9) * 20.0;
  FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar11,fVar8,fVar14,fVar4);
  fVar3 = (fVar2 + fVar9) * 20.0;
  fVar12 = (fVar10 + fVar6) * 20.0;
  FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar12,fVar3,fVar6 * 20.0,fVar3);
  fVar5 = (fVar6 - fVar13) * 20.0;
  fVar7 = (fVar6 - fVar10) * 20.0;
  FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar7,fVar3,fVar5,fVar4);
  fVar3 = (fVar6 - fVar2) * 20.0;
  FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar3,fVar8,fVar3,fVar1);
  fVar4 = (fVar9 - fVar13) * 20.0;
  fVar8 = (fVar9 - fVar10) * 20.0;
  FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar3,fVar8,fVar5,fVar4);
  fVar3 = (fVar9 - fVar2) * 20.0;
  FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar7,fVar3,fVar6 * 20.0,fVar3);
  FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar12,fVar3,fVar14,fVar4);
  FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar11,fVar8,fVar11,fVar1);
  Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x48));
  return;
}



// FUNCTION 1435017a0 FUN_1435017a0 body=821 status=ok
// SIG undefined FUN_1435017a0(void)

void FUN_1435017a0(longlong param_1,undefined8 param_2,double param_3,double param_4,double param_5,
                  double param_6)

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
  
  fVar4 = (float)param_5 * 0.5;
  fVar5 = (float)param_6 * 0.5;
  fVar11 = (float)param_3 + fVar4;
  fVar12 = (float)param_4 + fVar5;
  fVar3 = fVar12 * 20.0;
  fVar1 = (fVar4 + fVar11) * 20.0;
  FUN_14337ee50(*(undefined8 *)(param_1 + 0x40),fVar1,fVar3);
  fVar10 = (fVar5 * 0.70710677 + fVar12) * 20.0;
  fVar2 = (fVar4 * 0.70710677 + fVar11) * 20.0;
  fVar9 = (fVar5 * 0.41421357 + fVar12) * 20.0;
  FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar1,fVar9,fVar2,fVar10);
  fVar6 = (fVar5 + fVar12) * 20.0;
  fVar13 = (fVar4 * 0.41421357 + fVar11) * 20.0;
  FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar13,fVar6,fVar11 * 20.0,fVar6);
  fVar7 = (fVar11 - fVar4 * 0.70710677) * 20.0;
  fVar8 = (fVar11 - fVar4 * 0.41421357) * 20.0;
  FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar8,fVar6,fVar7,fVar10);
  fVar10 = (fVar11 - fVar4) * 20.0;
  FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar10,fVar9,fVar10,fVar3);
  fVar4 = (fVar12 - fVar5 * 0.70710677) * 20.0;
  fVar6 = (fVar12 - fVar5 * 0.41421357) * 20.0;
  FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar10,fVar6,fVar7,fVar4);
  fVar5 = (fVar12 - fVar5) * 20.0;
  FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar8,fVar5,fVar11 * 20.0,fVar5);
  FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar13,fVar5,fVar2,fVar4);
  FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar1,fVar6,fVar1,fVar3);
  Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x48));
  return;
}



// FUNCTION 143501ae0 FUN_143501ae0 body=2280 status=ok
// SIG undefined FUN_143501ae0(void)

void FUN_143501ae0(longlong param_1,undefined8 param_2,longlong param_3)

{
  double dVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  uint local_res20 [2];
  uint local_228 [2];
  undefined8 local_220;
  longlong local_218;
  uint local_208 [2];
  undefined8 local_200;
  uint local_1e8 [2];
  undefined8 local_1e0;
  uint local_1c8 [2];
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  uint local_1a8 [4];
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  uint local_188 [4];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  uint local_168 [4];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  uint local_e8 [4];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  bVar8 = false;
  Scaleform::GFx::AS3::Instances::fl_events::MouseEvent::deltaGet(param_3,local_res20);
  uVar16 = 0;
  if (local_res20[0] != 0) {
    do {
      local_228[0] = 0;
      local_220 = 0;
      if ((uint)uVar16 < *(uint *)(param_3 + 0x60)) {
        FUN_143590140(local_228,uVar16 * 0x20 + *(longlong *)(param_3 + 0x58));
      }
      lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
      uVar5 = *(undefined8 *)(lVar17 + 0x1c8);
      cVar9 = FUN_1435c8b00(lVar17,local_228,"flash.display.GraphicsBitmapFill",uVar5);
      if (cVar9 != '\0') {
        uVar11 = *(undefined8 *)(local_218 + 0x48);
        uVar6 = *(undefined8 *)(local_218 + 0x40);
        uVar2 = *(undefined1 *)(local_218 + 0x51);
        uVar3 = *(undefined1 *)(local_218 + 0x50);
        uVar10 = FUN_143590540();
        FUN_143501240(param_1,uVar10,uVar6,uVar11,uVar3,uVar2);
        bVar8 = true;
      }
      cVar9 = FUN_1435c8b00(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_228,
                            "flash.display.GraphicsEndFill",uVar5);
      if (cVar9 != '\0') {
        FUN_143590540();
        FSettingsModule::ShutdownModule(*(undefined8 *)(param_1 + 0x48));
        Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x48));
        FUN_14337e300(*(undefined8 *)(param_1 + 0x40),1);
        FUN_14337ee10(*(undefined8 *)(param_1 + 0x40));
        bVar8 = false;
      }
      cVar9 = FUN_1435c8b00(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_228,
                            "flash.display.GraphicsGradientFill",uVar5);
      lVar17 = local_218;
      if (cVar9 != '\0') {
        puVar12 = local_1c8;
        local_208[0] = 0;
        lVar13 = 8;
        local_200 = 0;
        do {
          *puVar12 = 0;
          puVar12[2] = 0;
          puVar12[3] = 0;
          puVar12 = puVar12 + 8;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        FUN_143590250(local_1c8,local_218 + 0x78);
        FUN_1435903c0(local_1a8,*(undefined8 *)(lVar17 + 0x48));
        FUN_1435903c0(local_188,*(undefined8 *)(lVar17 + 0x40));
        FUN_1435903c0(local_168,*(undefined8 *)(lVar17 + 0x68));
        FUN_1435903c0(local_148,*(undefined8 *)(lVar17 + 0x60));
        FUN_143590250(local_128,lVar17 + 0x70);
        FUN_143590250(local_108,lVar17 + 0x58);
        uVar11 = *(undefined8 *)(lVar17 + 0x50);
        if (9 < ((byte)local_e8[0] & 0x1f)) {
          if ((local_e8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_e8);
          }
          else {
            FUN_143592150();
          }
        }
        local_c8._0_4_ = (undefined4)uVar11;
        local_c8._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
        local_e8[0] = local_e8[0] & 0xffffffe4 | 4;
        local_d8 = (undefined4)local_c8;
        uStack_d4 = local_c8._4_4_;
        uStack_d0 = uStack_c0;
        uStack_cc = uStack_bc;
        local_c8 = uVar11;
        uVar11 = FUN_14337eae0(*(undefined8 *)(param_1 + 0x40));
        FUN_143500a60(param_1,8,local_1c8,uVar11);
        FUN_14337e4d0(*(undefined8 *)(param_1 + 0x40));
        bVar8 = true;
        puVar15 = &local_c8;
        lVar17 = 8;
        do {
          puVar12 = (uint *)(puVar15 + -4);
          puVar15 = puVar15 + -4;
          lVar17 = lVar17 + -1;
          if (9 < ((byte)*puVar12 & 0x1f)) {
            if ((*puVar12 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar15);
            }
            else {
              FUN_143592150();
            }
          }
        } while (lVar17 != 0);
        if (9 < ((byte)local_208[0] & 0x1f)) {
          if ((local_208[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_208);
          }
          else {
            FUN_143592150();
          }
        }
      }
      cVar9 = FUN_1435c8b00(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_228,
                            "flash.display.GraphicsPath",uVar5);
      if (cVar9 != '\0') {
        uVar11 = *(undefined8 *)(local_218 + 0x48);
        lVar17 = local_218 + 0x50;
        uVar6 = *(undefined8 *)(local_218 + 0x40);
        uVar10 = FUN_143590540();
        FUN_1435023d0(param_1,uVar10,uVar6,uVar11,lVar17);
        bVar8 = true;
      }
      cVar9 = FUN_1435c8b00(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_228,
                            "flash.display.GraphicsSolidFill",uVar5);
      if (cVar9 != '\0') {
        dVar1 = *(double *)(local_218 + 0x40);
        uVar18 = *(uint *)(local_218 + 0x48);
        FUN_143590540();
        FSettingsModule::ShutdownModule(*(undefined8 *)(param_1 + 0x48));
        Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x48));
        FUN_14337e300(*(undefined8 *)(param_1 + 0x40),1);
        FUN_14337e3d0(*(undefined8 *)(param_1 + 0x40),
                      (int)(longlong)(dVar1 * 255.0) << 0x18 | uVar18);
        bVar8 = true;
      }
      cVar9 = FUN_1435c8b00(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_228,
                            "flash.display.GraphicsStroke",uVar5);
      lVar17 = local_218;
      if ((cVar9 != '\0') && (*(longlong *)(local_218 + 0x48) != 0)) {
        local_1e8[0] = 0;
        local_1e0 = 0;
        FUN_143590450(local_1e8);
        cVar9 = FUN_1435c8b00(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_1e8,
                              "flash.display.GraphicsBitmapFill",uVar5);
        if (cVar9 != '\0') {
          plVar7 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x38);
          (**(code **)(*plVar7 + 8))
                    (plVar7,2,"The method GraphicsStroke w/GraphicsBitmapFill is not implemented\n")
          ;
        }
        FUN_1435c8b00(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_1e8,
                      "flash.display.GraphicsEndFill",uVar5);
        cVar9 = FUN_1435c8b00(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_1e8,
                              "flash.display.GraphicsGradient",uVar5);
        if (cVar9 != '\0') {
          lVar13 = *(longlong *)(lVar17 + 0x48);
          puVar12 = local_1c8;
          lVar14 = 8;
          do {
            *puVar12 = 0;
            puVar12[2] = 0;
            puVar12[3] = 0;
            puVar12 = puVar12 + 8;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          local_208[0] = 0;
          local_200 = 0;
          FUN_143590250(local_1c8,lVar13 + 0x78);
          FUN_1435903c0(local_1a8,*(undefined8 *)(lVar13 + 0x48));
          FUN_1435903c0(local_188,*(undefined8 *)(lVar13 + 0x40));
          FUN_1435903c0(local_168,*(undefined8 *)(lVar13 + 0x68));
          FUN_1435903c0(local_148,*(undefined8 *)(lVar13 + 0x60));
          FUN_143590250(local_128,lVar13 + 0x70);
          FUN_143590250(local_108,lVar13 + 0x58);
          uVar11 = *(undefined8 *)(lVar13 + 0x50);
          if (9 < ((byte)local_e8[0] & 0x1f)) {
            if ((local_e8[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_e8);
            }
            else {
              FUN_143592150();
            }
          }
          local_b8._0_4_ = (undefined4)uVar11;
          local_b8._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
          local_e8[0] = local_e8[0] & 0xffffffe4 | 4;
          local_d8 = (undefined4)local_b8;
          uStack_d4 = local_b8._4_4_;
          uStack_d0 = uStack_b0;
          uStack_cc = uStack_ac;
          local_b8 = uVar11;
          uVar11 = FUN_14337ec20(*(undefined8 *)(param_1 + 0x40));
          FUN_143500a60(param_1,8,local_1c8,uVar11);
          if (9 < ((byte)local_208[0] & 0x1f)) {
            if ((local_208[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_208);
            }
            else {
              FUN_143592150();
            }
          }
          lVar13 = 8;
          puVar15 = &local_c8;
          do {
            puVar12 = (uint *)(puVar15 + -4);
            puVar15 = puVar15 + -4;
            lVar13 = lVar13 + -1;
            if (9 < ((byte)*puVar12 & 0x1f)) {
              if ((*puVar12 >> 9 & 1) == 0) {
                FUN_1435920c0(puVar15);
              }
              else {
                FUN_143592150();
              }
            }
          } while (lVar13 != 0);
        }
        cVar9 = FUN_1435c8b00(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_1e8,
                              "flash.display.GraphicsSolidFill",uVar5);
        if (cVar9 != '\0') {
          lVar13 = *(longlong *)(lVar17 + 0x48);
          puVar12 = local_1c8;
          lVar14 = 8;
          do {
            *puVar12 = 0;
            puVar12[2] = 0;
            puVar12[3] = 0;
            puVar12 = puVar12 + 8;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          uVar5 = *(undefined8 *)(lVar17 + 0x70);
          local_208[0] = 0;
          local_200 = 0;
          if (9 < ((byte)local_1c8[0] & 0x1f)) {
            if ((local_1c8[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_1c8);
            }
            else {
              FUN_143592150();
            }
          }
          local_a8._0_4_ = (undefined4)uVar5;
          local_a8._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_1c8[0] = local_1c8[0] & 0xffffffe4 | 4;
          local_1b8 = (undefined4)local_a8;
          uStack_1b4 = local_a8._4_4_;
          uStack_1b0 = uStack_a0;
          uStack_1ac = uStack_9c;
          uVar4 = *(undefined4 *)(lVar13 + 0x48);
          local_a8 = uVar5;
          if (9 < ((byte)local_1a8[0] & 0x1f)) {
            if ((local_1a8[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_1a8);
            }
            else {
              FUN_143592150();
            }
          }
          local_1a8[0] = local_1a8[0] & 0xffffffe3 | 3;
          uStack_194 = uStack_94;
          uStack_190 = uStack_90;
          uStack_18c = uStack_8c;
          uVar5 = *(undefined8 *)(lVar13 + 0x40);
          local_198 = uVar4;
          local_98 = uVar4;
          if (9 < ((byte)local_188[0] & 0x1f)) {
            if ((local_188[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_188);
            }
            else {
              FUN_143592150();
            }
          }
          uVar2 = *(undefined1 *)(lVar17 + 0x60);
          local_188[0] = local_188[0] & 0xffffffe4 | 4;
          local_88._0_4_ = (undefined4)uVar5;
          local_88._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_178 = (undefined4)local_88;
          uStack_174 = local_88._4_4_;
          uStack_170 = uStack_80;
          uStack_16c = uStack_7c;
          local_88 = uVar5;
          if (9 < ((byte)local_168[0] & 0x1f)) {
            if ((local_168[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_168);
            }
            else {
              FUN_143592150();
            }
          }
          local_78 = CONCAT31(local_78._1_3_,uVar2);
          local_168[0] = local_168[0] & 0xffffffe1 | 1;
          local_158 = local_78;
          uStack_154 = uStack_74;
          uStack_150 = uStack_70;
          uStack_14c = uStack_6c;
          FUN_143590250(local_148,lVar17 + 0x68);
          FUN_143590250(local_128,lVar17 + 0x40);
          FUN_143590250(local_108,lVar17 + 0x50);
          uVar5 = *(undefined8 *)(lVar17 + 0x58);
          if (9 < ((byte)local_e8[0] & 0x1f)) {
            if ((local_e8[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_e8);
            }
            else {
              FUN_143592150();
            }
          }
          local_68._0_4_ = (undefined4)uVar5;
          local_68._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_e8[0] = local_e8[0] & 0xffffffe4 | 4;
          local_d8 = (undefined4)local_68;
          uStack_d4 = local_68._4_4_;
          uStack_d0 = uStack_60;
          uStack_cc = uStack_5c;
          local_68 = uVar5;
          FUN_1435038c0(param_1,local_208,8,local_1c8);
          if (9 < ((byte)local_208[0] & 0x1f)) {
            if ((local_208[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_208);
            }
            else {
              FUN_143592150();
            }
          }
          lVar17 = 8;
          puVar15 = &local_c8;
          do {
            puVar12 = (uint *)(puVar15 + -4);
            puVar15 = puVar15 + -4;
            lVar17 = lVar17 + -1;
            if (9 < ((byte)*puVar12 & 0x1f)) {
              if ((*puVar12 >> 9 & 1) == 0) {
                FUN_1435920c0(puVar15);
              }
              else {
                FUN_143592150();
              }
            }
          } while (lVar17 != 0);
        }
        if (9 < ((byte)local_1e8[0] & 0x1f)) {
          if ((local_1e8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_1e8);
          }
          else {
            FUN_143592150();
          }
        }
      }
      if (9 < ((byte)local_228[0] & 0x1f)) {
        if ((local_228[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_228);
        }
        else {
          FUN_143592150();
        }
      }
      uVar18 = (uint)uVar16 + 1;
      uVar16 = (ulonglong)uVar18;
    } while (uVar18 < local_res20[0]);
    if (bVar8) {
      FUN_143590540();
      FSettingsModule::ShutdownModule(*(undefined8 *)(param_1 + 0x48));
      Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x48));
      FUN_14337e300(*(undefined8 *)(param_1 + 0x40),1);
      FUN_14337ee10(*(undefined8 *)(param_1 + 0x40));
    }
  }
  return;
}



// FUNCTION 1435023d0 FUN_1435023d0 body=1420 status=ok
// SIG undefined FUN_1435023d0(void)

void FUN_1435023d0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint local_198;
  undefined1 local_194 [4];
  uint local_190 [2];
  undefined8 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  uint local_170 [2];
  uint local_168 [2];
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  uint local_148 [2];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128 [2];
  undefined8 local_120;
  longlong lStack_118;
  uint local_110 [2];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  uint local_f0 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  Scaleform::GFx::AS3::Instances::fl_events::MouseEvent::deltaGet(param_3,local_170);
  Scaleform::GFx::AS3::Instances::fl_events::MouseEvent::deltaGet(param_4,&local_198);
  uVar5 = 0;
  if (local_170[0] != 0) {
    uVar8 = 4;
    uVar9 = 2;
    uVar10 = uVar5;
    uVar11 = uVar5;
    do {
      uVar7 = (uint)uVar5;
      local_190[0] = 0;
      local_188 = 0;
      if ((uint)uVar10 < *(uint *)(param_3 + 0x60)) {
        local_180 = *(undefined4 *)(*(longlong *)(param_3 + 0x58) + uVar11);
        local_190[0] = 2;
        uStack_17c = uStack_cc;
        uStack_178 = uStack_c8;
        uStack_174 = uStack_c4;
        local_d0 = local_180;
      }
      FUN_143590b70(local_190,local_194,local_128);
      switch(local_128[0]) {
      case 0:
        goto switchD_1435024ac_caseD_0;
      case 1:
        break;
      case 2:
        goto LAB_1435025c7;
      case 3:
        if (local_198 < uVar8) goto LAB_14350285c;
        local_f0[0] = 0;
        local_e8 = 0;
        local_110[0] = 0;
        local_108 = 0;
        local_168[0] = 0;
        local_160 = 0;
        local_148[0] = 0;
        local_140 = 0;
        if (uVar7 < *(uint *)(param_4 + 0x60)) {
          local_e0 = *(undefined8 *)(*(longlong *)(param_4 + 0x58) + uVar5 * 8);
          local_f0[0] = 4;
          uStack_d8 = uStack_78;
          local_80 = local_e0;
        }
        if (uVar7 + 1 < *(uint *)(param_4 + 0x60)) {
          local_100 = *(undefined8 *)(*(longlong *)(param_4 + 0x58) + (ulonglong)(uVar7 + 1) * 8);
          local_110[0] = 4;
          uStack_f8 = uStack_68;
          local_70 = local_100;
        }
        if (uVar7 + 2 < *(uint *)(param_4 + 0x60)) {
          local_158 = *(undefined8 *)(*(longlong *)(param_4 + 0x58) + (ulonglong)(uVar7 + 2) * 8);
          local_168[0] = 4;
          uStack_150 = uStack_58;
          local_60 = local_158;
        }
        if (uVar7 + 3 < *(uint *)(param_4 + 0x60)) {
          local_138 = *(undefined8 *)(*(longlong *)(param_4 + 0x58) + (ulonglong)(uVar7 + 3) * 8);
          local_148[0] = 4;
          uStack_130 = lStack_118;
          local_120 = local_138;
        }
        uVar5 = (ulonglong)(uVar7 + 4);
        uVar9 = uVar9 + 4;
        uVar8 = uVar8 + 4;
        FUN_1435169e0(param_1,local_e0,local_100,local_158,local_138);
        if (9 < ((byte)local_148[0] & 0x1f)) {
          if ((local_148[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_148);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)local_168[0] & 0x1f)) {
          if ((local_168[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_168);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)local_110[0] & 0x1f)) {
          if ((local_110[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_110);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)local_f0[0] & 0x1f)) {
          puVar6 = local_f0;
          if ((local_f0[0] >> 9 & 1) != 0) {
            FUN_143592150(puVar6);
            goto switchD_1435024ac_caseD_0;
          }
          goto LAB_143502818;
        }
        goto switchD_1435024ac_caseD_0;
      case 4:
        if (local_198 < uVar9) goto LAB_14350285c;
        uVar7 = uVar7 + 2;
        uVar9 = uVar9 + 2;
        uVar8 = uVar8 + 2;
        break;
      case 5:
        if (local_198 < uVar9) goto LAB_14350285c;
        uVar7 = uVar7 + 2;
        uVar9 = uVar9 + 2;
        uVar8 = uVar8 + 2;
LAB_1435025c7:
        if (local_198 < uVar9) goto LAB_14350285c;
        local_168[0] = 0;
        local_160 = 0;
        local_148[0] = 0;
        local_140 = 0;
        if (uVar7 < *(uint *)(param_4 + 0x60)) {
          local_158 = *(undefined8 *)(*(longlong *)(param_4 + 0x58) + (ulonglong)uVar7 * 8);
          local_168[0] = 4;
          uStack_150 = CONCAT44(uStack_94,uStack_98);
          local_a0 = local_158;
        }
        if (uVar7 + 1 < *(uint *)(param_4 + 0x60)) {
          local_138 = *(undefined8 *)(*(longlong *)(param_4 + 0x58) + (ulonglong)(uVar7 + 1) * 8);
          local_148[0] = 4;
          uStack_130 = CONCAT44(uStack_84,uStack_88);
          local_90 = local_138;
        }
        uVar5 = (ulonglong)(uVar7 + 2);
        uVar9 = uVar9 + 2;
        uVar8 = uVar8 + 2;
        FUN_143516a70(param_1,local_158,local_138);
        if (9 < ((byte)local_148[0] & 0x1f)) {
          if ((local_148[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_148);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)local_168[0] & 0x1f)) {
          puVar6 = local_168;
          if ((local_168[0] >> 9 & 1) != 0) {
            FUN_143592150(puVar6);
            goto switchD_1435024ac_caseD_0;
          }
          goto LAB_143502818;
        }
        goto switchD_1435024ac_caseD_0;
      default:
        uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
        uVar4 = FUN_1435c8e40(&local_120,0x7df,uVar2);
        FUN_1435cbef0(uVar2,uVar4);
        piVar1 = (int *)(lStack_118 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (((byte)local_190[0] & 0x1f) < 10) {
          return;
        }
        if ((local_190[0] >> 9 & 1) != 0) {
          FUN_143592150();
          return;
        }
        FUN_1435920c0(local_190);
        return;
      }
      if (local_198 < uVar9) {
LAB_14350285c:
        if (9 < ((byte)local_190[0] & 0x1f)) {
          if ((local_190[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_190);
          }
          else {
            FUN_143592150();
          }
        }
        uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
        uVar4 = FUN_1435c8e40(&local_120,0x7df,uVar2);
        FUN_1435cbef0(uVar2,uVar4);
        piVar1 = (int *)(lStack_118 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return;
        }
        FUN_14335f920();
        return;
      }
      local_148[0] = 0;
      local_140 = 0;
      local_168[0] = 0;
      local_160 = 0;
      if (uVar7 < *(uint *)(param_4 + 0x60)) {
        local_138 = *(undefined8 *)(*(longlong *)(param_4 + 0x58) + (ulonglong)uVar7 * 8);
        local_148[0] = 4;
        uStack_130 = CONCAT44(uStack_b4,uStack_b8);
        local_c0 = local_138;
      }
      uVar2 = local_138;
      if (uVar7 + 1 < *(uint *)(param_4 + 0x60)) {
        local_158 = *(undefined8 *)(*(longlong *)(param_4 + 0x58) + (ulonglong)(uVar7 + 1) * 8);
        local_168[0] = 4;
        uStack_150 = CONCAT44(uStack_a4,uStack_a8);
        local_b0 = local_158;
      }
      uVar4 = local_158;
      uVar5 = (ulonglong)(uVar7 + 2);
      uVar9 = uVar9 + 2;
      uVar8 = uVar8 + 2;
      uVar3 = FUN_143590540();
      FUN_143503d20(param_1,uVar3,uVar2,uVar4);
      if (9 < ((byte)local_168[0] & 0x1f)) {
        if ((local_168[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_168);
        }
        else {
          FUN_143592150();
        }
      }
      if (9 < ((byte)local_148[0] & 0x1f)) {
        puVar6 = local_148;
        if ((local_148[0] >> 9 & 1) == 0) {
LAB_143502818:
          FUN_1435920c0(puVar6);
        }
        else {
          FUN_143592150();
        }
      }
switchD_1435024ac_caseD_0:
      if (9 < ((byte)local_190[0] & 0x1f)) {
        if ((local_190[0] >> 9 & 1) == 0) {
          FUN_1435920c0();
        }
        else {
          FUN_143592150();
        }
      }
      uVar7 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar7;
      uVar11 = uVar11 + 4;
    } while (uVar7 < local_170[0]);
  }
  return;
}



// FUNCTION 143502980 FUN_143502980 body=398 status=ok
// SIG undefined FUN_143502980(void)

void FUN_143502980(longlong param_1,undefined8 param_2,double param_3,double param_4,double param_5,
                  double param_6)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 local_58 [8];
  longlong local_50;
  
  if ((((ulonglong)param_5 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
     (((ulonglong)param_5 & 0xfffffffffffff) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x28);
  }
  else {
    if ((((ulonglong)param_6 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
       (((ulonglong)param_6 & 0xfffffffffffff) == 0)) {
      fVar8 = (float)(param_3 * 20.0);
      fVar6 = (float)((param_3 + param_5) * 20.0);
      fVar7 = (float)(param_4 * 20.0);
      fVar5 = (float)((param_4 + param_6) * 20.0);
      FUN_14337ee50(*(undefined8 *)(param_1 + 0x40),fVar8,fVar7);
      FUN_14337ef60(*(undefined8 *)(param_1 + 0x40),fVar6,fVar7);
      FUN_14337ef60(*(undefined8 *)(param_1 + 0x40),fVar6,fVar5);
      FUN_14337ef60(*(undefined8 *)(param_1 + 0x40),fVar8,fVar5);
      FUN_14337ef60(*(undefined8 *)(param_1 + 0x40),fVar8,fVar7);
      Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x48));
      return;
    }
    lVar3 = *(longlong *)(param_1 + 0x28);
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x98);
  uVar4 = FUN_1435c8e40(local_58,0x5e4,uVar2);
  FUN_1435cbef0(uVar2,uVar4);
  piVar1 = (int *)(local_50 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return;
  }
  FUN_14335f920();
  return;
}



// FUNCTION 143502b20 FUN_143502b20 body=1340 status=ok
// SIG undefined FUN_143502b20(void)

void FUN_143502b20(longlong param_1,undefined8 param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
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
  float fVar19;
  float fVar20;
  undefined1 local_b8 [8];
  longlong local_b0;
  
  if ((((ulonglong)param_5 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
     (((ulonglong)param_5 & 0xfffffffffffff) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x28);
  }
  else {
    if ((((ulonglong)param_6 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
       (((ulonglong)param_6 & 0xfffffffffffff) == 0)) {
      if ((((ulonglong)param_7 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
         (((ulonglong)param_7 & 0xfffffffffffff) != 0)) {
        uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
        uVar4 = FUN_1435c8e40(local_b8,0x5e4,uVar2);
        FUN_1435cbef0(uVar2,uVar4);
        piVar1 = (int *)(local_b0 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return;
        }
        FUN_14335f920();
        return;
      }
      if ((((ulonglong)param_8 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
         (((ulonglong)param_8 & 0xfffffffffffff) != 0)) {
        param_8 = param_7;
      }
      fVar5 = (float)param_3;
      fVar10 = (float)param_4;
      fVar9 = (float)param_5 + fVar5;
      fVar8 = (float)param_6 * 0.5;
      fVar16 = (float)param_6 + fVar10;
      fVar6 = (float)param_5 * 0.5;
      fVar11 = (float)param_8 * 0.5;
      if (fVar8 <= (float)param_8 * 0.5) {
        fVar11 = fVar8;
      }
      fVar8 = (float)param_7 * 0.5;
      if (fVar6 <= (float)param_7 * 0.5) {
        fVar8 = fVar6;
      }
      fVar13 = fVar16 - fVar11;
      fVar12 = fVar9 - fVar8;
      FUN_14337ee50(*(undefined8 *)(param_1 + 0x40),fVar9 * 20.0,fVar13 * 20.0);
      fVar20 = (fVar11 * 0.70710677 + fVar13) * 20.0;
      fVar19 = (fVar11 * 0.41421357 + fVar13) * 20.0;
      fVar9 = (fVar8 * 0.70710677 + fVar12) * 20.0;
      fVar6 = (fVar12 + fVar8) * 20.0;
      FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar6,fVar19,fVar9,fVar20);
      fVar14 = (fVar13 + fVar11) * 20.0;
      fVar7 = (fVar8 * 0.41421357 + fVar12) * 20.0;
      FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar7,fVar14,fVar12 * 20.0,fVar14);
      fVar18 = fVar8 + fVar5;
      FUN_14337ef60(*(undefined8 *)(param_1 + 0x40),fVar18 * 20.0,fVar16 * 20.0);
      fVar15 = (fVar18 - fVar8 * 0.70710677) * 20.0;
      fVar17 = (fVar18 - fVar8 * 0.41421357) * 20.0;
      FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar17,fVar14,fVar15,fVar20);
      fVar14 = (fVar18 - fVar8) * 20.0;
      FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar14,fVar19,fVar14,fVar13 * 20.0);
      fVar16 = fVar11 + fVar10;
      FUN_14337ef60(*(undefined8 *)(param_1 + 0x40),fVar5 * 20.0,fVar16 * 20.0);
      fVar8 = (fVar16 - fVar11 * 0.41421357) * 20.0;
      fVar5 = (fVar16 - fVar11 * 0.70710677) * 20.0;
      FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar14,fVar8,fVar15,fVar5);
      fVar11 = (fVar16 - fVar11) * 20.0;
      FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar17,fVar11,fVar18 * 20.0,fVar11);
      FUN_14337ef60(*(undefined8 *)(param_1 + 0x40),fVar12 * 20.0,fVar10 * 20.0);
      FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar7,fVar11,fVar9,fVar5);
      FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar6,fVar8,fVar6,fVar16 * 20.0);
      Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x48));
      return;
    }
    lVar3 = *(longlong *)(param_1 + 0x28);
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x98);
  uVar4 = FUN_1435c8e40(local_b8,0x5e4,uVar2);
  FUN_1435cbef0(uVar2,uVar4);
  piVar1 = (int *)(local_b0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return;
  }
  FUN_14335f920();
  return;
}



// FUNCTION 143503070 FUN_143503070 body=1963 status=ok
// SIG undefined FUN_143503070(void)

void FUN_143503070(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 local_res18 [16];
  double local_e8;
  longlong local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0 [19];
  
  if (param_3 < 8) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar11 = FUN_1435c8e40(&local_e8,0x427,uVar2);
    FUN_1435cbef0(uVar2,uVar11);
    piVar1 = (int *)(local_e0 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    FUN_143590af0(param_4,local_res18,&local_d8);
    FUN_143590af0(param_4 + 0x20,local_res18,&local_d0);
    FUN_143590af0(param_4 + 0x40,local_res18,&local_a8);
    FUN_143590af0(param_4 + 0x60,local_res18,local_a0);
    FUN_143590af0(param_4 + 0x80,local_res18,&local_c0);
    FUN_143590af0(param_4 + 0xa0,local_res18,&local_b8);
    FUN_143590af0(param_4 + 0xc0,local_res18,&local_c8);
    FUN_143590af0(param_4 + 0xe0,local_res18,&local_b0);
    dVar5 = local_b8;
    dVar4 = local_c0;
    local_e8 = local_a8;
    if ((((ulonglong)local_a8 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
       (((ulonglong)local_a8 & 0xfffffffffffff) != 0)) {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
      uVar11 = FUN_1435c8e40(&local_e8,0x5e4,uVar2);
      FUN_1435cbef0(uVar2,uVar11);
      piVar1 = (int *)(local_e0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    else {
      local_e8 = local_a0[0];
      if ((((ulonglong)local_a0[0] & 0x7ff0000000000000) == 0x7ff0000000000000) &&
         (((ulonglong)local_a0[0] & 0xfffffffffffff) != 0)) {
        uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
        uVar11 = FUN_1435c8e40(&local_e8,0x5e4,uVar2);
        FUN_1435cbef0(uVar2,uVar11);
        piVar1 = (int *)(local_e0 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        local_e8 = local_c0;
        if ((((ulonglong)local_c0 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
           (((ulonglong)local_c0 & 0xfffffffffffff) != 0)) {
          uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
          uVar11 = FUN_1435c8e40(&local_e8,0x5e4,uVar2);
          FUN_1435cbef0(uVar2,uVar11);
          piVar1 = (int *)(local_e0 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          cVar10 = Scaleform::GFx::NumberUtil::IsNaN(local_b8);
          dVar9 = local_c8;
          if (cVar10 == '\0') {
            cVar10 = Scaleform::GFx::NumberUtil::IsNaN(local_c8);
            dVar8 = local_b0;
            if (cVar10 == '\0') {
              cVar10 = Scaleform::GFx::NumberUtil::IsNaN(local_b0);
              if (cVar10 == '\0') {
                dVar6 = local_a0[0] + local_d0;
                dVar7 = local_a8 + local_d8;
                uVar12 = SUB84(local_a8,0);
                uVar13 = (int)((ulonglong)local_a8 >> 0x20);
                if (local_a0[0] <= local_a8) {
                  uVar12 = SUB84(local_a0[0],0);
                  uVar13 = (int)((ulonglong)local_a0[0] >> 0x20);
                }
                dVar3 = (double)CONCAT44(uVar13,uVar12) * 2.0;
                if (dVar3 <= dVar4) {
                  local_c0 = dVar3;
                }
                if (dVar3 <= dVar5) {
                  local_b8 = dVar3;
                }
                if (dVar3 <= dVar9) {
                  local_c8 = dVar3;
                }
                if (dVar3 <= dVar8) {
                  dVar8 = dVar3;
                  local_b0 = dVar3;
                }
                fVar15 = (float)(dVar7 * 20.0);
                FUN_14337ee50(*(undefined8 *)(param_1 + 0x40),fVar15,(float)((dVar6 - dVar8) * 20.0)
                             );
                FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar15,
                              (float)((dVar6 - dVar8 * 0.585786437626905) * 20.0),
                              (float)((dVar7 - dVar8 * 0.2928932188134524) * 20.0),
                              (float)((dVar6 - dVar8 * 0.2928932188134524) * 20.0));
                fVar14 = (float)(dVar6 * 20.0);
                FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),
                              (float)((dVar7 - dVar8 * 0.585786437626905) * 20.0),fVar14,
                              (float)((dVar7 - local_b0) * 20.0),fVar14);
                dVar4 = local_c8 * 0.2928932188134524;
                dVar5 = local_c8 * 0.585786437626905;
                FUN_14337ef60(*(undefined8 *)(param_1 + 0x40),(float)((local_c8 + local_d8) * 20.0),
                              fVar14);
                FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),(float)((dVar5 + local_d8) * 20.0),
                              fVar14,(float)((dVar4 + local_d8) * 20.0),
                              (float)((dVar6 - dVar4) * 20.0));
                FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),(float)(local_d8 * 20.0),
                              (float)((dVar6 - dVar5) * 20.0),(float)(local_d8 * 20.0),
                              (float)((dVar6 - local_c8) * 20.0));
                dVar4 = local_c0 * 0.2928932188134524;
                dVar5 = local_c0 * 0.585786437626905;
                FUN_14337ef60(*(undefined8 *)(param_1 + 0x40),(float)(local_d8 * 20.0),
                              (float)((local_c0 + local_d0) * 20.0));
                FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),(float)(local_d8 * 20.0),
                              (float)((dVar5 + local_d0) * 20.0),(float)((dVar4 + local_d8) * 20.0),
                              (float)((dVar4 + local_d0) * 20.0));
                FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),(float)((dVar5 + local_d8) * 20.0),
                              (float)(local_d0 * 20.0),(float)((local_c0 + local_d8) * 20.0),
                              (float)(local_d0 * 20.0));
                dVar4 = local_b8 * 0.2928932188134524;
                dVar5 = local_b8 * 0.585786437626905;
                FUN_14337ef60(*(undefined8 *)(param_1 + 0x40),(float)((dVar7 - local_b8) * 20.0),
                              (float)(local_d0 * 20.0));
                FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),(float)((dVar7 - dVar5) * 20.0),
                              (float)(local_d0 * 20.0),(float)((dVar7 - dVar4) * 20.0),
                              (float)((dVar4 + local_d0) * 20.0));
                FUN_14337eff0(*(undefined8 *)(param_1 + 0x40),fVar15,
                              (float)((dVar5 + local_d0) * 20.0),fVar15,
                              (float)((local_b8 + local_d0) * 20.0));
                FUN_14337ef60(*(undefined8 *)(param_1 + 0x40),fVar15,
                              (float)((dVar6 - local_b0) * 20.0));
                Scaleform::GFx::DisplayObjectBase::InvalidateHitResult
                          (*(undefined8 *)(param_1 + 0x48));
              }
              else {
                uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
                uVar11 = FUN_1435c8e40(&local_e8,0x5e4,uVar2);
                FUN_1435cbef0(uVar2,uVar11);
                piVar1 = (int *)(local_e0 + 0x18);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FUN_14335f920();
                }
              }
            }
            else {
              uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
              uVar11 = FUN_1435c8e40(&local_e8,0x5e4,uVar2);
              FUN_1435cbef0(uVar2,uVar11);
              piVar1 = (int *)(local_e0 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920();
              }
            }
          }
          else {
            uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
            uVar11 = FUN_1435c8e40(&local_e8,0x5e4,uVar2);
            FUN_1435cbef0(uVar2,uVar11);
            piVar1 = (int *)(local_e0 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143503830 endFill body=52 status=ok
// SIG undefined endFill(void)

void Scaleform::GFx::AS3::Instances::fl_display::Graphics::endFill(longlong param_1)

{
  FSettingsModule::ShutdownModule(*(undefined8 *)(param_1 + 0x48));
  DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x48));
  FUN_14337e300(*(undefined8 *)(param_1 + 0x40),1);
  FUN_14337ee10(*(undefined8 *)(param_1 + 0x40));
  return;
}



// FUNCTION 143503870 FUN_143503870 body=64 status=ok
// SIG undefined FUN_143503870(void)

void FUN_143503870(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14337ec20(*(undefined8 *)(param_1 + 0x40));
  FUN_143500a60(param_1,param_3,param_4,uVar1);
  return;
}



// FUNCTION 1435038c0 FUN_1435038c0 body=1026 status=ok
// SIG undefined FUN_1435038c0(void)

void FUN_1435038c0(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 local_88 [4];
  uint local_84;
  double local_80;
  longlong *local_78 [8];
  
  lVar12 = 0;
  fVar16 = 1.0;
  uVar11 = 0;
  fVar18 = 3.0;
  uVar5 = 0;
  local_80 = 0.0;
  uVar14 = 0;
  local_84 = 0;
  if (param_3 == 0) {
    fVar16 = 0.0;
  }
  else if ((param_3 != 0) &&
          (pcVar7 = (char *)FUN_143590af0(param_4,local_88,&local_80), *pcVar7 == '\0')) {
    return;
  }
  fVar17 = (float)local_80;
  if ((1 < param_3) &&
     (pcVar7 = (char *)FUN_143590eb0(param_4 + 0x20,local_88,&local_84), *pcVar7 == '\0')) {
    return;
  }
  if (2 < param_3) {
    pcVar7 = (char *)FUN_143590af0(param_4 + 0x40,local_88,&local_80);
    if (*pcVar7 == '\0') {
      return;
    }
    fVar16 = (float)local_80;
  }
  if (3 < param_3) {
    uVar5 = FUN_1435909c0(param_4 + 0x60);
  }
  uVar13 = uVar11;
  if (4 < param_3) {
    lVar9 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
    local_78[0] = (longlong *)(lVar9 + 0x48);
    piVar1 = (int *)(lVar9 + 0x60);
    *piVar1 = *piVar1 + 1;
    pcVar7 = (char *)FUN_1435911f0(param_4 + 0x80,local_88,local_78);
    plVar3 = local_78[0];
    if (*pcVar7 == '\0') goto LAB_143503b86;
    pcVar7 = (char *)*local_78[0];
    iVar6 = _guard_xfg_dispatch_icall_nop(pcVar7,"vertical");
    if (iVar6 == 0) {
      uVar13 = 4;
    }
    else {
      iVar6 = _guard_xfg_dispatch_icall_nop(pcVar7,"horizontal");
      lVar9 = lVar12;
      if (iVar6 == 0) {
        uVar13 = 2;
      }
      else {
        do {
          lVar10 = lVar9;
          bVar15 = pcVar7[lVar10] == (&DAT_145b122f4)[lVar10];
          if (!bVar15) goto LAB_143503a67;
          lVar9 = lVar10 + 1;
        } while (lVar10 + 1 != 5);
        bVar15 = pcVar7[lVar10] == (&DAT_145b122f4)[lVar10];
LAB_143503a67:
        uVar13 = 0;
        if (bVar15) {
          uVar13 = 6;
        }
      }
    }
    plVar2 = plVar3 + 3;
    *(int *)plVar2 = (int)*plVar2 + -1;
    if ((int)*plVar2 == 0) {
      FUN_14335f920(plVar3);
    }
  }
  if (5 < param_3) {
    lVar9 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
    local_78[0] = (longlong *)(lVar9 + 0x48);
    piVar1 = (int *)(lVar9 + 0x60);
    *piVar1 = *piVar1 + 1;
    pcVar7 = (char *)FUN_1435911f0(param_4 + 0xa0,local_88,local_78);
    if (*pcVar7 == '\0') goto LAB_143503b86;
    lVar9 = lVar12;
    do {
      lVar8 = lVar9 + 1;
      lVar10 = lVar12;
      if (*(char *)(*local_78[0] + lVar9) != (&DAT_145b122f4)[lVar9]) goto LAB_143503b10;
      lVar9 = lVar8;
    } while (lVar8 != 5);
    uVar14 = 0x140;
    goto LAB_143503b33;
  }
  goto LAB_143503b42;
  while (lVar12 = lVar9 + 1, lVar9 + 1 != 6) {
LAB_143503bf0:
    lVar9 = lVar12;
    cVar4 = *(char *)(*local_78[0] + lVar9);
    bVar15 = cVar4 == "bevel"[lVar9];
    if (!bVar15) goto LAB_143503c09;
  }
  bVar15 = cVar4 == "bevel"[lVar9];
LAB_143503c09:
  uVar11 = 0;
  if (bVar15) {
    uVar11 = 0x10;
  }
  goto LAB_143503c11;
  while (lVar10 = lVar9 + 1, lVar9 + 1 != 7) {
LAB_143503b10:
    lVar9 = lVar10;
    cVar4 = *(char *)(*local_78[0] + lVar9);
    bVar15 = cVar4 == "square"[lVar9];
    if (!bVar15) goto LAB_143503b2a;
  }
  bVar15 = cVar4 == "square"[lVar9];
LAB_143503b2a:
  uVar14 = 0;
  if (bVar15) {
    uVar14 = 0x280;
  }
LAB_143503b33:
  plVar3 = local_78[0] + 3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  if ((int)*plVar3 == 0) {
    FUN_14335f920(local_78[0]);
  }
LAB_143503b42:
  if (6 < param_3) {
    lVar9 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
    local_78[0] = (longlong *)(lVar9 + 0x48);
    piVar1 = (int *)(lVar9 + 0x60);
    *piVar1 = *piVar1 + 1;
    pcVar7 = (char *)FUN_1435911f0(param_4 + 0xc0,local_88,local_78);
    if (*pcVar7 == '\0') {
LAB_143503b86:
      plVar3 = local_78[0] + 3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      if ((int)*plVar3 == 0) {
        FUN_14335f920();
      }
      return;
    }
    lVar9 = lVar12;
    do {
      lVar10 = lVar9 + 1;
      if (*(char *)(*local_78[0] + lVar9) != "miter"[lVar9]) goto LAB_143503bf0;
      lVar9 = lVar10;
    } while (lVar10 != 6);
    uVar11 = 0x20;
LAB_143503c11:
    plVar3 = local_78[0] + 3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    if ((int)*plVar3 == 0) {
      FUN_14335f920(local_78[0]);
    }
  }
  if (7 < param_3) {
    pcVar7 = (char *)FUN_143590af0(param_4 + 0xe0,local_88,&local_80);
    if (*pcVar7 == '\0') {
      return;
    }
    fVar18 = (float)local_80;
  }
  FUN_14337f200(*(undefined8 *)(param_1 + 0x40),fVar17 * 20.0,
                (int)(longlong)(fVar16 * 255.0) << 0x18 | local_84 & 0xffffff,uVar5,uVar13,uVar14,
                uVar11,fVar18);
  return;
}



// FUNCTION 143503cd0 FUN_143503cd0 body=62 status=ok
// SIG undefined FUN_143503cd0(void)

void FUN_143503cd0(longlong param_1,undefined8 param_2,double param_3,double param_4)

{
  FUN_14337ef60(*(undefined8 *)(param_1 + 0x40),
                CONCAT44((int)((ulonglong)(param_3 * 20.0) >> 0x20),(float)(param_3 * 20.0)),
                (float)(param_4 * 20.0));
  Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x48));
  return;
}



// FUNCTION 143503d20 FUN_143503d20 body=117 status=ok
// SIG undefined FUN_143503d20(void)

void FUN_143503d20(longlong param_1,undefined8 param_2,double param_3,double param_4)

{
  FSettingsModule::ShutdownModule(*(undefined8 *)(param_1 + 0x48));
  Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x48));
  FUN_14337e300(*(undefined8 *)(param_1 + 0x40),0);
  FUN_14337ee50(*(undefined8 *)(param_1 + 0x40),(float)(param_3 * 20.0),(float)(param_4 * 20.0));
  Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x48));
  return;
}


