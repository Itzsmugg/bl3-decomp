// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14074cfe0 FUN_14074cfe0 body=215 status=ok
// SIG undefined FUN_14074cfe0(void)

undefined8 * FUN_14074cfe0(undefined8 *param_1)

{
  FUN_142c1acb0();
  *param_1 = &PTR_FUN_144083358;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0x3f800000;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    FUN_140747230(param_1 + 0xb,param_1,FUN_140763310);
    FUN_140747230(param_1 + 0xd,param_1,UContentWidget::SetContent);
    FUN_140747230(param_1 + 0xf,param_1,FUN_1407628c0);
  }
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
  return param_1;
}



// FUNCTION 14074d0c0 FUN_14074d0c0 body=98 status=ok
// SIG undefined FUN_14074d0c0(void)

undefined8 * FUN_14074d0c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar1);
  *param_1 = &PTR_FUN_144081680;
  FUN_142de2d20(param_1 + 6,0x3f800000,0);
  FUN_142de2d20(param_1 + 0x16,0,0);
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  return param_1;
}



// FUNCTION 14074d130 FUN_14074d130 body=160 status=ok
// SIG undefined FUN_14074d130(void)

undefined8 * FUN_14074d130(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14178c940();
  FUN_142326e40(param_1,uVar2);
  *(undefined1 *)(param_1 + 0x2f) = 1;
  plVar1 = param_1 + 0x33;
  *param_1 = &PTR_FUN_144086838;
  param_1[5] = &PTR_LAB_144086c30;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *plVar1 = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
    param_1[0x35] = param_1;
    param_1[0x34] = &DAT_146859118;
    *plVar1 = (longlong)DAT_146859118;
    DAT_146859118 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 14074d1d0 FUN_14074d1d0 body=568 status=ok
// SIG undefined FUN_14074d1d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14074d1d0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar3 = FUN_14178c940();
  FUN_142326e40(param_1,uVar3);
  *param_1 = &PTR_FUN_144084968;
  plVar1 = param_1 + 0x59;
  uStack_10 = 0;
  param_1[5] = &PTR_LAB_144084d60;
  param_1[0x2f] = &PTR_LAB_144084d90;
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
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x22c) = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined4 *)(param_1 + 0xe) = 0x3f000000;
  local_18 = FUN_140762eb0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_144089920;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_18._4_4_;
    *(undefined4 *)(plVar4 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_144089968;
  }
  if (&local_18 != plVar1) {
    if (plVar4 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x5a) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar5 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar5;
        }
        *(undefined4 *)(param_1 + 0x5a) = 0;
      }
    }
    else {
      (**(code **)(*plVar4 + 0x30))(plVar4,plVar1);
    }
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar5 = FMemory::Realloc(plVar4,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  return param_1;
}



// FUNCTION 14074d410 FUN_14074d410 body=200 status=ok
// SIG undefined FUN_14074d410(void)

undefined8 * FUN_14074d410(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_14237eb90(param_1,uVar1);
  *(undefined4 *)(param_1 + 0xde) = 0x20101;
  *param_1 = &PTR_FUN_144085578;
  *(undefined1 *)((longlong)param_1 + 0x6f4) = 0;
  param_1[5] = &PTR_LAB_144085e60;
  *(undefined4 *)(param_1 + 0xdf) = 0x3dcccccd;
  param_1[0x5a] = &PTR_LAB_144085e90;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0x42480000;
  *(undefined1 *)((longlong)param_1 + 0x72c) = 1;
  *(undefined4 *)(param_1 + 0xe6) = 1;
  *(undefined1 *)((longlong)param_1 + 0x734) = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  FUN_142717090(param_1,0);
  FUN_1423974f0(param_1,0);
  return param_1;
}



// FUNCTION 14074d4e0 FUN_14074d4e0 body=57 status=ok
// SIG undefined FUN_14074d4e0(void)

undefined8 * FUN_14074d4e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UBlackboardKeyType::UBlackboardKeyType(param_1,uVar1);
  *param_1 = &PTR_FUN_144086f08;
  *(undefined2 *)(param_1 + 5) = 0x30;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  return param_1;
}



// FUNCTION 14074d520 FUN_14074d520 body=33 status=ok
// SIG undefined FUN_14074d520(void)

undefined8 * FUN_14074d520(undefined8 *param_1)

{
  UAIDataProvider::UAIDataProvider();
  *param_1 = &PTR_FUN_14407f078;
  return param_1;
}



// FUNCTION 14074d550 FUN_14074d550 body=33 status=ok
// SIG undefined FUN_14074d550(void)

undefined8 * FUN_14074d550(undefined8 *param_1)

{
  UAIDataProvider::UAIDataProvider();
  *param_1 = &PTR_FUN_144080700;
  return param_1;
}



// FUNCTION 14074d580 FUN_14074d580 body=33 status=ok
// SIG undefined FUN_14074d580(void)

undefined8 * FUN_14074d580(undefined8 *param_1)

{
  UAIDataProvider::UAIDataProvider();
  *param_1 = &PTR_FUN_144080988;
  return param_1;
}



// FUNCTION 14074d5b0 FUN_14074d5b0 body=33 status=ok
// SIG undefined FUN_14074d5b0(void)

undefined8 * FUN_14074d5b0(undefined8 *param_1)

{
  UAIDataProvider::UAIDataProvider();
  *param_1 = &PTR_FUN_144080c08;
  return param_1;
}



// FUNCTION 14074d5e0 FUN_14074d5e0 body=406 status=ok
// SIG undefined FUN_14074d5e0(void)

undefined8 * FUN_14074d5e0(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_142bf8dc0();
  *param_1 = &PTR_FUN_144080e88;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x13);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x19);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x25);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x2b);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x37);
  param_1[0x3e] = 0;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x3e] = uVar1;
  iVar3 = 1;
  *(undefined4 *)(param_1 + 0x18) = 0x43960000;
  *(undefined4 *)(param_1 + 0x1e) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x1f) = 3;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x14;
  *(undefined4 *)(param_1 + 0x20) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x21) = 1;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 6;
  *(undefined4 *)(param_1 + 0x22) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0x23) = 1;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 1;
  *(undefined4 *)(param_1 + 0x24) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x43340000;
  *(undefined1 *)(param_1 + 0x36) = 0;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x33] = uVar1;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x35] = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x8b) = 0;
  if ((*(byte *)(param_1 + 0x31) & 1) == 0) {
    iVar2 = 1;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x23);
    iVar2 = *(int *)((longlong)param_1 + 0x11c);
  }
  *(int *)((longlong)param_1 + 0x18c) = *(int *)(param_1 + 0x21) * *(int *)(param_1 + 0x1f) * iVar3;
  *(int *)(param_1 + 0x32) =
       *(int *)((longlong)param_1 + 0x10c) * *(int *)((longlong)param_1 + 0xfc) * iVar2;
  return param_1;
}



// FUNCTION 14074d780 FUN_14074d780 body=84 status=ok
// SIG undefined FUN_14074d780(void)

undefined8 * FUN_14074d780(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6050();
  *param_1 = &PTR_FUN_1440874a8;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0xd);
  param_1[0x13] = 0;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x13] = uVar1;
  uVar1 = UEnvQueryItemType_Actor::GetPrivateStaticClass();
  param_1[10] = uVar1;
  *(undefined4 *)(param_1 + 0x12) = 0x44bb8000;
  return param_1;
}



// FUNCTION 14074d7e0 FUN_14074d7e0 body=84 status=ok
// SIG undefined FUN_14074d7e0(void)

undefined8 * FUN_14074d7e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6050();
  *param_1 = &PTR_FUN_1440880e0;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0xd);
  param_1[0x13] = 0;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x13] = uVar1;
  uVar1 = UEnvQueryItemType_Actor::GetPrivateStaticClass();
  param_1[10] = uVar1;
  *(undefined4 *)(param_1 + 0x12) = 0x44bb8000;
  return param_1;
}



// FUNCTION 14074d840 FUN_14074d840 body=184 status=ok
// SIG undefined FUN_14074d840(void)

undefined8 * FUN_14074d840(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6050();
  *param_1 = &PTR_FUN_144088d18;
  FAIDataProviderBoolValue::FAIDataProviderBoolValue(param_1 + 0xc);
  FAIDataProviderBoolValue::FAIDataProviderBoolValue(param_1 + 0x12);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x21);
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x27] = uVar1;
  *(undefined2 *)(param_1 + 0x28) = 0;
  uVar1 = FUN_1407a6670();
  param_1[10] = uVar1;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined1 *)(param_1 + 0x17) = 1;
  *(undefined4 *)(param_1 + 0x26) = 0x44bb8000;
  return param_1;
}



// FUNCTION 14074d900 FUN_14074d900 body=285 status=ok
// SIG undefined FUN_14074d900(void)

undefined8 * FUN_14074d900(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_142bf8dc0();
  *param_1 = &PTR_FUN_144081138;
  plVar1 = param_1 + 0x13;
  *plVar1 = 0;
  param_1[0x14] = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_140751e50(plVar1,1);
    uVar2 = UEnvQueryContext_Querier::GetPrivateStaticClass();
    *(undefined8 *)(*plVar1 + 0x10) = uVar2;
    *(undefined4 *)(*plVar1 + 0x48) = 0x43960000;
    *(undefined4 *)(*plVar1 + 0x78) = 0x447a0000;
    *(undefined4 *)(*plVar1 + 0xd0) = 0x43340000;
    *(undefined1 *)(*plVar1 + 0x18) = 0;
    *(undefined4 *)(*plVar1 + 8) = 500;
    *(undefined4 *)(*plVar1 + 0xd8) = 0x43fa0000;
    *(undefined4 *)(*plVar1 + 0xdc) = 0x43480000;
    *(undefined4 *)(*plVar1 + 0xe0) = 0x44160000;
    uVar2 = UEnvQueryContext_Querier::GetPrivateStaticClass();
    *(undefined8 *)(*plVar1 + 0xe8) = uVar2;
    *(uint *)(*plVar1 + 0x80) = *(uint *)(*plVar1 + 0x80) | 1;
    *(undefined1 *)(*plVar1 + 0xa0) = 0;
    uVar2 = UEnvQueryContext_Querier::GetPrivateStaticClass();
    *(undefined8 *)(*plVar1 + 0x88) = uVar2;
    uVar2 = UEnvQueryContext_Target::StaticClass();
    *(undefined8 *)(*plVar1 + 0x90) = uVar2;
    uVar2 = UEnvQueryContext_Querier::GetPrivateStaticClass();
    *(undefined8 *)(*plVar1 + 0x98) = uVar2;
  }
  FUN_142bf1db0(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xe) = 0x44800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x44800000;
  return param_1;
}



// FUNCTION 14074da20 FUN_14074da20 body=53 status=ok
// SIG undefined FUN_14074da20(void)

undefined8 * FUN_14074da20(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UEnvQueryItemType::UEnvQueryItemType(param_1,uVar1);
  *param_1 = &PTR_FUN_144086c60;
  *(undefined2 *)(param_1 + 5) = 0x30;
  return param_1;
}



// FUNCTION 14074da60 FUN_14074da60 body=89 status=ok
// SIG undefined FUN_14074da60(void)

undefined8 * FUN_14074da60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *param_1 = &PTR_FUN_1440813e8;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x3c);
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  FUN_142bf1f60(param_1,0);
  uVar1 = UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 14074dac0 FUN_14074dac0 body=212 status=ok
// SIG undefined FUN_14074dac0(void)

undefined8 * FUN_14074dac0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6400();
  *param_1 = &PTR_FUN_144081f00;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x3f);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x45);
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x4f);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x55);
  *(undefined1 *)(param_1 + 0x1e) = 0;
  uVar1 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x3d] = uVar1;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x4b] = uVar1;
  uVar1 = UEnvQueryContext_Item::GetPrivateStaticClass();
  param_1[0x4c] = uVar1;
  *(undefined2 *)(param_1 + 0x5b) = 0x101;
  return param_1;
}



// FUNCTION 14074dba0 FUN_14074dba0 body=67 status=ok
// SIG undefined FUN_14074dba0(void)

undefined8 * FUN_14074dba0(undefined8 *param_1)

{
  FUN_142bf9540();
  *param_1 = &PTR_FUN_144082198;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x54);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x5a);
  *(undefined4 *)(param_1 + 0x60) = 2;
  return param_1;
}



// FUNCTION 14074dbf0 FUN_14074dbf0 body=84 status=ok
// SIG undefined FUN_14074dbf0(void)

undefined8 * FUN_14074dbf0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6400();
  *param_1 = &PTR_FUN_144082430;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x3b);
  *(undefined4 *)(param_1 + 0x40) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  FUN_142bf1f60(param_1,0);
  uVar1 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 14074dc50 FUN_14074dc50 body=98 status=ok
// SIG undefined FUN_14074dc50(void)

undefined8 * FUN_14074dc50(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__144085060;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  FUN_142bf1f60(param_1,0);
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  uVar1 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = 0x41200000;
  return param_1;
}



// FUNCTION 14074dcc0 FUN_14074dcc0 body=93 status=ok
// SIG undefined FUN_14074dcc0(void)

undefined8 * FUN_14074dcc0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bd6400();
  *param_1 = &PTR__scalar_deleting_destructor__1440826c8;
  param_1[0x3b] = 0;
  uVar1 = UEnvQueryContext_Querier::GetPrivateStaticClass();
  param_1[0x3b] = uVar1;
  uVar1 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_142bf1f60(param_1,1);
  return param_1;
}



// FUNCTION 14074dd20 FUN_14074dd20 body=301 status=ok
// SIG undefined FUN_14074dd20(void)

undefined8 * FUN_14074dd20(undefined8 *param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142c62d40();
  *param_1 = &PTR_FUN_144084da8;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) != 0) {
    return param_1;
  }
  puVar5 = (undefined8 *)param_1[4];
  if (puVar5 != (undefined8 *)0x0) {
    lVar2 = FUN_142a2f930();
    if ((*(int *)(puVar5[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(puVar5[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14074dd99;
  }
  puVar5 = (undefined8 *)0x0;
LAB_14074dd99:
  puVar4 = param_1;
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = puVar5;
  }
  FUN_1417846f0(puVar4,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = UImageSetSettings::GetPrivateStaticClass();
  uVar3 = FUN_1417985e0(uVar3,puVar4,0,0,0,0,0,0,0);
  param_1[0x26] = uVar3;
  FUN_1417846f0(puVar4,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = FUN_14079cc20();
  uVar3 = FUN_1417985e0(uVar3,puVar4,0,0,0,0,0,0,0);
  param_1[0x27] = uVar3;
  return param_1;
}



// FUNCTION 14074de50 FUN_14074de50 body=362 status=ok
// SIG undefined FUN_14074de50(void)

undefined8 * FUN_14074de50(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14178c940();
  FUN_14237eb90(param_1,uVar2);
  *(undefined2 *)(param_1 + 0xe0) = 1;
  param_1[0xdf] = 0;
  *param_1 = &PTR_FUN_144087748;
  *(undefined8 *)((longlong)param_1 + 0x704) = 0;
  param_1[5] = &PTR_LAB_144088030;
  *(undefined1 *)((longlong)param_1 + 0x70c) = 0;
  param_1[0x5a] = &PTR_LAB_144088060;
  param_1[0xde] = &PTR_LAB_1440880b8;
  FUN_142de2d20(param_1 + 0xe2,0,0);
  *(undefined1 *)(param_1 + 0xf2) = 0;
  FUN_142de2d20(param_1 + 0xf3,0,0);
  param_1[0x103] = 0;
  plVar1 = param_1 + 0x10f;
  param_1[0x104] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  *(undefined4 *)(param_1 + 0x109) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84c) = 0;
  param_1[0x10b] = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  *plVar1 = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  FUN_142de73f0(param_1 + 0xe2);
  FUN_142de73f0(param_1 + 0xf3);
  if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
    param_1[0x111] = param_1;
    param_1[0x110] = &DAT_146859168;
    *plVar1 = (longlong)DAT_146859168;
    DAT_146859168 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 14074dfc0 FUN_14074dfc0 body=241 status=ok
// SIG undefined FUN_14074dfc0(void)

undefined8 * FUN_14074dfc0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__144087228;
  *(undefined2 *)(param_1 + 6) = 0x101;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x447a0000;
  FUN_142de2d20(param_1 + 9,0x42c80000,0);
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x42c80000;
  FUN_142de2d20(param_1 + 0x1b,0x3f800000,0);
  FUN_142de2d20(param_1 + 0x2b,0,0);
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 1;
  FUN_142de73f0(param_1 + 9);
  FUN_142de73f0(param_1 + 0x1b);
  FUN_142de73f0(param_1 + 0x2b);
  return param_1;
}



// FUNCTION 14074e0c0 FUN_14074e0c0 body=474 status=ok
// SIG undefined FUN_14074e0c0(void)

undefined8 * FUN_14074e0c0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14178c940();
  FUN_14237eb90(param_1,uVar2);
  *(undefined1 *)(param_1 + 0xe0) = 1;
  *param_1 = &PTR_FUN_144088380;
  *(undefined4 *)((longlong)param_1 + 0x704) = 0x447a0000;
  param_1[5] = &PTR_LAB_144088c68;
  param_1[0xdf] = 0;
  param_1[0x5a] = &PTR_LAB_144088c98;
  param_1[0xde] = &PTR_LAB_144088cf0;
  *(undefined4 *)(param_1 + 0xe1) = 0x447a0000;
  *(undefined1 *)(param_1 + 0xe2) = 0;
  FUN_142de2eb0(param_1 + 0xe3);
  *(undefined1 *)(param_1 + 0xf3) = 0;
  FUN_142de2eb0(param_1 + 0xf4);
  *(undefined1 *)(param_1 + 0x104) = 0;
  FUN_142de2eb0(param_1 + 0x105);
  plVar1 = param_1 + 0x125;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x119] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8ac) = 0;
  param_1[0x118] = 0;
  *(undefined4 *)(param_1 + 0x119) = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x124] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  *(undefined4 *)(param_1 + 0x121) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x90c) = 0;
  param_1[0x123] = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *plVar1 = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  FUN_142de73f0(param_1 + 0xe3);
  FUN_142de73f0(param_1 + 0xf4);
  FUN_142de73f0(param_1 + 0x105);
  if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
    param_1[0x127] = param_1;
    param_1[0x126] = &DAT_146859180;
    *plVar1 = (longlong)DAT_146859180;
    DAT_146859180 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 14074e2a0 FUN_14074e2a0 body=151 status=ok
// SIG undefined FUN_14074e2a0(void)

undefined8 * FUN_14074e2a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__1440896a0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_142de2eb0(param_1 + 8);
  FUN_142de2eb0(param_1 + 0x18);
  FUN_142de2eb0(param_1 + 0x28);
  FUN_142de73f0(param_1 + 8);
  FUN_142de73f0(param_1 + 0x18);
  FUN_142de73f0(param_1 + 0x28);
  return param_1;
}



// FUNCTION 14074e340 FUN_14074e340 body=275 status=ok
// SIG undefined FUN_14074e340(void)

undefined8 * FUN_14074e340(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar1);
  *param_1 = &PTR_FUN_1440852f8;
  *(undefined2 *)(param_1 + 6) = 0x101;
  FUN_142de2d20(param_1 + 7,0x42c80000,0);
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  FUN_142de2d20(param_1 + 0x19,0,0);
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 1;
  FUN_142de2d20(param_1 + 0x2a,0,0);
  FUN_142de2d20(param_1 + 0x3a,0,0);
  FUN_142de2d20(param_1 + 0x4a,0,0);
  FUN_142de73f0(param_1 + 7);
  FUN_142de73f0(param_1 + 0x19);
  FUN_142de73f0(param_1 + 0x2a);
  FUN_142de73f0(param_1 + 0x3a);
  FUN_142de73f0(param_1 + 0x4a);
  return param_1;
}



// FUNCTION 14074e460 FUN_14074e460 body=392 status=ok
// SIG undefined FUN_14074e460(void)

undefined8 * FUN_14074e460(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14178c940();
  FUN_142326e40(param_1,uVar3);
  *param_1 = &PTR_FUN_144085ee8;
  param_1[5] = &PTR_LAB_1440862e0;
  param_1[0x2f] = &PTR_LAB_144086310;
  param_1[0x30] = &PTR_LAB_144086320;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x39) = 1;
  param_1[0x3a] = 0;
  FUN_142de2f30(param_1 + 0x3b,0,1);
  FUN_142de2c90(param_1 + 0x4b,0x3f800000,0x3e800000,0);
  FUN_142de2d20(param_1 + 0x5b,0x42700000,0);
  FUN_142de2d20(param_1 + 0x6b,0x3f800000,0);
  FUN_142d2e580(param_1 + 0x7b);
  param_1[0x92] = 0;
  plVar1 = param_1 + 0x96;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *plVar1 = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *(undefined1 *)(param_1 + 0x80) = 3;
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar2 == '\0') {
    param_1[0x98] = param_1;
    param_1[0x97] = &DAT_1468591c8;
    *plVar1 = (longlong)DAT_1468591c8;
    DAT_1468591c8 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 14074e5f0 FUN_14074e5f0 body=112 status=ok
// SIG undefined FUN_14074e5f0(void)

void FUN_14074e5f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x2700);
  iVar4 = *(int *)(param_1 + 0x2708);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = param_1;
  }
  if (iVar4 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x260);
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0x4e;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar1 = *(longlong *)(param_1 + 0x2700);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14074e660 FUN_14074e660 body=104 status=ok
// SIG undefined FUN_14074e660(void)

void FUN_14074e660(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (lVar1);
      lVar1 = lVar1 + 0x38;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14074e6d0 FUN_14074e6d0 body=138 status=ok
// SIG undefined FUN_14074e6d0(void)

void FUN_14074e6d0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x70);
    do {
      *(undefined4 *)(plVar2 + 1) = 0;
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (plVar2 + -8);
      if (plVar2[-10] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x10;
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



// FUNCTION 14074e760 FUN_14074e760 body=166 status=ok
// SIG undefined FUN_14074e760(void)

void FUN_14074e760(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x40);
  iVar6 = *(int *)(param_1 + 0x48);
  lVar7 = lVar5;
  if (lVar5 == 0) {
    lVar7 = param_1;
  }
  if (iVar6 != 0) {
    plVar8 = (longlong *)(lVar7 + 8);
    do {
      plVar4 = (longlong *)*plVar8;
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
      plVar8 = plVar8 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0x40);
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14074e810 FUN_14074e810 body=179 status=ok
// SIG undefined FUN_14074e810(void)

void FUN_14074e810(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x80);
  iVar6 = *(int *)(param_1 + 0x88);
  lVar7 = lVar5;
  if (lVar5 == 0) {
    lVar7 = param_1;
  }
  if (iVar6 != 0) {
    plVar8 = (longlong *)(lVar7 + 8);
    do {
      plVar4 = (longlong *)*plVar8;
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
      plVar8 = plVar8 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0x80);
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14074e8d0 Reset body=94 status=ok
// SIG undefined Reset(void)

void TOptional<FExpressionError>::Reset(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
    plVar4 = *(longlong **)(param_1 + 8);
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
  }
  return;
}



// FUNCTION 14074e930 ~TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14074e9a0 FUN_14074e9a0 body=122 status=ok
// SIG undefined FUN_14074e9a0(void)

void FUN_14074e9a0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x608) = 0;
  if (*(int *)(param_1 + 0x60c) != 0) {
    FUN_1407684d0(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x628) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x62c) = 0;
  *(undefined4 *)(param_1 + 0x620) = 0;
  if (*(int *)(param_1 + 0x624) != 0) {
    *(undefined4 *)(param_1 + 0x624) = 0;
    TBitArray<TInlineAllocator<2,FDefaultAllocator>_>::Realloc(param_1 + 0x610,0);
  }
  if (*(longlong *)(param_1 + 0x618) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x600) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14074ea20 FUN_14074ea20 body=44 status=ok
// SIG undefined FUN_14074ea20(void)

void FUN_14074ea20(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}



// FUNCTION 14074ea50 FUN_14074ea50 body=179 status=ok
// SIG undefined FUN_14074ea50(void)

void FUN_14074ea50(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x580) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x530) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x520) = &PTR_FUN_1440732c8;
  *(undefined ***)(param_1 + 0x518) = &PTR_FUN_14407f310;
  *(undefined ***)(param_1 + 0x510) = &PTR_FUN_144055190;
  *(undefined ***)(param_1 + 0x508) = &PTR_FUN_14407f2f8;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4f0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4d8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4a8);
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_14407ef78;
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 14074eb10 FUN_14074eb10 body=579 status=ok
// SIG undefined FUN_14074eb10(void)

void FUN_14074eb10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  iVar3 = *(int *)(param_1 + 0x998);
  lVar4 = *(longlong *)(param_1 + 0x990);
  if (iVar3 != 0) {
    do {
      FUN_142bd6600(lVar4);
      lVar4 = lVar4 + 0x188;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar4 = *(longlong *)(param_1 + 0x990);
  }
  if (lVar4 != 0) {
    FMemory::Free(lVar4);
  }
  plVar5 = *(longlong **)(param_1 + 0x988);
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
  if (*(longlong *)(param_1 + 0x968) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x928) = 0;
  if (*(longlong *)(param_1 + 0x920) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x8e0);
  iVar3 = *(int *)(param_1 + 0x8d8);
  lVar4 = *(longlong *)(param_1 + 0x8d0);
  if (iVar3 != 0) {
    plVar5 = (longlong *)(lVar4 + 0x10);
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar4 = *(longlong *)(param_1 + 0x8d0);
  }
  if (lVar4 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8c0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x8b0) = &PTR_FUN_144080410;
  if (*(longlong *)(param_1 + 0x888) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x768) = &PTR__scalar_deleting_destructor__144080980;
  FUN_14074e760(param_1 + 0x800);
  FUN_14074e810(param_1 + 0x770);
  iVar3 = *(int *)(param_1 + 0x718);
  lVar4 = *(longlong *)(param_1 + 0x710);
  if (iVar3 != 0) {
    lVar4 = lVar4 + 0x58;
    do {
      if (*(longlong *)(lVar4 + 0x118) != 0) {
        FMemory::Free();
      }
      *(undefined ***)(lVar4 + -8) = &PTR__scalar_deleting_destructor__144080980;
      FUN_14074e760(lVar4 + 0x90);
      FUN_14074e810(lVar4);
      lVar4 = lVar4 + 0x188;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar4 = *(longlong *)(param_1 + 0x710);
  }
  if (lVar4 != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x5d0) = &PTR__scalar_deleting_destructor__144080980;
  FUN_14074e760(param_1 + 0x668);
  FUN_14074e810(param_1 + 0x5d8);
  if (*(longlong *)(param_1 + 0x5c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x590) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_14407ef78;
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 14074ed60 FUN_14074ed60 body=168 status=ok
// SIG undefined FUN_14074ed60(void)

void FUN_14074ed60(longlong *param_1)

{
  FUN_140757b70(param_1 + 2,0);
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 5,0);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 5,0);
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  FUN_14074e660(param_1 + 2);
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14074ee10 FUN_14074ee10 body=360 status=ok
// SIG undefined FUN_14074ee10(void)

void FUN_14074ee10(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x470);
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x440) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x438);
  plVar1 = *(longlong **)(param_1 + 0x430);
  if (iVar2 != 0) {
    do {
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x430);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x420) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x418);
  plVar1 = *(longlong **)(param_1 + 0x410);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x410);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FMemory::Free();
  }
  FUN_14271e9f0(param_1);
  return;
}



// FUNCTION 14074ef80 ~FRootMotionSourceGroup body=45 status=ok
// SIG undefined ~FRootMotionSourceGroup(void)

void FRootMotionSourceGroup::~FRootMotionSourceGroup(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144080980;
  FUN_14074e760(param_1 + 0x13);
  FUN_14074e810(param_1 + 1);
  return;
}



// FUNCTION 14074efb0 ~UAISystem body=139 status=ok
// SIG undefined ~UAISystem(void)

void UAISystem::~UAISystem(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1a);
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__14407f360;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 14074f040 FUN_14074f040 body=415 status=ok
// SIG undefined FUN_14074f040(void)

longlong * FUN_14074f040(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  longlong *plVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  
  if (param_1 != param_2) {
    iVar5 = (int)param_1[1];
    if (iVar5 != 0) {
      plVar3 = (longlong *)(*param_1 + 0x70);
      do {
        *(undefined4 *)(plVar3 + 1) = 0;
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (plVar3 + -8);
        if (plVar3[-10] != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 0x10;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = (int)param_2[1];
    lVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar5;
    if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FModuleDescriptor,FDefaultAllocator>::ResizeForCopy(param_1,iVar5);
      puVar7 = (undefined1 *)*param_1;
      if (iVar5 != 0) {
        puVar4 = puVar7 + 0x5c;
        puVar6 = (undefined8 *)(lVar2 + 8);
        do {
          *puVar7 = *(undefined1 *)(puVar6 + -1);
          *(undefined8 *)(puVar4 + -0x54) = *puVar6;
          *(undefined8 *)(puVar4 + -0x4c) = puVar6[1];
          *(undefined4 *)(puVar4 + -0x44) = *(undefined4 *)(puVar6 + 2);
          *(undefined4 *)(puVar4 + -0x40) = *(undefined4 *)((longlong)puVar6 + 0x14);
          *(undefined8 *)(puVar4 + -0x3c) = 0;
          iVar1 = *(int *)(puVar6 + 4);
          _Src = (void *)puVar6[3];
          *(int *)(puVar4 + -0x34) = iVar1;
          if (iVar1 == 0) {
            *(undefined4 *)(puVar4 + -0x30) = 0;
          }
          else {
            TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar4 + -0x3c,iVar1,0);
            _guard_xfg_dispatch_icall_nop(*(void **)(puVar4 + -0x3c),_Src,(longlong)iVar1 << 4);
          }
          *(undefined8 *)(puVar4 + -0x2c) = 0;
          *(undefined8 *)(puVar4 + -0x24) = 0;
          *(undefined8 *)(puVar4 + -0xc) = 0;
          *(undefined8 *)(puVar4 + -4) = 0;
          *(undefined4 *)(puVar4 + 4) = 0xffffffff;
          *(undefined4 *)(puVar4 + 8) = 0;
          *(undefined8 *)(puVar4 + 0x14) = 0;
          *(undefined4 *)(puVar4 + 0x1c) = 0;
          TSet<TTuple<UTexture2D_const_*,FTextureInstanceView::FTextureDesc>,TDefaultMapHashableKeyFuncs<UTexture2D_const_*,FTextureInstanceView::FTextureDesc,0>,FDefaultSetAllocator>
          ::operator=(puVar4 + -0x2c,puVar6 + 5);
          puVar7 = puVar7 + 0x80;
          puVar4 = puVar4 + 0x80;
          puVar6 = puVar6 + 0x10;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 14074f1e0 operator= body=506 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<UTexture2D_const_*,FTextureInstanceView::FTextureDesc>,TDefaultMapHashableKeyFuncs<UTexture2D_const_*,FTextureInstanceView::FTextureDesc,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

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
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9,1);
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14074f33b;
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
LAB_14074f33b:
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
        TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
        ::Emplace<TTuple<UObject_*,FSparseItemInfo>_const_&>
                  (param_1,local_res8,*param_2 + (longlong)iStack_4c * 0x18,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 14074f3e0 FUN_14074f3e0 body=292 status=ok
// SIG undefined FUN_14074f3e0(void)

undefined4 * FUN_14074f3e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  
  puVar1 = (undefined8 *)(param_1 + 2);
  *param_1 = *param_2;
  if (puVar1 != (undefined8 *)(param_2 + 2)) {
    iVar2 = param_2[4];
    pvVar3 = *(void **)(param_2 + 2);
    param_1[4] = iVar2;
    if ((iVar2 == 0) && (param_1[5] == 0)) {
      param_1[5] = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 3);
    }
  }
  puVar1 = (undefined8 *)(param_1 + 6);
  if (puVar1 != (undefined8 *)(param_2 + 6)) {
    iVar2 = param_2[8];
    pvVar3 = *(void **)(param_2 + 6);
    param_1[8] = iVar2;
    if ((iVar2 == 0) && (param_1[9] == 0)) {
      param_1[9] = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 3);
    }
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_1 + 10,param_2 + 10);
  puVar1 = (undefined8 *)(param_1 + 0xe);
  if (puVar1 != (undefined8 *)(param_2 + 0xe)) {
    iVar2 = param_2[0x10];
    pvVar3 = *(void **)(param_2 + 0xe);
    param_1[0x10] = iVar2;
    if ((iVar2 == 0) && (param_1[0x11] == 0)) {
      param_1[0x11] = 0;
    }
    else {
      TArray<FVector,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 * 0xc);
    }
  }
  return param_1;
}



// FUNCTION 14074f510 FUN_14074f510 body=345 status=ok
// SIG undefined FUN_14074f510(void)

void FUN_14074f510(undefined8 param_1,undefined8 *param_2,float param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  if ((1e-08 < ABS(param_3)) || (1e-08 < ABS(param_4))) {
    pfVar2 = (float *)*param_2;
    pfVar1 = pfVar2 + (longlong)*(int *)(param_2 + 1) * 3;
    for (; pfVar2 != pfVar1; pfVar2 = pfVar2 + 3) {
      fVar3 = param_3 + pfVar2[1];
      fVar4 = (float)(int)(fVar3 * 0.0027777778) * 360.0;
      if (ABS(fVar3) < ABS(fVar4)) {
        fVar4 = fVar3;
      }
      fVar3 = fVar3 - fVar4;
      if (fVar3 < 0.0) {
        fVar3 = fVar3 + 360.0;
      }
      if (180.0 < fVar3) {
        fVar3 = fVar3 - 360.0;
      }
      pfVar2[1] = fVar3;
      fVar3 = param_4 + *pfVar2;
      fVar4 = (float)(int)(fVar3 * 0.0027777778) * 360.0;
      if (ABS(fVar3) < ABS(fVar4)) {
        fVar4 = fVar3;
      }
      fVar3 = fVar3 - fVar4;
      if (fVar3 < 0.0) {
        fVar3 = fVar3 + 360.0;
      }
      if (180.0 < fVar3) {
        fVar3 = fVar3 - 360.0;
      }
      *pfVar2 = fVar3;
    }
  }
  return;
}



// FUNCTION 14074f670 FUN_14074f670 body=419 status=ok
// SIG undefined FUN_14074f670(void)

undefined8 FUN_14074f670(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  undefined4 local_res8;
  undefined4 local_resc;
  
  plVar2 = (longlong *)*param_1;
  lVar6 = *param_2;
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar5 = (longlong *)plVar2[8];
    if ((longlong *)plVar2[8] == (longlong *)0x0) {
      plVar5 = plVar2 + 7;
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    ((longlong)((int)((ulonglong)lVar6 >> 0x20) + (int)lVar6) &
                    (longlong)(int)plVar2[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        lVar8 = *plVar2 + (longlong)iVar4 * 0x28;
        if (*(longlong *)(*plVar2 + (longlong)iVar4 * 0x28) == lVar6) {
          if (iVar4 != -1) goto LAB_14074f6f4;
          break;
        }
        iVar4 = *(int *)(lVar8 + 0x20);
      } while (iVar4 != -1);
    }
  }
  lVar8 = 0;
LAB_14074f6f4:
  lVar6 = lVar8 + 8;
  if (lVar8 == 0) {
    lVar6 = 0;
  }
  if ((lVar6 == 0) || (*(int *)(lVar6 + 0x10) < (int)(uint)*(byte *)(param_2 + 1))) {
    *param_3 = 8;
    uVar7 = 0;
  }
  else {
    puVar10 = *(undefined4 **)(lVar6 + 8);
    puVar1 = puVar10 + (longlong)*(int *)(lVar6 + 0x10) * 3;
    for (; puVar10 != puVar1; puVar10 = puVar10 + 3) {
      if ((0.0 <= *(float *)(param_1 + 2) - (float)puVar10[2]) &&
         (*(float *)(param_1 + 2) - (float)puVar10[2] < 10.0)) {
        local_res8 = *puVar10;
        local_resc = puVar10[1];
        cVar3 = FUN_140760f90(&local_res8);
        if (cVar3 != '\0') {
          lVar6 = FWeakObjectPtr::Get(puVar10);
          plVar2 = (longlong *)param_1[1];
          plVar5 = (longlong *)*plVar2;
          iVar4 = (int)plVar2[1];
          for (plVar9 = plVar5; plVar9 != plVar5 + iVar4; plVar9 = plVar9 + 1) {
            if (*plVar9 == lVar6) {
              if ((int)((longlong)plVar9 - (longlong)plVar5 >> 3) != -1) goto LAB_14074f7db;
              break;
            }
          }
          *(int *)(plVar2 + 1) = iVar4 + 1;
          if (*(int *)((longlong)plVar2 + 0xc) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2);
          }
          *(longlong *)(*plVar2 + (longlong)iVar4 * 8) = lVar6;
        }
      }
LAB_14074f7db:
    }
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 14074f9d0 FUN_14074f9d0 body=43 status=ok
// SIG undefined FUN_14074f9d0(void)

undefined8 * FUN_14074f9d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14074fa00 FUN_14074fa00 body=168 status=ok
// SIG undefined FUN_14074fa00(void)

longlong FUN_14074fa00(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x490) != 0) {
    if (*(longlong *)(param_1 + 0x480) == 0) {
      **(longlong **)(param_1 + 0x488) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x488) = *(longlong *)(param_1 + 0x480);
      *(undefined8 *)(*(longlong *)(param_1 + 0x480) + 8) = *(undefined8 *)(param_1 + 0x488);
      *(undefined8 *)(param_1 + 0x480) = 0;
    }
    *(undefined8 *)(param_1 + 0x488) = 0;
    *(undefined8 *)(param_1 + 0x490) = 0;
  }
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x498);
  }
  return param_1;
}



// FUNCTION 14074fab0 FUN_14074fab0 body=225 status=ok
// SIG undefined FUN_14074fab0(void)

longlong FUN_14074fab0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x688) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x678) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x668) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x650) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x638) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x5c0) = &PTR_FUN_144055c50;
  *(undefined ***)(param_1 + 0x5b8) = &PTR_FUN_14407f7d8;
  *(undefined ***)(param_1 + 0x5b0) = &PTR_FUN_14407f768;
  *(undefined ***)(param_1 + 0x5a8) = &PTR_FUN_1440732c8;
  *(undefined ***)(param_1 + 0x5a0) = &PTR_FUN_143fe0658;
  *(undefined ***)(param_1 + 0x598) = &PTR_FUN_14407f730;
  FUN_14074ea50(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6c0);
  }
  return param_1;
}



// FUNCTION 14074fba0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FD3D12Adapter::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14074eb10();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x9d0);
  }
  return param_1;
}



// FUNCTION 14074fbe0 FUN_14074fbe0 body=52 status=ok
// SIG undefined FUN_14074fbe0(void)

undefined8 FUN_14074fbe0(undefined8 param_1,ulonglong param_2)

{
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x460);
  }
  return param_1;
}



// FUNCTION 14074fc20 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRootMotionSourceGroup::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144080980;
  FUN_14074e760(param_1 + 0x13);
  FUN_14074e810(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 14074fc70 FUN_14074fc70 body=43 status=ok
// SIG undefined FUN_14074fc70(void)

undefined8 * FUN_14074fc70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14407f2f8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14074fca0 FUN_14074fca0 body=43 status=ok
// SIG undefined FUN_14074fca0(void)

undefined8 * FUN_14074fca0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144080410;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14074fcd0 FUN_14074fcd0 body=43 status=ok
// SIG undefined FUN_14074fcd0(void)

undefined8 * FUN_14074fcd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14407f730;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14074fd00 FUN_14074fd00 body=43 status=ok
// SIG undefined FUN_14074fd00(void)

undefined8 * FUN_14074fd00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14407f7d8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14074fd30 FUN_14074fd30 body=43 status=ok
// SIG undefined FUN_14074fd30(void)

undefined8 * FUN_14074fd30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14407f768;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14074fd60 FUN_14074fd60 body=43 status=ok
// SIG undefined FUN_14074fd60(void)

undefined8 * FUN_14074fd60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14407f310;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14074fd90 FUN_14074fd90 body=43 status=ok
// SIG undefined FUN_14074fd90(void)

undefined8 * FUN_14074fd90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14407ef78;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14074fdc0 FUN_14074fdc0 body=43 status=ok
// SIG undefined FUN_14074fdc0(void)

undefined8 * FUN_14074fdc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14407f338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14074fdf0 FUN_14074fdf0 body=43 status=ok
// SIG undefined FUN_14074fdf0(void)

undefined8 * FUN_14074fdf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144081900;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14074fe20 FUN_14074fe20 body=193 status=ok
// SIG undefined FUN_14074fe20(void)

longlong FUN_14074fe20(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x2828) != 0) {
    FMemory::Free();
  }
  FUN_14074ed60(param_1 + 0x27a8);
  if (*(longlong *)(param_1 + 0x2798) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2788) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2778) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2768) != 0) {
    FMemory::Free();
  }
  FUN_14074e5f0(param_1 + 0x50);
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_14407f768;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_144081900;
  FUN_1404bf750(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2840);
  }
  return param_1;
}



// FUNCTION 14074fef0 FUN_14074fef0 body=228 status=ok
// SIG undefined FUN_14074fef0(void)

longlong FUN_14074fef0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x780) != 0) {
    if (*(longlong *)(param_1 + 0x770) == 0) {
      **(longlong **)(param_1 + 0x778) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x778) = *(longlong *)(param_1 + 0x770);
      *(undefined8 *)(*(longlong *)(param_1 + 0x770) + 8) = *(undefined8 *)(param_1 + 0x778);
      *(undefined8 *)(param_1 + 0x770) = 0;
    }
    *(undefined8 *)(param_1 + 0x778) = 0;
    *(undefined8 *)(param_1 + 0x780) = 0;
  }
  if (*(longlong *)(param_1 + 0x758) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x748) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x738) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x728) != 0) {
    FMemory::Free();
  }
  FUN_140590de0(param_1 + 0x718);
  *(undefined ***)(param_1 + 0x6f0) = &PTR_FUN_1440732c8;
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x790);
  }
  return param_1;
}



// FUNCTION 14074ffe0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FBufferArchive::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 140750030 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UTireConfig::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 140750080 FUN_140750080 body=149 status=ok
// SIG undefined FUN_140750080(void)

longlong FUN_140750080(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x98);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x58);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 140750120 FUN_140750120 body=235 status=ok
// SIG undefined FUN_140750120(void)

longlong FUN_140750120(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xb8);
  iVar2 = *(int *)(param_1 + 0xb0);
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0xa8);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x78);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x58);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 140750210 `scalar_deleting_destructor' body=80 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * UAISystemBase::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14407f360;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 140750260 FUN_140750260 body=52 status=ok
// SIG undefined FUN_140750260(void)

undefined8 FUN_140750260(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 1407502a0 FUN_1407502a0 body=151 status=ok
// SIG undefined FUN_1407502a0(void)

longlong FUN_1407502a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    if (*(longlong *)(param_1 + 0x198) == 0) {
      **(longlong **)(param_1 + 0x1a0) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x1a0) = *(longlong *)(param_1 + 0x198);
      *(undefined8 *)(*(longlong *)(param_1 + 0x198) + 8) = *(undefined8 *)(param_1 + 0x1a0);
      *(undefined8 *)(param_1 + 0x198) = 0;
    }
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 140750340 FUN_140750340 body=201 status=ok
// SIG undefined FUN_140750340(void)

longlong FUN_140750340(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2c8);
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_143fe0658;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2d8);
  }
  return param_1;
}



// FUNCTION 140750410 FUN_140750410 body=107 status=ok
// SIG undefined FUN_140750410(void)

longlong FUN_140750410(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x738) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x718) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x708) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x750);
  }
  return param_1;
}



// FUNCTION 140750480 FUN_140750480 body=126 status=ok
// SIG undefined FUN_140750480(void)

longlong FUN_140750480(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x1b8) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x158) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x128) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 200) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x98) = &PTR_ValueToString_14407aff8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f8);
  }
  return param_1;
}



// FUNCTION 140750500 FUN_140750500 body=95 status=ok
// SIG undefined FUN_140750500(void)

longlong FUN_140750500(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x68) = &PTR_ValueToString_14407aff8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 140750560 FUN_140750560 body=182 status=ok
// SIG undefined FUN_140750560(void)

longlong FUN_140750560(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x108) = &PTR_ValueToString_14407aff8;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0xc0);
  *(undefined ***)(param_1 + 0x90) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x60) = &PTR_ValueToString_14407aff8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x148);
  }
  return param_1;
}



// FUNCTION 140750620 FUN_140750620 body=158 status=ok
// SIG undefined FUN_140750620(void)

longlong FUN_140750620(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x98);
  iVar3 = *(int *)(param_1 + 0xa0);
  if (iVar3 != 0) {
    puVar1 = (undefined8 *)(lVar2 + 0x50);
    do {
      puVar1[0xb] = &PTR_ValueToString_14407aff8;
      *puVar1 = &PTR_ValueToString_14407aff8;
      puVar1[-6] = &PTR_ValueToString_14407aff8;
      puVar1 = puVar1 + 0x1e;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar2 = *(longlong *)(param_1 + 0x98);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1407506c0 FUN_1407506c0 body=87 status=ok
// SIG undefined FUN_1407506c0(void)

longlong FUN_1407506c0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x2a8) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x278) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x228) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x1f8) = &PTR_ValueToString_14407aff8;
  FUN_140729c00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2e0);
  }
  return param_1;
}



// FUNCTION 140750720 FUN_140750720 body=94 status=ok
// SIG undefined FUN_140750720(void)

longlong FUN_140750720(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x2d0) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x2a0) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x268) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x238) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x208) = &PTR_ValueToString_14407aff8;
  FUN_140729c00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x308);
  }
  return param_1;
}



// FUNCTION 140750780 FUN_140750780 body=66 status=ok
// SIG undefined FUN_140750780(void)

longlong FUN_140750780(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x1d8) = &PTR_ValueToString_14407aff8;
  FUN_140729c00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 1407507d0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessAmbientOcclusionPSandCS<1,1,1,1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_140729c00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e8);
  }
  return param_1;
}



// FUNCTION 140750810 FUN_140750810 body=52 status=ok
// SIG undefined FUN_140750810(void)

undefined8 FUN_140750810(undefined8 param_1,ulonglong param_2)

{
  UAISystem::~UAISystem();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 140750850 FUN_140750850 body=271 status=ok
// SIG undefined FUN_140750850(void)

longlong FUN_140750850(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x888) != 0) {
    if (*(longlong *)(param_1 + 0x878) == 0) {
      **(longlong **)(param_1 + 0x880) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x880) = *(longlong *)(param_1 + 0x878);
      *(undefined8 *)(*(longlong *)(param_1 + 0x878) + 8) = *(undefined8 *)(param_1 + 0x880);
      *(undefined8 *)(param_1 + 0x878) = 0;
    }
    *(undefined8 *)(param_1 + 0x880) = 0;
    *(undefined8 *)(param_1 + 0x888) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x870);
  lVar2 = *(longlong *)(param_1 + 0x868);
  if (iVar1 != 0) {
    lVar2 = lVar2 + 0x18;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2);
      lVar2 = lVar2 + 0x28;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    lVar2 = *(longlong *)(param_1 + 0x868);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x860) = 0;
  if (*(longlong *)(param_1 + 0x858) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x818);
  *(undefined ***)(param_1 + 0x6f0) = &PTR_FUN_14407f338;
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x890);
  }
  return param_1;
}



// FUNCTION 140750960 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessMotionBlurPS<1,1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 1407509a0 FUN_1407509a0 body=204 status=ok
// SIG undefined FUN_1407509a0(void)

longlong FUN_1407509a0(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x938) != 0) {
    if (*(longlong *)(param_1 + 0x928) == 0) {
      **(longlong **)(param_1 + 0x930) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x930) = *(longlong *)(param_1 + 0x928);
      *(undefined8 *)(*(longlong *)(param_1 + 0x928) + 8) = *(undefined8 *)(param_1 + 0x930);
      *(undefined8 *)(param_1 + 0x928) = 0;
    }
    *(undefined8 *)(param_1 + 0x930) = 0;
    *(undefined8 *)(param_1 + 0x938) = 0;
  }
  *(undefined4 *)(param_1 + 0x920) = 0;
  if (*(longlong *)(param_1 + 0x918) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x8d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x8c0);
  *(undefined ***)(param_1 + 0x6f0) = &PTR_FUN_14407f338;
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x940);
  }
  return param_1;
}



// FUNCTION 140750a70 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessPassThroughPS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 140750ab0 FUN_140750ab0 body=52 status=ok
// SIG undefined FUN_140750ab0(void)

undefined8 FUN_140750ab0(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2d0);
  }
  return param_1;
}



// FUNCTION 140750af0 FUN_140750af0 body=271 status=ok
// SIG undefined FUN_140750af0(void)

longlong FUN_140750af0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    if (*(longlong *)(param_1 + 0x4b0) == 0) {
      **(longlong **)(param_1 + 0x4b8) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x4b8) = *(longlong *)(param_1 + 0x4b0);
      *(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 8) = *(undefined8 *)(param_1 + 0x4b8);
      *(undefined8 *)(param_1 + 0x4b0) = 0;
    }
    *(undefined8 *)(param_1 + 0x4b8) = 0;
    *(undefined8 *)(param_1 + 0x4c0) = 0;
  }
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FMemory::Free();
  }
  FUN_14074e6d0(param_1 + 0x490);
  FUN_1406d8b70(param_1 + 0x3d8);
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x180) = &PTR_FUN_1440732c8;
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_143fddd00;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4c8);
  }
  return param_1;
}



// FUNCTION 140750c00 FUN_140750c00 body=251 status=ok
// SIG undefined FUN_140750c00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140750c00(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 local_1c;
  undefined4 local_14;
  
  if (param_1 == (longlong *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x688))();
  }
  plVar2 = (longlong *)FUN_140765020(param_1);
  uVar4 = 0;
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_142e7dfd0();
    uVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    if ((uVar4 != 0) && (lVar1 != 0)) {
      lVar1 = *(longlong *)(lVar1 + 0x168);
      local_1c = _DAT_1468b5d90;
      local_14 = DAT_1468b5d98;
      if (lVar1 != 0) {
        local_1c = *(undefined8 *)(lVar1 + 0x220);
        local_14 = *(undefined4 *)(lVar1 + 0x228);
      }
      uVar4 = FUN_142df43c0(uVar4,param_2,&local_1c,uVar4,local_1c,local_14);
      return uVar4;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140750d00 FUN_140750d00 body=258 status=ok
// SIG undefined FUN_140750d00(void)

void FUN_140750d00(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *local_18;
  int local_10;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  lVar2 = (**(code **)(*param_1 + 0x668))();
  if (lVar2 != 0) {
    lVar3 = ARemnantWeaponMod::GetPrivateStaticClass();
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
      lVar2 = *(longlong *)(lVar2 + 0x608);
      goto LAB_140750d7f;
    }
  }
  uVar4 = AGBlizzard::GetPrivateStaticClass();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar4);
LAB_140750d7f:
  if (lVar2 != 0) {
    local_18 = (longlong *)0x0;
    local_10 = 0;
    FUN_14071ba40(lVar2,1,param_2,&local_18,0);
    if (local_10 != 0) {
      if (local_18 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_18 + 0x28))(local_18,0);
      if (local_18 != (longlong *)0x0) {
        local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
      }
      local_10 = 0;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return;
}



// FUNCTION 140750e10 FUN_140750e10 body=70 status=ok
// SIG undefined FUN_140750e10(void)

void FUN_140750e10(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = APostProcessVolume::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      USBZNavLinkAgilityComponent::SetComputeOnBeginPlay(lVar2,param_2);
    }
  }
  return;
}



// FUNCTION 140750e60 PostSpawnDroppedItem body=5 status=ok
// SIG undefined PostSpawnDroppedItem(void)

void UItemUtil::PostSpawnDroppedItem(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = FUN_1407adec0();
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar4 = FUN_140765020(param_1);
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x570) != 0)) {
    lVar5 = FUN_142b79030(*(longlong *)(lVar4 + 0x570),uVar2);
    if (lVar5 != 0) {
      lVar6 = FUN_1407adec0();
      iVar1 = *(int *)(lVar6 + 0x90);
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < iVar1) ||
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
          lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        if (*(longlong *)(lVar4 + 0x608) != 0) {
          FUN_14071caf0(*(longlong *)(lVar4 + 0x608),CONCAT71((int7)(int3)((uint)iVar1 >> 8),3));
          return;
        }
        FUN_14072b980(lVar5,lVar4);
      }
    }
  }
  return;
}



// FUNCTION 140750e70 FUN_140750e70 body=403 status=ok
// SIG undefined FUN_140750e70(void)

void FUN_140750e70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar6 = *(longlong *)(param_1 + 0x178);
  local_20 = 0;
  local_18 = 0;
  lVar8 = lVar6;
  do {
    if (lVar8 == lVar6 + (longlong)*(int *)(param_1 + 0x180) * 0x28) {
LAB_140750fe3:
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
      return;
    }
    if (*(longlong *)(lVar8 + 8) == param_2) {
      uVar3 = (lVar8 - lVar6) / 0x28;
      iVar7 = (int)uVar3;
      if (iVar7 != -1) {
        lVar1 = (longlong)iVar7 * 5 + 3;
        TBaseDelegate<FSlateBrush_const_*>::operator=
                  (&local_20,lVar6 + lVar1 * 8,lVar8 - lVar6,lVar6,
                   *(undefined8 *)(lVar6 + (longlong)iVar7 * 0x28),
                   *(undefined8 *)(lVar6 + -0x10 + lVar1 * 8),
                   *(undefined1 *)(lVar6 + -8 + lVar1 * 8));
        if ((*(longlong *)(param_2 + 0x570) != 0) &&
           (plVar5 = (longlong *)
                     FUN_142b79030(*(longlong *)(param_2 + 0x570),*(undefined8 *)(param_1 + -0x6d8))
           , plVar5 != (longlong *)0x0)) {
          lVar6 = UBTTask_MoveTo::StaticClass();
          if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            if (((int)plVar5[0xf] != 0) &&
               (plVar2 = (longlong *)plVar5[0xe], plVar2 != (longlong *)0x0)) {
              (**(code **)(*plVar2 + 0x28))(plVar2,0);
              if (plVar5[0xe] != 0) {
                lVar6 = FMemory::Realloc(plVar5[0xe],0,0);
                plVar5[0xe] = lVar6;
              }
              *(undefined4 *)(plVar5 + 0xf) = 0;
            }
            (**(code **)(*plVar5 + 0x298))(plVar5);
          }
        }
        FUN_140766d00(param_1 + -0x6f0,uVar3 & 0xffffffff,0);
      }
      goto LAB_140750fe3;
    }
    lVar8 = lVar8 + 0x28;
  } while( true );
}



// FUNCTION 140751010 FUN_140751010 body=205 status=ok
// SIG undefined FUN_140751010(void)

void FUN_140751010(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_2 + 0x570) != 0) &&
     (plVar3 = (longlong *)
               FUN_142b79030(*(longlong *)(param_2 + 0x570),*(undefined8 *)(param_1 + -0x6d8)),
     plVar3 != (longlong *)0x0)) {
    lVar4 = UBTTask_MoveTo::StaticClass();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (((int)plVar3[0xf] != 0) && (plVar1 = (longlong *)plVar3[0xe], plVar1 != (longlong *)0x0))
      {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (plVar3[0xe] != 0) {
          lVar4 = FMemory::Realloc(plVar3[0xe],0,0);
          plVar3[0xe] = lVar4;
        }
        *(undefined4 *)(plVar3 + 0xf) = 0;
      }
      (**(code **)(*plVar3 + 0x298))(plVar3);
    }
  }
  FUN_14076e180(param_1 + -0x6f0,param_2,0);
  return;
}



// FUNCTION 1407510e0 FUN_1407510e0 body=133 status=ok
// SIG undefined FUN_1407510e0(void)

void FUN_1407510e0(longlong param_1)

{
  longlong lVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0x130) == '\0') {
    if ((*(longlong *)(param_1 + 0x78) != 0) && (*(longlong *)(param_1 + 0x80) != 0)) {
      local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x118);
      local_28 = *(undefined8 *)(param_1 + 0x60);
      local_18 = *(undefined8 *)(param_1 + 0x88);
      lVar1 = param_1 + 0x38;
      if (*(char *)(param_1 + 0xa0) != '\x03') {
        lVar1 = param_1 + 0x18;
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar1,&local_28);
      FUN_140755420(param_1 + -0x178,0);
    }
  }
  return;
}



// FUNCTION 140751170 FUN_140751170 body=838 status=ok
// SIG undefined FUN_140751170(void)

void FUN_140751170(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  int iVar10;
  float fVar11;
  ulonglong local_res10;
  undefined8 local_res18;
  undefined4 local_f8;
  undefined4 uStack_f4;
  int local_f0 [2];
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 *local_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined ***local_78;
  
  puVar9 = (undefined4 *)*param_2;
  local_d0 = puVar9 + (longlong)*(int *)(param_2 + 1) * 2;
  local_res18 = param_3;
  if (puVar9 != local_d0) {
    do {
      local_f8 = *puVar9;
      uStack_f4 = puVar9[1];
      cVar1 = FWeakObjectPtr::IsValid(&local_f8);
      if (cVar1 != '\0') {
        lVar3 = FWeakObjectPtr::Get(&local_f8);
        local_res10 = 0xffffffffffffffff;
        fVar11 = (float)FUN_142de77e0(lVar3 + 0x30,0,0,&local_res10);
        iVar10 = (int)ROUND(fVar11 * 2.0 + 0.5) >> 1;
        if (iVar10 != 0) {
          lVar3 = *param_1;
          iVar6 = 0;
          lVar5 = (longlong)(int)param_1[1] * 0x38 + lVar3;
          for (; lVar3 != lVar5; lVar3 = lVar3 + 0x38) {
            cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar3);
            if (cVar1 != '\0') {
              iVar6 = iVar6 + 1;
            }
          }
          if (iVar6 < iVar10) {
            local_f0[0] = 0;
            local_e8 = 0;
            local_e0 = 0;
            local_b8 = CONCAT44((int)((ulonglong)local_b8 >> 0x20),param_4);
            local_res10 = local_res10 & 0xffffffffffffff00;
            plStack_c0 = &local_e8;
            local_c8._0_4_ = (undefined4)param_3;
            local_c8._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
            local_b0 = &PTR_LAB_1440899f0;
            local_78 = &local_b0;
            local_d8 = CONCAT44(uStack_f4,local_f8);
            local_a8 = (undefined4)local_c8;
            uStack_a4 = local_c8._4_4_;
            local_c8 = param_3;
            local_98 = local_b8;
            uStack_a0 = plStack_c0;
            cVar1 = FUN_1407576d0(&local_d8,&local_res10,local_f0,&local_b0);
            if (((cVar1 == '\0') || ((int)local_e0 == 0)) || ((int)local_e0 < local_f0[0])) {
              if (local_e8 != 0) {
                FMemory::Free();
              }
            }
            else {
              if (local_e8 != 0) {
                FMemory::Free();
              }
              uVar8 = (ulonglong)(uint)(iVar10 - iVar6);
              do {
                lVar3 = param_1[1];
                iVar10 = (int)lVar3 + 1;
                *(int *)(param_1 + 1) = iVar10;
                if (*(int *)((longlong)param_1 + 0xc) < iVar10) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>
                  ::ResizeGrow();
                }
                lVar5 = *param_1;
                lVar7 = (longlong)(int)lVar3 * 0x38;
                *(undefined8 *)(lVar7 + lVar5) = 0;
                *(undefined8 *)(lVar7 + 8 + lVar5) = 0;
                *(undefined8 *)(lVar7 + 0x10 + lVar5) = 0;
                *(undefined8 *)(lVar7 + 0x18 + lVar5) = 0;
                *(undefined8 *)(lVar7 + 0x20 + lVar5) = 0;
                *(undefined8 *)(lVar7 + 0x28 + lVar5) = 0;
                *(undefined8 *)(lVar7 + 0x30 + lVar5) = 0;
                lVar5 = *param_1;
                *(int *)(lVar7 + 0x2c + lVar5) = DAT_146858ee0;
                DAT_146858ee0 = DAT_146858ee0 + 1;
                *(undefined4 *)(lVar7 + lVar5) = local_f8;
                *(undefined4 *)(lVar7 + 4 + lVar5) = uStack_f4;
                lVar4 = FWeakObjectPtr::Get(&local_f8);
                lVar3 = lVar7 + lVar5;
                iVar10 = *(int *)(lVar7 + 0x10 + lVar5);
                iVar6 = *(int *)(lVar4 + 0xb8);
                iVar2 = iVar10 + iVar6;
                *(int *)(lVar3 + 0x10) = iVar2;
                if (*(int *)(lVar3 + 0x14) < iVar2) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                  ::ResizeGrow(lVar3 + 8);
                }
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)(lVar3 + 8) + (longlong)iVar10 * 0x18),0,
                           (longlong)iVar6 * 0x18);
                iVar10 = 0;
                lVar5 = FWeakObjectPtr::Get();
                if (0 < *(int *)(lVar5 + 0xb8)) {
                  lVar5 = 0;
                  lVar4 = 0;
                  do {
                    lVar7 = FWeakObjectPtr::Get(&local_f8);
                    iVar10 = iVar10 + 1;
                    *(undefined8 *)(lVar5 + *(longlong *)(lVar3 + 8)) =
                         *(undefined8 *)(lVar4 + *(longlong *)(lVar7 + 0xb0));
                    lVar7 = FWeakObjectPtr::Get();
                    lVar5 = lVar5 + 0x18;
                    lVar4 = lVar4 + 0x130;
                  } while (iVar10 < *(int *)(lVar7 + 0xb8));
                }
                uVar8 = uVar8 - 1;
                param_3 = local_res18;
              } while (uVar8 != 0);
            }
          }
        }
      }
      puVar9 = puVar9 + 2;
    } while (puVar9 != local_d0);
  }
  return;
}



// FUNCTION 1407514c0 FUN_1407514c0 body=115 status=ok
// SIG undefined FUN_1407514c0(void)

undefined8
FUN_1407514c0(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  
  lVar1 = FUN_140759410(param_1,param_2,param_3,param_7);
  if (lVar1 == 0) {
    return 0;
  }
  FUN_140752230(lVar1,*param_1,param_3,param_4,param_5,param_6);
  return 1;
}



// FUNCTION 140751540 Add body=230 status=ok
// SIG undefined Add(void)

void FObjectInitializer::FOverrides::Add
               (longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar1 = (int)param_1[0x11];
  uVar3 = 0;
  if (0 < iVar1) {
    plVar2 = (longlong *)param_1[0x10];
    uVar6 = uVar3;
    plVar4 = plVar2;
    if (plVar2 == (longlong *)0x0) {
      plVar2 = param_1;
      plVar4 = param_1;
    }
    do {
      iVar5 = (int)uVar6;
      if (*plVar2 == param_2) {
        if (iVar5 != -1) {
          if (param_3 == 0) {
            return;
          }
          if (plVar4[(longlong)iVar5 * 2 + 1] == 0) {
            return;
          }
          FUN_1417905a0(param_4,param_2,plVar4[(longlong)iVar5 * 2 + 1],param_3);
          return;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 2;
      uVar6 = (ulonglong)(iVar5 + 1);
    } while ((longlong)uVar3 < (longlong)iVar1);
  }
  *(int *)(param_1 + 0x11) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x8c) < iVar1 + 1) {
    TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
    ResizeGrow(param_1,iVar1);
  }
  plVar2 = (longlong *)param_1[0x10];
  if ((longlong *)param_1[0x10] == (longlong *)0x0) {
    plVar2 = param_1;
  }
  plVar2 = plVar2 + (longlong)iVar1 * 2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = param_2;
    plVar2[1] = param_3;
  }
  return;
}



// FUNCTION 140751630 FUN_140751630 body=282 status=ok
// SIG undefined FUN_140751630(void)

undefined8
FUN_140751630(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,char param_6,undefined1 param_7)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  if (param_2 != 0) {
    lVar4 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar4 = FUN_14075eaf0(param_2), lVar4 != 0)) {
      puVar1 = (undefined4 *)(lVar4 + 0x48);
      if (param_6 == '\0') {
        uVar5 = 0;
        cVar3 = FUN_140753a50(puVar1,param_3,param_2,param_7,param_4,0);
        if (cVar3 == '\0') {
          return 0;
        }
      }
      lVar4 = FUN_140759410(puVar1,param_3,param_2,0);
      if (lVar4 != 0) {
        FUN_140752230(lVar4,*puVar1,param_2,param_4,param_7,CONCAT44(uVar5,param_5));
        *param_1 = param_3;
        param_1[1] = param_2;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140751750 FUN_140751750 body=545 status=ok
// SIG undefined FUN_140751750(void)

void FUN_140751750(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1407a8dd0();
  lVar2 = *(longlong *)(lVar2 + 0x18);
  if (lVar2 == 0) {
    FUN_1417846f0(param_3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar3 = FUN_1407a2860();
  lVar2 = FUN_1417985e0(uVar3,param_3,lVar2,0,0,0,0,0,0);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  lVar2 = DAT_146859150;
  if (DAT_146859150 == 0) {
    FUN_1417846f0(param_3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar3 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  lVar2 = FUN_1417985e0(uVar3,param_3,lVar2,0,0,0,0,0,0);
  if (lVar2 != 0) {
    uVar3 = FUN_1428dfc70();
    *(undefined8 *)(lVar2 + 0x30) = uVar3;
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  lVar2 = DAT_146859158;
  if (DAT_146859158 == 0) {
    FUN_1417846f0(param_3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar3 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  lVar2 = FUN_1417985e0(uVar3,param_3,lVar2,0,0,0,0,0,0);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  lVar2 = DAT_146859160;
  if (DAT_146859160 == 0) {
    FUN_1417846f0(param_3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar3 = FUN_142c361d0();
  lVar2 = FUN_1417985e0(uVar3,param_3,lVar2,0,0,0,0,0,0);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 140751980 FUN_140751980 body=483 status=ok
// SIG undefined FUN_140751980(void)

void FUN_140751980(longlong param_1,longlong *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  uint uVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined4 *puVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_28;
  ulonglong uStack_20;
  
  if (param_2 != (longlong *)0x0) {
    iVar1 = *(int *)((longlong)param_2 + 0xc);
    pwVar4 = (wchar_t *)0x0;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar9;
      pwVar4 = (wchar_t *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
               (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18);
    }
    if ((*(uint *)(pwVar4 + 4) >> 0x1d & 1) == 0) {
      iVar1 = *(int *)(param_1 + 0x658);
      *(int *)(param_1 + 0x658) = iVar1 + 1;
      if (*(int *)(param_1 + 0x65c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x650,iVar1);
      }
      *(longlong **)(*(longlong *)(param_1 + 0x650) + (longlong)iVar1 * 8) = param_2;
      uVar5 = UScrollBox::GetPrivateStaticClass();
      lVar6 = (**(code **)(*param_2 + 0x628))(param_2,uVar5);
      if (lVar6 != 0) {
        local_28 = FUN_1407543e0;
        uStack_20 = uStack_20 & 0xffffffff00000000;
        FUN_140722860(lVar6 + 0x268,&local_res10,param_1,&local_28);
      }
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&AGbxAIController::ChildDestroyed",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar4 = pwVar2;
      }
      FName::FName(&local_res18,pwVar4 + 2,1);
      plVar10 = param_2 + 0x52;
      FWeakObjectPtr::operator=(&local_28,0);
      uStack_20 = 0;
      FWeakObjectPtr::operator=(&local_28,param_1);
      uStack_20 = local_res18;
      local_res10 = 0;
      if ((local_res18 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_28), lVar6 != 0)) {
        UObject::FindFunction(lVar6,uStack_20);
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
      iVar1 = (int)param_2[0x53];
      *(int *)(param_2 + 0x53) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0x29c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
      }
      puVar8 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar10);
      *puVar8 = (undefined4)local_28;
      puVar8[1] = local_28._4_4_;
      *(ulonglong *)(puVar8 + 2) = uStack_20;
    }
  }
  return;
}



// FUNCTION 140751b70 FUN_140751b70 body=727 status=ok
// SIG undefined FUN_140751b70(void)

void FUN_140751b70(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  wchar_t *pwVar12;
  undefined4 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong local_res18;
  undefined1 local_res20 [8];
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar15 = 0;
  plVar17 = (longlong *)*param_2;
  uVar16 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (plVar17 + (int)param_2[1] < plVar17) {
    uVar16 = uVar15;
  }
  if (uVar16 != 0) {
    do {
      lVar8 = 0;
      plVar3 = (longlong *)*plVar17;
      if (plVar3 != (longlong *)0x0) {
        uVar6 = *(uint *)((longlong)plVar3 + 0xc);
        if ((int)uVar6 < (int)DAT_1469e91c4) {
          uVar14 = uVar6 & 0xffff;
          if ((int)uVar6 < 0) {
            uVar6 = uVar6 + 0xffff;
            uVar14 = uVar14 - 0x10000;
          }
          lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                  (longlong)(int)uVar14 * 0x18;
        }
        if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) == 0) {
          iVar2 = *(int *)(param_1 + 0x658);
          *(int *)(param_1 + 0x658) = iVar2 + 1;
          if (*(int *)(param_1 + 0x65c) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x650,iVar2)
            ;
          }
          *(longlong **)(*(longlong *)(param_1 + 0x650) + (longlong)iVar2 * 8) = plVar3;
          uVar7 = UScrollBox::GetPrivateStaticClass();
          lVar8 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar7);
          if (lVar8 != 0) {
            uStack_40 = 0;
            local_48 = FUN_1407543e0;
            plVar1 = (longlong *)(lVar8 + 0x268);
            plVar9 = (longlong *)FMemory::Realloc(0,0x30);
            if (plVar9 != (longlong *)0x0) {
              *plVar9 = (longlong)&PTR_FUN_143fcfec0;
              FWeakObjectPtr::operator=(plVar9 + 1,param_1);
              *(undefined4 *)(plVar9 + 2) = (undefined4)local_48;
              *(undefined4 *)((longlong)plVar9 + 0x14) = local_48._4_4_;
              *(undefined4 *)(plVar9 + 3) = uStack_40;
              *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_3c;
              lVar10 = FDelegateHandle::GenerateNewID();
              plVar9[5] = lVar10;
              *plVar9 = (longlong)&PTR_FUN_143fcff08;
              FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
              (**(code **)(*plVar9 + 0x20))(plVar9,local_res20);
              iVar2 = *(int *)(lVar8 + 0x270);
              *(int *)(lVar8 + 0x270) = iVar2 + 1;
              if (*(int *)(lVar8 + 0x274) < iVar2 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
              }
              puVar11 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
              *puVar11 = plVar9;
              *(undefined4 *)(puVar11 + 1) = 3;
            }
          }
          pwVar12 = _guard_xfg_dispatch_icall_nop(L"&AGbxAIController::ChildDestroyed",L"::");
          pwVar5 = (wchar_t *)0x0;
          while (pwVar4 = pwVar12, pwVar4 != (wchar_t *)0x0) {
            pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
            pwVar5 = pwVar4;
          }
          FName::FName(&local_res18,pwVar5 + 2,1);
          lVar8 = local_res18;
          plVar1 = plVar3 + 0x52;
          FWeakObjectPtr::operator=(&local_58,0);
          local_50 = 0;
          FWeakObjectPtr::operator=(&local_58,param_1);
          local_50 = lVar8;
          if ((lVar8 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_58), lVar8 != 0)) {
            UObject::FindFunction(lVar8,local_50);
          }
          TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
          iVar2 = (int)plVar3[0x53];
          *(int *)(plVar3 + 0x53) = iVar2 + 1;
          if (*(int *)((longlong)plVar3 + 0x29c) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
          }
          puVar13 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
          *puVar13 = local_58;
          puVar13[1] = local_54;
          *(longlong *)(puVar13 + 2) = local_50;
        }
      }
      plVar17 = plVar17 + 1;
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar16);
  }
  return;
}



// FUNCTION 140751e50 FUN_140751e50 body=186 status=ok
// SIG undefined FUN_140751e50(void)

int FUN_140751e50(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    TArray<FSlateRenderBatch,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar3 = (undefined4 *)((longlong)iVar1 * 0xf0 + *param_1);
  if (param_2 != 0) {
    puVar2 = (undefined8 *)(puVar3 + 0x26);
    do {
      *puVar3 = 0;
      *(undefined4 *)((longlong)puVar2 + -0x94) = 0;
      puVar2[-0x11] = 0;
      FAIDataProviderFloatValue::FAIDataProviderFloatValue(puVar2 + -0xf);
      FAIDataProviderFloatValue::FAIDataProviderFloatValue(puVar2 + -9);
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0;
      FAIDataProviderFloatValue::FAIDataProviderFloatValue(puVar2 + 2);
      puVar2[10] = 0;
      puVar3 = puVar3 + 0x3c;
      puVar2 = puVar2 + 0x1e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar1;
}



// FUNCTION 140751f10 FUN_140751f10 body=111 status=ok
// SIG undefined FUN_140751f10(void)

void FUN_140751f10(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + -0x4d0);
  uVar3 = *(undefined4 *)(param_1 + -0x4c8);
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  lVar2 = *param_2;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = uVar4;
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = uVar3;
  return;
}



// FUNCTION 140751f80 FUN_140751f80 body=152 status=ok
// SIG undefined FUN_140751f80(void)

void FUN_140751f80(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = *(longlong **)(param_2 + 0x118);
  AUGWeapon_Hook::GetPrivateStaticClass();
  lVar2 = (**(code **)(*plVar3 + 0x628))(plVar3);
  if ((lVar2 != 0) && (0 < *(int *)(param_1 + 0x740))) {
    plVar3 = *(longlong **)(param_1 + 0x738);
    lVar4 = 0;
    do {
      if (*plVar3 == lVar2) {
        return;
      }
      lVar4 = lVar4 + 1;
      plVar3 = plVar3 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x740));
  }
  iVar1 = *(int *)(param_1 + 0x740);
  *(int *)(param_1 + 0x740) = iVar1 + 1;
  if (*(int *)(param_1 + 0x744) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x738),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x738) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 140752020 FUN_140752020 body=515 status=ok
// SIG undefined FUN_140752020(void)

int * FUN_140752020(longlong param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x62c) == 0) {
    iVar8 = *(int *)(param_1 + 0x608);
    *(int *)(param_1 + 0x608) = iVar8 + 1;
    if (*(int *)(param_1 + 0x60c) < iVar8 + 1) {
      FUN_140767d20(param_1,iVar8);
    }
    iVar2 = *(int *)(param_1 + 0x620);
    iVar4 = iVar2 + 1;
    *(int *)(param_1 + 0x620) = iVar4;
    if (*(int *)(param_1 + 0x624) <= iVar2) {
      uVar3 = (int)(iVar2 + 0x20 + (iVar2 + 0x20 >> 0x1f & 0x1fU)) >> 5;
      if (uVar3 < 3) {
        iVar5 = 2;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x624) + 0x1f;
        lVar7 = 4;
        if (((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5 != 0) || (4 < uVar3)) {
          lVar7 = (longlong)(int)uVar3 + 0x10 + ((ulonglong)((longlong)(int)uVar3 * 3) >> 3);
        }
        uVar6 = FMemory::QuantizeSize(lVar7 * 4,0);
        iVar4 = *(int *)(param_1 + 0x620);
        iVar5 = (int)(uVar6 >> 2);
        if (iVar5 < (int)uVar3) {
          iVar5 = 0x7fffffff;
        }
      }
      *(int *)(param_1 + 0x624) = iVar5 << 5;
      TBitArray<TInlineAllocator<2,FDefaultAllocator>_>::Realloc(param_1 + 0x610,iVar4 + -1);
    }
    lVar7 = *(longlong *)(param_1 + 0x618);
    if (*(longlong *)(param_1 + 0x618) == 0) {
      lVar7 = param_1 + 0x610;
    }
    puVar1 = (uint *)(lVar7 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)iVar2 & 0x1f));
  }
  else {
    iVar8 = *(int *)(param_1 + 0x628);
    lVar7 = *(longlong *)(param_1 + 0x600);
    if (*(longlong *)(param_1 + 0x600) == 0) {
      lVar7 = param_1;
    }
    iVar2 = *(int *)(param_1 + 0x62c) + -1;
    iVar4 = *(int *)(lVar7 + 4 + (longlong)iVar8 * 0x18);
    *(int *)(param_1 + 0x628) = iVar4;
    *(int *)(param_1 + 0x62c) = iVar2;
    if (iVar2 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x600);
      if (*(longlong *)(param_1 + 0x600) == 0) {
        lVar7 = param_1;
      }
      *(undefined4 *)(lVar7 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  *param_2 = iVar8;
  lVar7 = *(longlong *)(param_1 + 0x618);
  if (*(longlong *)(param_1 + 0x618) == 0) {
    lVar7 = param_1 + 0x610;
  }
  puVar1 = (uint *)(lVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  lVar7 = *(longlong *)(param_1 + 0x600);
  if (*(longlong *)(param_1 + 0x600) == 0) {
    lVar7 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar7 + (longlong)iVar8 * 0x18;
  return param_2;
}



// FUNCTION 140752230 FUN_140752230 body=463 status=ok
// SIG undefined FUN_140752230(void)

void FUN_140752230(longlong param_1,float param_2,longlong param_3,float param_4,char param_5,
                  float param_6)

{
  float *pfVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  float fVar7;
  
  iVar3 = FUN_14075fb80(param_1,param_3);
  if (iVar3 == -1) {
    iVar3 = *(int *)(param_1 + 0x268);
    lVar6 = (longlong)iVar3;
    *(int *)(param_1 + 0x268) = iVar3 + 1;
    if (*(int *)(param_1 + 0x26c) < iVar3 + 1) {
      FUN_140767ef0(param_1 + 0x20,iVar3);
    }
    lVar4 = *(longlong *)(param_1 + 0x260);
    if (*(longlong *)(param_1 + 0x260) == 0) {
      lVar4 = param_1 + 0x20;
    }
    *(undefined8 *)(lVar4 + lVar6 * 0x24) = 0;
    *(undefined8 *)(lVar4 + 8 + lVar6 * 0x24) = 0;
    *(undefined8 *)(lVar4 + 0x10 + lVar6 * 0x24) = 0;
    *(undefined8 *)(lVar4 + 0x18 + lVar6 * 0x24) = 0;
    *(undefined4 *)(lVar4 + 0x20 + lVar6 * 0x24) = 0;
  }
  pfVar5 = *(float **)(param_1 + 0x260);
  if (*(float **)(param_1 + 0x260) == (float *)0x0) {
    pfVar5 = (float *)(param_1 + 0x20);
  }
  lVar6 = (longlong)iVar3;
  FWeakObjectPtr::operator=(pfVar5 + lVar6 * 9 + 5,param_3);
  FWeakObjectPtr::operator=(pfVar5 + lVar6 * 9 + 7,*(undefined8 *)(param_3 + 0x488));
  pfVar5[lVar6 * 9 + 1] = param_2;
  *(char *)(pfVar5 + lVar6 * 9 + 4) = param_5;
  pfVar5[lVar6 * 9 + 3] = param_2 + param_6;
  if (pfVar5[lVar6 * 9 + 2] == 3.4028235e+38) {
    fVar7 = pfVar5[lVar6 * 9];
  }
  else {
    pfVar5[lVar6 * 9 + 2] = 3.4028235e+38;
    fVar7 = 0.0;
  }
  pfVar5[lVar6 * 9] = fVar7 + param_4;
  FUN_140770010(param_1);
  if ((param_5 == '\0') && (*(float *)(param_1 + 0x10) < *(float *)(param_1 + 0xc))) {
    do {
      cVar2 = FUN_140766ac0(param_1);
      if (cVar2 == '\0') {
        return;
      }
      *(undefined8 *)(param_1 + 8) = 0;
      fVar7 = 0.0;
      pfVar5 = *(float **)(param_1 + 0x260);
      if (*(float **)(param_1 + 0x260) == (float *)0x0) {
        pfVar5 = (float *)(param_1 + 0x20);
      }
      pfVar1 = pfVar5 + (longlong)*(int *)(param_1 + 0x268) * 9;
      for (; pfVar5 != pfVar1; pfVar5 = pfVar5 + 9) {
        fVar7 = fVar7 + *pfVar5;
        *(float *)(param_1 + 0xc) = fVar7;
        if (*(char *)(pfVar5 + 4) == '\0') {
          *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + *pfVar5;
        }
      }
    } while (*(float *)(param_1 + 0x10) <= fVar7 && fVar7 != *(float *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 140752400 FUN_140752400 body=59 status=ok
// SIG undefined FUN_140752400(void)

float * FUN_140752400(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_1 + 0x58);
  fVar2 = *(float *)(param_1 + 0x2c);
  fVar3 = *(float *)(param_1 + 0x30);
  fVar4 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(param_1 + 0x18);
  *param_2 = fVar1 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x10);
  param_2[1] = fVar1 * fVar2 + fVar4;
  param_2[2] = fVar1 * fVar3 + fVar5;
  return param_2;
}



// FUNCTION 140752440 FUN_140752440 body=270 status=ok
// SIG undefined FUN_140752440(void)

void FUN_140752440(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res8;
  
  FUN_142223710();
  pwVar3 = _guard_xfg_dispatch_icall_nop(L"&AAINode::OnPawnArrivedNodeCB",L"::");
  pwVar2 = (wchar_t *)0x0;
  while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
    pwVar2 = pwVar1;
  }
  FName::FName(&local_res8,pwVar2 + 2,1);
  FUN_14074ba20(*(longlong *)(param_1 + 0x458) + 0x748,param_1,FUN_1407635e0,local_res8);
  pwVar3 = _guard_xfg_dispatch_icall_nop(L"&AAINode::OnPawnDepartedNodeCB",L"::");
  pwVar2 = (wchar_t *)0x0;
  while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
    pwVar2 = pwVar1;
  }
  FName::FName(&local_res8,pwVar2 + 2,1);
  FUN_14074ba20(*(longlong *)(param_1 + 0x458) + 0x758,param_1,FUN_140763610,local_res8);
  return;
}



// FUNCTION 140752550 FUN_140752550 body=27 status=ok
// SIG undefined FUN_140752550(void)

void FUN_140752550(undefined8 param_1)

{
  FUN_142330a70();
  FUN_1407656b0(param_1);
  return;
}



// FUNCTION 140752570 FUN_140752570 body=140 status=ok
// SIG undefined FUN_140752570(void)

undefined8 FUN_140752570(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  if (((*(longlong *)(param_1 + 0x6a0) != 0) &&
      (lVar1 = FWeakObjectPtr::Get(param_1 + 0x698), lVar1 != 0)) &&
     (lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 0x6a0)), lVar1 != 0)) {
    return 1;
  }
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"OnMyWeaponHitSomething",1);
  FWeakObjectPtr::operator=(param_1 + 0x698,param_1);
  *(undefined8 *)(param_1 + 0x6a0) = *puVar2;
  return 1;
}



// FUNCTION 140752600 FUN_140752600 body=670 status=ok
// SIG undefined FUN_140752600(void)

void FUN_140752600(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  longlong local_res8;
  
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x720)) {
    lVar7 = 0;
    do {
      plVar5 = *(longlong **)(lVar7 + 8 + *(longlong *)(param_1 + 0x718));
      if (plVar5 != (longlong *)0x0) {
        uVar2 = AUGWeapon_Hook::GetPrivateStaticClass();
        lVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar2);
        if (lVar3 != 0) {
          FUN_1407529b0(lVar3,param_1);
        }
      }
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 0x20;
    } while (iVar8 < *(int *)(param_1 + 0x720));
  }
  plVar5 = (longlong *)(param_1 + 0x738);
  lVar7 = (longlong)*(int *)(param_1 + 0x740);
  if (*(int *)(param_1 + 0x740) != 0) {
    iVar10 = 0;
    bVar11 = *(longlong *)*plVar5 != 0;
    lVar3 = 0;
    iVar8 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar9 = iVar8 + 1;
      if (lVar3 < lVar7) {
        plVar4 = (longlong *)(*plVar5 + lVar3 * 8);
        do {
          if (bVar11 != (*plVar4 != 0)) break;
          iVar9 = iVar9 + 1;
          lVar3 = lVar3 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar3 < lVar7);
      }
      if (bVar11 != false) {
        if (iVar10 != iVar8) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar5 + (longlong)iVar10 * 8),
                     (void *)(*plVar5 + (longlong)iVar8 * 8),(longlong)(iVar9 - iVar8) << 3);
        }
        iVar10 = iVar10 + (iVar9 - iVar8);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar8 = iVar9;
    } while (lVar3 < lVar7);
    *(int *)(param_1 + 0x740) = iVar10;
  }
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x740)) {
    local_res8 = 0;
    do {
      iVar10 = 0;
      lVar7 = *(longlong *)(param_1 + 0x118);
      lVar3 = *(longlong *)(local_res8 + *(longlong *)(param_1 + 0x738));
      if (0 < *(int *)(lVar3 + 0x720)) {
        plVar5 = (longlong *)(lVar3 + 0x718);
        lVar6 = 0;
        do {
          if (*(longlong *)(*plVar5 + 8 + lVar6) == lVar7) {
            if (*(longlong *)((longlong)iVar10 * 0x20 + 0x10 + *plVar5) != 0) {
              FMemory::Free();
            }
            iVar9 = *(int *)(lVar3 + 0x720);
            iVar1 = (iVar9 - iVar10) + -1;
            if (iVar1 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar5 + (longlong)iVar10 * 0x20),
                         (void *)((longlong)(iVar10 + 1) * 0x20 + *plVar5),(longlong)iVar1 << 5);
              iVar9 = *(int *)(lVar3 + 0x720);
            }
            *(int *)(lVar3 + 0x720) = iVar9 + -1;
            TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(plVar5);
          }
          iVar10 = iVar10 + 1;
          lVar6 = lVar6 + 0x20;
        } while (iVar10 < *(int *)(lVar3 + 0x720));
      }
      FUN_1423424e0(lVar3);
      iVar8 = iVar8 + 1;
      local_res8 = local_res8 + 8;
    } while (iVar8 < *(int *)(param_1 + 0x740));
  }
  iVar8 = *(int *)(param_1 + 0x720);
  if (iVar8 != 0) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x718) + 0x10);
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  *(undefined4 *)(param_1 + 0x720) = 0;
  if (*(int *)(param_1 + 0x724) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x718,0);
  }
  *(undefined4 *)(param_1 + 0x740) = 0;
  if (*(int *)(param_1 + 0x744) == 0) {
    return;
  }
  TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x738,0);
  return;
}



// FUNCTION 1407528a0 FUN_1407528a0 body=266 status=ok
// SIG undefined FUN_1407528a0(void)

undefined8 FUN_1407528a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (param_2 != (longlong *)0x0) {
    uVar3 = AUGWeapon_Hook::GetPrivateStaticClass();
    lVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar3);
    if (lVar4 != 0) {
      uVar7 = 0;
      if (0 < *(int *)(param_1 + 0x720)) {
        plVar1 = (longlong *)(param_1 + 0x718);
        puVar5 = (undefined8 *)(*plVar1 + 8);
        uVar9 = uVar7;
        do {
          iVar8 = (int)uVar9;
          if (((longlong *)*puVar5 != (longlong *)0x0) && ((longlong *)*puVar5 == param_2)) {
            if (*(longlong *)(*plVar1 + 0x10 + (longlong)iVar8 * 0x20) != 0) {
              FMemory::Free();
            }
            iVar6 = *(int *)(param_1 + 0x720);
            iVar2 = (iVar6 - iVar8) + -1;
            if (iVar2 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar1 + (longlong)iVar8 * 0x20),
                         (void *)((longlong)(iVar8 + 1) * 0x20 + *plVar1),(longlong)iVar2 << 5);
              iVar6 = *(int *)(param_1 + 0x720);
            }
            *(int *)(param_1 + 0x720) = iVar6 + -1;
            TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(plVar1);
            FUN_1407529b0(lVar4,param_1);
            FUN_1423424e0(param_1);
            return 1;
          }
          uVar9 = (ulonglong)(iVar8 + 1);
          uVar7 = uVar7 + 1;
          puVar5 = puVar5 + 4;
        } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x720));
      }
    }
  }
  return 0;
}



// FUNCTION 1407529b0 FUN_1407529b0 body=140 status=ok
// SIG undefined FUN_1407529b0(void)

void FUN_1407529b0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x740) < 1) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x738);
  uVar6 = uVar4;
  do {
    iVar5 = (int)uVar6;
    if (*(longlong *)(lVar2 + uVar4 * 8) == param_2) {
      iVar1 = *(int *)(param_1 + 0x740);
      iVar3 = (iVar1 - iVar5) + -1;
      if (iVar3 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar2 + (longlong)iVar5 * 8),(void *)(lVar2 + (longlong)(iVar5 + 1) * 8)
                   ,(longlong)iVar3 << 3);
        iVar1 = *(int *)(param_1 + 0x740);
      }
      *(int *)(param_1 + 0x740) = iVar1 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x738));
      return;
    }
    uVar6 = (ulonglong)(iVar5 + 1);
    uVar4 = uVar4 + 1;
  } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x740));
  return;
}



// FUNCTION 140752a60 FUN_140752a60 body=1373 status=ok
// SIG undefined FUN_140752a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_140752a60(undefined4 *param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  int iVar16;
  char cVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  longlong lVar21;
  undefined8 uVar22;
  longlong lVar23;
  ulonglong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_1f8 [32];
  undefined8 **local_1d8;
  longlong local_1c8;
  undefined1 local_1c0;
  undefined1 local_1bf [7];
  undefined8 local_1b8;
  undefined8 *local_1b0;
  ulonglong local_1a8;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined8 uStack_154;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined1 local_128 [16];
  undefined1 *local_118;
  longlong local_110;
  undefined8 local_108;
  int iStack_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c0;
  undefined4 local_b8;
  longlong *local_b0;
  longlong local_a8 [2];
  longlong *local_98;
  longlong **local_90;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_198 = 0xffffffff;
  uStack_190 = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  lVar23 = 0;
  local_16c = 0;
  uStack_168 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  local_14c = 0;
  uStack_148 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_154 = 0;
  local_144 = 0;
  *param_4 = 0xffffffff;
  param_4[1] = 0;
  param_4[3] = 0;
  param_4[2] = 0xffffffff;
  *(undefined8 *)(param_4 + 0x16) = 0;
  *(undefined8 *)(param_4 + 0x18) = 0;
  param_4[0x1a] = 0xffffffff;
  *(undefined1 *)(param_4 + 0x1b) = 1;
  *(undefined8 *)(param_4 + 4) = 0;
  *(undefined8 *)(param_4 + 6) = 0;
  *(undefined8 *)(param_4 + 8) = 0;
  *(undefined8 *)(param_4 + 10) = 0;
  *(undefined8 *)(param_4 + 0xc) = 0;
  *(undefined8 *)(param_4 + 0xe) = 0;
  param_4[0x10] = 0;
  param_4[0x11] = 0;
  param_4[0x12] = 0;
  param_4[0x13] = 0;
  *(undefined8 *)(param_4 + 0x14) = 0;
  if ((param_3 == 0) ||
     (local_1b8 = param_2, cVar17 = FUN_140758a30(param_3,0,&local_1c8,local_128), cVar17 == '\0'))
  {
    return 0;
  }
  if (local_1c8 == param_3) {
    iVar18 = param_1[0x32];
    if (iVar18 < 1) {
      param_1[0x32] = 1;
      if ((int)param_1[0x33] < 1) {
        TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_1,iVar18);
      }
    }
    else if ((1 < iVar18) && (iVar18 + -1 != 0)) {
      param_1[0x32] = iVar18 - (iVar18 + -1);
      FUN_140768360(param_1);
    }
    puVar20 = *(undefined4 **)(param_1 + 0x30);
    if (*(undefined4 **)(param_1 + 0x30) == (undefined4 *)0x0) {
      puVar20 = param_1;
    }
    FWeakObjectPtr::operator=(puVar20 + 1,local_1c8);
    puVar20 = *(undefined4 **)(param_1 + 0x30);
    if (*(undefined4 **)(param_1 + 0x30) == (undefined4 *)0x0) {
      puVar20 = param_1;
    }
    *puVar20 = 0;
    puVar20 = (undefined4 *)FUN_1407565c0(&local_198,local_1c8,param_2);
    uVar7 = *(undefined8 *)(puVar20 + 4);
    uVar8 = *(undefined8 *)(puVar20 + 6);
    uVar3 = puVar20[1];
    uVar4 = puVar20[2];
    uVar5 = puVar20[3];
    uVar9 = *(undefined8 *)(puVar20 + 8);
    uVar10 = *(undefined8 *)(puVar20 + 10);
    uVar11 = *(undefined8 *)(puVar20 + 0xc);
    uVar12 = *(undefined8 *)(puVar20 + 0xe);
    uVar13 = *(undefined8 *)(puVar20 + 0x10);
    uVar14 = *(undefined8 *)(puVar20 + 0x12);
    uVar22 = *(undefined8 *)(puVar20 + 0x14);
    uVar1 = puVar20[0x16];
    uVar2 = puVar20[0x17];
    *param_4 = *puVar20;
    param_4[1] = uVar3;
    param_4[2] = uVar4;
    param_4[3] = uVar5;
    *(undefined8 *)(param_4 + 4) = uVar7;
    *(undefined8 *)(param_4 + 6) = uVar8;
    *(undefined4 **)(param_4 + 0x18) = param_1;
    *(undefined8 *)(param_4 + 8) = uVar9;
    *(undefined8 *)(param_4 + 10) = uVar10;
    param_4[0x1a] = 0;
    *(undefined8 *)(param_4 + 0xc) = uVar11;
    *(undefined8 *)(param_4 + 0xe) = uVar12;
    *(undefined1 *)(param_4 + 0x1b) = 1;
    *(undefined8 *)(param_4 + 0x10) = uVar13;
    *(undefined8 *)(param_4 + 0x12) = uVar14;
    *(undefined8 *)(param_4 + 0x14) = uVar22;
    param_4[0x16] = uVar1;
    param_4[0x17] = uVar2;
    return 1;
  }
  local_118 = &local_1c0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0xffffffff;
  local_cc = 0;
  local_c0 = 0;
  local_b8 = 0;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
            (&local_110,0x40);
  local_b0 = &local_110;
  local_a8[0] = 0;
  local_98 = &local_110;
  local_a8[1] = 0;
  local_90 = &local_b0;
  TArray<float,FDefaultAllocator>::ResizeTo(local_a8,0x40);
  if (iStack_104 < 0x40) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (&local_110,0x40);
  }
  local_1d8 = &local_1b0;
  local_1b0 = (undefined8 *)0x0;
  local_1a8 = 0;
  iVar18 = FUN_140749560(&local_118,local_1c8,param_3,local_1bf);
  puVar15 = local_1b0;
  if (iVar18 != 1) {
    uVar22 = 0;
    goto LAB_140752f6a;
  }
  iVar18 = param_1[0x32];
  iVar16 = (int)local_1a8;
  uVar24 = local_1a8 & 0xffffffff;
  iVar19 = (int)local_1a8 + 1;
  if (iVar18 < iVar19) {
    param_1[0x32] = iVar19;
    if ((int)param_1[0x33] < iVar19) {
      TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_1,iVar18);
    }
  }
  else if ((iVar19 < iVar18) && (iVar19 != iVar18)) {
    param_1[0x32] = iVar19;
    FUN_140768360(param_1);
  }
  puVar20 = *(undefined4 **)(param_1 + 0x30);
  if (*(undefined4 **)(param_1 + 0x30) == (undefined4 *)0x0) {
    puVar20 = param_1;
  }
  FWeakObjectPtr::operator=(puVar20 + 1,local_1c8);
  puVar20 = *(undefined4 **)(param_1 + 0x30);
  if (*(undefined4 **)(param_1 + 0x30) == (undefined4 *)0x0) {
    puVar20 = param_1;
  }
  *puVar20 = 0;
  if (iVar16 < 1) {
LAB_140752eea:
    puVar20 = (undefined4 *)FUN_1407565c0(&local_198,local_1c8,local_1b8);
  }
  else {
    do {
      lVar6 = puVar15[lVar23];
      lVar21 = local_1c8;
      if (lVar23 != 0) {
        lVar21 = puVar15[lVar23 + -1];
      }
      fVar25 = *(float *)(lVar6 + 0x220) - *(float *)(lVar21 + 0x220);
      fVar26 = *(float *)(lVar6 + 0x224) - *(float *)(lVar21 + 0x224);
      fVar27 = *(float *)(lVar6 + 0x228) - *(float *)(lVar21 + 0x228);
      FWeakObjectPtr::operator=();
      puVar20 = *(undefined4 **)(param_1 + 0x30);
      if (*(undefined4 **)(param_1 + 0x30) == (undefined4 *)0x0) {
        puVar20 = param_1;
      }
      puVar20[lVar23 * 3 + 3] =
           SQRT(fVar26 * fVar26 + fVar25 * fVar25 + fVar27 * fVar27) + (float)puVar20[lVar23 * 3];
      uVar24 = uVar24 - 1;
      lVar23 = lVar23 + 1;
    } while (uVar24 != 0);
    if (iVar16 < 1) goto LAB_140752eea;
    puVar20 = (undefined4 *)FUN_140756220(&local_198,local_1c8,*puVar15,local_1b8);
  }
  uVar3 = puVar20[3];
  uVar4 = puVar20[2];
  uVar5 = puVar20[1];
  uVar1 = puVar20[0x17];
  uVar2 = puVar20[0x16];
  uVar22 = *(undefined8 *)(puVar20 + 0x14);
  uVar7 = *(undefined8 *)(puVar20 + 0x10);
  uVar8 = *(undefined8 *)(puVar20 + 0x12);
  uVar9 = *(undefined8 *)(puVar20 + 0xc);
  uVar10 = *(undefined8 *)(puVar20 + 0xe);
  uVar11 = *(undefined8 *)(puVar20 + 8);
  uVar12 = *(undefined8 *)(puVar20 + 10);
  uVar13 = *(undefined8 *)(puVar20 + 4);
  uVar14 = *(undefined8 *)(puVar20 + 6);
  *param_4 = *puVar20;
  param_4[1] = uVar5;
  param_4[2] = uVar4;
  param_4[3] = uVar3;
  *(undefined8 *)(param_4 + 4) = uVar13;
  *(undefined8 *)(param_4 + 6) = uVar14;
  *(undefined4 **)(param_4 + 0x18) = param_1;
  *(undefined8 *)(param_4 + 8) = uVar11;
  *(undefined8 *)(param_4 + 10) = uVar12;
  param_4[0x1a] = 0;
  *(undefined8 *)(param_4 + 0xc) = uVar9;
  *(undefined8 *)(param_4 + 0xe) = uVar10;
  *(undefined1 *)(param_4 + 0x1b) = 1;
  *(undefined8 *)(param_4 + 0x10) = uVar7;
  *(undefined8 *)(param_4 + 0x12) = uVar8;
  *(undefined8 *)(param_4 + 0x14) = uVar22;
  param_4[0x16] = uVar2;
  param_4[0x17] = uVar1;
  uVar22 = 1;
LAB_140752f6a:
  if (puVar15 != (undefined8 *)0x0) {
    FMemory::Free(puVar15);
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  local_b8 = 0;
  if (local_c0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_100);
  if (local_110 != 0) {
    FMemory::Free();
  }
  return uVar22;
}



// FUNCTION 140752fc0 FUN_140752fc0 body=374 status=ok
// SIG undefined FUN_140752fc0(void)

undefined8 * FUN_140752fc0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar9 = 0;
  fVar13 = *(float *)(param_1 + 0x704);
  fVar2 = *(float *)(param_1 + 0x220);
  fVar3 = *(float *)(param_1 + 0x224);
  uVar5 = *(undefined8 *)(param_1 + 0x220);
  fVar4 = *(float *)(param_1 + 0x228);
  if (0 < *(int *)(param_1 + 0x720)) {
    lVar8 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 8 + lVar8);
      if (plVar1 != (longlong *)0x0) {
        uVar6 = AUGWeapon_Hook::GetPrivateStaticClass();
        lVar7 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar6);
        if ((lVar7 != 0) &&
           (fVar12 = fVar2 - *(float *)(lVar7 + 0x220), fVar11 = fVar3 - *(float *)(lVar7 + 0x224),
           fVar10 = fVar4 - *(float *)(lVar7 + 0x228),
           fVar10 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10), fVar13 < fVar10)) {
          fVar13 = fVar10;
        }
      }
      iVar9 = iVar9 + 1;
      lVar8 = lVar8 + 0x20;
    } while (iVar9 < *(int *)(param_1 + 0x720));
  }
  *param_2 = uVar5;
  *(float *)(param_2 + 1) = fVar4;
  *(ulonglong *)((longlong)param_2 + 0xc) = CONCAT44(fVar13,fVar13);
  *(float *)((longlong)param_2 + 0x14) = fVar13;
  *(float *)(param_2 + 3) = fVar13;
  return param_2;
}



// FUNCTION 140753140 FUN_140753140 body=832 status=ok
// SIG undefined FUN_140753140(void)

float FUN_140753140(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar6 = FWeakObjectPtr::Get();
  lVar7 = FWeakObjectPtr::Get(param_1 + 8);
  if ((lVar6 != 0) && (lVar7 != 0)) {
    fVar11 = *(float *)(lVar6 + 0x6fc);
    if (1.0 <= ABS(fVar11 - *(float *)(lVar7 + 0x6fc))) {
      fVar1 = *(float *)(param_1 + 0x58);
      fVar2 = *(float *)(param_1 + 0x5c);
      fVar3 = *(float *)(lVar6 + 0x220);
      fVar4 = *(float *)(lVar6 + 0x224);
      fVar5 = *(float *)(lVar6 + 0x228);
      fVar12 = *(float *)(lVar7 + 0x220) - fVar3;
      fVar14 = *(float *)(lVar7 + 0x224) - fVar4;
      fVar16 = *(float *)(lVar7 + 0x228) - fVar5;
      fVar8 = fVar14 * fVar14 + fVar12 * fVar12 + fVar16 * fVar16;
      fVar13 = fVar12;
      fVar15 = fVar14;
      fVar9 = fVar16;
      if ((fVar8 != 1.0) &&
         (fVar13 = DAT_1468b5d90, fVar15 = DAT_1468b5d94, fVar9 = DAT_1468b5d98, 1e-08 <= fVar8)) {
        auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
        fVar9 = auVar10._0_4_;
        fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
        fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
        fVar13 = fVar12 * fVar9;
        fVar15 = fVar14 * fVar9;
        fVar9 = fVar16 * fVar9;
      }
      fVar12 = fVar3 - *(float *)(lVar7 + 0x220);
      fVar8 = fVar5 - *(float *)(lVar7 + 0x228);
      fVar14 = fVar4 - *(float *)(lVar7 + 0x224);
      fVar8 = SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar8 * fVar8);
      if (0.0 < fVar8) {
        fVar11 = ((((fVar2 * *(float *)(param_1 + 0x38) +
                    fVar1 * *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x14)) - fVar4) *
                   fVar15 + ((fVar2 * *(float *)(param_1 + 0x34) +
                             fVar1 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x10)) -
                            fVar3) * fVar13 +
                  ((fVar2 * *(float *)(param_1 + 0x3c) +
                   fVar1 * *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x18)) - fVar5) * fVar9
                  ) / fVar8) * (*(float *)(lVar7 + 0x6fc) - fVar11) + fVar11;
      }
    }
    return fVar11;
  }
  return 1000.0;
}



// FUNCTION 140753480 FUN_140753480 body=535 status=ok
// SIG undefined FUN_140753480(void)

void FUN_140753480(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  ulonglong *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  void *_Dst;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  undefined *local_78;
  undefined1 *puStack_70;
  undefined1 local_68 [8];
  undefined8 *local_60;
  undefined8 local_58;
  longlong local_50;
  char local_48;
  undefined8 local_40;
  
  uVar3 = *(undefined8 *)(param_1 + 0x118);
  puVar6 = (undefined8 *)FUN_14075e4b0(local_68,param_2,param_4);
  lVar7 = UObject::FindFunction(uVar3,*puVar6);
  if (lVar7 != 0) {
    lVar4 = *(longlong *)(lVar7 + 0x58);
    if (lVar4 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x118) + 0x208))
                (*(longlong **)(param_1 + 0x118),lVar7,0);
    }
    else {
      puStack_70 = local_res8;
      local_78 = &DAT_14060d670;
      local_res8[0] = 0;
      lVar8 = FUN_1415d8310(&local_78,&DAT_146216a38);
      local_60 = (undefined8 *)(lVar8 + 0x18);
      local_58 = *local_60;
      local_50 = *(longlong *)(lVar8 + 0x28);
      local_48 = '\0';
      local_40 = *(undefined8 *)(lVar8 + 0x30);
      *(undefined8 ***)(lVar8 + 0x30) = &local_60;
      *(int *)(lVar8 + 0x38) = *(int *)(lVar8 + 0x38) + 1;
      puStack_70 = local_res8;
      local_78 = &DAT_14060d670;
      local_res8[0] = 0;
      lVar8 = FUN_1415d8310(&local_78,&DAT_146216a38);
      uVar2 = *(ushort *)(lVar7 + 0x8e);
      uVar10 = (uint)uVar2;
      puVar1 = (ulonglong *)(lVar8 + 0x18);
      uVar5 = 8;
      if (0xf < uVar10) {
        uVar5 = 0x10;
      }
      uVar11 = (ulonglong)uVar5;
      local_78 = (undefined *)~(uVar11 - 1);
      _Dst = (void *)(*(longlong *)(lVar8 + 0x18) + -1 + uVar11 & (ulonglong)local_78);
      uVar9 = (ulonglong)uVar2 + (longlong)_Dst;
      if (*(ulonglong *)(lVar8 + 0x20) < uVar9) {
        FMemStackBase::AllocateNewChunk(puVar1);
        _Dst = (void *)((*puVar1 - 1) + uVar11 & (ulonglong)local_78);
        uVar9 = (ulonglong)uVar10 + (longlong)_Dst;
      }
      *puVar1 = uVar9;
      _guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)uVar10);
      local_78 = *(undefined **)(param_3 + 0x488);
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)*(int *)(lVar4 + 0x44) + (longlong)_Dst),&local_78,
                 (longlong)(*(int *)(lVar4 + 0x34) * *(int *)(lVar4 + 0x30)));
      (**(code **)(**(longlong **)(param_1 + 0x118) + 0x208))
                (*(longlong **)(param_1 + 0x118),lVar7,_Dst);
      if (local_48 == '\0') {
        local_48 = 1;
        *(int *)(local_60 + 4) = *(int *)(local_60 + 4) + -1;
        if (local_50 != local_60[2]) {
          FMemStackBase::FreeChunks();
        }
        *local_60 = local_58;
        local_60[3] = local_40;
      }
    }
  }
  return;
}



// FUNCTION 1407536a0 FUN_1407536a0 body=312 status=ok
// SIG undefined FUN_1407536a0(void)

longlong FUN_1407536a0(longlong param_1,longlong param_2)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  uint7 uVar8;
  float *pfVar7;
  float *pfVar9;
  int local_res8 [2];
  
  if ((*(longlong *)(param_1 + 0x6f8) == 0) || (param_2 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((*(longlong *)(param_1 + 0x8b0) == 0) || (*(longlong *)(param_1 + 0x8b0) == param_2)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x570) == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  lVar6 = *(longlong *)(param_1 + 0x120);
  if (lVar6 == 0) {
    lVar6 = FUN_1423407b0();
  }
  fVar1 = *(float *)(lVar6 + 0x790);
  if (*(float *)(param_1 + 0x8d0) <= fVar1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x8d8,local_res8);
    pfVar9 = (float *)0x0;
    if (local_res8[0] != -1) {
      pfVar9 = (float *)(*(longlong *)(param_1 + 0x8d8) + (longlong)local_res8[0] * 0x18);
    }
    pfVar7 = pfVar9 + 2;
    if (pfVar9 == (float *)0x0) {
      pfVar7 = (float *)0x0;
    }
    bVar2 = false;
    uVar8 = 0;
    if (pfVar7 != (float *)0x0) {
      bVar2 = fVar1 < *pfVar7;
      uVar8 = (uint7)((ulonglong)pfVar7 >> 8);
    }
  }
  else {
    uVar8 = (uint7)((ulonglong)lVar6 >> 8);
    bVar2 = true;
  }
  if ((((*(char *)(param_1 + 0x700) != '\0') && (bVar3)) && (bVar4)) && ((bVar5 && (!bVar2)))) {
    return CONCAT71(uVar8,1);
  }
  return (ulonglong)uVar8 << 8;
}



// FUNCTION 1407537e0 FUN_1407537e0 body=612 status=ok
// SIG undefined FUN_1407537e0(void)

ulonglong FUN_1407537e0(longlong param_1,longlong *param_2,longlong param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar17;
  undefined8 local_res18;
  undefined4 *local_res20;
  ulonglong uVar16;
  
  local_res20 = param_4;
  if (param_3 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x10);
    in_RAX = (ulonglong)*(int *)(param_1 + 0x18);
    lVar15 = in_RAX * 0x38 + lVar9;
    for (; lVar9 != lVar15; lVar9 = lVar9 + 0x38) {
      lVar12 = *(longlong *)(lVar9 + 8);
      in_RAX = (ulonglong)*(int *)(lVar9 + 0x10);
      lVar1 = lVar12 + in_RAX * 0x18;
      for (; lVar12 != lVar1; lVar12 = lVar12 + 0x18) {
        if ((*(char *)(lVar9 + 0x30) == '\x05') && (iVar8 = 0, 0 < *(int *)(lVar12 + 0x10))) {
          lVar11 = 0;
          do {
            in_RAX = FUN_14058c1e0(*(longlong *)(lVar12 + 8) + (longlong)iVar8 * 8,param_3);
            if ((char)in_RAX != '\0') {
              FWeakObjectPtr::operator=(&local_res18,0);
              lVar4 = *(longlong *)(lVar12 + 8);
              *(undefined4 *)(lVar4 + lVar11) = (undefined4)local_res18;
              *(undefined4 *)(lVar4 + 4 + lVar11) = local_res18._4_4_;
              in_RAX = FUN_1407602c0(lVar9 + 8);
              if ((char)in_RAX != '\0') {
                in_RAX = FUN_1407676f0(lVar9);
                goto LAB_1407538e7;
              }
            }
            iVar8 = iVar8 + 1;
            lVar11 = lVar11 + 8;
          } while (iVar8 < *(int *)(lVar12 + 0x10));
        }
      }
    }
LAB_1407538e7:
    if (0 < (int)param_2[1]) {
      uVar10 = *(ulonglong *)(param_1 + 0x10);
      uVar6 = (longlong)*(int *)(param_1 + 0x18) * 0x38 + uVar10;
      in_RAX = uVar6;
      for (; uVar10 != uVar6; uVar10 = uVar10 + 0x38) {
        in_RAX = FWeakObjectPtr::IsValid(uVar10);
        if ((((char)in_RAX != '\0') && (1 < *(byte *)(uVar10 + 0x30))) &&
           (in_RAX = FWeakObjectPtr::Get(uVar10), *(int *)(in_RAX + 0xb8) == *(int *)(uVar10 + 0x10)
           )) {
          uVar13 = 0;
          in_RAX = FWeakObjectPtr::Get(uVar10);
          if (0 < *(int *)(in_RAX + 0xb8)) {
            local_res18 = 0;
            uVar16 = uVar13;
            uVar17 = uVar13;
            do {
              lVar9 = FWeakObjectPtr::Get(uVar10);
              lVar9 = *(longlong *)(uVar13 + *(longlong *)(lVar9 + 0xb0));
              if (lVar9 != 0) {
                plVar7 = (longlong *)*param_2;
                plVar2 = plVar7 + (int)param_2[1];
joined_r0x00014075398e:
                if (plVar7 != plVar2) {
                  if (*plVar7 != lVar9) goto code_r0x000140753995;
                  lVar15 = *(longlong *)(*(longlong *)(uVar10 + 8) + 8 + uVar17);
                  lVar9 = lVar15 + (longlong)*(int *)(*(longlong *)(uVar10 + 8) + 0x10 + uVar17) * 8
                  ;
                  for (; lVar15 != lVar9; lVar15 = lVar15 + 8) {
                    cVar5 = FUN_14058c1e0(lVar15,param_3);
                    if (cVar5 != '\0') {
                      uVar3 = *(undefined4 *)(uVar10 + 0x2c);
                      *local_res20 = uVar3;
                      return CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
                    }
                  }
                }
              }
              uVar14 = (int)uVar16 + 1;
              uVar16 = (ulonglong)uVar14;
              uVar13 = uVar13 + 0x130;
              uVar17 = uVar17 + 0x18;
              in_RAX = FWeakObjectPtr::Get(uVar10);
            } while ((int)uVar14 < *(int *)(in_RAX + 0xb8));
          }
        }
      }
    }
  }
  *local_res20 = 0xffffffff;
  return in_RAX & 0xffffffffffffff00;
code_r0x000140753995:
  plVar7 = plVar7 + 1;
  goto joined_r0x00014075398e;
}



// FUNCTION 140753a50 FUN_140753a50 body=412 status=ok
// SIG undefined FUN_140753a50(void)

bool FUN_140753a50(longlong param_1,longlong param_2,longlong param_3,char param_4,float param_5,
                  longlong param_6)

{
  int iVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 local_28 [2];
  
  plVar3 = (longlong *)FUN_140759410(param_1,param_2,param_3,param_6);
  if (plVar3 == (longlong *)0x0) {
    if (param_2 != 0) {
      lVar4 = 0;
      if ((*(char *)(param_2 + 0x130) == '\0') || (lVar4 = param_6, param_6 != 0)) {
LAB_140753b0b:
        lVar5 = param_1 + 8;
        iVar1 = *(int *)(param_1 + 10000);
        *(int *)(param_1 + 10000) = iVar1 + 1;
        if (*(int *)(param_1 + 0x2714) < iVar1 + 1) {
          FUN_140767dc0(lVar5,iVar1);
        }
        lVar6 = *(longlong *)(param_1 + 0x2708);
        if (*(longlong *)(param_1 + 0x2708) == 0) {
          lVar6 = lVar5;
        }
        _guard_xfg_dispatch_icall_nop((void *)(lVar6 + (longlong)iVar1 * 0x270),0,0x270);
        lVar6 = *(longlong *)(param_1 + 0x2708);
        if (*(longlong *)(param_1 + 0x2708) == 0) {
          lVar6 = lVar5;
        }
        plVar3 = (longlong *)(lVar6 + (longlong)iVar1 * 0x270);
        *plVar3 = param_2;
        *(undefined4 *)(plVar3 + 1) = 0;
        local_28[0] = 0xffffffffffffffff;
        uVar7 = FUN_142de77e0(param_2 + 0x30,0,0,local_28);
        *(undefined4 *)(plVar3 + 2) = uVar7;
        FWeakObjectPtr::operator=((longlong)plVar3 + 0x14,lVar4);
        goto LAB_140753bab;
      }
      lVar4 = FUN_142bbf6c0(*(undefined8 *)(param_3 + 0x568),param_2 + 0x138);
      if (lVar4 != 0) {
        lVar5 = FUN_1428dfc70();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) goto LAB_140753b0b;
      }
    }
    bVar2 = false;
  }
  else {
LAB_140753bab:
    if (param_4 == '\0') {
      fVar8 = *(float *)(plVar3 + 1);
    }
    else {
      fVar8 = *(float *)((longlong)plVar3 + 0xc);
    }
    bVar2 = fVar8 + param_5 < *(float *)(plVar3 + 2) || fVar8 + param_5 == *(float *)(plVar3 + 2);
  }
  return bVar2;
}



// FUNCTION 140753bf0 FUN_140753bf0 body=285 status=ok
// SIG undefined FUN_140753bf0(void)

undefined8 FUN_140753bf0(char *param_1,float param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  float *pfVar4;
  longlong *plVar5;
  float *pfVar6;
  int iVar7;
  int local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && (*param_1 != '\0')) {
    iVar7 = *(int *)(param_1 + 0x28);
    if (param_4 != 0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
      plVar5 = plVar3 + (longlong)iVar7 * 2;
      for (; plVar3 != plVar5; plVar3 = plVar3 + 2) {
        if (*plVar3 == param_4) {
          iVar7 = iVar7 + -1;
          break;
        }
      }
    }
    if (((*(char *)(lVar1 + 0x148) == '\0') || (iVar7 < *(int *)(lVar1 + 0x14c))) &&
       (FUN_1407546d0(param_1), *(float *)(param_1 + 0x1c) <= param_2)) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x30,local_res8);
      pfVar6 = (float *)0x0;
      if (local_res8[0] != -1) {
        pfVar6 = (float *)(*(longlong *)(param_1 + 0x30) + (longlong)local_res8[0] * 0x18);
      }
      pfVar4 = pfVar6 + 2;
      if (pfVar6 == (float *)0x0) {
        pfVar4 = (float *)0x0;
      }
      if (((pfVar4 == (float *)0x0) || (*pfVar4 <= param_2)) &&
         ((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xb8) == 0 ||
          (cVar2 = FUN_142c48f60(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xb8),param_3,
                                 *(undefined8 *)(param_4 + 0x488)), cVar2 != '\0')))) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140753d10 FUN_140753d10 body=130 status=ok
// SIG undefined FUN_140753d10(void)

bool FUN_140753d10(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res10 [24];
  
  if (((param_2 == 0) || (cVar3 = FUN_140761410(), cVar3 != '\0')) ||
     (lVar4 = FUN_14075bee0(param_1), lVar4 == 0)) {
    return false;
  }
  plVar5 = (longlong *)FUN_142c71360(lVar4,local_res10,param_3);
  if (*plVar5 != 0) {
    lVar2 = FUN_142e20fc0();
    lVar4 = *plVar5;
    for (lVar1 = lVar4; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) goto LAB_140753d74;
    }
  }
  lVar4 = 0;
LAB_140753d74:
  return lVar4 != 0;
}



// FUNCTION 140753da0 FUN_140753da0 body=251 status=ok
// SIG undefined FUN_140753da0(void)

ulonglong FUN_140753da0(longlong param_1,longlong param_2)

{
  bool bVar1;
  ulonglong in_RAX;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int local_res8 [2];
  
  if ((((*(char *)(param_1 + 0x10) != '\0') && (param_2 != 0)) &&
      (*(longlong *)(param_2 + 0x570) != 0)) && (in_RAX = *(ulonglong *)(param_1 + 8), in_RAX != 0))
  {
    if (*(char *)(in_RAX + 0x1d8) == '\0') {
      iVar4 = 0x7fffffff;
    }
    else {
      iVar4 = *(int *)(in_RAX + 0x1dc);
    }
    if (*(int *)(param_1 + 0x180) < iVar4) {
      FUN_1407549c0(param_1 + -0x6f0);
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x128,local_res8);
      if (local_res8[0] == -1) {
        in_RAX = 0xffffffffffffffff;
        pfVar3 = (float *)0x0;
      }
      else {
        in_RAX = *(ulonglong *)(param_1 + 0x128);
        pfVar3 = (float *)(in_RAX + (longlong)local_res8[0] * 0x18);
      }
      pfVar5 = pfVar3 + 2;
      if (pfVar3 == (float *)0x0) {
        pfVar5 = (float *)0x0;
      }
      if (pfVar5 != (float *)0x0) {
        lVar2 = *(longlong *)(param_1 + -0x5d0);
        if (lVar2 == 0) {
          lVar2 = FUN_1423407b0(param_1 + -0x6f0);
        }
        bVar1 = *(float *)(lVar2 + 0x790) < *pfVar5;
        in_RAX = CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar1);
        if (bVar1) goto LAB_140753e8e;
      }
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
LAB_140753e8e:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140753eb0 FUN_140753eb0 body=164 status=ok
// SIG undefined FUN_140753eb0(void)

ulonglong FUN_140753eb0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != 0) {
    lVar2 = ARemnantWeaponMod::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      lVar2 = FUN_14075eaf0(param_1);
      in_RAX = 0;
      if (lVar2 != 0) {
        uVar3 = FUN_140753a50(lVar2 + 0x48,param_2,param_1,param_4,param_3,0);
        return uVar3;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140753f70 FUN_140753f70 body=91 status=ok
// SIG undefined FUN_140753f70(void)

void FUN_140753f70(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0x2b0) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x2b0) + 0x118);
    }
    lVar1 = (**(code **)(*param_1 + 0x678))();
    if (lVar2 == lVar1) {
      (**(code **)(*param_1 + 0x780))(param_1);
      FUN_142227350(param_1,0,1);
    }
  }
  return;
}



// FUNCTION 140753fd0 FUN_140753fd0 body=474 status=ok
// SIG undefined FUN_140753fd0(void)

ulonglong FUN_140753fd0(longlong param_1,undefined8 param_2,float param_3,int param_4,float param_5,
                       float *param_6,undefined4 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float *pfVar3;
  longlong lVar4;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  uint local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  lVar4 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar4 = param_1;
  }
  uVar1 = FWeakObjectPtr::Get(lVar4 + ((longlong)(int)param_5 * 3 + 1) * 4);
  lVar4 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar4 = param_1;
  }
  uVar2 = FWeakObjectPtr::Get(lVar4 + ((longlong)param_4 * 3 + 1) * 4);
  FUN_140756220(&local_88,uVar2,uVar1,param_2);
  pfVar3 = (float *)FWeakObjectPtr::IsValid(&local_88);
  if (((char)pfVar3 != '\0') &&
     (pfVar3 = (float *)FWeakObjectPtr::IsValid(&local_80), (char)pfVar3 != '\0')) {
    pfVar3 = (float *)FUN_1407570c0(&local_88,&param_5);
    if ((char)pfVar3 != '\0') {
      *param_7 = local_88;
      param_7[1] = local_84;
      param_7[2] = local_80;
      param_7[3] = local_7c;
      *(undefined8 *)(param_7 + 4) = local_78;
      *(undefined8 *)(param_7 + 6) = uStack_70;
      *(longlong *)(param_7 + 0x18) = param_1;
      *(undefined8 *)(param_7 + 8) = local_68;
      *(undefined8 *)(param_7 + 10) = uStack_60;
      param_7[0x1a] = param_4;
      *(undefined8 *)(param_7 + 0xc) = local_58;
      *(undefined8 *)(param_7 + 0xe) = uStack_50;
      *(undefined1 *)(param_7 + 0x1b) = 1;
      *(undefined8 *)(param_7 + 0x10) = local_48;
      *(undefined8 *)(param_7 + 0x12) = uStack_40;
      *(undefined8 *)(param_7 + 0x14) = local_38;
      param_7[0x17] = local_2c;
      param_7[0x16] = local_30;
      return CONCAT71((uint7)(uint3)(local_7c >> 8),1);
    }
    if ((param_5 <= param_3 * param_3) && (pfVar3 = param_6, param_5 < *param_6)) {
      *param_6 = param_5;
      *param_7 = local_88;
      param_7[1] = local_84;
      param_7[2] = local_80;
      pfVar3 = (float *)(ulonglong)local_7c;
      param_7[3] = local_7c;
      *(undefined8 *)(param_7 + 4) = local_78;
      *(undefined8 *)(param_7 + 6) = uStack_70;
      *(longlong *)(param_7 + 0x18) = param_1;
      *(undefined8 *)(param_7 + 8) = local_68;
      *(undefined8 *)(param_7 + 10) = uStack_60;
      param_7[0x1a] = param_4;
      *(undefined8 *)(param_7 + 0xc) = local_58;
      *(undefined8 *)(param_7 + 0xe) = uStack_50;
      *(undefined1 *)(param_7 + 0x1b) = 1;
      *(undefined8 *)(param_7 + 0x10) = local_48;
      *(undefined8 *)(param_7 + 0x12) = uStack_40;
      *(undefined8 *)(param_7 + 0x14) = local_38;
      param_7[0x17] = local_2c;
      param_7[0x16] = local_30;
    }
  }
  return (ulonglong)pfVar3 & 0xffffffffffffff00;
}



// FUNCTION 1407541b0 FUN_1407541b0 body=188 status=ok
// SIG undefined FUN_1407541b0(void)

undefined8 FUN_1407541b0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(char *)(param_1 + 0x31) != '\0') || (*(char *)(param_1 + 0x30) != '\0')) {
    if ((int)param_3[1] == 0) {
      return 1;
    }
    lVar2 = FUN_142da89b0(param_2);
    if (lVar2 != 0) {
      if ((*(char *)(param_1 + 0x31) != '\0') && (*(longlong *)(lVar2 + 0x30) != 0)) {
        plVar3 = (longlong *)*param_3;
        plVar1 = plVar3 + (int)param_3[1];
        for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
          if (*plVar3 == *(longlong *)(lVar2 + 0x30)) {
            return 1;
          }
        }
      }
      if ((*(char *)(param_1 + 0x30) != '\0') && (*(longlong *)(lVar2 + 0x38) != 0)) {
        plVar3 = (longlong *)*param_3;
        plVar1 = plVar3 + (int)param_3[1];
        for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
          if (*plVar3 == *(longlong *)(lVar2 + 0x38)) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140754270 FUN_140754270 body=236 status=ok
// SIG undefined FUN_140754270(void)

void FUN_140754270(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146859210) {
    _Init_thread_header(&DAT_146859210);
    if (DAT_146859210 == -1) {
      FName::FName(&DAT_146859208,L"Falling",1);
      _Init_thread_footer(&DAT_146859210);
    }
  }
  if ((((*(longlong *)(param_1 + 0x5c8) != 0) && (*(longlong *)(param_1 + 0x5e0) != 0)) &&
      (*(char *)(*(longlong *)(param_1 + 0x5c8) + 0xd70) != '\0')) &&
     (plVar1 = *(longlong **)(param_1 + 0x608), plVar1 != (longlong *)0x0)) {
    if ((param_3 != 3) && (*(char *)(*(longlong *)(param_1 + 0x5e0) + 0x248) == '\x03')) {
                    /* WARNING: Could not recover jumptable at 0x0001407542f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x440))(plVar1,&DAT_146859208,0);
      return;
    }
    (**(code **)(*plVar1 + 0x448))(plVar1,&DAT_146859208);
  }
  return;
}



// FUNCTION 140754360 FUN_140754360 body=95 status=ok
// SIG undefined FUN_140754360(void)

ulonglong FUN_140754360(longlong param_1)

{
  int iVar1;
  ulonglong in_RAX;
  undefined4 extraout_var;
  float fVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    fVar2 = (float)FUN_142de77e0(*(longlong *)(param_1 + 0x10) + 0x38);
    iVar1 = rand();
    in_RAX = CONCAT44(extraout_var,iVar1);
    if ((float)iVar1 * 0.003051851 < fVar2) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1407543c0 FUN_1407543c0 body=31 status=ok
// SIG undefined FUN_1407543c0(void)

void FUN_1407543c0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x650,local_res10);
  return;
}



// FUNCTION 1407543e0 FUN_1407543e0 body=367 status=ok
// SIG undefined FUN_1407543e0(void)

void FUN_1407543e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  int iVar8;
  longlong lVar9;
  wchar_t *local_res10;
  longlong local_res18;
  
  pwVar7 = (wchar_t *)0x0;
  local_res10 = pwVar7;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x2b0) != 0)) {
    local_res10 = *(wchar_t **)(*(longlong *)(param_2 + 0x2b0) + 0x118);
  }
  if (local_res10 != (wchar_t *)0x0) {
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x650,&local_res10);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&AGbxAIController::ChildDestroyed",L"::");
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar7 = pwVar2;
    }
    FName::FName(&local_res18,pwVar7 + 2,1);
    pwVar7 = local_res10;
    pwVar3 = local_res10 + 0x148;
    lVar1 = *(longlong *)pwVar3;
    iVar8 = *(int *)(local_res10 + 0x14c);
    for (lVar9 = lVar1; lVar9 != (longlong)iVar8 * 0x10 + lVar1; lVar9 = lVar9 + 0x10) {
      if (((*(longlong *)(lVar9 + 8) == local_res18) && (param_1 != 0)) &&
         (lVar4 = FWeakObjectPtr::GetEvenIfUnreachable(lVar9), param_1 == lVar4)) {
        iVar8 = (int)(lVar9 - lVar1 >> 4);
        if (iVar8 != -1) {
          iVar6 = *(int *)(pwVar7 + 0x14c);
          iVar5 = (iVar6 - iVar8) + -1;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar8 * 0x10 + *(longlong *)pwVar3),
                       (void *)((longlong)(iVar6 - iVar5) * 0x10 + *(longlong *)pwVar3),
                       (longlong)iVar5 << 4);
            iVar6 = *(int *)(pwVar7 + 0x14c);
          }
          *(int *)(pwVar7 + 0x14c) = iVar6 + -1;
        }
        break;
      }
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(pwVar3);
  }
  return;
}



// FUNCTION 140754550 FUN_140754550 body=380 status=ok
// SIG undefined FUN_140754550(void)

undefined8 FUN_140754550(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  uVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  local_40 = &local_48;
  iVar8 = 0;
  local_48 = uVar2;
  local_38 = FUN_14073d760(&local_48,DAT_1468590e8);
  puVar5 = local_40;
  local_30 = &local_48;
  local_28 = 0;
  puVar3 = (undefined8 *)FUN_14073d760(local_40,local_38);
  puVar4 = (undefined8 *)FUN_14073d760(local_30,local_28);
  iVar6 = iVar8;
  if (puVar3 != puVar4) {
    do {
      iVar7 = iVar6;
      iVar6 = iVar7 + 1;
      puVar3 = (undefined8 *)FUN_14073d760(puVar5,*puVar3);
    } while (puVar3 != puVar4);
    if (0 < iVar6) {
      iVar1 = rand();
      iVar6 = (int)((float)iVar1 * 3.051851e-05 * (float)iVar6);
      if (iVar6 <= iVar7) {
        iVar7 = iVar6;
      }
      goto LAB_14075462a;
    }
  }
  iVar7 = 0;
LAB_14075462a:
  local_40 = &local_48;
  local_48 = uVar2;
  local_38 = FUN_14073d760(&local_48,DAT_1468590e8);
  puVar3 = local_40;
  local_30 = &local_48;
  local_28 = 0;
  puVar5 = (undefined8 *)FUN_14073d760(local_40,local_38);
  puVar4 = (undefined8 *)FUN_14073d760(local_30,local_28);
  while( true ) {
    if (puVar5 == puVar4) {
      return 0;
    }
    if (iVar8 == iVar7) break;
    iVar8 = iVar8 + 1;
    puVar5 = (undefined8 *)FUN_14073d760(puVar3,*puVar5);
  }
  return *(undefined8 *)(puVar5[2] + 0x118);
}



// FUNCTION 1407546d0 FUN_1407546d0 body=744 status=ok
// SIG undefined FUN_1407546d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407546d0(longlong param_1,float param_2)

{
  longlong *plVar1;
  uint *puVar2;
  float *pfVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStack_168 [32];
  int local_148;
  uint uStack_144;
  uint *puStack_140;
  uint local_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  uint local_128;
  longlong *local_120;
  int iStack_118;
  uint uStack_114;
  uint *local_110;
  uint uStack_108;
  uint uStack_104;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  uint *puStack_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined1 local_d0 [128];
  undefined1 *local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  uStack_144 = 1;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_50 = (undefined1 *)0x0;
  puVar2 = (uint *)(param_1 + 0x40);
  local_44 = 0;
  local_48 = 0;
  uVar12 = *(uint *)(param_1 + 0x58);
  local_148 = 0;
  uStack_134 = 0;
  iStack_130 = 0;
  if (uVar12 != 0) {
    puVar13 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_148;
      iStack_130 = iStack_130 + 0x20;
      iVar7 = local_148 + 1;
      bVar6 = (int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_148;
      local_148 = iVar7;
      if (bVar6) goto LAB_1407547d1;
      uVar4 = puVar13[lVar9 + 1];
    }
    uStack_144 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_144 != 0) {
      for (; uStack_144 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_144 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_134 = (iStack_130 - iVar7) + 0x1f;
    if ((int)uVar12 < (int)uStack_134) {
LAB_1407547d1:
      uStack_134 = uVar12;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x58);
  uStack_108 = 0xffffffff;
  uStack_104 = uStack_134;
  local_100 = CONCAT44(uStack_12c,iStack_130);
  uStack_f0 = CONCAT44(uStack_144,local_148);
  local_128 = -1 << ((byte)uVar4 & 0x1f);
  uVar15 = uVar4 & 0xffffffe0;
  iStack_118 = local_148;
  uStack_114 = uStack_144;
  local_138 = local_128;
  uStack_134 = uVar4;
  if (uVar4 != uVar12) {
    puVar13 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar8 = puVar13[(int)uVar4 >> 5] & local_128;
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
      goto LAB_1407548a5;
      uVar8 = puVar13[(longlong)iVar7 + 1];
      local_138 = 0xffffffff;
      iVar7 = iVar7 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar7 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_134 = (uVar15 - iVar7) + 0x1f;
    if ((int)uVar12 < (int)uStack_134) {
LAB_1407548a5:
      uStack_134 = uVar12;
    }
  }
  uVar12 = uStack_134;
  uVar11 = 0;
  puStack_140 = puVar2;
  local_110 = puVar2;
  local_f8 = plVar1;
  puStack_e8 = puVar2;
  uStack_d8 = local_100;
  local_120 = plVar1;
  uStack_e0 = uStack_108;
  uStack_dc = uStack_104;
  while (((iVar7 = local_48, lVar9 = (longlong)(int)uStack_104, uStack_104 != uVar12 ||
          (local_110 != puVar2)) || (local_120 != plVar1))) {
    lVar5 = *local_120;
    pfVar3 = (float *)(lVar5 + 8 + lVar9 * 0x18);
    if (*pfVar3 <= param_2 && param_2 != *pfVar3) {
      local_48 = local_48 + 1;
      if (local_44 < local_48) {
        TArray<FName,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(local_d0,iVar7);
      }
      puVar10 = local_d0;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      *(undefined8 *)(puVar10 + (longlong)iVar7 * 8) = *(undefined8 *)(lVar5 + lVar9 * 0x18);
    }
    uStack_108 = uStack_108 & ~uStack_114;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_118);
  }
  uVar14 = uVar11;
  if (0 < local_48) {
    do {
      puVar10 = local_d0;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      FUN_140766240(plVar1,*(undefined8 *)(puVar10 + uVar11));
      uVar11 = uVar11 + 8;
      uVar12 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar12;
    } while ((int)uVar12 < local_48);
  }
  if (local_50 != (undefined1 *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}



// FUNCTION 1407549c0 FUN_1407549c0 body=776 status=ok
// SIG undefined FUN_1407549c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407549c0(longlong param_1)

{
  uint *puVar1;
  float *pfVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong *plVar16;
  undefined1 auStack_168 [32];
  int local_148;
  uint uStack_144;
  uint *puStack_140;
  uint local_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  uint local_128;
  longlong *local_120;
  int iStack_118;
  uint uStack_114;
  uint *local_110;
  uint uStack_108;
  uint uStack_104;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  uint *puStack_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined1 local_d0 [128];
  undefined1 *local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  lVar7 = *(longlong *)(param_1 + 0x120);
  if (lVar7 == 0) {
    lVar7 = FUN_1423407b0();
  }
  fVar3 = *(float *)(lVar7 + 0x790);
  plVar16 = (longlong *)(param_1 + 0x818);
  local_50 = (undefined1 *)0x0;
  puVar1 = (uint *)(param_1 + 0x828);
  local_44 = 0;
  uStack_144 = 1;
  local_48 = 0;
  uVar12 = *(uint *)(param_1 + 0x840);
  local_148 = 0;
  uStack_134 = 0;
  iStack_130 = 0;
  if (uVar12 != 0) {
    puVar13 = *(uint **)(param_1 + 0x838);
    if (*(uint **)(param_1 + 0x838) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar7 = (longlong)local_148;
      iStack_130 = iStack_130 + 0x20;
      iVar8 = local_148 + 1;
      bVar6 = (int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_148;
      local_148 = iVar8;
      if (bVar6) goto LAB_140754ae1;
      uVar4 = puVar13[lVar7 + 1];
    }
    uStack_144 = -uVar4 & uVar4;
    iVar8 = 0x1f;
    if (uStack_144 != 0) {
      for (; uStack_144 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_144 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_134 = (iStack_130 - iVar8) + 0x1f;
    if ((int)uVar12 < (int)uStack_134) {
LAB_140754ae1:
      uStack_134 = uVar12;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x840);
  uStack_108 = 0xffffffff;
  uStack_104 = uStack_134;
  local_100 = CONCAT44(uStack_12c,iStack_130);
  uStack_f0 = CONCAT44(uStack_144,local_148);
  local_128 = -1 << ((byte)uVar4 & 0x1f);
  uVar15 = uVar4 & 0xffffffe0;
  iStack_118 = local_148;
  uStack_114 = uStack_144;
  local_138 = local_128;
  uStack_134 = uVar4;
  if (uVar4 != uVar12) {
    puVar13 = *(uint **)(param_1 + 0x838);
    if (*(uint **)(param_1 + 0x838) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar9 = puVar13[(int)uVar4 >> 5] & local_128;
    iVar8 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
      goto LAB_140754bb5;
      uVar9 = puVar13[(longlong)iVar8 + 1];
      local_138 = 0xffffffff;
      iVar8 = iVar8 + 1;
    }
    uVar9 = -uVar9 & uVar9;
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
    uStack_134 = (uVar15 - iVar8) + 0x1f;
    if ((int)uVar12 < (int)uStack_134) {
LAB_140754bb5:
      uStack_134 = uVar12;
    }
  }
  uVar12 = uStack_134;
  uVar11 = 0;
  puStack_140 = puVar1;
  local_110 = puVar1;
  local_f8 = plVar16;
  puStack_e8 = puVar1;
  uStack_d8 = local_100;
  local_120 = plVar16;
  uStack_e0 = uStack_108;
  uStack_dc = uStack_104;
  while (((iVar8 = local_48, lVar7 = (longlong)(int)uStack_104, uStack_104 != uVar12 ||
          (local_110 != puVar1)) || (local_120 != plVar16))) {
    lVar5 = *local_120;
    pfVar2 = (float *)(lVar5 + 8 + lVar7 * 0x18);
    if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
      local_48 = local_48 + 1;
      if (local_44 < local_48) {
        TArray<FName,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(local_d0,iVar8);
      }
      puVar10 = local_d0;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      *(undefined8 *)(puVar10 + (longlong)iVar8 * 8) = *(undefined8 *)(lVar5 + lVar7 * 0x18);
    }
    uStack_108 = uStack_108 & ~uStack_114;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_118);
  }
  uVar14 = uVar11;
  if (0 < local_48) {
    do {
      puVar10 = local_d0;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      FUN_140766240(plVar16,*(undefined8 *)(puVar10 + uVar11));
      uVar11 = uVar11 + 8;
      uVar12 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar12;
    } while ((int)uVar12 < local_48);
  }
  if (local_50 != (undefined1 *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}



// FUNCTION 140754cd0 CleanupWorld body=83 status=ok
// SIG undefined CleanupWorld(void)

void UAISystemBase::CleanupWorld(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/AISystemBase.h",0x27,
             L"Pure virtual not implemented (%s)",L"UAISystemBase::CleanupWorld");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/AISystemBase.h",0x27,
             L"Pure virtual not implemented (%s)",L"UAISystemBase::CleanupWorld");
  return;
}



// FUNCTION 140754d30 FUN_140754d30 body=297 status=ok
// SIG undefined FUN_140754d30(void)

undefined8
FUN_140754d30(float *param_1,undefined8 param_2,undefined8 param_3,float param_4,undefined8 param_5)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar5 = FUN_140759520(param_1,param_2,param_3,param_5);
  if (lVar5 == 0) {
    uVar6 = 1;
  }
  else {
    fVar2 = *param_1;
    iVar3 = FUN_14075fb80(lVar5,param_3);
    lVar8 = (longlong)iVar3;
    if (iVar3 == -1) {
      uVar6 = 0;
    }
    else {
      lVar1 = lVar5 + 0x20;
      if (param_4 <= 0.0) {
        iVar4 = *(int *)(lVar5 + 0x268);
        iVar7 = (iVar4 - iVar3) + -1;
        if (iVar7 != 0) {
          lVar9 = *(longlong *)(lVar5 + 0x260);
          if (*(longlong *)(lVar5 + 0x260) == 0) {
            lVar9 = lVar1;
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar9 + lVar8 * 0x24),(void *)(lVar9 + (longlong)(iVar3 + 1) * 0x24),
                     (longlong)iVar7 * 0x24);
          iVar4 = *(int *)(lVar5 + 0x268);
        }
        *(int *)(lVar5 + 0x268) = iVar4 + -1;
        FUN_1407681f0(lVar1);
        FUN_140770010(lVar5);
        uVar6 = 1;
      }
      else {
        lVar9 = *(longlong *)(lVar5 + 0x260);
        if (*(longlong *)(lVar5 + 0x260) == 0) {
          lVar9 = lVar1;
        }
        uVar6 = 1;
        *(float *)(lVar9 + 8 + lVar8 * 0x24) = fVar2 + param_4;
        *(undefined4 *)(lVar9 + 0xc + lVar8 * 0x24) = 0x7f7fffff;
      }
    }
  }
  return uVar6;
}



// FUNCTION 140754e90 FUN_140754e90 body=143 status=ok
// SIG undefined FUN_140754e90(void)

void FUN_140754e90(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar2 = FUN_14075eaf0(param_1), lVar2 != 0)) {
      FUN_140754d30(lVar2 + 0x48,param_2,param_1,param_3,0);
    }
  }
  return;
}



// FUNCTION 140754f20 FUN_140754f20 body=565 status=ok
// SIG undefined FUN_140754f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140754f20(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  longlong local_118;
  undefined8 uStack_110;
  longlong local_108 [26];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  cVar3 = FWeakObjectPtr::IsValid();
  if (cVar3 != '\0') {
    local_108[0] = 0;
    local_108[1] = 0;
    local_108[2] = 0;
    iVar8 = -1;
    local_108[3] = 0;
    local_108[4] = 0;
    local_108[5] = 0;
    local_108[6] = 0;
    local_108[7] = 0;
    local_108[8] = 0;
    local_108[9] = 0;
    local_108[10] = 0;
    local_108[0xb] = 0;
    local_108[0xc] = 0;
    local_108[0xd] = 0;
    local_108[0xe] = 0;
    local_108[0xf] = 0;
    local_108[0x10] = 0;
    local_108[0x11] = 0;
    local_108[0x12] = 0;
    local_108[0x13] = 0;
    local_108[0x14] = 0;
    local_108[0x15] = 0;
    local_108[0x16] = 0;
    local_108[0x17] = 0;
    local_108[0x18] = 0;
    lVar4 = FWeakObjectPtr::Get(param_1);
    puVar6 = *(undefined8 **)(lVar4 + 0xb0);
    puVar10 = puVar6 + (longlong)*(int *)(lVar4 + 0xb8) * 0x26;
    if (puVar6 != puVar10) {
      puVar7 = &uStack_110;
      do {
        uVar2 = *puVar6;
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 0x26;
        *puVar7 = uVar2;
        iVar8 = iVar8 + 1;
      } while (puVar6 != puVar10);
      if (-1 < iVar8) {
        lVar4 = *(longlong *)(param_1 + 8);
        local_118 = (longlong)*(int *)(param_1 + 0x10) * 0x18 + lVar4;
        if (lVar4 != local_118) {
          do {
            puVar11 = *(undefined4 **)(lVar4 + 8);
            puVar1 = puVar11 + (longlong)*(int *)(lVar4 + 0x10) * 2;
            for (; puVar11 != puVar1; puVar11 = puVar11 + 2) {
              iVar8 = 0;
              local_128 = *puVar11;
              local_124 = puVar11[1];
              cVar3 = FWeakObjectPtr::IsValid(&local_128);
              if (cVar3 != '\0') {
                lVar5 = FWeakObjectPtr::Get(&local_128);
                lVar5 = *(longlong *)(lVar5 + 0x568);
                if (lVar5 != 0) {
                  plVar9 = local_108;
                  local_120 = 0;
                  do {
                    if (*plVar9 == 0) break;
                    FUN_142bb5c30(lVar5,local_108 + iVar8);
                    iVar8 = iVar8 + 1;
                    plVar9 = plVar9 + 1;
                  } while (iVar8 < 0x19);
                }
              }
            }
            lVar4 = lVar4 + 0x18;
          } while (lVar4 != local_118);
        }
      }
    }
  }
  return;
}



// FUNCTION 140755160 FUN_140755160 body=285 status=ok
// SIG undefined FUN_140755160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140755160(longlong *param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  undefined8 local_res8;
  
  if (((0.0 < *(float *)(param_1 + 9)) && ((longlong *)*param_1 != (longlong *)0x0)) &&
     (param_1[1] != 0)) {
    lVar5 = (**(code **)(*(longlong *)*param_1 + 0x148))();
    if (lVar5 != 0) {
      fVar1 = *(float *)(lVar5 + 0x790);
      local_res8 = *(undefined8 *)(*param_1 + 0x568);
      fVar7 = (float)FUN_142de77e0(param_1[1] + 0x2d8,*param_1,0,&local_res8);
      *(float *)(param_1 + 9) = fVar7 + fVar1;
      lVar5 = (longlong)(int)param_1[0x17];
      iVar4 = (int)param_1[0x17] + 1;
      *(int *)(param_1 + 0x17) = iVar4;
      if (*(int *)((longlong)param_1 + 0xbc) < iVar4) {
        TArray<FCompactPose,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(param_1 + 10);
      }
      plVar6 = (longlong *)param_1[0x16];
      if ((longlong *)param_1[0x16] == (longlong *)0x0) {
        plVar6 = param_1 + 10;
      }
      *(undefined4 *)(plVar6 + lVar5 * 3) = *(undefined4 *)((longlong)param_1 + 0x34);
      *(int *)((longlong)plVar6 + lVar5 * 0x18 + 4) = (int)param_1[7];
      plVar6[lVar5 * 3 + 1] = *(longlong *)((longlong)param_1 + 0x3c);
      *(undefined4 *)(plVar6 + lVar5 * 3 + 2) = *(undefined4 *)((longlong)param_1 + 0x44);
      *(int *)((longlong)plVar6 + lVar5 * 0x18 + 0x14) = (int)param_1[9];
    }
  }
  uVar3 = DAT_1468b5d98;
  uVar2 = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 9) = 0;
  return;
}



// FUNCTION 140755280 FUN_140755280 body=61 status=ok
// SIG undefined FUN_140755280(void)

void FUN_140755280(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + -0x58) != 0) {
    FUN_142c1ec50();
  }
  plVar1 = (longlong *)FUN_14075f6c0(param_1 + -0x5b0);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001407552b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1407552e0 FUN_1407552e0 body=71 status=ok
// SIG undefined FUN_1407552e0(void)

void FUN_1407552e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + -0x58) != 0) {
    FUN_142c1ea80();
  }
  plVar1 = (longlong *)FUN_14075f6c0(param_1 + -0x5b0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
  }
  return;
}



// FUNCTION 140755330 FUN_140755330 body=141 status=ok
// SIG undefined FUN_140755330(void)

void FUN_140755330(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  plVar1 = (longlong *)(param_1 + 0x27f0);
  iVar2 = FUN_142c6d1b0(param_2,plVar1);
  if (iVar2 != -1) {
    iVar3 = *(int *)(param_1 + 0x27f8);
    iVar4 = (iVar3 - iVar2) + -1;
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar1 + (longlong)iVar2 * 0x48),
                 (void *)(*plVar1 + (longlong)(iVar2 + 1) * 0x48),(longlong)iVar4 * 0x48);
      iVar3 = *(int *)(param_1 + 0x27f8);
    }
    *(int *)(param_1 + 0x27f8) = iVar3 + -1;
    TArray<FMiniMapEntry,FDefaultAllocator>::ResizeShrink(plVar1);
  }
  if (*(int *)(param_1 + 0x27f8) == 0) {
    *(undefined4 *)(param_1 + 0x2804) = 0;
  }
  return;
}



// FUNCTION 1407553c0 FUN_1407553c0 body=96 status=ok
// SIG undefined FUN_1407553c0(void)

void FUN_1407553c0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    lVar1 = FUN_14075eaf0();
    if (lVar1 != 0) {
      FUN_140754d30(lVar1 + 0x48,*param_1,param_1[1],param_2,0);
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 140755420 FUN_140755420 body=104 status=ok
// SIG undefined FUN_140755420(void)

void FUN_140755420(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x1d8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x568), lVar1 != 0)) {
    lVar2 = FUN_142bbbf70(lVar1);
    if (lVar2 != 0) {
      FUN_142bb5c30(lVar1,&DAT_146859130);
    }
  }
  FUN_140765e00(param_1 + 0x1e8,param_2);
  return;
}



// FUNCTION 140755490 FUN_140755490 body=37 status=ok
// SIG undefined FUN_140755490(void)

bool FUN_140755490(undefined8 param_1,undefined8 param_2,void *param_3,undefined8 param_4,
                  void *param_5)

{
  int iVar1;
  
  iVar1 = _guard_xfg_dispatch_icall_nop(param_3,param_5,0x30);
  return iVar1 != 0;
}



// FUNCTION 1407554c0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener>,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>,FDefaultSetAllocator>
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



// FUNCTION 140755570 FUN_140755570 body=1053 status=ok
// SIG undefined FUN_140755570(void)

void FUN_140755570(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar4 = *(float *)(param_1 + 0x58);
  if (0.0 <= fVar4) {
    fVar7 = *(float *)(param_1 + 0x54);
    if (fVar4 <= fVar7) {
      if (0.0 <= fVar4) {
        fVar9 = *(float *)(param_1 + 0x50);
        if (fVar4 <= fVar7) {
          fVar9 = (fVar4 / fVar7) * (fVar9 - *(float *)(param_1 + 0x4c)) +
                  *(float *)(param_1 + 0x4c);
        }
      }
      else {
        fVar9 = *(float *)(param_1 + 0x4c);
      }
      fVar4 = *(float *)(param_1 + 0x5c);
      fVar7 = -fVar9;
      if ((-fVar9 <= fVar4) && (fVar7 = fVar4, fVar9 <= fVar4)) {
        fVar7 = fVar9;
      }
      *(float *)(param_1 + 0x5c) = fVar7;
    }
    else {
      fVar7 = *(float *)(param_1 + 0x5c);
      fVar1 = (fVar4 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x10) +
              fVar7 * *(float *)(param_1 + 0x34)) - *(float *)(param_1 + 0x1c);
      fVar2 = (fVar4 * *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x14) +
              fVar7 * *(float *)(param_1 + 0x38)) - *(float *)(param_1 + 0x20);
      fVar11 = (fVar4 * *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x18) +
               fVar7 * *(float *)(param_1 + 0x3c)) - *(float *)(param_1 + 0x24);
      fVar6 = fVar2 * fVar2 + fVar1 * fVar1 + fVar11 * fVar11;
      fVar4 = fVar11;
      fVar7 = fVar2;
      fVar9 = fVar1;
      if ((fVar6 != 1.0) &&
         (fVar4 = DAT_1468b5d98, fVar7 = DAT_1468b5d94, fVar9 = DAT_1468b5d90, 1e-08 <= fVar6)) {
        auVar3 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
        fVar9 = auVar3._0_4_;
        fVar9 = fVar9 + fVar9 * (0.5 - fVar6 * 0.5 * fVar9 * fVar9);
        fVar9 = fVar9 + fVar9 * (0.5 - fVar6 * 0.5 * fVar9 * fVar9);
        fVar4 = fVar11 * fVar9;
        fVar7 = fVar2 * fVar9;
        fVar9 = fVar1 * fVar9;
      }
      fVar6 = *(float *)(param_1 + 0x50) - 1.0;
      fVar7 = (fVar7 * fVar6 + *(float *)(param_1 + 0x20)) - *(float *)(param_1 + 0x14);
      fVar4 = (fVar4 * fVar6 + *(float *)(param_1 + 0x24)) - *(float *)(param_1 + 0x18);
      fVar9 = (fVar9 * fVar6 + *(float *)(param_1 + 0x1c)) - *(float *)(param_1 + 0x10);
      *(float *)(param_1 + 0x58) =
           fVar7 * *(float *)(param_1 + 0x2c) + fVar9 * *(float *)(param_1 + 0x28) +
           fVar4 * *(float *)(param_1 + 0x30);
      *(float *)(param_1 + 0x5c) =
           fVar7 * *(float *)(param_1 + 0x38) + fVar9 * *(float *)(param_1 + 0x34) +
           fVar4 * *(float *)(param_1 + 0x3c);
    }
  }
  else {
    fVar7 = *(float *)(param_1 + 0x5c);
    fVar9 = *(float *)(param_1 + 0x10);
    fVar6 = *(float *)(param_1 + 0x14);
    fVar11 = *(float *)(param_1 + 0x18);
    fVar8 = (*(float *)(param_1 + 0x28) * fVar4 + fVar9 + fVar7 * *(float *)(param_1 + 0x34)) -
            fVar9;
    fVar5 = (*(float *)(param_1 + 0x2c) * fVar4 + fVar6 + fVar7 * *(float *)(param_1 + 0x38)) -
            fVar6;
    fVar10 = (*(float *)(param_1 + 0x30) * fVar4 + fVar11 + fVar7 * *(float *)(param_1 + 0x3c)) -
             fVar11;
    fVar1 = fVar5 * fVar5 + fVar8 * fVar8 + fVar10 * fVar10;
    fVar4 = fVar5;
    fVar7 = fVar8;
    fVar2 = fVar10;
    if ((fVar1 != 1.0) &&
       (fVar4 = DAT_1468b5d94, fVar7 = DAT_1468b5d90, fVar2 = DAT_1468b5d98, 1e-08 <= fVar1)) {
      auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
      fVar2 = auVar3._0_4_;
      fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
      fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
      fVar4 = fVar5 * fVar2;
      fVar7 = fVar8 * fVar2;
      fVar2 = fVar10 * fVar2;
    }
    fVar1 = *(float *)(param_1 + 0x4c) - 1.0;
    fVar6 = (fVar4 * fVar1 + fVar6) - fVar6;
    fVar11 = (fVar2 * fVar1 + fVar11) - fVar11;
    fVar9 = (fVar7 * fVar1 + fVar9) - fVar9;
    *(float *)(param_1 + 0x58) =
         fVar6 * *(float *)(param_1 + 0x2c) + fVar9 * *(float *)(param_1 + 0x28) +
         fVar11 * *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x5c) =
         fVar6 * *(float *)(param_1 + 0x38) + fVar9 * *(float *)(param_1 + 0x34) +
         fVar11 * *(float *)(param_1 + 0x3c);
  }
  return;
}



// FUNCTION 140755990 FUN_140755990 body=337 status=ok
// SIG undefined FUN_140755990(void)

undefined8 FUN_140755990(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_1 + 0x68);
  lVar3 = *(longlong *)(param_1 + 0x60);
  iVar8 = -1;
  iVar2 = -1;
  if (*(char *)(param_1 + 0x6c) != '\0') {
    iVar2 = 1;
  }
  iVar7 = iVar2 + iVar1;
  if (iVar7 < 1) {
    iVar6 = 1;
  }
  else {
    iVar6 = *(int *)(lVar3 + 200) + -2;
    if (iVar7 < iVar6) {
      iVar6 = iVar7;
    }
  }
  *(int *)(param_1 + 0x68) = iVar6;
  if (iVar6 == iVar1) {
    if (0 < iVar2 + iVar6) {
      return 4;
    }
    FUN_14076b320(param_1,1);
    return 3;
  }
  lVar4 = *(longlong *)(lVar3 + 0xc0);
  if (*(longlong *)(lVar3 + 0xc0) == 0) {
    lVar4 = lVar3;
  }
  lVar3 = FWeakObjectPtr::Get(lVar4 + ((longlong)iVar6 * 3 + 1) * 4);
  if (*(char *)(param_1 + 0x6c) != '\0') {
    iVar8 = 1;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0xc0);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x60);
  }
  lVar4 = FWeakObjectPtr::Get(lVar4 + ((longlong)(iVar8 + *(int *)(param_1 + 0x68)) * 3 + 1) * 4);
  if ((lVar3 == 0) || (lVar4 == 0)) {
    uVar5 = 0;
  }
  else {
    lVar3 = FUN_140758880(lVar3,lVar4);
    if (lVar3 == 0) {
      FUN_14076b320(param_1,1);
      uVar5 = 1;
    }
    else {
      uVar5 = 2;
    }
  }
  return uVar5;
}



// FUNCTION 140755af0 FUN_140755af0 body=146 status=ok
// SIG undefined FUN_140755af0(void)

ulonglong FUN_140755af0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,ulonglong param_4
                       )

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_4 != 0) {
    uVar3 = UEnvQueryItemType::GetPrivateStaticClass();
    uVar4 = param_4;
    do {
      if (uVar4 == uVar3) goto LAB_140755b28;
      uVar4 = *(ulonglong *)(uVar4 + 0x30);
    } while (uVar4 != 0);
  }
  param_4 = 0;
LAB_140755b28:
  uVar4 = FUN_1407a6670();
  if (param_4 == uVar4) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    uVar2 = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_2 + 4) = uVar2;
    *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    uVar1 = param_3[10];
    param_2[10] = uVar1;
    return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140755b90 FUN_140755b90 body=220 status=ok
// SIG undefined FUN_140755b90(void)

undefined8 FUN_140755b90(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_1407a6670();
  *param_3 = uVar5;
  plVar1 = param_3 + 2;
  *(undefined4 *)(param_3 + 1) = 1;
  iVar2 = *(int *)(param_3 + 3);
  if (iVar2 < 0x30) {
    *(undefined4 *)(param_3 + 3) = 0x30;
    if (*(int *)((longlong)param_3 + 0x1c) < 0x30) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar2 + *plVar1),0,(longlong)(0x30 - iVar2));
  }
  else if ((0x30 < iVar2) && (iVar2 + -0x30 != 0)) {
    *(int *)(param_3 + 3) = iVar2 - (iVar2 + -0x30);
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink();
  }
  puVar4 = (undefined4 *)*plVar1;
  *puVar4 = 0xffffffff;
  *(undefined8 *)(puVar4 + 1) = 0;
  puVar4[3] = 0;
  puVar4 = (undefined4 *)*plVar1;
  *puVar4 = *param_2;
  puVar4[1] = param_2[1];
  uVar5 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(puVar4 + 4) = uVar5;
  *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(param_2 + 8);
  uVar3 = param_2[10];
  puVar4[10] = uVar3;
  return CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
}



// FUNCTION 140755c70 FUN_140755c70 body=470 status=ok
// SIG undefined FUN_140755c70(void)

void FUN_140755c70(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  plVar1 = param_1 + 2;
  FUN_140757b70(plVar1,0);
  if (plVar1 != param_2 + 2) {
    iVar7 = *(int *)(param_1 + 3);
    if (iVar7 != 0) {
      lVar5 = *plVar1 + 8;
      do {
        if (*(longlong *)(lVar5 + 0x10) != 0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (lVar5);
        lVar5 = lVar5 + 0x38;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar7 = *(int *)(param_2 + 3);
    lVar5 = param_2[2];
    *(int *)(param_1 + 3) = iVar7;
    if ((iVar7 == 0) && (*(int *)((longlong)param_1 + 0x1c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(plVar1,iVar7);
      piVar9 = (int *)*plVar1;
      if (iVar7 != 0) {
        piVar6 = piVar9 + 9;
        piVar8 = (int *)(lVar5 + 0x20);
        do {
          piVar2 = piVar6 + -7;
          *piVar9 = piVar8[-8];
          piVar6[-8] = piVar8[-7];
          piVar2[0] = 0;
          piVar2[1] = 0;
          FUN_140747320(piVar2,*(undefined8 *)(piVar8 + -6),piVar8[-4],0,0);
          piVar6[-3] = 0;
          piVar6[-2] = 0;
          iVar3 = *piVar8;
          pvVar4 = *(void **)(piVar8 + -2);
          piVar6[-1] = iVar3;
          if (iVar3 == 0) {
            *piVar6 = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (piVar6 + -3,iVar3,0);
            _guard_xfg_dispatch_icall_nop(*(void **)(piVar6 + -3),pvVar4,(longlong)iVar3 << 3);
          }
          piVar9 = piVar9 + 0xe;
          *(char *)(piVar6 + 1) = (char)piVar8[2];
          piVar6[2] = piVar8[3];
          *(char *)(piVar6 + 3) = (char)piVar8[4];
          piVar2 = piVar8 + 5;
          piVar8 = piVar8 + 0xe;
          piVar6[4] = *piVar2;
          piVar6 = piVar6 + 0xe;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (param_1 != param_2) {
    iVar7 = *(int *)(param_2 + 1);
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar7;
    if ((iVar7 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1,iVar7);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar4,(longlong)iVar7 << 3);
  }
  return;
}



// FUNCTION 140755e50 FUN_140755e50 body=631 status=ok
// SIG undefined FUN_140755e50(void)

void FUN_140755e50(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  
  iVar1 = *(int *)(param_2 + 10000);
  plVar14 = *(longlong **)(param_1 + 0x2708);
  if (*(longlong **)(param_1 + 0x2708) == (longlong *)0x0) {
    plVar14 = (longlong *)(param_1 + 8);
  }
  plVar8 = plVar14 + (longlong)*(int *)(param_1 + 10000) * 0x4e;
  if (plVar14 != plVar8) {
    plVar15 = plVar14 + 0x4c;
    do {
      iVar7 = 0;
      lVar10 = 0;
      if (0 < (longlong)iVar1) {
        lVar9 = 0;
        do {
          lVar5 = *(longlong *)(param_2 + 0x2708);
          if (*(longlong *)(param_2 + 0x2708) == 0) {
            lVar5 = param_2 + 8;
          }
          plVar6 = (longlong *)(lVar5 + lVar9);
          if ((*plVar6 == *plVar14) &&
             (cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                                ((longlong)plVar6 + 0x14,(longlong)plVar15 + -0x24c), cVar3 != '\0')
             ) {
            *(float *)((longlong)plVar6 + 0xc) =
                 *(float *)((longlong)plVar15 + -0x254) + *(float *)((longlong)plVar6 + 0xc);
            *(float *)(plVar6 + 1) = *(float *)(plVar15 + -0x4b) + *(float *)(plVar6 + 1);
            iVar2 = (int)plVar15[1];
            if (iVar2 != 0) {
              iVar13 = (int)plVar6[0x4d];
              if (*(int *)((longlong)plVar6 + 0x26c) < iVar13 + iVar2) {
                FUN_140768550(plVar6 + 4);
                iVar13 = (int)plVar6[0x4d];
              }
              plVar12 = (longlong *)*plVar15;
              if ((longlong *)*plVar15 == (longlong *)0x0) {
                plVar12 = plVar15 + -0x48;
              }
              plVar4 = (longlong *)plVar6[0x4c];
              if ((longlong *)plVar6[0x4c] == (longlong *)0x0) {
                plVar4 = plVar6 + 4;
              }
              puVar11 = (undefined4 *)((longlong)plVar4 + (longlong)iVar13 * 0x24 + 0x20);
              lVar10 = (longlong)plVar12 + ((longlong)iVar13 * -0x24 - (longlong)plVar4);
              iVar13 = iVar2;
              do {
                lVar9 = *plVar12;
                plVar12 = (longlong *)((longlong)plVar12 + 0x24);
                puVar11[-8] = (int)lVar9;
                puVar11[-7] = *(undefined4 *)((longlong)puVar11 + lVar10 + -0x1c);
                puVar11[-6] = *(undefined4 *)((longlong)puVar11 + lVar10 + -0x18);
                puVar11[-5] = *(undefined4 *)((longlong)puVar11 + lVar10 + -0x14);
                *(undefined1 *)(puVar11 + -4) = *(undefined1 *)((longlong)puVar11 + lVar10 + -0x10);
                puVar11[-3] = *(undefined4 *)((longlong)puVar11 + lVar10 + -0xc);
                puVar11[-2] = *(undefined4 *)((longlong)puVar11 + lVar10 + -8);
                puVar11[-1] = *(undefined4 *)(lVar10 + -4 + (longlong)puVar11);
                *puVar11 = *(undefined4 *)(lVar10 + (longlong)puVar11);
                puVar11 = puVar11 + 9;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
              *(int *)(plVar6 + 0x4d) = (int)plVar6[0x4d] + iVar2;
            }
            break;
          }
          iVar7 = iVar7 + 1;
          lVar10 = lVar10 + 1;
          lVar9 = lVar9 + 0x270;
        } while (lVar10 < iVar1);
      }
      if (iVar7 == iVar1) {
        iVar7 = *(int *)(param_2 + 10000);
        *(int *)(param_2 + 10000) = iVar7 + 1;
        if (*(int *)(param_2 + 0x2714) < iVar7 + 1) {
          FUN_140767dc0(param_2 + 8,iVar7);
        }
        lVar10 = *(longlong *)(param_2 + 0x2708);
        if (*(longlong *)(param_2 + 0x2708) == 0) {
          lVar10 = param_2 + 8;
        }
        FUN_14074c5e0(lVar10 + (longlong)iVar7 * 0x270,plVar14);
      }
      plVar14 = plVar14 + 0x4e;
      plVar15 = plVar15 + 0x4e;
    } while (plVar14 != plVar8);
  }
  return;
}



// FUNCTION 1407560d0 FUN_1407560d0 body=138 status=ok
// SIG undefined FUN_1407560d0(void)

void FUN_1407560d0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_14079cc20();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14075611d;
  }
  param_2 = 0;
LAB_14075611d:
  FUN_140755e50(param_1 + 0x18,param_2 + 0x48);
  FUN_14074f3e0(param_2 + 0x2760,param_1 + 0x2730);
  FUN_140755c70(param_1 + 0x2778,param_2 + 0x27a8);
  return;
}



// FUNCTION 140756160 FUN_140756160 body=181 status=ok
// SIG undefined FUN_140756160(void)

void FUN_140756160(longlong *param_1,undefined8 param_2,undefined4 *param_3,longlong param_4,
                  undefined4 *param_5)

{
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = FUN_1407a2860();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *param_3 = *param_5;
      param_3[1] = param_5[1];
      uVar1 = *(undefined8 *)(param_5 + 4);
      *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_5 + 2);
      *(undefined8 *)(param_3 + 4) = uVar1;
      *(undefined8 *)(param_3 + 6) = *(undefined8 *)(param_5 + 6);
      *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_5 + 8);
      param_3[10] = param_5[10];
      return;
    }
  }
  (**(code **)(*param_1 + 0x2d0))(param_1,param_2,param_3);
  return;
}



// FUNCTION 140756220 FUN_140756220 body=917 status=ok
// SIG undefined FUN_140756220(void)

undefined4 * FUN_140756220(undefined4 *param_1,longlong param_2,longlong param_3,float *param_4)

{
  undefined8 uVar1;
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
  float fVar15;
  float fVar16;
  float fVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined8 local_1a4;
  undefined8 local_19c;
  undefined8 local_194;
  undefined8 local_18c;
  undefined8 local_184;
  undefined8 local_17c;
  undefined8 local_174;
  undefined4 local_16c;
  undefined1 local_108 [240];
  
  if ((param_2 == 0) || (param_3 == 0)) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    param_1[2] = 0xffffffff;
    param_1[3] = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
  }
  else {
    local_1c8 = 0xffffffff;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    local_1b4 = 0;
    local_1ac = 0;
    local_1a4 = 0;
    local_19c = 0;
    local_194 = 0;
    local_18c = 0;
    local_184 = 0;
    local_17c = 0;
    local_174 = 0;
    local_16c = 0;
    uStack_1c0 = 0xffffffff;
    FWeakObjectPtr::operator=(&local_1c8);
    FWeakObjectPtr::operator=(&uStack_1c0,param_3);
    pfVar18 = (float *)FUN_140756670(local_108,param_2,param_3);
    fVar2 = pfVar18[4];
    fVar3 = pfVar18[5];
    fVar4 = pfVar18[6];
    fVar5 = pfVar18[7];
    fVar6 = pfVar18[0xc];
    fVar7 = pfVar18[0xd];
    fVar8 = pfVar18[0xe];
    fVar9 = pfVar18[0xf];
    fVar10 = *pfVar18;
    fVar11 = pfVar18[1];
    fVar12 = pfVar18[2];
    fVar13 = pfVar18[3];
    fVar14 = pfVar18[8];
    fVar15 = pfVar18[9];
    fVar16 = pfVar18[10];
    fVar17 = pfVar18[0xb];
    uVar1 = *(undefined8 *)(pfVar18 + 0x10);
    fVar19 = param_4[1] - fVar11;
    fVar20 = param_4[2] - fVar12;
    fVar21 = *param_4 - fVar10;
    *param_1 = (undefined4)local_1c8;
    param_1[1] = local_1c8._4_4_;
    param_1[2] = uStack_1c0;
    param_1[3] = uStack_1bc;
    param_1[4] = fVar10;
    param_1[5] = fVar11;
    param_1[6] = fVar12;
    param_1[7] = fVar13;
    param_1[0x16] = fVar19 * fVar5 + fVar21 * fVar4 + fVar20 * fVar14;
    param_1[8] = fVar2;
    param_1[9] = fVar3;
    param_1[10] = fVar4;
    param_1[0xb] = fVar5;
    param_1[0xc] = fVar14;
    param_1[0xd] = fVar15;
    param_1[0xe] = fVar16;
    param_1[0xf] = fVar17;
    param_1[0x10] = fVar6;
    param_1[0x11] = fVar7;
    param_1[0x12] = fVar8;
    param_1[0x13] = fVar9;
    *(undefined8 *)(param_1 + 0x14) = uVar1;
    param_1[0x17] = fVar19 * fVar16 + fVar21 * fVar15 + fVar20 * fVar17;
  }
  return param_1;
}



// FUNCTION 1407565c0 FUN_1407565c0 body=165 status=ok
// SIG undefined FUN_1407565c0(void)

undefined4 * FUN_1407565c0(undefined4 *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
  if (param_2 != 0) {
    cVar1 = FUN_140758a30(param_2,param_3,&local_res20,local_res10);
    if (cVar1 != '\0') {
      FUN_140756220(param_1,local_res20,local_res10[0],param_3);
      return param_1;
    }
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 140756670 FUN_140756670 body=844 status=ok
// SIG undefined FUN_140756670(void)

undefined8 * FUN_140756670(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  float local_88;
  float fStack_84;
  undefined4 uStack_7c;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    local_88 = 0.0;
    fStack_84 = 0.0;
    fVar13 = 0.0;
    uStack_7c = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    uVar3 = 0;
    fVar2 = 0.0;
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + 0x224);
    fVar6 = *(float *)(param_3 + 0x224) - *(float *)(param_2 + 0x224);
    uStack_b0 = CONCAT44(*(float *)(param_3 + 0x220),*(float *)(param_2 + 0x228));
    fVar5 = *(float *)(param_3 + 0x220) - *(float *)(param_2 + 0x220);
    fVar7 = *(float *)(param_3 + 0x228) - *(float *)(param_2 + 0x228);
    fVar2 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7);
    fVar10 = DAT_1468b5d98;
    fVar13 = DAT_1468b5d90;
    fVar9 = DAT_1468b5d94;
    if (1e-08 < fVar2) {
      fVar9 = 1.0 / fVar2;
      fVar10 = fVar9 * fVar7;
      fVar13 = fVar9 * fVar5;
      fVar9 = fVar9 * fVar6;
    }
    fVar12 = fVar9 * DAT_1464aa7a0 - fVar10 * DAT_1464aa798._4_4_;
    uStack_a0 = CONCAT44(fVar9,fVar13);
    fVar14 = fVar10 * (float)DAT_1464aa798 - fVar13 * DAT_1464aa7a0;
    fVar11 = fVar13 * DAT_1464aa798._4_4_ - fVar9 * (float)DAT_1464aa798;
    fVar4 = fVar14 * fVar14 + fVar12 * fVar12 + fVar11 * fVar11;
    fVar5 = fVar11;
    fVar6 = fVar12;
    fVar7 = fVar14;
    if ((fVar4 != 1.0) &&
       (fVar5 = DAT_1468b5d98, fVar6 = DAT_1468b5d90, fVar7 = DAT_1468b5d94, 1e-08 <= fVar4)) {
      auVar8 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar7 = auVar8._0_4_;
      fVar7 = fVar7 + fVar7 * (0.5 - fVar4 * 0.5 * fVar7 * fVar7);
      fVar7 = fVar7 + fVar7 * (0.5 - fVar4 * 0.5 * fVar7 * fVar7);
      fVar5 = fVar11 * fVar7;
      fVar6 = fVar12 * fVar7;
      fVar7 = fVar14 * fVar7;
    }
    uStack_7c = *(undefined4 *)(param_2 + 0x704);
    uVar3 = *(undefined4 *)(param_3 + 0x704);
    local_88 = fVar7 * fVar10 - fVar5 * fVar9;
    fStack_84 = fVar5 * fVar13 - fVar6 * fVar10;
    *param_1 = *(undefined8 *)(param_2 + 0x220);
    param_1[1] = uStack_b0;
    fVar13 = fVar6 * fVar9 - fVar7 * fVar13;
    param_1[2] = uVar1;
    param_1[3] = uStack_a0;
    param_1[4] = CONCAT44(fVar6,fVar10);
    param_1[5] = CONCAT44(fVar5,fVar7);
  }
  *(float *)(param_1 + 6) = local_88;
  *(float *)((longlong)param_1 + 0x34) = fStack_84;
  *(float *)(param_1 + 7) = fVar13;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_7c;
  param_1[8] = CONCAT44(fVar2,uVar3);
  return param_1;
}



// FUNCTION 1407569c0 FUN_1407569c0 body=547 status=ok
// SIG undefined FUN_1407569c0(void)

void FUN_1407569c0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  char cVar9;
  DWORD DVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  char *pcVar14;
  char *pcVar15;
  undefined4 uVar16;
  float local_84;
  float fStack_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_54;
  
  lVar13 = DAT_146859070;
  cVar9 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar9 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar10 = GetCurrentThreadId(), lVar11 = 4, DVar10 == DAT_1468c21c0)) {
    lVar11 = 0;
  }
  lVar8 = DAT_146859088;
  uVar4 = *(undefined4 *)(lVar11 + lVar13);
  cVar9 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar9 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar10 = GetCurrentThreadId(), lVar13 = 4, DVar10 == DAT_1468c21c0)) {
    lVar13 = 0;
  }
  uVar5 = *(undefined4 *)(lVar13 + lVar8);
  plVar1 = param_1 + 0xd1;
  pcVar14 = (char *)*plVar1;
  pcVar15 = pcVar14 + (longlong)(int)param_1[0xd2] * 0x30;
  if (pcVar14 != pcVar15) {
    pfVar12 = (float *)(pcVar14 + 0xc);
    fStack_80 = (float)((ulonglong)*param_2 >> 0x20);
    local_84 = (float)*param_2;
    do {
      if ((*pcVar14 == '\x01') &&
         (SQRT((pfVar12[-1] - fStack_80) * (pfVar12[-1] - fStack_80) +
               (pfVar12[-2] - local_84) * (pfVar12[-2] - local_84) +
               (*pfVar12 - *(float *)(param_2 + 1)) * (*pfVar12 - *(float *)(param_2 + 1))) <
          pfVar12[1])) {
        return;
      }
      pcVar14 = pcVar14 + 0x30;
      pfVar12 = pfVar12 + 0xc;
    } while (pcVar14 != pcVar15);
  }
  lVar13 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar13 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined4 *)(lVar13 + 0x8c8);
  }
  uVar6 = *(undefined4 *)(param_2 + 1);
  iVar7 = (int)param_1[0xd2];
  lVar13 = (longlong)iVar7;
  local_70 = CONCAT31(local_70._1_3_,1);
  uStack_6c = (undefined4)*param_2;
  uStack_68 = (undefined4)((ulonglong)*param_2 >> 0x20);
  *(int *)(param_1 + 0xd2) = iVar7 + 1;
  if (*(int *)((longlong)param_1 + 0x694) < iVar7 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar7);
  }
  lVar11 = *plVar1;
  puVar2 = (undefined8 *)(lVar11 + lVar13 * 0x30);
  *puVar2 = CONCAT44(uStack_6c,local_70);
  puVar2[1] = CONCAT44(uVar6,uStack_68);
  puVar3 = (undefined4 *)(lVar11 + 0x10 + lVar13 * 0x30);
  *puVar3 = uVar4;
  puVar3[1] = uVar16;
  puVar3[2] = uVar5;
  puVar3[3] = uStack_54;
  puVar3 = (undefined4 *)(lVar11 + 0x20 + lVar13 * 0x30);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  FUN_140757f80(param_1 + 0xd5,param_1);
  return;
}



// FUNCTION 140756bf0 FUN_140756bf0 body=68 status=ok
// SIG undefined FUN_140756bf0(void)

void FUN_140756bf0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1440899b0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 140756c40 FUN_140756c40 body=84 status=ok
// SIG undefined FUN_140756c40(void)

void FUN_140756c40(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144089920;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144089968;
  }
  return;
}



// FUNCTION 140756ca0 FUN_140756ca0 body=84 status=ok
// SIG undefined FUN_140756ca0(void)

void FUN_140756ca0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144089a20;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144089a68;
  }
  return;
}



// FUNCTION 140756d00 CreateCopy body=93 status=ok
// SIG undefined CreateCopy(void)

void TBaseUObjectMethodDelegateInstance<0,UVisualComponent,TTypeWrapper<void>___cdecl(void),FName,FName>
     ::CreateCopy(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144089ab0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = uVar1;
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar2 = &PTR_FUN_144089af8;
  }
  return;
}



// FUNCTION 140756d60 FUN_140756d60 body=347 status=ok
// SIG undefined FUN_140756d60(void)

void FUN_140756d60(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (((param_2 != (longlong *)0x0) && (*(longlong **)(param_1 + 0x118) != (longlong *)0x0)) &&
     (param_2 != *(longlong **)(param_1 + 0x118))) {
    lVar2 = AActor::GetLevel();
    lVar3 = AActor::GetLevel(param_2);
    if (lVar2 == lVar3) {
      uVar4 = AUGWeapon_Hook::GetPrivateStaticClass();
      lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
      if (lVar2 != 0) {
        uVar7 = 0;
        if (0 < *(int *)(param_1 + 0x720)) {
          puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x718) + 8);
          uVar8 = uVar7;
          do {
            if (((longlong *)*puVar6 != (longlong *)0x0) && ((longlong *)*puVar6 == param_2)) {
              *(undefined4 *)((longlong)(int)uVar8 * 0x20 + *(longlong *)(param_1 + 0x718)) =
                   param_3;
              goto LAB_140756e7e;
            }
            uVar8 = (ulonglong)((int)uVar8 + 1);
            uVar7 = uVar7 + 1;
            puVar6 = puVar6 + 4;
          } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x720));
        }
        iVar1 = *(int *)(param_1 + 0x720);
        *(int *)(param_1 + 0x720) = iVar1 + 1;
        if (*(int *)(param_1 + 0x724) < iVar1 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_1 + 0x718,iVar1);
        }
        puVar5 = (undefined4 *)((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x718));
        *puVar5 = param_3;
        puVar5[1] = 0;
        *(longlong **)(puVar5 + 2) = param_2;
        *(undefined8 *)(puVar5 + 4) = 0;
        *(undefined8 *)(puVar5 + 6) = 0;
        FUN_140751f80(lVar2,param_1);
LAB_140756e7e:
        FUN_140765480(param_1,lVar2);
        FUN_1423424e0(param_1);
      }
    }
  }
  return;
}



// FUNCTION 140756ec0 FUN_140756ec0 body=48 status=ok
// SIG undefined FUN_140756ec0(void)

undefined8 FUN_140756ec0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_14075f6c0(param_1 + -0x5b0);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140756edf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    return uVar2;
  }
  return 0xbf800000;
}



// FUNCTION 140756ef0 GetDeviceTemperatureLevel body=9 status=ok
// SIG undefined GetDeviceTemperatureLevel(void)

undefined8 FGenericPlatformMisc::GetDeviceTemperatureLevel(void)

{
  return 0xbf800000;
}



// FUNCTION 140756f00 FUN_140756f00 body=88 status=ok
// SIG undefined FUN_140756f00(void)

float FUN_140756f00(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
LAB_140756f3a:
    fVar2 = 0.0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
      if (lVar1 == 0) goto LAB_140756f3a;
    }
    fVar2 = *(float *)(lVar1 + 0x8c8);
  }
  fVar2 = *(float *)(param_1 + 0x2804) - fVar2;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  return fVar2;
}



// FUNCTION 140756f60 FUN_140756f60 body=104 status=ok
// SIG undefined FUN_140756f60(void)

undefined8 *
FUN_140756f60(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  lVar1 = FWeakObjectPtr::Get(param_4);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,&DAT_143f3edc8,10);
    return param_2;
  }
  local_res10[0] = *(undefined8 *)(lVar1 + 0x18);
  FName::ToString(local_res10,param_2);
  return param_2;
}



// FUNCTION 140756fd0 FUN_140756fd0 body=80 status=ok
// SIG undefined FUN_140756fd0(void)

void FUN_140756fd0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x490);
  lVar4 = (longlong)*(int *)(param_1 + 0x498) * 0x80 + lVar1;
  lVar3 = lVar1;
  if (lVar1 != lVar4) {
    while (*(longlong *)(lVar3 + 8) != param_2) {
      lVar3 = lVar3 + 0x80;
      if (lVar3 == lVar4) {
        return;
      }
    }
    iVar2 = (int)(lVar3 - lVar1 >> 7);
    if (iVar2 != -1) {
      FUN_14076b460((longlong)iVar2 * 0x80 + lVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 140757020 FUN_140757020 body=160 status=ok
// SIG undefined FUN_140757020(void)

void FUN_140757020(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x498)) {
    lVar6 = 0;
    do {
      pcVar4 = (char *)(*(longlong *)(param_1 + 0x490) + lVar6);
      if (*pcVar4 != '\0') {
        puVar2 = *(undefined8 **)(pcVar4 + 0x20);
        puVar5 = puVar2 + (longlong)*(int *)(pcVar4 + 0x28) * 2;
        for (; puVar2 != puVar5; puVar2 = puVar2 + 2) {
          plVar1 = (longlong *)FNavigationSystem::FindPathFollowingAgentForActor(*puVar2);
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      iVar3 = iVar3 + 1;
      *pcVar4 = '\0';
      lVar6 = lVar6 + 0x80;
    } while (iVar3 < *(int *)(param_1 + 0x498));
  }
  return;
}



// FUNCTION 1407570c0 FUN_1407570c0 body=319 status=ok
// SIG undefined FUN_1407570c0(void)

bool FUN_1407570c0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = *(float *)(param_1 + 0x58);
  fVar5 = *(float *)(param_1 + 0x5c);
  fVar3 = fVar2 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x10) +
          fVar5 * *(float *)(param_1 + 0x34);
  fVar1 = fVar2 * *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x14) +
          fVar5 * *(float *)(param_1 + 0x38);
  fVar4 = fVar2 * *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x18) +
          fVar5 * *(float *)(param_1 + 0x3c);
  if (fVar2 < 0.0) {
    fVar1 = fVar1 - *(float *)(param_1 + 0x14);
    fVar3 = fVar3 - *(float *)(param_1 + 0x10);
    fVar4 = fVar4 - *(float *)(param_1 + 0x18);
    fVar2 = fVar1 * fVar1 + fVar3 * fVar3 + fVar4 * fVar4;
    *param_2 = fVar2;
    return fVar2 - 0.5 < *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x4c);
  }
  if (*(float *)(param_1 + 0x54) <= fVar2 && fVar2 != *(float *)(param_1 + 0x54)) {
    fVar1 = fVar1 - *(float *)(param_1 + 0x20);
    fVar3 = fVar3 - *(float *)(param_1 + 0x1c);
    fVar4 = fVar4 - *(float *)(param_1 + 0x24);
    fVar2 = fVar1 * fVar1 + fVar3 * fVar3 + fVar4 * fVar4;
    *param_2 = fVar2;
    return fVar2 - 0.5 < *(float *)(param_1 + 0x50) * *(float *)(param_1 + 0x50);
  }
  *param_2 = fVar5 * fVar5;
  fVar2 = *(float *)(param_1 + 0x58);
  fVar5 = ABS(*(float *)(param_1 + 0x5c));
  if (fVar2 < 0.0) {
    return fVar5 <= *(float *)(param_1 + 0x4c);
  }
  if (*(float *)(param_1 + 0x54) < fVar2) {
    return fVar5 <= *(float *)(param_1 + 0x50);
  }
  return fVar5 <= (fVar2 / *(float *)(param_1 + 0x54)) *
                  (*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x4c)) +
                  *(float *)(param_1 + 0x4c);
}



// FUNCTION 140757200 FUN_140757200 body=1217 status=ok
// SIG undefined FUN_140757200(void)

void FUN_140757200(char param_1,float param_2,longlong *param_3,longlong *param_4,float *param_5,
                  float *param_6,float param_7,float param_8,float param_9,int param_10,
                  int *param_11)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float local_118;
  float fStack_114;
  undefined4 uStack_ec;
  
  iVar10 = (int)param_3[1];
  if (iVar10 != 0) {
    fVar13 = -param_7;
    iVar7 = *param_11;
    iVar11 = 0;
    fVar2 = *param_6;
    fVar3 = param_6[1];
    fVar17 = fVar2 * fVar13 + *param_5 * param_7;
    fVar4 = param_6[2];
    fVar18 = fVar3 * fVar13 + param_5[1] * param_7;
    fVar19 = fVar4 * fVar13 + param_5[2] * param_7;
    fVar13 = 1e+08;
    fVar22 = fVar17;
    fVar23 = fVar18;
    fVar24 = fVar19;
    iVar6 = 0;
    while ((iVar7 < param_10 && (iVar6 < 500))) {
      fVar15 = fVar23 * fVar23 + fVar22 * fVar22;
      fVar14 = SQRT(fVar15);
      if ((param_7 < fVar14) || (fVar14 < param_8)) {
LAB_140757668:
        if (fVar14 < fVar13) goto LAB_14075756d;
        iVar11 = iVar11 + 1;
        fVar13 = 1e+08;
        fVar24 = -((float)iVar11 * param_9);
        fVar22 = *param_5 * fVar24 + fVar17;
        fVar23 = param_5[1] * fVar24 + fVar18;
        fVar24 = param_5[2] * fVar24 + fVar19;
        iVar6 = iVar6 + 1;
      }
      else {
        if (param_1 != '\0') {
          fVar15 = fVar24 * fVar24 + fVar15;
          fVar12 = fVar22;
          fVar16 = fVar23;
          fVar20 = fVar24;
          if ((fVar15 != 1.0) &&
             (fVar12 = DAT_1468b5d90, fVar16 = DAT_1468b5d94, fVar20 = DAT_1468b5d98,
             1e-08 <= fVar15)) {
            auVar21 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
            fVar20 = auVar21._0_4_;
            fVar20 = fVar20 + fVar20 * (0.5 - fVar15 * 0.5 * fVar20 * fVar20);
            fVar20 = fVar20 + fVar20 * (0.5 - fVar15 * 0.5 * fVar20 * fVar20);
            fVar12 = fVar22 * fVar20;
            fVar16 = fVar23 * fVar20;
            fVar20 = fVar24 * fVar20;
          }
          local_118 = (float)*(undefined8 *)param_5;
          fStack_114 = (float)((ulonglong)*(undefined8 *)param_5 >> 0x20);
          fVar15 = fVar12 * local_118 + fVar16 * fStack_114 + fVar20 * param_5[2];
          if (-1.0 <= fVar15) {
            if (1.0 <= fVar15) {
              fVar15 = 1.0;
            }
          }
          else {
            fVar15 = -1.0;
          }
          fVar15 = _guard_xfg_dispatch_icall_nop(fVar15);
          if (param_2 < fVar15 * 57.295776) goto LAB_140757668;
          iVar7 = *param_11;
        }
        iVar9 = 0;
        if (0 < iVar10) {
          lVar8 = 0;
          do {
            lVar5 = *param_3;
            iVar10 = (int)param_4[1];
            fVar13 = *(float *)(lVar8 + 8 + lVar5);
            fVar15 = *(float *)(lVar8 + lVar5);
            fVar12 = *(float *)(lVar8 + 4 + lVar5);
            *(int *)(param_4 + 1) = iVar10 + 1;
            if (*(int *)((longlong)param_4 + 0xc) < iVar10 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(param_4,iVar10);
            }
            lVar5 = *param_4;
            iVar9 = iVar9 + 1;
            lVar8 = lVar8 + 0xc;
            puVar1 = (undefined8 *)(lVar5 + (longlong)iVar10 * 0x18);
            *puVar1 = CONCAT44(fVar23 + fVar12,fVar22 + fVar15);
            puVar1[1] = CONCAT44(uStack_ec,fVar24 + fVar13);
            *(undefined8 *)(lVar5 + 0x10 + (longlong)iVar10 * 0x18) = 0;
            iVar7 = *param_11 + 1;
            *param_11 = iVar7;
            iVar10 = (int)param_3[1];
          } while (iVar9 < iVar10);
        }
LAB_14075756d:
        fVar22 = fVar22 + fVar2 * param_9;
        fVar23 = fVar23 + fVar3 * param_9;
        fVar24 = fVar24 + fVar4 * param_9;
        fVar13 = fVar14;
        iVar6 = iVar6 + 1;
      }
    }
  }
  return;
}



// FUNCTION 1407576d0 FUN_1407576d0 body=495 status=ok
// SIG undefined FUN_1407576d0(void)

undefined8 FUN_1407576d0(undefined8 param_1,undefined1 *param_2,int *param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  float fVar5;
  float extraout_XMM0_Da;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  *param_2 = 0;
  *param_3 = 0;
  cVar1 = FWeakObjectPtr::IsValid();
  if (cVar1 == '\0') {
    *param_2 = 2;
  }
  else {
    lVar2 = FWeakObjectPtr::Get(param_1);
    local_res10 = 0xffffffffffffffff;
    fVar5 = (float)FUN_142de77e0(lVar2 + 0x30,0,0,&local_res10);
    if ((int)((int)ROUND(fVar5 * 2.0 + 0.5) & 0xfffffffeU) < 2) {
      *param_2 = 5;
    }
    else {
      lVar2 = FWeakObjectPtr::Get(param_1);
      plVar3 = *(longlong **)(lVar2 + 0xb0);
      plVar4 = plVar3 + (longlong)*(int *)(lVar2 + 0xb8) * 0x26;
      for (; plVar3 != plVar4; plVar3 = plVar3 + 0x26) {
        if ((*(byte *)(plVar3 + 1) == 0) ||
           (*(byte *)((longlong)plVar3 + 9) < *(byte *)(plVar3 + 1))) {
          *param_2 = 6;
          goto LAB_14075784e;
        }
        local_res10 = 0;
        if (*plVar3 == 0) {
          *param_2 = 4;
          goto LAB_14075784e;
        }
        local_res18[0] = 0xffffffffffffffff;
        fVar5 = (float)FUN_142de77e0(plVar3 + 2,0,0,local_res18);
        local_res18[0] = 0xffffffffffffffff;
        FUN_142de77e0(plVar3 + 0x12,0,0,local_res18);
        if (((fVar5 < 0.0001) || (extraout_XMM0_Da < 0.0001)) || (extraout_XMM0_Da < fVar5)) {
          *param_2 = 7;
          goto LAB_14075784e;
        }
        if (((longlong *)param_4[7] != (longlong *)0x0) &&
           (cVar1 = (**(code **)(*(longlong *)param_4[7] + 0x10))(), cVar1 == '\0')) {
          FUN_14074ea20(param_4);
          return 0;
        }
        *param_3 = *param_3 + (uint)*(byte *)(plVar3 + 1);
      }
      if (1 < *param_3) {
        *param_2 = 1;
        plVar3 = (longlong *)param_4[7];
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != param_4);
          param_4[7] = 0;
        }
        return 1;
      }
      *param_2 = 3;
    }
  }
LAB_14075784e:
  plVar3 = (longlong *)param_4[7];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != param_4);
    param_4[7] = 0;
  }
  return 0;
}



// FUNCTION 1407578c0 FUN_1407578c0 body=673 status=ok
// SIG undefined FUN_1407578c0(void)

void FUN_1407578c0(longlong *param_1,float param_2,float param_3,float param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  void *_Src;
  int iVar7;
  undefined8 *puVar8;
  void *local_c0;
  int local_b8;
  int local_b4;
  
  if ((0.0001 <= param_4) && ((int)param_1[1] != 0)) {
    iVar5 = 0;
    iVar6 = 0;
    _Src = (void *)0x0;
    puVar8 = (undefined8 *)*param_1;
    local_c0 = (void *)0x0;
    local_b4 = 0;
    puVar1 = (undefined8 *)((longlong)puVar8 + (longlong)(int)param_1[1] * 0xc);
    if (puVar8 != puVar1) {
      do {
        uVar2 = *puVar8;
        iVar7 = 0;
        fVar3 = *(float *)(puVar8 + 1);
        fVar4 = param_4;
        if (0.0 < param_2) {
          for (; (fVar4 <= param_2 && (iVar7 < 10)); iVar7 = iVar7 + 1) {
            local_b8 = iVar6 + 1;
            if (iVar5 < local_b8) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_c0,iVar6);
              _Src = local_c0;
              iVar5 = local_b4;
            }
            *(undefined8 *)((longlong)_Src + (longlong)iVar6 * 0xc) = uVar2;
            *(float *)((longlong)_Src + (longlong)iVar6 * 0xc + 8) = fVar3 + fVar4;
            fVar4 = fVar4 + param_4;
            iVar6 = local_b8;
          }
        }
        iVar7 = 0;
        fVar4 = param_4;
        if (0.0 < param_3) {
          for (; (fVar4 <= param_3 && (iVar7 < 10)); iVar7 = iVar7 + 1) {
            local_b8 = iVar6 + 1;
            if (iVar5 < local_b8) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_c0,iVar6);
              _Src = local_c0;
              iVar5 = local_b4;
            }
            *(undefined8 *)((longlong)_Src + (longlong)iVar6 * 0xc) = uVar2;
            *(float *)((longlong)_Src + (longlong)iVar6 * 0xc + 8) = fVar3 - fVar4;
            fVar4 = fVar4 + param_4;
            iVar6 = local_b8;
          }
        }
        puVar8 = (undefined8 *)((longlong)puVar8 + 0xc);
      } while (puVar8 != puVar1);
      if (iVar6 != 0) {
        iVar5 = (int)param_1[1];
        if (*(int *)((longlong)param_1 + 0xc) < iVar5 + iVar6) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
          ResizeTo(param_1);
          iVar5 = (int)param_1[1];
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar5 * 0xc),_Src,(longlong)iVar6 * 0xc);
        *(int *)(param_1 + 1) = (int)param_1[1] + iVar6;
      }
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
  return;
}



// FUNCTION 140757b70 FUN_140757b70 body=113 status=ok
// SIG undefined FUN_140757b70(void)

void FUN_140757b70(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = *param_1 + 8;
    do {
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (lVar1);
      lVar1 = lVar1 + 0x38;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 140757bf0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2);
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



// FUNCTION 140757c70 FUN_140757c70 body=75 status=ok
// SIG undefined FUN_140757c70(void)

void FUN_140757c70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x490);
  lVar4 = (longlong)*(int *)(param_1 + 0x498) * 0x80 + lVar1;
  lVar3 = lVar1;
  if (lVar1 != lVar4) {
    while (*(longlong *)(lVar3 + 8) != param_2) {
      lVar3 = lVar3 + 0x80;
      if (lVar3 == lVar4) {
        return;
      }
    }
    iVar2 = (int)(lVar3 - lVar1 >> 7);
    if (iVar2 != -1) {
      *(undefined1 *)((longlong)iVar2 * 0x80 + lVar1) = 1;
    }
  }
  return;
}



// FUNCTION 140757cf0 FUN_140757cf0 body=79 status=ok
// SIG undefined FUN_140757cf0(void)

void FUN_140757cf0(longlong param_1,undefined4 param_2)

{
  FUN_1407665e0(*(longlong *)(param_1 + 0x458) + 0x748,param_1);
  FUN_1407665e0(*(longlong *)(param_1 + 0x458) + 0x758,param_1);
  FUN_14222a250(param_1,param_2);
  return;
}



// FUNCTION 140757d40 FUN_140757d40 body=52 status=ok
// SIG undefined FUN_140757d40(void)

float FUN_140757d40(float *param_1,float *param_2)

{
  return (param_2[1] - param_1[1]) * param_1[10] + (*param_2 - *param_1) * param_1[9] +
         (param_2[2] - param_1[2]) * param_1[0xb];
}



// FUNCTION 140757d80 FUN_140757d80 body=95 status=ok
// SIG undefined FUN_140757d80(void)

float * FUN_140757d80(longlong param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *(float *)(param_1 + 0x58);
  fVar2 = *(float *)(param_1 + 0x2c);
  fVar3 = *(float *)(param_1 + 0x30);
  fVar4 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(param_1 + 0x18);
  fVar6 = *(float *)(param_1 + 0x38);
  fVar7 = *(float *)(param_1 + 0x3c);
  *param_2 = fVar1 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x10) +
             param_3 * *(float *)(param_1 + 0x34);
  param_2[1] = fVar1 * fVar2 + fVar4 + param_3 * fVar6;
  param_2[2] = fVar1 * fVar3 + fVar5 + param_3 * fVar7;
  return param_2;
}



// FUNCTION 140757de0 FUN_140757de0 body=97 status=ok
// SIG undefined FUN_140757de0(void)

float * FUN_140757de0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)(param_1 + 0x58);
  fVar2 = *(float *)(param_1 + 0x5c);
  fVar3 = *(float *)(param_1 + 0x2c);
  fVar4 = *(float *)(param_1 + 0x30);
  fVar5 = *(float *)(param_1 + 0x14);
  fVar6 = *(float *)(param_1 + 0x18);
  fVar7 = *(float *)(param_1 + 0x38);
  fVar8 = *(float *)(param_1 + 0x3c);
  *param_2 = fVar1 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x10) +
             fVar2 * *(float *)(param_1 + 0x34);
  param_2[1] = fVar1 * fVar3 + fVar5 + fVar2 * fVar7;
  param_2[2] = fVar1 * fVar4 + fVar6 + fVar2 * fVar8;
  return param_2;
}



// FUNCTION 140757e50 FUN_140757e50 body=80 status=ok
// SIG undefined FUN_140757e50(void)

void FUN_140757e50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140757e9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140757ea0 FUN_140757ea0 body=143 status=ok
// SIG undefined FUN_140757ea0(void)

void FUN_140757ea0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 8);
  local_38 = *param_2;
  local_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  pcVar5 = *(code **)(param_1 + 0x10);
  iStack_18 = *(int *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (*pcVar5)(iStack_18 + lVar6,&local_38);
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 140757f30 FUN_140757f30 body=79 status=ok
// SIG undefined FUN_140757f30(void)

void FUN_140757f30(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140757f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 140757f80 FUN_140757f80 body=131 status=ok
// SIG undefined FUN_140757f80(void)

undefined8 FUN_140757f80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  local_res8 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = FWeakObjectPtr::Get();
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 8));
      if (lVar1 != 0) {
        local_res8 = param_2;
        plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
        uVar3 = FUN_14178ac60(plVar2,*(undefined8 *)(param_1 + 8));
        (**(code **)(*plVar2 + 0x208))(plVar2,uVar3,&local_res8);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140758010 FUN_140758010 body=306 status=ok
// SIG undefined FUN_140758010(void)

undefined8 FUN_140758010(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_38;
  longlong *local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 8);
  plVar4 = (longlong *)param_2[1];
  if (lVar6 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    uVar7 = 0;
  }
  else {
    uVar7 = *param_2;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    lVar6 = FWeakObjectPtr::Get(param_1 + 8);
    local_20 = *(undefined4 *)(param_1 + 0x10);
    uStack_1c = *(undefined4 *)(param_1 + 0x14);
    pcVar5 = *(code **)(param_1 + 0x10);
    iStack_18 = *(int *)(param_1 + 0x18);
    uStack_14 = *(undefined4 *)(param_1 + 0x1c);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_38 = uVar7;
    local_30 = plVar4;
    (*pcVar5)(iStack_18 + lVar6,&local_38);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 140758150 FUN_140758150 body=113 status=ok
// SIG undefined FUN_140758150(void)

bool FUN_140758150(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3);
  }
  return lVar1 != 0;
}



// FUNCTION 1407581d0 FUN_1407581d0 body=120 status=ok
// SIG undefined FUN_1407581d0(void)

undefined8 FUN_1407581d0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28));
    return 1;
  }
  return 0;
}



// FUNCTION 140758250 FUN_140758250 body=269 status=ok
// SIG undefined FUN_140758250(void)

void FUN_140758250(longlong *param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_48 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
  local_40 = &local_48;
  local_38 = FUN_14073d760(&local_48,DAT_1468590e8);
  puVar3 = local_40;
  local_30 = &local_48;
  local_28 = 0;
  puVar4 = (undefined8 *)FUN_14073d760(local_40,local_38);
  puVar5 = (undefined8 *)FUN_14073d760(local_30,local_28);
  for (; puVar4 != puVar5; puVar4 = (undefined8 *)FUN_14073d760(puVar3,*puVar4)) {
    if ((*(char *)(puVar4[2] + 0x6f8) != '\0') || (param_3 != '\0')) {
      iVar1 = (int)param_1[1];
      uVar2 = *(undefined8 *)(puVar4[2] + 0x118);
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
    }
  }
  return;
}



// FUNCTION 140758360 FUN_140758360 body=408 status=ok
// SIG undefined FUN_140758360(void)

longlong FUN_140758360(longlong param_1,longlong param_2,float *param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_38;
  float local_30;
  
  lVar7 = 0;
  fVar11 = 3.4028235e+38;
  if (param_4 != '\0') {
    local_38 = *(undefined8 *)param_3;
    local_30 = param_3[2];
    lVar4 = FUN_140758360(local_38,param_2,&local_38,0);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x4a0);
  plVar1 = plVar5 + *(int *)(param_1 + 0x4a8);
  do {
    if (plVar5 == plVar1) {
LAB_1407583f8:
      plVar5 = *(longlong **)(param_1 + 0x4a0);
      plVar1 = plVar5 + *(int *)(param_1 + 0x4a8);
      do {
        if (plVar5 == plVar1) {
          return lVar7;
        }
        lVar4 = *plVar5;
        if ((lVar4 != 0) && (param_2 != 0)) {
          plVar6 = *(longlong **)(lVar4 + 0x708);
          plVar2 = plVar6 + *(int *)(lVar4 + 0x710);
          for (; plVar6 != plVar2; plVar6 = plVar6 + 1) {
            if (*plVar6 == param_2) {
              if (param_4 == '\0') {
                bVar3 = false;
                if (*(char *)(lVar4 + 0x72c) != '\0') {
                  bVar3 = *(int *)(lVar4 + 0x730) <= *(int *)(lVar4 + 0x740);
                }
                if (bVar3) break;
              }
              fVar9 = *param_3 - *(float *)(lVar4 + 0x220);
              fVar10 = param_3[1] - *(float *)(lVar4 + 0x224);
              fVar8 = param_3[2] - *(float *)(lVar4 + 0x228);
              fVar8 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8;
              if (fVar8 < fVar11) {
                lVar7 = lVar4;
                fVar11 = fVar8;
              }
              break;
            }
          }
        }
        plVar5 = plVar5 + 1;
      } while( true );
    }
    if (*plVar5 == 0) {
      FUN_1407656b0(param_1);
      goto LAB_1407583f8;
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 140758500 FUN_140758500 body=162 status=ok
// SIG undefined FUN_140758500(void)

longlong FUN_140758500(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar2 = FUN_1428e7a40();
    lVar3 = param_2;
    do {
      lVar4 = param_2;
      if (lVar3 == lVar2) goto LAB_140758532;
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  lVar4 = 0;
LAB_140758532:
  lVar3 = FUN_142e7dfd0();
  if (lVar4 == lVar3) {
    lVar3 = *(longlong *)(param_1 + 0x618);
    if (lVar3 == 0) {
      plVar1 = *(longlong **)(param_1 + 0x488);
      if (plVar1 == (longlong *)0x0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000140758569. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,param_2);
      return lVar3;
    }
  }
  else {
    lVar3 = AActor::FindComponentByClass(param_1,param_2);
  }
  return lVar3;
}



// FUNCTION 1407585b0 FUN_1407585b0 body=208 status=ok
// SIG undefined FUN_1407585b0(void)

int * FUN_1407585b0(longlong param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x608) != *(int *)(param_1 + 0x62c)) {
    iVar1 = FCrc::MemCrc32(param_3,0x10);
    lVar2 = *(longlong *)(param_1 + 0x6b0);
    if (*(longlong *)(param_1 + 0x6b0) == 0) {
      lVar2 = param_1 + 0x630;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x6b8) - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x600);
      if (*(longlong *)(param_1 + 0x600) == 0) {
        lVar2 = param_1;
      }
      do {
        lVar3 = (longlong)iVar1;
        if ((*(longlong *)(lVar2 + lVar3 * 0x18) == *param_3) &&
           (*(longlong *)(lVar2 + 8 + lVar3 * 0x18) == param_3[1])) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)(lVar2 + 0x10 + lVar3 * 0x18);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140758680 FUN_140758680 body=501 status=ok
// SIG undefined FUN_140758680(void)

ulonglong FUN_140758680(longlong param_1,undefined8 param_2,longlong *param_3,float param_4)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  float fVar8;
  undefined8 local_res8;
  longlong local_58;
  longlong *local_50 [7];
  
  uVar3 = FWeakObjectPtr::IsValid();
  if (((char)uVar3 != '\0') && (uVar3 = FWeakObjectPtr::Get(param_1), 0 < *(int *)(uVar3 + 0xb8))) {
    uVar3 = FWeakObjectPtr::Get(param_1);
    local_res8 = 0;
    plVar1 = *(longlong **)(uVar3 + 0xb0);
    local_58 = *plVar1;
    if (local_58 != 0) {
      if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
        plVar7 = (longlong *)param_3[8];
        if ((longlong *)param_3[8] == (longlong *)0x0) {
          plVar7 = param_3 + 7;
        }
        iVar2 = *(int *)((longlong)plVar7 +
                        ((longlong)((int)((ulonglong)local_58 >> 0x20) + (int)local_58) &
                        (longlong)(int)param_3[9] - 1U) * 4);
        if (iVar2 != -1) {
          do {
            lVar5 = *param_3 + (longlong)iVar2 * 0x28;
            if (*(longlong *)(*param_3 + (longlong)iVar2 * 0x28) == local_58) {
              if ((iVar2 != -1) && (lVar5 != 0)) goto LAB_14075879a;
              break;
            }
            iVar2 = *(int *)(lVar5 + 0x20);
          } while (iVar2 != -1);
        }
      }
      local_50[0] = &local_58;
      FUN_140747d00(param_3,&local_res8,local_50,0);
      lVar5 = *param_3 + (longlong)(int)local_res8 * 0x28;
LAB_14075879a:
      FUN_14074ac50(lVar5 + 0x10);
      lVar6 = *(longlong *)(lVar5 + 0x10);
      uVar3 = (ulonglong)*(int *)(lVar5 + 0x18);
      lVar5 = lVar6 + uVar3 * 0xc;
      for (; lVar6 != lVar5; lVar6 = lVar6 + 0xc) {
        uVar4 = FWeakObjectPtr::Get(lVar6);
        fVar8 = param_4 - *(float *)(lVar6 + 8);
        uVar3 = uVar4;
        if (((0.0 <= fVar8) && (fVar8 < 10.0)) &&
           (uVar3 = FUN_140760d50(uVar4,plVar1,uVar4,param_2), (char)uVar3 != '\0')) {
          FWeakObjectPtr::operator=(&local_res8,uVar4);
          lVar5 = *(longlong *)(param_1 + 8);
          iVar2 = *(int *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x10) = iVar2 + 1;
          if (*(int *)(lVar5 + 0x14) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar5 + 8,iVar2);
          }
          lVar5 = *(longlong *)(lVar5 + 8);
          *(int *)(lVar5 + (longlong)iVar2 * 8) = (int)local_res8;
          *(undefined4 *)(lVar5 + 4 + (longlong)iVar2 * 8) = local_res8._4_4_;
          return CONCAT71((uint7)(uint3)((ulonglong)local_res8 >> 0x28),1);
        }
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140758880 FUN_140758880 body=125 status=ok
// SIG undefined FUN_140758880(void)

longlong FUN_140758880(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x718);
  lVar5 = (longlong)*(int *)(param_1 + 0x720) * 0x20 + lVar4;
  while( true ) {
    if (lVar4 == lVar5) {
      return 0;
    }
    plVar1 = *(longlong **)(lVar4 + 8);
    if (plVar1 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      uVar2 = AUGWeapon_Hook::GetPrivateStaticClass();
      lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    }
    if (lVar3 == param_2) break;
    lVar4 = lVar4 + 0x20;
  }
  return lVar4;
}



// FUNCTION 140758900 FUN_140758900 body=304 status=ok
// SIG undefined FUN_140758900(void)

undefined8 FUN_140758900(undefined8 param_1,float *param_2,char param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  fVar9 = 3.4028235e+38;
  uVar5 = 0;
  local_58 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  local_50 = &local_58;
  local_48 = FUN_14073d760(&local_58,DAT_1468590e8);
  puVar2 = local_50;
  local_40 = &local_58;
  local_38 = 0;
  puVar3 = (undefined8 *)FUN_14073d760(local_50,local_48);
  puVar4 = (undefined8 *)FUN_14073d760(local_40,local_38);
  for (; puVar3 != puVar4; puVar3 = (undefined8 *)FUN_14073d760(puVar2,*puVar3)) {
    lVar1 = puVar3[2];
    if (((*(char *)(lVar1 + 0x6f8) != '\0') || (param_3 == '\0')) &&
       (fVar6 = *(float *)(lVar1 + 0x220) - *param_2, fVar8 = *(float *)(lVar1 + 0x224) - param_2[1]
       , fVar7 = *(float *)(lVar1 + 0x228) - param_2[2],
       fVar6 = fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7, fVar6 < fVar9)) {
      uVar5 = *(undefined8 *)(lVar1 + 0x118);
      fVar9 = fVar6;
    }
  }
  return uVar5;
}



// FUNCTION 140758a30 FUN_140758a30 body=270 status=ok
// SIG undefined FUN_140758a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140758a30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined1 auStack_718 [32];
  undefined8 local_6f8;
  undefined8 local_6f0;
  float local_6e8 [2];
  undefined1 local_6e0 [1536];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_718;
  if (*(char *)(param_1 + 0x6f9) == '\0') {
    return local_20 & 0xffffffffffffff00;
  }
  local_e0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b4 = 0;
  local_30 = 0;
  local_28 = 0;
  local_b8 = 0xffffffff;
  local_6e8[0] = 3.4028235e+38;
  local_6f8 = param_3;
  local_6f0 = param_4;
  FUN_140758b40(param_1,param_2,local_6e0,local_6e8);
  bVar1 = local_6e8[0] < 3.4028235e+38;
  local_28 = 0;
  if (local_30 != 0) {
    FMemory::Free();
  }
  FUN_14074e9a0(local_6e0);
  return (ulonglong)bVar1;
}



// FUNCTION 140758b40 FUN_140758b40 body=1159 status=ok
// SIG undefined FUN_140758b40(void)

void FUN_140758b40(longlong param_1,float *param_2,longlong param_3,float *param_4,longlong *param_5
                  ,longlong *param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  char local_res8 [8];
  undefined1 local_e8 [16];
  longlong local_d8;
  longlong lStack_d0;
  
  fVar2 = *(float *)(param_1 + 0x220);
  fVar3 = *(float *)(param_1 + 0x224);
  local_d8 = *(longlong *)(param_1 + 0x220);
  fVar4 = *(float *)(param_1 + 0x228);
  lStack_d0 = *(longlong *)(param_1 + 0x228);
  uVar9 = 0;
  uVar12 = uVar9;
  if (0 < *(int *)(param_1 + 0x720)) {
    do {
      plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 8 + uVar9);
      if (plVar10 != (longlong *)0x0) {
        uVar6 = AUGWeapon_Hook::GetPrivateStaticClass();
        lVar7 = (**(code **)(*plVar10 + 0x628))(plVar10,uVar6);
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x6f9) != '\0')) {
          local_res8[0] = '\0';
          plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 8 + uVar9);
          local_d8 = param_1;
          if (plVar10 == (longlong *)0x0) {
            lStack_d0 = 0;
          }
          else {
            uVar6 = AUGWeapon_Hook::GetPrivateStaticClass();
            lStack_d0 = (**(code **)(*plVar10 + 0x628))(plVar10,uVar6);
          }
          FUN_1407475b0(param_3,local_e8,&local_d8,local_res8);
          if (local_res8[0] == '\0') {
            fVar15 = *(float *)(lVar7 + 0x220) - fVar2;
            fVar19 = *(float *)(lVar7 + 0x224) - fVar3;
            fVar17 = *(float *)(lVar7 + 0x228) - fVar4;
            fVar13 = SQRT(fVar19 * fVar19 + fVar15 * fVar15 + fVar17 * fVar17);
            fVar14 = 1.0 / fVar13;
            fVar16 = DAT_1468b5d94;
            fVar18 = DAT_1468b5d90;
            fVar20 = DAT_1468b5d98;
            if (1e-08 < fVar13) {
              fVar16 = fVar14 * fVar19;
              fVar18 = fVar14 * fVar15;
              fVar20 = fVar14 * fVar17;
            }
            fVar14 = ((param_2[1] - fVar3) * fVar16 + (*param_2 - fVar2) * fVar18 +
                     (param_2[2] - fVar4) * fVar20) * fVar14;
            if (0.0 <= fVar14) {
              if (1.0 <= fVar14) {
                fVar14 = 1.0;
              }
            }
            else {
              fVar14 = 0.0;
            }
            fVar16 = (fVar16 * fVar14 + fVar3) - param_2[1];
            fVar18 = (fVar18 * fVar14 + fVar2) - *param_2;
            fVar20 = (fVar20 * fVar14 + fVar4) - param_2[2];
            fVar16 = fVar16 * fVar16 + fVar18 * fVar18 + fVar20 * fVar20;
            if (fVar16 < *param_4) {
              *param_4 = fVar16;
              *param_5 = param_1;
              *param_6 = lVar7;
            }
            FUN_140758b40(lVar7,param_2,param_3,param_4,param_5,param_6);
          }
        }
      }
      uVar11 = (int)uVar12 + 1;
      uVar9 = uVar9 + 0x20;
      uVar12 = (ulonglong)uVar11;
    } while ((int)uVar11 < *(int *)(param_1 + 0x720));
  }
  uVar9 = 0;
  plVar10 = *(longlong **)(param_1 + 0x738);
  uVar12 = (longlong)*(int *)(param_1 + 0x740) & 0x1fffffffffffffff;
  if (plVar10 + *(int *)(param_1 + 0x740) < plVar10) {
    uVar12 = uVar9;
  }
  if (uVar12 != 0) {
    do {
      lVar7 = *plVar10;
      if ((lVar7 != 0) && (*(char *)(lVar7 + 0x6f9) != '\0')) {
        local_d8 = lVar7;
        lStack_d0 = param_1;
        if (*(int *)(param_3 + 0x608) != *(int *)(param_3 + 0x62c)) {
          iVar5 = FCrc::MemCrc32(&local_d8,0x10);
          lVar8 = *(longlong *)(param_3 + 0x6b0);
          if (*(longlong *)(param_3 + 0x6b0) == 0) {
            lVar8 = param_3 + 0x630;
          }
          iVar5 = *(int *)(lVar8 + ((longlong)*(int *)(param_3 + 0x6b8) - 1U & (longlong)iVar5) * 4)
          ;
          if (iVar5 != -1) {
            lVar8 = *(longlong *)(param_3 + 0x600);
            if (*(longlong *)(param_3 + 0x600) == 0) {
              lVar8 = param_3;
            }
            do {
              lVar1 = lVar8 + (longlong)iVar5 * 0x18;
              if ((*(longlong *)(lVar8 + (longlong)iVar5 * 0x18) == local_d8) &&
                 (*(longlong *)(lVar1 + 8) == lStack_d0)) {
                if ((iVar5 != -1) && (lVar1 != 0)) goto LAB_140758f96;
                break;
              }
              iVar5 = *(int *)(lVar1 + 0x10);
            } while (iVar5 != -1);
          }
        }
        FUN_140758b40(lVar7,param_2,param_3,param_4,param_5,param_6);
      }
LAB_140758f96:
      plVar10 = plVar10 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar12);
  }
  return;
}



// FUNCTION 140758fd0 FUN_140758fd0 body=1039 status=ok
// SIG undefined FUN_140758fd0(void)

undefined8
FUN_140758fd0(longlong param_1,undefined8 param_2,longlong *param_3,int *param_4,undefined1 *param_5
             ,float param_6)

{
  byte *pbVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  float fVar18;
  undefined8 local_res20;
  int local_98;
  undefined8 local_88;
  longlong local_80 [8];
  
  iVar10 = -1;
  *param_5 = 0;
  *param_4 = -1;
  lVar7 = FWeakObjectPtr::Get();
  plVar2 = (longlong *)(lVar7 + 0xb0);
  cVar3 = FWeakObjectPtr::IsValid(param_1);
  if (cVar3 != '\0') {
    iVar5 = 0;
    *param_4 = 0;
    lVar9 = *plVar2;
    iVar13 = *(int *)(lVar7 + 0xb8);
    lVar16 = (longlong)iVar13 * 0x130 + lVar9;
    if (lVar9 != lVar16) {
      do {
        pbVar1 = (byte *)(lVar9 + 9);
        lVar9 = lVar9 + 0x130;
        iVar5 = *param_4 + (uint)*pbVar1;
        *param_4 = iVar5;
      } while (lVar9 != lVar16);
      iVar13 = *(int *)(lVar7 + 0xb8);
    }
    local_98 = 0;
    if (0 < iVar13) {
      local_res20 = 0;
      local_80[0] = -0x130;
      lVar9 = -0x18;
      do {
        uVar11 = 0;
        local_80[0] = local_80[0] + 0x130;
        local_res20 = CONCAT44(local_res20._4_4_,iVar10 + 1);
        iVar10 = iVar10 + 1;
        if (*(longlong *)(local_80[0] + *plVar2) != 0) {
          lVar16 = *(longlong *)(param_1 + 8);
          if (0 < *(int *)(lVar9 + 0x28 + lVar16)) {
            lVar15 = lVar9 + 0x18 + lVar16;
            iVar10 = 1;
            uVar14 = uVar11;
            do {
              iVar13 = (int)uVar14;
              local_88 = (longlong *)
                         CONCAT44(*(undefined4 *)(uVar11 + 4 + *(longlong *)(lVar15 + 8)),
                                  *(undefined4 *)(uVar11 + *(longlong *)(lVar15 + 8)));
              cVar3 = FUN_140760f90(&local_88);
              if (cVar3 == '\0') {
                iVar5 = *(int *)(lVar15 + 0x10);
                iVar6 = (iVar5 - iVar13) + -1;
                if (iVar6 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(*(longlong *)(lVar15 + 8) + (longlong)iVar13 * 8),
                             (void *)(*(longlong *)(lVar15 + 8) + (longlong)iVar10 * 8),
                             (longlong)iVar6 << 3);
                  iVar5 = *(int *)(lVar15 + 0x10);
                }
                *(int *)(lVar15 + 0x10) = iVar5 + -1;
                TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar15 + 8);
                iVar13 = iVar13 + -1;
                iVar10 = iVar10 + -1;
                uVar11 = uVar11 - 8;
              }
              else {
                *param_4 = *param_4 + -1;
              }
              uVar14 = (ulonglong)(iVar13 + 1U);
              iVar10 = iVar10 + 1;
              uVar11 = uVar11 + 8;
            } while ((int)(iVar13 + 1U) < *(int *)(lVar9 + 0x28 + lVar16));
          }
          iVar10 = (int)local_res20;
        }
        local_98 = local_98 + 1;
        lVar9 = lVar9 + 0x18;
      } while (local_98 < *(int *)(lVar7 + 0xb8));
      iVar5 = *param_4;
    }
    if (iVar5 == 0) {
      *param_5 = 1;
      return 1;
    }
    lVar7 = *(longlong *)(param_1 + 8);
    plVar17 = (longlong *)((longlong)iVar10 * 0x130 + *plVar2);
    if (*(int *)(lVar7 + 0x10) < 1) {
      return 0;
    }
    lVar9 = FWeakObjectPtr::Get(*(undefined8 *)(lVar7 + 8));
    if (lVar9 == 0) {
      return 0;
    }
    local_80[0] = *plVar17;
    if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
      plVar12 = (longlong *)param_3[8];
      if ((longlong *)param_3[8] == (longlong *)0x0) {
        plVar12 = param_3 + 7;
      }
      iVar13 = *(int *)((longlong)plVar12 +
                       ((longlong)((int)((ulonglong)local_80[0] >> 0x20) + (int)local_80[0]) &
                       (longlong)(int)param_3[9] - 1U) * 4);
      if (iVar13 != -1) {
        do {
          lVar16 = *param_3 + (longlong)iVar13 * 0x28;
          if (*(longlong *)(*param_3 + (longlong)iVar13 * 0x28) == local_80[0]) {
            if ((iVar13 != -1) && (lVar16 != 0)) goto LAB_1407592aa;
            break;
          }
          iVar13 = *(int *)(lVar16 + 0x20);
        } while (iVar13 != -1);
      }
    }
    local_88 = local_80;
    FUN_140747d00(param_3,&local_res20,&local_88,0);
    lVar16 = *param_3 + (longlong)(int)local_res20 * 0x28;
LAB_1407592aa:
    FUN_14074ac50(lVar16 + 0x10);
    lVar15 = *(longlong *)(lVar16 + 0x10);
    lVar16 = lVar15 + (longlong)*(int *)(lVar16 + 0x18) * 0xc;
    for (; lVar15 != lVar16; lVar15 = lVar15 + 0xc) {
      lVar8 = FWeakObjectPtr::Get(lVar15);
      fVar18 = param_6 - *(float *)(lVar15 + 8);
      if (((0.0 <= fVar18) && (fVar18 < 10.0)) &&
         (cVar3 = FUN_140760d50(lVar8,plVar17,lVar9,param_2), cVar3 != '\0')) {
        if (lVar8 != 0) {
          FWeakObjectPtr::operator=(&local_res20,lVar8);
          lVar7 = (longlong)iVar10 * 0x18 + lVar7;
          iVar10 = *(int *)(lVar7 + 0x10);
          *(int *)(lVar7 + 0x10) = iVar10 + 1;
          if (*(int *)(lVar7 + 0x14) < iVar10 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar7 + 8,iVar10);
          }
          lVar7 = *(longlong *)(lVar7 + 8);
          *(int *)(lVar7 + (longlong)iVar10 * 8) = (int)local_res20;
          *(undefined4 *)(lVar7 + 4 + (longlong)iVar10 * 8) = local_res20._4_4_;
          *param_4 = *param_4 + -1;
          uVar4 = FUN_140760430(param_1,plVar2);
          *param_5 = uVar4;
          return 1;
        }
        break;
      }
    }
  }
  uVar4 = FUN_140760430(param_1,plVar2);
  *param_5 = uVar4;
  return 0;
}



// FUNCTION 1407593e0 FUN_1407593e0 body=35 status=ok
// SIG undefined FUN_1407593e0(void)

void FUN_1407593e0(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  uVar1 = UCircularThrobber::GetPrivateStaticClass();
                    /* WARNING: Could not recover jumptable at 0x0001407593fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x628))(param_2,uVar1);
  return;
}



// FUNCTION 140759410 FUN_140759410 body=261 status=ok
// SIG undefined FUN_140759410(void)

longlong * FUN_140759410(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (param_2 == 0) {
    return (longlong *)0x0;
  }
  lVar3 = 0;
  if ((*(char *)(param_2 + 0x130) != '\0') && (lVar3 = param_4, param_4 == 0)) {
    if (*(longlong *)(param_3 + 0x568) == 0) {
      return (longlong *)0x0;
    }
    lVar3 = FUN_142bbf6c0(*(longlong *)(param_3 + 0x568),param_2 + 0x138);
    if (lVar3 == 0) {
      return (longlong *)0x0;
    }
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return (longlong *)0x0;
    }
  }
  plVar5 = (longlong *)
           ((ulonglong)(*(ulonglong *)(param_1 + 0x2708) != 0) - 1 & param_1 + 8U |
           *(ulonglong *)(param_1 + 0x2708));
  plVar6 = plVar5 + (longlong)*(int *)(param_1 + 10000) * 0x4e;
  while( true ) {
    if (plVar5 == plVar6) {
      return (longlong *)0x0;
    }
    if ((*plVar5 == param_2) &&
       (cVar2 = FUN_14058c1e0((longlong)plVar5 + 0x14,lVar3), cVar2 != '\0')) break;
    plVar5 = plVar5 + 0x4e;
  }
  return plVar5;
}



// FUNCTION 140759520 FUN_140759520 body=321 status=ok
// SIG undefined FUN_140759520(void)

longlong * FUN_140759520(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20 [8];
  
  if ((param_2 == 0) && (param_3 == 0)) {
    return (longlong *)0x0;
  }
  FWeakObjectPtr::operator=(&local_38,param_3);
  FWeakObjectPtr::operator=(local_20,param_4);
  local_30 = local_38;
  plVar6 = *(longlong **)(param_1 + 0x2708);
  if (*(longlong **)(param_1 + 0x2708) == (longlong *)0x0) {
    plVar6 = (longlong *)(param_1 + 8);
  }
  plVar7 = plVar6 + (longlong)*(int *)(param_1 + 10000) * 0x4e;
  if (plVar6 != plVar7) {
    plVar5 = plVar6 + 0x4d;
    do {
      if ((*plVar6 == param_2) &&
         ((param_4 == 0 ||
          (lVar3 = FWeakObjectPtr::Get((int *)((longlong)plVar5 + -0x254)), lVar3 == param_4)))) {
        plVar4 = (longlong *)plVar5[-1];
        if ((longlong *)plVar5[-1] == (longlong *)0x0) {
          plVar4 = plVar5 + -0x49;
        }
        plVar1 = (longlong *)((longlong)plVar4 + (longlong)(int)*plVar5 * 0x24);
        local_28 = local_30;
        for (; plVar4 != plVar1; plVar4 = (longlong *)((longlong)plVar4 + 0x24)) {
          cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                            ((int *)((longlong)plVar4 + 0x14),&local_28);
          if (cVar2 != '\0') {
            return plVar6;
          }
        }
      }
      plVar6 = plVar6 + 0x4e;
      plVar5 = plVar5 + 0x4e;
    } while (plVar6 != plVar7);
  }
  return (longlong *)0x0;
}



// FUNCTION 1407596b0 FUN_1407596b0 body=951 status=ok
// SIG undefined FUN_1407596b0(void)

void FUN_1407596b0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  longlong param_5,longlong param_6)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float local_d4;
  float local_d0;
  float local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  
  lVar9 = 0;
  local_a8 = 0;
  local_a0 = 0;
  cVar3 = UEnvQueryTest::IsContextPerItem(param_1,param_5);
  uVar2 = local_a0;
  if (cVar3 == '\0') {
    lVar8 = lVar9;
    if (param_5 != 0) {
      lVar6 = UEnvQueryContext::GetPrivateStaticClass();
      lVar7 = param_5;
      do {
        lVar8 = param_5;
        if (lVar7 == lVar6) break;
        lVar7 = *(longlong *)(lVar7 + 0x30);
        lVar8 = lVar9;
      } while (lVar7 != 0);
    }
    FUN_142bedad0(param_3,lVar8,&local_a8);
  }
  else {
    lVar8 = (longlong)(int)local_a0;
    iVar4 = (int)local_a0 + 1;
    local_a0 = CONCAT44(local_a0._4_4_,iVar4);
    if (local_a0._4_4_ < iVar4) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_a8,uVar2 & 0xffffffff);
    }
    *(undefined8 *)(local_a8 + lVar8 * 0xc) = *param_4;
    *(undefined4 *)(local_a8 + 8 + lVar8 * 0xc) = *(undefined4 *)(param_4 + 1);
  }
  iVar4 = 0;
  if (0 < (int)local_a0) {
    do {
      local_b8 = 0;
      local_b0 = 0;
      cVar3 = UEnvQueryTest::IsContextPerItem(param_1,param_6);
      uVar2 = local_b0;
      if (cVar3 == '\0') {
        if (param_6 != 0) {
          lVar7 = UEnvQueryContext::GetPrivateStaticClass();
          lVar8 = param_6;
          do {
            lVar6 = param_6;
            if (lVar8 == lVar7) goto LAB_140759844;
            lVar8 = *(longlong *)(lVar8 + 0x30);
          } while (lVar8 != 0);
        }
        lVar6 = 0;
LAB_140759844:
        FUN_142bedad0(param_3,lVar6,&local_b8);
      }
      else {
        lVar8 = (longlong)(int)local_b0;
        iVar5 = (int)local_b0 + 1;
        local_b0 = CONCAT44(local_b0._4_4_,iVar5);
        if (local_b0._4_4_ < iVar5) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_b8,uVar2 & 0xffffffff);
        }
        *(undefined8 *)(local_b8 + lVar8 * 0xc) = *param_4;
        *(undefined4 *)(local_b8 + 8 + lVar8 * 0xc) = *(undefined4 *)(param_4 + 1);
      }
      iVar5 = 0;
      if (0 < (int)local_b0) {
        lVar8 = 0;
        do {
          local_d4 = *(float *)(lVar8 + local_b8) - *(float *)(lVar9 + local_a8);
          local_d0 = *(float *)(lVar8 + 4 + local_b8) - *(float *)(lVar9 + 4 + local_a8);
          local_cc = *(float *)(lVar8 + 8 + local_b8) - *(float *)(lVar9 + 8 + local_a8);
          fVar10 = local_d0 * local_d0 + local_d4 * local_d4 + local_cc * local_cc;
          if (fVar10 != 1.0) {
            if (1e-08 <= fVar10) {
              auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
              fVar11 = auVar12._0_4_;
              fVar11 = fVar11 + fVar11 * (0.5 - fVar10 * 0.5 * fVar11 * fVar11);
              fVar11 = fVar11 + fVar11 * (0.5 - fVar10 * 0.5 * fVar11 * fVar11);
              local_d4 = local_d4 * fVar11;
              local_d0 = local_d0 * fVar11;
              local_cc = local_cc * fVar11;
            }
            else {
              local_d4 = DAT_1468b5d90;
              local_cc = DAT_1468b5d98;
              local_d0 = DAT_1468b5d94;
            }
          }
          FVector::Rotation(&local_d4,&local_c8);
          iVar1 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          lVar7 = *param_2;
          iVar5 = iVar5 + 1;
          lVar8 = lVar8 + 0xc;
          *(undefined8 *)(lVar7 + (longlong)iVar1 * 0xc) = local_c8;
          *(undefined4 *)(lVar7 + 8 + (longlong)iVar1 * 0xc) = local_c0;
        } while (iVar5 < (int)local_b0);
      }
      if (local_b8 != 0) {
        FMemory::Free();
      }
      iVar4 = iVar4 + 1;
      lVar9 = lVar9 + 0xc;
    } while (iVar4 < (int)local_a0);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140759a70 FUN_140759a70 body=357 status=ok
// SIG undefined FUN_140759a70(void)

void FUN_140759a70(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,char param_7,undefined8 param_8,
                  undefined8 *param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong local_20;
  undefined8 local_18;
  
  if (param_7 == '\0') {
    FUN_1407596b0(param_1,param_2,param_3,param_8,param_4,param_5);
  }
  else {
    uVar8 = 0;
    local_20 = 0;
    local_18 = 0;
    cVar4 = UEnvQueryTest::IsContextPerItem(param_1,param_6);
    uVar10 = local_18;
    if (cVar4 == '\0') {
      uVar10 = uVar8;
      if (param_6 != 0) {
        uVar6 = UEnvQueryContext::GetPrivateStaticClass();
        uVar7 = param_6;
        do {
          uVar10 = param_6;
          if (uVar7 == uVar6) break;
          uVar7 = *(ulonglong *)(uVar7 + 0x30);
          uVar10 = uVar8;
        } while (uVar7 != 0);
      }
      FUN_142bed8a0(param_3,uVar10,&local_20);
    }
    else {
      lVar9 = (longlong)(int)local_18;
      iVar5 = (int)local_18 + 1;
      local_18 = CONCAT44(local_18._4_4_,iVar5);
      if (local_18._4_4_ < iVar5) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_20,uVar10 & 0xffffffff);
      }
      puVar1 = (undefined8 *)(local_20 + lVar9 * 0xc);
      *puVar1 = *param_9;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_9 + 1);
    }
    uVar10 = uVar8;
    if (0 < (int)local_18) {
      do {
        iVar5 = (int)param_2[1];
        uVar2 = *(undefined8 *)(local_20 + uVar8);
        uVar3 = *(undefined4 *)(local_20 + 8 + uVar8);
        *(int *)(param_2 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
        }
        lVar9 = *param_2;
        uVar11 = (int)uVar10 + 1;
        uVar8 = uVar8 + 0xc;
        *(undefined8 *)(lVar9 + (longlong)iVar5 * 0xc) = uVar2;
        *(undefined4 *)(lVar9 + 8 + (longlong)iVar5 * 0xc) = uVar3;
        uVar10 = (ulonglong)uVar11;
      } while ((int)uVar11 < (int)local_18);
    }
    if (local_20 != 0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 140759be0 FUN_140759be0 body=1697 status=ok
// SIG undefined FUN_140759be0(void)

void FUN_140759be0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  undefined8 uVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  bool bVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  int local_res8 [2];
  longlong local_138;
  float local_130;
  undefined8 local_128;
  float local_120;
  float local_118;
  float fStack_114;
  float local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong lVar10;
  
  lVar10 = 0;
  iVar9 = 0;
  local_e8 = 0;
  local_e0 = 0;
  lVar8 = lVar10;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar4 = UEnvQueryContext::GetPrivateStaticClass();
    for (lVar7 = *(longlong *)(param_1 + 0x10);
        (lVar8 = lVar10, lVar7 != 0 && (lVar8 = *(longlong *)(param_1 + 0x10), lVar7 != lVar4));
        lVar7 = *(longlong *)(lVar7 + 0x30)) {
    }
  }
  FUN_142bedad0(param_2,lVar8,&local_e8);
  if ((int)local_e0 < 1) goto LAB_14075a24a;
  uVar5 = FWeakObjectPtr::Get(param_2 + 0x34);
  local_138 = FUN_140765020(uVar5);
  FAIDataProviderValue::BindData(param_1 + 0xa8,uVar5,*(undefined4 *)(param_2 + 0x30));
  FAIDataProviderValue::BindData(param_1 + 0x20,uVar5,*(undefined4 *)(param_2 + 0x30));
  FAIDataProviderValue::BindData(param_1 + 0x50,uVar5,*(undefined4 *)(param_2 + 0x30));
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    uVar12 = 0x43b40000;
  }
  else {
    uVar12 = FAIDataProviderFloatValue::GetValue(param_1 + 0xa8);
  }
  fVar13 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x20);
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  fVar14 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x50);
  local_f8 = 0;
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  local_f0 = 0;
  lVar8 = lVar10;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    lVar4 = UEnvQueryContext::GetPrivateStaticClass();
    for (lVar7 = *(longlong *)(param_1 + 0xe8);
        (lVar8 = lVar10, lVar7 != 0 && (lVar8 = *(longlong *)(param_1 + 0xe8), lVar7 != lVar4));
        lVar7 = *(longlong *)(lVar7 + 0x30)) {
    }
  }
  FUN_142bedad0(param_2,lVar8,&local_f8);
  local_108 = 0;
  local_100 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (&local_108);
  }
  pfVar6 = (float *)FUN_14075c340(param_1,&local_118,param_2);
  fVar19 = pfVar6[1];
  fVar20 = *pfVar6;
  fVar15 = fVar20 * fVar20 + fVar19 * fVar19;
  if (fVar15 == 1.0) {
    if (pfVar6[2] != 0.0) {
LAB_140759ed5:
      local_120 = 0.0;
      goto LAB_140759ed9;
    }
    local_128 = *(longlong *)pfVar6;
    fVar19 = (float)((ulonglong)local_128 >> 0x20);
    fVar20 = (float)local_128;
    fVar15 = pfVar6[2];
  }
  else {
    if (1e-08 <= fVar15) {
      auVar18 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
      fVar16 = auVar18._0_4_;
      fVar16 = fVar16 + fVar16 * (0.5 - fVar15 * 0.5 * fVar16 * fVar16);
      fVar16 = fVar16 + fVar16 * (0.5 - fVar15 * 0.5 * fVar16 * fVar16);
      fVar20 = fVar20 * fVar16;
      fVar19 = fVar19 * fVar16;
      goto LAB_140759ed5;
    }
    local_120 = DAT_1468b5d98;
    fVar19 = DAT_1468b5d94;
    fVar20 = DAT_1468b5d90;
LAB_140759ed9:
    local_128 = CONCAT44(fVar19,fVar20);
    fVar15 = local_120;
  }
  fVar19 = -fVar19;
  fVar16 = fVar20 * fVar20 + fVar19 * fVar19;
  if (fVar16 == 1.0) {
LAB_140759f9f:
    _local_118 = CONCAT44(fVar20,fVar19);
    local_110 = 0.0;
  }
  else {
    if (1e-08 <= fVar16) {
      auVar18 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
      fVar17 = auVar18._0_4_;
      fVar17 = fVar17 + fVar17 * (0.5 - fVar16 * 0.5 * fVar17 * fVar17);
      fVar17 = fVar17 + fVar17 * (0.5 - fVar16 * 0.5 * fVar17 * fVar17);
      fVar19 = fVar17 * fVar19;
      fVar20 = fVar20 * fVar17;
      goto LAB_140759f9f;
    }
    _local_118 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_110 = DAT_1468b5d98;
  }
  local_res8[0] = 0;
  if (local_138 == 0) {
    bVar11 = true;
  }
  else if (*(longlong *)(local_138 + 0x5c8) == 0) {
    bVar11 = true;
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(local_138 + 0x5c8) + 0x900);
    if (plVar1 == (longlong *)0x0) {
      bVar11 = true;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0xc80))();
      lVar8 = DAT_146859040;
      bVar11 = cVar2 == '\0';
      if (cVar2 != '\0') {
        cVar2 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
          DVar3 = GetCurrentThreadId();
          lVar7 = 4;
          if (DVar3 == DAT_1468c21c0) goto LAB_14075a05a;
        }
        else {
LAB_14075a05a:
          lVar7 = lVar10;
        }
        fVar19 = *(float *)(lVar7 + lVar8) * *(float *)(param_1 + 0xd8);
        FUN_1407578c0(&local_e8,*(undefined4 *)((longlong)param_3 + 0x74),(int)param_3[0xe],fVar19);
        FUN_1407578c0(&local_f8,*(undefined4 *)((longlong)param_3 + 0x74),(int)param_3[0xe],fVar19);
      }
    }
  }
  fVar19 = local_110;
  uVar5 = _local_118;
  if (((*(char *)(param_1 + 0x18) == '\0') && (0.0001 < fVar14)) && (fVar13 < fVar14)) {
    local_138 = local_128;
    local_130 = fVar15;
    FUN_140757200(1,uVar12,&local_e8,&local_108,&local_138,&local_118,fVar14,fVar13,
                  *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 8),local_res8);
    iVar9 = local_res8[0];
  }
  if (0 < (int)local_f0) {
    local_120 = fVar15;
    _local_118 = uVar5;
    local_110 = fVar19;
    FUN_140757200(0,0x43b40000,&local_f8,&local_108,&local_128,&local_118,
                  *(undefined4 *)(param_1 + 0xe0),0,*(undefined4 *)(param_1 + 0xdc),
                  *(int *)(param_1 + 8) - iVar9,local_res8);
  }
  *(byte *)((longlong)param_3 + 0x8b) = (bVar11 ^ 1U) * '\x02' + '\x01';
  (**(code **)(*param_3 + 0x2a0))(param_3,&local_108,param_2);
  if (0 < (int)local_100) {
    (**(code **)(*param_3 + 0x2a8))(param_3,&local_108,param_2);
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
LAB_14075a24a:
  if (local_e8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14075a290 FUN_14075a290 body=1520 status=ok
// SIG undefined FUN_14075a290(void)

void FUN_14075a290(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong local_158;
  undefined8 local_150;
  float local_148;
  int local_144;
  int local_140;
  longlong local_138;
  undefined8 local_130;
  float local_128;
  undefined4 local_124;
  undefined8 local_118;
  float fStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  float local_f8;
  
  local_138 = 0;
  local_130 = 0;
  lVar10 = 0;
  if (param_1[0x3e] != 0) {
    lVar6 = UEnvQueryContext::GetPrivateStaticClass();
    for (lVar8 = param_1[0x3e]; (lVar10 = 0, lVar8 != 0 && (lVar10 = param_1[0x3e], lVar8 != lVar6))
        ; lVar8 = *(longlong *)(lVar8 + 0x30)) {
    }
  }
  FUN_142bedad0(param_2,lVar10,&local_138);
  if (0 < (int)local_130) {
    uVar7 = FWeakObjectPtr::Get(param_2 + 0x34);
    FAIDataProviderValue::BindData(param_1 + 0x37,uVar7,*(undefined4 *)(param_2 + 0x30));
    FAIDataProviderValue::BindData(param_1 + 0x13,uVar7,*(undefined4 *)(param_2 + 0x30));
    FAIDataProviderValue::BindData(param_1 + 0x19,uVar7,*(undefined4 *)(param_2 + 0x30));
    if ((*(byte *)(param_1 + 0x3d) & 1) == 0) {
      fVar13 = 360.0;
    }
    else {
      fVar13 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x37);
      fVar13 = fVar13 * 2.0;
    }
    fVar14 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x13);
    fVar15 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x19);
    if (((0.0 < fVar14) && (0.0 < fVar15)) && (fVar14 <= fVar15)) {
      iVar3 = FUN_14075f3f0(param_1 + 0x21,fVar15 - fVar14);
      if (0 < iVar3) {
        fVar16 = 0.0;
        fVar17 = 0.0;
        local_144 = 1;
        local_148 = 0.0;
        if ((*(byte *)(param_1 + 0x31) & 1) != 0) {
          FAIDataProviderValue::BindData(param_1 + 0x25,uVar7,*(undefined4 *)(param_2 + 0x30));
          FAIDataProviderValue::BindData(param_1 + 0x2b,uVar7,*(undefined4 *)(param_2 + 0x30));
          fVar16 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x25);
          fVar17 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x2b);
          local_148 = fVar17;
          local_144 = FUN_14075f3f0(param_1 + 0x23,fVar16 - fVar17);
          if (local_144 < 1) goto LAB_14075a850;
        }
        iVar4 = local_144;
        local_158 = 0;
        local_150 = 0;
        if (0 < (int)param_1[0x32]) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeTo(&local_158);
        }
        local_124 = FUN_14075c0b0(param_1,param_2);
        fVar18 = 0.0;
        if ((0.0 <= fVar13) && (fVar18 = fVar13, 360.0 <= fVar13)) {
          fVar18 = 360.0;
        }
        iVar5 = iVar4 + -1;
        if (iVar5 < 2) {
          iVar5 = 1;
        }
        local_140 = 0;
        fVar13 = (fVar16 - fVar17) / (float)iVar5;
        local_128 = fVar13;
        if (0 < iVar4) {
          iVar5 = (int)local_130;
          do {
            iVar11 = 0;
            fVar16 = (float)local_140 * fVar13 + fVar17;
            if (0 < iVar3) {
              fVar19 = (float)(iVar3 + -1);
              if (fVar19 <= 1.0) {
                fVar19 = 1.0;
              }
              do {
                fVar13 = ((float)iVar11 / fVar19) * (fVar15 - fVar14) + fVar14;
                iVar4 = FUN_14075f3f0(param_1 + 0x1f,fVar13 * fVar18 * 0.017453292);
                iVar12 = 0;
                if (0 < iVar4) {
                  do {
                    __libm_sse2_sincosf_();
                    iVar9 = 0;
                    if (0 < iVar5) {
                      lVar10 = 0;
                      do {
                        uVar2 = local_150;
                        lVar8 = (longlong)(int)local_150;
                        local_108 = 0;
                        fStack_110 = fVar16 + *(float *)(lVar10 + 8 + local_138);
                        iVar5 = (int)local_150 + 1;
                        local_118 = CONCAT44(extraout_XMM0_Da * fVar13 +
                                             *(float *)(lVar10 + 4 + local_138),
                                             extraout_XMM0_Db * fVar13 +
                                             *(float *)(lVar10 + local_138));
                        local_150 = CONCAT44(local_150._4_4_,iVar5);
                        local_f8 = fStack_110;
                        if (local_150._4_4_ < iVar5) {
                          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                          ::ResizeGrow(&local_158,uVar2 & 0xffffffff);
                        }
                        iVar9 = iVar9 + 1;
                        lVar10 = lVar10 + 0xc;
                        puVar1 = (undefined4 *)(local_158 + lVar8 * 0x18);
                        *puVar1 = (undefined4)local_118;
                        puVar1[1] = local_118._4_4_;
                        puVar1[2] = fStack_110;
                        puVar1[3] = uStack_10c;
                        *(undefined8 *)(local_158 + 0x10 + lVar8 * 0x18) = local_108;
                        iVar5 = (int)local_130;
                      } while (iVar9 < (int)local_130);
                    }
                    iVar12 = iVar12 + 1;
                  } while (iVar12 < iVar4);
                }
                iVar11 = iVar11 + 1;
                fVar17 = local_148;
                iVar4 = local_144;
                fVar13 = local_128;
              } while (iVar11 < iVar3);
            }
            local_140 = local_140 + 1;
          } while (local_140 < iVar4);
        }
        (**(code **)(*param_1 + 0x2a0))(param_1,&local_158,param_2);
        if (((1 < iVar4) && (*(char *)((longlong)param_1 + 0x8b) != '\0')) &&
           (*(char *)((longlong)param_1 + 0x8b) != '\x03')) {
          FUN_140766790(param_1,&local_158,*(float *)(param_1 + 0x20) * 0.5);
        }
        (**(code **)(*param_1 + 0x2a8))(param_1,&local_158,param_2);
        if (local_158 != 0) {
          FMemory::Free();
        }
      }
    }
  }
LAB_14075a850:
  if (local_138 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14075a880 FUN_14075a880 body=1200 status=ok
// SIG undefined FUN_14075a880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075a880(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 local_res18 [8];
  undefined8 *local_res20;
  longlong local_138;
  ulonglong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined1 **local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 **local_98;
  undefined8 local_90;
  undefined1 **local_88;
  undefined8 local_80;
  
  lVar7 = FWeakObjectPtr::Get(param_2 + 0x34);
  if ((lVar7 != 0) &&
     (lVar8 = UEngine::GetWorldFromContextObject(DAT_146b17150,lVar7,1), lVar8 != 0)) {
    FAIDataProviderValue::BindData(param_1 + 0x68,lVar7,*(undefined4 *)(param_2 + 0x30));
    fVar14 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x68);
    local_138 = 0;
    local_130 = 0;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar9 = UEnvQueryContext::GetPrivateStaticClass();
      lVar7 = *(longlong *)(param_1 + 0x98);
      for (lVar1 = lVar7; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        if (lVar1 == lVar9) goto LAB_14075a950;
      }
    }
    lVar7 = 0;
LAB_14075a950:
    FUN_142bed6b0(param_2,lVar7,&local_138);
    local_118 = local_res18;
    local_98 = &local_a8;
    uStack_110._0_4_ = (undefined4)lVar8;
    uStack_110._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
    uStack_a0 = (undefined4)uStack_110;
    uStack_9c = uStack_110._4_4_;
    uStack_110 = lVar8;
    local_a8 = local_118;
    local_90 = FUN_140761ee0(&local_a8,DAT_146859168);
    local_88 = &local_a8;
    local_f0 = local_98;
    local_80 = 0;
    puVar10 = (undefined8 *)FUN_140761ee0(local_98,local_90);
    local_res20 = puVar10;
    local_e8 = (undefined8 *)FUN_140761ee0(local_88,local_80);
    if (puVar10 != local_e8) {
      do {
        uVar12 = local_130 & 0xffffffff;
        iVar13 = 0;
        lVar7 = puVar10[2];
        if (0 < (int)local_130) {
          lVar8 = 0;
          do {
            lVar1 = *(longlong *)(local_138 + lVar8);
            if (lVar1 != 0) {
              lVar9 = FUN_1429d7ab0();
              if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if ((bVar3) && (lVar9 = *(longlong *)(lVar1 + 0x490), lVar9 != 0)) {
                lVar11 = FUN_142c2de20();
                if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) {
                  cVar5 = *(char *)(param_1 + 0x60);
                  lVar11 = *(longlong *)(lVar9 + 0x488);
                  if (lVar11 != 0) {
                    cVar4 = (**(code **)(*(longlong *)(lVar7 + 0x6f0) + 0x10))
                                      ((longlong *)(lVar7 + 0x6f0),lVar9);
                    if (((cVar4 != '\0') && (*(longlong *)(lVar7 + 0x6f8) != 0)) &&
                       ((cVar5 == '\x02' ||
                        (cVar5 == *(char *)(*(longlong *)(lVar7 + 0x6f8) + 0x30))))) {
                      iVar6 = rand();
                      local_128 = 0xffffffffffffffff;
                      fVar15 = (float)FUN_142de77e0(*(longlong *)(lVar7 + 0x6f8) + 0x48,0,0,
                                                    &local_128);
                      if ((float)iVar6 * 0.003051851 < fVar15) {
                        lVar11 = *(longlong *)(lVar11 + 0x168);
                        if (lVar11 == 0) {
                          local_d8 = DAT_1468b5d98;
                          puVar10 = &local_e0;
                          local_e0 = _DAT_1468b5d90;
                        }
                        else {
                          puVar10 = (undefined8 *)&local_108;
                          local_108 = *(undefined4 *)(lVar11 + 0x220);
                          local_100 = *(undefined4 *)(lVar11 + 0x228);
                          uStack_104 = *(undefined4 *)(lVar11 + 0x224);
                        }
                        local_c8 = *puVar10;
                        local_c0 = *(undefined4 *)(puVar10 + 1);
                        cVar5 = FUN_1407615b0(lVar7,&local_c8);
                        if (cVar5 != '\0') {
                          lVar11 = *(longlong *)(*(longlong *)(lVar7 + 0x6f8) + 200);
                          if (lVar11 != 0) {
                            cVar5 = FUN_142c48f60(lVar11,lVar9,0);
                            if (cVar5 == '\0') goto LAB_14075ac8d;
                          }
                          lVar1 = *(longlong *)(lVar1 + 0x168);
                          uVar2 = *(undefined8 *)(lVar7 + 0x220);
                          uStack_120 = *(undefined8 *)(lVar7 + 0x228);
                          if (lVar1 == 0) {
                            local_b0 = DAT_1468b5d98;
                            puVar10 = &local_b8;
                            local_b8 = _DAT_1468b5d90;
                          }
                          else {
                            puVar10 = (undefined8 *)&local_fc;
                            local_fc = *(undefined4 *)(lVar1 + 0x220);
                            local_f4 = *(undefined4 *)(lVar1 + 0x228);
                            uStack_f8 = *(undefined4 *)(lVar1 + 0x224);
                          }
                          local_128._0_4_ = (float)uVar2;
                          local_128._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
                          fVar16 = (float)local_128 - (float)*puVar10;
                          fVar17 = local_128._4_4_ - (float)((ulonglong)*puVar10 >> 0x20);
                          uStack_110 = CONCAT44(uStack_110._4_4_,*(float *)(puVar10 + 1));
                          fVar15 = (float)uStack_120 - *(float *)(puVar10 + 1);
                          local_128 = uVar2;
                          if (fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15 < fVar14 * fVar14)
                          {
                            FUN_140747080(param_2,*(undefined8 *)(lVar7 + 0x118));
                            break;
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_14075ac8d:
              uVar12 = local_130 & 0xffffffff;
            }
            iVar13 = iVar13 + 1;
            lVar8 = lVar8 + 8;
          } while (iVar13 < (int)uVar12);
        }
        puVar10 = (undefined8 *)FUN_140761ee0(local_f0,*local_res20);
        local_res20 = puVar10;
      } while (puVar10 != local_e8);
    }
    if (local_138 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14075ad30 FUN_14075ad30 body=398 status=ok
// SIG undefined FUN_14075ad30(void)

void FUN_14075ad30(undefined8 ****param_1,longlong param_2)

{
  undefined8 ***pppuVar1;
  longlong lVar2;
  undefined8 *****pppppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined4 uVar6;
  undefined8 ***local_res10;
  longlong local_78 [2];
  undefined8 ****local_68;
  undefined8 ****ppppuStack_60;
  undefined8 ****local_58;
  undefined8 ****ppppuStack_50;
  undefined8 ****local_48;
  undefined8 ****local_40;
  undefined8 ****local_38;
  undefined8 local_30;
  
  lVar2 = FWeakObjectPtr::Get(param_2 + 0x34);
  if ((lVar2 != 0) &&
     (pppppuVar3 = (undefined8 *****)UEngine::GetWorldFromContextObject(DAT_146b17150,lVar2,1),
     pppppuVar3 != (undefined8 *****)0x0)) {
    FAIDataProviderValue::BindData(param_1 + 0xd,lVar2,*(undefined4 *)(param_2 + 0x30));
    uVar6 = FAIDataProviderFloatValue::GetValue(param_1 + 0xd);
    local_78[0] = 0;
    local_78[1] = 0;
    pppuVar5 = (undefined8 ***)0x0;
    if (param_1[0x13] != (undefined8 ***)0x0) {
      pppuVar4 = (undefined8 ***)UEnvQueryContext::GetPrivateStaticClass();
      for (pppuVar1 = param_1[0x13];
          (pppuVar5 = (undefined8 ***)0x0, pppuVar1 != (undefined8 ***)0x0 &&
          (pppuVar5 = param_1[0x13], pppuVar1 != pppuVar4)); pppuVar1 = (undefined8 ***)pppuVar1[6])
      {
      }
    }
    FUN_142bed6b0(param_2,pppuVar5,local_78);
    if (param_1[0xc] == (undefined8 ***)0x0) {
      ppppuStack_50 = &local_58;
      local_58 = pppppuVar3;
      local_48 = (undefined8 ****)FUN_14073d760(&local_58,DAT_146859180);
      local_40 = &local_58;
      local_38 = (undefined8 *****)0x0;
      FUN_140749010(param_2,&local_58,local_78,uVar6);
    }
    else {
      local_68 = &local_res10;
      local_48 = &local_58;
      local_res10 = param_1;
      ppppuStack_60 = pppppuVar3;
      local_58 = local_68;
      ppppuStack_50 = pppppuVar3;
      local_40 = (undefined8 ****)FUN_140761e00(&local_58);
      local_38 = &local_58;
      local_30 = 0;
      FUN_140748ce0(param_2,&local_58,local_78,uVar6);
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14075aec0 FUN_14075aec0 body=3140 status=ok
// SIG undefined FUN_14075aec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075aec0(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  float *pfVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  float *pfVar19;
  longlong *plVar20;
  byte bVar21;
  longlong *plVar22;
  uint uVar23;
  longlong lVar24;
  float *pfVar25;
  undefined8 *puVar26;
  float *pfVar27;
  float *pfVar28;
  longlong lVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  undefined1 auStack_2e8 [32];
  undefined8 *local_2c8;
  longlong local_2b8;
  uint local_2b0;
  longlong local_2a8;
  longlong *local_2a0;
  longlong local_298;
  uint local_290;
  float local_28c;
  longlong *local_288;
  longlong local_280;
  longlong *local_278;
  undefined8 local_270;
  longlong local_268;
  undefined4 local_260;
  undefined4 local_258;
  undefined4 local_254;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  longlong local_238;
  undefined4 local_230;
  undefined8 local_228;
  longlong local_220;
  longlong *local_218;
  undefined8 *local_210;
  longlong local_208;
  longlong local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 uStack_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined8 *local_180;
  longlong local_178;
  uint local_170;
  longlong local_16c;
  uint local_164;
  float local_158;
  longlong local_154;
  uint local_14c;
  longlong local_148;
  undefined4 local_140;
  float local_138 [12];
  float *local_108;
  uint local_100;
  uint local_fc;
  undefined8 local_f8 [20];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  local_2b8 = param_1;
  local_288 = param_2;
  lVar10 = FWeakObjectPtr::Get((longlong)param_2 + 0x34);
  if (lVar10 != 0) {
    local_280 = lVar10;
    lVar11 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) &&
        (lVar11 = UEngine::GetWorldFromContextObject(DAT_146b17150,lVar10,1), lVar11 != 0)) &&
       (plVar22 = *(longlong **)(lVar10 + 0x490), plVar22 != (longlong *)0x0)) {
      local_2a0 = plVar22;
      uVar12 = USoUICheckbox::GetPrivateStaticClass();
      local_2a8 = (**(code **)(*plVar22 + 0x628))(plVar22,uVar12);
      if (local_2a8 != 0) {
        lVar10 = param_1;
        if (*(char *)(param_1 + 0xe0) == '\0') {
          uVar12 = FUN_142c3f210();
          cVar4 = UObjectBaseUtility::IsIn(param_1,uVar12);
          if (cVar4 == '\0') {
            *(undefined1 *)(param_1 + 0xe0) = 1;
            if ((0 < *(int *)(param_1 + 200)) && (*(int *)(param_1 + 0xd8) == 0)) {
              plVar22 = (longlong *)(param_1 + 0xd0);
              *(undefined4 *)(param_1 + 0xd8) = 0;
              if (*(int *)(param_1 + 0xdc) < *(int *)(param_1 + 200)) {
                TArray<void_*,FDefaultAllocator>::ResizeTo(plVar22);
              }
              lVar24 = *(longlong *)(param_1 + 0xc0);
              lVar29 = lVar24 + (longlong)*(int *)(param_1 + 200) * 0x28;
              for (; lVar24 != lVar29; lVar24 = lVar24 + 0x28) {
                lVar10 = FUN_141796df0(lVar24 + 0x10);
                if (lVar10 != 0) {
                  lVar13 = FUN_14171bfe0();
                  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  if (bVar2) {
                    iVar8 = *(int *)(param_1 + 0xd8);
                    *(int *)(param_1 + 0xd8) = iVar8 + 1;
                    if (*(int *)(param_1 + 0xdc) < iVar8 + 1) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (plVar22,iVar8);
                    }
                    *(longlong *)(*plVar22 + (longlong)iVar8 * 8) = lVar10;
                  }
                }
                lVar10 = local_2b8;
              }
            }
          }
        }
        pfVar19 = (float *)0x0;
        local_278 = (longlong *)0x0;
        local_270 = 0;
        pfVar28 = pfVar19;
        if (*(longlong *)(lVar10 + 0x138) != 0) {
          pfVar14 = (float *)UEnvQueryContext::GetPrivateStaticClass();
          for (pfVar25 = *(float **)(lVar10 + 0x138);
              (pfVar28 = pfVar19, pfVar25 != (float *)0x0 &&
              (pfVar28 = *(float **)(lVar10 + 0x138), pfVar25 != pfVar14));
              pfVar25 = *(float **)(pfVar25 + 0xc)) {
          }
        }
        FUN_142bed6b0(param_2,pfVar28,&local_278);
        local_108 = (float *)0x0;
        local_100 = 0;
        local_fc = 0;
        pfVar28 = (float *)((ulonglong)
                            ((longlong)(local_278 + (int)local_270) + (7 - (longlong)local_278)) >>
                           3);
        if (local_278 + (int)local_270 < local_278) {
          pfVar28 = (float *)0x0;
        }
        plVar22 = local_278;
        pfVar25 = pfVar19;
        pfVar14 = pfVar19;
        pfVar27 = pfVar19;
        if (pfVar28 != (float *)0x0) {
          do {
            if (*plVar22 != 0) {
              lVar10 = *(longlong *)(*plVar22 + 0x168);
              if (lVar10 == 0) {
                plVar16 = &local_298;
                local_298 = _DAT_1468b5d90;
                local_290 = DAT_1468b5d98;
              }
              else {
                plVar16 = &local_268;
                local_260 = *(undefined4 *)(lVar10 + 0x228);
                local_268 = *(longlong *)(lVar10 + 0x220);
              }
              iVar8 = (int)pfVar25;
              local_100 = iVar8 + 1U;
              if ((int)pfVar19 < (int)(iVar8 + 1U)) {
                TArray<FVertexInputStream,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                          (local_138,pfVar25);
                pfVar14 = local_108;
              }
              pfVar19 = local_138;
              if (pfVar14 != (float *)0x0) {
                pfVar19 = pfVar14;
              }
              fVar30 = *(float *)(plVar16 + 1);
              *(longlong *)(pfVar19 + (longlong)iVar8 * 3) = *plVar16;
              pfVar19[(longlong)iVar8 * 3 + 2] = fVar30;
              pfVar19 = (float *)(ulonglong)local_fc;
              pfVar25 = (float *)(ulonglong)local_100;
              pfVar14 = local_108;
            }
            pfVar27 = (float *)((longlong)pfVar27 + 1);
            plVar22 = plVar22 + 1;
            lVar10 = local_2b8;
            param_2 = local_288;
          } while (pfVar27 != pfVar28);
        }
        lVar29 = local_280;
        FAIDataProviderValue::BindData(lVar10 + 0x60,local_280,(int)param_2[6]);
        FAIDataProviderValue::BindData(lVar10 + 0x90,lVar29,(int)param_2[6]);
        local_200 = 0;
        local_1f8 = 0;
        local_1f0 = 0;
        local_1e8 = 0;
        lVar24 = FUN_142da89b0(lVar11);
        if (lVar24 != 0) {
          cVar4 = FAIDataProviderBoolValue::GetValue(lVar10 + 0x60);
          if (cVar4 != '\0') {
            FUN_1421d3220(&local_200,lVar24 + 0x30);
          }
          cVar4 = FAIDataProviderBoolValue::GetValue(lVar10 + 0x90);
          if (cVar4 != '\0') {
            FUN_1421d3220(&local_200,lVar24 + 0x38);
          }
        }
        lVar24 = local_2b8;
        FAIDataProviderValue::BindData(local_2b8 + 0x108,lVar29,(int)param_2[6]);
        local_28c = (float)FAIDataProviderFloatValue::GetValue(lVar24 + 0x108);
        lVar10 = 0;
        local_28c = local_28c * local_28c;
        local_208 = 0;
        if (*(char *)(lVar24 + 0x141) != '\0') {
          lVar10 = ARemnantWeaponMod::GetPrivateStaticClass();
          if ((*(int *)(local_2a0[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(local_2a0[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
              lVar10 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          lVar10 = 0;
          if (bVar2) {
            lVar10 = local_2a0[0xc3];
            local_208 = lVar10;
          }
        }
        plVar22 = local_2a0;
        local_1b0 = &local_1b8;
        local_1b8 = lVar11;
        local_1a8 = FUN_14073d760(&local_1b8,DAT_1468591c8);
        local_1a0 = &local_1b8;
        local_188 = local_1b0;
        local_198 = 0;
        puVar15 = (undefined8 *)FUN_14073d760(local_1b0,local_1a8);
        local_210 = puVar15;
        local_180 = (undefined8 *)FUN_14073d760(local_1a0,local_198);
        if (puVar15 != local_180) {
          local_2b0 = local_290;
          do {
            lVar11 = *(longlong *)(lVar29 + 0x168);
            lVar13 = puVar15[2];
            if (lVar11 == 0) {
              local_178 = _DAT_1468b5d90;
              local_218 = &local_178;
              local_170 = DAT_1468b5d98;
            }
            else {
              local_218 = (longlong *)&local_1e0;
              local_1e0 = *(undefined4 *)(lVar11 + 0x220);
              local_1d8 = *(undefined4 *)(lVar11 + 0x228);
              local_1dc = *(undefined4 *)(lVar11 + 0x224);
            }
            local_220 = *(longlong *)(lVar13 + 0x118);
            if (local_220 != 0) {
              if (*(int *)(lVar24 + 200) < 1) {
LAB_14075b45c:
                pfVar28 = local_138;
                if (local_108 != (float *)0x0) {
                  pfVar28 = local_108;
                }
                pfVar19 = pfVar28 + (longlong)(int)local_100 * 3;
                if (pfVar28 != pfVar19) {
                  lVar11 = *(longlong *)(local_220 + 0x168);
                  while( true ) {
                    if (lVar11 == 0) {
                      local_16c = _DAT_1468b5d90;
                      plVar16 = &local_16c;
                      local_164 = DAT_1468b5d98;
                    }
                    else {
                      plVar16 = (longlong *)&local_1d4;
                      local_1d4 = *(undefined4 *)(lVar11 + 0x220);
                      local_1cc = *(undefined4 *)(lVar11 + 0x228);
                      uStack_1d0 = *(undefined4 *)(lVar11 + 0x224);
                    }
                    fVar33 = (float)*plVar16 - *pfVar28;
                    fVar31 = (float)((ulonglong)*plVar16 >> 0x20) - pfVar28[1];
                    local_158 = *(float *)(plVar16 + 1);
                    fVar30 = *(float *)(plVar16 + 1) - pfVar28[2];
                    if (fVar33 * fVar33 + fVar31 * fVar31 + fVar30 * fVar30 <= local_28c) break;
                    pfVar28 = pfVar28 + 3;
                    if (pfVar28 == pfVar19) goto LAB_14075b892;
                  }
                  if (lVar10 != 0) {
                    if (lVar11 == 0) {
                      local_154 = _DAT_1468b5d90;
                      plVar16 = &local_154;
                      local_14c = DAT_1468b5d98;
                    }
                    else {
                      plVar16 = (longlong *)&local_1c8;
                      local_1c8 = *(undefined4 *)(lVar11 + 0x220);
                      local_1c0 = *(undefined4 *)(lVar11 + 0x228);
                      uStack_1c4 = *(undefined4 *)(lVar11 + 0x224);
                    }
                    local_148 = *plVar16;
                    local_140 = (undefined4)plVar16[1];
                    cVar4 = FUN_142df43c0(lVar10,*(undefined1 *)(lVar24 + 0x140),&local_148);
                    if (cVar4 == '\0') goto LAB_14075b892;
                  }
                  plVar16 = local_2a0;
                  puVar15 = (undefined8 *)0x0;
                  local_58 = (undefined8 *)0x0;
                  local_50 = 0;
                  if (0 < *(int *)(lVar24 + 0xf0)) {
                    lVar10 = *(longlong *)(lVar13 + 0x490);
                    lVar29 = (longlong)*(int *)(lVar13 + 0x498) * 0x80 + lVar10;
                    lVar11 = local_2a8;
                    puVar26 = puVar15;
                    if (lVar10 != lVar29) {
                      plVar22 = (longlong *)(lVar10 + 8);
                      do {
                        if (plVar22[1] != 0) {
                          local_228 = 0;
                          if (*plVar22 != 0) {
                            plVar18 = *(longlong **)(lVar24 + 0xe8);
                            plVar20 = plVar18 + *(int *)(lVar24 + 0xf0);
                            for (; plVar18 != plVar20; plVar18 = plVar18 + 1) {
                              if (*plVar18 == *plVar22) {
                                bVar21 = 1;
                                goto LAB_14075b640;
                              }
                            }
                          }
                          bVar21 = 0;
LAB_14075b640:
                          plVar20 = *(longlong **)(lVar13 + 0x118);
                          if ((plVar20 == (longlong *)0x0) ||
                             (lVar11 = (**(code **)(*plVar20 + 0x148))(plVar20), lVar11 == 0)) {
                            uVar32 = 0;
                          }
                          else {
                            uVar32 = *(undefined4 *)(lVar11 + 0x790);
                          }
                          bVar5 = FUN_140753bf0(lVar10,uVar32,plVar20,plVar16);
                          bVar6 = FUN_1407601a0(lVar13,*plVar22,plVar16);
                          uVar3 = local_50;
                          lVar24 = local_2b8;
                          puVar15 = local_58;
                          if ((bVar21 & bVar5 & bVar6) != 0) {
                            lVar11 = (longlong)(int)local_50;
                            iVar8 = (int)local_50 + 1;
                            local_50 = CONCAT44(local_50._4_4_,iVar8);
                            if (local_50._4_4_ < iVar8) {
                              FUN_140741560(local_f8,uVar3 & 0xffffffff);
                            }
                            puVar15 = local_f8;
                            if (local_58 != (undefined8 *)0x0) {
                              puVar15 = local_58;
                            }
                            puVar15[lVar11] = *plVar22;
                            lVar24 = local_2b8;
                            puVar15 = local_58;
                          }
                        }
                        lVar10 = lVar10 + 0x80;
                        plVar22 = plVar22 + 0x10;
                        lVar11 = local_2a8;
                        puVar26 = puVar15;
                        param_2 = local_288;
                      } while (lVar10 != lVar29);
                    }
                    goto LAB_14075b705;
                  }
                  local_2c8 = local_f8;
                  FUN_140764e80(lVar13,plVar22,1,&local_200);
                  lVar11 = local_2a8;
                  lVar10 = *(longlong *)(local_2a8 + 0x1d8);
                  if (lVar10 == 0) {
                    lVar10 = FUN_140765020(*(undefined8 *)(local_2a8 + 0x118));
                    *(longlong *)(lVar11 + 0x1d8) = lVar10;
                    puVar26 = local_58;
                    if (lVar10 == 0) goto LAB_14075b705;
                  }
                  if (*(longlong *)(lVar10 + 0x5e8) == 0) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = *(int *)(*(longlong *)(lVar10 + 0x5e8) + 0x7540) < 1;
                  }
                  puVar26 = local_58;
                  if ((!bVar2) && (puVar17 = puVar15, 0 < (int)local_50)) {
                    do {
                      iVar8 = (int)puVar17;
                      lVar10 = *(longlong *)(lVar13 + 0x490);
                      puVar17 = local_f8;
                      if (puVar26 != (undefined8 *)0x0) {
                        puVar17 = puVar26;
                      }
                      local_268 = *(longlong *)((longlong)puVar17 + (longlong)puVar15);
                      for (lVar11 = lVar10;
                          lVar11 != (longlong)*(int *)(lVar13 + 0x498) * 0x80 + lVar10;
                          lVar11 = lVar11 + 0x80) {
                        if (*(longlong *)(lVar11 + 8) ==
                            *(longlong *)((longlong)puVar17 + (longlong)puVar15)) {
                          iVar9 = (int)(lVar11 - lVar10 >> 7);
                          if (iVar9 != -1) {
                            lVar10 = (longlong)iVar9 * 0x80 + lVar10;
                            local_190 = 0xffffffffffffffff;
                            FUN_142de77e0(*(longlong *)(lVar10 + 0x10) + 0x250,0,0,&local_190);
                            lVar10 = *(longlong *)(lVar10 + 0x10);
                            cVar4 = *(char *)(lVar10 + 0x30);
                            cVar7 = *(char *)(lVar10 + 0x31);
                            puVar26 = local_58;
                            goto LAB_14075ba1b;
                          }
                          break;
                        }
                      }
                      cVar4 = uStack_248._4_1_;
                      cVar7 = uStack_248._5_1_;
LAB_14075ba1b:
                      if ((cVar4 != '\0') && (cVar7 == '\0')) {
                        iVar9 = ((int)local_50 - iVar8) + -1;
                        if (0 < iVar9) {
                          iVar9 = 1;
                        }
                        if (iVar9 != 0) {
                          puVar17 = local_f8;
                          if (puVar26 != (undefined8 *)0x0) {
                            puVar17 = puVar26;
                          }
                          _guard_xfg_dispatch_icall_nop
                                    (puVar17 + iVar8,puVar17 + ((int)local_50 - iVar9),
                                     (longlong)iVar9 << 3);
                        }
                        local_50 = CONCAT44(local_50._4_4_,(int)local_50 + -1);
                        FUN_1407417a0(local_f8);
                        iVar8 = iVar8 + -1;
                        puVar15 = puVar15 + -1;
                        puVar26 = local_58;
                      }
                      puVar15 = puVar15 + 1;
                      lVar11 = local_2a8;
                      puVar17 = (undefined8 *)(ulonglong)(iVar8 + 1U);
                      param_2 = local_288;
                    } while ((int)(iVar8 + 1U) < (int)local_50);
                  }
LAB_14075b705:
                  puVar15 = local_f8;
                  if (puVar26 != (undefined8 *)0x0) {
                    puVar15 = puVar26;
                  }
                  puVar17 = puVar15 + (int)local_50;
                  for (; puVar15 != puVar17; puVar15 = puVar15 + 1) {
                    cVar4 = FUN_140753d10(lVar11,local_220,*puVar15);
                    if (cVar4 != '\0') {
                      uVar12 = *puVar15;
                      FWeakObjectPtr::operator=(&local_258);
                      uStack_248 = 0;
                      local_240 = 0;
                      local_250 = 0;
                      local_238 = *local_218;
                      local_230 = (undefined4)local_218[1];
                      if ((*(longlong *)(lVar13 + 0x118) != 0) &&
                         (cVar4 = FUN_14075f8b0(lVar13,uVar12,&local_250), cVar4 != '\0')) {
                        FWeakObjectPtr::operator=(&local_258);
                      }
                      uVar1 = *(ushort *)((longlong)param_2 + 0x154);
                      uVar23 = *(uint *)(param_2 + 4);
                      lVar10 = (longlong)(int)uVar23;
                      iVar8 = uVar1 + uVar23;
                      *(int *)(param_2 + 4) = iVar8;
                      if (*(int *)((longlong)param_2 + 0x24) < iVar8) {
                        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2 + 3);
                      }
                      _guard_xfg_dispatch_icall_nop
                                ((void *)(param_2[3] + lVar10),0,(ulonglong)uVar1);
                      lVar11 = param_2[3];
                      *(undefined4 *)(lVar10 + lVar11) = local_258;
                      *(undefined4 *)(lVar10 + 4 + lVar11) = local_254;
                      puVar26 = (undefined8 *)(lVar10 + 8 + lVar11);
                      *puVar26 = local_250;
                      puVar26[1] = uStack_248;
                      *(undefined8 *)(lVar10 + 0x18 + lVar11) = local_240;
                      *(longlong *)(lVar10 + 0x20 + lVar11) = local_238;
                      *(undefined4 *)(lVar10 + 0x28 + lVar11) = local_230;
                      iVar8 = (int)param_2[1];
                      local_298 = ((ulonglong)uVar23 & 0x7fffffff) << 0x20;
                      uVar23 = local_2b0 & 0xfffffffe;
                      *(int *)(param_2 + 1) = iVar8 + 1;
                      local_2b0 = uVar23;
                      if (*(int *)((longlong)param_2 + 0xc) < iVar8 + 1) {
                        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
                      }
                      lVar10 = *param_2;
                      *(longlong *)(lVar10 + (longlong)iVar8 * 0xc) = local_298;
                      *(uint *)(lVar10 + 8 + (longlong)iVar8 * 0xc) = uVar23;
                      lVar11 = local_2a8;
                    }
                    puVar26 = local_58;
                  }
                  lVar24 = local_2b8;
                  lVar29 = local_280;
                  if (puVar26 != (undefined8 *)0x0) {
                    FMemory::Free(puVar26);
                    lVar24 = local_2b8;
                    lVar29 = local_280;
                  }
                }
              }
              else {
                plVar20 = *(longlong **)(lVar24 + 0xd0);
                plVar16 = plVar20 + *(int *)(lVar24 + 0xd8);
                if (plVar20 != plVar16) {
                  do {
                    if (*(longlong *)(local_220 + 0x10) != 0) {
                      lVar11 = *(longlong *)(local_220 + 0x10);
                      do {
                        if (lVar11 == *plVar20) goto LAB_14075b45c;
                        lVar11 = *(longlong *)(lVar11 + 0x30);
                      } while (lVar11 != 0);
                    }
                    plVar20 = plVar20 + 1;
                  } while (plVar20 != plVar16);
                }
              }
            }
LAB_14075b892:
            puVar15 = (undefined8 *)FUN_14073d760(local_188,*local_210);
            plVar22 = local_2a0;
            lVar10 = local_208;
            local_210 = puVar15;
          } while (puVar15 != local_180);
        }
        if (local_1f0 != 0) {
          FMemory::Free();
        }
        if (local_200 != 0) {
          FMemory::Free();
        }
        if (local_108 != (float *)0x0) {
          FMemory::Free();
        }
        if (local_278 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 14075bb10 FUN_14075bb10 body=135 status=ok
// SIG undefined FUN_14075bb10(void)

void FUN_14075bb10(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0xa0);
  if (uVar1 != 0) {
    if (*(char *)(param_2 + 0x130) == '\0') {
      cVar2 = FUN_142be5450(param_2 + 0x3e,uVar1 & 0xff);
      iVar3 = (int)cVar2;
    }
    else {
      iVar3 = uVar1 - 1;
    }
    if (-1 < iVar3) {
      lVar4 = 0;
      uVar5 = (ulonglong)(iVar3 + 1);
      do {
        FUN_140759be0(*(longlong *)(param_1 + 0x98) + lVar4,param_2,param_1);
        lVar4 = lVar4 + 0xf0;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}



// FUNCTION 14075bba0 FUN_14075bba0 body=800 status=ok
// SIG undefined FUN_14075bba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075bba0(longlong param_1,longlong *param_2,char param_3,float param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 local_res8;
  undefined8 local_98;
  float local_90;
  undefined8 local_8c;
  float local_84;
  undefined8 local_80;
  float local_78;
  
  if (*(longlong *)(param_1 + 0x620) != 0) {
    FUN_1407c7b00(*(longlong *)(param_1 + 0x620),param_2,1);
  }
  local_res8 = 0;
  TArray<FName,FDefaultAllocator>::Remove(param_2,&local_res8);
  if (param_3 == '\0') {
    local_res8 = *(undefined8 *)(param_1 + 0x488);
    TArray<FName,FDefaultAllocator>::Remove(param_2,&local_res8);
  }
  if ((0.0 < param_4) && (*(longlong *)(param_1 + 0x488) != 0)) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x488) + 0x168);
    if (lVar8 == 0) {
      local_98 = _DAT_1468b5d90;
      local_90 = DAT_1468b5d98;
    }
    else {
      local_98 = *(undefined8 *)(lVar8 + 0x220);
      local_90 = *(float *)(lVar8 + 0x228);
    }
    fVar3 = local_90;
    uVar2 = local_98;
    lVar8 = (longlong)(int)param_2[1];
    local_80 = local_98;
    local_78 = local_90;
    if ((int)param_2[1] != 0) {
      iVar13 = 0;
      lVar9 = *(longlong *)(*(longlong *)*param_2 + 0x168);
      if (lVar9 == 0) {
        local_98 = _DAT_1468b5d90;
        local_90 = DAT_1468b5d98;
      }
      else {
        local_98 = *(undefined8 *)(lVar9 + 0x220);
        local_90 = *(float *)(lVar9 + 0x228);
      }
      local_80._0_4_ = (float)uVar2;
      fVar4 = (float)local_80;
      local_80._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
      fVar5 = local_80._4_4_;
      local_80._0_4_ = (float)local_98 - (float)local_80;
      local_80._4_4_ = (float)((ulonglong)local_98 >> 0x20) - local_80._4_4_;
      fVar14 = local_90 - fVar3;
      bVar12 = local_80._4_4_ * local_80._4_4_ + (float)local_80 * (float)local_80 + fVar14 * fVar14
               <= param_4 * param_4;
      lVar9 = 0;
      uVar18 = _DAT_1468b5d90;
      fVar14 = DAT_1468b5d98;
      iVar10 = 0;
      local_80 = uVar2;
      do {
        lVar9 = lVar9 + 1;
        iVar11 = iVar10 + 1;
        if (lVar9 < lVar8) {
          plVar7 = (longlong *)(*param_2 + lVar9 * 8);
          do {
            lVar1 = *(longlong *)(*plVar7 + 0x168);
            if (lVar1 == 0) {
              local_8c = uVar18;
              puVar6 = &local_8c;
              local_84 = fVar14;
            }
            else {
              puVar6 = &local_98;
              local_90 = *(float *)(lVar1 + 0x228);
              local_98 = *(undefined8 *)(lVar1 + 0x220);
            }
            local_78 = *(float *)(puVar6 + 1);
            fVar17 = (float)((ulonglong)*puVar6 >> 0x20) - fVar5;
            fVar16 = (float)*puVar6 - fVar4;
            fVar15 = local_78 - fVar3;
            if (bVar12 != fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15 <= param_4 * param_4)
            break;
            iVar11 = iVar11 + 1;
            lVar9 = lVar9 + 1;
            plVar7 = plVar7 + 1;
          } while (lVar9 < lVar8);
        }
        if (bVar12 != false) {
          if (iVar13 != iVar10) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + (longlong)iVar13 * 8),
                       (void *)(*param_2 + (longlong)iVar10 * 8),(longlong)(iVar11 - iVar10) << 3);
            uVar18 = _DAT_1468b5d90;
            fVar14 = DAT_1468b5d98;
          }
          iVar13 = iVar13 + (iVar11 - iVar10);
        }
        bVar12 = (bool)(bVar12 ^ 1);
        iVar10 = iVar11;
      } while (lVar9 < lVar8);
      *(int *)(param_2 + 1) = iVar13;
    }
  }
  return;
}



// FUNCTION 14075bec0 FUN_14075bec0 body=27 status=ok
// SIG undefined FUN_14075bec0(void)

undefined8 FUN_14075bec0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x620) != 0) {
    uVar1 = FUN_1407c9b90(*(longlong *)(param_1 + 0x620),1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14075bee0 FUN_14075bee0 body=157 status=ok
// SIG undefined FUN_14075bee0(void)

undefined8 FUN_14075bee0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    return *(undefined8 *)(param_1 + 0x1e0);
  }
  plVar3 = *(longlong **)(param_1 + 0x1d0);
  if (plVar3 == (longlong *)0x0) {
    lVar1 = *(longlong *)(param_1 + 0x1d8);
    if (lVar1 == 0) {
      lVar1 = FUN_140765020(*(undefined8 *)(param_1 + 0x118));
      plVar3 = *(longlong **)(param_1 + 0x1d0);
      *(longlong *)(param_1 + 0x1d8) = lVar1;
      if (lVar1 != 0) goto LAB_14075bf2f;
    }
    else {
LAB_14075bf2f:
      plVar3 = *(longlong **)(lVar1 + 0x488);
      *(longlong **)(param_1 + 0x1d0) = plVar3;
    }
    if (plVar3 == (longlong *)0x0) goto LAB_14075bf5e;
  }
  uVar2 = FUN_142e27720();
  uVar2 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar2);
  *(undefined8 *)(param_1 + 0x1e0) = uVar2;
LAB_14075bf5e:
  return *(undefined8 *)(param_1 + 0x1e0);
}



// FUNCTION 14075bf80 FUN_14075bf80 body=35 status=ok
// SIG undefined FUN_14075bf80(void)

undefined8 * FUN_14075bf80(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x6f8) + 0x38);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14075bfb0 FUN_14075bfb0 body=243 status=ok
// SIG undefined FUN_14075bfb0(void)

void FUN_14075bfb0(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x490);
  lVar7 = (longlong)*(int *)(param_1 + 0x498) * 0x80 + lVar6;
  lVar3 = lVar6;
  if (lVar6 != lVar7) {
    while (*(longlong *)(lVar3 + 8) != param_2) {
      lVar3 = lVar3 + 0x80;
      if (lVar3 == lVar7) {
        return;
      }
    }
    iVar2 = (int)(lVar3 - lVar6 >> 7);
    if (iVar2 != -1) {
      lVar6 = (longlong)iVar2 * 0x80 + lVar6;
      iVar2 = *(int *)(lVar6 + 0x28);
      *(undefined4 *)(param_3 + 1) = 0;
      if (*(int *)((longlong)param_3 + 0xc) != iVar2) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_3);
      }
      plVar4 = *(longlong **)(lVar6 + 0x20);
      plVar5 = plVar4 + (longlong)*(int *)(lVar6 + 0x28) * 2;
      for (; plVar4 != plVar5; plVar4 = plVar4 + 2) {
        if (*(char *)((longlong)plVar4 + 0xc) == '\x03') {
          iVar2 = (int)param_3[1];
          uVar1 = *(undefined8 *)(*plVar4 + 0x488);
          *(int *)(param_3 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar2 * 8) = uVar1;
        }
      }
    }
  }
  return;
}



// FUNCTION 14075c0b0 FUN_14075c0b0 body=655 status=ok
// SIG undefined FUN_14075c0b0(void)

float FUN_14075c0b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float local_78;
  float local_74;
  float local_70;
  undefined1 local_68 [4];
  float local_64;
  float *local_58;
  undefined8 local_50;
  float *local_48;
  undefined8 local_40;
  
  fVar7 = 0.0;
  if ((*(byte *)(param_1 + 0x1e8) & 1) == 0) {
    fVar7 = 0.0;
  }
  else {
    lVar4 = 0;
    local_48 = (float *)0x0;
    local_40 = 0;
    if (*(char *)(param_1 + 0x1b0) == '\0') {
      local_58 = (float *)0x0;
      local_50 = 0;
      lVar3 = lVar4;
      if (*(longlong *)(param_1 + 0x198) != 0) {
        lVar2 = UEnvQueryContext::GetPrivateStaticClass();
        for (lVar1 = *(longlong *)(param_1 + 0x198);
            (lVar3 = lVar4, lVar1 != 0 && (lVar3 = *(longlong *)(param_1 + 0x198), lVar1 != lVar2));
            lVar1 = *(longlong *)(lVar1 + 0x30)) {
        }
      }
      FUN_142bedad0(param_2,lVar3,&local_48);
      lVar3 = lVar4;
      if (*(longlong *)(param_1 + 0x1a0) != 0) {
        lVar2 = UEnvQueryContext::GetPrivateStaticClass();
        for (lVar1 = *(longlong *)(param_1 + 0x1a0);
            (lVar3 = lVar4, lVar1 != 0 && (lVar3 = *(longlong *)(param_1 + 0x1a0), lVar1 != lVar2));
            lVar1 = *(longlong *)(lVar1 + 0x30)) {
        }
      }
      FUN_142bedad0(param_2,lVar3,&local_58);
      if ((0 < (int)local_40) && (0 < (int)local_50)) {
        local_78 = *local_58 - *local_48;
        local_74 = local_58[1] - local_48[1];
        local_70 = local_58[2] - local_48[2];
        fVar7 = local_78 * local_78 + local_74 * local_74 + local_70 * local_70;
        if (fVar7 != 1.0) {
          if (1e-08 <= fVar7) {
            auVar6 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
            fVar5 = auVar6._0_4_;
            fVar5 = fVar5 + fVar5 * (0.5 - fVar7 * 0.5 * fVar5 * fVar5);
            fVar5 = fVar5 + fVar5 * (0.5 - fVar7 * 0.5 * fVar5 * fVar5);
            local_78 = local_78 * fVar5;
            local_74 = local_74 * fVar5;
            local_70 = local_70 * fVar5;
          }
          else {
            local_78 = DAT_1468b5d90;
            local_70 = DAT_1468b5d98;
            local_74 = DAT_1468b5d94;
          }
        }
        FVector::Rotation(&local_78,local_68);
        fVar7 = local_64;
      }
      if (local_58 != (float *)0x0) {
        FMemory::Free();
      }
    }
    else {
      lVar3 = lVar4;
      if (*(longlong *)(param_1 + 0x1a8) != 0) {
        lVar2 = UEnvQueryContext::GetPrivateStaticClass();
        for (lVar1 = *(longlong *)(param_1 + 0x1a8);
            (lVar3 = lVar4, lVar1 != 0 && (lVar3 = *(longlong *)(param_1 + 0x1a8), lVar1 != lVar2));
            lVar1 = *(longlong *)(lVar1 + 0x30)) {
        }
      }
      FUN_142bed8a0(param_2,lVar3,&local_48);
      if (0 < (int)local_40) {
        fVar7 = local_48[1];
      }
    }
    if (local_48 != (float *)0x0) {
      FMemory::Free();
    }
  }
  return fVar7;
}



// FUNCTION 14075c340 FUN_14075c340 body=687 status=ok
// SIG undefined FUN_14075c340(void)

undefined8 * FUN_14075c340(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_78;
  float fStack_74;
  float local_70;
  float *local_68;
  undefined8 local_60;
  float *local_58;
  undefined8 local_50;
  
  lVar4 = 0;
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
LAB_14075c56d:
    *param_2 = 0x3f800000;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
    local_68 = (float *)0x0;
    local_60 = 0;
    if (*(char *)(param_1 + 0xa0) == '\0') {
      local_58 = (float *)0x0;
      local_50 = 0;
      lVar3 = lVar4;
      if (*(longlong *)(param_1 + 0x88) != 0) {
        lVar2 = UEnvQueryContext::GetPrivateStaticClass();
        for (lVar1 = *(longlong *)(param_1 + 0x88);
            (lVar3 = lVar4, lVar1 != 0 && (lVar3 = *(longlong *)(param_1 + 0x88), lVar1 != lVar2));
            lVar1 = *(longlong *)(lVar1 + 0x30)) {
        }
      }
      FUN_142bedad0(param_3,lVar3,&local_68);
      lVar3 = lVar4;
      if (*(longlong *)(param_1 + 0x90) != 0) {
        lVar2 = UEnvQueryContext::GetPrivateStaticClass();
        for (lVar1 = *(longlong *)(param_1 + 0x90);
            (lVar3 = lVar4, lVar1 != 0 && (lVar3 = *(longlong *)(param_1 + 0x90), lVar1 != lVar2));
            lVar1 = *(longlong *)(lVar1 + 0x30)) {
        }
      }
      FUN_142bedad0(param_3,lVar3,&local_58);
      if (((int)local_60 < 1) || ((int)local_50 < 1)) {
        if (local_58 != (float *)0x0) {
          FMemory::Free();
        }
LAB_14075c55f:
        if (local_68 != (float *)0x0) {
          FMemory::Free();
        }
        goto LAB_14075c56d;
      }
      local_78 = *local_58 - *local_68;
      fStack_74 = local_58[1] - local_68[1];
      local_70 = local_58[2] - local_68[2];
      fVar5 = fStack_74 * fStack_74 + local_78 * local_78 + local_70 * local_70;
      if (fVar5 != 1.0) {
        if (1e-08 <= fVar5) {
          auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
          fVar6 = auVar7._0_4_;
          fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
          fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
          local_78 = local_78 * fVar6;
          fStack_74 = fStack_74 * fVar6;
          local_70 = local_70 * fVar6;
        }
        else {
          local_78 = DAT_1468b5d90;
          local_70 = DAT_1468b5d98;
          fStack_74 = DAT_1468b5d94;
        }
      }
      *param_2 = CONCAT44(fStack_74,local_78);
      *(float *)(param_2 + 1) = local_70;
      FMemory::Free();
    }
    else {
      lVar3 = lVar4;
      if (*(longlong *)(param_1 + 0x98) != 0) {
        lVar2 = UEnvQueryContext::GetPrivateStaticClass();
        for (lVar1 = *(longlong *)(param_1 + 0x98);
            (lVar3 = lVar4, lVar1 != 0 && (lVar3 = *(longlong *)(param_1 + 0x98), lVar1 != lVar2));
            lVar1 = *(longlong *)(lVar1 + 0x30)) {
        }
      }
      FUN_142bed8a0(param_3,lVar3,&local_68);
      if ((int)local_60 < 1) goto LAB_14075c55f;
      FRotator::Vector(local_68,param_2);
    }
    if (local_68 != (float *)0x0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 14075c620 FUN_14075c620 body=33 status=ok
// SIG undefined FUN_14075c620(void)

longlong FUN_14075c620(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x568) != 0) && (lVar1 = FUN_142bbbf70(), lVar1 != 0)) {
    return lVar1;
  }
  return 0;
}



// FUNCTION 14075c650 FUN_14075c650 body=26 status=ok
// SIG undefined FUN_14075c650(void)

undefined8 * FUN_14075c650(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407a2860();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 14075c670 FUN_14075c670 body=104 status=ok
// SIG undefined FUN_14075c670(void)

undefined1 FUN_14075c670(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    uVar1 = UProgressBar::GetPrivateStaticClass();
    lVar3 = UObjectBaseUtility::GetTypedOuter(param_1,uVar1);
    if (lVar3 != 0) {
      uVar2 = FUN_14075fdf0(*(undefined8 *)(lVar3 + 0x180),param_2,param_3,param_4);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14075c6e0 FUN_14075c6e0 body=264 status=ok
// SIG undefined FUN_14075c6e0(void)

ulonglong FUN_14075c6e0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  if (uVar2 != 0) {
    cVar1 = *(char *)(uVar2 + 0x6f2);
    fVar3 = *(float *)(uVar2 + 0x210);
    fVar4 = *(float *)(uVar2 + 0x218);
    fVar5 = *(float *)(uVar2 + 0x21c);
    uVar6 = *(undefined4 *)(uVar2 + 0x224);
    uVar7 = *(undefined4 *)(uVar2 + 0x228);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        *(undefined4 *)param_2 = *(undefined4 *)(uVar2 + 0x220);
        *(undefined4 *)((longlong)param_2 + 4) = uVar6;
        *(undefined4 *)(param_2 + 1) = uVar7;
        return CONCAT71((uint7)(uint3)((uint)uVar7 >> 8),1);
      }
      if (cVar1 == '\x02') {
        fVar9 = -*(float *)(uVar2 + 0x214);
        fVar8 = fVar4 + fVar4;
        fVar9 = fVar9 + fVar9;
        *param_2 = CONCAT44(fVar8 * fVar5 - fVar9 * fVar3,
                            (fVar9 * *(float *)(uVar2 + 0x214) - fVar8 * fVar4) + 1.0);
        *(float *)(param_2 + 1) = fVar9 * fVar5 + fVar8 * fVar3;
        return 1;
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 14075c7f0 FUN_14075c7f0 body=8 status=ok
// SIG undefined FUN_14075c7f0(void)

longlong FUN_14075c7f0(longlong param_1)

{
  return param_1 + 0x650;
}



// FUNCTION 14075c800 FUN_14075c800 body=21 status=ok
// SIG undefined FUN_14075c800(void)

undefined8 FUN_14075c800(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x118);
  }
  return 0;
}



// FUNCTION 14075c820 FUN_14075c820 body=3370 status=ok
// SIG undefined FUN_14075c820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14075c820(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_5b8 [32];
  longlong local_598 [18];
  undefined1 local_508 [4];
  undefined1 local_504 [4];
  undefined1 local_500 [4];
  undefined1 local_4fc [4];
  undefined1 local_4f8 [4];
  undefined1 local_4f4 [4];
  undefined1 local_4f0 [4];
  undefined1 local_4ec [4];
  undefined1 local_4e8 [8];
  longlong *local_4e0;
  undefined4 *local_4d8;
  longlong *local_4d0;
  undefined4 *local_4c8;
  longlong *local_4c0;
  undefined4 *local_4b8;
  longlong local_4b0 [2];
  longlong *local_4a0;
  undefined4 *local_498;
  longlong local_490 [2];
  longlong *local_480;
  undefined4 *local_478;
  longlong *local_470;
  undefined4 *local_468;
  longlong *local_460;
  undefined4 *local_458;
  longlong *local_450;
  undefined4 *local_448;
  longlong *local_440;
  undefined4 *local_438;
  undefined1 local_430 [8];
  longlong *local_428;
  longlong local_418 [2];
  longlong local_408 [2];
  undefined1 local_3f8 [8];
  longlong *local_3f0;
  undefined1 local_3e0 [8];
  longlong *local_3d8;
  undefined1 local_3c8 [8];
  longlong *local_3c0;
  undefined1 local_3b0 [8];
  longlong *local_3a8;
  undefined1 local_398 [8];
  longlong *local_390;
  undefined1 local_380 [8];
  longlong *local_378;
  undefined1 local_368 [8];
  longlong *local_360;
  undefined1 local_350 [8];
  longlong *local_348;
  undefined1 local_338 [8];
  longlong *local_330;
  undefined1 local_320 [8];
  longlong *local_318;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  longlong local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined4 local_254;
  longlong local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  longlong local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8 [4];
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  char local_1c0;
  undefined4 local_1b8 [4];
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  char local_190;
  undefined4 local_188 [4];
  undefined1 local_178 [8];
  longlong *local_170;
  char local_160;
  undefined4 local_158 [4];
  undefined1 local_148 [8];
  longlong *local_140;
  char local_130;
  undefined4 local_128 [2];
  undefined4 local_120;
  longlong *local_110;
  char local_100;
  undefined4 local_f8 [4];
  undefined1 local_e8 [8];
  longlong *local_e0;
  char local_d0;
  undefined4 local_c8 [4];
  undefined1 local_b8 [8];
  longlong *local_b0;
  char local_a0;
  undefined4 local_98 [4];
  undefined1 local_88 [8];
  longlong *local_80;
  char local_70;
  undefined4 local_68 [4];
  undefined1 local_58 [24];
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_5b8;
  local_2d8 = 0;
  local_2d0 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = 0xffffffff;
  local_2a4 = 0;
  local_298 = 0;
  local_290 = 0;
  uVar6 = FAIDataProviderValue::ToString(param_1 + 0x98,local_418);
  uVar6 = FText::FromString(local_3f8,uVar6);
  local_1e8[0] = 4;
  FText::FText(local_1d8,uVar6);
  local_1c0 = '\x01';
  local_598[2] = 0;
  local_598[3] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_598 + 2,0);
  FGenericPlatformString::Memcpy(local_598[2],L"InnerRadius",0x18);
  local_4e0 = local_598 + 2;
  local_4d8 = local_1e8;
  FUN_1407484b0(&local_2d8,local_4f0,&local_4e0,0);
  if (local_598[2] != 0) {
    FMemory::Free();
  }
  if (local_1c0 != '\0') {
    local_1c0 = '\0';
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1d0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar2 = (int *)((longlong)local_1d0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
  }
  if (local_3f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_3f0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_3f0)(local_3f0);
      LOCK();
      piVar2 = (int *)((longlong)local_3f0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_3f0 + 8))(local_3f0,1);
      }
    }
  }
  if (local_418[0] != 0) {
    FMemory::Free();
  }
  uVar6 = FAIDataProviderValue::ToString(param_1 + 200,local_408);
  uVar6 = FText::FromString(local_3e0,uVar6);
  local_1b8[0] = 4;
  FText::FText(local_1a8,uVar6);
  local_190 = '\x01';
  local_598[4] = 0;
  local_598[5] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_598 + 4,0);
  FGenericPlatformString::Memcpy(local_598[4],L"OuterRadius",0x18);
  local_4d0 = local_598 + 4;
  local_4c8 = local_1b8;
  FUN_1407484b0(&local_2d8,local_508,&local_4d0,0);
  if (local_598[4] != 0) {
    FMemory::Free();
  }
  if (local_190 != '\0') {
    local_190 = '\0';
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1a0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar2 = (int *)((longlong)local_1a0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1a0 + 8))(local_1a0,1);
        }
      }
    }
  }
  if (local_3d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_3d8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_3d8)(local_3d8);
      LOCK();
      piVar2 = (int *)((longlong)local_3d8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_3d8 + 8))(local_3d8,1);
      }
    }
  }
  if (local_408[0] != 0) {
    FMemory::Free();
  }
  FString::PrintfImpl(local_4b0,L"%d//%d",*(undefined4 *)(param_1 + 0x108),
                      *(undefined4 *)(param_1 + 0x10c));
  uVar6 = FText::FromString(local_3c8,local_4b0);
  local_188[0] = 4;
  FText::FText(local_178,uVar6);
  local_160 = '\x01';
  local_598[6] = 0;
  local_598[7] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_598 + 6,0);
  FGenericPlatformString::Memcpy(local_598[6],L"NumRings",0x12);
  local_4c0 = local_598 + 6;
  local_4b8 = local_188;
  FUN_1407484b0(&local_2d8,local_504,&local_4c0,0);
  if (local_598[6] != 0) {
    FMemory::Free();
  }
  if (local_160 != '\0') {
    local_160 = '\0';
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_170 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar2 = (int *)((longlong)local_170 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
  }
  if (local_3c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_3c0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_3c0)(local_3c0);
      LOCK();
      piVar2 = (int *)((longlong)local_3c0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_3c0 + 8))(local_3c0,1);
      }
    }
  }
  if (local_4b0[0] != 0) {
    FMemory::Free();
  }
  FString::PrintfImpl(local_490,L"%d//%d",*(undefined4 *)(param_1 + 0xf8),
                      *(undefined4 *)(param_1 + 0xfc));
  uVar6 = FText::FromString(local_3b0,local_490);
  local_158[0] = 4;
  FText::FText(local_148,uVar6);
  local_130 = '\x01';
  local_598[8] = 0;
  local_598[9] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_598 + 8,0);
  FGenericPlatformString::Memcpy(local_598[8],L"NumPerRing",0x16);
  local_4a0 = local_598 + 8;
  local_498 = local_158;
  FUN_1407484b0(&local_2d8,local_500,&local_4a0,0);
  if (local_598[8] != 0) {
    FMemory::Free();
  }
  if (local_130 != '\0') {
    local_130 = '\0';
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_140 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar2 = (int *)((longlong)local_140 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_140 + 8))(local_140,1);
        }
      }
    }
  }
  if (local_3a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_3a8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_3a8)(local_3a8);
      LOCK();
      piVar2 = (int *)((longlong)local_3a8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_3a8 + 8))(local_3a8,1);
      }
    }
  }
  if (local_490[0] != 0) {
    FMemory::Free();
  }
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_398,
                     L"radius: {InnerRadius} to {OuterRadius}\nrings: {NumRings}, points per ring: {NumPerRing}"
                     ,L"EnvQueryGenerator",L"DynamicDescription");
  uVar6 = FTextFormat::FTextFormat(local_308,uVar6);
  FText::Format(param_2,uVar6,&local_2d8);
  if (local_390 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_390 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_390)(local_390);
      LOCK();
      piVar2 = (int *)((longlong)local_390 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_390 + 8))(local_390,1);
      }
    }
  }
  if ((*(byte *)(param_1 + 0x1e8) & 1) != 0) {
    local_288 = 0;
    local_280 = 0;
    local_268 = 0;
    local_260 = 0;
    local_258 = 0xffffffff;
    local_254 = 0;
    local_248 = 0;
    local_240 = 0;
    local_98[0] = 4;
    FText::FText(local_88,param_2);
    local_70 = '\x01';
    local_598[10] = 0;
    local_598[0xb] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_598 + 10,0);
    FGenericPlatformString::Memcpy(local_598[10],L"Description",0x18);
    local_480 = local_598 + 10;
    local_478 = local_98;
    FUN_1407484b0(&local_288,local_4fc,&local_480,0);
    if (local_598[10] != 0) {
      FMemory::Free();
    }
    if (local_70 != '\0') {
      local_70 = '\0';
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)local_80 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
    }
    local_120 = *(undefined4 *)(param_1 + 0x1e0);
    local_128[0] = 2;
    local_100 = '\0';
    local_598[0] = 0;
    local_598[1] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_598,0);
    FGenericPlatformString::Memcpy(local_598[0],L"AngleValue",0x16);
    local_470 = local_598;
    local_468 = local_128;
    FUN_1407484b0(&local_288,local_4f8,&local_470,0);
    if (local_598[0] != 0) {
      FMemory::Free();
    }
    if (local_100 != '\0') {
      local_100 = '\0';
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_110 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar2 = (int *)((longlong)local_110 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
          }
        }
      }
    }
    uVar6 = FEnvDirection::ToText(param_1 + 0x198,local_380);
    local_f8[0] = 4;
    FText::FText(local_e8,uVar6);
    local_d0 = '\x01';
    local_598[0xc] = 0;
    local_598[0xd] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_598 + 0xc,0);
    FGenericPlatformString::Memcpy(local_598[0xc],L"ArcDirection",0x1a);
    local_460 = local_598 + 0xc;
    local_458 = local_f8;
    FUN_1407484b0(&local_288,local_4f4,&local_460,0);
    if (local_598[0xc] != 0) {
      FMemory::Free();
    }
    if (local_d0 != '\0') {
      local_d0 = '\0';
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_e0 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar2 = (int *)((longlong)local_e0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_e0 + 8))(local_e0,1);
          }
        }
      }
    }
    if (local_378 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_378 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_378)(local_378);
        LOCK();
        piVar2 = (int *)((longlong)local_378 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_378 + 8))(local_378,1);
        }
      }
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_350,
                       L"{Description}\nLimit to {AngleValue} angle both sides on {ArcDirection}",
                       L"EnvQueryGenerator",L"DescriptionWithArc");
    uVar6 = FTextFormat::FTextFormat(local_2f8,uVar6);
    uVar6 = FText::Format(local_368,uVar6,&local_288);
    FText::operator=(param_2,uVar6);
    if (local_360 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_360 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_360)(local_360);
        LOCK();
        piVar2 = (int *)((longlong)local_360 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_360 + 8))(local_360,1);
        }
      }
    }
    if (local_348 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_348 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_348)(local_348);
        LOCK();
        piVar2 = (int *)((longlong)local_348 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_348 + 8))(local_348,1);
        }
      }
    }
    local_240 = 0;
    if (local_248 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_288);
  }
  FUN_142bf4db0(param_1 + 0x60,local_430,0);
  cVar5 = FText::IsEmpty(local_430);
  if (cVar5 == '\0') {
    local_238 = 0;
    local_230 = 0;
    local_218 = 0;
    local_210 = 0;
    local_208 = 0xffffffff;
    local_204 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_c8[0] = 4;
    FText::FText(local_b8,param_2);
    local_a0 = '\x01';
    local_598[0xe] = 0;
    local_598[0xf] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_598 + 0xe,0);
    FGenericPlatformString::Memcpy(local_598[0xe],L"Description",0x18);
    local_450 = local_598 + 0xe;
    local_448 = local_c8;
    FUN_1407484b0(&local_238,local_4e8,&local_450,0);
    if (local_598[0xe] != 0) {
      FMemory::Free();
    }
    if (local_a0 != '\0') {
      local_a0 = '\0';
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b0 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar2 = (int *)((longlong)local_b0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
    }
    local_68[0] = 4;
    FText::FText(local_58,local_430);
    local_40 = 1;
    local_598[0x10] = 0;
    local_598[0x11] = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_598 + 0x10,0);
    FGenericPlatformString::Memcpy(local_598[0x10],L"ProjectionDescription",0x2c);
    local_440 = local_598 + 0x10;
    local_438 = local_68;
    FUN_1407484b0(&local_238,local_4ec,&local_440,0);
    if (local_598[0x10] != 0) {
      FMemory::Free();
    }
    TOptional<FExpressionError>::Reset(local_58);
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_320,L"{Description}, {ProjectionDescription}",L"EnvQueryGenerator",
                       L"OnCircle_DescriptionWithProjection");
    uVar6 = FTextFormat::FTextFormat(local_2e8,uVar6);
    uVar6 = FText::Format(local_338,uVar6,&local_238);
    FText::operator=(param_2,uVar6);
    if (local_330 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_330 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_330)(local_330);
        LOCK();
        piVar2 = (int *)((longlong)local_330 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_330 + 8))(local_330,1);
        }
      }
    }
    if (local_318 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_318 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_318)(local_318);
        LOCK();
        piVar2 = (int *)((longlong)local_318 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_318 + 8))(local_318,1);
        }
      }
    }
    local_1f0 = 0;
    if (local_1f8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_238);
  }
  if (local_428 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_428 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_428)(local_428);
      LOCK();
      piVar2 = (int *)((longlong)local_428 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_428 + 8))(local_428,1);
      }
    }
  }
  local_290 = 0;
  if (local_298 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_2d8);
  return param_2;
}



// FUNCTION 14075d550 FUN_14075d550 body=97 status=ok
// SIG undefined FUN_14075d550(void)

undefined8 FUN_14075d550(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x48;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy
            (local_18[0],L"Finds all nearby look at points, optionally with a specified PerchType.",
             0x90);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14075d5c0 FUN_14075d5c0 body=97 status=ok
// SIG undefined FUN_14075d5c0(void)

undefined8 FUN_14075d5c0(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x41;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy
            (local_18[0],L"Finds all nearby perches, optionally with a specified PerchType.",0x82);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14075d630 FUN_14075d630 body=97 status=ok
// SIG undefined FUN_14075d630(void)

undefined8 FUN_14075d630(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x4d;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy
            (local_18[0],
             L"Finds all nearby smart objects, optionally with specified Action categories.",0x9a);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14075d6a0 FUN_14075d6a0 body=442 status=ok
// SIG undefined FUN_14075d6a0(void)

undefined8 FUN_14075d6a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined8 local_res8;
  undefined2 *local_88;
  undefined8 local_80;
  longlong local_78 [4];
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  
  local_78[1] = 0xf;
  local_78[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_78[0],0xf,"can use ticket",0xf,0x3f);
  uVar5 = FUN_142bdb4f0(param_1,local_48,local_78);
  puVar6 = (undefined8 *)FText::ToString(uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*puVar6;
  }
  puVar6 = (undefined8 *)
           (*(code *)**(undefined8 **)(param_1 + 0x1e0))((undefined8 *)(param_1 + 0x1e0),local_58);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*puVar6;
  }
  if (*(longlong *)(param_1 + 0x1d8) == 0) {
    local_88 = (undefined2 *)0x0;
    local_80 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    FGenericPlatformString::Memcpy(local_88,&DAT_143f3edc8,10);
  }
  else {
    local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x18);
    FName::ToString(&local_res8,&local_88);
  }
  puVar7 = &DAT_143f3eda8;
  if ((int)local_80 != 0) {
    puVar7 = local_88;
  }
  FString::PrintfImpl(local_78 + 2,L"%s: %s\n%s",puVar7,puVar8,puVar9);
  FText::FromString(param_2,local_78 + 2);
  if (local_78[2] != 0) {
    FMemory::Free();
  }
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
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
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14075d860 FUN_14075d860 body=723 status=ok
// SIG undefined FUN_14075d860(void)

undefined8 FUN_14075d860(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  wchar_t *local_88;
  int local_80;
  int local_7c;
  longlong local_78 [2];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  local_88 = (wchar_t *)0x0;
  local_80 = 0;
  local_7c = 0;
  if (*(char *)(param_1 + 0x2d8) != '\0') {
    local_80 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    builtin_wcsncpy(local_88,L"Heading",8);
  }
  iVar3 = local_80;
  if (*(char *)(param_1 + 0x2d9) != '\0') {
    iVar6 = local_80;
    if (1 < local_80) {
      lVar7 = (longlong)local_80;
      local_80 = (6 - (uint)(local_80 != 0)) + local_80;
      iVar6 = local_80;
      if (local_7c < local_80) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar3);
        iVar6 = local_80;
      }
      builtin_wcsncpy(local_88 + (lVar7 - (ulonglong)(iVar3 != 0)),L" and ",6);
    }
    local_80 = (6 - (uint)(iVar6 != 0)) + iVar6;
    if (local_7c < local_80) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar6);
    }
    builtin_wcsncpy(local_88 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)),L"Pitch",6);
  }
  iVar3 = local_80;
  uVar4 = FUN_142bdcff0(param_1,local_38);
  puVar5 = (undefined8 *)FText::ToString(uVar4);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*puVar5;
  }
  uVar4 = FEnvDirection::ToText(param_1 + 600,local_50);
  puVar5 = (undefined8 *)FText::ToString(uVar4);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar5;
  }
  uVar4 = FEnvDirection::ToText(param_1 + 0x1d8,local_68);
  puVar5 = (undefined8 *)FText::ToString(uVar4);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*puVar5;
  }
  pwVar8 = L"";
  if (iVar3 != 0) {
    pwVar8 = local_88;
  }
  FString::PrintfImpl(local_78,L"%s: %s and %s\n%s",pwVar8,puVar9,puVar10,puVar11);
  FText::FromString(param_2,local_78);
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  if (local_88 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14075db40 FUN_14075db40 body=310 status=ok
// SIG undefined FUN_14075db40(void)

undefined8 FUN_14075db40(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  bool bVar6;
  longlong local_38 [2];
  longlong local_28 [2];
  longlong local_18 [2];
  
  lVar2 = param_1 + 0x1d8;
  if (*(longlong *)(param_1 + 0x70) == 0) {
    if (*(char *)(param_1 + 0x88) == '\0') {
      puVar1 = (undefined8 *)FAIDataProviderValue::ToString(lVar2,local_18);
      if (*(int *)(puVar1 + 1) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*puVar1;
      }
      pwVar3 = L"Away from boundary: %s";
    }
    else {
      puVar1 = (undefined8 *)FAIDataProviderValue::ToString(lVar2,local_18);
      if (*(int *)(puVar1 + 1) == 0) {
        puVar5 = &DAT_143f3eda8;
        pwVar3 = L"Near boundary: %s";
      }
      else {
        puVar5 = (undefined2 *)*puVar1;
        pwVar3 = L"Near boundary: %s";
      }
    }
    FString::PrintfImpl(local_38,pwVar3,puVar5);
    FText::FromString(param_2,local_38);
  }
  else {
    puVar1 = (undefined8 *)FAIDataProviderValue::ToString(lVar2,local_18);
    puVar5 = &DAT_143f3eda8;
    if (*(int *)(puVar1 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar1;
    }
    puVar1 = (undefined8 *)FAIDataProviderValue::ToString(param_1 + 0x60,local_28);
    if (*(int *)(puVar1 + 1) != 0) {
      puVar5 = (undefined2 *)*puVar1;
    }
    FString::PrintfImpl(local_38,L"%s: %s",puVar5,puVar4);
    FText::FromString(param_2,local_38);
    bVar6 = local_38[0] != 0;
    local_38[0] = local_28[0];
    if (bVar6) {
      FMemory::Free();
      local_38[0] = local_28[0];
    }
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14075dc80 FUN_14075dc80 body=777 status=ok
// SIG undefined FUN_14075dc80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14075dc80(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_1a8 [32];
  longlong local_188 [4];
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  longlong *local_160;
  undefined4 *local_158;
  longlong *local_150;
  undefined4 *local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_98 [4];
  undefined1 local_88 [8];
  longlong *local_80;
  char local_70;
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uVar5 = FUN_142be4f60(param_1,local_140);
  local_98[0] = 4;
  FText::FText(local_88,uVar5);
  local_70 = '\x01';
  local_188[0] = 0;
  local_188[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_188,0);
  FGenericPlatformString::Memcpy(local_188[0],L"DescriptionTitle",0x22);
  local_160 = local_188;
  local_158 = local_98;
  FUN_1407484b0(&local_e8,local_168,&local_160,0);
  if (local_188[0] != 0) {
    FMemory::Free();
  }
  if (local_70 != '\0') {
    local_70 = '\0';
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
  }
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_138 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_138)(local_138);
      LOCK();
      piVar2 = (int *)((longlong)local_138 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_138 + 8))(local_138,1);
      }
    }
  }
  uVar5 = UEnvQueryTypes::DescribeContext(local_128,*(undefined8 *)(param_1 + 0x1f0));
  local_68[0] = 4;
  FText::FText(local_58,uVar5);
  local_40 = '\x01';
  local_188[2] = 0;
  local_188[3] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_188 + 2,0);
  FGenericPlatformString::Memcpy(local_188[2],L"DescribeContext",0x20);
  local_150 = local_188 + 2;
  local_148 = local_68;
  FUN_1407484b0(&local_e8,local_164,&local_150,0);
  if (local_188[2] != 0) {
    FMemory::Free();
  }
  if (local_40 != '\0') {
    local_40 = '\0';
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_120 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar2 = (int *)((longlong)local_120 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_110,L"{DescriptionTitle}: generate items around {DescribeContext}",
                     L"EnvQueryGenerator",L"DescriptionGenerateDynamicAroundContext");
  uVar5 = FTextFormat::FTextFormat(local_f8,uVar5);
  FText::Format(param_2,uVar5,&local_e8);
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_108 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar2 = (int *)((longlong)local_108 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
      }
    }
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_e8);
  return param_2;
}



// FUNCTION 14075df90 FUN_14075df90 body=97 status=ok
// SIG undefined FUN_14075df90(void)

undefined8 FUN_14075df90(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x14;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Find Look At Points",0x28);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14075e000 FUN_14075e000 body=97 status=ok
// SIG undefined FUN_14075e000(void)

undefined8 FUN_14075e000(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0xd;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Find Perches",0x1a);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14075e070 GetDescriptionTitle body=97 status=ok
// SIG undefined GetDescriptionTitle(void)

undefined8
UEnvQueryGenerator_SinglePoint::GetDescriptionTitle(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x12;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Find Smart Object",0x24);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14075e0e0 FUN_14075e0e0 body=97 status=ok
// SIG undefined FUN_14075e0e0(void)

undefined8 FUN_14075e0e0(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 9;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Boundary",0x12);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14075e150 FUN_14075e150 body=195 status=ok
// SIG undefined FUN_14075e150(void)

undefined8 FUN_14075e150(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = UEnvQueryTypes::DescribeContext(local_28,*(undefined8 *)(param_1 + 0x1d8));
  puVar6 = (undefined8 *)FText::ToString(uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar6;
  }
  FString::PrintfImpl(local_38,L"Direct Path To: %s",puVar7);
  FText::FromString(param_2,local_38);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 14075e220 GetDescriptionTitle body=97 status=ok
// SIG undefined GetDescriptionTitle(void)

undefined8 UEnvQueryTest_GroundMaterial::GetDescriptionTitle(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x10;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Gbx Path Exists",0x20);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14075e290 FUN_14075e290 body=69 status=ok
// SIG undefined FUN_14075e290(void)

void FUN_14075e290(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = -1;
  if (*(char *)(param_1 + 0x6c) != '\0') {
    iVar2 = 1;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0xc0);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x60);
  }
  FWeakObjectPtr::Get(lVar1 + ((longlong)(iVar2 + *(int *)(param_1 + 0x68)) * 3 + 1) * 4);
  return;
}



// FUNCTION 14075e2e0 FUN_14075e2e0 body=118 status=ok
// SIG undefined FUN_14075e2e0(void)

void FUN_14075e2e0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_2 != (undefined8 *)(param_1 + 0xe0)) {
    _Src = *(void **)(param_1 + 0xe0);
    iVar1 = *(int *)(param_1 + 0xe8);
    *(int *)(param_2 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return;
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_2,iVar1);
    _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 * 0x30);
  }
  return;
}



// FUNCTION 14075e360 FUN_14075e360 body=333 status=ok
// SIG undefined FUN_14075e360(void)

ulonglong FUN_14075e360(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4
                       )

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 local_38;
  undefined4 local_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  uVar4 = FWeakObjectPtr::IsValid();
  if (((char)uVar4 != '\0') && (uVar4 = 0, *(longlong *)(param_1 + 8) != 0)) {
    plVar5 = (longlong *)FUN_140771750(param_1);
    uVar4 = 0;
    if (plVar5 != (longlong *)0x0) {
      uVar6 = ALoreItem::GetPrivateStaticClass();
      lVar7 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
      uVar4 = 0;
      if (lVar7 != 0) {
        local_30 = *(undefined4 *)(param_1 + 0x28);
        local_38 = *(undefined8 *)(param_1 + 0x20);
        lVar7 = FUN_140758360(lVar7,*(undefined8 *)(param_1 + 8),&local_38,1);
        uVar4 = 0;
        if (lVar7 != 0) {
          uVar1 = *(undefined4 *)(lVar7 + 0x224);
          local_30 = *(undefined4 *)(lVar7 + 0x228);
          *param_2 = *(undefined4 *)(lVar7 + 0x220);
          param_2[1] = uVar1;
          param_2[2] = local_30;
          local_28 = *(float *)(lVar7 + 0x210);
          fStack_24 = *(float *)(lVar7 + 0x214);
          fStack_20 = *(float *)(lVar7 + 0x218);
          fStack_1c = *(float *)(lVar7 + 0x21c);
          auVar2._4_4_ = -(uint)(*(float *)(lVar7 + 0x254) != fStack_24);
          auVar2._0_4_ = -(uint)(*(float *)(lVar7 + 0x250) != local_28);
          auVar2._8_4_ = -(uint)(*(float *)(lVar7 + 600) != fStack_20);
          auVar2._12_4_ = -(uint)(*(float *)(lVar7 + 0x25c) != fStack_1c);
          iVar3 = movmskps(local_30,auVar2);
          if (iVar3 != 0) {
            *(float *)(lVar7 + 0x250) = local_28;
            *(float *)(lVar7 + 0x254) = fStack_24;
            *(float *)(lVar7 + 600) = fStack_20;
            *(float *)(lVar7 + 0x25c) = fStack_1c;
            puVar8 = (undefined8 *)FQuat::Rotator(&local_28,&local_38);
            *(undefined8 *)(lVar7 + 0x260) = *puVar8;
            *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar8 + 1);
          }
          uVar1 = *(undefined4 *)(lVar7 + 0x268);
          *param_3 = *(undefined8 *)(lVar7 + 0x260);
          *(undefined4 *)(param_3 + 1) = uVar1;
          uVar1 = *(undefined4 *)(lVar7 + 0x728);
          *param_4 = uVar1;
          return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
        }
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14075e4b0 FUN_14075e4b0 body=631 status=ok
// SIG undefined FUN_14075e4b0(void)

undefined8 * FUN_14075e4b0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  void *_Dst;
  void *pvVar1;
  short *psVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  void *_Src;
  uint uVar10;
  longlong local_res20;
  longlong local_48;
  undefined8 local_40;
  void *local_38;
  ulonglong local_30;
  
  _Src = (void *)0x0;
  if (param_2 == 0) {
    *param_1 = 0;
    return param_1;
  }
  local_res20 = param_2;
  uVar7 = FName::GetComparisonNameEntry(&local_res20);
  local_48 = 0;
  local_40 = 0;
  iVar4 = FNameEntry::GetNameLength(uVar7);
  iVar5 = MNP_OverrideOutput_WC((&PTR_u_Reserve_14622e850)[param_3 & 0xff]);
  if (local_40._4_4_ < iVar5 + 2 + iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
  }
  FName::ToString(&local_res20,&local_48);
  FString::ReplaceInline(&local_48,&DAT_14407de54,&DAT_14407d724,1);
  local_38 = (void *)0x0;
  local_30 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  pvVar1 = local_38;
  FGenericPlatformString::Memcpy(local_38,&DAT_14407dea4,4);
  uVar3 = local_40;
  if (((uint)local_30 != 0) && (iVar4 = (uint)local_30 + -1, iVar4 != 0)) {
    iVar5 = (int)local_40;
    lVar9 = (longlong)(int)local_40;
    iVar6 = (uint)((int)local_40 == 0) + (int)local_40 + iVar4;
    local_40 = CONCAT44(local_40._4_4_,iVar6);
    if (local_40._4_4_ < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,uVar3 & 0xffffffff);
    }
    _Dst = (void *)(local_48 + (lVar9 - (ulonglong)(iVar5 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar4 * 2);
    *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
  }
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  psVar2 = (short *)(&PTR_u_Reserve_14622e850)[param_3 & 0xff];
  local_38 = (void *)0x0;
  local_30 = 0;
  if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (psVar2[lVar9] != 0);
    uVar8 = (int)lVar9 + 1;
    local_30 = (ulonglong)uVar8;
    uVar10 = uVar8;
    if (0 < (int)uVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      uVar10 = (uint)local_30;
    }
    _Src = local_38;
    FGenericPlatformString::Memcpy(local_38,psVar2,(longlong)(int)uVar8 * 2);
    uVar3 = local_40;
    if ((uVar10 != 0) && (iVar4 = uVar10 - 1, iVar4 != 0)) {
      iVar5 = (int)local_40;
      lVar9 = (longlong)(int)local_40;
      iVar6 = (uint)((int)local_40 == 0) + (int)local_40 + iVar4;
      local_40 = CONCAT44(local_40._4_4_,iVar6);
      if (local_40._4_4_ < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,uVar3 & 0xffffffff);
      }
      pvVar1 = (void *)(local_48 + (lVar9 - (ulonglong)(iVar5 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,_Src,(longlong)iVar4 * 2);
      *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar1) = 0;
    }
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  FName::FName(param_1,local_48 + 0x10,1);
  if (local_48 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14075e730 FUN_14075e730 body=788 status=ok
// SIG undefined FUN_14075e730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14075e730(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  float *pfVar6;
  float fVar7;
  undefined1 auStack_488 [32];
  undefined1 *local_468;
  char local_458 [8];
  undefined8 local_450;
  undefined4 local_448;
  float local_440;
  float fStack_43c;
  float local_438;
  float local_430;
  float fStack_42c;
  float local_428;
  undefined8 local_418;
  undefined4 local_410;
  undefined1 local_408 [8];
  float local_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [912];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_488;
  FUN_142dc1ad0(local_3c8);
  if ((param_1[0xbd] != 0) &&
     (cVar3 = FUN_142dd0170(param_1[0xbd],param_3,local_3c8), cVar3 != '\0')) {
    local_458[0] = '\0';
    local_458[1] = 0;
    FUN_142dcce50(local_3c8,&local_450,local_458,local_458 + 1);
    if (local_458[0] == '\0') {
      *param_2 = local_450;
      *(undefined4 *)(param_2 + 1) = local_448;
      return param_2;
    }
  }
  lVar4 = FUN_142dddd00(param_3);
  if (lVar4 == 0) {
    FUN_142bbd1a0(param_1,param_2,param_3);
  }
  else {
    (**(code **)(*param_1 + 0x648))(param_1,local_3d8,local_3e8);
    uVar5 = FRotator::Vector(local_3e8,&local_418);
    FUN_142dce5a0(lVar4,&local_440,local_3d8,uVar5);
    lVar4 = param_1[0xbd];
    if ((((lVar4 != 0) && (*(char *)(lVar4 + 0x1a0) != '\0')) &&
        ((**(code **)(*param_3 + 0x610))(param_3,&local_440,&local_418),
        *(char *)(lVar4 + 0x1c8) != '\0')) && (*(char *)(lVar4 + 0x1f0) == '\0')) {
      fVar7 = (float)FUN_142c72910();
      local_438 = local_438 + fVar7;
    }
    if ((int)param_1[200] < 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)param_1[199];
    }
    lVar1 = param_1[0x91];
    if ((((lVar1 != 0) && (param_3 != (longlong *)0x0)) &&
        ((lVar4 != 0 && (cVar3 = UIndianaGameUserSettings::GetXAxisInverted(lVar4), cVar3 != '\0')))
        ) && ((((**(code **)(*param_3 + 0x308))(param_3,&local_430), local_430 != 0.0 ||
               (fStack_42c != 0.0)) || (local_428 != 0.0)))) {
      local_400 = local_428;
      lVar2 = param_3[0x2d];
      if (lVar2 == 0) {
        local_450 = _DAT_1468b5d90;
        local_448 = DAT_1468b5d98;
      }
      else {
        local_450 = *(undefined8 *)(lVar2 + 0x220);
        local_448 = *(undefined4 *)(lVar2 + 0x228);
      }
      local_3f0 = local_448;
      lVar1 = *(longlong *)(lVar1 + 0x168);
      local_3f8 = local_450;
      if (lVar1 == 0) {
        local_450 = _DAT_1468b5d90;
        local_448 = DAT_1468b5d98;
      }
      else {
        local_450 = *(undefined8 *)(lVar1 + 0x220);
        local_448 = *(undefined4 *)(lVar1 + 0x228);
      }
      local_410 = local_448;
      local_468 = local_408;
      local_418 = local_450;
      pfVar6 = (float *)FUN_14077be60(lVar4,&local_450,&local_418,&local_3f8);
      local_440 = local_440 + *pfVar6;
      fStack_43c = fStack_43c + pfVar6[1];
      local_438 = local_438 + pfVar6[2];
    }
    *param_2 = CONCAT44(fStack_43c,local_440);
    *(float *)(param_2 + 1) = local_438;
  }
  return param_2;
}



// FUNCTION 14075eaa0 GetHeight body=5 status=ok
// SIG undefined GetHeight(void)

undefined8 FHdrImageWrapper::GetHeight(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// FUNCTION 14075eaf0 FUN_14075eaf0 body=172 status=ok
// SIG undefined FUN_14075eaf0(void)

undefined8 FUN_14075eaf0(longlong *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_1[0xc4] != 0) && (*(longlong *)(param_1[0xc4] + 0x998) != 0)) {
    uVar2 = FUN_140778bd0();
    return uVar2;
  }
  lVar3 = FUN_142231800(param_1);
  if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x4cc) >> 1 & 1) != 0)) {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x150), lVar3 != 0)) {
      lVar4 = FUN_1407b4be0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return *(undefined8 *)(lVar3 + 0x138);
      }
    }
  }
  return 0;
}



// FUNCTION 14075eba0 FUN_14075eba0 body=73 status=ok
// SIG undefined FUN_14075eba0(void)

ulonglong FUN_14075eba0(undefined8 param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_3 + 0x6f8) != '\0') {
    fVar2 = *(float *)(param_2 + 0x220) - *(float *)(param_3 + 0x220);
    fVar1 = *(float *)(param_2 + 0x224) - *(float *)(param_3 + 0x224);
    return CONCAT44(*(float *)(param_2 + 0x224),fVar1 * fVar1 + fVar2 * fVar2) & 0x7fffffff7fffffff;
  }
  return 0x7f7fffff;
}



// FUNCTION 14075ebf0 FUN_14075ebf0 body=93 status=ok
// SIG undefined FUN_14075ebf0(void)

ulonglong FUN_14075ebf0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if ((uVar1 != 0) && (*(char *)(uVar1 + 0x6f3) != '\0')) {
    uVar3 = *(undefined4 *)(uVar1 + 0x224);
    uVar4 = *(undefined4 *)(uVar1 + 0x228);
    *param_2 = *(undefined4 *)(uVar1 + 0x220);
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    lVar2 = *(longlong *)(param_1 + 0x10);
    *param_3 = *(undefined4 *)(lVar2 + 0x6f8);
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 14075ec50 FUN_14075ec50 body=196 status=ok
// SIG undefined FUN_14075ec50(void)

ulonglong FUN_14075ec50(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  ulonglong in_RAX;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 local_28 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (((lVar2 == 0) || (*(char *)(lVar2 + 0x6f4) == '\0')) || (*(char *)(lVar2 + 0x6f2) != '\x02'))
  {
    uVar6 = in_RAX & 0xffffffffffffff00;
  }
  else {
    local_18 = *(float *)(lVar2 + 0x210);
    fStack_14 = *(float *)(lVar2 + 0x214);
    fStack_10 = *(float *)(lVar2 + 0x218);
    fStack_c = *(float *)(lVar2 + 0x21c);
    auVar3._4_4_ = -(uint)(*(float *)(lVar2 + 0x254) != fStack_14);
    auVar3._0_4_ = -(uint)(*(float *)(lVar2 + 0x250) != local_18);
    auVar3._8_4_ = -(uint)(*(float *)(lVar2 + 600) != fStack_10);
    auVar3._12_4_ = -(uint)(*(float *)(lVar2 + 0x25c) != fStack_c);
    iVar4 = movmskps((int)in_RAX,auVar3);
    if (iVar4 != 0) {
      *(float *)(lVar2 + 0x250) = local_18;
      *(float *)(lVar2 + 0x254) = fStack_14;
      *(float *)(lVar2 + 600) = fStack_10;
      *(float *)(lVar2 + 0x25c) = fStack_c;
      puVar5 = (undefined8 *)FQuat::Rotator(&local_18,local_28);
      *(undefined8 *)(lVar2 + 0x260) = *puVar5;
      *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar5 + 1);
    }
    uVar1 = *(undefined4 *)(lVar2 + 0x268);
    *param_2 = *(undefined8 *)(lVar2 + 0x260);
    *(undefined4 *)(param_2 + 1) = uVar1;
    uVar6 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x10) >> 8),1);
    *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x6f8);
  }
  return uVar6;
}



// FUNCTION 14075ed20 FUN_14075ed20 body=61 status=ok
// SIG undefined FUN_14075ed20(void)

undefined8 * FUN_14075ed20(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 local_res10 [24];
  undefined1 local_18 [16];
  
  cVar1 = FUN_14075e360(param_3,param_2,local_18,local_res10);
  if (cVar1 == '\0') {
    *param_2 = DAT_14622e7f0;
    *(undefined4 *)(param_2 + 1) = DAT_14622e7f8;
  }
  return param_2;
}



// FUNCTION 14075ed60 FUN_14075ed60 body=64 status=ok
// SIG undefined FUN_14075ed60(void)

undefined8 * FUN_14075ed60(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 local_res10 [24];
  undefined1 local_18 [16];
  
  cVar1 = FUN_14075e360(param_3,local_18,param_2,local_res10);
  if (cVar1 == '\0') {
    *param_2 = DAT_14622e7d0;
    *(undefined4 *)(param_2 + 1) = DAT_14622e7d8;
  }
  return param_2;
}


